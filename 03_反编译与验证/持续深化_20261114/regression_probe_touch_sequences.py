from event_probe import *
import subprocess
maps={'comm2':0x188,'comm3':0x1e0,'comm3_1':0x1f0,'comm3_2':0x1f8,'comm4':0x518,'comm4_1':0x520,'comm5':0x5b0,'sm1':0x178,'sm2':0x168,'sm3':0x168}
config='signal_all="A"\nmax_single_add_vol=1.0\nmax_single_net_vol=10.0\nmax_single_close_vol=1.0\nmax_single_add_amt=-1.0\nmax_single_net_amt=-1.0\nmax_single_close_amt=-1.0\n'
if len(sys.argv)==1:
 for k in maps:
  r=subprocess.run([sys.executable,__file__,k],capture_output=True,text=True,timeout=20);(R/('libstrategy_'+k+'.touch.log')).write_text(r.stdout+r.stderr);print(k,r.returncode)
 sys.exit()
k=sys.argv[1];rows=[]
for failure in [False,True]:
 for timeout in [10.,0.,-1.]:
  C.c_int.in_dll(stub,'probe_order_rc').value=-1 if failure else 0
  o=create('libstrategy_'+k,config+'touch_gate_timeout_ms='+str(timeout)+'\n');seq=[]
  for kind,t,ask,bid in [('A',1000,101,99),('A',1000.001,101,99),('D',1000.002,101,99),('A',1000.009,101,99),('A',1000.01,101,99),('A',1000.011,101,99),('D',1000.012,101.2,99),('A',1000.013,101.2,99),('D',1000.014,float('nan'),99)]:
   setup_depth(t,ask,bid);before=Q.from_address(o['state']+maps[k]).value;r=signal(o,t=t,s=1000) if kind=='A' else depth_event(o,t,ask,bid);after=Q.from_address(o['state']+maps[k]).value
   seq.append(dict(event=kind,t=t,ask=str(ask),before=before,after=after,result=r))
  rows.append(dict(failure=failure,timeout=timeout,steps=seq))
(R/('libstrategy_'+k+'.touch_sequences.json')).write_text(json.dumps(rows,indent=2))
