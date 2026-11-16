from pathlib import Path
import json

b=Path(__file__).resolve().parent
g=b/'通用程序_stockidx_20261114'
r=json.loads((g/'反编译验收.json').read_text())
ps=r['binaries']
assert len(ps)==21 and all(p['targets']>0 for p in ps), 'Analysis not complete'
total=sum(p['targets'] for p in ps)
ok=sum(p['exported_ok'] for p in ps)
tables=sum(p['jumptable_overrides'] for p in ps)
timed=sum(p['autoanalysis_timed_out'] for p in ps)
normalized=sum(p['normalized_exports'] for p in ps)
lines=['# 下载清单与反编译验收','',
'## 文件范围','',
'第一目录的19个libstrategy策略库已保留在1008/l根目录。本轮第二目录位于HDFS的 `future_backtest_sweep__stockidx_a9_threshold_20260914_sos5__ead5ea4639b2`，另存到 `通用程序_stockidx_20261114`，避免混淆来源。','',
f"第二目录共下载{r['download_count']}个顶层文件，合计{r['total_bytes']:,}字节，约163.2 MB：",'',
'- 19个libstrategy策略库，逐个与第一目录哈希一致。','- 16个run驱动。','- 3个框架可执行文件：future_backtest、future_backtest_runner、future_backtest_meta_runner。','- 2个其他共享库：libfuture_backtest.so、libfill_prob_probe.so。','- 9份说明、启动、构建和来源校验材料。','',
'9份文本材料为README.md、run.sbatch、BUILD_PROVENANCE.txt、SOURCE_STATUS.txt、SOURCE_DIFF.patch、SHA256SUMS、RUN_MANIFEST.json、RUN_SHA256SUMS、TASK_INPUT_SHA256SUMS。其中有些包含本次打包任务信息，保留它们是为了审计来源，不把它们全部视为实验无关逻辑。SOURCE_DIFF.patch为空文件，不是完整源码。','',
'第二目录的configenc、status_latest.txt和收益CSV目录未纳入通用程序下载；未解密历史配置，未运行这些实验。第一目录已有资料保留。','',
'## 下载校验','',
f"49个文件均与下载时记录的SHA-256和大小一致。随包RUN_MANIFEST能够直接覆盖其中{r['source_manifest_checked']}个，逐一校验无差异；其余清单自身等文件以下载哈希记录。两目录19个策略库逐个相同，见[同库比较](../通用程序_stockidx_20261114/strategy_duplicate_comparison.json)。",'',
'原始逐文件路径、大小和SHA-256见[下载清单](../通用程序_stockidx_20261114/download_manifest.json)，本次复核见[机器可读验收](../通用程序_stockidx_20261114/反编译验收.json)。','',
'## 反编译范围和结果','',
f'19个重复策略库复用此前保存的反编译证据；新增21个ELF文件均已建立独立分析目录。本轮共选取{total}个函数目标，成功导出{ok}个伪代码。数量按每个二进制中的唯一函数地址统计，同一公共函数出现在不同二进制中会分别计数。','',
f'对识别到的间接跳转表写入了{tables}处覆盖，并补充了字符串交叉引用找到的内联配置函数、未完整解码名称的框架函数。run_comm_maker1真正逐组合写参数的函数、TM6内联订单回报逻辑，说明只按主函数或策略类符号筛选会漏掉业务路径。','',
'| 文件 | 选择目标 | 导出成功 | 核心伪代码 |','|---|---:|---:|---|']
for p in ps:
    n=p['file']
    lines.append(f"| {n} | {p['targets']} | {p['exported_ok']} | [查看](../通用程序_stockidx_20261114/analysis/{n}/核心伪代码.c) |")
lines+=['','## 这里的成功意味着什么','',
'“导出成功”仅指Ghidra为所选函数生成了伪代码，不是源码完全还原或运行等价验收。目标覆盖驱动入口、组合配置、公共启动、插件接口、相关RunnerCore、账户、撮合与探针路径；未逐一解释Rust标准库、所有序列化分支和框架内置策略。','',
f'初始自动分析设置了每文件180秒上限，其中{timed}个文件触及该上限，日志已保留。之后仍对选定函数进行导出、跳转表修复和必要的定向重试。伪代码中仍可能有类型传播、不可达代码、间接调用等警告；这些不能被“成功数量”掩盖。','',
'大型框架的全程序自动分析持续过长，因此停止了本任务相关静态分析进程，改在独立工程中按照ELF符号边界恢复所选函数，并补充跳转表。三个框架程序和探针采用这一定向方法；停止与替代记录见analysis/autoanalysis_replaced.json，不涉及任何回测作业。','',
f'对少数反编译器异常还采用normalize简化模式重试，最终有{normalized}个成功导出来自这一模式。它侧重保留低层运算与控制流，类型和高级结构恢复更有限；阅读时应结合汇编，不把它与原始源码等同。','',
'run_comm5主函数在一次90秒修复后导出中超时，已用300秒上限定向重试成功；保留初始、修复与最终版本及日志供比较。正式汇总按修复导出、补充导出、定向导出和失败项重试的次序选择最新结果，不把旧失败日志删掉。','']
failed=[(p['file'],a,n) for p in ps for a,n in p['missing_or_failed'].items()]
if failed:
    lines+=['最终仍有以下目标未成功导出：','']
    lines += [f'- {n}：ELF {a}，{name}。[逐函数汇编](../通用程序_stockidx_20261114/analysis/{n}/failed_function_assembly/{a}.asm)。' for n,a,name in failed]
    lines+=['','这6项是两个函数类型在三个程序中的重复：run_multi触发反编译进程异常，real_position_update触发Overlapping input varnodes。原始与重试日志均保留；失败不是空函数，也不能把前后接口说明当作函数体完全还原。[失败详情](../通用程序_stockidx_20261114/未完整反编译函数.json)。']
else:
    lines+=['最终所选函数目标均已有伪代码文件；这不代表全部机器指令都获得正确语义解释。']
lines+=['','## 保存位置','',
'本地阅读目录：`LOCAL_WORKSPACE/1008/l/自然语言详解_20261114/`。通用文件与伪代码在同级的`通用程序_stockidx_20261114/`。','',
'远端对应目录：`REMOTE_WORKSPACE/tmp/1008/l/`。完整汇编assembly.txt与Ghidra项目保存在远端通用分析目录；本地保留原始二进制、符号、ELF信息、字符串、目标表、逐函数伪代码和日志。','',
'没有启动回测、提交Slurm作业或改写历史结果。当前结论来自静态机器码、导出伪代码与随包通用契约；历史配置、上游预测公式、完整逐事件交易等价仍不由本次结果证明。','']
(b/'自然语言详解_20261114/07_下载清单与反编译验收.md').write_text('\n'.join(lines))
