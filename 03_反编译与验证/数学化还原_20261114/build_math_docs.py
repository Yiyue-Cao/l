from pathlib import Path
import json,hashlib,re
R=Path(__file__).resolve().parent;B=R.parent
F=json.loads((B/'strategy_functions.json').read_text())
intro={
'comm2':'外部信号 → 波动/半价差分组与 K1 → 成本调整后的四阈值 → 受仓位约束的主动订单。没有独立 LOW 四阈值、阶段参数覆盖和横截面金额分配。',
'comm3':'在 comm2 型方向决策上增加 LOW 独立四阈值、LOW 的 skip/maker 路由以及挂单维护。LOW 阈值是可选值，缺省与显式零不同。',
'comm3_1':'保留 comm3 的 LOW maker 体系；HIGH 主动幅度新增信号超额、tanh 放大和半价差覆盖上限。这里的基础量是价格的相对半价差，不是买卖盘数量不平衡。',
'comm3_2':'在 comm3_1 的 HIGH 报价函数中增加大半价差提前返回分支；这个分支返回调用者给定值，不等于函数自己取消订单。',
'comm4':'在 comm3_2 的分组、触发和报价之上，以外部 watcher 收益驱动三阶段有限状态机，阶段参数逐字段覆盖全局参数。',
'comm4_1':'在 comm4 三阶段体系中增加升级所需交易数门槛，并对主动订单增加报价可覆盖的对手盘口累计量约束。',
'comm5':'三层决策叠加：行情 LOW/HIGH 分组、watcher 收益阶段、历史日收益横截面金额倍率。三个状态改变的对象不同，不能统一解释成一个信号缩放系数。',
'comm_maker1':'商品信号驱动的双边报价与数量计算器。PV4 使用带状信号触发，数量函数显式拆分新增敞口和反向仓位平仓；它不等同于 comm3 的 LOW 专用 maker 分支。',
'comm_mock':'保留 comm3_2 型实际下单路径，同时积累订单回报并发布收益、成交金额、持仓和持仓成本状态，供其他策略观察。mock 不是空策略。',
'lf4':'外部信号先建立带价格区间、期限和次数上限的 TargetTaskStatus，后续信号在无在途订单时尝试剩余任务量；行情回调更新已完成量。',
'sm1':'先用信号带判定开平动作，再将动作相对阈值的超额与半价差比较，选 Taker、Maker 或 Mid，最后按盘口和仓位限制数量。',
'sm2':'用正态分布成交概率与报价收益构建买卖效用，分别数值求解最优报价，再比较买卖效用并生成开平动作。',
'sm3':'使用主信号 A 决定动作，附加信号 B 决定被动报价如何偏移或跳过的一次性决策版本。B 不是简单乘到 A 上。',
'sm3_1':'将 A/B 协作扩展为显式门控状态机：B 缓存寿命、A 等待 B、主动否决、被动跳过/退档、撤单最小驻留分别有独立参数。',
'sm4':'在 sm1 报价体系上并行维护多个阈值候选的虚拟开平配对，按配对时长中位数与目标时长的距离选择四阈值。',
'sos5':'读取 watcher 发布值，在三个 section 之间切换；section 可携带不同合约、信号和交易模式。支持固定人民币门槛或四股指篮子名义金额派生门槛。',
'sos6':'在三 section 调度上增加四阈值平移：外部 watcher 阈值相对于 section1 原值的差，同步加到所有 section。',
'tm5':'阈值触发的主动交易腿，同时把符合条件的订单回报收益放入毫秒滚动队列并发布 rolling_pnl。',
'tm6':'tm5 的主动交易与滚动收益发布，加上与 sm4 同构的信号配对时长选阈值机制。'}
COMMON=r'''
## 记号、输入与可复现边界

设买一价为 $b$，卖一价为 $a$，中价 $m=(a+b)/2$；持仓 $q>0$ 表示多仓，$q<0$ 表示空仓；合约乘数为 $M$。价格步长与数量步长分别为 $\tau_p,\tau_v$。百分比、比例与 bp 不混用：$1\mathrm{bp}=10^{-4}$。`round` 表示本库调用的浮点四舍五入（中点远离零），不是 Python 的 ties-to-even。

外部信号、账户持仓、盘口和交易时间通过 SDK 输入。文中“输入主值/次值”只指信号事件的数值槽；未取得上游预测器源码时，不能把它改名为某个特定 alpha 或宣称这里重新训练了模型。本文公式首先针对有限实数、正价格与正合约乘数；NaN/Inf 的硬件比较分支不应拿普通实数代数擅自合并。

确定性分三层：**机器码实测**表示下面列出的原始 ELF 函数通过合成输入检查；**静态确定**表示已从本库反编译、常量或指令确定控制关系；**尚未闭合**表示明确缺少原始配置、SDK 语义或逐事件状态验收。配置缺省值不代表历史实验启用了该值。

## 四动作不是四个可交换判断

阈值向量按内存顺序定义为

$$T=(L_o,L_c,S_o,S_c).$$

有限输入的分类器严格按以下顺序执行：

$$A(x,T)=\begin{cases}
0\ (开多),&x\ge L_o,\\
3\ (平空),&x<L_o\land x\ge S_c,\\
2\ (开空),&x<L_o\land x<S_c\land x\le S_o,\\
1\ (平多),&x<L_o\land x<S_c\land x>S_o\land x\le L_c,\\
4\ (无动作),&\text{其余}.
\end{cases}$$

先判断开多，再平空，再开空，最后平多。即使配置了交叠阈值也不排序、不纠正。例如四阈值全为零且 $x=0$，结果是开多，不是无动作。动作确定后还要受仓位、盘口、撤单与账户接口约束；“开多”可能先买回空仓，不能把整个订单量记作新增多仓。

错误/无结果与无动作也不能合并：若触发器返回错误变体，调用者走错误/提前返回分支；枚举 4 是成功计算出的“不交易”。
'''
POINT=r'''
## 点触发的精确公式

调用点触发前，当前信号已写入触发器 `+0x38`，四阈值位于 `+0x40,+0x48,+0x50,+0x58`。令成本倍率为 $\alpha_c$，传入价差尺度为 $h$，PV1 的成本项是

$$c=\alpha_c|h|,\qquad x=\begin{cases}\max(s-c,0),&s>0,\\\min(s+c,0),&s\le0.\end{cases}$$

输出是 $(A(x,T),1)$，第二项是固定票值 1。这里先扣成本、向零截断，再比较阈值；不能改成直接把全部阈值平移，也不能把正负信号都写成 $s-c$。

例如 $T=(3,-1,-3,1)$，$s=4,c=1$ 得 $x=3$，触发开多；$s=-4,c=1$ 得 $x=-3$，触发开空；$s=0.5,c=1$ 得 $x=0$，落在无动作区。例子是合成边界说明。
'''
DYNAMIC=r'''
## 持仓年龄动态阈值

令 $h_p$ 为传入的持仓秒数，$t_0,t_1,\Delta$ 分别对应 `dyn_score_position_ts_threshold_s`、`dyn_score_max_position_ts_s`、`dyn_score_delta_score`。

$$d=\begin{cases}
0,&t_0<0\lor t_1<0\lor h_p<t_0\lor |\Delta|\le10^{-9},\\
\left|\Delta\min\left(\frac{h_p-t_0}{\max(t_1-t_0,10^{-6})},1\right)\right|,&\text{其余}.
\end{cases}$$

$$T'=(L_o-d,L_c+d,S_o+d,S_c-d).$$

四个门槛均变化，且负的 $\Delta$ 也产生非负 $d$。$t_1\le t_0$ 不会报错，而使用 $10^{-6}$ 的分母下限。$h_p=t_0$ 时增量为零；超过终点后饱和。以上是独立 `dynamic_threshold` 的行为，不能套到 LF4/TM5/TM6/SoS6 的内联旧逻辑上。
'''
ROLL=r'''
## 时间窗口触发与投票

每个窗口维护 $(t_i,s_i)$ 队列及 $N,\sum s_i,\sum s_i^2,\sum_{s_i>0}s_i,\sum_{s_i\le0}s_i$。插入当前点后，删除所有 $t-t_i>W$ 的旧点；恰好位于 $t-W$ 的点保留。更新按加减旧值进行，不能随意改为重新求和后声称浮点逐位等价。

$$\mu=\frac{\sum s_i}{N},\qquad \sigma=\sqrt{\max(\sum s_i^2/\max(N,1)-\mu^2,0)}.$$

均值触发把 $\mu$ 送入四阈值比较。Sharpe 触发使用 $\mu/\sigma$，$|\sigma|\le10^{-6}$ 时取零；这是信号窗口统计量，不是策略收益夏普。RSI 使用信号正负值的累计量，令 $P=\sum_{s_i>0}s_i,N_-=\sum_{s_i\le0}s_i$：

$$R=\begin{cases}100-\frac{100}{P/|N_-|+1},&|N_-|>10^{-6},\\50,&\text{其余}.\end{cases}$$

特别注意：`update` 写入和、平方和和均值，但不会自动重算所有版本的 `std_cache`。`WindowsStdTrigger` 读的是缓存槽，不能无条件用上式即时标准差替代；Sharpe 分支另有重算行为。信号带同样需要保留缓存的实际更新顺序。

分位数按有序观测的整数下标取值，使用 $\lfloor qN\rfloor$ 与 $\lfloor(1-q)N\rfloor$，不是线性插值；端点越界可返回错误。多窗口先形成各自候选动作，再计票，最高票比例必须**严格大于** `vote_rate`。并列候选涉及 HashMap 遍历，不应凭业务偏好增加“多头优先”或“平仓优先”。本节是对应窗口函数的静态说明；本轮新增的全库实测不包括每一种窗口的完整状态序列。
'''
VOL=r'''
## 波动/半价差统计不是订单簿不平衡

此库 `VolSpreadRatio::update` 的三项浮点输入是毫秒时间、买价、卖价。短窗口 $W_v$ 保存中价，长窗口 $W_r$ 保存收益变化与半价差样本。

$$m_t=(a_t+b_t)/2,\quad H_t=\frac{\operatorname{round}(10^5(a_t-b_t)/(a_t+b_t))}{10}.$$

短窗口淘汰条件为 $t-t_i>W_v$。不足两个点、最旧点覆盖时长 $<W_v/2$ 或旧中价不为正时，返回 `None`，不能把它当成零。满足条件后：

$$r_t=\frac{\operatorname{round}(10^5(m_t/m_{old}-1))}{10},\quad V_t=\frac{\operatorname{std}_{pop}(r_i)}{\operatorname{mean}(H_i)}.$$

只有收益样本数大于 1 且平均半价差为正才返回 `Some(V_t)`。两个队列采用同样的左边界保留规则。此式分子是跨短窗口的中价收益变化标准差，分母是半价差均值；不是逐 tick 成交量、振幅、买卖委托数量比，也不是成交额。

有限值路径的分组条件为

$$LOW=\text{use\_dynamic\_volspread\_ratio}\land\operatorname{Some}(V_t)\land V_t\le\text{split\_high\_low\_ratio\_threshold}.$$

其余为 HIGH。关闭动态统计、暖启动返回 None、收益样本不足，都明确回退 HIGH；等于分界值属于 LOW。这是逐库主回调的分支证据，不是对 None 载荷作数值比较。

K1 表的键为 SDK `signal_parameter_id` 返回的信号参数 ID，**不是品种名**。ID 获取失败时使用 0；在选定 LOW/HIGH 表中查不到键时，K1 回退 1。本轮分别初始化并读取九个库的内嵌常量表，每库 LOW 188 项、HIGH 183 项；九份表当前内容一致，这是逐库提取后的比较结论，并非依据版本名假设。完整数值见本页附表。
'''
PV4=r'''
商品信号模式还有两条独立路径：`PV2` 使用事件次值，`PV4` 对主值作 $\operatorname{sign}(s_0)|s_0|^{1/K_1}$，通常路径使用 $s_0\cdot\text{pv1\_alpha}$。模式名大小写敏感；未匹配的字符串落入默认路径。PV4 点触发的成本改为

$$c=(|h|+\text{fee\_bp})\alpha_c.$$

原始函数浮点实参顺序为 `cost_alpha, fee_bp, spread_bp`；错误交换费用与价差会改变负值和绝对值运算，不能只依据自动反编译的参数名。
'''
HIGH=r'''
## HIGH 主动幅度的可计算定义

令信号为 $s$，相应动作门槛为 $\theta$，传入半价差 bp 为 $H$，上限倍数为 $U$，覆盖系数为 $k$。函数的 $a,b$ 是价格，不是盘口量。

$$r_0=\max\left(\frac{a-b}{a+b},0\right),\quad e=\max(|s|/|\theta|-1,0),$$
$$u=1+(U-1)\tanh(e/2),\quad v=(|s|-|\theta|)k/H,$$
$$r=r_0\max(\min(v,u),0).$$

控制顺序同样属于公式：若 $a+b\le0$ 返回 0；若 $H\le0$、$U\le1$ 或 $|\theta|<10^{-9}$，返回 $r_0$。仅其他情况下计算 $e,u,v$。因此 $s=\theta$ 时未必返回基础幅度，正常计算路径的覆盖项为零。此函数输出价格比例，之后仍可能被调用者的基准幅度、最大幅度和步长处理；不能把它的结果直接当成成交比例。
'''
LOW=r'''
## LOW 路由、maker 价格与撤单

四个 `low_*_threshold` 都是 `Option<f64>`：缺省 `None` 继承相应普通阈值；`Some(0)` 是真正的零，不等于继承。`low_action` 的字符串分支区分默认主动路径、`skip` 和 `maker`。它控制执行方式，不删除该时点已经发生的统计更新。

comm 型 maker 的未取整价格是

$$p_b=\min(b+n\tau_p,a-\tau_p),\qquad p_s=\max(a-n\tau_p,b+\tau_p),$$

其中 $n=\text{maker\_ticks\_inside}$。这是按价格步长计算的公式，与 SM1/SM4 内部硬编码 0.2 的报价函数不同。

撤单集合分两遍形成：先撤相反买卖方向，再撤同向但相对目标过时的订单。令 $R=\text{maker\_cancel\_range\_levels}\cdot\tau_p$，买单在 $p<p_b-R$ 时撤，卖单在 $p>p_s+R$ 时撤；等号保留。已经请求撤销的 ID 去重，不重复计入仍然存活的订单。同方向仍有存活在途单时，新单受阻。撤单请求并不代表成交或撤单回报已经完成。

maker 盘口数量尺度取本方前三个有效价格档的数量均值；无效价格档不作为有效分母。正的 maker 数量上限进一步截断，非正值是否关闭该上限由所在调用分支决定，不能与负风险额度“无限大”的规则混同。
'''
FILL=r'''
## 报价可覆盖的主动盘口数量

`taker_fillable_cum` 从对手方一档开始累计，最多五档。一档只要求价格为正，就计入其数量；**一档不再比较限价**。二至五档要求价格为正且买单 $p_{limit}\ge a_j$、卖单 $p_{limit}\le b_j$，遇到第一个不合格档即停止，不能跳过该档继续数后面的档。

$$Q_{book}=q_1+\sum_{j=2}^{J}q_j,$$

$J$ 是上述连续合格前缀末端；一档无效则返回零。它是策略数量辅助函数，不是撮合引擎，不证明这些数量最终都成交。
'''
BAND=r'''
## 信号带触发：不能替换为普通信号扣成本

触发器除最后信号 $s$ 外，还保存 `+0x80` 的 $B_+$ 和 `+0x88` 的 $B_-$。`update_score` 的赋值为

$$B_+=s+k_+\sigma_c,\qquad B_-=s-k_-\sigma_c,$$

同时另存 $\mu+k_+\sigma_c$ 和 $\mu-k_-\sigma_c$。$\mu,\sigma_c$ 来自被选窗口；$\sigma_c$ 明确是缓存字段，不能无条件假定本次回调重算了真实标准差。指定窗口键缺失或没有窗口时，相关赋值分支不发生；没有指定键时使用 HashMap 中取到的窗口，不得擅自解释为最短窗口。

成本项为 $c=\min(\alpha_c|h|,c_{cap})$。触发值是

$$x=\begin{cases}\max(B_-+c,0),&s>0,\\\min(B_+-c,0),&s\le0.\end{cases}$$

再返回 $(A(x,T),1)$。注意正信号分支是**下界加成本**，负信号分支是**上界减成本**，与普通 PV1 的方向不同。这不是本文的经济学设计，而是本库原始函数的条件和加减号。若把 $B_\pm$ 直接设为 $s$，也不能据此删掉 `min` 成本上限或改变加减号。
'''
SMQUOTE=r'''
## Taker / Maker / Mid 的报价分段

令输入两侧信号值为 $s_-,s_+$，并定义动作超额（先四舍五入至 0.01）：

$$E=\operatorname{round}_{0.01}\begin{cases}s_+-L_o,&A=0,\\L_c-s_-,&A=1,\\S_o-s_-,&A=2,\\s_+-S_c,&A=3.\end{cases}$$

报价函数内部半价差（四舍五入至 0.1 bp）为

$$H=\operatorname{round}_{0.1}\left(\frac{a-b}{m}\frac{10^4}{2}\right).$$

若 $E>H$，类型为 Taker(0)，$r=\max(r_{base},\min(r_{max},10^{-4}(E-H)))$，买价 $a(1+r)$、卖价 $b(1-r)$。先 `min` 后 `max`，基准值大于上限时最终可以超过所谓上限，不能调换顺序。

若 $E\le H$ 且 $E\le0$，类型为 Maker(1)，本库实测**买卖两边都返回**

$$p=\min(b+0.2,a-0.2).$$

0.2 是 ELF 中的常量，不是传入 tick；卖出分支也执行 `min`，不能按常见 maker 直觉改成 `max`。当价差小于 0.4 时该辅助函数可能报到买一以下，后续步长与订单接口才处理最终请求。

若 $0<E\le H$，类型为 Mid(2)，$p=m$。因此在等号 $E=H>0$ 时仍是 Mid，不是 Taker。以上为 SM1/SM4 原始函数直接调用比对通过的分段；不套用到带附加 B 分支的 SM3/SM3.1。
'''
SMVOL=r'''
## Rust 复合返回值与盘口数量上限

`get_quote_vol` 的 `RAX=1` 表示存在返回值，真正数量从 `XMM0` 返回。设原请求为 $v$，传入 cap 为 $C$，布尔开关为 $g$：

$$V(v,Q,g,C)=\begin{cases}
v,&Q=0,\\
\operatorname{sign}(v)\min(|v|,C),&Q\in\{1,2\}\land g,\\
v,&Q\in\{1,2\}\land\neg g,\\
0,&Q=3\ (Skip).
\end{cases}$$

这解释了为何反编译 C 中连续出现 `return 1` 不能推断每次只下一手。随后 `apply_book_vol_cap` 的主动分支使用报价覆盖的对手五档累计量；当 `book_vol_cap=false` 时该盘口 cap 视为无限，但正的 `max_single_taker_vol` 仍可截断。被动类型 1/2 在 `book_vol_cap=false` 时直接返回原请求，因而该函数内部的 maker 盘口 cap 与进一步 maker cap 都不会执行；启用时采用本方前三档有效价格数量均值，并结合正 maker cap 限制。最后保留买卖符号并按数量步长处理。
'''
PHASE=r'''
## 三阶段状态机及覆盖顺序

阶段编码 $0,1,2$ 分别表示 P1、P2、P3。记 watcher 收益为 $z$，门槛为 $e_2,x_2,e_3,x_3$。正常模式：P1 在 $z\ge e_2$ 时到 P2；P2 先判断 $z\ge e_3$ 到 P3，否则 $z<x_2$ 回 P1，否则留 P2；P3 在 $z<x_3$ 时回 P2，否则留 P3。单次调用最多移动一个相邻阶段。

`invert_phase=true` 时：P1 在 $z\le x_2$ 时到 P2；P2 先判断 $z\le x_3$ 到 P3，否则 $z>e_2$ 回 P1，否则留 P2；P3 在 $z>e_3$ 时回 P2，否则留 P3。它不是简单对收益取负，而是切换了进入/退出门槛的使用位置。

每阶段 15 个可覆盖字段包括普通四阈值、净仓/增仓手数与金额、HIGH 半价差开关、主动倍数/覆盖/跳过门槛、基准/最大主动比例、LOW 动作。对每个字段：

$$p_{eff}=\begin{cases}p_{phase},&\operatorname{Some}(p_{phase}),\\p_{global},&\operatorname{None}.\end{cases}$$

LOW 四阈值、平仓手数与金额上限不在这 15 个覆盖字段内。不要把整个全局配置结构直接替换成阶段结构，也不要把缺省 Option 的未初始化载荷当成零。阶段参数覆盖后，仍要进入实际分组、动作、报价及数量计算。
'''
TREE=r'''
## 阈值候选树、虚拟开平配对与中位数选择

这是对信号阈值的虚拟配对统计，不是对实际成交订单计算持仓收益。每个候选 $j$ 和合约 $c$ 保存独立状态 $U$（未开）、$L(t_o,s_o)$（虚拟多）、$S(t_o,s_o)$（虚拟空）。未开状态先判断 $s\ge L_o$ 建立多记录，否则判断 $s\le S_o$ 建立空记录；已有多记录在 $s\le L_c$ 时闭合，已有空记录在 $s\ge S_c$ 时闭合。先处理已有记录的闭合，再执行未开状态检查，因此同一输入可能闭合后重新建立一条记录；不能擅自加“本事件不再开”的限制。闭合记录进入毫秒滚动队列，记录开闭时刻和信号值；未闭合记录不能伪装成零时长样本。

候选按配置 $\delta=\text{score\_thresholds\_delta}$、$n=\text{score\_thresholds\_num}$ 建立。除原始 $T_0$ 外，每个 $i=1,\dots,n$ 生成两组，经本库 round 精度处理：

$$T_{i,+}=(L_o+i\delta,L_c-i\delta,S_o-i\delta,S_c+i\delta),$$
$$T_{i,-}=(L_o-i\delta,L_c+i\delta,S_o+i\delta,S_c-i\delta).$$

正向组同时拉大开平跨度，负向组缩小跨度；不是简单给全部阈值加同一个数。键 0 为原始组，后续正负组按插入顺序获得正整数键。

令窗口中完成配对的时长集合为 $D_j$。空集返回 None；排序后奇数样本取中间项，偶数样本取中间两项平均。目标时长为 $H_*$，选择

$$j^*=\arg\min_{j:D_j\ne\varnothing}|\operatorname{median}(D_j)-H_*|.$$

实际实现有额外门槛：先查键 0；键 0 本身没有有效中位数时直接回退原始阈值，**不会**继续寻找其他已经有样本的候选。键 0 不存在则进入 unwrap 错误路径。键 0 有样本才遍历候选，用严格更小 `<` 更新最优，因此同距离不会覆盖先遇到的键。BTreeMap 的有序遍历与 HashMap 的随机遍历不可混淆。

更新、选择、实际交易是三个状态层次。候选得到的虚拟配对中位数接近目标，不表示真实成交平均持仓时长等于目标；盘口、在途订单、保证金和成交失败都可造成差异。此部分已追到候选构建、update、median 与选择函数；完整多合约事件回放仍未验收。
'''
RISK=r'''
## 数量、金额与订单请求的层次

所有数量计算都必须区分当前净持仓 $q$、本次有符号请求 $v$、在途预占和最终成交量。对使用金额上限的分支，金额换算以实际选择的订单价格 $p$ 和合约乘数 $M$ 进行，数学上为 $A/(pM)$；原指令常按 `(A/p)/M` 连续除法，逐位复现不能随意改为先乘分母。

负的风险额度在相应限额分支转换为 $+\infty$；零是真实约束。`max_single_add_vol/amt` 约束新增部分，`max_single_net_vol/amt` 约束方向净敞口，`max_single_close_vol/amt` 约束旧反向仓位的平仓部分。开仓动作可以把“新方向允许增量”和“允许平掉的反向旧仓”相加；纯平仓动作不应允许越过零仓继续反向开仓。具体分支中的 `max(amount/(pM),1)` 会形成至少一手的中间额度，但最后仍受其他 cap 和数量步长限制。

实际订单前还有 SDK `margin_filter`、`impact_block_check`、交易时段、允许合约/信号和在途订单检查。它们是可见的调用边界，不能用“所有条件都通过”代替未知历史账户状态。价格与数量最终经过 `round_with_step_f64`；本文保留函数调用及 mode，而不把所有 mode 都武断解释为向下取整。IOC、IAP 或带 target 的 IAP 请求如何被撮合，属于通用引擎和账户模型。

因此复现输出应先比较 `(动作、报价类型、请求价、请求量、撤单ID序列、状态更新)`；仅比较最终收益曲线无法证明这些分支相同。
'''
UNIQUE={}
UNIQUE['comm2']=r'''
## comm2 特有的组织方式与差异

comm2 的顶层参数是 35 项；本轮 35 项均通过真实 TOML 解析定位。其默认 `signal_windows_s=[]`、四阈值与若干金额上限为零，所以“缺省能解析”不等于“缺省有合理交易行为”。先按参数表确定一个完整配置，才能讨论具体数值策略。

本库有商品波动/价差状态和 PV4/K1 变换，但没有 `low_long_open_threshold` 等四个独立 LOW 字段。分组存在并不推出 LOW 自动进入 maker。与 comm3 对照时，必须保持输入信号与账户状态相同，再比较是否存在独立 LOW 门槛和挂单流程；不能仅凭版本号认定 comm3 更激进。

主动报价从对手最优价出发：买侧按 $a(1+r)$，卖侧按 $b(1-r)$ 形成候选，然后调用价格步长处理。`score_taker_rate_alpha`、`taker_rate_baseline`、`max_taker_rate` 决定调用者如何形成 $r$；不能把 comm3.1 的 tanh 函数移植到此库，因为此库没有该独立函数。

本库还保留持仓年龄驱动的挂单超时参数组；这是订单存活控制，不是信号窗口长度。`touch_gate` 另约束同一最优盘口环境下的重复触发，并有独立毫秒超时。这两套时间状态与以秒为单位的动态阈值需要分别保存。

尚未闭合的复现点是完整 SDK 时间/账户返回值与 touch gate 的逐事件轨迹；已确定的点触发、动态阈值和波动/价差状态公式均在本页实测表列出。
'''
UNIQUE['comm2']+=r'''

本库主动比例的普通增幅路径可以进一步明确。令 $\alpha_r$ 为 `score_taker_rate_alpha`、$r_b$ 为基准比例、$r_m$ 为最大比例、$\theta_A$ 为动作对应门槛：

$$r=\begin{cases}\min(r_m,r_b+\alpha_r\max(|s/\theta_A|-1,0)),&|\alpha_r|>10^{-6}\land|\theta_A|>10^{-6},\\r_b,&\text{其余}.\end{cases}$$

未进入增幅分支时直接保留基准，不再强制与最大比例取 min；负的非零 $\alpha_r$ 也能进入，不应私自截成非负。买/卖候选价分别 $a(1+r),b(1-r)$ 后调用步长函数。

动态挂单时限为 $W_0$，除非 $h_p\ge t_0,t_0\ge0,t_1\ge0$ 同时成立；成立时使用 $W_0+\min((h_p-t_0)/\max(t_1-t_0,10^{-6}),1)\Delta W$。这是订单毫秒时限，输入持仓年龄和两个控制时点以秒计。

Touch gate 保存某合约的买一、卖一和触发时刻。行情回调中两侧价格都与缓存精确相等且不是 NaN 时保留门控；任一变化则删除缓存。信号回调遇到现有门控时，如果超时参数非正则继续阻止；超时为正且经过毫秒数严格小于该值也阻止；达到等号或超过则删除门控后继续。负/零超时不表示“立即放行”。
'''
UNIQUE['comm3']=r'''
## comm3 相对 comm2 的新增状态

本库增加 LOW 四个 Option 阈值、LOW 动作字符串、maker 挂单最长等待、盘口量 cap、内插 tick 数和撤单范围。LOW 的独立阈值在缺省时继承普通门槛；配置层不能把缺失当成零。与 comm2 使用相同普通阈值时，也可能因为 LOW 参数出现而产生完全不同的订单。

执行链可以写为：`当前分组 → 选普通/LOW阈值 → 持仓年龄调整 → 点/窗口触发 → 风险过滤 → LOW动作路由 → maker或主动报价 → 撤单/在途检查 → 数量与步长 → 请求`。其中统计更新、阈值更新与订单失败不是一件事：拒单不意味着将窗口样本回滚。

本库不含 comm3.1 的 `high_taker_rate` tanh 核心；HIGH 报价不能使用后版本新增的覆盖项。本库也不含收益阶段机和横截面排名。它与 comm2 最本质的差别是行情组可以改变“怎样执行”，而非仅改变某个阈值常数。
'''
UNIQUE['comm3_1']=r'''
## comm3.1 的边界与例子

此版本 HIGH 函数接收 7 个浮点实参，没有后续版本的 `taker_skip_half_spread_bp` 与提前返回实参。$U=1$ 会直接退回基础半价差比例；$U>1$ 才进入双重 cap。若 $|s|<|\theta|$，覆盖项可能为负，最外层截断将幅度置零。

例如 $a=100.1,b=99.9,H=10,\theta=2,s=4,U=3,k=1$：$r_0=0.001$，$e=1$，$u=1+2\tanh(0.5)$，$v=0.2$，因此返回 $0.0002$。虽然设置最大放大倍数 3，这一例子真正生效的是成本覆盖 cap 0.2。

该函数改变主动价格偏移，不直接决定手数、成交概率或是否下单。LOW maker 仍使用另一套报价和撤单规则；不能将 HIGH 的 $r$ 套在 LOW maker 的 tick 内插公式上。
'''
UNIQUE['comm3_2']=r'''
## comm3.2 新增的提前返回

此版 HIGH 函数扩为 9 个浮点实参。先检查 $a+b\le0$；随后若

$$S_{skip}>0\ \land\ H>S_{skip},$$

立即返回第九个实参 $r_{fallback}$；恰好等于 $S_{skip}$ 时不跳过。该检查发生在 $H\le0$、倍数与小阈值保护之前。`skip` 是参数名，但函数并不发撤单、不修改数量，也不返回“无动作”枚举；调用者如何使用返回值必须保持。

例如设置 $S_{skip}=5$、$r_{fallback}=0.123$，$H=5$ 仍按一般公式计算，$H=5.0001$ 直接返回 0.123。这个返回值可以非零，因此把“大价差跳过”翻译为“必定不下单”是错误的。

其余 LOW 阈值、maker 内插、挂单超时和仓位 cap 与本库自身代码一起执行。与 comm_mock 的顶层字段集合一致不意味着回调状态相同；comm_mock 额外维护订单收益和发布指标。
'''
UNIQUE['comm4']=r'''
## comm4 的阶段输入与实际作用

`enable_phases` 决定是否使用阶段流程；`watcher_strategy_name` 与 `watcher_account_name` 指向外部观察对象。该对象的发布收益是阶段状态输入，不是本库直接把当前净值送入阶段函数。`next_phase` 本身只读取传入收益、当前阶段和门槛，并不查询市场或撮合订单。

此版没有 `min_trades_for_upgrade`。满足收益门槛即可升级，不额外要求成交数。初始阶段与禁用阶段的行为应从 factory/on_begin 和调用分支保持，不能因为缺省 `enable_phases=false` 就删除阶段支持。

每次阶段迁移先得到新阶段，再按每个 Option 字段选有效参数。LOW 四阈值不在阶段覆盖结构中，所以改变 `phase2.long_open_threshold` 不等于改变显式设置过的 `low_long_open_threshold`。相反，当 LOW 门槛原来是 None 时，它的回退关系会使普通门槛改变影响 LOW 路径。

本轮对三阶段、正反模式、四个收益边界以及边界两侧都直接调用原始机器码核对。完整 watcher 发布/读取时序没有做引擎级回放，因此不能宣称历史配置在某一日必然处于 P2 或 P3。
'''
UNIQUE['comm4_1']=r'''
## comm4.1 的交易数升级门槛

令 $n_{obs}$ 为调用者传入的观察交易数，$n_{min}$ 为 `min_trades_for_upgrade`，增加

$$G=(n_{obs}\ge n_{min}).$$

P1→P2、P2→P3 需要原收益条件与 $G$ 同时成立；P2→P1、P3→P2 不受 $G$ 限制。反向阶段模式也遵循“只限制升级”。例如处于 P2，收益达到 P3 门槛而 $G=false$，不能升级；若同时跌破退出 P2 的门槛，仍然可以回 P1。

交易数使用浮点比较，不在 `next_phase` 内重新统计订单。不能把下单请求数、成交手数或交易日数任意代入 $n_{obs}$。阶段函数的 360 个边界案例已单独通过。

与 comm4 相比，本库新增 `taker_fillable_cum`：主动报价形成后，再限制可覆盖的对手盘口量。这个函数一档不比较限价、后续档按连续前缀截断的细节已经实测，不宜用常见“把所有限价内档位加总”的实现代替。
'''
UNIQUE['comm5']=r'''
## comm5 的阶段金额倍率与 XS 排名

comm5 的阶段升级同样要求 $n_{obs}\ge\text{min\_trades\_for\_upgrade}$，降级不要求。除阶段 Option 覆盖外，还有 `phase2_size_mult/phase3_size_mult`：阶段倍率严格为正时，净金额上限以**全局**净金额上限为基数重算，而不是继续乘阶段已经覆盖过的绝对净金额。

设全局净金额 $N_0$、阶段有效净金额 $N_s$、当前阶段倍率 $k_s$、XS 倍率 $x$，则

$$\widetilde N=\begin{cases}N_0,&k_s>0\land N_0<0,\\k_sN_0,&k_s>0\land N_0\ge0,\\N_s,&k_s\le0,\end{cases}\qquad
N_{final}=\begin{cases}\widetilde N,&\widetilde N<0,\\x\widetilde N,&\widetilde N\ge0.\end{cases}$$

传入的其他金额上限 $A$ 则用 $A_{final}=A$（$A<0$）或 $xA$（$A\ge0$）。因此负值无限额在 XS 倍率为零时仍为负值，不转成零；不能把“XS skip”理解为阻止所有平仓。

横截面评分只使用 `xs_date` 以前的可用日期，最多 `ew_lags` 个；对最近到最旧的可用日用 $w_i=2^{-i/h}$，$h=\text{ew\_half\_life\_days}$。若开启正的收益截尾 $C$，先 $p'_i=\min(\max(p_i,-C),C)$，再按可用权重形成指数加权评分。缺失收益不自动补零。

品种键由合约名去 ASCII 数字后缀，再去末尾下划线。按评分排名，顶组数 $\lceil Nq_3\rceil$、较宽顶组数不小于顶组、底组数 $\lceil Nq_b\rceil$；对应倍率由 `xs_mult3/xs_mult2/xs_mult_skip` 提供。池太小、划分冲突或其他保护分支会回退，不能按名称推断底组必定禁止成交。

三层状态的组合顺序是“阶段参数/金额覆盖 → XS 金额缩放 → 动作对应数量约束”，信号本身不因 XS 排名直接乘倍率。历史文件是否加载以及当日实际排名需要明文配置和该文件内容；本轮解析探测强制 `enable_xs=false`，避免把读取外部收益文件混入配置隔离实验。

此前 comm5 已有单独机器码验证资料；本页另列本轮新验证数量，不把旧 comm5 结果冒充其他库通过。XS 排名和多合约订单事件的完整等价性仍没有验收。
'''
UNIQUE['comm_maker1']=r'''
## comm_maker1 的带状 PV4 与目标数量

本库 PV4 带触发沿用“正信号用下界、负信号用上界”的结构，但成本为

$$c=\min((|h|+f)\alpha_c,c_{cap}),$$

其中 $f$ 是手续费 bp。与普通商品 PV4 相比，不是直接对原始 $s$ 向零收缩。PV1 路径仍使用普通点触发，不能因为库名包含 maker 就把所有模式都解释成同一个信号带。

下面给出本库独立 `compute_target_vol_buy/sell` 的有限正价格代数。将负上限转成无限大，设增仓手数/金额上限 $A,A_{\mathrm{amt}}$，净仓上限 $N,N_{\mathrm{amt}}$，平仓上限 $C,C_{\mathrm{amt}}$，$q_+=\max(q,0),q_-=\min(q,0)$。定义

$$A^*=\min(A,\max(A_{\mathrm{amt}}/(pM),1)),$$
$$C_b^*=\min(C,\max(C_{\mathrm{amt}}/(pM),1),\max(-q,0)),$$
$$C_s^*=\min(C,\max(C_{\mathrm{amt}}/(pM),1),q_+).$$

开多动作的买量原值：

$$v_{OL}=\max\left(\min(N-q_+,N_{\mathrm{amt}}/(pM)-q_+,A^*)+C_b^*,0\right).$$

开空动作的卖量原值（负号代表卖）：

$$v_{OS}=\min\left(\max(-N-q_-,-N_{\mathrm{amt}}/(pM)-q_-,-A^*)-C_s^*,0\right).$$

纯平空与纯平多分别为

$$v_{CS}=\min(C,C_{\mathrm{amt}}/(pM),\max(-q,0)),$$
$$v_{CL}=\max(-C,-C_{\mathrm{amt}}/(pM),-q_+).$$

纯平仓分支没有开仓复合分支中 `max(金额换算,1)` 的同样位置。净仓余量可为负，**先**与增仓 cap 比较，**再**加反向平仓量，最后才截断到正确符号；提前把净仓余量截成零会改变超限账户行为。最终调用 `round_with_step_f64(...,mode=1)`，相关步长 ABI 仍按调用者传入保留。

本库可解析的 maker 参数包括 `maker_alpha_imb_delta`、`maker_vol_depth_window_ms`、`maker_ticks_inside`、`maker_cancel_range_levels`、`order_max_pending_time_ms` 和 `max_maker_limit_rate_bias_from_mid`。其中前两项不意味着库拥有 SM1 的 `book_vol_cap/max_single_taker_vol`：本库顶层字段中不存在这两项，不能照搬 SM 盘口数量策略。

尚未闭合的是滚动盘口不平衡如何在全部 `decide_and_trade` 分支中影响报价带、在途量处理和每个失败回调的状态写回；独立目标量公式和带触发公式已与相应反编译源精确关联。
'''
UNIQUE['comm_mock']=r'''
## comm_mock 的订单队列与发布口径

`on_order` 首先读取回报数量绝对值；不超过 $10^{-5}$ 的事件直接返回。保留事件时间、价格、数量、回报收益和合约乘数，按去掉数字合约后缀的键累计。这不是只统计发出订单的次数。

`on_depth` 读取 SDK `position` 返回的持仓成本价 $\bar p$ 与有符号持仓 $q$，再读取中价 $m$ 和乘数 $M$。未实现收益明确为

$$P_{unrel}=(m-\bar p)qM.$$

令保留订单回报集合收益和为 $P_{rel}$，回报金额累计项为 $A_{hist}$，则发布

$$\text{pnl\_rel}=P_{rel},\quad \text{pnl\_unrel}=P_{unrel},\quad\text{pnl}=P_{rel}+P_{unrel},$$
$$\text{amt}=A_{hist}+|q|Mm,\quad\text{pos}=q,\quad\text{price}=\bar p.$$

这里尤其要纠正 `price`：最终发布的是 SDK position 返回的持仓价格槽，**不是**刚读取的当前中价。收益发布用中价估值，但 price 键保存成本相关价格。已实现项来自回报收益字段及保留队列，不在此处重新按 FIFO 计算。

该库仍会调用 IOC/IAP 等订单接口；通用程序中把观察腿配置为不消耗正式流动性，与“观察腿完全没有交易逻辑”是两回事。watcher 使用这些发布值时，要匹配账户名、策略名、品种键和时间顺序。费用是否已含在回报收益、队列时间窗的完整重置关系，仍需 SDK/事件回放确认，不能把 `pnl` 直接叫扣费账户净值。
'''
UNIQUE['lf4']=r'''
## LF4 的非对称持仓年龄阈值

LF4 不调用本页其他库的四阈值对称 `dynamic_threshold`。`on_signal` 内联计算

$$f=\min\left(\max\left(\frac{h_p-t_0}{\max(t_1-t_0,0.1)},0\right),1\right).$$

开多、开空门槛保持原值。若 $q>10^{-6}$，平多门槛改为 $L_c+f\Delta$，平空门槛不变；否则平多门槛不变，平空门槛改为 $S_c-f\Delta$。这里分母下限为 **0.1 秒**，没有独立新版函数的“负参数关闭”与 $|\Delta|\le10^{-9}$ 早返回；两者不能合并。

挂单时限采用另一组参数：

$$f_p=\min(\max((h_p-t_{p0})/\max(t_{p1}-t_{p0},0.1),0),1),\quad W_{pending}=W_0+f_p\Delta W.$$

先 `margin_filter`，再按此时限调用 `cancel_by_pending_ts`；返回非零的路径提前返回，不继续同一轮下单。然后才做 `impact_block_check`。这里明确的是调用顺序，SDK 返回值的所有错误分类仍由外部接口定义。

## 目标任务的数学状态

按合约保存

$$\mathcal T=(t_0,t_{end},p_{target},v_{target},p_{max},p_{min},n_{max},q_0,v_{done},n_{try},g).$$

新目标的截止时刻 $t_{end}=t_0+\text{max\_try\_hiter\_time\_ms}$，目标价格上下界以创建时方向相关盘口价乘 $1\pm\text{price\_range\_bp}\times10^{-4}$ 形成。`on_depth` 查询实际持仓后写

$$v_{done}=q_{current}-q_0,$$

并复位当前行情的尝试标志。它不是把每次请求量简单累加为已完成量。

每次重试同时要求：买卖两侧在途数量计数均小于 1、$|v_{target}-v_{done}|>10^{-6}$、$n_{try}<n_{max}$、当前时刻严格小于 $t_{end}$、当前行情标志允许，以及价格没有越界。正目标拒绝 $a>p_{max}$，负目标拒绝 $b<p_{min}$；边界相等可通过。通过后请求量为

$$v_{retry}=\operatorname{RoundStep}(v_{target}-v_{done},\tau_v,1).$$

重试限价采用目标的上/下界再按价格步长处理，不是无条件追到最新对手价。次数和期限都使用严格 `<`：刚好到期限、刚好用完次数均不能再重试。

## 手数约束与初始化含义

本库没有增仓/净仓/平仓金额上限字段。设增仓、净仓、平仓手数上限为 $A,N,C$，开多原始目标量为

$$\max(\min(A,N-\max(q,0))+\min(C,\max(-q,0)),0),$$

开空为相应负方向的组合；纯平仓最多消掉当前反向仓。缺省 $A=N=1$，$C$ 为最大有限 double，`max_try_hiter_times=0`、`max_try_hiter_time_ms=0`，所以缺省并不自动启用有持续时间的重试过程。

尚未闭合的点是每一种下单失败、取消和目标替换路径中 `n_try/g` 的完整写回序列；已确定的重试门槛、剩余量计算和行情完成量更新如上，不再只称作“有时间和次数控制”。
'''
UNIQUE['sm1']=r'''
## SM1 逐层计算顺序与默认行为

SM1 的三个对象必须分开：触发器使用信号带生成动作；报价器根据动作、两侧信号值和盘口生成价格/类型；数量器再根据类型决定是否限量。通过开仓门槛不意味着必然是主动单，Maker/Mid 不意味着动作是无动作。

默认 `signal_mode=PV1`、`signal_trigger_mode=PointTrigger`、窗口空；六个仓位/金额风险 cap 缺省均为 -1。默认 `book_vol_cap=true`，因此“风险 cap 无限”仍不等于无限下单量；盘口 cap 仍生效。`touch_gate=true`、超时 5000ms；`max_single_taker_vol=0` 表示该正值 cap 不额外截断，不能解释为所有主动量为零。

报价辅助函数本身未做交易所 tick 合法性检查；0.2 常量、Mid 中价和按比例外移报价均需后续步长处理。重建策略时应保存辅助函数输出，再保存最终提交价，不能只比较其中一个。
'''
UNIQUE['sm2']=r'''
## 正态概率、效用与最优报价

设分布位置与尺度为 $u,\sigma$，$\sigma>0$，

$$F(x)=\Phi((x-u)/\sigma)=\tfrac12[1+\operatorname{erf}((x-u)/(\sigma\sqrt2))].$$

`hit_probability` 的布尔方向分支分别返回 $\beta F(x)$ 与 $\beta(1-F(x))$。但 `UtilityRange::get_utility` 直接计算的效用**没有乘 beta**：

$$U_b(q)=F(q)(V_b-q),\qquad U_s(q)=(1-F(q))(q-V_s).$$

$V_b,V_s$ 是分别传给买卖优化器的价值输入。正常内部极值满足令 $z=(q-u)/\sigma$：

$$g_b(z)=z+\Phi(z)/\phi(z)-(V_b-u)/\sigma=0,$$
$$g_s(z)=z-(1-\Phi(z))/\phi(z)-(V_s-u)/\sigma=0,$$

其中 $\phi(z)=e^{-z^2/2}/\sqrt{2\pi}$。最后 $q=u+\sigma z$。原始函数在 `RAX` 返回 Option 标签，报价在 `XMM0`；只看到 `return 1` 不能推断报价恒为 1。

求根区间固定为 $[-10,10]$，最多 100 次迭代，区间长度或残差容限为 $10^{-8}$；不满足两端异号或未收敛进入错误/无结果路径。使用 erf 的尾部消去可能造成极端 $z$ 下较大的代数残差，本轮 60 个原始函数探测已保留实际残差，不能宣称解析最优与机器码逐位一致。

例如 $V=u=0,\sigma=1$ 时，买侧原始报价约为 $-0.7517915247$；这是无量纲合成例子，不是可交易市场价。$V=-8,u=0,\sigma=1$ 的买侧样本产生约 $-8.1115938873$，按双精度 erf 回代的方程残差约 -0.003606，说明极端尾部不能只报告“求根通过”。

## 双侧效用如何选择动作

若 $U_b\ge U_s$，包括相等，优先看买侧：$U_b\ge L_o$ 则开多，否则 $U_b\ge S_c$ 则平空，否则无动作。若 $U_b<U_s$，将卖效用映射为 $x=-U_s$：$x\le S_o$ 则开空，否则 $x\le L_c$ 则平多，否则无动作。输出携带对应侧的 Option 报价。

失败侧效用先设为零，之后仍按上述效用比较；不能改成“先剔除失败侧，再自动选择另一侧”，因为这是不同的控制顺序。报价 Option 还要由调用者检查。

本库虽然有公共信号缓存和动态阈值，不应套用 SM1 的 $E>H$ 三分段报价，更不能把它简写为普通 PV1 扣价差。尚未闭合的是上游怎样构成每次的 $u,\sigma,V_b,V_s$ 的所有模式分支及其与账户执行的完整逐事件一致性；本页保留各输入槽的角色，未猜测上游预测分布一定校准。
'''
UNIQUE['sm3']=r'''
## A/B 一次性报价的完整数学分段

A 产生动作，B 由 `maker_signal_abtype_u` 指定来源，并与 `maker_signal_threshold` 比较后形成 $d_B\in\{-1,0,1\}$。缺省 B 来源为 None，状态 `+0x30` 存 Option 哨兵，不是空字符串。

令买侧（动作 0/3）方向 $d=+1$，卖侧（1/2）$d=-1$，方向化 B 为 $z=d\,d_B$。动作超额先 round 至 0.01：

$$E=\operatorname{round}_{0.01}\begin{cases}s_+-L_o,&A=0,\\L_c-s_-,&A=1,\\S_o-s_-,&A=2,\\s_+-S_c,&A=3.\end{cases}$$

半价差 $H=\operatorname{round}_{0.1}(10^4(a-b)/(2m))$。定义本库 maker 候选

$$p_M=\begin{cases}\min(b+0.2,a-0.2),&d=+1,\\\max(a-0.2,b+0.2),&d=-1.\end{cases}$$

这次卖侧是 **max**，与 SM1/SM4 的两侧 min 不同。B 门控后的完整优先级为：

| 优先级 | 条件 | 类型、价格 |
|---|---|---|
| 1 | $z<0$ | Maker，$p_M$；即使 $E>H$ 也不走主动 |
| 2 | $z\ge0$ 且 $E>H$ | Taker，见下式 |
| 3 | 前两项不满足且 $E>0$ | Mid，$m$ |
| 4 | $E\le0$ 且 $z=0$ | Maker，$p_M$ |
| 5 | $E\le0$ 且 $z>0$ | Skip，保留计算出的候选价但数量函数置零 |

主动比例 $r=\max(r_{base},\min(r_{max},10^{-4}(E-H)))$，买价 $a(1+r)$、卖价 $b(1-r)$。最后一行的候选价是

$$p_{skip}=m[1-d\cdot10^{-4}\min(|E|,10^4r_{bias})].$$

该价仍写入返回结构，但类型为 3，不能因为看见一个有效数值价格就以为真的挂了这笔单。这里的全部四动作、B 三态与超额分段已通过 2400 个随机有限值案例；另存 60 个可读边界矩阵。$E=H>0$ 属于 Mid，$E=0,z>0$ 属于 Skip。

顶层没有 SM1 的完整窗口触发参数组，也没有 SM3.1 的 B 缓存寿命、A 等待 barrier、veto scope 等显式配置。B 到达与消费的状态仍须按本库回调顺序保留，不能把 SM3.1 的等待规则添加到这里。
'''
UNIQUE['sm3_1']=r'''
## SM3.1 门控参数的合法枚举

真实 `on_begin` 解析与校验确认：

| 字段 | 合法值及内部码 |
|---|---|
| gate_taker_veto_mode | off=0，downgrade=1，block=2 |
| gate_taker_veto_scope | taker_mid=0，taker_only=1，mid_only=2 |
| gate_maker_mode | off=0，native=1，block=2，deepen=3，native_deepen=4，both=5 |
| gate_maker_scope | maker_only=0，mid_only=1，all_passive=2 |
| gate_cancel_mode | off / on |
| gate_wait_mode | off / barrier |

未知字符串返回解析错误，不是安静降级成 off。相关门槛需非负，deepen 模式要求 `gate_maker_deepen_ticks>0`；B 重用年龄必须正，barrier 模式要求 A 等待 B 的超时正。

## 被动门控的确切逻辑

令已有基础报价为 $(p,Q)$，方向调整后的 B 比较值为 $z$，有效性布尔量为 $v$，scope 是否覆盖本报价为 $g$，门槛 $\theta_B$。源码使用严格不等号：

$$N=v\land(z>\theta_B),\qquad X=v\land(z<-\theta_B).$$

未覆盖 $g=false$ 或 mode=off，原样返回基础报价。覆盖时：

| mode | 条件 | 结果 |
|---|---|---|
| native | N | 类型改 Skip(3) |
| block | X | 类型改 Skip(3) |
| deepen | X | 类型改 Maker(1)，报价退到更深位置 |
| native_deepen | N 优先 | N 时 Skip，否则 X 时 deepen |
| both | N 或 X | Skip |

其余条件原样返回。$z=\pm\theta_B$ 两边都不触发。deepen 分支按买侧 $b-n\tau_p$、卖侧 $a+n\tau_p$ 生成更深报价，$n=\text{gate\_maker\_deepen\_ticks}$；这个分支与普通 LOW maker 的“向内插价”相反。

## 时间和主动门控不能折成一个 B 阈值

`gate_b_reuse_max_age_ms` 限制缓存 B 的可用年龄；`gate_wait_mode=barrier` 允许 A 等待 B，但有 `gate_a_wait_b_timeout_ms`。主动 veto 又有 scope 和 downgrade/block 两种结果；撤单另有 `gate_cancel_min_rest_ms`。一个 B 同时可能对新的主动请求、已有被动单、缓存等待产生不同作用。

编译后的门控标量与原参数各保存一份：例如 veto 门槛在参数 `+0x1b8` 与编译区 `+0x218`，deepen ticks 在 `+0x1d0/+0x230`，maker 门槛在 `+0x1d8/+0x238`，mode 在 `+0x240`。本轮两标记探测核对了这些拷贝，不能把重复位置误认为两个独立配置。

被动门控已完成 240 个原始机器码案例，覆盖六模式、双方向、有效/无效、scope 开/关和门槛两侧与等号。尚未闭合的是所有 A/B 到达顺序、barrier 超时与撤单回报交织的完整状态轨迹，以及主动 boost/veto 所有分支的动态矩阵。这里明确列出已经确定的枚举、比较符、被动门控表和内存对应关系，不把尚未验证的时间路径包装成数学定理。
'''
UNIQUE['sm4']=r'''
## SM4 的自适应对象与默认候选数

自适应的是四个动作阈值，不是信号模型系数或每个品种的收益排名。默认 `score_thresholds_delta=0.2`、`score_thresholds_num=2`，因此原始组加两对正负变体共 5 组；配对滚动窗口 1200000ms、目标持仓时长 60000ms。

`score_thresholds_num` 在本库是位于 `+0x1b8` 的 32 位整数，紧邻 `touch_gate/book_vol_cap` 两个字节。按 64 位整数读取会把布尔位混入，得到错误候选数；本轮重新按 u32 探测已纠正。

选出的四阈值进入 SM 型触发与报价层，价格函数仍是本页实测的 SM1/SM4 三段规则；数量层仍有 Taker/Maker/Mid 的 cap 差异。即使配对候选树与 TM6 相同，SM4 的订单价格类型与 TM6 主动路径不同，不能把两者整个库视为等价。
'''
UNIQUE['tm5']=r'''
## TM5 的收益队列到底累计什么

业务 `on_order` 的回报布局中数量在 `+0x60`，事件秒时刻在 `+0x50`，收益值在 `+0x78`。FFI 包装把外部相应字段拷入这些位置。仅 $|\Delta q|>10^{-5}$ 的回报进入队列，保存

$$(t_j^{ms},P_j)=(1000t_j^{sec},\text{回报收益字段}).$$

行情回调清除 $t-t_j>W$ 的记录，$W=\text{rolling\_window\_ms}$，然后发布

$$\text{rolling\_pnl}(t)=\sum_{j:t-t_j\le W}P_j.$$

不按绝对数量再加权，不把当前未实现收益自动加进去，也不重新计算复合收益率。时间边界等号保留；默认窗口为 0，意味着下一次不同时间的清理就可能删除旧回报。回报收益的费用口径由 SDK 决定，所以该值不能自动等同于账户扣费净值增量。

## 交易逻辑与 LF4/SM1 的区别

TM5 接收外部主/次信号，用点/窗口触发决定动作，随后走主动报价。它没有 SM1 的独立三类型报价器，也没有 LF4 的 TargetTaskStatus 价格区间和次数状态。`score_taker_rate_alpha` 影响动作信号相对阈值对应的主动比例，而 rolling_pnl 是发布状态，不能在本库里凭空解释成按收益自动调整阈值。

其持仓年龄与挂单超时逻辑在 `on_signal` 内联，应保留旧版分母下限与方向条件，不能套用后续独立四阈值对称函数。六个风险 cap 的缺省也与 SM 系列不同：增仓/净仓手数为 1，相关金额和平仓限额缺省为 0。先看到这些默认值，才能解释同样信号为什么两库可能生成不同请求量。
'''
UNIQUE['tm6']=r'''
## TM6 的两套独立时间队列

TM6 同时有信号配对队列和订单收益队列。配对窗口默认 1200000ms，目标配对时长 60000ms；订单收益窗口 `rolling_window_ms` 缺省为 0。这两个窗口不能合并，也不能把信号配对中位数当成实际成交收益统计。

本库 FFI `on_order` 包装中已经直接内联收益记录：输入 `+0x30` 数量绝对值大于 $10^{-5}$ 时，读 `+0x08` 秒时刻并乘 1000，与 `+0x48` 收益值一起入队。队列在策略状态 `+0x80` 开始，cap/ptr/head/len 分别位于 `+0x80/+0x88/+0x90/+0x98`，窗口在 `+0xa0`。不能因为业务函数清单里找不到同名独立 `on_order` 就断言没有收益回调。

行情回调按 $t-t_j>W$ 淘汰，发布 $\sum P_j$ 为 rolling_pnl。与 TM5 的发布语义一致，但本库的阈值还受候选配对树选择影响。默认 `score_thresholds_num=1`，原始组加一对变体共 3 组；SM4 默认 2，形成 5 组。即使其他参数相同，候选集合本身也不同。

最终交易仍走主动执行，不使用 SM1 的硬编码 0.2/Mid 三分段价格函数。需要复现的状态顺序包括：记录信号供候选配对、选择候选四阈值、实际动作过滤与请求、后续回报入收益队列；不能用最终收益反向挑选最接近目标的候选。
'''
SOS=r'''
## section 状态机：收益之外还有账户符号门控

三个 section 编码为 1、2、3。记 watcher 发布值 $z$，五个转移门槛 $h_{12},h_{13},h_{21},h_{23},h_{31}$。另记主回调从 `free_cash/meta_account` 路径取得、用于正负判断的账户标量为 $C_{acct}$。该 ABI 返回字段尚未完全命名，本文保留可追溯记号，不武断称为仓位或总净值。

| 原状态 | 按优先级判断 | 新状态 |
|---|---|---|
| 1 | $z\ge h_{12}$ 且 $C_{acct}>0$ | 2 |
| 1 | 上条未满足，$z>h_{13}$ 且 $C_{acct}<0$ | 3 |
| 1 | 其余 | 1 |
| 2 | $z<h_{21}$ | 1 |
| 2 | 否则 $z>h_{23}$ 且 $C_{acct}<0$ | 3 |
| 2 | 其余 | 2 |
| 3 | $z<h_{31}$ | 1 |
| 3 | 其余 | 3 |

注意 1→2 使用 `>=`，转入 3 使用 `>`，从 3 回 1 使用 `<`；$C_{acct}=0$ 阻止从 1 升到 2/3，也阻止从 2 进入 3。只画“收益超过门槛就切换”的图会漏掉决定性条件。watcher 发布值缺失时对应回退路径取零，不是自动停止整个策略。

切入/切出 section3 触发额外在途订单处理，先收集和去重撤单 ID，再检查仍存活的订单，然后才允许继续调仓。section 的 `insts/ranks/signal_all/trade_mode/trade_code` 属于交易对象和执行设置，普通四阈值及增仓/净仓手数金额也各自独立。切换 section 不是只换四个浮点数，更不等于一次回调把所有目标仓位都成交完。
'''
UNIQUE['sos5']=r'''
## 固定人民币与 live_basket_bp 两种门槛

`phase_threshold_mode` 先去两端空白并转 ASCII 小写。固定模式使用配置五个人民币门槛；`fixed` 和 `fixed_rmb` 属于支持路径。`live_basket_bp` 根据四股指参考篮子形成名义金额：

$$N=300p_{IF}+300p_{IH}+200p_{IM}+200p_{IC}.$$

四个品种键都要能取到参考价；这是每品种一单位合约价格乘乘数的篮子，不是根据账户实际持仓权重加总。篮子无效时调用者可用 `phase_default_reference_notional`，缺省 5000000，而不是缺一种品种就直接按其余三种继续算。

令 $b_p=\text{phase\_threshold\_bp}$，$h=\text{phase\_high\_multiplier}$，则

$$B=N b_p/10000,\qquad(h_{12},h_{13},h_{21},h_{23},h_{31})=(B,hB,-B,hB,B).$$

代码要求 $b_p$ 为正有限数、$h>1$ 且有限、参考金额正且有限、推导门槛有效；不满足返回错误。不能因为默认 $b_p=0$ 就假设 live 模式默认有效。

参考价更新还存在 `phase_mid_jump_reject_rate` 与 `phase_max_spread_bp` 的过滤（缺省分别 0.11 和 100）；二者防止异常行情直接扭曲阶段门槛。过滤后的“最后有效价”与当前盘口并非始终相等，因此重放时必须保存参考价缓存，而不是每次从当前四个中价重算并忽略拒收。

## section 迁移与普通交易是两条路径

`sos_taker_rate`、`sos_add_vol`、`order_book_1_2_gap` 用于 section 迁移相关的订单逻辑；常规信号仍使用本 section 四阈值、PV 模式、成本和风险约束。不能把两个参数集强行合并成同一套每信号订单公式。通用 `run_sos5_phase` 的构建/发布参数属于如何组装输入，不能替代 so 内部的实际条件。

本轮已探测三个 section 的 24 个数值字段默认值与偏移。完整参考价拒收、跨 section 撤单和跨合约再平衡轨迹尚未做动态事件验收；相应静态分支已保留到本页函数索引。
'''
UNIQUE['sos6']=r'''
## 外部四阈值的平移规则

策略依次读取 `threshold_long_open`、`threshold_long_close`、`threshold_short_open`、`threshold_short_close` 四个发布键。四个 Option 都存在时才执行整体更新；不能缺一个键就把它补零。设 section 原始阈值分别为 $T_1^0,T_2^0,T_3^0$，读取值为 $W$，则

$$\Delta T=W-T_1^0,\qquad T_j^{eff}=T_j^0+\Delta T\quad(j=1,2,3).$$

所以 $T_1^{eff}=W$；$T_2^{eff}-T_1^{eff}=T_2^0-T_1^0$，$T_3^{eff}-T_1^{eff}=T_3^0-T_1^0$。每次对**原始** section1 求差，再写有效阈值；不是把新差不断累加到上一轮有效值。

原始 section1 四阈值位于 `+0xa8,+0xb0,+0xb8,+0xc0`，section2 位于 `+0x148...+0x160`，section3 位于 `+0x1e8...+0x200`；有效三组写入 `+0x3a0...+0x3f8`。这一内存关系直接确定“原值不变、有效值重算”的语义。

举例，原三组为 $T_1^0=(2,-1,-2,1)$、$T_2^0=(3,-2,-3,2)$、$T_3^0=(4,-3,-4,3)$，发布 $W=(2.5,-0.5,-2.5,0.5)$，则 $\Delta=(0.5,0.5,-0.5,-0.5)$；第二组变成 $(3.5,-1.5,-3.5,1.5)$，第三组同样加差。

## 与 SoS5 的精确区别

本库有 `watcher_pnl_key` 与四阈值订阅；顶层没有 SoS5 的 live basket 门槛模式、bp、高阶段倍数和参考篮子保护那组参数。它继承的是外部阈值变化，不是把 SoS5 的 live_basket_bp 门槛再乘一个系数。段位转移收益键与四阈值键是两组输入，可在不同时间更新，必须分别保存各自是否存在。

本轮配置解析定位了全部 32 个非嵌套顶层字段和三个 section 的 24 个数值字段。外部发布和读取的完整时序、缺失更新后所有订单分支尚未事件回放；四阈值平移函数的内存写入与代数关系已通过 1000 个原始机器码合成案例；比较保持原始的先减后加浮点顺序，不把代数上的 $T_1^{eff}=W$ 当成所有浮点值逐位相等的保证。
'''
# Supplement exact static gate statements.
UNIQUE['sm3_1']+=r'''

主动门控中先用方向调整后的 $z$ 判断逆向条件 $v\land z<-\theta_{veto}$。scope 为 `taker_mid` 时两类均覆盖，`taker_only` 只覆盖 Taker，`mid_only` 只覆盖 Mid。downgrade 与 block 分别走被动候选/Skip 路径，不能一律置零原始信号。

另有主动 boost：$\text{gate\_taker\_boost\_bp}>0$ 且 B 有效且 $z>\text{gate\_taker\_boost\_th}$ 时，在基础主动比例完成 `min/max` 后额外加 `boost_bp*1e-4`。因此最终比例可能超过 boost 之前的 `max_taker_rate`；不能为“遵守上限”把 boost 移到 cap 之前。
'''

