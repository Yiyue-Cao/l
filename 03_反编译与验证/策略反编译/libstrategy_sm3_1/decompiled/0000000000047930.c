// ELF address 0x0000000000047930; strategy_sm3_1::StrategySM31::record_quote_outcome

/* strategy_sm3_1::StrategySM31::record_quote_outcome */

void __rustcall
strategy_sm3_1::StrategySM31::record_quote_outcome
          (long param_1,undefined8 param_2,undefined **param_3,undefined1 param_4,uint param_5,
          long param_6,ulong param_7,byte *param_8,byte *param_9)

{
  byte bVar1;
  byte bVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  ulong uVar6;
  long *plVar7;
  char **ppcVar8;
  ulong uVar9;
  ulong uVar10;
  byte *pbVar11;
  uint uVar12;
  byte *pbVar13;
  long lVar14;
  byte *pbVar15;
  uint uVar16;
  char *pcVar17;
  long lVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  undefined1 local_155;
  uint local_154;
  undefined **local_150;
  double local_148;
  undefined **local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined1 *local_120;
  code *local_118;
  char **local_110;
  undefined8 local_108;
  undefined **local_100;
  code *local_f8;
  char **local_f0;
  code *local_e8;
  short **local_e0;
  code *local_d8;
  byte **local_d0;
  code *local_c8;
  undefined8 local_c0;
  double local_b8;
  undefined8 local_b0;
  long local_a8;
  undefined **local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  char *local_80;
  long local_78;
  undefined *local_70;
  undefined8 local_68;
  char *local_60;
  undefined8 local_58;
  byte *local_50;
  byte *local_48;
  short *local_40;
  long local_38;
  
  puVar4 = PTR_memchr_aligned_001ef830;
  uVar10 = 0;
  local_155 = param_4;
  local_154 = param_5;
  local_b0 = param_2;
  local_a8 = param_1;
  local_a0 = param_3;
  do {
    uVar6 = param_7 - uVar10;
    lVar18 = uVar10 + param_6;
    if (uVar6 < 0x10) {
      if (param_7 == uVar10) break;
      uVar9 = 0;
      while (*(char *)(lVar18 + uVar9) != ':') {
        uVar9 = uVar9 + 1;
        if (uVar6 == uVar9) goto LAB_00147b3b;
      }
    }
    else {
      auVar20 = (*(code *)puVar4)(0x3a,lVar18,uVar6);
      uVar9 = auVar20._8_8_;
      if ((auVar20 & (undefined1  [16])0x1) == (undefined1  [16])0x0) break;
    }
    uVar6 = uVar10 + uVar9 + 1;
    if ((uVar10 + uVar9 < param_7) && (*(char *)(uVar9 + lVar18) == ':')) {
      local_118 = (code *)(param_7 - uVar6);
      local_110 = (char **)(uVar6 + param_6);
      local_f8 = (code *)(param_7 + param_6);
      local_120 = (undefined1 *)0x0;
      local_f0 = (char **)0x0;
      local_e8 = (code *)CONCAT62(local_e8._2_6_,1);
      local_108 = local_118;
      local_100 = local_110;
      lVar14 = core::iter::traits::iterator::Iterator::try_fold(&local_120);
      lVar18 = 7;
      uVar12 = local_154;
      if (lVar14 == 0) goto LAB_001480e7;
      (*(code *)PTR_from_str_001ef838)(&local_150,lVar14);
      uVar12 = local_154;
      if ((char)local_150 == '\x01') goto LAB_001480e7;
      local_b8 = local_148;
      auVar20 = core::iter::traits::iterator::Iterator::try_fold(&local_120);
      puVar4 = PTR_from_str_001ef838;
      if (auVar20._0_8_ == 0) goto LAB_001480e7;
      goto LAB_00147abb;
    }
    uVar10 = uVar6;
  } while (uVar6 <= param_7);
LAB_00147b3b:
  lVar18 = 7;
  local_80 = "unknown";
  uVar12 = local_154;
  goto LAB_00147b56;
LAB_00147abb:
  do {
    if ((1 < auVar20._8_8_) && (*auVar20._0_8_ == 0x3a65)) {
      (*(code *)puVar4)(&local_150,auVar20._0_8_ + 1,auVar20._8_8_ - 2);
      if ((char)local_150 != '\x01') {
        pcVar17 = "maker";
        if (0.0 < local_148) {
          pcVar17 = "midnoorder";
        }
        lVar18 = 5;
        if (local_148 <= local_b8) {
          lVar18 = (ulong)(local_148 <= 0.0) * 2 + 3;
        }
        local_80 = "taker";
        if (local_148 <= local_b8) {
          local_80 = pcVar17;
        }
        goto LAB_00147b56;
      }
    }
    auVar20 = core::iter::traits::iterator::Iterator::try_fold(&local_120);
  } while (auVar20._0_8_ != 0);
LAB_001480e7:
  local_80 = "unknown";
LAB_00147b56:
  local_70 = &DAT_00119698 + *(int *)(&DAT_00119698 + (ulong)(uVar12 & 0xff) * 4);
  local_68 = *(undefined8 *)(&DAT_00118068 + (ulong)(uVar12 & 0xff) * 8);
  local_78 = lVar18;
  (*(code *)PTR_new_001ef840)(&local_120,param_6,param_7);
  if ((int)local_120 == 1) {
    if (local_e8 == (code *)0xffffffffffffffff) {
      core::str::pattern::TwoWaySearcher::next_back
                (&local_150,&local_118,local_d8,local_d0,local_c8,local_c0,1);
    }
    else {
      core::str::pattern::TwoWaySearcher::next_back
                (&local_150,&local_118,local_d8,local_d0,local_c8,local_c0,0);
    }
    if (((ulong)local_150 & 1) == 0) goto LAB_00147c45;
LAB_00147c07:
    param_7 = param_7 - (long)local_140;
    pcVar17 = (char *)(param_6 + (long)local_140);
    if (1 < param_7) {
      if (*(short *)pcVar17 == 0x312d) {
        lVar18 = param_7 - 2;
        local_40 = (short *)((long)pcVar17 + 2);
        local_58 = 2;
        local_60 = "-1";
        goto LAB_00147e20;
      }
      goto LAB_00147d65;
    }
    if (param_7 != 0) {
      param_7 = 1;
      goto LAB_00147d65;
    }
    local_58 = 7;
    local_60 = "unknown";
    lVar18 = 0;
    local_40 = (short *)0x1;
  }
  else {
    if (local_108._2_1_ == '\0') {
      uVar10 = (ulong)local_108 >> 8 & 0xff;
      uVar6 = uVar10;
      for (ppcVar8 = local_110; ppcVar8 != (undefined **)0x0;
          ppcVar8 = (char **)((long)ppcVar8 + uVar9)) {
        if (ppcVar8 < local_d0) {
          if (*(char *)((long)local_d8 + (long)ppcVar8) < -0x40) {
LAB_001480fb:
            (*(code *)PTR_slice_error_fail_001ef848)
                      (local_d8,local_d0,0,ppcVar8,&PTR_s__home_lyt__rustup_toolchains_nig_001e91b0)
            ;
            goto LAB_0014810a;
          }
        }
        else if ((byte **)ppcVar8 != local_d0) goto LAB_001480fb;
        uVar12 = (uint)*(char *)((long)local_d8 + -1 + (long)ppcVar8);
        if ((int)uVar12 < 0) {
          bVar2 = *(byte *)((long)local_d8 + -2 + (long)ppcVar8);
          if ((char)bVar2 < -0x40) {
            bVar1 = *(byte *)((long)local_d8 + -3 + (long)ppcVar8);
            if ((char)bVar1 < -0x40) {
              uVar16 = bVar1 & 0x3f | (*(byte *)((long)local_d8 + -4 + (long)ppcVar8) & 7) << 6;
            }
            else {
              uVar16 = bVar1 & 0xf;
            }
            uVar16 = bVar2 & 0x3f | uVar16 << 6;
          }
          else {
            uVar16 = bVar2 & 0x1f;
          }
          uVar12 = uVar12 & 0x3f | uVar16 << 6;
        }
        if ((uVar10 & 1) != 0) goto LAB_00147dd6;
        uVar9 = 0xffffffffffffffff;
        if ((0x7f < uVar12) && (uVar9 = 0xfffffffffffffffe, 0x7ff < uVar12)) {
          uVar9 = (ulong)(uVar12 < 0x10000) | 0xfffffffffffffffc;
        }
        uVar10 = (ulong)((char)uVar6 != '\x01');
        uVar6 = uVar6 ^ 1;
      }
      ppcVar8 = (undefined **)0x0;
      local_150 = ppcVar8;
      if ((uVar10 & 1) != 0) {
LAB_00147dd6:
        local_150 = (undefined **)0x1;
        local_140 = ppcVar8;
      }
      if ((char)local_150 != '\0') goto LAB_00147c07;
    }
    else {
      local_150 = (undefined **)0x0;
    }
LAB_00147c45:
    param_7 = 1;
    pcVar17 = "0";
LAB_00147d65:
    lVar18 = param_7 - 1;
    local_40 = (short *)((long)pcVar17 + 1);
    local_58 = 1;
    if ((char)*(short *)pcVar17 == '0') {
      local_60 = "0";
    }
    else if ((char)*(short *)pcVar17 == '1') {
      local_60 = "1";
    }
    else {
      local_40 = (short *)0x1;
      local_58 = 7;
      local_60 = "unknown";
      lVar18 = 0;
    }
  }
LAB_00147e20:
  pbVar11 = param_8;
  pbVar13 = (byte *)0x0;
  do {
    pbVar15 = pbVar13;
    local_48 = param_9;
    if (pbVar11 == param_8 + (long)param_9) goto LAB_00147f06;
    bVar2 = *pbVar11;
    uVar12 = (uint)bVar2;
    if ((char)bVar2 < '\0') {
      if (bVar2 < 0xe0) {
        pbVar13 = pbVar11 + 2;
        uVar12 = (uVar12 & 0x1f) << 6 | pbVar11[1] & 0x3f;
      }
      else {
        uVar16 = pbVar11[2] & 0x3f | (pbVar11[1] & 0x3f) << 6;
        if (bVar2 < 0xf0) {
          pbVar13 = pbVar11 + 3;
          uVar12 = uVar16 | (uVar12 & 0x1f) << 0xc;
        }
        else {
          pbVar13 = pbVar11 + 4;
          uVar12 = pbVar11[3] & 0x3f | uVar16 << 6 | (uVar12 & 7) << 0x12;
        }
      }
    }
    else {
      pbVar13 = pbVar11 + 1;
    }
    lVar14 = (long)pbVar15 - (long)pbVar11;
    pbVar11 = pbVar13;
    pbVar13 = pbVar13 + lVar14;
  } while (uVar12 - 0x3a < 0xfffffff6);
  if (pbVar15 == (byte *)0x0) {
    local_48 = (byte *)0x0;
  }
  else if (pbVar15 < param_9) {
    local_48 = pbVar15;
    if ((char)param_8[(long)pbVar15] < -0x40) {
LAB_0014810a:
      uVar19 = (*(code *)PTR_slice_error_fail_001ef848)(param_8,param_9,0);
                    /* catch() { ... } // from try @ 00148012 with catch @ 0014811f */
      if (CONCAT44(uStack_94,local_98) != 0) {
        (*(code *)PTR___rust_dealloc_001ef6a0)
                  (CONCAT44(uStack_8c,uStack_90),CONCAT44(uStack_94,local_98),1);
      }
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume(uVar19);
    }
  }
  else if (pbVar15 != param_9) goto LAB_0014810a;
LAB_00147f06:
  if (lVar18 == 0) {
    local_40 = (short *)&DAT_00118d84;
  }
  local_38 = 4;
  if (lVar18 != 0) {
    local_38 = lVar18;
  }
  local_120 = &local_155;
  local_118 = _<future_backtest_sdk::types::TradeOperation_as_core::fmt::Debug>::fmt;
  local_110 = &local_80;
  local_108 = _<&T_as_core::fmt::Display>::fmt;
  local_100 = &local_70;
  local_f8 = _<&T_as_core::fmt::Display>::fmt;
  local_f0 = &local_60;
  local_e8 = _<&T_as_core::fmt::Display>::fmt;
  local_e0 = &local_40;
  local_d8 = _<&T_as_core::fmt::Display>::fmt;
  local_d0 = &local_50;
  local_c8 = _<&T_as_core::fmt::Display>::fmt;
  local_150 = &PTR_s_quote_op__base__mode__sign__001e98d0;
  local_148 = 2.96439387504748e-323;
  uStack_130 = 0;
  local_138 = 6;
  local_140 = &local_120;
  local_50 = param_8;
  (*(code *)PTR_format_inner_001ef760)(&local_98,&local_150);
  ppuVar5 = local_a0;
  if ((long)local_a0 < 0) {
    uVar19 = 0;
LAB_00148012:
                    /* try { // try from 00148012 to 00148024 has its CatchHandler @ 0014811f */
    (*(code *)PTR_handle_error_001ef768)
              (uVar19,ppuVar5,anon_ac6670d00a082a7ef9e2727059f64e7b_12_llvm_1358435023758527573);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  if (local_a0 == (undefined **)0x0) {
    lVar18 = 1;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001ef6c0)();
    uVar19 = 1;
    lVar18 = (*(code *)PTR___rust_alloc_001ef698)(ppuVar5,1);
    if (lVar18 == 0) goto LAB_00148012;
  }
  lVar14 = local_a8 + 0x2a8;
  (*(code *)PTR_memcpy_001ef700)(lVar18,local_b0,ppuVar5);
  local_128 = local_88;
  local_150 = ppuVar5;
  local_140 = ppuVar5;
  local_148 = (double)lVar18;
  alloc::collections::btree::map::BTreeMap<K,V,A>::entry(&local_120,lVar14,&local_150);
  plVar7 = (long *)alloc::collections::btree::map::entry::Entry<K,V,A>::or_default(&local_120);
  *plVar7 = *plVar7 + 1;
  return;
}


