// ELF address 0x0000000000088150; strategy_signal_maker_common::signal_trigger::dynamic_pending_ts_ms

/* strategy_signal_maker_common::signal_trigger::dynamic_pending_ts_ms */

double __rustcall
strategy_signal_maker_common::signal_trigger::dynamic_pending_ts_ms
          (double param_1,double param_2,double param_3,double param_4,double param_5)

{
  double dVar1;
  
  if (((param_2 <= param_1) && (0.0 <= param_2)) && (0.0 <= param_3)) {
    dVar1 = param_3 - param_2;
    if (param_3 - param_2 <= DAT_00117690) {
      dVar1 = DAT_00117690;
    }
    dVar1 = (param_1 - param_2) / dVar1;
    if (DAT_001176a0 <= dVar1) {
      dVar1 = DAT_001176a0;
    }
    param_4 = param_4 + param_5 * dVar1;
  }
  return param_4;
}


