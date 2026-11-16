import ctypes as C,json,os,struct,random
from pathlib import Path
from reference_kernels import VolSpreadRatio,PhaseThresholds,next_phase,taker_fillable_cum
R=Path(__file__).resolve().parent;B=R.parent;meta=json.loads((R/'config_probe_meta.json').read_text());fs=json.loads((B/'strategy_functions.json').read_text());D=C.c_double;P=C.c_void_p;U=C.c_uint8
stub=C.CDLL(str(R/'sdk_stubs.so'),mode=os.RTLD_GLOBAL);rng=random.Random(14)
class Ret(C.Structure):_fields_=[('tag',C.c_uint64),('value',D)]
for k in meta:
 lib=C.CDLL(str(B/(k+'.so')),mode=os.RTLD_NOW);base=C.cast(lib.create_strategy,P).value-meta[k]['create'];rows=[]
 for f in fs[k]:
  nm=f['name'];addr=base+int(f['address'],16);n=0;fails=[]
  if 'VolSpreadRatio::update' in nm:
   call=C.CFUNCTYPE(Ret,P,D,D,D)(addr);state=(C.c_ubyte*0x150)();struct.pack_into('<Q',state,8,8);struct.pack_into('<d',state,0x20,1000.)
   for off in [0x28,0xb8]:struct.pack_into('<Q',state,off+8,8);struct.pack_into('<d',state,off+0x38,5000.)
   struct.pack_into('<d',state,0x148,1000.);model=VolSpreadRatio(1000.,5000.);now=0.;mid=3000.
   for i in range(500):
    now+=rng.choice([0.,100.,250.,500.,1000.,2000.]);mid+=rng.choice([-2.,-1.,0.,1.,2.]);sp=rng.choice([0.,.5,1.,2.]);e=model.update(now,mid-sp,mid+sp);a=call(state,now,mid-sp,mid+sp)
    if a.tag!=int(e is not None) or e is not None and struct.pack('<d',a.value)!=struct.pack('<d',e):fails.append(dict(i=i,actual=[a.tag,a.value],expected=e))
    n+=1
  elif nm.endswith('::next_phase'):
   call=C.CFUNCTYPE(U,U,P,D,D)(addr);layout=json.loads((R/(k+'.config_layout.json')).read_text());mapping={x['field']:x['state_offsets'][0] for x in layout['fields'] if x['status']=='mapped'}
   for inv in [False,True]:
    state=(C.c_ubyte*meta[k]['size'])();p=PhaseThresholds(10.,5.,30.,20.,3. if 'min_trades_for_upgrade' in mapping else 0.,inv)
    for fld,val in [('enter_phase2',10.),('exit_phase2',5.),('enter_phase3',30.),('exit_phase3',20.),('min_trades_for_upgrade',3.)]:
     if fld in mapping:struct.pack_into('<d',state,int(mapping[fld],16),val)
    state[int(mapping['invert_phase'],16)]=inv
    for phase in range(3):
     for pnl in [-100.,0.,4.99999,5.,5.00001,9.99999,10.,10.00001,19.99999,20.,20.00001,29.99999,30.,30.00001,100.]:
      for trades in [0.,2.999999,3.,4.]:
       a=call(phase,state,pnl,trades);e=next_phase(phase,pnl,trades,p)
       if a!=e:fails.append(dict(phase=phase,pnl=pnl,trades=trades,actual=a,expected=e))
       n+=1
  elif 'taker_fillable_cum' in nm:
   call=C.CFUNCTYPE(D,P,C.c_int,D)(addr)
   for buy in [0,1]:
    for i in range(300):
     levels=[(100.+(j if buy else -j),float(rng.randrange(1,20))) for j in range(5)]
     if i%7==0:levels[rng.randrange(5)]=(0.,5.)
     limit=rng.choice([95.,99.,100.,100.5,101.,102.,105.]);state=(C.c_ubyte*0x108)()
     for j,(pr,v) in enumerate(levels):struct.pack_into('<dd',state,(0x48 if buy else 0x98)+j*16,pr,v)
     a=call(state,buy,limit);e=taker_fillable_cum(levels,buy,limit)
     if a!=e:fails.append(dict(actual=a,expected=e))
     n+=1
  else:continue
  rows.append(dict(function=nm,elf=f['address'],cases=n,passed=n-len(fails),failures=fails[:4]))
 if rows:
  (R/(k+'.state_kernel_validation.json')).write_text(json.dumps(rows,indent=2));print(k,[(r['passed'],r['cases']) for r in rows],flush=True)
