# libstrategy_sm3_1.so：策略数学说明

将 A/B 协作扩展为显式门控状态机：B 缓存寿命、A 等待 B、主动否决、被动跳过/退档、撤单最小驻留分别有独立参数。

对应原件：`libstrategy_sm3_1.so`，SHA-256 `991bc6e8a02a6d91e28859ad1a09b904910f66a4e1c55c44542af1897e53af08`。文档口径：核心规则、事件状态、验证范围和参数附录。

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

### 2.2 信号带触发

触发器保存最后信号 $s$、上下界 $B_+,B_-$（偏移 `+0x80,+0x88`）：

$$B_+=s+k_+\sigma_c,\qquad B_-=s-k_-\sigma_c.$$

同时保存 $\mu\pm k_\pm\sigma_c$。$\mu,\sigma_c$ 来自选定窗口，$\sigma_c$ 是缓存值。指定键缺失或没有窗口时不赋值；未指定键时按 HashMap 取到的窗口处理。

普通带触发成本 $c=\min(\alpha_c|h|,c_{cap})$，分类值为

$$x=\begin{cases}\max(B_-+c,0),&s>0,\\\min(B_+-c,0),&s\le0.\end{cases}\qquad\text{输出 }(A(x,T),1).$$

正分支用下界加成本，负分支用上界减成本；加减号及成本上限均按原函数保留。含费用的 PV4 路径见本库专属公式。

### 2.3 持仓年龄对阈值的调整

独立函数 `dynamic_threshold` 的输入为持仓秒数 $h_p$，以及参数 $t_0,t_1,\Delta$，依次对应 `dyn_score_position_ts_threshold_s`、`dyn_score_max_position_ts_s`、`dyn_score_delta_score`：

$$
d=\begin{cases}
0,&t_0<0\lor t_1<0\lor h_p<t_0\lor |\Delta|\le10^{-9},\\
\left|\Delta\min\left(\frac{h_p-t_0}{\max(t_1-t_0,10^{-6})},1\right)\right|,&\text{其余},
\end{cases}
\qquad T'=(L_o-d,L_c+d,S_o+d,S_c-d).
$$

$h_p=t_0$ 时 $d=0$；终点后饱和。负 $\Delta$ 仍产生非负 $d$；$t_1\le t_0$ 使用分母下限，不报错。本式限定为该独立函数；LF4/TM5/TM6/SoS6 的内联旧逻辑需按各自章节实现。

### 2.4 返回数量与盘口 cap

`get_quote_vol` 的 `RAX=1` 表示存在返回值，真正数量从 `XMM0` 返回。设原请求为 $v$，传入 cap 为 $C$，布尔开关为 $g$：

$$V(v,Q,g,C)=\begin{cases}
v,&Q=0,\\
\operatorname{sign}(v)\min(|v|,C),&Q\in\{1,2\}\land g,\\
v,&Q\in\{1,2\}\land\neg g,\\
0,&Q=3\ (Skip).
\end{cases}$$

这解释了为何反编译 C 中连续出现 `return 1` 不能推断每次只下一手。随后 `apply_book_vol_cap` 的主动分支使用报价覆盖的对手五档累计量；当 `book_vol_cap=false` 时该盘口 cap 视为无限，但正的 `max_single_taker_vol` 仍可截断。被动类型 1/2 在 `book_vol_cap=false` 时直接返回原请求，因而该函数内部的 maker 盘口 cap 与进一步 maker cap 都不会执行；启用时采用本方前三档有效价格数量均值，并结合正 maker cap 限制。最后保留买卖符号并按数量步长处理。

### 2.5 SM3.1 门控参数的合法枚举

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

### 2.6 被动门控的确切逻辑

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

### 2.7 B 时效、主动 veto 与 boost

