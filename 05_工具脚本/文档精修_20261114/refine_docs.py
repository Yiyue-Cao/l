"""从精修前快照重建文档；不执行策略、不改动二进制与研究回执。"""
from pathlib import Path
import hashlib, json, re, zipfile

B = Path('LOCAL_WORKSPACE/1008/l')
ARCHIVE = B.parent / 'l_历史归档/20261114_语言精修前文档.zip'
Z = zipfile.ZipFile(ARCHIVE)

def original(rel):
    return Z.read(str(rel)).decode()

def split_sections(text, level=2):
    parts = re.split(r'^' + '#' * level + r' ', text, flags=re.M)
    return parts[0].strip(), [(p.split('\n', 1)[0], p.split('\n', 1)[1].strip()) for p in parts[1:]]

R = {}
def section(old, new, text):
    R[old] = (new, text.strip())

section('记号、输入与可复现边界', '符号与适用范围', r'''
| 符号 | 定义 |
|---|---|
| $b,a,m$ | 买一、卖一、中价；$m=(a+b)/2$ |
| $q,M$ | 有符号持仓、合约乘数；$q>0$ 为多仓 |
| $\tau_p,\tau_v$ | 价格步长、数量步长 |
| $s,x,T$ | 变换后的信号、送入分类器的值、有效四阈值 |
| $A,Q,v,p$ | 动作编码、报价类型、有符号请求量、请求价格 |

$1\mathrm{bp}=10^{-4}$。`round` 的中点远离零；`RoundStep` 的 mode 按原调用保留。时间单位在具体状态中注明。局部公式另行定义的符号仅在该节有效。

公式默认有限实数、正价格和正乘数；NaN/Inf、浮点运算顺序另按原分支处理。外部信号的主值/次值是事件字段，上游预测公式尚未恢复。配置默认值与历史实际配置分开看。

证据分为：**动态验证**（原始 ELF 的指定合成输入）、**静态确定**（指令、常量和控制流）、**待闭合**（尚缺联合回放或外部语义）。验证范围见附录，不能从局部通过推导整个插件等价。
''')

section('四动作不是四个可交换判断', '四阈值与动作优先级', r'''
令 $T=(L_o,L_c,S_o,S_c)$。有限输入按下列顺序分类：

$$
A(x,T)=\begin{cases}
0\ (\text{开多}),&x\ge L_o,\\
3\ (\text{平空}),&x<L_o\land x\ge S_c,\\
2\ (\text{开空}),&x<L_o\land x<S_c\land x\le S_o,\\
1\ (\text{平多}),&x<L_o\land x<S_c\land x>S_o\land x\le L_c,\\
4\ (\text{无动作}),&\text{其余}.
\end{cases}
$$

优先级固定为开多、平空、开空、平多；交叠阈值不排序。例：$T=(0,0,0,0),x=0$ 得开多。开仓动作可包含回补反向持仓，新增敞口由数量公式决定。

枚举 4 是成功计算出的无动作；`Err` 是错误返回，进入调用者的失败分支。二者分别保留。
''')

section('持仓年龄动态阈值', '持仓年龄对阈值的调整', r'''
独立函数 `dynamic_threshold` 的输入为持仓秒数 $h_p$，以及参数 $t_0,t_1,\Delta$，依次对应 `dyn_score_position_ts_threshold_s`、`dyn_score_max_position_ts_s`、`dyn_score_delta_score`：

$$
d=\begin{cases}
0,&t_0<0\lor t_1<0\lor h_p<t_0\lor |\Delta|\le10^{-9},\\
\left|\Delta\min\left(\frac{h_p-t_0}{\max(t_1-t_0,10^{-6})},1\right)\right|,&\text{其余},
\end{cases}
\qquad T'=(L_o-d,L_c+d,S_o+d,S_c-d).
$$

$h_p=t_0$ 时 $d=0$；终点后饱和。负 $\Delta$ 仍产生非负 $d$；$t_1\le t_0$ 使用分母下限，不报错。本式限定为该独立函数；LF4/TM5/TM6/SoS6 的内联旧逻辑需按各自章节实现。
''')

