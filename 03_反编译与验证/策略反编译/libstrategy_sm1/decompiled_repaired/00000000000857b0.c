// ELF address 0x00000000000857b0; strategy_signal_maker_common::signal_trigger::dynamic_threshold

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_signal_maker_common::signal_trigger::dynamic_threshold */

void __rustcall
strategy_signal_maker_common::signal_trigger::dynamic_threshold
          (double param_1,double param_2,double param_3,double param_4,double *param_5,
          double *param_6)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  
  if ((((0.0 <= param_2) && (0.0 <= param_3)) && (param_2 <= param_1)) &&
     (_DAT_00117a08 < (double)(_DAT_001172d0 & (ulong)param_4))) {
    dVar1 = param_3 - param_2;
    if (param_3 - param_2 <= DAT_001179b0) {
      dVar1 = DAT_001179b0;
    }
    dVar1 = (param_1 - param_2) / dVar1;
    if (DAT_001179b8 <= dVar1) {
      dVar1 = DAT_001179b8;
    }
    dVar4 = (double)((ulong)(param_4 * dVar1) & _DAT_001172d0);
    dVar1 = param_6[3];
    *param_5 = *param_6 - dVar4;
    auVar2._8_4_ = SUB84(dVar4 + param_6[2],0);
    auVar2._0_8_ = dVar4 + param_6[1];
    auVar2._12_4_ = (int)((ulong)(dVar4 + param_6[2]) >> 0x20);
    *(undefined1 (*) [16])(param_5 + 1) = auVar2;
    param_5[3] = dVar1 - dVar4;
    return;
  }
  dVar1 = *param_6;
  dVar4 = param_6[1];
  dVar3 = param_6[3];
  param_5[2] = param_6[2];
  param_5[3] = dVar3;
  *param_5 = dVar1;
  param_5[1] = dVar4;
  return;
}


