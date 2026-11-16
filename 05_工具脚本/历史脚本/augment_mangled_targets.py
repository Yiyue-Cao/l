from pathlib import Path
import time,subprocess,os
b=Path('REMOTE_WORKSPACE/tmp/1008/l/通用程序_stockidx_20261114/analysis');t=Path('REMOTE_WORKSPACE/intraday/analysis_lwl_interface_recovery_20261109/tools');os.environ['JAVA_HOME']=str(t/'jdk-21.0.2');os.environ['PATH']=os.environ['JAVA_HOME']+'/bin:'+os.environ['PATH']
for n in ['libfuture_backtest.so','future_backtest','future_backtest_meta_runner','future_backtest_runner']:
 d=b/n;p=d/'targets.tsv'
 while not p.exists():time.sleep(3)
 time.sleep(5)
 rows=p.read_text().splitlines();seen={x.split('\t')[0] for x in rows};extra=[]
 for l in (d/'symbols.txt').read_text().splitlines():
  c=l.split(None,3)
  if len(c)==4 and c[2] in ['t','T'] and '_ZN15future_backtest' in c[3] and c[0] not in seen:
   extra.append(c[0]+'\t'+c[3]);seen.add(c[0])
 p.write_text('\n'.join(rows+extra)+'\n');print(n,len(extra),flush=True)
 if n=='libfuture_backtest.so':
  q=d/'targets_extra.tsv';q.write_text('\n'.join(extra)+'\n')
  cmd=[str(t/'ghidra_11.3.2_PUBLIC/support/analyzeHeadless'),str(d/'project'),'generic','-process',n,'-noanalysis','-scriptPath','REMOTE_WORKSPACE/tmp/1008/l','-postScript','ExportStrategies.java',str(d/'decompiled_extra'),str(q),'-max-cpu','1']
  with (d/'extra.log').open('w') as f:r=subprocess.run(cmd,stdout=f,stderr=subprocess.STDOUT)
  print('SDK extra',r.returncode,flush=True)
