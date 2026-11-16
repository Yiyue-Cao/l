from probe_pending_helpers import *
if len(sys.argv)>1:
 o=create(sys.argv[1],'signal_all="A"\n');pending([]);I('pending_return',-1);print('CALL pending_orders with C return=-1',flush=True);inspect(o)
else:
 rows=[]
 for k,m in meta.items():
  if not any(x['name'].endswith('::live_pending_counts') for x in m['functions']):continue
  p=subprocess.run([sys.executable,__file__,k],capture_output=True,text=True,timeout=10);(R/(k+'.negative_pending.log')).write_text(p.stdout+p.stderr);rows.append(dict(k=k,returncode=p.returncode,capacity_overflow='capacity overflow' in p.stderr));assert p.returncode==134 and 'capacity overflow' in p.stderr
 (R/'negative_pending_summary.json').write_text(json.dumps(rows,indent=2));print(len(rows),'expected isolated panics verified')
