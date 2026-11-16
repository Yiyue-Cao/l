from pathlib import Path
import struct,hashlib,json
b=Path(__file__).resolve().parent/'通用程序_stockidx_20261114'
def sections(p):
 d=p.read_bytes();off=struct.unpack_from('<Q',d,40)[0];size,num,idx=struct.unpack_from('<HHH',d,58)
 raw=[struct.unpack_from('<IIQQQQIIQQ',d,off+i*size) for i in range(num)]
 names=d[raw[idx][4]:raw[idx][4]+raw[idx][5]]
 return d,{names[x[0]:].split(b'\0',1)[0].decode():x for x in raw}
def funcs(n):
 r={}
 for l in (b/'analysis'/n/'symbols.txt').read_text().splitlines():
  c=l.split(None,3)
  if len(c)==4 and c[2] in ['t','T'] and c[3].startswith('future_backtest::'):r[c[3]]=(int(c[0],16),int(c[1],16))
 return r
n1='future_backtest_runner';n2='future_backtest_meta_runner';d1,s1=sections(b/n1);d2,s2=sections(b/n2)
f1,f2=funcs(n1),funcs(n2)
def code(d,s,a,n):
 for x in s.values():
  if x[1]!=8 and x[3]<=a and a+n<=x[3]+x[5]:return d[x[4]+a-x[3]:x[4]+a-x[3]+n]
 raise ValueError(hex(a))
shared=sorted(set(f1)&set(f2));diff=[]
for name in shared:
 a,z=f1[name];aa,zz=f2[name]
 if z!=zz or code(d1,s1,a,z)!=code(d2,s2,aa,zz):diff.append(name)
entries=[]
for n,d,s in [(n1,d1,s1),(n2,d2,s2)]:
 main=code(d,s,0x65c220,6);got=0x65c226+struct.unpack_from('<i',main,2)[0]
 for v in s.values():
  if v[1]!=4:continue
  for offset in range(v[4],v[4]+v[5],v[9]):
   address,info,addend=struct.unpack_from('<QQq',d,offset)
   if address==got:entries.append(dict(file=n,main_elf='0x65c220',got=hex(got),relocation_type=info&0xffffffff,target_elf=hex(addend)))
result={'files':[n1,n2],'common_named_functions':len(shared),'byte_identical_functions':len(shared)-len(diff),'different_functions':diff,'main_bytes':[code(d1,s1,0x65c220,6).hex(),code(d2,s2,0x65c220,6).hex()], 'main_entry_relocations':entries}
(b/'runner_common_code_comparison.json').write_text(json.dumps(result,indent=2));print(json.dumps(result))
