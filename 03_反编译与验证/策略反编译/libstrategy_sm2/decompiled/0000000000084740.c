// ELF address 0x0000000000084740; strategy_signal_maker_common::signal_trigger::SignalTrigger::point_signal_trigger_utility

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_signal_maker_common::signal_trigger::SignalTrigger::point_signal_trigger_utility */

void __rustcall
strategy_signal_maker_common::signal_trigger::SignalTrigger::point_signal_trigger_utility
          (undefined1 *param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  
  dVar3 = (double)param_3[4];
  if ((double)param_3[5] <= dVar3) {
    if (*(double *)(param_2 + 0x40) <= dVar3) {
      uVar2 = *param_3;
      uVar1 = param_3[1];
      *param_1 = 0;
      *(undefined8 *)(param_1 + 8) = uVar2;
      *(undefined8 *)(param_1 + 0x10) = uVar1;
      return;
    }
    uVar2 = *param_3;
    uVar1 = param_3[1];
    if (dVar3 < *(double *)(param_2 + 0x58)) {
      *param_1 = 4;
      *(undefined8 *)(param_1 + 8) = uVar2;
      *(undefined8 *)(param_1 + 0x10) = uVar1;
      return;
    }
    *param_1 = 3;
    *(undefined8 *)(param_1 + 8) = uVar2;
    *(undefined8 *)(param_1 + 0x10) = uVar1;
    return;
  }
  dVar3 = (double)(param_3[5] ^ _DAT_001176f0);
  if (dVar3 <= *(double *)(param_2 + 0x50)) {
    uVar2 = param_3[2];
    uVar1 = param_3[3];
    *param_1 = 2;
    *(undefined8 *)(param_1 + 8) = uVar2;
    *(undefined8 *)(param_1 + 0x10) = uVar1;
    return;
  }
  uVar2 = param_3[2];
  uVar1 = param_3[3];
  if (*(double *)(param_2 + 0x48) < dVar3) {
    *param_1 = 4;
    *(undefined8 *)(param_1 + 8) = uVar2;
    *(undefined8 *)(param_1 + 0x10) = uVar1;
    return;
  }
  *param_1 = 1;
  *(undefined8 *)(param_1 + 8) = uVar2;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  return;
}


