from pathlib import Path
import os,subprocess,time,json
b=Path('REMOTE_WORKSPACE/tmp/1008/l/通用程序_stockidx_20261114');tools=Path('REMOTE_WORKSPACE/intraday/analysis_lwl_interface_recovery_20261109/tools');os.environ['JAVA_HOME']=str(tools/'jdk-21.0.2');os.environ['PATH']=os.environ['JAVA_HOME']+'/bin:'+os.environ['PATH'];res=[]
from generic_repair_helper import prepare
ps=[p for p in b.iterdir() if p.is_file() and not p.name.startswith('libstrategy') and p.read_bytes()[:4]==b'\x7fELF']
ps.sort(key=lambda p:(0 if p.name=='run_comm_maker1' else 1 if p.name=='libfuture_backtest.so' else 2 if p.name.startswith('run_') else 3,p.name))
for p in ps:
 d=b/'analysis'/p.name
 while not (d/'ghidra.log').exists() or 'Import succeeded' not in (d/'ghidra.log').read_text():time.sleep(5)
 time.sleep(2)
 prepare(p,d)
 cmd=[str(tools/'ghidra_11.3.2_PUBLIC/support/analyzeHeadless'),str(d/'project'),'generic','-process',p.name,'-noanalysis','-scriptPath','REMOTE_WORKSPACE/tmp/1008/l','-postScript','ExportRepaired.java',str(d/'decompiled_repaired'),str(d/'targets.tsv'),'-max-cpu','1']
 with (d/'repair.log').open('w') as f:r=subprocess.run(cmd,stdout=f,stderr=subprocess.STDOUT)
 res.append({'file':p.name,'exit_code':r.returncode});print(p.name,r.returncode,flush=True)
(b/'analysis/repair_receipt.json').write_text(json.dumps(res,indent=2))
