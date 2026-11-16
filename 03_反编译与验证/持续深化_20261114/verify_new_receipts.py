from pathlib import Path
import json
R=Path(__file__).resolve().parent;checks=[]
def check(case,ok):
 checks.append(dict(case=case,passed=bool(ok)));assert ok,case
def read(n):return json.loads((R/n).read_text())
maker={'comm_maker1','sm1','sm3','sm3_1','sm4'}
base={'empty':[],'buy':['B'],'sell':['S'],'both':['S','B'],'out_of_range':['S','B'],'two_reverse':['S1','S2']}
for p in R.glob('libstrategy_*.pending_events.json'):
 k=p.name.split('.')[0].removeprefix('libstrategy_')
 for i,r in enumerate(read(p.name)):
  if k in maker and r['s']!=1000:continue
  seq=base[r['pattern']] if k in maker else [];fail=0<=r['fail_at']<len(seq);attempt=seq[:r['fail_at']+1] if fail else seq
  check(p.stem+'/'+str(i),r['cancel_attempts']==attempt and bool(r['result']['ret'])==fail and len(r['requests'])==int(not fail))
for p in R.glob('*.low_pending.json'):
 for i,r in enumerate(read(p.name)):
  seq=base[r['pattern']] if r['pattern']!='out_of_range' else ['S'];fail=0<=r['fail_at']<len(seq);attempt=seq[:r['fail_at']+1] if fail else seq
  check(p.stem+'/'+str(i),r['cancel_attempts']==attempt and bool(r['result']['ret'])==fail and len(r['requests'])==int(not fail and r['pattern']!='out_of_range'))
for p in R.glob('*.tree_validation.json'):check(p.stem,len(read(p.name)['steps'])==2400 and read(p.name)['status']=='PASS')
for p in R.glob('*.depth_range_validation.json'):check(p.stem,len(read(p.name)['rows'])==18 and read(p.name)['status']=='PASS')
for p in R.glob('*.pending_helpers.json'):check(p.stem,len(read(p.name))==85)
for r in read('partial_fill_sequences.json'):
 check(r['k']+'/partial_fill',[len(e['requests']) for e in r['events']]==[0,0,0,1,1])
for r in read('libstrategy_comm5.xs_orders.json'):
 if r['mode']=='close':v=max(0,-r['position'])
 elif r['xs']==0:v=0
 elif r['amt']<0:v=1000
 else:v=r['xs']*10+max(0,-r['position'])
 check('xs_orders/'+str((r['amt'],r['code'],r['position'],r['mode'])),[x['vol'] for x in r['requests']]==([v] if v else []))
xs=read('libstrategy_comm5.xs_validation.json');check('xs/random_cases',xs['status']=='PASS' and len(xs['random_cases'])==121)
for row in xs['edge_cases']:
 n=row['name'];v=row['result']
 if n in ['bad_lags','fraction_lags','bad_half_life']:check('xs/'+n,'error' in v)
 elif n in ['empty','missing','no_path','same_day','raw_code_key']:check('xs/'+n,all(x==1 for x in v['mult'].values()))
 elif n=='ties':check('xs/ties',list(v['mult'].values())==[3,2,2,1,1,1,0,0,0,0])
 elif n=='last_duplicate':check('xs/last_duplicate',v['mult']['AA']==3 and v['mult']['JJ']==2)
 elif n=='invalid_rows':check('xs/invalid_rows',v['mult']['AA']==0 and v['mult']['JJ']==3)
for r in read('negative_pending_summary.json'):check(r['k']+'/negative_pending',r['returncode']==134 and r['capacity_overflow'])
for p in R.glob('*.tree_callbacks.json'):
 d=read(p.name);check(p.stem,[bool(r['result']['ret']) for r in d]==[False,True,True,False] and [len(r['tree']['stats'][0]['pairs']) for r in d]==[0,1,2,3])
(R/'new_verification_summary.json').write_text(json.dumps(dict(checks=checks,passed=len(checks),total=len(checks)),indent=2));print(len(checks),'receipt checks PASS')
