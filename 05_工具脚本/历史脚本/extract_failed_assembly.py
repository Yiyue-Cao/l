from pathlib import Path
import re,json
b=Path('REMOTE_WORKSPACE/tmp/1008/l/通用程序_stockidx_20261114/analysis');result=[]
for n in ['future_backtest','future_backtest_meta_runner','future_backtest_runner']:
 d=b/n;bad={}
 for l in (d/'decompiled_normalized/index.tsv').read_text().splitlines():
  a,s,name=l.split('\t',2)
  if s!='OK':bad[a]=name
 sizes={}
 for l in (d/'symbols.txt').read_text().splitlines():
  c=l.split(None,3)
  if len(c)==4 and c[0] in bad:sizes[c[0]]=int(c[1],16)
 lines=(d/'assembly.txt').read_text().splitlines();out=d/'failed_function_assembly';out.mkdir(exist_ok=True)
 for a,name in bad.items():
  start=int(a,16);end=start+sizes[a];selected=[]
  for l in lines:
   m=re.match(r'^\s*([0-9a-f]+):',l)
   if m and start<=int(m[1],16)<end:selected.append(l)
  (out/(a+'.asm')).write_text('# '+name+'\n# ELF '+a+' bytes '+str(sizes[a])+'\n'+'\n'.join(selected)+'\n')
  reason=(d/'decompiled_normalized'/(a+'.c')).read_text().split('\n',1)[1].strip()
  result.append(dict(file=n,address=a,name=name,bytes=sizes[a],instruction_lines=len(selected),decompiler_error=reason,assembly='analysis/'+n+'/failed_function_assembly/'+a+'.asm'))
(b.parent/'未完整反编译函数.json').write_text(json.dumps(result,ensure_ascii=False,indent=2));print(json.dumps(result,ensure_ascii=False,indent=2))