`gate_b_reuse_max_age_ms` 限制缓存 B 的可用年龄；`gate_wait_mode=barrier` 允许 A 等待 B，但有 `gate_a_wait_b_timeout_ms`。主动 veto 又有 scope 和 downgrade/block 两种结果；撤单另有 `gate_cancel_min_rest_ms`。一个 B 同时可能对新的主动请求、已有被动单、缓存等待产生不同作用。

编译后的门控标量与原参数各保存一份：例如 veto 门槛在参数 `+0x1b8` 与编译区 `+0x218`，deepen ticks 在 `+0x1d0/+0x230`，maker 门槛在 `+0x1d8/+0x238`，mode 在 `+0x240`。两标记探测核对了这些拷贝，不能把重复位置误认为两个独立配置。

被动门控已完成 240 个原始机器码案例，覆盖六模式、双方向、有效/无效、scope 开/关和门槛两侧与等号。尚未闭合的是所有 A/B 到达顺序、barrier 超时与撤单回报交织的完整状态轨迹，以及主动 boost/veto 所有分支的动态矩阵。枚举、比较符、被动门控表及内存映射已确定。

主动门控中先用方向调整后的 $z$ 判断逆向条件 $v\land z<-\theta_{veto}$。scope 为 `taker_mid` 时两类均覆盖，`taker_only` 只覆盖 Taker，`mid_only` 只覆盖 Mid。downgrade 与 block 分别走被动候选/Skip 路径，不能一律置零原始信号。

另有主动 boost：$\text{gate\_taker\_boost\_bp}>0$ 且 B 有效且 $z>\text{gate\_taker\_boost\_th}$ 时，在基础主动比例完成 `min/max` 后额外加 `boost_bp*1e-4`。因此最终比例可能超过 boost 之前的 `max_taker_rate`；不能为“遵守上限”把 boost 移到 cap 之前。

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

### 3.2 盘口异常的已测路径

已测零买一、零卖一、旧 2 秒输入没有统一触发 Comm 型早退，仍进入本库后续接口。这只确定调用路径，不保证异常盘口产生有效订单；复原时保留各自路径。

### 3.3 A/B 等待的确定状态机

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

### 3.4 挂单计数与逐 ID 撤单

SDK 返回有序挂单列表 $P$。记本次已接受撤单的 ID 集合为 $E$，SDK 已在撤销中的 ID 集合为 $C$。方向字节为 Buy=1、Sell=0，与动作编码分开：

$$N_b=\sum_{o\in P}\mathbf1\{o.side=1\land o.id\notin E\cup C\},\qquad
N_s=\sum_{o\in P}\mathbf1\{o.side=0\land o.id\notin E\cup C\}.$$

计数单位是列表条目。部分成交、全部成交但仍列出的订单均计 1；未被排除的重复 ID 按出现次数计数。函数不检查剩余量、价格或年龄。

按列表顺序先撤反向单，再撤同向越界单。C 接口非负返回后才将 ID 加入 $E$；首个负返回立即终止，既有成功撤单及 $E$ 保留。同一 ID 一旦进入 $E$，本次不再重复提交。`cancel_pending_ids` 只读取 $C$。

同侧越界比较严格：等价保留，NaN 不触发。每库 85 个合成场景覆盖上述分支。向 `fb_ctx_pending_orders` 注入 −1 会触发原始 `capacity overflow` panic；12 库隔离进程均退出 134。真实引擎是否会返回负值及宿主如何处理 panic 尚未确定。

### 3.5 主动与 maker 路径的撤单区别

在本次强买信号、零持仓夹具下，先撤卖单，再撤已有买单，成功后可发主动买单。SDK 仍列着已接受撤销的订单不会堵住该次请求；第二笔撤单失败则前一笔撤单保留、发单被截断。不能把 maker 的“保留合格本向单”直接套到主动分支，也不能把请求接受当成撤单已完成。

<a id="limits"></a>

## 4. 复原边界

