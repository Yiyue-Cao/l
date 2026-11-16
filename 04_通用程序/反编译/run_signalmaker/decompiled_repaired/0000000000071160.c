// ELF address 0x0000000000071160; run_signalmaker::SignalMakerSweepGrid::apply_config

/* WARNING: Removing unreachable block (ram,0x00171a80) */
/* WARNING: Removing unreachable block (ram,0x00171a85) */
/* WARNING: Removing unreachable block (ram,0x00171a96) */
/* WARNING: Removing unreachable block (ram,0x00171aab) */
/* run_signalmaker::SignalMakerSweepGrid::apply_config */

long __rustcall run_signalmaker::SignalMakerSweepGrid::apply_config(long *param_1,code *param_2)

{
  char cVar1;
  code *pcVar2;
  undefined *puVar3;
  int *****pppppiVar4;
  char ******ppppppcVar5;
  long *plVar6;
  int *piVar7;
  long lVar8;
  int *******pppppppiVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  uint uVar16;
  long lVar17;
  undefined1 auVar18 [16];
  int *****local_160;
  code *local_158;
  long local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  char ******local_138;
  ulong local_130;
  ulong uStack_128;
  undefined8 local_120;
  char ******local_118;
  ulong local_110;
  char ******local_108;
  int ******local_100;
  undefined8 local_f8;
  long *local_f0;
  char ******local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  char ******local_d8;
  code *local_d0;
  char ******local_c8;
  ulong local_c0;
  char ******local_b8;
  int ****local_b0;
  undefined8 local_a8;
  long local_a0;
  char ******local_98;
  ulong local_90;
  int ******local_88;
  code *local_80;
  char ******local_78;
  long local_70;
  char ******local_68;
  undefined1 local_60 [24];
  undefined1 local_48 [24];
  
  local_160 = (int *****)0x11b020;
  local_158 = (code *)0x1c;
  piVar7 = (int *)(*(code *)PTR_get_002b29a0)(param_2,"signalmaker_sweep.signal_all",0x1c);
  if (piVar7 != (int *)0x0) {
    if (*piVar7 != 7) goto LAB_0017182f;
    pppppppiVar9 = *(int ********)(piVar7 + 0xc);
    if (pppppppiVar9 == (int *******)0x0) {
      lVar8 = 8;
    }
    else {
      lVar17 = (long)pppppppiVar9 * 8;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b2928)();
      lVar8 = (*(code *)PTR___rust_alloc_002b2900)(lVar17,8);
      if (lVar8 == 0) {
        uVar10 = (*(code *)PTR_handle_error_002b2a30)
                           (8,lVar17,&
                                     PTR_anon_52b3106212fa17b89ed124d311d91c84_8_llvm_18028058375776711367_002a5c70
                           );
                    /* catch() { ... } // from try @ 00171bf4 with catch @ 00171cb1 */
        pppppppiVar9[2] = (int ******)local_138;
        *(int *)pppppppiVar9 = (int)local_148;
        *(int *)((long)pppppppiVar9 + 4) = local_148._4_4_;
        *(int *)(pppppppiVar9 + 1) = (int)uStack_140;
        *(int *)((long)pppppppiVar9 + 0xc) = uStack_140._4_4_;
        if ((int ******)local_160 != (int ******)0x0) {
          (*(code *)PTR___rust_dealloc_002b2908)(local_158,(long)local_160 << 3,8);
        }
        if (local_b0 != (int ****)0x0) {
          (*(code *)PTR___rust_dealloc_002b2908)(local_a8,(long)local_b0 << 3,8);
        }
                    /* try { // try from 00171d1e to 00171dbb has its CatchHandler @ 00171dbe */
        _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop(&local_c8);
        if ((char)lVar17 != '\0') {
          _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop
                    (&local_e8);
        }
                    /* WARNING: Subroutine does not return */
        _Unwind_Resume(uVar10);
      }
    }
    local_138 = (char ******)0x0;
    local_148 = (undefined **)pppppppiVar9;
    uStack_140 = lVar8;
                    /* try { // try from 00171201 to 00171209 has its CatchHandler @ 00171dc4 */
    auVar18 = (*(code *)PTR_iter_002b2ae8)(piVar7 + 2);
    puVar11 = auVar18._8_8_;
    uVar10 = auVar18._0_8_;
    pcVar2 = (code *)puVar11[3];
    local_f0 = param_1;
    local_d0 = param_2;
                    /* try { // try from 00171241 to 0017126e has its CatchHandler @ 00171dc9 */
    while (piVar7 = (int *)(*pcVar2)(uVar10), param_2 = local_d0, ppppppcVar5 = local_138,
          piVar7 != (int *)0x0) {
      if (*piVar7 != 3) {
                    /* try { // try from 00171727 to 00171730 has its CatchHandler @ 00171d97 */
        lVar8 = read_i64_vec::___closure__(&local_160);
        if ((code *)*puVar11 != (code *)0x0) {
                    /* try { // try from 00171740 to 00171744 has its CatchHandler @ 00171d56 */
          (*(code *)*puVar11)(uVar10);
        }
        if (puVar11[1] != 0) {
          (*(code *)PTR___rust_dealloc_002b2908)(uVar10,puVar11[1],puVar11[2]);
        }
        goto LAB_0017175b;
      }
      uVar12 = *(undefined8 *)(piVar7 + 0x14);
      if (local_138 == (char ******)local_148) {
        alloc::raw_vec::RawVec<T,A>::grow_one
                  (&local_148,
                   &PTR_anon_52b3106212fa17b89ed124d311d91c84_8_llvm_18028058375776711367_002a5c88);
      }
      *(undefined8 *)(uStack_140 + (long)ppppppcVar5 * 8) = uVar12;
      local_138 = (char ******)((long)ppppppcVar5 + 1);
    }
    if ((code *)*puVar11 != (code *)0x0) {
                    /* try { // try from 00171285 to 00171289 has its CatchHandler @ 00171d58 */
      (*(code *)*puVar11)(uVar10);
    }
    param_1 = local_f0;
    if (puVar11[1] != 0) {
      (*(code *)PTR___rust_dealloc_002b2908)(uVar10,puVar11[1],puVar11[2]);
    }
                    /* try { // try from 001712b9 to 001712bd has its CatchHandler @ 00171dc4 */
    lVar8 = ensure_unique_signals(uStack_140,local_138,local_160,local_158);
    ppppppcVar5 = local_138;
    lVar17 = uStack_140;
    pppppppiVar9 = (int *******)local_148;
    if (lVar8 != 0) {
LAB_0017175b:
      if ((int *******)local_148 == (int *******)0x0) {
        return lVar8;
      }
      (*(code *)PTR___rust_dealloc_002b2908)(uStack_140,(long)local_148 << 3,8);
      return lVar8;
    }
    if ((int *******)local_148 == (int *******)0x8000000000000001) {
      return uStack_140;
    }
    if (*param_1 != 0) {
      (*(code *)PTR___rust_dealloc_002b2908)(param_1[1],*param_1 << 3,8);
    }
    *param_1 = (long)pppppppiVar9;
    param_1[1] = lVar17;
    param_1[2] = (long)ppppppcVar5;
  }
  local_160 = (int *****)0x11b03c;
  local_158 = (code *)0x1c;
  piVar7 = (int *)(*(code *)PTR_get_002b29a0)(param_2,"signalmaker_sweep.open_score",0x1c);
  if (piVar7 != (int *)0x0) {
    if (*piVar7 != 7) {
LAB_0017182f:
      lVar8 = read_f64_vec::___closure__(&local_160);
      return lVar8;
    }
    parse_f64_array(&local_148,piVar7 + 2,"signalmaker_sweep.open_score",0x1c);
    ppppppcVar5 = local_138;
    lVar8 = uStack_140;
    pppppppiVar9 = (int *******)local_148;
    if (param_1[3] != 0) {
      (*(code *)PTR___rust_dealloc_002b2908)(param_1[4],param_1[3] << 3,8);
    }
    param_1[3] = (long)pppppppiVar9;
    param_1[4] = lVar8;
    param_1[5] = (long)ppppppcVar5;
  }
  piVar7 = (int *)(*(code *)PTR_get_002b29a0)
                            (param_2,"signalmaker_sweep.open_scores_by_signal",0x27);
  if (piVar7 == (int *)0x0) {
    lVar8 = param_1[1];
    lVar17 = param_1[2];
LAB_0017178c:
    lVar8 = ensure_unique_signals(lVar8,lVar17,"signalmaker_sweep.signal_all",0x1c);
    return lVar8;
  }
  local_f0 = param_1;
  if (*piVar7 != 10) {
    local_148 = &PTR_s_signalmaker_sweep_open_scores_002a5b10;
    uStack_140 = 1;
    local_138 = (char ******)0x8;
    local_130 = 0;
    uStack_128 = 0;
    lVar8 = anyhow::__private::format_err(&local_148);
    return lVar8;
  }
  local_e8 = (char ******)0x0;
  local_d8 = (char ******)0x0;
                    /* try { // try from 001713fd to 00171405 has its CatchHandler @ 00171d77 */
  auVar18 = (*(code *)PTR_iter_002b2af0)(piVar7 + 2);
  puVar3 = PTR___rust_dealloc_002b2908;
  puVar11 = auVar18._8_8_;
  local_d0 = (code *)puVar11[3];
  uVar10 = auVar18._0_8_;
                    /* try { // try from 00171430 to 0017164e has its CatchHandler @ 00171d99 */
  while ((*local_d0)(&local_c8,uVar10), ppppppcVar5 = local_b8, plVar6 = local_f0,
        (int *******)local_c8 != (int *******)0x0) {
    local_98 = local_c8;
    local_90 = local_c0;
    if (local_c0 == 1) {
      cVar1 = *(char *)local_c8;
      uVar12 = 1;
      if ((cVar1 != '+') && (cVar1 != '-')) goto LAB_00171496;
      goto LAB_001717a4;
    }
    if (local_c0 == 0) {
      uVar12 = 0;
      goto LAB_001717a4;
    }
    cVar1 = *(char *)local_c8;
LAB_00171496:
    if (cVar1 == '-') {
      if (local_c0 < 0x11) {
        if (local_c0 == 1) {
LAB_001715e7:
          lVar8 = 0;
        }
        else {
          uVar13 = 1;
          lVar8 = 0;
          do {
            uVar16 = *(byte *)((long)local_c8 + uVar13) - 0x30;
            if (9 < uVar16) goto LAB_001717a2;
            lVar8 = lVar8 * 10 - (ulong)uVar16;
            uVar13 = uVar13 + 1;
          } while (local_c0 != uVar13);
        }
      }
      else {
        uVar13 = 1;
        lVar8 = 0;
        while (local_c0 != uVar13) {
          lVar17 = lVar8 * 10;
          uVar16 = *(byte *)((long)local_c8 + uVar13) - 0x30;
          if (9 < uVar16) goto LAB_001717a2;
          uVar12 = 3;
          if (SEXT816(lVar17) != SEXT816(lVar8) * SEXT816(10)) goto LAB_001717a4;
          uVar13 = uVar13 + 1;
          lVar8 = lVar17 - (ulong)uVar16;
          if (SBORROW8(lVar17,(ulong)uVar16)) goto LAB_001717a4;
        }
      }
    }
    else {
      if (cVar1 == '+') {
        pppppppiVar9 = (int *******)((long)local_c8 + 1);
        uVar13 = local_c0 - 1;
        if (0x10 < local_c0) {
LAB_00171561:
          uVar14 = 0;
          lVar8 = 0;
          while (uVar13 != uVar14) {
            lVar17 = lVar8 * 10;
            uVar16 = *(byte *)((long)pppppppiVar9 + uVar14) - 0x30;
            if (9 < uVar16) goto LAB_001717a2;
            uVar12 = 2;
            if (SEXT816(lVar17) != SEXT816(lVar8) * SEXT816(10)) goto LAB_001717a4;
            uVar14 = uVar14 + 1;
            lVar8 = lVar17 + (ulong)uVar16;
            if (SCARRY8(lVar17,(ulong)uVar16)) goto LAB_001717a4;
          }
          goto LAB_001715ea;
        }
        if (uVar13 == 0) goto LAB_001715e7;
      }
      else {
        pppppppiVar9 = (int *******)local_c8;
        uVar13 = local_c0;
        if (0xf < local_c0) goto LAB_00171561;
      }
      uVar14 = 0;
      lVar8 = 0;
      do {
        uVar16 = *(byte *)((long)pppppppiVar9 + uVar14) - 0x30;
        if (9 < uVar16) goto LAB_001717a2;
        lVar8 = (ulong)uVar16 + lVar8 * 10;
        uVar14 = uVar14 + 1;
      } while (uVar13 != uVar14);
    }
LAB_001715ea:
    if (*(int *)local_b8 != 7) {
                    /* try { // try from 00171a6e to 00171a7a has its CatchHandler @ 00171d54 */
      lVar8 = apply_config::___closure__(&local_98);
      goto LAB_001717b4;
    }
    local_88 = (int ******)&local_98;
    local_80 = _<&T_as_core::fmt::Display>::fmt;
    local_148 = &PTR_s_open_scores_by_signal__002a5b40;
    uStack_140 = 1;
    uStack_128 = 0;
    local_130 = 1;
    local_138 = (char ******)&local_88;
    (*(code *)PTR_format_inner_002b2978)(&local_160,&local_148);
    pcVar2 = local_158;
    pppppiVar4 = local_160;
                    /* try { // try from 00171667 to 001716c9 has its CatchHandler @ 00171d7c */
    local_f8 = uVar10;
    parse_f64_array(&local_148,ppppppcVar5 + 1,local_158,local_150);
    local_78 = (char ******)local_148;
    local_70 = uStack_140;
    local_68 = local_138;
    alloc::collections::btree::map::BTreeMap<K,V,A>::insert(&local_b0,&local_e8,lVar8,&local_78);
    if ((local_b0 != (int ****)0x8000000000000000) && (local_b0 != (int ****)0x0)) {
      (*(code *)puVar3)(local_a8,(long)local_b0 << 3,8);
    }
    uVar10 = local_f8;
    if ((int ******)pppppiVar4 != (int ******)0x0) {
      (*(code *)puVar3)(pcVar2,pppppiVar4,1);
      uVar10 = local_f8;
    }
  }
  if ((code *)*puVar11 != (code *)0x0) {
                    /* try { // try from 00171853 to 00171857 has its CatchHandler @ 00171cea */
    (*(code *)*puVar11)(uVar10);
  }
  if (puVar11[1] != 0) {
    (*(code *)PTR___rust_dealloc_002b2908)(uVar10,puVar11[1],puVar11[2]);
  }
  lVar8 = plVar6[1];
  lVar17 = plVar6[2];
                    /* try { // try from 0017187d to 0017188f has its CatchHandler @ 00171d77 */
  _<alloc::collections::btree::set::BTreeSet<T>as_core::iter::traits::collect::FromIterator<T>>::
  from_iter(&local_c8,lVar8,lVar8 + lVar17 * 8);
  local_110 = CONCAT44(uStack_dc,uStack_e0);
  local_108 = local_e8;
  if ((int *******)local_e8 != (int *******)0x0) {
    local_108 = local_d8;
  }
  local_148 = (undefined **)(ulong)((int *******)local_e8 != (int *******)0x0);
  uStack_140 = 0;
  local_138 = local_e8;
  local_120 = 0;
  local_118 = local_e8;
                    /* try { // try from 001718f6 to 00171911 has its CatchHandler @ 00171cec */
  uStack_128 = (ulong)local_148;
  local_100 = (int ******)&local_c8;
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (&local_b0,&local_148,
             &PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_002a5720);
  if (local_a0 == 0) {
    local_108 = local_c8;
    if ((int *******)local_c8 != (int *******)0x0) {
      local_108 = local_b8;
    }
    local_148 = (undefined **)(ulong)((int *******)local_c8 != (int *******)0x0);
    uStack_140 = 0;
    local_138 = local_c8;
    local_130 = local_c0;
    local_120 = 0;
    local_118 = local_c8;
    local_110 = local_c0;
    local_100 = (int ******)&local_e8;
                    /* try { // try from 00171b1b to 00171b33 has its CatchHandler @ 00171cf4 */
    uStack_128 = (ulong)local_148;
    _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
              (&local_160,&local_148,
               &PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_002a5720);
    plVar6 = local_f0;
    if (local_150 == 0) {
      local_138 = local_d8;
      local_148 = (undefined **)local_e8;
      uStack_140 = CONCAT44(uStack_dc,uStack_e0);
      plVar15 = local_f0 + 6;
                    /* try { // try from 00171bf4 to 00171bfb has its CatchHandler @ 00171cb1 */
      _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop(plVar15);
      plVar6[8] = (long)local_138;
      *(int *)plVar15 = (int)local_148;
      *(int *)((long)plVar6 + 0x34) = local_148._4_4_;
      *(int *)(plVar6 + 7) = (int)uStack_140;
      *(int *)((long)plVar6 + 0x3c) = uStack_140._4_4_;
      if ((int ******)local_160 != (int ******)0x0) {
        (*(code *)PTR___rust_dealloc_002b2908)(local_158,(long)local_160 << 3,8);
      }
      if (local_b0 != (int ****)0x0) {
        (*(code *)PTR___rust_dealloc_002b2908)(local_a8,(long)local_b0 << 3,8);
      }
      _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop(&local_c8);
      goto LAB_0017178c;
    }
    local_80 = _<alloc::vec::Vec<T,A>as_core::fmt::Debug>::fmt;
    local_148 = &PTR_s_open_scores_by_signal_must_cover_002a5b20;
    uStack_140 = 1;
    uStack_128 = 0;
    local_130 = 1;
                    /* try { // try from 00171b87 to 00171ba6 has its CatchHandler @ 00171cc7 */
    local_138 = (char ******)&local_88;
    local_88 = &local_160;
    (*(code *)PTR_format_inner_002b2978)(local_48,&local_148);
    lVar8 = anyhow::error::_<impl_anyhow::Error>::msg(local_48);
    if ((int ******)local_160 != (int ******)0x0) {
      (*(code *)PTR___rust_dealloc_002b2908)(local_158,(long)local_160 << 3,8);
    }
  }
  else {
    local_158 = _<alloc::vec::Vec<T,A>as_core::fmt::Debug>::fmt;
    local_148 = &PTR_s_open_scores_by_signal_contains_s_002a5b30;
    uStack_140 = 1;
    uStack_128 = 0;
    local_138 = (char ******)&local_160;
    local_130 = 1;
                    /* try { // try from 00171963 to 00171982 has its CatchHandler @ 00171cf4 */
    local_160 = &local_b0;
    (*(code *)PTR_format_inner_002b2978)(local_60,&local_148);
    lVar8 = anyhow::error::_<impl_anyhow::Error>::msg(local_60);
  }
  if (local_b0 != (int ****)0x0) {
    (*(code *)PTR___rust_dealloc_002b2908)(local_a8,(long)local_b0 << 3,8);
  }
                    /* try { // try from 001719aa to 001719b6 has its CatchHandler @ 00171d77 */
  _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop(&local_c8);
  goto joined_r0x001719c5;
