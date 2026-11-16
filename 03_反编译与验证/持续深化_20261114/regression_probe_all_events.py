from event_probe import *
import subprocess
if len(sys.argv)==1:
 receipt=[]
 for k in meta:
  r=subprocess.run([sys.executable,__file__,k],capture_output=True,text=True,timeout=30)
  (R/(k+'.events.log')).write_text(r.stdout+r.stderr);receipt.append(dict(library=k,exit_code=r.returncode));print(k,r.returncode,flush=True)
 (R/'event_process_receipt.json').write_text(json.dumps(receipt,indent=2));sys.exit()
k=sys.argv[1];rows=[]
config='signal_all="A"\nlong_open_threshold=100000.0\nshort_open_threshold=-100000.0\nlong_close_threshold=-100000.0\nshort_close_threshold=100000.0\n'
cases=['other_signal','other_code','before_start','missing_depth','valid_neutral','bad_ask','stale_depth','end_without_flatten','active_buy','active_sell','order_rejected','cancel_rejected','margin_block','impact_block','cancel_positive','age_exact_one','future_depth','bad_bid']
if len(sys.argv)==2:
 receipt=[];rows=[]
 for case in cases:
  r=subprocess.run([sys.executable,__file__,k,case],capture_output=True,text=True,timeout=20)
  (R/(k+'.'+case+'.log')).write_text(r.stdout+r.stderr)
  if r.returncode==0:rows.append(json.loads((R/(k+'.'+case+'.case.json')).read_text()))
  else:rows.append(dict(case=case,process_exit=r.returncode,error=r.stderr[:800]))
 (R/(k+'.events.json')).write_text(json.dumps(dict(library=k,sha256=meta[k]['sha256'],scope='real callback with ABI-checked synthetic SDK; not engine replay',cases=rows),indent=2));sys.exit()
for case in [sys.argv[2]]:
 C.c_int.in_dll(stub,'probe_start').value=1;C.c_int.in_dll(stub,'probe_end').value=0;C.c_int.in_dll(stub,'probe_order_rc').value=0;setup_depth()
 
 for v in ['probe_cancel_rc','probe_margin_block','probe_impact_block','probe_pending_buy','probe_pending_sell']:C.c_int.in_dll(stub,v).value=0
 active=case in ['active_buy','active_sell','order_rejected','cancel_rejected','margin_block','impact_block','cancel_positive']
 cfg=config if not active else 'signal_all="A"\nmax_single_add_vol=1.0\nmax_single_net_vol=10.0\nmax_single_close_vol=1.0\nmax_single_add_amt=-1.0\nmax_single_net_amt=-1.0\nmax_single_close_amt=-1.0\nmax_try_hiter_times=3.0\nmax_try_hiter_time_ms=1000.0\nprice_range_bp=100.0\n'
 o=create(k,cfg);kw={'s':(-1000. if case=='active_sell' else 1000.)} if active else {}
 if case=='order_rejected':C.c_int.in_dll(stub,'probe_order_rc').value=-1
 if case=='cancel_positive':C.c_int.in_dll(stub,'probe_cancel_rc').value=1
 if case=='age_exact_one':setup_depth(t=999);C.c_double.in_dll(stub,'probe_now').value=1000
 if case=='future_depth':setup_depth(t=1002);C.c_double.in_dll(stub,'probe_now').value=1000
 if case=='bad_bid':setup_depth(bid=0)
 if case=='cancel_rejected':C.c_int.in_dll(stub,'probe_cancel_rc').value=-1
 if case=='margin_block':C.c_int.in_dll(stub,'probe_margin_block').value=1
 if case=='impact_block':C.c_int.in_dll(stub,'probe_impact_block').value=1
 if case=='other_signal':kw['name']='OTHER'
 if case=='other_code':kw['code']='OTHER'
 if case=='before_start':C.c_int.in_dll(stub,'probe_start').value=0
 if case=='missing_depth':C.c_int.in_dll(stub,'probe_depth_rc').value=-1
 if case=='bad_ask':setup_depth(ask=0)
 if case=='stale_depth':setup_depth(t=998);C.c_double.in_dll(stub,'probe_now').value=1000
 if case=='end_without_flatten':C.c_int.in_dll(stub,'probe_end').value=1
 print('CASE',case,flush=True);r=signal(o,**kw);r['case']=case;r['no_order_request']=not any(x.startswith('place_order') for x in r['trace']);rows.append(r)
 (R/(k+'.'+case+'.case.json')).write_text(json.dumps(r,indent=2));print(r,flush=True)
