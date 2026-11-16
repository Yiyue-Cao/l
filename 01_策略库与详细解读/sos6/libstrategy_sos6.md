# libstrategy_sos6.so：策略数学说明

在三 section 调度上增加四阈值平移：外部 watcher 阈值相对于 section1 原值的差，同步加到所有 section。

对应原件：`libstrategy_sos6.so`，SHA-256 `77c2bf03431db0f38d4bb05953c7dae5d44f97511a7bca37b0eb06c63d0d32e0`。文档口径：核心规则、事件状态、验证范围和参数附录。

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

### 2.3 窗口统计与投票

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

### 2.4 section 转移与账户条件

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

### 2.5 外部四阈值的平移规则

策略依次读取 `threshold_long_open`、`threshold_long_close`、`threshold_short_open`、`threshold_short_close` 四个发布键。四个 Option 都存在时才执行整体更新；不能缺一个键就把它补零。设 section 原始阈值分别为 $T_1^0,T_2^0,T_3^0$，读取值为 $W$，则

$$\Delta T=W-T_1^0,\qquad T_j^{eff}=T_j^0+\Delta T\quad(j=1,2,3).$$

在实数代数中，$T_1^{eff}=W$；$T_2^{eff}-T_1^{eff}=T_2^0-T_1^0$，$T_3^{eff}-T_1^{eff}=T_3^0-T_1^0$。每次对**原始** section1 求差，再写有效阈值；不是把新差不断累加到上一轮有效值。

原始 section1 四阈值位于 `+0xa8,+0xb0,+0xb8,+0xc0`，section2 位于 `+0x148...+0x160`，section3 位于 `+0x1e8...+0x200`；有效三组写入 `+0x3a0...+0x3f8`。浮点实现保留“先减原值、再加各段原值”的顺序；上述代数等式不保证逐位成立。这一内存关系直接确定“原值不变、有效值重算”的语义。

举例，原三组为 $T_1^0=(2,-1,-2,1)$、$T_2^0=(3,-2,-3,2)$、$T_3^0=(4,-3,-4,3)$，发布 $W=(2.5,-0.5,-2.5,0.5)$，则 $\Delta=(0.5,0.5,-0.5,-0.5)$；第二组变成 $(3.5,-1.5,-3.5,1.5)$，第三组同样加差。

### 2.6 与 SoS5 的精确区别

本库有 `watcher_pnl_key` 与四阈值订阅；顶层没有 SoS5 的 live basket 门槛模式、bp、高阶段倍数和参考篮子保护那组参数。它继承的是外部阈值变化，不是把 SoS5 的 live_basket_bp 门槛再乘一个系数。段位转移收益键与四阈值键是两组输入，可在不同时间更新，必须分别保存各自是否存在。

本轮配置解析定位了全部 32 个非嵌套顶层字段和三个 section 的 24 个数值字段。本轮已验证实际读键顺序和 16 种存在性组合；缺失更新后全部订单分支仍未回放；四阈值平移函数的内存写入与代数关系已通过 1000 个原始机器码合成案例；比较保持原始的先减后加浮点顺序，不把代数上的 $T_1^{eff}=W$ 当成所有浮点值逐位相等的保证。

### 2.7 数量约束与请求输出

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

本库普通正向路径是 `margin_filter → cancel_by_pending_ts → cancel_all → place_order_iap`。**该路径没有调用 `impact_block_check`**；因此本轮把冲击过滤桩设为阻止，并不能阻止 SoS 发单。不能把其他库的公共流程机械套到这里。撤单 C 返回负数变成错误；0 和 +1 均作为成功继续。

订单接口返回 -1 时，SDK 包装层读取 `last_error` 并返回错误；策略此前已经完成的触发器/统计/阶段写入不会统一回滚。是否还保留任务、等待 A 或 touch 记录，必须分别按下文状态规则实现。`is_trade_end=true` 本身也不意味着立刻返回：强平选项关闭时，本轮仍进入普通决策路径，不能仅凭“结束时段”删掉后续逻辑。

### 3.2 盘口异常的已测路径

已测零买一、零卖一、旧 2 秒输入没有统一触发 Comm 型早退，仍进入本库后续接口。这只确定调用路径，不保证异常盘口产生有效订单；复原时保留各自路径。

### 3.3 账户取值与阶段提交顺序

先读取 `free_cash`，再读取 `meta_account`。账户判定标量为

$$C_{acct}=\begin{cases}C_{meta},&r_{meta}=1,\\C_{free},&r_{meta}\ne1.\end{cases}$$

