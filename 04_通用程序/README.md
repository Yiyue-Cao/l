# 通用程序与第二来源资料

来源：HDFS `/user/zli/hpc_user_liyueting/1/lyt_d/slurm/slurm_task/future_backtest_sweep__stockidx_a9_threshold_20260914_sos5__ead5ea4639b2`。

| 目录 | 内容 |
|---|---|
| [二进制](二进制/) | 16 个 run 驱动、3 个框架可执行文件、2 个其他共享库，以及第二来源的 19 个策略库；同放一处保留组件关系 |
| [反编译](反编译/) | 逐程序伪代码、符号、导出日志与未完成函数的汇编证据 |
| [来源档案](来源档案/) | 原 README、构建/源码记录、run.sbatch 和原始校验清单 |
| [清单与回执](清单与回执/) | 下载记录、同库比较、runner 比较及反编译验收 |

- [run_comm_maker1 程序](二进制/run_comm_maker1)
- [run_comm_maker1 详细说明](../02_综合说明/自然语言详解_20261114/04_run_comm_maker1的完整作用.md)
- [run_comm_maker1 反编译](反编译/run_comm_maker1/)
- [SDK 与框架说明](../02_综合说明/自然语言详解_20261114/06_SDK与框架对策略解释的补充.md)
- [第二来源策略库同哈希比较](清单与回执/strategy_duplicate_comparison.json)

第二来源的 19 个策略库不是额外 19 种策略，来源副本仍完整保留。启动脚本与校验文件按原文归档；如需原始目录布局，先使用 [恢复工具](../05_工具脚本/README.md) 导出独立副本。
