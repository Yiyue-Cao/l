// ELF address 0x000000000003ec90; strategy_sm4::cancel_side

/* strategy_sm4::cancel_side */

long __rustcall
strategy_sm4::cancel_side
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
  (*(code *)PTR_pending_orders_001e7988)(&local_48,param_1,param_2,param_3);
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
LAB_0013ef26:
    puVar4 = PTR___rust_dealloc_001e78c8;
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
          (*(code *)PTR___rust_dealloc_001e78c8)(lVar1,lVar11,1);
        }
        if (lVar2 != 0) {
          (*(code *)PTR___rust_dealloc_001e78c8)(lVar14,lVar2,1);
        }
        local_40 = plVar13;
        if (plVar13 == local_a0) goto LAB_0013eee4;
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
             (iVar5 = (*(code *)PTR_bcmp_001e7990)(*(undefined8 *)(lVar3 + 8 + lVar8),lVar1),
             lVar14 = local_98, lVar6 = local_50, lVar7 = local_a8, iVar5 == 0)) {
            if (lVar11 != 0) {
              (*(code *)PTR___rust_dealloc_001e78c8)(lVar1,lVar11,1);
            }
            goto LAB_0013eebb;
          }
          lVar8 = lVar8 + 0x18;
        } while (lVar6 != lVar8);
      }
                    /* try { // try from 0013ee50 to 0013ee6a has its CatchHandler @ 0013efdc */
      lVar7 = (*(code *)PTR_cancel_order_001e7998)(local_68,local_60,local_58,lVar1,lVar7);
      if (lVar7 != 0) {
        local_88 = plVar13;
        if (lVar11 != 0) {
          (*(code *)PTR___rust_dealloc_001e78c8)(lVar1,lVar11,1);
        }
        plVar10 = local_b0;
        lVar11 = local_b8;
        if (lVar2 != 0) {
          (*(code *)PTR___rust_dealloc_001e78c8)(lVar14,lVar2,1);
          plVar10 = local_b0;
          lVar11 = local_b8;
        }
        goto LAB_0013ef26;
      }
      lVar7 = local_c0[2];
      if (lVar7 == *local_c0) {
                    /* try { // try from 0013ee82 to 0013ee98 has its CatchHandler @ 0013efda */
        (*(code *)PTR_grow_one_001e79a0)(local_c0,&PTR_s_strategies_index_strategy_strate_001e1458);
      }
      lVar3 = local_c0[1];
      *(long *)(lVar3 + lVar7 * 0x18) = lVar11;
      *(long *)(lVar3 + 8 + lVar7 * 0x18) = lVar1;
      *(long *)(lVar3 + 0x10 + lVar7 * 0x18) = local_a8;
      local_c0[2] = lVar7 + 1;
LAB_0013eebb:
      if (lVar2 != 0) {
        (*(code *)PTR___rust_dealloc_001e78c8)(lVar14,lVar2,1);
      }
      plVar12 = plVar13;
      local_40 = plVar13;
    } while (plVar13 != local_a0);
LAB_0013eee4:
    lVar7 = 0;
    plVar10 = local_b0;
    lVar11 = local_b8;
    local_88 = plVar12;
  }
  if (lVar11 != 0) {
    (*(code *)PTR___rust_dealloc_001e78c8)(plVar10,lVar11 * 0x58,8);
  }
  return lVar7;
}




// ELF address 0x000000000003ebc0; strategy_sm4::default_pv1

/* strategy_sm4::default_pv1 */

undefined8 * __rustcall strategy_sm4::default_pv1(undefined8 *param_1)

{
  code *pcVar1;
  undefined2 *puVar2;
  undefined8 *puVar3;
  
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001e78e8)();
  puVar2 = (undefined2 *)(*(code *)PTR___rust_alloc_001e78c0)(3,1);
  if (puVar2 != (undefined2 *)0x0) {
    *(undefined1 *)(puVar2 + 1) = 0x31;
    *puVar2 = 0x5650;
    *param_1 = 3;
    param_1[1] = puVar2;
    param_1[2] = 3;
    return param_1;
  }
  (*(code *)PTR_handle_error_001e7970)
            (1,3,anon_d6c90fe0c8febcf3c104bcc2f0442008_10_llvm_8175779838802317276);
  pcVar1 = (code *)swi(3);
  puVar3 = (undefined8 *)(*pcVar1)();
  return puVar3;
}




// ELF address 0x0000000000063b60; _ZN12strategy_sm417signal_pairs_tree15SignalPairStats28get_pairs_time_sec_ms_median17hd03f3837d95f7339E.llvm.4719369549894925764

/* strategy_sm4::signal_pairs_tree::SignalPairStats::get_pairs_time_sec_ms_median */

