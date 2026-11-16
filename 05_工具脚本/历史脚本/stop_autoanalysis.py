import subprocess,os,signal,json
from pathlib import Path
rows=[]
for line in subprocess.check_output(['ps','-eo','pid,ppid,args'],text=True).splitlines()[1:]:
 c=line.split(None,2)
 if len(c)==3:rows.append((int(c[0]),int(c[1]),c[2]))
roots=[pid for pid,ppid,cmd in rows if cmd in ['python3 REMOTE_WORKSPACE/tmp/1008/l/analyze_generic.py','python3 REMOTE_WORKSPACE/tmp/1008/l/repair_generic.py']]
pids=set(roots)
while True:
 extra={pid for pid,ppid,cmd in rows if ppid in pids}
 if extra<=pids:break
 pids |= extra
receipt=[{'pid':pid,'command':cmd} for pid,ppid,cmd in rows if pid in pids]
for pid in sorted(pids,reverse=True):
 try:os.kill(pid,signal.SIGTERM)
 except ProcessLookupError:pass
p=Path('REMOTE_WORKSPACE/tmp/1008/l/通用程序_stockidx_20261114/analysis/autoanalysis_replaced.json')
p.write_text(json.dumps({'reason':'Remaining large framework whole-program analysis replaced with symbol-bounded targeted decompilation; completed driver outputs preserved.','terminated_processes':receipt},indent=2));print('stopped own static-analysis processes',len(pids))
