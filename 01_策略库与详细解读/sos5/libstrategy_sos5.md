# libstrategy_sos5.so：策略数学说明

读取 watcher 发布值，在三个 section 之间切换；section 可携带不同合约、信号和交易模式。支持固定人民币门槛或四股指篮子名义金额派生门槛。

对应原件：`libstrategy_sos5.so`，SHA-256 `567ba8f4e88b5e260159311eb31f119455ef8e4215bdb07a5c08186198fb08ac`。文档口径：核心规则、事件状态、验证范围和参数附录。

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

### 2.4 窗口统计与投票

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

### 2.5 section 转移与账户条件

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

### 2.6 固定人民币与 live_basket_bp 两种门槛

`phase_threshold_mode` 先去两端空白并转 ASCII 小写。固定模式使用配置五个人民币门槛；`fixed` 和 `fixed_rmb` 属于支持路径。`live_basket_bp` 根据四股指参考篮子形成名义金额：

$$N=300p_{IF}+300p_{IH}+200p_{IM}+200p_{IC}.$$

四个品种键都要能取到参考价；这是每品种一单位合约价格乘乘数的篮子，不是根据账户实际持仓权重加总。篮子无效时调用者可用 `phase_default_reference_notional`，缺省 5000000，而不是缺一种品种就直接按其余三种继续算。

令 $b_p=\text{phase\_threshold\_bp}$，$h=\text{phase\_high\_multiplier}$，则

$$B=N b_p/10000,\qquad(h_{12},h_{13},h_{21},h_{23},h_{31})=(B,hB,-B,hB,B).$$

代码要求 $b_p$ 为正有限数、$h>1$ 且有限、参考金额正且有限、推导门槛有效；不满足返回错误。不能因为默认 $b_p=0$ 就假设 live 模式默认有效。

参考价更新还存在 `phase_mid_jump_reject_rate` 与 `phase_max_spread_bp` 的过滤（缺省分别 0.11 和 100）；二者防止异常行情直接扭曲阶段门槛。过滤后的“最后有效价”与当前盘口并非始终相等，因此重放时必须保存参考价缓存，而不是每次从当前四个中价重算并忽略拒收。

### 2.7 section 迁移与普通交易是两条路径

`sos_taker_rate`、`sos_add_vol`、`order_book_1_2_gap` 用于 section 迁移相关的订单逻辑；常规信号仍使用本 section 四阈值、PV 模式、成本和风险约束。不能把两个参数集强行合并成同一套每信号订单公式。通用 `run_sos5_phase` 的构建/发布参数属于如何组装输入，不能替代 so 内部的实际条件。

本轮已探测三个 section 的 24 个数值字段默认值与偏移。完整参考价拒收、跨 section 撤单和跨合约再平衡轨迹尚未做动态事件验收；相应静态分支已保留到本页函数索引。

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

### 3.4 非空挂单注入后的本库调用边界

在这组正向信号、零持仓与非负批量撤单返回夹具中，路径调用 `cancel_all` 后继续发单，没有调用逐 ID 的 `pending_orders`/`cancel_order`。因此指定“第 0/1 笔逐 ID 撤单失败”不会触发这条路径的失败；它测试的是逐 ID 接口，而不是批量接口。批量撤单负返回的截断行为已有前轮独立测试。不能据此推断真实撮合引擎允许撤单/下单任意并发；本库把批量取消的实现交给 SDK。

<a id="limits"></a>

## 4. 复原边界

