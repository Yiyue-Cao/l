import ctypes as C,json,struct,os,re,sys,subprocess
from pathlib import Path
R=Path(__file__).resolve().parent;B=R.parent;meta=json.loads((R/'config_probe_meta.json').read_text())
if len(sys.argv)==1:
 for k in meta:
  if not k.startswith('libstrategy_comm'):continue
  p=subprocess.run([sys.executable,__file__,k],capture_output=True,text=True,timeout=30);print(k,p.returncode,p.stdout.strip(),p.stderr[:200],flush=True)
 sys.exit()
k=sys.argv[1];syms=(B/'analysis'/k/'symbols.txt').read_text().splitlines();initlines=[l for l in syms if l.endswith('once_cell::imp::OnceCell<T>::initialize')];assert len(initlines)==1,initlines
stub=C.CDLL(str(R/'sdk_stubs.so'),mode=os.RTLD_GLOBAL);lib=C.CDLL(str(B/(k+'.so')),mode=os.RTLD_NOW);base=C.cast(lib.create_strategy,C.c_void_p).value-meta[k]['create'];init=C.CFUNCTYPE(None,C.c_void_p,C.c_void_p)(base+int(initlines[0].split()[0],16));result={}
for group in ['G1_LOW','G2_HIGH']:
 lines=[l for l in syms if l.endswith('::K1_MAP_'+group)];assert len(lines)==1,lines;off=int(lines[0].split()[0],16);addr=base+off;init(addr,addr);ctrl,mask,left,count=struct.unpack('<4Q',C.string_at(addr,32));assert 0<count<100000 and mask<200000
 vals={}
 for i in range(mask+1):
  if C.c_uint8.from_address(ctrl+i).value<128:
   bucket=ctrl-(i+1)*16;vals[str(C.c_uint32.from_address(bucket).value)]=C.c_double.from_address(bucket+8).value
 assert len(vals)==count
 result[group]=dict(sorted(vals.items(),key=lambda x:int(x[0])))
(R/(k+'.k1_maps.json')).write_text(json.dumps(result,indent=2));print({g:len(v) for g,v in result.items()})
