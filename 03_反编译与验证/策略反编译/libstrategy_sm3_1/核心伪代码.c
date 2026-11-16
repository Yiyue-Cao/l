// ELF address 0x0000000000043120; strategy_sm3_1::cancel_side

/* strategy_sm3_1::cancel_side */

long __rustcall
strategy_sm3_1::cancel_side
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4,long *param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  char local_c1;
  long *local_c0;
  long local_b8;
  long *local_b0;
  long local_a8;
  long *local_a0;
  long local_98;
  long *local_90;
  long *local_88;
  long local_80;
  long *local_78;
  char *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  long local_48;
  long *local_40;
  long local_38;
  
  local_c1 = param_4;
  (*(code *)PTR_pending_orders_001ef770)(&local_48,param_1,param_2,param_3);
  local_a0 = local_40 + local_38 * 0xb;
  local_90 = local_40;
  local_88 = local_40;
  local_80 = local_48;
  local_70 = &local_c1;
  local_78 = local_a0;
  if (local_38 == 0) {
    lVar7 = 0;
    plVar10 = local_40;
    lVar11 = local_48;
    plVar13 = local_40;
LAB_001433b6:
    puVar4 = PTR___rust_dealloc_001ef6a0;
    if (local_a0 != plVar13) {
      uVar9 = (ulong)((long)local_a0 - (long)plVar13) / 0x58;
      plVar13 = plVar13 + 4;
      do {
        if (plVar13[-4] != 0) {
          (*(code *)puVar4)(plVar13[-3],plVar13[-4],1);
        }
        if (plVar13[-1] != 0) {
          (*(code *)puVar4)(*plVar13,plVar13[-1],1);
        }
        plVar13 = plVar13 + 0xb;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
  }
  else {
    local_b8 = local_48;
    local_b0 = local_40;
    local_c0 = param_5;
    local_68 = param_1;
    local_60 = param_2;
    local_58 = param_3;
    plVar12 = local_40;
    do {
      while( true ) {
        plVar13 = local_40 + 0xb;
        lVar11 = *local_40;
        lVar1 = local_40[1];
        lVar2 = local_40[3];
        lVar14 = local_40[4];
        if ((char)local_40[10] == local_c1) break;
        if (lVar11 != 0) {
          (*(code *)PTR___rust_dealloc_001ef6a0)(lVar1,lVar11,1);
        }
        if (lVar2 != 0) {
          (*(code *)PTR___rust_dealloc_001ef6a0)(lVar14,lVar2,1);
        }
        local_40 = plVar13;
        if (plVar13 == local_a0) goto LAB_00143374;
      }
      lVar7 = local_40[2];
      local_a8 = lVar7;
      local_98 = lVar14;
      if (local_c0[2] != 0) {
        lVar3 = local_c0[1];
        lVar6 = local_c0[2] * 0x18;
        lVar8 = 0;
        local_50 = lVar6;
        do {
          if ((*(long *)(lVar3 + 0x10 + lVar8) == lVar7) &&
             (iVar5 = (*(code *)PTR_bcmp_001ef778)(*(undefined8 *)(lVar3 + 8 + lVar8),lVar1),
             lVar14 = local_98, lVar6 = local_50, lVar7 = local_a8, iVar5 == 0)) {
            if (lVar11 != 0) {
              (*(code *)PTR___rust_dealloc_001ef6a0)(lVar1,lVar11,1);
            }
            goto LAB_0014334b;
          }
          lVar8 = lVar8 + 0x18;
        } while (lVar6 != lVar8);
      }
                    /* try { // try from 001432e0 to 001432fa has its CatchHandler @ 0014346c */
      lVar7 = (*(code *)PTR_cancel_order_001ef780)(local_68,local_60,local_58,lVar1,lVar7);
      if (lVar7 != 0) {
        local_88 = plVar13;
        if (lVar11 != 0) {
          (*(code *)PTR___rust_dealloc_001ef6a0)(lVar1,lVar11,1);
        }
        plVar10 = local_b0;
        lVar11 = local_b8;
        if (lVar2 != 0) {
          (*(code *)PTR___rust_dealloc_001ef6a0)(lVar14,lVar2,1);
          plVar10 = local_b0;
          lVar11 = local_b8;
        }
        goto LAB_001433b6;
      }
      lVar7 = local_c0[2];
      if (lVar7 == *local_c0) {
                    /* try { // try from 00143312 to 00143328 has its CatchHandler @ 0014346a */
        (*(code *)PTR_grow_one_001ef788)(local_c0,&PTR_s_strategies_index_strategy_strate_001e92f0);
      }
      lVar3 = local_c0[1];
      *(long *)(lVar3 + lVar7 * 0x18) = lVar11;
      *(long *)(lVar3 + 8 + lVar7 * 0x18) = lVar1;
      *(long *)(lVar3 + 0x10 + lVar7 * 0x18) = local_a8;
      local_c0[2] = lVar7 + 1;
LAB_0014334b:
      if (lVar2 != 0) {
        (*(code *)PTR___rust_dealloc_001ef6a0)(lVar14,lVar2,1);
      }
      plVar12 = plVar13;
      local_40 = plVar13;
    } while (plVar13 != local_a0);
LAB_00143374:
    lVar7 = 0;
    plVar10 = local_b0;
    lVar11 = local_b8;
    local_88 = plVar12;
  }
  if (lVar11 != 0) {
    (*(code *)PTR___rust_dealloc_001ef6a0)(plVar10,lVar11 * 0x58,8);
  }
  return lVar7;
}




// ELF address 0x0000000000042e60; strategy_sm3_1::default_off

/* strategy_sm3_1::default_off */

undefined8 * __rustcall strategy_sm3_1::default_off(undefined8 *param_1)

{
  code *pcVar1;
  undefined2 *puVar2;
  undefined8 *puVar3;
  
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001ef6c0)();
  puVar2 = (undefined2 *)(*(code *)PTR___rust_alloc_001ef698)(3,1);
  if (puVar2 != (undefined2 *)0x0) {
    *(undefined1 *)(puVar2 + 1) = 0x66;
    *puVar2 = 0x666f;
    *param_1 = 3;
    param_1[1] = puVar2;
    param_1[2] = 3;
    return param_1;
  }
  (*(code *)PTR_handle_error_001ef768)
            (1,3,anon_ac6670d00a082a7ef9e2727059f64e7b_12_llvm_1358435023758527573);
  pcVar1 = (code *)swi(3);
  puVar3 = (undefined8 *)(*pcVar1)();
  return puVar3;
}




// ELF address 0x0000000000042e00; strategy_sm3_1::default_pv1

/* strategy_sm3_1::default_pv1 */

undefined8 * __rustcall strategy_sm3_1::default_pv1(undefined8 *param_1)

{
  code *pcVar1;
  undefined2 *puVar2;
  undefined8 *puVar3;
  
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001ef6c0)();
  puVar2 = (undefined2 *)(*(code *)PTR___rust_alloc_001ef698)(3,1);
  if (puVar2 != (undefined2 *)0x0) {
    *(undefined1 *)(puVar2 + 1) = 0x31;
    *puVar2 = 0x5650;
    *param_1 = 3;
    param_1[1] = puVar2;
    param_1[2] = 3;
    return param_1;
  }
  (*(code *)PTR_handle_error_001ef768)
            (1,3,anon_ac6670d00a082a7ef9e2727059f64e7b_12_llvm_1358435023758527573);
  pcVar1 = (code *)swi(3);
  puVar3 = (undefined8 *)(*pcVar1)();
  return puVar3;
}




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




// ELF address 0x0000000000048150; strategy_sm3_1::StrategySM31::decide

/* WARNING: Removing unreachable block (ram,0x00149345) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_sm3_1::StrategySM31::decide */

code * __rustcall
strategy_sm3_1::StrategySM31::decide
          (undefined8 param_1,ulong param_2,long param_3,undefined8 param_4,double param_5,
          undefined8 *******param_6,long param_7,byte *param_8,code *param_9)

{
  ushort uVar1;
  undefined8 *******pppppppuVar2;
  undefined *puVar3;
  byte bVar4;
  long lVar5;
  char cVar6;
  char cVar7;
  byte bVar8;
  int iVar9;
  code *pcVar10;
  byte **ppbVar11;
  long *plVar12;
  long lVar13;
  double dVar14;
  ulong uVar15;
  byte *pbVar16;
  uint uVar17;
  undefined8 *******pppppppuVar18;
  ulong uVar19;
  long extraout_RDX;
  long extraout_RDX_00;
  char cVar20;
  code *pcVar21;
  ulong uVar22;
  byte *pbVar23;
  long lVar24;
  uint uVar25;
  long lVar26;
  undefined8 uVar27;
  long lVar28;
  undefined8 *puVar29;
  undefined1 uVar30;
  undefined8 *******pppppppuVar31;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar32;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  undefined8 *******local_830;
  double local_828;
  undefined8 *******local_820;
  undefined8 *******local_818;
  undefined8 uStack_810;
  long local_800;
  undefined *local_7f8;
  double local_7f0;
  undefined8 *******local_7e8;
  code *pcStack_7e0;
  byte **local_7d8;
  undefined8 *******local_7d0;
  undefined8 local_7c8;
  long local_7c0;
  undefined1 local_7b8 [16];
  undefined8 *******local_7a0;
  code *pcStack_798;
  undefined8 *******local_790;
  code *pcStack_788;
  byte **local_780;
  code *pcStack_778;
  undefined8 local_770;
  ulong local_768;
  undefined8 ******local_750;
  undefined *local_748;
  double dStack_740;
  undefined8 *******local_738;
  undefined8 uStack_730;
  undefined8 local_728;
  undefined8 local_710;
  undefined8 local_708;
  undefined8 local_700;
  undefined4 local_6f8;
  undefined4 uStack_6f4;
  undefined4 uStack_6f0;
  undefined4 uStack_6ec;
  double local_6e8;
  undefined8 local_6e0;
  byte *local_6d8;
  code *pcStack_6d0;
  long local_6c8;
  undefined8 uStack_6c0;
  long local_6b8;
  undefined8 uStack_6b0;
  long local_6a0;
  double local_698;
  ulong local_690;
  ulong local_688;
  undefined8 uStack_680;
  undefined1 local_670 [24];
  long local_658;
  undefined8 local_650;
  long local_648;
  long local_640;
  long local_638;
  undefined8 local_630;
  undefined8 uStack_628;
  undefined8 *******local_620;
  uint local_618;
  char local_614;
  undefined1 local_613;
  undefined1 local_610 [8];
  undefined8 *******local_608;
  undefined1 local_5e0 [200];
  undefined8 local_518;
  undefined8 local_510;
  undefined8 local_508;
  undefined8 local_500;
  double local_4f8;
  double local_4f0;
  double local_4e8;
  double local_4e0;
  double local_4d8;
  double local_4d0;
  double local_4c8;
  undefined8 *******local_4c0;
  code *pcStack_4b8;
  undefined8 *******local_4b0;
  code *pcStack_4a8;
  undefined8 local_4a0;
  undefined8 local_498;
  undefined8 local_490;
  undefined4 local_488;
  undefined8 local_480;
  undefined8 local_478;
  long local_470;
  undefined4 local_468;
  double local_460;
  double local_410;
  char local_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  double local_3e0;
  ulong local_3d8;
  undefined *local_3d0;
  undefined8 local_3c8;
  double local_3c0;
  undefined8 local_3b8;
  undefined1 local_3b0;
  char local_3af;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  double local_390;
  ulong local_388;
  double local_380;
  undefined8 local_378;
  undefined8 local_370;
  undefined8 local_368;
  undefined1 local_360;
  byte local_35f;
  undefined8 *******local_358;
  code *pcStack_350;
  undefined8 *******local_348;
  code *pcStack_340;
  byte **local_338;
  code *pcStack_330;
  ulong local_328;
  undefined8 uStack_320;
  undefined *local_318;
  double dStack_310;
  undefined8 *******local_308;
  undefined8 uStack_300;
  long local_2f8;
  undefined8 uStack_2f0;
  long local_2e8;
  undefined8 uStack_2e0;
  double local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  double local_230;
  ulong local_228;
  double local_220;
  undefined8 local_218;
  undefined *local_210;
  undefined8 local_208;
  undefined2 local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  double local_1e0;
  ulong local_1d8;
  undefined *local_1d0;
  undefined8 local_1c8;
  undefined8 *******local_1c0;
  undefined8 local_1b8;
  undefined2 local_1b0;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  byte local_140 [8];
  double local_138;
  byte local_130;
  double local_128;
  long local_120;
  undefined8 local_118;
  double local_f8;
  double local_c8;
  undefined *local_a8;
  double local_78;
  
  pcStack_6d0 = param_9;
  local_818 = (undefined8 *******)param_5;
  local_768 = param_2;
  local_6e0 = param_1;
  local_6d8 = param_8;
  DecisionTelemetry::inc(param_3 + 0x2a8,param_5,param_6,"decision_call--w:",0xd);
  pbVar16 = param_8;
  pcVar10 = (code *)0x0;
  do {
    pcVar21 = param_9;
    if (pbVar16 == param_8 + (long)param_9) break;
    bVar8 = *pbVar16;
    uVar17 = (uint)bVar8;
    if ((char)bVar8 < '\0') {
      if (bVar8 < 0xe0) {
        pbVar23 = pbVar16 + 2;
        uVar17 = (uVar17 & 0x1f) << 6 | pbVar16[1] & 0x3f;
      }
      else {
        uVar25 = pbVar16[2] & 0x3f | (pbVar16[1] & 0x3f) << 6;
        if (bVar8 < 0xf0) {
          pbVar23 = pbVar16 + 3;
          uVar17 = uVar25 | (uVar17 & 0x1f) << 0xc;
        }
        else {
          pbVar23 = pbVar16 + 4;
          uVar17 = pbVar16[3] & 0x3f | uVar25 << 6 | (uVar17 & 7) << 0x12;
        }
      }
    }
    else {
      pbVar23 = pbVar16 + 1;
    }
    lVar24 = (long)pcVar10 - (long)pbVar16;
    pbVar16 = pbVar23;
    pcVar21 = pcVar10;
    pcVar10 = (code *)(pbVar23 + lVar24);
  } while (uVar17 - 0x3a < 0xfffffff6);
  if (pcVar21 != (code *)0x0) {
    uVar30 = param_9 == pcVar21;
    if (param_9 <= pcVar21) goto LAB_00148287;
    if ((char)param_8[(long)pcVar21] < -0x40) {
      do {
        uVar30 = 1;
        (*(code *)PTR_slice_error_fail_001ef848)
                  (param_8,param_9,0,pcVar21,&PTR_s_strategies_index_strategy_strate_001e92d8);
LAB_00148287:
      } while (!(bool)uVar30);
    }
  }
  (*(code *)PTR_from_str_001ef838)(local_610,param_8 + (long)pcVar21,(long)param_9 - (long)pcVar21);
  uVar30 = param_6 == (undefined8 *******)0x0;
  if (-1 < (long)param_6) goto LAB_001482bb;
  lVar24 = 0;
  uVar30 = true;
  do {
    (*(code *)PTR_handle_error_001ef768)
              (lVar24,param_6,anon_ac6670d00a082a7ef9e2727059f64e7b_12_llvm_1358435023758527573);
    param_7 = lVar24;
LAB_001482bb:
    local_7b8[0] = local_610[0];
    local_7d0 = local_608;
    local_7c0 = param_3;
    if ((bool)uVar30) {
      pcVar10 = (code *)0x1;
      break;
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001ef6c0)();
    lVar24 = 1;
    pcVar10 = (code *)(*(code *)PTR___rust_alloc_001ef698)(param_6,1);
    uVar30 = pcVar10 == (code *)0x0;
    param_3 = param_7;
  } while ((bool)uVar30);
  lVar24 = local_7c0;
  (*(code *)PTR_memcpy_001ef700)(pcVar10,local_818,param_6);
  if ((long)pcVar21 < 0) {
    uVar27 = 0;
LAB_00148336:
                    /* try { // try from 00148336 to 00148348 has its CatchHandler @ 0014a773 */
    (*(code *)PTR_handle_error_001ef768)
              (uVar27,pcVar21,anon_ac6670d00a082a7ef9e2727059f64e7b_12_llvm_1358435023758527573);
    goto LAB_0014a679;
  }
  local_800 = param_7;
  if (pcVar21 == (code *)0x0) {
    ppbVar11 = (byte **)0x1;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001ef6c0)();
    uVar27 = 1;
    ppbVar11 = (byte **)(*(code *)PTR___rust_alloc_001ef698)(pcVar21,1);
    lVar24 = local_7c0;
    if (ppbVar11 == (byte **)0x0) goto LAB_00148336;
  }
  (*(code *)PTR_memcpy_001ef700)(ppbVar11,param_8,pcVar21);
  if (local_7b8[0] == '\0') {
    local_7b8._0_8_ = local_7d0;
    if ((double)local_7d0 <= 0.0) {
      local_7b8._0_8_ = (undefined8 *******)0x0;
    }
  }
  else {
    local_7b8._0_8_ = (undefined8 *******)0x0;
  }
  local_358 = param_6;
  pcStack_350 = pcVar10;
  local_348 = param_6;
  pcStack_340 = pcVar21;
  local_338 = ppbVar11;
  pcStack_330 = pcVar21;
  alloc::collections::btree::map::BTreeMap<K,V,A>::entry(local_610,lVar24 + 0x2c0,&local_358);
  plVar12 = (long *)alloc::collections::btree::map::entry::Entry<K,V,A>::or_default(local_610);
  *plVar12 = *plVar12 + 1;
  uVar33 = (undefined4)local_7b8._0_8_;
  uVar34 = SUB84(local_7b8._0_8_,4);
  uVar35 = 0;
  uVar36 = 0;
  plVar12[1] = (long)((double)plVar12[1] + (double)local_7b8._0_8_);
  pppppppuVar31 = (undefined8 *******)plVar12[2];
  if ((double)plVar12[2] <= (double)local_7b8._0_8_) {
    pppppppuVar31 = (undefined8 *******)local_7b8._0_8_;
  }
  plVar12[2] = (long)pppppppuVar31;
  lVar13 = (*(code *)PTR_para_001ef7b0)(param_4);
  cVar20 = *(char *)(lVar13 + 0x34);
  local_7d0 = *(undefined8 ********)(lVar13 + 0x28);
  uVar30 = *(undefined1 *)(lVar13 + 0x35);
  local_7b8 = *(undefined1 (*) [16])(lVar13 + 0x18);
  uVar27 = *(undefined8 *)(lVar13 + 0x30);
  _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone
            (&local_648,lVar13,&PTR_s__hdd1_lyt_d_FutureCommodity_Mult_001e9640);
  uVar17 = (uint)uVar27;
  local_630 = local_7b8._0_8_;
  uStack_628 = local_7b8._8_8_;
  local_620 = local_7d0;
                    /* try { // try from 001484dc to 001484eb has its CatchHandler @ 0014a75b */
  local_618 = uVar17;
  local_614 = cVar20;
  local_613 = uVar30;
  _<strategy_sm3_1::SM31Params_as_core::clone::Clone>::clone(local_610,lVar24);
                    /* try { // try from 001484ec to 0014857b has its CatchHandler @ 0014a736 */
  cVar6 = (*(code *)PTR_is_night_001ef850)(param_4);
  (*(code *)PTR_inst_start_time_sec_001ef7f8)(param_4);
  cVar7 = (*(code *)PTR_is_trade_start_001ef800)(param_4,cVar6);
  if (cVar7 == '\0') {
    pcVar10 = (code *)0x0;
    goto LAB_00148a10;
  }
  cVar7 = (*(code *)PTR_is_trade_end_001ef808)(param_4,cVar6);
  if (cVar7 != '\0') {
    if (cVar6 == '\0') {
      if (cVar20 != '\0') goto LAB_00148880;
    }
    else if (((ushort)((ulong)uVar27 >> 0x10) >> 8 & 1) != 0) {
LAB_00148880:
                    /* try { // try from 00148880 to 00148896 has its CatchHandler @ 0014a736 */
      pcVar10 = (code *)(*(code *)PTR_all_in_001ef810)(param_4,cVar6,uVar17 & 1);
      goto LAB_00148a10;
    }
  }
  local_7d0 = (undefined8 *******)(*(code *)PTR_time_sec_001ef7e0)(param_4);
  (*(code *)PTR_clone_001ef7b8)
            (&local_6a0,local_5e0,&PTR_s_strategies_index_strategy_strate_001e9960);
  if (param_6 == (undefined8 *******)0x0) {
    dVar14 = 4.94065645841247e-324;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001ef6c0)();
    dVar14 = (double)(*(code *)PTR___rust_alloc_001ef698)(param_6,1);
    if (dVar14 == 0.0) {
                    /* try { // try from 0014a655 to 0014a669 has its CatchHandler @ 0014a685 */
      (*(code *)PTR_handle_error_001ef768)
                (1,param_6,anon_ac6670d00a082a7ef9e2727059f64e7b_12_llvm_1358435023758527573);
LAB_0014a679:
                    /* WARNING: Does not return */
      pcVar10 = (code *)invalidInstructionException();
      (*pcVar10)();
    }
  }
  (*(code *)PTR_memcpy_001ef700)(dVar14,local_818,param_6);
                    /* try { // try from 001485d9 to 001485ef has its CatchHandler @ 0014a68d */
  local_830 = param_6;
  local_828 = dVar14;
  local_820 = param_6;
  (*(code *)PTR_depth_001ef7d8)(&local_358,param_4,dVar14,param_6);
  if ((int)local_358 == 2) {
    pcVar10 = (code *)0x0;
  }
  else {
    (*(code *)PTR_memcpy_001ef700)(local_140,&local_358,0x108);
    if (((local_140[0] & 1) == 0) || ((local_130 & 1) == 0)) {
LAB_00148668:
                    /* try { // try from 00148672 to 00148741 has its CatchHandler @ 0014a6d7 */
      local_650 = (*(code *)PTR_spread_bp_001ef858)(param_4,local_828,local_820);
      local_7f0 = local_f8;
      local_7f8 = local_a8;
      local_770 = (*(code *)PTR_price_step_001ef860)(param_4,local_828,local_820);
      local_7c8 = (*(code *)PTR_vol_step_001ef868)(param_4,local_828,local_820);
      local_6e8 = (double)(*(code *)PTR_contract_mult_001ef870)(param_4,local_828,local_820);
      (*(code *)PTR_position_001ef878)(param_4,local_828,local_820);
      local_6f8 = uVar33;
      uStack_6f4 = uVar34;
      uStack_6f0 = uVar35;
      uStack_6ec = uVar36;
      local_818 = (undefined8 *******)
                  (*(code *)PTR_position_holding_secs_001ef880)(param_4,local_828,local_820);
      bVar8 = (*(code *)PTR_is_should_lock_001ef888)(param_4,local_828,local_820);
      pppppppuVar31 = local_820;
      lVar24 = *(long *)(local_7c0 + 0x248);
      if (lVar24 != 0) {
        uVar33 = local_7b8._12_4_;
        dVar14 = local_7b8._0_8_ / _DAT_00118550;
        local_7d0 = (undefined8 *******)((double)local_7d0 + dVar14);
        local_7b8._8_4_ = local_7b8._8_4_;
        local_7b8._0_8_ = dVar14 + (double)local_818;
        local_7b8._12_4_ = uVar33;
        local_658 = local_7c0 + 0x248;
        local_818 = (undefined8 *******)local_828;
        local_6b8 = *(long *)(local_7c0 + 0x250);
        while( true ) {
          uVar1 = *(ushort *)(lVar24 + 0x21a);
          local_688 = (ulong)uVar1;
          uVar22 = 0xffffffffffffffff;
          lVar28 = 0;
          lVar13 = lVar24 + 8;
          local_6c8 = lVar24;
          do {
            uVar15 = local_688;
            if ((ulong)((uint)uVar1 * 8) * 3 == lVar28) goto LAB_00148849;
            pppppppuVar2 = *(undefined8 ********)(lVar13 + 0x10);
            pppppppuVar18 = pppppppuVar2;
            if (pppppppuVar31 < pppppppuVar2) {
              pppppppuVar18 = pppppppuVar31;
            }
            iVar9 = (*(code *)PTR_memcmp_001ef738)
                              (local_818,*(undefined8 *)(lVar13 + 8),pppppppuVar18);
            lVar24 = (long)pppppppuVar31 - (long)pppppppuVar2;
            if (iVar9 != 0) {
              lVar24 = (long)iVar9;
            }
            lVar28 = lVar28 + 0x18;
            uVar22 = uVar22 + 1;
            lVar13 = lVar13 + 0x18;
          } while ((char)((0 < lVar24) - (lVar24 < 0)) == '\x01');
          uVar15 = uVar22;
          if (0 < lVar24 == lVar24 < 0) break;
LAB_00148849:
          if (local_6b8 == 0) goto LAB_001489b4;
          lVar24 = *(long *)(local_6c8 + 0x220 + uVar15 * 8);
          local_6b8 = local_6b8 + -1;
        }
        lVar24 = *(long *)(local_6c8 + 0xf8 + lVar28);
        if (lVar24 != 0) {
          local_818 = (undefined8 *******)local_698;
          local_6c8 = *(long *)(local_6c8 + 0x100 + lVar28);
          goto LAB_001488dd;
        }
      }
    }
    else {
      uVar33 = SUB84(local_128,0);
      uVar34 = (undefined4)((ulong)local_128 >> 0x20);
      uVar35 = 0;
      uVar36 = 0;
      if ((double)((ulong)((local_138 - local_128) / (local_138 + local_128)) & _DAT_001185a0) <=
          DAT_001184b8) goto LAB_00148668;
    }
LAB_001489b4:
    pcVar10 = (code *)0x0;
LAB_001489b6:
    if (local_120 != 0) {
      (*(code *)PTR___rust_dealloc_001ef6a0)(local_118,local_120,1);
    }
  }
  if (local_830 != (undefined8 *******)0x0) {
    (*(code *)PTR___rust_dealloc_001ef6a0)(local_828,local_830,1);
  }
  if (local_6a0 != 0) {
    (*(code *)PTR___rust_dealloc_001ef6a0)(local_698,local_6a0,1);
  }
