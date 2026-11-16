from event_probe import *
def I(n,v):C.c_int.in_dll(stub,'probe_'+n).value=v
def D(n,v):C.c_double.in_dll(stub,'probe_'+n).value=v
k=sys.argv[1];phaseoff=0x419 if k.endswith('5') else 0x400
cfg='section1_to_2_pnl=10.0\nsection1_to_3_pnl=20.0\nsection2_to_1_pnl=5.0\nsection2_to_3_pnl=20.0\nsection3_to_1_pnl=5.0\n'
def reference(p,z,c):
 if p==1:return 2 if z>=10 and c>0 else (3 if z>20 and c<0 else 1)
 if p==2:return 1 if z<5 else (3 if z>20 and c<0 else 2)
 return 1 if z<5 else 3
rows=[]
for p in [1,2,3]:
 for z in [4.,5.,9.,10.,20.,21.]:
  for c in [-1.,0.,1.]:
   for source in ['free_cash','meta_override']:
    o=create(k,cfg);C.c_ubyte.from_address(o['state']+phaseoff).value=p
    I('published_rc',1);D('published_value',z);I('key_mask',-1)
    D('free_cash',c if source=='free_cash' else -c);I('meta_rc',0 if source=='free_cash' else 1)
    md=(C.c_ubyte*104).in_dll(stub,'probe_meta_data');C.memset(C.addressof(md),0,104);struct.pack_into('<d',md,0x60,c)
    setup_depth();I('depth_rc',-1);r=signal(o);actual=C.c_ubyte.from_address(o['state']+phaseoff).value;expected=reference(p,z,c)
    row=dict(initial=p,z=z,c=c,source=source,actual=actual,expected=expected,result=r,passed=actual==expected);rows.append(row)
    if not row['passed']:print('MISMATCH',row,flush=True)
(R/(k+'.phase_sequences.json')).write_text(json.dumps(rows,indent=2));print(k,len(rows),sum(x['passed'] for x in rows),flush=True)
if k.endswith('6'):
 rows=[]
 for mask in range(16):
  o=create(k,cfg);before=struct.unpack('<12d',C.string_at(o['state']+0x3a0,96));I('key_mask',mask);I('published_rc',0);I('meta_rc',0);D('free_cash',1);setup_depth();I('depth_rc',-1)
  r=signal(o);after=struct.unpack('<12d',C.string_at(o['state']+0x3a0,96));expected=tuple([11.,12.,13.,14.]*3) if mask==15 else before
  rows.append(dict(mask=mask,before=before,after=after,expected=expected,result=r,passed=after==expected))
 (R/(k+'.threshold_presence.json')).write_text(json.dumps(rows,indent=2));print('threshold',len(rows),sum(x['passed'] for x in rows))