$r_{meta}$ 是 C 接口返回码，恰为 1 才有快照。$C_{meta}$ 来自 Rust 布局 `+0x58`（C 布局 `+0x60`）的 double；业务名称尚未完全确定，保留该字段身份。

按决策章转移表更新 section，随后才读取盘口和执行普通交易。后续缺盘口或请求失败，不恢复旧 section。账户值为零会阻止需要正值／负值的升级条件。

验证共 108 组输入：人工注入初始 section 1/2/3，收益取 4、5、9、10、20、21，账户值取 −1、0、1，门槛固定为 `(10,20,5,20,5)`；分别检验 free_cash 回退及符号相反的快照覆盖。初态注入只验证边界，不表示自然到达该阶段的全过程已验收。

### 3.4 四个外部阈值的缺失组合

[16 种存在性组合](../../03_反编译与验证/事件状态验证_20261114/libstrategy_sos6.threshold_presence.json)覆盖四键的全部有/无情况。实际读取顺序固定为 `threshold_long_open → threshold_long_close → threshold_short_open → threshold_short_close → rolling_pnl`，即使前一个阈值缺失，也会继续读后面的阈值键。

本轮原始 section 阈值均为零，外部四值为 `(11,12,13,14)`。仅四键全部存在时，三个有效阈值向量都更新为该向量；任缺一键，十二个有效值都保持原值。不能逐键局部更新，不能把缺失键补零。该检查通过真实 `on_signal` 路径，补充了旧轮直接调用阈值平移函数的 1000 例核验。

### 3.5 非空挂单注入后的本库调用边界

在这组正向信号、零持仓与非负批量撤单返回夹具中，路径调用 `cancel_all` 后继续发单，没有调用逐 ID 的 `pending_orders`/`cancel_order`。因此指定“第 0/1 笔逐 ID 撤单失败”不会触发这条路径的失败；它测试的是逐 ID 接口，而不是批量接口。批量撤单负返回的截断行为已有前轮独立测试。不能据此推断真实撮合引擎允许撤单/下单任意并发；本库把批量取消的实现交给 SDK。

<a id="limits"></a>

## 4. 复原边界

