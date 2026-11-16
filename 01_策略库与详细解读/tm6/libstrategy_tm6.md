# libstrategy_tm6.so：策略数学说明

tm5 的主动交易与滚动收益发布，加上与 sm4 同构的信号配对时长选阈值机制。

对应原件：`libstrategy_tm6.so`，SHA-256 `49a117a7d89fb5a1be9dcd9be24493af02da2ea230d1a7c52d7e587f5558b1d4`。文档口径：核心规则、事件状态、验证范围和参数附录。

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

### 2.4 阈值候选树、虚拟开平配对与中位数选择

每个候选和合约分别保存未开、多头或空头状态；已闭合配对用于统计时长。事件内先平后开、队列淘汰和失败保留见状态章。

候选按配置 $\delta=\text{score\_thresholds\_delta}$、$n=\text{score\_thresholds\_num}$ 建立。除原始 $T_0$ 外，每个 $i=1,\dots,n$ 生成两组，经本库 round 精度处理：

$$T_{i,+}=(L_o+i\delta,L_c-i\delta,S_o-i\delta,S_c+i\delta),$$
$$T_{i,-}=(L_o-i\delta,L_c+i\delta,S_o+i\delta,S_c-i\delta).$$

正向组同时拉大开平跨度，负向组缩小跨度；不是简单给全部阈值加同一个数。键 0 为原始组，后续正负组按插入顺序获得正整数键。

令窗口中完成配对的时长集合为 $D_j$。空集返回 None；排序后奇数样本取中间项，偶数样本取中间两项平均。目标时长为 $H_*$，选择

$$j^*=\arg\min_{j:D_j\ne\varnothing}|\operatorname{median}(D_j)-H_*|.$$

实际实现有额外门槛：先查键 0；键 0 本身没有有效中位数时直接回退原始阈值，**不会**继续寻找其他已经有样本的候选。键 0 不存在则进入 unwrap 错误路径。键 0 有样本才遍历候选，用严格更小 `<` 更新最优，因此同距离不会覆盖先遇到的键。BTreeMap 的有序遍历与 HashMap 的随机遍历不可混淆。

虚拟配对时长是信号统计量；实际成交受盘口、在途、保证金与订单结果影响。

### 2.5 TM6 的两套独立时间队列

TM6 同时有信号配对队列和订单收益队列。配对窗口默认 1200000ms，目标配对时长 60000ms；订单收益窗口 `rolling_window_ms` 缺省为 0。这两个窗口不能合并，也不能把信号配对中位数当成实际成交收益统计。

本库 FFI `on_order` 包装中已经直接内联收益记录：输入 `+0x30` 数量绝对值大于 $10^{-5}$ 时，读 `+0x08` 秒时刻并乘 1000，与 `+0x48` 收益值一起入队。队列在策略状态 `+0x80` 开始，cap/ptr/head/len 分别位于 `+0x80/+0x88/+0x90/+0x98`，窗口在 `+0xa0`。不能因为业务函数清单里找不到同名独立 `on_order` 就断言没有收益回调。

行情回调按 $t-t_j>W$ 淘汰，发布 $\sum P_j$ 为 rolling_pnl。与 TM5 的发布语义一致，但本库的阈值还受候选配对树选择影响。默认 `score_thresholds_num=1`，原始组加一对变体共 3 组；SM4 默认 2，形成 5 组。即使其他参数相同，候选集合本身也不同。

最终交易仍走主动执行，不使用 SM1 的硬编码 0.2/Mid 三分段价格函数。需要复现的状态顺序包括：记录信号供候选配对、选择候选四阈值、实际动作过滤与请求、后续回报入收益队列；不能用最终收益反向挑选最接近目标的候选。

### 2.6 数量约束与请求输出

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

### 3.3 收益队列：订单回调追加，行情回调发布

[9 事件的参考模型比对](../../03_反编译与验证/事件状态验证_20261114/libstrategy_tm6.state_sequences.json)使用 10000ms 窗口，逐个比较队列 `(毫秒时间, 回报收益)` 和发布值。TM6 的 on_order 逻辑内联在插件 ABI 包装函数 0x61d40 中，本轮经其原始 C 事件入口执行；队列位于策略对象 +0x80。