LAB_00148a10:
  core::ptr::drop_in_place<strategy_sm3_1::SM31Params>(local_610);
  puVar3 = PTR___rust_dealloc_001ef6a0;
  if (local_638 != 0) {
    puVar29 = (undefined8 *)(local_640 + 8);
    lVar24 = local_638;
    do {
      if (puVar29[-1] != 0) {
        (*(code *)puVar3)(*puVar29,puVar29[-1],1);
      }
      puVar29 = puVar29 + 3;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
  }
  if (local_648 != 0) {
    (*(code *)PTR___rust_dealloc_001ef6a0)(local_640,local_648 * 0x18,8);
  }
  return pcVar10;
LAB_001488dd:
  local_688 = (ulong)*(ushort *)(lVar24 + 0x742);
  lVar13 = (ulong)((uint)*(ushort *)(lVar24 + 0x742) * 8) * 3;
  uVar22 = 0xffffffffffffffff;
  lVar28 = lVar24 + 0x638;
  lVar5 = lVar24 + -0x90;
  local_6b8 = lVar24;
  do {
    lVar24 = lVar5;
    uVar15 = local_688;
    if (lVar13 == 0) goto LAB_00148984;
    uVar15 = *(ulong *)(lVar28 + 0x10);
    uVar19 = uVar15;
    if (local_690 < uVar15) {
      uVar19 = local_690;
    }
    iVar9 = (*(code *)PTR_memcmp_001ef738)(local_818,*(undefined8 *)(lVar28 + 8),uVar19);
    lVar26 = local_690 - uVar15;
    if (iVar9 != 0) {
      lVar26 = (long)iVar9;
    }
    lVar13 = lVar13 + -0x18;
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
    lVar5 = lVar24 + 0x90;
  } while ((char)((0 < lVar26) - (lVar26 < 0)) == '\x01');
  uVar15 = uVar22;
  if (0 < lVar26 == lVar26 < 0) {
    local_358 = local_4c0;
    pcStack_350 = pcStack_4b8;
    local_348 = local_4b0;
    pcStack_340 = pcStack_4a8;
                    /* try { // try from 00148ad2 to 00148bac has its CatchHandler @ 0014a6d7 */
    (*(code *)PTR_dynamic_threshold_001ef890)
              (local_7b8._0_8_,(int)local_4a0,local_498,local_490,&local_7a0,&local_358);
    *(undefined8 ********)(lVar24 + 0xe0) = local_790;
    *(code **)(lVar24 + 0xe8) = pcStack_788;
    *(undefined8 ********)(lVar24 + 0xd0) = local_7a0;
    *(code **)(lVar24 + 0xd8) = pcStack_798;
    (*(code *)PTR_point_signal_trigger_pv3_spread_001ef898)
              (local_518,(int)local_650,local_460 * _DAT_001184a0,&local_358,lVar24 + 0x90);
    pcVar10 = pcStack_350;
    if ((char)local_358 != '\x05') {
      uVar30 = (*(code *)PTR_margin_filter_001ef8a0)(param_4,(ulong)local_358 & 0xff);
      (*(code *)PTR_dynamic_pending_ts_ms_001ef8a8)
                (local_7b8._0_8_,local_488,local_480,local_470,local_478);
      pcVar10 = (code *)(*(code *)PTR_cancel_by_pending_ts_001ef8b0)(param_4,1);
      if (pcVar10 == (code *)0x0) {
        local_710 = 0;
        local_708 = 8;
        local_700 = 0;
                    /* try { // try from 00148bdd to 00148d0a has its CatchHandler @ 0014a680 */
        cVar6 = (*(code *)PTR_impact_block_check_001ef8b8)
                          (local_7d0,(int)local_7f8,local_7f0,param_4,uVar30);
        cVar20 = cVar6;
        if ((cVar6 != '\x04') && (local_400 != '\0')) {
          lVar24 = local_7c0 + 0x278;
          lVar13 = alloc::collections::btree::map::BTreeMap<K,V,A>::get(lVar24,&local_830);
          if ((lVar13 != 0) &&
             ((cVar20 = '\x04', 0.0 < local_410 &&
              (local_410 <= ((double)local_7d0 - *(double *)(lVar13 + 0x10)) * _DAT_00118550)))) {
            alloc::collections::btree::map::BTreeMap<K,V,A>::remove(&local_358,lVar24,&local_830);
            cVar20 = cVar6;
          }
        }
        lVar24 = alloc::collections::btree::map::BTreeMap<K,V,A>::get(local_658,&local_830);
        if ((lVar24 == 0) ||
           (lVar24 = alloc::collections::btree::map::BTreeMap<K,V,A>::get(lVar24,&local_6a0),
           lVar24 == 0)) {
                    /* try { // try from 0014a66c to 0014a678 has its CatchHandler @ 0014a680 */
          (*(code *)PTR_unwrap_failed_001ef720)(&PTR_s_strategies_index_strategy_strate_001e9978);
          goto LAB_0014a679;
        }
        local_688 = *(ulong *)(lVar24 + 0x30);
        uStack_680 = *(undefined8 *)(lVar24 + 0x38);
        local_748 = *(undefined **)(lVar24 + 0x40);
        dStack_740 = *(double *)(lVar24 + 0x48);
        local_738 = *(undefined8 ********)(lVar24 + 0x50);
        uStack_730 = *(undefined8 *)(lVar24 + 0x58);
        local_6c8 = *(long *)(lVar24 + 0x60);
        uStack_6c0 = *(undefined8 *)(lVar24 + 0x68);
        local_6b8 = *(long *)(lVar24 + 0x70);
        uStack_6b0 = *(undefined8 *)(lVar24 + 0x78);
        local_818 = *(undefined8 ********)(lVar24 + 0x80);
        uStack_810 = *(undefined8 *)(lVar24 + 0x88);
        _<hashbrown::map::HashMap<K,V,S,A>as_core::clone::Clone>::clone(&local_7a0,lVar24);
        lVar24 = local_7c0;
        local_338 = local_780;
        pcStack_330 = pcStack_778;
        local_348 = local_790;
        pcStack_340 = pcStack_788;
        local_358 = local_7a0;
        pcStack_350 = pcStack_798;
        local_328 = local_688;
        uStack_320 = uStack_680;
        local_318 = local_748;
        dStack_310 = dStack_740;
        local_308 = local_738;
        uStack_300 = uStack_730;
        local_2f8 = local_6c8;
        uStack_2f0 = uStack_6c0;
        local_2e8 = local_6b8;
        uStack_2e0 = uStack_6b0;
        local_2d8 = (double)local_818;
        uStack_2d0 = uStack_810;
        uVar33 = (undefined4)uStack_810;
                    /* WARNING: Switch is manually overridden */
        switch(cVar20) {
        case '\0':
          if (((double)CONCAT44(uStack_6f4,local_6f8) <= DAT_00118560 &&
               DAT_00118560 != (double)CONCAT44(uStack_6f4,local_6f8)) &&
             ((double)local_7b8._0_8_ < local_4f8 / _DAT_00118550)) break;
                    /* try { // try from 00148e1f to 00148e5c has its CatchHandler @ 0014a67b */
          quote::get_quote_price_one_shot_v31
                    (local_818,uVar33,local_7f0,local_7f8,local_508,local_510,&local_7a0,0,
                     &local_318,local_800,local_7c0 + 0x218);
          pcVar10 = pcStack_798;
          local_818 = local_7a0;
          bVar8 = (byte)pcStack_798;
          local_7d8 = local_780;
          local_7e8 = local_790;
          pcStack_7e0 = pcStack_788;
                    /* try { // try from 00148ea9 to 00148edf has its CatchHandler @ 0014a696 */
          record_quote_outcome
                    (lVar24,local_828,local_820,0,(byte)pcStack_798,pcStack_788,local_780,local_6d8,
                     pcStack_6d0);
          local_818 = (undefined8 *******)(*(code *)PTR_round_with_step_f64_001ef798)(local_818,1);
          uVar27 = 1;
          if (bVar8 - 1 < 2) {
            local_800 = local_470;
          }
          else if (bVar8 == 0) {
            local_800 = DAT_00118418;
          }
          else {
            uVar27 = 0;
          }
          dVar39 = (double)CONCAT44(uStack_6f4,local_6f8);
          dVar14 = dVar39;
          if (dVar39 <= 0.0) {
            dVar14 = 0.0;
          }
          dVar37 = (double)(~-(ulong)(local_4e0 < 0.0) & (ulong)local_4e0 |
                           -(ulong)(local_4e0 < 0.0) & DAT_00118410) - dVar14;
          dVar14 = ((double)(~-(ulong)(local_4d8 < 0.0) & (ulong)local_4d8 |
                            -(ulong)(local_4d8 < 0.0) & DAT_00118410) / local_6e8) / local_7f0 -
                   dVar14;
          dVar40 = (double)(~-(ulong)(local_4f0 < 0.0) & (ulong)local_4f0 |
                           -(ulong)(local_4f0 < 0.0) & DAT_00118410);
          dVar41 = ((double)(~-(ulong)(local_4e8 < 0.0) & (ulong)local_4e8 |
                            -(ulong)(local_4e8 < 0.0) & DAT_00118410) / local_6e8) / local_7f0;
          if (dVar41 <= DAT_00118480) {
            dVar41 = DAT_00118480;
          }
          dVar43 = (double)(~-(ulong)(local_4d0 < 0.0) & (ulong)local_4d0 |
                           -(ulong)(local_4d0 < 0.0) & DAT_00118410);
          dVar42 = ((double)(~-(ulong)(local_4c8 < 0.0) & (ulong)local_4c8 |
                            DAT_00118410 & -(ulong)(local_4c8 < 0.0)) / local_6e8) / local_7f0;
          if (dVar42 <= DAT_00118480) {
            dVar42 = DAT_00118480;
          }
          dVar38 = dVar14;
          if (dVar37 <= dVar14) {
            dVar38 = dVar37;
          }
          dVar14 = (double)(~-(ulong)NAN(dVar37) & (ulong)dVar38 |
                           -(ulong)NAN(dVar37) & (ulong)dVar14);
          if (dVar41 <= dVar40) {
            dVar40 = dVar41;
          }
          if (dVar40 <= dVar14) {
            dVar14 = dVar40;
          }
          if (dVar42 <= dVar43) {
            dVar43 = dVar42;
          }
          if (0.0 <= dVar39) {
            dVar39 = 0.0;
          }
          if ((double)((ulong)dVar39 ^ _DAT_00118b10) <= dVar43) {
            dVar43 = (double)((ulong)dVar39 ^ _DAT_00118b10);
          }
          dVar43 = dVar43 + dVar14;
          if (dVar43 <= 0.0) {
            dVar43 = 0.0;
          }
                    /* try { // try from 001499e5 to 00149aaf has its CatchHandler @ 0014a696 */
          uVar22 = (*(code *)PTR_get_quote_vol_001ef8c0)(dVar43,local_468,(ulong)pcVar10 & 0xff,1);
          if ((uVar22 & 1) != 0) {
            uVar32 = (*(code *)PTR_round_with_step_f64_001ef798)
                               (extraout_XMM0_Qa_00,(int)local_7c8,1);
            local_768 = apply_book_vol_cap(uVar32,(int)local_818,local_7c8,bVar8,1,local_140,
                                           local_610);
            pcVar10 = (code *)cancel_order_use_range
                                        (local_818,SUB84((double)local_7f8 - local_78,0),param_4,
                                         local_828,local_820,1,&local_710);
            if ((pcVar10 == (code *)0x0) &&
               ((bVar8 != 0 ||
                (pcVar10 = (code *)cancel_side(param_4,local_828,local_820,1,&local_710),
                pcVar10 == (code *)0x0)))) {
              lVar24 = live_pending_counts(param_4,local_828,local_820,local_708,local_700);
              if ((DAT_00118470 < (double)(_DAT_001185a0 & local_768)) && (lVar24 == 0)) {
                local_750 = (undefined8 ******)(*(code *)PTR_round_001ef8c8)(local_7b8._0_8_);
                local_7a0 = &local_7e8;
                pcStack_798 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                local_790 = &local_750;
                pcStack_788 = (code *)PTR_fmt_001ef7e8;
                local_780 = &local_6d8;
                pcStack_778 = _<&T_as_core::fmt::Display>::fmt;
                local_748 = &DAT_001e99a8;
                dStack_740 = 1.48219693752374e-323;
                local_728 = 0;
                uStack_730 = 3;
                    /* try { // try from 00149b85 to 00149cfb has its CatchHandler @ 0014a696 */
                local_738 = &local_7a0;
                (*(code *)PTR_format_inner_001ef760)(&local_1a0,&local_748);
                local_200 = 0x700;
                local_230 = (double)local_818;
                local_228 = local_768;
                local_220 = local_7f0;
                local_218 = local_6e0;
                local_210 = local_318;
                local_208 = local_500;
                local_248 = local_1a0;
                uStack_240 = uStack_198;
                local_238 = local_190;
                pcVar10 = (code *)(*(code *)PTR_place_order_iap_with_target_001ef8d0)
                                            (local_800,param_4,&local_248,uVar27);
                if (pcVar10 != (code *)0x0) goto LAB_0014a263;
                if (local_400 != '\0') {
                  (*(code *)PTR_clone_001ef7b8)
                            (local_670,&local_830,&PTR_s_strategies_index_strategy_strate_001e99d8);
                  local_748 = local_7f8;
                  dStack_740 = local_7f0;
                  local_738 = local_7d0;
                  alloc::collections::btree::map::BTreeMap<K,V,A>::insert
                            (&local_7a0,local_7c0 + 0x278,local_670,&local_748);
                }
              }
LAB_0014a50c:
              if (local_7e8 != (undefined8 *******)0x0) {
                (*(code *)PTR___rust_dealloc_001ef6a0)(pcStack_7e0,local_7e8,1);
              }
switchD_00148dc0_caseD_4:
                    /* try { // try from 0014a526 to 0014a532 has its CatchHandler @ 0014a680 */
              _<hashbrown::raw::RawTable<T,A>as_core::ops::drop::Drop>::drop(&local_358);
              core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&local_710);
              if (local_120 != 0) {
                (*(code *)PTR___rust_dealloc_001ef6a0)(local_118,local_120,1);
              }
              if (local_830 != (undefined8 *******)0x0) {
                (*(code *)PTR___rust_dealloc_001ef6a0)(local_828,local_830,1);
              }
              if (local_6a0 != 0) {
                (*(code *)PTR___rust_dealloc_001ef6a0)(local_698,local_6a0,1);
              }
              core::ptr::drop_in_place<strategy_sm3_1::SM31Params>(local_610);
              core::ptr::drop_in_place<future_backtest_sdk::types::StrategyPara>(&local_648);
              return (code *)0x0;
            }
LAB_0014a263:
            if (local_7e8 != (undefined8 *******)0x0) {
              (*(code *)PTR___rust_dealloc_001ef6a0)(pcStack_7e0,local_7e8,1);
            }
            goto LAB_0014a27d;
          }
                    /* try { // try from 0014a619 to 0014a625 has its CatchHandler @ 0014a696 */
          (*(code *)PTR_unwrap_failed_001ef720)(&PTR_s_strategies_index_strategy_strate_001e9990);
          goto LAB_0014a679;
        case '\x01':
          if (((double)CONCAT44(uStack_6f4,local_6f8) <= DAT_00118470) ||
             (local_4f8 / _DAT_00118550 <= (double)local_7b8._0_8_)) {
            if ((double)CONCAT44(uStack_6f4,local_6f8) <= 0.0) goto switchD_00148dc0_caseD_4;
                    /* try { // try from 001490d9 to 00149119 has its CatchHandler @ 0014a67b */
            quote::get_quote_price_one_shot_v31
                      (local_818,uVar33,local_7f0,local_7f8,local_508,local_510,&local_7a0,1,
                       &local_318,local_800,local_7c0 + 0x218);
            pcVar10 = pcStack_798;
            local_818 = local_7a0;
            bVar4 = (byte)pcStack_798;
            uVar22 = (ulong)pcStack_798 & 0xff;
            local_7d8 = local_780;
            local_7e8 = local_790;
            pcStack_7e0 = pcStack_788;
                    /* try { // try from 00149167 to 001491a0 has its CatchHandler @ 0014a692 */
            record_quote_outcome
                      (lVar24,local_828,local_820,1,uVar22,pcStack_788,local_780,local_6d8,
                       pcStack_6d0);
            local_818 = (undefined8 *******)
                        (*(code *)PTR_round_with_step_f64_001ef798)(local_818,(int)local_770,1);
            uVar27 = 1;
            if (bVar4 - 1 < 2) {
              local_800 = local_470;
            }
            else if (bVar4 == 0) {
              local_800 = DAT_00118418;
            }
            else {
              uVar27 = 0;
            }
            uVar15 = -(ulong)(local_4d0 < (double)((ulong)local_4d0 ^ _DAT_00118b10));
            dVar40 = (double)(uVar15 & DAT_00118428 | ~uVar15 & ((ulong)local_4d0 ^ _DAT_00118b10));
            uVar15 = -(ulong)(local_4c8 < (double)((ulong)local_4c8 ^ _DAT_00118b10));
            dVar39 = ((double)(uVar15 & DAT_00118428 | ~uVar15 & ((ulong)local_4c8 ^ _DAT_00118b10))
                     / local_6e8) / (double)local_7f8;
            dVar14 = dVar39;
            if (dVar39 <= dVar40) {
              dVar14 = dVar40;
            }
            dVar39 = (double)(~-(ulong)NAN(dVar40) & (ulong)dVar14 |
                             -(ulong)NAN(dVar40) & (ulong)dVar39);
            dVar14 = (double)CONCAT44(uStack_6f4,local_6f8);
            if (dVar14 <= 0.0) {
              dVar14 = 0.0;
            }
            if (dVar39 <= (double)((ulong)dVar14 ^ _DAT_00118b10)) {
              dVar39 = (double)((ulong)dVar14 ^ _DAT_00118b10);
            }
                    /* try { // try from 0014a1a4 to 0014a25a has its CatchHandler @ 0014a692 */
            uVar32 = (*(code *)PTR_round_with_step_f64_001ef798)(dVar39,(int)local_7c8,1);
            uVar15 = (*(code *)PTR_get_quote_vol_001ef8c0)(uVar32,local_468,(ulong)pcVar10 & 0xff,1)
            ;
            if ((uVar15 & 1) != 0) {
              uVar32 = (*(code *)PTR_round_with_step_f64_001ef798)
                                 (extraout_XMM0_Qa_02,(int)local_7c8,1);
              local_768 = apply_book_vol_cap(uVar32,(int)local_818,local_7c8,uVar22,0,local_140,
                                             local_610);
              pcVar10 = (code *)cancel_order_use_range
                                          (local_818,SUB84(local_c8 - local_7f0,0),param_4,local_828
                                           ,local_820,0,&local_710);
                    /* try { // try from 0014a5f4 to 0014a607 has its CatchHandler @ 0014a692 */
              if ((pcVar10 == (code *)0x0) &&
                 ((bVar4 != 0 ||
                  (pcVar10 = (code *)cancel_side(param_4,local_828,local_820,0,&local_710),
                  pcVar10 == (code *)0x0)))) {
                    /* try { // try from 0014a2c2 to 0014a2cb has its CatchHandler @ 0014a692 */
                live_pending_counts(param_4,local_828,local_820,local_708,local_700);
                if ((DAT_00118470 < (double)(_DAT_001185a0 & local_768)) && (extraout_RDX_00 == 0))
                {
                  dVar14 = (double)(*(code *)PTR_round_001ef8c8)
                                             ((double)local_7b8._0_8_ * _DAT_001184d0);
                  local_750 = (undefined8 ******)(dVar14 / _DAT_001184d0);
                  local_7a0 = &local_7e8;
                  pcStack_798 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                  local_790 = &local_750;
                  pcStack_788 = (code *)PTR_fmt_001ef7e8;
                  local_780 = &local_6d8;
                  pcStack_778 = _<&T_as_core::fmt::Display>::fmt;
                  local_748 = &DAT_001e99a8;
                  dStack_740 = 1.48219693752374e-323;
                  local_728 = 0;
                  uStack_730 = 3;
                    /* try { // try from 0014a3b1 to 0014a50b has its CatchHandler @ 0014a692 */
                  local_738 = &local_7a0;
                  (*(code *)PTR_format_inner_001ef760)(&local_170,&local_748);
                  local_3af = (bVar8 != 0) * '\x03' + '\x05';
                  local_3b0 = 1;
                  local_3e0 = (double)local_818;
                  local_3d8 = local_768;
                  local_3d0 = local_7f8;
                  local_3c8 = local_6e0;
                  local_3c0 = dStack_310;
                  local_3b8 = local_500;
                  local_3f8 = local_170;
                  uStack_3f0 = uStack_168;
                  local_3e8 = local_160;
                  pcVar10 = (code *)(*(code *)PTR_place_order_iap_with_target_001ef8d0)
                                              (local_800,param_4,&local_3f8,uVar27);
                  if (pcVar10 != (code *)0x0) goto LAB_0014a263;
                  if (local_400 != '\0') {
                    (*(code *)PTR_clone_001ef7b8)
                              (local_670,&local_830,&PTR_s_strategies_index_strategy_strate_001e9a08
                              );
                    local_748 = local_7f8;
                    dStack_740 = local_7f0;
                    local_738 = local_7d0;
                    alloc::collections::btree::map::BTreeMap<K,V,A>::insert
                              (&local_7a0,local_7c0 + 0x278,local_670,&local_748);
                  }
                }
                goto LAB_0014a50c;
              }
              goto LAB_0014a263;
            }
                    /* try { // try from 0014a646 to 0014a652 has its CatchHandler @ 0014a692 */
            (*(code *)PTR_unwrap_failed_001ef720)(&PTR_s_strategies_index_strategy_strate_001e99f0);
            goto LAB_0014a679;
          }
          break;
        case '\x02':
          if (((double)CONCAT44(uStack_6f4,local_6f8) <= DAT_00118470) ||
             (local_4f8 / _DAT_00118550 <= (double)local_7b8._0_8_)) {
                    /* try { // try from 00149229 to 00149269 has its CatchHandler @ 0014a67b */
            quote::get_quote_price_one_shot_v31
                      (local_818,uVar33,local_7f0,local_7f8,local_508,local_510,&local_7a0,2,
                       &local_318,local_800,local_7c0 + 0x218);
            pcVar10 = pcStack_798;
            local_818 = local_7a0;
            bVar8 = (byte)pcStack_798;
            local_7d8 = local_780;
            local_7e8 = local_790;
            pcStack_7e0 = pcStack_788;
                    /* try { // try from 001492b6 to 001492ef has its CatchHandler @ 0014a698 */
            record_quote_outcome
                      (lVar24,local_828,local_820,2,(byte)pcStack_798,pcStack_788,local_780,
                       local_6d8,pcStack_6d0);
            local_818 = (undefined8 *******)
                        (*(code *)PTR_round_with_step_f64_001ef798)(local_818,(int)local_770,1);
            uVar27 = 1;
            if (bVar8 - 1 < 2) {
              local_800 = local_470;
            }
            else if (bVar8 == 0) {
              local_800 = DAT_00118418;
            }
            else {
              uVar27 = 0;
            }
            uVar22 = -(ulong)(local_4e0 < (double)((ulong)local_4e0 ^ _DAT_00118b10));
            dVar14 = (double)CONCAT44(uStack_6f4,local_6f8);
            dVar39 = dVar14;
            if (0.0 <= dVar14) {
              dVar39 = 0.0;
            }
            dVar37 = (double)(uVar22 & DAT_00118428 | ~uVar22 & ((ulong)local_4e0 ^ _DAT_00118b10))
                     - dVar39;
            uVar22 = -(ulong)(local_4d8 < (double)((ulong)local_4d8 ^ _DAT_00118b10));
            dVar39 = ((double)(uVar22 & DAT_00118428 | ~uVar22 & ((ulong)local_4d8 ^ _DAT_00118b10))
                     / local_6e8) / (double)local_7f8 - dVar39;
            dVar41 = (double)(~-(ulong)(local_4f0 < 0.0) & (ulong)local_4f0 |
                             -(ulong)(local_4f0 < 0.0) & DAT_00118410);
            dVar40 = ((double)(~-(ulong)(local_4e8 < 0.0) & (ulong)local_4e8 |
                              -(ulong)(local_4e8 < 0.0) & DAT_00118410) / local_6e8) /
                     (double)local_7f8;
            if (dVar40 <= DAT_00118480) {
              dVar40 = DAT_00118480;
            }
            dVar42 = (double)(~-(ulong)(local_4d0 < 0.0) & (ulong)local_4d0 |
                             -(ulong)(local_4d0 < 0.0) & DAT_00118410);
            dVar43 = ((double)(~-(ulong)(local_4c8 < 0.0) & (ulong)local_4c8 |
                              DAT_00118410 & -(ulong)(local_4c8 < 0.0)) / local_6e8) /
                     (double)local_7f8;
            if (dVar43 <= DAT_00118480) {
              dVar43 = DAT_00118480;
            }
            dVar38 = dVar39;
            if (dVar39 <= dVar37) {
              dVar38 = dVar37;
            }
            dVar39 = (double)(~-(ulong)NAN(dVar37) & (ulong)dVar38 |
                             -(ulong)NAN(dVar37) & (ulong)dVar39);
            if (dVar40 <= dVar41) {
              dVar41 = dVar40;
            }
            if (dVar39 <= (double)((ulong)dVar41 ^ _DAT_00118b10)) {
              dVar39 = (double)((ulong)dVar41 ^ _DAT_00118b10);
            }
            if (dVar43 <= dVar42) {
              dVar42 = dVar43;
            }
            if (dVar14 <= 0.0) {
              dVar14 = 0.0;
            }
            if (dVar14 <= dVar42) {
              dVar42 = dVar14;
            }
            dVar39 = dVar39 - dVar42;
            if (0.0 <= dVar39) {
              dVar39 = 0.0;
            }
                    /* try { // try from 0014953c to 0014961d has its CatchHandler @ 0014a698 */
            uVar32 = (*(code *)PTR_round_with_step_f64_001ef798)(dVar39,(int)local_7c8,1);
            uVar22 = (*(code *)PTR_get_quote_vol_001ef8c0)(uVar32,local_468,(ulong)pcVar10 & 0xff,1)
            ;
            if ((uVar22 & 1) != 0) {
              uVar32 = (*(code *)PTR_round_with_step_f64_001ef798)
                                 (extraout_XMM0_Qa,(int)local_7c8,1);
              local_768 = apply_book_vol_cap(uVar32,(int)local_818,local_7c8,bVar8,0,local_140,
                                             local_610);
              pcVar10 = (code *)cancel_order_use_range
                                          (local_818,SUB84(local_c8 - local_7f0,0),param_4,local_828
                                           ,local_820,0,&local_710);
                    /* try { // try from 00149d17 to 00149d2a has its CatchHandler @ 0014a698 */
              if ((pcVar10 == (code *)0x0) &&
                 ((bVar8 != 0 ||
                  (pcVar10 = (code *)cancel_side(param_4,local_828,local_820,0,&local_710),
                  pcVar10 == (code *)0x0)))) {
                live_pending_counts(param_4,local_828,local_820,local_708,local_700);
                if ((DAT_00118470 < (double)(_DAT_001185a0 & local_768)) && (extraout_RDX == 0)) {
                  dVar14 = (double)(*(code *)PTR_round_001ef8c8)
                                             ((double)local_7b8._0_8_ * _DAT_001184d0);
                  local_750 = (undefined8 ******)(dVar14 / _DAT_001184d0);
                  local_7a0 = &local_7e8;
                  pcStack_798 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                  local_790 = &local_750;
                  pcStack_788 = (code *)PTR_fmt_001ef7e8;
                  local_780 = &local_6d8;
                  pcStack_778 = _<&T_as_core::fmt::Display>::fmt;
                  local_748 = &DAT_001e99a8;
                  dStack_740 = 1.48219693752374e-323;
                  local_728 = 0;
                  uStack_730 = 3;
                    /* try { // try from 00149703 to 00149853 has its CatchHandler @ 0014a698 */
                  local_738 = &local_7a0;
                  (*(code *)PTR_format_inner_001ef760)(&local_188,&local_748);
                  local_1b0 = 0x802;
                  local_1e0 = (double)local_818;
                  local_1d8 = local_768;
                  local_1d0 = local_7f8;
                  local_1c8 = local_6e0;
                  local_1c0 = local_308;
                  local_1b8 = local_500;
                  local_1f8 = local_188;
                  uStack_1f0 = uStack_180;
                  local_1e8 = local_178;
                  pcVar10 = (code *)(*(code *)PTR_place_order_iap_with_target_001ef8d0)
                                              (local_800,param_4,&local_1f8,uVar27);
                  if (pcVar10 != (code *)0x0) goto LAB_0014a263;
                  if (local_400 != '\0') {
                    (*(code *)PTR_clone_001ef7b8)
                              (local_670,&local_830,&PTR_s_strategies_index_strategy_strate_001e9a38
                              );
                    local_748 = local_7f8;
                    dStack_740 = local_7f0;
                    local_738 = local_7d0;
                    alloc::collections::btree::map::BTreeMap<K,V,A>::insert
                              (&local_7a0,local_7c0 + 0x278,local_670,&local_748);
                  }
                }
                goto LAB_0014a50c;
              }
              goto LAB_0014a263;
            }
                    /* try { // try from 0014a628 to 0014a634 has its CatchHandler @ 0014a698 */
            (*(code *)PTR_unwrap_failed_001ef720)(&PTR_s_strategies_index_strategy_strate_001e9a20);
            goto LAB_0014a679;
          }
          break;
        case '\x03':
          if ((DAT_00118560 < (double)CONCAT44(uStack_6f4,local_6f8) ||
               DAT_00118560 == (double)CONCAT44(uStack_6f4,local_6f8)) ||
             (local_4f8 / _DAT_00118550 <= (double)local_7b8._0_8_)) {
            if (0.0 < (double)CONCAT44(uStack_6f4,local_6f8) ||
                (double)CONCAT44(uStack_6f4,local_6f8) == 0.0) goto switchD_00148dc0_caseD_4;
                    /* try { // try from 00148f76 to 00148fb6 has its CatchHandler @ 0014a67b */
            quote::get_quote_price_one_shot_v31
                      (local_818,uVar33,local_7f0,local_7f8,local_508,local_510,&local_7a0,3,
                       &local_318,local_800,local_7c0 + 0x218);
            pcVar10 = pcStack_798;
            local_818 = local_7a0;
            bVar4 = (byte)pcStack_798;
            uVar22 = (ulong)pcStack_798 & 0xff;
            local_7d8 = local_780;
            local_7e8 = local_790;
            pcStack_7e0 = pcStack_788;
                    /* try { // try from 00149004 to 0014903d has its CatchHandler @ 0014a694 */
            record_quote_outcome
                      (lVar24,local_828,local_820,3,uVar22,pcStack_788,local_780,local_6d8,
                       pcStack_6d0);
            local_818 = (undefined8 *******)(*(code *)PTR_round_with_step_f64_001ef798)(local_818,1)
            ;
            uVar27 = 1;
            if (bVar4 - 1 < 2) {
              local_800 = local_470;
            }
            else if (bVar4 == 0) {
              local_800 = DAT_00118418;
            }
            else {
              uVar27 = 0;
            }
            dVar14 = (double)(~-(ulong)(local_4d0 < 0.0) & (ulong)local_4d0 |
                             -(ulong)(local_4d0 < 0.0) & DAT_00118410);
            dVar40 = ((double)(~-(ulong)(local_4c8 < 0.0) & (ulong)local_4c8 |
                              DAT_00118410 & -(ulong)(local_4c8 < 0.0)) / local_6e8) / local_7f0;
            dVar39 = dVar40;
            if (dVar14 <= dVar40) {
              dVar39 = dVar14;
            }
            dVar14 = (double)(~-(ulong)NAN(dVar14) & (ulong)dVar39 |
                             -(ulong)NAN(dVar14) & (ulong)dVar40);
            dVar39 = (double)CONCAT44(uStack_6f4,local_6f8);
            if (0.0 <= dVar39) {
              dVar39 = 0.0;
            }
            if ((double)((ulong)dVar39 ^ _DAT_00118b10) <= dVar14) {
              dVar14 = (double)((ulong)dVar39 ^ _DAT_00118b10);
            }
                    /* try { // try from 00149dd0 to 00149ebb has its CatchHandler @ 0014a694 */
            uVar32 = (*(code *)PTR_round_with_step_f64_001ef798)(dVar14,(int)local_7c8,1);
            uVar15 = (*(code *)PTR_get_quote_vol_001ef8c0)(uVar32,local_468,(ulong)pcVar10 & 0xff,1)
            ;
            if ((uVar15 & 1) != 0) {
              uVar32 = (*(code *)PTR_round_with_step_f64_001ef798)
                                 (extraout_XMM0_Qa_01,(int)local_7c8,1);
              local_768 = apply_book_vol_cap(uVar32,(int)local_818,local_7c8,uVar22,1,local_140,
                                             local_610);
              pcVar10 = (code *)cancel_order_use_range
                                          (local_818,SUB84((double)local_7f8 - local_78,0),param_4,
                                           local_828,local_820,1,&local_710);
                    /* try { // try from 0014a5c5 to 0014a5db has its CatchHandler @ 0014a694 */
              if ((pcVar10 == (code *)0x0) &&
                 ((bVar4 != 0 ||
                  (pcVar10 = (code *)cancel_side(param_4,local_828,local_820,1,&local_710),
                  pcVar10 == (code *)0x0)))) {
                lVar24 = live_pending_counts(param_4,local_828,local_820,local_708,local_700);
                if ((DAT_00118470 < (double)(_DAT_001185a0 & local_768)) && (lVar24 == 0)) {
                  dVar14 = (double)(*(code *)PTR_round_001ef8c8)
                                             ((double)local_7b8._0_8_ * _DAT_001184d0);
                  local_750 = (undefined8 ******)(dVar14 / _DAT_001184d0);
                  local_7a0 = &local_7e8;
                  pcStack_798 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                  local_790 = &local_750;
                  pcStack_788 = (code *)PTR_fmt_001ef7e8;
                  local_780 = &local_6d8;
                  pcStack_778 = _<&T_as_core::fmt::Display>::fmt;
                  local_748 = &DAT_001e99a8;
                  dStack_740 = 1.48219693752374e-323;
                  local_728 = 0;
                  uStack_730 = 3;
                    /* try { // try from 00149fa1 to 0014a0fa has its CatchHandler @ 0014a694 */
                  local_738 = &local_7a0;
                  (*(code *)PTR_format_inner_001ef760)(&local_158,&local_748);
                  local_35f = bVar8 | 6;
                  local_360 = 3;
                  local_390 = (double)local_818;
                  local_388 = local_768;
                  local_380 = local_7f0;
                  local_378 = local_6e0;
                  local_370 = uStack_300;
                  local_368 = local_500;
                  local_3a8 = local_158;
                  uStack_3a0 = uStack_150;
                  local_398 = local_148;
                  pcVar10 = (code *)(*(code *)PTR_place_order_iap_with_target_001ef8d0)
                                              (local_800,param_4,&local_3a8,uVar27);
                  if (pcVar10 != (code *)0x0) goto LAB_0014a263;
                  if (local_400 != '\0') {
                    (*(code *)PTR_clone_001ef7b8)
                              (local_670,&local_830,&PTR_s_strategies_index_strategy_strate_001e9a68
                              );
                    local_748 = local_7f8;
                    dStack_740 = local_7f0;
                    local_738 = local_7d0;
                    alloc::collections::btree::map::BTreeMap<K,V,A>::insert
                              (&local_7a0,local_7c0 + 0x278,local_670,&local_748);
                  }
                }
                goto LAB_0014a50c;
              }
              goto LAB_0014a263;
            }
                    /* try { // try from 0014a637 to 0014a643 has its CatchHandler @ 0014a694 */
            (*(code *)PTR_unwrap_failed_001ef720)(&PTR_s_strategies_index_strategy_strate_001e9a50);
            goto LAB_0014a679;
          }
          break;
        case '\x04':
          goto switchD_00148dc0_caseD_4;
        }
        pcVar10 = (code *)0x0;
LAB_0014a27d:
                    /* try { // try from 0014a27d to 0014a289 has its CatchHandler @ 0014a680 */
        _<hashbrown::raw::RawTable<T,A>as_core::ops::drop::Drop>::drop(&local_358);
        core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&local_710);
      }
    }
    goto LAB_001489b6;
  }
