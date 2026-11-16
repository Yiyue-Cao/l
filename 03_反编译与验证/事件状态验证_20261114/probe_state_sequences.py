from event_probe import *
def seti(n,x):C.c_int.in_dll(stub,'probe_'+n).value=x
def setd(n,x):C.c_double.in_dll(stub,'probe_'+n).value=x
def task(o):
 key=buf(24);string(key,0,'IF');p=C.CFUNCTYPE(P,P,P)(o['base']+0x41b30)(o['state']+0x140,key)
 if not p:return None
 return dict(zip(['t0','end','target_price','target_vol','max_price','min_price','max_tries','q0','done','tries'],struct.unpack('<10d',C.string_at(p+0x18,80))),flag=C.c_ubyte.from_address(p+0x69).value,action=C.c_ubyte.from_address(p+0x68).value)
def tmqueue(o):
 cap,ptr,head,n=struct.unpack('<4Q',C.string_at(o['state']+(0x80 if o['k'].endswith('tm6') else 0),32));return [struct.unpack('<dd',C.string_at(ptr+((head+i)%cap)*16,16)) for i in range(n)]
if sys.argv[1] in ['tm5','tm6']:
 o=create('libstrategy_'+sys.argv[1],'rolling_window_ms=10000.0\n');ref=[];rows=[]
 seq=[('O',1000,1,2),('O',1005,-1,-3),('O',1010,1,5),('O',1020,0,999),('D',1010,0,0),('D',1010.001,0,0),('D',1015,0,0),('D',1015.001,0,0),('D',1030,0,0)]
 for kind,t,v,pnl in seq:
  stub.probe_reset()
  if kind=='O':
   a=buf(0x120);struct.pack_into('<d',a,0x50,t);struct.pack_into('<d',a,0x60,v);struct.pack_into('<d',a,0x78,pnl)
   
   if sys.argv[1]=='tm5':ret=C.CFUNCTYPE(Q,P,P)(o['base']+addr(o,'StrategyPlugin>::on_order'))(o['state'],a)
   else:
    c=buf(0x100);struct.pack_into('<d',c,8,t);struct.pack_into('<d',c,0x30,v);struct.pack_into('<d',c,0x48,pnl);ret=C.CFUNCTYPE(Q,P,P,P)(o['base']+0x61d40)(o['state'],c,None)
   if abs(v)>1e-5:
    ref.append((t*1000,pnl))
    while ref and t*1000-ref[0][0]>10000:ref.pop(0)
  else:
   # Deliberately disagree depth timestamp with context clock: implementation uses context clock.
   setd('now',t);ret=depth_event(o,t=17)['ret']
   while ref and t*1000-ref[0][0]>10000:ref.pop(0)
  actual=tmqueue(o);trace=stub.probe_trace().decode().splitlines();ok=actual==ref
  if kind=='D':ok=ok and ('publish:rolling_pnl=%.17g'%sum(x[1] for x in ref)) in trace
  rows.append(dict(event=kind,t=t,vol=v,pnl=pnl,queue=actual,expected=ref.copy(),trace=trace,passed=ok));assert ok,rows[-1]
 (R/('libstrategy_'+sys.argv[1]+'.state_sequences.json')).write_text(json.dumps(rows,indent=2));print('TM5',len(rows),'passed')
if sys.argv[1]=='lf4':
 config='signal_all="A"\nlong_open_threshold=100.0\nshort_open_threshold=-100.0\nlong_close_threshold=-100.0\nshort_close_threshold=100.0\nmax_try_hiter_times=3.0\nmax_try_hiter_time_ms=1000.0\nprice_range_bp=100.0\n'
 rows=[]
 for failure in [False,True]:
  seti('order_rc',-1 if failure else 0);setd('position',0);o=create('libstrategy_lf4',config);setup_depth();steps=[]
  for kind,t,q,s in [('A',1000,0,1000),('A',1000.001,0,0),('D',1000.002,0,0),('A',1000.003,0,0),('A',1000.004,0,0),('A',1000.0041,0,0),('A',1000.0042,0,0),('A',1000.0043,0,0),('D',1000.005,1,0),('A',1000.006,1,0),('D',1001,0,0),('A',1001,0,0)]:
   setup_depth(t);setd('position',q);before=task(o);r=depth_event(o,t) if kind=='D' else signal(o,t=t,s=s);after=task(o);steps.append(dict(event=kind,t=t,q=q,s=s,before=before,after=after,result=r));print(steps[-1],flush=True)
  rows.append(dict(order_failure=failure,steps=steps))
 (R/'libstrategy_lf4.state_sequences.json').write_text(json.dumps(rows,indent=2))
