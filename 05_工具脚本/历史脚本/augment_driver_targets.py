from pathlib import Path
import struct,re,time,json
b=Path('REMOTE_WORKSPACE/tmp/1008/l/通用程序_stockidx_20261114')
for p in sorted(b.glob('run_*')):
 d=b/'analysis'/p.name;tf=d/'targets.tsv'
 while not tf.exists():time.sleep(2)
 data=p.read_bytes();ph=struct.unpack_from('<Q',data,32)[0];e,n=struct.unpack_from('<HH',data,54);segs=[]
 for i in range(n):
  typ,_,off,va,_,sz,_,_=struct.unpack_from('<IIQQQQQQ',data,ph+i*e)
  if typ==1:segs.append((off,va,sz))
 addresses=set()
 for m in re.finditer(rb'custom\.[a-z_]|watcher_strategy_name|liquidity_consumption|maker_signal_abtype',data):
  for off,va,sz in segs:
   if off<=m.start()<off+sz:addresses.add(va+m.start()-off)
 funcs=[]
 for l in (d/'symbols.txt').read_text().splitlines():
  c=l.split(None,3)
  if len(c)==4 and c[2] in ['t','T']:funcs.append((int(c[0],16),int(c[1],16),c[3]))
 rows=tf.read_text().splitlines();seen={int(x.split('\t')[0],16) for x in rows};extra=[]
 for l in (d/'assembly.txt').read_text().splitlines():
  m=re.search(r'^\s*([0-9a-f]+):.*# ([0-9a-f]+)',l)
  if m and int(m[2],16) in addresses:
   a=int(m[1],16);f=next((f for f in funcs if f[0]<=a<f[0]+f[1]),None)
   if f and f[0] not in seen:
    extra.append({'address':hex(f[0]),'name':f[2],'string_address':m[2]});rows.append(f'{f[0]:016x}\t'+f[2]);seen.add(f[0])
 tf.write_text('\n'.join(rows)+'\n');(d/'config_xref_additions.json').write_text(json.dumps(extra,indent=2));print(p.name,len(extra),flush=True)
