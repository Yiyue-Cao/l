from probe_pair_tree import *
from pending_probe import pending,I,F,outputs
cfg='''signal_all="A"
signal_mode="PV1"
signal_trigger_mode="PointTrigger"
cost_alpha=0.0
touch_gate=false
long_open_threshold=2.0
long_close_threshold=0.0
short_open_threshold=-2.0
short_close_threshold=0.0
max_single_add_vol=1.0
max_single_net_vol=10.0
max_single_close_vol=1.0
max_single_add_amt=-1.0
max_single_net_amt=-1.0
max_single_close_amt=-1.0
pair_rolling_window_ms=1000.0
'''
for k in ['sm4','tm6']:
 o=create('libstrategy_'+k,cfg);tree=(C.c_ubyte*80).from_address(o['state']+8);rows=[];pending([])
 for i,(s,rc) in enumerate([(1000.,0),(-1000.,-1),(1000.,-1),(-1000.,0)]):
  t=1000.+i*.1;setup_depth(t);I('order_rc',rc);r=signal(o,t=t,s=s);state=snapshot(o,tree);assert bool(r['ret'])==(rc<0),(k,i,r);assert len(state['stats'][0]['pairs'])==i,(k,i,state);rows.append(dict(t=t,s=s,order_rc=rc,result=r,tree=state,**outputs()))
 (R/(o['k']+'.tree_callbacks.json')).write_text(json.dumps(rows,indent=2));print(k,'callbacks passed',[(bool(r['result']['ret']),len(r['tree']['stats'][0]['pairs'])) for r in rows])
