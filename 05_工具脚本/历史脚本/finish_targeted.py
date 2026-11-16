from pathlib import Path
import os,subprocess,json,concurrent.futures
from generic_repair_helper import prepare
b=Path('REMOTE_WORKSPACE/tmp/1008/l/通用程序_stockidx_20261114');t=Path('REMOTE_WORKSPACE/intraday/analysis_lwl_interface_recovery_20261109/tools');os.environ['JAVA_HOME']=str(t/'jdk-21.0.2');os.environ['PATH']=os.environ['JAVA_HOME']+'/bin:'+os.environ['PATH']
focus=['future_backtest_runner::','future_backtest_meta_runner::','future_backtest::ffi::','::order_policy::','::matching_overlay::','future_backtest::Exchange::exchange::','future_backtest::MetaControl::','future_backtest::RunnerCore::','future_backtest::Exchange::matched::','future_backtest::MakerSimulator::','future_backtest::Customer::customer::','future_backtest::Strategy::risk_control::','_ZN15future_backtest']
def work(n):
 p=b/n;d=b/'analysis'/n;rows={}
 if (d/'targets.tsv').exists():rows=dict(x.split('\t',1) for x in (d/'targets.tsv').read_text().splitlines() if x)
 sizes={}
 for l in (d/'symbols.txt').read_text().splitlines():
  c=l.split(None,3)
  if len(c)!=4 or c[2] not in ['t','T']:continue
  name=c[3];sizes[c[0]]=c[1]
  if any(x in name for x in ['drop_in_place','core::fmt::','::clone','::deserialize','serde_core','serde::']):continue
  keep=(any(x in name for x in ['fill_prob_probe','probe_features::']) or name=='create_strategy') if n=='libfill_prob_probe.so' else any(x in name for x in focus)
  if keep:rows[c[0]]=name
 (d/'targets.tsv').write_text('\n'.join(a+'\t'+s for a,s in rows.items())+'\n')
 (d/'sizes.tsv').write_text('\n'.join(a+'\t'+sizes[a] for a in rows)+'\n')
 if not (d/'elf.txt').exists():
  with (d/'elf.txt').open('w') as f:subprocess.run(['readelf','-a',str(p)],stdout=f,check=True)
 prepare(p,d);(d/'project_targeted').mkdir(exist_ok=True)
 cmd=[str(t/'ghidra_11.3.2_PUBLIC/support/analyzeHeadless'),str(d/'project_targeted'),'targeted','-import',str(p),'-noanalysis','-scriptPath','REMOTE_WORKSPACE/tmp/1008/l','-postScript','ExportBounded.java',str(d/'decompiled_final'),str(d/'targets.tsv'),'-max-cpu','1']
 with (d/'final.log').open('w') as f:r=subprocess.run(cmd,stdout=f,stderr=subprocess.STDOUT)
 print(n,r.returncode,len(rows),flush=True);return dict(file=n,exit_code=r.returncode,targets=len(rows),method='symbol-bounded, no whole-program autoanalysis')
with concurrent.futures.ThreadPoolExecutor(2) as pool:res=list(pool.map(work,['future_backtest_meta_runner','future_backtest_runner','libfill_prob_probe.so']))
(b/'analysis/targeted_receipt.json').write_text(json.dumps(res,indent=2))
