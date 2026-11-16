import os, subprocess, tempfile, json
roots=['/user/zli/hpc_user_liyueting/1/lyt_d/slurm/slurm_task/future_backtest_sweep__stockidx_a9_threshold_20260914_sos5__ead5ea4639b2']
with tempfile.TemporaryDirectory(prefix='inputs_compare_') as tmp:
 os.environ.update(JAVA_HOME='/usr/lib/jvm/java-11-openjdk-amd64', HADOOP_HOME='/opt/hadoop-auth', HADOOP_CONF_DIR='/opt/hadoop-auth/etc/hadoop', KRB5CCNAME='FILE:'+tmp+'/cc')
 try:
  with open('REMOTE_HOME/codex_dir/key.txt','rb') as key:
   p=subprocess.run(['kinit','hpc_user_shifangyi'],stdin=key,capture_output=True)
  if p.returncode: raise RuntimeError('Authentication failed')
  for root in roots:
   p=subprocess.run(['/opt/hadoop-auth/bin/hdfs','dfs','-ls','-R',root],capture_output=True,text=True,check=True)
   print(root+'\n'+p.stdout,flush=True)
 finally: subprocess.run(['kdestroy','-c',os.environ['KRB5CCNAME']],capture_output=True)