将回调写为 $F(S,e,c)=(S',R,\rho)$：$S$ 为本地状态，$e$ 为输入事件，$c$ 为 SDK 上下文，$R$ 为有序请求／发布序列，$\rho$ 为正常、错误或 panic 结果。失败时 $S'$ 不一定等于 $S$；按状态章保留已完成的写入。

复原需记录输入时间、合约／信号、原始数值、盘口、持仓和在途信息，再对齐有效阈值、动作、报价、请求量、撤单顺序及回调前后状态。根对象 `changed_offsets` 不是完整堆快照；窗口、树和队列须另行读取。

四品种参考篮子拒收、换月/跨合约 section 迁移与真实账户联合回放仍未完成。 不把本节辅助函数和合成回调通过写成整个策略已逐笔等价。

共同未闭合项：SDK 撮合、费用、账户接续及回报顺序的端到端等价；历史加密配置明文；上游预测公式。本文可指导已明确分支的实现，尚不是可替换原 `.so` 的完整插件。

## 附录 A. 配置字段与默认值

下表来自直接加载原始 `.so` 后调用其 `on_begin` 解析器；浮点字段用两个不同标记值匹配同一位置。偏移相对于策略对象起点，不是 ELF 文件偏移。Option 的 None 载荷不读取为默认数值。日志 SDK 为 no-op，其余 SDK 调用会 abort，未调用交易回调。

SoS 必需的 watcher 名与 section 标识使用探测种子；表中的 `"probe"` 是探测输入，**不是二进制缺省值**。section 的 IF、rank=1、signal_all="0"、IAP 同样是为使解析成立所设种子。

| 字段 | 解析值/默认状态 | 对象偏移 |
|---|---|---|
| `watcher_strategy_name` | "probe" | `0x0` |
| `watcher_account_name` | "probe" | `0x18` |
| `watcher_key` | "rolling_pnl" | `0x30` |
| `section1_to_2_pnl` | 0.0 | `0x288` |
| `section1_to_3_pnl` | 0.0 | `0x290` |
| `section2_to_1_pnl` | 0.0 | `0x298` |
| `section2_to_3_pnl` | 0.0 | `0x2a0` |
| `section3_to_1_pnl` | 0.0 | `0x2a8` |
| `phase_threshold_mode` | "fixed_rmb" | `0x48` |
| `phase_threshold_bp` | 0.0 | `0x2b0` |
| `phase_high_multiplier` | 2.0 | `0x2b8` |
| `phase_default_reference_notional` | 5000000.0 | `0x2c0` |
| `phase_mid_jump_reject_rate` | 0.11 | `0x2c8` |
| `phase_max_spread_bp` | 100.0 | `0x2d0` |
| `order_book_1_2_gap` | 0.0 | `0x2d8` |
| `sos_taker_rate` | 0.0 | `0x2e0` |
| `sos_add_vol` | 0.0 | `0x2e8` |
| `section1` | 嵌套结构，见下表/字段表 | — |
| `section2` | 嵌套结构，见下表/字段表 | — |
| `section3` | 嵌套结构，见下表/字段表 | — |
| `signal_mode` | "" | `0x240` |
| `pv1_alpha` | 1.0 | `0x2f0` |
| `cost_alpha` | 1.0 | `0x2f8` |
| `signal_trigger_mode` | "" | `0x258` |
| `vote_rate` | 0.1 | `0x300` |
| `quantile` | 0.9 | `0x308` |
| `signal_windows_s` | [] | `0x270` |
| `score_taker_rate_alpha` | 0.0 | `0x310` |
| `taker_rate_baseline` | 0.0 | `0x318` |
| `max_taker_rate` | 0.0 | `0x320` |
| `trade_slippery` | 0.0 | `0x328` |
| `close_position_block_ms` | 0.0 | `0x330` |
| `max_single_close_vol` | 0.0 | `0x338` |
| `max_single_close_amt` | 0.0 | `0x340` |
| `dyn_score_position_ts_threshold_s` | 0.0 | `0x348` |
| `dyn_score_max_position_ts_s` | 0.0 | `0x350` |
| `dyn_score_delta_score` | 0.0 | `0x358` |
| `dyn_pending_position_ts_threshold_s` | 0.0 | `0x360` |
| `dyn_pending_max_position_ts_s` | 0.0 | `0x368` |
| `dyn_pending_order_max_pending_time_ms` | 0.0 | `0x370` |
| `dyn_pending_delta_max_pending_ts_ms` | 0.0 | `0x378` |

嵌套数值字段另行覆盖探测：

| 完整字段 | 缺省值 | 对象偏移 |
|---|---|---|
| `section1.long_open_threshold` | 0.0 | `0xc0` |
| `section1.long_close_threshold` | 0.0 | `0xc8` |
| `section1.short_open_threshold` | 0.0 | `0xd0` |
| `section1.short_close_threshold` | 0.0 | `0xd8` |
| `section1.max_single_add_vol` | 0.0 | `0xe0` |
| `section1.max_single_net_vol` | 0.0 | `0xe8` |
| `section1.max_single_add_amt` | 0.0 | `0xf0` |
| `section1.max_single_net_amt` | 0.0 | `0xf8` |
| `section2.long_open_threshold` | 0.0 | `0x160` |
| `section2.long_close_threshold` | 0.0 | `0x168` |
| `section2.short_open_threshold` | 0.0 | `0x170` |
| `section2.short_close_threshold` | 0.0 | `0x178` |
| `section2.max_single_add_vol` | 0.0 | `0x180` |
| `section2.max_single_net_vol` | 0.0 | `0x188` |
| `section2.max_single_add_amt` | 0.0 | `0x190` |
| `section2.max_single_net_amt` | 0.0 | `0x198` |
| `section3.long_open_threshold` | 0.0 | `0x200` |
| `section3.long_close_threshold` | 0.0 | `0x208` |
| `section3.short_open_threshold` | 0.0 | `0x210` |
| `section3.short_close_threshold` | 0.0 | `0x218` |
| `section3.max_single_add_vol` | 0.0 | `0x220` |
| `section3.max_single_net_vol` | 0.0 | `0x228` |
| `section3.max_single_add_amt` | 0.0 | `0x230` |
| `section3.max_single_net_amt` | 0.0 | `0x238` |

原始回执：[顶层解析](../../03_反编译与验证/数学化还原_20261114/libstrategy_sos5.config_layout.json)；[字段数组](../../03_反编译与验证/策略反编译/libstrategy_sos5/config_field_arrays.json)。默认字段是类型/初始化证据，不能代替历史加密配置的明文。

## 附录 C. 验证范围与合成输入

### 基础函数

| 原始函数/模型 | 案例数 | 通过 | 证据 |
|---|---:|---:|---|
| `point_signal_trigger_pv1_spread` | 1200 | 1200 | [回执](../../03_反编译与验证/数学化还原_20261114/libstrategy_sos5.leaf_validation.json) |
| `dynamic_threshold` | 288 | 288 | [回执](../../03_反编译与验证/数学化还原_20261114/libstrategy_sos5.leaf_validation.json) |

本页基础函数检查合计 **1488/1488**。这是原始 ELF 叶函数/指定状态函数的合成输入检查，不能扩写为整个策略或全部历史订单的等价验收。点触发与枚举用精确比较；浮点核验容差和逐位比较范围写在脚本/回执中。

### 回调验证口径

本节在前述叶函数核验之外，直接加载本页 SHA-256 对应的原始 ELF，先调用原始 `on_begin`，再调用原始业务回调。SDK 换成隔离桩：只提供合成数据并记录调用，不进行撮合、不提交回测。正常返回与错误返回按 Rust `Result` 的真实返回约定区分；错误指针的具体地址不用于数值比较。以下“订单成功”仅表示接口接受请求，不表示成交。

本库本轮有 **18 个独立 on_signal 场景**；另有下文列出的专项序列。针对可观察调用顺序/状态的显式断言为 **119/119**。断言数不等于独立场景数，更不等于完整状态空间覆盖。[本库事件回执](../../03_反编译与验证/事件状态验证_20261114/libstrategy_sos5.events.json)；[逐条断言及全库口径](../../03_反编译与验证/事件状态验证_20261114/verification_summary.json)。

本库另有 36 个原始 `on_signal` 场景，包含空/单侧/双侧/多笔订单与指定第几笔撤单失败。[逐事件回执](../../03_反编译与验证/持续深化_20261114/libstrategy_sos5.pending_events.json)。SDK 仅记录请求，不实际成交。另用修正后的五档盘口重新运行上一轮全部状态测试，1111 项旧断言仍通过；这次回归不重复算新增覆盖。

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
inst_start_time_sec → is_trade_start → is_trade_end → get_published:rolling_pnl
→ free_cash → meta_account → time_sec → depth
→ spread_bp → contract_mult → price_step → vol_step
→ position → first_open_time_sec → margin_filter → cancel_by_pending_ts
→ cancel_all → liquidity_consumption → is_night → place_order_iap
```

## 附录 D. 原始函数与证据

地址统一使用未重定位 ELF 虚拟地址；Ghidra C 中的 `001xxxxx` 是项目加载基址后的地址，两者不要混淆。下列索引使每个计算/回调都可回到本库证据，不用其他库的同名函数替代。

- [SoS5Params::phase_thresholds](../../03_反编译与验证/策略反编译/libstrategy_sos5/decompiled_repaired/0000000000049050.c)（ELF `0x49050`，1830 字节）。
- [SoS5Params::signal_trigger_mode](../../03_反编译与验证/策略反编译/libstrategy_sos5/decompiled_repaired/0000000000049780.c)（ELF `0x49780`，266 字节）。
- [signal_trigger::SignalTrigger::update_score](../../03_反编译与验证/策略反编译/libstrategy_sos5/decompiled_repaired/000000000006a5e0.c)（ELF `0x6a5e0`，1845 字节）。
- [signal_trigger::SignalTrigger::windows_rsi_trigger](../../03_反编译与验证/策略反编译/libstrategy_sos5/decompiled_repaired/000000000006b8e0.c)（ELF `0x6b8e0`，554 字节）。
- [signal_trigger::SignalTrigger::windows_std_trigger](../../03_反编译与验证/策略反编译/libstrategy_sos5/decompiled_repaired/000000000006aec0.c)（ELF `0x6aec0`，264 字节）。
- [signal_trigger::SignalTrigger::windows_mean_trigger](../../03_反编译与验证/策略反编译/libstrategy_sos5/decompiled_repaired/000000000006adb0.c)（ELF `0x6adb0`，264 字节）。
- [signal_trigger::SignalTrigger::windows_sharpe_trigger](../../03_反编译与验证/策略反编译/libstrategy_sos5/decompiled_repaired/000000000006b690.c)（ELF `0x6b690`，586 字节）。
- [signal_trigger::SignalTrigger::windows_quantile_trigger](../../03_反编译与验证/策略反编译/libstrategy_sos5/decompiled_repaired/000000000006afd0.c)（ELF `0x6afd0`，1717 字节）。
- [signal_trigger::SignalTrigger::point_signal_trigger_pv1_spread](../../03_反编译与验证/策略反编译/libstrategy_sos5/decompiled_repaired/000000000006ad20.c)（ELF `0x6ad20`，137 字节）。
- [signal_trigger::dynamic_threshold](../../03_反编译与验证/策略反编译/libstrategy_sos5/decompiled_repaired/000000000006c080.c)（ELF `0x6c080`，152 字节）。
- [_ZN13strategy_sos514signal_trigger17enum_rate_counter17h52e1c88565e9250aE.llvm.14864376446662127556](../../03_反编译与验证/策略反编译/libstrategy_sos5/decompiled_repaired/000000000006bb10.c)（ELF `0x6bb10`，1378 字节）。
- [default_watcher_key](../../03_反编译与验证/策略反编译/libstrategy_sos5/decompiled_repaired/0000000000048f80.c)（ELF `0x48f80`，98 字节）。
- [place_order_by_mode](../../03_反编译与验证/策略反编译/libstrategy_sos5/decompiled_repaired/000000000004e940.c)（ELF `0x4e940`，338 字节）。
- [phase_basket_notional](../../03_反编译与验证/策略反编译/libstrategy_sos5/decompiled_repaired/000000000004e6a0.c)（ELF `0x4e6a0`，662 字节）。
- [default_phase_threshold_mode](../../03_反编译与验证/策略反编译/libstrategy_sos5/decompiled_repaired/0000000000048ff0.c)（ELF `0x48ff0`，95 字节）。
- [<strategy_sos5::StrategySoS5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin](../../03_反编译与验证/策略反编译/libstrategy_sos5/decompiled_repaired/0000000000049890.c)（ELF `0x49890`，2396 字节）。
- [<strategy_sos5::StrategySoS5 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth](../../03_反编译与验证/策略反编译/libstrategy_sos5/decompiled_repaired/000000000004dba0.c)（ELF `0x4dba0`，2102 字节）。
- [<strategy_sos5::StrategySoS5 as future_backtest_sdk::plugin::StrategyPlugin>::on_finish](../../03_反编译与验证/策略反编译/libstrategy_sos5/decompiled_repaired/000000000004e3e0.c)（ELF `0x4e3e0`，697 字节）。
- [<strategy_sos5::StrategySoS5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal](../../03_反编译与验证/策略反编译/libstrategy_sos5/decompiled_repaired/000000000004a1f0.c)（ELF `0x4a1f0`，14764 字节）。
- [fb_strategy_sdk_abi_version](../../03_反编译与验证/策略反编译/libstrategy_sos5/decompiled_repaired/0000000000069a10.c)（ELF `0x69a10`，6 字节）。
- [fb_strategy_sdk_version_str](../../03_反编译与验证/策略反编译/libstrategy_sos5/decompiled_repaired/0000000000069a20.c)（ELF `0x69a20`，73 字节）。

[完整反汇编](../../03_反编译与验证/策略反编译/libstrategy_sos5/assembly.txt)；[核心伪代码集合](../../03_反编译与验证/策略反编译/libstrategy_sos5/核心伪代码.c)。

### 补充证据定位

- [108 个阶段输入](../../03_反编译与验证/事件状态验证_20261114/libstrategy_sos5.phase_sequences.json)
