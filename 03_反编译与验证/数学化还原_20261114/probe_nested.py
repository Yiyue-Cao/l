import sys,runpy,json,struct
from pathlib import Path
R=Path(__file__).resolve().parent;B=R.parent
for k in ['libstrategy_comm4','libstrategy_comm4_1','libstrategy_comm5','libstrategy_sos5','libstrategy_sos6']:
 sys.argv=['probe_all_configs.py',k];g=runpy.run_path(str(R/'probe_all_configs.py'));parse=g['parse'];prefix=g['prefix'];baseline=g['baseline'];size=g['m']['size'];rows=[]
 groups=['phase1','phase2','phase3'] if 'comm' in k else ['section1','section2','section3']
 arrays=json.loads((B/'analysis'/k/'config_field_arrays.json').read_text()); fields=min(arrays,key=lambda x:len(x['fields']))['fields']
 for group in groups:
  seed='\n'.join(x for x in prefix.splitlines() if not x.startswith(group+' '))+'\n'
  required='' if 'comm' in k else 'insts=["IF"]\nranks=[1]\nsignal_all="0"\ntrade_mode="IAP"\n'
  empty=parse(seed+'['+group+']\n'+required)
  for j,f in enumerate(fields):
   if f in ['insts','ranks','signal_all','trade_mode','trade_code']:continue
   a=211.125+j;b=311.625+j
   vals=[parse(seed+'['+group+']\n'+required+f+'='+str(v)+'\n') for v in [a,b]]
   if any(x is None for x in vals):continue
   hits=[i for i in range(0,size-7,8) if vals[0][i:i+8]==struct.pack('<d',a) and vals[1][i:i+8]==struct.pack('<d',b)]
   if 'comm' in k:hits=[i for i in hits if i>=0x40 and struct.unpack_from('<Q',vals[0],i-8)[0]==1]
   rows.append(dict(field=group+'.'+f,state_offsets=[hex(i) for i in hits],default=[None if 'comm' in k and struct.unpack_from('<Q',empty,i-8)[0]==0 else struct.unpack_from('<d',empty,i)[0] for i in hits]))
 (R/(k+'.nested_config.json')).write_text(json.dumps(rows,ensure_ascii=False,indent=2));print(k,len(rows),flush=True)
