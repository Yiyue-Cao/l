from probe_xs import *
path=R/'synthetic_xs_reinitialize.csv';codes=[chr(65+i)*2 for i in range(10)];base='signal_all="A"\nenable_xs=true\ndaily_pnl_path="'+str(path)+'"\nxs_date="2026-11-14"\n'
path.write_text(''.join('2026-11-12,%s,%s\n'%(c,i) for i,c in enumerate(codes)));o=create('libstrategy_comm5',base,codes);rows=[dict(case='initial',mult={c:mult(o,c) for c in codes})]
for name,content,config in [('reverse',''.join('2026-11-12,%s,%s\n'%(c,-i) for i,c in enumerate(codes)),base),('empty','',base),('bad_lags','',base+'ew_lags=0.0\n'),('date_empty','',base.replace('xs_date="2026-11-14"','xs_date=""'))]:
 path.write_text(content);string(o['ctx'],0x18,config);ret=C.CFUNCTYPE(Q,P,P)(o['base']+o['m']['begin'])(o['state'],o['ctx']);rows.append(dict(case=name,error=bool(ret),mult={c:mult(o,c) for c in codes}))
(R/'libstrategy_comm5.xs_reinitialize.json').write_text(json.dumps(rows,indent=2));print(rows)
