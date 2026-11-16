from probe_low_pending import *
rows=[]
for k in ['comm3','comm3_1','comm3_2','comm4','comm4_1','comm5','comm_mock']:
 k='libstrategy_'+k;o=create(k,lowcfg);pending([]);I('order_rc',0);I('cancel_rc',0);F('position',0)
 for j in range(5):
  t=1000+j*.06;setup_depth(t,101+j*.2,99+j*.2);signal(o,t=t,s=1000.)
 events=[]
 for name,orders,ids_,exp in [('unfilled',[dict(id='B',side=1,price=100.2,vol=2,filled=0)],[],0),('part_filled',[dict(id='B',side=1,price=100.2,vol=2,filled=1)],[],0),('fully_filled_but_listed',[dict(id='B',side=1,price=100.2,vol=2,filled=2)],[],0),('cancel_pending',[dict(id='B',side=1,price=100.2,vol=2,filled=1)],['B'],1),('removed',[],[],1)]:
  pending(orders,ids_);t=1000.3+len(events)*.01;setup_depth(t,102,100);result=signal(o,t=t,s=1000.);out=outputs();assert len(out['requests'])==exp,(k,name,out);events.append(dict(name=name,result=result,**out))
 rows.append(dict(k=k,events=events))
(R/'partial_fill_sequences.json').write_text(json.dumps(rows,indent=2));print('partial-fill',len(rows)*5,'events PASS')
