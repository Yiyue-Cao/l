from pathlib import Path
import time
b=Path('REMOTE_WORKSPACE/tmp/1008/l/通用程序_stockidx_20261114/analysis/libfill_prob_probe.so');p=b/'targets.tsv'
while not p.exists():time.sleep(3)
time.sleep(2)
rows=p.read_text().splitlines();seen={x.split('\t')[0] for x in rows}
for l in (b/'symbols.txt').read_text().splitlines():
 c=l.split(None,3)
 if len(c)==4 and c[2] in ['t','T'] and 'probe_features::' in c[3] and c[0] not in seen:
  rows.append(c[0]+'\t'+c[3]);seen.add(c[0])
p.write_text('\n'.join(rows)+'\n');print('probe targets',len(rows),flush=True)
