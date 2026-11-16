from event_probe import *
libc=C.CDLL(None);libc.malloc.argtypes=[Q];libc.malloc.restype=P

def owned_string(s):
 b=s.encode();p=libc.malloc(len(b));C.memmove(p,b,len(b));a=buf(24);struct.pack_into('<3Q',a,0,len(b),p,len(b));return a

def new(o,t=(2.,0.,-2.,0.),alts=(),window=10000):
 tree=buf(80);th=(D*4)(*t);v=buf(24);p=libc.malloc(max(1,len(alts)*32))
 for i,z in enumerate(alts):C.memmove(p+32*i,struct.pack('<4d',*z),32)
 struct.pack_into('<3Q',v,0,len(alts),p,len(alts))
 C.CFUNCTYPE(P,P,P,P,D)(o['base']+addr(o,'SignalPairsTree::new'))(tree,th,v,window)
 return tree

def snapshot(o,tree,target=1000.):
 out=buf(48);C.CFUNCTYPE(P,P,P,D)(o['base']+addr(o,'SignalPairsTree::find_nearest_pair_median_threshold'))(out,tree,target)
 sel=struct.unpack('<QQ4d',out);root=Q.from_buffer(tree,32).value;height=Q.from_buffer(tree,40).value
 assert height==0,'fixture must fit leaf BTreeMap';n=C.c_ushort.from_address(root+0x58a).value;stats=[]
 for i in range(n):
  key=Q.from_address(root+8+i*8).value;a=root+96+i*120;cap,p,head,size=struct.unpack('<4Q',C.string_at(a,32));pairs=[]
  for j in range(size):
   q=p+((head+j)%cap)*104
   pairs.append(dict(stamp=D.from_address(q).value,open_t=D.from_address(q+16).value,close_t=D.from_address(q+32).value,open_s=D.from_address(q+48).value,close_s=D.from_address(q+64).value,side=C.c_ubyte.from_address(q+96).value,closed=C.c_ubyte.from_address(q+97).value))
  stats.append(dict(key=key,thresholds=list(struct.unpack('<4d',C.string_at(a+88,32))),window=D.from_address(a+32).value,pairs=pairs))
 return dict(selected=sel,stats=stats)

def update(o,tree,code,t,s):
 C.CFUNCTYPE(None,P,P,D,D)(o['base']+addr(o,'SignalPairsTree::update'))(tree,owned_string(code),t,s)

if __name__=='__main__':
 o=create('libstrategy_'+(sys.argv[1] if len(sys.argv)>1 else 'sm4'),'signal_all="A"\n');tree=new(o,alts=[(3.,-1.,-3.,1.),(1.,1.,-1.,-1.)]);rows=[]
 for code,t,s in [('IF',0,2),('IH',10,2),('IF',100,2),('IF',1000,0),('IF',2000,0),('IH',3000,0),('IF',4000,-2),('IF',5000,0),('IF',20000,0),('IF',20001,2),('IF',20002,0)]:
  update(o,tree,code,t,s);v=snapshot(o,tree);rows.append(dict(code=code,t=t,s=s,**v));print(code,t,s,json.dumps(v),flush=True)
 (R/(o['k']+'.tree_exploration.json')).write_text(json.dumps(rows,indent=2))
