from pathlib import Path
import os,time,subprocess,json
b=Path('REMOTE_WORKSPACE/tmp/1008/l/通用程序_stockidx_20261114');t=Path('REMOTE_WORKSPACE/intraday/analysis_lwl_interface_recovery_20261109/tools');os.environ['JAVA_HOME']=str(t/'jdk-21.0.2');os.environ['PATH']=os.environ['JAVA_HOME']+'/bin:'+os.environ['PATH'];receipts=[]
for n in ['future_backtest','future_backtest_meta_runner','future_backtest_runner','libfill_prob_probe.so']:
 d=b/'analysis'/n
 while not (d/'final.log').exists() or 'Import succeeded' not in (d/'final.log').read_text():time.sleep(3)
 bad=[]
 for line in (d/'decompiled_final/index.tsv').read_text().splitlines():
  a,s,name=line.split('\t',2)
  if s!='OK':bad.append(a+'\t'+name)
 if not bad:continue
 (d/'targets_normalized.tsv').write_text('\n'.join(bad)+'\n')
 cmd=[str(t/'ghidra_11.3.2_PUBLIC/support/analyzeHeadless'),str(d/'project_targeted'),'targeted','-process',n,'-noanalysis','-scriptPath','REMOTE_WORKSPACE/tmp/1008/l','-postScript','ExportNormalized.java',str(d/'decompiled_normalized'),str(d/'targets_normalized.tsv'),'-max-cpu','1']
 with (d/'normalized.log').open('w') as f:r=subprocess.run(cmd,stdout=f,stderr=subprocess.STDOUT)
 print(n,'normalized',r.returncode,len(bad),flush=True);receipts.append(dict(file=n,exit_code=r.returncode,targets=len(bad)))
(b/'analysis/normalized_receipt.json').write_text(json.dumps(receipts,indent=2))
