# libstrategy_sm2.so：策略数学说明

用正态分布成交概率与报价收益构建买卖效用，分别数值求解最优报价，再比较买卖效用并生成开平动作。

对应原件：`libstrategy_sm2.so`，SHA-256 `7d78c5e4ec850fc13bbf7c374eaeb24857de05276cb0c143c3e84a11cd9bf527`。文档口径：核心规则、事件状态、验证范围和参数附录。

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

### 2.1 动作编码与四阈值

阈值按 $T=(L_o,L_c,S_o,S_c)$ 保存。动作 0=开多、1=平多、2=开空、3=平空、4=无动作。SM2 先比较两侧效用，随后按被选侧的开仓/平仓门槛判断，完整公式见下文；不能照搬普通 PV1 的单分数分类流程。

### 2.2 持仓年龄对阈值的调整

独立函数 `dynamic_threshold` 的输入为持仓秒数 $h_p$，以及参数 $t_0,t_1,\Delta$，依次对应 `dyn_score_position_ts_threshold_s`、`dyn_score_max_position_ts_s`、`dyn_score_delta_score`：

$$
d=\begin{cases}
0,&t_0<0\lor t_1<0\lor h_p<t_0\lor |\Delta|\le10^{-9},\\
\left|\Delta\min\left(\frac{h_p-t_0}{\max(t_1-t_0,10^{-6})},1\right)\right|,&\text{其余},
\end{cases}
\qquad T'=(L_o-d,L_c+d,S_o+d,S_c-d).
$$

$h_p=t_0$ 时 $d=0$；终点后饱和。负 $\Delta$ 仍产生非负 $d$；$t_1\le t_0$ 使用分母下限，不报错。本式限定为该独立函数；LF4/TM5/TM6/SoS6 的内联旧逻辑需按各自章节实现。

### 2.3 正态概率、效用与最优报价

设分布位置与尺度为 $u,\sigma$，$\sigma>0$，

$$F(x)=\Phi((x-u)/\sigma)=\tfrac12[1+\operatorname{erf}((x-u)/(\sigma\sqrt2))].$$

`hit_probability` 的布尔方向分支分别返回 $\beta F(x)$ 与 $\beta(1-F(x))$。但 `UtilityRange::get_utility` 直接计算的效用**没有乘 beta**：

$$U_b(p)=F(p)(V_b-p),\qquad U_s(p)=(1-F(p))(p-V_s).$$

$V_b,V_s$ 是分别传给买卖优化器的价值输入。正常内部极值满足令 $z=(p-u)/\sigma$：

$$g_b(z)=z+\Phi(z)/\phi(z)-(V_b-u)/\sigma=0,$$
$$g_s(z)=z-(1-\Phi(z))/\phi(z)-(V_s-u)/\sigma=0,$$

其中 $\phi(z)=e^{-z^2/2}/\sqrt{2\pi}$。最后 $p=u+\sigma z$。原始函数在 `RAX` 返回 Option 标签，报价在 `XMM0`；只看到 `return 1` 不能推断报价恒为 1。

求根区间固定为 $[-10,10]$，最多 100 次迭代，区间长度或残差容限为 $10^{-8}$；不满足两端异号或未收敛进入错误/无结果路径。使用 erf 的尾部消去可能造成极端 $z$ 下较大的代数残差，本轮 60 个原始函数探测已保留实际残差，不能宣称解析最优与机器码逐位一致。

例如 $V=u=0,\sigma=1$ 时，买侧原始报价约为 $-0.7517915247$；这是无量纲合成例子，不是可交易市场价。$V=-8,u=0,\sigma=1$ 的买侧样本产生约 $-8.1115938873$，按双精度 erf 回代的方程残差约 -0.003606，说明极端尾部不能只报告“求根通过”。

### 2.4 双侧效用如何选择动作

