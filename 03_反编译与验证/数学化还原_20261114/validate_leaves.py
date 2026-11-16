"""Direct calls to original ELF leaf routines, synthetic inputs only.
No signal/depth/order/engine callbacks. Non-log SDK imports abort in sdk_stubs.so.
"""
import ctypes as C, json, math, random, struct, os, subprocess, sys, hashlib
from pathlib import Path
R=Path(__file__).resolve().parent; B=R.parent
meta=json.loads((R/'config_probe_meta.json').read_text()); allf=json.loads((B/'strategy_functions.json').read_text())
if len(sys.argv)==1:
 results=[]
 for k in meta:
  p=subprocess.run([sys.executable,__file__,k],capture_output=True,text=True,timeout=60)
  (R/(k+'.leaf.log')).write_text(p.stdout+p.stderr)
  results.append(dict(library=k,exit_code=p.returncode));print(k,p.returncode,p.stdout[-100:].strip(),flush=True)
 (R/'leaf_validation_receipt.json').write_text(json.dumps(results,indent=2));sys.exit()
k=sys.argv[1]; stub=C.CDLL(str(R/'sdk_stubs.so'),mode=os.RTLD_GLOBAL);lib=C.CDLL(str(B/(k+'.so')),mode=os.RTLD_NOW)
base=C.cast(lib.create_strategy,C.c_void_p).value-meta[k]['create'];P=C.c_void_p;D=C.c_double;U=C.c_uint8
rng=random.Random(20261114); records=[]
def classify(x,t):
 return 0 if x>=t[0] else 3 if x>=t[3] else 2 if x<=t[2] else 1 if x<=t[1] else 4
def eq(a,b):return a==b or (math.isnan(a) and math.isnan(b)) or math.isclose(a,b,rel_tol=2e-14,abs_tol=1e-13)
def rec(f,n,fail,detail):records.append(dict(function=f['name'],elf=f['address'],cases=n,passed=n-len(fail),failures=fail[:5],model=detail))
for f in allf[k]:
 name=f['name'];addr=base+int(f['address'],16);fails=[];n=0
 if 'point_signal_trigger_pv1_spread' in name or name.endswith('::point_signal_trigger_pv4') or 'point_signal_trigger_pv3_spread' in name or 'point_signal_trigger_pv4_band' in name:
  band='pv3' in name or 'band' in name;fee='pv4' in name;argc=2+fee+band
  call=C.CFUNCTYPE(None,P,P,*([D]*argc))(addr)
  for i in range(1200):
   score=rng.uniform(-10,10);th=[3.,-1.,-3.,1.] if i<600 else [rng.uniform(-5,5) for _ in range(4)]
   alpha=rng.uniform(0,2);spread=rng.uniform(-3,3);fees=rng.uniform(-1,2);cap=rng.uniform(0,3);lo=rng.uniform(-8,8);hi=rng.uniform(-8,8)
   state=(C.c_ubyte*0xa0)();out=(C.c_ubyte*16)();struct.pack_into('<5d',state,0x38,score,*th);struct.pack_into('<2d',state,0x80,lo,hi)
   args=([alpha,fees,spread] if fee else [alpha,spread])+([cap] if band else [])
   cost=(abs(spread)+(fees if fee else 0))*alpha
   if band:cost=min(cost,cap);x=min(lo-cost,0) if score<=0 else max(hi+cost,0)
   else:x=min(score+cost,0) if score<=0 else max(score-cost,0)
   call(out,state,*args);got=(out[0],struct.unpack_from('<d',out,8)[0]);exp=(classify(x,th),1.)
   if got!=exp:fails.append(dict(i=i,actual=got,expected=exp))
   n+=1
  rec(f,n,fails,'band bounds at state+0x80/+0x88; fee='+str(fee)+'; band='+str(band)+'; sequential threshold classifier')
 elif name.endswith('::dynamic_threshold'):
  call=C.CFUNCTYPE(None,P,P,D,D,D,D)(addr)
  for h in [-1.,0.,9.999,10.,10.001,20.,30.,100.]:
   for start,maximum in [(-1.,20.),(10.,-1.),(10.,20.),(10.,10.),(10.,5.),(0.,0.)]:
    for delta in [-3.,-1e-9,0.,1e-9,1.000001e-9,3.]:
     th=(D*4)(3.,-1.,-3.,1.);out=(D*4)();call(out,th,h,start,maximum,delta)
     d=0 if start<0 or maximum<0 or h<start or abs(delta)<=1e-9 else abs(delta*min((h-start)/max(maximum-start,1e-6),1))
     exp=[3-d,-1+d,-3+d,1-d]
     if not all(eq(a,b) for a,b in zip(out,exp)):fails.append(dict(input=[h,start,maximum,delta],actual=list(out),expected=exp))
     n+=1
  rec(f,n,fails,'time-based symmetric threshold narrowing')
 elif 'high_taker_rate' in name:
  argc=7 if k=='libstrategy_comm3_1' else 9;call=C.CFUNCTYPE(D,*([D]*argc))(addr)
  for i in range(1200):
   s=rng.uniform(-20,20);th=rng.choice([0.,1e-10,1e-9,1.,3.]);half=rng.choice([0.,.5,2.,10.]);a=rng.uniform(-3,10);b=rng.uniform(-3,10);mm=rng.choice([0.,1.,2.,5.]);cover=rng.uniform(0,3);skip=rng.choice([-1.,0.,1.,5.]);fallback=.123
   args=[s,th,half,a,b,mm,cover]+([skip,fallback] if argc==9 else [])
   br=max((a-b)/(a+b),0) if a+b>0 else 0
   if a+b<=0:exp=0.
   elif argc==9 and skip>0 and half>skip:exp=fallback
   elif half<=0 or mm<=1 or abs(th)<1e-9:exp=br
   else:exp=br*max(min((abs(s)-abs(th))*cover/half,1+(mm-1)*math.tanh(max(abs(s)/abs(th)-1,0)/2)),0)
   got=call(*args)
   if not eq(got,exp):fails.append(dict(input=args,actual=got,expected=exp))
   n+=1
  rec(f,n,fails,'imbalance times capped tanh/coverage multiplier')
 elif name.endswith('::get_quote_vol'):
  class Ret(C.Structure):_fields_=[('tag',C.c_uint64),('value',D)]
  call=C.CFUNCTYPE(Ret,U,U,D,D)(addr);matrix=[]
  for qt in range(4):
   for flag in [0,1]:
    for v in [-8.,-2.,0.,2.,8.]:
     o=call(qt,flag,v,3.);matrix.append(dict(quote=qt,cap_enabled=flag,requested=v,tag=o.tag,value=o.value))
  (R/(k+'.quote_volume_matrix.json')).write_text(json.dumps(matrix,indent=2))
result=dict(library=k,sha256=hashlib.sha256((B/(k+'.so')).read_bytes()).hexdigest(),scope='synthetic leaf calls; no historical inputs; no order/event replay; finite numeric cases; float tolerance 2e-14 relative or 1e-13 absolute',kernels=records,total=sum(x['cases'] for x in records),passed=sum(x['passed'] for x in records))
(R/(k+'.leaf_validation.json')).write_text(json.dumps(result,ensure_ascii=False,indent=2));print(result['passed'],'/',result['total'])
