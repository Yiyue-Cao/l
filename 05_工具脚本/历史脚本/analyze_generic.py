from pathlib import Path
import os,subprocess,json,concurrent.futures,re
b=Path('REMOTE_WORKSPACE/tmp/1008/l/通用程序_stockidx_20261114');t=Path('REMOTE_WORKSPACE/intraday/analysis_lwl_interface_recovery_20261109/tools');os.environ['JAVA_HOME']=str(t/'jdk-21.0.2');os.environ['PATH']=os.environ['JAVA_HOME']+'/bin:'+os.environ['PATH']
ps=[p for p in b.iterdir() if p.is_file() and not p.name.startswith('libstrategy') and p.read_bytes()[:4]==b'\x7fELF'];ps.sort(key=lambda p:(0 if p.name=='run_comm_maker1' else 1 if p.name=='libfuture_backtest.so' else 2 if p.name.startswith('run_') else 3,p.name))
def work(p):
 d=b/'analysis'/p.name;(d/'project').mkdir(parents=True,exist_ok=True)
 for n,c in [('assembly.txt',['objdump','-d','-C','-M','intel']),('elf.txt',['readelf','-a'])]:
  with (d/n).open('w') as f:subprocess.run(c+[str(p)],stdout=f,check=True)
 rows=[]
 for l in (d/'symbols.txt').read_text().splitlines():
  c=l.split(None,3)
  if len(c)!=4 or c[2] not in ['t','T']:continue
  name=c[3]
  if any(s in name for s in ['drop_in_place','core::fmt::','::clone','::deserialize','serde_core','serde::','LazyStatic','Deref>::','::debug_string']):continue
  if p.name.startswith('run_'):keep=p.name in name or 'fb_sweeps::' in name
  elif p.name=='libfuture_backtest.so':keep='future_backtest::' in name or (c[2]=='T' and not name.startswith('_'))
  elif p.name=='libfill_prob_probe.so':keep='fill_prob_probe' in name or 'StrategyPlugin>::' in name or name=='create_strategy'
  else:keep=any(s in name for s in ['future_backtest_runner::','future_backtest_meta_runner::','future_backtest::main','future_backtest::ffi::','::sdk_runner::','::plugin_loader::','::order_policy::','::matching_overlay::','future_backtest::Exchange::exchange::','future_backtest::Customer::account::','future_backtest::MetaControl::','future_backtest::sdk::','future_backtest::plugin::'])
  if keep:rows.append(c[0]+'\t'+name)
 (d/'targets.tsv').write_text('\n'.join(rows)+'\n')
 cmd=[str(t/'ghidra_11.3.2_PUBLIC/support/analyzeHeadless'),str(d/'project'),'generic','-import',str(p),'-scriptPath','REMOTE_WORKSPACE/tmp/1008/l','-postScript','ExportStrategies.java',str(d/'decompiled'),str(d/'targets.tsv'),'-analysisTimeoutPerFile','180','-max-cpu','2']
 with (d/'ghidra.log').open('w') as f:r=subprocess.run(cmd,stdout=f,stderr=subprocess.STDOUT)
 print(p.name,r.returncode,len(rows),flush=True);return {'file':p.name,'exit_code':r.returncode,'targets':len(rows)}
with concurrent.futures.ThreadPoolExecutor(2) as pool:res=list(pool.map(work,ps))
(b/'analysis/receipt.json').write_text(json.dumps(res,indent=2))