def linkfn(k,fn):
 a=fn['address'];p=B/'analysis'/k/'decompiled_repaired'/(a+'.c')
 if not p.exists():p=B/'analysis'/k/'decompiled'/(a+'.c')
 return f"[{fn['name'].replace('|','／')}]({p.relative_to(B).as_posix()})（ELF `0x{int(a,16):x}`，{fn['bytes']} 字节）"
def valfmt(x):
 if x is None:return 'None（缺省继承/无值）'
 if isinstance(x,dict):return 'None（Option 哨兵）' if 'option_or_sentinel' in x else json.dumps(x,ensure_ascii=False)
 return json.dumps(x,ensure_ascii=False)
def config_section(k):
 x=json.loads((R/(k+'.config_layout.json')).read_text());out='\n## 本库全部配置字段：真实解析默认值与状态偏移\n\n'
 out+='下表来自直接加载原始 `.so` 后调用其 `on_begin` 解析器；浮点字段用两个不同标记值匹配同一位置。偏移相对于策略对象起点，不是 ELF 文件偏移。Option 的 None 载荷不读取为默认数值。日志 SDK 为 no-op，其余 SDK 调用会 abort，未调用交易回调。\n\n'
 if 'sos' in k:out+='SoS 必需的 watcher 名与 section 标识使用探测种子；表中的 `"probe"` 是探测输入，**不是二进制缺省值**。section 的 IF、rank=1、signal_all="0"、IAP 同样是为使解析成立所设种子。\n\n'
 out+='| 字段 | 解析值/默认状态 | 对象偏移 |\n|---|---|---|\n'
 for f in x['fields']:
  if f['status']=='mapped':out+=f"| `{f['field']}` | {' / '.join(valfmt(d['value']) for d in f['defaults']).replace('|','／')} | {', '.join('`'+a+'`' for a in f['state_offsets'])} |\n"
  else:out+=f"| `{f['field']}` | "+({'nested_not_probed':'嵌套结构，见下表/字段表','forced_false_for_isolation':'本轮隔离探测强制 false；不据此推断缺省','unresolved_or_validated_enum':'有合法性校验，见正文枚举；未由随机字符串确定缺省'}.get(f['status'],f['status']))+' | — |\n'
 np=R/(k+'.nested_config.json')
 if np.exists():
  out+='\n嵌套数值字段另行覆盖探测：\n\n| 完整字段 | 缺省值 | 对象偏移 |\n|---|---|---|\n'
  for f in json.loads(np.read_text()):out+=f"| `{f['field']}` | {' / '.join(valfmt(v) for v in f['default'])} | {', '.join('`'+o+'`' for o in f['state_offsets']) or '未定位'} |\n"
 out+=f"\n原始回执：[顶层解析](数学化还原_20261114/{k}.config_layout.json)；[字段数组](analysis/{k}/config_field_arrays.json)。默认字段是类型/初始化证据，不能代替历史加密配置的明文。\n"
 return out

