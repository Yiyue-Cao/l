// ELF address 0x0000000000893790; future_backtest::DataReader::matching_overlay::align_to_depth

/* WARNING: Removing unreachable block (ram,0x00994e32) */
/* WARNING: Removing unreachable block (ram,0x009941cd) */
/* WARNING: Removing unreachable block (ram,0x009939a5) */
/* WARNING: Removing unreachable block (ram,0x00994e40) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
_ZN15future_backtest10DataReader16matching_overlay14align_to_depth17he66d3cd3da3b00d7E
          (undefined1 (*param_1) [16],long param_2)

{
  double *pdVar1;
  undefined1 (**ppauVar2) [16];
  long *plVar3;
  long lVar4;
  ulong uVar5;
  code *pcVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  ulong uVar10;
  char cVar11;
  ushort uVar12;
  int iVar13;
  undefined *puVar14;
  ulong uVar15;
  undefined8 uVar16;
  ulong uVar17;
  long lVar18;
  uint uVar19;
  undefined1 (*pauVar20) [16];
  long lVar21;
  long lVar22;
  ulong uVar23;
  undefined1 (*pauVar24) [16];
  ulong uVar25;
  undefined1 (*pauVar26) [16];
  long lVar27;
  undefined1 (***pppauVar28) [16];
  byte bVar29;
  uint uVar30;
  long lVar31;
  ulong uVar32;
  undefined *puVar33;
  long *plVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  long lVar38;
  undefined1 (*pauVar39) [16];
  uint uVar40;
  long *in_FS_OFFSET;
  bool bVar41;
  byte bVar42;
  undefined4 uVar43;
  double dVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 (*pauStack_238) [16];
  ulong uStack_230;
  undefined1 (***pppauStack_228) [16];
  ulong uStack_220;
  undefined1 auStack_218 [16];
  undefined1 uStack_208;
  undefined1 (*pauStack_1f8) [16];
  undefined1 (*pauStack_1f0) [16];
  ulong uStack_1e0;
  ulong uStack_1d8;
  uint uStack_1cc;
  undefined *puStack_1c8;
  double dStack_1c0;
  undefined1 (*pauStack_1b0) [16];
  undefined1 auStack_1a8 [16];
  undefined1 (*pauStack_198) [16];
  ulong uStack_190;
  undefined1 (***pppauStack_188) [16];
  ulong uStack_180;
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [16];
  undefined1 auStack_158 [16];
  undefined1 (*pauStack_148) [16];
  ulong uStack_140;
  undefined1 (***pppauStack_138) [16];
  long lStack_130;
  undefined1 (*pauStack_128) [16];
  ulong uStack_120;
  undefined1 (***pppauStack_118) [16];
  ulong uStack_110;
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [16];
  undefined1 auStack_e8 [16];
  undefined1 (*pauStack_d8) [16];
  ulong uStack_d0;
  undefined1 (***pppauStack_c8) [16];
  long lStack_c0;
  undefined1 (**ppauStack_b8) [16];
  undefined1 (**ppauStack_b0) [16];
  long lStack_a8;
  ushort uStack_a0;
  long lStack_80;
  undefined1 (*pauStack_78) [16];
  undefined1 (*pauStack_70) [16];
  ulong uStack_68;
  undefined1 (*pauStack_60) [16];
  char cStack_58;
  undefined1 (*pauStack_50) [16];
  undefined1 auStack_48 [16];
  
  pauStack_198 = (undefined1 (*) [16])
                 _ZN107__LT_future_backtest__DataReader__matching_overlay__MATCHING_OVERLAY_u20_as_u20_core__ops__deref__Deref_GT_5deref11__stability4LAZY17h91405fbdc969216dE
  ;
  if (_ZN107__LT_future_backtest__DataReader__matching_overlay__MATCHING_OVERLAY_u20_as_u20_core__ops__deref__Deref_GT_5deref11__stability4LAZY17h91405fbdc969216dE
      ._64_4_ == 0) {
    uVar30 = _ZN107__LT_future_backtest__DataReader__matching_overlay__MATCHING_OVERLAY_u20_as_u20_core__ops__deref__Deref_GT_5deref11__stability4LAZY17h91405fbdc969216dE
             ._0_4_;
    if (0x3ffffffd <
        (uint)_ZN107__LT_future_backtest__DataReader__matching_overlay__MATCHING_OVERLAY_u20_as_u20_core__ops__deref__Deref_GT_5deref11__stability4LAZY17h91405fbdc969216dE
              ._0_4_) goto LAB_00994110;
LAB_009937d8:
    LOCK();
    bVar41 = uVar30 == *(uint *)*pauStack_198;
    if (bVar41) {
      *(uint *)*pauStack_198 = uVar30 + 1;
    }
    UNLOCK();
    if (!bVar41) goto LAB_00994110;
    cVar11 = (*pauStack_198)[8];
    pauVar24 = pauStack_198;
  }
  else {
    ppauStack_b8 = &pauStack_198;
    pauStack_238 = (undefined1 (*) [16])&ppauStack_b8;
    (*(code *)PTR__ZN3std3sys4sync4once5futex4Once4call17hd7d8230ff68e939bE_019fc288)
              (0x1a04818,0,&pauStack_238,&UNK_019494a0,&UNK_0194cf28);
    uVar30 = *(uint *)*pauStack_198;
    if (uVar30 < 0x3ffffffe) goto LAB_009937d8;
LAB_00994110:
    pauVar24 = pauStack_198;
    (*(code *)PTR__ZN3std3sys4sync6rwlock5futex6RwLock14read_contended17h4dfd949f85b6ef19E_019fd130)
              (pauStack_198);
    cVar11 = (*pauVar24)[8];
  }
  if (cVar11 != '\0') {
    pauStack_1f8 = (undefined1 (*) [16])
                   _ZN15future_backtest10DataReader16matching_overlay14align_to_depth28__u7b__u7b_closure_u7d__u7d_17h1b0b98bf886fbb75E
                             (pauVar24);
    uVar16 = 1;
    goto LAB_0099408f;
  }
  ppauVar2 = *(undefined1 (***) [16])pauVar24[1];
  lVar38 = *(long *)(pauVar24[1] + 8);
  pauStack_1f8 = *ppauVar2;
  pauStack_1f0 = ppauVar2[1];
  lVar18 = *(long *)(pauVar24[2] + 8);
  lVar21 = *in_FS_OFFSET;
  pauVar20 = (undefined1 (*) [16])(lVar21 + -0x30);
  if (*(char *)(lVar21 + -0x20) == '\x01') {
    auStack_218 = *pauVar20;
  }
  else {
    auStack_218 = (*(code *)
                    PTR__ZN3std3sys6random5linux19hashmap_random_keys17haac972767ca845fcE_019fc048)
                            ();
    *pauVar20 = auStack_218;
    *(undefined1 *)(lVar21 + -0x20) = 1;
  }
  *(long *)*pauVar20 = auStack_218._0_8_ + 1;
  pppauStack_228 = _DAT_019491c8;
  pauStack_238 = _DAT_019491b8;
  uStack_230 = _UNK_019491c0;
  uStack_220 = _UNK_019491d0;
  uStack_220 = _UNK_019491d0;
  if (lVar18 != 0) {
    (*(code *)
      PTR__ZN9hashbrown3raw21RawTable_LT_T_C_A_GT_14reserve_rehash17hd2e578d5e8724022E_019fd158)
              (&pauStack_238,lVar18,auStack_218,1);
  }
  lStack_a8 = (long)ppauVar2 + lVar38 + 1;
  auVar47._8_8_ = pauStack_1f0;
  auVar47._0_8_ = pauStack_1f8;
  uStack_a0 = ~((ushort)(SUB161(auVar47 >> 7,0) & 1) | (ushort)(SUB161(auVar47 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar47 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar47 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar47 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar47 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar47 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar47 >> 0x3f,0) & 1) << 7 |
                (ushort)((byte)((ulong)pauStack_1f0 >> 7) & 1) << 8 |
                (ushort)((byte)((ulong)pauStack_1f0 >> 0xf) & 1) << 9 |
                (ushort)((byte)((ulong)pauStack_1f0 >> 0x17) & 1) << 10 |
                (ushort)((byte)((ulong)pauStack_1f0 >> 0x1f) & 1) << 0xb |
                (ushort)((byte)((ulong)pauStack_1f0 >> 0x27) & 1) << 0xc |
                (ushort)((byte)((ulong)pauStack_1f0 >> 0x2f) & 1) << 0xd |
                (ushort)((byte)((ulong)pauStack_1f0 >> 0x37) & 1) << 0xe |
               (ushort)(byte)((ulong)pauStack_1f0 >> 0x3f) << 0xf);
  pauStack_128 = (undefined1 (*) [16])&pauStack_238;
  pauStack_198 = (undefined1 (*) [16])&pauStack_128;
  ppauStack_b0 = ppauVar2 + 2;
  ppauStack_b8 = ppauVar2;
  _ZN9hashbrown3raw21RawIterRange_LT_T_GT_9fold_impl17h0aef455545673f6eE
            (&ppauStack_b8,lVar18,&pauStack_198);
  pauStack_128 = pauStack_238;
  uStack_120 = uStack_230;
  pppauStack_118 = pppauStack_228;
  uStack_110 = uStack_220;
  LOCK();
  *(int *)*pauVar24 = *(int *)*pauVar24 + -1;
  UNLOCK();
  auStack_108 = auStack_218;
  if (uStack_220 != 0) {
    if (*(char *)(lVar21 + -0x20) == '\x01') {
      auStack_178 = *pauVar20;
    }
    else {
      auStack_178 = (*(code *)
                      PTR__ZN3std3sys6random5linux19hashmap_random_keys17haac972767ca845fcE_019fc048
                    )();
      *pauVar20 = auStack_178;
      *(undefined1 *)(lVar21 + -0x20) = 1;
    }
    *(long *)*pauVar20 = auStack_178._0_8_ + 1;
    pppauStack_188 = _DAT_019491c8;
    uStack_180 = _UNK_019491d0;
    pauStack_198 = _DAT_019491b8;
    uStack_190 = _UNK_019491c0;
    if (param_2 != 0) {
      pauStack_1f8 = (undefined1 (*) [16])(param_2 * 0x128 + (long)param_1);
LAB_009939c1:
      uVar16 = *(undefined8 *)(*param_1 + 8);
      lVar38 = *(long *)param_1[1];
      puVar14 = (undefined *)
                _ZN4core4hash11BuildHasher8hash_one17h4c80eaa158253d25E(auStack_108,uVar16,lVar38);
      uVar15 = uStack_120;
      pauVar24 = pauStack_128;
      bVar42 = (byte)((ulong)puVar14 >> 0x39);
      auVar47 = ZEXT216(CONCAT11(bVar42,bVar42));
      auVar47 = pshuflw(auVar47,auVar47,0);
      uVar43 = auVar47._0_4_;
      auVar49._4_4_ = uVar43;
      auVar49._0_4_ = uVar43;
      auVar49._8_4_ = uVar43;
      auVar49._12_4_ = uVar43;
      puVar33 = (undefined *)0x0;
      do {
        uVar35 = (ulong)puVar14 & uVar15;
        auVar47 = *(undefined1 (*) [16])(*pauVar24 + uVar35);
        auVar45[0] = -(auVar47[0] == auVar49[0]);
        auVar45[1] = -(auVar47[1] == auVar49[1]);
        auVar45[2] = -(auVar47[2] == auVar49[2]);
        auVar45[3] = -(auVar47[3] == auVar49[3]);
        auVar45[4] = -(auVar47[4] == auVar49[4]);
        auVar45[5] = -(auVar47[5] == auVar49[5]);
        auVar45[6] = -(auVar47[6] == auVar49[6]);
        auVar45[7] = -(auVar47[7] == auVar49[7]);
        auVar45[8] = -(auVar47[8] == auVar49[8]);
        auVar45[9] = -(auVar47[9] == auVar49[9]);
        auVar45[10] = -(auVar47[10] == auVar49[10]);
        auVar45[0xb] = -(auVar47[0xb] == auVar49[0xb]);
        auVar45[0xc] = -(auVar47[0xc] == auVar49[0xc]);
        auVar45[0xd] = -(auVar47[0xd] == auVar49[0xd]);
        auVar45[0xe] = -(auVar47[0xe] == auVar49[0xe]);
        auVar45[0xf] = -(auVar47[0xf] == auVar49[0xf]);
        uVar12 = (ushort)(SUB161(auVar45 >> 7,0) & 1) | (ushort)(SUB161(auVar45 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar45 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar45 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar45 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar45 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar45 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar45 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar45 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar45 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar45 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar45 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar45 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar45 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar45 >> 0x77,0) & 1) << 0xe | (ushort)(auVar45[0xf] >> 7) << 0xf
        ;
        uVar30 = (uint)uVar12;
        if (uVar12 != 0) {
LAB_00993a4d:
          auStack_158 = auVar49;
          auStack_1a8 = auVar47;
          puStack_1c8 = puVar33;
          uVar40 = 0;
          for (uVar19 = uVar30; (uVar19 & 1) == 0; uVar19 = uVar19 >> 1 | 0x80000000) {
            uVar40 = uVar40 + 1;
          }
          uVar17 = uVar40 + uVar35 & uVar15;
          if (lVar38 != *(long *)((long)pauVar24 + uVar17 * -0x18 + -8)) goto LAB_00993a90;
          iVar13 = (*(code *)PTR_bcmp_019fbf00)
                             (uVar16,*(undefined8 *)((long)pauVar24 + uVar17 * -0x18 + -0x10),lVar38
                             );
          if (iVar13 != 0) goto LAB_00993a90;
          _ZN9hashbrown11rustc_entry62__LT_impl_u20_hashbrown__map__HashMap_LT_K_C_V_C_S_C_A_GT__GT_11rustc_entry17h31a4c7293fdd6acdE
                    (&pauStack_238,&pauStack_198,uVar16,lVar38);
          uVar15 = uStack_230;
          if (pauStack_238 != (undefined1 (*) [16])0x0) {
            pauVar24 = (undefined1 (*) [16])*pppauStack_228;
            ppauVar2 = pppauStack_228[1];
            uVar15 = (ulong)ppauVar2 & uStack_220;
            auVar47 = *(undefined1 (*) [16])(*pauVar24 + uVar15);
            uVar12 = (ushort)(SUB161(auVar47 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar47 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar47 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar47 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar47 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar47 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar47 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar47 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar47 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar47 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar47 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar47 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar47 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar47 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar47 >> 0x77,0) & 1) << 0xe |
                     (ushort)(byte)(auVar47[0xf] >> 7) << 0xf;
            uVar30 = (uint)uVar12;
            if (uVar12 == 0) {
              lVar38 = 0x10;
              do {
                uVar15 = uVar15 + lVar38 & (ulong)ppauVar2;
                auVar47 = *(undefined1 (*) [16])(*pauVar24 + uVar15);
                lVar38 = lVar38 + 0x10;
                uVar30 = (uint)(ushort)((ushort)(SUB161(auVar47 >> 7,0) & 1) |
                                        (ushort)(SUB161(auVar47 >> 0xf,0) & 1) << 1 |
                                        (ushort)(SUB161(auVar47 >> 0x17,0) & 1) << 2 |
                                        (ushort)(SUB161(auVar47 >> 0x1f,0) & 1) << 3 |
                                        (ushort)(SUB161(auVar47 >> 0x27,0) & 1) << 4 |
                                        (ushort)(SUB161(auVar47 >> 0x2f,0) & 1) << 5 |
                                        (ushort)(SUB161(auVar47 >> 0x37,0) & 1) << 6 |
                                        (ushort)(SUB161(auVar47 >> 0x3f,0) & 1) << 7 |
                                        (ushort)(SUB161(auVar47 >> 0x47,0) & 1) << 8 |
                                        (ushort)(SUB161(auVar47 >> 0x4f,0) & 1) << 9 |
                                        (ushort)(SUB161(auVar47 >> 0x57,0) & 1) << 10 |
                                        (ushort)(SUB161(auVar47 >> 0x5f,0) & 1) << 0xb |
                                        (ushort)(SUB161(auVar47 >> 0x67,0) & 1) << 0xc |
                                        (ushort)(SUB161(auVar47 >> 0x6f,0) & 1) << 0xd |
                                        (ushort)(SUB161(auVar47 >> 0x77,0) & 1) << 0xe |
                                       (ushort)(byte)(auVar47[0xf] >> 7) << 0xf);
              } while (uVar30 == 0);
            }
            uVar40 = 0;
            for (; (uVar30 & 1) == 0; uVar30 = uVar30 >> 1 | 0x80000000) {
              uVar40 = uVar40 + 1;
            }
            uVar15 = uVar40 + uVar15 & (ulong)ppauVar2;
            bVar42 = (*pauVar24)[uVar15];
            if (-1 < (char)bVar42) {
              auVar47 = *pauVar24;
              uVar30 = 0;
              for (uVar40 = (uint)(ushort)((ushort)(SUB161(auVar47 >> 7,0) & 1) |
                                           (ushort)(SUB161(auVar47 >> 0xf,0) & 1) << 1 |
                                           (ushort)(SUB161(auVar47 >> 0x17,0) & 1) << 2 |
                                           (ushort)(SUB161(auVar47 >> 0x1f,0) & 1) << 3 |
                                           (ushort)(SUB161(auVar47 >> 0x27,0) & 1) << 4 |
                                           (ushort)(SUB161(auVar47 >> 0x2f,0) & 1) << 5 |
                                           (ushort)(SUB161(auVar47 >> 0x37,0) & 1) << 6 |
                                           (ushort)(SUB161(auVar47 >> 0x3f,0) & 1) << 7 |
                                           (ushort)(SUB161(auVar47 >> 0x47,0) & 1) << 8 |
                                           (ushort)(SUB161(auVar47 >> 0x4f,0) & 1) << 9 |
                                           (ushort)(SUB161(auVar47 >> 0x57,0) & 1) << 10 |
                                           (ushort)(SUB161(auVar47 >> 0x5f,0) & 1) << 0xb |
                                           (ushort)(SUB161(auVar47 >> 0x67,0) & 1) << 0xc |
                                           (ushort)(SUB161(auVar47 >> 0x6f,0) & 1) << 0xd |
                                           (ushort)(SUB161(auVar47 >> 0x77,0) & 1) << 0xe |
                                          (ushort)(byte)(auVar47[0xf] >> 7) << 0xf);
                  (uVar40 & 1) == 0; uVar40 = uVar40 >> 1 | 0x80000000) {
                uVar30 = uVar30 + 1;
              }
              uVar15 = (ulong)uVar30;
              bVar42 = (*pauVar24)[uVar15];
            }
            bVar29 = (byte)(uStack_220 >> 0x39);
            (*pauVar24)[uVar15] = bVar29;
            pauVar24[1][uVar15 - 0x10 & (ulong)ppauVar2] = bVar29;
            pppauStack_228[2] =
                 (undefined1 (**) [16])((long)pppauStack_228[2] - (ulong)(bVar42 & 1));
            *(undefined1 (**) [16])((long)pauVar24 + uVar15 * -0x28 + -0x28) = pauStack_238;
            *(ulong *)((long)pauVar24 + uVar15 * -0x28 + -0x20) = uStack_230;
            *(undefined8 *)((long)pauVar24 + uVar15 * -0x28 + -0x18) = 0;
            *(undefined8 *)((long)pauVar24 + uVar15 * -0x28 + -0x10) = 8;
            *(undefined8 *)((long)pauVar24 + uVar15 * -0x28 + -8) = 0;
            pppauStack_228[3] = (undefined1 (**) [16])((long)pppauStack_228[3] + 1);
            uVar15 = (long)pauVar24 + uVar15 * -0x28;
          }
          dVar44 = (double)(*(code *)PTR_round_019fc2b8)
                                     (*(double *)(param_1[2] + 8) * _DAT_00356b28);
          lVar38 = (long)dVar44;
          if (_DAT_00355348 < dVar44) {
            lVar38 = 0x7fffffffffffffff;
          }
          lVar18 = 0;
          if (!NAN(dVar44)) {
            lVar18 = lVar38;
          }
          lVar38 = *(long *)(uVar15 - 8);
          if (lVar38 == *(long *)(uVar15 - 0x18)) {
            (*(code *)
              PTR__ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h7bca316ddfe5152fE_019fd150)
                      (uVar15 - 0x18,&UNK_0194a080);
          }
          *(long *)(*(long *)(uVar15 - 0x10) + lVar38 * 8) = lVar18;
          *(long *)(uVar15 - 8) = lVar38 + 1;
          goto LAB_00993c70;
        }
LAB_00993ac0:
        auVar52[0] = -(auVar47[0] ==
                      anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[0]);
        auVar52[1] = -(auVar47[1] ==
                      anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[1]);
        auVar52[2] = -(auVar47[2] ==
                      anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[2]);
        auVar52[3] = -(auVar47[3] ==
                      anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[3]);
        auVar52[4] = -(auVar47[4] ==
                      anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[4]);
        auVar52[5] = -(auVar47[5] ==
                      anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[5]);
        auVar52[6] = -(auVar47[6] ==
                      anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[6]);
        auVar52[7] = -(auVar47[7] ==
                      anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[7]);
        auVar52[8] = -(auVar47[8] ==
                      anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[8]);
        auVar52[9] = -(auVar47[9] ==
                      anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[9]);
        auVar52[10] = -(auVar47[10] ==
                       anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[10]);
        auVar52[0xb] = -(auVar47[0xb] ==
                        anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[0xb]);
        auVar52[0xc] = -(auVar47[0xc] ==
                        anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[0xc]);
        auVar52[0xd] = -(auVar47[0xd] ==
                        anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[0xd]);
        auVar52[0xe] = -(auVar47[0xe] ==
                        anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[0xe]);
        bVar41 = auVar47[0xf] ==
                 anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[0xf];
        auVar52[0xf] = -bVar41;
        if ((((((((((((((((auVar52 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                         (auVar52 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar52 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar52 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar52 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar52 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar52 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar52 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar52 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar52 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar52 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar52 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar52 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar52 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar52 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar41)
        goto LAB_00993c70;
        puVar14 = puVar33 + uVar35 + 0x10;
        puVar33 = puVar33 + 0x10;
      } while( true );
    }
    goto LAB_00993da8;
  }
  pauStack_1f8 = (undefined1 (*) [16])0x0;
  uVar16 = 0;
  pcVar6 = (code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_019fbb20;
  pauVar24 = pauStack_238;
  uVar15 = uStack_220;
  uVar35 = uStack_230;
  goto joined_r0x00993fac;
LAB_00993a90:
  uVar12 = (ushort)(uVar30 - 1) & (ushort)uVar30;
  uVar30 = CONCAT22((short)(uVar30 - 1 >> 0x10),uVar12);
  puVar33 = puStack_1c8;
  auVar49 = auStack_158;
  auVar47 = auStack_1a8;
  if (uVar12 == 0) goto LAB_00993ac0;
  goto LAB_00993a4d;
  while (uStack_110 == 0) {
LAB_00993c70:
    param_1 = (undefined1 (*) [16])(param_1[0x12] + 8);
    if (param_1 == pauStack_1f8) {
      if (uStack_180 == 0) goto LAB_00993da8;
      pauVar24 = pauStack_198 + 1;
      auVar47 = *pauStack_198;
      uVar30 = ~(uint)(ushort)((ushort)(SUB161(auVar47 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar47 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar47 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar47 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar47 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar47 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar47 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar47 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar47 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar47 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar47 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar47 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar47 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar47 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar47 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar47[0xf] >> 7) << 0xf);
      uVar15 = uStack_180;
      pauVar20 = pauStack_198;
      goto LAB_00993cc9;
    }
  }
  goto LAB_009939c1;
LAB_00994373:
  uVar12 = (ushort)(uVar30 - 1) & (ushort)uVar30;
  uVar30 = CONCAT22((short)(uVar30 - 1 >> 0x10),uVar12);
  lVar21 = auStack_e8._0_8_;
  auVar50 = auStack_168;
  auVar47 = auStack_f8;
  if (uVar12 == 0) goto LAB_009943a0;
  goto LAB_0099432d;
LAB_00993cc9:
  do {
    if ((short)uVar30 == 0) {
      do {
        auVar47 = *pauVar24;
        pauVar20 = pauVar20 + -0x28;
        pauVar24 = pauVar24 + 1;
        uVar30 = (uint)(ushort)((ushort)(SUB161(auVar47 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar47 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar47 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar47 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar47 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar47 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar47 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar47 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar47 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar47 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar47 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar47 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar47 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar47 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar47 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar47[0xf] >> 7) << 0xf);
      } while (uVar30 == 0xffff);
      uVar30 = ~uVar30;
    }
    uVar40 = 0;
    for (uVar19 = uVar30; (uVar19 & 1) == 0; uVar19 = uVar19 >> 1 | 0x80000000) {
      uVar40 = uVar40 + 1;
    }
    uVar17 = (ulong)uVar40;
    uVar30 = uVar30 - 1 & uVar30;
    uVar15 = uVar15 - 1;
    pauStack_d8 = (undefined1 (*) [16])((long)pauVar20 + uVar17 * -0x28 + -0x28);
    uVar35 = *(ulong *)((long)pauVar20 + uVar17 * -0x28 + -8);
    plVar3 = *(long **)((long)pauVar20 + uVar17 * -0x28 + -0x10);
    while (plVar34 = plVar3 + 1, 1 < uVar35) {
      uVar35 = uVar35 - 1;
      lVar38 = *plVar3;
      plVar3 = plVar34;
      if (*plVar34 <= lVar38) {
        ppauStack_b8 = &pauStack_d8;
        ppauStack_b0 = (undefined1 (**) [16])
                       _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hac7ca2a2d08c0e00E;
        pauStack_238 = (undefined1 (*) [16])&UNK_0194a070;
        uStack_230 = 1;
        uStack_220 = 1;
        auStack_218._0_8_ = 0;
        pppauStack_228 = &ppauStack_b8;
        pauStack_1f8 = (undefined1 (*) [16])
                       _ZN6anyhow9__private10format_err17hacf8f527e7755e2cE(&pauStack_238);
        goto LAB_00993eb9;
      }
    }
  } while (uVar15 != 0);
LAB_00993da8:
  pauStack_d8 = (undefined1 (*) [16])
                _ZN107__LT_future_backtest__DataReader__matching_overlay__MATCHING_OVERLAY_u20_as_u20_core__ops__deref__Deref_GT_5deref11__stability4LAZY17h91405fbdc969216dE
  ;
  if (_ZN107__LT_future_backtest__DataReader__matching_overlay__MATCHING_OVERLAY_u20_as_u20_core__ops__deref__Deref_GT_5deref11__stability4LAZY17h91405fbdc969216dE
      ._64_4_ != 0) {
    ppauStack_b8 = &pauStack_d8;
    pauStack_238 = (undefined1 (*) [16])&ppauStack_b8;
    (*(code *)PTR__ZN3std3sys4sync4once5futex4Once4call17hd7d8230ff68e939bE_019fc288)
              (0x1a04818,0,&pauStack_238,&UNK_019494a0,&UNK_0194cf28);
  }
  pauVar24 = pauStack_d8;
  uVar30 = *(uint *)*pauStack_d8;
  if (uVar30 < 0x3ffffffe) {
    LOCK();
    bVar41 = uVar30 == *(uint *)*pauStack_d8;
    if (bVar41) {
      *(uint *)*pauStack_d8 = uVar30 + 1;
    }
    UNLOCK();
    if (!bVar41) goto LAB_009940a6;
  }
  else {
LAB_009940a6:
    (*(code *)PTR__ZN3std3sys4sync6rwlock5futex6RwLock14read_contended17h4dfd949f85b6ef19E_019fd130)
              (pauStack_d8);
  }
  if ((*pauVar24)[8] == '\0') {
    pauStack_d8 = (undefined1 (*) [16])
                  _ZN115__LT_future_backtest__DataReader__matching_overlay__ALIGNED_MATCHING_OVERLAY_u20_as_u20_core__ops__deref__Deref_GT_5deref11__stability4LAZY17h6708e9929ab568e1E
    ;
    if (_ZN115__LT_future_backtest__DataReader__matching_overlay__ALIGNED_MATCHING_OVERLAY_u20_as_u20_core__ops__deref__Deref_GT_5deref11__stability4LAZY17h6708e9929ab568e1E
        ._64_4_ != 0) {
      ppauStack_b8 = &pauStack_d8;
      pauStack_238 = (undefined1 (*) [16])&ppauStack_b8;
      (*(code *)PTR__ZN3std3sys4sync4once5futex4Once4call17hd7d8230ff68e939bE_019fc288)
                (0x1a04860,0,&pauStack_238,&UNK_019494c8,&UNK_0194cf28);
    }
    pauVar20 = pauStack_d8;
    LOCK();
    bVar41 = *(int *)*pauStack_d8 == 0;
    if (bVar41) {
      *(undefined4 *)*pauStack_d8 = 0x3fffffff;
    }
    UNLOCK();
    if (!bVar41) {
      (*(code *)
        PTR__ZN3std3sys4sync6rwlock5futex6RwLock15write_contended17h6d4497e4f0a1fbf7E_019fd038)
                (pauStack_d8);
    }
    if ((*(ulong *)
          PTR__ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17hb56828317201e862E_019fbf18 &
        0x7fffffffffffffff) == 0) {
      uVar30 = 0;
      cVar11 = (*pauVar20)[8];
    }
    else {
      uVar30 = (*(code *)
                 PTR__ZN3std9panicking11panic_count17is_zero_slow_path17he8487498e187edf3E_019fbf30)
                         ();
      uVar30 = uVar30 ^ 1;
      cVar11 = (*pauVar20)[8];
    }
    if (cVar11 == '\0') {
      uStack_68 = 0x7fffffffffffffff;
      pauStack_60 = pauVar20;
      cStack_58 = (char)uVar30;
      lVar38 = *(long *)(pauVar24[2] + 8);
      pauStack_1b0 = pauVar20;
      if (lVar38 != 0) {
        pauVar26 = *(undefined1 (**) [16])pauVar24[1];
        pauVar39 = pauVar26 + 1;
        auVar47 = *pauVar26;
        uVar40 = ~(uint)(ushort)((ushort)(SUB161(auVar47 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar47 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar47 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar47 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar47 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar47 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar47 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar47 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar47 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar47 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar47 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar47 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar47 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar47 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar47 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar47[0xf] >> 7) << 0xf);
        pauStack_78 = pauVar20 + 1;
        pauStack_70 = pauVar20 + 3;
        pauStack_1f8 = (undefined1 (*) [16])0x0;
        uStack_1cc = uVar30;
        do {
          uVar15 = uStack_190;
          pauVar20 = pauStack_198;
          auStack_1a8._0_8_ = uStack_180;
          puStack_1c8 = pauStack_198[-3] + 8;
          while( true ) {
            if ((short)uVar40 == 0) {
              do {
                auVar47 = *pauVar39;
                pauVar26 = pauVar26 + -0x58;
                pauVar39 = pauVar39 + 1;
                uVar40 = (uint)(ushort)((ushort)(SUB161(auVar47 >> 7,0) & 1) |
                                        (ushort)(SUB161(auVar47 >> 0xf,0) & 1) << 1 |
                                        (ushort)(SUB161(auVar47 >> 0x17,0) & 1) << 2 |
                                        (ushort)(SUB161(auVar47 >> 0x1f,0) & 1) << 3 |
                                        (ushort)(SUB161(auVar47 >> 0x27,0) & 1) << 4 |
                                        (ushort)(SUB161(auVar47 >> 0x2f,0) & 1) << 5 |
                                        (ushort)(SUB161(auVar47 >> 0x37,0) & 1) << 6 |
                                        (ushort)(SUB161(auVar47 >> 0x3f,0) & 1) << 7 |
                                        (ushort)(SUB161(auVar47 >> 0x47,0) & 1) << 8 |
                                        (ushort)(SUB161(auVar47 >> 0x4f,0) & 1) << 9 |
                                        (ushort)(SUB161(auVar47 >> 0x57,0) & 1) << 10 |
                                        (ushort)(SUB161(auVar47 >> 0x5f,0) & 1) << 0xb |
                                        (ushort)(SUB161(auVar47 >> 0x67,0) & 1) << 0xc |
                                        (ushort)(SUB161(auVar47 >> 0x6f,0) & 1) << 0xd |
                                        (ushort)(SUB161(auVar47 >> 0x77,0) & 1) << 0xe |
                                       (ushort)(byte)(auVar47[0xf] >> 7) << 0xf);
              } while (uVar40 == 0xffff);
              uVar40 = ~uVar40;
            }
            uVar30 = 0;
            for (uVar19 = uVar40; (uVar19 & 1) == 0; uVar19 = uVar19 >> 1 | 0x80000000) {
              uVar30 = uVar30 + 1;
            }
            uVar40 = uVar40 - 1 & uVar40;
            lVar18 = (ulong)uVar30 * -0x58;
            lVar38 = lVar38 + -1;
            pauStack_50 = (undefined1 (*) [16])((long)pauVar26 + lVar18 + -0x58);
            if (auStack_1a8._0_8_ != 0) break;
LAB_00994520:
            if (lVar38 == 0) {
              cVar11 = (char)uStack_1cc;
              goto joined_r0x00994af7;
            }
          }
          auStack_158._0_8_ = lVar38;
          uStack_1e0 = (long)pauVar26 + lVar18;
          uStack_1d8 = *(ulong *)((long)pauVar26 + lVar18 + -0x50);
          lVar18 = *(long *)((long)pauVar26 + lVar18 + -0x48);
          uVar35 = _ZN4core4hash11BuildHasher8hash_one17h4c80eaa158253d25E
                             (auStack_178,uStack_1d8,lVar18);
          bVar42 = (byte)(uVar35 >> 0x39);
          auVar47 = ZEXT216(CONCAT11(bVar42,bVar42));
          auVar47 = pshuflw(auVar47,auVar47,0);
          uVar43 = auVar47._0_4_;
          auVar50._4_4_ = uVar43;
          auVar50._0_4_ = uVar43;
          auVar50._8_4_ = uVar43;
          auVar50._12_4_ = uVar43;
          lVar21 = 0;
          puVar33 = puStack_1c8;
          while( true ) {
            uVar35 = uVar35 & uVar15;
            auVar47 = *(undefined1 (*) [16])(*pauVar20 + uVar35);
            auVar46[0] = -(auVar47[0] == auVar50[0]);
            auVar46[1] = -(auVar47[1] == auVar50[1]);
            auVar46[2] = -(auVar47[2] == auVar50[2]);
            auVar46[3] = -(auVar47[3] == auVar50[3]);
            auVar46[4] = -(auVar47[4] == auVar50[4]);
            auVar46[5] = -(auVar47[5] == auVar50[5]);
            auVar46[6] = -(auVar47[6] == auVar50[6]);
            auVar46[7] = -(auVar47[7] == auVar50[7]);
            auVar46[8] = -(auVar47[8] == auVar50[8]);
            auVar46[9] = -(auVar47[9] == auVar50[9]);
            auVar46[10] = -(auVar47[10] == auVar50[10]);
            auVar46[0xb] = -(auVar47[0xb] == auVar50[0xb]);
            auVar46[0xc] = -(auVar47[0xc] == auVar50[0xc]);
            auVar46[0xd] = -(auVar47[0xd] == auVar50[0xd]);
            auVar46[0xe] = -(auVar47[0xe] == auVar50[0xe]);
            auVar46[0xf] = -(auVar47[0xf] == auVar50[0xf]);
            uVar12 = (ushort)(SUB161(auVar46 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar46 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar46 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar46 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar46 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar46 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar46 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar46 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar46 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar46 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar46 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar46 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar46 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar46 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar46 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar46[0xf] >> 7) << 0xf;
            uVar30 = (uint)uVar12;
            if (uVar12 != 0) break;
LAB_009943a0:
            auVar53[0] = -(auVar47[0] ==
                          anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[0]);
            auVar53[1] = -(auVar47[1] ==
                          anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[1]);
            auVar53[2] = -(auVar47[2] ==
                          anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[2]);
            auVar53[3] = -(auVar47[3] ==
                          anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[3]);
            auVar53[4] = -(auVar47[4] ==
                          anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[4]);
            auVar53[5] = -(auVar47[5] ==
                          anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[5]);
            auVar53[6] = -(auVar47[6] ==
                          anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[6]);
            auVar53[7] = -(auVar47[7] ==
                          anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[7]);
            auVar53[8] = -(auVar47[8] ==
                          anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[8]);
            auVar53[9] = -(auVar47[9] ==
                          anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[9]);
            auVar53[10] = -(auVar47[10] ==
                           anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[10]);
            auVar53[0xb] = -(auVar47[0xb] ==
                            anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[0xb]);
            auVar53[0xc] = -(auVar47[0xc] ==
                            anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[0xc]);
            auVar53[0xd] = -(auVar47[0xd] ==
                            anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[0xd]);
            auVar53[0xe] = -(auVar47[0xe] ==
                            anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[0xe]);
            bVar41 = auVar47[0xf] ==
                     anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[0xf];
            auVar53[0xf] = -bVar41;
            lVar38 = auStack_158._0_8_;
            if ((((((((((((((((auVar53 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                             (auVar53 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                            (auVar53 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                           (auVar53 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                          (auVar53 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                         (auVar53 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar53 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar53 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar53 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar53 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar53 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar53 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar53 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar53 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar53 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar41)
            goto LAB_00994520;
            uVar35 = uVar35 + lVar21 + 0x10;
            lVar21 = lVar21 + 0x10;
          }
          auStack_e8._0_8_ = lVar21;
          auStack_168 = auVar50;
          auStack_f8 = auVar47;
LAB_0099432d:
          uVar19 = 0;
          for (uVar7 = uVar30; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
            uVar19 = uVar19 + 1;
          }
          uVar17 = uVar19 + uVar35 & uVar15;
          if (lVar18 != *(long *)(puVar33 + (uVar17 * -10 + 2) * 4)) goto LAB_00994373;
          iVar13 = (*(code *)PTR_bcmp_019fbf00)
                             (uStack_1d8,*(undefined8 *)(puVar33 + uVar17 * -0x28),lVar18);
          puVar33 = puStack_1c8;
          if (iVar13 != 0) goto LAB_00994373;
          uVar23 = *(ulong *)((long)pauVar20 + uVar17 * -0x28 + -8);
          lVar38 = auStack_158._0_8_;
          if (uVar23 == 0) goto LAB_00994520;
          plVar3 = *(long **)((long)pauVar20 + uVar17 * -0x28 + -0x10);
          plVar34 = plVar3 + (uVar23 - 1);
          if (plVar34 == (long *)0x0) goto LAB_00994520;
          lVar18 = *(long *)(uStack_1e0 - 0x40);
          lVar21 = *plVar3;
          lVar31 = lVar21 + -150000000;
          if (SCARRY8(lVar21,-150000000)) {
            lVar31 = -0x8000000000000000;
          }
          if (lVar18 < lVar31) goto LAB_00994520;
          lVar21 = *plVar34;
          lVar31 = lVar21 + 150000000;
          if (SCARRY8(lVar21,150000000)) {
            lVar31 = 0x7fffffffffffffff;
          }
          if (lVar31 < lVar18) goto LAB_00994520;
          lVar38 = 0x7fffffffffffffff;
          if (uVar23 == 1) goto LAB_00994dae;
          lVar21 = uStack_1e0 - 0x58;
          auStack_e8._0_8_ = uStack_1e0 - 0x38;
          lVar31 = *(long *)((long)pauVar20 + uVar17 * -0x28 + -0x10);
          puStack_1c8 = *(undefined **)(uStack_1e0 - 0x20);
          lVar22 = lVar18 + -150000000;
          if (SCARRY8(lVar18,-150000000)) {
            lVar22 = -0x8000000000000000;
          }
          uVar17 = 0;
          uVar15 = uVar23;
          do {
            uVar36 = (uVar15 >> 1) + uVar17;
            if (*(long *)(lVar31 + uVar36 * 8) < lVar22) {
              uVar17 = uVar36;
            }
            uVar15 = uVar15 - (uVar15 >> 1);
          } while (1 < uVar15);
          lVar38 = lVar18 + 150000000;
          if (SCARRY8(lVar18,150000000)) {
            lVar38 = 0x7fffffffffffffff;
          }
          uVar15 = (ulong)(*(long *)(lVar31 + uVar17 * 8) < lVar22);
          if (uVar23 <= uVar17 + uVar15 + 1) {
LAB_00994dae:
            ppauStack_b8 = &pauStack_50;
            ppauStack_b0 = (undefined1 (**) [16])
                           _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h800c00530b30273bE
            ;
            pauStack_238 = (undefined1 (*) [16])&UNK_0194a060;
            uStack_230 = 1;
            pppauStack_228 = &ppauStack_b8;
            uStack_220 = 1;
            auStack_218._0_8_ = 0;
            pauStack_1f8 = (undefined1 (*) [16])
                           _ZN6anyhow9__private10format_err17hacf8f527e7755e2cE
                                     (&pauStack_238,lVar38);
LAB_00994e15:
            _ZN94__LT_std__sync__poison__rwlock__RwLockWriteGuard_LT_T_GT__u20_as_u20_core__ops__drop__Drop_GT_4drop17hd647744a4537172fE
                      (&pauStack_60);
            goto LAB_00993e9d;
          }
          auStack_f8._0_8_ = lVar21;
          uVar17 = uVar17 + uVar15;
          uStack_1d8 = uVar23 - 1;
          bVar41 = false;
          bVar9 = false;
          auStack_1a8._0_8_ = lVar31;
          uVar15 = uStack_1d8;
          lVar22 = lVar21;
          do {
            if (uVar23 <= uVar17) {
              (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h490175c52f7428ffE_019fc050)
                        (uVar23,uVar23,&UNK_0194a010);
                    /* WARNING: Does not return */
              pcVar6 = (code *)invalidInstructionException();
              (*pcVar6)();
            }
            lVar4 = *(long *)(lVar31 + uVar17 * 8);
            if (lVar38 < lVar4) break;
            uVar5 = *(ulong *)(lVar31 + 8 + uVar17 * 8);
            uVar25 = (long)puStack_1c8 - uVar5;
            if ((long)puStack_1c8 < (long)uVar5) {
              uVar25 = uVar5 - (long)puStack_1c8;
            }
            lVar27 = lVar22;
            uVar32 = uVar36;
            uVar37 = uVar15;
            uVar10 = uVar35;
            bVar8 = bVar41;
            if (uVar25 < 0x8f0d181) {
              uVar32 = lVar18 - lVar4;
              if (lVar18 < lVar4) {
                uVar32 = lVar4 - lVar18;
              }
              uVar37 = uVar32;
              if (uVar32 < uVar25) {
                uVar37 = uVar25;
              }
              uVar32 = uVar32 + uVar25;
              lVar27 = lVar4;
              uVar10 = uVar5;
              bVar8 = true;
              if (bVar41) {
                auStack_168._0_8_ = uVar5;
                bVar8 = uVar37 < uVar15;
                if (uVar37 == uVar15) {
                  bVar8 = uVar32 < uVar36;
                }
                if (bVar8) {
                  bVar9 = false;
                  bVar8 = true;
                }
                else {
                  bVar9 = (bool)((uVar32 == uVar36 && uVar37 == uVar15) | bVar9);
                  lVar27 = lVar22;
                  uVar32 = uVar36;
                  uVar37 = uVar15;
                  uVar10 = uVar35;
                  bVar8 = bVar41;
                }
              }
            }
            bVar41 = bVar8;
            uVar35 = uVar10;
            uVar15 = uVar37;
            uVar17 = uVar17 + 1;
            lVar22 = lVar27;
            uVar36 = uVar32;
          } while (uStack_1d8 != uVar17);
          if (bVar9) {
            pauStack_238 = (undefined1 (*) [16])&UNK_0194a028;
            uStack_230 = 1;
            pppauStack_228 = (undefined1 (***) [16])0x8;
            uStack_220 = 0;
            auStack_218._0_8_ = 0;
            pauStack_1f8 = (undefined1 (*) [16])
                           _ZN6anyhow9__private10format_err17hacf8f527e7755e2cE(&pauStack_238);
            goto LAB_00994e15;
          }
          lVar38 = lVar21;
          if (!bVar41) goto LAB_00994dae;
          auStack_168._0_8_ = uVar35;
          (*(code *)
            PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17he3b8c48364a1d3a4E_019fc038
          )(&pauStack_238,lVar21,&UNK_0194a038);
          pppauStack_138 = pppauStack_228;
          pauStack_148 = pauStack_238;
          uStack_140 = uStack_230;
          lStack_130 = lVar22;
          _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17h7cf7ee9c9409a340E
                    (&pauStack_238,auStack_e8._0_8_,&UNK_01949ff8);
          pppauVar28 = pppauStack_228;
          uVar15 = uStack_230;
          pauVar20 = pauStack_238;
          puStack_1c8 = *(undefined **)(uStack_1e0 - 0x18);
          dStack_1c0 = *(double *)(uStack_1e0 - 0x10);
          auStack_1a8[0] = *(undefined1 *)(uStack_1e0 - 8);
          if (*(long *)(pauStack_1b0[2] + 8) == 0) {
LAB_009948e3:
            pppauStack_c8 = pppauStack_138;
            lStack_c0 = lStack_130;
            pauStack_d8 = pauStack_148;
            uStack_d0 = uStack_140;
            uStack_220 = auStack_168._0_8_;
            auStack_218._0_8_ = puStack_1c8;
            auStack_218._8_8_ = dStack_1c0;
            uStack_208 = auStack_1a8[0];
            pauStack_238 = pauVar20;
            uStack_230 = uVar15;
            pppauStack_228 = pppauVar28;
            _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_6insert17h01c09f9da9bf56b2E
                      (&ppauStack_b8,pauStack_78,&pauStack_d8,&pauStack_238);
            lVar38 = auStack_158._0_8_;
            if ((ppauStack_b8 != (undefined1 (**) [16])0x8000000000000000) &&
               (ppauStack_b8 != (undefined1 (**) [16])0x0)) {
              (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_019fbb20)
                        (ppauStack_b0,(long)ppauStack_b8 * 0x18,8);
            }
            pauStack_1f8 = (undefined1 (*) [16])((long)pauStack_1f8 + 1);
          }
          else {
            uVar17 = _ZN4core4hash11BuildHasher8hash_one17h4ee2015914cae52fE
                               (pauStack_70,&pauStack_148);
            lVar18 = *(long *)pauStack_1b0[1];
            uVar35 = *(ulong *)(pauStack_1b0[1] + 8);
            bVar42 = (byte)(uVar17 >> 0x39);
            auVar47 = ZEXT216(CONCAT11(bVar42,bVar42));
            auVar47 = pshuflw(auVar47,auVar47,0);
            uVar43 = auVar47._0_4_;
            auVar51._4_4_ = uVar43;
            auVar51._0_4_ = uVar43;
            auVar51._8_4_ = uVar43;
            auVar51._12_4_ = uVar43;
            lVar38 = lVar18 + -0x58;
            lVar21 = 0;
            while( true ) {
              uVar17 = uVar17 & uVar35;
              auVar47 = *(undefined1 (*) [16])(lVar18 + uVar17);
              auVar48[0] = -(auVar47[0] == auVar51[0]);
              auVar48[1] = -(auVar47[1] == auVar51[1]);
              auVar48[2] = -(auVar47[2] == auVar51[2]);
              auVar48[3] = -(auVar47[3] == auVar51[3]);
              auVar48[4] = -(auVar47[4] == auVar51[4]);
              auVar48[5] = -(auVar47[5] == auVar51[5]);
              auVar48[6] = -(auVar47[6] == auVar51[6]);
              auVar48[7] = -(auVar47[7] == auVar51[7]);
              auVar48[8] = -(auVar47[8] == auVar51[8]);
              auVar48[9] = -(auVar47[9] == auVar51[9]);
              auVar48[10] = -(auVar47[10] == auVar51[10]);
              auVar48[0xb] = -(auVar47[0xb] == auVar51[0xb]);
              auVar48[0xc] = -(auVar47[0xc] == auVar51[0xc]);
              auVar48[0xd] = -(auVar47[0xd] == auVar51[0xd]);
              auVar48[0xe] = -(auVar47[0xe] == auVar51[0xe]);
              auVar48[0xf] = -(auVar47[0xf] == auVar51[0xf]);
              uVar12 = (ushort)(SUB161(auVar48 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar48 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar48 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar48 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar48 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar48 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar48 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar48 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar48 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar48 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar48 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar48 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar48 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar48 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar48 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar48[0xf] >> 7) << 0xf;
              uVar23 = (ulong)uVar12;
              if (uVar12 != 0) break;
LAB_009948be:
              auVar54[0] = -(auVar47[0] ==
                            anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[0]);
              auVar54[1] = -(auVar47[1] ==
                            anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[1]);
              auVar54[2] = -(auVar47[2] ==
                            anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[2]);
              auVar54[3] = -(auVar47[3] ==
                            anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[3]);
              auVar54[4] = -(auVar47[4] ==
                            anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[4]);
              auVar54[5] = -(auVar47[5] ==
                            anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[5]);
              auVar54[6] = -(auVar47[6] ==
                            anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[6]);
              auVar54[7] = -(auVar47[7] ==
                            anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[7]);
              auVar54[8] = -(auVar47[8] ==
                            anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[8]);
              auVar54[9] = -(auVar47[9] ==
                            anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[9]);
              auVar54[10] = -(auVar47[10] ==
                             anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[10]);
              auVar54[0xb] = -(auVar47[0xb] ==
                              anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[0xb]
                              );
              auVar54[0xc] = -(auVar47[0xc] ==
                              anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[0xc]
                              );
              auVar54[0xd] = -(auVar47[0xd] ==
                              anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[0xd]
                              );
              auVar54[0xe] = -(auVar47[0xe] ==
                              anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[0xe]
                              );
              bVar41 = auVar47[0xf] ==
                       anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341[0xf];
              auVar54[0xf] = -bVar41;
              if ((((((((((((((((auVar54 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                               (auVar54 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                              (auVar54 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                             (auVar54 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                            (auVar54 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                           (auVar54 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                          (auVar54 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                         (auVar54 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar54 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar54 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar54 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar54 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar54 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar54 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar54 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar41)
              goto LAB_009948e3;
              uVar17 = uVar17 + lVar21 + 0x10;
              lVar21 = lVar21 + 0x10;
            }
            auStack_f8._0_8_ = lVar38;
            uStack_1e0 = uVar17;
            auStack_e8 = auVar51;
            lStack_80 = lVar21;
            auStack_48 = auVar47;
            while( true ) {
              uVar30 = 0;
              for (uVar19 = (uint)uVar23; (uVar19 & 1) == 0; uVar19 = uVar19 >> 1 | 0x80000000) {
                uVar30 = uVar30 + 1;
              }
              lVar21 = (uVar30 + uStack_1e0 & uVar35) * -0x58;
              uStack_1d8 = uVar23;
              cVar11 = _ZN52__LT_Q_u20_as_u20_hashbrown__Equivalent_LT_K_GT__GT_10equivalent17hb9c047199525b225E
                                 (&pauStack_148,lVar38 + lVar21);
              if (cVar11 != '\0') break;
              iVar13 = (int)uStack_1d8 + -1;
              uVar12 = (ushort)iVar13 & (ushort)uStack_1d8;
              uVar23 = (ulong)CONCAT22((short)((uint)iVar13 >> 0x10),uVar12);
              uVar17 = uStack_1e0;
              lVar38 = auStack_f8._0_8_;
              lVar21 = lStack_80;
              auVar51 = auStack_e8;
              auVar47 = auStack_48;
              if (uVar12 == 0) goto LAB_009948be;
            }
            if (*(long *)(lVar18 + -0x20 + lVar21) != auStack_168._0_8_) {
LAB_00994d2f:
              pauStack_238 = (undefined1 (*) [16])&UNK_0194a050;
              uStack_230 = 1;
              pppauStack_228 = (undefined1 (***) [16])0x8;
              uStack_220 = 0;
              auStack_218._0_8_ = 0;
              pauStack_1f8 = (undefined1 (*) [16])
                             _ZN6anyhow9__private10format_err17hacf8f527e7755e2cE(&pauStack_238);
              if (pauVar20 != (undefined1 (*) [16])0x0) {
                (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_019fbb20)
                          (uVar15,(long)pauVar20 * 0x18,8);
              }
              if (pauStack_148 != (undefined1 (*) [16])0x0) {
                (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_019fbb20)
                          (uStack_140,pauStack_148,1);
              }
              goto LAB_00994e15;
            }
            lVar18 = lVar18 + lVar21;
            if (((((*(double *)(lVar18 + -0x18) != (double)puStack_1c8) ||
                  (NAN(*(double *)(lVar18 + -0x18)) || NAN((double)puStack_1c8))) ||
                 (*(double *)(lVar18 + -0x10) != dStack_1c0)) ||
                ((NAN(*(double *)(lVar18 + -0x10)) || NAN(dStack_1c0) ||
                 (*(char *)(lVar18 + -8) != auStack_1a8[0])))) ||
               (*(undefined1 (****) [16])(lVar18 + -0x28) != pppauVar28)) goto LAB_00994d2f;
            if (pppauVar28 != (undefined1 (***) [16])0x0) {
              lVar38 = *(long *)(lVar18 + -0x30);
              lVar18 = 0x10;
              do {
                if (((*(char *)(lVar38 + lVar18) != *(char *)(uVar15 + lVar18)) ||
                    (dVar44 = *(double *)(lVar38 + -0x10 + lVar18),
                    pdVar1 = (double *)((uVar15 - 0x10) + lVar18), dVar44 != *pdVar1)) ||
                   ((NAN(dVar44) || NAN(*pdVar1) ||
                    ((dVar44 = *(double *)(lVar38 + -8 + lVar18),
                     pdVar1 = (double *)((uVar15 - 8) + lVar18), dVar44 != *pdVar1 ||
                     (NAN(dVar44) || NAN(*pdVar1))))))) goto LAB_00994d2f;
                lVar18 = lVar18 + 0x18;
                pppauVar28 = (undefined1 (***) [16])((long)pppauVar28 + -1);
              } while (pppauVar28 != (undefined1 (***) [16])0x0);
            }
            if (pauVar20 != (undefined1 (*) [16])0x0) {
              (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_019fbb20)
                        (uVar15,(long)pauVar20 * 0x18,8);
            }
            lVar38 = auStack_158._0_8_;
            if (pauStack_148 != (undefined1 (*) [16])0x0) {
              (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_019fbb20)
                        (uStack_140,pauStack_148,1);
            }
          }
          cVar11 = (char)uStack_1cc;
          if (lVar38 == 0) goto joined_r0x00994af7;
        } while( true );
      }
      pauStack_1f8 = (undefined1 (*) [16])0x0;
      cVar11 = cStack_58;
joined_r0x00994af7:
      if ((cVar11 == '\0') &&
         ((uStack_68 &
          *(ulong *)
           PTR__ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17hb56828317201e862E_019fbf18) != 0
         )) {
        cVar11 = (*(code *)
                   PTR__ZN3std9panicking11panic_count17is_zero_slow_path17he8487498e187edf3E_019fbf30
                 )();
        if (cVar11 == '\0') {
          (*pauStack_1b0)[8] = 1;
        }
      }
      LOCK();
      iVar13 = *(int *)*pauStack_1b0;
      *(int *)*pauStack_1b0 = *(int *)*pauStack_1b0 + -0x3fffffff;
      UNLOCK();
      if (0x3fffffff < iVar13 + 0xc0000001U) {
        (*(code *)
          PTR__ZN3std3sys4sync6rwlock5futex6RwLock22wake_writer_or_readers17h6ff0e4ad80e75925E_019fbfd8
        )();
      }
      uVar15 = uStack_190;
      LOCK();
      *(int *)*pauVar24 = *(int *)*pauVar24 + -1;
      puVar33 = PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_019fbb20;
      UNLOCK();
      if (uStack_190 != 0) {
        if (uStack_180 != 0) {
          auVar47 = *pauStack_198;
          uVar30 = ~(uint)(ushort)((ushort)(SUB161(auVar47 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar47 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar47 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar47 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar47 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar47 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar47 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar47 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar47 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar47 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar47 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar47 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar47 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar47 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar47 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(byte)(auVar47[0xf] >> 7) << 0xf);
          pauVar24 = pauStack_198 + 1;
          uVar35 = uStack_180;
          pauVar20 = pauStack_198;
          do {
            if ((short)uVar30 == 0) {
              do {
                auVar47 = *pauVar24;
                pauVar20 = pauVar20 + -0x28;
                pauVar24 = pauVar24 + 1;
                uVar30 = (uint)(ushort)((ushort)(SUB161(auVar47 >> 7,0) & 1) |
                                        (ushort)(SUB161(auVar47 >> 0xf,0) & 1) << 1 |
                                        (ushort)(SUB161(auVar47 >> 0x17,0) & 1) << 2 |
                                        (ushort)(SUB161(auVar47 >> 0x1f,0) & 1) << 3 |
                                        (ushort)(SUB161(auVar47 >> 0x27,0) & 1) << 4 |
                                        (ushort)(SUB161(auVar47 >> 0x2f,0) & 1) << 5 |
                                        (ushort)(SUB161(auVar47 >> 0x37,0) & 1) << 6 |
                                        (ushort)(SUB161(auVar47 >> 0x3f,0) & 1) << 7 |
                                        (ushort)(SUB161(auVar47 >> 0x47,0) & 1) << 8 |
                                        (ushort)(SUB161(auVar47 >> 0x4f,0) & 1) << 9 |
                                        (ushort)(SUB161(auVar47 >> 0x57,0) & 1) << 10 |
                                        (ushort)(SUB161(auVar47 >> 0x5f,0) & 1) << 0xb |
                                        (ushort)(SUB161(auVar47 >> 0x67,0) & 1) << 0xc |
                                        (ushort)(SUB161(auVar47 >> 0x6f,0) & 1) << 0xd |
                                        (ushort)(SUB161(auVar47 >> 0x77,0) & 1) << 0xe |
                                       (ushort)(byte)(auVar47[0xf] >> 7) << 0xf);
              } while (uVar30 == 0xffff);
              uVar30 = ~uVar30;
            }
            uVar40 = 0;
            for (uVar19 = uVar30; (uVar19 & 1) == 0; uVar19 = uVar19 >> 1 | 0x80000000) {
              uVar40 = uVar40 + 1;
            }
            lVar38 = *(long *)((long)pauVar20 + (ulong)uVar40 * -0x28 + -0x18);
            if (lVar38 != 0) {
              (*(code *)puVar33)(*(undefined8 *)((long)pauVar20 + (ulong)uVar40 * -0x28 + -0x10),
                                 lVar38 << 3,8);
            }
            uVar35 = uVar35 - 1;
            uVar30 = uVar30 - 1 & uVar30;
          } while (uVar35 != 0);
        }
        uVar35 = uVar15 * 0x28 + 0x37 & 0xfffffffffffffff0;
        lVar38 = uVar15 + uVar35 + 0x11;
        if (lVar38 != 0) {
          (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_019fbb20)
                    ((long)pauStack_198 - uVar35,lVar38,0x10);
        }
      }
      uVar15 = uStack_120;
      puVar33 = PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_019fbb20;
      if (uStack_120 != 0) {
        if (uStack_110 != 0) {
          auVar47 = *pauStack_128;
          uVar30 = ~(uint)(ushort)((ushort)(SUB161(auVar47 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar47 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar47 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar47 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar47 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar47 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar47 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar47 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar47 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar47 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar47 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar47 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar47 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar47 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar47 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(byte)(auVar47[0xf] >> 7) << 0xf);
          pauVar24 = pauStack_128 + 1;
          uVar35 = uStack_110;
          pauVar20 = pauStack_128;
          do {
            if ((short)uVar30 == 0) {
              do {
                auVar47 = *pauVar24;
                pauVar20 = pauVar20 + -0x18;
                pauVar24 = pauVar24 + 1;
                uVar30 = (uint)(ushort)((ushort)(SUB161(auVar47 >> 7,0) & 1) |
                                        (ushort)(SUB161(auVar47 >> 0xf,0) & 1) << 1 |
                                        (ushort)(SUB161(auVar47 >> 0x17,0) & 1) << 2 |
                                        (ushort)(SUB161(auVar47 >> 0x1f,0) & 1) << 3 |
                                        (ushort)(SUB161(auVar47 >> 0x27,0) & 1) << 4 |
                                        (ushort)(SUB161(auVar47 >> 0x2f,0) & 1) << 5 |
                                        (ushort)(SUB161(auVar47 >> 0x37,0) & 1) << 6 |
                                        (ushort)(SUB161(auVar47 >> 0x3f,0) & 1) << 7 |
                                        (ushort)(SUB161(auVar47 >> 0x47,0) & 1) << 8 |
                                        (ushort)(SUB161(auVar47 >> 0x4f,0) & 1) << 9 |
                                        (ushort)(SUB161(auVar47 >> 0x57,0) & 1) << 10 |
                                        (ushort)(SUB161(auVar47 >> 0x5f,0) & 1) << 0xb |
                                        (ushort)(SUB161(auVar47 >> 0x67,0) & 1) << 0xc |
                                        (ushort)(SUB161(auVar47 >> 0x6f,0) & 1) << 0xd |
                                        (ushort)(SUB161(auVar47 >> 0x77,0) & 1) << 0xe |
                                       (ushort)(byte)(auVar47[0xf] >> 7) << 0xf);
              } while (uVar30 == 0xffff);
              uVar30 = ~uVar30;
            }
            uVar40 = 0;
            for (uVar19 = uVar30; (uVar19 & 1) == 0; uVar19 = uVar19 >> 1 | 0x80000000) {
              uVar40 = uVar40 + 1;
            }
            lVar38 = *(long *)((long)pauVar20 + (ulong)uVar40 * -0x18 + -0x18);
            if (lVar38 != 0) {
              (*(code *)puVar33)(*(undefined8 *)((long)pauVar20 + (ulong)uVar40 * -0x18 + -0x10),
                                 lVar38,1);
            }
            uVar35 = uVar35 - 1;
            uVar30 = uVar30 - 1 & uVar30;
          } while (uVar35 != 0);
        }
        uVar35 = uVar15 * 0x18 + 0x27 & 0xfffffffffffffff0;
        lVar38 = uVar15 + uVar35 + 0x11;
        if (lVar38 != 0) {
          (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_019fbb20)
                    ((long)pauStack_128 - uVar35,lVar38,0x10);
        }
      }
      uVar16 = 0;
      goto LAB_0099408f;
    }
    pauStack_1f8 = (undefined1 (*) [16])
                   _ZN15future_backtest10DataReader16matching_overlay14align_to_depth28__u7b__u7b_closure_u7d__u7d_17hf0358d90b2fa93fcE
                             (pauVar20,uVar30 & 0xff);
LAB_00993e9d:
    LOCK();
    *(int *)*pauVar24 = *(int *)*pauVar24 + -1;
    UNLOCK();
  }
  else {
    pauStack_1f8 = (undefined1 (*) [16])
                   _ZN15future_backtest10DataReader16matching_overlay14align_to_depth28__u7b__u7b_closure_u7d__u7d_17h1b0b98bf886fbb75E
                             (pauVar24);
  }
LAB_00993eb9:
  uVar15 = uStack_190;
  puVar33 = PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_019fbb20;
  if (uStack_190 != 0) {
    if (uStack_180 != 0) {
      auVar47 = *pauStack_198;
      uVar30 = ~(uint)(ushort)((ushort)(SUB161(auVar47 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar47 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar47 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar47 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar47 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar47 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar47 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar47 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar47 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar47 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar47 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar47 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar47 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar47 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar47 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar47[0xf] >> 7) << 0xf);
      pauVar24 = pauStack_198 + 1;
      uVar35 = uStack_180;
      pauVar20 = pauStack_198;
      do {
        if ((short)uVar30 == 0) {
          do {
            auVar47 = *pauVar24;
            pauVar20 = pauVar20 + -0x28;
            pauVar24 = pauVar24 + 1;
            uVar30 = (uint)(ushort)((ushort)(SUB161(auVar47 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar47 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar47 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar47 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar47 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar47 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar47 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar47 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar47 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar47 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar47 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar47 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar47 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar47 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar47 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar47[0xf] >> 7) << 0xf);
          } while (uVar30 == 0xffff);
          uVar30 = ~uVar30;
        }
        uVar40 = 0;
        for (uVar19 = uVar30; (uVar19 & 1) == 0; uVar19 = uVar19 >> 1 | 0x80000000) {
          uVar40 = uVar40 + 1;
        }
        lVar38 = *(long *)((long)pauVar20 + (ulong)uVar40 * -0x28 + -0x18);
        if (lVar38 != 0) {
          (*(code *)puVar33)(*(undefined8 *)((long)pauVar20 + (ulong)uVar40 * -0x28 + -0x10),
                             lVar38 << 3,8);
        }
        uVar35 = uVar35 - 1;
        uVar30 = uVar30 - 1 & uVar30;
      } while (uVar35 != 0);
    }
    uVar35 = uVar15 * 0x28 + 0x37 & 0xfffffffffffffff0;
    lVar38 = uVar15 + uVar35 + 0x11;
    if (lVar38 != 0) {
      (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_019fbb20)
                ((long)pauStack_198 - uVar35,lVar38,0x10);
    }
  }
  uVar16 = 1;
  pcVar6 = (code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_019fbb20;
  pauVar24 = pauStack_128;
  uVar15 = uStack_110;
  uVar35 = uStack_120;
joined_r0x00993fac:
  PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_019fbb20 = pcVar6;
  if (uVar35 != 0) {
    pauStack_128 = pauVar24;
    uStack_120 = uVar35;
    uStack_110 = uVar15;
    if (uVar15 != 0) {
      auVar47 = *pauVar24;
      uVar30 = ~(uint)(ushort)((ushort)(SUB161(auVar47 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar47 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar47 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar47 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar47 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar47 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar47 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar47 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar47 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar47 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar47 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar47 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar47 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar47 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar47 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar47[0xf] >> 7) << 0xf);
      pauVar20 = pauVar24 + 1;
      do {
        if ((short)uVar30 == 0) {
          do {
            auVar47 = *pauVar20;
            pauVar24 = pauVar24 + -0x18;
            pauVar20 = pauVar20 + 1;
            uVar30 = (uint)(ushort)((ushort)(SUB161(auVar47 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar47 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar47 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar47 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar47 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar47 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar47 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar47 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar47 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar47 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar47 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar47 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar47 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar47 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar47 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar47[0xf] >> 7) << 0xf);
          } while (uVar30 == 0xffff);
          uVar30 = ~uVar30;
        }
        uVar40 = 0;
        for (uVar19 = uVar30; (uVar19 & 1) == 0; uVar19 = uVar19 >> 1 | 0x80000000) {
          uVar40 = uVar40 + 1;
        }
        lVar38 = *(long *)((long)pauVar24 + (ulong)uVar40 * -0x18 + -0x18);
        if (lVar38 != 0) {
          (*pcVar6)(*(undefined8 *)((long)pauVar24 + (ulong)uVar40 * -0x18 + -0x10),lVar38,1);
        }
        uVar15 = uVar15 - 1;
        uVar30 = uVar30 - 1 & uVar30;
      } while (uVar15 != 0);
    }
    uVar15 = uVar35 * 0x18 + 0x27 & 0xfffffffffffffff0;
    lVar38 = uVar35 + uVar15 + 0x11;
    if (lVar38 != 0) {
      (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_019fbb20)
                ((long)pauStack_128 - uVar15,lVar38,0x10);
    }
  }
LAB_0099408f:
  auVar55._8_8_ = pauStack_1f8;
  auVar55._0_8_ = uVar16;
  return auVar55;
}


