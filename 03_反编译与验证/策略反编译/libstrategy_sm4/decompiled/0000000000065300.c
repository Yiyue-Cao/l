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


