// ELF address 0x0000000000a01780; future_backtest::MakerSimulator::maker_simulator::TradeSimulator1::orders_hit_dynamic_trades_level_vol_offset

/* WARNING: Removing unreachable block (ram,0x00b026de) */
/* WARNING: Removing unreachable block (ram,0x00b026f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * _ZN15future_backtest14MakerSimulator15maker_simulator15TradeSimulator142orders_hit_dynamic_trades_level_vol_offset17h231ade8d9d30f2caE
                 (double param_1,double param_2,long *param_3,long param_4,char param_5)

{
  double dVar1;
  double dVar2;
  long lVar3;
  ulong uVar4;
  char *pcVar5;
  long *plVar6;
  code *pcVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  bool bVar17;
  ulong uVar18;
  ushort uVar19;
  long lVar20;
  ulong uVar21;
  undefined *puVar22;
  undefined8 uVar23;
  bool bVar24;
  double *pdVar25;
  byte bVar26;
  char cVar27;
  char cVar28;
  char cVar30;
  char cVar31;
  char cVar32;
  undefined1 auVar29 [16];
  double dVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  undefined8 *puStack_d0;
  undefined1 auStack_b8 [16];
  double dStack_98;
  double dStack_80;
  double dStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  double *pdStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  dStack_80 = param_2;
  (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc35___rust_no_alloc_shim_is_unstable_v2_01aa6a40)();
  puStack_d0 = (undefined8 *)(*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc12___rust_alloc_01aa6a18)(6,1)
  ;
  if (puStack_d0 == (undefined8 *)0x0) {
    (*(code *)PTR__ZN5alloc7raw_vec12handle_error17h24b7b14ecfc8bc80E_01aa6b98)(1,6,&UNK_019fd680);
LAB_00b02727:
    (*(code *)PTR__ZN5alloc7raw_vec12handle_error17h24b7b14ecfc8bc80E_01aa6b98)
              (1,param_4,&UNK_019fd680);
  }
  else {
    *(undefined2 *)((long)puStack_d0 + 4) = 0x6c65;
    *(undefined4 *)puStack_d0 = 0x636e6163;
    puVar22 = &UNK_019fe498;
    plStack_38 = param_3;
    if (*(long *)(param_4 + 0x300) != 0) {
      lVar14 = param_4 + 0x308;
      uVar11 = _ZN4core4hash11BuildHasher8hash_one17h4c80eaa158253d25E(lVar14,&UNK_00385c34,0x11);
      lVar3 = *(long *)(param_4 + 0x2e8);
      uVar4 = *(ulong *)(param_4 + 0x2f0);
      bVar26 = (byte)(uVar11 >> 0x39);
      auVar29 = ZEXT216(CONCAT11(bVar26,bVar26));
      auVar29 = pshuflw(auVar29,auVar29,0);
      lVar15 = lVar3 + -0x20;
      lVar13 = 0;
      while( true ) {
        uVar11 = uVar11 & uVar4;
        auVar38 = *(undefined1 (*) [16])(lVar3 + uVar11);
        cVar27 = auVar29[0];
        auVar41[0] = -(auVar38[0] == cVar27);
        cVar28 = auVar29[1];
        auVar41[1] = -(auVar38[1] == cVar28);
        cVar30 = auVar29[2];
        auVar41[2] = -(auVar38[2] == cVar30);
        cVar31 = auVar29[3];
        auVar41[3] = -(auVar38[3] == cVar31);
        auVar41[4] = -(auVar38[4] == cVar27);
        auVar41[5] = -(auVar38[5] == cVar28);
        auVar41[6] = -(auVar38[6] == cVar30);
        auVar41[7] = -(auVar38[7] == cVar31);
        auVar41[8] = -(auVar38[8] == cVar27);
        auVar41[9] = -(auVar38[9] == cVar28);
        auVar41[10] = -(auVar38[10] == cVar30);
        auVar41[0xb] = -(auVar38[0xb] == cVar31);
        auVar41[0xc] = -(auVar38[0xc] == cVar27);
        auVar41[0xd] = -(auVar38[0xd] == cVar28);
        cVar27 = auVar38[0xf];
        auVar41[0xe] = -(auVar38[0xe] == cVar30);
        auVar41[0xf] = -(cVar27 == cVar31);
        uVar19 = (ushort)(SUB161(auVar41 >> 7,0) & 1) | (ushort)(SUB161(auVar41 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar41 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar41 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar41 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar41 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar41 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar41 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar41 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar41 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar41 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar41 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar41 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar41 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar41 >> 0x77,0) & 1) << 0xe | (ushort)(auVar41[0xf] >> 7) << 0xf
        ;
        uVar16 = (uint)uVar19;
        while (uVar19 != 0) {
          uVar8 = 0;
          for (uVar9 = uVar16; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
            uVar8 = uVar8 + 1;
          }
          lVar20 = lVar15 + (uVar8 + uVar11 & uVar4) * -0x20;
          if (*(long *)(lVar20 + 0x10) == 0x11) {
            pcVar5 = *(char **)(lVar20 + 8);
            auVar42[0] = -(*pcVar5 == SUB161(_DAT_00359b20,0));
            auVar42[1] = -(pcVar5[1] == SUB161(_DAT_00359b20,1));
            auVar42[2] = -(pcVar5[2] == SUB161(_DAT_00359b20,2));
            auVar42[3] = -(pcVar5[3] == SUB161(_DAT_00359b20,3));
            auVar42[4] = -(pcVar5[4] == SUB161(_DAT_00359b20,4));
            auVar42[5] = -(pcVar5[5] == SUB161(_DAT_00359b20,5));
            auVar42[6] = -(pcVar5[6] == SUB161(_DAT_00359b20,6));
            auVar42[7] = -(pcVar5[7] == SUB161(_DAT_00359b20,7));
            auVar42[8] = -(pcVar5[8] == SUB161(_DAT_00359b20,8));
            auVar42[9] = -(pcVar5[9] == SUB161(_DAT_00359b20,9));
            auVar42[10] = -(pcVar5[10] == SUB161(_DAT_00359b20,10));
            auVar42[0xb] = -(pcVar5[0xb] == SUB161(_DAT_00359b20,0xb));
            auVar42[0xc] = -(pcVar5[0xc] == SUB161(_DAT_00359b20,0xc));
            auVar42[0xd] = -(pcVar5[0xd] == SUB161(_DAT_00359b20,0xd));
            auVar42[0xe] = -(pcVar5[0xe] == SUB161(_DAT_00359b20,0xe));
            auVar42[0xf] = -(pcVar5[0xf] == SUB161(_DAT_00359b20,0xf));
            auVar43[0] = -(pcVar5[0x10] ==
                          (char)anon_baa4d3160c6db26b1acb0467a3a6e91d_50_llvm_14045134056871974489);
            auVar43[1] = -((char)((uint)
                                  anon_baa4d3160c6db26b1acb0467a3a6e91d_50_llvm_14045134056871974489
                                 >> 8) == '\0');
            auVar43[2] = -((char)((uint)
                                  anon_baa4d3160c6db26b1acb0467a3a6e91d_50_llvm_14045134056871974489
                                 >> 0x10) == '\0');
            auVar43[3] = -((char)((uint)
                                  anon_baa4d3160c6db26b1acb0467a3a6e91d_50_llvm_14045134056871974489
                                 >> 0x18) == '\0');
            auVar43[4] = 0xff;
            auVar43[5] = 0xff;
            auVar43[6] = 0xff;
            auVar43[7] = 0xff;
            auVar43[8] = 0xff;
            auVar43[9] = 0xff;
            auVar43[10] = 0xff;
            auVar43[0xb] = 0xff;
            auVar43[0xc] = 0xff;
            auVar43[0xd] = 0xff;
            auVar43[0xe] = 0xff;
            auVar43[0xf] = 0xff;
            auVar43 = auVar43 & auVar42;
            if ((ushort)((ushort)(SUB161(auVar43 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar43 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar43 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar43 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar43 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar43 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar43 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar43 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar43 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar43 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar43 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar43 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar43 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe |
                        (ushort)(byte)(auVar43[0xf] >> 7) << 0xf) == 0xffff) {
              uVar11 = _ZN4core4hash11BuildHasher8hash_one17h4c80eaa158253d25E
                                 (lVar14,&UNK_00385c45,0xe);
              bVar26 = (byte)(uVar11 >> 0x39);
              auVar29 = ZEXT216(CONCAT11(bVar26,bVar26));
              auVar29 = pshuflw(auVar29,auVar29,0);
              lVar13 = 0;
              puVar22 = &UNK_019fe4b0;
              goto LAB_00b01938;
            }
          }
          uVar19 = (ushort)(uVar16 - 1) & (ushort)uVar16;
          uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar19);
        }
        auVar40[0] = -(auVar38[0] == -1);
        auVar40[1] = -(auVar38[1] == -1);
        auVar40[2] = -(auVar38[2] == -1);
        auVar40[3] = -(auVar38[3] == -1);
        auVar40[4] = -(auVar38[4] == -1);
        auVar40[5] = -(auVar38[5] == -1);
        auVar40[6] = -(auVar38[6] == -1);
        auVar40[7] = -(auVar38[7] == -1);
        auVar40[8] = -(auVar38[8] == -1);
        auVar40[9] = -(auVar38[9] == -1);
        auVar40[10] = -(auVar38[10] == -1);
        auVar40[0xb] = -(auVar38[0xb] == -1);
        auVar40[0xc] = -(auVar38[0xc] == -1);
        auVar40[0xd] = -(auVar38[0xd] == -1);
        auVar40[0xe] = -(auVar38[0xe] == -1);
        auVar40[0xf] = -(cVar27 == -1);
        if ((((((((((((((((auVar40 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                         (auVar40 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar40 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar40 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar40 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar40 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar40 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar40 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar40 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar40 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar40 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar40 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar40 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar40 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar40 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || cVar27 == -1)
        break;
        uVar11 = uVar11 + lVar13 + 0x10;
        lVar13 = lVar13 + 0x10;
      }
    }
LAB_00b02705:
    (*(code *)PTR__ZN4core6option13unwrap_failed17h4154e01d14eb4879E_01aa6fa8)(puVar22);
  }
LAB_00b02753:
                    /* WARNING: Does not return */
  pcVar7 = (code *)invalidInstructionException();
  (*pcVar7)();
