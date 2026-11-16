# libstrategy_lf4.so：策略数学说明

外部信号先建立带价格区间、期限和次数上限的 TargetTaskStatus，后续信号在无在途订单时尝试剩余任务量；行情回调更新已完成量。

对应原件：`libstrategy_lf4.so`，SHA-256 `88e6969f6603fc9864009122b9f1036b732618416a5637847483096012095410`。文档口径：核心规则、事件状态、验证范围和参数附录。

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

### 2.4 LF4 的非对称持仓年龄阈值

LF4 不调用本页其他库的四阈值对称 `dynamic_threshold`。`on_signal` 内联计算

$$f=\min\left(\max\left(\frac{h_p-t_0}{\max(t_1-t_0,0.1)},0\right),1\right).$$

开多、开空门槛保持原值。若 $q>10^{-6}$，平多门槛改为 $L_c+f\Delta$，平空门槛不变；否则平多门槛不变，平空门槛改为 $S_c-f\Delta$。这里分母下限为 **0.1 秒**，没有独立新版函数的“负参数关闭”与 $|\Delta|\le10^{-9}$ 早返回；两者不能合并。

挂单时限采用另一组参数：

$$f_p=\min(\max((h_p-t_{p0})/\max(t_{p1}-t_{p0},0.1),0),1),\quad W_{pending}=W_0+f_p\Delta W.$$

先 `margin_filter`，再按此时限调用 `cancel_by_pending_ts`；SDK 包装层返回 `Err` 时停止，成功时才做 `impact_block_check`。这里的 Rust 错误变体与底层 C 返回码分开：已测 C 返回 −1 为失败，0 和 +1 均被接受。

### 2.5 目标任务的数学状态

按合约保存

$$\mathcal T=(t_0,t_{end},p_{target},v_{target},p_{max},p_{min},n_{max},q_0,v_{done},n_{try},g).$$

新目标的截止时刻 $t_{end}=t_0+\text{max\_try\_hiter\_time\_ms}$，目标价格上下界以创建时方向相关盘口价乘 $1\pm\text{price\_range\_bp}\times10^{-4}$ 形成。`on_depth` 查询实际持仓后写

$$v_{done}=q_{current}-q_0,$$

并复位当前行情的尝试标志。它不是把每次请求量简单累加为已完成量。

每次重试同时要求：买卖两侧在途数量计数均小于 1、$|v_{target}-v_{done}|>10^{-6}$、$n_{try}<n_{max}$、当前时刻严格小于 $t_{end}$、当前行情标志允许，以及价格没有越界。正目标拒绝 $a>p_{max}$，负目标拒绝 $b<p_{min}$；边界相等可通过。通过后请求量为

$$v_{retry}=\operatorname{RoundStep}(v_{target}-v_{done},\tau_v,1).$$

重试限价采用目标的上/下界再按价格步长处理，不是无条件追到最新对手价。次数槽和期限的比较都使用严格 `<`；但最新事件核验确认本库重试路径不递增次数槽，不能由比较条件推出实际重试次数会达到上限。事件更新与失败保留规则见状态章。

### 2.6 手数约束与初始化含义

本库没有增仓/净仓/平仓金额上限字段。设增仓、净仓、平仓手数上限为 $A,N,C$，开多原始目标量为

$$\max(\min(A,N-\max(q,0))+\min(C,\max(-q,0)),0),$$

开空为相应负方向的组合；纯平仓最多消掉当前反向仓。缺省 $A=N=1$，$C$ 为最大有限 double，`max_try_hiter_times=0`、`max_try_hiter_time_ms=0`，所以缺省并不自动启用有持续时间的重试过程。

首次下单拒绝、行情复位、连续重试及次数槽未递增已在状态章所列序列中验证；多任务替换与非空在途的组合仍未闭合。

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

### 3.3 目标任务的提交、重试与完成量

[两组各 12 个回调的成功/拒绝序列](../../03_反编译与验证/事件状态验证_20261114/libstrategy_lf4.state_sequences.json)直接读取原始任务记录。任务条目包含键字符串 24 字节，其后字段如下；这里偏移相对于完整 HashMap 条目，不是策略根对象：

| 字段 | 条目偏移 | 本轮创建值 |
|---|---|---:|
| 创建时间、截止时间（ms） | +0x18、+0x20 | 1000000、1001000 |
| 目标价格、带方向目标量 | +0x28、+0x30 | 101、1 |
| 价格上界、下界 | +0x38、+0x40 | 102.01、0 |
| 保存的最大次数 | +0x48 | 3 |
| 初始持仓、已完成量 | +0x50、+0x58 | 0、0 |
| 尝试次数槽 | +0x60 | 0 |
| 动作、当前行情标志 | +0x68、+0x69 | 0、1 |