section('时间窗口触发与投票', '窗口统计与投票', r'''
窗口保存 $(t_i,s_i)$ 及累计量 $N,S_1=\sum s_i,S_2=\sum s_i^2,P=\sum_{s_i>0}s_i,N_-=\sum_{s_i\le0}s_i$。每次**先插入，再删除年龄 $t-t_i>W$ 的旧点**；等号保留。累计量按原加减顺序更新。

$$
\mu=S_1/N,\qquad \sigma=\sqrt{\max(S_2/\max(N,1)-\mu^2,0)}.
$$

| 触发器 | 统计值或取值规则 |
|---|---|
| Mean | 将 $\mu$ 送入四阈值分类器 |
| Sharpe | $|\sigma|>10^{-6}$ 时取 $\mu/\sigma$，否则为 0；这是信号统计量 |
| RSI | $|N_-|>10^{-6}$ 时取 $100-100/(P/|N_-|+1)$，否则为 50 |
| Quantile | 排序后取下标 $\lfloor qN\rfloor$ 与 $\lfloor(1-q)N\rfloor$，不插值；越界可返回错误 |

`update` 更新和、平方和与均值，但并非所有版本都同步重算 `std_cache`。`WindowsStdTrigger` 读缓存；Sharpe 分支另行重算。信号带也须使用当时缓存值。

多窗口先产生候选动作，再计票。最高票比例须严格大于 `vote_rate`；并列结果涉及 HashMap 遍历，没有额外的多头或平仓优先级。窗口函数有静态证据，但所有窗口类型的完整状态序列尚未逐一验证。
''')

section('波动/半价差统计不是订单簿不平衡', '波动／半价差分组与 K1', r'''
`VolSpreadRatio::update` 输入为毫秒时间、买价、卖价。短窗口 $W_v$ 保存中价，长窗口 $W_r$ 保存收益与半价差样本；两者删除年龄严格大于窗口的队首记录。

$$
m_t=(a_t+b_t)/2,\qquad H_t=\operatorname{round}\left(10^5\frac{a_t-b_t}{a_t+b_t}\right)/10.
$$

短窗口不足 2 点、最旧点跨度 $<W_v/2$，或旧中价不为正时返回 `None`。否则计算

$$
r_t=\operatorname{round}\left(10^5(m_t/m_{old}-1)\right)/10,\qquad
V_t=\frac{\operatorname{std}_{pop}(r_i)}{\operatorname{mean}(H_i)}.
$$

收益样本数须大于 1，且平均半价差为正，才返回 `Some(V_t)`。$V_t$ 是中价收益标准差与平均半价差之比，不使用委托数量。

设动态分组开关为 $g$，分界值为 $v_*$：

$$\mathrm{group}=\begin{cases}\mathrm{LOW},&g\land V_t\text{ 存在}\land V_t\le v_*,\\\mathrm{HIGH},&\text{其余}.\end{cases}$$

$g,v_*$ 对应 `use_dynamic_volspread_ratio`、`split_high_low_ratio_threshold`。关闭开关、暖启动或样本不足均归 HIGH；等号归 LOW。

K1 由 SDK `signal_parameter_id` 返回的 ID 查当前组常量表。获取 ID 失败用 0；查不到键用 1。九个 comm 库逐库提取的表相同：LOW 188 项、HIGH 183 项，完整数值见附录。键是信号参数 ID。
''')

section('LOW 路由、maker 价格与撤单', 'LOW 执行与 maker 报价', r'''
LOW 四阈值均为 `Option<f64>`：`None` 继承普通阈值，`Some(0)` 使用零。`low_action` 选择默认主动、`skip` 或 `maker`；选择 skip 不回滚此前统计更新。

令 $n=\text{maker\_ticks\_inside}$，未取整报价为

$$p_b=\min(b+n\tau_p,a-\tau_p),\qquad p_s=\max(a-n\tau_p,b+\tau_p).$$

撤单档数参数另记为 $n_R$，取 $k=\min(4,\max(1,n_R))$。盘口从 1 编号，范围及同向撤单条件为

$$R_b=b_1-b_{k+1},\quad R_s=a_{k+1}-a_1;\qquad
\text{买单撤销}\iff p<p_b-R_b,\quad\text{卖单撤销}\iff p>p_s+R_s.$$

等号保留。范围取实际档位价差；仅等距盘口可写成 $k\tau_p$。先撤反向单，再撤同向越界单；接受的撤单 ID 加入排除集合。剩余同向挂单阻止新单。计数、失败及部分成交规则见事件状态章。

maker 盘口量尺度为本方前三个有效价格档的数量均值，无效档不计分母，再受正 maker 数量上限限制。非正 maker cap 的含义按所在分支处理；负风险额度的无限额规则另见数量章。
''')

