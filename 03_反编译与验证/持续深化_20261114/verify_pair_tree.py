from probe_pair_tree import *
import random,statistics,subprocess

def run(k):
 o=create('libstrategy_'+k,'signal_all="A"\n');receipts=[];rng=random.Random(20261114)
 fixtures=[((2.,0.,-2.,0.),[(3.,-1.,-3.,1.),(1.,1.,-1.,-1.)],w) for w in [0.,1.,100.,10000.,-1.]]+[((0.,0.,0.,0.),[(1.,0.,-1.,0.)],100.)]
 for z,(initial,alts,window) in enumerate(fixtures):
  tree=new(o,initial,alts,window);ths=[initial]+alts;states=[{} for _ in ths];queues=[[] for _ in ths];t=0.
  for i in range(400):
   t+=rng.choice([0,1,10,100,10000,-2]);code=rng.choice(['IF','IH','IC']);s=rng.choice([-3.,-2.,-1.,0.,1.,2.,3.]);target=rng.choice([0.,1.,10.,100.,1000.,10000.]);update(o,tree,code,t,s)
   for j,(lo,lc,so,sc) in enumerate(ths):
    st=states[j].get(code)
    if st is not None and ((st[0]==0 and s<=lc)or(st[0]==1 and s>=sc)):
     side,ot,os=st;queues[j].append(dict(stamp=t,open_t=ot,close_t=t,open_s=os,close_s=s,side=side,closed=1));states[j][code]=None
     while queues[j] and t-queues[j][0]['stamp']>window:queues[j].pop(0)
    if states[j].get(code) is None:
     if s>=lo:states[j][code]=(0,t,s)
     elif s<=so:states[j][code]=(1,t,s)
   got=snapshot(o,tree,target)
   for j,x in enumerate(got['stats']):assert x['pairs']==queues[j],(k,z,i,j,x['pairs'],queues[j])
   sel=0
   if queues[0]:
    choices=[(abs(statistics.median([p['close_t']-p['open_t'] for p in q])-target),j) for j,q in enumerate(queues) if q]
    sel=min(choices)[1]
   assert got['selected'][0]==sel,(k,z,i,got['selected'],sel)
   receipts.append(dict(fixture=z,event=i,t=t,code=code,s=s,target=target,selected=sel,counts=[len(q) for q in queues]))
 (R/('libstrategy_'+k+'.tree_validation.json')).write_text(json.dumps(dict(fixtures=fixtures,steps=receipts,events=len(receipts),status='PASS'),indent=2));print(k,len(receipts),'PASS')
if __name__=='__main__':
 if len(sys.argv)>1:run(sys.argv[1])
 else:
  for k in ['sm4','tm6']:
   p=subprocess.run([sys.executable,__file__,k],capture_output=True,text=True,timeout=30);(R/('libstrategy_'+k+'.tree_validation.log')).write_text(p.stdout+p.stderr);print(k,p.returncode,p.stdout,p.stderr[-1200:])