若 $U_b\ge U_s$，包括相等，优先看买侧：$U_b\ge L_o$ 则开多，否则 $U_b\ge S_c$ 则平空，否则无动作。若 $U_b<U_s$，将卖效用映射为 $x=-U_s$：$x\le S_o$ 则开空，否则 $x\le L_c$ 则平多，否则无动作。输出携带对应侧的 Option 报价。

失败侧效用先设为零，之后仍按上述效用比较；不能改成“先剔除失败侧，再自动选择另一侧”，因为这是不同的控制顺序。报价 Option 还要由调用者检查。

本库虽然有公共信号缓存和动态阈值，不应套用 SM1 的 $E>H$ 三分段报价，更不能把它简写为普通 PV1 扣价差。尚未闭合的是上游怎样构成每次的 $u,\sigma,V_b,V_s$ 的所有模式分支及其与账户执行的完整逐事件一致性；本页保留各输入槽的角色，未猜测上游预测分布一定校准。

### 2.5 数量约束与请求输出

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

### 3.3 Touch 的提交与释放

按合约保存 $G(c)=(b_G,a_G,t_G)$。订单请求接受后写入；拒绝时不写入。`on_depth` 在买一或卖一与缓存不等时删除记录，NaN 也导致不等；两者严格相等则保留。删除本身不发单。

同盘口且存在记录时，设超时为 $W$ 毫秒：

$$\mathrm{block}= (W\le0)\lor\bigl((t-t_G)\,1000<W\bigr).$$

正超时达到边界后放行，零／负超时须等变价。保留原 double 运算：$(1000.010-1000)1000\approx9.999999999990905$，仍被 10ms 门控；1000.011 放行。这里没有 SM3.1 barrier 的 epsilon。

验证为成功／拒绝 × 超时 10、0、−1ms，共 6 组、54 个回调，覆盖记录创建、保留、删除及重建；未覆盖真实多单生存期。

### 3.4 报价缺失的 panic 分支

在本轮明确记录的缺省效用参数、平仓位、买一 99/卖一 101、负向强信号 -1000 下，原始回调在撤单后触发 `strategies/index_strategy/strategy_sm2/src/lib.rs:412:44` 的 `utility op without price`。直接调用 Rust 内部函数越过 ctypes 的异常边界后，子进程退出 134；这不是正常 `Result::Err`，也不是“无动作”。[原始 stderr 与回溯](../../03_反编译与验证/事件状态验证_20261114/libstrategy_sm2.active_sell.log)。

二进制断言说明该路径选择了 utility 动作，却没有所需报价 Option。此处只确认该输入下的原始断言；正式插件包装层怎样传播 panic、不同参数下是否仍出现，尚未完整复原。本文没有给它偷偷补一个报价或回退成不交易。

### 3.5 非空挂单注入后的本库调用边界

在这组正向信号、零持仓与非负批量撤单返回夹具中，路径调用 `cancel_all` 后继续发单，没有调用逐 ID 的 `pending_orders`/`cancel_order`。因此指定“第 0/1 笔逐 ID 撤单失败”不会触发这条路径的失败；它测试的是逐 ID 接口，而不是批量接口。批量撤单负返回的截断行为已有前轮独立测试。不能据此推断真实撮合引擎允许撤单/下单任意并发；本库把批量取消的实现交给 SDK。

<a id="limits"></a>

## 4. 复原边界

