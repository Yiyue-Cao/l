from pathlib import Path
import struct,re,subprocess
def prepare(p,d):
 asm=d/'assembly.txt'
 if not asm.exists():asm.write_bytes(subprocess.check_output(['objdump','-d','-C','-M','intel',str(p)]))
 lines=asm.read_text().splitlines();data=p.read_bytes();segs=[]
 ph=struct.unpack_from('<Q',data,32)[0];e,n=struct.unpack_from('<HH',data,54)
 for i in range(n):
  t,_,o,v,_,s,_,_=struct.unpack_from('<IIQQQQQQ',data,ph+i*e)
  if t==1:segs.append((v,o,s))
 def readint(a):
  for v,o,s in segs:
   if v<=a<a+4<=v+s:return struct.unpack_from('<i',data,o+a-v)[0]
  return 0x7fffffff
 funcs=[]
 for l in (d/'symbols.txt').read_text().splitlines():
  c=l.split(None,3)
  if len(c)==4 and c[2] in ['t','T'] and c[0] in {r.split('\t')[0] for r in (d/'targets.tsv').read_text().splitlines() if r} and 'visit_' not in c[3] and 'drop_in_place' not in c[3]:funcs.append((int(c[0],16),int(c[1],16),c[3]))
 candidates=[]
 for i,l in enumerate(lines):
  m=re.search(r'^\s*([0-9a-f]+):.*\bjmp\s+r\w+\s*$',l)
  if not m:continue
  a=int(m[1],16); f=next((f for f in funcs if f[0]<=a<f[0]+f[1]),None)
  if not f:continue
  prev='\n'.join(lines[max(0,i-8):i]); refs=re.findall(r'lea\s+(\w+),\[rip[^\]]*\].*# ([0-9a-f]+)',prev)
  if not refs or 'movsxd' not in prev or '*4]' not in prev:continue
  table=int(refs[-1][1],16)
  if not f[0]<=table+readint(table)<f[0]+f[1]:continue
  candidates.append((f,a,table))
 table_starts=sorted(set(c[2] for c in candidates));rows=[]
 for f,a,t in candidates:
  count=0
  while count<256:
   addr=t+count*4
   if count and addr in table_starts:break
   target=t+readint(addr)
   if not f[0]<=target<f[0]+f[1]:break
   count+=1
  if count>=2:rows.append(f'{f[0]:x}\t{f[1]:x}\t{a:x}\t{t:x}\t{count}')
 (d/'repairs.tsv').write_text('\n'.join(rows)+'\n');print(p.name,len(rows))
