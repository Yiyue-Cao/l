# 持续深化原二进制验证（2026-11-14）

本目录继承前轮证据，但使用独立桩与脚本。19 个原始策略二进制不修改。运行位置为 redacted-host.invalid 的同名隔离研究目录；无 Slurm、无真实回测、无订单发送，全部订单接口仅记录请求。输入收益 CSV 和事件均为合成数据，不接触 ZZH 独立验证集。

## 入口

- [本轮 806 项回执断言](new_verification_summary.json)
- [候选树独立模型](verify_pair_tree.py)：SM4/TM6 各 2400 事件，核对完整闭合队列与选择键。
- [挂单辅助函数](probe_pending_helpers.py)：12 库各 85 场景，方向 Buy=1/Sell=0。
- [不等距盘口及真实深度 ABI](probe_depth_abi_range.py)：7 库各 18 组边界。
- [部分成交连续事件](partial_fill_sequences.json)
- [XS 独立评分模型与边界](libstrategy_comm5.xs_validation.json)
- [XS 到订单](libstrategy_comm5.xs_orders.json)
- [XS 重初始化](libstrategy_comm5.xs_reinitialize.json)
- [旧场景回归回执](verification_summary.json)：1186 事件、1111 项断言；SM2 原始 panic 仍复现。
- [负挂单返回异常](negative_pending_summary.json)：12 库独立子进程退出 134。

各 `libstrategy_*.pending_events.json` 为每库 36 场景；`*.low_pending.json` 每库 18 目标场景附 5 次暖启动；`*.depth_range_validation.json` 为盘口 ABI 与不等距边界；`*.tree_callbacks.json` 是候选统计先于拒单的实际回调。`out_of_range` 是早期夹具标签，实值为买价 200、卖价 1，不能把名称当作两侧必然越界；是否撤单以实值与本向范围比较为准。

## ABI 校准与结论边界

CDepth 共 232 字节，时间在 +8，合约指针 +16，卖盘从 +32、买盘从 +112，每档为连续两个 double：price、volume。真实 Rust 深度包装层返回的卖盘在 +0x48、买盘在 +0x98，各档步长 16。已逐档读回五档并断言。

前轮 `setup_depth` 深层盘口曾按价格数组/数量数组分开填入，买一卖一不受此错误影响，但深档价差与数量可能失真。本轮所有受影响的回调重新运行，前轮全部状态断言也重跑通过；不据旧夹具推断未验证的深档规则。调试时发现的返回寄存器顺序、UTF-8 字符串字节长度、金额 cap 和盘口 cap 遮蔽等夹具问题均已修正后再验收。最终脚本与回执为当前版本，不把中途失败调试当作策略新发现。

Rust pending_orders 条目长 88：ID String +0、code String +24，价格/委托量/成交量/时间 +48/+56/+64/+72，方向 bool +80。buy=1，sell=0。live_pending_counts 返回两个整数寄存器，第一为 buy，第二为 sell。`pending_probe.py` 校验真实包装层，`sdk_event_stubs.c` 只实现明确核对过的边界。

批量 cancel_all 桩只返回指定状态，不自动移除列表；逐 ID 成功默认将 ID 放入取消集合且仍保留列表，用于模拟撤销请求已接受但回报未到。测试没有把这种夹具当成真实引擎撮合实现。负 pending 返回的 panic 证明包装层在该输入下的失败路径，不证明真实引擎一定会产生该输入。

4800 次候选树事件、1020 个挂单函数场景、120 组 XS 初始化与回调/回执断言是不同计数口径，不相加为“覆盖率”。原二进制哈希和最终证据文件清单见 [manifest](final_manifest.json)。
