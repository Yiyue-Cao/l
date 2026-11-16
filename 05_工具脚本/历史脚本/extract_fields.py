import pathlib,struct,json,re
b=pathlib.Path(__file__).resolve().parent
for p in sorted(b.glob('libstrategy*.so')):
 data=bytearray(p.read_bytes());phoff=struct.unpack_from('<Q',data,32)[0];ents,n=struct.unpack_from('<HH',data,54);segs=[]
 for i in range(n):
  typ,fl,off,va,pa,sz,mem,al=struct.unpack_from('<IIQQQQQQ',data,phoff+i*ents)
  if typ==1:segs.append((va,off,sz))
 shoff=struct.unpack_from('<Q',data,40)[0];she,shn=struct.unpack_from('<HH',data,58)
 for i in range(shn):
  sh=struct.unpack_from('<IIQQQQIIQQ',data,shoff+i*she)
  if sh[1]==4:
   for ro in range(sh[4],sh[4]+sh[5],sh[9]):
    addr,info,add=struct.unpack_from('<QQq',data,ro)
    if info&0xffffffff==8:
     for va,off,sz in segs:
      if va<=addr<va+sz:struct.pack_into('<Q',data,off+addr-va,add)
 def string(addr,size):
  for va,off,sz in segs:
   if va<=addr and addr+size<=va+sz:return data[off+addr-va:off+addr-va+size]
  return b''
 refs=[]
 for off in range(0,len(data)-16,8):
  a,n=struct.unpack_from('<QQ',data,off)
  if 3<=n<=65:
   s=string(a,n)
   if re.fullmatch(rb'[a-z][a-z0-9_]{2,64}',s):refs.append((off,s.decode()))
 groups=[];cur=[]
 for off,s in refs:
  if cur and off!=cur[-1][0]+16:
   if len(cur)>=4:groups.append(cur)
   cur=[]
  cur.append((off,s))
 if len(cur)>=4:groups.append(cur)
 groups=[g for g in groups if any(x in ['signal_mode','long_open_threshold','watcher_strategy_name','telemetry_date'] for _,x in g)]
 d=b/'analysis'/p.stem
 (d/'config_field_arrays.json').write_text(json.dumps([{'file_offset':hex(g[0][0]),'fields':[s for _,s in g]} for g in groups],indent=2))
 print(p.stem,[(hex(g[0][0]),len(g)) for g in groups])