section('HIGH 主动幅度的可计算定义', 'HIGH 主动报价幅度', r'''
输入为信号 $s$、动作门槛 $\theta$、半价差 bp $H$、上限倍数 $U$、覆盖系数 $k$；$a,b$ 均为价格。

$$
r_0=\max((a-b)/(a+b),0),\quad e=\max(|s|/|\theta|-1,0),
$$
$$
u=1+(U-1)\tanh(e/2),\quad v=(|s|-|\theta|)k/H,\quad r=r_0\max(\min(v,u),0).
$$

先检查 $a+b\le0$ 并返回 0；随后若 $H\le0$、$U\le1$ 或 $|\theta|<10^{-9}$，返回 $r_0$；其余才计算 $e,u,v$。正常分支在 $|s|=|\theta|$ 时得到 $r=0$。

输出 $r$ 是价格比例，之后仍受调用者的基准幅度、最大幅度和步长处理。带大半价差提前返回的版本，还须执行其专属前置分支。
''')

section('三阶段状态机及覆盖顺序', '收益阶段与参数覆盖', r'''
阶段编码 $0,1,2$ 对应 P1、P2、P3。输入为 watcher 收益 $z$，门槛为 $e_2,x_2,e_3,x_3$。表内从左到右判断，未满足时保持原阶段；一次最多移动一个相邻阶段。

| 原阶段 | 正常模式 | `invert_phase=true` |
|---|---|---|
| P1 | $z\ge e_2\Rightarrow$ P2 | $z\le x_2\Rightarrow$ P2 |
| P2 | 先 $z\ge e_3\Rightarrow$ P3；否则 $z<x_2\Rightarrow$ P1 | 先 $z\le x_3\Rightarrow$ P3；否则 $z>e_2\Rightarrow$ P1 |
| P3 | $z<x_3\Rightarrow$ P2 | $z>e_3\Rightarrow$ P2 |

有交易数升级门槛的版本，还需叠加专属条件。倒置模式改变门槛的使用位置，不能只对 $z$ 取负。

阶段逐字段覆盖：$p_{eff}=p_{phase}$（`Some`），否则 $p_{eff}=p_{global}$（`None`）。每阶段 15 项为普通四阈值、净仓／增仓手数及金额、HIGH 开关与主动幅度参数、LOW 动作；完整名称见参数表。LOW 四阈值和平仓手数／金额不在覆盖范围内。覆盖后再做分组、动作、报价和数量计算。
''')

section('数量、金额与订单请求的层次', '数量约束与请求输出', r'''
区分当前持仓 $q$、本次请求 $v$、在途预占与实际成交量。金额 $A$ 按所选价格 $p$、乘数 $M$ 换算：$A/(pM)$；原指令常执行 `(A/p)/M`，逐位复现须保留顺序。

| 限额 | 约束对象 |
|---|---|
| `max_single_add_vol/amt` | 本次新增敞口 |
| `max_single_net_vol/amt` | 方向净敞口 |
| `max_single_close_vol/amt` | 平掉的反向旧仓 |

相应风险限额分支把负值映射为 $+\infty$，零仍是约束。开仓动作可合并新增量与反向平仓量；纯平仓量不得穿过零仓。某些复合分支使用 $\max(A/(pM),1)$，只是中间额度，最终仍受其他 cap 和步长限制。

请求前还需经过各库实际存在的时段、合约、在途、保证金及冲击过滤；具体顺序见回调章，SoS 的差异单列。价格和数量使用 `round_with_step_f64`，保留 mode。IOC、IAP 与带 target 的 IAP 是接口模式，实际撮合由引擎决定。

逐事件对齐的输出为 $(A,Q,p,v,\text{撤单 ID 序列},\text{返回状态},\text{本地状态变化})$。
''')

section('信号带触发：不能替换为普通信号扣成本', '信号带触发', r'''
触发器保存最后信号 $s$、上下界 $B_+,B_-$（偏移 `+0x80,+0x88`）：

$$B_+=s+k_+\sigma_c,\qquad B_-=s-k_-\sigma_c.$$

同时保存 $\mu\pm k_\pm\sigma_c$。$\mu,\sigma_c$ 来自选定窗口，$\sigma_c$ 是缓存值。指定键缺失或没有窗口时不赋值；未指定键时按 HashMap 取到的窗口处理。

普通带触发成本 $c=\min(\alpha_c|h|,c_{cap})$，分类值为

$$x=\begin{cases}\max(B_-+c,0),&s>0,\\\min(B_+-c,0),&s\le0.\end{cases}\qquad\text{输出 }(A(x,T),1).$$

正分支用下界加成本，负分支用上界减成本；加减号及成本上限均按原函数保留。含费用的 PV4 路径见本库专属公式。
''')

