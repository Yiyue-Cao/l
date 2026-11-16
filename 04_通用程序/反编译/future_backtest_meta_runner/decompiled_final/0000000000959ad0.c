// ELF address 0x0000000000959ad0; future_backtest::MakerSimulator::maker_simulator::TradeSimulator1::orders_hit_dynamic_trades

/* WARNING: Removing unreachable block (ram,0x00a5a7da) */
/* WARNING: Removing unreachable block (ram,0x00a5a7ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * _ZN15future_backtest14MakerSimulator15maker_simulator15TradeSimulator125orders_hit_dynamic_trades17h372ccfbd73c15be2E
                 (double param_1,double param_2,long *param_3,long param_4,char param_5)

{
  long lVar1;
  ulong uVar2;
  char *pcVar3;
  long *plVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  bool bVar15;
  ulong uVar16;
  ushort uVar17;
  long lVar18;
  ulong uVar19;
  undefined *puVar20;
  bool bVar21;
  undefined8 uVar22;
  double *pdVar23;
  byte bVar24;
  char cVar25;
  char cVar26;
  char cVar28;
  char cVar29;
  char cVar30;
  undefined1 auVar27 [16];
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  ulong uVar42;
  undefined1 auVar43 [16];
  ulong uVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  undefined8 *puStack_b8;
  undefined1 auStack_98 [16];
  double dStack_88;
  double dStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  undefined8 *puStack_50;
  double *pdStack_48;
  long lStack_40;
  long *plStack_38;
  
  dStack_78 = param_2;
  (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc35___rust_no_alloc_shim_is_unstable_v2_019fbb40)();
  puStack_b8 = (undefined8 *)(*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc12___rust_alloc_019fbb18)(6,1)
  ;
  if (puStack_b8 == (undefined8 *)0x0) {
    (*(code *)PTR__ZN5alloc7raw_vec12handle_error17h24b7b14ecfc8bc80E_019fc178)(1,6,&UNK_01952778);
LAB_00a5a822:
    (*(code *)PTR__ZN5alloc7raw_vec12handle_error17h24b7b14ecfc8bc80E_019fc178)
              (1,param_4,&UNK_01952778);
  }
  else {
    *(undefined2 *)((long)puStack_b8 + 4) = 0x6c65;
    *(undefined4 *)puStack_b8 = 0x636e6163;
    puVar20 = &UNK_01953650;
    plStack_38 = param_3;
    if (*(long *)(param_4 + 0x300) != 0) {
      lVar12 = param_4 + 0x308;
      uVar9 = _ZN4core4hash11BuildHasher8hash_one17h4c80eaa158253d25E(lVar12,&UNK_0037ea0c,0x11);
      lVar1 = *(long *)(param_4 + 0x2e8);
      uVar2 = *(ulong *)(param_4 + 0x2f0);
      bVar24 = (byte)(uVar9 >> 0x39);
      auVar27 = ZEXT216(CONCAT11(bVar24,bVar24));
      auVar27 = pshuflw(auVar27,auVar27,0);
      lVar13 = lVar1 + -0x20;
      lVar11 = 0;
      while( true ) {
        uVar9 = uVar9 & uVar2;
        auVar40 = *(undefined1 (*) [16])(lVar1 + uVar9);
        cVar25 = auVar27[0];
        auVar45[0] = -(auVar40[0] == cVar25);
        cVar26 = auVar27[1];
        auVar45[1] = -(auVar40[1] == cVar26);
        cVar28 = auVar27[2];
        auVar45[2] = -(auVar40[2] == cVar28);
        cVar29 = auVar27[3];
        auVar45[3] = -(auVar40[3] == cVar29);
        auVar45[4] = -(auVar40[4] == cVar25);
        auVar45[5] = -(auVar40[5] == cVar26);
        auVar45[6] = -(auVar40[6] == cVar28);
        auVar45[7] = -(auVar40[7] == cVar29);
        auVar45[8] = -(auVar40[8] == cVar25);
        auVar45[9] = -(auVar40[9] == cVar26);
        auVar45[10] = -(auVar40[10] == cVar28);
        auVar45[0xb] = -(auVar40[0xb] == cVar29);
        auVar45[0xc] = -(auVar40[0xc] == cVar25);
        auVar45[0xd] = -(auVar40[0xd] == cVar26);
        cVar25 = auVar40[0xf];
        auVar45[0xe] = -(auVar40[0xe] == cVar28);
        auVar45[0xf] = -(cVar25 == cVar29);
        uVar17 = (ushort)(SUB161(auVar45 >> 7,0) & 1) | (ushort)(SUB161(auVar45 >> 0xf,0) & 1) << 1
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
        uVar14 = (uint)uVar17;
        while (uVar17 != 0) {
          uVar6 = 0;
          for (uVar7 = uVar14; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
            uVar6 = uVar6 + 1;
          }
          lVar18 = lVar13 + (uVar6 + uVar9 & uVar2) * -0x20;
          if (*(long *)(lVar18 + 0x10) == 0x11) {
            pcVar3 = *(char **)(lVar18 + 8);
            auVar46[0] = -(*pcVar3 == SUB161(_DAT_00354d50,0));
            auVar46[1] = -(pcVar3[1] == SUB161(_DAT_00354d50,1));
            auVar46[2] = -(pcVar3[2] == SUB161(_DAT_00354d50,2));
            auVar46[3] = -(pcVar3[3] == SUB161(_DAT_00354d50,3));
            auVar46[4] = -(pcVar3[4] == SUB161(_DAT_00354d50,4));
            auVar46[5] = -(pcVar3[5] == SUB161(_DAT_00354d50,5));
            auVar46[6] = -(pcVar3[6] == SUB161(_DAT_00354d50,6));
            auVar46[7] = -(pcVar3[7] == SUB161(_DAT_00354d50,7));
            auVar46[8] = -(pcVar3[8] == SUB161(_DAT_00354d50,8));
            auVar46[9] = -(pcVar3[9] == SUB161(_DAT_00354d50,9));
            auVar46[10] = -(pcVar3[10] == SUB161(_DAT_00354d50,10));
            auVar46[0xb] = -(pcVar3[0xb] == SUB161(_DAT_00354d50,0xb));
            auVar46[0xc] = -(pcVar3[0xc] == SUB161(_DAT_00354d50,0xc));
            auVar46[0xd] = -(pcVar3[0xd] == SUB161(_DAT_00354d50,0xd));
            auVar46[0xe] = -(pcVar3[0xe] == SUB161(_DAT_00354d50,0xe));
            auVar46[0xf] = -(pcVar3[0xf] == SUB161(_DAT_00354d50,0xf));
            auVar47[0] = -(pcVar3[0x10] ==
                          (char)anon_baa4d3160c6db26b1acb0467a3a6e91d_50_llvm_14045134056871974489);
            auVar47[1] = -((char)((uint)
                                  anon_baa4d3160c6db26b1acb0467a3a6e91d_50_llvm_14045134056871974489
                                 >> 8) == '\0');
            auVar47[2] = -((char)((uint)
                                  anon_baa4d3160c6db26b1acb0467a3a6e91d_50_llvm_14045134056871974489
                                 >> 0x10) == '\0');
            auVar47[3] = -((char)((uint)
                                  anon_baa4d3160c6db26b1acb0467a3a6e91d_50_llvm_14045134056871974489
                                 >> 0x18) == '\0');
            auVar47[4] = 0xff;
            auVar47[5] = 0xff;
            auVar47[6] = 0xff;
            auVar47[7] = 0xff;
            auVar47[8] = 0xff;
            auVar47[9] = 0xff;
            auVar47[10] = 0xff;
            auVar47[0xb] = 0xff;
            auVar47[0xc] = 0xff;
            auVar47[0xd] = 0xff;
            auVar47[0xe] = 0xff;
            auVar47[0xf] = 0xff;
            auVar47 = auVar47 & auVar46;
            if ((ushort)((ushort)(SUB161(auVar47 >> 7,0) & 1) |
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
                        (ushort)(byte)(auVar47[0xf] >> 7) << 0xf) == 0xffff) {
              uVar9 = _ZN4core4hash11BuildHasher8hash_one17h4c80eaa158253d25E
                                (lVar12,&UNK_0037ea1d,0xe);
              bVar24 = (byte)(uVar9 >> 0x39);
              auVar27 = ZEXT216(CONCAT11(bVar24,bVar24));
              auVar27 = pshuflw(auVar27,auVar27,0);
              lVar11 = 0;
              puVar20 = &UNK_01953668;
              goto LAB_00a59c88;
            }
          }
          uVar17 = (ushort)(uVar14 - 1) & (ushort)uVar14;
          uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar17);
        }
        auVar43[0] = -(auVar40[0] == -1);
        auVar43[1] = -(auVar40[1] == -1);
        auVar43[2] = -(auVar40[2] == -1);
        auVar43[3] = -(auVar40[3] == -1);
        auVar43[4] = -(auVar40[4] == -1);
        auVar43[5] = -(auVar40[5] == -1);
        auVar43[6] = -(auVar40[6] == -1);
        auVar43[7] = -(auVar40[7] == -1);
        auVar43[8] = -(auVar40[8] == -1);
        auVar43[9] = -(auVar40[9] == -1);
        auVar43[10] = -(auVar40[10] == -1);
        auVar43[0xb] = -(auVar40[0xb] == -1);
        auVar43[0xc] = -(auVar40[0xc] == -1);
        auVar43[0xd] = -(auVar40[0xd] == -1);
        auVar43[0xe] = -(auVar40[0xe] == -1);
        auVar43[0xf] = -(cVar25 == -1);
        if ((((((((((((((((auVar43 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                         (auVar43 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar43 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar43 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar43 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar43 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar43 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar43 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar43 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar43 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar43 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar43 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar43 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar43 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar43 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || cVar25 == -1)
        break;
        uVar9 = uVar9 + lVar11 + 0x10;
        lVar11 = lVar11 + 0x10;
      }
    }
LAB_00a5a800:
    (*(code *)PTR__ZN4core6option13unwrap_failed17h4154e01d14eb4879E_019fbeb0)(puVar20);
  }
LAB_00a5a84e:
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
LAB_00a59c88:
  uVar9 = uVar9 & uVar2;
  auVar40 = *(undefined1 (*) [16])(lVar1 + uVar9);
  cVar25 = auVar27[0];
  auVar39[0] = -(auVar40[0] == cVar25);
  cVar26 = auVar27[1];
  auVar39[1] = -(auVar40[1] == cVar26);
  cVar28 = auVar27[2];
  auVar39[2] = -(auVar40[2] == cVar28);
  cVar29 = auVar27[3];
  auVar39[3] = -(auVar40[3] == cVar29);
  auVar39[4] = -(auVar40[4] == cVar25);
  auVar39[5] = -(auVar40[5] == cVar26);
  auVar39[6] = -(auVar40[6] == cVar28);
  auVar39[7] = -(auVar40[7] == cVar29);
  auVar39[8] = -(auVar40[8] == cVar25);
  auVar39[9] = -(auVar40[9] == cVar26);
  auVar39[10] = -(auVar40[10] == cVar28);
  auVar39[0xb] = -(auVar40[0xb] == cVar29);
  auVar39[0xc] = -(auVar40[0xc] == cVar25);
  auVar39[0xd] = -(auVar40[0xd] == cVar26);
  cVar25 = auVar40[0xf];
  auVar39[0xe] = -(auVar40[0xe] == cVar28);
  auVar39[0xf] = -(cVar25 == cVar29);
  uVar17 = (ushort)(SUB161(auVar39 >> 7,0) & 1) | (ushort)(SUB161(auVar39 >> 0xf,0) & 1) << 1 |
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
  uVar14 = (uint)uVar17;
  while (uVar17 != 0) {
    uVar6 = 0;
    for (uVar7 = uVar14; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
      uVar6 = uVar6 + 1;
    }
    uVar16 = uVar6 + uVar9 & uVar2;
    lVar18 = lVar13 + uVar16 * -0x20;
    if ((*(long *)(lVar18 + 0x10) == 0xe) &&
       (plVar4 = *(long **)(lVar18 + 8),
       *(long *)((long)plVar4 + 6) == 0x7972657070696c73 && *plVar4 == 0x6c735f72656b6174)) {
      uVar9 = _ZN4core4hash11BuildHasher8hash_one17h4c80eaa158253d25E(lVar12,&UNK_0037eb64,0xf);
      bVar24 = (byte)(uVar9 >> 0x39);
      auVar27 = ZEXT216(CONCAT11(bVar24,bVar24));
      auVar27 = pshuflw(auVar27,auVar27,0);
      lVar11 = 0;
      puVar20 = &UNK_01953680;
      goto LAB_00a59d6e;
    }
    uVar17 = (ushort)(uVar14 - 1) & (ushort)uVar14;
    uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar17);
  }
  auVar36[0] = -(auVar40[0] == -1);
  auVar36[1] = -(auVar40[1] == -1);
  auVar36[2] = -(auVar40[2] == -1);
  auVar36[3] = -(auVar40[3] == -1);
  auVar36[4] = -(auVar40[4] == -1);
  auVar36[5] = -(auVar40[5] == -1);
  auVar36[6] = -(auVar40[6] == -1);
  auVar36[7] = -(auVar40[7] == -1);
  auVar36[8] = -(auVar40[8] == -1);
  auVar36[9] = -(auVar40[9] == -1);
  auVar36[10] = -(auVar40[10] == -1);
  auVar36[0xb] = -(auVar40[0xb] == -1);
  auVar36[0xc] = -(auVar40[0xc] == -1);
  auVar36[0xd] = -(auVar40[0xd] == -1);
  auVar36[0xe] = -(auVar40[0xe] == -1);
  auVar36[0xf] = -(cVar25 == -1);
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
      (auVar36 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || cVar25 == -1)
  goto LAB_00a5a800;
  uVar9 = uVar9 + lVar11 + 0x10;
  lVar11 = lVar11 + 0x10;
  goto LAB_00a59c88;
LAB_00a59d6e:
  uVar9 = uVar9 & uVar2;
  pcVar3 = (char *)(lVar1 + uVar9);
  cVar25 = pcVar3[0xf];
  cVar26 = auVar27[0];
  auVar40[0] = -(*pcVar3 == cVar26);
  cVar28 = auVar27[1];
  auVar40[1] = -(pcVar3[1] == cVar28);
  cVar29 = auVar27[2];
  auVar40[2] = -(pcVar3[2] == cVar29);
  cVar30 = auVar27[3];
  auVar40[3] = -(pcVar3[3] == cVar30);
  auVar40[4] = -(pcVar3[4] == cVar26);
  auVar40[5] = -(pcVar3[5] == cVar28);
  auVar40[6] = -(pcVar3[6] == cVar29);
  auVar40[7] = -(pcVar3[7] == cVar30);
  auVar40[8] = -(pcVar3[8] == cVar26);
  auVar40[9] = -(pcVar3[9] == cVar28);
  auVar40[10] = -(pcVar3[10] == cVar29);
  auVar40[0xb] = -(pcVar3[0xb] == cVar30);
  auVar40[0xc] = -(pcVar3[0xc] == cVar26);
  auVar40[0xd] = -(pcVar3[0xd] == cVar28);
  auVar40[0xe] = -(pcVar3[0xe] == cVar29);
  auVar40[0xf] = -(cVar25 == cVar30);
  uVar17 = (ushort)(SUB161(auVar40 >> 7,0) & 1) | (ushort)(SUB161(auVar40 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar40 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar40 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar40 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar40 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar40 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar40 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar40 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar40 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar40 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar40 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar40 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar40 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar40 >> 0x77,0) & 1) << 0xe | (ushort)(auVar40[0xf] >> 7) << 0xf;
  uVar14 = (uint)uVar17;
  while (uVar17 != 0) {
    uVar6 = 0;
    for (uVar7 = uVar14; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
      uVar6 = uVar6 + 1;
    }
    uVar19 = uVar6 + uVar9 & uVar2;
    lVar18 = lVar13 + uVar19 * -0x20;
    if ((*(long *)(lVar18 + 0x10) == 0xf) &&
       (plVar4 = *(long **)(lVar18 + 8),
       *(long *)((long)plVar4 + 7) == 0x70625f6574616265 && *plVar4 == 0x65725f72656b616d)) {
      lVar11 = uVar19 * -0x20 + lVar1;
      dStack_88 = 0.0;
      if (0.0 < param_2) {
        lStack_40 = lVar11;
        if (*(long *)(param_4 + 0x98) != -0x8000000000000000) {
          dVar31 = *(double *)(param_4 + 0x128);
          dVar32 = *(double *)(param_4 + 0x250);
          uVar9 = _ZN4core4hash11BuildHasher8hash_one17h4c80eaa158253d25E(lVar12,&UNK_0037ea1d,0xe);
          bVar24 = (byte)(uVar9 >> 0x39);
          auVar27 = ZEXT216(CONCAT11(bVar24,bVar24));
          auVar27 = pshuflw(auVar27,auVar27,0);
          lVar12 = 0;
          puVar20 = &UNK_019536f8;
          goto LAB_00a59eaa;
        }
        puVar20 = &UNK_019536e0;
      }
      else {
        pdVar23 = (double *)0x6;
        bVar8 = false;
        auStack_98._0_8_ = 0;
        if (0.0 <= param_2) {
          lVar13 = 6;
          bVar21 = false;
          bVar15 = false;
          goto LAB_00a5a794;
        }
        if (*(long *)(param_4 + 0x98) != -0x8000000000000000) {
          dVar31 = (*(double *)(param_4 + 0x200) - *(double *)(param_4 + 0xd8)) *
                   *(double *)(uVar16 * -0x20 + lVar1 + -8) + *(double *)(param_4 + 0xd8);
          bVar21 = param_1 <= dVar31;
          if (*(long *)(param_4 + 0x70) == 0) {
            bVar8 = false;
            lVar13 = 6;
            dStack_88 = 0.0;
            bVar15 = false;
          }
          else {
            lStack_58 = *(long *)(param_4 + 0x68);
            puStack_50 = (undefined8 *)(*(long *)(param_4 + 0x70) * 0x38 + lStack_58);
            pdStack_48 = &dStack_78;
            _ZN98__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__GT_9from_iter17hcad0ca09653c5dbcE
                      (&lStack_70,&lStack_58,
                       anon_5057d08616aaadbca204640f1da5e907_53_llvm_15565010581497186374);
            uVar19 = _DAT_003565d8;
            uVar16 = _DAT_00354010;
            uVar9 = _DAT_00353510;
            uVar2 = _DAT_0034f910;
            if (lStack_60 == 0) {
              auStack_98._0_8_ = 0;
              bVar8 = false;
              dStack_88 = 0.0;
            }
            else {
              dVar32 = (double)(_DAT_0034f910 & (ulong)dStack_78);
              dVar34 = dVar32 + _DAT_00355278;
              uVar42 = _DAT_00354010 & (ulong)dStack_78 | _DAT_00353510;
              uVar44 = -(ulong)NAN(dStack_78) & _DAT_003565d8;
              auStack_98 = ZEXT816(0);
              lVar13 = 0;
              do {
                lVar12 = *(long *)(lStack_68 + lVar13);
                if (param_1 <= *(double *)(lVar12 + 0x20)) {
                  dVar33 = (double)(auStack_98._0_8_ & uVar2);
                  if (dVar33 < dVar34) {
                    dVar35 = *(double *)(lVar12 + 0x28);
                    dVar49 = (double)((ulong)dVar35 & uVar2);
                    dVar33 = dVar32 - dVar33;
                    dVar48 = dVar33;
                    if (dVar49 <= dVar33) {
                      dVar48 = dVar49;
                    }
                    dVar33 = (double)(~-(ulong)NAN(dVar49) & (ulong)dVar48 |
                                     -(ulong)NAN(dVar49) & (ulong)dVar33);
                    auStack_98._0_8_ =
                         (double)auStack_98._0_8_ +
                         (double)(~-(ulong)NAN(dStack_78) & uVar42 | uVar44) * dVar33;
                    if (param_5 != '\0') {
                      *(double *)(lVar12 + 0x28) =
                           dVar35 - (double)(~-(ulong)NAN(dVar35) & ((ulong)dVar35 & uVar16 | uVar9)
                                            | -(ulong)NAN(dVar35) & uVar19) * dVar33;
                    }
                  }
                }
                lVar13 = lVar13 + 8;
              } while (lStack_60 * 8 - lVar13 != 0);
              if (lStack_70 != 0) {
                (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_019fbb20)
                          (lStack_68,lStack_70 << 3,8);
              }
              if ((double)(_DAT_0034f910 & auStack_98._0_8_) <= _DAT_00355998) {
                dStack_88 = 0.0;
                bVar8 = false;
              }
              else {
                dStack_88 = (*(double *)(lVar11 + -8) / _DAT_00355e68 + _DAT_00355cf0) * param_1;
                bVar8 = true;
              }
            }
            if (dVar31 < param_1) {
              pdVar23 = (double *)0x6;
              bVar15 = bVar8;
              if (bVar8 != false) {
                (*(code *)
                  PTR__RNvCseg1Mqjmf11U_7___rustc35___rust_no_alloc_shim_is_unstable_v2_019fbb40)();
                uVar22 = 9;
                puVar10 = (undefined8 *)
                          (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc12___rust_alloc_019fbb18)(9,1);
                if (puVar10 == (undefined8 *)0x0) goto LAB_00a5a839;
                *puVar10 = 0x69682072656b616d;
                *(undefined1 *)(puVar10 + 1) = 0x74;
                pdVar23 = (double *)0x9;
                lVar13 = 9;
                goto LAB_00a5a68d;
              }
              lVar13 = 6;
            }
            else {
              bVar15 = true;
              if (bVar8 == false) {
                _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h6f91b9306879822aE
                          (&lStack_58,&UNK_0037eb5b,9);
                lVar13 = lStack_58;
                pdVar23 = pdStack_48;
                puVar10 = puStack_50;
              }
              else {
                (*(code *)
                  PTR__RNvCseg1Mqjmf11U_7___rustc35___rust_no_alloc_shim_is_unstable_v2_019fbb40)();
                uVar22 = 0xf;
                puVar10 = (undefined8 *)
                          (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc12___rust_alloc_019fbb18)(0xf,1);
                if (puVar10 == (undefined8 *)0x0) {
LAB_00a5a839:
                  (*(code *)PTR__ZN5alloc7raw_vec12handle_error17h24b7b14ecfc8bc80E_019fc178)
                            (1,uVar22,&UNK_01952778);
                  goto LAB_00a5a84e;
                }
                *(undefined8 *)((long)puVar10 + 7) = 0x7469682072656b61;
                *puVar10 = 0x616d2b72656b6174;
                lVar13 = 0xf;
                pdVar23 = (double *)0xf;
              }
LAB_00a5a68d:
              (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_019fbb20)(puStack_b8,6,1);
              puStack_b8 = puVar10;
            }
            if ((lStack_60 == 0) && (lStack_70 != 0)) {
              (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_019fbb20)
                        (lStack_68,lStack_70 << 3,8);
            }
          }
          goto LAB_00a5a794;
        }
        puVar20 = &UNK_019536b0;
      }
      goto LAB_00a5a800;
    }
    uVar17 = (ushort)(uVar14 - 1) & (ushort)uVar14;
    uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar17);
  }
  auVar37[0] = -(*pcVar3 == -1);
  auVar37[1] = -(pcVar3[1] == -1);
  auVar37[2] = -(pcVar3[2] == -1);
  auVar37[3] = -(pcVar3[3] == -1);
  auVar37[4] = -(pcVar3[4] == -1);
  auVar37[5] = -(pcVar3[5] == -1);
  auVar37[6] = -(pcVar3[6] == -1);
  auVar37[7] = -(pcVar3[7] == -1);
  auVar37[8] = -(pcVar3[8] == -1);
  auVar37[9] = -(pcVar3[9] == -1);
  auVar37[10] = -(pcVar3[10] == -1);
  auVar37[0xb] = -(pcVar3[0xb] == -1);
  auVar37[0xc] = -(pcVar3[0xc] == -1);
  auVar37[0xd] = -(pcVar3[0xd] == -1);
  auVar37[0xe] = -(pcVar3[0xe] == -1);
  auVar37[0xf] = -(cVar25 == -1);
  if ((((((((((((((((auVar37 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                   (auVar37 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar37 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar37 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar37 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar37 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar37 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar37 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar37 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar37 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar37 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
         (auVar37 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
        (auVar37 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
       (auVar37 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
      (auVar37 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || cVar25 == -1)
  goto LAB_00a5a800;
  uVar9 = uVar9 + lVar11 + 0x10;
  lVar11 = lVar11 + 0x10;
  goto LAB_00a59d6e;
LAB_00a59eaa:
  uVar9 = uVar9 & uVar2;
  auVar40 = *(undefined1 (*) [16])(lVar1 + uVar9);
  cVar25 = auVar27[0];
  auVar41[0] = -(auVar40[0] == cVar25);
  cVar26 = auVar27[1];
  auVar41[1] = -(auVar40[1] == cVar26);
  cVar28 = auVar27[2];
  auVar41[2] = -(auVar40[2] == cVar28);
  cVar29 = auVar27[3];
  auVar41[3] = -(auVar40[3] == cVar29);
  auVar41[4] = -(auVar40[4] == cVar25);
  auVar41[5] = -(auVar40[5] == cVar26);
  auVar41[6] = -(auVar40[6] == cVar28);
  auVar41[7] = -(auVar40[7] == cVar29);
  auVar41[8] = -(auVar40[8] == cVar25);
  auVar41[9] = -(auVar40[9] == cVar26);
  auVar41[10] = -(auVar40[10] == cVar28);
  auVar41[0xb] = -(auVar40[0xb] == cVar29);
  auVar41[0xc] = -(auVar40[0xc] == cVar25);
  auVar41[0xd] = -(auVar40[0xd] == cVar26);
  cVar25 = auVar40[0xf];
  auVar41[0xe] = -(auVar40[0xe] == cVar28);
  auVar41[0xf] = -(cVar25 == cVar29);
  uVar17 = (ushort)(SUB161(auVar41 >> 7,0) & 1) | (ushort)(SUB161(auVar41 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar41 >> 0x17,0) & 1) << 2 |
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
           (ushort)(SUB161(auVar41 >> 0x77,0) & 1) << 0xe | (ushort)(auVar41[0xf] >> 7) << 0xf;
  uVar14 = (uint)uVar17;
  while (uVar17 != 0) {
    uVar6 = 0;
    for (uVar7 = uVar14; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
      uVar6 = uVar6 + 1;
    }
    uVar16 = uVar6 + uVar9 & uVar2;
    lVar11 = lVar13 + uVar16 * -0x20;
    if ((*(long *)(lVar11 + 0x10) == 0xe) &&
       (plVar4 = *(long **)(lVar11 + 8),
       *(long *)((long)plVar4 + 6) == 0x7972657070696c73 && *plVar4 == 0x6c735f72656b6174)) {
      dVar34 = *(double *)(lVar1 + -8 + uVar16 * -0x20);
      if (*(long *)(param_4 + 0x70) == 0) {
        auStack_98._0_8_ = 0;
        bVar8 = false;
        dStack_88 = 0.0;
      }
      else {
        lStack_58 = *(long *)(param_4 + 0x68);
        puStack_50 = (undefined8 *)(*(long *)(param_4 + 0x70) * 0x38 + lStack_58);
        pdStack_48 = &dStack_78;
        _ZN98__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__GT_9from_iter17hcad0ca09653c5dbcE
                  (&lStack_70,&lStack_58,
                   anon_5057d08616aaadbca204640f1da5e907_53_llvm_15565010581497186374);
        uVar19 = _DAT_003565d8;
        uVar16 = _DAT_00354010;
        uVar9 = _DAT_00353510;
        uVar2 = _DAT_0034f910;
        if (lStack_60 == 0) {
          dStack_88 = 0.0;
          if (lStack_70 != 0) {
            (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_019fbb20)
                      (lStack_68,lStack_70 << 3,8);
          }
          bVar8 = false;
          auStack_98._0_8_ = 0;
        }
        else {
          dVar33 = (double)(_DAT_0034f910 & (ulong)dStack_78);
          dVar35 = dVar33 + _DAT_00355278;
          uVar42 = _DAT_00354010 & (ulong)dStack_78 | _DAT_00353510;
          uVar44 = -(ulong)NAN(dStack_78) & _DAT_003565d8;
          auStack_98 = ZEXT816(0);
          lVar13 = 0;
          do {
            lVar12 = *(long *)(lStack_68 + lVar13);
            if (*(double *)(lVar12 + 0x20) <= param_1) {
              dVar48 = (double)(auStack_98._0_8_ & uVar2);
              if (dVar48 < dVar35) {
                dVar49 = *(double *)(lVar12 + 0x28);
                dVar50 = (double)((ulong)dVar49 & uVar2);
                dVar48 = dVar33 - dVar48;
                dVar51 = dVar48;
                if (dVar50 <= dVar48) {
                  dVar51 = dVar50;
                }
                dVar48 = (double)(~-(ulong)NAN(dVar50) & (ulong)dVar51 |
                                 -(ulong)NAN(dVar50) & (ulong)dVar48);
                auStack_98._0_8_ =
                     (double)auStack_98._0_8_ +
                     (double)(~-(ulong)NAN(dStack_78) & uVar42 | uVar44) * dVar48;
                if (param_5 != '\0') {
                  *(double *)(lVar12 + 0x28) =
                       dVar49 - (double)(~-(ulong)NAN(dVar49) & ((ulong)dVar49 & uVar16 | uVar9) |
                                        -(ulong)NAN(dVar49) & uVar19) * dVar48;
                }
              }
            }
            lVar13 = lVar13 + 8;
          } while (lStack_60 << 3 != lVar13);
          if (lStack_70 != 0) {
            (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_019fbb20)
                      (lStack_68,lStack_70 << 3,8);
          }
          if ((double)(_DAT_0034f910 & auStack_98._0_8_) <= _DAT_00355998) {
            dStack_88 = 0.0;
            bVar8 = false;
          }
          else {
            dStack_88 = (*(double *)(lStack_40 + -8) / _DAT_00355480 + _DAT_00355cf0) * param_1;
            bVar8 = true;
          }
        }
      }
      if (param_1 < dVar31 + (dVar32 - dVar31) * dVar34) {
        if (bVar8 == false) {
          pdVar23 = (double *)0x6;
          lVar13 = 6;
        }
        else {
          (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc35___rust_no_alloc_shim_is_unstable_v2_019fbb40)
                    ();
          param_4 = 9;
          puVar10 = (undefined8 *)
                    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc12___rust_alloc_019fbb18)(9,1);
          if (puVar10 == (undefined8 *)0x0) goto LAB_00a5a822;
          *puVar10 = 0x69682072656b616d;
          *(undefined1 *)(puVar10 + 1) = 0x74;
          (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_019fbb20)(puStack_b8,6,1);
          pdVar23 = (double *)0x9;
          lVar13 = 9;
          puStack_b8 = puVar10;
        }
        bVar21 = false;
        bVar15 = bVar8;
LAB_00a5a794:
        *plStack_38 = lVar13;
        plStack_38[1] = (long)puStack_b8;
        plStack_38[2] = (long)pdVar23;
        plStack_38[3] = (long)dStack_88;
        plStack_38[4] = auStack_98._0_8_;
        *(bool *)(plStack_38 + 5) = bVar15;
        *(bool *)((long)plStack_38 + 0x29) = bVar21;
        *(bool *)((long)plStack_38 + 0x2a) = bVar8;
        return plStack_38;
      }
      (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc35___rust_no_alloc_shim_is_unstable_v2_019fbb40)();
      if (bVar8) {
        param_4 = 0xf;
        puVar10 = (undefined8 *)
                  (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc12___rust_alloc_019fbb18)(0xf,1);
        if (puVar10 != (undefined8 *)0x0) {
          *(undefined8 *)((long)puVar10 + 7) = 0x7469682072656b61;
          *puVar10 = 0x616d2b72656b6174;
          (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_019fbb20)(puStack_b8,6,1);
          bVar21 = true;
          pdVar23 = (double *)0xf;
          lVar13 = 0xf;
          bVar15 = true;
          puStack_b8 = puVar10;
          goto LAB_00a5a794;
        }
      }
      else {
        param_4 = 9;
        puVar10 = (undefined8 *)
                  (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc12___rust_alloc_019fbb18)(9,1);
        if (puVar10 != (undefined8 *)0x0) {
          *puVar10 = 0x69682072656b6174;
          *(undefined1 *)(puVar10 + 1) = 0x74;
          (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_019fbb20)(puStack_b8,6,1);
          bVar21 = true;
          pdVar23 = (double *)0x9;
          lVar13 = 9;
          bVar15 = true;
          puStack_b8 = puVar10;
          goto LAB_00a5a794;
        }
      }
      goto LAB_00a5a822;
    }
    uVar17 = (ushort)(uVar14 - 1) & (ushort)uVar14;
    uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar17);
  }
  auVar38[0] = -(auVar40[0] == -1);
  auVar38[1] = -(auVar40[1] == -1);
  auVar38[2] = -(auVar40[2] == -1);
  auVar38[3] = -(auVar40[3] == -1);
  auVar38[4] = -(auVar40[4] == -1);
  auVar38[5] = -(auVar40[5] == -1);
  auVar38[6] = -(auVar40[6] == -1);
  auVar38[7] = -(auVar40[7] == -1);
  auVar38[8] = -(auVar40[8] == -1);
  auVar38[9] = -(auVar40[9] == -1);
  auVar38[10] = -(auVar40[10] == -1);
  auVar38[0xb] = -(auVar40[0xb] == -1);
  auVar38[0xc] = -(auVar40[0xc] == -1);
  auVar38[0xd] = -(auVar40[0xd] == -1);
  auVar38[0xe] = -(auVar40[0xe] == -1);
  auVar38[0xf] = -(cVar25 == -1);
  if ((((((((((((((((auVar38 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                   (auVar38 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar38 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar38 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar38 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar38 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar38 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar38 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar38 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar38 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar38 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
         (auVar38 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
        (auVar38 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
       (auVar38 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
      (auVar38 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || cVar25 == -1)
  goto LAB_00a5a800;
  uVar9 = uVar9 + lVar12 + 0x10;
  lVar12 = lVar12 + 0x10;
  goto LAB_00a59eaa;
}


