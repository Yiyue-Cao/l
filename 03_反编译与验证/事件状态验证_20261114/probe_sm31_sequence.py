from event_probe import *
config='''signal_all="A"
gate_wait_mode="barrier"
gate_maker_mode="block"
gate_maker_veto_th=1.0
gate_a_wait_b_timeout_ms=10.0
gate_b_reuse_max_age_ms=10.0
long_open_threshold=100000.0
short_open_threshold=-100000.0
long_close_threshold=-100000.0
short_close_threshold=100000.0
'''
def snap(o):
 s=o['state'];return {n:Q.from_address(s+off+16).value for n,off in [('triggers',0x248),('b_cache',0x260),('touch',0x278),('parked',0x290),('telemetry',0x2a8)]}
rows=[]
for name,seq in [('timeout',[('A',1000),('D',1000.009),('D',1000.010),('D',1000.011)]),('supersede',[('A',1000),('A',1000.005),('D',1000.011),('D',1000.016)]),('release',[('A',1000),('B',1000.005),('D',1000.02)]),('precache',[('B',1000),('A',1000.005)]),('oldcache',[('B',1000),('A',1000.011)]),('futurecache',[('B',1000.010),('A',1000)])]:
 o=create('libstrategy_sm3_1',config);case=[]
 for e,t in seq:
  setup_depth(t);before=snap(o)
  print(name,e,t,before,flush=True)
  r=depth_event(o,t) if e=='D' else signal(o,name='utility' if e=='B' else 'A',t=t,s=2.)
  case.append(dict(event=e,time=t,before=before,after=snap(o),result=r));print(case[-1],flush=True)
 rows.append(dict(name=name,events=case))
(R/'libstrategy_sm3_1.sequence_probe.json').write_text(json.dumps(rows,indent=2))

failed=[]
for release in ['B','D']:
 o=create('libstrategy_sm3_1',config);setup_depth();r0=signal(o,name='A');C.c_int.in_dll(stub,'probe_cancel_rc').value=-1;setup_depth(1000.02)
 r1=signal(o,name='utility',t=1000.02) if release=='B' else depth_event(o,1000.02)
 after=snap(o);C.c_int.in_dll(stub,'probe_cancel_rc').value=0;r2=depth_event(o,1000.03)
 failed.append(dict(release=release,first=r0,released=r1,after=after,next=r2))
(R/'libstrategy_sm3_1.failure_sequences.json').write_text(json.dumps(failed,indent=2))
