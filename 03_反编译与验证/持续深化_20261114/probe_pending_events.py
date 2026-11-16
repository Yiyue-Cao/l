from pending_probe import *
import subprocess
cfg='signal_all="A"\ntouch_gate=false\ncost_alpha=0.0\nmax_single_add_vol=1.0\nmax_single_net_vol=10.0\nmax_single_close_vol=1.0\nmax_single_add_amt=-1.0\nmax_single_net_amt=-1.0\nmax_single_close_amt=-1.0\n'
patterns=[('empty',[]),('buy',[dict(id='B',side=1,price=99)]),('sell',[dict(id='S',side=0,price=101)]),('both',[dict(id='B',side=1,price=99),dict(id='S',side=0,price=101)]),('out_of_range',[dict(id='B',side=1,price=200),dict(id='S',side=0,price=1)]),('two_reverse',[dict(id='S1',side=0,price=101),dict(id='S2',side=0,price=102)])]
def run(k):
 rows=[]
 for name,p in patterns:
  for s in [1.,1000.]:
   for fail in [-1,0,1]:
    o=create(k,cfg);setup_depth();F('position',0);I('cancel_rc',0);I('order_rc',0);pending(p);I('cancel_fail_at',fail)
    I('pending_buy',sum(x['side']==1 for x in p));I('pending_sell',sum(x['side']==0 for x in p))
    result=signal(o,s=s);out=outputs();rows.append(dict(pattern=name,s=s,fail_at=fail,result=result,**out))
 (R/(k+'.pending_events.json')).write_text(json.dumps(rows,indent=2));print(k,len(rows),'events',sum(bool(r['requests']) for r in rows),'requests',sum(bool(r['cancel_attempts']) for r in rows),'cancel_cases')
if __name__=='__main__':
 if len(sys.argv)>1:run(sys.argv[1])
 else:
  for k in meta:
   p=subprocess.run([sys.executable,__file__,k],capture_output=True,text=True,timeout=25);(R/(k+'.pending_events.log')).write_text(p.stdout+p.stderr);print(k,p.returncode,p.stdout,p.stderr[-500:])