section('Taker / Maker / Mid 的报价分段', '报价类型、价格与等号边界', r'''
输入两侧信号 $s_-,s_+$。动作超额先四舍五入至 0.01，内部半价差先四舍五入至 0.1 bp：

$$E=\operatorname{round}_{0.01}\begin{cases}s_+-L_o,&A=0,\\L_c-s_-,&A=1,\\S_o-s_-,&A=2,\\s_+-S_c,&A=3,\end{cases}\qquad
H=\operatorname{round}_{0.1}\left(10^4(a-b)/(2m)\right).$$

| 条件 | 类型 $Q$ | 未取整价格 |
|---|---|---|
| $E>H$ | Taker（0） | 买 $a(1+r)$，卖 $b(1-r)$ |
| $E\le H$ 且 $E\le0$ | Maker（1） | 买卖两侧均为 $\min(b+0.2,a-0.2)$ |
| $0<E\le H$ | Mid（2） | $m$ |

$$r=\max(r_{base},\min(r_{max},10^{-4}(E-H))).$$

`max` 在 `min` 外；$r_{base}>r_{max}$ 时结果可超过 $r_{max}$。Maker 的 0.2 是常量，卖侧同样使用 `min`；价差小于 0.4 时辅助报价可低于买一。$E=H>0$ 属于 Mid。以上为 SM1/SM4 分段，SM3/SM3.1 按各自 B 门控处理。
''')

POINT = r'''
当前信号写入触发器 `+0x38`，$T$ 位于 `+0x40,+0x48,+0x50,+0x58`。PV1 成本与分类值为

$$c=\alpha_c|h|,\qquad x=\begin{cases}\max(s-c,0),&s>0,\\\min(s+c,0),&s\le0.\end{cases}\qquad\text{输出 }(A(x,T),1).$$

$\alpha_c$ 为成本倍率，$h$ 为传入价差尺度。先向零扣减成本，再分类；第二返回值固定为 1。例：$T=(3,-1,-3,1),c=1$ 时，$s=4,-4,0.5$ 依次得到开多、开空、无动作。
'''.strip()
POINT_COMM = r'''

商品模式的信号变换为：PV2 取事件次值；PV4 取 $\operatorname{sign}(s_0)|s_0|^{1/K_1}$；默认取 $s_0\alpha_1$，其中 $\alpha_1$ 对应 `pv1_alpha`。模式名大小写敏感，未匹配时走默认分支。

PV4 点触发改用 $c=(|h|+f)\alpha_c$，$f$ 为 `fee_bp`。原浮点实参顺序是 `cost_alpha, fee_bp, spread_bp`，绝对值仅作用于价差。
'''

AB_STATE = r'''
分别保存主触发器、B 缓存、touch、待处理 A 和遥测。设等待项为 $P_c=(A,t_A)$，barrier 超时为 $W_A$ 毫秒。

| 事件 | 状态更新与决策顺序 |
|---|---|
| A，无可复用 B | 先更新触发器，再写 $P_c$；新 A 覆盖旧 A 并重置等待起点 |
| A，有可复用 B | 使用缓存 B 直接决策，不留下等待 A |
| B，有等待 A | 先写 B 缓存，再删除 $P_c$，最后 `decide` |
| Depth，等待超时 | 先删除 $P_c$，再 `decide` |
| 释放后的 `decide` 失败 | $P_c$ 保持已删除；下一条 Depth 不重试该 A |

行情触发的超时条件为

$$(t_D-t_A)1000+10^{-6}\ge W_A.$$

epsilon 的单位为毫秒。超时须由事件检查，没有后台定时消费：已测 A 后 20ms 才到 B、期间无 Depth 时，B 仍释放 A。`decide` 重新检查时段并读取当前 SDK 时间和盘口。

B 复用与 A 等待均设为 10ms 的合成序列中，B 旧 5ms 可复用，旧 11ms 或 B 时间晚于 A 则不可复用；Depth 在 9ms 不消费、10ms 消费。A 在 5ms 被覆盖后，11ms Depth 仍等待，16ms 才消费。正常 17 个事件、失败 6 个事件已验证；完整 A/B 与撤单回报交错仍未闭合。

未开市或缺盘口的早退也可能写遥测，不能将其视为完全无副作用。
'''.strip()

