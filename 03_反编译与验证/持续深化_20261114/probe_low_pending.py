from probe_pending_events import *
lowcfg=cfg+'use_dynamic_volspread_ratio=true\nmarket_volatility_ms=100.0\nrolling_windows_ms=1000.0\nsplit_high_low_ratio_threshold=1000000.0\nlow_action="maker"\n'
def run(k):
 rows=[]
 for name,p in patterns:
  for fail in [-1,0,1]:
   o=create(k,lowcfg);pending([]);F('position',0);I('pending_buy',0);I('pending_sell',0);I('order_rc',0);I('cancel_rc',0);warm=[]
   for j in range(5):
    t=1000+j*.06;setup_depth(t,101+j*.2,99+j*.2);warm.append(signal(o,t=t,s=1000.))
   pending(p);I('cancel_fail_at',fail);I('pending_buy',sum(x['side']==1 for x in p));I('pending_sell',sum(x['side']==0 for x in p));t=1000.30;setup_depth(t,102,100);r=signal(o,t=t,s=1000.);rows.append(dict(pattern=name,fail_at=fail,warm=warm,result=r,**outputs()))
 (R/(k+'.low_pending.json')).write_text(json.dumps(rows,indent=2));print(k,len(rows),'events',sum(bool(r['cancel_attempts']) for r in rows),'cancels',flush=True)
if __name__=='__main__':
 if len(sys.argv)>1:run(sys.argv[1])
 else:
  for k in ['comm3','comm3_1','comm3_2','comm4','comm4_1','comm5','comm_mock']:
   k='libstrategy_'+k;p=subprocess.run([sys.executable,__file__,k],capture_output=True,text=True,timeout=20);(R/(k+'.low_pending.log')).write_text(p.stdout+p.stderr);print(k,p.returncode,p.stdout,p.stderr[-600:])
