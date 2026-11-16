// ELF address 0x000000000004a140; strategy_comm_maker1::compute_target_vol_buy

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm_maker1::compute_target_vol_buy */

void __rustcall
strategy_comm_maker1::compute_target_vol_buy
          (double param_1,double param_2,double param_3,char param_4,long param_5)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  
  if (param_4 == '\x03') {
    uVar1 = -(ulong)(*(double *)(param_5 + 0x108) < 0.0);
    dVar7 = (double)(~uVar1 & (ulong)*(double *)(param_5 + 0x108) | uVar1 & DAT_00117ad8);
    uVar1 = -(ulong)(*(double *)(param_5 + 0x110) < 0.0);
    param_3 = ((double)(~uVar1 & (ulong)*(double *)(param_5 + 0x110) | DAT_00117ad8 & uVar1) /
              param_2) / param_3;
    dVar8 = param_3;
    if (dVar7 <= param_3) {
      dVar8 = dVar7;
    }
    dVar7 = (double)(~-(ulong)NAN(dVar7) & (ulong)dVar8 | -(ulong)NAN(dVar7) & (ulong)param_3);
    if (0.0 <= param_1) {
      param_1 = 0.0;
    }
    if ((double)((ulong)param_1 ^ _s__001179e0) <= dVar7) {
      dVar7 = (double)((ulong)param_1 ^ _s__001179e0);
    }
    (*(code *)PTR_round_with_step_f64_001dd5a8)(dVar7,1);
    return;
  }
  if (param_4 == '\0') {
    uVar1 = -(ulong)(*(double *)(param_5 + 0xf8) < 0.0);
    dVar7 = param_1;
    if (param_1 <= 0.0) {
      dVar7 = 0.0;
    }
    auVar3._0_8_ = (double)(~uVar1 & (ulong)*(double *)(param_5 + 0xf8) | uVar1 & DAT_00117ad8) -
                   dVar7;
    uVar1 = -(ulong)(*(double *)(param_5 + 0x100) < 0.0);
    auVar5._0_8_ = ((double)(~uVar1 & (ulong)*(double *)(param_5 + 0x100) | uVar1 & DAT_00117ad8) /
                   param_2) / param_3 - dVar7;
    uVar1 = -(ulong)(*(double *)(param_5 + 0xe8) < 0.0);
    dVar7 = (double)(~uVar1 & (ulong)*(double *)(param_5 + 0xe8) | uVar1 & DAT_00117ad8);
    uVar1 = -(ulong)(*(double *)(param_5 + 0xf0) < 0.0);
    dVar8 = ((double)(~uVar1 & (ulong)*(double *)(param_5 + 0xf0) | uVar1 & DAT_00117ad8) / param_2)
            / param_3;
    if (dVar8 <= DAT_00117b38) {
      dVar8 = DAT_00117b38;
    }
    if (dVar8 <= dVar7) {
      dVar7 = dVar8;
    }
    uVar1 = -(ulong)(*(double *)(param_5 + 0x108) < 0.0);
    dVar8 = (double)(~uVar1 & (ulong)*(double *)(param_5 + 0x108) | uVar1 & DAT_00117ad8);
    uVar1 = -(ulong)(*(double *)(param_5 + 0x110) < 0.0);
    param_3 = ((double)(~uVar1 & (ulong)*(double *)(param_5 + 0x110) | DAT_00117ad8 & uVar1) /
              param_2) / param_3;
    if (param_3 <= DAT_00117b38) {
      param_3 = DAT_00117b38;
    }
    auVar5._8_8_ = param_3;
    if (0.0 <= param_1) {
      param_1 = 0.0;
    }
    auVar3._8_8_ = dVar8;
    auVar6 = minpd(auVar5,auVar3);
    uVar1 = -(ulong)NAN(dVar8);
    auVar2._0_8_ = (ulong)auVar5._0_8_ & -(ulong)NAN(auVar3._0_8_);
    auVar2._8_8_ = (ulong)param_3 & uVar1;
    auVar4._0_8_ = ~-(ulong)NAN(auVar3._0_8_) & auVar6._0_8_;
    auVar4._8_8_ = ~uVar1 & auVar6._8_8_;
    auVar4 = auVar4 | auVar2;
    auVar6._8_8_ = (ulong)param_1 ^ _s__001179e0;
    auVar6._0_8_ = dVar7;
    auVar3 = minpd(auVar6,auVar4);
    dVar7 = (double)(~-(ulong)NAN(auVar4._8_8_) & auVar3._8_8_ |
                    ((ulong)param_1 ^ _s__001179e0) & -(ulong)NAN(auVar4._8_8_)) +
            (double)(~-(ulong)NAN(auVar4._0_8_) & auVar3._0_8_ |
                    (ulong)dVar7 & -(ulong)NAN(auVar4._0_8_));
    if (dVar7 <= 0.0) {
      dVar7 = 0.0;
    }
    (*(code *)PTR_round_with_step_f64_001dd5a8)(dVar7,1);
    return;
  }
  return;
}