LAB_001717a2:
  uVar12 = 1;
LAB_001717a4:
                    /* try { // try from 001717a4 to 001717b3 has its CatchHandler @ 00171d54 */
  lVar8 = apply_config::___closure__(&local_98,uVar12,uVar12);
LAB_001717b4:
  if ((code *)*puVar11 != (code *)0x0) {
                    /* try { // try from 001717c3 to 001717c7 has its CatchHandler @ 00171d35 */
    (*(code *)*puVar11)(uVar10);
  }
  if (puVar11[1] != 0) {
    (*(code *)PTR___rust_dealloc_002b2908)(uVar10,puVar11[1],puVar11[2]);
  }
joined_r0x001719c5:
  if ((int *******)local_e8 == (int *******)0x0) {
    local_108 = (char ******)0x0;
  }
  else {
    local_130 = CONCAT44(uStack_dc,uStack_e0);
    uStack_140 = 0;
    local_120 = 0;
    local_108 = local_d8;
    local_138 = local_e8;
    local_118 = local_e8;
    local_110 = local_130;
  }
  local_148 = (undefined **)(ulong)((int *******)local_e8 != (int *******)0x0);
  uStack_128 = (ulong)local_148;
  alloc::collections::btree::map::IntoIter<K,V,A>::dying_next(&local_160,&local_148);
  if ((int ******)local_160 != (int ******)0x0) {
    do {
      if ((int *****)local_160[local_150 * 3 + 0xc] != (int *****)0x0) {
        (*(code *)puVar3)(local_160[local_150 * 3 + 0xd],(long)local_160[local_150 * 3 + 0xc] << 3,8
                         );
      }
      alloc::collections::btree::map::IntoIter<K,V,A>::dying_next(&local_160,&local_148);
    } while ((int ******)local_160 != (int ******)0x0);
  }
  return lVar8;
}