确定顺序是：计算目标 → **插入/替换任务** → 调用首次订单接口。首次订单失败时，已插入任务仍保留，标志仍为 1；不能回滚成“无任务”。新行情读取 SDK position 的第二个 double（有符号持仓），将 `done=q-q0` 写回并将标志清零。SDK position 的第一个 double 是成本价格相关槽，不能拿来更新完成量。

需要纠正“最大次数会限制重试”的直觉：在本轮到达的重试分支，源码式条件确实读取 `tries < max_try_hiter_times`，但**重试成功和重试失败之后，都没有把 tries 加 1，也没有把标志重新置 1**。静态路径在请求之后直接清理临时值并返回，没有任务写回；实测同一次行情后连续 5 次中性信号都可继续请求，虽然配置最大次数为 3，tries 仍为 0。

因此本二进制可复现的规则应写成：`tries` 是被检查的保存槽，不能自行补上计数递增。首次创建标志为 1 阻止同一行情继续重试；行情将其清零后，重复中性信号可反复尝试，直到其他条件阻止。这个行为是否符合作者设计意图，二进制无法回答。

当后续行情报告持仓为 1，完成量变为 1，中性信号不再请求；持仓随后变回 0，完成量也回到 0，而非单调累计。恰到截止时刻 1001000ms 不再重试；过期任务仍可留在表内，不能由“不重试”推导它已经删除。

### 3.4 非空挂单注入后的本库调用边界

在这组正向信号、零持仓与非负批量撤单返回夹具中，路径调用 `cancel_all` 后继续发单，没有调用逐 ID 的 `pending_orders`/`cancel_order`。因此指定“第 0/1 笔逐 ID 撤单失败”不会触发这条路径的失败；它测试的是逐 ID 接口，而不是批量接口。批量撤单负返回的截断行为已有前轮独立测试。不能据此推断真实撮合引擎允许撤单/下单任意并发；本库把批量取消的实现交给 SDK。

<a id="limits"></a>

## 4. 复原边界

