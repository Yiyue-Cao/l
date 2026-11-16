"""Linux parser probes. Trading/context SDK functions abort; logs are no-op.
No signal/depth/order callbacks, no market data, no backtest engine.
Each library runs in a separate process with bounded lifetime.
"""
from pathlib import Path
import ctypes as C, struct, subprocess, re, os, sys, json

root=Path(__file__).resolve().parent
base=root.parent
meta=json.loads((root/'config_probe_meta.json').read_text())
if len(sys.argv)==1:
    names=set()
    for k in meta:
        names.update(re.findall(r'\bU (fb_ctx_\w+)',subprocess.check_output(['nm','-D',str(base/(k+'.so'))],text=True)))
    source='#include <stdlib.h>\n#include <stdio.h>\n'
    for name in sorted(names):
        body='' if name.startswith('fb_ctx_log_') else 'fprintf(stderr,"unexpected SDK call: '+name+'\\n");abort();'
        source+='void '+name+'(void){'+body+'}\n'
    (root/'sdk_stubs.c').write_text(source)
    subprocess.run(['gcc','-shared','-fPIC','-O2','-Wl,-soname,libfuture_backtest.so',str(root/'sdk_stubs.c'),'-o',str(root/'sdk_stubs.so')],check=True)
    receipt=[]
    for k in meta:
        try:
            r=subprocess.run([sys.executable,__file__,k],capture_output=True,text=True,timeout=60)
            (root/(k+'.probe.log')).write_text(r.stdout+r.stderr)
            receipt.append(dict(library=k,exit_code=r.returncode))
            print(k,r.returncode,r.stdout[-160:].strip(),flush=True)
        except subprocess.TimeoutExpired:
            receipt.append(dict(library=k,error='timeout'))
    (root/'config_probe_receipt.json').write_text(json.dumps(receipt,indent=2))
    sys.exit()

k=sys.argv[1];m=meta[k]
stub=C.CDLL(str(root/'sdk_stubs.so'),mode=os.RTLD_GLOBAL)
lib=C.CDLL(str(base/(k+'.so')),mode=os.RTLD_NOW)
lib.create_strategy.restype=C.c_void_p
loadbase=C.cast(lib.create_strategy,C.c_void_p).value-m['create']
begin=C.CFUNCTYPE(C.c_uint64,C.c_void_p,C.c_void_p)(loadbase+m['begin'])
keep=[]

def parse(text):
    raw=C.create_string_buffer(text.encode());ctx=(C.c_ubyte*0x100)()
    struct.pack_into('<QQQ',ctx,0x18,len(text),C.addressof(raw),len(text))
    plugin=lib.create_strategy();state=C.c_void_p.from_address(plugin).value
    err=begin(state,ctx)
    keep.extend([raw,ctx,plugin])
    if err:return None
    return C.string_at(state,m['size'])

def readable(ptr,n):
    if n==0:return b''
    if not ptr or n>100000:return None
    for line in Path('/proc/self/maps').read_text().splitlines():
        bounds,perm,*_=line.split()
        if not perm.startswith('r'):continue
        lo,hi=(int(x,16) for x in bounds.split('-'))
        if lo<=ptr and ptr+n<=hi:return C.string_at(ptr,n)
    return None

def string_at(buf,off):
    cap,ptr,n=struct.unpack_from('<QQQ',buf,off)
    if cap>>63:return {'option_or_sentinel':hex(cap)}
    raw=readable(ptr,n)
    if raw is None:return {'unresolved_string':True}
    try:return raw.decode()
    except UnicodeDecodeError:return {'bytes':raw.hex()}

prefix='enable_xs = false\n' if k=='libstrategy_comm5' else ''
if k in ['libstrategy_sos5','libstrategy_sos6']:
    prefix='watcher_strategy_name="probe"\nwatcher_account_name="probe"\n'
    prefix+='section1 = {insts=["IF"],ranks=[1],signal_all="0",trade_mode="IAP"}\n'
    prefix+='section2 = {insts=["IF"],ranks=[1],signal_all="0",trade_mode="IAP"}\n'
    prefix+='section3 = {insts=["IF"],ranks=[1],signal_all="0",trade_mode="IAP"}\n'
    (root/(k+'.baseline.toml')).write_text(prefix)