LAB_00148984:
  pcVar10 = (code *)0x0;
  if (local_6c8 == 0) goto LAB_001489b6;
  lVar24 = *(long *)(local_6b8 + 0x748 + uVar15 * 8);
  local_6c8 = local_6c8 + -1;
  goto LAB_001488dd;
}




// ELF address 0x0000000000042ff0; strategy_sm3_1::DecisionTelemetry::inc

/* strategy_sm3_1::DecisionTelemetry::inc */

void __rustcall
strategy_sm3_1::DecisionTelemetry::inc
          (undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  long local_b0;
  long local_a8;
  long local_a0;
  undefined8 local_98;
  long local_90;
  undefined8 local_88;
  undefined1 local_80 [80];
  
  uVar7 = param_3 == 0;
  uVar4 = param_4;
  uVar6 = param_5;
  if (-1 < param_3) goto LAB_0014301e;
  uVar5 = 0;
  uVar7 = true;
  while( true ) {
    (*(code *)PTR_handle_error_001ef768)
              (uVar5,param_3,anon_ac6670d00a082a7ef9e2727059f64e7b_12_llvm_1358435023758527573);
    uVar4 = param_4;
    param_1 = uVar5;
    uVar6 = param_5;
LAB_0014301e:
    if ((bool)uVar7) break;
    param_4 = uVar4;
    param_5 = uVar6;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001ef6c0)();
    uVar5 = 1;
    lVar2 = (*(code *)PTR___rust_alloc_001ef698)(param_3,1);
    uVar7 = lVar2 == 0;
    if (!(bool)uVar7) {
LAB_0014305a:
      (*(code *)PTR_memcpy_001ef700)(lVar2);
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001ef6c0)();
      local_90 = (*(code *)PTR___rust_alloc_001ef698)(uVar6,1);
      if (local_90 == 0) {
                    /* try { // try from 001430e1 to 001430f5 has its CatchHandler @ 001430f8 */
        (*(code *)PTR_handle_error_001ef768)
                  (1,uVar6,anon_ac6670d00a082a7ef9e2727059f64e7b_12_llvm_1358435023758527573);
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      (*(code *)PTR_memcpy_001ef700)(local_90,uVar4,uVar6);
      local_b0 = param_3;
      local_a8 = lVar2;
      local_a0 = param_3;
      local_98 = uVar6;
      local_88 = uVar6;
      alloc::collections::btree::map::BTreeMap<K,V,A>::entry(local_80,param_1,&local_b0);
      plVar3 = (long *)alloc::collections::btree::map::entry::Entry<K,V,A>::or_default(local_80);
      *plVar3 = *plVar3 + 1;
      return;
    }
  }
  lVar2 = 1;
  goto LAB_0014305a;
}




// ELF address 0x0000000000042f90; strategy_sm3_1::default_wait_mode

/* strategy_sm3_1::default_wait_mode */

undefined8 * __rustcall strategy_sm3_1::default_wait_mode(undefined8 *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001ef6c0)();
  puVar2 = (undefined4 *)(*(code *)PTR___rust_alloc_001ef698)(7,1);
  if (puVar2 != (undefined4 *)0x0) {
    *(undefined4 *)((long)puVar2 + 3) = 0x72656972;
    *puVar2 = 0x72726162;
    *param_1 = 7;
    param_1[1] = puVar2;
    param_1[2] = 7;
    return param_1;
  }
  (*(code *)PTR_handle_error_001ef768)
            (1,7,anon_ac6670d00a082a7ef9e2727059f64e7b_12_llvm_1358435023758527573);
  pcVar1 = (code *)swi(3);
  puVar3 = (undefined8 *)(*pcVar1)();
  return puVar3;
}




// ELF address 0x0000000000043ea0; strategy_sm3_1::apply_book_vol_cap

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_sm3_1::apply_book_vol_cap */

void __rustcall
strategy_sm3_1::apply_book_vol_cap
          (double param_1,double param_2,byte param_3,char param_4,long param_5,long param_6)

