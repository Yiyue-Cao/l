from pathlib import Path
import os,subprocess,json
from generic_repair_helper import prepare
b=Path('REMOTE_WORKSPACE/tmp/1008/l/通用程序_stockidx_20261114');t=Path('REMOTE_WORKSPACE/intraday/analysis_lwl_interface_recovery_20261109/tools');os.environ['JAVA_HOME']=str(t/'jdk-21.0.2');os.environ['PATH']=os.environ['JAVA_HOME']+'/bin:'+os.environ['PATH']
n='future_backtest';d=b/'analysis'/n
prepare(b/n,d);targets={r.split('\t')[0] for r in (d/'targets.tsv').read_text().splitlines()};sizes={}
for l in (d/'symbols.txt').read_text().splitlines():
 c=l.split(None,3)
 if len(c)==4 and c[0] in targets:sizes[c[0]]=c[1]
(d/'sizes.tsv').write_text('\n'.join(a+'\t'+z for a,z in sizes.items())+'\n');(d/'project_targeted').mkdir(exist_ok=True)
cmd=[str(t/'ghidra_11.3.2_PUBLIC/support/analyzeHeadless'),str(d/'project_targeted'),'targeted','-import',str(b/n),'-noanalysis','-scriptPath','REMOTE_WORKSPACE/tmp/1008/l','-postScript','ExportBounded.java',str(d/'decompiled_final'),str(d/'targets.tsv'),'-max-cpu','1']
with (d/'final.log').open('w') as f:r=subprocess.run(cmd,stdout=f,stderr=subprocess.STDOUT)
print('targeted',n,r.returncode,flush=True)