将回调写为 $F(S,e,c)=(S',R,\rho)$：$S$ 为本地状态，$e$ 为输入事件，$c$ 为 SDK 上下文，$R$ 为有序请求／发布序列，$\rho$ 为正常、错误或 panic 结果。失败时 $S'$ 不一定等于 $S$；按状态章保留已完成的写入。

复原需记录输入时间、合约／信号、原始数值、盘口、持仓和在途信息，再对齐有效阈值、动作、报价、请求量、撤单顺序及回调前后状态。根对象 `changed_offsets` 不是完整堆快照；窗口、树和队列须另行读取。

外部发布是否原子、多合约 section 迁移与真实账户联合回放仍由未验证的引擎部分决定。 不把本节辅助函数和合成回调通过写成整个策略已逐笔等价。

共同未闭合项：SDK 撮合、费用、账户接续及回报顺序的端到端等价；历史加密配置明文；上游预测公式。本文可指导已明确分支的实现，尚不是可替换原 `.so` 的完整插件。

## 附录 A. 配置字段与默认值

下表来自直接加载原始 `.so` 后调用其 `on_begin` 解析器；浮点字段用两个不同标记值匹配同一位置。偏移相对于策略对象起点，不是 ELF 文件偏移。Option 的 None 载荷不读取为默认数值。日志 SDK 为 no-op，其余 SDK 调用会 abort，未调用交易回调。

SoS 必需的 watcher 名与 section 标识使用探测种子；表中的 `"probe"` 是探测输入，**不是二进制缺省值**。section 的 IF、rank=1、signal_all="0"、IAP 同样是为使解析成立所设种子。

| 字段 | 解析值/默认状态 | 对象偏移 |
|---|---|---|
| `watcher_strategy_name` | "probe" | `0x0` |
| `watcher_account_name` | "probe" | `0x18` |
| `watcher_pnl_key` | "rolling_pnl" | `0x30` |
| `section1_to_2_pnl` | 0.0 | `0x270` |
| `section1_to_3_pnl` | 0.0 | `0x278` |
| `section2_to_1_pnl` | 0.0 | `0x280` |
| `section2_to_3_pnl` | 0.0 | `0x288` |
| `section3_to_1_pnl` | 0.0 | `0x290` |
| `order_book_1_2_gap` | 0.0 | `0x298` |
| `sos_taker_rate` | 0.0 | `0x2a0` |
| `sos_add_vol` | 0.0 | `0x2a8` |
| `section1` | 嵌套结构，见下表/字段表 | — |
| `section2` | 嵌套结构，见下表/字段表 | — |
| `section3` | 嵌套结构，见下表/字段表 | — |
| `signal_mode` | "" | `0x228` |
| `pv1_alpha` | 1.0 | `0x2b0` |
| `cost_alpha` | 1.0 | `0x2b8` |
| `signal_trigger_mode` | "" | `0x240` |
| `vote_rate` | 0.1 | `0x2c0` |
| `quantile` | 0.9 | `0x2c8` |
| `signal_windows_s` | [] | `0x258` |
| `score_taker_rate_alpha` | 0.0 | `0x2d0` |
| `taker_rate_baseline` | 0.0 | `0x2d8` |
| `max_taker_rate` | 0.0 | `0x2e0` |
| `trade_slippery` | 0.0 | `0x2e8` |
| `close_position_block_ms` | 0.0 | `0x2f0` |
| `max_single_close_vol` | 0.0 | `0x2f8` |
| `max_single_close_amt` | 0.0 | `0x300` |
| `dyn_score_position_ts_threshold_s` | 0.0 | `0x308` |
| `dyn_score_max_position_ts_s` | 0.0 | `0x310` |
| `dyn_score_delta_score` | 0.0 | `0x318` |
| `dyn_pending_position_ts_threshold_s` | 0.0 | `0x320` |
| `dyn_pending_max_position_ts_s` | 0.0 | `0x328` |
| `dyn_pending_order_max_pending_time_ms` | 0.0 | `0x330` |
| `dyn_pending_delta_max_pending_ts_ms` | 0.0 | `0x338` |

嵌套数值字段另行覆盖探测：

| 完整字段 | 缺省值 | 对象偏移 |
|---|---|---|
| `section1.long_open_threshold` | 0.0 / 0.0 | `0xa8`, `0x3a0` |
| `section1.long_close_threshold` | 0.0 / 0.0 | `0xb0`, `0x3a8` |
| `section1.short_open_threshold` | 0.0 / 0.0 | `0xb8`, `0x3b0` |
| `section1.short_close_threshold` | 0.0 / 0.0 | `0xc0`, `0x3b8` |
| `section1.max_single_add_vol` | 0.0 | `0xc8` |
| `section1.max_single_net_vol` | 0.0 | `0xd0` |
| `section1.max_single_add_amt` | 0.0 | `0xd8` |
| `section1.max_single_net_amt` | 0.0 | `0xe0` |
| `section2.long_open_threshold` | 0.0 / 0.0 | `0x148`, `0x3c0` |
| `section2.long_close_threshold` | 0.0 / 0.0 | `0x150`, `0x3c8` |
| `section2.short_open_threshold` | 0.0 / 0.0 | `0x158`, `0x3d0` |
| `section2.short_close_threshold` | 0.0 / 0.0 | `0x160`, `0x3d8` |
| `section2.max_single_add_vol` | 0.0 | `0x168` |
| `section2.max_single_net_vol` | 0.0 | `0x170` |
| `section2.max_single_add_amt` | 0.0 | `0x178` |
| `section2.max_single_net_amt` | 0.0 | `0x180` |
| `section3.long_open_threshold` | 0.0 / 0.0 | `0x1e8`, `0x3e0` |
| `section3.long_close_threshold` | 0.0 / 0.0 | `0x1f0`, `0x3e8` |
| `section3.short_open_threshold` | 0.0 / 0.0 | `0x1f8`, `0x3f0` |
| `section3.short_close_threshold` | 0.0 / 0.0 | `0x200`, `0x3f8` |
| `section3.max_single_add_vol` | 0.0 | `0x208` |
| `section3.max_single_net_vol` | 0.0 | `0x210` |
| `section3.max_single_add_amt` | 0.0 | `0x218` |
| `section3.max_single_net_amt` | 0.0 | `0x220` |

原始回执：[顶层解析](../../03_反编译与验证/数学化还原_20261114/libstrategy_sos6.config_layout.json)；[字段数组](../../03_反编译与验证/策略反编译/libstrategy_sos6/config_field_arrays.json)。默认字段是类型/初始化证据，不能代替历史加密配置的明文。

## 附录 C. 验证范围与合成输入

### 基础函数

| 原始函数/模型 | 案例数 | 通过 | 证据 |
|---|---:|---:|---|
| `point_signal_trigger_pv1_spread` | 1200 | 1200 | [回执](../../03_反编译与验证/数学化还原_20261114/libstrategy_sos6.leaf_validation.json) |
| SoS6 四阈值平移 | 1000 | 1000 | [回执](../../03_反编译与验证/数学化还原_20261114/libstrategy_sos6.delta_validation.json) |

本页基础函数检查合计 **2200/2200**。这是原始 ELF 叶函数/指定状态函数的合成输入检查，不能扩写为整个策略或全部历史订单的等价验收。点触发与枚举用精确比较；浮点核验容差和逐位比较范围写在脚本/回执中。

### 回调验证口径

本节在前述叶函数核验之外，直接加载本页 SHA-256 对应的原始 ELF，先调用原始 `on_begin`，再调用原始业务回调。SDK 换成隔离桩：只提供合成数据并记录调用，不进行撮合、不提交回测。正常返回与错误返回按 Rust `Result` 的真实返回约定区分；错误指针的具体地址不用于数值比较。以下“订单成功”仅表示接口接受请求，不表示成交。

本库本轮有 **18 个独立 on_signal 场景**；另有下文列出的专项序列。针对可观察调用顺序/状态的显式断言为 **135/135**。断言数不等于独立场景数，更不等于完整状态空间覆盖。[本库事件回执](../../03_反编译与验证/事件状态验证_20261114/libstrategy_sos6.events.json)；[逐条断言及全库口径](../../03_反编译与验证/事件状态验证_20261114/verification_summary.json)。

本库另有 36 个原始 `on_signal` 场景，包含空/单侧/双侧/多笔订单与指定第几笔撤单失败。[逐事件回执](../../03_反编译与验证/持续深化_20261114/libstrategy_sos6.pending_events.json)。SDK 仅记录请求，不实际成交。另用修正后的五档盘口重新运行上一轮全部状态测试，1111 项旧断言仍通过；这次回归不重复算新增覆盖。

### 合成环境

基线合约 IF，订阅信号 A，事件时刻 1000 秒，买一 99、卖一 101，五档数量均为 10，价格步长 0.2、数量步长 1、乘数 10、账户持仓和成本均为 0、在途列表为空。SDK 价差输入固定为 1，费用输入为 0；这是独立控制各接口的分支试验，未声称这些值来自同一套真实行情计算。强信号为 ±1000；普通非 SoS 库的高阈值基线用 ±100000。主动试验将新增/净仓/平仓手数限额设为 1/10/1，支持的金额限额设为 -1；其余使用各库解析缺省值。SoS 的阈值属于 section，顶层同名字段不能代替 section 内字段，因此其“高阈值基线”不保证无动作。所有具体输入以脚本和回执为准。

根对象 `changed_offsets` 只记录该对象本体字节变化；它不是完整堆快照，不能由空列表断言所有内部窗口/树节点都没更新。专项序列另外读取门控长度、任务字段或队列元素。

### 独立信号场景

| 场景 | 原始回调结果 | 发单请求 | 关键路径/最后边界 |
|---|---|---:|---|
| 未订阅信号 | 正常返回 | 0 | `无 SDK 调用` |
| 另一合约代码 | 正常返回 | 1 | `place_order_iap` |
| 尚未进入交易时段 | 正常返回 | 0 | `is_trade_start` |
| SDK 无盘口 | 正常返回 | 0 | `depth` |
| 高阈值基线 | 正常返回 | 1 | `place_order_iap` |
| 卖一为 0 | 正常返回 | 1 | `place_order_iap` |
| 盘口比当前时间旧 2 秒 | 正常返回 | 1 | `place_order_iap` |
| 交易结束但未启用强平 | 正常返回 | 1 | `place_order_iap` |
| 正向强信号 | 正常返回 | 1 | `place_order_iap` |
| 负向强信号 | 正常返回 | 1 | `place_order_iap` |
| 订单接口返回 -1 | 错误返回 | 1 | `last_error` |
| 超时撤单接口返回 -1 | 错误返回 | 0 | `cancel_by_pending_ts` |
| 保证金过滤返回无动作 | 正常返回 | 0 | `cancel_by_pending_ts` |
| 冲击过滤桩返回无动作 | 正常返回 | 1 | `place_order_iap` |
| 撤单接口返回 +1 | 正常返回 | 1 | `place_order_iap` |
| 盘口恰旧 1 秒 | 正常返回 | 1 | `place_order_iap` |
| 盘口比当前时间新 2 秒 | 正常返回 | 1 | `place_order_iap` |
| 买一为 0 | 正常返回 | 1 | `place_order_iap` |

### 正向强信号的完整 SDK 调用链

```text
inst_start_time_sec → is_trade_start → is_trade_end → get_published:threshold_long_open
→ get_published:threshold_long_close → get_published:threshold_short_open → get_published:threshold_short_close → get_published:rolling_pnl
→ free_cash → meta_account → time_sec → depth
→ spread_bp → contract_mult → price_step → vol_step
→ position → first_open_time_sec → margin_filter → cancel_by_pending_ts
→ cancel_all → liquidity_consumption → is_night → place_order_iap
```

## 附录 D. 原始函数与证据

地址统一使用未重定位 ELF 虚拟地址；Ghidra C 中的 `001xxxxx` 是项目加载基址后的地址，两者不要混淆。下列索引使每个计算/回调都可回到本库证据，不用其他库的同名函数替代。

- [StrategySoS6::apply_threshold_delta](../../03_反编译与验证/策略反编译/libstrategy_sos6/decompiled_repaired/000000000004c0d0.c)（ELF `0x4c0d0`，163 字节）。
- [signal_trigger::SignalTrigger::update_score](../../03_反编译与验证/策略反编译/libstrategy_sos6/decompiled_repaired/000000000005e2c0.c)（ELF `0x5e2c0`，1845 字节）。
- [signal_trigger::SignalTrigger::windows_rsi_trigger](../../03_反编译与验证/策略反编译/libstrategy_sos6/decompiled_repaired/000000000005f5c0.c)（ELF `0x5f5c0`，554 字节）。
- [signal_trigger::SignalTrigger::windows_std_trigger](../../03_反编译与验证/策略反编译/libstrategy_sos6/decompiled_repaired/000000000005eba0.c)（ELF `0x5eba0`，264 字节）。
- [signal_trigger::SignalTrigger::windows_mean_trigger](../../03_反编译与验证/策略反编译/libstrategy_sos6/decompiled_repaired/000000000005ea90.c)（ELF `0x5ea90`，264 字节）。
- [signal_trigger::SignalTrigger::windows_sharpe_trigger](../../03_反编译与验证/策略反编译/libstrategy_sos6/decompiled_repaired/000000000005f370.c)（ELF `0x5f370`，586 字节）。
- [signal_trigger::SignalTrigger::windows_quantile_trigger](../../03_反编译与验证/策略反编译/libstrategy_sos6/decompiled_repaired/000000000005ecb0.c)（ELF `0x5ecb0`，1717 字节）。
- [signal_trigger::SignalTrigger::point_signal_trigger_pv1_spread](../../03_反编译与验证/策略反编译/libstrategy_sos6/decompiled_repaired/000000000005ea00.c)（ELF `0x5ea00`，137 字节）。
- [_ZN13strategy_sos614signal_trigger17enum_rate_counter17hd3ab24ddaa71514fE.llvm.5674171606368244516](../../03_反编译与验证/策略反编译/libstrategy_sos6/decompiled_repaired/000000000005f7f0.c)（ELF `0x5f7f0`，1378 字节）。
- [default_pnl_key](../../03_反编译与验证/策略反编译/libstrategy_sos6/decompiled_repaired/00000000000477d0.c)（ELF `0x477d0`，98 字节）。
- [place_order_by_mode](../../03_反编译与验证/策略反编译/libstrategy_sos6/decompiled_repaired/000000000004c180.c)（ELF `0x4c180`，338 字节）。
- [<strategy_sos6::StrategySoS6 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin](../../03_反编译与验证/策略反编译/libstrategy_sos6/decompiled_repaired/0000000000047840.c)（ELF `0x47840`，2083 字节）。
- [<strategy_sos6::StrategySoS6 as future_backtest_sdk::plugin::StrategyPlugin>::on_finish](../../03_反编译与验证/策略反编译/libstrategy_sos6/decompiled_repaired/000000000004bfb0.c)（ELF `0x4bfb0`，280 字节）。
- [<strategy_sos6::StrategySoS6 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal](../../03_反编译与验证/策略反编译/libstrategy_sos6/decompiled_repaired/0000000000048070.c)（ELF `0x48070`，16187 字节）。
- [fb_strategy_sdk_abi_version](../../03_反编译与验证/策略反编译/libstrategy_sos6/decompiled_repaired/0000000000065da0.c)（ELF `0x65da0`，6 字节）。
- [fb_strategy_sdk_version_str](../../03_反编译与验证/策略反编译/libstrategy_sos6/decompiled_repaired/0000000000065db0.c)（ELF `0x65db0`，73 字节）。

[完整反汇编](../../03_反编译与验证/策略反编译/libstrategy_sos6/assembly.txt)；[核心伪代码集合](../../03_反编译与验证/策略反编译/libstrategy_sos6/核心伪代码.c)。

### 补充证据定位

- [108 个阶段输入](../../03_反编译与验证/事件状态验证_20261114/libstrategy_sos6.phase_sequences.json)
