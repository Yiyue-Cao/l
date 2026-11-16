from event_probe import *
o=create('libstrategy_sm3_1','signal_all="A"\n');C.c_int.in_dll(stub,'probe_depth_rc').value=0;raw=(C.c_ubyte*232).in_dll(stub,'probe_depth_data');out=buf(0x200);s=C.create_string_buffer(b'IF');f=C.CFUNCTYPE(None,P,P,P,Q)(o['base']+addr(o,'StrategyContext::depth'));rows=[]
for off in [None]+list(range(32,232,8)):
 C.memset(C.addressof(raw),0,232)
 if off is not None:struct.pack_into('<d',raw,off,123.25)
 C.memset(C.addressof(out),0,512);f(out,o['ctx'],s,2);d=bytes(out[:0x108]);found=[hex(i) for i in range(len(d)-7) if d[i:i+8]==struct.pack('<d',123.25)]
 rows.append(dict(c_offset=off,rust_offsets=found,base_hex=d.hex() if off is None else None))
print(json.dumps(rows));(R/'depth_abi_probe.json').write_text(json.dumps(rows,indent=2))
