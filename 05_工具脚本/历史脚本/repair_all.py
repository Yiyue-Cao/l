from pathlib import Path
import os,subprocess,time,json
b=Path('REMOTE_WORKSPACE/tmp/1008/l');tools=Path('REMOTE_WORKSPACE/intraday/analysis_lwl_interface_recovery_20261109/tools');os.environ['JAVA_HOME']=str(tools/'jdk-21.0.2');os.environ['PATH']=os.environ['JAVA_HOME']+'/bin:'+os.environ['PATH'];res=[]
for p in sorted(b.glob('libstrategy*.so')):
 d=b/'analysis'/p.stem
 while not (d/'ghidra.log').exists() or 'Import succeeded' not in (d/'ghidra.log').read_text():time.sleep(5)
 time.sleep(2)
 cmd=[str(tools/'ghidra_11.3.2_PUBLIC/support/analyzeHeadless'),str(d/'project'),'strategy','-process',p.name,'-noanalysis','-scriptPath',str(b),'-postScript','ExportRepaired.java',str(d/'decompiled_repaired'),str(d/'targets.tsv'),'-max-cpu','1']
 with (d/'repair.log').open('w') as f:r=subprocess.run(cmd,stdout=f,stderr=subprocess.STDOUT)
 res.append({'file':p.name,'exit_code':r.returncode});print(p.name,r.returncode,flush=True)
(b/'analysis/repair_receipt.json').write_text(json.dumps(res,indent=2))
