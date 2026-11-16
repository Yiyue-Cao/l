import ctypes as C,json,math,os,struct,random
from pathlib import Path
R=Path(__file__).resolve().parent;B=R.parent;meta=json.loads((R/'config_probe_meta.json').read_text());fs=json.loads((B/'strategy_functions.json').read_text());D=C.c_double;P=C.c_void_p;U=C.c_uint8
stub=C.CDLL(str(R/'sdk_stubs.so'),mode=os.RTLD_GLOBAL);rng=random.Random(20261114)
def rnd(x):return math.copysign(math.floor(abs(x)+.5),x)
for k in ['libstrategy_sm1','libstrategy_sm4']:
 lib=C.CDLL(str(B/(k+'.so')),mode=os.RTLD_NOW);base=C.cast(lib.create_strategy,P).value-meta[k]['create'];f=next(f for f in fs[k] if f['name'].endswith('::get_quote_price'))
 call=C.CFUNCTYPE(P,P,U,P,*([D]*6))(base+int(f['address'],16));fail=[];n=0;examples=[]
 for i in range(1200):
  ask=100+rng.uniform(0,.2);bid=100-rng.uniform(0,.2);m=(ask+bid)/2;low=rng.uniform(-20,20);high=rng.uniform(-20,20);th=[3.,-1.,-3.,1.];act=i%4;rate_max=.002;rate_base=.0001
  edge=rnd(([high-th[0],th[1]-low,th[2]-low,high-th[3]][act])*100)/100
  h=rnd((ask-bid)/m*.5*10000*10)/10
  buy=act in [0,3]
  if edge>h:typ=0;r=max(rate_base,min(rate_max,(edge-h)*.0001));price=ask*(1+r) if buy else bid*(1-r)
  elif edge<=0:typ=1;price=min(bid+.2,ask-.2)
  else:typ=2;price=m
  out=(C.c_ubyte*48)();t=(D*4)(*th);call(out,act,t,low,high,ask,bid,rate_max,rate_base)
  gotprice=struct.unpack_from('<d',out)[0];gottyp=out[8]
  if gottyp!=typ or not math.isclose(gotprice,price,rel_tol=1e-13,abs_tol=1e-12):fail.append(dict(i=i,actual=[gotprice,gottyp],expected=[price,typ],edge=edge,h=h))
  n+=1
 (R/(k+'.quote_price_validation.json')).write_text(json.dumps(dict(cases=n,passed=n-len(fail),failures=fail[:10],elf=f['address'],scope='6 floating arguments, native price and quote kind, finite synthetic inputs'),indent=2));print(k,n-len(fail),n)
k='libstrategy_sm2';lib=C.CDLL(str(B/(k+'.so')),mode=os.RTLD_NOW);base=C.cast(lib.create_strategy,P).value-meta[k]['create']
class Ret(C.Structure):_fields_=[('tag',C.c_uint64),('value',D)]
rows=[]
for side in ['buy','sell']:
 f=next(f for f in fs[k] if f['name'].endswith('::optimal_quote_'+side));call=C.CFUNCTYPE(Ret,P)(base+int(f['address'],16))
 for u in [0.,100.]:
  for s in [.1,1.,10.]:
   for z in [-8.,-3.,0.,3.,8.]:
    val=u+z*s;inp=(D*3)(val,u,s);out=call(inp);q=out.value;w=(q-u)/s;phi=math.exp(-w*w/2)/math.sqrt(2*math.pi);F=.5*(1+math.erf(w/math.sqrt(2)))
    residual=(w+F/phi-z if side=='buy' else w-(1-F)/phi-z) if out.tag==1 and phi else None
    rows.append(dict(side=side,value=val,u=u,s=s,tag=out.tag,quote=q if out.tag else None,root_residual=residual))
(R/(k+'.optimizer_native_cases.json')).write_text(json.dumps(rows,indent=2));print('sm2 optimizer',len(rows))