undefined8 __rustcall
strategy_sm4::signal_pairs_tree::SignalPairStats::get_pairs_time_sec_ms_median(ulong *param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined1 local_51;
  double local_50;
  long local_48;
  long local_40;
  ulong local_38;
  undefined1 *local_30;
  long local_28;
  ulong local_20;
  long local_18;
  
  uVar3 = param_1[3];
  if (uVar3 == 0) {
    lVar2 = 0;
    uVar7 = 0;
    lVar5 = 0;
  }
  else {
    uVar7 = *param_1;
    uVar4 = 0;
    if (uVar7 <= param_1[2]) {
      uVar4 = uVar7;
    }
    lVar2 = param_1[2] - uVar4;
    lVar5 = uVar3 - (uVar7 - lVar2);
    if (uVar3 < uVar7 - lVar2 || lVar5 == 0) {
      uVar7 = uVar3 + lVar2;
      lVar5 = 0;
    }
  }
  local_20 = param_1[1];
  local_30 = (undefined1 *)(lVar2 * 0x68 + local_20);
  local_28 = uVar7 * 0x68 + local_20;
  local_18 = lVar5 * 0x68 + local_20;
  local_50 = (double)_<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::
                     from_iter(&local_48,&local_30,
                               &
                               PTR_anon_783cd9a4f7724ec660c77fda0343f220_2_llvm_17731430809145393098_001e2018
                              );
  lVar2 = local_40;
  if (local_38 == 0) {
    uVar6 = 0;
  }
  else {
    local_30 = &local_51;
    if (local_38 != 1) {
      if (local_38 < 0x15) {
                    /* try { // try from 00163c5b to 00163cca has its CatchHandler @ 00163ccd */
        core::slice::sort::shared::smallsort::insertion_sort_shift_left
                  (local_40,local_38,1,&local_30);
      }
      else {
        core::slice::sort::stable::driftsort_main(local_40,local_38,&local_30);
      }
      if ((local_38 & 1) == 0) {
        uVar3 = local_38 >> 1;
        if (local_38 <= uVar3 - 1) {
          (*(code *)PTR_panic_bounds_check_001e7ca8)
                    (uVar3 - 1,local_38,
                     &PTR_anon_6f943687bdd6e710d6695cc1d1c13590_14_llvm_7346471370157798290_001e21b8
                    );
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        local_50 = (*(double *)(lVar2 + -8 + uVar3 * 8) + *(double *)(lVar2 + uVar3 * 8)) *
                   DAT_00117f50;
        uVar6 = 1;
        goto joined_r0x00163ca5;
      }
    }
    local_50 = *(double *)(lVar2 + (local_38 & 0xfffffffffffffffe) * 4);
    uVar6 = 1;
  }
joined_r0x00163ca5:
  if (local_48 != 0) {
    (*(code *)PTR___rust_dealloc_001e78c8)(local_40,local_48 << 3,8);
  }
  return uVar6;
}




// ELF address 0x0000000000065300; strategy_sm4::signal_pairs_tree::SignalPairsTree::debug_string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_sm4::signal_pairs_tree::SignalPairsTree::debug_string */

undefined4 * __rustcall
strategy_sm4::signal_pairs_tree::SignalPairsTree::debug_string(undefined4 *param_1,long param_2)

{
  undefined4 *puVar1;
  code *pcVar2;
  double dVar3;
  undefined *puVar4;
  long lVar5;
  ulong *puVar6;
  ulong *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  bool bVar15;
  bool bVar16;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  undefined1 auVar17 [16];
  long local_1a8;
  long local_1a0;
  long local_198;
  undefined8 *local_190;
  code *local_188;
  undefined ***local_180;
  code *local_178;
  ulong *local_170;
  undefined *local_168;
  ulong *local_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  ulong **local_120;
  code *local_118;
  undefined8 **local_110;
  code *local_108;
  undefined8 local_100;
  undefined4 *local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  ulong local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  long local_88;
  undefined8 local_80;
  ulong local_78;
  undefined8 local_70;
  long local_68;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  double local_48;
  undefined8 local_40;
  double local_38;
  
  puVar4 = PTR_format_inner_001e79c8;
  local_1a8 = 0;
  local_1a0 = 8;
  local_198 = 0;
  local_88 = *(long *)(param_2 + 0x20);
  local_80 = *(undefined8 *)(param_2 + 0x28);
  local_98 = (ulong)(local_88 != 0);
  local_58 = local_88;
  if (local_88 != 0) {
    local_58 = *(long *)(param_2 + 0x30);
  }
  uStack_90 = 0;
  local_70 = 0;
  local_e0 = *(long *)(param_2 + 0x38);
  local_f0 = param_1;
  local_78 = local_98;
  local_68 = local_88;
  local_60 = local_80;
  if (local_e0 == 0) {
                    /* try { // try from 0016579f to 001657ab has its CatchHandler @ 00165889 */
    puVar6 = (ulong *)_<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                      ::next(&local_98);
    if (puVar6 != (ulong *)0x0) {
LAB_0016587a:
                    /* try { // try from 0016587a to 00165886 has its CatchHandler @ 001658d1 */
      local_160 = puVar6;
      (*(code *)PTR_unwrap_failed_001e7948)
                (&PTR_anon_6f943687bdd6e710d6695cc1d1c13590_14_llvm_7346471370157798290_001e2200);
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
  }
  else {
    local_e8 = *(long *)(param_2 + 0x40);
    while( true ) {
                    /* try { // try from 001653e0 to 00165502 has its CatchHandler @ 001658cf */
      auVar17 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                ::next(&local_98);
      puVar7 = auVar17._8_8_;
      puVar6 = auVar17._0_8_;
      if (puVar6 == (ulong *)0x0) break;
      lVar5 = local_e0;
      lVar8 = local_e8;
      while( true ) {
        lVar13 = 0;
        uVar9 = 0xffffffffffffffff;
        do {
          uVar10 = (ulong)*(ushort *)(lVar5 + 0x1c2);
          if ((ulong)*(ushort *)(lVar5 + 0x1c2) * 0x20 + lVar13 == 0) goto LAB_00165463;
          uVar10 = *(ulong *)(lVar5 + 0x170 + uVar9 * 8);
          bVar15 = *puVar6 < uVar10;
          bVar16 = !bVar15 && *puVar6 != uVar10;
          uVar10 = uVar9 + 1;
          lVar13 = lVar13 + -0x20;
          uVar9 = uVar10;
        } while ((char)(bVar16 - bVar15) == '\x01');
        if (bVar16 == bVar15) break;
LAB_00165463:
        bVar16 = lVar8 == 0;
        lVar8 = lVar8 + -1;
        if (bVar16) goto LAB_0016587a;
        lVar5 = *(long *)(lVar5 + 0x1c8 + uVar10 * 8);
      }
      local_d8 = (lVar5 - lVar13) + -0x20;
      local_120 = &local_160;
      local_118 = _<&T_as_core::fmt::Display>::fmt;
      local_110 = (undefined8 **)&local_d8;
      local_108 = _<&T_as_core::fmt::Debug>::fmt;
      local_190 = (undefined8 *)&DAT_001e2218;
      local_188 = (code *)0x2;
      local_170 = (ulong *)0x0;
      local_178 = (code *)0x2;
      local_180 = (undefined ***)&local_120;
      local_160 = puVar6;
      (*(code *)puVar4)(&local_c8,&local_190);
      local_158 = local_c8;
      uStack_154 = uStack_c4;
      uStack_150 = uStack_c0;
      uStack_14c = uStack_bc;
      local_148 = local_b8;
                    /* try { // try from 0016551f to 0016569a has its CatchHandler @ 001658e4 */
      local_50 = SignalPairStats::get_pairs_time_sec_ms_median(puVar7);
      dVar3 = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
      uVar9 = puVar7[3];
      local_48 = dVar3;
      if (uVar9 == 0) {
        local_40 = 0;
      }
      else {
        uVar10 = *puVar7;
        local_180 = (undefined ***)puVar7[1];
        uVar11 = uVar10;
        if (puVar7[2] < uVar10) {
          uVar11 = 0;
        }
        lVar5 = puVar7[2] - uVar11;
        uVar12 = uVar10 - lVar5;
        uVar11 = lVar5 + uVar9;
        if (uVar12 < uVar9) {
          uVar11 = uVar10;
        }
        lVar8 = uVar9 - uVar12;
        if (uVar9 < uVar12) {
          lVar8 = 0;
        }
        local_190 = (undefined8 *)(lVar5 * 0x68 + (long)local_180);
        local_188 = (code *)(uVar11 * 0x68 + (long)local_180);
        local_178 = (code *)(lVar8 * 0x68 + (long)local_180);
        dVar3 = (double)_<alloc::collections::vec_deque::iter::Iter<T>as_core::iter::traits::iterator::Iterator>
                        ::fold((int)DAT_00117f58,&local_190);
        auVar17._8_4_ = (int)(uVar9 >> 0x20);
        auVar17._0_8_ = uVar9;
        auVar17._12_4_ = _UNK_00118144;
        dVar3 = dVar3 / ((auVar17._8_8_ - _UNK_00118018) +
                        ((double)CONCAT44(_s__00118140,(int)uVar9) - _s__00118010));
        local_40 = 1;
      }
      local_d0 = puVar7[3];
      local_190 = &local_50;
      local_188 = _<core::option::Option<T>as_core::fmt::Debug>::fmt;
      local_180 = (undefined ***)&local_40;
      local_178 = _<core::option::Option<T>as_core::fmt::Debug>::fmt;
      local_170 = &local_d0;
      local_168 = PTR_fmt_001e7a80;
      local_120 = (ulong **)&PTR_s_median__mean__num__001e2238;
      local_118 = (code *)0x3;
      local_100 = 0;
      local_108 = (code *)0x3;
      local_110 = &local_190;
      local_38 = dVar3;
      (*(code *)puVar4)(&local_c8,&local_120);
      local_138 = local_c8;
      uStack_134 = uStack_c4;
      uStack_130 = uStack_c0;
      uStack_12c = uStack_bc;
      local_128 = local_b8;
      local_120 = (ulong **)&local_158;
      local_118 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_110 = (undefined8 **)&local_138;
      local_108 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_190 = (undefined8 *)&DAT_001e2268;
      local_188 = (code *)0x2;
      local_170 = (ulong *)0x0;
      local_178 = (code *)0x2;
                    /* try { // try from 00165710 to 0016571c has its CatchHandler @ 001658b0 */
      local_180 = (undefined ***)&local_120;
      (*(code *)puVar4)(&local_b0,&local_190);
      lVar5 = local_198;
      if (local_198 == local_1a8) {
                    /* try { // try from 00165728 to 00165737 has its CatchHandler @ 0016588b */
        (*(code *)PTR_grow_one_001e79a0)
                  (&local_1a8,
                   &PTR_anon_6f943687bdd6e710d6695cc1d1c13590_14_llvm_7346471370157798290_001e2288);
      }
      *(undefined8 *)(local_1a0 + 0x10 + lVar5 * 0x18) = local_a0;
      puVar1 = (undefined4 *)(local_1a0 + lVar5 * 0x18);
      *puVar1 = local_b0;
      puVar1[1] = uStack_ac;
      puVar1[2] = uStack_a8;
      puVar1[3] = uStack_a4;
      local_198 = lVar5 + 1;
      if (CONCAT44(uStack_134,local_138) != 0) {
        (*(code *)PTR___rust_dealloc_001e78c8)
                  (CONCAT44(uStack_12c,uStack_130),CONCAT44(uStack_134,local_138),1);
      }
      if (CONCAT44(uStack_154,local_158) != 0) {
        (*(code *)PTR___rust_dealloc_001e78c8)
                  (CONCAT44(uStack_14c,uStack_150),CONCAT44(uStack_154,local_158),1);
      }
    }
  }
                    /* try { // try from 001657bf to 001657d8 has its CatchHandler @ 001658d1 */
  alloc::str::join_generic_copy(&local_98,local_1a0,local_198,"\n_",1);
  puVar1 = local_f0;
  *(long *)(local_f0 + 4) = local_88;
  *local_f0 = (undefined4)local_98;
  local_f0[1] = local_98._4_4_;
  local_f0[2] = (undefined4)uStack_90;
  local_f0[3] = uStack_90._4_4_;
  puVar4 = PTR___rust_dealloc_001e78c8;
  if (local_198 != 0) {
    puVar14 = (undefined8 *)(local_1a0 + 8);
    lVar5 = local_198;
    do {
      if (puVar14[-1] != 0) {
        (*(code *)puVar4)(*puVar14,puVar14[-1],1);
      }
      puVar14 = puVar14 + 3;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  if (local_1a8 != 0) {
    (*(code *)PTR___rust_dealloc_001e78c8)(local_1a0,local_1a8 * 0x18,8);
  }
  return puVar1;
}




// ELF address 0x00000000000650a0; strategy_sm4::signal_pairs_tree::SignalPairsTree::find_nearest_pair_median_threshold

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_sm4::signal_pairs_tree::SignalPairsTree::find_nearest_pair_median_threshold */

ulong * __rustcall
strategy_sm4::signal_pairs_tree::SignalPairsTree::find_nearest_pair_median_threshold
          (double param_1,ulong *param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  ulong uVar3;
  code *pcVar4;
  double dVar5;
  long lVar6;
  ulong uVar7;
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  bool bVar17;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  undefined1 auVar18 [16];
  double local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  undefined8 local_38;
  
  lVar11 = *(long *)(param_3 + 8);
  if (lVar11 == 0) {
LAB_001652e6:
    (*(code *)PTR_unwrap_failed_001e7948)
              (anon_cc0547108b5ad03ae23ec7d169cabb3c_33_llvm_4719369549894925764);
    pcVar4 = (code *)swi(3);
    puVar8 = (ulong *)(*pcVar4)();
    return puVar8;
  }
  lVar14 = *(long *)(param_3 + 10);
  lVar9 = lVar14;
  lVar6 = lVar11;
  while( true ) {
    lVar13 = 0;
    uVar7 = 0xffffffffffffffff;
    do {
      uVar10 = (ulong)*(ushort *)(lVar6 + 0x58a);
      if ((ulong)*(ushort *)(lVar6 + 0x58a) * 0x78 + lVar13 == 0) goto LAB_00165123;
      bVar17 = *(long *)(lVar6 + 0x10 + uVar7 * 8) != 0;
      uVar10 = uVar7 + 1;
      lVar13 = lVar13 + -0x78;
      uVar7 = uVar10;
    } while (bVar17 == true);
    if (!bVar17) break;
LAB_00165123:
    bVar17 = lVar9 == 0;
    lVar9 = lVar9 + -1;
    if (bVar17) goto LAB_001652e6;
    lVar6 = *(long *)(lVar6 + 0x590 + uVar10 * 8);
  }
  lVar6 = SignalPairStats::get_pairs_time_sec_ms_median((lVar6 - lVar13) + -0x18);
  if (lVar6 != 1) goto LAB_00165280;
  local_38 = *(undefined8 *)(param_3 + 0xc);
  local_78 = 1;
  uStack_70 = 0;
  local_58 = 1;
  local_50 = 0;
  local_68 = lVar11;
  uStack_60 = lVar14;
  local_48 = lVar11;
  local_40 = lVar14;
  auVar18 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>::
            next(&local_78);
  if (auVar18._0_8_ == 0) goto LAB_00165280;
  local_88 = DAT_00117eb8;
  iVar12 = -1;
  do {
    uVar7 = SignalPairStats::get_pairs_time_sec_ms_median(auVar18._8_8_);
    if (((uVar7 & 1) != 0) &&
       (dVar5 = (double)((ulong)((double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) - param_1) &
                        _DAT_00117fd0), dVar5 < local_88)) {
      iVar12 = *auVar18._0_8_;
      local_88 = dVar5;
    }
    auVar18 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
              ::next(&local_78);
  } while (auVar18._0_8_ != 0);
  if (iVar12 == -1) {
LAB_00165280:
    *param_2 = 0;
    param_2[1] = 1;
    local_78._0_4_ = *param_3;
    local_78._4_4_ = param_3[1];
    uStack_70._0_4_ = param_3[2];
    uStack_70._4_4_ = param_3[3];
    local_68._0_4_ = param_3[4];
    local_68._4_4_ = param_3[5];
    uStack_60._0_4_ = param_3[6];
    uStack_60._4_4_ = param_3[7];
  }
  else {
    uVar7 = (ulong)iVar12;
    lVar11 = *(long *)(param_3 + 0xe);
    if (lVar11 == 0) {
      uVar10 = 0;
    }
    else {
      lVar14 = *(long *)(param_3 + 0x10);
      uVar10 = 0;
      while( true ) {
        lVar6 = 0;
        uVar15 = 0xffffffffffffffff;
        do {
          uVar16 = (ulong)*(ushort *)(lVar11 + 0x1c2);
          if ((ulong)*(ushort *)(lVar11 + 0x1c2) << 3 == lVar6) goto LAB_00165270;
          uVar3 = *(ulong *)(lVar11 + 0x168 + lVar6);
          lVar6 = lVar6 + 8;
          uVar16 = uVar15 + 1;
          uVar15 = uVar16;
        } while ((char)((uVar3 < uVar7) - (uVar7 < uVar3)) == '\x01');
        if (uVar3 < uVar7 == uVar7 < uVar3) break;
LAB_00165270:
        bVar17 = lVar14 == 0;
        lVar14 = lVar14 + -1;
        if (bVar17) goto LAB_001652d3;
        lVar11 = *(long *)(lVar11 + 0x1c8 + uVar16 * 8);
      }
      puVar1 = (undefined8 *)(lVar11 + -0x20 + lVar6 * 4);
      local_78 = *puVar1;
      uStack_70 = puVar1[1];
      plVar2 = (long *)(lVar11 + -0x10 + lVar6 * 4);
      local_68 = *plVar2;
      uStack_60 = plVar2[1];
      uVar10 = 1;
    }
LAB_001652d3:
    *param_2 = uVar7;
    param_2[1] = uVar10;
  }
  *(undefined4 *)(param_2 + 2) = (undefined4)local_78;
  *(undefined4 *)((long)param_2 + 0x14) = local_78._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_70;
  *(undefined4 *)((long)param_2 + 0x1c) = uStack_70._4_4_;
  *(undefined4 *)(param_2 + 4) = (undefined4)local_68;
  *(undefined4 *)((long)param_2 + 0x24) = local_68._4_4_;
  *(undefined4 *)(param_2 + 5) = (undefined4)uStack_60;
  *(undefined4 *)((long)param_2 + 0x2c) = uStack_60._4_4_;
  return param_2;
}




// ELF address 0x0000000000063d00; strategy_sm4::signal_pairs_tree::SignalPairsTree::new

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_sm4::signal_pairs_tree::SignalPairsTree::new */

undefined4 * __rustcall
strategy_sm4::signal_pairs_tree::SignalPairsTree::new
          (undefined8 param_1,undefined4 *param_2,ulong *param_3,long *param_4)

{
  ulong *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined4 *puVar10;
  undefined1 (*pauVar11) [16];
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  ulong *puVar18;
  undefined8 *puVar19;
  ulong uVar20;
  ulong *puVar21;
  bool bVar22;
  undefined1 auVar23 [16];
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  ulong *local_198;
  undefined4 *local_190;
  ulong *local_188;
  ulong local_180;
  ulong local_178;
  ulong uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined1 local_150 [80];
  ulong local_100;
  ulong uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  ulong local_d8;
  ulong uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_90 [16];
  ulong local_80;
  ulong uStack_78;
  ulong local_70;
  ulong uStack_68;
  ulong local_58;
  ulong uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_1c8 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_1a0 = 0;
  local_178 = *param_3;
  uStack_170 = param_3[1];
  local_168 = param_3[2];
  uStack_160 = param_3[3];
                    /* try { // try from 00163d5b to 00163e6f has its CatchHandler @ 0016432e */
  alloc::collections::btree::map::BTreeMap<K,V,A>::insert(&local_d8,&local_1b0,0,&local_178);
  local_178 = 0;
  uStack_170 = 8;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = param_1;
  pauVar11 = (undefined1 (*) [16])__tls_get_addr(&PTR_001e7cb0);
  if (pauVar11[1][0] == '\x01') {
    local_90 = *pauVar11;
  }
  else {
                    /* try { // try from 001642f4 to 001642f9 has its CatchHandler @ 0016430a */
    local_90 = (*(code *)PTR_hashmap_random_keys_001e7cc0)();
    *pauVar11 = local_90;
    pauVar11[1][0] = 1;
  }
  *(long *)*pauVar11 = local_90._0_8_ + 1;
  local_80 = *param_3;
  uStack_78 = param_3[1];
  local_70 = param_3[2];
  uStack_68 = param_3[3];
  local_d8 = local_178;
  uStack_d0 = uStack_170;
  local_c8 = (undefined4)local_168;
  uStack_c4 = local_168._4_4_;
  uStack_c0 = (undefined4)uStack_160;
  uStack_bc = uStack_160._4_4_;
  local_b8 = local_158;
  local_b0 = CONCAT44(PTR_anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971_001e20c0.
                      _4_4_,PTR_anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971_001e20c0
                            ._0_4_);
  uStack_a8 = CONCAT44(_UNK_001e20cc,_UNK_001e20c8);
  local_a0 = CONCAT44(_UNK_001e20d4,_DAT_001e20d0);
  uStack_98 = CONCAT44(_UNK_001e20dc,_UNK_001e20d8);
  alloc::collections::btree::map::BTreeMap<K,V,A>::insert(&local_178,&local_1c8,0,&local_d8);
  uVar8 = uStack_160;
  uVar7 = uStack_170;
  uVar6 = local_178;
  puVar9 = PTR___rust_dealloc_001e78c8;
  local_198 = param_3;
  local_190 = param_2;
  if (uStack_160 != 0) {
    uVar12 = local_178;
    if (local_168 < local_178) {
      uVar12 = 0;
    }
    lVar15 = local_168 - uVar12;
    uVar16 = local_178 - lVar15;
    uVar20 = uStack_160 - uVar16;
    if (uStack_160 < uVar16) {
      uVar20 = 0;
    }
    uVar14 = lVar15 + uStack_160;
    if (uStack_160 >= uVar16 && uStack_160 - uVar16 != 0) {
      uVar14 = local_178;
    }
    lVar15 = uVar14 - lVar15;
    if (lVar15 != 0) {
      puVar19 = (undefined8 *)(local_168 * 0x68 + uVar12 * -0x68 + uStack_170 + 0x50);
      do {
        if (puVar19[-1] != 0) {
          (*(code *)puVar9)(*puVar19,puVar19[-1],1);
        }
        puVar19 = puVar19 + 0xd;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
    }
    puVar9 = PTR___rust_dealloc_001e78c8;
    if (uVar16 < uVar8) {
      puVar19 = (undefined8 *)(uVar7 + 0x50);
      do {
        if (puVar19[-1] != 0) {
          (*(code *)puVar9)(*puVar19,puVar19[-1],1);
        }
        puVar19 = puVar19 + 0xd;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
    }
  }
  if (uVar6 != 0) {
    (*(code *)PTR___rust_dealloc_001e78c8)(uStack_170,uVar6 * 0x68,8);
  }
                    /* try { // try from 00163f53 to 00163f57 has its CatchHandler @ 0016432e */
  _<hashbrown::raw::RawTable<T,A>as_core::ops::drop::Drop>::drop(local_150);
  puVar1 = (ulong *)param_4[1];
  if (param_4[2] != 0) {
    puVar18 = puVar1 + param_4[2] * 4;
    lVar15 = 0;
    puVar21 = puVar1;
    local_188 = puVar18;
    do {
      lVar15 = lVar15 + 1;
      local_178 = *puVar21;
      uStack_170 = puVar21[1];
      local_168 = puVar21[2];
      uStack_160 = puVar21[3];
      alloc::collections::btree::map::BTreeMap<K,V,A>::insert
                (&local_d8,&local_1b0,lVar15,&local_178);
      local_58 = *puVar21;
      uStack_50 = puVar21[1];
      local_48 = (undefined4)puVar21[2];
      uStack_44 = *(undefined4 *)((long)puVar21 + 0x14);
      uStack_40 = (undefined4)puVar21[3];
      uStack_3c = *(undefined4 *)((long)puVar21 + 0x1c);
      local_100 = 0;
      uStack_f8 = 8;
      local_f0 = 0;
      uStack_e8 = 0;
      local_e0 = param_1;
      if (pauVar11[1][0] == '\x01') {
        auVar23 = *pauVar11;
      }
      else {
                    /* try { // try from 00164227 to 0016422c has its CatchHandler @ 0016431c */
        auVar23 = (*(code *)PTR_hashmap_random_keys_001e7cc0)();
        *pauVar11 = auVar23;
        pauVar11[1][0] = 1;
      }
      *(long *)*pauVar11 = auVar23._0_8_ + 1;
      local_70 = CONCAT44(uStack_44,local_48);
      uStack_68 = CONCAT44(uStack_3c,uStack_40);
      local_80 = local_58;
      uStack_78 = uStack_50;
      local_d8 = local_100;
      uStack_d0 = uStack_f8;
      local_c8 = (undefined4)local_f0;
      uStack_c4 = local_f0._4_4_;
      uStack_c0 = (undefined4)uStack_e8;
      uStack_bc = uStack_e8._4_4_;
      local_b8 = local_e0;
      local_a0 = CONCAT44(_UNK_001e20d4,_DAT_001e20d0);
      uStack_98 = CONCAT44(_UNK_001e20dc,_UNK_001e20d8);
      local_b0 = CONCAT44(PTR_anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971_001e20c0
                          ._4_4_,PTR_anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971_001e20c0
                                 ._0_4_);
      uStack_a8 = CONCAT44(_UNK_001e20cc,_UNK_001e20c8);
      local_90 = auVar23;
      alloc::collections::btree::map::BTreeMap<K,V,A>::insert
                (&local_178,&local_1c8,lVar15,&local_d8);
      uVar8 = uStack_160;
      uVar7 = uStack_170;
      uVar6 = local_178;
      if (local_178 != 0x8000000000000000) {
        if (uStack_160 != 0) {
          uVar12 = local_178;
          if (local_168 < local_178) {
            uVar12 = 0;
          }
          lVar13 = local_168 - uVar12;
          local_180 = local_178 - lVar13;
          lVar17 = uStack_160 - local_180;
          bVar22 = lVar17 != 0;
          if (uStack_160 < local_180) {
            lVar17 = 0;
          }
          uVar20 = lVar13 + uStack_160;
          if (uStack_160 >= local_180 && bVar22) {
            uVar20 = local_178;
          }
          lVar13 = uVar20 - lVar13;
          if (lVar13 != 0) {
            puVar19 = (undefined8 *)(uStack_170 + local_168 * 0x68 + uVar12 * -0x68 + 0x50);
            do {
              if (puVar19[-1] != 0) {
                (*(code *)PTR___rust_dealloc_001e78c8)(*puVar19,puVar19[-1],1);
              }
              puVar19 = puVar19 + 0xd;
              lVar13 = lVar13 + -1;
            } while (lVar13 != 0);
          }
          puVar18 = local_188;
          if (local_180 < uVar8) {
            puVar19 = (undefined8 *)(uVar7 + 0x50);
            do {
              if (puVar19[-1] != 0) {
                (*(code *)PTR___rust_dealloc_001e78c8)(*puVar19,puVar19[-1],1);
              }
              puVar19 = puVar19 + 0xd;
              lVar17 = lVar17 + -1;
            } while (lVar17 != 0);
          }
        }
        if (uVar6 != 0) {
          (*(code *)PTR___rust_dealloc_001e78c8)(uStack_170,uVar6 * 0x68,8);
        }
                    /* try { // try from 00163fa0 to 001640f6 has its CatchHandler @ 00164330 */
        _<hashbrown::raw::RawTable<T,A>as_core::ops::drop::Drop>::drop(local_150);
      }
      puVar21 = puVar21 + 4;
    } while (puVar21 != puVar18);
  }
  puVar10 = local_190;
  *(undefined8 *)(local_190 + 0xc) = local_1b8;
  *(undefined8 *)(local_190 + 8) = local_1c8;
  *(undefined8 *)(local_190 + 10) = uStack_1c0;
  *(undefined8 *)(local_190 + 0xe) = local_1b0;
  *(undefined8 *)(local_190 + 0x10) = uStack_1a8;
  *(undefined8 *)(local_190 + 0x12) = local_1a0;
  uVar2 = *(undefined4 *)((long)local_198 + 4);
  uVar6 = local_198[1];
  uVar3 = *(undefined4 *)((long)local_198 + 0xc);
  uVar7 = local_198[2];
  uVar4 = *(undefined4 *)((long)local_198 + 0x14);
  uVar8 = local_198[3];
  uVar5 = *(undefined4 *)((long)local_198 + 0x1c);
  *local_190 = (int)*local_198;
  local_190[1] = uVar2;
  local_190[2] = (int)uVar6;
  local_190[3] = uVar3;
  local_190[4] = (int)uVar7;
  local_190[5] = uVar4;
  local_190[6] = (int)uVar8;
  local_190[7] = uVar5;
  if (*param_4 != 0) {
    (*(code *)PTR___rust_dealloc_001e78c8)(puVar1,*param_4 << 5,8);
  }
  return puVar10;
}




// ELF address 0x0000000000064380; strategy_sm4::signal_pairs_tree::SignalPairsTree::update

/* strategy_sm4::signal_pairs_tree::SignalPairsTree::update */

void __rustcall
strategy_sm4::signal_pairs_tree::SignalPairsTree::update
          (undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,long param_5,
          long *param_6)

{
  ushort *puVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  ushort uVar7;
  int iVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  ulong uVar15;
  undefined8 *puVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  long lVar22;
  byte bVar23;
  undefined4 uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  long local_1c0;
  undefined8 local_1b8;
  long local_1b0;
  undefined8 *local_1a8;
  undefined8 *local_1a0;
  undefined8 *local_198;
  undefined1 auStack_190 [24];
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_168;
  undefined8 uStack_160;
  long lStack_158;
  double dStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_128;
  undefined2 uStack_120;
  ulong local_118;
  ulong local_110;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  long local_c0;
  uint auStack_b8 [4];
  undefined8 uStack_a8;
  long lStack_78;
  undefined8 uStack_70;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  
  puVar10 = *(undefined8 **)(param_5 + 0x20);
  local_c0 = *(long *)(param_5 + 0x30);
  if (local_c0 == 0 || puVar10 == (undefined8 *)0x0) {
LAB_00164fb5:
    if (*param_6 != 0) {
      (*(code *)PTR___rust_dealloc_001e78c8)(param_6[1],*param_6,1);
    }
    return;
  }
  uVar19 = (ulong)(puVar10 != (undefined8 *)0x0);
  uVar17 = *(ulong *)(param_5 + 0x28);
  puVar20 = (undefined8 *)0x0;
LAB_001643dc:
  if ((puVar20 == (undefined8 *)0x0) && ((uVar19 & 1) != 0)) {
    uVar19 = 1;
    puVar20 = puVar10;
    if (uVar17 != 0) {
      uVar15 = uVar17;
      if ((uVar17 & 7) != 0) {
        uVar15 = 0;
        do {
          puVar10 = (undefined8 *)puVar10[0xb2];
          uVar15 = uVar15 + 1;
        } while ((uVar17 & 7) != uVar15);
        uVar15 = uVar17 - uVar15;
      }
      puVar20 = puVar10;
      if (7 < uVar17) {
        do {
          puVar10 = *(undefined8 **)
                     (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(puVar10[0xb2] +
                                                                                 0x590) + 0x590) +
                                                             0x590) + 0x590) + 0x590) + 0x590) +
                     0x590);
          uVar15 = uVar15 - 8;
          puVar20 = puVar10;
        } while (uVar15 != 0);
      }
    }
    puVar10 = (undefined8 *)0x0;
    uVar17 = 0;
    puVar21 = puVar20;
    if (*(short *)((long)puVar20 + 0x58a) == 0) {
LAB_001644a0:
      do {
        puVar21 = (undefined8 *)*puVar20;
        if (puVar21 == (undefined8 *)0x0) {
                    /* try { // try from 00164ffe to 0016500a has its CatchHandler @ 0016503d */
          (*(code *)PTR_unwrap_failed_001e7948)
                    (&PTR_anon_783cd9a4f7724ec660c77fda0343f220_0_llvm_17731430809145393098_001e2030
                    );
          goto LAB_0016500b;
        }
        puVar10 = (undefined8 *)((long)puVar10 + 1);
        puVar1 = (ushort *)(puVar20 + 0xb1);
        uVar17 = (ulong)*puVar1;
        puVar20 = puVar21;
      } while (*(ushort *)((long)puVar21 + 0x58a) <= *puVar1);
    }
  }
  else {
    if ((uVar19 & 1) == 0) {
                    /* try { // try from 00164fef to 00164ffb has its CatchHandler @ 00165053 */
      (*(code *)PTR_unwrap_failed_001e7948)
                (&PTR_anon_783cd9a4f7724ec660c77fda0343f220_0_llvm_17731430809145393098_001e2048);
      goto LAB_0016500b;
    }
    puVar21 = puVar20;
    if (*(ushort *)((long)puVar20 + 0x58a) <= uVar17) goto LAB_001644a0;
  }
  local_110 = uVar17 + 1;
  puVar20 = puVar21;
  if (puVar10 != (undefined8 *)0x0) {
    plVar14 = puVar21 + uVar17 + 0xb3;
    puVar16 = puVar10;
    if (((ulong)puVar10 & 7) != 0) {
      uVar15 = 0;
      do {
        puVar20 = (undefined8 *)*plVar14;
        plVar14 = puVar20 + 0xb2;
        uVar15 = uVar15 + 1;
      } while (((ulong)puVar10 & 7) != uVar15);
      puVar16 = (undefined8 *)((long)puVar10 - uVar15);
    }
    if (&DAT_00000007 < puVar10) {
      do {
        puVar20 = *(undefined8 **)
                   (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*plVar14 + 0x590) +
                                                                     0x590) + 0x590) + 0x590) +
                                       0x590) + 0x590) + 0x590);
        plVar14 = puVar20 + 0xb2;
        puVar16 = puVar16 + -1;
      } while (puVar16 != (undefined8 *)0x0);
    }
    local_110 = 0;
  }
                    /* try { // try from 00164563 to 00164587 has its CatchHandler @ 00165032 */
  local_118 = uVar19;
  (*(code *)PTR_clone_001e79f0)
            (&local_1c0,param_6,
             &PTR_anon_6f943687bdd6e710d6695cc1d1c13590_14_llvm_7346471370157798290_001e21d0);
  local_198 = puVar21 + uVar17 * 0xf + 0xc;
  local_1a0 = puVar21 + uVar17 * 0xf + 0x11;
  if (puVar21[uVar17 * 0xf + 0x14] != 0) {
                    /* try { // try from 001645b1 to 00164a3b has its CatchHandler @ 0016503b */
    puVar11 = (undefined1 *)
              core::hash::BuildHasher::hash_one(puVar21 + uVar17 * 0xf + 0x15,&local_1c0);
    lVar6 = local_1b0;
    uVar13 = local_1b8;
    lVar2 = puVar21[uVar17 * 0xf + 0x11];
    uVar17 = puVar21[uVar17 * 0xf + 0x12];
    bVar23 = (byte)((ulong)puVar11 >> 0x39);
    auVar25 = ZEXT216(CONCAT11(bVar23,bVar23));
    auVar25 = pshuflw(auVar25,auVar25,0);
    uVar24 = auVar25._0_4_;
    auVar25._4_4_ = uVar24;
    auVar25._0_4_ = uVar24;
    auVar25._8_4_ = uVar24;
    auVar25._12_4_ = uVar24;
    lVar12 = 0;
    while( true ) {
      puVar10 = (undefined8 *)((ulong)puVar11 & uVar17);
      auVar29 = *(undefined1 (*) [16])(lVar2 + (long)puVar10);
      auVar26[0] = -(auVar29[0] == auVar25[0]);
      auVar26[1] = -(auVar29[1] == auVar25[1]);
      auVar26[2] = -(auVar29[2] == auVar25[2]);
      auVar26[3] = -(auVar29[3] == auVar25[3]);
      auVar26[4] = -(auVar29[4] == auVar25[4]);
      auVar26[5] = -(auVar29[5] == auVar25[5]);
      auVar26[6] = -(auVar29[6] == auVar25[6]);
      auVar26[7] = -(auVar29[7] == auVar25[7]);
      auVar26[8] = -(auVar29[8] == auVar25[8]);
      auVar26[9] = -(auVar29[9] == auVar25[9]);
      auVar26[10] = -(auVar29[10] == auVar25[10]);
      auVar26[0xb] = -(auVar29[0xb] == auVar25[0xb]);
      auVar26[0xc] = -(auVar29[0xc] == auVar25[0xc]);
      auVar26[0xd] = -(auVar29[0xd] == auVar25[0xd]);
      auVar26[0xe] = -(auVar29[0xe] == auVar25[0xe]);
      auVar26[0xf] = -(auVar29[0xf] == auVar25[0xf]);
      uVar7 = (ushort)(SUB161(auVar26 >> 7,0) & 1) | (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe | (ushort)(auVar26[0xf] >> 7) << 0xf;
      uVar18 = (uint)uVar7;
      if (uVar7 != 0) {
        local_e8._0_8_ = uVar17;
        local_f8._0_8_ = lVar12;
        local_1a8 = puVar10;
        local_108 = auVar29;
        local_d8 = auVar25;
        do {
          uVar9 = 0;
          for (uVar5 = uVar18; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
            uVar9 = uVar9 + 1;
          }
          lVar12 = ((ulong)((ulong)uVar9 + (long)local_1a8) & uVar17) * -0x78;
          if ((lVar6 == *(long *)(lVar2 + -0x68 + lVar12)) &&
             (iVar8 = (*(code *)PTR_bcmp_001e7990)
                                (uVar13,*(undefined8 *)(lVar12 + lVar2 + -0x70),lVar6), iVar8 == 0))
          goto LAB_00164730;
          uVar7 = (ushort)(uVar18 - 1) & (ushort)uVar18;
          uVar18 = CONCAT22((short)(uVar18 - 1 >> 0x10),uVar7);
          puVar10 = local_1a8;
          uVar17 = local_e8._0_8_;
          lVar12 = local_f8._0_8_;
          auVar25 = local_d8;
          auVar29 = local_108;
        } while (uVar7 != 0);
      }
      auVar32[0] = -(auVar29[0] ==
                    anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[0]);
      auVar32[1] = -(auVar29[1] ==
                    anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[1]);
      auVar32[2] = -(auVar29[2] ==
                    anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[2]);
      auVar32[3] = -(auVar29[3] ==
                    anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[3]);
      auVar32[4] = -(auVar29[4] ==
                    anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[4]);
      auVar32[5] = -(auVar29[5] ==
                    anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[5]);
      auVar32[6] = -(auVar29[6] ==
                    anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[6]);
      auVar32[7] = -(auVar29[7] ==
                    anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[7]);
      auVar32[8] = -(auVar29[8] ==
                    anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[8]);
      auVar32[9] = -(auVar29[9] ==
                    anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[9]);
      auVar32[10] = -(auVar29[10] ==
                     anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[10]);
      auVar32[0xb] = -(auVar29[0xb] ==
                      anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[0xb]);
      auVar32[0xc] = -(auVar29[0xc] ==
                      anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[0xc]);
      auVar32[0xd] = -(auVar29[0xd] ==
                      anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[0xd]);
      auVar32[0xe] = -(auVar29[0xe] ==
                      anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[0xe]);
      bVar4 = auVar29[0xf] == anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[0xf];
      auVar32[0xf] = -bVar4;
      if ((((((((((((((((auVar32 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                       (auVar32 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar32 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar32 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar32 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar32 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar32 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar32 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar32 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar32 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar32 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar32 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar32 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar32 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar32 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar4) break;
      puVar11 = (undefined1 *)((long)puVar10 + lVar12 + 0x10);
      lVar12 = lVar12 + 0x10;
    }
  }
  (*(code *)PTR_clone_001e79f0)
            (auStack_190,&local_1c0,
             &PTR_anon_6f943687bdd6e710d6695cc1d1c13590_14_llvm_7346471370157798290_001e20e0);
  uStack_178 = 2;
  hashbrown::map::HashMap<K,V,S,A>::insert(auStack_b8,local_1a0,auStack_190,&uStack_178);
  if ((auStack_b8[0] < 2) && (lStack_78 != 0)) {
    (*(code *)PTR___rust_dealloc_001e78c8)(uStack_70,lStack_78,1);
  }
LAB_00164730:
  puVar10 = local_198;
  if (local_198[8] != 0) {
    local_1a8 = local_198 + 9;
    uVar19 = core::hash::BuildHasher::hash_one(local_1a8,&local_1c0);
    lVar6 = local_1b0;
    uVar13 = local_1b8;
    local_c0 = local_c0 + -1;
    lVar2 = puVar10[5];
    uVar17 = puVar10[6];
    bVar23 = (byte)(uVar19 >> 0x39);
    auVar25 = ZEXT216(CONCAT11(bVar23,bVar23));
    auVar25 = pshuflw(auVar25,auVar25,0);
    uVar24 = auVar25._0_4_;
    auVar29._4_4_ = uVar24;
    auVar29._0_4_ = uVar24;
    auVar29._8_4_ = uVar24;
    auVar29._12_4_ = uVar24;
    lVar22 = 0;
    lVar12 = lVar2;
    do {
      uVar19 = uVar19 & uVar17;
      auVar25 = *(undefined1 (*) [16])(lVar12 + uVar19);
      auVar27[0] = -(auVar25[0] == auVar29[0]);
      auVar27[1] = -(auVar25[1] == auVar29[1]);
      auVar27[2] = -(auVar25[2] == auVar29[2]);
      auVar27[3] = -(auVar25[3] == auVar29[3]);
      auVar27[4] = -(auVar25[4] == auVar29[4]);
      auVar27[5] = -(auVar25[5] == auVar29[5]);
      auVar27[6] = -(auVar25[6] == auVar29[6]);
      auVar27[7] = -(auVar25[7] == auVar29[7]);
      auVar27[8] = -(auVar25[8] == auVar29[8]);
      auVar27[9] = -(auVar25[9] == auVar29[9]);
      auVar27[10] = -(auVar25[10] == auVar29[10]);
      auVar27[0xb] = -(auVar25[0xb] == auVar29[0xb]);
      auVar27[0xc] = -(auVar25[0xc] == auVar29[0xc]);
      auVar27[0xd] = -(auVar25[0xd] == auVar29[0xd]);
      auVar27[0xe] = -(auVar25[0xe] == auVar29[0xe]);
      auVar27[0xf] = -(auVar25[0xf] == auVar29[0xf]);
      uVar7 = (ushort)(SUB161(auVar27 >> 7,0) & 1) | (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe | (ushort)(auVar27[0xf] >> 7) << 0xf;
      uVar15 = (ulong)uVar7;
      if (uVar7 != 0) {
        local_108._0_8_ = uVar17;
        auStack_58._0_8_ = lVar22;
        local_f8 = auVar29;
        auStack_48 = auVar25;
        do {
          dVar31 = auStack_48._0_8_;
          local_e8._0_8_ = uVar15;
          uVar18 = 0;
          for (uVar9 = (uint)uVar15; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
            uVar18 = uVar18 + 1;
          }
          lVar22 = (uVar18 + uVar19 & uVar17) * -0x78;
          if (lVar6 == *(long *)(lVar2 + -0x68 + lVar22)) {
            local_d8._0_8_ = lVar12;
            iVar8 = (*(code *)PTR_bcmp_001e7990)
                              (uVar13,*(undefined8 *)(lVar2 + lVar22 + -0x70),lVar6);
            puVar10 = local_198;
            lVar12 = local_d8._0_8_;
            if (iVar8 == 0) {
              if (*(int *)(local_d8._0_8_ + -0x60 + lVar22) == 2) goto LAB_001648a1;
              lVar22 = local_d8._0_8_ + lVar22;
              if (*(char *)(lVar22 + -8) == '\x01') {
                if (param_2 < (double)local_198[0xe]) goto LAB_001648a1;
                *(undefined8 *)(lVar22 + -0x50) = 1;
                *(undefined8 *)(lVar22 + -0x48) = param_1;
                *(undefined8 *)(lVar22 + -0x30) = 1;
                *(double *)(lVar22 + -0x28) = param_2;
                *(undefined1 *)(lVar22 + -7) = 1;
                    /* try { // try from 00164b3e to 00164c66 has its CatchHandler @ 0016503b */
                auVar25 = (*(code *)PTR_clone_001e79f0)
                                    (auStack_b8,lVar22 + -0x20,
                                     &
                                     PTR_anon_6f943687bdd6e710d6695cc1d1c13590_14_llvm_7346471370157798290_001e20f8
                                    );
                uStack_160 = auVar25._8_8_;
                uStack_170 = auVar25._0_8_;
                if (*(long *)(lVar22 + -0x60) == 1) {
                  uStack_170 = *(undefined8 *)(lVar22 + -0x58);
                  lStack_168 = *(long *)(lVar22 + -0x50);
                  uStack_178 = 1;
                  uVar13 = 1;
                  if (lStack_168 == 1) goto LAB_00164d93;
LAB_00164b74:
                  lStack_168 = 0;
                  lStack_158 = *(long *)(lVar22 + -0x40);
                  uStack_178 = uVar13;
                  if (lStack_158 == 1) goto LAB_00164da6;
LAB_00164b84:
                  lStack_158 = 0;
                  lStack_148 = *(long *)(lVar22 + -0x30);
                  if (lStack_148 == 1) goto LAB_00164db9;
LAB_00164b94:
                  lStack_148 = 0;
                }
                else {
                  uStack_178 = 0;
                  lStack_168 = *(long *)(lVar22 + -0x50);
                  uVar13 = uStack_178;
                  if (lStack_168 != 1) goto LAB_00164b74;
LAB_00164d93:
                  uStack_160 = *(undefined8 *)(lVar22 + -0x48);
                  lStack_158 = *(long *)(lVar22 + -0x40);
                  if (lStack_158 != 1) goto LAB_00164b84;
LAB_00164da6:
                  dVar31 = *(double *)(lVar22 + -0x38);
                  lStack_148 = *(long *)(lVar22 + -0x30);
                  if (lStack_148 != 1) goto LAB_00164b94;
LAB_00164db9:
                  param_4 = *(undefined8 *)(lVar22 + -0x28);
                }
                uStack_120 = *(undefined2 *)(lVar22 + -8);
                uStack_128 = uStack_a8;
                    /* try { // try from 00164e2f to 00164f7d has its CatchHandler @ 0016503b */
                dStack_150 = dVar31;
                uStack_140 = param_4;
                RollingmsQueue<T>::update(param_1,puVar10,&uStack_178);
                (*(code *)PTR_clone_001e79f0)
                          (auStack_190,&local_1c0,
                           &
                           PTR_anon_6f943687bdd6e710d6695cc1d1c13590_14_llvm_7346471370157798290_001e2128
                          );
                uStack_178 = 2;
                hashbrown::map::HashMap<K,V,S,A>::insert
                          (auStack_b8,local_1a0,auStack_190,&uStack_178);
              }
              else {
                if ((double)local_198[0xc] < param_2) goto LAB_001648a1;
                *(undefined8 *)(lVar22 + -0x50) = 1;
                *(undefined8 *)(lVar22 + -0x48) = param_1;
                *(undefined8 *)(lVar22 + -0x30) = 1;
                *(double *)(lVar22 + -0x28) = param_2;
                *(undefined1 *)(lVar22 + -7) = 1;
                auVar25 = (*(code *)PTR_clone_001e79f0)
                                    (auStack_b8,lVar22 + -0x20,
                                     &
                                     PTR_anon_6f943687bdd6e710d6695cc1d1c13590_14_llvm_7346471370157798290_001e20f8
                                    );
                uStack_160 = auVar25._8_8_;
                uStack_170 = auVar25._0_8_;
                if (*(long *)(lVar22 + -0x60) == 1) {
                  uStack_170 = *(undefined8 *)(lVar22 + -0x58);
                  lStack_168 = *(long *)(lVar22 + -0x50);
                  uStack_178 = 1;
                  uVar13 = 1;
                  if (lStack_168 == 1) goto LAB_00164e93;
LAB_00164c29:
                  lStack_168 = 0;
                  lStack_158 = *(long *)(lVar22 + -0x40);
                  uStack_178 = uVar13;
                  if (lStack_158 == 1) goto LAB_00164ea6;
LAB_00164c39:
                  lStack_158 = 0;
                  lStack_148 = *(long *)(lVar22 + -0x30);
                  if (lStack_148 == 1) goto LAB_00164eb9;
LAB_00164c49:
                  lStack_148 = 0;
                }
                else {
                  uStack_178 = 0;
                  lStack_168 = *(long *)(lVar22 + -0x50);
                  uVar13 = uStack_178;
                  if (lStack_168 != 1) goto LAB_00164c29;
LAB_00164e93:
                  uStack_160 = *(undefined8 *)(lVar22 + -0x48);
                  lStack_158 = *(long *)(lVar22 + -0x40);
                  if (lStack_158 != 1) goto LAB_00164c39;
LAB_00164ea6:
                  dVar31 = *(double *)(lVar22 + -0x38);
                  lStack_148 = *(long *)(lVar22 + -0x30);
                  if (lStack_148 != 1) goto LAB_00164c49;
LAB_00164eb9:
                  param_4 = *(undefined8 *)(lVar22 + -0x28);
                }
                uStack_120 = *(undefined2 *)(lVar22 + -8);
                uStack_128 = uStack_a8;
                dStack_150 = dVar31;
                uStack_140 = param_4;
                RollingmsQueue<T>::update(param_1,puVar10,&uStack_178);
                (*(code *)PTR_clone_001e79f0)
                          (auStack_190,&local_1c0,
                           &
                           PTR_anon_6f943687bdd6e710d6695cc1d1c13590_14_llvm_7346471370157798290_001e2110
                          );
                uStack_178 = 2;
                hashbrown::map::HashMap<K,V,S,A>::insert
                          (auStack_b8,local_1a0,auStack_190,&uStack_178);
              }
              if ((auStack_b8[0] < 2) && (lStack_78 != 0)) {
                (*(code *)PTR___rust_dealloc_001e78c8)(uStack_70,lStack_78,1);
              }
              goto LAB_001648a1;
            }
          }
          iVar8 = local_e8._0_4_ + -1;
          uVar7 = (ushort)iVar8 & local_e8._0_2_;
          uVar15 = (ulong)CONCAT22((short)((uint)iVar8 >> 0x10),uVar7);
          uVar17 = local_108._0_8_;
          lVar22 = auStack_58._0_8_;
          auVar29 = local_f8;
          auVar25 = auStack_48;
        } while (uVar7 != 0);
      }
      auVar33[0] = -(auVar25[0] ==
                    anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[0]);
      auVar33[1] = -(auVar25[1] ==
                    anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[1]);
      auVar33[2] = -(auVar25[2] ==
                    anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[2]);
      auVar33[3] = -(auVar25[3] ==
                    anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[3]);
      auVar33[4] = -(auVar25[4] ==
                    anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[4]);
      auVar33[5] = -(auVar25[5] ==
                    anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[5]);
      auVar33[6] = -(auVar25[6] ==
                    anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[6]);
      auVar33[7] = -(auVar25[7] ==
                    anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[7]);
      auVar33[8] = -(auVar25[8] ==
                    anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[8]);
      auVar33[9] = -(auVar25[9] ==
                    anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[9]);
      auVar33[10] = -(auVar25[10] ==
                     anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[10]);
      auVar33[0xb] = -(auVar25[0xb] ==
                      anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[0xb]);
      auVar33[0xc] = -(auVar25[0xc] ==
                      anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[0xc]);
      auVar33[0xd] = -(auVar25[0xd] ==
                      anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[0xd]);
      auVar33[0xe] = -(auVar25[0xe] ==
                      anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[0xe]);
      bVar4 = auVar25[0xf] == anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[0xf];
      auVar33[0xf] = -bVar4;
      puVar10 = local_198;
      if ((((((((((((((((auVar33 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                       (auVar33 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar33 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar33 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar33 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar33 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar33 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar33 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar33 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar33 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar33 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar33 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar33 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar33 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar33 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar4)
      goto LAB_001648a1;
      uVar19 = uVar19 + lVar22 + 0x10;
      lVar22 = lVar22 + 0x10;
    } while( true );
  }
  goto LAB_00164fe0;
LAB_001648a1:
  if (puVar10[8] != 0) {
    uVar19 = core::hash::BuildHasher::hash_one(local_1a8,&local_1c0);
    lVar6 = local_1b0;
    uVar13 = local_1b8;
    lVar2 = puVar10[5];
    uVar17 = puVar10[6];
    bVar23 = (byte)(uVar19 >> 0x39);
    auVar25 = ZEXT216(CONCAT11(bVar23,bVar23));
    auVar25 = pshuflw(auVar25,auVar25,0);
    uVar24 = auVar25._0_4_;
    auVar30._4_4_ = uVar24;
    auVar30._0_4_ = uVar24;
    auVar30._8_4_ = uVar24;
    auVar30._12_4_ = uVar24;
    lVar12 = 0;
    do {
      uVar19 = uVar19 & uVar17;
      auVar25 = *(undefined1 (*) [16])(lVar2 + uVar19);
      auVar28[0] = -(auVar25[0] == auVar30[0]);
      auVar28[1] = -(auVar25[1] == auVar30[1]);
      auVar28[2] = -(auVar25[2] == auVar30[2]);
      auVar28[3] = -(auVar25[3] == auVar30[3]);
      auVar28[4] = -(auVar25[4] == auVar30[4]);
      auVar28[5] = -(auVar25[5] == auVar30[5]);
      auVar28[6] = -(auVar25[6] == auVar30[6]);
      auVar28[7] = -(auVar25[7] == auVar30[7]);
      auVar28[8] = -(auVar25[8] == auVar30[8]);
      auVar28[9] = -(auVar25[9] == auVar30[9]);
      auVar28[10] = -(auVar25[10] == auVar30[10]);
      auVar28[0xb] = -(auVar25[0xb] == auVar30[0xb]);
      auVar28[0xc] = -(auVar25[0xc] == auVar30[0xc]);
      auVar28[0xd] = -(auVar25[0xd] == auVar30[0xd]);
      auVar28[0xe] = -(auVar25[0xe] == auVar30[0xe]);
      auVar28[0xf] = -(auVar25[0xf] == auVar30[0xf]);
      uVar7 = (ushort)(SUB161(auVar28 >> 7,0) & 1) | (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe | (ushort)(auVar28[0xf] >> 7) << 0xf;
      puVar10 = (undefined8 *)(ulong)uVar7;
      if (uVar7 != 0) {
        local_d8._0_8_ = uVar19;
        local_f8._0_8_ = uVar17;
        local_108._0_8_ = lVar12;
        local_e8 = auVar30;
        auStack_58 = auVar25;
        do {
          uVar18 = 0;
          for (uVar9 = (uint)puVar10; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
            uVar18 = uVar18 + 1;
          }
          lVar12 = (uVar18 + uVar19 & uVar17) * -0x78;
          local_1a8 = puVar10;
          if ((lVar6 == *(long *)(lVar2 + -0x68 + lVar12)) &&
             (iVar8 = (*(code *)PTR_bcmp_001e7990)
                                (uVar13,*(undefined8 *)(lVar2 + lVar12 + -0x70),lVar6), iVar8 == 0))
          {
            uVar19 = local_118;
            uVar17 = local_110;
            if (*(int *)(lVar2 + -0x60 + lVar12) == 2) {
              if ((double)local_198[0xb] <= param_2) {
                (*(code *)PTR_clone_001e79f0)
                          (auStack_190,&local_1c0,
                           &
                           PTR_anon_6f943687bdd6e710d6695cc1d1c13590_14_llvm_7346471370157798290_001e2188
                          );
                    /* try { // try from 00164c67 to 00164c83 has its CatchHandler @ 00165013 */
                (*(code *)PTR_clone_001e79f0)
                          (auStack_b8,&local_1c0,
                           &
                           PTR_anon_6f943687bdd6e710d6695cc1d1c13590_14_llvm_7346471370157798290_001e21a0
                          );
                uStack_128 = uStack_a8;
                uStack_178 = 1;
                lStack_168 = 0;
                lStack_158 = 1;
                lStack_148 = 0;
                uStack_120 = 0;
                    /* try { // try from 00164cf2 to 00164d08 has its CatchHandler @ 00165011 */
                uStack_170 = param_1;
                dStack_150 = param_2;
                hashbrown::map::HashMap<K,V,S,A>::insert
                          (auStack_b8,local_1a0,auStack_190,&uStack_178);
              }
              else {
                if ((double)local_198[0xd] < param_2) goto LAB_00164d50;
                (*(code *)PTR_clone_001e79f0)
                          (auStack_190,&local_1c0,
                           &
                           PTR_anon_6f943687bdd6e710d6695cc1d1c13590_14_llvm_7346471370157798290_001e2158
                          );
                    /* try { // try from 00164a3c to 00164a58 has its CatchHandler @ 0016500f */
                (*(code *)PTR_clone_001e79f0)
                          (auStack_b8,&local_1c0,
                           &
                           PTR_anon_6f943687bdd6e710d6695cc1d1c13590_14_llvm_7346471370157798290_001e2170
                          );
                uStack_128 = uStack_a8;
                uStack_178 = 1;
                lStack_168 = 0;
                lStack_158 = 1;
                lStack_148 = 0;
                uStack_120 = 1;
                    /* try { // try from 00164ac7 to 00164add has its CatchHandler @ 0016500d */
                uStack_170 = param_1;
                dStack_150 = param_2;
                hashbrown::map::HashMap<K,V,S,A>::insert
                          (auStack_b8,local_1a0,auStack_190,&uStack_178);
              }
              uVar17 = local_110;
              uVar19 = local_118;
              if ((auStack_b8[0] < 2) && (lStack_78 != 0)) {
                (*(code *)PTR___rust_dealloc_001e78c8)(uStack_70,lStack_78,1);
              }
            }
LAB_00164d50:
            if (local_1c0 != 0) {
              (*(code *)PTR___rust_dealloc_001e78c8)(local_1b8,local_1c0,1);
            }
            puVar10 = (undefined8 *)0x0;
            if (local_c0 == 0) goto LAB_00164fb5;
            goto LAB_001643dc;
          }
          iVar8 = (int)local_1a8 + -1;
          uVar7 = (ushort)iVar8 & (ushort)local_1a8;
          puVar10 = (undefined8 *)(ulong)CONCAT22((short)((uint)iVar8 >> 0x10),uVar7);
          uVar19 = local_d8._0_8_;
          uVar17 = local_f8._0_8_;
          lVar12 = local_108._0_8_;
          auVar30 = local_e8;
          auVar25 = auStack_58;
        } while (uVar7 != 0);
      }
      auVar34[0] = -(auVar25[0] ==
                    anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[0]);
      auVar34[1] = -(auVar25[1] ==
                    anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[1]);
      auVar34[2] = -(auVar25[2] ==
                    anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[2]);
      auVar34[3] = -(auVar25[3] ==
                    anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[3]);
      auVar34[4] = -(auVar25[4] ==
                    anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[4]);
      auVar34[5] = -(auVar25[5] ==
                    anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[5]);
      auVar34[6] = -(auVar25[6] ==
                    anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[6]);
      auVar34[7] = -(auVar25[7] ==
                    anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[7]);
      auVar34[8] = -(auVar25[8] ==
                    anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[8]);
      auVar34[9] = -(auVar25[9] ==
                    anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[9]);
      auVar34[10] = -(auVar25[10] ==
                     anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[10]);
      auVar34[0xb] = -(auVar25[0xb] ==
                      anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[0xb]);
      auVar34[0xc] = -(auVar25[0xc] ==
                      anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[0xc]);
      auVar34[0xd] = -(auVar25[0xd] ==
                      anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[0xd]);
      auVar34[0xe] = -(auVar25[0xe] ==
                      anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[0xe]);
      bVar4 = auVar25[0xf] == anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[0xf];
      auVar34[0xf] = -bVar4;
      if ((((((((((((((((auVar34 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                       (auVar34 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar34 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar34 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar34 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar34 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar34 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar34 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar34 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar34 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar34 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar34 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar34 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar34 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar34 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar4) break;
      uVar19 = uVar19 + lVar12 + 0x10;
      lVar12 = lVar12 + 0x10;
    } while( true );
  }
LAB_00164fe0:
                    /* try { // try from 00164fe0 to 00164fec has its CatchHandler @ 00165058 */
  (*(code *)PTR_unwrap_failed_001e7948)
            (&PTR_anon_6f943687bdd6e710d6695cc1d1c13590_14_llvm_7346471370157798290_001e2140);
LAB_0016500b:
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}




// ELF address 0x00000000000639d0; strategy_sm4::signal_pairs_tree::RollingmsQueue<T>::update

/* strategy_sm4::signal_pairs_tree::RollingmsQueue<T>::update */

void __rustcall
strategy_sm4::signal_pairs_tree::RollingmsQueue<T>::update
          (double param_1,ulong *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  
  uVar2 = param_3[8];
  uVar3 = param_3[9];
  uVar16 = *param_2;
  uVar14 = param_2[3];
  if (uVar14 == uVar16) {
                    /* try { // try from 001639f7 to 00163a05 has its CatchHandler @ 00163b31 */
    alloc::collections::vec_deque::VecDeque<T,A>::grow
              (param_2,&
                       PTR_anon_6f943687bdd6e710d6695cc1d1c13590_14_llvm_7346471370157798290_001e20a8
              );
    uVar16 = *param_2;
    uVar14 = param_2[3];
  }
  uVar17 = 0;
  if (uVar16 <= uVar14 + param_2[2]) {
    uVar17 = uVar16;
  }
  uVar16 = param_2[1];
  lVar15 = ((uVar14 + param_2[2]) - uVar17) * 0x68;
  *(double *)(uVar16 + lVar15) = param_1;
  uVar6 = param_3[1];
  uVar7 = param_3[2];
  uVar8 = param_3[3];
  uVar9 = param_3[4];
  uVar10 = param_3[5];
  uVar11 = param_3[6];
  uVar12 = param_3[7];
  puVar1 = (undefined8 *)(uVar16 + 8 + lVar15);
  *puVar1 = *param_3;
  puVar1[1] = uVar6;
  puVar1 = (undefined8 *)(uVar16 + 0x18 + lVar15);
  *puVar1 = uVar7;
  puVar1[1] = uVar8;
  puVar1 = (undefined8 *)(uVar16 + 0x28 + lVar15);
  *puVar1 = uVar9;
  puVar1[1] = uVar10;
  puVar1 = (undefined8 *)(uVar16 + 0x38 + lVar15);
  *puVar1 = uVar11;
  puVar1[1] = uVar12;
  *(undefined8 *)(uVar16 + 0x48 + lVar15) = uVar2;
  *(undefined8 *)(uVar16 + 0x50 + lVar15) = uVar3;
  uVar2 = param_3[0xb];
  puVar1 = (undefined8 *)(uVar16 + 0x58 + lVar15);
  *puVar1 = param_3[10];
  puVar1[1] = uVar2;
  uVar16 = param_2[3] + 1;
  param_2[3] = uVar16;
  puVar13 = PTR___rust_dealloc_001e78c8;
  if (uVar16 != 0) {
    do {
      uVar14 = param_2[2];
      uVar17 = *param_2;
      uVar4 = param_2[1];
      uVar19 = uVar17;
      if (uVar14 < uVar17) {
        uVar19 = 0;
      }
      dVar5 = param_1 - *(double *)(uVar4 + (uVar14 - uVar19) * 0x68);
      if (dVar5 < (double)param_2[4] || dVar5 == (double)param_2[4]) {
        return;
      }
      uVar19 = 0;
      if (uVar17 <= uVar14 + 1) {
        uVar19 = uVar17;
      }
      param_2[2] = (uVar14 - uVar19) + 1;
      uVar16 = uVar16 - 1;
      param_2[3] = uVar16;
      lVar18 = uVar14 * 0x68;
      lVar15 = *(long *)(uVar4 + 0x48 + lVar18);
      if (lVar15 != 0 && *(long *)(uVar4 + 8 + lVar18) != 2) {
        (*(code *)puVar13)(*(undefined8 *)(uVar4 + lVar18 + 0x50),lVar15,1);
        uVar16 = param_2[3];
      }
    } while (uVar16 != 0);
  }
  return;
}




// ELF address 0x000000000003fa10; strategy_sm4::apply_book_vol_cap

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_sm4::apply_book_vol_cap */

void __rustcall
strategy_sm4::apply_book_vol_cap
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
    dVar6 = DAT_00117eb8;
    if (*(char *)(param_6 + 0x165) != '\0') {
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
    dVar5 = *(double *)(param_6 + 0x158);
    goto joined_r0x0013fc44;
  }
  if (*(char *)(param_6 + 0x165) == '\0') {
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
    dVar4 = DAT_00117f00;
    if (*(double *)(param_5 + 0x10 + lVar3) <= 0.0) goto LAB_0013fa69;
LAB_0013fbf1:
    dVar5 = dVar5 + *(double *)(param_5 + 0x18 + lVar3);
    dVar4 = dVar4 + DAT_00117f00;
    dVar1 = *(double *)(param_5 + 0x20 + lVar3);
  }
  else {
    dVar4 = 0.0;
    if (0.0 < *(double *)(param_5 + 0x10 + lVar3)) goto LAB_0013fbf1;
LAB_0013fa69:
    dVar1 = *(double *)(param_5 + 0x20 + lVar3);
  }
  if (0.0 < dVar1) {
    dVar5 = dVar5 + *(double *)(param_5 + 0x28 + lVar3);
    dVar4 = dVar4 + DAT_00117f00;
  }
  if (0.0 < dVar4) {
    dVar6 = dVar5 / dVar4;
  }
  dVar5 = *(double *)(param_6 + 0x128);
joined_r0x0013fc44:
  if (0.0 < dVar5) {
    dVar4 = dVar5;
    if (dVar6 <= dVar5) {
      dVar4 = dVar6;
    }
    dVar6 = (double)(~-(ulong)NAN(dVar6) & (ulong)dVar4 | -(ulong)NAN(dVar6) & (ulong)dVar5);
  }
  if ((dVar6 == DAT_00117eb8) && (!NAN(dVar6) && !NAN(DAT_00117eb8))) {
    return;
  }
  dVar4 = (double)((ulong)param_1 & _DAT_00117fd0);
  dVar5 = dVar6;
  if (dVar4 <= dVar6) {
    dVar5 = dVar4;
  }
  (*(code *)PTR_round_with_step_f64_001e79b0)
            ((double)(~-(ulong)NAN(dVar4) & (ulong)dVar5 | -(ulong)NAN(dVar4) & (ulong)dVar6) *
             (double)(~-(ulong)NAN(param_1) &
                      (_DAT_001185d0 & (ulong)param_1 | SUB168(_s__001184f0,0)) |
                     _s__00117f70 & -(ulong)NAN(param_1)),1);
  return;
}




// ELF address 0x000000000003f4a0; strategy_sm4::live_pending_counts

/* strategy_sm4::live_pending_counts */

undefined1  [16] __rustcall
strategy_sm4::live_pending_counts
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
  
  (*(code *)PTR_pending_orders_001e7988)(&local_48,param_1,param_2,param_3);
                    /* try { // try from 0013f4d7 to 0013f4ea has its CatchHandler @ 0013f9e9 */
  (*(code *)PTR_cancel_pending_ids_001e79a8)(&local_60,param_1,param_2,param_3);
  lVar7 = local_50;
  lVar17 = local_58;
  puVar8 = PTR___rust_dealloc_001e78c8;
  plVar14 = local_40 + local_38 * 0xb;
  if (local_38 == 0) {
    local_c0 = 0;
    lVar12 = 0;
    plVar15 = local_40;
LAB_0013f85a:
    puVar8 = PTR___rust_dealloc_001e78c8;
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
LAB_0013f597:
      do {
        plVar15 = plVar10 + 0xb;
        lVar2 = *plVar10;
        if (lVar2 == -0x8000000000000000) goto LAB_0013f85a;
        lVar3 = plVar10[1];
        lVar4 = plVar10[2];
        lVar5 = plVar10[3];
        lVar16 = plVar10[4];
        bVar1 = *(byte *)(plVar10 + 10);
        lVar13 = 0;
        do {
          plVar10 = plVar15;
          if ((*(long *)(param_4 + 0x10 + lVar13) == lVar4) &&
             (iVar9 = (*(code *)PTR_bcmp_001e7990)
                                (*(undefined8 *)(param_4 + 8 + lVar13),lVar3,lVar4), iVar9 == 0))
          goto LAB_0013f657;
          lVar13 = lVar13 + 0x18;
        } while (param_5 * 0x18 != lVar13);
        if (lVar7 != 0) {
          lVar13 = 0;
          do {
            if ((*(long *)(lVar17 + 0x10 + lVar13) == lVar4) &&
               (iVar9 = (*(code *)PTR_bcmp_001e7990)
                                  (*(undefined8 *)(lVar17 + 8 + lVar13),lVar3,lVar4), iVar9 == 0))
            goto LAB_0013f657;
            lVar13 = lVar13 + 0x18;
          } while (lVar6 != lVar13);
        }
        if (lVar2 != 0) {
          (*(code *)PTR___rust_dealloc_001e78c8)(lVar3,lVar2,1);
        }
        if (lVar5 != 0) {
          (*(code *)PTR___rust_dealloc_001e78c8)(lVar16,lVar5,1);
        }
        lVar12 = lVar12 + (ulong)bVar1;
        local_c0 = local_c0 + (ulong)(bVar1 ^ 1);
      } while (plVar15 != plVar14);
      goto LAB_0013f956;
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
LAB_0013f750:
      do {
        plVar15 = plVar10 + 0xb;
        lVar6 = *plVar10;
        if (lVar6 == -0x8000000000000000) goto LAB_0013f85a;
        lVar2 = plVar10[1];
        lVar3 = plVar10[2];
        lVar4 = plVar10[3];
        lVar5 = plVar10[4];
        bVar1 = *(byte *)(plVar10 + 10);
        lVar16 = 0;
        do {
          plVar10 = plVar15;
          if ((*(long *)(lVar17 + 0x10 + lVar16) == lVar3) &&
             (iVar9 = (*(code *)PTR_bcmp_001e7990)(*(undefined8 *)(lVar17 + 8 + lVar16),lVar2,lVar3)
             , iVar9 == 0)) {
            if (lVar6 != 0) {
              (*(code *)PTR___rust_dealloc_001e78c8)(lVar2,lVar6,1);
            }
            if (lVar4 != 0) {
              (*(code *)PTR___rust_dealloc_001e78c8)(lVar5,lVar4,1);
            }
            if (plVar15 != plVar14) goto LAB_0013f750;
            goto LAB_0013f85a;
          }
          lVar16 = lVar16 + 0x18;
        } while (lVar7 != lVar16);
        if (lVar6 != 0) {
          (*(code *)PTR___rust_dealloc_001e78c8)(lVar2,lVar6,1);
        }
        if (lVar4 != 0) {
          (*(code *)PTR___rust_dealloc_001e78c8)(lVar5,lVar4,1);
        }
        lVar12 = lVar12 + (ulong)bVar1;
        local_c0 = local_c0 + (ulong)(bVar1 ^ 1);
      } while (plVar15 != plVar14);
    }
  }
LAB_0013f956:
  if (local_48 != 0) {
    (*(code *)PTR___rust_dealloc_001e78c8)(local_40,local_48 * 0x58,8);
  }
  puVar8 = PTR___rust_dealloc_001e78c8;
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
    (*(code *)PTR___rust_dealloc_001e78c8)(local_58,local_60 * 0x18,8);
  }
  auVar19._8_8_ = local_c0;
  auVar19._0_8_ = lVar12;
  return auVar19;
LAB_0013f657:
  if (lVar2 != 0) {
    (*(code *)PTR___rust_dealloc_001e78c8)(lVar3,lVar2,1);
  }
  if (lVar5 != 0) {
    (*(code *)PTR___rust_dealloc_001e78c8)(lVar16,lVar5,1);
  }
  if (plVar15 == plVar14) goto LAB_0013f85a;
  goto LAB_0013f597;
}




// ELF address 0x000000000003ec20; strategy_sm4::default_point_trigger

/* strategy_sm4::default_point_trigger */

undefined8 * __rustcall strategy_sm4::default_point_trigger(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001e78e8)();
  puVar2 = (undefined8 *)(*(code *)PTR___rust_alloc_001e78c0)(0xc,1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0x697254746e696f50;
    *(undefined4 *)(puVar2 + 1) = 0x72656767;
    *param_1 = 0xc;
    param_1[1] = puVar2;
    param_1[2] = 0xc;
    return param_1;
  }
  (*(code *)PTR_handle_error_001e7970)
            (1,0xc,anon_d6c90fe0c8febcf3c104bcc2f0442008_10_llvm_8175779838802317276);
  pcVar1 = (code *)swi(3);
  puVar2 = (undefined8 *)(*pcVar1)();
  return puVar2;
}




// ELF address 0x000000000003f030; strategy_sm4::cancel_order_use_range

/* strategy_sm4::cancel_order_use_range */

long __rustcall
strategy_sm4::cancel_order_use_range
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
    (*(code *)PTR_pending_orders_001e7988)(&local_48,param_3,param_4,param_5);
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
LAB_0013f36a:
      puVar3 = PTR___rust_dealloc_001e78c8;
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
            (*(code *)PTR___rust_dealloc_001e78c8)(lVar2,lVar13,1);
          }
          if (lVar11 != 0) {
            (*(code *)PTR___rust_dealloc_001e78c8)(local_e0,lVar11,1);
          }
          plVar7 = local_d8;
          local_40 = plVar12;
          if (plVar12 == plVar9) goto LAB_0013f325;
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
               (iVar4 = (*(code *)PTR_bcmp_001e7990)(*(undefined8 *)(lVar5 + 8 + lVar8),lVar2),
               lVar6 = local_50, plVar7 = local_d8, lVar11 = local_b0, iVar4 == 0))
            goto LAB_0013f250;
            lVar8 = lVar8 + 0x18;
          } while (lVar6 != lVar8);
        }
        if ((bVar1 & 1) == 0) {
          if (local_a0 <= local_70) goto LAB_0013f250;
LAB_0013f282:
                    /* try { // try from 0013f282 to 0013f2a5 has its CatchHandler @ 0013f43e */
          lVar5 = (*(code *)PTR_cancel_order_001e7998)(local_58,local_68,local_60,lVar2,plVar7);
          plVar7 = local_c8;
          plVar9 = local_d0;
          if (lVar5 != 0) {
            local_90 = plVar12;
            if (lVar13 != 0) {
              (*(code *)PTR___rust_dealloc_001e78c8)(lVar2,lVar13,1);
            }
            lVar13 = local_c0;
            plVar7 = local_b8;
            if (lVar11 != 0) {
              (*(code *)PTR___rust_dealloc_001e78c8)(local_e0,lVar11,1);
              lVar13 = local_c0;
              plVar7 = local_b8;
            }
            goto LAB_0013f36a;
          }
          lVar5 = local_c8[2];
          if (lVar5 == *local_c8) {
                    /* try { // try from 0013f2c3 to 0013f2d2 has its CatchHandler @ 0013f43c */
            (*(code *)PTR_grow_one_001e79a0)
                      (local_c8,&PTR_s_strategies_index_strategy_strate_001e1470);
          }
          lVar6 = plVar7[1];
          *(long *)(lVar6 + lVar5 * 0x18) = lVar13;
          *(long *)(lVar6 + 8 + lVar5 * 0x18) = lVar2;
          *(long **)(lVar6 + 0x10 + lVar5 * 0x18) = local_d8;
          plVar7[2] = lVar5 + 1;
          plVar9 = local_d0;
        }
        else {
          if (local_a0 < local_a8) goto LAB_0013f282;
LAB_0013f250:
          plVar9 = local_d0;
          if (lVar13 != 0) {
            (*(code *)PTR___rust_dealloc_001e78c8)(lVar2,lVar13,1);
          }
        }
        if (lVar11 != 0) {
          (*(code *)PTR___rust_dealloc_001e78c8)(local_e0,lVar11,1);
        }
        plVar7 = plVar12;
        local_40 = plVar12;
      } while (plVar12 != plVar9);
LAB_0013f325:
      lVar5 = 0;
      local_90 = plVar7;
      lVar13 = local_c0;
      plVar7 = local_b8;
    }
    if (lVar13 != 0) {
      (*(code *)PTR___rust_dealloc_001e78c8)(plVar7,lVar13 * 0x58,8);
    }
  }
  return lVar5;
}




// ELF address 0x0000000000091850; strategy_signal_maker_common::signal_trigger::SignalTrigger::update_score

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
  puVar6 = PTR_update_001e7f20;
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
LAB_00191a32:
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
          goto LAB_00191a32;
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




// ELF address 0x0000000000092680; strategy_signal_maker_common::signal_trigger::SignalTrigger::windows_rsi_trigger

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_signal_maker_common::signal_trigger::SignalTrigger::windows_rsi_trigger */

undefined1 * __rustcall
strategy_signal_maker_common::signal_trigger::SignalTrigger::windows_rsi_trigger
          (undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined1 auVar1 [16];
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined1 uVar5;
  long lVar6;
  char cVar7;
  undefined1 (*pauVar8) [16];
  long lVar9;
  undefined1 (*pauVar10) [16];
  uint uVar11;
  ulong uVar12;
  double dVar13;
  undefined8 extraout_XMM0_Qa;
  long local_90;
  long local_88;
  long local_80;
  undefined8 local_78;
  undefined1 *local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  local_90 = 0;
  local_88 = 1;
  local_80 = 0;
  lVar9 = param_3[3];
  local_78 = param_1;
  local_70 = param_2;
  if (lVar9 != 0) {
    pauVar10 = (undefined1 (*) [16])*param_3;
    pauVar8 = pauVar10 + 1;
    auVar1 = *pauVar10;
    uVar11 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
    local_50 = (double)param_3[8];
    local_58 = (double)param_3[0xb];
    local_60 = (double)param_3[10];
    local_68 = (double)param_3[9];
    do {
      lVar4 = local_80;
      if ((short)uVar11 == 0) {
        do {
          auVar1 = *pauVar8;
          pauVar10 = pauVar10 + -0x98;
          pauVar8 = pauVar8 + 1;
          uVar11 = (uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                                  (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                                  (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                                  (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                                  (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                                  (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                                  (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                                  (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                                  (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                                  (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                                  (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                                  (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                                  (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
        } while (uVar11 == 0xffff);
        uVar11 = ~uVar11;
      }
      uVar2 = 0;
      for (uVar3 = uVar11; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
        uVar2 = uVar2 + 1;
      }
      lVar6 = (ulong)uVar2 * -0x98;
      dVar13 = (double)(*(ulong *)((long)pauVar10 + lVar6 + -0x18) & _DAT_00117fd0);
      uVar12 = -(ulong)(DAT_00117ef8 < dVar13);
      dVar13 = (double)(~uVar12 & _s__00117f98 |
                       (ulong)(DAT_00117f48 -
                              DAT_00117f48 /
                              (*(double *)((long)pauVar10 + lVar6 + -0x20) / dVar13 + DAT_00117f00))
                       & uVar12);
      *(double *)((long)pauVar10 + lVar6 + -0x10) = dVar13;
      if (local_50 <= dVar13) {
        cVar7 = '\0';
      }
      else {
        cVar7 = '\x03';
        if (dVar13 < local_58) {
          cVar7 = '\x02';
          if (local_60 < dVar13) {
            cVar7 = (local_68 < dVar13) * '\x03' + '\x01';
          }
        }
      }
      if (local_80 == local_90) {
                    /* try { // try from 00192822 to 00192833 has its CatchHandler @ 00192886 */
        (*(code *)PTR_grow_one_001e7f38)(&local_90,&PTR_s_strategies_index_strategy_strate_001e3dc8)
        ;
      }
      uVar11 = uVar11 - 1 & uVar11;
      lVar9 = lVar9 + -1;
      *(char *)(local_88 + lVar4) = cVar7;
      local_80 = lVar4 + 1;
    } while (lVar9 != 0);
  }
  lStack_38 = local_80;
  lStack_48 = local_90;
  lStack_40 = local_88;
  uVar5 = (*(code *)PTR_enum_rate_counter_001e7f30)(local_78,&lStack_48);
  *local_70 = uVar5;
  *(undefined8 *)(local_70 + 8) = extraout_XMM0_Qa;
  return local_70;
}




// ELF address 0x0000000000091c70; strategy_signal_maker_common::signal_trigger::SignalTrigger::windows_std_trigger

/* strategy_signal_maker_common::signal_trigger::SignalTrigger::windows_std_trigger */

undefined1 * __rustcall
strategy_signal_maker_common::signal_trigger::SignalTrigger::windows_std_trigger
          (undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined1 auVar1 [16];
  long lVar2;
  undefined1 uVar3;
  undefined8 extraout_XMM0_Qa;
  long local_88;
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 (*local_48) [16];
  undefined1 (*local_40) [16];
  undefined1 *local_38;
  ushort local_30;
  undefined8 local_28;
  undefined8 *local_20;
  undefined1 *local_18;
  
  local_18 = (undefined1 *)&local_88;
  local_48 = (undefined1 (*) [16])*param_3;
  local_38 = *local_48 + param_3[1] + 1;
  auVar1 = *local_48;
  local_30 = ~((ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
  local_28 = param_3[3];
  local_88 = 0;
  local_40 = local_48 + 1;
                    /* try { // try from 00191ccc to 00191ce1 has its CatchHandler @ 00191d58 */
  local_80 = param_1;
  local_20 = param_3;
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (&local_78,&local_48,anon_783cd9a4f7724ec660c77fda0343f220_3_llvm_17731430809145393098);
  lVar2 = local_88;
  if (local_88 == 0) {
    local_60 = local_78;
    local_58 = local_70;
    local_50 = local_68;
    uVar3 = (*(code *)PTR_enum_rate_counter_001e7f30)(local_80,&local_60);
    *(undefined8 *)(param_2 + 8) = extraout_XMM0_Qa;
  }
  else {
    if (local_78 != 0) {
      (*(code *)PTR___rust_dealloc_001e78c8)(local_70,local_78,1);
    }
    *(long *)(param_2 + 8) = lVar2;
    uVar3 = 5;
  }
  *param_2 = uVar3;
  return param_2;
}




// ELF address 0x0000000000091b60; strategy_signal_maker_common::signal_trigger::SignalTrigger::windows_mean_trigger

/* strategy_signal_maker_common::signal_trigger::SignalTrigger::windows_mean_trigger */

undefined1 * __rustcall
strategy_signal_maker_common::signal_trigger::SignalTrigger::windows_mean_trigger
          (undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined1 auVar1 [16];
  long lVar2;
  undefined1 uVar3;
  undefined8 extraout_XMM0_Qa;
  long local_88;
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 (*local_48) [16];
  undefined1 (*local_40) [16];
  undefined1 *local_38;
  ushort local_30;
  undefined8 local_28;
  undefined8 *local_20;
  undefined1 *local_18;
  
  local_18 = (undefined1 *)&local_88;
  local_48 = (undefined1 (*) [16])*param_3;
  local_38 = *local_48 + param_3[1] + 1;
  auVar1 = *local_48;
  local_30 = ~((ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
  local_28 = param_3[3];
  local_88 = 0;
  local_40 = local_48 + 1;
                    /* try { // try from 00191bbc to 00191bd1 has its CatchHandler @ 00191c48 */
  local_80 = param_1;
  local_20 = param_3;
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (&local_78,&local_48,anon_783cd9a4f7724ec660c77fda0343f220_3_llvm_17731430809145393098);
  lVar2 = local_88;
  if (local_88 == 0) {
    local_60 = local_78;
    local_58 = local_70;
    local_50 = local_68;
    uVar3 = (*(code *)PTR_enum_rate_counter_001e7f30)(local_80,&local_60);
    *(undefined8 *)(param_2 + 8) = extraout_XMM0_Qa;
  }
  else {
    if (local_78 != 0) {
      (*(code *)PTR___rust_dealloc_001e78c8)(local_70,local_78,1);
    }
    *(long *)(param_2 + 8) = lVar2;
    uVar3 = 5;
  }
  *param_2 = uVar3;
  return param_2;
}




// ELF address 0x0000000000092430; strategy_signal_maker_common::signal_trigger::SignalTrigger::windows_sharpe_trigger

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_signal_maker_common::signal_trigger::SignalTrigger::windows_sharpe_trigger */

undefined1 * __rustcall
strategy_signal_maker_common::signal_trigger::SignalTrigger::windows_sharpe_trigger
          (undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  double dVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined1 uVar5;
  long lVar6;
  long lVar7;
  char cVar8;
  undefined1 (*pauVar9) [16];
  long lVar10;
  undefined1 (*pauVar11) [16];
  uint uVar12;
  double dVar13;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar14 [16];
  double dVar15;
  long local_90;
  long local_88;
  long local_80;
  undefined8 local_78;
  undefined1 *local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  local_90 = 0;
  local_88 = 1;
  local_80 = 0;
  lVar10 = param_3[3];
  local_78 = param_1;
  local_70 = param_2;
  if (lVar10 != 0) {
    pauVar11 = (undefined1 (*) [16])*param_3;
    pauVar9 = pauVar11 + 1;
    auVar14 = *pauVar11;
    uVar12 = ~(uint)(ushort)((ushort)(SUB161(auVar14 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar14 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar14 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar14 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar14 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar14 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar14 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar14 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar14 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar14 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar14 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar14 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar14 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar14 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar14[0xf] >> 7) << 0xf);
    local_50 = (double)param_3[8];
    local_58 = (double)param_3[0xb];
    local_60 = (double)param_3[10];
    local_68 = (double)param_3[9];
    do {
      lVar4 = local_80;
      if ((short)uVar12 == 0) {
        do {
          auVar14 = *pauVar9;
          pauVar11 = pauVar11 + -0x98;
          pauVar9 = pauVar9 + 1;
          uVar12 = (uint)(ushort)((ushort)(SUB161(auVar14 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1 |
                                  (ushort)(SUB161(auVar14 >> 0x17,0) & 1) << 2 |
                                  (ushort)(SUB161(auVar14 >> 0x1f,0) & 1) << 3 |
                                  (ushort)(SUB161(auVar14 >> 0x27,0) & 1) << 4 |
                                  (ushort)(SUB161(auVar14 >> 0x2f,0) & 1) << 5 |
                                  (ushort)(SUB161(auVar14 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar14 >> 0x3f,0) & 1) << 7 |
                                  (ushort)(SUB161(auVar14 >> 0x47,0) & 1) << 8 |
                                  (ushort)(SUB161(auVar14 >> 0x4f,0) & 1) << 9 |
                                  (ushort)(SUB161(auVar14 >> 0x57,0) & 1) << 10 |
                                  (ushort)(SUB161(auVar14 >> 0x5f,0) & 1) << 0xb |
                                  (ushort)(SUB161(auVar14 >> 0x67,0) & 1) << 0xc |
                                  (ushort)(SUB161(auVar14 >> 0x6f,0) & 1) << 0xd |
                                  (ushort)(SUB161(auVar14 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar14[0xf] >> 7) << 0xf);
        } while (uVar12 == 0xffff);
        uVar12 = ~uVar12;
      }
      uVar2 = 0;
      for (uVar3 = uVar12; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
        uVar2 = uVar2 + 1;
      }
      lVar6 = (ulong)uVar2 * -0x98;
      lVar7 = *(long *)((long)pauVar11 + lVar6 + -0x40);
      lVar7 = lVar7 + (ulong)(lVar7 == 0);
      auVar14._8_4_ = (int)((ulong)lVar7 >> 0x20);
      auVar14._0_8_ = lVar7;
      auVar14._12_4_ = _UNK_00118144;
      dVar1 = *(double *)((long)pauVar11 + lVar6 + -0x38);
      dVar15 = *(double *)((long)pauVar11 + lVar6 + -0x30) /
               ((auVar14._8_8_ - _UNK_00118018) +
               ((double)CONCAT44(_s__00118140,(int)lVar7) - _s__00118010)) - dVar1 * dVar1;
      dVar13 = 0.0;
      if (dVar15 <= 0.0) {
        dVar15 = dVar13;
      }
      dVar15 = SQRT(dVar15);
      *(double *)((long)pauVar11 + lVar6 + -0x28) = dVar15;
      if (DAT_00117ef8 < (double)((ulong)dVar15 & _DAT_00117fd0)) {
        dVar13 = dVar1 / dVar15;
      }
      *(double *)((long)pauVar11 + lVar6 + -8) = dVar13;
      if (local_50 <= dVar13) {
        cVar8 = '\0';
      }
      else {
        cVar8 = '\x03';
        if (dVar13 < local_58) {
          cVar8 = '\x02';
          if (local_60 < dVar13) {
            cVar8 = (local_68 < dVar13) * '\x03' + '\x01';
          }
        }
      }
      if (local_80 == local_90) {
                    /* try { // try from 001925f2 to 00192603 has its CatchHandler @ 00192656 */
        (*(code *)PTR_grow_one_001e7f38)(&local_90,&PTR_s_strategies_index_strategy_strate_001e3db0)
        ;
      }
      uVar12 = uVar12 - 1 & uVar12;
      lVar10 = lVar10 + -1;
      *(char *)(local_88 + lVar4) = cVar8;
      local_80 = lVar4 + 1;
    } while (lVar10 != 0);
  }
  lStack_38 = local_80;
  lStack_48 = local_90;
  lStack_40 = local_88;
  uVar5 = (*(code *)PTR_enum_rate_counter_001e7f30)(local_78,&lStack_48);
  *local_70 = uVar5;
  *(undefined8 *)(local_70 + 8) = extraout_XMM0_Qa;
  return local_70;
}




// ELF address 0x0000000000091d80; strategy_signal_maker_common::signal_trigger::SignalTrigger::windows_quantile_trigger

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_signal_maker_common::signal_trigger::SignalTrigger::windows_quantile_trigger */

undefined1 * __rustcall
strategy_signal_maker_common::signal_trigger::SignalTrigger::windows_quantile_trigger
          (double param_1,undefined8 param_2,undefined1 *param_3,undefined8 *param_4)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  undefined1 uVar7;
  ulong uVar8;
  long lVar9;
  double *pdVar10;
  ulong uVar11;
  undefined8 uVar12;
  char cVar13;
  undefined1 (*pauVar14) [16];
  uint uVar15;
  undefined1 (*pauVar16) [16];
  char cVar17;
  long lVar18;
  ulong uVar19;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar23;
  ulong local_f0;
  long local_e8;
  ulong local_e0;
  ulong uStack_d8;
  long lStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double dStack_68;
  long local_60;
  double local_58;
  undefined8 local_50;
  double local_48;
  
  local_f0 = 0;
  local_e8 = 1;
  local_e0 = 0;
  pauVar16 = (undefined1 (*) [16])*param_4;
  lVar9 = param_4[3];
  auVar22 = *pauVar16;
  uVar1 = (ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
          (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
          (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
          (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
          (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
          (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
          (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
          (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
          (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
          (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
          (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
          (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
          (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar22[0xf] >> 7) << 0xf;
  pauVar14 = pauVar16 + 1;
  local_50 = param_2;
  if ((param_1 < 0.0) || (DAT_00117f00 < param_1)) {
    if (lVar9 != 0) {
      while (uVar1 == 0xffff) {
        auVar22 = *pauVar14;
        pauVar14 = pauVar14 + 1;
        uVar1 = (ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar22[0xf] >> 7) << 0xf;
      }
LAB_0019237f:
                    /* try { // try from 0019237f to 0019238f has its CatchHandler @ 001923fb */
      uVar12 = anyhow::error::_<impl_anyhow::Error>::msg("quantile not found",0x12);
      *(undefined8 *)(param_3 + 8) = uVar12;
      *param_3 = 5;
      if (local_f0 == 0) {
        return param_3;
      }
      (*(code *)PTR___rust_dealloc_001e78c8)(local_e8,local_f0,1);
      return param_3;
    }
  }
  else {
    uVar15 = ~(uint)uVar1;
    dVar23 = DAT_00117f00 - param_1;
    local_48 = param_1;
    if ((dVar23 < 0.0) || (DAT_00117f00 < dVar23)) {
      if (lVar9 != 0) {
        if (uVar1 == 0xffff) {
          do {
            auVar22 = *pauVar14;
            pauVar16 = pauVar16 + -0x98;
            pauVar14 = pauVar14 + 1;
            uVar15 = (uint)(ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar22[0xf] >> 7) << 0xf);
          } while (uVar15 == 0xffff);
          uVar15 = ~uVar15;
        }
        uVar2 = 0;
        for (; (uVar15 & 1) == 0; uVar15 = uVar15 >> 1 | 0x80000000) {
          uVar2 = uVar2 + 1;
        }
        lVar9 = (ulong)uVar2 * -0x98;
        uVar19 = *(ulong *)((long)pauVar16 + lVar9 + -0x60);
        if (uVar19 != 0) {
          auVar22._8_4_ = (int)(uVar19 >> 0x20);
          auVar22._0_8_ = uVar19;
          auVar22._12_4_ = _UNK_00118144;
          param_1 = param_1 * ((auVar22._8_8_ - _UNK_00118018) +
                              ((double)CONCAT44(_s__00118140,(int)uVar19) - _s__00118010));
          uVar8 = 0;
          if (0.0 <= param_1) {
            uVar8 = (long)(param_1 - _DAT_00117f28) & (long)param_1 >> 0x3f | (long)param_1;
          }
          uVar11 = 0xffffffffffffffff;
          if (param_1 <= _DAT_00117e80) {
            uVar11 = uVar8;
          }
          uStack_c8 = *(long *)((long)pauVar16 + lVar9 + -0x70);
          uStack_c0 = *(undefined8 *)((long)pauVar16 + lVar9 + -0x68);
          uStack_d8 = (ulong)(uStack_c8 != 0);
          uStack_98 = uVar19;
          if (uStack_c8 == 0) {
            uStack_98 = 0;
          }
          lStack_d0 = 0;
          uStack_b0 = 0;
          uStack_b8 = uStack_d8;
          lStack_a8 = uStack_c8;
          uStack_a0 = uStack_c0;
          if (uVar11 != 0) {
            if (uVar11 < uVar19) {
              uVar19 = uVar11;
            }
            do {
                    /* try { // try from 00192360 to 00192367 has its CatchHandler @ 001923fd */
              lVar9 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                      ::next(&uStack_d8);
              if (lVar9 == 0) goto LAB_0019237f;
              uVar19 = uVar19 - 1;
            } while (uVar19 != 0);
          }
                    /* try { // try from 00192372 to 0019237b has its CatchHandler @ 001923f7 */
          _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>::
          next(&uStack_d8);
        }
        goto LAB_0019237f;
      }
    }
    else {
      local_58 = dVar23;
      if (lVar9 != 0) {
        local_70 = (double)param_4[8];
        local_78 = (double)param_4[0xb];
        local_80 = (double)param_4[10];
        local_88 = (double)param_4[9];
        do {
          if ((short)uVar15 == 0) {
            do {
              auVar22 = *pauVar14;
              pauVar16 = pauVar16 + -0x98;
              pauVar14 = pauVar14 + 1;
              uVar15 = (uint)(ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
                                      (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                                      (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                                      (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                                      (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                                      (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                                      (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                                      (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                                      (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                                      (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                                      (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                                      (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                                      (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                                      (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                                      (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                                     (ushort)(byte)(auVar22[0xf] >> 7) << 0xf);
            } while (uVar15 == 0xffff);
            uVar15 = ~uVar15;
          }
          uVar2 = 0;
          for (uVar3 = uVar15; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
            uVar2 = uVar2 + 1;
          }
          lVar18 = (ulong)uVar2 * -0x98;
          uVar19 = *(ulong *)((long)pauVar16 + lVar18 + -0x60);
          local_60 = lVar9;
          if (uVar19 == 0) goto LAB_0019237f;
          auVar20._8_4_ = (int)(uVar19 >> 0x20);
          auVar20._0_8_ = uVar19;
          auVar20._12_4_ = _UNK_00118144;
          dVar23 = ((auVar20._8_8_ - _UNK_00118018) +
                   ((double)CONCAT44(_s__00118140,(int)uVar19) - _s__00118010)) * local_48;
          uVar8 = (long)(dVar23 - _DAT_00117f28) & (long)dVar23 >> 0x3f | (long)dVar23;
          if (dVar23 < _DAT_00117f20) {
            uVar8 = 0;
          }
          if (_DAT_00117e80 < dVar23) {
            uVar8 = 0xffffffffffffffff;
          }
          uStack_c8 = *(long *)((long)pauVar16 + lVar18 + -0x70);
          uStack_c0 = *(undefined8 *)((long)pauVar16 + lVar18 + -0x68);
          uStack_d8 = (ulong)(uStack_c8 != 0);
          uStack_98 = uVar19;
          if (uStack_c8 == 0) {
            uStack_98 = 0;
          }
          lStack_d0 = 0;
          uStack_b0 = 0;
          uStack_b8 = uStack_d8;
          lStack_a8 = uStack_c8;
          uStack_a0 = uStack_c0;
          if (uVar8 != 0) {
            if (uVar8 < uVar19) {
              uVar19 = uVar8;
            }
            do {
                    /* try { // try from 00191f80 to 00191f89 has its CatchHandler @ 00192401 */
              lVar9 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                      ::next(&uStack_d8);
              if (lVar9 == 0) goto LAB_0019237f;
              uVar19 = uVar19 - 1;
            } while (uVar19 != 0);
          }
                    /* try { // try from 00191f98 to 00191fa1 has its CatchHandler @ 001923f9 */
          pdVar10 = (double *)
                    _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                    ::next(&uStack_d8);
          if ((pdVar10 == (double *)0x0) ||
             (uVar19 = *(ulong *)((long)pauVar16 + lVar18 + -0x60), uVar19 == 0)) goto LAB_0019237f;
          auVar21._8_4_ = (int)(uVar19 >> 0x20);
          auVar21._0_8_ = uVar19;
          auVar21._12_4_ = _UNK_00118144;
          dVar23 = ((auVar21._8_8_ - _UNK_00118018) +
                   ((double)CONCAT44(_s__00118140,(int)uVar19) - _s__00118010)) * local_58;
          uVar8 = 0;
          if (_DAT_00117f20 <= dVar23) {
            uVar8 = (long)(dVar23 - _DAT_00117f28) & (long)dVar23 >> 0x3f | (long)dVar23;
          }
          if (_DAT_00117e80 < dVar23) {
            uVar8 = 0xffffffffffffffff;
          }
          dStack_68 = *pdVar10;
          uStack_c8 = *(long *)((long)pauVar16 + lVar18 + -0x70);
          uStack_c0 = *(undefined8 *)((long)pauVar16 + lVar18 + -0x68);
          uStack_d8 = (ulong)(uStack_c8 != 0);
          uStack_98 = uVar19;
          if (uStack_c8 == 0) {
            uStack_98 = 0;
          }
          lStack_d0 = 0;
          uStack_b0 = 0;
          uStack_b8 = uStack_d8;
          lStack_a8 = uStack_c8;
          uStack_a0 = uStack_c0;
          if (uVar8 != 0) {
            if (uVar8 < uVar19) {
              uVar19 = uVar8;
            }
            do {
                    /* try { // try from 00192090 to 00192099 has its CatchHandler @ 001923ff */
              lVar9 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                      ::next(&uStack_d8);
              if (lVar9 == 0) goto LAB_0019237f;
              uVar19 = uVar19 - 1;
            } while (uVar19 != 0);
          }
                    /* try { // try from 001920a8 to 001921be has its CatchHandler @ 001923f9 */
          pdVar10 = (double *)
                    _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                    ::next(&uStack_d8);
          uVar19 = local_e0;
          if (pdVar10 == (double *)0x0) goto LAB_0019237f;
          bVar5 = true;
          if (local_70 <= dStack_68) {
            bVar4 = true;
            cVar13 = '\0';
          }
          else {
            cVar13 = '\x03';
            bVar4 = true;
            if ((dStack_68 < local_78) && (cVar13 = '\x02', local_80 < dStack_68)) {
              bVar4 = local_88 >= dStack_68;
              cVar13 = (local_88 < dStack_68) * '\x03' + '\x01';
            }
          }
          dVar23 = *pdVar10;
          if (local_70 <= dVar23) {
            cVar6 = '\0';
          }
          else {
            cVar6 = '\x03';
            if ((dVar23 < local_78) && (cVar6 = '\x02', local_80 < dVar23)) {
              bVar5 = local_88 >= dVar23;
              cVar6 = (local_88 < dVar23) * '\x03' + '\x01';
            }
          }
          cVar17 = '\x04';
          if (bVar4) {
            if (!bVar5) {
              cVar17 = '\x04' - (cVar13 == '\x03');
              if (cVar13 == '\0') {
                cVar17 = '\0';
              }
            }
          }
          else if ((bVar5) && (cVar17 = (cVar6 != '\x02') * '\x02' + '\x02', cVar6 == '\x01')) {
            cVar17 = '\x01';
          }
          if (local_e0 == local_f0) {
            (*(code *)PTR_grow_one_001e7f38)
                      (&local_f0,&PTR_s_strategies_index_strategy_strate_001e3d98);
          }
          uVar15 = uVar15 - 1 & uVar15;
          lVar9 = local_60 + -1;
          *(char *)(local_e8 + uVar19) = cVar17;
          local_e0 = uVar19 + 1;
        } while (lVar9 != 0);
      }
    }
  }
  uStack_c8 = local_e0;
  uStack_d8 = local_f0;
  lStack_d0 = local_e8;
  uVar7 = (*(code *)PTR_enum_rate_counter_001e7f30)(local_50,&uStack_d8);
  *param_3 = uVar7;
  *(undefined8 *)(param_3 + 8) = extraout_XMM0_Qa;
  return param_3;
}




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




// ELF address 0x0000000000091780; strategy_signal_maker_common::signal_trigger::SignalTrigger::new

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
                    /* try { // try from 001917a0 to 001917ac has its CatchHandler @ 00191822 */
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
    (*(code *)PTR___rust_dealloc_001e78c8)(lVar1,*param_3 << 3,8);
  }
  return param_1;
}




// ELF address 0x0000000000092e30; strategy_signal_maker_common::signal_trigger::dynamic_threshold

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
     (_DAT_00117f60 < (double)(_DAT_00117fd0 & (ulong)param_4))) {
    dVar1 = param_3 - param_2;
    if (param_3 - param_2 <= DAT_00117ef8) {
      dVar1 = DAT_00117ef8;
    }
    dVar1 = (param_1 - param_2) / dVar1;
    if (DAT_00117f00 <= dVar1) {
      dVar1 = DAT_00117f00;
    }
    dVar4 = (double)((ulong)(param_4 * dVar1) & _DAT_00117fd0);
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




// ELF address 0x00000000000928b0; strategy_signal_maker_common::signal_trigger::enum_rate_counter

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_signal_maker_common::signal_trigger::enum_rate_counter */

ulong __rustcall
strategy_signal_maker_common::signal_trigger::enum_rate_counter(double param_1,long *param_2)

{
  char *pcVar1;
  char *pcVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  char cVar7;
  undefined4 *puVar8;
  undefined1 (*pauVar9) [16];
  undefined1 *puVar10;
  undefined1 (*pauVar11) [16];
  uint uVar12;
  undefined8 uVar13;
  char cVar14;
  ulong uVar15;
  undefined8 unaff_RBP;
  ulong uVar16;
  undefined1 *puVar17;
  long lVar18;
  ushort uVar19;
  ulong uVar20;
  undefined1 (*pauVar21) [16];
  ulong uVar22;
  uint uVar23;
  char *pcVar24;
  byte bVar25;
  ulong uVar26;
  char cVar27;
  byte bVar28;
  char cVar30;
  char cVar31;
  char cVar32;
  ulong in_XMM0_Qb;
  undefined1 auVar29 [16];
  double dVar33;
  double dVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined4 uStack_d8;
  undefined3 uStack_d4;
  undefined1 (*local_c8) [16];
  ulong uStack_c0;
  long local_b8;
  long lStack_b0;
  undefined1 local_a8 [16];
  double local_98;
  ulong uStack_90;
  undefined1 (*pauStack_80) [16];
  undefined8 uStack_78;
  ulong uStack_70;
  char *local_68;
  ulong local_60;
  undefined1 uStack_58;
  undefined4 uStack_57;
  undefined3 uStack_53;
  undefined4 auStack_3f [3];
  
  lVar3 = param_2[2];
  if (lVar3 == 0) {
    uVar16 = CONCAT71((int7)((ulong)unaff_RBP >> 8),4);
    if (*param_2 != 0) {
      (*(code *)PTR___rust_dealloc_001e78c8)(param_2[1],*param_2,1);
    }
    goto LAB_00192dbc;
  }
  local_98 = param_1;
  uStack_90 = in_XMM0_Qb;
  pauVar9 = (undefined1 (*) [16])__tls_get_addr(&PTR_001e7cb0);
  if (pauVar9[1][0] == '\x01') {
    local_a8 = *pauVar9;
  }
  else {
                    /* try { // try from 00192dd0 to 00192dd5 has its CatchHandler @ 00192de7 */
    local_a8 = (*(code *)PTR_hashmap_random_keys_001e7cc0)();
    *pauVar9 = local_a8;
    pauVar9[1][0] = 1;
  }
  *(long *)*pauVar9 = local_a8._0_8_ + 1;
  local_b8 = _DAT_001e3df0;
  lStack_b0 = _UNK_001e3df8;
  local_c8 = (undefined1 (*) [16])
             PTR_anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971_001e3de0;
  uStack_c0 = _UNK_001e3de8;
  pcVar24 = (char *)param_2[1];
  pcVar1 = pcVar24 + lVar3;
  local_68 = pcVar24;
  do {
    cVar14 = *pcVar24;
    local_60 = CONCAT71(local_60._1_7_,cVar14);
                    /* try { // try from 00192a6b to 00192aeb has its CatchHandler @ 00192dec */
    puVar10 = (undefined1 *)core::hash::BuildHasher::hash_one(local_a8);
    pcVar24 = pcVar24 + 1;
    bVar25 = (byte)((ulong)puVar10 >> 0x38);
    bVar28 = bVar25 >> 1;
    auVar29 = ZEXT216(CONCAT11(bVar28,bVar28));
    auVar29 = pshuflw(auVar29,auVar29,0);
    uVar16 = 0;
    puVar17 = puVar10;
    while( true ) {
      pauVar9 = (undefined1 (*) [16])((ulong)puVar17 & uStack_c0);
      pcVar2 = *pauVar9 + (long)*local_c8;
      cVar7 = pcVar2[0xf];
      cVar27 = auVar29[0];
      auVar36[0] = -(*pcVar2 == cVar27);
      cVar30 = auVar29[1];
      auVar36[1] = -(pcVar2[1] == cVar30);
      cVar31 = auVar29[2];
      auVar36[2] = -(pcVar2[2] == cVar31);
      cVar32 = auVar29[3];
      auVar36[3] = -(pcVar2[3] == cVar32);
      auVar36[4] = -(pcVar2[4] == cVar27);
      auVar36[5] = -(pcVar2[5] == cVar30);
      auVar36[6] = -(pcVar2[6] == cVar31);
      auVar36[7] = -(pcVar2[7] == cVar32);
      auVar36[8] = -(pcVar2[8] == cVar27);
      auVar36[9] = -(pcVar2[9] == cVar30);
      auVar36[10] = -(pcVar2[10] == cVar31);
      auVar36[0xb] = -(pcVar2[0xb] == cVar32);
      auVar36[0xc] = -(pcVar2[0xc] == cVar27);
      auVar36[0xd] = -(pcVar2[0xd] == cVar30);
      auVar36[0xe] = -(pcVar2[0xe] == cVar31);
      auVar36[0xf] = -(cVar7 == cVar32);
      uVar19 = (ushort)(SUB161(auVar36 >> 7,0) & 1) | (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar36 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar36 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar36 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar36 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar36 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar36 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar36 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar36 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe | (ushort)(auVar36[0xf] >> 7) << 0xf;
      uVar12 = (uint)uVar19;
      while (uVar19 != 0) {
        uVar23 = 0;
        for (uVar6 = uVar12; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar23 = uVar23 + 1;
        }
        uVar20 = (ulong)(*pauVar9 + uVar23) & uStack_c0;
        if (cVar14 == local_c8[-1 - uVar20][0]) {
          *(long *)(local_c8[-1 - uVar20] + 8) = *(long *)(local_c8[-1 - uVar20] + 8) + 1;
          goto joined_r0x001929d4;
        }
        uVar19 = (ushort)(uVar12 - 1) & (ushort)uVar12;
        uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar19);
      }
      auVar35[0] = -(*pcVar2 == anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[0])
      ;
      auVar35[1] = -(pcVar2[1] ==
                    anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[1]);
      auVar35[2] = -(pcVar2[2] ==
                    anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[2]);
      auVar35[3] = -(pcVar2[3] ==
                    anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[3]);
      auVar35[4] = -(pcVar2[4] ==
                    anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[4]);
      auVar35[5] = -(pcVar2[5] ==
                    anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[5]);
      auVar35[6] = -(pcVar2[6] ==
                    anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[6]);
      auVar35[7] = -(pcVar2[7] ==
                    anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[7]);
      auVar35[8] = -(pcVar2[8] ==
                    anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[8]);
      auVar35[9] = -(pcVar2[9] ==
                    anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[9]);
      auVar35[10] = -(pcVar2[10] ==
                     anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[10]);
      auVar35[0xb] = -(pcVar2[0xb] ==
                      anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[0xb]);
      auVar35[0xc] = -(pcVar2[0xc] ==
                      anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[0xc]);
      auVar35[0xd] = -(pcVar2[0xd] ==
                      anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[0xd]);
      auVar35[0xe] = -(pcVar2[0xe] ==
                      anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[0xe]);
      auVar35[0xf] = -(cVar7 == anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971
                                [0xf]);
      if ((((((((((((((((auVar35 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                       (auVar35 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar35 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar35 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar35 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar35 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar35 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar35 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar35 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar35 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar35 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar35 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar35 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar35 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar35 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          cVar7 == anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[0xf]) break;
      puVar17 = pauVar9[1] + uVar16;
      uVar16 = uVar16 + 0x10;
    }
    if (local_b8 == 0) {
      (*(code *)PTR_reserve_rehash_001e7f10)(&local_c8,1,local_a8,1);
      cVar14 = (char)local_60;
    }
    uVar16 = (ulong)puVar10 & uStack_c0;
    auVar29 = *(undefined1 (*) [16])(*local_c8 + uVar16);
    uVar19 = (ushort)(SUB161(auVar29 >> 7,0) & 1) | (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
             (ushort)(byte)(auVar29[0xf] >> 7) << 0xf;
    uVar12 = (uint)uVar19;
    if (uVar19 == 0) {
      lVar18 = 0x10;
      do {
        uVar16 = uVar16 + lVar18 & uStack_c0;
        auVar29 = *(undefined1 (*) [16])(*local_c8 + uVar16);
        lVar18 = lVar18 + 0x10;
        uVar12 = (uint)(ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar29[0xf] >> 7) << 0xf);
      } while (uVar12 == 0);
    }
    uVar23 = 0;
    for (; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
      uVar23 = uVar23 + 1;
    }
    uVar20 = uVar23 + uVar16 & uStack_c0;
    bVar28 = (*local_c8)[uVar20];
    if (-1 < (char)bVar28) {
      auVar29 = *local_c8;
      uVar12 = 0;
      for (uVar23 = (uint)(ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(byte)(auVar29[0xf] >> 7) << 0xf); (uVar23 & 1) == 0;
          uVar23 = uVar23 >> 1 | 0x80000000) {
        uVar12 = uVar12 + 1;
      }
      uVar20 = (ulong)uVar12;
      bVar28 = (*local_c8)[uVar20];
    }
    pauVar9 = (undefined1 (*) [16])(uVar20 - 0x10 & uStack_c0);
    bVar25 = bVar25 >> 1;
    (*local_c8)[uVar20] = bVar25;
    (*pauVar9)[(long)local_c8[1]] = bVar25;
    uVar16 = (ulong)bVar28 & 0xffffffffffffff01;
    local_b8 = local_b8 - uVar16;
    local_c8[-1 - uVar20][0] = cVar14;
    *(undefined8 *)(local_c8[-1 - uVar20] + 8) = 0;
    lStack_b0 = lStack_b0 + 1;
    *(long *)(local_c8[-1 - uVar20] + 8) = *(long *)(local_c8[-1 - uVar20] + 8) + 1;
joined_r0x001929d4:
  } while (pcVar24 != pcVar1);
  if (uStack_c0 == 0) {
    uVar13 = 0;
    if (lStack_b0 == 0) goto LAB_00192cf6;
LAB_00192b61:
    auVar29 = *local_c8;
    uVar19 = (ushort)(SUB161(auVar29 >> 7,0) & 1) | (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
             (ushort)(byte)(auVar29[0xf] >> 7) << 0xf;
    pauVar11 = local_c8;
    pauVar21 = local_c8;
    while (pauVar21 = pauVar21 + 1, uVar19 == 0xffff) {
      auVar29 = *pauVar21;
      pauVar11 = pauVar11 + -0x10;
      uVar19 = (ushort)(SUB161(auVar29 >> 7,0) & 1) | (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
               (ushort)(byte)(auVar29[0xf] >> 7) << 0xf;
    }
    iVar5 = 0;
    uVar23 = ~(uint)uVar19;
    for (uVar12 = uVar23; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
      iVar5 = iVar5 + 1;
    }
    uVar20 = (ulong)*(byte *)((long)pauVar11 + (-0x10 - (ulong)(uint)(iVar5 << 4)));
    uVar26 = *(ulong *)((long)pauVar11 + (-8 - (ulong)(uint)(iVar5 << 4)));
    lVar18 = lStack_b0 + -1;
    if (lVar18 != 0) {
      uVar23 = uVar23 & -(uint)uVar19 - 2;
      uVar15 = uVar20;
      uVar22 = uVar26;
      do {
        local_60 = uVar22;
        if ((short)uVar23 == 0) {
          do {
            auVar29 = *pauVar21;
            pauVar11 = pauVar11 + -0x10;
            pauVar21 = pauVar21 + 1;
            uVar23 = (uint)(ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar29[0xf] >> 7) << 0xf);
          } while (uVar23 == 0xffff);
          uVar23 = ~uVar23;
        }
        iVar5 = 0;
        for (uVar12 = uVar23; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
          iVar5 = iVar5 + 1;
        }
        uVar23 = uVar23 - 1 & uVar23;
        uVar4 = *(ulong *)((long)pauVar11 + (-8 - (ulong)(uint)(iVar5 << 4)));
        uVar22 = local_60;
        if (local_60 < uVar4) {
          uVar22 = uVar4;
        }
        uVar20 = uVar15 & 0xff;
        puVar8 = &uStack_57;
        if (local_60 <= uVar4) {
          uVar26 = uVar4;
          uVar20 = (ulong)*(uint *)((long)pauVar11 + (-0x10 - (ulong)(uint)(iVar5 << 4)));
          puVar8 = auStack_3f;
        }
        uStack_58 = (undefined1)uVar15;
        uStack_53 = uStack_d4;
        uStack_57 = uStack_d8;
        uStack_d8 = *puVar8;
        uStack_d4 = (undefined3)((uint)*(undefined4 *)((long)puVar8 + 3) >> 8);
        lVar18 = lVar18 + -1;
        uVar15 = uVar20;
      } while (lVar18 != 0);
    }
    pauStack_80 = pauVar9;
    uStack_78 = uVar13;
    uStack_70 = uStack_c0;
    if (uVar16 != 0 && uStack_c0 != 0) {
      (*(code *)PTR___rust_dealloc_001e78c8)(pauVar9,uVar16,uVar13);
    }
    auVar29._8_4_ = (int)(uVar26 >> 0x20);
    auVar29._0_8_ = uVar26;
    auVar29._12_4_ = _UNK_00118144;
    dVar33 = auVar29._8_8_ - _UNK_00118018;
    dVar34 = dVar33 + ((double)CONCAT44(_s__00118140,(int)uVar26) - _s__00118010);
  }
  else {
    uVar16 = uStack_c0 * 0x11 + 0x21;
    pauVar9 = local_c8 + (-1 - uStack_c0);
    uVar13 = 0x10;
    if (lStack_b0 != 0) goto LAB_00192b61;
LAB_00192cf6:
    dVar34 = 0.0;
    dVar33 = 0.0;
    uVar20 = 4;
    if (uVar16 != 0 && uStack_c0 != 0) {
      (*(code *)PTR___rust_dealloc_001e78c8)();
      dVar34 = 0.0;
      dVar33 = 0.0;
    }
  }
  dVar34 = dVar34 / (double)lVar3;
  uVar16 = 4;
  if (local_98 < dVar34) {
    uVar16 = uVar20 & 0xff;
  }
  local_98 = (double)(-(ulong)(local_98 < dVar34) & (ulong)dVar34);
  uStack_90 = uStack_90 & (ulong)dVar33;
  if (*param_2 != 0) {
    (*(code *)PTR___rust_dealloc_001e78c8)(local_68,*param_2,1);
  }
LAB_00192dbc:
  return uVar16 & 0xffffffff;
}




// ELF address 0x0000000000091520; strategy_signal_maker_common::signal_trigger::TsQuantileCalculator::update

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
    (*(code *)PTR_grow_001e7f28)(param_3,&PTR_s_strategies_index_strategy_strate_001e3d80);
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
  auVar10._12_4_ = _UNK_00118144;
  param_3[0xb] = (ulong)((dVar8 + param_2) /
                        ((auVar10._8_8_ - _UNK_00118018) +
                        ((double)CONCAT44(_s__00118140,(int)uVar4) - _s__00118010)));
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
          auVar11._12_4_ = _UNK_00118144;
          dVar9 = (dVar1 - dVar8) /
                  ((auVar11._8_8_ - _UNK_00118018) +
                  ((double)CONCAT44(_s__00118140,(int)uVar4) - _s__00118010));
        }
      }
      param_3[0xb] = (ulong)dVar9;
      dVar1 = _DAT_00117f20;
      param_3[0xc] = (ulong)((double)param_3[0xc] - dVar8 * dVar8);
      param_3[(ulong)(dVar8 <= dVar1) + 0xe] =
           (ulong)((double)param_3[(ulong)(dVar8 <= dVar1) + 0xe] - dVar8);
      uVar4 = param_3[3];
    } while (uVar4 != 0);
  }
  return;
}




// ELF address 0x0000000000092ed0; strategy_signal_maker_common::signal_trigger::dynamic_pending_ts_ms

/* strategy_signal_maker_common::signal_trigger::dynamic_pending_ts_ms */

double __rustcall
strategy_signal_maker_common::signal_trigger::dynamic_pending_ts_ms
          (double param_1,double param_2,double param_3,double param_4,double param_5)

{
  double dVar1;
  
  if (((param_2 <= param_1) && (0.0 <= param_2)) && (0.0 <= param_3)) {
    dVar1 = param_3 - param_2;
    if (param_3 - param_2 <= DAT_00117ef8) {
      dVar1 = DAT_00117ef8;
    }
    dVar1 = (param_1 - param_2) / dVar1;
    if (DAT_00117f00 <= dVar1) {
      dVar1 = DAT_00117f00;
    }
    param_4 = param_4 + param_5 * dVar1;
  }
  return param_4;
}




// ELF address 0x000000000008f910; strategy_signal_maker_common::get_quote_price::get_quote_vol

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




// ELF address 0x000000000008f9a0; strategy_signal_maker_common::get_quote_price::get_quote_price

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
  
  local_98._0_8_ = (param_3 + param_4) * DAT_00117f50;
  local_88._8_8_ = in_XMM2_Qb;
  local_88._0_8_ = param_3;
  local_98._8_8_ = in_XMM2_Qb;
  local_78 = param_4;
  uStack_70 = in_XMM3_Qb;
  local_68 = param_5;
  local_38 = param_1;
  local_30 = param_2;
  local_28 = param_6;
  local_d0 = (double)(*(code *)PTR_round_001e79d0)
                               (SUB84(((param_3 - param_4) / (double)local_98._0_8_) * DAT_00117f50
                                      * _DAT_00117f18 * DAT_00117f40,0));
  local_d0 = local_d0 / DAT_00117f40;
  local_60 = local_d0;
                    /* WARNING: Switch is manually overridden */
  switch(param_8) {
  case 0:
    local_58 = (double)(*(code *)PTR_round_001e79d0)(SUB84((local_30 - *param_9) * DAT_00117f48,0));
    local_58 = local_58 / DAT_00117f48;
    if (local_60 < local_58) {
      dVar20 = (local_58 - local_60) * DAT_00117fc8;
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
           ((double)(uVar10 & (ulong)local_28 | ~uVar10 & CONCAT44(uVar12,uVar11)) + DAT_00117f00);
      local_88._12_4_ = uVar13;
      local_e0 = &local_58;
LAB_0018fcd0:
      local_f0 = &local_d0;
      local_d8 = PTR_fmt_001e7a78;
      local_c8 = &PTR_s_taker__001e3d60;
      local_c0 = 2;
      local_a8 = 0;
      local_b8 = &local_f0;
      local_b0 = 2;
      local_e8 = PTR_fmt_001e7a78;
      (*(code *)PTR_format_inner_001e79c8)(param_7 + 2,&local_c8);
      uVar9 = 0;
      goto LAB_00190144;
    }
    if (local_58 <= 0.0) {
      dVar14 = local_78 + DAT_00117f08;
      dVar19 = (double)local_88._0_8_ + _DAT_00117ed8;
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
      local_e8 = PTR_fmt_001e7a78;
      local_e0 = &local_58;
LAB_001900f3:
      local_f0 = &local_d0;
      local_c8 = &PTR_s_maker__e__001e3d20;
      local_c0 = 2;
      local_a8 = 0;
      local_b8 = &local_f0;
      local_b0 = 2;
      PTR_fmt_001e7a78 = local_e8;
      local_d8 = local_e8;
      (*(code *)PTR_format_inner_001e79c8)(param_7 + 2,&local_c8);
      uVar9 = 1;
      local_88._0_4_ = local_98._0_4_;
      local_88._4_4_ = local_98._4_4_;
      goto LAB_00190144;
    }
    local_e8 = PTR_fmt_001e7a78;
    local_e0 = &local_58;
    break;
  case 1:
    local_50 = (double)(*(code *)PTR_round_001e79d0)
                                 (SUB84((param_9[1] - local_38) * DAT_00117f48,0));
    local_50 = local_50 / DAT_00117f48;
    if (local_60 < local_50) {
      dVar20 = (local_50 - local_60) * DAT_00117fc8;
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
                 (DAT_00117f00 -
                 (double)(uVar10 & (ulong)local_28 | ~uVar10 & CONCAT44(uVar12,uVar11)));
      local_e0 = &local_50;
LAB_0018fdff:
      local_f0 = &local_d0;
      local_d8 = PTR_fmt_001e7a78;
      local_c8 = &PTR_s_taker__001e3d60;
      local_c0 = 2;
      local_a8 = 0;
      local_b8 = &local_f0;
      local_b0 = 2;
      local_e8 = PTR_fmt_001e7a78;
      (*(code *)PTR_format_inner_001e79c8)(param_7 + 2,&local_c8);
      uVar9 = 0;
      local_88._0_4_ = (undefined4)local_78;
      local_88._4_4_ = local_78._4_4_;
      goto LAB_00190144;
    }
    if (local_50 <= 0.0) {
      dVar19 = (double)local_88._0_8_ + _DAT_00117ed8;
      dVar14 = local_78 + DAT_00117f08;
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
      local_e8 = PTR_fmt_001e7a78;
      local_e0 = &local_50;
      goto LAB_001900f3;
    }
    local_e8 = PTR_fmt_001e7a78;
    local_e0 = &local_50;
    break;
  case 2:
    local_48 = (double)(*(code *)PTR_round_001e79d0)
                                 (SUB84((param_9[2] - local_38) * DAT_00117f48,0));
    local_48 = local_48 / DAT_00117f48;
    if (local_60 < local_48) {
      dVar20 = (local_48 - local_60) * DAT_00117fc8;
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
                 (DAT_00117f00 -
                 (double)(uVar10 & (ulong)local_28 | ~uVar10 & CONCAT44(uVar12,uVar11)));
      local_e0 = &local_48;
      goto LAB_0018fdff;
    }
    if (local_48 <= 0.0) {
      dVar19 = (double)local_88._0_8_ + _DAT_00117ed8;
      dVar14 = local_78 + DAT_00117f08;
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
      local_e8 = PTR_fmt_001e7a78;
      local_e0 = &local_48;
      goto LAB_001900f3;
    }
    local_e8 = PTR_fmt_001e7a78;
    local_e0 = &local_48;
    break;
  case 3:
    local_40 = (double)(*(code *)PTR_round_001e79d0)
                                 (SUB84((local_30 - param_9[3]) * DAT_00117f48,0));
    local_40 = local_40 / DAT_00117f48;
    if (local_60 < local_40) {
      dVar20 = (local_40 - local_60) * DAT_00117fc8;
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
           ((double)(uVar10 & (ulong)local_28 | ~uVar10 & CONCAT44(uVar12,uVar11)) + DAT_00117f00);
      local_88._12_4_ = uVar13;
      local_e0 = &local_40;
      goto LAB_0018fcd0;
    }
    if (local_40 <= 0.0) {
      dVar14 = local_78 + DAT_00117f08;
      dVar19 = (double)local_88._0_8_ + _DAT_00117ed8;
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
      local_e8 = PTR_fmt_001e7a78;
      local_e0 = &local_40;
      goto LAB_001900f3;
    }
    local_e8 = PTR_fmt_001e7a78;
    local_e0 = &local_40;
  }
  local_f0 = &local_d0;
  local_c8 = &PTR_s_mid__001e3d40;
  local_c0 = 2;
  local_a8 = 0;
  local_b8 = &local_f0;
  local_b0 = 2;
  PTR_fmt_001e7a78 = local_e8;
  local_d8 = local_e8;
  (*(code *)PTR_format_inner_001e79c8)(param_7 + 2,&local_c8);
  uVar9 = 2;
  local_88._0_4_ = local_98._0_4_;
  local_88._4_4_ = local_98._4_4_;
LAB_00190144:
  *param_7 = CONCAT44(local_88._4_4_,local_88._0_4_);
  *(undefined1 *)(param_7 + 1) = uVar9;
  return param_7;
}




// ELF address 0x000000000003fce0; <strategy_sm4::StrategySM4 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin

/* WARNING: Removing unreachable block (ram,0x0013fd5f) */
/* WARNING: Removing unreachable block (ram,0x0013fdc2) */
/* WARNING: Removing unreachable block (ram,0x0013fdc6) */
/* WARNING: Removing unreachable block (ram,0x0013fdc8) */
/* WARNING: Removing unreachable block (ram,0x00140458) */
/* WARNING: Removing unreachable block (ram,0x0013fdd3) */
/* WARNING: Removing unreachable block (ram,0x0013fe88) */
/* WARNING: Removing unreachable block (ram,0x0013fe9b) */
/* WARNING: Removing unreachable block (ram,0x0013fea8) */
/* WARNING: Removing unreachable block (ram,0x0013fead) */
/* WARNING: Removing unreachable block (ram,0x0013fec0) */
/* WARNING: Removing unreachable block (ram,0x0013fed9) */
/* WARNING: Removing unreachable block (ram,0x0013fefd) */
/* WARNING: Removing unreachable block (ram,0x0013ff07) */
/* WARNING: Removing unreachable block (ram,0x0013fef0) */
/* WARNING: Removing unreachable block (ram,0x001401ff) */
/* WARNING: Removing unreachable block (ram,0x00140210) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _<strategy_sm4::StrategySM4 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin */

undefined8 __rustcall
_<strategy_sm4::StrategySM4_as_future_backtest_sdk::plugin::StrategyPlugin>::on_begin(long *param_1)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  undefined1 auVar5 [16];
  double dVar6;
  undefined *puVar7;
  long lVar8;
  long *plVar9;
  int iVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar13 [16];
  undefined8 extraout_XMM0_Qb_02;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  long local_4a8;
  long local_4a0;
  long local_498;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined1 local_458 [24];
  long *local_440;
  long local_438;
  long lStack_430;
  long local_428;
  long lStack_420;
  long local_418;
  long lStack_410;
  undefined4 local_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  long local_3f8;
  long lStack_3f0;
  undefined8 local_3e0;
  double local_3d8;
  long local_3d0;
  undefined8 local_3c8;
  undefined8 local_3c0;
  double local_3a8;
  double dStack_3a0;
  double local_398;
  double dStack_390;
  undefined8 local_388;
  undefined8 local_378;
  undefined8 local_368;
  double local_358;
  double dStack_350;
  double local_348;
  double dStack_340;
  double local_338;
  double dStack_330;
  undefined1 local_308 [8];
  long lStack_300;
  undefined1 local_2f8 [192];
  double local_238;
  double dStack_230;
  double local_228;
  double dStack_220;
  undefined8 local_1d0;
  double local_1c0;
  int local_1a8;
  byte local_198;
  undefined7 uStack_197;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long local_170;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  long lStack_158;
  long local_150;
  
  (*(code *)PTR_custom_config_001e79b8)(&local_3d0);
                    /* try { // try from 0013fd12 to 0013fd40 has its CatchHandler @ 001404dd */
  _<toml::de::Deserializer_as_serde_core::de::Deserializer>::deserialize_struct
            (&local_198,local_3c8,local_3c0,"SM4Params",9,
             &PTR_s_signal_modepv1_alphacost_alphasi_001e1488,0x27);
  lVar11 = lStack_190;
  local_440 = param_1;
  (*(code *)PTR_memcpy_001e7928)(local_2f8,&lStack_188,0x158);
  puVar7 = PTR_round_001e79d0;
  lStack_300 = lVar11;
  local_398 = local_238;
  dStack_390 = dStack_230;
  local_348 = local_238;
  dStack_340 = dStack_230;
  local_3a8 = local_228;
  dStack_3a0 = dStack_220;
  local_338 = local_228;
  dStack_330 = dStack_220;
  local_3e0 = local_1d0;
  local_4a8 = 0;
  local_4a0 = 8;
  local_498 = 0;
  if (1 < local_1a8 + 1) {
    local_3d8 = local_1c0;
    iVar10 = 1;
    lVar11 = 0;
    auVar16._8_8_ = _UNK_00117fe8;
    auVar16._0_8_ = _DAT_00117fe0;
    do {
      lVar8 = local_498;
      dStack_350 = (double)iVar10 * local_3d8;
      local_458._8_4_ = SUB84(dStack_350,0);
      local_458._0_8_ = dStack_350;
      local_458._12_4_ = (int)((ulong)dStack_350 >> 0x20);
      local_468 = local_398 + dStack_350;
      uStack_460 = dStack_390 + dStack_350;
      local_358 = local_398 - dStack_350;
      dStack_350 = dStack_390 - dStack_350;
      local_488 = local_468 * auVar16._0_8_;
      uStack_480 = dStack_350 * auVar16._8_8_;
      local_368 = (*(code *)puVar7)();
      auVar1._4_8_ = extraout_XMM0_Qb;
      auVar1._0_4_ = local_488._4_4_;
      auVar20._0_8_ = auVar1._0_8_ << 0x20;
      auVar20._8_4_ = (undefined4)uStack_480;
      auVar20._12_4_ = uStack_480._4_4_;
      local_378 = (*(code *)puVar7)(auVar20._8_8_);
      local_488 = local_3a8 - (double)local_458._0_8_;
      uStack_480 = dStack_3a0 - (double)local_458._8_8_;
      local_458._8_8_ = (double)local_458._8_8_ + dStack_3a0;
      local_458._0_8_ = (double)local_458._0_8_ + local_3a8;
      local_478 = local_488 * _DAT_00117fe0;
      uStack_470 = (double)local_458._8_8_ * _UNK_00117fe8;
      local_388 = (*(code *)puVar7)();
      auVar2._4_8_ = extraout_XMM0_Qb_00;
      auVar2._0_4_ = local_478._4_4_;
      auVar18._0_8_ = auVar2._0_8_ << 0x20;
      auVar18._8_4_ = (undefined4)uStack_470;
      auVar18._12_4_ = uStack_470._4_4_;
      local_478 = (double)(*(code *)puVar7)(auVar18._8_8_);
      if (lVar8 == local_4a8) {
                    /* try { // try from 0014011d to 0014012b has its CatchHandler @ 001404fe */
        alloc::raw_vec::RawVec<T,A>::grow_one
                  (&local_4a8,&PTR_s_strategies_index_strategy_strate_001e16f8);
      }
      dVar6 = _UNK_00117fe8;
      local_468 = _DAT_00117fe0;
      auVar15._8_8_ = local_378;
      auVar15._0_8_ = local_368;
      auVar5._8_8_ = _UNK_00117fe8;
      auVar5._0_8_ = _DAT_00117fe0;
      auVar16 = divpd(auVar15,auVar5);
      auVar19._8_8_ = local_478;
      auVar19._0_8_ = local_388;
      auVar20 = divpd(auVar19,auVar5);
      *(undefined1 (*) [16])(local_4a0 + lVar11) = auVar16;
      *(undefined1 (*) [16])(local_4a0 + 0x10 + lVar11) = auVar20;
      local_468 = local_358 * local_468;
      uStack_460 = uStack_460 * dVar6;
      local_498 = lVar8 + 1;
      local_478 = (double)(*(code *)puVar7)(local_468);
      auVar3._4_8_ = extraout_XMM0_Qb_01;
      auVar3._0_4_ = local_468._4_4_;
      auVar13._0_8_ = auVar3._0_8_ << 0x20;
      auVar13._8_4_ = (undefined4)uStack_460;
      auVar13._12_4_ = uStack_460._4_4_;
      local_468 = (double)(*(code *)puVar7)(auVar13._8_8_);
      local_488 = (double)local_458._0_8_ * _DAT_00117fe0;
      uStack_480 = uStack_480 * _UNK_00117fe8;
      local_458._0_8_ = (*(code *)puVar7)();
      local_458._8_8_ = extraout_XMM0_Qb_02;
      auVar4._4_8_ = extraout_XMM0_Qb_02;
      auVar4._0_4_ = local_488._4_4_;
      auVar14._0_8_ = auVar4._0_8_ << 0x20;
      auVar14._8_4_ = (undefined4)uStack_480;
      auVar14._12_4_ = uStack_480._4_4_;
      local_488 = (double)(*(code *)puVar7)(auVar14._8_8_);
      if (lVar8 + 1 == local_4a8) {
                    /* try { // try from 001401eb to 001401f9 has its CatchHandler @ 001404fe */
        alloc::raw_vec::RawVec<T,A>::grow_one
                  (&local_4a8,&PTR_s_strategies_index_strategy_strate_001e1710);
      }
      iVar10 = iVar10 + 1;
      auVar12._8_8_ = local_468;
      auVar12._0_8_ = local_478;
      auVar16._8_8_ = _UNK_00117fe8;
      auVar16._0_8_ = _DAT_00117fe0;
      auVar20 = divpd(auVar12,auVar16);
      auVar17._8_8_ = local_488;
      auVar17._0_8_ = local_458._0_8_;
      auVar18 = divpd(auVar17,auVar16);
      *(undefined1 (*) [16])(local_4a0 + 0x20 + lVar11) = auVar20;
      *(undefined1 (*) [16])(local_4a0 + 0x30 + lVar11) = auVar18;
      local_498 = lVar8 + 2;
      lVar11 = lVar11 + 0x40;
    } while (iVar10 - local_1a8 != 1);
  }
  local_428 = local_498;
  local_438 = local_4a8;
  lStack_430 = local_4a0;
                    /* try { // try from 00140252 to 0014027c has its CatchHandler @ 001404d8 */
  strategy_sm4::signal_pairs_tree::SignalPairsTree::new(local_3e0,&local_198,&local_348,&local_438);
  plVar9 = local_440;
  local_438 = CONCAT71(uStack_197,local_198);
  lStack_430 = lStack_190;
  local_428 = lStack_188;
  lStack_420 = lStack_180;
  local_418 = lStack_178;
  lStack_410 = local_170;
  local_408 = uStack_168;
  uStack_404 = uStack_164;
  uStack_400 = local_160;
  uStack_3fc = uStack_15c;
  local_3f8 = lStack_158;
  lStack_3f0 = local_150;
  if (*local_440 != 0) {
                    /* try { // try from 001402e6 to 001402ea has its CatchHandler @ 00140474 */
    _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop(local_440 + 5);
                    /* try { // try from 001402ef to 001402f3 has its CatchHandler @ 0014046f */
    _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop(plVar9 + 8);
  }
  *plVar9 = 1;
  plVar9[1] = local_438;
  plVar9[2] = lStack_430;
  plVar9[3] = local_428;
  plVar9[4] = lStack_420;
  plVar9[5] = local_418;
  plVar9[6] = lStack_410;
  *(undefined4 *)(plVar9 + 7) = local_408;
  *(undefined4 *)((long)plVar9 + 0x3c) = uStack_404;
  *(undefined4 *)(plVar9 + 8) = uStack_400;
  *(undefined4 *)((long)plVar9 + 0x44) = uStack_3fc;
  plVar9[9] = local_3f8;
  plVar9[10] = lStack_3f0;
                    /* try { // try from 0014033f to 00140358 has its CatchHandler @ 001404d8 */
  (*(code *)PTR__var_001e79d8)(&local_198,"SM4_DEBUG",9);
  *(byte *)(plVar9 + 0x3e) = local_198 ^ 1;
  if (((local_198 & lStack_190 == -0x8000000000000000) == 0) && (lStack_190 != 0)) {
    (*(code *)PTR___rust_dealloc_001e78c8)(lStack_188,lStack_190,1);
  }
  lVar11 = plVar9[0xb];
  if (lVar11 != -0x8000000000000000) {
    if (lVar11 != 0) {
      (*(code *)PTR___rust_dealloc_001e78c8)(plVar9[0xc],lVar11,1);
    }
    if (plVar9[0xe] != 0) {
      (*(code *)PTR___rust_dealloc_001e78c8)(plVar9[0xf],plVar9[0xe],1);
    }
    if (plVar9[0x11] != 0) {
      (*(code *)PTR___rust_dealloc_001e78c8)(plVar9[0x12],plVar9[0x11] << 3,8);
    }
    if (plVar9[0x14] != 0) {
      (*(code *)PTR___rust_dealloc_001e78c8)(plVar9[0x15],plVar9[0x14],1);
    }
  }
  (*(code *)PTR_memcpy_001e7928)(plVar9 + 0xb,local_308,0x168);
  if (local_3d0 != 0) {
    (*(code *)PTR___rust_dealloc_001e78c8)(local_3c8,local_3d0,1);
  }
  return 0;
}




// ELF address 0x0000000000040560; <strategy_sm4::StrategySM4 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _<strategy_sm4::StrategySM4 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal */

double * __rustcall
_<strategy_sm4::StrategySM4_as_future_backtest_sdk::plugin::StrategyPlugin>::on_signal
          (int *param_1,long param_2,undefined8 param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  undefined *puVar7;
  byte bVar8;
  long lVar9;
  long lVar10;
  char cVar11;
  undefined1 uVar12;
  char cVar13;
  undefined1 uVar14;
  int iVar15;
  long lVar16;
  double *pdVar17;
  ulong uVar18;
  long extraout_RDX;
  long extraout_RDX_00;
  undefined8 *puVar19;
  undefined **ppuVar20;
  undefined8 uVar21;
  long lVar22;
  bool bVar23;
  ulong uVar24;
  double dVar25;
  undefined8 extraout_XMM0_Qa;
  double dVar26;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar27;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double extraout_XMM0_Qb;
  double extraout_XMM0_Qb_00;
  double extraout_XMM0_Qb_01;
  double extraout_XMM0_Qb_02;
  double extraout_XMM1_Qa;
  double extraout_XMM1_Qb;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  char local_831;
  undefined8 ******local_830;
  undefined8 local_828;
  undefined8 local_820;
  double local_818;
  double dStack_810;
  undefined8 ******local_808;
  double *pdStack_800;
  undefined8 *******local_7f8;
  undefined8 ******local_7f0;
  double *pdStack_7e8;
  undefined8 *******local_7e0;
  double local_7d8;
  double dStack_7d0;
  undefined8 *******pppppppuStack_7c8;
  undefined8 ******ppppppuStack_7c0;
  double *pdStack_7b8;
  undefined8 *******local_7a8;
  int *local_7a0;
  double *local_798;
  double dStack_790;
  undefined8 ******local_788;
  undefined *puStack_780;
  undefined8 *******local_778;
  undefined8 ******ppppppuStack_770;
  double *pdStack_768;
  undefined8 *******pppppppuStack_760;
  undefined8 ******local_758;
  double dStack_750;
  undefined *local_748;
  undefined8 uStack_740;
  double local_738;
  undefined8 uStack_730;
  double adStack_728 [5];
  double dStack_700;
  undefined8 local_6f8;
  undefined8 uStack_6f0;
  undefined8 *****local_6e0;
  undefined8 ******local_6d8;
  undefined *local_6d0;
  undefined8 *******pppppppuStack_6c8;
  undefined *puStack_6c0;
  double local_6b8;
  undefined8 uStack_6b0;
  long local_6a0;
  undefined8 *****local_698;
  long local_690;
  undefined8 local_688;
  double local_678;
  long local_670;
  long local_668;
  long local_660;
  undefined8 local_658;
  undefined8 uStack_650;
  undefined8 ******local_648;
  double *pdStack_640;
  undefined8 *******local_638;
  long local_630;
  long *plStack_628;
  long local_620;
  double local_618;
  long local_610;
  double local_608;
  undefined8 ******local_600;
  double *pdStack_5f8;
  undefined8 *******local_5f0;
  double local_5e8;
  double dStack_5e0;
  double local_5d8;
  undefined8 uStack_5d0;
  undefined *local_5c8;
  undefined8 uStack_5c0;
  undefined8 ******local_5b8;
  double dStack_5b0;
  double local_5a8;
  double dStack_5a0;
  double local_598;
  double dStack_590;
  double *local_588;
  double dStack_580;
  double local_578;
  undefined8 uStack_570;
  undefined8 local_568;
  undefined8 uStack_560;
  undefined8 ******local_558;
  undefined *puStack_550;
  undefined8 ******local_548;
  code *pcStack_540;
  undefined8 *local_538;
  undefined *puStack_530;
  double *local_528;
  undefined8 *******pppppppuStack_520;
  double local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  undefined8 uStack_500;
  double local_4f8;
  undefined8 uStack_4f0;
  int local_4e8;
  undefined2 local_4e4;
  undefined8 ******local_4d8;
  double *pdStack_4d0;
  undefined8 *******local_4c8;
  undefined8 ******ppppppuStack_4c0;
  double *local_4b8;
  undefined8 *******pppppppuStack_4b0;
  undefined8 *local_4a8;
  undefined *local_4a0;
  undefined8 ******local_498;
  undefined *local_490;
  undefined8 *******local_488;
  undefined *local_480;
  undefined8 ******local_478;
  undefined *local_470;
  undefined8 ******local_468;
  code *local_460;
  double dStack_458;
  double dStack_450;
  double *local_3c8;
  undefined8 *******pppppppuStack_3c0;
  undefined8 *local_3b8;
  undefined *puStack_3b0;
  undefined8 ******local_3a8;
  code *pcStack_3a0;
  undefined8 ******local_398;
  undefined *puStack_390;
  undefined8 *******local_388;
  undefined8 ******ppppppuStack_380;
  double *local_378;
  undefined8 *******pppppppuStack_370;
  undefined8 ******local_368;
  long local_360;
  long local_358;
  long local_350;
  double local_348;
  undefined8 uStack_340;
  double local_338;
  undefined4 local_330;
  undefined1 local_32c;
  undefined1 local_32b;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  double dStack_310;
  double dStack_308;
  undefined8 ******ppppppuStack_300;
  double dStack_2f8;
  undefined *puStack_2f0;
  undefined8 ******ppppppuStack_2e8;
  undefined1 uStack_2e0;
  char cStack_2df;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  double dStack_2c0;
  double dStack_2b8;
  undefined *puStack_2b0;
  double dStack_2a8;
  undefined *puStack_2a0;
  undefined8 ******ppppppuStack_298;
  undefined1 uStack_290;
  byte bStack_28f;
  undefined8 local_288;
  undefined8 uStack_280;
  double local_278;
  undefined8 uStack_270;
  undefined8 *******local_268;
  undefined8 ******ppppppuStack_260;
  double *local_258;
  undefined8 *******pppppppuStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  double dStack_230;
  double dStack_228;
  undefined *puStack_220;
  double dStack_218;
  undefined8 ******ppppppuStack_210;
  undefined8 ******ppppppuStack_208;
  undefined2 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  double dStack_1e0;
  double dStack_1d8;
  undefined8 ******ppppppuStack_1d0;
  double dStack_1c8;
  undefined8 *******pppppppuStack_1c0;
  undefined8 ******ppppppuStack_1b8;
  undefined2 uStack_1b0;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  byte local_140;
  undefined7 uStack_13f;
  long *plStack_138;
  byte local_130;
  undefined7 uStack_12f;
  double local_128;
  long local_120;
  undefined8 local_118;
  undefined *local_f8;
  double dStack_c8;
  undefined8 ******local_a8;
  double dStack_78;
  
  lVar16 = (*(code *)PTR_para_001e79e8)(param_3);
  uVar14 = *(undefined1 *)(lVar16 + 0x34);
  local_818 = *(double *)(lVar16 + 0x28);
  uVar12 = *(undefined1 *)(lVar16 + 0x35);
  local_738 = *(double *)(lVar16 + 0x18);
  uStack_730 = *(undefined8 *)(lVar16 + 0x20);
  dVar25 = *(double *)(lVar16 + 0x30);
  _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone
            (&local_360,lVar16,&PTR_s__hdd1_lyt_d_FutureCommodity_Mult_001e1760);
  local_330 = SUB84(dVar25,0);
  local_7a8 = (undefined8 *******)CONCAT71(local_7a8._1_7_,uVar14);
  local_348 = local_738;
  uStack_340 = uStack_730;
  local_338 = local_818;
  local_32c = uVar14;
  local_32b = uVar12;
  if (*(long *)(param_1 + 0x16) == -0x8000000000000000) {
                    /* try { // try from 00140cf1 to 00140d09 has its CatchHandler @ 00143218 */
    (*(code *)PTR_expect_failed_001e7a20)
              ("on_begin first",0xe,&PTR_s_strategies_index_strategy_strate_001e1778);
  }
  else {
                    /* try { // try from 00140616 to 0014062b has its CatchHandler @ 00143218 */
    (*(code *)PTR_clone_001e79f0)
              (&local_808,param_1 + 0x16,&PTR_s_strategies_index_strategy_strate_001e1a28);
    local_818 = *(double *)(param_1 + 0x2e);
    dStack_810 = *(double *)(param_1 + 0x30);
                    /* try { // try from 0014063f to 00140653 has its CatchHandler @ 00143184 */
    (*(code *)PTR_clone_001e79f0)
              (&local_140,param_1 + 0x1c,&PTR_s_strategies_index_strategy_strate_001e1a28);
    dVar39 = *(double *)(param_1 + 0x26);
    uVar18 = (long)dVar39 * 8;
    if (uVar18 < 0x7ffffffffffffff9 && (ulong)dVar39 >> 0x3d == 0) {
      local_6f8 = *(double *)(param_1 + 0x32);
      uStack_6f0 = *(undefined8 *)(param_1 + 0x34);
      uVar27 = *(undefined8 *)(param_1 + 0x24);
      local_7a0 = param_1;
      local_6a0 = param_2;
      if (uVar18 == 0) {
        lVar16 = 8;
        dVar38 = 0.0;
LAB_001406f0:
        (*(code *)PTR_memcpy_001e7928)(lVar16,uVar27,uVar18);
        piVar1 = local_7a0;
        local_748 = *(undefined **)(local_7a0 + 0x36);
        uStack_740 = *(undefined8 *)(local_7a0 + 0x38);
        local_758 = *(undefined8 *******)(local_7a0 + 0x3a);
        dStack_750 = *(double *)(local_7a0 + 0x3c);
        local_7d8 = *(double *)(local_7a0 + 0x3e);
        dStack_7d0 = *(double *)(local_7a0 + 0x40);
        adStack_728[4] = *(double *)(local_7a0 + 0x42);
        dStack_700 = *(double *)(local_7a0 + 0x44);
        local_798 = *(double **)(local_7a0 + 0x46);
        dStack_790 = *(double *)(local_7a0 + 0x48);
        local_6b8 = *(double *)(local_7a0 + 0x4a);
        uStack_6b0 = *(undefined8 *)(local_7a0 + 0x4c);
        local_658 = *(undefined8 *)(local_7a0 + 0x4e);
        uStack_650 = *(undefined8 *)(local_7a0 + 0x50);
        local_398 = *(undefined8 *******)(local_7a0 + 0x52);
        puStack_390 = *(undefined **)(local_7a0 + 0x54);
        local_3a8 = *(undefined8 *******)(local_7a0 + 0x56);
        pcStack_3a0 = *(code **)(local_7a0 + 0x58);
        local_3b8 = *(undefined8 **)(local_7a0 + 0x5a);
        puStack_3b0 = *(undefined **)(local_7a0 + 0x5c);
        local_3c8 = *(double **)(local_7a0 + 0x5e);
        pppppppuStack_3c0 = *(undefined8 ********)(local_7a0 + 0x60);
        local_278 = *(double *)(local_7a0 + 0x62);
        uStack_270 = *(undefined8 *)(local_7a0 + 100);
        local_288 = *(undefined8 *)(local_7a0 + 0x66);
        uStack_280 = *(undefined8 *)(local_7a0 + 0x68);
        iVar15 = local_7a0[0x6e];
                    /* try { // try from 001407e4 to 001407f8 has its CatchHandler @ 0014315e */
        (*(code *)PTR_clone_001e79f0)
                  (&local_4d8,local_7a0 + 0x28,&PTR_s_strategies_index_strategy_strate_001e1a28);
        lVar4 = local_6a0;
        local_4e4 = (undefined2)piVar1[0x6f];
        local_648 = local_808;
        pdStack_640 = pdStack_800;
        local_638 = local_7f8;
        local_5e8 = local_818;
        dStack_5e0 = dStack_810;
        local_630 = CONCAT71(uStack_13f,local_140);
        plStack_628 = plStack_138;
        local_620 = CONCAT71(uStack_12f,local_130);
        local_5d8 = local_6f8;
        uStack_5d0 = uStack_6f0;
        local_5c8 = local_748;
        uStack_5c0 = uStack_740;
        local_5b8 = local_758;
        dStack_5b0 = dStack_750;
        local_5a8 = local_7d8;
        dStack_5a0 = dStack_7d0;
        local_598 = adStack_728[4];
        dStack_590 = dStack_700;
        local_588 = local_798;
        dStack_580 = dStack_790;
        local_578 = local_6b8;
        uStack_570 = uStack_6b0;
        local_568 = local_658;
        uStack_560 = uStack_650;
        local_558 = local_398;
        puStack_550 = puStack_390;
        local_548 = local_3a8;
        pcStack_540 = pcStack_3a0;
        local_538 = local_3b8;
        puStack_530 = puStack_3b0;
        local_528 = local_3c8;
        pppppppuStack_520 = pppppppuStack_3c0;
        local_518 = local_278;
        uStack_510 = uStack_270;
        local_508 = local_288;
        uStack_500 = uStack_280;
        local_5f0 = local_4c8;
        local_600 = local_4d8;
        pdStack_5f8 = pdStack_4d0;
        local_4f8 = *(double *)(piVar1 + 0x6a);
        uStack_4f0 = *(undefined8 *)(piVar1 + 0x6c);
        local_618 = dVar38;
        local_610 = lVar16;
        local_608 = dVar39;
        local_4e8 = iVar15;
        if (((local_4c8 == (undefined8 *******)0x0) ||
            (*(undefined8 ********)(local_6a0 + 0x58) != local_4c8)) ||
           (iVar15 = (*(code *)PTR_bcmp_001e7990)(*(undefined8 *)(local_6a0 + 0x50),pdStack_4d0),
           iVar15 != 0)) {
          pdVar17 = (double *)0x0;
        }
        else {
                    /* try { // try from 00140ab7 to 00140ac9 has its CatchHandler @ 00143137 */
          (*(code *)PTR_trade_codes_001e79f8)(&local_670,param_3);
          lVar10 = local_660;
          lVar16 = local_668;
          if (local_660 == 0) {
            pdVar17 = (double *)0x0;
          }
          else {
            uStack_6f0 = 0;
            local_818 = (double)(lVar4 + 0x48);
            uVar21 = *(undefined8 *)(lVar4 + 8);
            lVar4 = *(long *)(lVar4 + 0x10);
            lVar6 = local_660 * 0x18;
            lVar22 = 0;
            local_6f8 = dVar25;
            do {
              if ((*(long *)(lVar16 + 0x10 + lVar22) == lVar4) &&
                 (iVar15 = (*(code *)PTR_bcmp_001e7990)
                                     (*(undefined8 *)(lVar16 + 8 + lVar22),uVar21,lVar4),
                 lVar9 = local_6a0, iVar15 == 0)) {
                cVar13 = *(char *)(local_6a0 + 0x94);
                    /* try { // try from 00140b5a to 00140b8a has its CatchHandler @ 0014312f */
                (*(code *)PTR_inst_start_time_sec_001e7a00)(param_3);
                cVar11 = (*(code *)PTR_is_trade_start_001e7a08)(param_3,cVar13);
                if (cVar11 != '\0') {
                  cVar11 = (*(code *)PTR_is_trade_end_001e7a10)(param_3,cVar13);
                  if (cVar11 != '\0') {
                    if (cVar13 == '\0') {
                      if ((char)local_7a8 != '\0') goto LAB_00140cac;
                    }
                    else if ((local_6f8._2_2_ >> 8 & 1) != 0) {
LAB_00140cac:
                    /* try { // try from 00140cac to 00140ccb has its CatchHandler @ 0014312f */
                      pdVar17 = (double *)
                                (*(code *)PTR_all_in_001e7a18)
                                          (param_3,cVar13,SUB84(local_6f8,0) & 1);
                      local_660 = lVar10;
                      goto LAB_00140c31;
                    }
                  }
                  if (local_638 == (undefined8 *******)0x3) {
                    if (*(char *)((long)pdStack_640 + 2) == '2' && *(short *)pdStack_640 == 0x5650)
                    {
                      local_6f8 = *(double *)(lVar9 + 0x78);
                      uVar14 = 1;
                    }
                    else {
                      if (*(char *)((long)pdStack_640 + 2) == '3' && *(short *)pdStack_640 == 0x5650
                         ) {
                        uVar14 = 2;
                        goto LAB_00140c10;
                      }
                      if (*(char *)((long)pdStack_640 + 2) != '4' || *(short *)pdStack_640 != 0x5650
                         ) goto LAB_00140c0e;
                      local_6f8 = *(double *)(lVar9 + 0x70);
                      uVar14 = 3;
                    }
                  }
                  else {
LAB_00140c0e:
                    uVar14 = 0;
LAB_00140c10:
                    local_6f8 = *(double *)(lVar9 + 0x70) * local_5e8;
                  }
                    /* try { // try from 00140d22 to 00140d67 has its CatchHandler @ 0014312f */
                  local_7a8 = (undefined8 *******)(*(code *)PTR_time_sec_001e7a28)(param_3);
                  dVar25 = (double)(*(code *)PTR_ts_ms_001e7a30)(param_3);
                  local_698 = (undefined8 *****)(dVar25 + local_738);
                  (*(code *)PTR_clone_001e79f0)
                            (&local_830,lVar9,&PTR_s_strategies_index_strategy_strate_001e1790);
                    /* try { // try from 00140d68 to 00140d81 has its CatchHandler @ 001430e9 */
                  (*(code *)PTR_clone_001e79f0)
                            (&local_690,local_818,&PTR_s_strategies_index_strategy_strate_001e17a8);
                    /* try { // try from 00140d8c to 00140d9e has its CatchHandler @ 001430e1 */
                  (*(code *)PTR_depth_001e7a38)(&local_4d8,param_3,local_828,local_820);
                  if ((int)local_4d8 == 2) {
                    pdVar17 = (double *)0x0;
                  }
                  else {
                    (*(code *)PTR_memcpy_001e7928)(&local_140,&local_4d8,0x108);
                    if ((((local_140 & 1) == 0) || ((local_130 & 1) == 0)) ||
                       ((double)((ulong)(((double)plStack_138 - local_128) /
                                        ((double)plStack_138 + local_128)) & _DAT_00117fd0) <=
                        DAT_00117f38)) {
                    /* try { // try from 00140e26 to 0014104b has its CatchHandler @ 0014318c */
                      local_6e0 = (undefined8 *****)
                                  (*(code *)PTR_spread_bp_001e7a40)(param_3,local_828,local_820);
                      local_748 = local_f8;
                      local_758 = local_a8;
                      local_798 = (double *)
                                  (*(code *)PTR_price_step_001e7a48)(param_3,local_828,local_820);
                      adStack_728[4] =
                           (double)(*(code *)PTR_vol_step_001e7a50)(param_3,local_828,local_820);
                      local_6b8 = (double)(*(code *)PTR_contract_mult_001e7a58)
                                                    (param_3,local_828,local_820);
                      (*(code *)PTR_position_001e7a60)(param_3,local_828,local_820);
                      local_7d8 = extraout_XMM1_Qa;
                      dStack_7d0 = extraout_XMM1_Qb;
                      local_818 = (double)(*(code *)PTR_position_holding_secs_001e7a68)
                                                    (param_3,local_828,local_820);
                      uVar12 = (*(code *)PTR_is_should_lock_001e7a70)(param_3,local_828,local_820);
                      piVar1 = local_7a0;
                      local_658 = CONCAT71(local_658._1_7_,uVar12);
                      local_678 = (double)((ulong)local_6e0 & _DAT_00117fd0) * dStack_5e0;
                      if (local_6f8 <= 0.0) {
                        local_678 = local_678 + local_6f8;
                        if (0.0 <= local_678) {
                          local_678 = 0.0;
                        }
                      }
                      else {
                        local_678 = local_6f8 - local_678;
                        if (local_678 <= 0.0) {
                          local_678 = 0.0;
                        }
                      }
                      if (*local_7a0 != 1) {
                        ppuVar20 = &PTR_s_strategies_index_strategy_strate_001e17c0;
LAB_00142f89:
                    /* try { // try from 00142f89 to 00142f8e has its CatchHandler @ 0014318c */
                        (*(code *)PTR_unwrap_failed_001e7948)(ppuVar20);
                        goto LAB_0014302b;
                      }
                      iVar15 = local_7a0[0x7c];
                      (*(code *)PTR_clone_001e79f0)
                                (&local_4d8,&local_830,
                                 &PTR_s_strategies_index_strategy_strate_001e17d8);
                      piVar1 = piVar1 + 2;
                      strategy_sm4::signal_pairs_tree::SignalPairsTree::update
                                (local_698,local_678,piVar1,&local_4d8);
                      strategy_sm4::signal_pairs_tree::SignalPairsTree::
                      find_nearest_pair_median_threshold(local_508,&local_4d8,piVar1);
                      local_368 = local_4d8;
                      local_268 = local_4c8;
                      ppppppuStack_260 = ppppppuStack_4c0;
                      local_258 = local_4b8;
                      pppppppuStack_250 = pppppppuStack_4b0;
                      if (((ulong)pdStack_4d0 & 1) == 0) {
                        ppuVar20 = &PTR_s_strategies_index_strategy_strate_001e17f0;
                        goto LAB_00142f89;
                      }
                      local_378 = local_4b8;
                      pppppppuStack_370 = pppppppuStack_4b0;
                      local_388 = local_4c8;
                      ppppppuStack_380 = ppppppuStack_4c0;
                      if ((char)iVar15 != '\0') {
                        strategy_sm4::signal_pairs_tree::SignalPairsTree::debug_string
                                  (&local_788,piVar1);
                        puVar7 = puStack_780;
                    /* try { // try from 0014105c to 0014106e has its CatchHandler @ 00143086 */
                        alloc::str::_<impl_str>::replace(&local_6d8,puStack_780,local_778);
                        local_478 = &ppppppuStack_380;
                        local_4d8 = &local_698;
                        pdStack_4d0 = (double *)PTR_fmt_001e7a78;
                        ppppppuStack_4c0 =
                             (undefined8 ******)_<alloc::string::String_as_core::fmt::Display>::fmt;
                        local_4b8 = &local_678;
                        pppppppuStack_4b0 = (undefined8 *******)PTR_fmt_001e7a78;
                        local_4a8 = &local_508;
                        local_4a0 = PTR_fmt_001e7a78;
                        local_498 = &local_368;
                        local_490 = PTR_fmt_001e7a80;
                        local_488 = &local_388;
                        local_480 = PTR_fmt_001e7a78;
                        local_470 = PTR_fmt_001e7a78;
                        local_460 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                        local_808 = (undefined8 ******)
                                    &PTR_s_SM4TREE_ts__code__score_spread__t_001e1808;
                        pdStack_800 = (double *)&DAT_00000009;
                        pdStack_7e8 = (double *)&DAT_00118b48;
                        local_7e0 = (undefined8 *******)&DAT_00000008;
                        local_7f0 = (undefined8 ******)&DAT_00000008;
                    /* try { // try from 0014116c to 00141176 has its CatchHandler @ 00143061 */
                        local_7f8 = &local_4d8;
                        local_4c8 = &local_830;
                        local_468 = &local_6d8;
                        (*(code *)PTR__eprint_001e7a88)(&local_808);
                        if (local_6d8 != (undefined8 ******)0x0) {
                          (*(code *)PTR___rust_dealloc_001e78c8)(local_6d0,local_6d8,1);
                        }
                        if (local_788 != (undefined8 ******)0x0) {
                          (*(code *)PTR___rust_dealloc_001e78c8)(puVar7,local_788,1);
                        }
                      }
                      if (local_620 - 0x11U < 6) {
                    /* WARNING: Switch is manually overridden */
                        switch(local_620 - 0x11U) {
                        case 0:
                          auVar28[0] = -((char)*plStack_628 == DAT_001185e0);
                          auVar28[1] = -(*(char *)((long)plStack_628 + 1) == UNK_001185e1);
                          auVar28[2] = -(*(char *)((long)plStack_628 + 2) == UNK_001185e2);
                          auVar28[3] = -(*(char *)((long)plStack_628 + 3) == UNK_001185e3);
                          auVar28[4] = -(*(char *)((long)plStack_628 + 4) == UNK_001185e4);
                          auVar28[5] = -(*(char *)((long)plStack_628 + 5) == UNK_001185e5);
                          auVar28[6] = -(*(char *)((long)plStack_628 + 6) == UNK_001185e6);
                          auVar28[7] = -(*(char *)((long)plStack_628 + 7) == UNK_001185e7);
                          auVar28[8] = -((char)plStack_628[1] == UNK_001185e8);
                          auVar28[9] = -(*(char *)((long)plStack_628 + 9) == UNK_001185e9);
                          auVar28[10] = -(*(char *)((long)plStack_628 + 10) == UNK_001185ea);
                          auVar28[0xb] = -(*(char *)((long)plStack_628 + 0xb) == UNK_001185eb);
                          auVar28[0xc] = -(*(char *)((long)plStack_628 + 0xc) == UNK_001185ec);
                          auVar28[0xd] = -(*(char *)((long)plStack_628 + 0xd) == UNK_001185ed);
                          auVar28[0xe] = -(*(char *)((long)plStack_628 + 0xe) == UNK_001185ee);
                          auVar28[0xf] = -(*(char *)((long)plStack_628 + 0xf) == UNK_001185ef);
                          auVar32[0] = -((char)plStack_628[2] == s_r_00118380[0]);
                          auVar32[1] = -(s_r_00118380[1] == '\0');
                          auVar32[2] = -(s_r_00118380[2] == '\0');
                          auVar32[3] = -(s_r_00118380[3] == '\0');
                          auVar32[4] = -(UNK_00118384 == '\0');
                          auVar32[5] = -(UNK_00118385 == '\0');
                          auVar32[6] = -(UNK_00118386 == '\0');
                          auVar32[7] = -(UNK_00118387 == '\0');
                          auVar32[8] = -(UNK_00118388 == '\0');
                          auVar32[9] = -(UNK_00118389 == '\0');
                          auVar32[10] = -(UNK_0011838a == '\0');
                          auVar32[0xb] = -(UNK_0011838b == '\0');
                          auVar32[0xc] = -(UNK_0011838c == '\0');
                          auVar32[0xd] = -(UNK_0011838d == '\0');
                          auVar32[0xe] = -(UNK_0011838e == '\0');
                          auVar32[0xf] = -(UNK_0011838f == '\0');
                          auVar32 = auVar32 & auVar28;
                          if ((ushort)((ushort)(SUB161(auVar32 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
                                       (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
                                       (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
                                       (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
                                       (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
                                       (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
                                       (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
                                       (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
                                       (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
                                       (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
                                       (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
                                       (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
                                       (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe |
                                      (ushort)(byte)(auVar32[0xf] >> 7) << 0xf) == 0xffff) {
                            local_831 = '\x02';
                          }
                          else {
                            local_831 = (((char)plStack_628[2] == 'r' &&
                                         *plStack_628 == 0x5273776f646e6957) &&
                                        plStack_628[1] == 0x6567676972546973) * '\x05';
                          }
                          break;
                        case 1:
                          auVar30[0] = -((char)*plStack_628 == s_WindowsMeanTrigg_00118270[0]);
                          auVar30[1] = -(*(char *)((long)plStack_628 + 1) ==
                                        s_WindowsMeanTrigg_00118270[1]);
                          auVar30[2] = -(*(char *)((long)plStack_628 + 2) ==
                                        s_WindowsMeanTrigg_00118270[2]);
                          auVar30[3] = -(*(char *)((long)plStack_628 + 3) ==
                                        s_WindowsMeanTrigg_00118270[3]);
                          auVar30[4] = -(*(char *)((long)plStack_628 + 4) ==
                                        s_WindowsMeanTrigg_00118270[4]);
                          auVar30[5] = -(*(char *)((long)plStack_628 + 5) ==
                                        s_WindowsMeanTrigg_00118270[5]);
                          auVar30[6] = -(*(char *)((long)plStack_628 + 6) ==
                                        s_WindowsMeanTrigg_00118270[6]);
                          auVar30[7] = -(*(char *)((long)plStack_628 + 7) ==
                                        s_WindowsMeanTrigg_00118270[7]);
                          auVar30[8] = -((char)plStack_628[1] == s_WindowsMeanTrigg_00118270[8]);
                          auVar30[9] = -(*(char *)((long)plStack_628 + 9) ==
                                        s_WindowsMeanTrigg_00118270[9]);
                          auVar30[10] = -(*(char *)((long)plStack_628 + 10) ==
                                         s_WindowsMeanTrigg_00118270[10]);
                          auVar30[0xb] = -(*(char *)((long)plStack_628 + 0xb) ==
                                          s_WindowsMeanTrigg_00118270[0xb]);
                          auVar30[0xc] = -(*(char *)((long)plStack_628 + 0xc) ==
                                          s_WindowsMeanTrigg_00118270[0xc]);
                          auVar30[0xd] = -(*(char *)((long)plStack_628 + 0xd) ==
                                          s_WindowsMeanTrigg_00118270[0xd]);
                          auVar30[0xe] = -(*(char *)((long)plStack_628 + 0xe) ==
                                          s_WindowsMeanTrigg_00118270[0xe]);
                          auVar30[0xf] = -(*(char *)((long)plStack_628 + 0xf) ==
                                          s_WindowsMeanTrigg_00118270[0xf]);
                          auVar34[0] = -((char)(short)plStack_628[2] == DAT_00118210);
                          auVar34[1] = -((char)((ushort)(short)plStack_628[2] >> 8) == UNK_00118211)
                          ;
                          auVar34[2] = -(UNK_00118212 == '\0');
                          auVar34[3] = -(UNK_00118213 == '\0');
                          auVar34[4] = -(UNK_00118214 == '\0');
                          auVar34[5] = -(UNK_00118215 == '\0');
                          auVar34[6] = -(UNK_00118216 == '\0');
                          auVar34[7] = -(UNK_00118217 == '\0');
                          auVar34[8] = -(UNK_00118218 == '\0');
                          auVar34[9] = -(UNK_00118219 == '\0');
                          auVar34[10] = -(UNK_0011821a == '\0');
                          auVar34[0xb] = -(UNK_0011821b == '\0');
                          auVar34[0xc] = -(UNK_0011821c == '\0');
                          auVar34[0xd] = -(UNK_0011821d == '\0');
                          auVar34[0xe] = -(UNK_0011821e == '\0');
                          auVar34[0xf] = -(UNK_0011821f == '\0');
                          auVar34 = auVar34 & auVar30;
                          local_831 = (ushort)((ushort)(SUB161(auVar34 >> 7,0) & 1) |
                                               (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1 |
                                               (ushort)(SUB161(auVar34 >> 0x17,0) & 1) << 2 |
                                               (ushort)(SUB161(auVar34 >> 0x1f,0) & 1) << 3 |
                                               (ushort)(SUB161(auVar34 >> 0x27,0) & 1) << 4 |
                                               (ushort)(SUB161(auVar34 >> 0x2f,0) & 1) << 5 |
                                               (ushort)(SUB161(auVar34 >> 0x37,0) & 1) << 6 |
                                               (ushort)(SUB161(auVar34 >> 0x3f,0) & 1) << 7 |
                                               (ushort)(SUB161(auVar34 >> 0x47,0) & 1) << 8 |
                                               (ushort)(SUB161(auVar34 >> 0x4f,0) & 1) << 9 |
                                               (ushort)(SUB161(auVar34 >> 0x57,0) & 1) << 10 |
                                               (ushort)(SUB161(auVar34 >> 0x5f,0) & 1) << 0xb |
                                               (ushort)(SUB161(auVar34 >> 0x67,0) & 1) << 0xc |
                                               (ushort)(SUB161(auVar34 >> 0x6f,0) & 1) << 0xd |
                                               (ushort)(SUB161(auVar34 >> 0x77,0) & 1) << 0xe |
                                              (ushort)(byte)(auVar34[0xf] >> 7) << 0xf) == 0xffff;
                          break;
                        default:
                          goto switchD_001411de_caseD_13;
                        case 3:
                          uVar3 = (undefined4)plStack_628[2];
                          auVar29[0] = -((char)uVar3 == s_gger_00118360[0]);
                          auVar29[1] = -((char)((uint)uVar3 >> 8) == s_gger_00118360[1]);
                          auVar29[2] = -((char)((uint)uVar3 >> 0x10) == s_gger_00118360[2]);
                          auVar29[3] = -((char)((uint)uVar3 >> 0x18) == s_gger_00118360[3]);
                          auVar29[4] = -(s_gger_00118360[4] == '\0');
                          auVar29[5] = -(s_gger_00118360[5] == '\0');
                          auVar29[6] = -(s_gger_00118360[6] == '\0');
                          auVar29[7] = -(s_gger_00118360[7] == '\0');
                          auVar29[8] = -(UNK_00118368 == '\0');
                          auVar29[9] = -(UNK_00118369 == '\0');
                          auVar29[10] = -(UNK_0011836a == '\0');
                          auVar29[0xb] = -(UNK_0011836b == '\0');
                          auVar29[0xc] = -(UNK_0011836c == '\0');
                          auVar29[0xd] = -(UNK_0011836d == '\0');
                          auVar29[0xe] = -(UNK_0011836e == '\0');
                          auVar29[0xf] = -(UNK_0011836f == '\0');
                          auVar33[0] = -((char)*plStack_628 == s_WindowsSharpeTri_00118370[0]);
                          auVar33[1] = -(*(char *)((long)plStack_628 + 1) ==
                                        s_WindowsSharpeTri_00118370[1]);
                          auVar33[2] = -(*(char *)((long)plStack_628 + 2) ==
                                        s_WindowsSharpeTri_00118370[2]);
                          auVar33[3] = -(*(char *)((long)plStack_628 + 3) ==
                                        s_WindowsSharpeTri_00118370[3]);
                          auVar33[4] = -(*(char *)((long)plStack_628 + 4) ==
                                        s_WindowsSharpeTri_00118370[4]);
                          auVar33[5] = -(*(char *)((long)plStack_628 + 5) ==
                                        s_WindowsSharpeTri_00118370[5]);
                          auVar33[6] = -(*(char *)((long)plStack_628 + 6) ==
                                        s_WindowsSharpeTri_00118370[6]);
                          auVar33[7] = -(*(char *)((long)plStack_628 + 7) ==
                                        s_WindowsSharpeTri_00118370[7]);
                          auVar33[8] = -((char)plStack_628[1] == s_WindowsSharpeTri_00118370[8]);
                          auVar33[9] = -(*(char *)((long)plStack_628 + 9) ==
                                        s_WindowsSharpeTri_00118370[9]);
                          auVar33[10] = -(*(char *)((long)plStack_628 + 10) ==
                                         s_WindowsSharpeTri_00118370[10]);
                          auVar33[0xb] = -(*(char *)((long)plStack_628 + 0xb) ==
                                          s_WindowsSharpeTri_00118370[0xb]);
                          auVar33[0xc] = -(*(char *)((long)plStack_628 + 0xc) ==
                                          s_WindowsSharpeTri_00118370[0xc]);
                          auVar33[0xd] = -(*(char *)((long)plStack_628 + 0xd) ==
                                          s_WindowsSharpeTri_00118370[0xd]);
                          auVar33[0xe] = -(*(char *)((long)plStack_628 + 0xe) ==
                                          s_WindowsSharpeTri_00118370[0xe]);
                          auVar33[0xf] = -(*(char *)((long)plStack_628 + 0xf) ==
                                          s_WindowsSharpeTri_00118370[0xf]);
                          auVar33 = auVar33 & auVar29;
                          local_831 = ((ushort)((ushort)(SUB161(auVar33 >> 7,0) & 1) |
                                                (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
                                                (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
                                                (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
                                                (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
                                                (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
                                                (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
                                                (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
                                                (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
                                                (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
                                                (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
                                                (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
                                                (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
                                                (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
                                                (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe |
                                               (ushort)(byte)(auVar33[0xf] >> 7) << 0xf) == 0xffff)
                                      << 2;
                          break;
                        case 5:
                          auVar35[0] = -(*(char *)((long)plStack_628 + 6) == DAT_00118620);
                          auVar35[1] = -(*(char *)((long)plStack_628 + 7) == UNK_00118621);
                          auVar35[2] = -((char)plStack_628[1] == UNK_00118622);
                          auVar35[3] = -(*(char *)((long)plStack_628 + 9) == UNK_00118623);
                          auVar35[4] = -(*(char *)((long)plStack_628 + 10) == UNK_00118624);
                          auVar35[5] = -(*(char *)((long)plStack_628 + 0xb) == UNK_00118625);
                          auVar35[6] = -(*(char *)((long)plStack_628 + 0xc) == UNK_00118626);
                          auVar35[7] = -(*(char *)((long)plStack_628 + 0xd) == UNK_00118627);
                          auVar35[8] = -(*(char *)((long)plStack_628 + 0xe) == UNK_00118628);
                          auVar35[9] = -(*(char *)((long)plStack_628 + 0xf) == UNK_00118629);
                          auVar35[10] = -((char)plStack_628[2] == UNK_0011862a);
                          auVar35[0xb] = -(*(char *)((long)plStack_628 + 0x11) == UNK_0011862b);
                          auVar35[0xc] = -(*(char *)((long)plStack_628 + 0x12) == UNK_0011862c);
                          auVar35[0xd] = -(*(char *)((long)plStack_628 + 0x13) == UNK_0011862d);
                          auVar35[0xe] = -(*(char *)((long)plStack_628 + 0x14) == UNK_0011862e);
                          auVar35[0xf] = -(*(char *)((long)plStack_628 + 0x15) == UNK_0011862f);
                          auVar31[0] = -((char)*plStack_628 == DAT_001182a0);
                          auVar31[1] = -(*(char *)((long)plStack_628 + 1) == UNK_001182a1);
                          auVar31[2] = -(*(char *)((long)plStack_628 + 2) == UNK_001182a2);
                          auVar31[3] = -(*(char *)((long)plStack_628 + 3) == UNK_001182a3);
                          auVar31[4] = -(*(char *)((long)plStack_628 + 4) == UNK_001182a4);
                          auVar31[5] = -(*(char *)((long)plStack_628 + 5) == UNK_001182a5);
                          auVar31[6] = -(*(char *)((long)plStack_628 + 6) == UNK_001182a6);
                          auVar31[7] = -(*(char *)((long)plStack_628 + 7) == UNK_001182a7);
                          auVar31[8] = -((char)plStack_628[1] == UNK_001182a8);
                          auVar31[9] = -(*(char *)((long)plStack_628 + 9) == UNK_001182a9);
                          auVar31[10] = -(*(char *)((long)plStack_628 + 10) == UNK_001182aa);
                          auVar31[0xb] = -(*(char *)((long)plStack_628 + 0xb) == UNK_001182ab);
                          auVar31[0xc] = -(*(char *)((long)plStack_628 + 0xc) == UNK_001182ac);
                          auVar31[0xd] = -(*(char *)((long)plStack_628 + 0xd) == UNK_001182ad);
                          auVar31[0xe] = -(*(char *)((long)plStack_628 + 0xe) == UNK_001182ae);
                          auVar31[0xf] = -(*(char *)((long)plStack_628 + 0xf) == UNK_001182af);
                          auVar31 = auVar31 & auVar35;
                          if ((ushort)((ushort)(SUB161(auVar31 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar31 >> 0x17,0) & 1) << 2 |
                                       (ushort)(SUB161(auVar31 >> 0x1f,0) & 1) << 3 |
                                       (ushort)(SUB161(auVar31 >> 0x27,0) & 1) << 4 |
                                       (ushort)(SUB161(auVar31 >> 0x2f,0) & 1) << 5 |
                                       (ushort)(SUB161(auVar31 >> 0x37,0) & 1) << 6 |
                                       (ushort)(SUB161(auVar31 >> 0x3f,0) & 1) << 7 |
                                       (ushort)(SUB161(auVar31 >> 0x47,0) & 1) << 8 |
                                       (ushort)(SUB161(auVar31 >> 0x4f,0) & 1) << 9 |
                                       (ushort)(SUB161(auVar31 >> 0x57,0) & 1) << 10 |
                                       (ushort)(SUB161(auVar31 >> 0x5f,0) & 1) << 0xb |
                                       (ushort)(SUB161(auVar31 >> 0x67,0) & 1) << 0xc |
                                       (ushort)(SUB161(auVar31 >> 0x6f,0) & 1) << 0xd |
                                       (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe |
                                      (ushort)(byte)(auVar31[0xf] >> 7) << 0xf) != 0xffff)
                          goto switchD_001411de_caseD_13;
                          local_831 = '\x03';
                        }
                      }
                      else {
switchD_001411de_caseD_13:
                        local_831 = '\0';
                      }
                    /* try { // try from 001412d4 to 001412ed has its CatchHandler @ 0014318c */
                      (*(code *)PTR_clone_001e79f0)
                                (&local_788,&local_830,
                                 &PTR_s_strategies_index_strategy_strate_001e1898);
                    /* try { // try from 001412ee to 0014130a has its CatchHandler @ 001430b5 */
                      (*(code *)PTR_clone_001e79f0)
                                (&local_4d8,&local_690,
                                 &PTR_s_strategies_index_strategy_strate_001e18b0);
                      piVar1 = local_7a0 + 0x70;
                      local_7f8 = local_778;
                      local_808 = local_788;
                      pdStack_800 = (double *)puStack_780;
                      local_7f0 = local_4d8;
                      pdStack_7e8 = pdStack_4d0;
                      local_7e0 = local_4c8;
                    /* try { // try from 00141350 to 0014161c has its CatchHandler @ 0014318c */
                      alloc::collections::btree::map::BTreeMap<K,V,A>::entry
                                (&local_4d8,piVar1,&local_808);
                      local_808 = (undefined8 ******)&local_831;
                      pdStack_800 = &local_618;
                      local_7f8 = &local_388;
                      lVar16 = alloc::collections::btree::map::entry::Entry<K,V,A>::or_insert_with
                                         (&local_4d8,&local_808);
                      local_738 = local_738 / _s__00117fb0;
                      local_7a8 = (undefined8 *******)((double)local_7a8 + local_738);
                      *(double **)(lVar16 + 0x50) = local_378;
                      *(undefined8 ********)(lVar16 + 0x58) = pppppppuStack_370;
                      *(undefined8 ********)(lVar16 + 0x40) = local_388;
                      *(undefined8 *******)(lVar16 + 0x48) = ppppppuStack_380;
                      (*(code *)PTR_update_score_001e7a90)(local_7a8,local_6f8,0,0,lVar16,0);
                      local_738 = local_738 + local_818;
                      (*(code *)PTR_dynamic_threshold_001e7a98)
                                (local_738,local_558,puStack_550,local_548,&local_4d8,&local_388);
                      *(undefined8 ********)(lVar16 + 0x50) = local_4c8;
                      *(undefined8 *******)(lVar16 + 0x58) = ppppppuStack_4c0;
                      *(undefined8 *******)(lVar16 + 0x40) = local_4d8;
                      *(double **)(lVar16 + 0x48) = pdStack_4d0;
                    /* WARNING: Switch is manually overridden */
                      switch(local_831) {
                      case '\0':
                    /* WARNING: Switch is manually overridden */
                        switch(uVar14) {
                        default:
                          (*(code *)PTR_point_signal_trigger_pv3_spread_001e7aa0)
                                    (dStack_5e0,local_6e0,local_518 * _DAT_00117f18,&local_4d8,
                                     lVar16);
                          goto LAB_00141564;
                        case 1:
                          dVar25 = *(double *)(lVar16 + 0x38);
                          if (*(double *)(lVar16 + 0x40) <= dVar25) {
                            cVar13 = '\0';
                          }
                          else {
                            cVar13 = '\x03';
                            if ((dVar25 < *(double *)(lVar16 + 0x58)) &&
                               (cVar13 = '\x02', *(double *)(lVar16 + 0x50) < dVar25)) {
                              cVar13 = (*(double *)(lVar16 + 0x48) < dVar25) * '\x03' + '\x01';
                            }
                          }
                          goto LAB_001415c9;
                        case 3:
                          local_4d8 = (undefined8 ******)&UNK_001e18c8;
                          pdStack_4d0 = (double *)0x1;
                          local_4c8 = (undefined8 *******)&DAT_00000008;
                          ppppppuStack_4c0 = (undefined8 ******)0x0;
                          local_4b8 = (double *)0x0;
                    /* try { // try from 00142fda to 00142fee has its CatchHandler @ 0014318c */
                          (*(code *)PTR_panic_fmt_001e7958)
                                    (&local_4d8,&PTR_s_strategies_index_strategy_strate_001e18d8);
                        }
                        goto LAB_0014302b;
                      case '\x01':
                        (*(code *)PTR_windows_mean_trigger_001e7ac0)(local_5d8,&local_4d8,lVar16);
                        break;
                      case '\x02':
                        (*(code *)PTR_windows_std_trigger_001e7ab0)(local_5d8,&local_4d8,lVar16);
                        break;
                      case '\x03':
                        (*(code *)PTR_windows_quantile_trigger_001e7ab8)
                                  (uStack_5d0,local_5d8,&local_4d8,lVar16);
                        break;
                      case '\x04':
                        (*(code *)PTR_windows_sharpe_trigger_001e7aa8)(local_5d8,&local_4d8,lVar16);
                        break;
                      case '\x05':
                        (*(code *)PTR_windows_rsi_trigger_001e7ac8)(local_5d8,&local_4d8,lVar16);
                      }
LAB_00141564:
                      pdVar17 = pdStack_4d0;
                      cVar13 = (char)local_4d8;
                      if ((char)local_4d8 == '\x05') goto LAB_00142b87;
LAB_001415c9:
                      uVar14 = (*(code *)PTR_margin_filter_001e7ad0)(param_3,cVar13);
                      (*(code *)PTR_dynamic_pending_ts_ms_001e7ad8)
                                (local_738,pcStack_540,local_538,local_528,puStack_530);
                      pdVar17 = (double *)(*(code *)PTR_cancel_by_pending_ts_001e7ae0)(param_3,1);
                      if (pdVar17 != (double *)0x0) goto LAB_00142b87;
                      adStack_728[1] = 0.0;
                      adStack_728[2] = 3.95252516672997e-323;
                      adStack_728[3] = 0.0;
                    /* try { // try from 0014164d to 0014170b has its CatchHandler @ 001430ad */
                      cVar11 = (*(code *)PTR_impact_block_check_001e7ae8)
                                         (local_7a8,local_758,local_748,param_3,uVar14);
                      cVar13 = cVar11;
                      if ((cVar11 != '\x04') && ((char)local_4e4 != '\0')) {
                        piVar2 = local_7a0 + 0x76;
                        lVar16 = alloc::collections::btree::map::BTreeMap<K,V,A>::get
                                           (piVar2,&local_830);
                        if ((lVar16 != 0) &&
                           ((cVar13 = '\x04', 0.0 < local_4f8 &&
                            (local_4f8 <=
                             ((double)local_7a8 - *(double *)(lVar16 + 0x10)) * _s__00117fb0)))) {
                          alloc::collections::btree::map::BTreeMap<K,V,A>::remove
                                    (&local_4d8,piVar2,&local_830);
                          cVar13 = cVar11;
                        }
                      }
                      (*(code *)PTR_clone_001e79f0)
                                (&local_6d8,&local_830,
                                 &PTR_s_strategies_index_strategy_strate_001e18f0);
                    /* try { // try from 0014170c to 00141725 has its CatchHandler @ 00143035 */
                      (*(code *)PTR_clone_001e79f0)
                                (&local_808,&local_690,
                                 &PTR_s_strategies_index_strategy_strate_001e1908);
                      local_778 = pppppppuStack_6c8;
                      local_788 = local_6d8;
                      puStack_780 = local_6d0;
                      ppppppuStack_770 = local_808;
                      pdStack_768 = pdStack_800;
                      pppppppuStack_760 = local_7f8;
                    /* try { // try from 00141762 to 001417df has its CatchHandler @ 0014313f */
                      lVar16 = alloc::collections::btree::map::BTreeMap<K,V,A>::get
                                         (piVar1,&local_788);
                      if (lVar16 == 0) {
                    /* try { // try from 00142f94 to 00142fa0 has its CatchHandler @ 0014313f */
                        (*(code *)PTR_unwrap_failed_001e7948)
                                  (&PTR_s_strategies_index_strategy_strate_001e1920);
                        goto LAB_0014302b;
                      }
                      local_3b8 = *(undefined8 **)(lVar16 + 0x30);
                      puStack_3b0 = *(undefined **)(lVar16 + 0x38);
                      local_6d8 = *(undefined8 *******)(lVar16 + 0x40);
                      local_6d0 = *(undefined **)(lVar16 + 0x48);
                      pppppppuStack_6c8 = *(undefined8 ********)(lVar16 + 0x50);
                      puStack_6c0 = *(undefined **)(lVar16 + 0x58);
                      local_398 = *(undefined8 *******)(lVar16 + 0x60);
                      puStack_390 = *(undefined **)(lVar16 + 0x68);
                      local_3a8 = *(undefined8 *******)(lVar16 + 0x70);
                      pcStack_3a0 = *(code **)(lVar16 + 0x78);
                      local_818 = *(double *)(lVar16 + 0x80);
                      dStack_810 = *(double *)(lVar16 + 0x88);
                      local_3c8 = *(double **)(lVar16 + 0x20);
                      pppppppuStack_3c0 = *(undefined8 ********)(lVar16 + 0x28);
                      _<hashbrown::raw::RawTable<T,A>as_core::clone::Clone>::clone
                                (&local_808,lVar16);
                      pdStack_7e8 = local_3c8;
                      local_7e0 = pppppppuStack_3c0;
                      local_4d8 = local_808;
                      pdStack_4d0 = pdStack_800;
                      local_4c8 = local_7f8;
                      ppppppuStack_4c0 = local_7f0;
                      local_4b8 = local_3c8;
                      pppppppuStack_4b0 = pppppppuStack_3c0;
                      local_4a8 = local_3b8;
                      local_4a0 = puStack_3b0;
                      local_498 = local_6d8;
                      local_490 = local_6d0;
                      local_488 = pppppppuStack_6c8;
                      local_480 = puStack_6c0;
                      local_478 = local_398;
                      local_470 = puStack_390;
                      local_468 = local_3a8;
                      local_460 = pcStack_3a0;
                      dStack_458 = local_818;
                      dStack_450 = dStack_810;
                      core::ptr::drop_in_place<(alloc::string::String,alloc::string::String)>
                                (&local_788);
                    /* WARNING: Switch is manually overridden */
                      switch(cVar13) {
                      case '\0':
                        if ((local_7d8 < _DAT_00117fb8) && (local_738 < dStack_5b0 / _s__00117fb0))
                        break;
                    /* try { // try from 001418ed to 00141911 has its CatchHandler @ 0014302d */
                        (*(code *)PTR_get_quote_price_001e7af0)
                                  (local_818,dStack_810,local_748,local_758,uStack_5c0,local_5c8,
                                   &local_808,0,&local_498);
                        bVar8 = (byte)pdStack_800;
                        pdStack_7b8 = pdStack_7e8;
                        pppppppuStack_7c8 = local_7f8;
                        ppppppuStack_7c0 = local_7f0;
                    /* try { // try from 00141937 to 00141950 has its CatchHandler @ 001430f5 */
                        local_818 = (double)(*(code *)PTR_round_with_step_f64_001e79b0)
                                                      (local_808,local_798,1);
                        uVar21 = 1;
                        if (bVar8 - 1 < 2) {
                          local_798 = local_528;
                        }
                        else if (bVar8 == 0) {
                          local_798 = DAT_00117ec0;
                        }
                        else {
                          uVar21 = 0;
                        }
                        dVar25 = local_7d8;
                        if (local_7d8 <= 0.0) {
                          dVar25 = 0.0;
                        }
                        dVar36 = (double)(~-(ulong)(local_598 < 0.0) & (ulong)local_598 |
                                         -(ulong)(local_598 < 0.0) & DAT_00117eb8) - dVar25;
                        dVar25 = ((double)(~-(ulong)(dStack_590 < 0.0) & (ulong)dStack_590 |
                                          -(ulong)(dStack_590 < 0.0) & DAT_00117eb8) / local_6b8) /
                                 (double)local_748 - dVar25;
                        dVar39 = (double)(~-(ulong)(local_5a8 < 0.0) & (ulong)local_5a8 |
                                         -(ulong)(local_5a8 < 0.0) & DAT_00117eb8);
                        dVar38 = ((double)(~-(ulong)(dStack_5a0 < 0.0) & (ulong)dStack_5a0 |
                                          -(ulong)(dStack_5a0 < 0.0) & DAT_00117eb8) / local_6b8) /
                                 (double)local_748;
                        if (dVar38 <= DAT_00117f00) {
                          dVar38 = DAT_00117f00;
                        }
                        dVar26 = (double)(~-(ulong)((double)local_588 < 0.0) & (ulong)local_588 |
                                         -(ulong)((double)local_588 < 0.0) & DAT_00117eb8);
                        dVar40 = ((double)(~-(ulong)(dStack_580 < 0.0) & (ulong)dStack_580 |
                                          DAT_00117eb8 & -(ulong)(dStack_580 < 0.0)) / local_6b8) /
                                 (double)local_748;
                        if (dVar40 <= DAT_00117f00) {
                          dVar40 = DAT_00117f00;
                        }
                        dVar37 = dVar25;
                        if (dVar36 <= dVar25) {
                          dVar37 = dVar36;
                        }
                        dVar25 = (double)(~-(ulong)NAN(dVar36) & (ulong)dVar37 |
                                         -(ulong)NAN(dVar36) & (ulong)dVar25);
                        if (dVar38 <= dVar39) {
                          dVar39 = dVar38;
                        }
                        if (dVar39 <= dVar25) {
                          dVar25 = dVar39;
                        }
                        if (dVar40 <= dVar26) {
                          dVar26 = dVar40;
                        }
                        dVar39 = local_7d8;
                        if (0.0 <= local_7d8) {
                          dVar39 = 0.0;
                        }
                        if ((double)((ulong)dVar39 ^ _DAT_001185d0) <= dVar26) {
                          dVar26 = (double)((ulong)dVar39 ^ _DAT_001185d0);
                        }
                        dVar26 = dVar26 + dVar25;
                        if (dVar26 <= 0.0) {
                          dVar26 = 0.0;
                        }
                    /* try { // try from 001422e6 to 001423b0 has its CatchHandler @ 001430f5 */
                        uVar18 = (*(code *)PTR_get_quote_vol_001e7af8)
                                           (dVar26,pppppppuStack_520,bVar8,1);
                        if ((uVar18 & 1) != 0) {
                          uVar27 = (*(code *)PTR_round_with_step_f64_001e79b0)
                                             (extraout_XMM0_Qa_00,adStack_728[4],1);
                          local_7d8 = (double)strategy_sm4::apply_book_vol_cap
                                                        (uVar27,local_818,adStack_728[4],bVar8,1,
                                                         &local_140,&local_648);
                          dStack_7d0 = extraout_XMM0_Qb_00;
                          pdVar17 = (double *)
                                    strategy_sm4::cancel_order_use_range
                                              (local_818,(double)local_758 - dStack_78,param_3,
                                               local_828,local_820,1,adStack_728 + 1);
                          if ((pdVar17 == (double *)0x0) &&
                             ((bVar8 != 0 ||
                              (pdVar17 = (double *)
                                         strategy_sm4::cancel_side
                                                   (param_3,local_828,local_820,1,adStack_728 + 1),
                              pdVar17 == (double *)0x0)))) {
                            lVar16 = strategy_sm4::live_pending_counts
                                               (param_3,local_828,local_820,adStack_728[2],
                                                adStack_728[3]);
                            if ((DAT_00117ef8 < (double)(_DAT_00117fd0 & (ulong)local_7d8)) &&
                               (lVar16 == 0)) {
                              adStack_728[0] = (double)(*(code *)PTR_round_001e79d0)(local_738);
                              local_808 = &local_6e0;
                              pdStack_800 = (double *)PTR_fmt_001e7a78;
                              local_7f8 = &pppppppuStack_7c8;
                              local_7f0 = (undefined8 ******)
                                          _<alloc::string::String_as_core::fmt::Display>::fmt;
                              pdStack_7e8 = adStack_728;
                              local_7e0 = (undefined8 *******)PTR_fmt_001e7a78;
                              local_788 = (undefined8 ******)&DAT_001e1950;
                              puStack_780 = (undefined *)0x3;
                              pdStack_768 = (double *)0x0;
                              ppppppuStack_770 = (undefined8 ******)0x3;
                    /* try { // try from 0014246d to 001425e9 has its CatchHandler @ 001430f5 */
                              local_778 = &local_808;
                              (*(code *)PTR_format_inner_001e79c8)(&uStack_1a0,&local_788);
                              uStack_200 = 0x700;
                              dStack_230 = local_818;
                              dStack_228 = local_7d8;
                              puStack_220 = local_748;
                              dStack_218 = local_6f8;
                              ppppppuStack_210 = local_498;
                              ppppppuStack_208 = local_5b8;
                              uStack_248 = uStack_1a0;
                              uStack_240 = uStack_198;
                              uStack_238 = uStack_190;
                              pdVar17 = (double *)
                                        (*(code *)PTR_place_order_iap_with_target_001e7b00)
                                                  (local_798,param_3,&uStack_248,uVar21);
                              if (pdVar17 != (double *)0x0) goto LAB_00142b4a;
                              if ((char)local_4e4 != '\0') {
                                (*(code *)PTR_clone_001e79f0)
                                          (&local_6d8,&local_830,
                                           &PTR_s_strategies_index_strategy_strate_001e1980);
                                local_788 = local_758;
                                puStack_780 = local_748;
                                local_778 = local_7a8;
                                alloc::collections::btree::map::BTreeMap<K,V,A>::insert
                                          (&local_808,local_7a0 + 0x76,&local_6d8,&local_788);
                              }
                            }
LAB_00142e55:
                            if (pppppppuStack_7c8 != (undefined8 *******)0x0) {
                              (*(code *)PTR___rust_dealloc_001e78c8)
                                        (ppppppuStack_7c0,pppppppuStack_7c8,1);
                            }
override_jmp_0014189b_case_4:
                    /* try { // try from 00142e75 to 00142e81 has its CatchHandler @ 001430ad */
                            _<hashbrown::raw::RawTable<T,A>as_core::ops::drop::Drop>::drop
                                      (&local_4d8);
                            core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>
                                      (adStack_728 + 1);
                            if (local_120 != 0) {
                              (*(code *)PTR___rust_dealloc_001e78c8)(local_118,local_120,1);
                            }
                            if (local_690 != 0) {
                              (*(code *)PTR___rust_dealloc_001e78c8)(local_688,local_690,1);
                            }
                            if (local_830 != (undefined8 ******)0x0) {
                              (*(code *)PTR___rust_dealloc_001e78c8)(local_828,local_830,1);
                            }
                            core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>
                                      (&local_670);
                            core::ptr::drop_in_place<strategy_sm4::SM4Params>(&local_648);
                            core::ptr::drop_in_place<future_backtest_sdk::types::StrategyPara>
                                      (&local_360);
                            return (double *)0x0;
                          }
LAB_00142b4a:
                          if (pppppppuStack_7c8 != (undefined8 *******)0x0) {
                            (*(code *)PTR___rust_dealloc_001e78c8)
                                      (ppppppuStack_7c0,pppppppuStack_7c8,1);
                          }
                          goto LAB_00142b6a;
                        }
                    /* try { // try from 00142ff1 to 00142ffd has its CatchHandler @ 001430f5 */
                        (*(code *)PTR_unwrap_failed_001e7948)
                                  (&PTR_s_strategies_index_strategy_strate_001e1938);
                        goto LAB_0014302b;
                      case '\x01':
                        if ((local_7d8 <= DAT_00117ef8) || (dStack_5b0 / _s__00117fb0 <= local_738))
                        {
                          if (local_7d8 <= 0.0) goto override_jmp_0014189b_case_4;
                    /* try { // try from 00141ad0 to 00141af4 has its CatchHandler @ 0014302d */
                          (*(code *)PTR_get_quote_price_001e7af0)
                                    (local_818,dStack_810,local_748,local_758,uStack_5c0,local_5c8,
                                     &local_808,1,&local_498);
                          bVar8 = (byte)pdStack_800;
                          uVar18 = (ulong)pdStack_800 & 0xff;
                          pdStack_7b8 = pdStack_7e8;
                          pppppppuStack_7c8 = local_7f8;
                          ppppppuStack_7c0 = local_7f0;
                    /* try { // try from 00141b1b to 00141b34 has its CatchHandler @ 001430f1 */
                          local_818 = (double)(*(code *)PTR_round_with_step_f64_001e79b0)
                                                        (local_808,local_798,1);
                          uVar21 = 1;
                          if (bVar8 - 1 < 2) {
                            local_798 = local_528;
                          }
                          else if (bVar8 == 0) {
                            local_798 = DAT_00117ec0;
                          }
                          else {
                            uVar21 = 0;
                          }
                          uVar24 = -(ulong)((double)local_588 <
                                           (double)((ulong)local_588 ^ _DAT_001185d0));
                          dVar38 = (double)(uVar24 & DAT_00117ec8 |
                                           ~uVar24 & ((ulong)local_588 ^ _DAT_001185d0));
                          uVar24 = -(ulong)(dStack_580 < (double)((ulong)dStack_580 ^ _DAT_001185d0)
                                           );
                          dVar39 = ((double)(uVar24 & DAT_00117ec8 |
                                            ~uVar24 & ((ulong)dStack_580 ^ _DAT_001185d0)) /
                                   local_6b8) / (double)local_758;
                          dVar25 = dVar39;
                          if (dVar39 <= dVar38) {
                            dVar25 = dVar38;
                          }
                          dVar25 = (double)(~-(ulong)NAN(dVar38) & (ulong)dVar25 |
                                           -(ulong)NAN(dVar38) & (ulong)dVar39);
                          dVar39 = local_7d8;
                          if (local_7d8 <= 0.0) {
                            dVar39 = 0.0;
                          }
                          if (dVar25 <= (double)((ulong)dVar39 ^ _DAT_001185d0)) {
                            dVar25 = (double)((ulong)dVar39 ^ _DAT_001185d0);
                          }
                    /* try { // try from 00142a84 to 00142b3d has its CatchHandler @ 001430f1 */
                          uVar27 = (*(code *)PTR_round_with_step_f64_001e79b0)
                                             (dVar25,adStack_728[4],1);
                          uVar18 = (*(code *)PTR_get_quote_vol_001e7af8)
                                             (uVar27,pppppppuStack_520,uVar18,1);
                          if ((uVar18 & 1) != 0) {
                            uVar27 = (*(code *)PTR_round_with_step_f64_001e79b0)
                                               (extraout_XMM0_Qa_02,adStack_728[4],1);
                            local_7d8 = (double)strategy_sm4::apply_book_vol_cap
                                                          (uVar27,local_818,adStack_728[4],bVar8,0,
                                                           &local_140,&local_648);
                            bVar23 = (byte)local_658 != '\0';
                            dStack_7d0 = extraout_XMM0_Qb_02;
                            pdVar17 = (double *)
                                      strategy_sm4::cancel_order_use_range
                                                (local_818,dStack_c8 - (double)local_748,param_3,
                                                 local_828,local_820,0,adStack_728 + 1);
                    /* try { // try from 00142f54 to 00142f67 has its CatchHandler @ 001430f1 */
                            if ((pdVar17 == (double *)0x0) &&
                               ((bVar8 != 0 ||
                                (pdVar17 = (double *)
                                           strategy_sm4::cancel_side
                                                     (param_3,local_828,local_820,0,adStack_728 + 1)
                                , pdVar17 == (double *)0x0)))) {
                    /* try { // try from 00142c19 to 00142c22 has its CatchHandler @ 001430f1 */
                              strategy_sm4::live_pending_counts
                                        (param_3,local_828,local_820,adStack_728[2],adStack_728[3]);
                              if ((DAT_00117ef8 < (double)(_DAT_00117fd0 & (ulong)local_7d8)) &&
                                 (extraout_RDX_00 == 0)) {
                                adStack_728[0] =
                                     (double)(*(code *)PTR_round_001e79d0)(local_738 * DAT_00117f48)
                                ;
                                adStack_728[0] = adStack_728[0] / DAT_00117f48;
                                local_808 = &local_6e0;
                                pdStack_800 = (double *)PTR_fmt_001e7a78;
                                local_7f8 = &pppppppuStack_7c8;
                                local_7f0 = (undefined8 ******)
                                            _<alloc::string::String_as_core::fmt::Display>::fmt;
                                pdStack_7e8 = adStack_728;
                                local_7e0 = (undefined8 *******)PTR_fmt_001e7a78;
                                local_788 = (undefined8 ******)&DAT_001e1950;
                                puStack_780 = (undefined *)0x3;
                                pdStack_768 = (double *)0x0;
                                local_778 = &local_808;
                                ppppppuStack_770 = (undefined8 ******)0x3;
                    /* try { // try from 00142cf4 to 00142e54 has its CatchHandler @ 001430f1 */
                                (*(code *)PTR_format_inner_001e79c8)(&uStack_170,&local_788);
                                cStack_2df = bVar23 * '\x03' + '\x05';
                                uStack_2e0 = 1;
                                dStack_310 = local_818;
                                dStack_308 = local_7d8;
                                ppppppuStack_300 = local_758;
                                dStack_2f8 = local_6f8;
                                puStack_2f0 = local_490;
                                ppppppuStack_2e8 = local_5b8;
                                uStack_328 = uStack_170;
                                uStack_320 = uStack_168;
                                uStack_318 = uStack_160;
                                pdVar17 = (double *)
                                          (*(code *)PTR_place_order_iap_with_target_001e7b00)
                                                    (local_798,param_3,&uStack_328,uVar21);
                                if (pdVar17 != (double *)0x0) goto LAB_00142b4a;
                                if ((char)local_4e4 != '\0') {
                                  (*(code *)PTR_clone_001e79f0)
                                            (&local_6d8,&local_830,
                                             &PTR_s_strategies_index_strategy_strate_001e19b0);
                                  local_788 = local_758;
                                  puStack_780 = local_748;
                                  local_778 = local_7a8;
                                  alloc::collections::btree::map::BTreeMap<K,V,A>::insert
                                            (&local_808,local_7a0 + 0x76,&local_6d8,&local_788);
                                }
                              }
                              goto LAB_00142e55;
                            }
                            goto LAB_00142b4a;
                          }
                    /* try { // try from 0014301e to 0014302a has its CatchHandler @ 001430f1 */
                          (*(code *)PTR_unwrap_failed_001e7948)
                                    (&PTR_s_strategies_index_strategy_strate_001e1998);
                          goto LAB_0014302b;
                        }
                        break;
                      case '\x02':
                        if ((local_7d8 <= DAT_00117ef8) || (dStack_5b0 / _s__00117fb0 <= local_738))
                        {
                    /* try { // try from 00141bb3 to 00141bda has its CatchHandler @ 0014302d */
                          (*(code *)PTR_get_quote_price_001e7af0)
                                    (local_818,dStack_810,local_748,local_758,uStack_5c0,local_5c8,
                                     &local_808,2,&local_498);
                          bVar8 = (byte)pdStack_800;
                          pdStack_7b8 = pdStack_7e8;
                          pppppppuStack_7c8 = local_7f8;
                          ppppppuStack_7c0 = local_7f0;
                    /* try { // try from 00141c00 to 00141f31 has its CatchHandler @ 001430f7 */
                          local_818 = (double)(*(code *)PTR_round_with_step_f64_001e79b0)
                                                        (local_808,local_798,1);
                          uVar21 = 1;
                          if (bVar8 - 1 < 2) {
                            local_798 = local_528;
                          }
                          else if (bVar8 == 0) {
                            local_798 = DAT_00117ec0;
                          }
                          else {
                            uVar21 = 0;
                          }
                          uVar18 = -(ulong)(local_598 < (double)((ulong)local_598 ^ _DAT_001185d0));
                          dVar25 = local_7d8;
                          if (0.0 <= local_7d8) {
                            dVar25 = 0.0;
                          }
                          dVar36 = (double)(uVar18 & DAT_00117ec8 |
                                           ~uVar18 & ((ulong)local_598 ^ _DAT_001185d0)) - dVar25;
                          uVar18 = -(ulong)(dStack_590 < (double)((ulong)dStack_590 ^ _DAT_001185d0)
                                           );
                          dVar25 = ((double)(uVar18 & DAT_00117ec8 |
                                            ~uVar18 & ((ulong)dStack_590 ^ _DAT_001185d0)) /
                                   local_6b8) / (double)local_758 - dVar25;
                          dVar38 = (double)(~-(ulong)(local_5a8 < 0.0) & (ulong)local_5a8 |
                                           -(ulong)(local_5a8 < 0.0) & DAT_00117eb8);
                          dVar39 = ((double)(~-(ulong)(dStack_5a0 < 0.0) & (ulong)dStack_5a0 |
                                            -(ulong)(dStack_5a0 < 0.0) & DAT_00117eb8) / local_6b8)
                                   / (double)local_758;
                          if (dVar39 <= DAT_00117f00) {
                            dVar39 = DAT_00117f00;
                          }
                          dVar26 = (double)(~-(ulong)((double)local_588 < 0.0) & (ulong)local_588 |
                                           -(ulong)((double)local_588 < 0.0) & DAT_00117eb8);
                          dVar40 = ((double)(~-(ulong)(dStack_580 < 0.0) & (ulong)dStack_580 |
                                            DAT_00117eb8 & -(ulong)(dStack_580 < 0.0)) / local_6b8)
                                   / (double)local_758;
                          if (dVar40 <= DAT_00117f00) {
                            dVar40 = DAT_00117f00;
                          }
                          dVar37 = dVar25;
                          if (dVar25 <= dVar36) {
                            dVar37 = dVar36;
                          }
                          dVar25 = (double)(~-(ulong)NAN(dVar36) & (ulong)dVar37 |
                                           -(ulong)NAN(dVar36) & (ulong)dVar25);
                          if (dVar39 <= dVar38) {
                            dVar38 = dVar39;
                          }
                          if (dVar25 <= (double)((ulong)dVar38 ^ _DAT_001185d0)) {
                            dVar25 = (double)((ulong)dVar38 ^ _DAT_001185d0);
                          }
                          if (dVar40 <= dVar26) {
                            dVar26 = dVar40;
                          }
                          dVar39 = local_7d8;
                          if (local_7d8 <= 0.0) {
                            dVar39 = 0.0;
                          }
                          if (dVar39 <= dVar26) {
                            dVar26 = dVar39;
                          }
                          dVar25 = dVar25 - dVar26;
                          if (0.0 <= dVar25) {
                            dVar25 = 0.0;
                          }
                          uVar27 = (*(code *)PTR_round_with_step_f64_001e79b0)
                                             (dVar25,adStack_728[4],1);
                          uVar18 = (*(code *)PTR_get_quote_vol_001e7af8)
                                             (uVar27,pppppppuStack_520,bVar8,1);
                          if ((uVar18 & 1) != 0) {
                            uVar27 = (*(code *)PTR_round_with_step_f64_001e79b0)
                                               (extraout_XMM0_Qa,adStack_728[4],1);
                            local_7d8 = (double)strategy_sm4::apply_book_vol_cap
                                                          (uVar27,local_818,adStack_728[4],bVar8,0,
                                                           &local_140,&local_648);
                            dStack_7d0 = extraout_XMM0_Qb;
                            pdVar17 = (double *)
                                      strategy_sm4::cancel_order_use_range
                                                (local_818,dStack_c8 - (double)local_748,param_3,
                                                 local_828,local_820,0,adStack_728 + 1);
                    /* try { // try from 00142605 to 00142618 has its CatchHandler @ 001430f7 */
                            if ((pdVar17 == (double *)0x0) &&
                               ((bVar8 != 0 ||
                                (pdVar17 = (double *)
                                           strategy_sm4::cancel_side
                                                     (param_3,local_828,local_820,0,adStack_728 + 1)
                                , pdVar17 == (double *)0x0)))) {
                              strategy_sm4::live_pending_counts
                                        (param_3,local_828,local_820,adStack_728[2],adStack_728[3]);
                              if ((DAT_00117ef8 < (double)(_DAT_00117fd0 & (ulong)local_7d8)) &&
                                 (extraout_RDX == 0)) {
                                adStack_728[0] =
                                     (double)(*(code *)PTR_round_001e79d0)(local_738 * DAT_00117f48)
                                ;
                                adStack_728[0] = adStack_728[0] / DAT_00117f48;
                                local_808 = &local_6e0;
                                pdStack_800 = (double *)PTR_fmt_001e7a78;
                                local_7f8 = &pppppppuStack_7c8;
                                local_7f0 = (undefined8 ******)
                                            _<alloc::string::String_as_core::fmt::Display>::fmt;
                                pdStack_7e8 = adStack_728;
                                local_7e0 = (undefined8 *******)PTR_fmt_001e7a78;
                                local_788 = (undefined8 ******)&DAT_001e1950;
                                puStack_780 = (undefined *)0x3;
                                pdStack_768 = (double *)0x0;
                                ppppppuStack_770 = (undefined8 ******)0x3;
                    /* try { // try from 00141ffe to 00142154 has its CatchHandler @ 001430f7 */
                                local_778 = &local_808;
                                (*(code *)PTR_format_inner_001e79c8)(&uStack_188,&local_788);
                                uStack_1b0 = 0x802;
                                dStack_1e0 = local_818;
                                dStack_1d8 = local_7d8;
                                ppppppuStack_1d0 = local_758;
                                dStack_1c8 = local_6f8;
                                pppppppuStack_1c0 = local_488;
                                ppppppuStack_1b8 = local_5b8;
                                uStack_1f8 = uStack_188;
                                uStack_1f0 = uStack_180;
                                uStack_1e8 = uStack_178;
                                pdVar17 = (double *)
                                          (*(code *)PTR_place_order_iap_with_target_001e7b00)
                                                    (local_798,param_3,&uStack_1f8,uVar21);
                                if (pdVar17 != (double *)0x0) goto LAB_00142b4a;
                                if ((char)local_4e4 != '\0') {
                                  (*(code *)PTR_clone_001e79f0)
                                            (&local_6d8,&local_830,
                                             &PTR_s_strategies_index_strategy_strate_001e19e0);
                                  local_788 = local_758;
                                  puStack_780 = local_748;
                                  local_778 = local_7a8;
                                  alloc::collections::btree::map::BTreeMap<K,V,A>::insert
                                            (&local_808,local_7a0 + 0x76,&local_6d8,&local_788);
                                }
                              }
                              goto LAB_00142e55;
                            }
                            goto LAB_00142b4a;
                          }
                    /* try { // try from 00143000 to 0014300c has its CatchHandler @ 001430f7 */
                          (*(code *)PTR_unwrap_failed_001e7948)
                                    (&PTR_s_strategies_index_strategy_strate_001e19c8);
                          goto LAB_0014302b;
                        }
                        break;
                      case '\x03':
                        if ((_DAT_00117fb8 <= local_7d8) || (dStack_5b0 / _s__00117fb0 <= local_738)
                           ) {
                          if (0.0 <= local_7d8) goto override_jmp_0014189b_case_4;
                    /* try { // try from 001419da to 00141a01 has its CatchHandler @ 0014302d */
                          (*(code *)PTR_get_quote_price_001e7af0)
                                    (local_818,dStack_810,local_748,local_758,uStack_5c0,local_5c8,
                                     &local_808,3,&local_498);
                          bVar8 = (byte)pdStack_800;
                          uVar18 = (ulong)pdStack_800 & 0xff;
                          pdStack_7b8 = pdStack_7e8;
                          pppppppuStack_7c8 = local_7f8;
                          ppppppuStack_7c0 = local_7f0;
                    /* try { // try from 00141a28 to 00141a41 has its CatchHandler @ 001430f3 */
                          local_818 = (double)(*(code *)PTR_round_with_step_f64_001e79b0)
                                                        (local_808,local_798,1);
                          uVar21 = 1;
                          if (bVar8 - 1 < 2) {
                            local_798 = local_528;
                          }
                          else if (bVar8 == 0) {
                            local_798 = DAT_00117ec0;
                          }
                          else {
                            uVar21 = 0;
                          }
                          dVar25 = (double)(~-(ulong)((double)local_588 < 0.0) & (ulong)local_588 |
                                           -(ulong)((double)local_588 < 0.0) & DAT_00117eb8);
                          dVar38 = ((double)(~-(ulong)(dStack_580 < 0.0) & (ulong)dStack_580 |
                                            DAT_00117eb8 & -(ulong)(dStack_580 < 0.0)) / local_6b8)
                                   / (double)local_748;
                          dVar39 = dVar38;
                          if (dVar25 <= dVar38) {
                            dVar39 = dVar25;
                          }
                          dVar25 = (double)(~-(ulong)NAN(dVar25) & (ulong)dVar39 |
                                           -(ulong)NAN(dVar25) & (ulong)dVar38);
                          dVar39 = local_7d8;
                          if (0.0 <= local_7d8) {
                            dVar39 = 0.0;
                          }
                          if ((double)((ulong)dVar39 ^ _DAT_001185d0) <= dVar25) {
                            dVar25 = (double)((ulong)dVar39 ^ _DAT_001185d0);
                          }
                    /* try { // try from 001426be to 001427a8 has its CatchHandler @ 001430f3 */
                          uVar27 = (*(code *)PTR_round_with_step_f64_001e79b0)
                                             (dVar25,adStack_728[4],1);
                          uVar18 = (*(code *)PTR_get_quote_vol_001e7af8)
                                             (uVar27,pppppppuStack_520,uVar18,1);
                          if ((uVar18 & 1) != 0) {
                            uVar27 = (*(code *)PTR_round_with_step_f64_001e79b0)
                                               (extraout_XMM0_Qa_01,adStack_728[4],1);
                            local_7d8 = (double)strategy_sm4::apply_book_vol_cap
                                                          (uVar27,local_818,adStack_728[4],bVar8,1,
                                                           &local_140,&local_648);
                            dStack_7d0 = extraout_XMM0_Qb_01;
                            pdVar17 = (double *)
                                      strategy_sm4::cancel_order_use_range
                                                (local_818,(double)local_758 - dStack_78,param_3,
                                                 local_828,local_820,1,adStack_728 + 1);
                    /* try { // try from 00142f22 to 00142f38 has its CatchHandler @ 001430f3 */
                            if ((pdVar17 == (double *)0x0) &&
                               ((bVar8 != 0 ||
                                (pdVar17 = (double *)
                                           strategy_sm4::cancel_side
                                                     (param_3,local_828,local_820,1,adStack_728 + 1)
                                , pdVar17 == (double *)0x0)))) {
                              lVar16 = strategy_sm4::live_pending_counts
                                                 (param_3,local_828,local_820,adStack_728[2],
                                                  adStack_728[3]);
                              if ((DAT_00117ef8 < (double)(_DAT_00117fd0 & (ulong)local_7d8)) &&
                                 (lVar16 == 0)) {
                                adStack_728[0] =
                                     (double)(*(code *)PTR_round_001e79d0)(local_738 * DAT_00117f48)
                                ;
                                adStack_728[0] = adStack_728[0] / DAT_00117f48;
                                local_808 = &local_6e0;
                                pdStack_800 = (double *)PTR_fmt_001e7a78;
                                local_7f8 = &pppppppuStack_7c8;
                                local_7f0 = (undefined8 ******)
                                            _<alloc::string::String_as_core::fmt::Display>::fmt;
                                pdStack_7e8 = adStack_728;
                                local_7e0 = (undefined8 *******)PTR_fmt_001e7a78;
                                local_788 = (undefined8 ******)&DAT_001e1950;
                                puStack_780 = (undefined *)0x3;
                                pdStack_768 = (double *)0x0;
                                ppppppuStack_770 = (undefined8 ******)0x3;
                    /* try { // try from 00142875 to 001429da has its CatchHandler @ 001430f3 */
                                local_778 = &local_808;
                                (*(code *)PTR_format_inner_001e79c8)(&uStack_158,&local_788);
                                bStack_28f = (byte)local_658 | 6;
                                uStack_290 = 3;
                                dStack_2c0 = local_818;
                                dStack_2b8 = local_7d8;
                                puStack_2b0 = local_748;
                                dStack_2a8 = local_6f8;
                                puStack_2a0 = local_480;
                                ppppppuStack_298 = local_5b8;
                                uStack_2d8 = uStack_158;
                                uStack_2d0 = uStack_150;
                                uStack_2c8 = uStack_148;
                                pdVar17 = (double *)
                                          (*(code *)PTR_place_order_iap_with_target_001e7b00)
                                                    (local_798,param_3,&uStack_2d8,uVar21);
                                if (pdVar17 != (double *)0x0) goto LAB_00142b4a;
                                if ((char)local_4e4 != '\0') {
                                  (*(code *)PTR_clone_001e79f0)
                                            (&local_6d8,&local_830,
                                             &PTR_s_strategies_index_strategy_strate_001e1a10);
                                  local_788 = local_758;
                                  puStack_780 = local_748;
                                  local_778 = local_7a8;
                                  alloc::collections::btree::map::BTreeMap<K,V,A>::insert
                                            (&local_808,local_7a0 + 0x76,&local_6d8,&local_788);
                                }
                              }
                              goto LAB_00142e55;
                            }
                            goto LAB_00142b4a;
                          }
                    /* try { // try from 0014300f to 0014301b has its CatchHandler @ 001430f3 */
                          (*(code *)PTR_unwrap_failed_001e7948)
                                    (&PTR_s_strategies_index_strategy_strate_001e19f8);
                          goto LAB_0014302b;
                        }
                        break;
                      case '\x04':
                        goto override_jmp_0014189b_case_4;
                      }
                      pdVar17 = (double *)0x0;
LAB_00142b6a:
                    /* try { // try from 00142b6a to 00142b76 has its CatchHandler @ 001430ad */
                      _<hashbrown::raw::RawTable<T,A>as_core::ops::drop::Drop>::drop(&local_4d8);
                      core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>
                                (adStack_728 + 1);
                    }
                    else {
                      pdVar17 = (double *)0x0;
                    }
LAB_00142b87:
                    if (local_120 != 0) {
                      (*(code *)PTR___rust_dealloc_001e78c8)(local_118,local_120,1);
                    }
                  }
                  if (local_690 != 0) {
                    (*(code *)PTR___rust_dealloc_001e78c8)(local_688,local_690,1);
                  }
                  lVar16 = local_668;
                  if (local_830 != (undefined8 ******)0x0) {
                    (*(code *)PTR___rust_dealloc_001e78c8)(local_828,local_830,1);
                    lVar16 = local_668;
                  }
                  goto LAB_00140c31;
                }
                break;
              }
              lVar22 = lVar22 + 0x18;
            } while (lVar6 != lVar22);
            pdVar17 = (double *)0x0;
            local_660 = lVar10;
LAB_00140c31:
            puVar7 = PTR___rust_dealloc_001e78c8;
            local_668 = lVar16;
            if (local_660 != 0) {
              puVar19 = (undefined8 *)(lVar16 + 8);
              lVar16 = local_660;
              do {
                if (puVar19[-1] != 0) {
                  (*(code *)puVar7)(*puVar19,puVar19[-1],1);
                }
                puVar19 = puVar19 + 3;
                lVar16 = lVar16 + -1;
              } while (lVar16 != 0);
            }
          }
          if (local_670 != 0) {
            (*(code *)PTR___rust_dealloc_001e78c8)(local_668,local_670 * 0x18,8);
          }
        }
        if (local_648 != (undefined8 ******)0x0) {
          (*(code *)PTR___rust_dealloc_001e78c8)(pdStack_640,local_648,1);
        }
        if (local_630 != 0) {
          (*(code *)PTR___rust_dealloc_001e78c8)(plStack_628,local_630,1);
        }
        if (local_618 != 0.0) {
          (*(code *)PTR___rust_dealloc_001e78c8)(local_610,(long)local_618 << 3,8);
        }
        if (local_600 != (undefined8 ******)0x0) {
          (*(code *)PTR___rust_dealloc_001e78c8)(pdStack_5f8,local_600,1);
        }
        puVar7 = PTR___rust_dealloc_001e78c8;
        if (local_350 != 0) {
          puVar19 = (undefined8 *)(local_358 + 8);
          lVar16 = local_350;
          do {
            if (puVar19[-1] != 0) {
              (*(code *)puVar7)(*puVar19,puVar19[-1],1);
            }
            puVar19 = puVar19 + 3;
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
        }
        if (local_360 != 0) {
          (*(code *)PTR___rust_dealloc_001e78c8)(local_358,local_360 * 0x18,8);
        }
        return pdVar17;
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001e78e8)();
      uVar21 = 8;
      lVar16 = (*(code *)PTR___rust_alloc_001e78c0)(uVar18,8);
      dVar38 = dVar39;
      if (lVar16 != 0) goto LAB_001406f0;
    }
    else {
      uVar21 = 0;
    }
                    /* try { // try from 0014067a to 0014068c has its CatchHandler @ 00143230 */
    (*(code *)PTR_handle_error_001e7970)
              (uVar21,uVar18,anon_6f943687bdd6e710d6695cc1d1c13590_13_llvm_7346471370157798290);
  }
LAB_0014302b:
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}




// ELF address 0x00000000000686f0; fb_strategy_sdk_abi_version

undefined8 fb_strategy_sdk_abi_version(void)

{
  return 4;
}




// ELF address 0x0000000000068700; fb_strategy_sdk_version_str

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
  (*(code *)PTR_memcpy_001e7928)
            (param_1,"0.6.0[fb_plugin] on_begin error: \n[fb_plugin] on_signal error: ",uVar2);
  if (param_2 != 0) {
    *(undefined1 *)(param_1 + uVar2) = 0;
  }
  return uVar2;
}


