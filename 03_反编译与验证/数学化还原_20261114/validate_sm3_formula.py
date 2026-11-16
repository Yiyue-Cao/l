import ctypes as C,json,struct,os,random,math
from pathlib import Path
R=Path(__file__).resolve().parent;B=R.parent;meta=json.loads((R/'config_probe_meta.json').read_text());D=C.c_double;P=C.c_void_p;U=C.c_uint8
stub=C.CDLL(str(R/'sdk_stubs.so'),mode=os.RTLD_GLOBAL);lib=C.CDLL(str(B/'libstrategy_sm3.so'),mode=os.RTLD_NOW);base=C.cast(lib.create_strategy,P).value-meta['libstrategy_sm3']['create'];fn=C.CFUNCTYPE(P,P,U,P,C.c_int,*([D]*7))(base+0x84dc0)
rng=random.Random(3);fails=[]
def rnd(x):return math.copysign(math.floor(abs(x)+.5),x)
for i in range(2400):
 a=100+rng.uniform(0,.2);b=100-rng.uniform(0,.2);m=(a+b)/2;sm=rng.uniform(-30,30);sp=rng.uniform(-30,30);act=i%4;bs=[-1,0,1][i%3];buy=act in [0,3];direction=1 if buy else -1;z=direction*bs;th=[3.,-1.,-3.,1.];edge=rnd([sp-th[0],th[1]-sm,th[2]-sm,sp-th[3]][act]*100)/100;h=rnd((a-b)/m*.5*10000*10)/10;mx=.002;bas=.0001;bias=.0003
 maker=min(b+.2,a-.2) if buy else max(a-.2,b+.2)
 if z<0:typ=1;price=maker
 elif edge>h:typ=0;r=max(bas,min(mx,(edge-h)*1e-4));price=a*(1+r) if buy else b*(1-r)
 elif edge>0:typ=2;price=m
 elif z==0:typ=1;price=maker
 else:typ=3;price=m*(1-direction*1e-4*min(abs(edge),1e4*bias))
 out=(C.c_ubyte*48)();t=(D*4)(*th);fn(out,act,t,bs,sm,sp,a,b,mx,bas,bias);got=(out[8],struct.unpack_from('<d',out)[0])
 if got[0]!=typ or not math.isclose(got[1],price,rel_tol=1e-13,abs_tol=1e-12):fails.append(dict(i=i,input=[act,bs,sm,sp,a,b],actual=got,expected=[typ,price]))
(R/'libstrategy_sm3.quote_price_validation.json').write_text(json.dumps(dict(cases=2400,passed=2400-len(fails),failures=fails[:10],scope='all 4 actions, B=-1/0/1, finite random values; original ELF vs full piecewise model'),indent=2));print('passed',2400-len(fails),'/2400')
