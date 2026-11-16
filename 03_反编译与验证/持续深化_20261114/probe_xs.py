from event_probe import *
def mult(o,code):return C.CFUNCTYPE(D,P,C.c_ubyte,P,Q)(o['base']+addr(o,'StrategyComm5::xs_mult'))(o['state'],1,code.encode(),len(code))
if __name__=='__main__':
 path=R/'synthetic_daily.csv';codes=['AA','BB','CC','DD','EE','FF','GG','HH','II','JJ']
 path.write_text('date,inst,pnl\n'+''.join('2026-11-12,%s,%s\n'%(c,i) for i,c in enumerate(codes)))
 config='signal_all="A"\nenable_xs=true\ndaily_pnl_path="'+str(path)+'"\nxs_date="2026-11-14"\n'
 o=create('libstrategy_comm5',config,codes);print({c:mult(o,c+'2609') for c in codes});(R/'xs_exploration.json').write_text(json.dumps({c:mult(o,c+'2609') for c in codes},indent=2))