def validation(k):
 out='\n## 本轮机器码核验及其覆盖范围\n\n| 原始函数/模型 | 案例数 | 通过 | 证据 |\n|---|---:|---:|---|\n';total=0;passed=0
 leaf=json.loads((R/(k+'.leaf_validation.json')).read_text())
 for row in leaf['kernels']:
  total+=row['cases'];passed+=row['passed'];out+=f"| `{row['function'].split('::')[-1]}` | {row['cases']} | {row['passed']} | [回执](数学化还原_20261114/{k}.leaf_validation.json) |\n"
 f=R/(k+'.state_kernel_validation.json')
 if f.exists():
  for row in json.loads(f.read_text()):
   total+=row['cases'];passed+=row['passed'];out+=f"| `{row['function'].split('::')[-2]+'::'+row['function'].split('::')[-1]}` | {row['cases']} | {row['passed']} | [回执](数学化还原_20261114/{k}.state_kernel_validation.json) |\n"
 f=R/(k+'.quote_price_validation.json')
 if f.exists():
  row=json.loads(f.read_text());total+=row['cases'];passed+=row['passed'];out+=f"| 报价价格＋类型分段 | {row['cases']} | {row['passed']} | [回执](数学化还原_20261114/{k}.quote_price_validation.json) |\n"
 for suffix,label in [('passive_gate_validation','被动门控 6 模式×方向×有效性×scope×边界'),('delta_validation','SoS6 四阈值平移')]:
  f=R/(k+'.'+suffix+'.json')
  if f.exists():
   row=json.loads(f.read_text());total+=row['cases'];passed+=row['passed'];out+=f"| {label} | {row['cases']} | {row['passed']} | [回执](数学化还原_20261114/{k}.{suffix}.json) |\n"
 out+=f'\n本页上述新增检查合计 **{passed}/{total}**。这是原始 ELF 叶函数/指定状态函数的合成输入检查，不能扩写为整个策略或全部历史订单的等价验收。点触发与枚举用精确比较；浮点核验容差和逐位比较范围写在脚本/回执中。\n'
 if (R/(k+'.quote_volume_matrix.json')).exists():out+=f'\n[数量返回寄存器矩阵](数学化还原_20261114/{k}.quote_volume_matrix.json)另外覆盖 4 种报价类型、开关两值、正负及零数量，共 40 个组合。\n'
 if k=='libstrategy_sm2':out+='\n[优化器 60 个原始函数探测](数学化还原_20261114/libstrategy_sm2.optimizer_native_cases.json)记录报价、Option 标签及回代残差；极端尾部残差不为零，未计作“60 个数学模型通过”。\n'
 return out,total,passed

