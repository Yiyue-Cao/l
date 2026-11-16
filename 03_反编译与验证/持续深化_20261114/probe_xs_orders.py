from probe_xs import *
from pending_probe import pending,outputs,I,F
path=R/'synthetic_xs_orders.csv';codes=[chr(65+i)*2 for i in range(10)];path.write_text(''.join('2026-11-12,%s,%s\n'%(c,i) for i,c in enumerate(codes)))
base='signal_all="A"\nenable_xs=true\ndaily_pnl_path="'+str(path)+'"\nxs_date="2026-11-14"\ntouch_gate=false\nmax_single_add_vol=1000.0\nmax_single_net_vol=1000.0\nmax_single_close_vol=1000.0\nmax_single_close_amt=-1.0\n'
rows=[]
for amt in [10100.,-1.]:
 for c in ['AA','EE','HH','JJ']:
  for pos in [0.,-5.]:
   for mode in ['open','close']:
    o=create('libstrategy_comm5',base+('long_open_threshold=100000.0\nshort_open_threshold=-100000.0\nlong_close_threshold=-100000.0\nshort_close_threshold=0.0\n' if mode=='close' else '')+'max_single_add_amt='+str(amt)+'\nmax_single_net_amt='+str(amt)+'\n',codes);pending([]);setup_depth();raw=(C.c_ubyte*232).in_dll(stub,'probe_depth_data');[struct.pack_into('<d',raw,40+i*16,1000.) for i in range(5)];F('position',pos);I('order_rc',0);I('cancel_rc',0);r=signal(o,code=c,t=1000.,s=1000.);rows.append(dict(mode=mode,amt=amt,code=c,position=pos,xs=mult(o,c),result=r,**outputs()))
(R/'libstrategy_comm5.xs_orders.json').write_text(json.dumps(rows,indent=2));print([(r['amt'],r['code'],r['position'],r['mode'],[x['vol'] for x in r['requests']]) for r in rows])
