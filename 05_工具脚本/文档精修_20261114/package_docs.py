from pathlib import Path
import re,os,json,hashlib,tempfile
B=Path('LOCAL_WORKSPACE/1008/l')
T=Path(tempfile.mkdtemp(prefix='l_docs_package_'));O=T/'l_策略解读_纯文档版';O.mkdir()
selected={}
for p in sorted((B/'01_策略库与详细解读').glob('*/*.md')):selected[p]=Path('01_策略详细解读')/p.name
selected[B/'01_策略库与详细解读/19个策略_数学化还原索引.md']=Path('01_策略详细解读/00_策略索引.md')
for p in sorted((B/'02_综合说明/自然语言详解_20261114').glob('*.md')):
 if p.name[:2]!='00':selected[p]=Path('02_综合说明')/p.name
selected[B/'03_反编译与验证/策略反编译/libstrategy_comm5/README.md']=Path('03_范围与证据/comm5补充验证说明.md')
source_hash={str(p):hashlib.sha256(p.read_bytes()).hexdigest() for p in selected}
evidence={};link_re=re.compile(r'(\[([^\]\n]*)\]\()([^\)\n]+)(\))')
for src,dest in selected.items():
 s=src.read_text();out=O/dest
 if dest.name=='00_策略索引.md':
  lines=s.splitlines();lines[2]='每篇按输入与符号、决策规则、事件状态、复原边界及参数／证据附录编排。原始 `.so` 和证据文件不包含在本包中。'
  lines=[re.sub(r' \| (?:文档字符数|\d+) \| (?=(?:既有核验|新增核验|\d+/))',' | ',line) for line in lines]
  lines=[line.replace('|---|---|---:|---:|','|---|---|---:|') for line in lines];s='\n'.join(lines)+'\n'
 if dest.parent.name=='01_策略详细解读' and dest.name!='00_策略索引.md':
  s=s.replace('旧版解读已移出主目录归档，以本页列出的原始函数与本轮证据为准。','本纯文档版保留最新正文，原始证据按文中的 E 编号定位于完整版档案。')
 if dest.name=='07_下载清单与反编译验收.md':
  s=s.replace('## 保存位置','## 完整版档案保存位置（不在本压缩包内）')
 def replace(m):
  label=m.group(2);url=m.group(3).strip().strip('<>')
  if re.match(r'^[\w+.-]+:',url) or url.startswith('#'):return m.group(0)
  path,sep,anchor=url.partition('#');target=(src.parent/path).resolve()
  if target in selected:
   return '['+label+']('+os.path.relpath(O/selected[target],out.parent)+(sep+anchor if sep else '')+')'
  assert target.exists(),(src,url)
  key=os.path.relpath(target,B)
  if key not in evidence:evidence[key]=f'E{len(evidence)+1:04d}'
  eid=evidence[key]
  if '<' in label or '::' in label:label='`'+label+'`'
  ref=os.path.relpath(O/'03_范围与证据/外部证据定位.md',out.parent)
  return f'{label}（[{eid}]({ref}#{eid.lower()})）'
 s=link_re.sub(replace,s)
 out.parent.mkdir(parents=True,exist_ok=True);out.write_text(s)
