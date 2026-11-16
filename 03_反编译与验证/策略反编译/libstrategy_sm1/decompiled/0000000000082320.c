// ELF address 0x0000000000082320; strategy_signal_maker_common::get_quote_price::get_quote_price

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_signal_maker_common::get_quote_price::get_quote_price */

undefined8 * __rustcall
strategy_signal_maker_common::get_quote_price::get_quote_price
          (double param_1,double param_2,double param_3,double param_4,double param_5,double param_6
          ,undefined8 *param_7,undefined1 param_8,double *param_9)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 uVar9;
  ulong uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dd;
  undefined4 uVar13;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar19;
  double dVar20;
  undefined8 in_XMM2_Qb;
  ulong in_XMM3_Qb;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double *local_f0;
  undefined *local_e8;
  double *local_e0;
  undefined *local_d8;
  double local_d0;
  undefined **local_c8;
  undefined8 local_c0;
  double **local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined8 local_78;
  ulong uStack_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  
  local_98._0_8_ = (param_3 + param_4) * DAT_00117a00;
  local_88._8_8_ = in_XMM2_Qb;
  local_88._0_8_ = param_3;
  local_98._8_8_ = in_XMM2_Qb;
  local_78 = param_4;
  uStack_70 = in_XMM3_Qb;
  local_68 = param_5;
  local_38 = param_1;
  local_30 = param_2;
  local_28 = param_6;
  local_d0 = (double)(*(code *)PTR_round_001d9918)
                               (SUB84(((param_3 - param_4) / (double)local_98._0_8_) * DAT_00117a00
                                      * _DAT_001179c8 * DAT_001179f0,0));
  local_d0 = local_d0 / DAT_001179f0;
  local_60 = local_d0;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_8) {
  case 0:
    local_58 = (double)(*(code *)PTR_round_001d9918)(SUB84((local_30 - *param_9) * DAT_001179f8,0));
    local_58 = local_58 / DAT_001179f8;
    if (local_60 < local_58) {
      dVar20 = (local_58 - local_60) * _DAT_00117a60;
      dVar14 = dVar20;
      if (local_68 <= dVar20) {
        dVar14 = local_68;
      }
      auVar15._0_8_ = ~-(ulong)NAN(local_68) & (ulong)dVar14;
      auVar15._12_4_ = extraout_XMM0_Dd;
      auVar15._8_4_ = extraout_XMM0_Dc;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = -(ulong)NAN(local_68) & (ulong)dVar20;
      auVar15 = auVar15 | auVar8;
      uVar11 = SUB84(local_28,0);
      uVar12 = (undefined4)((ulong)local_28 >> 0x20);
      if (local_28 <= auVar15._0_8_) {
        uVar11 = auVar15._0_4_;
        uVar12 = auVar15._4_4_;
      }
      uVar10 = -(ulong)NAN(auVar15._0_8_);
      uVar13 = local_88._12_4_;
      local_88._8_4_ = local_88._8_4_;
      local_88._0_8_ =
           (double)local_88._0_8_ *
           ((double)(uVar10 & (ulong)local_28 | ~uVar10 & CONCAT44(uVar12,uVar11)) + DAT_001179b8);
      local_88._12_4_ = uVar13;
      local_e0 = &local_58;
LAB_00182650:
      local_f0 = &local_d0;
      local_d8 = PTR_fmt_001d9920;
      local_c8 = &PTR_s_taker__001d5b98;
      local_c0 = 2;
      local_a8 = 0;
      local_b8 = &local_f0;
      local_b0 = 2;
      local_e8 = PTR_fmt_001d9920;
      (*(code *)PTR_format_inner_001d9810)(param_7 + 2,&local_c8);
      uVar9 = 0;
      goto LAB_00182ac4;
    }
    if (local_58 <= 0.0) {
      dVar14 = local_78 + _DAT_001179c0;
      dVar19 = (double)local_88._0_8_ + _DAT_00117998;
      dVar20 = dVar19;
      if (dVar14 <= dVar19) {
        dVar20 = dVar14;
      }
      auVar23._0_8_ = ~-(ulong)NAN(dVar14) & (ulong)dVar20;
      auVar23._8_8_ = ~uStack_70 & local_88._8_8_;
      auVar4._8_4_ = (int)(uStack_70 & local_88._8_8_);
      auVar4._0_8_ = -(ulong)NAN(dVar14) & (ulong)dVar19;
      auVar4._12_4_ = (int)((uStack_70 & local_88._8_8_) >> 0x20);
      local_98 = auVar23 | auVar4;
      local_e8 = PTR_fmt_001d9920;
      local_e0 = &local_58;
LAB_00182a73:
      local_f0 = &local_d0;
      local_c8 = &PTR_s_maker__e__001d5b58;
      local_c0 = 2;
      local_a8 = 0;
      local_b8 = &local_f0;
      local_b0 = 2;
      PTR_fmt_001d9920 = local_e8;
      local_d8 = local_e8;
      (*(code *)PTR_format_inner_001d9810)(param_7 + 2,&local_c8);
      uVar9 = 1;
      local_88._0_4_ = local_98._0_4_;
      local_88._4_4_ = local_98._4_4_;
      goto LAB_00182ac4;
    }
    local_e8 = PTR_fmt_001d9920;
    local_e0 = &local_58;
    break;
  case 1:
    local_50 = (double)(*(code *)PTR_round_001d9918)
                                 (SUB84((param_9[1] - local_38) * DAT_001179f8,0));
    local_50 = local_50 / DAT_001179f8;
    if (local_60 < local_50) {
      dVar20 = (local_50 - local_60) * _DAT_00117a60;
      dVar14 = dVar20;
      if (local_68 <= dVar20) {
        dVar14 = local_68;
      }
      auVar18._0_8_ = ~-(ulong)NAN(local_68) & (ulong)dVar14;
      auVar18._12_4_ = extraout_XMM0_Dd_02;
      auVar18._8_4_ = extraout_XMM0_Dc_02;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = -(ulong)NAN(local_68) & (ulong)dVar20;
      auVar18 = auVar18 | auVar7;
      uVar11 = SUB84(local_28,0);
      uVar12 = (undefined4)((ulong)local_28 >> 0x20);
      if (local_28 <= auVar18._0_8_) {
        uVar11 = auVar18._0_4_;
        uVar12 = auVar18._4_4_;
      }
      uVar10 = -(ulong)NAN(auVar18._0_8_);
      local_78 = local_78 *
                 (DAT_001179b8 -
                 (double)(uVar10 & (ulong)local_28 | ~uVar10 & CONCAT44(uVar12,uVar11)));
      local_e0 = &local_50;
LAB_0018277f:
      local_f0 = &local_d0;
      local_d8 = PTR_fmt_001d9920;
      local_c8 = &PTR_s_taker__001d5b98;
      local_c0 = 2;
      local_a8 = 0;
      local_b8 = &local_f0;
      local_b0 = 2;
      local_e8 = PTR_fmt_001d9920;
      (*(code *)PTR_format_inner_001d9810)(param_7 + 2,&local_c8);
      uVar9 = 0;
      local_88._0_4_ = (undefined4)local_78;
      local_88._4_4_ = local_78._4_4_;
      goto LAB_00182ac4;
    }
    if (local_50 <= 0.0) {
      dVar19 = (double)local_88._0_8_ + _DAT_00117998;
      dVar14 = local_78 + _DAT_001179c0;
      dVar20 = dVar14;
      if (dVar19 <= dVar14) {
        dVar20 = dVar19;
      }
      auVar24._0_8_ = ~-(ulong)NAN(dVar19) & (ulong)dVar20;
      auVar24._8_8_ = ~local_88._8_8_ & uStack_70;
      auVar3._8_4_ = (int)(local_88._8_8_ & uStack_70);
      auVar3._0_8_ = -(ulong)NAN(dVar19) & (ulong)dVar14;
      auVar3._12_4_ = (int)((local_88._8_8_ & uStack_70) >> 0x20);
      local_98 = auVar24 | auVar3;
      local_e8 = PTR_fmt_001d9920;
      local_e0 = &local_50;
      goto LAB_00182a73;
    }
    local_e8 = PTR_fmt_001d9920;
    local_e0 = &local_50;
    break;
  case 2:
    local_48 = (double)(*(code *)PTR_round_001d9918)
                                 (SUB84((param_9[2] - local_38) * DAT_001179f8,0));
    local_48 = local_48 / DAT_001179f8;
    if (local_60 < local_48) {
      dVar20 = (local_48 - local_60) * _DAT_00117a60;
      dVar14 = dVar20;
      if (local_68 <= dVar20) {
        dVar14 = local_68;
      }
      auVar16._0_8_ = ~-(ulong)NAN(local_68) & (ulong)dVar14;
      auVar16._12_4_ = extraout_XMM0_Dd_00;
      auVar16._8_4_ = extraout_XMM0_Dc_00;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = -(ulong)NAN(local_68) & (ulong)dVar20;
      auVar16 = auVar16 | auVar6;
      uVar11 = SUB84(local_28,0);
      uVar12 = (undefined4)((ulong)local_28 >> 0x20);
      if (local_28 <= auVar16._0_8_) {
        uVar11 = auVar16._0_4_;
        uVar12 = auVar16._4_4_;
      }
      uVar10 = -(ulong)NAN(auVar16._0_8_);
      local_78 = local_78 *
                 (DAT_001179b8 -
                 (double)(uVar10 & (ulong)local_28 | ~uVar10 & CONCAT44(uVar12,uVar11)));
      local_e0 = &local_48;
      goto LAB_0018277f;
    }
    if (local_48 <= 0.0) {
      dVar19 = (double)local_88._0_8_ + _DAT_00117998;
      dVar14 = local_78 + _DAT_001179c0;
      dVar20 = dVar14;
      if (dVar19 <= dVar14) {
        dVar20 = dVar19;
      }
      auVar21._0_8_ = ~-(ulong)NAN(dVar19) & (ulong)dVar20;
      auVar21._8_8_ = ~local_88._8_8_ & uStack_70;
      auVar2._8_4_ = (int)(local_88._8_8_ & uStack_70);
      auVar2._0_8_ = -(ulong)NAN(dVar19) & (ulong)dVar14;
      auVar2._12_4_ = (int)((local_88._8_8_ & uStack_70) >> 0x20);
      local_98 = auVar21 | auVar2;
      local_e8 = PTR_fmt_001d9920;
      local_e0 = &local_48;
      goto LAB_00182a73;
    }
    local_e8 = PTR_fmt_001d9920;
    local_e0 = &local_48;
    break;
  case 3:
    local_40 = (double)(*(code *)PTR_round_001d9918)
                                 (SUB84((local_30 - param_9[3]) * DAT_001179f8,0));
    local_40 = local_40 / DAT_001179f8;
    if (local_60 < local_40) {
      dVar20 = (local_40 - local_60) * _DAT_00117a60;
      dVar14 = dVar20;
      if (local_68 <= dVar20) {
        dVar14 = local_68;
      }
      auVar17._0_8_ = ~-(ulong)NAN(local_68) & (ulong)dVar14;
      auVar17._12_4_ = extraout_XMM0_Dd_01;
      auVar17._8_4_ = extraout_XMM0_Dc_01;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = -(ulong)NAN(local_68) & (ulong)dVar20;
      auVar17 = auVar17 | auVar5;
      uVar11 = SUB84(local_28,0);
      uVar12 = (undefined4)((ulong)local_28 >> 0x20);
      if (local_28 <= auVar17._0_8_) {
        uVar11 = auVar17._0_4_;
        uVar12 = auVar17._4_4_;
      }
      uVar10 = -(ulong)NAN(auVar17._0_8_);
      uVar13 = local_88._12_4_;
      local_88._8_4_ = local_88._8_4_;
      local_88._0_8_ =
           (double)local_88._0_8_ *
           ((double)(uVar10 & (ulong)local_28 | ~uVar10 & CONCAT44(uVar12,uVar11)) + DAT_001179b8);
      local_88._12_4_ = uVar13;
      local_e0 = &local_40;
      goto LAB_00182650;
    }
    if (local_40 <= 0.0) {
      dVar14 = local_78 + _DAT_001179c0;
      dVar19 = (double)local_88._0_8_ + _DAT_00117998;
      dVar20 = dVar19;
      if (dVar14 <= dVar19) {
        dVar20 = dVar14;
      }
      auVar22._0_8_ = ~-(ulong)NAN(dVar14) & (ulong)dVar20;
      auVar22._8_8_ = ~uStack_70 & local_88._8_8_;
      auVar1._8_4_ = (int)(uStack_70 & local_88._8_8_);
      auVar1._0_8_ = -(ulong)NAN(dVar14) & (ulong)dVar19;
      auVar1._12_4_ = (int)((uStack_70 & local_88._8_8_) >> 0x20);
      local_98 = auVar22 | auVar1;
      local_e8 = PTR_fmt_001d9920;
      local_e0 = &local_40;
      goto LAB_00182a73;
    }
    local_e8 = PTR_fmt_001d9920;
    local_e0 = &local_40;
  }
  local_f0 = &local_d0;
  local_c8 = &PTR_DAT_001d5b78;
  local_c0 = 2;
  local_a8 = 0;
  local_b8 = &local_f0;
  local_b0 = 2;
  PTR_fmt_001d9920 = local_e8;
  local_d8 = local_e8;
  (*(code *)PTR_format_inner_001d9810)(param_7 + 2,&local_c8);
  uVar9 = 2;
  local_88._0_4_ = local_98._0_4_;
  local_88._4_4_ = local_98._4_4_;
LAB_00182ac4:
  *param_7 = CONCAT44(local_88._4_4_,local_88._0_4_);
  *(undefined1 *)(param_7 + 1) = uVar9;
  return param_7;
}


