from pathlib import Path
import json,re,hashlib
b=Path(__file__).resolve().parent; notes=json.loads((b/'逐库逻辑说明.json').read_text());docs=b/'策略说明';docs.mkdir(exist_ok=True)
manifest=json.loads((b/'download_manifest.json').read_text());run=json.loads((b/'RUN_MANIFEST.json').read_text());runfiles={r['path']:r for r in run['files']};functions=json.loads((b/'strategy_functions.json').read_text())
intro='''# 19个期货策略动态库：下载清单与详细逻辑

检查日期：2026-11-14。递归范围为用户指定 HDFS 目录，按文件名以 `libstrategy` 开头且以 `.so` 结尾统计。

**共19个，全部在顶层；19个SHA-256各不相同，总计21,900,936字节。** 原库保留原名，远端目录为 `REMOTE_WORKSPACE/tmp/1008/l/`，本地镜像为 `LOCAL_WORKSPACE/1008/l/`。

源目录：`/user/zli/hpc_user_liyueting/1/lyt_d/slurm/slurm_task/future_backtest_sweep__comm5_daily_comm32__6080f1554aa6`。

## 如何阅读与证据边界

逐库说明包含策略流程、配置字段清单、关键函数地址和伪代码链接。`analysis/<库名>/decompiled_repaired/` 为修复相对跳转表后的Ghidra输出，`assembly.txt` 为完整反汇编，`repairs.tsv` 给出函数起址/长度/跳转指令/表址/分支数，`symbols.txt` 保留原符号。伪代码是分析材料，不是可直接编译的C或原始Rust源码；Rust枚举、Option、返回寄存器和泛型容器仍可能被错误推断。

本文区分三种证据：二进制直接证据（符号、指令、字段表）、对流程的静态解释、既有同哈希comm5计算模块的动态验证。除明确说明的comm5既有计算测试外，本批没有做逐事件订单回放，没有证明19个插件可被重写版本等价替代。上游信号定义、真实成交撮合、手续费/保证金和SDK账户语义也不由这些策略库单独决定。

原目录的构建清单记录 Rust 源仓库 `MultiStrategySDK`、分支 `meta_total_control`、提交 `97505c23b15cf5d15de0a9000b33985e13bc237b`、clean状态。该记录已保留，但没有取得相应源码。19个库的下载哈希全部与 `RUN_MANIFEST.json` 对应值匹配，亦核对远端与本地副本。目录名为 comm5_daily_comm32 不意味着19个库全部参加了该任务；本次拿到的是共享部署包。`configenc` 已保存，但没有解密，因此不声称知道历史启用的数值参数和策略连接方式。

## 逐库入口

| 动态库 | 字节 | 配置字段（顶层/嵌套） | 详细说明 |
|---|---:|---|---|
'''
rows=[];checks=[]
for short,note in notes.items():
 stem='libstrategy_'+short;p=b/(stem+'.so');d=b/'analysis'/stem;fs=functions[stem];groups=json.loads((d/'config_field_arrays.json').read_text());sha=hashlib.sha256(p.read_bytes()).hexdigest()
 arr=[len(g['fields']) for g in groups];rows.append(f'| {p.name} | {p.stat().st_size:,} | '+ '/'.join(map(str,arr))+f' | [{short}](策略说明/{short}.md) |')
 repaired=d/'decompiled_repaired';idx=repaired/'index.tsv';entries=idx.read_text().splitlines() if idx.exists() else [];bad=[x for x in entries if '\tOK\t' not in x]
 checks.append({'file':p.name,'bytes':p.stat().st_size,'sha256':sha,'manifest_match':sha==runfiles[p.name]['sha256'],'functions_exported':len(entries),'non_ok':bad})
 text=f'# {p.name}\n\nSHA-256：`{sha}`；大小：{p.stat().st_size:,}字节。\n\n## 策略逻辑\n\n{note}\n\n'
 text+='## 事件入口与关键计算\n\n地址为ELF虚拟地址；Ghidra项目中的地址另加0x100000。下表保留业务符号，不将序列化、析构和FFI包装函数计为独立策略逻辑。\n\n| 地址 | 机器码字节 | 函数及伪代码 |\n|---|---:|---|\n'
 combined=[]
 for f in fs:
  addr=f['address'];fn=f['name'];target=repaired/(addr+'.c')
  if target.exists():
   text+=f'| 0x{int(addr,16):x} | {f["bytes"]} | [{fn}](../analysis/{stem}/decompiled_repaired/{addr}.c) |\n'
   combined.append(target.read_text())
  else:text+=f'| 0x{int(addr,16):x} | {f["bytes"]} | {fn}（未导出） |\n'
 if combined:(d/'核心伪代码.c').write_text('\n\n'.join(combined))
 text+='\n## 配置字段\n\n以下来自ELF重定位后的Serde字段名切片数组，保留原顺序；不是从名称拼接猜分词。字段存在表示反序列化结构支持它，不表示本次任务实际启用它。除comm5参考文档外，本批未逐字段探测默认值，因此不填猜测默认值。\n\n'
 for i,g in enumerate(groups):
  text+=f'### 字段组{i+1}：{len(g["fields"])}项\n\n数组文件偏移 `{g["file_offset"]}`。\n\n'
  text+='\n'.join(f'{j+1}. `{key}`' for j,key in enumerate(g['fields']))+'\n\n'
 text+='## 复核重点\n\n必须保留回调先后、持仓与挂单状态、浮点取整顺序及错误回退。反编译变量名param/local不是原字段名；未经调用点和汇编确认，不应直接把指针偏移赋予经济含义。自动导出成功仅表示有伪代码，不表示分支语义均已动态验收。\n\n'
 text+=f'证据：[完整汇编](../analysis/{stem}/assembly.txt)、[符号](../analysis/{stem}/symbols.txt)、[跳转表修复清单](../analysis/{stem}/repairs.tsv)、[业务函数合并伪代码](../analysis/{stem}/核心伪代码.c)。\n'
 (docs/(short+'.md')).write_text(text)
