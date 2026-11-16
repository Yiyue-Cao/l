# run_comm_maker1：配置生成与 runner 调用

`run_comm_maker1` 生成实验配置并启动回测；`libstrategy_comm_maker1.so` 处理交易事件。复原一个实验需同时保留驱动覆盖值与策略的参数消费规则。

## 输入与执行顺序

驱动读取基础配置、runner 路径、动态库路径、策略名称、日期、输出、并行数、`resume`、`dry_run` 和 HDFS 开关。路径及策略身份由参数决定。

```text
读取基础配置与组合参数
→ 写入顶层字段和 custom 字段
→ 构造 ComboSpec
→ run_one_combo 生成配置、日志与子进程参数
→ 启动 runner，等待并检查退出状态
```

`run_one_combo` 将配置和动态库路径配对传入，设置 `LD_LIBRARY_PATH` 等环境，并保存 stdout/stderr。`dry_run`、`resume` 或缺数据跳过属于实验管理结果，与策略进入事件循环后没有发单分开统计。

启动脚本 `sweep.sigs` 的支持列表不含本驱动；`run_comm3` 的该开关不能直接照搬。这不影响策略通过自己的配置消费信号。

## 覆盖字段分两层

| 层次 | 已确认覆盖内容 |
|---|---|
| 顶层 | `strategy_name`、`account_name`、`signals`、`signal_delay`、`init_cash`、`margin_cushion_leverage_rate`，若干净仓／增仓／平仓限制，以及日期、数据与输出路径 |
| `custom` | 信号与报价参数、仓位限额、普通和 LOW 四阈值、分组门槛、LOW 动作、maker 中价偏离、等待时间、不平衡系数、内插 tick、撤单范围档数 |

顶层字段供框架／账户使用，`custom` 供策略使用；同名概念可能形成两层约束。

## 阈值构造

按 $T=(L_o,L_c,S_o,S_c)$ 排列。设组合中的普通开仓基值为 $O$，LOW 基值为 $L$，共同调整量为 $D$，已恢复的写入路径为

$$T=(O,-(O+D),-O,O+D),$$
$$T_{LOW}=(L,-(L+D),-L,L+D).$$

因此四字段由对称关系生成，并非四个独立网格轴。$D$ 的符号由输入决定；具体枚举值仍须读取基础配置和组合选择，不能用程序名推断。

## 证据与边界

逐组合写入逻辑位于 ELF `0x649f0`，被内联进 Rust `call_mut` 包装；只搜索 `main` 会漏掉该路径。此函数写配置并构造 `ComboSpec`，公共函数再启动 runner。

驱动恢复说明参数如何写入。缺少历史配置明文时，仍无法确定某次任务实际用了哪些组合、账户约束和 overlay；候选组合也不等于已运行记录。

- [main](../../04_通用程序/反编译/run_comm_maker1/decompiled_repaired/0000000000068b90.c)：输入与实验组织。
- [逐组合配置写入](../../04_通用程序/反编译/run_comm_maker1/decompiled_repaired/00000000000649f0.c)：顶层／custom、阈值关系、ComboSpec。
- [run_one_combo](../../04_通用程序/反编译/run_comm_maker1/decompiled_repaired/00000000000951e0.c)：配置与动态库配对、子进程。
- [build_tag](../../04_通用程序/反编译/run_comm_maker1/decompiled_repaired/000000000006b950.c)：组合标签。
