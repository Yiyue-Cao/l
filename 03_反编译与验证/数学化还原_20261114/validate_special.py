import ctypes as C,json,struct,os,random,math
from pathlib import Path
R=Path(__file__).resolve().parent;B=R.parent;meta=json.loads((R/'config_probe_meta.json').read_text());D=C.c_double;P=C.c_void_p;U=C.c_uint8;I=C.c_int
stub=C.CDLL(str(R/'sdk_stubs.so'),mode=os.RTLD_GLOBAL)
def load(k):
 lib=C.CDLL(str(B/(k+'.so')),mode=os.RTLD_NOW);return lib,C.cast(lib.create_strategy,P).value-meta[k]['create']
k='libstrategy_sm3';lib,base=load(k);fn=C.CFUNCTYPE(P,P,U,P,I,*([D]*7))(base+0x84dc0);rows=[]
for act in range(4):
 for bs in [-1,0,1]:
  for e in [-5.,0.,2.,5.,10.]:
   th=[3.,-1.,-3.,1.];sm=th[act]-e if act in [1,2] else 0.;sp=th[act]+e if act in [0,3] else 0.
   out=(C.c_ubyte*48)();t=(D*4)(*th);fn(out,act,t,bs,sm,sp,100.05,99.95,.002,.0001,.0003)
   rows.append(dict(action=act,bstate=bs,edge=e,price=struct.unpack_from('<d',out)[0],type=out[8]))
(R/(k+'.b_quote_matrix.json')).write_text(json.dumps(rows,indent=2));print('sm3',len(rows),flush=True)
k='libstrategy_sm3_1';lib,base=load(k);fn=C.CFUNCTYPE(None,P,U,U,P,U,U,P,*([D]*6))(base+0x6a060);rows=[];fail=[]
for mode in range(6):
 for buy in [0,1]:
  for valid in [0,1]:
   for scope in [0,1]:
    for z in [-2.,-1.,0.,1.,2.]:
     gate=(C.c_ubyte*64)();struct.pack_into('<2d',gate,0x18,2.,1.);gate[0x28]=mode;st=(C.c_uint64*3)(0,1,0);out=(C.c_ubyte*48)()
     fn(out,buy,2,st,valid,scope,gate,99.,101.,.2,100.1,100.,z)
     N=valid and z>1;X=valid and z< -1;typ=2;pr=100.
     if scope and mode:
      if mode==1 and N or mode==2 and X or mode==4 and N or mode==5 and (N or X):typ=3;pr=100.1
      elif mode in [3,4] and X:typ=1;pr=98.6 if buy else 101.4
     got=(out[8],struct.unpack_from('<d',out)[0]);exp=(typ,pr)
     if got!=exp:fail.append(dict(mode=mode,buy=buy,valid=valid,scope=scope,z=z,actual=got,expected=exp))
     rows.append(got)
(R/(k+'.passive_gate_validation.json')).write_text(json.dumps(dict(cases=len(rows),passed=len(rows)-len(fail),failures=fail[:10]),indent=2));print('gate',len(rows)-len(fail),len(rows),flush=True)
k='libstrategy_sos6';lib,base=load(k);fn=C.CFUNCTYPE(None,P,P)(base+0x4c0d0);rng=random.Random(66);fail=[]
for i in range(1000):
 state=(C.c_ubyte*0x500)();orig=[[rng.uniform(-20,20) for _ in range(4)] for _ in range(3)];watch=[rng.uniform(-10,10) for _ in range(4)];w=(D*4)(*watch)
 for off,th in zip([0xa8,0x148,0x1e8],orig):struct.pack_into('<4d',state,off,*th)
 fn(state,w)
 for j in range(3):
  got=struct.unpack_from('<4d',state,0x3a0+j*32);exp=[orig[j][v]+(watch[v]-orig[0][v]) for v in range(4)]
  if tuple(exp)!=got:fail.append(i)
(R/(k+'.delta_validation.json')).write_text(json.dumps(dict(cases=1000,passed=1000-len(set(fail)),failures=fail[:10],scope='bit/exact equality using original subtract-then-add order'),indent=2));print('delta',1000-len(set(fail)),flush=True)
