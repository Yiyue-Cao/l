# future_backtest_sweep — rolling latest task

这是 FutureBacktest SDK 参数 sweep 的唯一滚动最新版 task。它共享当前 framework、
runner、通用 `run_*` driver、策略 dylib 与 base config；新实验只增加一张
`runs/<NAME>/pipeline.toml`，不再复制整套 task。

历史实验已移动到：

```text
/data1/lyt_d/Future/slurm/tasks/_archive/frozen_experiments/
```

归档 task 用于审计和严格复现，不要用 `build_deploy.sh` 更新它们。

## 当前目录职责

```text
future_backtest_sweep/
├── run.sbatch
├── future_backtest_runner / future_backtest / libfuture_backtest.so
├── run_*                       # 当前 Cargo 中的通用 sweep driver
├── libstrategy_*.so            # 当前策略 dylib
├── config/
│   ├── base_*.toml
│   └── generate_pipelines.py
├── runs/
│   ├── README.md
│   ├── _template/pipeline.toml
│   └── <NAME>/pipeline.toml    # 新实验唯一可维护的生产入口
├── comm5_xs_pnl_U1M/           # 当前 Comm5 XS 小型输入 bundle
├── BUILD_PROVENANCE.txt
├── SOURCE_STATUS.txt / SOURCE_DIFF.patch
└── SHA256SUMS / TASK_INPUT_SHA256SUMS
```

主 task 不保留生产 `config/pipeline_N.toml`，也不保留 batch-specific binary。
`run_one_task.py --run` 会在 `/tmp` 生成本次不可变 staging。

## 更新 binary 与依赖

修改 SDK framework、sweep driver 或策略后，统一运行：

```bash
cd /data1/lyt_d/Future/slurm/slurm_one_task_template
./build_deploy.sh
```

脚本会：

1. 强制重编当前 framework/runner、全部 `fb_sweeps` Cargo bin 和主 task 需要的 dylib；
2. 部署到本 task 并逐文件核对 target；
3. 写入源码 commit/dirty diff 与 binary SHA256 清单。

提交前 `run_one_task.py` 会再次核对 `SHA256SUMS`、源码 mtime 和
`target/release`。主 task 不应使用 `SKIP_FRESHNESS_CHECK=1`；该开关只供已冻结
历史 task 在明确复现旧 binary 时使用。

## 新实验工作流

复制模板：

```bash
mkdir -p /data1/lyt_d/Future/slurm/tasks/future_backtest_sweep/runs/<NAME>
cp /data1/lyt_d/Future/slurm/tasks/future_backtest_sweep/runs/_template/pipeline.toml \
   /data1/lyt_d/Future/slurm/tasks/future_backtest_sweep/runs/<NAME>/pipeline.toml
```

`pipeline.toml` 必须明确：

- `start_date` / `end_date`；
- 推荐给出精确升序、无重复的 `days="..."` 交易日集合；
- `[sweep]` 的 kind/binary/strategy/base/dylib/jobs；
- 新的 `hdfs_output_root`；
- 信号子集及策略专属字段。

需要冻结大量实验专属 config 时，可以额外放在 `runs/<NAME>/assets/`。
`run_one_task.py --run` 只在不可变 staging 中把它复制为 `config/run_assets/`，并随
config 一起加密和纳入 `RUN_MANIFEST.json`；不会把策略参数明文上传，也不会污染主
task 的共享 `config/`。

Comm5 当前口径应显式写出：

```toml
[sweep]
kind = "comm4"
binary = "run_comm5"
strategy = "Comm5"
base_config = "config/base_comm5.toml"
dylib = "libstrategy_comm5.so"
watcher = "CommMock"
watcher_base_config = "config/base_comm_mock.toml"
watcher_dylib = "libstrategy_comm_mock.so"
enable_phases = true
enable_xs = true
xs_pnl_base = "comm5_xs_pnl_U1M"
ewma_recipes = "20:3"
sigs = "6271,6272"
# 可选字符串信号变体；"online" → 读取 6271_online / 6272_online，参数仍复用基础 signal。
signal_variant_suffix = "online"
jobs = 40
hdfs_output_root = "/user/zli/.../NEW_ROOT"
allow_existing_output = false
```

当前 Comm5 driver 默认是 EWMA 20:3、Q=10/25/65、乘数 3/2/0；实验仍应在
pipeline 明确写 `ewma_recipes`，避免依赖隐式默认。`sigs` 由 driver 动态解析，换信号
无需再编 batch-specific binary。`signal_variant_suffix` 只改变信号数据目录与事件 key，
不会改变参数表 id 或 XS 日表文件名；留空时保持原有离线数据行为。

## 切片和提交

正式提交前必须先展示方案并得到用户明确确认。提交必须加 `--encrypt-config`。

```bash
cd /data1/lyt_d/Future/slurm/slurm_one_task_template
python run_one_task.py \
  -t future_backtest_sweep \
  --run <NAME> \
  --auto-split --num-tasks <N> --max-concurrency <C> \
  --encrypt-config -f \
  --cpus-per-task <CPU> --mem <MEM>
```

