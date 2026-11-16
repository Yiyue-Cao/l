// ELF address 0x000000000004a390; strategy_comm_maker1::compute_target_vol_sell

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm_maker1::compute_target_vol_sell */

undefined8 __rustcall
strategy_comm_maker1::compute_target_vol_sell
          (double param_1,double param_2,double param_3,undefined4 param_4,char param_5,long param_6
          )

{
  ulong uVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  if (param_5 == '\x02') {
    dVar4 = (double)((ulong)*(double *)(param_6 + 0xf8) ^ _s__001179e0);
    uVar1 = -(ulong)(*(double *)(param_6 + 0xf8) < dVar4);
    dVar3 = param_1;
    if (0.0 <= param_1) {
      dVar3 = 0.0;
    }
    dVar5 = (double)(uVar1 & DAT_00117ae0 | ~uVar1 & (ulong)dVar4) - dVar3;
    dVar4 = (double)((ulong)*(double *)(param_6 + 0x100) ^ _s__001179e0);
    uVar1 = -(ulong)(*(double *)(param_6 + 0x100) < dVar4);
    dVar3 = ((double)(uVar1 & DAT_00117ae0 | ~uVar1 & (ulong)dVar4) / param_2) / param_3 - dVar3;
    dVar4 = dVar3;
    if (dVar3 <= dVar5) {
      dVar4 = dVar5;
    }
    dVar5 = (double)(~-(ulong)NAN(dVar5) & (ulong)dVar4 | -(ulong)NAN(dVar5) & (ulong)dVar3);
    uVar1 = -(ulong)(*(double *)(param_6 + 0xe8) < 0.0);
    dVar4 = (double)(~uVar1 & (ulong)*(double *)(param_6 + 0xe8) | uVar1 & DAT_00117ad8);
    uVar1 = -(ulong)(*(double *)(param_6 + 0xf0) < 0.0);
    dVar3 = ((double)(~uVar1 & (ulong)*(double *)(param_6 + 0xf0) | uVar1 & DAT_00117ad8) / param_2)
            / param_3;
    if (dVar3 <= DAT_00117b38) {
      dVar3 = DAT_00117b38;
    }
    if (dVar3 <= dVar4) {
      dVar4 = dVar3;
    }
    uVar1 = -(ulong)(*(double *)(param_6 + 0x108) < 0.0);
    dVar3 = (double)(~uVar1 & (ulong)*(double *)(param_6 + 0x108) | uVar1 & DAT_00117ad8);
    uVar1 = -(ulong)(*(double *)(param_6 + 0x110) < 0.0);
    param_3 = ((double)(~uVar1 & (ulong)*(double *)(param_6 + 0x110) | DAT_00117ad8 & uVar1) /
              param_2) / param_3;
    if (param_3 <= DAT_00117b38) {
      param_3 = DAT_00117b38;
    }
    if (param_3 <= dVar3) {
      dVar3 = param_3;
    }
    if (dVar5 <= (double)((ulong)dVar4 ^ _s__001179e0)) {
      dVar5 = (double)((ulong)dVar4 ^ _s__001179e0);
    }
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    if (param_1 <= dVar3) {
      dVar3 = param_1;
    }
    dVar5 = dVar5 - dVar3;
    if (0.0 <= dVar5) {
      dVar5 = 0.0;
    }
    uVar2 = (*(code *)PTR_round_with_step_f64_001dd5a8)(dVar5,param_4,1);
    return uVar2;
  }
  if (param_5 == '\x01') {
    dVar3 = (double)((ulong)*(double *)(param_6 + 0x108) ^ _s__001179e0);
    uVar1 = -(ulong)(*(double *)(param_6 + 0x108) < dVar3);
    dVar4 = (double)(uVar1 & DAT_00117ae0 | ~uVar1 & (ulong)dVar3);
    dVar3 = (double)((ulong)*(double *)(param_6 + 0x110) ^ _s__001179e0);
    uVar1 = -(ulong)(*(double *)(param_6 + 0x110) < dVar3);
    param_3 = ((double)(uVar1 & DAT_00117ae0 | ~uVar1 & (ulong)dVar3) / param_2) / param_3;
    dVar3 = param_3;
    if (param_3 <= dVar4) {
      dVar3 = dVar4;
    }
    dVar3 = (double)(~-(ulong)NAN(dVar4) & (ulong)dVar3 | -(ulong)NAN(dVar4) & (ulong)param_3);
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    if (dVar3 <= (double)((ulong)param_1 ^ _s__001179e0)) {
      dVar3 = (double)((ulong)param_1 ^ _s__001179e0);
    }
    uVar2 = (*(code *)PTR_round_with_step_f64_001dd5a8)(dVar3,param_4,1);
    return uVar2;
  }
  return 0;
}


