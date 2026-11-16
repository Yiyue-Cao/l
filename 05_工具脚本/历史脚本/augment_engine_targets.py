from pathlib import Path
import time
b=Path('REMOTE_WORKSPACE/tmp/1008/l/通用程序_stockidx_20261114/analysis')
for n in ['future_backtest','future_backtest_meta_runner','future_backtest_runner']:
 p=b/n/'targets.tsv'
 while not p.exists():time.sleep(3)
 rows=p.read_text().splitlines();seen={x.split('\t')[0] for x in rows}
 for l in (b/n/'symbols.txt').read_text().splitlines():
  c=l.split(None,3)
  if len(c)!=4 or c[2] not in ['t','T'] or c[0] in seen:continue
  if any(s in c[3] for s in ['drop_in_place','serde','core::fmt::','::clone']):continue
  if any(s in c[3] for s in ['future_backtest::RunnerCore::','future_backtest::Exchange::matched::','future_backtest::MakerSimulator::','future_backtest::Customer::customer::','future_backtest::Strategy::risk_control::']):rows.append(c[0]+'\t'+c[3]);seen.add(c[0])
 p.write_text('\n'.join(rows)+'\n');print(n,len(rows),flush=True)