将回调写为 $F(S,e,c)=(S',R,\rho)$：$S$ 为本地状态，$e$ 为输入事件，$c$ 为 SDK 上下文，$R$ 为有序请求／发布序列，$\rho$ 为正常、错误或 panic 结果。失败时 $S'$ 不一定等于 $S$；按状态章保留已完成的写入。

复原需记录输入时间、合约／信号、原始数值、盘口、持仓和在途信息，再对齐有效阈值、动作、报价、请求量、撤单顺序及回调前后状态。根对象 `changed_offsets` 不是完整堆快照；窗口、树和队列须另行读取。

数值尾部全覆盖和宿主对原始 panic 的处理仍未完成；负信号 panic 在校正盘口后仍复现。 不把本节辅助函数和合成回调通过写成整个策略已逐笔等价。

共同未闭合项：SDK 撮合、费用、账户接续及回报顺序的端到端等价；历史加密配置明文；上游预测公式。本文可指导已明确分支的实现，尚不是可替换原 `.so` 的完整插件。

## 附录 A. 配置字段与默认值

下表来自直接加载原始 `.so` 后调用其 `on_begin` 解析器；浮点字段用两个不同标记值匹配同一位置。偏移相对于策略对象起点，不是 ELF 文件偏移。Option 的 None 载荷不读取为默认数值。日志 SDK 为 no-op，其余 SDK 调用会 abort，未调用交易回调。

| 字段 | 解析值/默认状态 | 对象偏移 |
|---|---|---|
| `signal_mode` | "PV1" | `0x0` |
| `pv1_alpha` | 1.0 | `0x60` |
| `trade_slippery` | 0.0 | `0x68` |
| `close_position_block_ms` | 0.0 | `0x70` |
| `max_single_add_vol` | -1.0 | `0x78` |
| `max_single_add_amt` | -1.0 | `0x80` |
| `max_single_net_vol` | -1.0 | `0x88` |
| `max_single_net_amt` | -1.0 | `0x90` |
| `max_single_close_vol` | -1.0 | `0x98` |
| `max_single_close_amt` | -1.0 | `0xa0` |
| `long_open_threshold` | 0.0 | `0xa8` |
| `long_close_threshold` | 0.0 | `0xb0` |
| `short_open_threshold` | 0.0 | `0xb8` |
| `short_close_threshold` | 0.0 | `0xc0` |
| `dyn_score_position_ts_threshold_s` | 0.0 | `0xc8` |
| `dyn_score_max_position_ts_s` | 0.0 | `0xd0` |
| `dyn_score_delta_score` | 0.0 | `0xd8` |
| `dyn_pending_position_ts_threshold_s` | 0.0 | `0xe0` |
| `dyn_pending_max_position_ts_s` | 0.0 | `0xe8` |
| `dyn_pending_delta_max_pending_ts_ms` | 0.0 | `0xf0` |
| `order_max_pending_time_ms` | 0.0 | `0xf8` |
| `maker_signal_abtype_u` | None（Option 哨兵） | `0x30` |
| `maker_signal_abtype_s` | None（Option 哨兵） | `0x48` |
| `maker_signal_abtype_beta` | 0.0 | `0x100` |
| `signal_all` | "" | `0x18` |
| `touch_gate` | true | `0x120` |
| `touch_gate_timeout_ms` | 5000.0 | `0x108` |
| `book_vol_cap` | true | `0x121` |
| `max_single_taker_vol` | 0.0 | `0x110` |
| `max_maker_pending_vol_on_depth` | 0.0 | `0x118` |

原始回执：[顶层解析](../../03_反编译与验证/数学化还原_20261114/libstrategy_sm2.config_layout.json)；[字段数组](../../03_反编译与验证/策略反编译/libstrategy_sm2/config_field_arrays.json)。默认字段是类型/初始化证据，不能代替历史加密配置的明文。

## 附录 C. 验证范围与合成输入

### 基础函数

| 原始函数/模型 | 案例数 | 通过 | 证据 |
|---|---:|---:|---|
| `dynamic_threshold` | 288 | 288 | [回执](../../03_反编译与验证/数学化还原_20261114/libstrategy_sm2.leaf_validation.json) |

本页基础函数检查合计 **288/288**。这是原始 ELF 叶函数/指定状态函数的合成输入检查，不能扩写为整个策略或全部历史订单的等价验收。点触发与枚举用精确比较；浮点核验容差和逐位比较范围写在脚本/回执中。

[优化器 60 个原始函数探测](../../03_反编译与验证/数学化还原_20261114/libstrategy_sm2.optimizer_native_cases.json)记录报价、Option 标签及回代残差；极端尾部残差不为零，未计作“60 个数学模型通过”。

### 回调验证口径

本节在前述叶函数核验之外，直接加载本页 SHA-256 对应的原始 ELF，先调用原始 `on_begin`，再调用原始业务回调。SDK 换成隔离桩：只提供合成数据并记录调用，不进行撮合、不提交回测。正常返回与错误返回按 Rust `Result` 的真实返回约定区分；错误指针的具体地址不用于数值比较。以下“订单成功”仅表示接口接受请求，不表示成交。

本库本轮有 **18 个独立 on_signal 场景**；另有下文列出的专项序列。针对可观察调用顺序/状态的显式断言为 **66/66**。断言数不等于独立场景数，更不等于完整状态空间覆盖。[本库事件回执](../../03_反编译与验证/事件状态验证_20261114/libstrategy_sm2.events.json)；[逐条断言及全库口径](../../03_反编译与验证/事件状态验证_20261114/verification_summary.json)。

本库另有 36 个原始 `on_signal` 场景，包含空/单侧/双侧/多笔订单与指定第几笔撤单失败。[逐事件回执](../../03_反编译与验证/持续深化_20261114/libstrategy_sm2.pending_events.json)。SDK 仅记录请求，不实际成交。另用修正后的五档盘口重新运行上一轮全部状态测试，1111 项旧断言仍通过；这次回归不重复算新增覆盖。

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
| 正向强信号 | 正常返回 | 1 | `place_order_iap` |
| 负向强信号 | 原始 panic，进程退出 134 | 未到发单 | `utility op without price`，详见下文 |
| 订单接口返回 -1 | 错误返回 | 1 | `last_error` |
| 超时撤单接口返回 -1 | 错误返回 | 0 | `cancel_by_pending_ts` |
| 保证金过滤返回无动作 | 正常返回 | 0 | `impact_block_check` |
| 冲击过滤桩返回无动作 | 正常返回 | 0 | `impact_block_check` |
| 撤单接口返回 +1 | 正常返回 | 1 | `place_order_iap` |
| 盘口恰旧 1 秒 | 正常返回 | 0 | `impact_block_check` |
| 盘口比当前时间新 2 秒 | 正常返回 | 0 | `impact_block_check` |
| 买一为 0 | 正常返回 | 0 | `impact_block_check` |

### 正向强信号的完整 SDK 调用链

```text
inst_start_time_sec → is_trade_start → is_trade_end → time_sec
→ depth → spread_bp → price_step → vol_step
→ contract_mult → position → position_holding_secs → is_should_lock
→ margin_filter → cancel_by_pending_ts → impact_block_check → cancel_all
→ liquidity_consumption → is_night → place_order_iap
```

## 附录 D. 原始函数与证据

地址统一使用未重定位 ELF 虚拟地址；Ghidra C 中的 `001xxxxx` 是项目加载基址后的地址，两者不要混淆。下列索引使每个计算/回调都可回到本库证据，不用其他库的同名函数替代。

- [default_pv1](../../03_反编译与验证/策略反编译/libstrategy_sm2/decompiled_repaired/0000000000045650.c)（ELF `0x45650`，87 字节）。
- [format_utility_tag](../../03_反编译与验证/策略反编译/libstrategy_sm2/decompiled_repaired/0000000000048f50.c)（ELF `0x48f50`，501 字节）。
- [apply_book_vol_cap_sm2](../../03_反编译与验证/策略反编译/libstrategy_sm2/decompiled_repaired/00000000000456b0.c)（ELF `0x456b0`，723 字节）。
- [strategy_signal_maker_common::signal_trigger::SignalTrigger::update_score](../../03_反编译与验证/策略反编译/libstrategy_sm2/decompiled_repaired/00000000000844f0.c)（ELF `0x844f0`，588 字节）。
- [strategy_signal_maker_common::signal_trigger::SignalTrigger::point_signal_trigger_utility](../../03_反编译与验证/策略反编译/libstrategy_sm2/decompiled_repaired/0000000000084740.c)（ELF `0x84740`，175 字节）。
- [strategy_signal_maker_common::signal_trigger::SignalTrigger::new](../../03_反编译与验证/策略反编译/libstrategy_sm2/decompiled_repaired/0000000000084420.c)（ELF `0x84420`，199 字节）。
- [strategy_signal_maker_common::signal_trigger::dynamic_threshold](../../03_反编译与验证/策略反编译/libstrategy_sm2/decompiled_repaired/00000000000847f0.c)（ELF `0x847f0`，152 字节）。
- [strategy_signal_maker_common::signal_trigger::TsQuantileCalculator::update](../../03_反编译与验证/策略反编译/libstrategy_sm2/decompiled_repaired/00000000000841c0.c)（ELF `0x841c0`，598 字节）。
- [strategy_signal_maker_common::signal_trigger::dynamic_pending_ts_ms](../../03_反编译与验证/策略反编译/libstrategy_sm2/decompiled_repaired/0000000000084890.c)（ELF `0x84890`，63 字节）。
- [strategy_signal_maker_common::get_quote_price::UtilityRange::get_utility](../../03_反编译与验证/策略反编译/libstrategy_sm2/decompiled_repaired/00000000000828c0.c)（ELF `0x828c0`，359 字节）。
- [strategy_signal_maker_common::hit_probability::HitProbability::hit_probability](../../03_反编译与验证/策略反编译/libstrategy_sm2/decompiled_repaired/00000000000870b0.c)（ELF `0x870b0`，75 字节）。
- [strategy_signal_maker_common::brentq_option_price::QuotePriceOptimizer::optimal_quote_buy](../../03_反编译与验证/策略反编译/libstrategy_sm2/decompiled_repaired/0000000000082dc0.c)（ELF `0x82dc0`，1423 字节）。
- [strategy_signal_maker_common::brentq_option_price::QuotePriceOptimizer::optimal_quote_sell](../../03_反编译与验证/策略反编译/libstrategy_sm2/decompiled_repaired/0000000000083350.c)（ELF `0x83350`，1455 字节）。
- [<strategy_sm2::StrategySM2 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin](../../03_反编译与验证/策略反编译/libstrategy_sm2/decompiled_repaired/0000000000045990.c)（ELF `0x45990`，854 字节）。
- [<strategy_sm2::StrategySM2 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth](../../03_反编译与验证/策略反编译/libstrategy_sm2/decompiled_repaired/0000000000048df0.c)（ELF `0x48df0`，352 字节）。
- [<strategy_sm2::StrategySM2 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal](../../03_反编译与验证/策略反编译/libstrategy_sm2/decompiled_repaired/0000000000045cf0.c)（ELF `0x45cf0`，12536 字节）。
- [fb_strategy_sdk_abi_version](../../03_反编译与验证/策略反编译/libstrategy_sm2/decompiled_repaired/0000000000054a70.c)（ELF `0x54a70`，6 字节）。
- [fb_strategy_sdk_version_str](../../03_反编译与验证/策略反编译/libstrategy_sm2/decompiled_repaired/0000000000054a80.c)（ELF `0x54a80`，73 字节）。

[完整反汇编](../../03_反编译与验证/策略反编译/libstrategy_sm2/assembly.txt)；[核心伪代码集合](../../03_反编译与验证/策略反编译/libstrategy_sm2/核心伪代码.c)。

### 补充证据定位

- [逐事件记录](../../03_反编译与验证/事件状态验证_20261114/libstrategy_sm2.touch_sequences.json)