SOS_STATE = r'''
先读取 `free_cash`，再读取 `meta_account`。账户判定标量为

$$C_{acct}=\begin{cases}C_{meta},&r_{meta}=1,\\C_{free},&r_{meta}\ne1.\end{cases}$$

$r_{meta}$ 是 C 接口返回码，恰为 1 才有快照。$C_{meta}$ 来自 Rust 布局 `+0x58`（C 布局 `+0x60`）的 double；业务名称尚未完全确定，保留该字段身份。

按决策章转移表更新 section，随后才读取盘口和执行普通交易。后续缺盘口或请求失败，不恢复旧 section。账户值为零会阻止需要正值／负值的升级条件。

验证共 108 组输入：人工注入初始 section 1/2/3，收益取 4、5、9、10、20、21，账户值取 −1、0、1，门槛固定为 `(10,20,5,20,5)`；分别检验 free_cash 回退及符号相反的快照覆盖。初态注入只验证边界，不表示自然到达该阶段的全过程已验收。
'''.strip()

def polish(t):
    # 仅替换明确同义的报告措辞，不统一改写数值、比较符或范围限定。
    swaps = {
        '详见本页深入补充。':'事件更新与失败保留规则见状态章。',
        '已在本页深入补充中验证':'已在状态章所列序列中验证',
        '范围与边界见下文持续深化':'范围与边界见状态章及验证附录',
        '本轮新增确定结果及具体剩余项见下文持续深化。':'已验证规则见状态章，剩余范围见本章。',
        '本页上述新增检查合计':'本页基础函数检查合计',
        '本轮机器码':'机器码',
        '本次新增本库 36 个':'本库另有 36 个',
        '本轮分别':'验证分别',
        '本轮实际看到':'已记录到',
        '本轮实测':'合成实测',
        '本轮两标记探测':'两标记探测',
        '这里明确列出已经确定的枚举、比较符、被动门控表和内存对应关系，不把尚未验证的时间路径包装成数学定理。':'枚举、比较符、被动门控表及内存映射已确定。',
        '这不是本文的经济学设计，而是本库原始函数的条件和加减号。':'',
    }
    for a,b in swaps.items(): t=t.replace(a,b)
    return re.sub(r'\n{3,}', '\n\n', t).strip()

def keep_links(before, after):
    pat=r'\[[^\]\n]*\]\(([^\)\n]+)\)'
    present=set(re.findall(pat,after))
    missing=[]
    for m in re.finditer(r'\[([^\]\n]*)\]\(([^\)\n]+)\)',before):
        if m.group(2) not in present:
            missing.append((m.group(1),m.group(2)));present.add(m.group(2))
    if missing:
        after+='\n\n### 补充证据定位\n\n'+'\n'.join(f'- [{label}]({url})' for label,url in missing)
    return after+'\n'

TOUCH = r'''
按合约保存 $G(c)=(b_G,a_G,t_G)$。订单请求接受后写入；拒绝时不写入。`on_depth` 在买一或卖一与缓存不等时删除记录，NaN 也导致不等；两者严格相等则保留。删除本身不发单。

同盘口且存在记录时，设超时为 $W$ 毫秒：

$$\mathrm{block}= (W\le0)\lor\bigl((t-t_G)\,1000<W\bigr).$$

正超时达到边界后放行，零／负超时须等变价。保留原 double 运算：$(1000.010-1000)1000\approx9.999999999990905$，仍被 10ms 门控；1000.011 放行。这里没有 SM3.1 barrier 的 epsilon。

验证为成功／拒绝 × 超时 10、0、−1ms，共 6 组、54 个回调，覆盖记录创建、保留、删除及重建；未覆盖真实多单生存期。
'''.strip()

