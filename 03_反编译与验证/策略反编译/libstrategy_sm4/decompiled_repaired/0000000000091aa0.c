// ELF address 0x0000000000091aa0; strategy_signal_maker_common::signal_trigger::SignalTrigger::point_signal_trigger_pv3_spread

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_signal_maker_common::signal_trigger::SignalTrigger::point_signal_trigger_pv3_spread */

void __rustcall
strategy_signal_maker_common::signal_trigger::SignalTrigger::point_signal_trigger_pv3_spread
          (double param_1,ulong param_2,double param_3,undefined1 *param_4,long param_5)

{
  undefined1 uVar1;
  double dVar2;
  
  param_1 = (double)(param_2 & _DAT_00117fd0) * param_1;
  dVar2 = param_1;
  if (param_3 <= param_1) {
    dVar2 = param_3;
  }
  dVar2 = (double)(~-(ulong)NAN(param_3) & (ulong)dVar2 | -(ulong)NAN(param_3) & (ulong)param_1);
  if (*(double *)(param_5 + 0x38) <= 0.0) {
    dVar2 = *(double *)(param_5 + 0x80) - dVar2;
    if (0.0 <= dVar2) {
      dVar2 = 0.0;
    }
    if (dVar2 < *(double *)(param_5 + 0x40)) goto LAB_00191b1c;
  }
  else {
    dVar2 = dVar2 + *(double *)(param_5 + 0x88);
    if (dVar2 <= 0.0) {
      dVar2 = 0.0;
    }
    if (dVar2 < *(double *)(param_5 + 0x40)) {
LAB_00191b1c:
      uVar1 = 3;
      if (((dVar2 < *(double *)(param_5 + 0x58)) && (uVar1 = 2, *(double *)(param_5 + 0x50) < dVar2)
          ) && (uVar1 = 4, dVar2 <= *(double *)(param_5 + 0x48))) {
        *param_4 = 1;
        *(undefined8 *)(param_4 + 8) = 0x3ff0000000000000;
        return;
      }
      goto LAB_00191af4;
    }
  }
  uVar1 = 0;
LAB_00191af4:
  *param_4 = uVar1;
  *(undefined8 *)(param_4 + 8) = 0x3ff0000000000000;
  return;
}


