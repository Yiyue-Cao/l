# Comm5 反编译与补充验证证据

对应最新 [comm5 策略解读](../../../01_策略库与详细解读/comm5/libstrategy_comm5.md)。此前单独保存的 2026-11-09 研究材料已合并到此策略的证据目录；相同代码复用现有文件，旧报告已归档。

## 反编译材料

- [完整汇编](assembly.txt)、[核心伪代码](核心伪代码.c)、[本轮修复后的逐函数伪代码](decompiled_repaired/)。
- [2026-11-09 补充逐函数汇编](assembly_20261109/)。
- [2026-11-09 补充伪代码](decompiled_20261109/)：仅收录与现有同名文件不完全相同的文件；原有输出未覆盖，不以文件日期判断反编译质量。

## 2026-11-09 合成计算验证

原库 SHA-256 为 `a778c872369f31f436a1ba7b4c996934492b45bc6f2faa8860de6f42455accdb`，与当前 comm5 原件一致。

| 范围 | 案例数 | 原始回执 |
|---|---:|---|
| 信号模式、触发模式、动态阈值、阶段、点触发、金额限制、报价与盘口量 | 11,472 | [kernel_validation](../../数学化还原_20261114/libstrategy_comm5.20261109.kernel_validation.json) |
| 五种单窗口滚动触发 | 2,500 | [rolling_validation](../../数学化还原_20261114/libstrategy_comm5.20261109.rolling_validation.json) |
| 波动/半价差比 | 1,000 | [volspread_validation](../../数学化还原_20261114/libstrategy_comm5.20261109.volspread_validation.json) |
| 阶段字段覆盖 | 120 | [effective_validation](../../数学化还原_20261114/libstrategy_comm5.20261109.effective_validation.json) |

本批合计 15,092 例。它与 2026-11-14 的 5,348 例覆盖存在交叉，分别保留，不相加为去重后的检查数；均不代表完整 SDK 订单事件等价。

- [早期配置探测原始结果](../../数学化还原_20261114/libstrategy_comm5.20261109.config_fields.json)
- [可读计算实现（合并后的唯一副本）](../../数学化还原_20261114/reference_kernels.py)
- [当前 K1 表](../../数学化还原_20261114/libstrategy_comm5.k1_maps.json)
- [逐文件去向及哈希](../../../07_清单与回执/comm5合并记录_20261114.json)
- [合并前归档包](../../../../l_历史归档/20261114_comm5合并前.zip)
