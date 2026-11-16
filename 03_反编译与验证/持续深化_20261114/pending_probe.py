from event_probe import *
class Pending(C.Structure):_fields_=[('id',C.c_char*64),('side',C.c_int),('price',D),('vol',D),('filled',D),('ts',D)]
class Request(C.Structure):_fields_=[('action',C.c_int),('type',C.c_int),('price',D),('vol',D),('ref_price',D),('signal',D),('u0',D),('u1',D)]
def I(n,v):C.c_int.in_dll(stub,'probe_'+n).value=v
def F(n,v):D.in_dll(stub,'probe_'+n).value=v
def pending(rows,cancelled=()):
 stub.probe_clear_orders();ar=(Pending*64).in_dll(stub,'probe_pending')
 for i,r in enumerate(rows):
  z=dict(id='P'+str(i),side=0,price=99.,vol=2.,filled=0.,ts=999.);z.update(r)
  ar[i]=Pending(z['id'].encode(),z['side'],z['price'],z['vol'],z['filled'],z['ts'])
 I('pending_n',len(rows));ids=((C.c_char*64)*64).in_dll(stub,'probe_cancel_ids')
 for i,x in enumerate(cancelled):ids[i].value=x.encode()
 I('cancel_n',len(cancelled))
def outputs():
 n=C.c_int.in_dll(stub,'probe_request_n').value;a=(Request*128).in_dll(stub,'probe_requests');c=C.c_int.in_dll(stub,'probe_cancel_attempt_n').value;b=((C.c_char*64)*128).in_dll(stub,'probe_cancel_attempts')
 return dict(requests=[{f:getattr(a[i],f) for f,_ in Request._fields_} for i in range(n)],cancel_attempts=[b[i].value.decode() for i in range(c)])
def inspect(o):
 out=buf(24);code=C.create_string_buffer(b'IF');keep.append(code);f=next(x for x in o['m']['functions'] if x['name'].endswith('StrategyContext::pending_orders'))
 C.CFUNCTYPE(P,P,P,P,Q)(o['base']+f['address'])(out,o['ctx'],code,2)
 cap,ptr,n=struct.unpack('<3Q',out);rows=[]
 for i in range(n):
  a=ptr+i*88
  def st(off):return C.string_at(Q.from_address(a+off+8).value,Q.from_address(a+off+16).value).decode()
  rows.append(dict(id=st(0),code=st(24),values=struct.unpack('<4d',C.string_at(a+48,32)),side=C.c_ubyte.from_address(a+80).value))
 return rows
if __name__=='__main__':
 o=create('libstrategy_sm1','signal_all="A"\n');pending([dict(id='BUY',side=1,price=98.5,vol=3,filled=1,ts=997),dict(id='SELL',side=0,price=101.5,vol=4,filled=2,ts=998)]);r=inspect(o);print(r);(R/'pending_abi.json').write_text(json.dumps(r,indent=2))