LAB_00b01938:
  uVar11 = uVar11 & uVar4;
  auVar38 = *(undefined1 (*) [16])(lVar3 + uVar11);
  cVar27 = auVar29[0];
  auVar37[0] = -(auVar38[0] == cVar27);
  cVar28 = auVar29[1];
  auVar37[1] = -(auVar38[1] == cVar28);
  cVar30 = auVar29[2];
  auVar37[2] = -(auVar38[2] == cVar30);
  cVar31 = auVar29[3];
  auVar37[3] = -(auVar38[3] == cVar31);
  auVar37[4] = -(auVar38[4] == cVar27);
  auVar37[5] = -(auVar38[5] == cVar28);
  auVar37[6] = -(auVar38[6] == cVar30);
  auVar37[7] = -(auVar38[7] == cVar31);
  auVar37[8] = -(auVar38[8] == cVar27);
  auVar37[9] = -(auVar38[9] == cVar28);
  auVar37[10] = -(auVar38[10] == cVar30);
  auVar37[0xb] = -(auVar38[0xb] == cVar31);
  auVar37[0xc] = -(auVar38[0xc] == cVar27);
  auVar37[0xd] = -(auVar38[0xd] == cVar28);
  cVar27 = auVar38[0xf];
  auVar37[0xe] = -(auVar38[0xe] == cVar30);
  auVar37[0xf] = -(cVar27 == cVar31);
  uVar19 = (ushort)(SUB161(auVar37 >> 7,0) & 1) | (ushort)(SUB161(auVar37 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar37 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar37 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar37 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar37 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar37 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar37 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar37 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar37 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar37 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar37 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar37 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar37 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar37 >> 0x77,0) & 1) << 0xe | (ushort)(auVar37[0xf] >> 7) << 0xf;
  uVar16 = (uint)uVar19;
  while (uVar19 != 0) {
    uVar8 = 0;
    for (uVar9 = uVar16; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
      uVar8 = uVar8 + 1;
    }
    uVar18 = uVar8 + uVar11 & uVar4;
    lVar20 = lVar15 + uVar18 * -0x20;
    if ((*(long *)(lVar20 + 0x10) == 0xe) &&
       (plVar6 = *(long **)(lVar20 + 8),
       *(long *)((long)plVar6 + 6) == 0x7972657070696c73 && *plVar6 == 0x6c735f72656b6174)) {
      uVar11 = _ZN4core4hash11BuildHasher8hash_one17h4c80eaa158253d25E(lVar14,&UNK_00385d8c,0xf);
      bVar26 = (byte)(uVar11 >> 0x39);
      auVar29 = ZEXT216(CONCAT11(bVar26,bVar26));
      auVar29 = pshuflw(auVar29,auVar29,0);
      lVar13 = 0;
      puVar22 = &UNK_019fe4c8;
      goto LAB_00b01a1e;
    }
    uVar19 = (ushort)(uVar16 - 1) & (ushort)uVar16;
    uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar19);
  }
  auVar34[0] = -(auVar38[0] == -1);
  auVar34[1] = -(auVar38[1] == -1);
  auVar34[2] = -(auVar38[2] == -1);
  auVar34[3] = -(auVar38[3] == -1);
  auVar34[4] = -(auVar38[4] == -1);
  auVar34[5] = -(auVar38[5] == -1);
  auVar34[6] = -(auVar38[6] == -1);
  auVar34[7] = -(auVar38[7] == -1);
  auVar34[8] = -(auVar38[8] == -1);
  auVar34[9] = -(auVar38[9] == -1);
  auVar34[10] = -(auVar38[10] == -1);
  auVar34[0xb] = -(auVar38[0xb] == -1);
  auVar34[0xc] = -(auVar38[0xc] == -1);
  auVar34[0xd] = -(auVar38[0xd] == -1);
  auVar34[0xe] = -(auVar38[0xe] == -1);
  auVar34[0xf] = -(cVar27 == -1);
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
      (auVar34 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || cVar27 == -1)
  goto LAB_00b02705;
  uVar11 = uVar11 + lVar13 + 0x10;
  lVar13 = lVar13 + 0x10;
  goto LAB_00b01938;
