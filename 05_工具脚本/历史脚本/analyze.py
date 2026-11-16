import pathlib,subprocess,os,json,concurrent.futures
base=pathlib.Path('REMOTE_WORKSPACE/tmp/1008/l'); out=base/'analysis';out.mkdir(exist_ok=True)
tools=pathlib.Path('REMOTE_WORKSPACE/intraday/analysis_lwl_interface_recovery_20261109/tools')
os.environ['JAVA_HOME']=str(tools/'jdk-21.0.2');os.environ['PATH']=os.environ['JAVA_HOME']+'/bin:'+os.environ['PATH']
def run(p):
 d=out/p.stem;d.mkdir(exist_ok=True);(d/'project').mkdir(exist_ok=True)
 for name,cmd in [('symbols.txt',['nm','-S','-C',str(p)]),('assembly.txt',['objdump','-d','-C','-M','intel',str(p)]),('elf.txt',['readelf','-a',str(p)]),('strings.txt',['strings','-a',str(p)])]:
  with (d/name).open('w') as f:subprocess.run(cmd,stdout=f,check=True)
 targets=[]
 for line in (d/'symbols.txt').read_text().splitlines():
  cols=line.split(None,3)
  if len(cols)==4 and cols[2] in ['t','T'] and ('strategy_' in cols[3] or cols[3] in ['on_signal','on_tick','on_order','on_trade','on_timer','create_strategy','destroy_strategy','init','on_init','on_book','on_bar']):targets.append(cols[0]+'\t'+cols[3])
 (d/'targets.tsv').write_text('\n'.join(targets)+'\n')
 cmd=[str(tools/'ghidra_11.3.2_PUBLIC/support/analyzeHeadless'),str(d/'project'),'strategy','-import',str(p),'-scriptPath',str(base),'-postScript','ExportStrategies.java',str(d/'decompiled'),str(d/'targets.tsv'),'-analysisTimeoutPerFile','240','-max-cpu','2']
 with (d/'ghidra.log').open('w') as f: r=subprocess.run(cmd,stdout=f,stderr=subprocess.STDOUT)
 print(p.name,r.returncode,len(targets),flush=True)
 return {'file':p.name,'exit_code':r.returncode,'target_count':len(targets)}
with concurrent.futures.ThreadPoolExecutor(2) as ex: results=list(ex.map(run,sorted(base.glob('libstrategy*.so'))))
(out/'receipt.json').write_text(json.dumps(results,indent=2))
