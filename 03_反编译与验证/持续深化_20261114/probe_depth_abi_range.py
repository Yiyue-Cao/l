from probe_low_pending import *

def check_depth(o):
 setup_depth();out=buf(264);C.CFUNCTYPE(P,P,P,P,Q)(o['base']+addr(o,'StrategyContext::depth'))(out,o['ctx'],b'IF',2)
 asks=[struct.unpack_from('<dd',out,0x48+i*16) for i in range(5)];bids=[struct.unpack_from('<dd',out,0x98+i*16) for i in range(5)]
 assert asks==[(101+i*.2,10) for i in range(5)] and bids==[(99-i*.2,10) for i in range(5)],(asks,bids)
 return dict(asks=asks,bids=bids)
def run(k):
 receipt=[];o=create(k,lowcfg);abi=check_depth(o)
 for levels in [0,1,2,3,4,10]:
  idx=min(4,max(1,levels));bs=[100.,99.8,99.4,98.,97.];as_=[102.,102.4,102.6,104.,106.];cut=100.2-(bs[0]-bs[idx])
  for offset in [-.01,0.,.01]:
   o=create(k,lowcfg+'maker_cancel_range_levels='+str(levels)+'\n');pending([]);I('cancel_rc',0);I('order_rc',0);I('pending_buy',0);I('pending_sell',0)
   for j in range(5):
    t=1000+j*.06;setup_depth(t,101+j*.2,99+j*.2);signal(o,t=t,s=1000.)
   pending([dict(id='B',side=1,price=cut+offset)]);setup_depth(1000.3,102,100);raw=(C.c_ubyte*232).in_dll(stub,'probe_depth_data')
   for i in range(5):struct.pack_into('<dd',raw,32+i*16,as_[i],10);struct.pack_into('<dd',raw,112+i*16,bs[i],10)
   r=signal(o,t=1000.3,s=1000.);out=outputs();assert out['cancel_attempts']==(['B'] if offset<0 else []),(k,levels,offset,cut,out)
   assert len(out['requests'])==int(offset<0),(k,levels,offset,out)
   receipt.append(dict(levels=levels,idx=idx,cut=cut,price=cut+offset,result=r,**out))
 (R/(k+'.depth_range_validation.json')).write_text(json.dumps(dict(abi=abi,rows=receipt,status='PASS'),indent=2));print(k,'depth ABI and',len(receipt),'ranges PASS')
if __name__=='__main__':
 if len(sys.argv)>1:run(sys.argv[1])
 else:
  for k in ['comm3','comm3_1','comm3_2','comm4','comm4_1','comm5','comm_mock']:
   p=subprocess.run([sys.executable,__file__,'libstrategy_'+k],capture_output=True,text=True,timeout=20);(R/('libstrategy_'+k+'.depth_range.log')).write_text(p.stdout+p.stderr);print(k,p.returncode,p.stdout,p.stderr[-600:])