将回调写为 $F(S,e,c)=(S',R,\rho)$：$S$ 为本地状态，$e$ 为输入事件，$c$ 为 SDK 上下文，$R$ 为有序请求／发布序列，$\rho$ 为正常、错误或 panic 结果。失败时 $S'$ 不一定等于 $S$；按状态章保留已完成的写入。

复原需记录输入时间、合约／信号、原始数值、盘口、持仓和在途信息，再对齐有效阈值、动作、报价、请求量、撤单顺序及回调前后状态。根对象 `changed_offsets` 不是完整堆快照；窗口、树和队列须另行读取。

多目标任务覆盖、存活订单阻止重试与异步成交回报交错的长序列仍未闭合。 不把本节辅助函数和合成回调通过写成整个策略已逐笔等价。

共同未闭合项：SDK 撮合、费用、账户接续及回报顺序的端到端等价；历史加密配置明文；上游预测公式。本文可指导已明确分支的实现，尚不是可替换原 `.so` 的完整插件。

## 附录 A. 配置字段与默认值

下表来自直接加载原始 `.so` 后调用其 `on_begin` 解析器；浮点字段用两个不同标记值匹配同一位置。偏移相对于策略对象起点，不是 ELF 文件偏移。Option 的 None 载荷不读取为默认数值。日志 SDK 为 no-op，其余 SDK 调用会 abort，未调用交易回调。

| 字段 | 解析值/默认状态 | 对象偏移 |
|---|---|---|
| `signal_mode` | "" | `0x0` |
| `pv1_alpha` | 1.0 | `0x48` |
| `cost_alpha` | 1.0 | `0x50` |
| `signal_trigger_mode` | "" | `0x18` |
| `vote_rate` | 0.1 | `0x58` |
| `quantile` | 0.9 | `0x60` |
| `signal_windows_s` | [] | `0x30` |
| `taker_rate_baseline` | 0.0 | `0x68` |
| `max_taker_rate` | 0.0 | `0x70` |
| `trade_slippery` | 0.0 | `0x78` |
| `close_position_block_ms` | 0.0 | `0x80` |
| `max_single_add_vol` | 1.0 | `0x88` |
| `max_single_net_vol` | 1.0 | `0x90` |
| `max_single_close_vol` | 1.7976931348623157e+308 | `0x98` |
| `long_open_threshold` | 0.0 | `0xa0` |
| `long_close_threshold` | 0.0 | `0xa8` |
| `short_open_threshold` | 0.0 | `0xb0` |
| `short_close_threshold` | 0.0 | `0xb8` |
| `dyn_score_position_ts_threshold_s` | 0.0 | `0xc0` |
| `dyn_score_max_position_ts_s` | 0.0 | `0xc8` |
| `dyn_score_delta_score` | 0.0 | `0xd0` |
| `dyn_pending_position_ts_threshold_s` | 0.0 | `0xd8` |
| `dyn_pending_max_position_ts_s` | 0.0 | `0xe0` |
| `dyn_pending_order_max_pending_time_ms` | 0.0 | `0xe8` |
| `dyn_pending_delta_max_pending_ts_ms` | 0.0 | `0xf0` |
| `max_try_hiter_times` | 0.0 | `0xf8` |
| `max_try_hiter_time_ms` | 0.0 | `0x100` |
| `price_range_bp` | 0.0 | `0x108` |

原始回执：[顶层解析](../../03_反编译与验证/数学化还原_20261114/libstrategy_lf4.config_layout.json)；[字段数组](../../03_反编译与验证/策略反编译/libstrategy_lf4/config_field_arrays.json)。默认字段是类型/初始化证据，不能代替历史加密配置的明文。

## 附录 C. 验证范围与合成输入

### 基础函数

| 原始函数/模型 | 案例数 | 通过 | 证据 |
|---|---:|---:|---|
| `point_signal_trigger_pv1_spread` | 1200 | 1200 | [回执](../../03_反编译与验证/数学化还原_20261114/libstrategy_lf4.leaf_validation.json) |

本页基础函数检查合计 **1200/1200**。这是原始 ELF 叶函数/指定状态函数的合成输入检查，不能扩写为整个策略或全部历史订单的等价验收。点触发与枚举用精确比较；浮点核验容差和逐位比较范围写在脚本/回执中。

### 回调验证口径

本节在前述叶函数核验之外，直接加载本页 SHA-256 对应的原始 ELF，先调用原始 `on_begin`，再调用原始业务回调。SDK 换成隔离桩：只提供合成数据并记录调用，不进行撮合、不提交回测。正常返回与错误返回按 Rust `Result` 的真实返回约定区分；错误指针的具体地址不用于数值比较。以下“订单成功”仅表示接口接受请求，不表示成交。

本库本轮有 **18 个独立 on_signal 场景**；另有下文列出的专项序列。针对可观察调用顺序/状态的显式断言为 **36/36**。断言数不等于独立场景数，更不等于完整状态空间覆盖。[本库事件回执](../../03_反编译与验证/事件状态验证_20261114/libstrategy_lf4.events.json)；[逐条断言及全库口径](../../03_反编译与验证/事件状态验证_20261114/verification_summary.json)。

本库另有 36 个原始 `on_signal` 场景，包含空/单侧/双侧/多笔订单与指定第几笔撤单失败。[逐事件回执](../../03_反编译与验证/持续深化_20261114/libstrategy_lf4.pending_events.json)。SDK 仅记录请求，不实际成交。另用修正后的五档盘口重新运行上一轮全部状态测试，1111 项旧断言仍通过；这次回归不重复算新增覆盖。

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
| 高阈值基线 | 正常返回 | 0 | `pending_count` |
| 卖一为 0 | 正常返回 | 0 | `pending_count` |
| 盘口比当前时间旧 2 秒 | 正常返回 | 0 | `pending_count` |
| 交易结束但未启用强平 | 正常返回 | 0 | `pending_count` |
| 正向强信号 | 正常返回 | 1 | `depth` |
| 负向强信号 | 正常返回 | 1 | `depth` |
| 订单接口返回 -1 | 错误返回 | 1 | `last_error` |
| 超时撤单接口返回 -1 | 错误返回 | 0 | `cancel_by_pending_ts` |
| 保证金过滤返回无动作 | 正常返回 | 0 | `pending_count` |
| 冲击过滤桩返回无动作 | 正常返回 | 0 | `pending_count` |
| 撤单接口返回 +1 | 正常返回 | 1 | `depth` |
| 盘口恰旧 1 秒 | 正常返回 | 0 | `pending_count` |
| 盘口比当前时间新 2 秒 | 正常返回 | 0 | `pending_count` |
| 买一为 0 | 正常返回 | 0 | `pending_count` |

### 正向强信号的完整 SDK 调用链

```text
inst_start_time_sec → is_trade_start → is_trade_end → ts_ms
→ time_sec → depth → price_step → vol_step
→ position → first_open_time_sec → is_should_lock → margin_filter
→ cancel_by_pending_ts → impact_block_check → cancel_all → liquidity_consumption
→ is_night → place_order_ioc → pending_count → depth
```

## 附录 D. 原始函数与证据

地址统一使用未重定位 ELF 虚拟地址；Ghidra C 中的 `001xxxxx` 是项目加载基址后的地址，两者不要混淆。下列索引使每个计算/回调都可回到本库证据，不用其他库的同名函数替代。

- [signal_trigger::SignalTrigger::update_score](../../03_反编译与验证/策略反编译/libstrategy_lf4/decompiled_repaired/000000000004b690.c)（ELF `0x4b690`，1845 字节）。
- [signal_trigger::SignalTrigger::windows_rsi_trigger](../../03_反编译与验证/策略反编译/libstrategy_lf4/decompiled_repaired/000000000004c990.c)（ELF `0x4c990`，554 字节）。
- [signal_trigger::SignalTrigger::windows_std_trigger](../../03_反编译与验证/策略反编译/libstrategy_lf4/decompiled_repaired/000000000004bf70.c)（ELF `0x4bf70`，264 字节）。
- [signal_trigger::SignalTrigger::windows_mean_trigger](../../03_反编译与验证/策略反编译/libstrategy_lf4/decompiled_repaired/000000000004be60.c)（ELF `0x4be60`，264 字节）。
- [signal_trigger::SignalTrigger::windows_sharpe_trigger](../../03_反编译与验证/策略反编译/libstrategy_lf4/decompiled_repaired/000000000004c740.c)（ELF `0x4c740`，586 字节）。
- [signal_trigger::SignalTrigger::windows_quantile_trigger](../../03_反编译与验证/策略反编译/libstrategy_lf4/decompiled_repaired/000000000004c080.c)（ELF `0x4c080`，1717 字节）。
- [signal_trigger::SignalTrigger::point_signal_trigger_pv1_spread](../../03_反编译与验证/策略反编译/libstrategy_lf4/decompiled_repaired/000000000004bdd0.c)（ELF `0x4bdd0`，137 字节）。
- [signal_trigger::SignalTrigger::new](../../03_反编译与验证/策略反编译/libstrategy_lf4/decompiled_repaired/000000000004b560.c)（ELF `0x4b560`，290 字节）。
- [_ZN12strategy_lf414signal_trigger17enum_rate_counter17hae8899c0d26c9baeE.llvm.754907104417532979](../../03_反编译与验证/策略反编译/libstrategy_lf4/decompiled_repaired/000000000004cbc0.c)（ELF `0x4cbc0`，1378 字节）。
- [<strategy_lf4::TargetTaskStatus as core::fmt::Debug>::fmt](../../03_反编译与验证/策略反编译/libstrategy_lf4/decompiled_repaired/0000000000044c20.c)（ELF `0x44c20`，307 字节）。
- [<strategy_lf4::StrategyLF4 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin](../../03_反编译与验证/策略反编译/libstrategy_lf4/decompiled_repaired/0000000000041c80.c)（ELF `0x41c80`，1371 字节）。
- [<strategy_lf4::StrategyLF4 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth](../../03_反编译与验证/策略反编译/libstrategy_lf4/decompiled_repaired/00000000000421e0.c)（ELF `0x421e0`，448 字节）。
- [<strategy_lf4::StrategyLF4 as future_backtest_sdk::plugin::StrategyPlugin>::on_finish](../../03_反编译与验证/策略反编译/libstrategy_lf4/decompiled_repaired/0000000000044b00.c)（ELF `0x44b00`，280 字节）。
- [<strategy_lf4::StrategyLF4 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal](../../03_反编译与验证/策略反编译/libstrategy_lf4/decompiled_repaired/00000000000423a0.c)（ELF `0x423a0`，10073 字节）。
- [fb_strategy_sdk_abi_version](../../03_反编译与验证/策略反编译/libstrategy_lf4/decompiled_repaired/000000000004efd0.c)（ELF `0x4efd0`，6 字节）。
- [fb_strategy_sdk_version_str](../../03_反编译与验证/策略反编译/libstrategy_lf4/decompiled_repaired/000000000004efe0.c)（ELF `0x4efe0`，73 字节）。

[完整反汇编](../../03_反编译与验证/策略反编译/libstrategy_lf4/assembly.txt)；[核心伪代码集合](../../03_反编译与验证/策略反编译/libstrategy_lf4/核心伪代码.c)。
