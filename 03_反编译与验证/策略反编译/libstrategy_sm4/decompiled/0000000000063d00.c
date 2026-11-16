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