LAB_00b01a1e:
  uVar11 = uVar11 & uVar4;
  pcVar5 = (char *)(lVar3 + uVar11);
  cVar27 = pcVar5[0xf];
  cVar28 = auVar29[0];
  auVar38[0] = -(*pcVar5 == cVar28);
  cVar30 = auVar29[1];
  auVar38[1] = -(pcVar5[1] == cVar30);
  cVar31 = auVar29[2];
  auVar38[2] = -(pcVar5[2] == cVar31);
  cVar32 = auVar29[3];
  auVar38[3] = -(pcVar5[3] == cVar32);
  auVar38[4] = -(pcVar5[4] == cVar28);
  auVar38[5] = -(pcVar5[5] == cVar30);
  auVar38[6] = -(pcVar5[6] == cVar31);
  auVar38[7] = -(pcVar5[7] == cVar32);
  auVar38[8] = -(pcVar5[8] == cVar28);
  auVar38[9] = -(pcVar5[9] == cVar30);
  auVar38[10] = -(pcVar5[10] == cVar31);
  auVar38[0xb] = -(pcVar5[0xb] == cVar32);
  auVar38[0xc] = -(pcVar5[0xc] == cVar28);
  auVar38[0xd] = -(pcVar5[0xd] == cVar30);
  auVar38[0xe] = -(pcVar5[0xe] == cVar31);
  auVar38[0xf] = -(cVar27 == cVar32);
  uVar19 = (ushort)(SUB161(auVar38 >> 7,0) & 1) | (ushort)(SUB161(auVar38 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar38 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar38 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar38 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar38 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar38 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar38 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar38 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar38 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar38 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar38 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar38 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar38 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar38 >> 0x77,0) & 1) << 0xe | (ushort)(auVar38[0xf] >> 7) << 0xf;
  uVar16 = (uint)uVar19;
  while (uVar19 != 0) {
    uVar8 = 0;
    for (uVar9 = uVar16; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
      uVar8 = uVar8 + 1;
    }
    uVar21 = uVar8 + uVar11 & uVar4;
    lVar20 = lVar15 + uVar21 * -0x20;
    if ((*(long *)(lVar20 + 0x10) == 0xf) &&
       (plVar6 = *(long **)(lVar20 + 8),
       *(long *)((long)plVar6 + 7) == 0x70625f6574616265 && *plVar6 == 0x65725f72656b616d)) {
      lVar13 = uVar21 * -0x20 + lVar3;
      dStack_98 = 0.0;
      if (0.0 < param_2) {
        lStack_40 = lVar13;
        if (*(long *)(param_4 + 0x98) != -0x8000000000000000) {
          dVar33 = *(double *)(param_4 + 0x128);
          dVar1 = *(double *)(param_4 + 0x250);
          uVar11 = _ZN4core4hash11BuildHasher8hash_one17h4c80eaa158253d25E(lVar14,&UNK_00385c45,0xe)
          ;
          bVar26 = (byte)(uVar11 >> 0x39);
          auVar29 = ZEXT216(CONCAT11(bVar26,bVar26));
          auVar29 = pshuflw(auVar29,auVar29,0);
          lVar14 = 0;
          puVar22 = &UNK_019fe540;
          goto LAB_00b01b65;
        }
        puVar22 = &UNK_019fe528;
      }
      else {
        pdVar25 = (double *)0x6;
        bVar10 = false;
        auStack_b8._0_8_ = 0;
        if (0.0 <= param_2) {
          lVar15 = 6;
          bVar24 = false;
          bVar17 = false;
          goto LAB_00b02697;
        }
        if (*(long *)(param_4 + 0x98) != -0x8000000000000000) {
          dVar33 = (*(double *)(param_4 + 0x200) - *(double *)(param_4 + 0xd8)) *
                   *(double *)(uVar18 * -0x20 + lVar3 + -8) + *(double *)(param_4 + 0xd8);
          bVar24 = param_1 <= dVar33;
          lVar15 = *(long *)(param_4 + 0x70);
          if (lVar15 == 0) {
            bVar10 = false;
            lVar15 = 6;
            dStack_98 = 0.0;
            bVar17 = false;
          }
          else {
            if (*(long *)(param_4 + 0x350) == 0) {
              pdVar25 = (double *)0x0;
              dStack_78 = param_1;
            }
            else {
              dStack_78 = param_1;
              _ZN5alloc11collections5btree6search142__LT_impl_u20_alloc__collections__btree__node__NodeRef_LT_BorrowType_C_K_C_V_C_alloc__collections__btree__node__marker__LeafOrInternal_GT__GT_11search_tree17hd66023219929c6c4E
                        (&lStack_60,*(long *)(param_4 + 0x350),*(undefined8 *)(param_4 + 0x358),
                         &dStack_78);
              pdVar25 = (double *)0x0;
              if ((char)lStack_60 == '\0') {
                pdVar25 = (double *)(puStack_58 + lStack_48 + 0xc);
              }
            }
            lStack_60 = *(long *)(param_4 + 0x68);
            puStack_58 = (undefined8 *)(lVar15 * 0x38 + lStack_60);
            pdStack_50 = &dStack_80;
            _ZN98__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__GT_9from_iter17hcad0ca09653c5dbcE
                      (&dStack_78,&lStack_60,
                       anon_5057d08616aaadbca204640f1da5e907_53_llvm_15565010581497186374);
            uVar21 = _DAT_00358eb0;
            uVar18 = _DAT_00358360;
            uVar11 = _DAT_00354750;
            dVar2 = _DAT_00353b80;
            uVar4 = _DAT_00353a78;
            dVar1 = _DAT_00352718;
            if (lStack_68 == 0) {
              auStack_b8._0_8_ = 0;
              bVar10 = false;
              dStack_98 = 0.0;
            }
            else {
              auStack_b8 = ZEXT816(0);
              lVar15 = 0;
              dVar44 = 0.0;
              do {
                lVar14 = *(long *)(lStack_70 + lVar15);
                dVar49 = dVar44;
                if (param_1 <= *(double *)(lVar14 + 0x20)) {
                  if ((double)(auStack_b8._0_8_ & uVar11) <
                      (double)((ulong)dStack_80 & uVar11) + dVar1) {
                    dVar47 = dVar44;
                    if (pdVar25 != (double *)0x0) {
                      dVar47 = *pdVar25;
                    }
                    dVar48 = *(double *)(lVar14 + 0x28);
                    if (dVar2 < dVar47) {
                      dVar46 = (double)((ulong)dVar48 & uVar11);
                      dVar49 = dVar46;
                      if (dVar47 <= dVar46) {
                        dVar49 = dVar47;
                      }
                      dVar46 = (double)(~-(ulong)NAN(dVar47) & (ulong)dVar49 |
                                       -(ulong)NAN(dVar47) & (ulong)dVar46);
                      dVar49 = dVar47 - dVar46;
                      if (pdVar25 != (double *)0x0) {
                        *pdVar25 = dVar49;
                        dVar48 = *(double *)(lVar14 + 0x28);
                        dVar49 = dVar44;
                      }
                      dVar48 = dVar48 - (double)(~-(ulong)NAN(dVar48) &
                                                 ((ulong)dVar48 & uVar21 | uVar18) |
                                                -(ulong)NAN(dVar48) & uVar4) * dVar46;
                      *(double *)(lVar14 + 0x28) = dVar48;
                    }
                    dVar46 = (double)((ulong)dVar48 & uVar11);
                    dVar47 = (double)((ulong)dStack_80 & uVar11) -
                             (double)(auStack_b8._0_8_ & uVar11);
                    dVar44 = dVar47;
                    if (dVar46 <= dVar47) {
                      dVar44 = dVar46;
                    }
                    dVar44 = (double)(~-(ulong)NAN(dVar46) & (ulong)dVar44 |
                                     -(ulong)NAN(dVar46) & (ulong)dVar47);
                    auStack_b8._0_8_ =
                         (double)auStack_b8._0_8_ +
                         (double)(~-(ulong)NAN(dStack_80) & ((ulong)dStack_80 & uVar21 | uVar18) |
                                 -(ulong)NAN(dStack_80) & uVar4) * dVar44;
                    if (param_5 != '\0') {
                      *(double *)(lVar14 + 0x28) =
                           dVar48 - (double)(~-(ulong)NAN(dVar48) &
                                             ((ulong)dVar48 & uVar21 | uVar18) |
                                            -(ulong)NAN(dVar48) & uVar4) * dVar44;
                    }
                  }
                }
                lVar15 = lVar15 + 8;
                dVar44 = dVar49;
              } while (lStack_68 * 8 - lVar15 != 0);
              if (dStack_78 != 0.0) {
                (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20)
                          (lStack_70,(long)dStack_78 << 3,8);
              }
              if ((double)(_DAT_00354750 & auStack_b8._0_8_) <= _DAT_00352e38) {
                dStack_98 = 0.0;
                bVar10 = false;
              }
              else {
                dStack_98 = (*(double *)(lVar13 + -8) / _DAT_00353308 + _DAT_00353188) * param_1;
                bVar10 = true;
              }
            }
            if (dVar33 < param_1) {
              pdVar25 = (double *)0x6;
              bVar17 = bVar10;
              if (bVar10 != false) {
                (*(code *)
                  PTR__RNvCseg1Mqjmf11U_7___rustc35___rust_no_alloc_shim_is_unstable_v2_01aa6a40)();
                uVar23 = 9;
                puVar12 = (undefined8 *)
                          (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc12___rust_alloc_01aa6a18)(9,1);
                if (puVar12 == (undefined8 *)0x0) goto LAB_00b0273e;
                *puVar12 = 0x69682072656b616d;
                *(undefined1 *)(puVar12 + 1) = 0x74;
                pdVar25 = (double *)0x9;
                lVar15 = 9;
                goto LAB_00b0258d;
              }
              lVar15 = 6;
            }
            else {
              bVar17 = true;
              if (bVar10 == false) {
                _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h6f91b9306879822aE
                          (&lStack_60,&UNK_00385d83,9);
                lVar15 = lStack_60;
                pdVar25 = pdStack_50;
                puVar12 = puStack_58;
              }
              else {
                (*(code *)
                  PTR__RNvCseg1Mqjmf11U_7___rustc35___rust_no_alloc_shim_is_unstable_v2_01aa6a40)();
                uVar23 = 0xf;
                puVar12 = (undefined8 *)
                          (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc12___rust_alloc_01aa6a18)(0xf,1);
                if (puVar12 == (undefined8 *)0x0) {
LAB_00b0273e:
                  (*(code *)PTR__ZN5alloc7raw_vec12handle_error17h24b7b14ecfc8bc80E_01aa6b98)
                            (1,uVar23,&UNK_019fd680);
                  goto LAB_00b02753;
                }
                *(undefined8 *)((long)puVar12 + 7) = 0x7469682072656b61;
                *puVar12 = 0x616d2b72656b6174;
                lVar15 = 0xf;
                pdVar25 = (double *)0xf;
              }
LAB_00b0258d:
              (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20)(puStack_d0,6,1);
              puStack_d0 = puVar12;
            }
            if ((lStack_68 == 0) && (dStack_78 != 0.0)) {
              (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20)
                        (lStack_70,(long)dStack_78 << 3,8);
            }
          }
          goto LAB_00b02697;
        }
        puVar22 = &UNK_019fe4f8;
      }
      goto LAB_00b02705;
    }
    uVar19 = (ushort)(uVar16 - 1) & (ushort)uVar16;
    uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar19);
  }
  auVar35[0] = -(*pcVar5 == -1);
  auVar35[1] = -(pcVar5[1] == -1);
  auVar35[2] = -(pcVar5[2] == -1);
  auVar35[3] = -(pcVar5[3] == -1);
  auVar35[4] = -(pcVar5[4] == -1);
  auVar35[5] = -(pcVar5[5] == -1);
  auVar35[6] = -(pcVar5[6] == -1);
  auVar35[7] = -(pcVar5[7] == -1);
  auVar35[8] = -(pcVar5[8] == -1);
  auVar35[9] = -(pcVar5[9] == -1);
  auVar35[10] = -(pcVar5[10] == -1);
  auVar35[0xb] = -(pcVar5[0xb] == -1);
  auVar35[0xc] = -(pcVar5[0xc] == -1);
  auVar35[0xd] = -(pcVar5[0xd] == -1);
  auVar35[0xe] = -(pcVar5[0xe] == -1);
  auVar35[0xf] = -(cVar27 == -1);
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
      (auVar35 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || cVar27 == -1)
  goto LAB_00b02705;
  uVar11 = uVar11 + lVar13 + 0x10;
  lVar13 = lVar13 + 0x10;
  goto LAB_00b01a1e;