- 数量绝对值超过本页所述过滤门槛的回报先追加，再从队首删除 `now_ms-front_ms > W` 的项；恰等于 W 保留。零数量回报既不追加，也不驱动淘汰。
- `on_order` 不发布 rolling_pnl。`on_depth` 使用 **SDK context_time** 乘 1000 淘汰和求和，然后发布；不是使用传入行情对象的时间字段。本轮故意把行情对象时间设为 17 秒而 SDK 时钟设为 1010 秒，队列仍按 1010 秒计算。
- 回报 `(1000s,+2)、(1005s,-3)、(1010s,+5)` 在 1010 秒都保留，发布和为 4；1010.001 秒移除第一项，和为 2；1015 秒第二项仍保留，1015.001 秒只剩 +5；1030 秒清空并发布 0。
- 1020 秒的零数量回报被忽略，所以不会提前清空队列；它随后被忽略的时间也不改变有效记录。

记录的收益是回报字段直接给定值，无法由这一队列推出手续费已经扣除。只按队首淘汰的实现还意味着不能擅自排序乱序回报，再声称事件等价。

### 3.4 自适应状态与订单结果的边界

候选配对属于信号驱动的虚拟状态，不应等真实订单成功后才更新。已记录到四个 `threshold_*` 发布发生在 `margin_filter` 和撤单之前；随后把撤单或订单接口设为失败，不能撤销已经发布的四值。

### 3.5 非空挂单注入后的本库调用边界

在这组正向信号、零持仓与非负批量撤单返回夹具中，路径调用 `cancel_all` 后继续发单，没有调用逐 ID 的 `pending_orders`/`cancel_order`。因此指定“第 0/1 笔逐 ID 撤单失败”不会触发这条路径的失败；它测试的是逐 ID 接口，而不是批量接口。批量撤单负返回的截断行为已有前轮独立测试。不能据此推断真实撮合引擎允许撤单/下单任意并发；本库把批量取消的实现交给 SDK。

### 3.6 候选配对的事件更新顺序

本库原始构造、更新和选择函数已与独立状态模型完成 **2,400 个事件**逐步对照。每步核对每个候选的全部闭合配对记录（开闭时刻、开闭信号、方向、闭合标记），再核对被选候选键；不是只比较根对象是否变动。覆盖 IF/IH/IC 交错、重复时间、时间倒退、同信号开平重叠、0/负/正窗口、等距选择。测试候选数为 2 或 3；没有将其扩写成任意大 BTreeMap 布局均经过动态验收。

每个候选 $j$ 的开仓状态按合约分开；闭合样本队列 $D_j$ 则汇集各合约。事件 $(c,t,s)$ 的精确顺序为：

1. 若 $c$ 的原状态是多且 $s\le L_c$，或原状态是空且 $s\ge S_c$，生成配对 $(t_o,t,s_o,s,side)$ 并将该合约置空。
2. **仅在本候选新增闭合配对时**，从队首删除 $t-t_{close}>W$ 的记录；等号保留。淘汰按闭合时间，不按开仓时间，也不是遍历删除所有过期项。
3. 若此时该合约为空，先用 $s\ge L_o$ 开多，否则用 $s\le S_o$ 开空。因此同一个事件可以先平后开；同时满足两侧开仓条件时先开多。
4. 使用当前保留样本的 $t_{close}-t_o$ 计算中位数，再执行正文中的键 0 门槛与最近目标选择。

没有新闭合时，时间经过、另一合约的新开仓或普通中性信号均不触发本候选的清理；旧样本仍可能影响阈值。未闭合仓位也不因窗口到期而自动失效。输入时间倒退时不自动排序、不钳制负持有时长。窗口为负时，新插入记录的年龄 0 已大于窗口，亦被删除。

另做了 4 条真实 `on_signal` 序列：正信号开、负信号平多反开空、正信号平空反开多、负信号再反转；中间两次让下单接口返回 -1。原回调确实返回错误，但虚拟闭合样本数仍依次为 0、1、2、3。说明候选统计先于交易请求更新，拒单不能回滚候选树，也不能把虚拟开平解释成真实成交。

[逐节点 2400 事件回执](../../03_反编译与验证/持续深化_20261114/libstrategy_tm6.tree_validation.json)；[原始回调拒单序列](../../03_反编译与验证/持续深化_20261114/libstrategy_tm6.tree_callbacks.json)。

<a id="limits"></a>

## 4. 复原边界

