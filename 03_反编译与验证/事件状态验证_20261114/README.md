# 原始二进制事件状态验证

2026-11-14 深化研究。结论已写回 [19 篇逐库文档](../../01_策略库与详细解读/19个策略_数学化还原索引.md)，另见 [事件总览](../../02_综合说明/自然语言详解_20261114/10_事件状态机与剩余缺口.md)。

## 证据与计数

[verification_summary.json](verification_summary.json) 记录 1186 个合成回调场景/序列事件和 1111/1111 项显式状态/顺序断言。独立信号测试中有一个 SM2 原始 panic 场景；它单列保留，不算普通成功回调。其余断言只验证列出的可观察量，不构成全堆、全状态空间或引擎等价证明。

- 每库 `*.events.json`：18 个独立信号场景，原始返回值、SDK 调用序列、根对象变化偏移。
- `*.touch_sequences.json`：10 库各 6 组 × 9 事件，含成功/拒绝和 10/0/-1ms 超时。
- SM3.1 `*.sequence_probe.json`、`*.failure_sequences.json`：等待、覆盖、B 复用与失败后消费。
- LF4、TM5、TM6 `*.state_sequences.json`：读取真实任务字段或队列元素。
- SoS `*.phase_sequences.json` 和 SoS6 `*.threshold_presence.json`：阶段与外部阈值存在性。
- comm_mock `*.publish_sequences.json`：回报累计和七个发布值。
- [SM2 断言 stderr](libstrategy_sm2.active_sell.log)：`utility op without price` 与原始地址回溯。

## 可复核的执行方法

执行主机为隔离 Linux x86-64 环境 redacted-host.invalid，目录 `REMOTE_WORKSPACE/tmp/1008/l/事件状态验证_20261114/`，原始库在其父目录。没有启动 Slurm、真实行情回测或撮合。原始 ELF 不修改。

`sdk_event_stubs.c` 构建时使用 `gcc -shared -fPIC -O2 -Wl,-soname,libfuture_backtest.so -o sdk_event_stubs.so sdk_event_stubs.c`。`event_probe.py` 用 RTLD_GLOBAL 装入桩，然后加载原库、定位重定位基址、调用原始初始化与回调。未知 SDK 边界保持 abort，防止无意调用真实引擎。每个通用场景使用独立进程，单个 panic 不截断其他案例。状态序列在自己的同一个策略实例内连续执行。

主要脚本：[通用场景](probe_all_events.py)、[touch](probe_touch_sequences.py)、[SM3.1](probe_sm31_sequence.py)、[LF4/TM](probe_state_sequences.py)、[SoS](probe_sos_sequences.py)、[comm_mock](probe_mock.py)。下载回执后运行 [verify_receipts.py](verify_receipts.py) 核对显式参考规则。本轮脚本没有对 SDK 进行真实撮合模拟，记录的发单次数不等于成交次数。

[meta.json](meta.json) 保留每库 SHA-256、初始化地址、对象大小和函数符号；`*.sdk_abi.txt`、`*.on_depth.asm` 是从已有逐库完整反汇编截取的原始指令。原始业务回调地址及伪代码链接仍保留在各策略正文索引。

## ABI 核对与被排除的初期错误

初期调试曾将 CDepth 时间写到 +24，该处实际为夜盘标志；已改为 +8，对应 Rust Depth +0x40。Position 的两个 double 分别为成本价格槽和有符号持仓；margin/impact 接口返回动作枚举，成功透传必须保留传入动作，不能统一返回 0（0 是开多动作）。这些均经原始包装汇编核对后重跑，最终回执只使用修正后的桩。早期错误探测不计入通过数量。

具体边界：CDepth 的 ask 五档从 +32 起，bid 五档从 +112 起；SDK pending_count 通过两个 int 输出指针返回买卖计数；订单/撤单 C 返回负数才变成 Result 错误；get_published/meta_account C 返回恰为 1 表示存在。未知业务语义不因字段偏移已经确定就擅自命名。

测试只读根对象及明确布局的部分动态记录。`changed_offsets=[]` 不能证明堆中所有树/窗口不变。跨新实例的指针值与 HashMap 随机种子不能作为等价比较值。

SoS 阶段矩阵人为设置合法初始 section；它验证该初态的一步转移和后续早退保留，不证明该初态的自然历史可达过程。TM6 使用内联 on_order 的插件包装入口，其余主要调用内部业务回调；这两种入口的异常传播范围不同。SM2 内部回调跨 ctypes 边界的 panic 导致进程退出 134，未据此断言正式插件宿主必然同样退出。

原有文档及先前纯文档包已保存到 [更新前归档](../../../l_历史归档/20261114_事件深化前文档.zip)。新的结论不改写原始二进制、旧数值回执或既有 56740 次核验的历史统计。