`days` 存在时，生成器按精确交易日集合均分，每个 shard 只含自己的日期；不存在时
才按 start/end 的自然日区间切分。没有 `--auto-split` 时只生成 `pipeline_0`。

每次 staging 会生成：

- `RUN_MANIFEST.json`：全部文件的 SHA256/大小和 content hash；
- `RUN_SHA256SUMS`：可直接复核的逐文件清单；
- `_TASK=future_backtest_sweep__<NAME>__<hash12>`。

因此后续提交不会覆盖排队任务的 task 包。新输出根若已经存在会 fail-closed；只有精确
补跑可在 pipeline 显式设置 `allow_existing_output=true`。

不要同时给 `--run` 和 `FB_STRATEGY`。后者只用于归档旧 task 的 namespaced 布局；
一旦显式设置却拼错，计算节点也会立即失败，不再回退到 root config。

## 参数接线与能力边界

`run.sbatch` 支持当前 kind：

```text
comm, comm3, comm_maker1, comm4, sos, sos5_phase, takermaker,
signalmaker, lowfrequency, multi, fillprob, config_matrix,
meta_portfolio_matrix
```

- `meta_portfolio_matrix` 使用 `future_backtest_meta_runner`，按 `case_id` 运行真实共享
  Exchange/共享撮合联合回测；同一次优化的 `portfolio_cases.tsv` 与
  `allocation_solution.parquet` 必须一起冻结并通过血缘校验。`sos5` 案例加载 SOS5 real +
  TM5 mock watcher；`tm15` 案例只加载 TM5 real，`sm1` 案例只加载 SM1 real，后二者均不创建 mock slot。
  `case_shards=N` 可把 ready cases 确定性切为 N 个 array 元素。
- `sweep.sigs` 只允许当前已支持的 `run_comm3`、`run_comm5`、`run_comm_mock`、
  `run_takermaker`、`run_signalmaker`、`run_sm3_1`、`run_sos`；其他 driver
  设置该字段会失败。
- `sweep.ewma_recipes` 只传给 `run_comm5`。
- `sos5_phase` 使用逐信号 SoS5 real/TM5 mock 配置目录，显式扫描
  `phase_threshold_recipes` 与 `init_cash_values_cny`。资金只覆盖 SoS5 real
  `init_cash`；watcher 资金保持冻结。`phase_trace=true` 时，转移日志聚合为
  `sos5_phase_trace.log.gz` sidecar。
- `sweep.sweep_configs` 可传给 `run_takermaker`、`run_signalmaker`、`run_sm3_1`
  与 `run_sos`。值为逗号分隔的 run-local TOML overlay 路径，按从左到右重复
  追加 `--sweep-config`。TM/SM/SoS 分别读取 driver-only 的
  `[takermaker_sweep]`、`[signalmaker_sweep]`、`[sm31_sweep]`、`[sos_sweep]`；
  路径应位于随 run 加密上传的 `config/run_assets/`。
- `skip_hdfs_precheck=true` 只允许 `run_takermaker` / `run_signalmaker` /
  `run_sm3_1` / `run_sos`。
- Comm4/Comm5/SoS 的 watcher 字段必须完整，否则失败。
- `enable_xs=true` 必须提供随 task 上传的 `xs_pnl_base` 目录。
- 商品正式腿 Comm2、Comm3/3_1/3_2、Comm4/4_1、Comm5 固定
  `liquidity_consumption=true`；CommMock watcher 固定为 `false`。
- `config_matrix` 逐份读取随 run 冻结的精确策略 config，不重新展开参数。schema v1
  保持单 real case 兼容；schema v2 支持一条或两条 real 策略腿。两条 real 腿进入同一个
  runner 并共享 Exchange、行情、流动性和撮合机会；每条 SOS real 腿仍可附带一个仅作
  watcher、`liquidity_consumption=false` 的 mock 腿。
- schema v2 可用 `case_shards/case_shard_index` 把 array 按配置切分，并以
  `compact_output=true` 将每个配置的全部日期合并为 `orders.csv`、`equity.csv`、
  `trade_pairs.csv`。三个文件都增加 `trade_date` 和 `strategy_id`，因此 pair 的两条
  real 策略腿可独立归因；SLURM 分片不会出现在正式 HDFS 目录中。

## 输出与日志

策略输出由 `hdfs_output_root` 决定，典型布局：

```text
<root>/<signal>/<tag>/<date>_order.csv
<root>/<signal>/<tag>/<date>_equity.csv
<root>/<signal>/<tag>/<date>_trade_pair.csv
```

SLURM 审计日志：

```text
/user/zli/lyt_d/slurm/job_logs/<immutable-task>/<jobid>_<arrayid>/
```

包含 `status.json`、driver stdout/stderr，以及压缩 sidecar。sidecar 按
`(combo, date)` 聚合；Comm5 的 body/mock 两张 config 共同形成一个确定性 config
SHA256，不会再把 `mock` 或 `comm5` 误识别成日期。