manifest=[]
for k,funcs in F.items():
 n=k.removeprefix('libstrategy_');blob=(B/(k+'.so')).read_bytes();sha=hashlib.sha256(blob).hexdigest()
 names='\n'.join(f['name'] for f in funcs)
 doc=f'# {k}.so：数学化还原与逐分支说明\n\n{intro[n]}\n\n对应原件：`{k}.so`，SHA-256 `{sha}`。本文为 2026-11-14 新建的逐库数学说明，旧自然语言版保留，若有冲突以本页列出的原始函数与本轮证据为准。\n'
 doc+=COMMON if n!='sm2' else COMMON[:COMMON.index('## 四动作')]+r'''
## 动作编码与四阈值

阈值按 $T=(L_o,L_c,S_o,S_c)$ 保存。动作 0=开多、1=平多、2=开空、3=平空、4=无动作。SM2 先比较两侧效用，随后按被选侧的开仓/平仓门槛判断，完整公式见下文；不能照搬普通 PV1 的单分数分类流程。
'''
 if 'point_signal_trigger_pv1_spread' in names:doc+=POINT
 if 'point_signal_trigger_pv3_spread' in names:doc+=BAND
 if 'point_signal_trigger_pv4_band' in names:doc+=BAND.replace('成本项为 $c=\\min(\\alpha_c|h|,c_{cap})$','PV4 成本项为 $c=\\min(\\alpha_c(|h|+f),c_{cap})$')
 if 'point_signal_trigger_pv4' in names and n!='comm_maker1':doc+=PV4
 if '::dynamic_threshold' in names:doc+=DYNAMIC
 if any('windows_' in f['name'] for f in funcs):doc+=ROLL
 if 'VolSpreadRatio::update' in names:doc+=VOL
 if '::high_taker_rate' in names:doc+=HIGH
 if n in ['comm3','comm3_1','comm3_2','comm4','comm4_1','comm5','comm_mock']:doc+=LOW
 if 'taker_fillable_cum' in names:doc+=FILL
 if n in ['sm1','sm4']:doc+=SMQUOTE
 if n in ['sm1','sm3','sm3_1','sm4']:doc+=SMVOL
 if n in ['comm4','comm4_1','comm5']:doc+=PHASE
 if n in ['sm4','tm6']:doc+=TREE
 if n in ['sos5','sos6']:doc+=SOS
 doc+=UNIQUE[n]
 if n!='lf4':doc+=RISK
 if (R/(k+'.k1_maps.json')).exists():
  km=json.loads((R/(k+'.k1_maps.json')).read_text());doc+='\n## 本库内嵌 K1 全表\n\n键为信号参数 ID；表中“缺失→1”表示该组没有此键，主回调使用默认 1。\n\n| signal_parameter_id | LOW K1 | HIGH K1 |\n|---:|---:|---:|\n'
  for ident in sorted(set(km['G1_LOW'])|set(km['G2_HIGH']),key=int):doc+=f"| {ident} | {km['G1_LOW'].get(ident,'缺失→1')} | {km['G2_HIGH'].get(ident,'缺失→1')} |\n"
  doc+=f'\n[该 so 独立提取的原始数值](数学化还原_20261114/{k}.k1_maps.json)。\n'
 doc+=config_section(k)
 vs,tot,pa=validation(k);doc+=vs
 doc+='\n## 逐事件复现应保存的状态与尚未闭合项\n\n'
 doc+='每次回调记录输入时间、合约/信号标识、原信号值、盘口、SDK 持仓与在途信息；再记录变换信号、有效阈值、动作、报价类型、候选价量、撤单集合以及状态写回。对本库出现的窗口、阶段、配对树、目标任务或门控缓存，还必须记录其回调前后状态。上一个事件即使没有下单，也可能已经修改这些状态。\n\n'
 doc+='本轮未取得历史加密配置明文，未启动历史市场回测，未完成全部 SDK 撮合/费用/账户回报的逐事件等价重放。自动反编译的 Rust Option、复合返回值和 SIMD 临时变量不可靠；已纠正部分以本页公式与机器码探测为准，剩余不确定性在本库专属章节明确列出。本文不是能替换原 so 的完整插件源码。\n'
 doc+='\n## 本库业务函数证据索引\n\n地址统一使用未重定位 ELF 虚拟地址；Ghidra C 中的 `001xxxxx` 是项目加载基址后的地址，两者不要混淆。下列索引使每个计算/回调都可回到本库证据，不用其他库的同名函数替代。\n\n'
 for f in funcs:doc+='- '+linkfn(k,f)+'。\n'
 doc+=f'\n[完整反汇编](analysis/{k}/assembly.txt)；[核心伪代码集合](analysis/{k}/核心伪代码.c)；[原自然语言说明](自然语言详解_20261114/{next(p.name for p in (B/"自然语言详解_20261114").glob("*"+n+".md"))})。\n'
 (B/(k+'.md')).write_text(doc)
 manifest.append(dict(library=k,markdown=k+'.md',characters=len(doc),bytes=len(doc.encode()),binary_sha256=sha,markdown_sha256=hashlib.sha256(doc.encode()).hexdigest(),cases=tot,passed=pa))