将回调写为 $F(S,e,c)=(S',R,\rho)$：$S$ 为本地状态，$e$ 为输入事件，$c$ 为 SDK 上下文，$R$ 为有序请求／发布序列，$\rho$ 为正常、错误或 panic 结果。失败时 $S'$ 不一定等于 $S$；按状态章保留已完成的写入。

复原需记录输入时间、合约／信号、原始数值、盘口、持仓和在途信息，再对齐有效阈值、动作、报价、请求量、撤单顺序及回调前后状态。根对象 `changed_offsets` 不是完整堆快照；窗口、树和队列须另行读取。

候选树与真实成交收益发布、SoS 订阅的联合长序列，以及大树多层节点尚未验收。 不把本节辅助函数和合成回调通过写成整个策略已逐笔等价。

共同未闭合项：SDK 撮合、费用、账户接续及回报顺序的端到端等价；历史加密配置明文；上游预测公式。本文可指导已明确分支的实现，尚不是可替换原 `.so` 的完整插件。

## 附录 A. 配置字段与默认值

下表来自直接加载原始 `.so` 后调用其 `on_begin` 解析器；浮点字段用两个不同标记值匹配同一位置。偏移相对于策略对象起点，不是 ELF 文件偏移。Option 的 None 载荷不读取为默认数值。日志 SDK 为 no-op，其余 SDK 调用会 abort，未调用交易回调。

| 字段 | 解析值/默认状态 | 对象偏移 |
|---|---|---|
| `signal_mode` | "" | `0xa8` |
| `pv1_alpha` | 1.0 | `0xf0` |
| `cost_alpha` | 1.0 | `0xf8` |
| `signal_trigger_mode` | "" | `0xc0` |
| `vote_rate` | 0.1 | `0x100` |
| `quantile` | 0.9 | `0x108` |
| `signal_windows_s` | [] | `0xd8` |
| `score_taker_rate_alpha` | 0.0 | `0x110` |
| `taker_rate_baseline` | 0.0 | `0x118` |
| `max_taker_rate` | 0.0 | `0x120` |
| `trade_slippery` | 0.0 | `0x128` |
| `close_position_block_ms` | 0.0 | `0x130` |
| `max_single_add_vol` | 1.0 | `0x138` |
| `max_single_add_amt` | 0.0 | `0x140` |
| `max_single_net_vol` | 1.0 | `0x148` |
| `max_single_net_amt` | 0.0 | `0x150` |
| `max_single_close_vol` | 0.0 | `0x158` |
| `max_single_close_amt` | 0.0 | `0x160` |
| `long_open_threshold` | 0.0 / 0.0 | `0x8`, `0x168` |
| `long_close_threshold` | 0.0 / 0.0 | `0x10`, `0x170` |
| `short_open_threshold` | 0.0 / 0.0 | `0x18`, `0x178` |
| `short_close_threshold` | 0.0 / 0.0 | `0x20`, `0x180` |
| `dyn_score_position_ts_threshold_s` | 0.0 | `0x188` |
| `dyn_score_max_position_ts_s` | 0.0 | `0x190` |
| `dyn_score_delta_score` | 0.0 | `0x198` |
| `dyn_pending_position_ts_threshold_s` | 0.0 | `0x1a0` |
| `dyn_pending_max_position_ts_s` | 0.0 | `0x1a8` |
| `dyn_pending_order_max_pending_time_ms` | 0.0 | `0x1b0` |
| `dyn_pending_delta_max_pending_ts_ms` | 0.0 | `0x1b8` |
| `pair_rolling_window_ms` | 1200000.0 | `0x1c0` |
| `pair_target_holding_period_ms` | 60000.0 | `0x1c8` |
| `score_thresholds_delta` | 0.2 | `0x1d0` |
| `score_thresholds_num` | 1 | `0x1e0` |
| `rolling_window_ms` | 0.0 / 0.0 | `0xa0`, `0x1d8` |

原始回执：[顶层解析](../../03_反编译与验证/数学化还原_20261114/libstrategy_tm6.config_layout.json)；[字段数组](../../03_反编译与验证/策略反编译/libstrategy_tm6/config_field_arrays.json)。默认字段是类型/初始化证据，不能代替历史加密配置的明文。

## 附录 C. 验证范围与合成输入

### 基础函数

| 原始函数/模型 | 案例数 | 通过 | 证据 |
|---|---:|---:|---|
| `point_signal_trigger_pv1_spread` | 1200 | 1200 | [回执](../../03_反编译与验证/数学化还原_20261114/libstrategy_tm6.leaf_validation.json) |

本页基础函数检查合计 **1200/1200**。这是原始 ELF 叶函数/指定状态函数的合成输入检查，不能扩写为整个策略或全部历史订单的等价验收。点触发与枚举用精确比较；浮点核验容差和逐位比较范围写在脚本/回执中。

### 回调验证口径

本节在前述叶函数核验之外，直接加载本页 SHA-256 对应的原始 ELF，先调用原始 `on_begin`，再调用原始业务回调。SDK 换成隔离桩：只提供合成数据并记录调用，不进行撮合、不提交回测。正常返回与错误返回按 Rust `Result` 的真实返回约定区分；错误指针的具体地址不用于数值比较。以下“订单成功”仅表示接口接受请求，不表示成交。

本库本轮有 **18 个独立 on_signal 场景**；另有下文列出的专项序列。针对可观察调用顺序/状态的显式断言为 **21/21**。断言数不等于独立场景数，更不等于完整状态空间覆盖。[本库事件回执](../../03_反编译与验证/事件状态验证_20261114/libstrategy_tm6.events.json)；[逐条断言及全库口径](../../03_反编译与验证/事件状态验证_20261114/verification_summary.json)。

本库另有 36 个原始 `on_signal` 场景，包含空/单侧/双侧/多笔订单与指定第几笔撤单失败。[逐事件回执](../../03_反编译与验证/持续深化_20261114/libstrategy_tm6.pending_events.json)。SDK 仅记录请求，不实际成交。另用修正后的五档盘口重新运行上一轮全部状态测试，1111 项旧断言仍通过；这次回归不重复算新增覆盖。

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
| 正向强信号 | 正常返回 | 1 | `place_order_ioc` |
| 负向强信号 | 正常返回 | 1 | `place_order_ioc` |
| 订单接口返回 -1 | 错误返回 | 1 | `last_error` |
| 超时撤单接口返回 -1 | 错误返回 | 0 | `cancel_by_pending_ts` |
| 保证金过滤返回无动作 | 正常返回 | 0 | `impact_block_check` |
| 冲击过滤桩返回无动作 | 正常返回 | 0 | `impact_block_check` |
| 撤单接口返回 +1 | 正常返回 | 1 | `place_order_ioc` |
| 盘口恰旧 1 秒 | 正常返回 | 0 | `impact_block_check` |
| 盘口比当前时间新 2 秒 | 正常返回 | 0 | `impact_block_check` |
| 买一为 0 | 正常返回 | 0 | `impact_block_check` |

### 正向强信号的完整 SDK 调用链

```text
inst_start_time_sec → is_trade_start → is_trade_end → ts_ms
→ time_sec → depth → spread_bp → contract_mult
→ price_step → vol_step → position → position_holding_secs
→ is_should_lock → publish:threshold_long_open=0 → publish:threshold_long_close=0 → publish:threshold_short_open=0
→ publish:threshold_short_close=0 → margin_filter → cancel_by_pending_ts → impact_block_check
→ cancel_all → liquidity_consumption → is_night → place_order_ioc
```

## 附录 D. 原始函数与证据

地址统一使用未重定位 ELF 虚拟地址；Ghidra C 中的 `001xxxxx` 是项目加载基址后的地址，两者不要混淆。下列索引使每个计算/回调都可回到本库证据，不用其他库的同名函数替代。

- [signal_trigger::SignalTrigger::update_score](../../03_反编译与验证/策略反编译/libstrategy_tm6/decompiled_repaired/0000000000054bf0.c)（ELF `0x54bf0`，1605 字节）。
- [signal_trigger::SignalTrigger::windows_rsi_trigger](../../03_反编译与验证/策略反编译/libstrategy_tm6/decompiled_repaired/0000000000055e00.c)（ELF `0x55e00`，513 字节）。
- [signal_trigger::SignalTrigger::windows_std_trigger](../../03_反编译与验证/策略反编译/libstrategy_tm6/decompiled_repaired/00000000000553e0.c)（ELF `0x553e0`，264 字节）。
- [signal_trigger::SignalTrigger::windows_mean_trigger](../../03_反编译与验证/策略反编译/libstrategy_tm6/decompiled_repaired/00000000000552d0.c)（ELF `0x552d0`，264 字节）。
- [signal_trigger::SignalTrigger::windows_sharpe_trigger](../../03_反编译与验证/策略反编译/libstrategy_tm6/decompiled_repaired/0000000000055bc0.c)（ELF `0x55bc0`，561 字节）。
- [signal_trigger::SignalTrigger::windows_quantile_trigger](../../03_反编译与验证/策略反编译/libstrategy_tm6/decompiled_repaired/00000000000554f0.c)（ELF `0x554f0`，1729 字节）。
- [signal_trigger::SignalTrigger::point_signal_trigger_pv1_spread](../../03_反编译与验证/策略反编译/libstrategy_tm6/decompiled_repaired/0000000000055240.c)（ELF `0x55240`，137 字节）。
- [signal_trigger::SignalTrigger::new](../../03_反编译与验证/策略反编译/libstrategy_tm6/decompiled_repaired/0000000000054aa0.c)（ELF `0x54aa0`，326 字节）。
- [_ZN12strategy_tm614signal_trigger17enum_rate_counter17h4700a1e9bbed136eE.llvm.9466522774482311751](../../03_反编译与验证/策略反编译/libstrategy_tm6/decompiled_repaired/0000000000056010.c)（ELF `0x56010`，1364 字节）。
- [_ZN12strategy_tm617signal_pairs_tree15SignalPairStats28get_pairs_time_sec_ms_median17h4a9fe67d7a117850E.llvm.17305594220767975752](../../03_反编译与验证/策略反编译/libstrategy_tm6/decompiled_repaired/000000000005e030.c)（ELF `0x5e030`，404 字节）。
- [signal_pairs_tree::SignalPairsTree::debug_string](../../03_反编译与验证/策略反编译/libstrategy_tm6/decompiled_repaired/000000000005f7d0.c)（ELF `0x5f7d0`，1553 字节）。
- [signal_pairs_tree::SignalPairsTree::find_nearest_pair_median_threshold](../../03_反编译与验证/策略反编译/libstrategy_tm6/decompiled_repaired/000000000005f570.c)（ELF `0x5f570`，595 字节）。
- [signal_pairs_tree::SignalPairsTree::new](../../03_反编译与验证/策略反编译/libstrategy_tm6/decompiled_repaired/000000000005e1d0.c)（ELF `0x5e1d0`，1656 字节）。
- [signal_pairs_tree::SignalPairsTree::update](../../03_反编译与验证/策略反编译/libstrategy_tm6/decompiled_repaired/000000000005e850.c)（ELF `0x5e850`，3354 字节）。
- [signal_pairs_tree::RollingmsQueue<T>::update](../../03_反编译与验证/策略反编译/libstrategy_tm6/decompiled_repaired/000000000005dea0.c)（ELF `0x5dea0`，386 字节）。
- [<strategy_tm6::StrategyTM6 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin](../../03_反编译与验证/策略反编译/libstrategy_tm6/decompiled_repaired/0000000000047d60.c)（ELF `0x47d60`，2110 字节）。
- [<strategy_tm6::StrategyTM6 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth](../../03_反编译与验证/策略反编译/libstrategy_tm6/decompiled_repaired/000000000004aa90.c)（ELF `0x4aa90`，708 字节）。
- [<strategy_tm6::StrategyTM6 as future_backtest_sdk::plugin::StrategyPlugin>::on_finish](../../03_反编译与验证/策略反编译/libstrategy_tm6/decompiled_repaired/000000000004ad60.c)（ELF `0x4ad60`，280 字节）。
- [<strategy_tm6::StrategyTM6 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal](../../03_反编译与验证/策略反编译/libstrategy_tm6/decompiled_repaired/00000000000485a0.c)（ELF `0x485a0`，9443 字节）。
- [fb_strategy_sdk_abi_version](../../03_反编译与验证/策略反编译/libstrategy_tm6/decompiled_repaired/0000000000061820.c)（ELF `0x61820`，6 字节）。
- [fb_strategy_sdk_version_str](../../03_反编译与验证/策略反编译/libstrategy_tm6/decompiled_repaired/0000000000061830.c)（ELF `0x61830`，73 字节）。

[完整反汇编](../../03_反编译与验证/策略反编译/libstrategy_tm6/assembly.txt)；[核心伪代码集合](../../03_反编译与验证/策略反编译/libstrategy_tm6/核心伪代码.c)。