PENDING = r'''
SDK 返回有序挂单列表 $P$。记本次已接受撤单的 ID 集合为 $E$，SDK 已在撤销中的 ID 集合为 $C$。方向字节为 Buy=1、Sell=0，与动作编码分开：

$$N_b=\sum_{o\in P}\mathbf1\{o.side=1\land o.id\notin E\cup C\},\qquad
N_s=\sum_{o\in P}\mathbf1\{o.side=0\land o.id\notin E\cup C\}.$$

计数单位是列表条目。部分成交、全部成交但仍列出的订单均计 1；未被排除的重复 ID 按出现次数计数。函数不检查剩余量、价格或年龄。

按列表顺序先撤反向单，再撤同向越界单。C 接口非负返回后才将 ID 加入 $E$；首个负返回立即终止，既有成功撤单及 $E$ 保留。同一 ID 一旦进入 $E$，本次不再重复提交。`cancel_pending_ids` 只读取 $C$。

同侧越界比较严格：等价保留，NaN 不触发。每库 85 个合成场景覆盖上述分支。向 `fb_ctx_pending_orders` 注入 −1 会触发原始 `capacity overflow` panic；12 库隔离进程均退出 134。真实引擎是否会返回负值及宿主如何处理 panic 尚未确定。
'''.strip()

CONTRACT = r'''
将回调写为 $F(S,e,c)=(S',R,\rho)$：$S$ 为本地状态，$e$ 为输入事件，$c$ 为 SDK 上下文，$R$ 为有序请求／发布序列，$\rho$ 为正常、错误或 panic 结果。失败时 $S'$ 不一定等于 $S$；按状态章保留已完成的写入。

复原需记录输入时间、合约／信号、原始数值、盘口、持仓和在途信息，再对齐有效阈值、动作、报价、请求量、撤单顺序及回调前后状态。根对象 `changed_offsets` 不是完整堆快照；窗口、树和队列须另行读取。
'''.strip()

titles = {
 'comm2 特有的组织方式与差异':'comm2 的主动价格与等待时间',
 'comm3 相对 comm2 的新增状态':'comm3 的执行链与版本差异',
 'comm3.1 的边界与例子':'comm3.1 的报价边界',
 'comm3.2 新增的提前返回':'大半价差的提前返回',
 'comm4 的阶段输入与实际作用':'comm4 的阶段输入',
 'comm4.1 的交易数升级门槛':'交易数门槛与盘口约束',
 'comm5 的阶段金额倍率与 XS 排名':'阶段金额倍率与 XS 缩放',
 'Rust 复合返回值与盘口数量上限':'返回数量与盘口 cap',
 'A/B 一次性报价的完整数学分段':'A/B 报价分段',
 '时间和主动门控不能折成一个 B 阈值':'B 时效、主动 veto 与 boost',
 'section 状态机：收益之外还有账户符号门控':'section 转移与账户条件',
 '不应补写不存在的盘口早退':'盘口异常的已测路径',
 '盘口有效性与单向时效判断':'盘口有效性与时效',
 'Touch 状态：请求接受后提交，拒绝时不提交':'Touch 的提交与释放',
 '非空挂单、部分成交和撤单失败的确定规则':'挂单计数与逐 ID 撤单',
 'TargetTaskStatus 的写入顺序与次数字段修正':'目标任务的提交、重试与完成量',
 '阶段比较与账户输入优先级已动态闭合':'账户取值与阶段提交顺序',
 '不能吞掉的报价缺失 panic':'报价缺失的 panic 分支',
 '候选树：逐节点队列和选择结果的序列验收':'候选配对的事件更新顺序',
 'XS 到实际订单：零倍率与平仓不是同一分支':'XS 的动作门控与订单量',
}