(R/'math_docs_manifest.json').write_text(json.dumps(manifest,ensure_ascii=False,indent=2))
index='# 19 个策略数学化还原索引\n\n每个 `.so` 的同目录下均有同名 `.md`。正文包含数学公式、边界比较符、配置默认值/内存偏移、专属状态、差异和本轮机器码检查。旧自然语言版保留。\n\n'
index+='| 策略 | 主要机制 | 文档字符数 | 新增核验通过/总数 |\n|---|---|---:|---:|\n'
for r in manifest:
 n=r['library'].removeprefix('libstrategy_');index+=f"| [{n}]({r['markdown']}) | {intro[n]} | {r['characters']} | {r['passed']}/{r['cases']} |\n"
index+='\n本轮没有把静态反编译冒充完整策略等价。尤其需要关注 SM1/SM4 的 0.2/min 报价、SM 带触发成本方向、LF4 内联动态阈值、SoS 账户符号门控、SM2 数值尾部残差及 TM6 包装中内联的收益回调。\n\n'
index+=f"新增叶函数/状态函数/报价模型检查合计 {sum(r['passed'] for r in manifest)}/{sum(r['cases'] for r in manifest)}；另有 4 库各 40 个数量复合返回矩阵、SM2 的 60 个原始优化器观察案例。检查仅使用合成输入，没有使用历史或独立验证集。\n"
index+='\n[检查与配置探测脚本目录](数学化还原_20261114/)；[逐文档清单](数学化还原_20261114/math_docs_manifest.json)。\n'
(B/'19个策略_数学化还原索引.md').write_text(index)
print('wrote',len(manifest),'docs',sum(r['characters'] for r in manifest),'chars')
