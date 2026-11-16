from pending_probe import *
import subprocess,math
class Counts(C.Structure):_fields_=[('buy',Q),('sell',Q)]
def ids(v):
 cap,p,n=struct.unpack('<3Q',v)
 return [C.string_at(Q.from_address(p+24*i+8).value,Q.from_address(p+24*i+16).value).decode() for i in range(n)]
def vec(o,values=()):
 pending([],values);v=buf(24);code=C.create_string_buffer(b'IF');keep.append(code)
 C.CFUNCTYPE(P,P,P,P,Q)(o['base']+addr(o,'StrategyContext::cancel_pending_ids'))(v,o['ctx'],code,2)
 return v
def count(o,excluded=()):
 a=buf(24*max(1,len(excluded)))
 for i,s in enumerate(excluded):string(a,24*i,s)
 x=C.CFUNCTYPE(Counts,P,P,Q,P,Q)(o['base']+addr(o,'::live_pending_counts'))(o['ctx'],b'IF',2,a,len(excluded))
 return [x.buy,x.sell]
def run(k):
 o=create(k,'signal_all="A"\n');rows=[];maker=any(x['name'].endswith('::cancel_side') for x in o['m']['functions'])
 for side in [0,1]:
  for x in [98.,99.,100.,101.,102.,float('nan')]:
   for fail in [-1,0,1]:
    v=vec(o,['EX']);r=[dict(id='OPP',side=side^1),dict(id='TEST',side=side,price=x),dict(id='TEST',side=side,price=x),dict(id='EX',side=side,price=200 if side==0 else 0),dict(id='TAIL',side=side^1)]
    pending(r);I('cancel_fail_at',fail)
    result=C.CFUNCTYPE(Q,P,P,Q,C.c_ubyte,P,D,D)(o['base']+addr(o,'::cancel_order_use_range'))(o['ctx'],b'IF',2,side,v,100.,1.)
    expected=['OPP','TAIL']
    hit=(x>101) if side==0 else x<99
    if hit:expected.append('TEST')
    attempted=expected if fail<0 or fail>=len(expected) else expected[:fail+1]
    good=expected if fail<0 or fail>=len(expected) else expected[:fail]
    got=outputs();assert got['cancel_attempts']==attempted,(k,side,x,fail,got,attempted)
    assert ids(v)==['EX']+good,(k,ids(v),good)
    assert bool(result)==(0<=fail<len(expected))
    rows.append(dict(kind='range',side=side,price=str(x),fail_at=fail,error=bool(result),ids_after=ids(v),**got))
 for filled in [0.,1.,2.,3.]:
  for cancelled in [[],['B'],['S']]:
   for excluded in [[],['B'],['S'],['B','S']]:
    pending([dict(id='B',side=1,vol=2,filled=filled),dict(id='S',side=0,vol=2,filled=filled)],cancelled)
    got=count(o,excluded);exp=[int('B' not in cancelled+excluded),int('S' not in cancelled+excluded)];assert got==exp,(k,got,exp)
    rows.append(dict(kind='live_count',filled=filled,cancelled=cancelled,excluded=excluded,count=got))
 pending([dict(id='DUP',side=1),dict(id='DUP',side=1)]);assert count(o)==[2,0]
 rows.append(dict(kind='duplicate_live_count',count=[2,0]))
 (R/(k+'.pending_helpers.json')).write_text(json.dumps(rows,indent=2));print(k,len(rows),'PASS')
if __name__=='__main__':
 if len(sys.argv)>1:run(sys.argv[1])
 else:
  summary=[]
  for k,m in meta.items():
   if not any(x['name'].endswith('::live_pending_counts') for x in m['functions']):continue
   p=subprocess.run([sys.executable,__file__,k],capture_output=True,text=True,timeout=20);(R/(k+'.pending_helpers.log')).write_text(p.stdout+p.stderr);print(k,p.returncode,p.stdout[-100:],p.stderr[-300:]);summary.append(dict(k=k,returncode=p.returncode))
  (R/'pending_helpers_summary.json').write_text(json.dumps(summary,indent=2))
