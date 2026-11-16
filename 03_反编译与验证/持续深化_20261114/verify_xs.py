from probe_xs import *
import random,math
rng=random.Random(20261114);codes=[chr(65+i)*2 for i in range(10)];path=R/'synthetic_xs_validation.csv';results=[]
def cfg(**kw):
 d=dict(signal_all='A',enable_xs=True,daily_pnl_path=str(path),xs_date='2026-11-14');d.update(kw)
 return ''.join(k+'='+json.dumps(v)+'\n' for k,v in d.items())
def read(o):return {c:mult(o,c+'2609') for c in codes}
def model(rows,date,lags,half,clip,min_pool=8,q3=.1,q2=.25,qb=.35):
 table={(d,c):p for d,c,p in rows if math.isfinite(p)};days=sorted({d for d,c in table if d<date},reverse=True)[:lags];scores={}
 for c in codes:
  vals=[(2**(-i/half),max(-clip,min(clip,table[d,c])) if clip>0 else table[d,c]) for i,d in enumerate(days) if(d,c)in table]
  if vals:scores[c]=sum(w*p for w,p in vals)/sum(w for w,p in vals)
 rank={c:i+1 for i,c in enumerate(sorted(scores,key=lambda c:(-scores[c],c)))};n=len(rank);n3=math.ceil(n*q3);n2=max(n3,math.ceil(n*q2));nb=math.ceil(n*qb)
 return {c:1. if n<min_pool or n2>=n-nb or c not in rank else 3. if rank[c]<=n3 else 2. if rank[c]<=n2 else 0. if rank[c]>n-nb else 1. for c in codes},scores
for i in range(120):
 lags=rng.choice([1,2,5,20]);half=rng.choice([.5,1.,3.,8.]);clip=rng.choice([0.,.7,4.]);mp=rng.choice([0.,8.,12.]);q3,q2,qb=rng.choice([(.1,.25,.35),(.2,.1,.1),(.4,.5,.5),(0.,0.,0.)]);rows=[]
 for day in range(1,17):
  for c in codes:
   if rng.random()<.25:continue
   rows.append(('2026-11-%02d'%day,c,rng.uniform(-10,10)))
 # duplicate overwrite and out-of-universe day: fixtures retain both lines.
 rows+=rows[:3];rows+=[('2026-11-13','ZZ',999.)]
 path.write_text('date,inst,pnl\n'+''.join('%s,%s,%.17g\n'%x for x in rows));o=create('libstrategy_comm5',cfg(ew_lags=float(lags),ew_half_life_days=half,xs_pnl_clip=clip,xs_min_pool=mp,xs_q3=q3,xs_q2=q2,xs_qb=qb),codes)
 got=read(o);expected,scores=model(rows,'2026-11-14',lags,half,clip,mp,q3,q2,qb);assert got==expected,(i,got,expected,scores)
 results.append(dict(case=i,lags=lags,half=half,clip=clip,min_pool=mp,quantiles=[q3,q2,qb],scores=scores,multipliers=got))
# Stateful file refresh and date rollover: callbacks must not recompute the initialized map.
rows=[('2026-11-12',c,float(i)) for i,c in enumerate(codes)];path.write_text('date,inst,pnl\n'+''.join('%s,%s,%s\n'%x for x in rows));o=create('libstrategy_comm5',cfg(),codes);initial=read(o)
path.write_text('date,inst,pnl\n'+''.join('2026-11-12,%s,%s\n'%(c,-i) for i,c in enumerate(codes)));events=[]
for t in [1000.,87400.,173800.]:
 setup_depth(t);events.append(signal(o,code='AA',t=t,s=1000.));events.append(depth_event(o,t));assert read(o)==initial
new_o=create('libstrategy_comm5',cfg(),codes);refreshed=read(new_o);assert refreshed!=initial
results.append(dict(case='file_rewrite_and_rollover',initial=initial,after_callbacks=read(o),after_new_on_begin=refreshed,events=events))
# Same score tie order, no header, invalid values, missing/empty path, date string comparison.
edge=[]
for name,content,opts in [
 ('ties',''.join('2026-11-12,%s,1\n'%c for c in reversed(codes)),{}),
 ('last_duplicate',''.join('2026-11-12,%s,%s\n'%(c,i) for i,c in enumerate(codes))+'2026-11-12,AA,100\n',{}),
 ('invalid_rows','date,inst,pnl\n'+''.join('2026-11-12,%s,%s\n'%(c,i) for i,c in enumerate(codes))+'bad\n2026-11-12,AA,nan\n2026-11-12,JJ,inf\n',{}),
 ('empty','',{}),('missing','',{'daily_pnl_path':str(R/'synthetic_missing_no_file.csv')}),('no_path','',{'daily_pnl_path':''}),
 ('same_day',''.join('2026-11-14,%s,%s\n'%(c,i) for i,c in enumerate(codes)),{}),
 ('raw_code_key',''.join('2026-11-12,%s2609,%s\n'%(c,i) for i,c in enumerate(codes)),{}),
 ('bad_lags','',{'ew_lags':0.}),('fraction_lags','',{'ew_lags':2.5}),('bad_half_life','',{'ew_half_life_days':0.})]:
 path.write_text(content)
 try:
  o=create('libstrategy_comm5',cfg(**opts),codes);result=dict(mult=read(o),suffixes={c:mult(o,c) for c in ['AA','AA2609','AA__2609','AA_2609','AA2609_','aa2609','UNKNOWN']})
 except ValueError as e:result=dict(error=str(e).split(' ',3)[-1])
 edge.append(dict(name=name,result=result))
(R/'libstrategy_comm5.xs_validation.json').write_text(json.dumps(dict(status='PASS',random_cases=results,edge_cases=edge),ensure_ascii=False,indent=2));print('XS',len(results),len(edge),'PASS');print(json.dumps(edge,ensure_ascii=False,indent=2))
