from pathlib import Path
import ctypes as C,struct,json,os,sys,hashlib
R=Path(__file__).resolve().parent;B=R.parent;meta=json.loads((R.parent/'事件状态验证_20261114/meta.json').read_text());keep=[]
stub=C.CDLL(str(R/'sdk_event_stubs.so'),mode=os.RTLD_GLOBAL);stub.probe_trace.restype=C.c_char_p;stub.probe_fault_handler()
P=C.c_void_p;D=C.c_double;Q=C.c_uint64

def buf(n):
 x=(C.c_ubyte*n)();keep.append(x);return x

def string(b,off,s):
 raw=s.encode();a=C.create_string_buffer(raw);keep.append(a);struct.pack_into('<QQQ',b,off,len(raw),C.addressof(a),len(raw))

def create(k,config='',codes_list=None):
 m=meta[k];lib=C.CDLL(str(B/(k+'.so')),mode=os.RTLD_NOW);lib.create_strategy.restype=P
 base=C.cast(lib.create_strategy,P).value-m['create'];plugin=lib.create_strategy();state=P.from_address(plugin).value
 ctx=buf(0x100);prefix='enable_xs=false\n' if k=='libstrategy_comm5' and 'enable_xs' not in config else ''
 if k in ['libstrategy_sos5','libstrategy_sos6']:
  prefix='watcher_strategy_name="probe"\nwatcher_account_name="probe"\n'+''.join('section%d={insts=["IF"],ranks=[1],signal_all="A",trade_mode="IAP"}\n'%i for i in [1,2,3])
 codes_list=codes_list or ['IF'];codes=buf(24*len(codes_list))
 for i,code in enumerate(codes_list):string(codes,24*i,code)
 struct.pack_into('<QQQ',ctx,0,len(codes_list),C.addressof(codes),len(codes_list))
 string(ctx,0x18,prefix+config);err=C.CFUNCTYPE(Q,P,P)(base+m['begin'])(state,ctx)
 if err:
  words=struct.unpack('<16Q',C.string_at(err,128));details=[]
  maps=[tuple(int(x,16) for x in line.split()[0].split('-')) for line in Path('/proc/self/maps').read_text().splitlines() if 'r' in line.split()[1]]
  for i in range(15):
   p,n=words[i:i+2]
   if 0<n<2048 and any(a<=p and p+n<b for a,b in maps):
    msg=C.string_at(p,n).decode(errors='replace')
    if msg.startswith('[custom]') or msg.startswith('[comm5]'):details.append(msg)
  raise ValueError('on_begin failed '+hex(err)+' '+repr(details))
 # Cached Rust StrategyPara and trade-code vector, avoiding unverified C configuration layout.
 para=buf(0x38);names=buf(24);string(names,0,'A');struct.pack_into('<QQQ',para,0,1,C.addressof(names),1)
 struct.pack_into('<Q',ctx,0x38,C.addressof(para))
 return dict(k=k,m=m,lib=lib,base=base,state=state,ctx=ctx,para=para)

def addr(o,suffix):return next(x['address'] for x in o['m']['functions'] if x['name'].endswith(suffix))
def event(name='A',code='IF',t=1000,s=2.):
 a=buf(0x180)
 for off,v in [(0,code),(0x18,'IF'),(0x30,''),(0x48,name)]:string(a,off,v)
 struct.pack_into('<ddd',a,0x68,t,s,s);return a

def signal(o,**kw):
 a=event(**kw);stub.probe_reset();before=C.string_at(o['state'],o['m']['size']);f=C.CFUNCTYPE(Q,P,P,P)(o['base']+addr(o,'StrategyPlugin>::on_signal'));ret=f(o['state'],a,o['ctx']);after=C.string_at(o['state'],o['m']['size'])
 return dict(input=kw,ret=ret,trace=stub.probe_trace().decode().splitlines(),changed_offsets=[hex(i) for i,(x,y) in enumerate(zip(before,after)) if x!=y])

if __name__=='__main__':
 k=sys.argv[1];o=create(k,'signal_all="A"\n');rows=[]
 for case in [dict(name='OTHER'),dict(code='OTHER'),dict(name='A')]:
  print('CALL',case,flush=True);rows.append(signal(o,**case));print(rows[-1],flush=True)
 (R/(k+'.early_events.json')).write_text(json.dumps(rows,indent=2))

def setup_depth(t=1000,ask=101,bid=99):
 raw=(C.c_ubyte*232).in_dll(stub,'probe_depth_data');C.memset(C.addressof(raw),0,232)
 struct.pack_into('<d',raw,8,t)
 for i in range(5):
  struct.pack_into('<dd',raw,32+i*16,ask+i*.2,10)
  struct.pack_into('<dd',raw,112+i*16,bid-i*.2,10)
 C.c_int.in_dll(stub,'probe_depth_rc').value=0;C.c_double.in_dll(stub,'probe_now').value=t

def depth_event(o,t=1000,ask=101,bid=99):
 d=buf(0x180);string(d,0x20,'IF');struct.pack_into('<d',d,0x40,t);struct.pack_into('<d',d,0x48,ask);struct.pack_into('<d',d,0x98,bid)
 stub.probe_reset();f=C.CFUNCTYPE(Q,P,P,P)(o['base']+addr(o,'StrategyPlugin>::on_depth'));ret=f(o['state'],d,o['ctx']);return dict(ret=ret,trace=stub.probe_trace().decode().splitlines())