intro+='\n'.join(rows)
intro+='''

## 策略族关系

这些是按本次二进制功能组织的关系，不是已由Git历史证明的开发时间线，也不表示版本号越大收益越好。

- comm2：PV/窗口信号、波动价差分组、K1与基础执行。
- comm3：独立LOW阈值与maker管理；comm3_1：半价差覆盖函数；comm3_2：大价差限制。
- comm4：watcher三阶段；comm4_1：升级交易次数门槛与五档可成交量；comm5：XS历史收益排名与金额倍率。
- comm_maker1：双侧目标数量与报价分离；comm_mock：订单事件、收益状态发布及IOC分支。
- sm1：信号触发报价；sm2：命中概率/效用报价优化；sm3：one-shot辅助信号报价；sm3_1：辅助信号异步门控；sm4：滚动信号配对阈值。
- lf4：带次数/时间/价格范围状态约束的低频执行。
- tm5：滚动收益事件发布；tm6：滚动配对阈值和状态发布。
- sos5：三段编排与篮子金额/bp阈值；sos6：三段编排与外部发布阈值调整。

## 核心计算详解：同哈希comm5参照

[完整comm5报告](comm5_verified_reference/策略逻辑还原说明.md)、[全部字段与默认值](comm5_verified_reference/参数与默认值.md)、[可读计算实现](comm5_verified_reference/recovered_kernels.py)已复制到本目录，旧材料保持不变。旧报告提及的源路径与日期是历史来源，本次来源以本报告与download_manifest为准。以下公式对该comm5版本已有直接机器码核对，其他库虽有同类函数，仍需各自证据确认，不自动继承全部边界行为。

令四阈值为LO/LC/SO/SC，分类次序为：score>=LO开多，否则score>=SC平空，否则score<=SO开空，否则score<=LC平多，否则NONE。阈值重叠时也不重排。

PV1使用原信号字段乘pv1_alpha；PV2使用另一个输入字段；PV4为sign(x)*abs(x)^(1/K1)。字符串解析仅特殊识别PV2和PV4，其他字符串落入默认模式。点触发中PV1按abs(spread_bp)*cost_alpha收缩信号，PV4按(abs(spread_bp)+fee_bp)*cost_alpha收缩；两个输入字段的上游含义尚需SDK/生产者定义。

持仓时间动态阈值：到达start后，f=min((holding-start)/max(max_time-start,1e-6),1)，d=abs(delta_score*f)，得到(LO-d,LC+d,SO+d,SC-d)。负时间配置、尚未到start和极小delta有不调整分支。

滚动触发有均值、标准差、Sharpe、RSI、分位数及多窗口投票；窗口严格删除超龄点。Sharpe用总体标准差，分位数用floor(q*N)位置而非插值，多窗口胜票占比要求严格大于vote_rate。该comm5的独立Std触发器存在标准差缓存不随普通update重算的实现细节，不能“修复”为常规统计函数后仍声称等价。

波动/价差分组使用滚动区间收益样本的总体标准差除以半价差样本均值。收益及价差样本先作半数远离零的舍入。LOW/HIGH选择K1和阈值；缺失K1取1。

阶段升级和降级由watcher收益及交易次数触发；阶段覆盖参数继承全局。XS按历史日期指数衰减、可选收益截断、品种分数排名及ceil分档设置倍率；未启用/样本不足等有回退。平仓通道不能简单随零XS倍率关闭。

执行数量受净仓、增仓、平仓的手数/金额、乘数和步长约束；maker还受本方盘口挂量、待成交量上限及旧单约束，taker受限价和五档对手量约束。请求撤单不等于撤单已成交生效；调用all_in也不证明仓位实际归零。

## 验证与未完成的等价性问题

文件层：递归清单、HDFS文件大小、远端SHA-256、本地SHA-256、任务原RUN_MANIFEST均逐库核对。

静态层：19个库的业务符号、完整汇编、Serde字段表、自动反编译及相对跳转表修复；具体导出状态见verification.json。仍有类型推断与局部不可达分支警告，不把自动伪代码当作已恢复原源码。

动态层：仅同哈希comm5既有15,092组计算模块检查（11,472叶函数、2,500滚动触发、120阶段参数、1,000波动价差）。这些是历史合成测试回执，本轮未重新运行，且不是本批其他18个库的验证结果。

尚未取得：加密配置明文、原Rust源文件、完整SDK执行语义、上游信号公式和逐事件订单等价性。本批未执行交易策略、未提交回测、未访问ZZH验证数据，也未根据策略名称声称收益能力。若要重写可替换插件，应先固定每版配置与SDK ABI，再用事件回放逐条比较报价、数量、撤单、持仓和发布状态。
'''
intro+='\n本轮导出统计：共790个目标函数，789个产生伪代码；1个comm5大型Serde反序列化visit_map函数超时，失败记录保留。442个业务函数全部导出，75处相对跳转表已修复，业务函数输出中没有剩余Could not recover jumptable警告。这仍不等于无反编译类型错误或完整运行等价。comm5配置字段和默认值另有同哈希解析器探测证据。\n'
(b/'策略逻辑总览.md').write_text(intro)
(b/'verification.json').write_text(json.dumps(checks,indent=2))
print('reports',len(notes),'exports',sum(r['functions_exported'] for r in checks),'non_ok',sum(len(r['non_ok']) for r in checks))