将回调写为 $F(S,e,c)=(S',R,\rho)$：$S$ 为本地状态，$e$ 为输入事件，$c$ 为 SDK 上下文，$R$ 为有序请求／发布序列，$\rho$ 为正常、错误或 panic 结果。失败时 $S'$ 不一定等于 $S$；按状态章保留已完成的写入。

复原需记录输入时间、合约／信号、原始数值、盘口、持仓和在途信息，再对齐有效阈值、动作、报价、请求量、撤单顺序及回调前后状态。根对象 `changed_offsets` 不是完整堆快照；窗口、树和队列须另行读取。

A/B barrier 与真实异步撤单回报、盘口门控的完整组合尚未验收。 不把本节辅助函数和合成回调通过写成整个策略已逐笔等价。

共同未闭合项：SDK 撮合、费用、账户接续及回报顺序的端到端等价；历史加密配置明文；上游预测公式。本文可指导已明确分支的实现，尚不是可替换原 `.so` 的完整插件。

## 附录 A. 配置字段与默认值

下表来自直接加载原始 `.so` 后调用其 `on_begin` 解析器；浮点字段用两个不同标记值匹配同一位置。偏移相对于策略对象起点，不是 ELF 文件偏移。Option 的 None 载荷不读取为默认数值。日志 SDK 为 no-op，其余 SDK 调用会 abort，未调用交易回调。

| 字段 | 解析值/默认状态 | 对象偏移 |
|---|---|---|
| `telemetry_date` | "" | `0x0` |
| `signal_mode` | "PV1" | `0x18` |
| `pv1_alpha` | 1.0 | `0xf0` |
| `cost_alpha` | 1.0 | `0xf8` |
| `taker_rate_baseline` | 0.0 | `0x100` |
| `max_taker_rate` | 0.0 | `0x108` |
| `trade_slippery` | 0.0 | `0x110` |
| `close_position_block_ms` | 0.0 | `0x118` |
| `max_single_add_vol` | -1.0 | `0x120` |
| `max_single_add_amt` | -1.0 | `0x128` |
| `max_single_net_vol` | -1.0 | `0x130` |
| `max_single_net_amt` | -1.0 | `0x138` |
| `max_single_close_vol` | -1.0 | `0x140` |
| `max_single_close_amt` | -1.0 | `0x148` |
| `long_open_threshold` | 0.0 | `0x150` |
| `long_close_threshold` | 0.0 | `0x158` |
| `short_open_threshold` | 0.0 | `0x160` |
| `short_close_threshold` | 0.0 | `0x168` |
| `dyn_score_position_ts_threshold_s` | 0.0 | `0x170` |
| `dyn_score_max_position_ts_s` | 0.0 | `0x178` |
| `dyn_score_delta_score` | 0.0 | `0x180` |
| `dyn_pending_position_ts_threshold_s` | 0.0 | `0x188` |
| `dyn_pending_max_position_ts_s` | 0.0 | `0x190` |
| `dyn_pending_delta_max_pending_ts_ms` | 0.0 | `0x198` |
| `order_max_pending_time_ms` | 0.0 | `0x1a0` |
| `max_maker_pending_vol_on_depth` | 0.0 | `0x1a8` |
| `max_maker_limit_rate_bias_from_mid` | 0.0 | `0x1b0` |
| `maker_signal_abtype_u` | None（Option 哨兵） | `0xd8` |
| `signal_all` | "" | `0x30` |
| `gate_taker_veto_mode` | "off" | `0x48` |
| `gate_taker_veto_scope` | "taker_mid" | `0x60` |
| `gate_taker_veto_th` | 0.0 / 0.0 | `0x1b8`, `0x218` |
| `gate_taker_boost_bp` | 0.0 / 0.0 | `0x1c0`, `0x220` |
| `gate_taker_boost_th` | 0.0 / 0.0 | `0x1c8`, `0x228` |
| `gate_maker_mode` | "off" | `0x78` |
| `gate_maker_scope` | "maker_only" | `0x90` |
| `gate_maker_deepen_ticks` | 1.0 / 1.0 | `0x1d0`, `0x230` |
| `gate_maker_veto_th` | 0.0 / 0.0 | `0x1d8`, `0x238` |
| `gate_cancel_mode` | "off" | `0xa8` |
| `gate_cancel_th` | 0.0 | `0x1e0` |
| `gate_cancel_min_rest_ms` | 0.0 | `0x1e8` |
| `gate_b_reuse_max_age_ms` | 10.0 | `0x1f0` |
| `gate_wait_mode` | "barrier" | `0xc0` |
| `gate_a_wait_b_timeout_ms` | 10.0 | `0x1f8` |
| `touch_gate` | true | `0x210` |
| `touch_gate_timeout_ms` | 5000.0 | `0x200` |
| `book_vol_cap` | true | `0x211` |
| `max_single_taker_vol` | 0.0 | `0x208` |

原始回执：[顶层解析](../../03_反编译与验证/数学化还原_20261114/libstrategy_sm3_1.config_layout.json)；[字段数组](../../03_反编译与验证/策略反编译/libstrategy_sm3_1/config_field_arrays.json)。默认字段是类型/初始化证据，不能代替历史加密配置的明文。

## 附录 C. 验证范围与合成输入

### 基础函数

| 原始函数/模型 | 案例数 | 通过 | 证据 |
|---|---:|---:|---|
| `point_signal_trigger_pv3_spread` | 1200 | 1200 | [回执](../../03_反编译与验证/数学化还原_20261114/libstrategy_sm3_1.leaf_validation.json) |
| `dynamic_threshold` | 288 | 288 | [回执](../../03_反编译与验证/数学化还原_20261114/libstrategy_sm3_1.leaf_validation.json) |
| 被动门控 6 模式×方向×有效性×scope×边界 | 240 | 240 | [回执](../../03_反编译与验证/数学化还原_20261114/libstrategy_sm3_1.passive_gate_validation.json) |

本页基础函数检查合计 **1728/1728**。这是原始 ELF 叶函数/指定状态函数的合成输入检查，不能扩写为整个策略或全部历史订单的等价验收。点触发与枚举用精确比较；浮点核验容差和逐位比较范围写在脚本/回执中。

[数量返回寄存器矩阵](../../03_反编译与验证/数学化还原_20261114/libstrategy_sm3_1.quote_volume_matrix.json)另外覆盖 4 种报价类型、开关两值、正负及零数量，共 40 个组合。

### 回调验证口径

本节在前述叶函数核验之外，直接加载本页 SHA-256 对应的原始 ELF，先调用原始 `on_begin`，再调用原始业务回调。SDK 换成隔离桩：只提供合成数据并记录调用，不进行撮合、不提交回测。正常返回与错误返回按 Rust `Result` 的真实返回约定区分；错误指针的具体地址不用于数值比较。以下“订单成功”仅表示接口接受请求，不表示成交。

本库本轮有 **18 个独立 on_signal 场景**；另有下文列出的专项序列。针对可观察调用顺序/状态的显式断言为 **31/31**。断言数不等于独立场景数，更不等于完整状态空间覆盖。[本库事件回执](../../03_反编译与验证/事件状态验证_20261114/libstrategy_sm3_1.events.json)；[逐条断言及全库口径](../../03_反编译与验证/事件状态验证_20261114/verification_summary.json)。

本库另有 36 个原始 `on_signal` 场景，包含空/单侧/双侧/多笔订单与指定第几笔撤单失败。[逐事件回执](../../03_反编译与验证/持续深化_20261114/libstrategy_sm3_1.pending_events.json)。SDK 仅记录请求，不实际成交。另用修正后的五档盘口重新运行上一轮全部状态测试，1111 项旧断言仍通过；这次回归不重复算新增覆盖。

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
| 卖一为 0 | 正常返回 | 0 | `impact_block_check` |
| 盘口比当前时间旧 2 秒 | 正常返回 | 0 | `impact_block_check` |
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
| 买一为 0 | 正常返回 | 0 | `impact_block_check` |

### 正向强信号的完整 SDK 调用链

```text
inst_start_time_sec → is_trade_start → is_trade_end → time_sec
→ depth → is_night → inst_start_time_sec → is_trade_start
→ is_trade_end → time_sec → depth → spread_bp
→ price_step → vol_step → contract_mult → position
→ position_holding_secs → is_should_lock → margin_filter → cancel_by_pending_ts
→ impact_block_check → pending_orders → pending_orders → pending_orders
→ pending_orders → cancel_pending_ids → liquidity_consumption → is_night
→ place_order_iap_with_target
```

## 附录 D. 原始函数与证据

地址统一使用未重定位 ELF 虚拟地址；Ghidra C 中的 `001xxxxx` 是项目加载基址后的地址，两者不要混淆。下列索引使每个计算/回调都可回到本库证据，不用其他库的同名函数替代。

- [cancel_side](../../03_反编译与验证/策略反编译/libstrategy_sm3_1/decompiled_repaired/0000000000043120.c)（ELF `0x43120`，922 字节）。
- [default_off](../../03_反编译与验证/策略反编译/libstrategy_sm3_1/decompiled_repaired/0000000000042e60.c)（ELF `0x42e60`，87 字节）。
- [default_pv1](../../03_反编译与验证/策略反编译/libstrategy_sm3_1/decompiled_repaired/0000000000042e00.c)（ELF `0x42e00`，87 字节）。
- [StrategySM31::record_quote_outcome](../../03_反编译与验证/策略反编译/libstrategy_sm3_1/decompiled_repaired/0000000000047930.c)（ELF `0x47930`，2074 字节）。
- [StrategySM31::decide](../../03_反编译与验证/策略反编译/libstrategy_sm3_1/decompiled_repaired/0000000000048150.c)（ELF `0x48150`，9796 字节）。
- [DecisionTelemetry::inc](../../03_反编译与验证/策略反编译/libstrategy_sm3_1/decompiled_repaired/0000000000042ff0.c)（ELF `0x42ff0`，297 字节）。
- [default_wait_mode](../../03_反编译与验证/策略反编译/libstrategy_sm3_1/decompiled_repaired/0000000000042f90.c)（ELF `0x42f90`，91 字节）。
- [apply_book_vol_cap](../../03_反编译与验证/策略反编译/libstrategy_sm3_1/decompiled_repaired/0000000000043ea0.c)（ELF `0x43ea0`，720 字节）。
- [default_maker_scope](../../03_反编译与验证/策略反编译/libstrategy_sm3_1/decompiled_repaired/0000000000042f20.c)（ELF `0x42f20`，97 字节）。
- [live_pending_counts](../../03_反编译与验证/策略反编译/libstrategy_sm3_1/decompiled_repaired/0000000000043930.c)（ELF `0x43930`，1377 字节）。
- [cancel_order_use_range](../../03_反编译与验证/策略反编译/libstrategy_sm3_1/decompiled_repaired/00000000000434c0.c)（ELF `0x434c0`，1121 字节）。
- [default_taker_veto_scope](../../03_反编译与验证/策略反编译/libstrategy_sm3_1/decompiled_repaired/0000000000042ec0.c)（ELF `0x42ec0`，95 字节）。
- [quote::apply_passive_gate](../../03_反编译与验证/策略反编译/libstrategy_sm3_1/decompiled_repaired/000000000006a060.c)（ELF `0x6a060`，953 字节）。
- [quote::get_quote_price_one_shot_v31](../../03_反编译与验证/策略反编译/libstrategy_sm3_1/decompiled_repaired/000000000006a420.c)（ELF `0x6a420`，2245 字节）。
- [strategy_signal_maker_common::signal_trigger::SignalTrigger::update_score](../../03_反编译与验证/策略反编译/libstrategy_sm3_1/decompiled_repaired/00000000000993d0.c)（ELF `0x993d0`，588 字节）。
- [strategy_signal_maker_common::signal_trigger::SignalTrigger::point_signal_trigger_pv3_spread](../../03_反编译与验证/策略反编译/libstrategy_sm3_1/decompiled_repaired/0000000000099620.c)（ELF `0x99620`，178 字节）。
- [strategy_signal_maker_common::signal_trigger::SignalTrigger::new](../../03_反编译与验证/策略反编译/libstrategy_sm3_1/decompiled_repaired/0000000000099300.c)（ELF `0x99300`，199 字节）。
- [strategy_signal_maker_common::signal_trigger::dynamic_threshold](../../03_反编译与验证/策略反编译/libstrategy_sm3_1/decompiled_repaired/00000000000996e0.c)（ELF `0x996e0`，152 字节）。
- [strategy_signal_maker_common::signal_trigger::TsQuantileCalculator::update](../../03_反编译与验证/策略反编译/libstrategy_sm3_1/decompiled_repaired/00000000000990a0.c)（ELF `0x990a0`，598 字节）。
- [strategy_signal_maker_common::signal_trigger::dynamic_pending_ts_ms](../../03_反编译与验证/策略反编译/libstrategy_sm3_1/decompiled_repaired/0000000000099780.c)（ELF `0x99780`，63 字节）。
- [strategy_signal_maker_common::get_quote_price::get_quote_vol](../../03_反编译与验证/策略反编译/libstrategy_sm3_1/decompiled_repaired/00000000000983c0.c)（ELF `0x983c0`，135 字节）。
- [<strategy_sm3_1::SM31Params as core::clone::Clone>::clone](../../03_反编译与验证/策略反编译/libstrategy_sm3_1/decompiled_repaired/000000000004b230.c)（ELF `0x4b230`，1535 字节）。
- [<strategy_sm3_1::StrategySM31 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin](../../03_反编译与验证/策略反编译/libstrategy_sm3_1/decompiled_repaired/0000000000044170.c)（ELF `0x44170`，3139 字节）。
- [<strategy_sm3_1::StrategySM31 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth](../../03_反编译与验证/策略反编译/libstrategy_sm3_1/decompiled_repaired/0000000000046fc0.c)（ELF `0x46fc0`，1266 字节）。
- [<strategy_sm3_1::StrategySM31 as future_backtest_sdk::plugin::StrategyPlugin>::on_finish](../../03_反编译与验证/策略反编译/libstrategy_sm3_1/decompiled_repaired/00000000000474c0.c)（ELF `0x474c0`，1127 字节）。
- [<strategy_sm3_1::StrategySM31 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal](../../03_反编译与验证/策略反编译/libstrategy_sm3_1/decompiled_repaired/0000000000044dc0.c)（ELF `0x44dc0`，8693 字节）。
- [fb_strategy_sdk_abi_version](../../03_反编译与验证/策略反编译/libstrategy_sm3_1/decompiled_repaired/00000000000709e0.c)（ELF `0x709e0`，6 字节）。
- [fb_strategy_sdk_version_str](../../03_反编译与验证/策略反编译/libstrategy_sm3_1/decompiled_repaired/00000000000709f0.c)（ELF `0x709f0`，73 字节）。

[完整反汇编](../../03_反编译与验证/策略反编译/libstrategy_sm3_1/assembly.txt)；[核心伪代码集合](../../03_反编译与验证/策略反编译/libstrategy_sm3_1/核心伪代码.c)。

### 补充证据定位

- [正常序列](../../03_反编译与验证/事件状态验证_20261114/libstrategy_sm3_1.sequence_probe.json)
- [释放失败序列](../../03_反编译与验证/事件状态验证_20261114/libstrategy_sm3_1.failure_sequences.json)
- [本库 85 场景回执](../../03_反编译与验证/持续深化_20261114/libstrategy_sm3_1.pending_helpers.json)
