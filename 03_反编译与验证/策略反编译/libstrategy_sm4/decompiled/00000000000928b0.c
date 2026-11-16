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