def refine_strategy(rel):
    old=original(rel); intro, items=split_sections(old)
    sections=dict(items); k=Path(rel).parent.name
    pre=intro.split('\n\n')
    pre[0]=f'# libstrategy_{k}.so：策略数学说明'
    pre[-1]=re.sub(r'。本文为.*', '。文档口径：核心规则、事件状态、验证范围和参数附录。',pre[-1])
    text='\n\n'.join(pre)+'\n\n'
    text+='阅读顺序：[输入与符号](#inputs) → [决策规则](#rules) → [事件与状态](#events) → [复原边界](#limits)。参数、数值表和证据集中在附录。\n\n'
    text+='<a id="inputs"></a>\n\n## 1. 输入与符号\n\n'+R['记号、输入与可复现边界'][1]+'\n\n'
    text+='<a id="rules"></a>\n\n## 2. 决策规则\n\n'
    core=[]
    for h,t in items:
        if h=='记号、输入与可复现边界' or h.startswith(('本库内嵌','本库全部配置','本轮机器','同库此前','逐事件','深入补充','持续深化','本库业务')):continue
        if h=='点触发的精确公式':
            t=POINT+(POINT_COMM if 'PV2' in t else '');h='点触发与信号变换'
        elif h in R: h,t=R[h]
        elif h=='comm5 的阶段金额倍率与 XS 排名':
            t=t[:t.index('横截面评分只使用')].strip()+'\n\n顺序为阶段覆盖 → XS 金额缩放 → 动作及数量约束。XS 不直接缩放信号；评分、初始化冻结和零倍率动作门控见状态章。'
        elif h=='阈值候选树、虚拟开平配对与中位数选择':
            t='每个候选和合约分别保存未开、多头或空头状态；已闭合配对用于统计时长。事件内先平后开、队列淘汰和失败保留见状态章。\n\n'+t[t.index('候选按配置'):]
            t=t[:t.index('更新、选择、实际交易是三个状态层次。')]+'虚拟配对时长是信号统计量；实际成交受盘口、在途、保证金与订单结果影响。'
        elif k=='sm2' and h=='正态概率、效用与最优报价':
            # 原稿 q 同时代表持仓和报价；本节统一用 p 表示报价。
            t=t.replace('U_b(q)','U_b(p)').replace('F(q)','F(p)').replace('(V_b-q)','(V_b-p)').replace('U_s(q)','U_s(p)').replace('(q-V_s)','(p-V_s)').replace('(q-u)','(p-u)').replace('$q=u+','$p=u+')
        if h=='LF4 的非对称持仓年龄阈值':
            t=t.replace('返回非零的路径提前返回，不继续同一轮下单。然后才做 `impact_block_check`。这里明确的是调用顺序，SDK 返回值的所有错误分类仍由外部接口定义。','SDK 包装层返回 `Err` 时停止，成功时才做 `impact_block_check`。这里的 Rust 错误变体与底层 C 返回码分开：已测 C 返回 −1 为失败，0 和 +1 均被接受。')
        if h=='外部四阈值的平移规则':
            t=t.replace('所以 $T_1^{eff}=W$；','在实数代数中，$T_1^{eff}=W$；').replace('这一内存关系直接确定','浮点实现保留“先减原值、再加各段原值”的顺序；上述代数等式不保证逐位成立。这一内存关系直接确定')
        core.append((titles.get(h,h),polish(t)))
    for i,(h,t) in enumerate(core,1): text+=f'### 2.{i} {h}\n\n{t}\n\n'

    event_h=next(h for h in sections if h.startswith('深入补充'))
    newer_h=next(h for h in sections if h.startswith('持续深化'))
    ev_intro,evs=split_sections(sections[event_h],3)
    new_intro,news=split_sections(sections[newer_h],3)
    evs=dict(evs);news=dict(news)
    context=evs.pop('合成环境与控制范围')
    measured=evs.pop('本库回调实测表')
    # 保存完整原始调用链到附录；将失败规则放到正文。
    table_end=measured.index('本库正向强信号实际 SDK 调用顺序为：')
    table=measured[:table_end].strip()
    trace=re.search(r'```text\n(.*?)\n```',measured,re.S).group(1)
    trace_items=[x.strip() for x in trace.split('→')]
    trace='\n→ '.join(' → '.join(trace_items[i:i+4]) for i in range(0,len(trace_items),4))
    failures=measured[measured.index('```',measured.index('```text')+3)+3:].strip()
    # 整体失败段改为精确、短的条目；SoS 使用其原始例外描述。
    if k not in ('sos5','sos6'):
        failures='决策动作依次经过 `margin_filter → cancel_by_pending_ts → impact_block_check`，再进入后续报价／下单。具体 SDK 调用链见附录。\n\n'
        failures+='- 保证金或冲击过滤返回枚举 4：无动作。\n- 超时撤单 C 接口返回负数：`Err`，停止后续冲击判断和发单；0 与 +1 均被包装层接受。\n- 订单 C 接口返回 −1：读取 `last_error` 后返回 `Err`。此前统计／触发状态不统一回滚；各专属状态见后文。\n- 仅 `is_trade_end=true` 且未启用强平：已测路径仍继续普通决策。'
    old_gap=evs.pop('本库剩余缺口与复原要求')
    new_gap=news.pop('当前明确剩余项')
    if '自适应状态与订单结果的边界' in evs and k=='sm4':
        evs.pop('自适应状态与订单结果的边界') # 旧根对象观察已被后续逐节点证据取代。
    states=[('请求顺序与失败返回',polish(failures))]
    for h,t in list(evs.items())+list(news.items()):
        if h.startswith('Touch 状态'): t=TOUCH
        if h=='非空挂单、部分成交和撤单失败的确定规则':t=PENDING
        if h=='盘口有效性与单向时效判断':
            t='Comm 主回调要求 $a>0,b>0$ 且 $t_{ctx}-t_{depth}\le1.0$ 秒。零买一／卖一在读取持仓前返回；旧 2 秒返回，旧 1 秒与未来 2 秒继续。该检查是单向时差。'
        if h=='不应补写不存在的盘口早退':
            t='已测零买一、零卖一、旧 2 秒输入没有统一触发 Comm 型早退，仍进入本库后续接口。这只确定调用路径，不保证异常盘口产生有效订单；复原时保留各自路径。'
        if h=='A/B 等待的确定状态机':
            t=AB_STATE
        if h=='阶段比较与账户输入优先级已动态闭合':
            t=SOS_STATE
        states.append((titles.get(h,h),polish(t)))
    text+='<a id="events"></a>\n\n## 3. 事件、状态与失败分支\n\n'
    text+='本章按“事件输入 → 状态写入 → SDK 请求 → 失败后状态”描述。接口接受只表示请求被接受，成交与撤单完成需后续回报。\n\n'
    for i,(h,t) in enumerate(states,1):text+=f'### 3.{i} {h}\n\n{t}\n\n'
    text+='<a id="limits"></a>\n\n## 4. 复原边界\n\n'+CONTRACT+'\n\n'
    # 通用缺口仅保留一处；保留本库具体范围。
    specific=old_gap.split('\n\n所有库还共同缺少')[0]
    if specific.startswith('仍缺真实撮合、撤单回报与账户状态联合回放'):specific=''
    text+=polish(specific+'\n\n'+new_gap)+'\n\n'
    text+='共同未闭合项：SDK 撮合、费用、账户接续及回报顺序的端到端等价；历史加密配置明文；上游预测公式。本文可指导已明确分支的实现，尚不是可替换原 `.so` 的完整插件。\n\n'
    text+='## 附录 A. 配置字段与默认值\n\n'+polish(sections['本库全部配置字段：真实解析默认值与状态偏移'])+'\n\n'
    if '本库内嵌 K1 全表' in sections:text+='## 附录 B. K1 常量表\n\n'+sections['本库内嵌 K1 全表']+'\n\n'
    text+='## 附录 C. 验证范围与合成输入\n\n'
    text+='### 基础函数\n\n'+polish(sections['本轮机器码核验及其覆盖范围'])+'\n\n'
    if '同库此前的补充验证' in sections:text+='### 同库补充证据\n\n'+sections['同库此前的补充验证']+'\n\n'
    text+='### 回调验证口径\n\n'+polish(ev_intro)+'\n\n'+polish(new_intro)+'\n\n'
    text+='### 合成环境\n\n'+context+'\n\n### 独立信号场景\n\n'+table+'\n\n'
    text+='### 正向强信号的完整 SDK 调用链\n\n```text\n'+trace+'\n```\n\n'
    text+='## 附录 D. 原始函数与证据\n\n'
    evidence=sections['本库业务函数证据索引']
    # 链接保留完整地址；常规符号去掉重复库前缀，模板符号留原文。
    evidence=re.sub(r'\[strategy_'+re.escape(k)+r'::([^\]]+)\]',r'[\1]',evidence)
    text+=polish(evidence)
    text=keep_links(old,text)
    # CommonMark 表格会先按竖线分列；数学绝对值使用 \vert，避免公式被截断。
    text='\n'.join(re.sub(r'\$[^$\n]+\$',lambda m:m.group().replace('|',r'\vert '),line) if line.startswith('|') else line for line in text.splitlines())+'\n'
    return text

def main():
    records=[]
    for p in sorted((B/'01_策略库与详细解读').glob('*/*.md')):
        rel=p.relative_to(B);before=original(rel);after=refine_strategy(rel)
        p.write_text(after)
        records.append({'path':str(rel),'before_chars':len(before),'after_chars':len(after),'sha256':hashlib.sha256(after.encode()).hexdigest()})
    (B/'07_清单与回执/语言精修逐库清单_20261114.json').write_text(json.dumps(records,ensure_ascii=False,indent=2)+'\n')
    print(json.dumps({'documents':len(records),'before_chars':sum(x['before_chars'] for x in records),'after_chars':sum(x['after_chars'] for x in records)},ensure_ascii=False))

if __name__=='__main__':main()