{
  double dVar1;
  bool bVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  if (1 < param_3 - 1) {
    if (param_3 != 0) {
      return;
    }
    dVar6 = DAT_00118410;
    if (*(char *)(param_6 + 0x211) != '\0') {
      lVar3 = 0x98;
      if (param_4 != '\0') {
        lVar3 = 0x48;
      }
      dVar6 = 0.0;
      if (0.0 < *(double *)(param_5 + lVar3)) {
        dVar6 = *(double *)(param_5 + 8 + lVar3) + 0.0;
        dVar5 = *(double *)(param_5 + 0x10 + lVar3);
        if (0.0 < dVar5) {
          bVar2 = param_2 <= dVar5;
          if (param_4 != '\0') {
            bVar2 = dVar5 <= param_2;
          }
          if (bVar2) {
            dVar6 = dVar6 + *(double *)(param_5 + 0x18 + lVar3);
            dVar5 = *(double *)(param_5 + 0x20 + lVar3);
            if (0.0 < dVar5) {
              bVar2 = param_2 <= dVar5;
              if (param_4 != '\0') {
                bVar2 = dVar5 <= param_2;
              }
              if (bVar2) {
                dVar6 = dVar6 + *(double *)(param_5 + 0x28 + lVar3);
                dVar5 = *(double *)(param_5 + 0x30 + lVar3);
                if (0.0 < dVar5) {
                  bVar2 = param_2 <= dVar5;
                  if (param_4 != '\0') {
                    bVar2 = dVar5 <= param_2;
                  }
                  if (bVar2) {
                    dVar6 = dVar6 + *(double *)(param_5 + 0x38 + lVar3);
                    dVar5 = *(double *)(param_5 + 0x40 + lVar3);
                    if (0.0 < dVar5) {
                      bVar2 = param_2 <= dVar5;
                      if (param_4 != '\0') {
                        bVar2 = dVar5 <= param_2;
                      }
                      if (bVar2) {
                        dVar6 = dVar6 + *(double *)(param_5 + 0x48 + lVar3);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    dVar5 = *(double *)(param_6 + 0x208);
    goto joined_r0x001440d4;
  }
  if (*(char *)(param_6 + 0x211) == '\0') {
    return;
  }
  lVar3 = 0x48;
  if (param_4 != '\0') {
    lVar3 = 0x98;
  }
  dVar6 = 0.0;
  dVar5 = 0.0;
  if (0.0 < *(double *)(param_5 + lVar3)) {
    dVar5 = *(double *)(param_5 + 8 + lVar3) + 0.0;
    dVar4 = DAT_00118480;
    if (*(double *)(param_5 + 0x10 + lVar3) <= 0.0) goto LAB_00143ef9;
LAB_00144081:
    dVar5 = dVar5 + *(double *)(param_5 + 0x18 + lVar3);
    dVar4 = dVar4 + DAT_00118480;
    dVar1 = *(double *)(param_5 + 0x20 + lVar3);
  }
  else {
    dVar4 = 0.0;
    if (0.0 < *(double *)(param_5 + 0x10 + lVar3)) goto LAB_00144081;
LAB_00143ef9:
    dVar1 = *(double *)(param_5 + 0x20 + lVar3);
  }
  if (0.0 < dVar1) {
    dVar5 = dVar5 + *(double *)(param_5 + 0x28 + lVar3);
    dVar4 = dVar4 + DAT_00118480;
  }
  if (0.0 < dVar4) {
    dVar6 = dVar5 / dVar4;
  }
  dVar5 = *(double *)(param_6 + 0x1a8);
joined_r0x001440d4:
  if (0.0 < dVar5) {
    dVar4 = dVar5;
    if (dVar6 <= dVar5) {
      dVar4 = dVar6;
    }
    dVar6 = (double)(~-(ulong)NAN(dVar6) & (ulong)dVar4 | -(ulong)NAN(dVar6) & (ulong)dVar5);
  }
  if ((dVar6 == DAT_00118410) && (!NAN(dVar6) && !NAN(DAT_00118410))) {
    return;
  }
  dVar4 = (double)((ulong)param_1 & _DAT_001185a0);
  dVar5 = dVar6;
  if (dVar4 <= dVar6) {
    dVar5 = dVar4;
  }
  (*(code *)PTR_round_with_step_f64_001ef798)
            ((double)(~-(ulong)NAN(dVar4) & (ulong)dVar5 | -(ulong)NAN(dVar4) & (ulong)dVar6) *
             (double)(~-(ulong)NAN(param_1) &
                      (_DAT_00118b10 & (ulong)param_1 | SUB168(_s__00118a30,0)) |
                     DAT_00118508 & -(ulong)NAN(param_1)),1);
  return;
}




// ELF address 0x0000000000042f20; strategy_sm3_1::default_maker_scope

/* strategy_sm3_1::default_maker_scope */

undefined8 * __rustcall strategy_sm3_1::default_maker_scope(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001ef6c0)();
  puVar2 = (undefined8 *)(*(code *)PTR___rust_alloc_001ef698)(10,1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0x6e6f5f72656b616d;
    *(undefined2 *)(puVar2 + 1) = 0x796c;
    *param_1 = 10;
    param_1[1] = puVar2;
    param_1[2] = 10;
    return param_1;
  }
  (*(code *)PTR_handle_error_001ef768)
            (1,10,anon_ac6670d00a082a7ef9e2727059f64e7b_12_llvm_1358435023758527573);
  pcVar1 = (code *)swi(3);
  puVar2 = (undefined8 *)(*pcVar1)();
  return puVar2;
}




// ELF address 0x0000000000043930; strategy_sm3_1::live_pending_counts

/* strategy_sm3_1::live_pending_counts */

undefined1  [16] __rustcall
strategy_sm3_1::live_pending_counts
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  int iVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined1 auVar19 [16];
  long local_c0;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long *local_40;
  long local_38;
  
  (*(code *)PTR_pending_orders_001ef770)(&local_48,param_1,param_2,param_3);
                    /* try { // try from 00143967 to 0014397a has its CatchHandler @ 00143e79 */
  (*(code *)PTR_cancel_pending_ids_001ef790)(&local_60,param_1,param_2,param_3);
  lVar7 = local_50;
  lVar17 = local_58;
  puVar8 = PTR___rust_dealloc_001ef6a0;
  plVar14 = local_40 + local_38 * 0xb;
  if (local_38 == 0) {
    local_c0 = 0;
    lVar12 = 0;
    plVar15 = local_40;
LAB_00143cea:
    puVar8 = PTR___rust_dealloc_001ef6a0;
    if (plVar14 != plVar15) {
      uVar11 = (ulong)((long)plVar14 - (long)plVar15) / 0x58;
      plVar15 = plVar15 + 4;
      do {
        if (plVar15[-4] != 0) {
          (*(code *)puVar8)(plVar15[-3],plVar15[-4],1);
        }
        if (plVar15[-1] != 0) {
          (*(code *)puVar8)(*plVar15,plVar15[-1],1);
        }
        plVar15 = plVar15 + 0xb;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
  }
  else {
    if (param_5 != 0) {
      lVar6 = local_50 * 0x18;
      lVar12 = 0;
      local_c0 = 0;
      plVar10 = local_40;
LAB_00143a27:
      do {
        plVar15 = plVar10 + 0xb;
        lVar2 = *plVar10;
        if (lVar2 == -0x8000000000000000) goto LAB_00143cea;
        lVar3 = plVar10[1];
        lVar4 = plVar10[2];
        lVar5 = plVar10[3];
        lVar16 = plVar10[4];
        bVar1 = *(byte *)(plVar10 + 10);
        lVar13 = 0;
        do {
          plVar10 = plVar15;
          if ((*(long *)(param_4 + 0x10 + lVar13) == lVar4) &&
             (iVar9 = (*(code *)PTR_bcmp_001ef778)
                                (*(undefined8 *)(param_4 + 8 + lVar13),lVar3,lVar4), iVar9 == 0))
          goto LAB_00143ae7;
          lVar13 = lVar13 + 0x18;
        } while (param_5 * 0x18 != lVar13);
        if (lVar7 != 0) {
          lVar13 = 0;
          do {
            if ((*(long *)(lVar17 + 0x10 + lVar13) == lVar4) &&
               (iVar9 = (*(code *)PTR_bcmp_001ef778)
                                  (*(undefined8 *)(lVar17 + 8 + lVar13),lVar3,lVar4), iVar9 == 0))
            goto LAB_00143ae7;
            lVar13 = lVar13 + 0x18;
          } while (lVar6 != lVar13);
        }
        if (lVar2 != 0) {
          (*(code *)PTR___rust_dealloc_001ef6a0)(lVar3,lVar2,1);
        }
        if (lVar5 != 0) {
          (*(code *)PTR___rust_dealloc_001ef6a0)(lVar16,lVar5,1);
        }
        lVar12 = lVar12 + (ulong)bVar1;
        local_c0 = local_c0 + (ulong)(bVar1 ^ 1);
      } while (plVar15 != plVar14);
      goto LAB_00143de6;
    }
    if (local_50 == 0) {
      lVar12 = 0;
      local_c0 = 0;
      plVar15 = local_40;
      do {
        plVar10 = plVar15 + 0xb;
        lVar17 = plVar15[3];
        lVar7 = plVar15[4];
        bVar1 = *(byte *)(plVar15 + 10);
        if (*plVar15 != 0) {
          (*(code *)puVar8)(plVar15[1],*plVar15,1);
        }
        if (lVar17 != 0) {
          (*(code *)puVar8)(lVar7,lVar17,1);
        }
        lVar12 = lVar12 + (ulong)bVar1;
        local_c0 = local_c0 + (ulong)(bVar1 ^ 1);
        plVar15 = plVar10;
      } while (plVar10 != plVar14);
    }
    else {
      lVar7 = local_50 * 0x18;
      lVar12 = 0;
      local_c0 = 0;
      plVar10 = local_40;
LAB_00143be0:
      do {
        plVar15 = plVar10 + 0xb;
        lVar6 = *plVar10;
        if (lVar6 == -0x8000000000000000) goto LAB_00143cea;
        lVar2 = plVar10[1];
        lVar3 = plVar10[2];
        lVar4 = plVar10[3];
        lVar5 = plVar10[4];
        bVar1 = *(byte *)(plVar10 + 10);
        lVar16 = 0;
        do {
          plVar10 = plVar15;
          if ((*(long *)(lVar17 + 0x10 + lVar16) == lVar3) &&
             (iVar9 = (*(code *)PTR_bcmp_001ef778)(*(undefined8 *)(lVar17 + 8 + lVar16),lVar2,lVar3)
             , iVar9 == 0)) {
            if (lVar6 != 0) {
              (*(code *)PTR___rust_dealloc_001ef6a0)(lVar2,lVar6,1);
            }
            if (lVar4 != 0) {
              (*(code *)PTR___rust_dealloc_001ef6a0)(lVar5,lVar4,1);
            }
            if (plVar15 != plVar14) goto LAB_00143be0;
            goto LAB_00143cea;
          }
          lVar16 = lVar16 + 0x18;
        } while (lVar7 != lVar16);
        if (lVar6 != 0) {
          (*(code *)PTR___rust_dealloc_001ef6a0)(lVar2,lVar6,1);
        }
        if (lVar4 != 0) {
          (*(code *)PTR___rust_dealloc_001ef6a0)(lVar5,lVar4,1);
        }
        lVar12 = lVar12 + (ulong)bVar1;
        local_c0 = local_c0 + (ulong)(bVar1 ^ 1);
      } while (plVar15 != plVar14);
    }
  }
LAB_00143de6:
  if (local_48 != 0) {
    (*(code *)PTR___rust_dealloc_001ef6a0)(local_40,local_48 * 0x58,8);
  }
  puVar8 = PTR___rust_dealloc_001ef6a0;
  if (local_50 != 0) {
    puVar18 = (undefined8 *)(local_58 + 8);
    lVar17 = local_50;
    do {
      if (puVar18[-1] != 0) {
        (*(code *)puVar8)(*puVar18,puVar18[-1],1);
      }
      puVar18 = puVar18 + 3;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
  if (local_60 != 0) {
    (*(code *)PTR___rust_dealloc_001ef6a0)(local_58,local_60 * 0x18,8);
  }
  auVar19._8_8_ = local_c0;
  auVar19._0_8_ = lVar12;
  return auVar19;
LAB_00143ae7:
  if (lVar2 != 0) {
    (*(code *)PTR___rust_dealloc_001ef6a0)(lVar3,lVar2,1);
  }
  if (lVar5 != 0) {
    (*(code *)PTR___rust_dealloc_001ef6a0)(lVar16,lVar5,1);
  }
  if (plVar15 == plVar14) goto LAB_00143cea;
  goto LAB_00143a27;
}




// ELF address 0x00000000000434c0; strategy_sm3_1::cancel_order_use_range

/* strategy_sm3_1::cancel_order_use_range */

long __rustcall
strategy_sm3_1::cancel_order_use_range
          (double param_1,double param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
          byte param_6,long *param_7)

{
  byte bVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  byte local_e1;
  double local_e0;
  long *local_d8;
  long *local_d0;
  long *local_c8;
  long local_c0;
  long *local_b8;
  long local_b0;
  double local_a8;
  double local_a0;
  long *local_98;
  long *local_90;
  long local_88;
  long *local_80;
  byte *local_78;
  double local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  long local_48;
  long *local_40;
  long local_38;
  
  local_e1 = param_6;
  local_e0 = param_2;
  local_a8 = param_1;
  lVar5 = cancel_side();
  if (lVar5 == 0) {
    local_58 = param_3;
    (*(code *)PTR_pending_orders_001ef770)(&local_48,param_3,param_4,param_5);
    plVar9 = local_40 + local_38 * 0xb;
    local_98 = local_40;
    local_90 = local_40;
    local_88 = local_48;
    local_78 = &local_e1;
    local_80 = plVar9;
    if (local_38 == 0) {
      lVar5 = 0;
      plVar12 = local_40;
      lVar13 = local_48;
      plVar7 = local_40;
LAB_001437fa:
      puVar3 = PTR___rust_dealloc_001ef6a0;
      if (plVar9 != plVar12) {
        uVar10 = (ulong)((long)plVar9 - (long)plVar12) / 0x58;
        plVar12 = plVar12 + 4;
        do {
          if (plVar12[-4] != 0) {
            (*(code *)puVar3)(plVar12[-3],plVar12[-4],1);
          }
          if (plVar12[-1] != 0) {
            (*(code *)puVar3)(*plVar12,plVar12[-1],1);
          }
          plVar12 = plVar12 + 0xb;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
    }
    else {
      local_c0 = local_48;
      local_70 = local_a8 + local_e0;
      local_a8 = local_a8 - local_e0;
      local_b8 = local_40;
      plVar7 = local_40;
      local_c8 = param_7;
      local_68 = param_4;
      local_60 = param_5;
      do {
        while( true ) {
          local_d8 = plVar7;
          plVar12 = local_40 + 0xb;
          lVar13 = *local_40;
          lVar2 = local_40[1];
          lVar11 = local_40[3];
          local_e0 = (double)local_40[4];
          bVar1 = *(byte *)(local_40 + 10);
          if (bVar1 == local_e1) break;
          if (lVar13 != 0) {
            (*(code *)PTR___rust_dealloc_001ef6a0)(lVar2,lVar13,1);
          }
          if (lVar11 != 0) {
            (*(code *)PTR___rust_dealloc_001ef6a0)(local_e0,lVar11,1);
          }
          plVar7 = local_d8;
          local_40 = plVar12;
          if (plVar12 == plVar9) goto LAB_001437b5;
        }
        plVar7 = (long *)local_40[2];
        local_a0 = (double)local_40[6];
        local_d8 = plVar7;
        local_d0 = plVar9;
        local_b0 = lVar11;
        if (local_c8[2] != 0) {
          lVar5 = local_c8[1];
          lVar6 = local_c8[2] * 0x18;
          lVar8 = 0;
          local_50 = lVar6;
          do {
            if ((*(long **)(lVar5 + 0x10 + lVar8) == plVar7) &&
               (iVar4 = (*(code *)PTR_bcmp_001ef778)(*(undefined8 *)(lVar5 + 8 + lVar8),lVar2),
               lVar6 = local_50, plVar7 = local_d8, lVar11 = local_b0, iVar4 == 0))
            goto LAB_001436e0;
            lVar8 = lVar8 + 0x18;
          } while (lVar6 != lVar8);
        }
        if ((bVar1 & 1) == 0) {
          if (local_a0 <= local_70) goto LAB_001436e0;
LAB_00143712:
                    /* try { // try from 00143712 to 00143735 has its CatchHandler @ 001438ce */
          lVar5 = (*(code *)PTR_cancel_order_001ef780)(local_58,local_68,local_60,lVar2,plVar7);
          plVar7 = local_c8;
          plVar9 = local_d0;
          if (lVar5 != 0) {
            local_90 = plVar12;
            if (lVar13 != 0) {
              (*(code *)PTR___rust_dealloc_001ef6a0)(lVar2,lVar13,1);
            }
            lVar13 = local_c0;
            plVar7 = local_b8;
            if (lVar11 != 0) {
              (*(code *)PTR___rust_dealloc_001ef6a0)(local_e0,lVar11,1);
              lVar13 = local_c0;
              plVar7 = local_b8;
            }
            goto LAB_001437fa;
          }
          lVar5 = local_c8[2];
          if (lVar5 == *local_c8) {
                    /* try { // try from 00143753 to 00143762 has its CatchHandler @ 001438cc */
            (*(code *)PTR_grow_one_001ef788)
                      (local_c8,&PTR_s_strategies_index_strategy_strate_001e9308);
          }
          lVar6 = plVar7[1];
          *(long *)(lVar6 + lVar5 * 0x18) = lVar13;
          *(long *)(lVar6 + 8 + lVar5 * 0x18) = lVar2;
          *(long **)(lVar6 + 0x10 + lVar5 * 0x18) = local_d8;
          plVar7[2] = lVar5 + 1;
          plVar9 = local_d0;
        }
        else {
          if (local_a0 < local_a8) goto LAB_00143712;
LAB_001436e0:
          plVar9 = local_d0;
          if (lVar13 != 0) {
            (*(code *)PTR___rust_dealloc_001ef6a0)(lVar2,lVar13,1);
          }
        }
        if (lVar11 != 0) {
          (*(code *)PTR___rust_dealloc_001ef6a0)(local_e0,lVar11,1);
        }
        plVar7 = plVar12;
        local_40 = plVar12;
      } while (plVar12 != plVar9);
LAB_001437b5:
      lVar5 = 0;
      local_90 = plVar7;
      lVar13 = local_c0;
      plVar7 = local_b8;
    }
    if (lVar13 != 0) {
      (*(code *)PTR___rust_dealloc_001ef6a0)(plVar7,lVar13 * 0x58,8);
    }
  }
  return lVar5;
}




// ELF address 0x0000000000042ec0; strategy_sm3_1::default_taker_veto_scope

/* strategy_sm3_1::default_taker_veto_scope */

undefined8 * __rustcall strategy_sm3_1::default_taker_veto_scope(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001ef6c0)();
  puVar2 = (undefined8 *)(*(code *)PTR___rust_alloc_001ef698)(9,1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0x696d5f72656b6174;
    *(undefined1 *)(puVar2 + 1) = 100;
    *param_1 = 9;
    param_1[1] = puVar2;
    param_1[2] = 9;
    return param_1;
  }
  (*(code *)PTR_handle_error_001ef768)
            (1,9,anon_ac6670d00a082a7ef9e2727059f64e7b_12_llvm_1358435023758527573);
  pcVar1 = (code *)swi(3);
  puVar2 = (undefined8 *)(*pcVar1)();
  return puVar2;
}




// ELF address 0x000000000006a060; strategy_sm3_1::quote::apply_passive_gate

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_sm3_1::quote::apply_passive_gate */

void __rustcall
strategy_sm3_1::quote::apply_passive_gate
          (double param_1,double param_2,double param_3,double param_4,double param_5,double param_6
          ,double *param_7,char param_8,undefined1 param_9,double *param_10,byte param_11,
          byte param_12,long param_13)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  double dVar4;
  undefined1 uVar5;
  undefined4 *puVar6;
  byte bVar7;
  undefined *puStack_110;
  undefined8 uStack_108;
  double **ppdStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  double *pdStack_e0;
  code *pcStack_d8;
  char **ppcStack_d0;
  code *pcStack_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  char *pcStack_a8;
  undefined8 uStack_a0;
  undefined4 auStack_98 [6];
  undefined4 auStack_80 [6];
  undefined4 auStack_68 [6];
  undefined4 auStack_50 [6];
  undefined4 auStack_38 [6];
  
  if ((param_12 & *(char *)(param_13 + 0x28) != '\0') == 0) goto LAB_0016a3c7;
  bVar7 = *(double *)(param_13 + 0x20) < param_6 & param_11;
  param_11 = param_6 < (double)(_DAT_00118b10 ^ (ulong)*(double *)(param_13 + 0x20)) & param_11;
  pdStack_e0 = param_10;
                    /* WARNING: Switch is manually overridden */
  switch(*(char *)(param_13 + 0x28)) {
  case '\x01':
    if (bVar7 == 0) goto LAB_0016a3c7;
    pcStack_d8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    puStack_110 = &UNK_001e9d20;
    uStack_108 = 2;
    uStack_f0 = 0;
    ppdStack_100 = &pdStack_e0;
    uStack_f8 = 1;
                    /* try { // try from 0016a11f to 0016a38d has its CatchHandler @ 0016a3f7 */
    puVar6 = auStack_98;
    (*(code *)PTR_format_inner_001ef760)(puVar6,&puStack_110);
    break;
  case '\x02':
    if (param_11 == 0) goto LAB_0016a3c7;
    pcStack_d8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    puStack_110 = &UNK_001e9d40;
    uStack_108 = 2;
    uStack_f0 = 0;
    ppdStack_100 = &pdStack_e0;
    uStack_f8 = 1;
    puVar6 = auStack_80;
    (*(code *)PTR_format_inner_001ef760)(puVar6,&puStack_110);
    break;
  case '\x03':
override_jmp_0016a0c6_case_2:
    if (param_11 == 0) {
LAB_0016a3c7:
      param_7[4] = param_10[2];
      dVar4 = param_10[1];
      param_7[2] = *param_10;
      param_7[3] = dVar4;
      *param_7 = param_5;
      *(undefined1 *)(param_7 + 1) = param_9;
      return;
    }
    dStack_c0 = *(double *)(param_13 + 0x18);
    pcStack_d8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    puStack_110 = &UNK_001e9d60;
    uStack_108 = 2;
    uStack_f0 = 0;
    ppdStack_100 = &pdStack_e0;
    uStack_f8 = 1;
    puVar6 = auStack_38;
    dStack_b8 = param_1;
    dStack_b0 = param_2;
    (*(code *)PTR_format_inner_001ef760)(puVar6,&puStack_110);
    if (param_8 == '\0') {
      param_4 = dStack_b0 + param_3 * dStack_c0;
      uVar5 = 1;
    }
    else {
      param_4 = dStack_b8 - param_3 * dStack_c0;
      uVar5 = 1;
    }
    goto LAB_0016a395;
  case '\x04':
    if (bVar7 == 0) goto override_jmp_0016a0c6_case_2;
    pcStack_d8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    puStack_110 = &UNK_001e9d20;
    uStack_108 = 2;
    uStack_f0 = 0;
    ppdStack_100 = &pdStack_e0;
    uStack_f8 = 1;
    puVar6 = auStack_68;
    (*(code *)PTR_format_inner_001ef760)(puVar6,&puStack_110);
    break;
  case '\x05':
    if (bVar7 == 0) {
      if (param_11 == 0) goto LAB_0016a3c7;
      pcStack_a8 = "XD";
    }
    else {
      pcStack_a8 = "NXD";
      if (param_11 != 0) {
        pcStack_a8 = "XD";
      }
    }
    uStack_a0 = 1;
    pcStack_d8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    ppcStack_d0 = &pcStack_a8;
    pcStack_c8 = _<&T_as_core::fmt::Display>::fmt;
    puStack_110 = &UNK_00118088;
    uStack_108 = 2;
    uStack_f0 = 0;
    ppdStack_100 = &pdStack_e0;
    uStack_f8 = 2;
    puVar6 = auStack_50;
    (*(code *)PTR_format_inner_001ef760)(puVar6,&puStack_110);
  }
  uVar5 = 3;
LAB_0016a395:
  *param_7 = param_4;
  *(undefined1 *)(param_7 + 1) = uVar5;
  param_7[4] = *(double *)(puVar6 + 4);
  uVar1 = puVar6[1];
  uVar2 = puVar6[2];
  uVar3 = puVar6[3];
  *(undefined4 *)(param_7 + 2) = *puVar6;
  *(undefined4 *)((long)param_7 + 0x14) = uVar1;
  *(undefined4 *)(param_7 + 3) = uVar2;
  *(undefined4 *)((long)param_7 + 0x1c) = uVar3;
  if (*param_10 != 0.0) {
    (*(code *)PTR___rust_dealloc_001ef6a0)(param_10[1],*param_10,1);
  }
  return;
}




// ELF address 0x000000000006a420; strategy_sm3_1::quote::get_quote_price_one_shot_v31

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_sm3_1::quote::get_quote_price_one_shot_v31 */

double * __rustcall
strategy_sm3_1::quote::get_quote_price_one_shot_v31
          (double param_1,double param_2,double param_3,double param_4,double param_5,double param_6
          ,double unaff_XMM6_Qa,double unaff_XMM7_Qa,double *param_9,undefined1 param_10,
          double *param_11,ulong param_12,ulong *param_13,undefined8 param_14,undefined8 param_15)

{
  char cVar1;
  undefined1 uVar2;
  long lVar3;
  byte bVar4;
  undefined1 *puVar5;
  byte bVar6;
  undefined8 uVar7;
  char cVar8;
  bool bVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  ulong unaff_XMM7_Qb;
  undefined4 local_16c;
  double local_168;
  double local_160;
  double local_158;
  undefined **local_150;
  undefined8 local_148;
  double **local_140;
  undefined8 local_138;
  undefined8 local_130;
  double *local_120;
  undefined *local_118;
  double *local_110;
  undefined *local_108;
  undefined4 *local_100;
  undefined *local_f8;
  char **local_f0;
  code *local_e8;
  double local_e0;
  double local_d8;
  undefined8 uStack_d0;
  double local_c8;
  double local_b8;
  ulong uStack_b0;
  double local_a8;
  undefined8 uStack_a0;
  char *local_90;
  ulong local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  undefined1 local_58 [24];
  undefined1 local_40 [24];
  
  local_a8 = (param_3 + param_4) * DAT_001184d8;
  local_158 = param_3;
  local_e0 = param_4;
  local_c8 = unaff_XMM6_Qa;
  local_b8 = unaff_XMM7_Qa;
  uStack_b0 = unaff_XMM7_Qb;
  local_80 = param_5;
  local_78 = param_1;
  local_70 = param_2;
  local_68 = param_6;
  local_160 = (double)(*(code *)PTR_round_001ef8c8)
                                (((param_3 - param_4) / local_a8) * DAT_001184d8 * _DAT_001184a0 *
                                 DAT_001184c0);
  local_160 = local_160 / DAT_001184c0;
  local_d8 = local_160;
                    /* WARNING: Switch is manually overridden */
  switch(param_10) {
  case 1:
    lVar3 = 8;
    break;
  case 2:
    lVar3 = 0x10;
    break;
  case 3:
    param_11 = param_11 + 3;
  case 0:
    local_168 = (double)(*(code *)PTR_round_001ef8c8)((local_70 - *param_11) * _DAT_001184d0);
    local_168 = local_168 / _DAT_001184d0;
    cVar1 = '\x01';
    cVar8 = '\x01';
    dVar15 = local_b8;
    goto joined_r0x0016a543;
  }
  local_168 = (double)(*(code *)PTR_round_001ef8c8)
                                ((*(double *)((long)param_11 + lVar3) - local_78) * _DAT_001184d0);
  local_168 = local_168 / _DAT_001184d0;
  uStack_b0 = uStack_b0 ^ _UNK_00118b18;
  cVar1 = '\0';
  cVar8 = '\0';
  dVar15 = (double)((ulong)local_b8 ^ _DAT_00118b10);
joined_r0x0016a543:
  local_16c = 0;
  if ((((param_12 & 1) != 0) && (local_16c = 1, cVar8 = cVar1, dVar15 <= 0.0)) &&
     (local_16c = 0, dVar15 < 0.0)) {
    local_16c = 0xffffffff;
  }
  local_118 = PTR_fmt_001ef7e8;
  local_108 = PTR_fmt_001ef7e8;
  local_f8 = PTR_fmt_001ef9c0;
  if (cVar8 == '\0') {
    dVar14 = DAT_00118430 + local_158;
    dVar11 = DAT_00118488 + local_e0;
    dVar10 = dVar11;
    if (dVar11 <= dVar14) {
      dVar10 = dVar14;
    }
    dVar10 = (double)(~-(ulong)NAN(dVar14) & (ulong)dVar10 | -(ulong)NAN(dVar14) & (ulong)dVar11);
    if (dVar14 <= dVar11) {
      dVar11 = dVar14;
    }
    dVar12 = local_c8 * _DAT_001184a0;
    dVar13 = (double)(_DAT_001185a0 & (ulong)local_168);
    dVar14 = dVar12;
    if (dVar13 <= dVar12) {
      dVar14 = dVar13;
    }
    dVar14 = (double)(~-(ulong)NAN(dVar13) & (ulong)dVar14 | -(ulong)NAN(dVar13) & (ulong)dVar12) *
             _DAT_00118570 + DAT_00118480;
    cVar1 = *(char *)((long)param_13 + 0x29);
    if (cVar1 == '\0') goto LAB_0016a868;
LAB_0016a657:
    bVar6 = (byte)param_12 ^ 1 | (double)(*param_13 ^ _DAT_00118b10) <= dVar15;
    dVar13 = (double)param_13[1];
    if (0.0 < dVar13) goto LAB_0016a687;
LAB_0016a87e:
    bVar4 = 0;
    if (local_d8 < local_168) goto LAB_0016a893;
LAB_0016a6a6:
    if (local_168 <= 0.0) {
      local_120 = &local_160;
      local_110 = &local_168;
      local_100 = &local_16c;
      local_150 = &PTR_s_maker__e__s_V_001e9d80;
      local_148 = 3;
      local_130 = 0;
      local_140 = &local_120;
      local_138 = 3;
      puVar5 = local_40;
      uStack_d0 = 0;
      uStack_a0 = 0;
      local_d8 = dVar10;
      local_c8 = dVar14 * local_a8;
      local_b8 = dVar15;
      local_a8 = dVar11;
      (*(code *)PTR_format_inner_001ef760)(puVar5,&local_150);
      dVar15 = local_d8;
      if ((char)param_13[5] == '\0') {
        dVar15 = local_a8;
      }
      bVar9 = *(char *)((long)param_13 + 0x2b) != '\x01';
      if (!bVar9) {
        dVar15 = local_a8;
      }
      uVar7 = 1;
LAB_0016aa8d:
      apply_passive_gate(local_e0,local_158,param_15,local_c8,dVar15,local_b8,param_9,cVar8,uVar7,
                         puVar5,param_12,bVar9,param_13);
      return param_9;
    }
    if ((~bVar6 & *(char *)((long)param_13 + 0x2a) != '\x01') == 0) {
      local_120 = &local_160;
      local_110 = &local_168;
      local_100 = &local_16c;
      local_150 = &PTR_s_mid__001e9db0;
      local_148 = 3;
      local_130 = 0;
      local_140 = &local_120;
      local_138 = 3;
      puVar5 = local_58;
      local_c8 = dVar14 * local_a8;
      local_b8 = dVar15;
      (*(code *)PTR_format_inner_001ef760)(puVar5,&local_150);
      bVar9 = (byte)(*(char *)((long)param_13 + 0x2b) - 1U) < 2;
      uVar7 = 2;
      dVar15 = local_a8;
      goto LAB_0016aa8d;
    }
    local_d8 = dVar10;
    if (cVar1 != '\x02') goto LAB_0016ab85;
    local_150 = &PTR_s_mid__001e9de0;
  }
  else {
    dVar11 = DAT_00118488 + local_e0;
    dVar14 = DAT_00118430 + local_158;
    dVar10 = dVar14;
    if (dVar11 <= dVar14) {
      dVar10 = dVar11;
    }
    dVar12 = (double)(_DAT_001185a0 & (ulong)local_168);
    dVar16 = local_c8 * _DAT_001184a0;
    dVar13 = dVar16;
    if (dVar12 <= dVar16) {
      dVar13 = dVar12;
    }
    dVar10 = (double)(~-(ulong)NAN(dVar11) & (ulong)dVar10 | -(ulong)NAN(dVar11) & (ulong)dVar14);
    dVar14 = (double)(~-(ulong)NAN(dVar12) & (ulong)dVar13 | -(ulong)NAN(dVar12) & (ulong)dVar16) *
             _DAT_00118578 + DAT_00118480;
    cVar1 = *(char *)((long)param_13 + 0x29);
    dVar11 = dVar10;
    if (cVar1 != '\0') goto LAB_0016a657;
LAB_0016a868:
    bVar6 = 1;
    dVar13 = (double)param_13[1];
    if (dVar13 <= 0.0) goto LAB_0016a87e;
LAB_0016a687:
    bVar4 = ((double)param_13[2] <= dVar15 && dVar15 != (double)param_13[2]) & (byte)param_12;
    if (local_168 <= local_d8) goto LAB_0016a6a6;
LAB_0016a893:
    if ((bVar6 & 1) != 0 || 1 < *(byte *)((long)param_13 + 0x2a)) {
      dVar10 = (local_168 - local_d8) * _DAT_00118570;
      dVar15 = dVar10;
      if (local_80 <= dVar10) {
        dVar15 = local_80;
      }
      dVar10 = (double)(~-(ulong)NAN(local_80) & (ulong)dVar15 |
                       -(ulong)NAN(local_80) & (ulong)dVar10);
      dVar15 = local_68;
      if (local_68 <= dVar10) {
        dVar15 = dVar10;
      }
      dVar15 = (double)(-(ulong)NAN(dVar10) & (ulong)local_68 | ~-(ulong)NAN(dVar10) & (ulong)dVar15
                       );
      local_90 = (char *)0x1;
      if (bVar4 != 0) {
        dVar15 = dVar15 + dVar13 * _DAT_00118570;
        local_90 = "B";
      }
      local_88 = (ulong)(bVar4 != 0);
      if (cVar8 == '\0') {
        local_158 = local_e0 * (DAT_00118480 - dVar15);
      }
      else {
        local_158 = local_158 * (dVar15 + DAT_00118480);
      }
      local_120 = &local_160;
      local_110 = &local_168;
      local_100 = &local_16c;
      local_f0 = &local_90;
      local_e8 = _<&T_as_core::fmt::Display>::fmt;
      local_150 = &PTR_s_taker__001e9ea0;
      local_148 = 4;
      local_130 = 0;
      local_140 = &local_120;
      local_138 = 4;
      (*(code *)PTR_format_inner_001ef760)(param_9 + 2,&local_150);
      *param_9 = local_158;
      *(undefined1 *)(param_9 + 1) = 0;
      return param_9;
    }
    local_d8 = dVar10;
    if (cVar1 != '\x02') {
LAB_0016ab85:
      uStack_d0 = 0;
      local_120 = &local_160;
      local_110 = &local_168;
      local_100 = &local_16c;
      local_150 = &PTR_s_maker__e__s_V_001e9e20;
      local_148 = 4;
      local_130 = 0;
      local_140 = &local_120;
      local_138 = 3;
      (*(code *)PTR_format_inner_001ef760)(param_9 + 2,&local_150);
      uVar2 = 1;
      goto LAB_0016ac05;
    }
    local_150 = &PTR_s_taker__001e9e60;
  }
  local_100 = &local_16c;
  local_110 = &local_168;
  local_120 = &local_160;
  uStack_d0 = 0;
  local_148 = 4;
  local_130 = 0;
  local_140 = &local_120;
  local_138 = 3;
  (*(code *)PTR_format_inner_001ef760)(param_9 + 2,&local_150);
  uVar2 = 3;
LAB_0016ac05:
  *param_9 = local_d8;
  *(undefined1 *)(param_9 + 1) = uVar2;
  return param_9;
}




// ELF address 0x00000000000993d0; strategy_signal_maker_common::signal_trigger::SignalTrigger::update_score

/* strategy_signal_maker_common::signal_trigger::SignalTrigger::update_score */

void __rustcall
strategy_signal_maker_common::signal_trigger::SignalTrigger::update_score
          (long param_1,long param_2,double param_3,double param_4,long *param_5,ulong param_6,
          long param_7)

{
  char *pcVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  char cVar5;
  undefined *puVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  undefined1 (*pauVar10) [16];
  long lVar11;
  ushort uVar12;
  long lVar13;
  long lVar14;
  undefined1 (*pauVar15) [16];
  byte bVar16;
  char cVar17;
  char cVar19;
  char cVar20;
  char cVar21;
  undefined1 auVar18 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  long lStack_38;
  
  param_5[6] = param_1;
  param_5[7] = param_2;
  puVar6 = PTR_update_001efcd0;
  lVar14 = param_5[3];
  if (lVar14 != 0) {
    pauVar15 = (undefined1 (*) [16])*param_5;
    pauVar10 = pauVar15 + 1;
    auVar18 = *pauVar15;
    uVar7 = ~(uint)(ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar18[0xf] >> 7) << 0xf);
    do {
      if ((short)uVar7 == 0) {
        do {
          auVar18 = *pauVar10;
          pauVar15 = pauVar15 + -0x98;
          pauVar10 = pauVar10 + 1;
          uVar7 = (uint)(ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar18[0xf] >> 7) << 0xf);
        } while (uVar7 == 0xffff);
        uVar7 = ~uVar7;
      }
      uVar9 = 0;
      for (uVar4 = uVar7; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
        uVar9 = uVar9 + 1;
      }
      uVar7 = uVar7 - 1 & uVar7;
      (*(code *)puVar6)(param_1,param_2,(long)pauVar15 + (ulong)uVar9 * -0x98 + -0x90);
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  if ((param_6 & 1) == 0) {
    if (param_5[3] != 0) {
      pauVar10 = (undefined1 (*) [16])*param_5;
      auVar18 = *pauVar10;
      uVar12 = (ushort)(SUB161(auVar18 >> 7,0) & 1) | (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
               (ushort)(byte)(auVar18[0xf] >> 7) << 0xf;
      pauVar15 = pauVar10;
      while (uVar12 == 0xffff) {
        pauVar15 = pauVar15 + 1;
        auVar18 = *pauVar15;
        pauVar10 = pauVar10 + -0x98;
        uVar12 = (ushort)(SUB161(auVar18 >> 7,0) & 1) | (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
                 (ushort)(byte)(auVar18[0xf] >> 7) << 0xf;
      }
      uVar7 = 0;
      for (uVar9 = ~(uint)uVar12; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
        uVar7 = uVar7 + 1;
      }
      lVar14 = (ulong)uVar7 * -0x98 + (long)pauVar10;
LAB_001995b2:
      dVar2 = *(double *)(lVar14 + -0x38);
      param_5[0xc] = (long)dVar2;
      dVar3 = *(double *)(lVar14 + -0x28);
      param_5[0xd] = (long)dVar3;
      param_5[0x10] = (long)(param_3 * dVar3 + (double)param_5[7]);
      param_5[0x11] = (long)((double)param_5[7] - param_4 * dVar3);
      param_5[0xe] = (long)(dVar2 + param_3 * dVar3);
      param_5[0xf] = (long)(dVar2 - param_4 * dVar3);
    }
  }
  else if (param_5[3] != 0) {
    lStack_38 = param_7;
    uVar8 = core::hash::BuildHasher::hash_one(param_5 + 4,&lStack_38);
    lVar14 = *param_5;
    bVar16 = (byte)(uVar8 >> 0x39);
    auVar18 = ZEXT216(CONCAT11(bVar16,bVar16));
    auVar18 = pshuflw(auVar18,auVar18,0);
    lVar11 = 0;
    while( true ) {
      uVar8 = uVar8 & param_5[1];
      pcVar1 = (char *)(lVar14 + uVar8);
      cVar5 = pcVar1[0xf];
      cVar17 = auVar18[0];
      auVar23[0] = -(*pcVar1 == cVar17);
      cVar19 = auVar18[1];
      auVar23[1] = -(pcVar1[1] == cVar19);
      cVar20 = auVar18[2];
      auVar23[2] = -(pcVar1[2] == cVar20);
      cVar21 = auVar18[3];
      auVar23[3] = -(pcVar1[3] == cVar21);
      auVar23[4] = -(pcVar1[4] == cVar17);
      auVar23[5] = -(pcVar1[5] == cVar19);
      auVar23[6] = -(pcVar1[6] == cVar20);
      auVar23[7] = -(pcVar1[7] == cVar21);
      auVar23[8] = -(pcVar1[8] == cVar17);
      auVar23[9] = -(pcVar1[9] == cVar19);
      auVar23[10] = -(pcVar1[10] == cVar20);
      auVar23[0xb] = -(pcVar1[0xb] == cVar21);
      auVar23[0xc] = -(pcVar1[0xc] == cVar17);
      auVar23[0xd] = -(pcVar1[0xd] == cVar19);
      auVar23[0xe] = -(pcVar1[0xe] == cVar20);
      auVar23[0xf] = -(cVar5 == cVar21);
      uVar12 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe | (ushort)(auVar23[0xf] >> 7) << 0xf;
      uVar7 = (uint)uVar12;
      while (uVar12 != 0) {
        uVar9 = 0;
        for (uVar4 = uVar7; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar9 = uVar9 + 1;
        }
        lVar13 = (uVar9 + uVar8 & param_5[1]) * -0x98;
        if (param_7 == *(long *)(lVar14 + -0x98 + lVar13)) {
          lVar14 = lVar14 + lVar13;
          goto LAB_001995b2;
        }
        uVar12 = (ushort)(uVar7 - 1) & (ushort)uVar7;
        uVar7 = CONCAT22((short)(uVar7 - 1 >> 0x10),uVar12);
      }
      auVar22[0] = -(*pcVar1 == -1);
      auVar22[1] = -(pcVar1[1] == -1);
      auVar22[2] = -(pcVar1[2] == -1);
      auVar22[3] = -(pcVar1[3] == -1);
      auVar22[4] = -(pcVar1[4] == -1);
      auVar22[5] = -(pcVar1[5] == -1);
      auVar22[6] = -(pcVar1[6] == -1);
      auVar22[7] = -(pcVar1[7] == -1);
      auVar22[8] = -(pcVar1[8] == -1);
      auVar22[9] = -(pcVar1[9] == -1);
      auVar22[10] = -(pcVar1[10] == -1);
      auVar22[0xb] = -(pcVar1[0xb] == -1);
      auVar22[0xc] = -(pcVar1[0xc] == -1);
      auVar22[0xd] = -(pcVar1[0xd] == -1);
      auVar22[0xe] = -(pcVar1[0xe] == -1);
      auVar22[0xf] = -(cVar5 == -1);
      if ((((((((((((((((auVar22 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                       (auVar22 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar22 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar22 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar22 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar22 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar22 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar22 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar22 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar22 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar22 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar22 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar22 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar22 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar22 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || cVar5 == -1) break;
      uVar8 = uVar8 + lVar11 + 0x10;
      lVar11 = lVar11 + 0x10;
    }
  }
  return;
}




// ELF address 0x0000000000099620; strategy_signal_maker_common::signal_trigger::SignalTrigger::point_signal_trigger_pv3_spread

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_signal_maker_common::signal_trigger::SignalTrigger::point_signal_trigger_pv3_spread */

void __rustcall
strategy_signal_maker_common::signal_trigger::SignalTrigger::point_signal_trigger_pv3_spread
          (double param_1,ulong param_2,double param_3,undefined1 *param_4,long param_5)

{
  undefined1 uVar1;
  double dVar2;
  
  param_1 = (double)(param_2 & _DAT_001185a0) * param_1;
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
    if (dVar2 < *(double *)(param_5 + 0x40)) goto LAB_0019969c;
  }
  else {
    dVar2 = dVar2 + *(double *)(param_5 + 0x88);
    if (dVar2 <= 0.0) {
      dVar2 = 0.0;
    }
    if (dVar2 < *(double *)(param_5 + 0x40)) {
LAB_0019969c:
      uVar1 = 3;
      if (((dVar2 < *(double *)(param_5 + 0x58)) && (uVar1 = 2, *(double *)(param_5 + 0x50) < dVar2)
          ) && (uVar1 = 4, dVar2 <= *(double *)(param_5 + 0x48))) {
        *param_4 = 1;
        *(undefined8 *)(param_4 + 8) = 0x3ff0000000000000;
        return;
      }
      goto LAB_00199674;
    }
  }
  uVar1 = 0;
LAB_00199674:
  *param_4 = uVar1;
  *(undefined8 *)(param_4 + 8) = 0x3ff0000000000000;
  return;
}




// ELF address 0x0000000000099300; strategy_signal_maker_common::signal_trigger::SignalTrigger::new

/* strategy_signal_maker_common::signal_trigger::SignalTrigger::new */

undefined4 * __rustcall
strategy_signal_maker_common::signal_trigger::SignalTrigger::new
          (undefined4 *param_1,undefined8 *param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  lVar1 = param_3[1];
                    /* try { // try from 00199320 to 0019932c has its CatchHandler @ 001993a2 */
  _<std::collections::hash::map::HashMap<K,V,S>as_core::iter::traits::collect::FromIterator<(K,V)>>
  ::from_iter(&local_50,lVar1,lVar1 + param_3[2] * 8);
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *(undefined8 *)(param_1 + 0x10) = *param_2;
  *(undefined8 *)(param_1 + 0x12) = uVar2;
  *(undefined8 *)(param_1 + 0x14) = uVar3;
  *(undefined8 *)(param_1 + 0x16) = uVar4;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  param_1[8] = local_30;
  param_1[9] = uStack_2c;
  param_1[10] = uStack_28;
  param_1[0xb] = uStack_24;
  param_1[4] = local_40;
  param_1[5] = uStack_3c;
  param_1[6] = uStack_38;
  param_1[7] = uStack_34;
  *param_1 = local_50;
  param_1[1] = uStack_4c;
  param_1[2] = uStack_48;
  param_1[3] = uStack_44;
  if (*param_3 != 0) {
    (*(code *)PTR___rust_dealloc_001ef6a0)(lVar1,*param_3 << 3,8);
  }
  return param_1;
}




// ELF address 0x00000000000996e0; strategy_signal_maker_common::signal_trigger::dynamic_threshold

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
     (DAT_001184e8 < (double)(_DAT_001185a0 & (ulong)param_4))) {
    dVar1 = param_3 - param_2;
    if (param_3 - param_2 <= DAT_00118470) {
      dVar1 = DAT_00118470;
    }
    dVar1 = (param_1 - param_2) / dVar1;
    if (DAT_00118480 <= dVar1) {
      dVar1 = DAT_00118480;
    }
    dVar4 = (double)((ulong)(param_4 * dVar1) & _DAT_001185a0);
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




// ELF address 0x00000000000990a0; strategy_signal_maker_common::signal_trigger::TsQuantileCalculator::update

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_signal_maker_common::signal_trigger::TsQuantileCalculator::update */

void __rustcall
strategy_signal_maker_common::signal_trigger::TsQuantileCalculator::update
          (double param_1,double param_2,ulong *param_3)

{
  double dVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double local_30;
  undefined8 local_28;
  
  uVar4 = param_3[8];
  uVar5 = *param_3;
  uVar2 = param_3[3];
  if (uVar2 == uVar5) {
    (*(code *)PTR_grow_001efcd8)(param_3,&PTR_s_strategies_index_strategy_strate_001ebc88);
    uVar5 = *param_3;
    uVar2 = param_3[3];
  }
  uVar6 = 0;
  if (uVar5 <= uVar2 + param_3[2]) {
    uVar6 = uVar5;
  }
  lVar3 = (uVar2 + param_3[2]) - uVar6;
  uVar5 = param_3[1];
  *(double *)(uVar5 + lVar3 * 0x18) = param_1;
  *(double *)(uVar5 + 8 + lVar3 * 0x18) = param_2;
  *(ulong *)(uVar5 + 0x10 + lVar3 * 0x18) = uVar4;
  param_3[3] = param_3[3] + 1;
  alloc::collections::btree::map::BTreeMap<K,V,A>::insert(param_3 + 4,uVar4);
  param_3[8] = param_3[8] + 1;
  dVar8 = (double)param_3[9];
  param_3[9] = (ulong)(dVar8 + param_2);
  uVar4 = param_3[10] + 1;
  param_3[10] = uVar4;
  auVar10._8_4_ = (int)(uVar4 >> 0x20);
  auVar10._0_8_ = uVar4;
  auVar10._12_4_ = _UNK_00118704;
  param_3[0xb] = (ulong)((dVar8 + param_2) /
                        ((auVar10._8_8_ - _UNK_001185c8) +
                        ((double)CONCAT44(_s__00118700,(int)uVar4) - _s__001185c0)));
  param_3[0xc] = (ulong)(param_2 * param_2 + (double)param_3[0xc]);
  param_3[(ulong)(param_2 <= 0.0) + 0xe] =
       (ulong)(param_2 + (double)param_3[(ulong)(param_2 <= 0.0) + 0xe]);
  uVar4 = param_3[3];
  if (uVar4 != 0) {
    do {
      uVar5 = param_3[2];
      uVar2 = *param_3;
      uVar6 = param_3[1];
      uVar7 = uVar2;
      if (uVar5 < uVar2) {
        uVar7 = 0;
      }
      dVar8 = param_1 - *(double *)(uVar6 + (uVar5 - uVar7) * 0x18);
      if (dVar8 < (double)param_3[7] || dVar8 == (double)param_3[7]) {
        return;
      }
      uVar7 = 0;
      if (uVar2 <= uVar5 + 1) {
        uVar7 = uVar2;
      }
      param_3[2] = (uVar5 - uVar7) + 1;
      param_3[3] = uVar4 - 1;
      dVar8 = *(double *)(uVar6 + 8 + uVar5 * 0x18);
      local_28 = *(undefined8 *)(uVar6 + 0x10 + uVar5 * 0x18);
      local_30 = dVar8;
      alloc::collections::btree::map::BTreeMap<K,V,A>::remove(param_3 + 4,&local_30);
      dVar1 = (double)param_3[9];
      param_3[9] = (ulong)(dVar1 - dVar8);
      dVar9 = 0.0;
      if (param_3[10] != 0) {
        uVar4 = param_3[10] - 1;
        param_3[10] = uVar4;
        if (uVar4 != 0) {
          auVar11._8_4_ = (int)(uVar4 >> 0x20);
          auVar11._0_8_ = uVar4;
          auVar11._12_4_ = _UNK_00118704;
          dVar9 = (dVar1 - dVar8) /
                  ((auVar11._8_8_ - _UNK_001185c8) +
                  ((double)CONCAT44(_s__00118700,(int)uVar4) - _s__001185c0));
        }
      }
      param_3[0xb] = (ulong)dVar9;
      dVar1 = _DAT_001184a8;
      param_3[0xc] = (ulong)((double)param_3[0xc] - dVar8 * dVar8);
      param_3[(ulong)(dVar8 <= dVar1) + 0xe] =
           (ulong)((double)param_3[(ulong)(dVar8 <= dVar1) + 0xe] - dVar8);
      uVar4 = param_3[3];
    } while (uVar4 != 0);
  }
  return;
}




// ELF address 0x0000000000099780; strategy_signal_maker_common::signal_trigger::dynamic_pending_ts_ms

/* strategy_signal_maker_common::signal_trigger::dynamic_pending_ts_ms */

double __rustcall
strategy_signal_maker_common::signal_trigger::dynamic_pending_ts_ms
          (double param_1,double param_2,double param_3,double param_4,double param_5)

{
  double dVar1;
  
  if (((param_2 <= param_1) && (0.0 <= param_2)) && (0.0 <= param_3)) {
    dVar1 = param_3 - param_2;
    if (param_3 - param_2 <= DAT_00118470) {
      dVar1 = DAT_00118470;
    }
    dVar1 = (param_1 - param_2) / dVar1;
    if (DAT_00118480 <= dVar1) {
      dVar1 = DAT_00118480;
    }
    param_4 = param_4 + param_5 * dVar1;
  }
  return param_4;
}




// ELF address 0x00000000000983c0; strategy_signal_maker_common::get_quote_price::get_quote_vol

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_signal_maker_common::get_quote_price::get_quote_vol */

undefined8 __rustcall
strategy_signal_maker_common::get_quote_price::get_quote_vol(undefined1 param_1,byte param_2)

{
                    /* WARNING: Switch is manually overridden */
  switch(param_1) {
  case 0:
    break;
  default:
    if ((param_2 & 1) != 0) {
      return 1;
    }
    break;
  case 3:
  }
  return 1;
}




// ELF address 0x000000000004b230; <strategy_sm3_1::SM31Params as core::clone::Clone>::clone

/* WARNING: Removing unreachable block (ram,0x0014b357) */
/* _<strategy_sm3_1::SM31Params as core::clone::Clone>::clone */

void __rustcall
_<strategy_sm3_1::SM31Params_as_core::clone::Clone>::clone(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  puVar4 = PTR_clone_001ef7b8;
  (*(code *)PTR_clone_001ef7b8)(&local_1d8,param_2,&PTR_s_strategies_index_strategy_strate_001e9a80)
  ;
                    /* try { // try from 0014b264 to 0014b26e has its CatchHandler @ 0014b80a */
  (*(code *)puVar4)(&local_1c0,param_2 + 0x18,&PTR_s_strategies_index_strategy_strate_001e9a80);
  local_38 = *(undefined8 *)(param_2 + 0xf0);
  uStack_30 = *(undefined8 *)(param_2 + 0xf8);
  local_48 = *(undefined8 *)(param_2 + 0x100);
  uStack_40 = *(undefined8 *)(param_2 + 0x108);
  local_58 = *(undefined8 *)(param_2 + 0x110);
  uStack_50 = *(undefined8 *)(param_2 + 0x118);
  local_68 = *(undefined8 *)(param_2 + 0x120);
  uStack_60 = *(undefined8 *)(param_2 + 0x128);
  local_78 = *(undefined8 *)(param_2 + 0x130);
  uStack_70 = *(undefined8 *)(param_2 + 0x138);
  local_88 = *(undefined8 *)(param_2 + 0x140);
  uStack_80 = *(undefined8 *)(param_2 + 0x148);
  local_98 = *(undefined8 *)(param_2 + 0x150);
  uStack_90 = *(undefined8 *)(param_2 + 0x158);
  local_a8 = *(undefined8 *)(param_2 + 0x160);
  uStack_a0 = *(undefined8 *)(param_2 + 0x168);
  local_b8 = *(undefined8 *)(param_2 + 0x170);
  uStack_b0 = *(undefined8 *)(param_2 + 0x178);
  local_c8 = *(undefined8 *)(param_2 + 0x180);
  uStack_c0 = *(undefined8 *)(param_2 + 0x188);
  local_d8 = *(undefined8 *)(param_2 + 400);
  uStack_d0 = *(undefined8 *)(param_2 + 0x198);
  local_e8 = *(undefined8 *)(param_2 + 0x1a0);
  uStack_e0 = *(undefined8 *)(param_2 + 0x1a8);
  local_1e0 = *(undefined8 *)(param_2 + 0x1b0);
                    /* try { // try from 0014b363 to 0014b37a has its CatchHandler @ 0014b6f0 */
  (*(code *)PTR_clone_001ef7b8)
            (&local_208,param_2 + 0xd8,&PTR_s__home_lyt__rustup_toolchains_nig_001e9670);
  uVar6 = local_1f8;
  uVar5 = uStack_200;
  uVar1 = local_208;
                    /* try { // try from 0014b38e to 0014b39f has its CatchHandler @ 0014b7cd */
  (*(code *)PTR_clone_001ef7b8)
            (&local_1a8,param_2 + 0x30,&PTR_s_strategies_index_strategy_strate_001e9a80);
                    /* try { // try from 0014b3a5 to 0014b3b6 has its CatchHandler @ 0014b7ae */
  (*(code *)PTR_clone_001ef7b8)
            (&local_190,param_2 + 0x48,&PTR_s_strategies_index_strategy_strate_001e9a80);
                    /* try { // try from 0014b3bc to 0014b3d0 has its CatchHandler @ 0014b78c */
  (*(code *)PTR_clone_001ef7b8)
            (&local_178,param_2 + 0x60,&PTR_s_strategies_index_strategy_strate_001e9a80);
  local_f8 = *(undefined8 *)(param_2 + 0x1b8);
  uStack_f0 = *(undefined8 *)(param_2 + 0x1c0);
  local_1e8 = *(undefined8 *)(param_2 + 0x1c8);
                    /* try { // try from 0014b3f7 to 0014b40b has its CatchHandler @ 0014b767 */
  (*(code *)PTR_clone_001ef7b8)
            (&local_160,param_2 + 0x78,&PTR_s_strategies_index_strategy_strate_001e9a80);
                    /* try { // try from 0014b414 to 0014b428 has its CatchHandler @ 0014b742 */
  (*(code *)PTR_clone_001ef7b8)
            (&local_148,param_2 + 0x90,&PTR_s_strategies_index_strategy_strate_001e9a80);
  local_108 = *(undefined4 *)(param_2 + 0x1d0);
  uStack_104 = *(undefined4 *)(param_2 + 0x1d4);
  uStack_100 = *(undefined4 *)(param_2 + 0x1d8);
  uStack_fc = *(undefined4 *)(param_2 + 0x1dc);
                    /* try { // try from 0014b442 to 0014b456 has its CatchHandler @ 0014b71d */
  (*(code *)PTR_clone_001ef7b8)
            (&local_130,param_2 + 0xa8,&PTR_s_strategies_index_strategy_strate_001e9a80);
  local_118 = *(undefined8 *)(param_2 + 0x1e0);
  uStack_110 = *(undefined8 *)(param_2 + 0x1e8);
  local_1f0 = *(undefined8 *)(param_2 + 0x1f0);
                    /* try { // try from 0014b480 to 0014b48f has its CatchHandler @ 0014b6f8 */
  (*(code *)PTR_clone_001ef7b8)
            (&local_208,param_2 + 0xc0,&PTR_s_strategies_index_strategy_strate_001e9a80);
  *param_1 = local_1d8;
  param_1[1] = uStack_1d0;
  param_1[2] = local_1c8;
  param_1[3] = local_1c0;
  param_1[4] = uStack_1b8;
  param_1[5] = local_1b0;
  param_1[0x1e] = local_38;
  param_1[0x1f] = uStack_30;
  param_1[0x20] = local_48;
  param_1[0x21] = uStack_40;
  param_1[0x22] = local_58;
  param_1[0x23] = uStack_50;
  param_1[0x24] = local_68;
  param_1[0x25] = uStack_60;
  param_1[0x26] = local_78;
  param_1[0x27] = uStack_70;
  param_1[0x28] = local_88;
  param_1[0x29] = uStack_80;
  param_1[0x2a] = local_98;
  param_1[0x2b] = uStack_90;
  param_1[0x2c] = local_a8;
  param_1[0x2d] = uStack_a0;
  param_1[0x2e] = local_b8;
  param_1[0x2f] = uStack_b0;
  param_1[0x30] = local_c8;
  param_1[0x31] = uStack_c0;
  param_1[0x32] = local_d8;
  param_1[0x33] = uStack_d0;
  param_1[0x34] = local_e8;
  param_1[0x35] = uStack_e0;
  param_1[0x36] = local_1e0;
  param_1[0x1b] = uVar1;
  param_1[0x1c] = uVar5;
  param_1[0x1d] = uVar6;
  param_1[8] = local_198;
  param_1[6] = local_1a8;
  param_1[7] = uStack_1a0;
  param_1[0xb] = local_180;
  param_1[9] = local_190;
  param_1[10] = uStack_188;
  param_1[0xc] = local_178;
  param_1[0xd] = uStack_170;
  param_1[0xe] = local_168;
  param_1[0x37] = local_f8;
  param_1[0x38] = uStack_f0;
  param_1[0x39] = local_1e8;
  param_1[0x11] = local_150;
  param_1[0xf] = local_160;
  param_1[0x10] = uStack_158;
  param_1[0x12] = local_148;
  param_1[0x13] = uStack_140;
  param_1[0x14] = local_138;
  param_1[0x3a] = CONCAT44(uStack_104,local_108);
  param_1[0x3b] = CONCAT44(uStack_fc,uStack_100);
  param_1[0x15] = local_130;
  param_1[0x16] = uStack_128;
  param_1[0x17] = local_120;
  param_1[0x3c] = local_118;
  param_1[0x3d] = uStack_110;
  uVar2 = *(undefined1 *)(param_2 + 0x210);
  uVar3 = *(undefined1 *)(param_2 + 0x211);
  param_1[0x3e] = local_1f0;
  param_1[0x1a] = local_1f8;
  param_1[0x18] = local_208;
  param_1[0x19] = uStack_200;
  *(undefined1 *)(param_1 + 0x42) = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0x200);
  param_1[0x3f] = *(undefined8 *)(param_2 + 0x1f8);
  param_1[0x40] = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x208);
  *(undefined1 *)((long)param_1 + 0x211) = uVar3;
  param_1[0x41] = uVar1;
  return;
}




// ELF address 0x0000000000044170; <strategy_sm3_1::StrategySM31 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin

/* WARNING: Removing unreachable block (ram,0x001441e6) */
/* WARNING: Removing unreachable block (ram,0x00144246) */
/* WARNING: Removing unreachable block (ram,0x00144252) */
/* WARNING: Removing unreachable block (ram,0x00144256) */
/* WARNING: Removing unreachable block (ram,0x0014426f) */
/* WARNING: Removing unreachable block (ram,0x00144260) */
/* WARNING: Removing unreachable block (ram,0x00144274) */
/* WARNING: Removing unreachable block (ram,0x0014427a) */
/* WARNING: Removing unreachable block (ram,0x00144266) */
/* WARNING: Removing unreachable block (ram,0x0014434b) */
/* WARNING: Removing unreachable block (ram,0x0014434e) */
/* WARNING: Removing unreachable block (ram,0x001443f4) */
/* WARNING: Removing unreachable block (ram,0x00144407) */
/* WARNING: Removing unreachable block (ram,0x00144414) */
/* WARNING: Removing unreachable block (ram,0x00144419) */
/* WARNING: Removing unreachable block (ram,0x0014442c) */
/* WARNING: Removing unreachable block (ram,0x00144441) */
/* WARNING: Removing unreachable block (ram,0x00144459) */
/* WARNING: Removing unreachable block (ram,0x00144462) */
/* WARNING: Removing unreachable block (ram,0x00144450) */
/* WARNING: Removing unreachable block (ram,0x0014446f) */
/* WARNING: Removing unreachable block (ram,0x00144480) */
/* WARNING: Removing unreachable block (ram,0x001444a4) */
/* _<strategy_sm3_1::StrategySM31 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin */

undefined8 __rustcall
_<strategy_sm3_1::StrategySM31_as_future_backtest_sdk::plugin::StrategyPlugin>::on_begin
          (long *param_1)

{
  undefined **ppuVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  char cVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 *puVar8;
  long *local_560;
  long local_558;
  long **local_550;
  code *local_548;
  undefined1 local_540 [32];
  long local_520;
  undefined8 local_518;
  undefined8 local_510;
  undefined1 local_508 [24];
  undefined1 local_4f0 [48];
  undefined1 local_4c0 [24];
  undefined **local_4a8;
  undefined8 local_4a0;
  long ***ppplStack_498;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined1 local_290 [24];
  undefined1 local_278 [24];
  undefined1 local_260 [24];
  undefined **local_248;
  undefined8 uStack_240;
  undefined1 local_238 [64];
  long *local_1f8;
  long lStack_1f0;
  long *local_1e0;
  long local_1d8;
  long *local_1c8;
  long local_1c0;
  long *local_1b0;
  long local_1a8;
  long *local_1a0;
  short *local_198;
  long local_190;
  long *local_188;
  int *local_180;
  long local_178;
  double local_90;
  long local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_58;
  double local_50;
  
  (*(code *)PTR_custom_config_001ef7a0)(&local_520);
                    /* try { // try from 00144199 to 001441c7 has its CatchHandler @ 00144d90 */
  _<toml::de::Deserializer_as_serde_core::de::Deserializer>::deserialize_struct
            (&local_4a8,local_518,local_510,"SM31Params",10,
             &PTR_s_telemetry_datesignal_modepv1_alp_001e9320,0x30);
  uVar4 = local_4a0;
  ppuVar1 = local_4a8;
  (*(code *)PTR_memcpy_001ef700)(local_238,&ppplStack_498,0x208);
  local_248 = ppuVar1;
  uStack_240 = uVar4;
  if (lStack_1f0 != 3) {
    if (lStack_1f0 != 9) {
      if ((lStack_1f0 != 5) ||
         (uVar7 = 2, *(char *)((long)local_1f8 + 4) != 'k' || (int)*local_1f8 != 0x636f6c62))
      goto LAB_0014451f;
      goto joined_r0x0014430e;
    }
    uVar7 = 1;
    if ((char)local_1f8[1] == 'e' && *local_1f8 == 0x646172676e776f64) goto joined_r0x0014430e;
LAB_0014451f:
    local_560 = local_1f8;
    local_558 = lStack_1f0;
    local_550 = &local_560;
    local_548 = _<&T_as_core::fmt::Display>::fmt;
    local_4a8 = &PTR_s_gate_taker_veto_mode____not_in_o_001e91c8;
    local_4a0 = 2;
    uStack_488 = 0;
    ppplStack_498 = &local_550;
    local_490 = 1;
                    /* try { // try from 0014457f to 001446c3 has its CatchHandler @ 00144d6a */
    (*(code *)PTR_format_inner_001ef760)(local_290,&local_4a8);
    uVar4 = anyhow::error::_<impl_anyhow::Error>::msg(local_290);
    goto LAB_0014490e;
  }
  if (*(char *)((long)local_1f8 + 2) != 'f' || (short)*local_1f8 != 0x666f) goto LAB_0014451f;
  uVar7 = 0;
joined_r0x0014430e:
  if (local_1d8 == 9) {
    if ((char)local_1e0[1] != 'd' || *local_1e0 != 0x696d5f72656b6174) goto LAB_00144b1d;
    uVar6 = 0;
  }
  else if (local_1d8 == 10) {
    uVar6 = 1;
    if ((short)local_1e0[1] != 0x796c || *local_1e0 != 0x6e6f5f72656b6174) {
LAB_00144b1d:
      local_560 = local_1e0;
      local_558 = local_1d8;
      local_550 = &local_560;
      local_548 = _<&T_as_core::fmt::Display>::fmt;
      local_4a8 = &PTR_s_gate_taker_veto_scope____not_in_t_001e91e8;
      local_4a0 = 2;
      uStack_488 = 0;
      ppplStack_498 = &local_550;
      local_490 = 1;
                    /* try { // try from 00144b7d to 00144d64 has its CatchHandler @ 00144d6a */
      (*(code *)PTR_format_inner_001ef760)(local_278,&local_4a8);
      uVar4 = anyhow::error::_<impl_anyhow::Error>::msg(local_278);
      goto LAB_0014490e;
    }
  }
  else if ((local_1d8 != 8) || (uVar6 = 2, *local_1e0 != 0x796c6e6f5f64696d)) goto LAB_00144b1d;
  if (10 < local_1c0 - 3U) goto switchD_001445f0_caseD_7;
                    /* WARNING: Switch is manually overridden */
  switch(local_1c0 - 3U) {
  case 0:
    if (*(char *)((long)local_1c8 + 2) == 'f' && (short)*local_1c8 == 0x666f) {
      cVar5 = '\0';
      if (local_1a8 != 8) goto LAB_00144763;
LAB_00144967:
      uVar2 = 1;
      if (*local_1b0 != 0x796c6e6f5f64696d) {
LAB_0014497c:
        local_550 = &local_560;
        local_548 = _<&T_as_core::fmt::Display>::fmt;
        local_4a8 = &PTR_s_gate_maker_scope____not_in_maker_001e9228;
        local_4a0 = 2;
        uStack_488 = 0;
        ppplStack_498 = &local_550;
        local_490 = 1;
                    /* try { // try from 001449dc to 001449f8 has its CatchHandler @ 00144d6a */
        local_560 = local_1b0;
        local_558 = local_1a8;
        (*(code *)PTR_format_inner_001ef760)(local_508,&local_4a8);
        uVar4 = anyhow::error::_<impl_anyhow::Error>::msg(local_508);
        goto LAB_0014490e;
      }
      goto LAB_001447be;
    }
    break;
  case 1:
    iVar3 = (*(code *)PTR_bcmp_001ef778)(local_1c8,"both",local_1c0);
    cVar5 = '\x05';
    if (iVar3 == 0) goto joined_r0x00144961;
    break;
  case 2:
    if (*(char *)((long)local_1c8 + 4) == 'k' && (int)*local_1c8 == 0x636f6c62) {
      cVar5 = '\x02';
      goto joined_r0x00144961;
    }
    break;
  case 3:
    if (*(short *)((long)local_1c8 + 4) == 0x6576 && (int)*local_1c8 == 0x6974616e) {
      cVar5 = '\x01';
    }
    else {
      cVar5 = '\x03';
      if (*(short *)((long)local_1c8 + 4) != 0x6e65 || (int)*local_1c8 != 0x70656564) break;
    }
joined_r0x00144961:
    if (local_1a8 == 8) goto LAB_00144967;
LAB_00144763:
    if (local_1a8 == 10) {
      if ((short)local_1b0[1] != 0x796c || *local_1b0 != 0x6e6f5f72656b616d) goto LAB_0014497c;
      uVar2 = 0;
    }
    else if ((local_1a8 != 0xb) ||
            (uVar2 = 2,
            *(long *)((long)local_1b0 + 3) != 0x657669737361705f || *local_1b0 != 0x737361705f6c6c61
            )) goto LAB_0014497c;
LAB_001447be:
    if (local_190 == 3) {
      if ((char)local_198[1] == 'f' && *local_198 == 0x666f) goto LAB_00144803;
LAB_00144ba5:
      local_550 = &local_1a0;
      local_548 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_4a8 = &PTR_s_gate_cancel_mode____not_in_off_o_001e9248;
      local_4a0 = 2;
      uStack_488 = 0;
      ppplStack_498 = &local_550;
      local_490 = 1;
      puVar8 = local_4c0;
      (*(code *)PTR_format_inner_001ef760)(puVar8,&local_4a8);
LAB_00144c17:
      uVar4 = anyhow::error::_<impl_anyhow::Error>::msg(puVar8);
      goto LAB_0014490e;
    }
    if ((local_190 != 2) || (*local_198 != 0x6e6f)) goto LAB_00144ba5;
LAB_00144803:
    local_560 = (long *)0x118e6f;
    local_558 = 0x12;
    if (local_90 < 0.0) {
LAB_0014489b:
      local_550 = &local_560;
      local_548 = _<&T_as_core::fmt::Display>::fmt;
      local_4a8 = (undefined **)&DAT_001e92b8;
      local_4a0 = 2;
      uStack_488 = 0;
      ppplStack_498 = &local_550;
      local_490 = 1;
                    /* try { // try from 001448f1 to 0014490d has its CatchHandler @ 00144d6c */
      (*(code *)PTR_format_inner_001ef760)(local_540,&local_4a8);
      uVar4 = anyhow::error::_<impl_anyhow::Error>::msg(local_540);
      goto LAB_0014490e;
    }
    local_560 = (long *)0x118e81;
    local_558 = 0x13;
    if (local_80 < 0.0) goto LAB_0014489b;
    local_560 = (long *)0x118e94;
    local_558 = 0x12;
    if (local_70 < 0.0) goto LAB_0014489b;
    local_560 = (long *)0x118ea6;
    local_558 = 0xe;
    if (local_68 < 0.0) goto LAB_0014489b;
    if ((0xfd < (byte)(cVar5 - 5U)) && (local_78 <= 0.0)) {
      local_4a8 = &PTR_s_gate_maker_deepen_ticks_must_be_>_001e9268;
      local_4a0 = 1;
      ppplStack_498 = (long ***)&DAT_00000008;
      local_490 = 0;
      uStack_488 = 0;
      uVar4 = anyhow::__private::format_err(&local_4a8);
      goto LAB_0014490e;
    }
    if (local_58 <= 0.0) {
      local_4a8 = &PTR_s_gate_b_reuse_max_age_ms_must_be_>_001e92a8;
      local_4a0 = 1;
      ppplStack_498 = (long ***)&DAT_00000008;
      local_490 = 0;
      uStack_488 = 0;
      uVar4 = anyhow::__private::format_err(&local_4a8);
      goto LAB_0014490e;
    }
    if (local_178 != 3) {
      if ((local_178 != 7) ||
         (*(int *)((long)local_180 + 3) != 0x72656972 || *local_180 != 0x72726162))
      goto LAB_00144c6a;
      if (0.0 < local_50) goto LAB_00144a88;
      local_4a8 = &PTR_s_gate_a_wait_b_timeout_ms_must_be_001e9298;
      local_4a0 = 1;
      ppplStack_498 = (long ***)&DAT_00000008;
      local_490 = 0;
      uStack_488 = 0;
      uVar4 = anyhow::__private::format_err(&local_4a8);
      goto LAB_0014490e;
    }
    if (*(char *)((long)local_180 + 2) != 'f' || (short)*local_180 != 0x666f) {
LAB_00144c6a:
      local_550 = &local_188;
      local_548 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_4a8 = &PTR_DAT_001e9278;
      local_4a0 = 2;
      uStack_488 = 0;
      ppplStack_498 = &local_550;
      local_490 = 1;
      puVar8 = local_4f0;
      (*(code *)PTR_format_inner_001ef760)(puVar8,&local_4a8);
      goto LAB_00144c17;
    }
LAB_00144a88:
    param_1[0x43] = (long)local_90;
    param_1[0x44] = local_88;
    param_1[0x45] = (long)local_80;
    param_1[0x46] = (long)local_78;
    param_1[0x47] = (long)local_70;
    *(char *)(param_1 + 0x48) = cVar5;
    *(undefined1 *)((long)param_1 + 0x241) = uVar7;
    *(undefined1 *)((long)param_1 + 0x242) = uVar6;
    *(undefined1 *)((long)param_1 + 0x243) = uVar2;
    if (*param_1 != -0x8000000000000000) {
      core::ptr::drop_in_place<strategy_sm3_1::SM31Params>(param_1);
    }
    (*(code *)PTR_memcpy_001ef700)(param_1,&local_248,0x218);
    uVar4 = 0;
    if (local_520 == 0) {
      return 0;
    }
    goto LAB_00144928;
  case 10:
    cVar5 = '\x04';
    if (*(long *)((long)local_1c8 + 5) == 0x6e65706565645f65 && *local_1c8 == 0x645f65766974616e)
    goto joined_r0x00144961;
  }
switchD_001445f0_caseD_7:
  local_560 = local_1c8;
  local_558 = local_1c0;
  local_550 = &local_560;
  local_548 = _<&T_as_core::fmt::Display>::fmt;
  local_4a8 = &PTR_s_gate_maker_mode____not_in_off_na_001e9208;
  local_4a0 = 2;
  uStack_488 = 0;
  ppplStack_498 = &local_550;
  local_490 = 1;
  (*(code *)PTR_format_inner_001ef760)(local_260,&local_4a8);
  uVar4 = anyhow::error::_<impl_anyhow::Error>::msg(local_260);
LAB_0014490e:
  core::ptr::drop_in_place<strategy_sm3_1::SM31Params>(&local_248);
  if (local_520 != 0) {
LAB_00144928:
    (*(code *)PTR___rust_dealloc_001ef6a0)(local_518,local_520,1);
  }
  return uVar4;
}




// ELF address 0x0000000000046fc0; <strategy_sm3_1::StrategySM31 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth

/* WARNING: Removing unreachable block (ram,0x0014712c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _<strategy_sm3_1::StrategySM31 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth */

undefined8 __rustcall
_<strategy_sm3_1::StrategySM31_as_future_backtest_sdk::plugin::StrategyPlugin>::on_depth
          (long param_1,long param_2,undefined8 param_3)

{
  double *pdVar1;
  ushort uVar2;
  ulong uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  bool bVar16;
  double dVar17;
  long local_2f8;
  long local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  long local_2b8;
  undefined8 local_2b0;
  double local_2a8;
  double *local_2a0;
  undefined *local_298;
  long local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined **local_278;
  undefined8 local_270;
  double **local_268;
  undefined8 local_260;
  undefined *local_258;
  undefined8 local_250;
  undefined1 local_248 [200];
  int *local_180;
  long local_178;
  double local_50;
  
  local_2b8 = param_2 + 0x20;
  lVar7 = *(long *)(param_1 + 0x278);
  local_2b0 = param_3;
  if (lVar7 != 0) {
    local_2f8 = *(long *)(param_1 + 0x280);
    uVar6 = *(undefined8 *)(param_2 + 0x28);
    uVar3 = *(ulong *)(param_2 + 0x30);
    while( true ) {
      uVar2 = *(ushort *)(lVar7 + 0x21a);
      uVar10 = 0xffffffffffffffff;
      lVar15 = 0;
      lVar11 = lVar7 + 8;
      do {
        uVar9 = (ulong)uVar2;
        if ((ulong)((uint)uVar2 * 8) * 3 == lVar15) goto LAB_001470c5;
        uVar9 = *(ulong *)(lVar11 + 0x10);
        uVar8 = uVar9;
        if (uVar3 < uVar9) {
          uVar8 = uVar3;
        }
        iVar5 = (*(code *)PTR_memcmp_001ef738)(uVar6,*(undefined8 *)(lVar11 + 8),uVar8);
        lVar12 = uVar3 - uVar9;
        if (iVar5 != 0) {
          lVar12 = (long)iVar5;
        }
        lVar15 = lVar15 + 0x18;
        uVar10 = uVar10 + 1;
        lVar11 = lVar11 + 0x18;
      } while ((char)((0 < lVar12) - (lVar12 < 0)) == '\x01');
      uVar9 = uVar10;
      if (0 < lVar12 == lVar12 < 0) break;
LAB_001470c5:
      bVar16 = local_2f8 == 0;
      local_2f8 = local_2f8 + -1;
      if (bVar16) goto LAB_00147152;
      lVar7 = *(long *)(lVar7 + 0x220 + uVar9 * 8);
    }
    pdVar1 = (double *)(lVar7 + 0xf8 + lVar15);
    if ((*(double *)(param_2 + 0x98) == *pdVar1) &&
       (!NAN(*(double *)(param_2 + 0x98)) && !NAN(*pdVar1))) {
      pdVar1 = (double *)(lVar7 + 0x100 + lVar15);
      if ((*(double *)(param_2 + 0x48) == *pdVar1) &&
         (!NAN(*(double *)(param_2 + 0x48)) && !NAN(*pdVar1))) goto LAB_00147152;
    }
    alloc::collections::btree::map::BTreeMap<K,V,A>::remove(local_248,param_1 + 0x278,local_2b8);
  }
LAB_00147152:
  _<strategy_sm3_1::SM31Params_as_core::clone::Clone>::clone(local_248,param_1);
  if (((local_178 == 7) && (*(int *)((long)local_180 + 3) == 0x72656972 && *local_180 == 0x72726162)
      ) && (lVar7 = *(long *)(param_1 + 0x290), lVar7 != 0)) {
    local_2f8 = *(long *)(param_1 + 0x298);
    uVar6 = *(undefined8 *)(param_2 + 0x28);
    uVar3 = *(ulong *)(param_2 + 0x30);
    do {
      uVar2 = *(ushort *)(lVar7 + 0x1c2);
      lVar11 = (ulong)((uint)uVar2 * 8) * 3;
      uVar10 = 0xffffffffffffffff;
      lVar15 = lVar7 + 0xb8;
      puVar14 = (undefined8 *)(lVar7 + -8);
      do {
        puVar13 = puVar14;
        uVar9 = (ulong)uVar2;
        if (lVar11 == 0) goto LAB_0014727a;
        uVar9 = *(ulong *)(lVar15 + 0x10);
        uVar8 = uVar9;
        if (uVar3 < uVar9) {
          uVar8 = uVar3;
        }
        iVar5 = (*(code *)PTR_memcmp_001ef738)(uVar6,*(undefined8 *)(lVar15 + 8),uVar8);
        lVar12 = uVar3 - uVar9;
        if (iVar5 != 0) {
          lVar12 = (long)iVar5;
        }
        lVar11 = lVar11 + -0x18;
        puVar14 = puVar13 + 2;
        uVar10 = uVar10 + 1;
        lVar15 = lVar15 + 0x18;
      } while ((char)((0 < lVar12) - (lVar12 < 0)) == '\x01');
      uVar9 = uVar10;
      if (0 < lVar12 == lVar12 < 0) {
        dVar17 = (*(double *)(param_2 + 0x40) - (double)puVar13[1]) * _DAT_00118550;
        if (local_50 <= DAT_00118470 + dVar17) {
                    /* try { // try from 001472d9 to 001472fa has its CatchHandler @ 00147468 */
          uVar6 = *puVar14;
          (*(code *)PTR_clone_001ef7b8)
                    (&local_2d0,local_2b8,&PTR_s_strategies_index_strategy_strate_001e9798);
                    /* try { // try from 001472fb to 001473d5 has its CatchHandler @ 00147480 */
          alloc::collections::btree::map::BTreeMap<K,V,A>::remove
                    (&local_278,param_1 + 0x290,&local_2d0);
          strategy_sm3_1::DecisionTelemetry::inc
                    (param_1 + 0x2a8,local_2c8,local_2c0,"barrier_timeout",0xf);
          uVar4 = local_2c8;
          if (dVar17 <= 0.0) {
            dVar17 = 0.0;
          }
          local_2a0 = &local_2a8;
          local_298 = PTR_fmt_001ef7e8;
          local_278 = &PTR_s_to_001e9710;
          local_270 = 1;
          local_258 = &DAT_001193a0;
          local_250 = 1;
          local_268 = &local_2a0;
          local_260 = 1;
          local_2a8 = dVar17;
          (*(code *)PTR_format_inner_001ef760)(&local_290,&local_278);
                    /* try { // try from 001473f1 to 00147410 has its CatchHandler @ 0014744d */
          uVar6 = strategy_sm3_1::StrategySM31::decide
                            (uVar6,param_1,local_2b0,uVar4,local_2c0,0,local_288,local_280);
          if (local_290 != 0) {
            (*(code *)PTR___rust_dealloc_001ef6a0)(local_288,local_290,1);
          }
          if (local_2d0 != 0) {
            (*(code *)PTR___rust_dealloc_001ef6a0)(local_2c8,local_2d0,1);
          }
          goto LAB_0014718b;
        }
        break;
      }
LAB_0014727a:
      bVar16 = local_2f8 == 0;
      local_2f8 = local_2f8 + -1;
      if (bVar16) break;
      lVar7 = *(long *)(lVar7 + 0x1c8 + uVar9 * 8);
    } while( true );
  }
  uVar6 = 0;
LAB_0014718b:
  core::ptr::drop_in_place<strategy_sm3_1::SM31Params>(local_248);
  return uVar6;
}




// ELF address 0x00000000000474c0; <strategy_sm3_1::StrategySM31 as future_backtest_sdk::plugin::StrategyPlugin>::on_finish

/* WARNING: Removing unreachable block (ram,0x001474c7) */
/* _<strategy_sm3_1::StrategySM31 as future_backtest_sdk::plugin::StrategyPlugin>::on_finish */

undefined8 __rustcall
_<strategy_sm3_1::StrategySM31_as_future_backtest_sdk::plugin::StrategyPlugin>::on_finish
          (long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  long local_190;
  long local_188;
  undefined8 local_180;
  ulong local_178 [3];
  undefined8 local_160;
  ulong local_158;
  undefined8 local_150;
  long local_148;
  undefined8 local_140;
  long local_138;
  undefined *local_130;
  undefined8 local_128;
  undefined8 **local_120;
  undefined8 local_118;
  undefined *local_110;
  undefined8 local_108;
  long local_100;
  char *local_f8;
  long local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined *local_d8;
  undefined8 local_d0;
  long local_c8;
  undefined8 *local_c0;
  code *local_b8;
  undefined8 *local_b0;
  code *local_a8;
  undefined8 *local_a0;
  code *local_98;
  undefined8 *local_90;
  undefined *local_88;
  long *local_80;
  code *local_78;
  long *local_70;
  code *local_68;
  long *local_60;
  code *local_58;
  long local_50;
  undefined *local_48;
  long local_40;
  undefined *local_38;
  
  lVar1 = *(long *)(param_1 + 0x10);
  local_e8 = *(undefined8 *)(param_1 + 0x38);
  local_f0 = 7;
  if (lVar1 != 0) {
    local_f0 = lVar1;
  }
  local_f8 = "unknown";
  if (lVar1 != 0) {
    local_f8 = *(char **)(param_1 + 8);
  }
  local_e0 = *(undefined8 *)(param_1 + 0x40);
  bVar4 = *(long *)(param_1 + 0xd8) != -0x8000000000000000;
  local_d0 = 4;
  if (bVar4) {
    local_d0 = *(undefined8 *)(param_1 + 0xe8);
  }
  local_d8 = &DAT_00118da4;
  if (bVar4) {
    local_d8 = *(undefined **)(param_1 + 0xe0);
  }
  local_180 = *(undefined8 *)(param_1 + 0x150);
  local_178[2] = *(long *)(param_1 + 0x2a8);
  local_160 = *(undefined8 *)(param_1 + 0x2b0);
  local_178[0] = (ulong)(local_178[2] != 0);
  local_138 = local_178[2];
  if (local_178[2] != 0) {
    local_138 = *(long *)(param_1 + 0x2b8);
  }
  local_178[1] = 0;
  local_150 = 0;
  local_158 = local_178[0];
  local_148 = local_178[2];
  local_140 = local_160;
  local_100 = param_1;
  auVar5 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>::
           next(local_178);
  puVar2 = PTR__eprint_001ef820;
  if (auVar5._0_8_ != 0) {
    do {
      local_188 = auVar5._8_8_;
      local_c8 = auVar5._0_8_;
      local_190 = local_c8 + 0x18;
      local_c0 = &local_f8;
      local_b8 = _<&T_as_core::fmt::Display>::fmt;
      local_b0 = &local_e8;
      local_a8 = _<&T_as_core::fmt::Display>::fmt;
      local_a0 = &local_d8;
      local_98 = _<&T_as_core::fmt::Display>::fmt;
      local_90 = &local_180;
      local_88 = PTR_fmt_001ef7e8;
      local_80 = &local_c8;
      local_78 = _<&T_as_core::fmt::Display>::fmt;
      local_70 = &local_190;
      local_68 = _<&T_as_core::fmt::Display>::fmt;
      local_60 = &local_188;
      local_58 = _<&T_as_core::fmt::Display>::fmt;
      local_130 = &DAT_001e9850;
      local_128 = 8;
      local_110 = (undefined *)0x0;
      local_118 = 7;
      local_120 = &local_c0;
      (*(code *)puVar2)(&local_130);
      auVar5 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
               ::next(local_178);
    } while (auVar5._0_8_ != 0);
  }
  local_178[2] = *(long *)(local_100 + 0x2c0);
  local_160 = *(undefined8 *)(local_100 + 0x2c8);
  local_178[0] = (ulong)(local_178[2] != 0);
  local_138 = local_178[2];
  if (local_178[2] != 0) {
    local_138 = *(long *)(local_100 + 0x2d0);
  }
  local_178[1] = 0;
  local_150 = 0;
  local_158 = local_178[0];
  local_148 = local_178[2];
  local_140 = local_160;
  auVar5 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>::
           next(local_178);
  puVar3 = PTR__eprint_001ef820;
  puVar2 = PTR_fmt_001ef7e8;
  if (auVar5._0_8_ != 0) {
    do {
      local_60 = auVar5._8_8_;
      local_190 = auVar5._0_8_;
      local_188 = local_190 + 0x18;
      local_50 = (long)local_60 + 8;
      local_c0 = &local_f8;
      local_b8 = _<&T_as_core::fmt::Display>::fmt;
      local_b0 = &local_e8;
      local_a8 = _<&T_as_core::fmt::Display>::fmt;
      local_a0 = &local_d8;
      local_98 = _<&T_as_core::fmt::Display>::fmt;
      local_90 = &local_180;
      local_88 = puVar2;
      local_80 = &local_190;
      local_78 = _<&T_as_core::fmt::Display>::fmt;
      local_70 = &local_188;
      local_68 = _<&T_as_core::fmt::Display>::fmt;
      local_58 = (code *)PTR_fmt_001ef828;
      local_40 = (long)local_60 + 0x10;
      local_48 = puVar2;
      local_38 = puVar2;
      local_130 = &DAT_001e97b0;
      local_128 = 10;
      local_110 = &DAT_00119478;
      local_108 = 9;
      local_120 = &local_c0;
      local_118 = 9;
      (*(code *)puVar3)(&local_130);
      auVar5 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
               ::next(local_178);
    } while (auVar5._0_8_ != 0);
  }
  return 0;
}




// ELF address 0x0000000000044dc0; <strategy_sm3_1::StrategySM31 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal

/* WARNING: Removing unreachable block (ram,0x00146bfa) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _<strategy_sm3_1::StrategySM31 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal */

long __rustcall
_<strategy_sm3_1::StrategySM31_as_future_backtest_sdk::plugin::StrategyPlugin>::on_signal
          (long param_1,double param_2,undefined8 param_3)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  undefined1 auVar3 [16];
  undefined2 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  undefined *puVar9;
  undefined1 uVar10;
  undefined8 ******ppppppuVar11;
  char cVar12;
  int iVar13;
  long lVar14;
  undefined8 *******pppppppuVar15;
  ulong uVar16;
  undefined8 *******pppppppuVar17;
  undefined8 *******pppppppuVar18;
  undefined8 uVar19;
  char *pcVar20;
  long *plVar21;
  long lVar22;
  undefined8 *******pppppppuVar23;
  undefined8 uVar24;
  double *pdVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  undefined8 *******pppppppuVar29;
  undefined8 *******pppppppuVar30;
  ulong uVar31;
  undefined8 *******pppppppuVar32;
  undefined8 *******pppppppuVar33;
  ulong uVar34;
  long lVar35;
  uint uVar36;
  ushort uVar37;
  undefined8 *puVar38;
  undefined8 *******pppppppuVar39;
  undefined8 *******pppppppuVar40;
  undefined8 *******pppppppuVar41;
  long lVar42;
  bool bVar43;
  byte bVar44;
  char cVar45;
  char cVar47;
  char cVar48;
  double dVar46;
  double dVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  double local_560;
  undefined8 *******pppppppuStack_558;
  undefined8 *******pppppppuStack_500;
  undefined8 *******pppppppuStack_4f8;
  undefined8 *******pppppppuStack_4f0;
  undefined8 *******pppppppuStack_4e8;
  long local_4e0;
  undefined8 local_4d8;
  undefined8 local_4d0;
  undefined8 *******local_4c8;
  ulong uStack_4c0;
  undefined8 *******pppppppuStack_4b8;
  undefined8 *******pppppppuStack_4b0;
  undefined8 *******pppppppuStack_4a8;
  undefined8 *******pppppppuStack_4a0;
  undefined8 ******ppppppuStack_498;
  undefined1 auStack_490 [16];
  undefined1 auStack_480 [16];
  undefined8 ******ppppppuStack_470;
  undefined8 ******ppppppuStack_468;
  undefined8 ******ppppppuStack_460;
  long lStack_458;
  long lStack_450;
  undefined8 *******local_448;
  undefined8 uStack_440;
  long lStack_430;
  long lStack_428;
  undefined8 *******pppppppuStack_420;
  undefined8 *******pppppppuStack_418;
  undefined8 *******pppppppuStack_410;
  undefined8 *******pppppppuStack_408;
  undefined8 ******ppppppuStack_400;
  char *pcStack_3f8;
  undefined8 ******ppppppuStack_3f0;
  undefined8 uStack_3e8;
  undefined8 ******ppppppuStack_3e0;
  undefined8 ******ppppppuStack_3d8;
  undefined8 ******ppppppuStack_3d0;
  undefined8 *******local_3c8;
  undefined8 *******local_3c0;
  undefined8 *******local_3b8;
  undefined8 *******pppppppuStack_3b0;
  undefined8 *******pppppppuStack_3a8;
  undefined8 *******pppppppuStack_3a0;
  undefined8 *******pppppppuStack_398;
  double dStack_380;
  double dStack_330;
  undefined8 *******pppppppuStack_2c0;
  double dStack_2b8;
  undefined8 *******pppppppuStack_2b0;
  long local_2a8;
  long lStack_2a0;
  long lStack_298;
  undefined8 *******local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined4 local_278;
  undefined2 local_274;
  undefined8 *******local_270;
  undefined8 *******pppppppuStack_268;
  undefined8 *******pppppppuStack_260;
  undefined8 *******pppppppuStack_258;
  ulong uStack_250;
  undefined1 local_248 [32];
  short *local_228;
  long local_220;
  undefined8 uStack_210;
  undefined8 *******pppppppuStack_208;
  short *psStack_198;
  long lStack_190;
  int *piStack_180;
  long lStack_178;
  long local_170 [3];
  double dStack_158;
  ulong uStack_68;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  
  lVar14 = (*(code *)PTR_para_001ef7b0)(param_3);
  uVar4 = *(undefined2 *)(lVar14 + 0x34);
  uVar24 = *(undefined8 *)(lVar14 + 0x28);
  local_448 = *(undefined8 ********)(lVar14 + 0x18);
  uStack_440 = *(undefined8 *)(lVar14 + 0x20);
  uVar5 = *(undefined4 *)(lVar14 + 0x30);
  _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone
            (&local_2a8,lVar14,&PTR_s__hdd1_lyt_d_FutureCommodity_Mult_001e9640);
  local_290 = local_448;
  uStack_288 = uStack_440;
                    /* try { // try from 00144e53 to 00144e67 has its CatchHandler @ 00146f9d */
  local_280 = uVar24;
  local_278 = uVar5;
  local_274 = uVar4;
  _<strategy_sm3_1::SM31Params_as_core::clone::Clone>::clone(local_248,param_1);
                    /* try { // try from 00144e7c to 00144e98 has its CatchHandler @ 00146f78 */
  if ((local_170[0] == -0x8000000000000000) ||
     ((*(code *)PTR_clone_001ef7b8)
                (&local_3c8,local_170,&PTR_s__home_lyt__rustup_toolchains_nig_001e9670),
     pppppppuVar29 = local_3b8, pppppppuVar15 = local_3c0, pppppppuVar39 = local_3c8,
     local_3c8 == (undefined8 *******)0x8000000000000000)) {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001ef6c0)();
    pppppppuVar15 = (undefined8 *******)(*(code *)PTR___rust_alloc_001ef698)(7,1);
    if (pppppppuVar15 == (undefined8 *******)0x0) {
                    /* try { // try from 00146d9a to 00146db0 has its CatchHandler @ 00146f78 */
      (*(code *)PTR_handle_error_001ef768)
                (1,7,anon_ac6670d00a082a7ef9e2727059f64e7b_12_llvm_1358435023758527573);
      goto LAB_00146dcf;
    }
    *(undefined4 *)((long)pppppppuVar15 + 3) = 0x7974696c;
    *(undefined4 *)pppppppuVar15 = 0x6c697475;
    pppppppuVar29 = (undefined8 *******)&DAT_00000007;
    pppppppuVar39 = (undefined8 *******)&DAT_00000007;
  }
  uVar24 = *(undefined8 *)((long)param_2 + 0x50);
  local_448 = *(undefined8 ********)((long)param_2 + 0x58);
  if ((local_448 == pppppppuVar29) &&
     (iVar13 = (*(code *)PTR_bcmp_001ef778)(uVar24,pppppppuVar15,pppppppuVar29), iVar13 == 0)) {
                    /* try { // try from 00144f37 to 00144f50 has its CatchHandler @ 00146f00 */
    (*(code *)PTR_clone_001ef7b8)
              (&local_4e0,param_2,&PTR_s_strategies_index_strategy_strate_001e9688);
    lVar14 = param_1 + 0x2a8;
                    /* try { // try from 00144f68 to 00144fa2 has its CatchHandler @ 00146f0f */
    strategy_sm3_1::DecisionTelemetry::inc(lVar14,local_4d8,local_4d0,"u_event",7);
    (*(code *)PTR_clone_001ef7b8)
              (&local_270,(long)param_2 + 0x48,&PTR_s_strategies_index_strategy_strate_001e96a0);
                    /* try { // try from 00144fa3 to 00145388 has its CatchHandler @ 00146f11 */
    auVar52 = (*(code *)PTR_signal_parameter_id_001ef7c0)(uVar24,pppppppuVar29);
    puVar9 = PTR_K1_MAP_001ef7c8;
    uVar31 = 0;
    if ((auVar52 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
      uVar31 = auVar52._8_8_ & 0xffffffff;
    }
    if ((local_220 == 3) && ((char)local_228[1] == '2' && *local_228 == 0x5650)) {
      local_4c8 = *(undefined8 ********)((long)param_2 + 0x78);
    }
    else {
      if (*(long *)(PTR_K1_MAP_001ef7c8 + 0x30) != 2) {
                    /* try { // try from 00146d30 to 00146d3e has its CatchHandler @ 00146f11 */
        once_cell::imp::OnceCell<T>::initialize(PTR_K1_MAP_001ef7c8,PTR_K1_MAP_001ef7c8);
      }
      dVar49 = DAT_00118480;
      if (*(long *)(puVar9 + 0x18) != 0) {
        uVar26 = *(ulong *)(puVar9 + 0x28) ^ 0x646f72616e646f6d;
        uVar27 = *(ulong *)(puVar9 + 0x28) ^ 0x7065646279746573;
        uVar28 = uVar27 ^ uVar31;
        uVar34 = (*(ulong *)(puVar9 + 0x20) ^ 0x736f6d6570736575) + uVar26;
        uVar16 = (*(ulong *)(puVar9 + 0x20) ^ 0x6c7967656e657261) + uVar28;
        uVar26 = (uVar26 << 0xd | uVar26 >> 0x33) ^ uVar34;
        uVar27 = (uVar28 << 0x10 | uVar27 >> 0x30) ^ uVar16;
        uVar16 = uVar16 + uVar26;
        uVar28 = (uVar34 << 0x20 | uVar34 >> 0x20) + uVar27;
        uVar26 = (uVar26 << 0x11 | uVar26 >> 0x2f) ^ uVar16;
        uVar27 = (uVar27 << 0x15 | uVar27 >> 0x2b) ^ uVar28;
        uVar28 = (uVar28 ^ (uVar31 | 0x400000000000000)) + uVar26;
        uVar16 = ((uVar16 << 0x20 | uVar16 >> 0x20) ^ 0xff) + uVar27;
        uVar26 = (uVar26 << 0xd | uVar26 >> 0x33) ^ uVar28;
        uVar27 = (uVar27 << 0x10 | uVar27 >> 0x30) ^ uVar16;
        uVar16 = uVar16 + uVar26;
        uVar28 = (uVar28 << 0x20 | uVar28 >> 0x20) + uVar27;
        uVar26 = (uVar26 << 0x11 | uVar26 >> 0x2f) ^ uVar16;
        uVar27 = (uVar27 << 0x15 | uVar27 >> 0x2b) ^ uVar28;
        uVar28 = uVar28 + uVar26;
        uVar16 = (uVar16 << 0x20 | uVar16 >> 0x20) + uVar27;
        uVar26 = (uVar26 << 0xd | uVar26 >> 0x33) ^ uVar28;
        uVar27 = (uVar27 << 0x10 | uVar27 >> 0x30) ^ uVar16;
        uVar16 = uVar16 + uVar26;
        uVar28 = (uVar28 << 0x20 | uVar28 >> 0x20) + uVar27;
        uVar26 = (uVar26 << 0x11 | uVar26 >> 0x2f) ^ uVar16;
        uVar27 = (uVar27 << 0x15 | uVar27 >> 0x2b) ^ uVar28;
        uVar16 = (uVar16 << 0x20 | uVar16 >> 0x20) + uVar27;
        uVar26 = (uVar26 << 0xd | uVar26 >> 0x33) ^ uVar28 + uVar26;
        uVar27 = (uVar27 << 0x10 | uVar27 >> 0x30) ^ uVar16;
        uVar16 = uVar16 + uVar26;
        uVar16 = (uVar16 << 0x20 | uVar16 >> 0x20) ^ (uVar26 << 0x11 | uVar26 >> 0x2f) ^
                 (uVar27 << 0x15 | uVar27 >> 0x2b) ^ uVar16;
        lVar42 = *(long *)puVar9;
        bVar44 = (byte)(uVar16 >> 0x39);
        auVar52 = ZEXT216(CONCAT11(bVar44,bVar44));
        auVar52 = pshuflw(auVar52,auVar52,0);
        lVar35 = 0;
        while( true ) {
          uVar16 = uVar16 & *(ulong *)(puVar9 + 8);
          auVar3 = *(undefined1 (*) [16])(lVar42 + uVar16);
          cVar45 = auVar52[0];
          auVar51[0] = -(auVar3[0] == cVar45);
          cVar12 = auVar52[1];
          auVar51[1] = -(auVar3[1] == cVar12);
          cVar47 = auVar52[2];
          auVar51[2] = -(auVar3[2] == cVar47);
          cVar48 = auVar52[3];
          auVar51[3] = -(auVar3[3] == cVar48);
          auVar51[4] = -(auVar3[4] == cVar45);
          auVar51[5] = -(auVar3[5] == cVar12);
          auVar51[6] = -(auVar3[6] == cVar47);
          auVar51[7] = -(auVar3[7] == cVar48);
          auVar51[8] = -(auVar3[8] == cVar45);
          auVar51[9] = -(auVar3[9] == cVar12);
          auVar51[10] = -(auVar3[10] == cVar47);
          auVar51[0xb] = -(auVar3[0xb] == cVar48);
          auVar51[0xc] = -(auVar3[0xc] == cVar45);
          auVar51[0xd] = -(auVar3[0xd] == cVar12);
          cVar45 = auVar3[0xf];
          auVar51[0xe] = -(auVar3[0xe] == cVar47);
          auVar51[0xf] = -(cVar45 == cVar48);
          uVar37 = (ushort)(SUB161(auVar51 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar51 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar51 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar51 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar51 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar51 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar51 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar51 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar51 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar51 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar51 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar51 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar51 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar51 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar51 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar51[0xf] >> 7) << 0xf;
          uVar36 = (uint)uVar37;
          while (uVar37 != 0) {
            uVar7 = 0;
            for (uVar8 = uVar36; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
              uVar7 = uVar7 + 1;
            }
            uVar26 = uVar7 + uVar16 & *(ulong *)(puVar9 + 8);
            if ((int)uVar31 == *(int *)(lVar42 + -0x10 + uVar26 * -0x10)) {
              dVar49 = *(double *)(lVar42 + -8 + uVar26 * -0x10);
              goto LAB_001451ba;
            }
            uVar37 = (ushort)(uVar36 - 1) & (ushort)uVar36;
            uVar36 = CONCAT22((short)(uVar36 - 1 >> 0x10),uVar37);
          }
          auVar50[0] = -(auVar3[0] == -1);
          auVar50[1] = -(auVar3[1] == -1);
          auVar50[2] = -(auVar3[2] == -1);
          auVar50[3] = -(auVar3[3] == -1);
          auVar50[4] = -(auVar3[4] == -1);
          auVar50[5] = -(auVar3[5] == -1);
          auVar50[6] = -(auVar3[6] == -1);
          auVar50[7] = -(auVar3[7] == -1);
          auVar50[8] = -(auVar3[8] == -1);
          auVar50[9] = -(auVar3[9] == -1);
          auVar50[10] = -(auVar3[10] == -1);
          auVar50[0xb] = -(auVar3[0xb] == -1);
          auVar50[0xc] = -(auVar3[0xc] == -1);
          auVar50[0xd] = -(auVar3[0xd] == -1);
          auVar50[0xe] = -(auVar3[0xe] == -1);
          auVar50[0xf] = -(cVar45 == -1);
          if ((((((((((((((((auVar50 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                           (auVar50 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                          (auVar50 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                         (auVar50 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar50 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar50 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar50 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar50 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar50 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar50 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar50 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar50 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar50 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar50 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar50 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || cVar45 == -1)
          break;
          uVar16 = uVar16 + lVar35 + 0x10;
          lVar35 = lVar35 + 0x10;
        }
      }
LAB_001451ba:
      local_4c8 = (undefined8 *******)(dVar49 * *(double *)((long)param_2 + 0x70));
    }
    uStack_4c0 = 0;
    (*(code *)PTR_clone_001ef7b8)
              (&pppppppuStack_4b8,&local_4e0,&PTR_s_strategies_index_strategy_strate_001e96b8);
    pppppppuVar17 = pppppppuStack_4a8;
    pppppppuVar29 = pppppppuStack_4b0;
    pppppppuStack_3a8 = (undefined8 *******)(param_1 + 0x248);
    local_3c0 = *(undefined8 ********)(param_1 + 0x248);
    pppppppuStack_3b0 = pppppppuStack_3a8;
    if (local_3c0 != (undefined8 *******)0x0) {
      pppppppuStack_558 = *(undefined8 ********)(param_1 + 0x250);
      do {
        uVar37 = *(ushort *)((long)local_3c0 + 0x21a);
        lVar42 = (ulong)((uint)uVar37 * 8) * 3;
        pppppppuVar40 = (undefined8 *******)0xffffffffffffffff;
        pppppppuVar18 = local_3c0 + 1;
        do {
          pppppppuVar23 = (undefined8 *******)(ulong)uVar37;
          if (lVar42 == 0) goto LAB_001452c2;
          pppppppuVar23 = (undefined8 *******)pppppppuVar18[2];
          pppppppuVar32 = pppppppuVar23;
          if (pppppppuVar17 < pppppppuVar23) {
            pppppppuVar32 = pppppppuVar17;
          }
          iVar13 = (*(code *)PTR_memcmp_001ef738)(pppppppuVar29,pppppppuVar18[1],pppppppuVar32);
          lVar35 = (long)pppppppuVar17 - (long)pppppppuVar23;
          if (iVar13 != 0) {
            lVar35 = (long)iVar13;
          }
          lVar42 = lVar42 + -0x18;
          pppppppuVar40 = (undefined8 *******)((long)pppppppuVar40 + 1);
          pppppppuVar18 = pppppppuVar18 + 3;
        } while ((char)((0 < lVar35) - (lVar35 < 0)) == '\x01');
        pppppppuVar23 = pppppppuVar40;
        if (0 < lVar35 == lVar35 < 0) {
          local_3b8 = pppppppuStack_558;
          local_3c8 = (undefined8 *******)0x8000000000000000;
          pppppppuVar17 = local_3c0;
          pppppppuStack_3b0 = pppppppuVar40;
          if (pppppppuStack_4b8 != (undefined8 *******)0x0) {
            (*(code *)PTR___rust_dealloc_001ef6a0)(pppppppuVar29,pppppppuStack_4b8,1);
            pppppppuVar17 = local_3c0;
          }
          goto LAB_0014537c;
        }
LAB_001452c2:
        bVar43 = pppppppuStack_558 == (undefined8 *******)0x0;
        pppppppuStack_558 = (undefined8 *******)((long)pppppppuStack_558 + -1);
        if (bVar43) goto LAB_00145adb;
        local_3c0 = (undefined8 *******)local_3c0[(long)pppppppuVar23 + 0x44];
      } while( true );
    }
    local_3b8 = pppppppuStack_4a8;
    local_3c8 = pppppppuStack_4b8;
    local_3c0 = pppppppuStack_4b0;
    pppppppuStack_3a8 = (undefined8 *******)0x0;
    pppppppuVar17 = local_3c0;
    goto LAB_0014537c;
  }
  goto LAB_001460dc;
LAB_00145adb:
  pppppppuStack_3a0 = (undefined8 *******)0x0;
  local_3c8 = pppppppuStack_4b8;
  local_3b8 = pppppppuStack_4a8;
  pppppppuVar17 = pppppppuStack_4b0;
  pppppppuStack_3a8 = local_3c0;
  pppppppuStack_398 = pppppppuVar23;
LAB_0014537c:
  local_3c0 = pppppppuVar17;
  pppppppuVar17 =
       (undefined8 *******)
       alloc::collections::btree::map::entry::Entry<K,V,A>::or_insert_with(&local_3c8);
  pppppppuVar29 = (undefined8 *******)*pppppppuVar17;
  if (pppppppuVar29 != (undefined8 *******)0x0) {
    pppppppuStack_558 = (undefined8 *******)pppppppuVar17[1];
    do {
      uVar37 = *(ushort *)((long)pppppppuVar29 + 0x742);
      lVar42 = (ulong)((uint)uVar37 * 8) * 3;
      pppppppuVar40 = (undefined8 *******)0xffffffffffffffff;
      pppppppuVar18 = pppppppuVar29 + 199;
      do {
        pppppppuVar23 = (undefined8 *******)(ulong)uVar37;
        if (lVar42 == 0) goto LAB_00145458;
        pppppppuVar23 = (undefined8 *******)pppppppuVar18[2];
        pppppppuVar32 = pppppppuVar23;
        if (pppppppuStack_260 < pppppppuVar23) {
          pppppppuVar32 = pppppppuStack_260;
        }
        iVar13 = (*(code *)PTR_memcmp_001ef738)(pppppppuStack_268,pppppppuVar18[1],pppppppuVar32);
        lVar35 = (long)pppppppuStack_260 - (long)pppppppuVar23;
        if (iVar13 != 0) {
          lVar35 = (long)iVar13;
        }
        lVar42 = lVar42 + -0x18;
        pppppppuVar40 = (undefined8 *******)((long)pppppppuVar40 + 1);
        pppppppuVar18 = pppppppuVar18 + 3;
      } while ((char)((0 < lVar35) - (lVar35 < 0)) == '\x01');
      pppppppuVar23 = pppppppuVar40;
      if (0 < lVar35 == lVar35 < 0) {
        local_3b8 = pppppppuStack_558;
        local_3c8 = (undefined8 *******)0x8000000000000000;
        local_3c0 = pppppppuVar29;
        pppppppuStack_3b0 = pppppppuVar40;
        pppppppuStack_3a8 = pppppppuVar17;
        if (local_270 != (undefined8 *******)0x0) {
          (*(code *)PTR___rust_dealloc_001ef6a0)(pppppppuStack_268,local_270,1);
        }
        goto LAB_00145505;
      }
LAB_00145458:
      bVar43 = pppppppuStack_558 == (undefined8 *******)0x0;
      pppppppuStack_558 = (undefined8 *******)((long)pppppppuStack_558 + -1);
      if (bVar43) goto LAB_00145b30;
      pppppppuVar29 = (undefined8 *******)pppppppuVar29[(long)pppppppuVar23 + 0xe9];
    } while( true );
  }
  local_3c8 = local_270;
  local_3c0 = pppppppuStack_268;
  local_3b8 = pppppppuStack_260;
  pppppppuStack_3a8 = (undefined8 *******)0x0;
  pppppppuStack_3b0 = pppppppuVar17;
  goto LAB_00145505;
LAB_00145b30:
  pppppppuStack_3a0 = (undefined8 *******)0x0;
  local_3c8 = local_270;
  local_3c0 = pppppppuStack_268;
  local_3b8 = pppppppuStack_260;
  pppppppuStack_3b0 = pppppppuVar17;
  pppppppuStack_3a8 = pppppppuVar29;
  pppppppuStack_398 = pppppppuVar23;
LAB_00145505:
                    /* try { // try from 00145505 to 001455cf has its CatchHandler @ 00146f36 */
  uVar19 = alloc::collections::btree::map::entry::Entry<K,V,A>::or_insert_with(&local_3c8);
  dVar49 = *(double *)((long)param_2 + 0x68);
  (*(code *)PTR_update_score_001ef7d0)(dVar49,local_4c8,0,0,uVar19,0);
  (*(code *)PTR_clone_001ef7b8)
            (&local_3c8,&local_4e0,&PTR_s_strategies_index_strategy_strate_001e96d0);
  alloc::collections::btree::map::BTreeMap<K,V,A>::insert
            (dVar49,&pppppppuStack_4b8,param_1 + 0x260,&local_3c8);
  if ((lStack_190 == 2) && (*psStack_198 == 0x6e6f)) {
    (*(code *)PTR_depth_001ef7d8)(&local_3c8,param_3,local_4d8,local_4d0);
    pppppppuVar29 = pppppppuStack_3a8;
    if ((int)local_3c8 != 2) {
      pppppppuStack_420 = pppppppuStack_3a0;
                    /* try { // try from 00145614 to 0014564b has its CatchHandler @ 00146e64 */
      dStack_2b8 = (double)(*(code *)PTR_time_sec_001ef7e0)(param_3);
      (*(code *)PTR_cancel_pending_ids_001ef790)(&ppppppuStack_460,param_3,local_4d8,local_4d0);
                    /* try { // try from 0014565c to 0014566c has its CatchHandler @ 00146e6e */
      (*(code *)PTR_pending_orders_001ef770)(&pppppppuStack_4b8,param_3,local_4d8,local_4d0);
      lVar42 = lStack_458;
      pppppppuVar18 = pppppppuStack_4b0 + (long)pppppppuStack_4a8 * 0xb;
      pppppppuStack_500 = pppppppuStack_4b0;
      pppppppuStack_4f8 = pppppppuStack_4b0;
      pppppppuStack_4f0 = pppppppuStack_4b8;
      pppppppuStack_2b0 = pppppppuStack_4b0;
      pppppppuVar17 = pppppppuStack_4b8;
      pppppppuStack_4e8 = pppppppuVar18;
      if (pppppppuStack_4a8 == (undefined8 *******)0x0) {
        lStack_430 = 0;
        pppppppuVar40 = pppppppuStack_4b0;
LAB_00145baa:
        puVar9 = PTR___rust_dealloc_001ef6a0;
        pppppppuStack_4f8 = pppppppuVar40;
        if (pppppppuVar18 != pppppppuVar40) {
          uVar31 = (ulong)((long)pppppppuVar18 - (long)pppppppuVar40) / 0x58;
          pppppppuVar40 = pppppppuVar40 + 4;
          do {
            if (pppppppuVar40[-4] != (undefined8 ******)0x0) {
              (*(code *)puVar9)(pppppppuVar40[-3],pppppppuVar40[-4],1);
            }
            if (pppppppuVar40[-1] != (undefined8 ******)0x0) {
              (*(code *)puVar9)(*pppppppuVar40,pppppppuVar40[-1],1);
            }
            pppppppuVar40 = pppppppuVar40 + 0xb;
            uVar31 = uVar31 - 1;
          } while (uVar31 != 0);
        }
      }
      else {
        pppppppuStack_258 = (undefined8 *******)(_DAT_00118b10 ^ (ulong)local_4c8);
        uStack_250 = _UNK_00118b18 ^ uStack_4c0;
        lVar35 = lStack_450 * 0x18;
        lStack_430 = 0;
        lStack_428 = lStack_450;
        pppppppuVar23 = pppppppuStack_4b0;
        lVar22 = lStack_450;
        do {
          pppppppuVar32 = pppppppuVar23;
          pppppppuStack_2c0 = pppppppuVar17;
          if (lVar22 == 0) {
            while( true ) {
              pppppppuVar23 = pppppppuVar32 + 0xb;
              pppppppuVar33 = (undefined8 *******)*pppppppuVar32;
              ppppppuStack_3d8 = pppppppuVar32[9];
              ppppppuStack_3d0 = pppppppuVar32[10];
              uStack_3e8 = *(undefined8 *)*(undefined1 (*) [16])(pppppppuVar32 + 7);
              ppppppuStack_3e0 = pppppppuVar32[8];
              auVar3 = *(undefined1 (*) [16])(pppppppuVar32 + 7);
              pcStack_3f8 = *(char **)*(undefined1 (*) [16])(pppppppuVar32 + 5);
              ppppppuStack_3f0 = pppppppuVar32[6];
              auVar52 = *(undefined1 (*) [16])(pppppppuVar32 + 5);
              pppppppuStack_408 = (undefined8 *******)pppppppuVar32[3];
              ppppppuStack_400 = pppppppuVar32[4];
              pppppppuVar30 = (undefined8 *******)pppppppuVar32[1];
              pppppppuVar41 = (undefined8 *******)pppppppuVar32[2];
              pppppppuVar40 = pppppppuVar23;
              pppppppuStack_418 = pppppppuVar30;
              pppppppuStack_410 = pppppppuVar41;
              if (pppppppuVar33 == (undefined8 *******)0x8000000000000000) goto LAB_00145baa;
              ppppppuStack_468._0_1_ = (char)ppppppuStack_3d0;
              bVar43 = dStack_330 < (double)ppppppuStack_3f0;
              if ((char)ppppppuStack_468 != '\0') {
                bVar43 = (double)ppppppuStack_3f0 < dStack_380;
              }
              pppppppuStack_4b8 = pppppppuVar33;
              pppppppuStack_4b0 = pppppppuVar30;
              pppppppuStack_4a8 = pppppppuVar41;
              pppppppuStack_4a0 = pppppppuStack_408;
              ppppppuStack_498 = ppppppuStack_400;
              auStack_490 = auVar52;
              auStack_480 = auVar3;
              ppppppuStack_470 = ppppppuStack_3d8;
              ppppppuVar11 = ppppppuStack_3d0;
              if (bVar43) break;
              ppppppuStack_468 = ppppppuStack_3d0;
              if (pppppppuVar33 != (undefined8 *******)0x0) {
                (*(code *)PTR___rust_dealloc_001ef6a0)(pppppppuVar30,pppppppuVar33,1);
              }
              if (pppppppuStack_4a0 != (undefined8 *******)0x0) {
                (*(code *)PTR___rust_dealloc_001ef6a0)(ppppppuStack_498,pppppppuStack_4a0,1);
              }
              pppppppuVar33 = pppppppuVar32 + 0xb;
              pppppppuVar40 = pppppppuVar18;
              pppppppuVar32 = pppppppuVar23;
              if (pppppppuVar33 == pppppppuVar18) goto LAB_00145baa;
            }
          }
          else {
            while( true ) {
              pppppppuVar32 = (undefined8 *******)*pppppppuVar23;
              ppppppuStack_3d8 = pppppppuVar23[9];
              ppppppuStack_3d0 = pppppppuVar23[10];
              pauVar1 = (undefined1 (*) [16])(pppppppuVar23 + 7);
              uStack_3e8 = *(undefined8 *)*pauVar1;
              ppppppuStack_3e0 = pppppppuVar23[8];
              pauVar2 = (undefined1 (*) [16])(pppppppuVar23 + 5);
              pcStack_3f8 = *(char **)*pauVar2;
              ppppppuStack_3f0 = pppppppuVar23[6];
              pppppppuStack_408 = (undefined8 *******)pppppppuVar23[3];
              ppppppuStack_400 = pppppppuVar23[4];
              pppppppuVar30 = (undefined8 *******)pppppppuVar23[1];
              pppppppuVar41 = (undefined8 *******)pppppppuVar23[2];
              pppppppuVar23 = pppppppuVar23 + 0xb;
              pppppppuVar40 = pppppppuVar23;
              pppppppuStack_418 = pppppppuVar30;
              pppppppuStack_410 = pppppppuVar41;
              if (pppppppuVar32 == (undefined8 *******)0x8000000000000000) goto LAB_00145baa;
              lVar22 = 0;
              pppppppuStack_4b8 = pppppppuVar32;
              pppppppuStack_4b0 = pppppppuVar30;
              pppppppuStack_4a8 = pppppppuVar41;
              pppppppuStack_4a0 = pppppppuStack_408;
              ppppppuStack_498 = ppppppuStack_400;
              auStack_490 = *pauVar2;
              auStack_480 = *pauVar1;
              ppppppuStack_470 = ppppppuStack_3d8;
              ppppppuStack_468 = ppppppuStack_3d0;
              do {
                if ((*(undefined8 ********)(lVar42 + 0x10 + lVar22) == pppppppuVar41) &&
                   (iVar13 = (*(code *)PTR_bcmp_001ef778)
                                       (*(undefined8 *)(lVar42 + 8 + lVar22),pppppppuVar30,
                                        pppppppuVar41), iVar13 == 0)) goto LAB_00145860;
                lVar22 = lVar22 + 0x18;
              } while (lVar35 != lVar22);
              bVar43 = dStack_330 < (double)auStack_490._8_8_;
              if ((char)ppppppuStack_468 != '\0') {
                bVar43 = (double)auStack_490._8_8_ < dStack_380;
              }
              pppppppuVar17 = pppppppuStack_2c0;
              ppppppuVar11 = ppppppuStack_468;
              if (bVar43) break;
LAB_00145860:
              if (pppppppuVar32 != (undefined8 *******)0x0) {
                (*(code *)PTR___rust_dealloc_001ef6a0)(pppppppuVar30,pppppppuVar32,1);
              }
              pppppppuVar17 = pppppppuStack_2c0;
              if (pppppppuStack_4a0 != (undefined8 *******)0x0) {
                (*(code *)PTR___rust_dealloc_001ef6a0)(ppppppuStack_498,pppppppuStack_4a0,1);
              }
              if (pppppppuVar23 == pppppppuVar18) goto LAB_00145baa;
            }
          }
          ppppppuStack_468 = ppppppuVar11;
          bVar43 = (char)ppppppuStack_468 == '\0';
          pppppppuVar40 = local_4c8;
          if (bVar43) {
            pppppppuVar40 = pppppppuStack_258;
          }
          pppppppuStack_4f8 = pppppppuVar23;
          if (((double)pppppppuVar40 < (double)(uStack_68 ^ _DAT_00118b10)) &&
             (dStack_60 < (dStack_2b8 - (double)ppppppuStack_470) * _DAT_00118550)) {
                    /* try { // try from 00145a68 to 00145a78 has its CatchHandler @ 00146dd1 */
            lVar22 = (*(code *)PTR_cancel_order_001ef780)
                               (param_3,local_4d8,local_4d0,pppppppuVar30,pppppppuVar41);
            if (lVar22 != 0) {
              core::ptr::drop_in_place<future_backtest_sdk::types::PendingOrder>(&pppppppuStack_4b8)
              ;
                    /* try { // try from 00146d54 to 00146d6c has its CatchHandler @ 00146e6e */
              _<alloc::vec::into_iter::IntoIter<T,A>as_core::ops::drop::Drop>::drop
                        (&pppppppuStack_500);
              core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&ppppppuStack_460);
              pppppppuVar17 = pppppppuStack_420;
              goto joined_r0x00146d7d;
            }
            lStack_430 = lStack_430 + 1;
          }
          lVar22 = lStack_428;
          core::ptr::drop_in_place<future_backtest_sdk::types::PendingOrder>(&pppppppuStack_4b8);
        } while (pppppppuVar23 != pppppppuVar18);
      }
      if (pppppppuVar17 != (undefined8 *******)0x0) {
        (*(code *)PTR___rust_dealloc_001ef6a0)(pppppppuStack_2b0,(long)pppppppuVar17 * 0x58,8);
      }
      if (lStack_430 != 0) {
                    /* try { // try from 00145c43 to 00145cf5 has its CatchHandler @ 00146e6e */
        (*(code *)PTR_clone_001ef7b8)
                  (&pppppppuStack_4b8,&local_4e0,&PTR_s_strategies_index_strategy_strate_001e96e8);
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001ef6c0)();
        pcVar20 = (char *)(*(code *)PTR___rust_alloc_001ef698)(0x11,1);
        uVar19 = s_c1_cancel_request_0011937b._8_8_;
        if (pcVar20 == (char *)0x0) {
                    /* try { // try from 00146db3 to 00146dce has its CatchHandler @ 00146e3a */
          (*(code *)PTR_handle_error_001ef768)
                    (1,0x11,anon_ac6670d00a082a7ef9e2727059f64e7b_12_llvm_1358435023758527573);
LAB_00146dcf:
                    /* WARNING: Does not return */
          pcVar6 = (code *)invalidInstructionException();
          (*pcVar6)();
        }
        *(undefined8 *)pcVar20 = s_c1_cancel_request_0011937b._0_8_;
        *(undefined8 *)(pcVar20 + 8) = uVar19;
        pcVar20[0x10] = 't';
        pppppppuStack_418 = pppppppuStack_4b8;
        pppppppuStack_410 = pppppppuStack_4b0;
        pppppppuStack_408 = pppppppuStack_4a8;
        ppppppuStack_400 = (undefined8 ******)0x11;
        ppppppuStack_3f0 = (undefined8 ******)0x11;
        pcStack_3f8 = pcVar20;
        alloc::collections::btree::map::BTreeMap<K,V,A>::entry
                  (&pppppppuStack_4b8,lVar14,&pppppppuStack_418);
        plVar21 = (long *)alloc::collections::btree::map::entry::Entry<K,V,A>::or_default
                                    (&pppppppuStack_4b8);
        *plVar21 = *plVar21 + lStack_430;
      }
      lVar42 = lStack_458;
      puVar9 = PTR___rust_dealloc_001ef6a0;
      if (lStack_450 != 0) {
        puVar38 = (undefined8 *)(lStack_458 + 8);
        lVar35 = lStack_450;
        do {
          if (puVar38[-1] != 0) {
            (*(code *)puVar9)(*puVar38,puVar38[-1],1);
          }
          puVar38 = puVar38 + 3;
          lVar35 = lVar35 + -1;
        } while (lVar35 != 0);
      }
      if (ppppppuStack_460 != (undefined8 ******)0x0) {
        (*(code *)PTR___rust_dealloc_001ef6a0)(lVar42,(long)ppppppuStack_460 * 0x18,8);
      }
      if (pppppppuVar29 != (undefined8 *******)0x0) {
        (*(code *)PTR___rust_dealloc_001ef6a0)(pppppppuStack_420,pppppppuVar29,1);
      }
    }
  }
  if ((lStack_178 == 7) &&
     (*(int *)((long)piStack_180 + 3) == 0x72656972 && *piStack_180 == 0x72726162)) {
                    /* try { // try from 00145dcc to 00145ef8 has its CatchHandler @ 00146f36 */
    alloc::collections::btree::map::BTreeMap<K,V,A>::remove
              (&pppppppuStack_418,param_1 + 0x290,&local_4e0);
    pppppppuVar18 = pppppppuStack_408;
    if ((int)pppppppuStack_418 == 1) {
      ppppppuStack_460 = (undefined8 ******)((dVar49 - (double)pppppppuStack_410) * _DAT_00118550);
      dVar49 = (double)ppppppuStack_460 + DAT_00118470;
      if ((double)ppppppuStack_460 <= 0.0) {
        ppppppuStack_460 = (undefined8 ******)0x0;
      }
      if (dStack_50 <= dVar49) {
                    /* try { // try from 00145f65 to 0014600c has its CatchHandler @ 00146f36 */
        strategy_sm3_1::DecisionTelemetry::inc(lVar14,local_4d8,local_4d0,"barrier_timeout",0xf);
        uVar19 = local_4d8;
        pppppppuStack_500 = &ppppppuStack_460;
        pppppppuStack_4f8 = (undefined8 *******)PTR_fmt_001ef7e8;
        local_3c8 = (undefined8 *******)&PTR_s_to_001e9710;
        local_3c0 = (undefined8 *******)0x1;
        pppppppuStack_3a8 = (undefined8 *******)&DAT_001193a0;
        pppppppuStack_3a0 = (undefined8 *******)0x1;
        local_3b8 = &pppppppuStack_500;
        pppppppuStack_3b0 = (undefined8 *******)0x1;
        (*(code *)PTR_format_inner_001ef760)(&pppppppuStack_4b8,&local_3c8);
        pppppppuVar17 = pppppppuStack_4b0;
        pppppppuVar29 = pppppppuStack_4b8;
                    /* try { // try from 00146028 to 00146047 has its CatchHandler @ 00146df6 */
        lVar22 = strategy_sm3_1::StrategySM31::decide
                           (pppppppuVar18,param_1,param_3,uVar19,local_4d0,0,pppppppuStack_4b0,
                            pppppppuStack_4a8);
      }
      else {
        strategy_sm3_1::DecisionTelemetry::inc(lVar14,local_4d8,local_4d0,"barrier_b_flushbf",0xf);
        uVar19 = local_4d8;
        pppppppuStack_500 = &ppppppuStack_460;
        pppppppuStack_4f8 = (undefined8 *******)PTR_fmt_001ef7e8;
        local_3c8 = (undefined8 *******)&DAT_001e9700;
        local_3c0 = (undefined8 *******)0x1;
        pppppppuStack_3a8 = (undefined8 *******)&DAT_001193a0;
        pppppppuStack_3a0 = (undefined8 *******)0x1;
        local_3b8 = &pppppppuStack_500;
        pppppppuStack_3b0 = (undefined8 *******)0x1;
        (*(code *)PTR_format_inner_001ef760)(&pppppppuStack_4b8,&local_3c8);
        pppppppuVar17 = pppppppuStack_4b0;
        pppppppuVar29 = pppppppuStack_4b8;
                    /* try { // try from 00145f14 to 00145f3f has its CatchHandler @ 00146e18 */
        lVar22 = strategy_sm3_1::StrategySM31::decide
                           (pppppppuVar18,local_4c8,param_1,param_3,uVar19,local_4d0,1,
                            pppppppuStack_4b0,pppppppuStack_4a8);
      }
      if (lVar22 != 0) {
joined_r0x00146d7d:
        if (pppppppuVar29 != (undefined8 *******)0x0) {
          (*(code *)PTR___rust_dealloc_001ef6a0)(pppppppuVar17,pppppppuVar29,1);
        }
        if (local_4e0 != 0) {
          (*(code *)PTR___rust_dealloc_001ef6a0)(local_4d8,local_4e0,1);
        }
        goto LAB_00146119;
      }
      if (pppppppuVar29 != (undefined8 *******)0x0) {
        (*(code *)PTR___rust_dealloc_001ef6a0)(pppppppuVar17,pppppppuVar29,1);
      }
    }
  }
  if (local_4e0 != 0) {
    (*(code *)PTR___rust_dealloc_001ef6a0)(local_4d8,local_4e0,1);
  }
LAB_001460dc:
  if ((pppppppuStack_208 == (undefined8 *******)0x0 || local_448 != pppppppuStack_208) ||
     (iVar13 = (*(code *)PTR_bcmp_001ef778)(uVar24,uStack_210), iVar13 != 0)) {
    lVar22 = 0;
    goto LAB_00146119;
  }
                    /* try { // try from 001461b9 to 001461cb has its CatchHandler @ 00146f00 */
  (*(code *)PTR_trade_codes_001ef7f0)(&ppppppuStack_460,param_3);
  puVar9 = PTR_bcmp_001ef778;
  if (lStack_450 != 0) {
    uVar24 = *(undefined8 *)((long)param_2 + 8);
    lVar14 = *(long *)((long)param_2 + 0x10);
    lVar42 = 0;
    do {
      if ((*(long *)(lStack_458 + 0x10 + lVar42) == lVar14) &&
         (iVar13 = (*(code *)puVar9)(*(undefined8 *)(lStack_458 + 8 + lVar42),uVar24,lVar14),
         iVar13 == 0)) {
        lVar42 = param_1 + 0x2a8;
                    /* try { // try from 0014625c to 001462c2 has its CatchHandler @ 00146eee */
        strategy_sm3_1::DecisionTelemetry::inc(lVar42,uVar24,lVar14,"a_event",7);
        cVar45 = *(char *)((long)param_2 + 0x94);
        uVar10 = (undefined1)local_278;
        (*(code *)PTR_inst_start_time_sec_001ef7f8)(param_3);
        cVar12 = (*(code *)PTR_is_trade_start_001ef800)(param_3,cVar45);
        if (cVar12 != '\0') {
          cVar12 = (*(code *)PTR_is_trade_end_001ef808)(param_3,cVar45);
          if (cVar12 != '\0') {
            if (cVar45 == '\0') {
              if ((char)local_274 != '\0') goto LAB_001463ee;
            }
            else if (local_278._3_1_ == '\x01') {
LAB_001463ee:
                    /* try { // try from 001463ee to 00146455 has its CatchHandler @ 00146eee */
              lVar22 = (*(code *)PTR_all_in_001ef810)(param_3,cVar45,uVar10);
              goto LAB_00146352;
            }
          }
          if (local_220 == 3) {
            if ((char)local_228[1] == '2' && *local_228 == 0x5650) {
              dVar49 = *(double *)((long)param_2 + 0x78);
            }
            else {
              if (((char)local_228[1] == '3' && *local_228 == 0x5650) ||
                 ((char)local_228[1] != '4' || *local_228 != 0x5650)) goto LAB_00146338;
              dVar49 = *(double *)((long)param_2 + 0x70);
            }
          }
          else {
LAB_00146338:
            dVar49 = *(double *)((long)param_2 + 0x70) * dStack_158;
          }
          dVar46 = (double)(*(code *)PTR_time_sec_001ef7e0)(param_3);
          pppppppuVar29 = local_290;
          (*(code *)PTR_clone_001ef7b8)
                    (&pppppppuStack_500,param_2,&PTR_s_strategies_index_strategy_strate_001e9720);
                    /* try { // try from 00146456 to 0014646f has its CatchHandler @ 00146e5f */
          (*(code *)PTR_clone_001ef7b8)
                    (&pppppppuStack_418,(long)param_2 + 0x48,
                     &PTR_s_strategies_index_strategy_strate_001e9738);
                    /* try { // try from 00146480 to 00146be8 has its CatchHandler @ 00146eac */
          (*(code *)PTR_depth_001ef7d8)(&local_3c8,param_3,pppppppuStack_4f8,pppppppuStack_4f0);
          if (local_3c8 == (undefined8 *******)0x2) goto LAB_0014649f;
          if (((((ulong)local_3c8 & 1) != 0) && (((ulong)local_3b8 & 1) != 0)) &&
             (DAT_001184b8 <
              (double)((ulong)(((double)local_3c0 - (double)pppppppuStack_3b0) /
                              ((double)local_3c0 + (double)pppppppuStack_3b0)) & _DAT_001185a0))) {
            if (pppppppuStack_3a8 != (undefined8 *******)0x0) {
              (*(code *)PTR___rust_dealloc_001ef6a0)(pppppppuStack_3a0,pppppppuStack_3a8,1);
            }
            goto LAB_0014649f;
          }
          if (pppppppuStack_3a8 != (undefined8 *******)0x0) {
            (*(code *)PTR___rust_dealloc_001ef6a0)(pppppppuStack_3a0,pppppppuStack_3a8,1);
          }
          (*(code *)PTR_clone_001ef7b8)
                    (&pppppppuStack_4b8,&pppppppuStack_500,
                     &PTR_s_strategies_index_strategy_strate_001e9750);
          pppppppuVar40 = pppppppuStack_4a8;
          pppppppuVar17 = (undefined8 *******)(param_1 + 0x248);
          pppppppuVar18 = *(undefined8 ********)(param_1 + 0x248);
          if (pppppppuVar18 == (undefined8 *******)0x0) {
            local_3b8 = pppppppuStack_4a8;
            local_3c8 = pppppppuStack_4b8;
            local_3c0 = pppppppuStack_4b0;
            pppppppuStack_3a8 = (undefined8 *******)0x0;
            pppppppuStack_3b0 = pppppppuVar17;
            goto LAB_001466da;
          }
          local_448 = pppppppuStack_4b0;
          local_4c8 = *(undefined8 ********)(param_1 + 0x250);
          goto LAB_0014657e;
        }
        break;
      }
      lVar42 = lVar42 + 0x18;
    } while (lStack_450 * 0x18 != lVar42);
    lVar22 = 0;
    goto LAB_00146352;
  }
  lVar22 = 0;
  if (ppppppuStack_460 == (undefined8 ******)0x0) goto LAB_00146119;
  goto LAB_001463c3;
LAB_0014657e:
  uVar37 = *(ushort *)((long)pppppppuVar18 + 0x21a);
  lVar14 = (ulong)((uint)uVar37 * 8) * 3;
  pppppppuVar32 = (undefined8 *******)0xffffffffffffffff;
  pppppppuVar23 = pppppppuVar18 + 1;
  do {
    pppppppuVar33 = (undefined8 *******)(ulong)uVar37;
    if (lVar14 == 0) goto LAB_00146622;
    pppppppuVar33 = (undefined8 *******)pppppppuVar23[2];
    pppppppuVar30 = pppppppuVar33;
    if (pppppppuVar40 < pppppppuVar33) {
      pppppppuVar30 = pppppppuVar40;
    }
    iVar13 = (*(code *)PTR_memcmp_001ef738)(local_448,pppppppuVar23[1],pppppppuVar30);
    lVar35 = (long)pppppppuVar40 - (long)pppppppuVar33;
    if (iVar13 != 0) {
      lVar35 = (long)iVar13;
    }
    lVar14 = lVar14 + -0x18;
    pppppppuVar32 = (undefined8 *******)((long)pppppppuVar32 + 1);
    pppppppuVar23 = pppppppuVar23 + 3;
  } while ((char)((0 < lVar35) - (lVar35 < 0)) == '\x01');
  pppppppuVar33 = pppppppuVar32;
  if (0 < lVar35 == lVar35 < 0) {
    local_3b8 = local_4c8;
    local_3c8 = (undefined8 *******)0x8000000000000000;
    local_3c0 = pppppppuVar18;
    pppppppuStack_3b0 = pppppppuVar32;
    pppppppuStack_3a8 = pppppppuVar17;
    if (pppppppuStack_4b8 != (undefined8 *******)0x0) {
      (*(code *)PTR___rust_dealloc_001ef6a0)(local_448,pppppppuStack_4b8,1);
    }
    goto LAB_001466da;
  }
LAB_00146622:
  if (local_4c8 == (undefined8 *******)0x0) goto LAB_00146c86;
  pppppppuVar18 = (undefined8 *******)pppppppuVar18[(long)((long)pppppppuVar33 + 0x44)];
  local_4c8 = (undefined8 *******)((long)local_4c8 + -1);
  goto LAB_0014657e;
LAB_00146cdb:
  pppppppuStack_3a0 = (undefined8 *******)0x0;
  local_3c8 = pppppppuStack_4b8;
  local_3b8 = pppppppuStack_4a8;
  local_3c0 = pppppppuStack_4b0;
  pppppppuStack_3b0 = pppppppuVar40;
  pppppppuStack_3a8 = pppppppuVar17;
  pppppppuStack_398 = pppppppuVar33;
  goto LAB_0014689b;
LAB_00146c86:
  pppppppuStack_3a0 = (undefined8 *******)0x0;
  local_3c8 = pppppppuStack_4b8;
  local_3b8 = pppppppuStack_4a8;
  local_3c0 = pppppppuStack_4b0;
  pppppppuStack_3b0 = pppppppuVar17;
  pppppppuStack_3a8 = pppppppuVar18;
  pppppppuStack_398 = pppppppuVar33;
LAB_001466da:
  pppppppuVar40 =
       (undefined8 *******)
       alloc::collections::btree::map::entry::Entry<K,V,A>::or_insert_with(&local_3c8);
  (*(code *)PTR_clone_001ef7b8)
            (&pppppppuStack_4b8,&pppppppuStack_418,&PTR_s_strategies_index_strategy_strate_001e9768)
  ;
  pppppppuVar18 = pppppppuStack_4a8;
  pppppppuVar17 = (undefined8 *******)*pppppppuVar40;
  if (pppppppuVar17 != (undefined8 *******)0x0) {
    local_448 = pppppppuStack_4b0;
    local_4c8 = (undefined8 *******)pppppppuVar40[1];
    do {
      uVar37 = *(ushort *)((long)pppppppuVar17 + 0x742);
      lVar14 = (ulong)((uint)uVar37 * 8) * 3;
      pppppppuVar32 = (undefined8 *******)0xffffffffffffffff;
      pppppppuVar23 = pppppppuVar17 + 199;
      do {
        pppppppuVar33 = (undefined8 *******)(ulong)uVar37;
        if (lVar14 == 0) goto LAB_001467d3;
        pppppppuVar33 = (undefined8 *******)pppppppuVar23[2];
        pppppppuVar30 = pppppppuVar33;
        if (pppppppuVar18 < pppppppuVar33) {
          pppppppuVar30 = pppppppuVar18;
        }
        iVar13 = (*(code *)PTR_memcmp_001ef738)(local_448,pppppppuVar23[1],pppppppuVar30);
        lVar35 = (long)pppppppuVar18 - (long)pppppppuVar33;
        if (iVar13 != 0) {
          lVar35 = (long)iVar13;
        }
        lVar14 = lVar14 + -0x18;
        pppppppuVar32 = (undefined8 *******)((long)pppppppuVar32 + 1);
        pppppppuVar23 = pppppppuVar23 + 3;
      } while ((char)((0 < lVar35) - (lVar35 < 0)) == '\x01');
      pppppppuVar33 = pppppppuVar32;
      if (0 < lVar35 == lVar35 < 0) {
        local_3b8 = local_4c8;
        local_3c8 = (undefined8 *******)0x8000000000000000;
        local_3c0 = pppppppuVar17;
        pppppppuStack_3b0 = pppppppuVar32;
        pppppppuStack_3a8 = pppppppuVar40;
        if (pppppppuStack_4b8 != (undefined8 *******)0x0) {
          (*(code *)PTR___rust_dealloc_001ef6a0)(local_448,pppppppuStack_4b8,1);
        }
        goto LAB_0014689b;
      }
LAB_001467d3:
      if (local_4c8 == (undefined8 *******)0x0) goto LAB_00146cdb;
      pppppppuVar17 = (undefined8 *******)pppppppuVar17[(long)((long)pppppppuVar33 + 0xe9)];
      local_4c8 = (undefined8 *******)((long)local_4c8 + -1);
    } while( true );
  }
  local_3b8 = pppppppuStack_4a8;
  local_3c8 = pppppppuStack_4b8;
  local_3c0 = pppppppuStack_4b0;
  pppppppuStack_3a8 = (undefined8 *******)0x0;
  pppppppuStack_3b0 = pppppppuVar40;
LAB_0014689b:
  uVar24 = alloc::collections::btree::map::entry::Entry<K,V,A>::or_insert_with(&local_3c8,local_248)
  ;
  (*(code *)PTR_update_score_001ef7d0)
            (dVar46 + (double)pppppppuVar29 / _DAT_00118550,dVar49,0,0,uVar24,0);
  if (((lStack_178 != 7) ||
      (*(int *)((long)piStack_180 + 3) != 0x72656972 || *piStack_180 != 0x72726162)) ||
     ((*(char *)(param_1 + 0x241) == '\0' &&
      ((*(double *)(param_1 + 0x220) <= 0.0 && (*(char *)(param_1 + 0x240) == '\0')))))) {
    pdVar25 = (double *)
              alloc::collections::btree::map::BTreeMap<K,V,A>::get
                        (param_1 + 0x260,&pppppppuStack_500);
    if ((pdVar25 == (double *)0x0) ||
       (dStack_58 * _DAT_00118558 < *(double *)((long)param_2 + 0x68) - *pdVar25)) {
      uVar24 = 0;
      local_560 = param_2;
    }
    else {
      local_560 = pdVar25[1];
      uVar24 = 1;
    }
    strategy_sm3_1::DecisionTelemetry::inc
              (lVar42,pppppppuStack_4f8,pppppppuStack_4f0,"legacy_path",0xb);
    lVar22 = strategy_sm3_1::StrategySM31::decide
                       (dVar49,local_560,param_1,param_3,pppppppuStack_4f8,pppppppuStack_4f0,uVar24,
                        "lg0",3);
    if (lVar22 == 0) {
      if (pppppppuStack_418 != (undefined8 *******)0x0) {
        (*(code *)PTR___rust_dealloc_001ef6a0)(pppppppuStack_410,pppppppuStack_418,1);
      }
      if (pppppppuStack_500 != (undefined8 *******)0x0) {
        (*(code *)PTR___rust_dealloc_001ef6a0)(pppppppuStack_4f8,pppppppuStack_500,1);
      }
      core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&ppppppuStack_460);
      if (pppppppuVar39 != (undefined8 *******)0x0) {
        (*(code *)PTR___rust_dealloc_001ef6a0)(pppppppuVar15,pppppppuVar39,1);
      }
      core::ptr::drop_in_place<strategy_sm3_1::SM31Params>(local_248);
      core::ptr::drop_in_place<future_backtest_sdk::types::StrategyPara>(&local_2a8);
      return 0;
    }
  }
  else {
    alloc::collections::btree::map::BTreeMap<K,V,A>::remove
              (&local_3c8,param_1 + 0x290,&pppppppuStack_500);
    if (local_3c8 != (undefined8 *******)0x0) {
      strategy_sm3_1::DecisionTelemetry::inc
                (lVar42,pppppppuStack_4f8,pppppppuStack_4f0,"barrier_supersede",0x11);
    }
    pdVar25 = (double *)
              alloc::collections::btree::map::BTreeMap<K,V,A>::get
                        (param_1 + 0x260,&pppppppuStack_500);
    if (((pdVar25 == (double *)0x0) ||
        (dVar46 = *(double *)((long)param_2 + 0x68) - *pdVar25, dVar46 < _DAT_00118528)) ||
       (dStack_58 * _DAT_00118558 < dVar46)) {
                    /* try { // try from 00146c28 to 00146c80 has its CatchHandler @ 00146eac */
      strategy_sm3_1::DecisionTelemetry::inc
                (lVar42,pppppppuStack_4f8,pppppppuStack_4f0,
                 "barrier_park[SM31_TELEMETRY]\tdate=\ta=\tb=\ta_threshold=\tcode=\tmetric=wait_\tcount=\ttotal_ms=\n"
                 ,0xc);
      (*(code *)PTR_clone_001ef7b8)
                (&local_3c8,&pppppppuStack_500,&PTR_s_strategies_index_strategy_strate_001e9780);
      alloc::collections::btree::map::BTreeMap<K,V,A>::insert
                (*(undefined8 *)((long)param_2 + 0x68),dVar49,&pppppppuStack_4b8,param_1 + 0x290,
                 &local_3c8);
    }
    else {
      dVar46 = pdVar25[1];
      strategy_sm3_1::DecisionTelemetry::inc
                (lVar42,pppppppuStack_4f8,pppppppuStack_4f0,"barrier_immediate",0x11);
      lVar22 = strategy_sm3_1::StrategySM31::decide
                         (dVar49,dVar46,param_1,param_3,pppppppuStack_4f8,pppppppuStack_4f0,1,"bi0",
                          3);
      if (lVar22 != 0) goto LAB_00146a04;
    }
LAB_0014649f:
    lVar22 = 0;
  }
LAB_00146a04:
  if (pppppppuStack_418 != (undefined8 *******)0x0) {
    (*(code *)PTR___rust_dealloc_001ef6a0)(pppppppuStack_410,pppppppuStack_418,1);
  }
  if (pppppppuStack_500 != (undefined8 *******)0x0) {
    (*(code *)PTR___rust_dealloc_001ef6a0)(pppppppuStack_4f8,pppppppuStack_500,1);
  }
LAB_00146352:
  puVar9 = PTR___rust_dealloc_001ef6a0;
  puVar38 = (undefined8 *)(lStack_458 + 8);
  lVar14 = lStack_450;
  do {
    if (puVar38[-1] != 0) {
      (*(code *)puVar9)(*puVar38,puVar38[-1],1);
    }
    puVar38 = puVar38 + 3;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  if (ppppppuStack_460 != (undefined8 ******)0x0) {
LAB_001463c3:
    (*(code *)PTR___rust_dealloc_001ef6a0)(lStack_458,(long)ppppppuStack_460 * 0x18,8);
  }
LAB_00146119:
  if (pppppppuVar39 != (undefined8 *******)0x0) {
    (*(code *)PTR___rust_dealloc_001ef6a0)(pppppppuVar15,pppppppuVar39,1);
  }
  core::ptr::drop_in_place<strategy_sm3_1::SM31Params>(local_248);
  puVar9 = PTR___rust_dealloc_001ef6a0;
  if (lStack_298 != 0) {
    puVar38 = (undefined8 *)(lStack_2a0 + 8);
    lVar14 = lStack_298;
    do {
      if (puVar38[-1] != 0) {
        (*(code *)puVar9)(*puVar38,puVar38[-1],1);
      }
      puVar38 = puVar38 + 3;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  if (local_2a8 != 0) {
    (*(code *)PTR___rust_dealloc_001ef6a0)(lStack_2a0,local_2a8 * 0x18,8);
  }
  return lVar22;
}




// ELF address 0x00000000000709e0; fb_strategy_sdk_abi_version

undefined8 fb_strategy_sdk_abi_version(void)

{
  return 4;
}




// ELF address 0x00000000000709f0; fb_strategy_sdk_version_str

ulong fb_strategy_sdk_version_str(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = param_2 - 1;
  }
  uVar2 = 5;
  if (uVar1 < 5) {
    uVar2 = uVar1;
  }
  (*(code *)PTR_memcpy_001ef700)(param_1,"0.6.0",uVar2);
  if (param_2 != 0) {
    *(undefined1 *)(param_1 + uVar2) = 0;
  }
  return uVar2;
}