baseline=parse(prefix);second=parse(prefix)
if baseline is None or second is None:raise RuntimeError('baseline parse failed')
stable={i for i in range(m['size']) if baseline[i]==second[i]}
marker='probe_marker_871619';rows=[]
has_low='low_long_open_threshold' in m['fields']
for field_index,name in enumerate(m['fields']):
    if name in ['phase1','phase2','phase3','section1','section2','section3']:
        rows.append(dict(field=name,status='nested_not_probed'));continue
    if name=='enable_xs':
        rows.append(dict(field=name,status='forced_false_for_isolation'));continue
    found=None
    number=100.125+field_index;number2=1000.625+field_index
    string_value={'gate_taker_veto_mode':'downgrade','gate_taker_veto_scope':'taker_only','gate_maker_mode':'native_deepen','gate_maker_scope':'all_passive','gate_cancel_mode':'on','gate_wait_mode':'barrier','phase_threshold_mode':'fixed_rmb'}.get(name,marker)
    for kind,value in [('f64',str(number)),('integer','173'),('bool','true'),('string',json.dumps(string_value)),('vec_f64','[123.125,124.125]')]:
        seed='\n'.join(line for line in prefix.splitlines() if not line.startswith(name+'='))+'\n'
        buf=parse(seed+name+' = '+value+'\n')
        if buf is None:continue
        offsets=[];defaults=[]
        if kind=='f64':
            needle=struct.pack('<d',number)
            buf2=parse(seed+name+' = '+str(number2)+'\n')
            offsets=[i for i in range(0,m['size']-7,8) if buf[i:i+8]==needle and buf2 is not None and buf2[i:i+8]==struct.pack('<d',number2)]
            if has_low:
                offsets=[i for i in offsets if (i>=0x40 if not name.startswith('low_') else i<0x40 and struct.unpack_from('<Q',buf,i-8)[0]==1)]
            defaults=[dict(value=struct.unpack_from('<d',baseline,i)[0],raw_hex=baseline[i:i+8].hex(),preceding_word=baseline[max(0,i-8):i].hex()) for i in offsets]
            if has_low and name.startswith('low_'):
                kind='option_f64'
                for i,d in zip(offsets,defaults):
                    d['present']=bool(struct.unpack_from('<Q',baseline,i-8)[0])
                    if not d['present']:d['value']=None
        elif kind=='integer':
            fmt,step=('<I',4) if name=='score_thresholds_num' else ('<Q',8)
            offsets=[i for i in range(0,m['size']-step+1,step) if struct.unpack_from(fmt,buf,i)[0]==173]
            defaults=[dict(value=struct.unpack_from(fmt,baseline,i)[0],raw_hex=baseline[i:i+step].hex()) for i in offsets]
        elif kind=='bool':
            alt=parse(seed+name+' = false\n')
            if alt is not None:
                offsets=[i for i in stable if buf[i]==1 and alt[i]==0]
                if has_low:offsets=[i for i in offsets if i>=0x40]
                defaults=[dict(value=bool(baseline[i]),raw_hex=baseline[i:i+1].hex()) for i in offsets]
        elif kind=='string':
            for i in range(0,m['size']-23,8):
                cap,ptr,n=struct.unpack_from('<QQQ',buf,i)
                if cap==len(string_value) and n==len(string_value) and readable(ptr,n)==string_value.encode():offsets.append(i)
            defaults=[dict(value=string_at(baseline,i),raw_hex=baseline[i:i+24].hex()) for i in offsets]
        else:
            for i in range(0,m['size']-23,8):
                cap,ptr,n=struct.unpack_from('<QQQ',buf,i)
                if n==2 and cap>=n and readable(ptr,16)==struct.pack('<2d',123.125,124.125):offsets.append(i)
            for i in offsets:
                cap,ptr,n=struct.unpack_from('<QQQ',baseline,i);raw=readable(ptr,n*8)
                defaults.append(dict(value=list(struct.unpack('<'+'d'*n,raw)) if raw is not None else None))
        if offsets:
            found=dict(field=name,status='mapped',kind=kind,state_offsets=[hex(i) for i in offsets],defaults=defaults);break
    rows.append(found or dict(field=name,status='unresolved_or_validated_enum'))
result=dict(library=k,state_bytes=m['size'],begin_elf=hex(m['begin']),scope='actual TOML parsing; f64 verified with two distinct markers; Option None payload excluded; non-log SDK calls abort',baseline_toml=prefix,fields=rows)
(root/(k+'.config_layout.json')).write_text(json.dumps(result,ensure_ascii=False,indent=2))
print('mapped',sum(r['status']=='mapped' for r in rows),'of',len(rows))
