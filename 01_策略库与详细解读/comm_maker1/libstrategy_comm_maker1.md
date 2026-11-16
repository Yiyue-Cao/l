# libstrategy_comm_maker1.so：策略数学说明

商品信号驱动的双边报价与数量计算器。PV4 使用带状信号触发，数量函数显式拆分新增敞口和反向仓位平仓；它不等同于 comm3 的 LOW 专用 maker 分支。

对应原件：`libstrategy_comm_maker1.so`，SHA-256 `465184d5fbf8af1a34568fe9b708305ac1ec0cc63480774c055b6b7e4ba8e4b9`。文档口径：核心规则、事件状态、验证范围和参数附录。

阅读顺序：[输入与符号](#inputs) → [决策规则](#rules) → [事件与状态](#events) → [复原边界](#limits)。参数、数值表和证据集中在附录。

<a id="inputs"></a>

## 1. 输入与符号

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

<a id="rules"></a>

## 2. 决策规则

### 2.1 四阈值与动作优先级

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

### 2.2 点触发与信号变换

当前信号写入触发器 `+0x38`，$T$ 位于 `+0x40,+0x48,+0x50,+0x58`。PV1 成本与分类值为

$$c=\alpha_c|h|,\qquad x=\begin{cases}\max(s-c,0),&s>0,\\\min(s+c,0),&s\le0.\end{cases}\qquad\text{输出 }(A(x,T),1).$$

$\alpha_c$ 为成本倍率，$h$ 为传入价差尺度。先向零扣减成本，再分类；第二返回值固定为 1。例：$T=(3,-1,-3,1),c=1$ 时，$s=4,-4,0.5$ 依次得到开多、开空、无动作。

### 2.3 信号带触发

触发器保存最后信号 $s$、上下界 $B_+,B_-$（偏移 `+0x80,+0x88`）：

$$B_+=s+k_+\sigma_c,\qquad B_-=s-k_-\sigma_c.$$

同时保存 $\mu\pm k_\pm\sigma_c$。$\mu,\sigma_c$ 来自选定窗口，$\sigma_c$ 是缓存值。指定键缺失或没有窗口时不赋值；未指定键时按 HashMap 取到的窗口处理。

普通带触发成本 $c=\min(\alpha_c|h|,c_{cap})$，分类值为

$$x=\begin{cases}\max(B_-+c,0),&s>0,\\\min(B_+-c,0),&s\le0.\end{cases}\qquad\text{输出 }(A(x,T),1).$$

正分支用下界加成本，负分支用上界减成本；加减号及成本上限均按原函数保留。含费用的 PV4 路径见本库专属公式。

### 2.4 持仓年龄对阈值的调整

独立函数 `dynamic_threshold` 的输入为持仓秒数 $h_p$，以及参数 $t_0,t_1,\Delta$，依次对应 `dyn_score_position_ts_threshold_s`、`dyn_score_max_position_ts_s`、`dyn_score_delta_score`：

$$
d=\begin{cases}
0,&t_0<0\lor t_1<0\lor h_p<t_0\lor |\Delta|\le10^{-9},\\
\left|\Delta\min\left(\frac{h_p-t_0}{\max(t_1-t_0,10^{-6})},1\right)\right|,&\text{其余},
\end{cases}
\qquad T'=(L_o-d,L_c+d,S_o+d,S_c-d).
$$

$h_p=t_0$ 时 $d=0$；终点后饱和。负 $\Delta$ 仍产生非负 $d$；$t_1\le t_0$ 使用分母下限，不报错。本式限定为该独立函数；LF4/TM5/TM6/SoS6 的内联旧逻辑需按各自章节实现。

### 2.5 窗口统计与投票

窗口保存 $(t_i,s_i)$ 及累计量 $N,S_1=\sum s_i,S_2=\sum s_i^2,P=\sum_{s_i>0}s_i,N_-=\sum_{s_i\le0}s_i$。每次**先插入，再删除年龄 $t-t_i>W$ 的旧点**；等号保留。累计量按原加减顺序更新。

$$
\mu=S_1/N,\qquad \sigma=\sqrt{\max(S_2/\max(N,1)-\mu^2,0)}.
$$

| 触发器 | 统计值或取值规则 |
|---|---|
| Mean | 将 $\mu$ 送入四阈值分类器 |
| Sharpe | $\vert \sigma\vert >10^{-6}$ 时取 $\mu/\sigma$，否则为 0；这是信号统计量 |
| RSI | $\vert N_-\vert >10^{-6}$ 时取 $100-100/(P/\vert N_-\vert +1)$，否则为 50 |
| Quantile | 排序后取下标 $\lfloor qN\rfloor$ 与 $\lfloor(1-q)N\rfloor$，不插值；越界可返回错误 |

`update` 更新和、平方和与均值，但并非所有版本都同步重算 `std_cache`。`WindowsStdTrigger` 读缓存；Sharpe 分支另行重算。信号带也须使用当时缓存值。

多窗口先产生候选动作，再计票。最高票比例须严格大于 `vote_rate`；并列结果涉及 HashMap 遍历，没有额外的多头或平仓优先级。窗口函数有静态证据，但所有窗口类型的完整状态序列尚未逐一验证。

### 2.6 波动／半价差分组与 K1

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

### 2.7 comm_maker1 的带状 PV4 与目标数量

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

### 2.8 数量约束与请求输出

区分当前持仓 $q$、本次请求 $v$、在途预占与实际成交量。金额 $A$ 按所选价格 $p$、乘数 $M$ 换算：$A/(pM)$；原指令常执行 `(A/p)/M`，逐位复现须保留顺序。

| 限额 | 约束对象 |
|---|---|
| `max_single_add_vol/amt` | 本次新增敞口 |
| `max_single_net_vol/amt` | 方向净敞口 |
| `max_single_close_vol/amt` | 平掉的反向旧仓 |

相应风险限额分支把负值映射为 $+\infty$，零仍是约束。开仓动作可合并新增量与反向平仓量；纯平仓量不得穿过零仓。某些复合分支使用 $\max(A/(pM),1)$，只是中间额度，最终仍受其他 cap 和步长限制。

请求前还需经过各库实际存在的时段、合约、在途、保证金及冲击过滤；具体顺序见回调章，SoS 的差异单列。价格和数量使用 `round_with_step_f64`，保留 mode。IOC、IAP 与带 target 的 IAP 是接口模式，实际撮合由引擎决定。

逐事件对齐的输出为 $(A,Q,p,v,\text{撤单 ID 序列},\text{返回状态},\text{本地状态变化})$。

<a id="events"></a>

## 3. 事件、状态与失败分支

本章按“事件输入 → 状态写入 → SDK 请求 → 失败后状态”描述。接口接受只表示请求被接受，成交与撤单完成需后续回报。

### 3.1 请求顺序与失败返回

决策动作依次经过 `margin_filter → cancel_by_pending_ts → impact_block_check`，再进入后续报价／下单。具体 SDK 调用链见附录。

- 保证金或冲击过滤返回枚举 4：无动作。
- 超时撤单 C 接口返回负数：`Err`，停止后续冲击判断和发单；0 与 +1 均被包装层接受。
- 订单 C 接口返回 −1：读取 `last_error` 后返回 `Err`。此前统计／触发状态不统一回滚；各专属状态见后文。
- 仅 `is_trade_end=true` 且未启用强平：已测路径仍继续普通决策。

### 3.2 盘口有效性与时效

Comm 主回调要求 $a>0,b>0$ 且 $t_{ctx}-t_{depth}\le1.0$ 秒。零买一／卖一在读取持仓前返回；旧 2 秒返回，旧 1 秒与未来 2 秒继续。该检查是单向时差。

### 3.3 挂单计数与逐 ID 撤单

SDK 返回有序挂单列表 $P$。记本次已接受撤单的 ID 集合为 $E$，SDK 已在撤销中的 ID 集合为 $C$。方向字节为 Buy=1、Sell=0，与动作编码分开：

$$N_b=\sum_{o\in P}\mathbf1\{o.side=1\land o.id\notin E\cup C\},\qquad
N_s=\sum_{o\in P}\mathbf1\{o.side=0\land o.id\notin E\cup C\}.$$

计数单位是列表条目。部分成交、全部成交但仍列出的订单均计 1；未被排除的重复 ID 按出现次数计数。函数不检查剩余量、价格或年龄。

按列表顺序先撤反向单，再撤同向越界单。C 接口非负返回后才将 ID 加入 $E$；首个负返回立即终止，既有成功撤单及 $E$ 保留。同一 ID 一旦进入 $E$，本次不再重复提交。`cancel_pending_ids` 只读取 $C$。

同侧越界比较严格：等价保留，NaN 不触发。每库 85 个合成场景覆盖上述分支。向 `fb_ctx_pending_orders` 注入 −1 会触发原始 `capacity overflow` panic；12 库隔离进程均退出 134。真实引擎是否会返回负值及宿主如何处理 panic 尚未确定。

### 3.4 主动与 maker 路径的撤单区别

在本次强买信号、零持仓夹具下，先撤卖单，再撤已有买单，成功后可发主动买单。SDK 仍列着已接受撤销的订单不会堵住该次请求；第二笔撤单失败则前一笔撤单保留、发单被截断。不能把 maker 的“保留合格本向单”直接套到主动分支，也不能把请求接受当成撤单已完成。

<a id="limits"></a>

## 4. 复原边界

将回调写为 $F(S,e,c)=(S',R,\rho)$：$S$ 为本地状态，$e$ 为输入事件，$c$ 为 SDK 上下文，$R$ 为有序请求／发布序列，$\rho$ 为正常、错误或 panic 结果。失败时 $S'$ 不一定等于 $S$；按状态章保留已完成的写入。

复原需记录输入时间、合约／信号、原始数值、盘口、持仓和在途信息，再对齐有效阈值、动作、报价、请求量、撤单顺序及回调前后状态。根对象 `changed_offsets` 不是完整堆快照；窗口、树和队列须另行读取。

真实撮合、成交后 SDK 挂单移除、费用与持仓接续尚未做端到端等价回放；窗口触发器并列投票与各种输入版本也不能由本轮订单测试代替。 不把本节辅助函数和合成回调通过写成整个策略已逐笔等价。

共同未闭合项：SDK 撮合、费用、账户接续及回报顺序的端到端等价；历史加密配置明文；上游预测公式。本文可指导已明确分支的实现，尚不是可替换原 `.so` 的完整插件。

## 附录 A. 配置字段与默认值

下表来自直接加载原始 `.so` 后调用其 `on_begin` 解析器；浮点字段用两个不同标记值匹配同一位置。偏移相对于策略对象起点，不是 ELF 文件偏移。Option 的 None 载荷不读取为默认数值。日志 SDK 为 no-op，其余 SDK 调用会 abort，未调用交易回调。

| 字段 | 解析值/默认状态 | 对象偏移 |
|---|---|---|
| `signal_mode` | "" | `0x40` |
| `pv1_alpha` | 1.0 | `0xa0` |
| `cost_alpha` | 1.0 | `0xa8` |
| `signal_trigger_mode` | "" | `0x58` |
| `vote_rate` | 0.1 | `0xb0` |
| `quantile` | 0.9 | `0xb8` |
| `signal_windows_s` | [] | `0x70` |
| `score_taker_rate_alpha` | 0.0 | `0xc0` |
| `taker_rate_baseline` | 0.0 | `0xc8` |
| `max_taker_rate` | 0.0 | `0xd0` |
| `trade_slippery` | 0.0 | `0xd8` |
| `close_position_block_ms` | 0.0 | `0xe0` |
| `max_single_add_vol` | 1.0 | `0xe8` |
| `max_single_add_amt` | 0.0 | `0xf0` |
| `max_single_net_vol` | 1.0 | `0xf8` |
| `max_single_net_amt` | 0.0 | `0x100` |
| `max_single_close_vol` | 0.0 | `0x108` |
| `max_single_close_amt` | 0.0 | `0x110` |
| `long_open_threshold` | 0.0 | `0x118` |
| `long_close_threshold` | 0.0 | `0x120` |
| `short_open_threshold` | 0.0 | `0x128` |
| `short_close_threshold` | 0.0 | `0x130` |
| `low_long_open_threshold` | None（缺省继承/无值） | `0x8` |
| `low_long_close_threshold` | None（缺省继承/无值） | `0x18` |
| `low_short_open_threshold` | None（缺省继承/无值） | `0x28` |
| `low_short_close_threshold` | None（缺省继承/无值） | `0x38` |
| `dyn_score_position_ts_threshold_s` | 0.0 | `0x138` |
| `dyn_score_max_position_ts_s` | 0.0 | `0x140` |
| `dyn_score_delta_score` | 0.0 | `0x148` |
| `use_dynamic_volspread_ratio` | false | `0x198` |
| `market_volatility_ms` | 60000.0 | `0x150` |
| `rolling_windows_ms` | 1200000.0 | `0x158` |
| `split_high_low_ratio_threshold` | 0.0 | `0x160` |
| `max_maker_limit_rate_bias_from_mid` | 0.0 | `0x168` |
| `order_max_pending_time_ms` | 0.0 | `0x170` |
| `maker_alpha_imb_delta` | 0.3 | `0x178` |
| `maker_vol_depth_window_ms` | 30000.0 | `0x180` |
| `maker_ticks_inside` | 1.0 | `0x188` |
| `maker_cancel_range_levels` | 3 | `0x190` |
| `low_action` | "" | `0x88` |

原始回执：[顶层解析](../../03_反编译与验证/数学化还原_20261114/libstrategy_comm_maker1.config_layout.json)；[字段数组](../../03_反编译与验证/策略反编译/libstrategy_comm_maker1/config_field_arrays.json)。默认字段是类型/初始化证据，不能代替历史加密配置的明文。

## 附录 B. K1 常量表

键为信号参数 ID；表中“缺失→1”表示该组没有此键，主回调使用默认 1。

| signal_parameter_id | LOW K1 | HIGH K1 |
|---:|---:|---:|
| 6225 | 0.3 | 0.7 |
| 6271 | 0.3 | 1.3 |
| 6272 | 0.3 | 1.3 |
| 6273 | 0.2 | 1.2 |
| 6274 | 0.2 | 1.0 |
| 6275 | 0.2 | 0.9 |
| 6276 | 0.2 | 0.9 |
| 6277 | 0.2 | 0.8 |
| 6278 | 1.0 | 1.0 |
| 6279 | 1.0 | 1.0 |
| 6280 | 1.0 | 1.0 |
| 6281 | 1.0 | 1.0 |
| 6282 | 1.0 | 1.0 |
| 6283 | 1.0 | 1.0 |
| 6284 | 1.0 | 1.0 |
| 6285 | 1.0 | 1.0 |
| 6286 | 1.0 | 1.0 |
| 6287 | 1.0 | 1.0 |
| 6288 | 1.0 | 1.0 |
| 6289 | 1.0 | 1.0 |
| 62788 | 0.4 | 1.6 |
| 62789 | 0.3 | 1.6 |
| 62790 | 0.3 | 1.4 |
| 62791 | 0.2 | 1.3 |
| 62792 | 0.2 | 1.1 |
| 62793 | 0.2 | 1.0 |
| 62794 | 0.2 | 0.9 |
| 62800 | 0.2 | 1.2 |
| 62801 | 0.2 | 1.0 |
| 62802 | 0.3 | 1.0 |
| 62803 | 0.3 | 0.9 |
| 62810 | 0.2 | 缺失→1 |
| 62811 | 0.2 | 缺失→1 |
| 62812 | 0.3 | 缺失→1 |
| 62813 | 0.3 | 缺失→1 |
| 62814 | 0.4 | 缺失→1 |
| 62820 | 0.3 | 1.1 |
| 62821 | 0.3 | 1.0 |
| 62822 | 0.3 | 0.9 |
| 62823 | 0.4 | 0.8 |
| 62824 | 0.5 | 0.7 |
| 62825 | 0.6 | 0.7 |
| 62900 | 0.3 | 1.2 |
| 62901 | 0.3 | 1.0 |
| 62902 | 0.3 | 1.0 |
| 62903 | 0.3 | 0.9 |
| 62904 | 0.4 | 0.8 |
| 62905 | 0.5 | 0.7 |
| 82000 | 0.3 | 1.2 |
| 82001 | 0.3 | 1.1 |
| 82002 | 0.3 | 1.0 |
| 82003 | 0.4 | 0.9 |
| 82004 | 0.5 | 0.8 |
| 82005 | 0.6 | 0.8 |
| 628100 | 0.3 | 1.1 |
| 628110 | 0.3 | 1.0 |
| 628120 | 0.3 | 0.9 |
| 628130 | 0.4 | 0.8 |
| 628140 | 0.5 | 0.7 |
| 628150 | 0.6 | 0.7 |
| 628300 | 0.4 | 1.5 |
| 628310 | 0.4 | 1.4 |
| 628320 | 0.3 | 1.2 |
| 628330 | 0.3 | 1.0 |
| 628340 | 0.3 | 0.9 |
| 628350 | 0.3 | 0.8 |
| 628360 | 0.3 | 0.7 |
| 628370 | 0.3 | 0.7 |
| 628800 | 0.4 | 1.4 |
| 628810 | 0.4 | 1.3 |
| 628820 | 0.3 | 1.1 |
| 628830 | 0.3 | 1.0 |
| 628840 | 0.2 | 0.8 |
| 628850 | 0.2 | 0.7 |
| 628860 | 0.3 | 0.7 |
| 628870 | 0.3 | 0.6 |
| 628880 | 0.4 | 0.6 |
| 628890 | 0.5 | 0.7 |
| 629000 | 0.3 | 1.0 |
| 629010 | 0.3 | 1.0 |
| 629020 | 0.3 | 0.9 |
| 629030 | 0.4 | 0.8 |
| 629040 | 0.5 | 0.7 |
| 629050 | 0.6 | 0.7 |
| 629200 | 0.3 | 1.1 |
| 629210 | 0.3 | 1.0 |
| 629220 | 0.3 | 0.9 |
| 629230 | 0.4 | 0.8 |
| 629240 | 0.5 | 0.7 |
| 629250 | 0.6 | 0.7 |
| 629260 | 0.7 | 0.7 |
| 629270 | 0.8 | 0.7 |
| 629280 | 0.9 | 0.8 |
| 629290 | 0.9 | 0.8 |
| 629400 | 0.2 | 1.1 |
| 629410 | 0.2 | 1.0 |
| 629420 | 0.3 | 0.9 |
| 629430 | 0.3 | 0.8 |
| 629440 | 0.4 | 0.7 |
| 629450 | 0.6 | 0.7 |
| 629460 | 0.7 | 0.7 |
| 629470 | 0.8 | 0.7 |
| 629480 | 0.9 | 0.8 |
| 629490 | 1.0 | 0.8 |
| 629600 | 0.4 | 1.5 |
| 629610 | 0.4 | 1.4 |
| 629620 | 0.3 | 1.2 |
| 629630 | 0.3 | 1.1 |
| 629640 | 0.3 | 0.9 |
| 629650 | 0.3 | 0.8 |
| 629660 | 0.3 | 0.7 |
| 629670 | 0.4 | 0.7 |
| 629680 | 0.4 | 0.7 |
| 629690 | 0.5 | 0.7 |
| 820000 | 0.3 | 1.2 |
| 820010 | 0.3 | 1.0 |
| 820020 | 0.3 | 0.9 |
| 820030 | 0.4 | 0.8 |
| 820040 | 0.5 | 0.7 |
| 820050 | 0.6 | 0.7 |
| 820500 | 0.4 | 1.5 |
| 820510 | 0.4 | 1.4 |
| 820520 | 0.3 | 1.2 |
| 820530 | 0.3 | 1.0 |
| 820540 | 0.3 | 0.9 |
| 820550 | 0.3 | 0.8 |
| 820560 | 0.4 | 0.7 |
| 820570 | 0.4 | 0.7 |
| 820800 | 0.3 | 1.0 |
| 820810 | 0.3 | 0.9 |
| 820820 | 0.3 | 0.8 |
| 820830 | 0.4 | 0.7 |
| 820840 | 0.5 | 0.7 |
| 820850 | 0.6 | 0.7 |
| 820860 | 0.7 | 0.7 |
| 820870 | 0.8 | 0.7 |
| 820880 | 0.9 | 0.8 |
| 820890 | 1.0 | 0.8 |
| 821000 | 0.3 | 1.1 |
| 821010 | 0.3 | 1.0 |
| 821020 | 0.3 | 0.9 |
| 821030 | 0.4 | 0.8 |
| 821040 | 0.5 | 0.7 |
| 821050 | 0.6 | 0.7 |
| 821060 | 0.7 | 0.7 |
| 821070 | 0.8 | 0.7 |
| 821080 | 0.9 | 0.8 |
| 821090 | 1.0 | 0.8 |
| 821300 | 0.4 | 1.7 |
| 821310 | 0.4 | 1.5 |
| 821320 | 0.3 | 1.3 |
| 821330 | 0.3 | 1.2 |
| 821340 | 0.3 | 1.0 |
| 821350 | 0.3 | 0.9 |
| 821360 | 0.3 | 0.8 |
| 821370 | 0.4 | 0.7 |
| 821380 | 0.4 | 0.7 |
| 821390 | 0.5 | 0.7 |
| 821500 | 0.4 | 1.7 |
| 821510 | 0.3 | 1.5 |
| 821520 | 0.3 | 1.3 |
| 821530 | 0.2 | 1.1 |
| 821540 | 0.2 | 1.0 |
| 821550 | 0.2 | 0.8 |
| 821560 | 0.3 | 0.8 |
| 821570 | 0.3 | 0.7 |
| 821580 | 0.4 | 0.7 |
| 821590 | 0.5 | 0.7 |
| 822100 | 0.2 | 1.1 |
| 822110 | 0.3 | 1.0 |
| 822120 | 0.3 | 0.9 |
| 822130 | 0.3 | 0.8 |
| 822140 | 0.4 | 0.7 |
| 822150 | 0.6 | 0.7 |
| 822160 | 0.7 | 0.7 |
| 822170 | 0.9 | 0.7 |
| 822180 | 1.0 | 0.8 |
| 822190 | 1.1 | 0.8 |
| 822300 | 0.3 | 1.1 |
| 822310 | 0.3 | 1.0 |
| 822320 | 0.3 | 0.9 |
| 822330 | 0.4 | 0.8 |
| 822340 | 0.5 | 0.7 |
| 822350 | 0.6 | 0.7 |
| 822360 | 0.7 | 0.7 |
| 822370 | 0.8 | 0.7 |
| 822380 | 0.9 | 0.8 |
| 822390 | 1.0 | 0.8 |

[该 so 独立提取的原始数值](../../03_反编译与验证/数学化还原_20261114/libstrategy_comm_maker1.k1_maps.json)。

## 附录 C. 验证范围与合成输入

### 基础函数

| 原始函数/模型 | 案例数 | 通过 | 证据 |
|---|---:|---:|---|
| `point_signal_trigger_pv4_band` | 1200 | 1200 | [回执](../../03_反编译与验证/数学化还原_20261114/libstrategy_comm_maker1.leaf_validation.json) |
| `point_signal_trigger_pv1_spread` | 1200 | 1200 | [回执](../../03_反编译与验证/数学化还原_20261114/libstrategy_comm_maker1.leaf_validation.json) |
| `dynamic_threshold` | 288 | 288 | [回执](../../03_反编译与验证/数学化还原_20261114/libstrategy_comm_maker1.leaf_validation.json) |
| `VolSpreadRatio::update` | 500 | 500 | [回执](../../03_反编译与验证/数学化还原_20261114/libstrategy_comm_maker1.state_kernel_validation.json) |

本页基础函数检查合计 **3188/3188**。这是原始 ELF 叶函数/指定状态函数的合成输入检查，不能扩写为整个策略或全部历史订单的等价验收。点触发与枚举用精确比较；浮点核验容差和逐位比较范围写在脚本/回执中。

### 回调验证口径

本节在前述叶函数核验之外，直接加载本页 SHA-256 对应的原始 ELF，先调用原始 `on_begin`，再调用原始业务回调。SDK 换成隔离桩：只提供合成数据并记录调用，不进行撮合、不提交回测。正常返回与错误返回按 Rust `Result` 的真实返回约定区分；错误指针的具体地址不用于数值比较。以下“订单成功”仅表示接口接受请求，不表示成交。

本库本轮有 **18 个独立 on_signal 场景**；另有下文列出的专项序列。针对可观察调用顺序/状态的显式断言为 **17/17**。断言数不等于独立场景数，更不等于完整状态空间覆盖。[本库事件回执](../../03_反编译与验证/事件状态验证_20261114/libstrategy_comm_maker1.events.json)；[逐条断言及全库口径](../../03_反编译与验证/事件状态验证_20261114/verification_summary.json)。

本库另有 36 个原始 `on_signal` 场景，包含空/单侧/双侧/多笔订单与指定第几笔撤单失败。[逐事件回执](../../03_反编译与验证/持续深化_20261114/libstrategy_comm_maker1.pending_events.json)。SDK 仅记录请求，不实际成交。另用修正后的五档盘口重新运行上一轮全部状态测试，1111 项旧断言仍通过；这次回归不重复算新增覆盖。

### 合成环境

基线合约 IF，订阅信号 A，事件时刻 1000 秒，买一 99、卖一 101，五档数量均为 10，价格步长 0.2、数量步长 1、乘数 10、账户持仓和成本均为 0、在途列表为空。SDK 价差输入固定为 1，费用输入为 0；这是独立控制各接口的分支试验，未声称这些值来自同一套真实行情计算。强信号为 ±1000；普通非 SoS 库的高阈值基线用 ±100000。主动试验将新增/净仓/平仓手数限额设为 1/10/1，支持的金额限额设为 -1；其余使用各库解析缺省值。SoS 的阈值属于 section，顶层同名字段不能代替 section 内字段，因此其“高阈值基线”不保证无动作。所有具体输入以脚本和回执为准。

根对象 `changed_offsets` 只记录该对象本体字节变化；它不是完整堆快照，不能由空列表断言所有内部窗口/树节点都没更新。专项序列另外读取门控长度、任务字段或队列元素。

### 独立信号场景

| 场景 | 原始回调结果 | 发单请求 | 关键路径/最后边界 |
|---|---|---:|---|
| 未订阅信号 | 正常返回 | 0 | `无 SDK 调用` |
| 另一合约代码 | 正常返回 | 0 | `无 SDK 调用` |
| 尚未进入交易时段 | 正常返回 | 0 | `is_trade_start` |
| SDK 无盘口 | 正常返回 | 0 | `depth` |
| 高阈值基线 | 正常返回 | 0 | `impact_block_check` |
| 卖一为 0 | 正常返回 | 0 | `depth` |
| 盘口比当前时间旧 2 秒 | 正常返回 | 0 | `time_sec` |
| 交易结束但未启用强平 | 正常返回 | 0 | `impact_block_check` |
| 正向强信号 | 正常返回 | 1 | `place_order_iap_with_target` |
| 负向强信号 | 正常返回 | 1 | `place_order_iap_with_target` |
| 订单接口返回 -1 | 错误返回 | 1 | `last_error` |
| 超时撤单接口返回 -1 | 错误返回 | 0 | `cancel_by_pending_ts` |
| 保证金过滤返回无动作 | 正常返回 | 0 | `impact_block_check` |
| 冲击过滤桩返回无动作 | 正常返回 | 0 | `impact_block_check` |
| 撤单接口返回 +1 | 正常返回 | 1 | `place_order_iap_with_target` |
| 盘口恰旧 1 秒 | 正常返回 | 0 | `impact_block_check` |
| 盘口比当前时间新 2 秒 | 正常返回 | 0 | `impact_block_check` |
| 买一为 0 | 正常返回 | 0 | `depth` |

### 正向强信号的完整 SDK 调用链

```text
inst_start_time_sec → is_trade_start → is_trade_end → depth
→ time_sec → time_sec → spread_bp → fee_bp
→ contract_mult → price_step → vol_step → position
→ position_holding_secs → is_should_lock → margin_filter → cancel_by_pending_ts
→ impact_block_check → pending_orders → pending_orders → pending_orders
→ pending_orders → cancel_pending_ids → liquidity_consumption → is_night
→ place_order_iap_with_target
```

## 附录 D. 原始函数与证据

地址统一使用未重定位 ELF 虚拟地址；Ghidra C 中的 `001xxxxx` 是项目加载基址后的地址，两者不要混淆。下列索引使每个计算/回调都可回到本库证据，不用其他库的同名函数替代。

- [<strategy_comm_maker1::StrategyCommMaker1 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin](../../03_反编译与验证/策略反编译/libstrategy_comm_maker1/decompiled_repaired/00000000000475c0.c)（ELF `0x475c0`，840 字节）。
- [<strategy_comm_maker1::StrategyCommMaker1 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth](../../03_反编译与验证/策略反编译/libstrategy_comm_maker1/decompiled_repaired/0000000000049dc0.c)（ELF `0x49dc0`，598 字节）。
- [<strategy_comm_maker1::StrategyCommMaker1 as future_backtest_sdk::plugin::StrategyPlugin>::on_finish](../../03_反编译与验证/策略反编译/libstrategy_comm_maker1/decompiled_repaired/000000000004a020.c)（ELF `0x4a020`，280 字节）。
- [<strategy_comm_maker1::StrategyCommMaker1 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal](../../03_反编译与验证/策略反编译/libstrategy_comm_maker1/decompiled_repaired/0000000000047910.c)（ELF `0x47910`，9382 字节）。
- [cancel_side](../../03_反编译与验证/策略反编译/libstrategy_comm_maker1/decompiled_repaired/0000000000046840.c)（ELF `0x46840`，922 字节）。
- [decide_quote](../../03_反编译与验证/策略反编译/libstrategy_comm_maker1/decompiled_repaired/000000000004a600.c)（ELF `0x4a600`，524 字节）。
- [signal_trigger::SignalTrigger::update_score](../../03_反编译与验证/策略反编译/libstrategy_comm_maker1/decompiled_repaired/0000000000060f80.c)（ELF `0x60f80`，572 字节）。
- [signal_trigger::SignalTrigger::windows_rsi_trigger](../../03_反编译与验证/策略反编译/libstrategy_comm_maker1/decompiled_repaired/0000000000061e40.c)（ELF `0x61e40`，554 字节）。
- [signal_trigger::SignalTrigger::windows_std_trigger](../../03_反编译与验证/策略反编译/libstrategy_comm_maker1/decompiled_repaired/0000000000061420.c)（ELF `0x61420`，259 字节）。
- [signal_trigger::SignalTrigger::windows_mean_trigger](../../03_反编译与验证/策略反编译/libstrategy_comm_maker1/decompiled_repaired/0000000000061310.c)（ELF `0x61310`，259 字节）。
- [signal_trigger::SignalTrigger::windows_sharpe_trigger](../../03_反编译与验证/策略反编译/libstrategy_comm_maker1/decompiled_repaired/0000000000061bf0.c)（ELF `0x61bf0`，586 字节）。
- [signal_trigger::SignalTrigger::windows_quantile_trigger](../../03_反编译与验证/策略反编译/libstrategy_comm_maker1/decompiled_repaired/0000000000061530.c)（ELF `0x61530`，1717 字节）。
- [signal_trigger::SignalTrigger::point_signal_trigger_pv4_band](../../03_反编译与验证/策略反编译/libstrategy_comm_maker1/decompiled_repaired/0000000000061250.c)（ELF `0x61250`，182 字节）。
- [signal_trigger::SignalTrigger::point_signal_trigger_pv1_spread](../../03_反编译与验证/策略反编译/libstrategy_comm_maker1/decompiled_repaired/00000000000611c0.c)（ELF `0x611c0`，137 字节）。
- [signal_trigger::dynamic_threshold](../../03_反编译与验证/策略反编译/libstrategy_comm_maker1/decompiled_repaired/00000000000625e0.c)（ELF `0x625e0`，152 字节）。
- [_ZN20strategy_comm_maker114signal_trigger17enum_rate_counter17h7893d28320393014E.llvm.3918936404547024942](../../03_反编译与验证/策略反编译/libstrategy_comm_maker1/decompiled_repaired/0000000000062070.c)（ELF `0x62070`，1378 字节）。
- [signal_trigger::TsQuantileCalculator::update](../../03_反编译与验证/策略反编译/libstrategy_comm_maker1/decompiled_repaired/0000000000060b90.c)（ELF `0x60b90`，1001 字节）。
- [get_quote_price::get_quote_price](../../03_反编译与验证/策略反编译/libstrategy_comm_maker1/decompiled_repaired/000000000005e990.c)（ELF `0x5e990`，1978 字节）。
- [CommMaker1Params::signal_mode](../../03_反编译与验证/策略反编译/libstrategy_comm_maker1/decompiled_repaired/00000000000466c0.c)（ELF `0x466c0`，61 字节）。
- [CommMaker1Params::low_action_enum](../../03_反编译与验证/策略反编译/libstrategy_comm_maker1/decompiled_repaired/0000000000046810.c)（ELF `0x46810`，47 字节）。
- [CommMaker1Params::signal_trigger_mode](../../03_反编译与验证/策略反编译/libstrategy_comm_maker1/decompiled_repaired/0000000000046700.c)（ELF `0x46700`，266 字节）。
- [vol_spread_ratio::VolSpreadRatio::update](../../03_反编译与验证/策略反编译/libstrategy_comm_maker1/decompiled_repaired/000000000005e6f0.c)（ELF `0x5e6f0`，658 字节）。
- [live_pending_counts](../../03_反编译与验证/策略反编译/libstrategy_comm_maker1/decompiled_repaired/0000000000047050.c)（ELF `0x47050`，1377 字节）。
- [cancel_order_use_range](../../03_反编译与验证/策略反编译/libstrategy_comm_maker1/decompiled_repaired/0000000000046be0.c)（ELF `0x46be0`，1121 字节）。
- [compute_target_vol_buy](../../03_反编译与验证/策略反编译/libstrategy_comm_maker1/decompiled_repaired/000000000004a140.c)（ELF `0x4a140`，588 字节）。
- [compute_target_vol_sell](../../03_反编译与验证/策略反编译/libstrategy_comm_maker1/decompiled_repaired/000000000004a390.c)（ELF `0x4a390`，617 字节）。
- [place](../../03_反编译与验证/策略反编译/libstrategy_comm_maker1/decompiled_repaired/000000000004a810.c)（ELF `0x4a810`，27 字节）。
- [fb_strategy_sdk_abi_version](../../03_反编译与验证/策略反编译/libstrategy_comm_maker1/decompiled_repaired/0000000000058950.c)（ELF `0x58950`，6 字节）。
- [fb_strategy_sdk_version_str](../../03_反编译与验证/策略反编译/libstrategy_comm_maker1/decompiled_repaired/0000000000058960.c)（ELF `0x58960`，73 字节）。

[完整反汇编](../../03_反编译与验证/策略反编译/libstrategy_comm_maker1/assembly.txt)；[核心伪代码集合](../../03_反编译与验证/策略反编译/libstrategy_comm_maker1/核心伪代码.c)。

### 补充证据定位

- [本库 85 场景回执](../../03_反编译与验证/持续深化_20261114/libstrategy_comm_maker1.pending_helpers.json)