LAB_00b01b65:
  uVar11 = uVar11 & uVar4;
  auVar38 = *(undefined1 (*) [16])(lVar3 + uVar11);
  cVar27 = auVar29[0];
  auVar39[0] = -(auVar38[0] == cVar27);
  cVar28 = auVar29[1];
  auVar39[1] = -(auVar38[1] == cVar28);
  cVar30 = auVar29[2];
  auVar39[2] = -(auVar38[2] == cVar30);
  cVar31 = auVar29[3];
  auVar39[3] = -(auVar38[3] == cVar31);
  auVar39[4] = -(auVar38[4] == cVar27);
  auVar39[5] = -(auVar38[5] == cVar28);
  auVar39[6] = -(auVar38[6] == cVar30);
  auVar39[7] = -(auVar38[7] == cVar31);
  auVar39[8] = -(auVar38[8] == cVar27);
  auVar39[9] = -(auVar38[9] == cVar28);
  auVar39[10] = -(auVar38[10] == cVar30);
  auVar39[0xb] = -(auVar38[0xb] == cVar31);
  auVar39[0xc] = -(auVar38[0xc] == cVar27);
  auVar39[0xd] = -(auVar38[0xd] == cVar28);
  cVar27 = auVar38[0xf];
  auVar39[0xe] = -(auVar38[0xe] == cVar30);
  auVar39[0xf] = -(cVar27 == cVar31);
  uVar19 = (ushort)(SUB161(auVar39 >> 7,0) & 1) | (ushort)(SUB161(auVar39 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar39 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar39 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar39 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar39 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar39 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar39 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar39 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar39 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar39 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar39 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar39 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar39 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar39 >> 0x77,0) & 1) << 0xe | (ushort)(auVar39[0xf] >> 7) << 0xf;
  uVar16 = (uint)uVar19;
  while (uVar19 != 0) {
    uVar8 = 0;
    for (uVar9 = uVar16; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
      uVar8 = uVar8 + 1;
    }
    uVar18 = uVar8 + uVar11 & uVar4;
    lVar13 = lVar15 + uVar18 * -0x20;
    if ((*(long *)(lVar13 + 0x10) == 0xe) &&
       (plVar6 = *(long **)(lVar13 + 8),
       *(long *)((long)plVar6 + 6) == 0x7972657070696c73 && *plVar6 == 0x6c735f72656b6174)) {
      dVar2 = *(double *)(lVar3 + -8 + uVar18 * -0x20);
      lVar15 = *(long *)(param_4 + 0x70);
      if (lVar15 == 0) {
        auStack_b8._0_8_ = 0;
        bVar10 = false;
        dStack_98 = 0.0;
      }
      else {
        if (*(long *)(param_4 + 0x368) == 0) {
          pdVar25 = (double *)0x0;
          dStack_78 = param_1;
        }
        else {
          dStack_78 = param_1;
          _ZN5alloc11collections5btree6search142__LT_impl_u20_alloc__collections__btree__node__NodeRef_LT_BorrowType_C_K_C_V_C_alloc__collections__btree__node__marker__LeafOrInternal_GT__GT_11search_tree17hd66023219929c6c4E
                    (&lStack_60,*(long *)(param_4 + 0x368),*(undefined8 *)(param_4 + 0x370),
                     &dStack_78);
          pdVar25 = (double *)0x0;
          if ((char)lStack_60 == '\0') {
            pdVar25 = (double *)(puStack_58 + lStack_48 + 0xc);
          }
        }
        lStack_60 = *(long *)(param_4 + 0x68);
        puStack_58 = (undefined8 *)(lVar15 * 0x38 + lStack_60);
        pdStack_50 = &dStack_80;
        _ZN98__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__GT_9from_iter17hcad0ca09653c5dbcE
                  (&dStack_78,&lStack_60,
                   anon_5057d08616aaadbca204640f1da5e907_53_llvm_15565010581497186374);
        uVar21 = _DAT_00358eb0;
        uVar18 = _DAT_00358360;
        uVar11 = _DAT_00354750;
        dVar49 = _DAT_00353b80;
        uVar4 = _DAT_00353a78;
        dVar44 = _DAT_00352718;
        if (lStack_68 == 0) {
          dStack_98 = 0.0;
          if (dStack_78 != 0.0) {
            (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20)
                      (lStack_70,(long)dStack_78 << 3,8);
          }
          bVar10 = false;
          auStack_b8._0_8_ = 0;
        }
        else {
          auStack_b8 = (undefined1  [16])0x0;
          lVar15 = 0;
          dVar47 = 0.0;
          do {
            lVar14 = *(long *)(lStack_70 + lVar15);
            dVar48 = dVar47;
            if (*(double *)(lVar14 + 0x20) <= param_1) {
              if ((double)(auStack_b8._0_8_ & uVar11) < (double)((ulong)dStack_80 & uVar11) + dVar44
                 ) {
                dVar46 = dVar47;
                if (pdVar25 != (double *)0x0) {
                  dVar46 = *pdVar25;
                }
                dVar45 = *(double *)(lVar14 + 0x28);
                if (dVar49 < dVar46) {
                  dVar50 = (double)((ulong)dVar45 & uVar11);
                  dVar48 = dVar50;
                  if (dVar46 <= dVar50) {
                    dVar48 = dVar46;
                  }
                  dVar50 = (double)(~-(ulong)NAN(dVar46) & (ulong)dVar48 |
                                   -(ulong)NAN(dVar46) & (ulong)dVar50);
                  dVar48 = dVar46 - dVar50;
                  if (pdVar25 != (double *)0x0) {
                    *pdVar25 = dVar48;
                    dVar45 = *(double *)(lVar14 + 0x28);
                    dVar48 = dVar47;
                  }
                  dVar45 = dVar45 - (double)(~-(ulong)NAN(dVar45) &
                                             ((ulong)dVar45 & uVar21 | uVar18) |
                                            -(ulong)NAN(dVar45) & uVar4) * dVar50;
                  *(double *)(lVar14 + 0x28) = dVar45;
                }
                dVar50 = (double)((ulong)dVar45 & uVar11);
                dVar46 = (double)((ulong)dStack_80 & uVar11) - (double)(auStack_b8._0_8_ & uVar11);
                dVar47 = dVar46;
                if (dVar50 <= dVar46) {
                  dVar47 = dVar50;
                }
                dVar47 = (double)(~-(ulong)NAN(dVar50) & (ulong)dVar47 |
                                 -(ulong)NAN(dVar50) & (ulong)dVar46);
                auStack_b8._0_8_ =
                     (double)auStack_b8._0_8_ +
                     (double)(~-(ulong)NAN(dStack_80) & ((ulong)dStack_80 & uVar21 | uVar18) |
                             -(ulong)NAN(dStack_80) & uVar4) * dVar47;
                if (param_5 != '\0') {
                  *(double *)(lVar14 + 0x28) =
                       dVar45 - (double)(~-(ulong)NAN(dVar45) & ((ulong)dVar45 & uVar21 | uVar18) |
                                        -(ulong)NAN(dVar45) & uVar4) * dVar47;
                }
              }
            }
            lVar15 = lVar15 + 8;
            dVar47 = dVar48;
          } while (lStack_68 << 3 != lVar15);
          if (dStack_78 != 0.0) {
            (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20)
                      (lStack_70,(long)dStack_78 << 3,8);
          }
          if ((double)(_DAT_00354750 & auStack_b8._0_8_) <= _DAT_00352e38) {
            dStack_98 = 0.0;
            bVar10 = false;
          }
          else {
            dStack_98 = (*(double *)(lStack_40 + -8) / _DAT_00352920 + _DAT_00353188) * param_1;
            bVar10 = true;
          }
        }
      }
      if (param_1 < dVar33 + (dVar1 - dVar33) * dVar2) {
        if (bVar10 == false) {
          pdVar25 = (double *)0x6;
          lVar15 = 6;
        }
        else {
          (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc35___rust_no_alloc_shim_is_unstable_v2_01aa6a40)
                    ();
          param_4 = 9;
          puVar12 = (undefined8 *)
                    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc12___rust_alloc_01aa6a18)(9,1);
          if (puVar12 == (undefined8 *)0x0) goto LAB_00b02727;
          *puVar12 = 0x69682072656b616d;
          *(undefined1 *)(puVar12 + 1) = 0x74;
          (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20)(puStack_d0,6,1);
          pdVar25 = (double *)0x9;
          lVar15 = 9;
          puStack_d0 = puVar12;
        }
        bVar24 = false;
        bVar17 = bVar10;
LAB_00b02697:
        *plStack_38 = lVar15;
        plStack_38[1] = (long)puStack_d0;
        plStack_38[2] = (long)pdVar25;
        plStack_38[3] = (long)dStack_98;
        plStack_38[4] = auStack_b8._0_8_;
        *(bool *)(plStack_38 + 5) = bVar17;
        *(bool *)((long)plStack_38 + 0x29) = bVar24;
        *(bool *)((long)plStack_38 + 0x2a) = bVar10;
        return plStack_38;
      }
      (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc35___rust_no_alloc_shim_is_unstable_v2_01aa6a40)();
      if (bVar10) {
        param_4 = 0xf;
        puVar12 = (undefined8 *)
                  (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc12___rust_alloc_01aa6a18)(0xf,1);
        if (puVar12 != (undefined8 *)0x0) {
          *(undefined8 *)((long)puVar12 + 7) = 0x7469682072656b61;
          *puVar12 = 0x616d2b72656b6174;
          (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20)(puStack_d0,6,1);
          bVar24 = true;
          pdVar25 = (double *)0xf;
          lVar15 = 0xf;
          bVar17 = true;
          puStack_d0 = puVar12;
          goto LAB_00b02697;
        }
      }
      else {
        param_4 = 9;
        puVar12 = (undefined8 *)
                  (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc12___rust_alloc_01aa6a18)(9,1);
        if (puVar12 != (undefined8 *)0x0) {
          *puVar12 = 0x69682072656b6174;
          *(undefined1 *)(puVar12 + 1) = 0x74;
          (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20)(puStack_d0,6,1);
          bVar24 = true;
          pdVar25 = (double *)0x9;
          lVar15 = 9;
          bVar17 = true;
          puStack_d0 = puVar12;
          goto LAB_00b02697;
        }
      }
      goto LAB_00b02727;
    }
    uVar19 = (ushort)(uVar16 - 1) & (ushort)uVar16;
    uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar19);
  }
  auVar36[0] = -(auVar38[0] == -1);
  auVar36[1] = -(auVar38[1] == -1);
  auVar36[2] = -(auVar38[2] == -1);
  auVar36[3] = -(auVar38[3] == -1);
  auVar36[4] = -(auVar38[4] == -1);
  auVar36[5] = -(auVar38[5] == -1);
  auVar36[6] = -(auVar38[6] == -1);
  auVar36[7] = -(auVar38[7] == -1);
  auVar36[8] = -(auVar38[8] == -1);
  auVar36[9] = -(auVar38[9] == -1);
  auVar36[10] = -(auVar38[10] == -1);
  auVar36[0xb] = -(auVar38[0xb] == -1);
  auVar36[0xc] = -(auVar38[0xc] == -1);
  auVar36[0xd] = -(auVar38[0xd] == -1);
  auVar36[0xe] = -(auVar38[0xe] == -1);
  auVar36[0xf] = -(cVar27 == -1);
  if ((((((((((((((((auVar36 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                   (auVar36 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar36 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar36 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar36 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar36 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar36 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar36 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar36 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar36 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar36 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
         (auVar36 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
        (auVar36 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
       (auVar36 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
      (auVar36 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || cVar27 == -1)
  goto LAB_00b02705;
  uVar11 = uVar11 + lVar14 + 0x10;
  lVar14 = lVar14 + 0x10;
  goto LAB_00b01b65;
}


