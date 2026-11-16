import os, subprocess, tempfile, json, pathlib, hashlib, concurrent.futures
root='/user/zli/hpc_user_liyueting/1/lyt_d/slurm/slurm_task/future_backtest_sweep__comm5_daily_comm32__6080f1554aa6'
dest=pathlib.Path('REMOTE_WORKSPACE/tmp/1008/l'); dest.mkdir(parents=True,exist_ok=True)
with tempfile.TemporaryDirectory(prefix='l_download_') as tmp:
 os.environ.update(JAVA_HOME='/usr/lib/jvm/java-11-openjdk-amd64',HADOOP_HOME='/opt/hadoop-auth',HADOOP_CONF_DIR='/opt/hadoop-auth/etc/hadoop',KRB5CCNAME='FILE:'+tmp+'/cc')
 try:
  with open('REMOTE_HOME/codex_dir/key.txt','rb') as key: subprocess.run(['kinit','hpc_user_shifangyi'],stdin=key,capture_output=True,check=True)
  listing=subprocess.check_output(['/opt/hadoop-auth/bin/hdfs','dfs','-ls','-R',root],text=True);(dest/'hdfs_listing.txt').write_text(listing)
  rows=[l.split() for l in listing.splitlines() if l.startswith('-')]
  rows=[r for r in rows if (pathlib.Path(r[-1]).name.startswith('libstrategy') and r[-1].endswith('.so')) or (int(r[4])<300000 and not r[-1].endswith('.csv') and '/comm5_xs_pnl_' not in r[-1])]
  def get(r):
   p=dest/pathlib.Path(r[-1]).relative_to(root);p.parent.mkdir(parents=True,exist_ok=True)
   if not p.exists(): subprocess.run(['/opt/hadoop-auth/bin/hdfs','dfs','-get',r[-1],str(p)],capture_output=True,check=True)
   assert p.stat().st_size==int(r[4])
   return dict(source=r[-1],relative=str(p.relative_to(dest)),bytes=p.stat().st_size,sha256=hashlib.sha256(p.read_bytes()).hexdigest())
  with concurrent.futures.ThreadPoolExecutor(4) as pool: records=list(pool.map(get,rows))
  (dest/'download_manifest.json').write_text(json.dumps(records,indent=2));print(json.dumps(records,indent=2))
 finally: subprocess.run(['kdestroy','-c',os.environ['KRB5CCNAME']],capture_output=True)
