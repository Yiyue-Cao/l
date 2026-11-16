"""Validate captured original-binary callback traces against explicit state rules.
This checks the listed observables, not the entire heap or SDK engine.
"""
from pathlib import Path
import json, math
R=Path(__file__).resolve().parent
checks=[]
def check(k,case,rule,ok):checks.append(dict(library=k,case=case,rule=rule,passed=bool(ok)))
def read(n):return json.loads((R/n).read_text())
case_count=0;fatal=[]
for p in sorted(R.glob('*.events.json')):
 d=json.loads(p.read_text());k=d['library'];rows={x['case']:x for x in d['cases']};case_count+=len(rows)
 for c,x in rows.items():
  if 'process_exit' in x:fatal.append(dict(library=k,case=c,exit=x['process_exit'],error=x['error']))
 for c in ['other_signal','before_start','missing_depth','margin_block']+([] if k in ['libstrategy_sos5','libstrategy_sos6'] else ['impact_block']):
  x=rows[c];check(k,c,'successful early exit / no order request',x.get('ret')==0 and not any(t.startswith('place_order') for t in x.get('trace',[])))
 for c in ['active_buy','cancel_positive']:
  x=rows[c];check(k,c,'nonnegative SDK result accepted and order path reached',x.get('ret')==0 and any(t.startswith('place_order') for t in x.get('trace',[])))
 x=rows['order_rejected'];check(k,'order_rejected','negative order result becomes error; last_error read',bool(x.get('ret')) and 'last_error' in x.get('trace',[]))
 x=rows['cancel_rejected'];check(k,'cancel_rejected','cancel error stops before impact and order',bool(x.get('ret')) and 'impact_block_check' not in x.get('trace',[]) and not any(t.startswith('place_order') for t in x.get('trace',[])))
 x=rows['active_buy'];tr=x['trace'];seq=['margin_filter','cancel_by_pending_ts']+([] if k in ['libstrategy_sos5','libstrategy_sos6'] else ['impact_block_check'])+[next(t for t in tr if t.startswith('place_order'))];positions=[tr.index(t) for t in seq];check(k,'active_buy',' -> '.join(seq),positions==sorted(positions))
 check(k,'active_buy','state was written before callback ended',bool(x['changed_offsets']))
 for c in ['bad_ask','bad_bid','stale_depth']:
  x=rows[c]
  if k.startswith('libstrategy_comm'):check(k,c,'Comm rejected before position read','position' not in x.get('trace',[]))
 for c in ['age_exact_one','future_depth']:
  x=rows[c]
  if k.startswith('libstrategy_comm'):check(k,c,'one-sided age test allows equality and future depth','position' in x.get('trace',[]))
 check(k,'other_signal','unsubscribed signal calls no SDK',rows['other_signal']['trace']==[])
touch_count=0
for p in sorted(R.glob('*.touch_sequences.json')):
 k=p.name.split('.touch')[0]
 for j,c in enumerate(read(p.name)):
  g=False;last=0;oldask=oldbid=0
  for i,e in enumerate(c['steps']):
   touch_count+=1;before=int(g);n=0;err=False
   if e['event']=='D':
    if float(e['ask'])!=oldask or math.isnan(float(e['ask'])):g=False
   elif not g or (c['timeout']>0 and (e['t']-last)*1000>=c['timeout']):
    n=1;err=c['failure']
    if not err:g=True;last=e['t'];oldask=float(e['ask']);oldbid=99
   rr=e['result'];check(k,f'touch/{j}/{i}','gate state, request count, and error model',e['before']==before and e['after']==int(g) and sum(t.startswith('place_order') for t in rr['trace'])==n and bool(rr['ret'])==err)
sm31=read('libstrategy_sm3_1.sequence_probe.json');expected={'timeout':[1,1,0,0],'supersede':[1,1,1,0],'release':[1,0,0],'precache':[0,0],'oldcache':[0,1],'futurecache':[0,1]}
for c in sm31:
 for i,e in enumerate(c['events']):check('libstrategy_sm3_1',c['name']+str(i),'parked A count',e['after']['parked']==expected[c['name']][i])
for c in read('libstrategy_sm3_1.failure_sequences.json'):
 check('libstrategy_sm3_1','release_failure/'+c['release'],'pending removed before decide error and not retried by next depth',bool(c['released']['ret']) and c['after']['parked']==0 and c['next']['trace']==[])
lf=read('libstrategy_lf4.state_sequences.json');lfcount=0
for c in lf:
 for i,e in enumerate(c['steps']):
  lfcount+=1;a=e['after'];tr=e['result']['trace'];n=sum(t.startswith('place_order') for t in tr)
  expectedn=1 if i==0 or (e['event']=='A' and 1000.003<=e['t']<1000.005) else 0
  expectedflag=1 if i<2 else 0
  check('libstrategy_lf4',str(c['order_failure'])+'/'+str(i),'task retained, tries unchanged, depth progress and gate, request/error order',a['tries']==0 and a['flag']==expectedflag and a['done']==e['q'] and n==expectedn and bool(e['result']['ret'])==(c['order_failure'] and n==1))
for k in ['tm5','tm6']:
 for i,c in enumerate(read('libstrategy_'+k+'.state_sequences.json')):check('libstrategy_'+k,str(i),'order/depth queue and published sum',c['passed'])
for k in ['sos5','sos6']:
 for i,c in enumerate(read('libstrategy_'+k+'.phase_sequences.json')):check('libstrategy_'+k,str(i),'phase comparison boundaries and account override',c['passed'])
for i,c in enumerate(read('libstrategy_sos6.threshold_presence.json')):check('libstrategy_sos6','presence/'+str(i),'all four keys required',c['passed'])
mock=read('libstrategy_comm_mock.publish_sequences.json');ex={0:(0,40,40,2000,0,2,98),2:(7,40,47,4020,1,2,98),4:(7,40,47,4020,1,2,98),6:(5,40,45,5010,2,2,98)}
for i,c in enumerate(mock):
 if i in ex:
  vals=tuple(float(t.split('=')[-1]) for t in c['trace'] if t.startswith('publish:'));ok=vals==ex[i]
 else:ok=not any(t.startswith('publish:') for t in c['trace'])
 check('libstrategy_comm_mock',str(i),'order callbacks accumulate; depth publishes seven expected values',ok)
receipt={'generic_cases':case_count,'generic_normal_returns':case_count-len(fatal),'observed_fatal_cases':fatal,'touch_callback_events':touch_count,'sm31_sequence_events':sum(len(c['events']) for c in sm31),'sm31_failure_events':6,'lf4_sequence_events':lfcount,'tm_queue_events':18,'sos_phase_events':216,'sos_threshold_presence_events':16,'mock_publish_events':7,'assertions':len(checks),'passed':sum(c['passed'] for c in checks),'checks':checks}
receipt['callback_cases_total']=sum(receipt[k] for k in ['generic_cases','touch_callback_events','sm31_sequence_events','sm31_failure_events','lf4_sequence_events','tm_queue_events','sos_phase_events','sos_threshold_presence_events','mock_publish_events'])
(R/'verification_summary.json').write_text(json.dumps(receipt,ensure_ascii=False,indent=2))
print({k:v for k,v in receipt.items() if k not in ['checks','observed_fatal_cases']})
for c in checks:
 if not c['passed']:print('FAILED',c)
print('Observed fatal cases:',[(x['library'],x['case'],x['exit']) for x in fatal])
assert all(c['passed'] for c in checks)
