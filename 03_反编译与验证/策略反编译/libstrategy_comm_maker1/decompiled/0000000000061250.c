// ELF address 0x0000000000061250; strategy_comm_maker1::signal_trigger::SignalTrigger::point_signal_trigger_pv4_band

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm_maker1::signal_trigger::SignalTrigger::point_signal_trigger_pv4_band */

void __rustcall
strategy_comm_maker1::signal_trigger::SignalTrigger::point_signal_trigger_pv4_band
          (double param_1,double param_2,ulong param_3,double param_4,undefined1 *param_5,
          long param_6)

{
  undefined1 uVar1;
  double dVar2;
  
  param_1 = ((double)(param_3 & _DAT_001173b0) + param_2) * param_1;
  dVar2 = param_1;
  if (param_4 <= param_1) {
    dVar2 = param_4;
  }
  dVar2 = (double)(~-(ulong)NAN(param_4) & (ulong)dVar2 | -(ulong)NAN(param_4) & (ulong)param_1);
  if (*(double *)(param_6 + 0x38) <= 0.0) {
    dVar2 = *(double *)(param_6 + 0x80) - dVar2;
    if (0.0 <= dVar2) {
      dVar2 = 0.0;
    }
    if (dVar2 < *(double *)(param_6 + 0x40)) goto LAB_001612d0;
  }
  else {
    dVar2 = dVar2 + *(double *)(param_6 + 0x88);
    if (dVar2 <= 0.0) {
      dVar2 = 0.0;
    }
    if (dVar2 < *(double *)(param_6 + 0x40)) {
LAB_001612d0:
      uVar1 = 3;
      if (((dVar2 < *(double *)(param_6 + 0x58)) && (uVar1 = 2, *(double *)(param_6 + 0x50) < dVar2)
          ) && (uVar1 = 4, dVar2 <= *(double *)(param_6 + 0x48))) {
        *param_5 = 1;
        *(undefined8 *)(param_5 + 8) = 0x3ff0000000000000;
        return;
      }
      goto LAB_001612a8;
    }
  }
  uVar1 = 0;
LAB_001612a8:
  *param_5 = uVar1;
  *(undefined8 *)(param_5 + 8) = 0x3ff0000000000000;
  return;
}


