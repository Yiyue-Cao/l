from event_probe import *
o=create('libstrategy_comm_mock','signal_all="A"\n');rows=[]
for kind,t,vol,price,pnl in [('D',1000,0,0,0),('O',1001,2,101,7),('D',1002,0,0,0),('O',1003,0,999,999),('D',1004,0,0,0),('O',1005,-1,99,-2),('D',1006,0,0,0)]:
 setup_depth(t);C.c_double.in_dll(stub,'probe_position').value=2;C.c_double.in_dll(stub,'probe_cost').value=98;stub.probe_reset()
 if kind=='O':
  a=buf(0x120)
  for off in [0,0x18,0x30]:string(a,off,'IF')
  for off,v in [(0x50,t),(0x60,vol),(0x68,price),(0x78,pnl),(0x80,10)]:struct.pack_into('<d',a,off,v)
  ret=C.CFUNCTYPE(Q,P,P,P)(o['base']+addr(o,'StrategyPlugin>::on_order'))(o['state'],a,o['ctx'])
 else:ret=depth_event(o,t)['ret']
 rows.append(dict(kind=kind,t=t,volume=vol,price=price,pnl=pnl,ret=ret,trace=stub.probe_trace().decode().splitlines()));print(rows[-1],flush=True)
(R/'libstrategy_comm_mock.publish_sequences.json').write_text(json.dumps(rows,indent=2))