index='# 外部证据定位\n\n本表为原始证据的定位目录，**原件未包含在纯文档包内**。E 编号是本包内部引用编号，不代表新的验证结果。路径相对于完整版 `1008/l/`，以 `../` 开头的路径指向相邻历史归档。\n\n完整版本地根目录：`LOCAL_WORKSPACE/1008/l/`。\n\n| 编号 | 完整版相对路径 |\n|---|---|\n'
for p,eid in evidence.items():index+=f'| <a id="{eid.lower()}"></a>{eid} | `{p}` |\n'
(O/'03_范围与证据/外部证据定位.md').write_text(index)
scope='''# 完成范围与阅读口径

精修日期：2026-11-14。本包从当前 `1008/l` 文档导出。逐库正文统一为符号、决策规则、事件状态与复原边界；参数、常量表及原始验证记录集中在附录。精修仅调整语言、记号和结构，没有新增二进制实验。

## 已有成果

19 个策略均有逐库说明，包括信号到动作的主要控制流程、关键计算公式、配置字段及缺省行为、订单价格与数量约束、状态更新，以及版本差异。各页区分机器码实测、静态确定和尚未闭合的部分。

统一研究记录的叶函数、指定状态函数和报价模型合成检查为 56,740/56,740；它只覆盖各文档列出的输入、函数与容差，不代表整个策略已经完全验证。Comm5 更早的 15,092 例与本轮部分重叠，单列保留，不简单相加。

前轮 1186 个原始二进制合成回调场景/序列事件已用校正五档布局再次回归，1111 项显式状态/顺序断言仍通过。既有后续验证包含 12 库各 85 个挂单函数场景、SM4/TM6 各 2400 个候选树事件、comm5 XS 120 组独立评分对照与 32 个订单回调，以及全库非空挂单、LOW maker 和不等距盘口测试；最终 806 项回执检查通过。独立信号场景中的一个 SM2 原始 panic 单列保留，不算普通成功；与上面的叶函数计数不相加。详见 [最新事件状态机与剩余缺口](../02_综合说明/10_事件状态机与剩余缺口.md)。

## 尚未完成

- 完整 SDK 订单事件、撮合、费用和账户接续的等价回放。
- 历史加密配置的明文还原，以及上游预测器的具体公式。
- 各库正文列出的真实多合约回报、阶段与订单联合长序列、大规模候选树与极端值、SoS 参考篮子及换月；SM2 插件宿主对 panic 的传播语义。非空列表与候选配对及 XS 已完成的合成验证，按各库新章节准确界定。
- 通用引擎仍有 6 个未完整反编译的函数实例，涉及 3 个程序中的 2 类函数，详见 [下载与反编译验收](../02_综合说明/07_下载清单与反编译验收.md)。

因此，可以说主要策略逻辑已经形成较完整的解释；不能把本包视为原始源码、可替换插件，或完整逐笔等价实现。

## 纯文档包的取舍

包含 19 篇最新逐库说明、策略索引、10 篇综合/通用程序说明、comm5 补充验证说明及阅读导航。未附带 `.so`、可执行程序、反编译 C/汇编、脚本、JSON/日志或旧稿；正文中的公式和伪代码示例仍保留。

包内文档互相链接；原始证据链接转换为 [外部证据定位](外部证据定位.md) 中的 E 编号。查具体机器码或回执时，需要完整档案。文中原始函数地址、哈希、参数缺省值与历史实验实际配置的区分继续有效。

具体比较符与事件顺序以逐库说明为准。各页的支持能力不代表某次历史实验启用；合成检查不代表策略盈利或实盘可用性。
'''
(O/'03_范围与证据/完成范围与口径.md').write_text(scope)
(O/'README.md').write_text('''# 19 个策略解读 · 纯文档精简版

2026-11-14 语言精修版。解压后从本页开始阅读，所有文件均为 Markdown。

- [19 个策略索引与详细数学逻辑](01_策略详细解读/00_策略索引.md)
- [共同交易流程与术语](02_综合说明/01_共同交易流程与术语.md)
- [十九个策略的横向比较](02_综合说明/02_十九个策略的横向比较.md)
- [通用程序与策略的连接](02_综合说明/03_通用程序如何连接整套策略.md)
- [run_comm_maker1 的完整作用](02_综合说明/04_run_comm_maker1的完整作用.md)
- [十六个 run 驱动的分工](02_综合说明/05_十六个run驱动的分工.md)
- [SDK 与框架补充](02_综合说明/06_SDK与框架对策略解释的补充.md)
- [下载与反编译验收](02_综合说明/07_下载清单与反编译验收.md)
- [SoS5 阶段对照实验](02_综合说明/08_SoS5阶段驱动如何组织对照实验.md)
- [成交概率探针](02_综合说明/09_成交概率探针与交易策略的区别.md)
- [最新事件状态机与剩余缺口](02_综合说明/10_事件状态机与剩余缺口.md)
- [Comm5 补充验证说明](03_范围与证据/comm5补充验证说明.md)
- [完成范围与阅读口径](03_范围与证据/完成范围与口径.md)

逐库按“符号 → 决策规则 → 事件状态 → 复原边界 → 参数和证据附录”编排。主要计算与已验证状态均有说明；完整订单／账户等价和历史配置明文仍有缺口。

本包只含文档。公式、状态规则和参数表完整保留，排除原始程序、大体积反编译材料、脚本和历史旧稿。E 编号用于查询完整版证据，原件不在本包内。

使用 VS Code Markdown 预览阅读公式；已应用当前版本的 KaTeX 转义修复。
''')
for p,h in source_hash.items():assert hashlib.sha256(Path(p).read_bytes()).hexdigest()==h
meta={'stage':str(T),'root':str(O),'output':str(B.parent/'l_19sos.zip'),'source_hash':source_hash,'document_count':len(list(O.rglob('*.md'))),'evidence_references':len(evidence)}
Path('/tmp/l_doc_package_meta.json').write_text(json.dumps(meta,ensure_ascii=False,indent=2))
print(json.dumps({k:v for k,v in meta.items() if k!='source_hash'},ensure_ascii=False,indent=2))
