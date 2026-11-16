// ELF address 0x0000000000950aa0; future_backtest::MakerSimulator::maker_simulator::TradeSimulator1::new

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
_ZN15future_backtest14MakerSimulator15maker_simulator15TradeSimulator13new17he4b915511b5e2315E
          (undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char *pcVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  char *pcVar6;
  long *plVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  char cVar15;
  ulong uVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  uint uVar20;
  ushort uVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  byte bVar25;
  char cVar26;
  char cVar27;
  char cVar29;
  char cVar30;
  char cVar31;
  char cVar32;
  char cVar33;
  char cVar34;
  undefined1 auVar28 [16];
  undefined1 in_XMM1_Ba;
  char cVar35;
  undefined1 in_XMM1_Bb;
  undefined1 in_XMM1_Bc;
  undefined1 in_XMM1_Bd;
  undefined1 in_XMM1_Be;
  undefined1 in_XMM1_Bf;
  char cVar36;
  undefined1 in_XMM1_Bg;
  char cVar37;
  undefined1 in_XMM1_Bh;
  char cVar38;
  undefined1 in_XMM1_Bi;
  char cVar39;
  undefined1 in_XMM1_Bj;
  char cVar40;
  undefined1 in_XMM1_Bk;
  char cVar41;
  undefined1 in_XMM1_Bl;
  char cVar42;
  undefined1 in_XMM1_Bm;
  char cVar43;
  undefined1 in_XMM1_Bn;
  char cVar44;
  undefined1 in_XMM1_Bo;
  char cVar45;
  undefined1 in_XMM1_Bp;
  char cVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined8 uVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined8 uVar62;
  undefined8 uVar63;
  
  if (param_2[3] == 0) {
    uVar63 = 0;
    lVar18 = 0;
    uVar51 = 0;
    uVar62 = 0;
  }
  else {
    plVar1 = param_2 + 4;
    uVar16 = _ZN4core4hash11BuildHasher8hash_one17h4c80eaa158253d25E(plVar1,&UNK_0037ea0c,0x11);
    lVar4 = *param_2;
    uVar5 = param_2[1];
    bVar25 = (byte)(uVar16 >> 0x39);
    auVar28 = ZEXT216(CONCAT11(bVar25,bVar25));
    auVar28 = pshuflw(auVar28,auVar28,0);
    lVar18 = lVar4 + -0x20;
    lVar24 = 0;
    iVar11 = -(uint)(CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) ==
                    CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))));
    cVar35 = (char)iVar11;
    cVar27 = (char)((uint)iVar11 >> 8);
    cVar30 = (char)((uint)iVar11 >> 0x10);
    cVar32 = (char)((uint)iVar11 >> 0x18);
    iVar11 = -(uint)(CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))) ==
                    CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))));
    cVar34 = (char)iVar11;
    cVar36 = (char)((uint)iVar11 >> 8);
    cVar37 = (char)((uint)iVar11 >> 0x10);
    cVar38 = (char)((uint)iVar11 >> 0x18);
    iVar11 = -(uint)(CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))) ==
                    CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))));
    cVar39 = (char)iVar11;
    cVar40 = (char)((uint)iVar11 >> 8);
    cVar41 = (char)((uint)iVar11 >> 0x10);
    cVar42 = (char)((uint)iVar11 >> 0x18);
    iVar11 = -(uint)(CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))) ==
                    CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))));
    cVar43 = (char)iVar11;
    cVar44 = (char)((uint)iVar11 >> 8);
    cVar45 = (char)((uint)iVar11 >> 0x10);
    cVar46 = (char)((uint)iVar11 >> 0x18);
    lVar19 = 0;
    while( true ) {
      uVar16 = uVar16 & uVar5;
      pcVar2 = (char *)(lVar4 + uVar16);
      cVar15 = pcVar2[0xf];
      cVar26 = auVar28[0];
      auVar52[0] = -(*pcVar2 == cVar26);
      cVar29 = auVar28[1];
      auVar52[1] = -(pcVar2[1] == cVar29);
      cVar31 = auVar28[2];
      auVar52[2] = -(pcVar2[2] == cVar31);
      cVar33 = auVar28[3];
      auVar52[3] = -(pcVar2[3] == cVar33);
      auVar52[4] = -(pcVar2[4] == cVar26);
      auVar52[5] = -(pcVar2[5] == cVar29);
      auVar52[6] = -(pcVar2[6] == cVar31);
      auVar52[7] = -(pcVar2[7] == cVar33);
      auVar52[8] = -(pcVar2[8] == cVar26);
      auVar52[9] = -(pcVar2[9] == cVar29);
      auVar52[10] = -(pcVar2[10] == cVar31);
      auVar52[0xb] = -(pcVar2[0xb] == cVar33);
      auVar52[0xc] = -(pcVar2[0xc] == cVar26);
      auVar52[0xd] = -(pcVar2[0xd] == cVar29);
      auVar52[0xe] = -(pcVar2[0xe] == cVar31);
      auVar52[0xf] = -(cVar15 == cVar33);
      uVar21 = (ushort)(SUB161(auVar52 >> 7,0) & 1) | (ushort)(SUB161(auVar52 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar52 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar52 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar52 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar52 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar52 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar52 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar52 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar52 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar52 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar52 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar52 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar52 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar52 >> 0x77,0) & 1) << 0xe | (ushort)(auVar52[0xf] >> 7) << 0xf;
      uVar20 = (uint)uVar21;
      while (uVar21 != 0) {
        uVar9 = 0;
        for (uVar10 = uVar20; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
          uVar9 = uVar9 + 1;
        }
        uVar22 = uVar9 + uVar16 & uVar5;
        lVar23 = lVar18 + uVar22 * -0x20;
        if (*(long *)(lVar23 + 0x10) == 0x11) {
          pcVar6 = *(char **)(lVar23 + 8);
          auVar57[0] = -(pcVar6[0x10] ==
                        (char)anon_baa4d3160c6db26b1acb0467a3a6e91d_50_llvm_14045134056871974489);
          auVar57[1] = -((char)((uint)
                                anon_baa4d3160c6db26b1acb0467a3a6e91d_50_llvm_14045134056871974489
                               >> 8) == '\0');
          auVar57[2] = -((char)((uint)
                                anon_baa4d3160c6db26b1acb0467a3a6e91d_50_llvm_14045134056871974489
                               >> 0x10) == '\0');
          auVar57[3] = -((char)((uint)
                                anon_baa4d3160c6db26b1acb0467a3a6e91d_50_llvm_14045134056871974489
                               >> 0x18) == '\0');
          auVar57[4] = 0xff;
          auVar57[5] = 0xff;
          auVar57[6] = 0xff;
          auVar57[7] = 0xff;
          auVar57[8] = 0xff;
          auVar57[9] = 0xff;
          auVar57[10] = 0xff;
          auVar57[0xb] = 0xff;
          auVar57[0xc] = 0xff;
          auVar57[0xd] = 0xff;
          auVar57[0xe] = 0xff;
          auVar57[0xf] = 0xff;
          auVar53[0] = -(*pcVar6 == 't');
          auVar53[1] = -(pcVar6[1] == 'r');
          auVar53[2] = -(pcVar6[2] == 'a');
          auVar53[3] = -(pcVar6[3] == 'n');
          auVar53[4] = -(pcVar6[4] == 's');
          auVar53[5] = -(pcVar6[5] == '_');
          auVar53[6] = -(pcVar6[6] == 'r');
          auVar53[7] = -(pcVar6[7] == 'a');
          auVar53[8] = -(pcVar6[8] == 'n');
          auVar53[9] = -(pcVar6[9] == 'g');
          auVar53[10] = -(pcVar6[10] == 'e');
          auVar53[0xb] = -(pcVar6[0xb] == '_');
          auVar53[0xc] = -(pcVar6[0xc] == 'a');
          auVar53[0xd] = -(pcVar6[0xd] == 'l');
          auVar53[0xe] = -(pcVar6[0xe] == 'p');
          auVar53[0xf] = -(pcVar6[0xf] == 'h');
          auVar53 = auVar53 & auVar57;
          if ((ushort)((ushort)(SUB161(auVar53 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar53 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar53 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar53 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar53 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar53 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar53 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar53 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar53 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar53 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar53 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar53 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar53 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar53 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar53 >> 0x77,0) & 1) << 0xe |
                      (ushort)(byte)(auVar53[0xf] >> 7) << 0xf) == 0xffff) {
            lVar24 = uVar22 * -0x20 + lVar4;
            goto LAB_00a50bd9;
          }
        }
        uVar21 = (ushort)(uVar20 - 1) & (ushort)uVar20;
        uVar20 = CONCAT22((short)(uVar20 - 1 >> 0x10),uVar21);
      }
      auVar48[0] = -(*pcVar2 == cVar35);
      auVar48[1] = -(pcVar2[1] == cVar27);
      auVar48[2] = -(pcVar2[2] == cVar30);
      auVar48[3] = -(pcVar2[3] == cVar32);
      auVar48[4] = -(pcVar2[4] == cVar34);
      auVar48[5] = -(pcVar2[5] == cVar36);
      auVar48[6] = -(pcVar2[6] == cVar37);
      auVar48[7] = -(pcVar2[7] == cVar38);
      auVar48[8] = -(pcVar2[8] == cVar39);
      auVar48[9] = -(pcVar2[9] == cVar40);
      auVar48[10] = -(pcVar2[10] == cVar41);
      auVar48[0xb] = -(pcVar2[0xb] == cVar42);
      auVar48[0xc] = -(pcVar2[0xc] == cVar43);
      auVar48[0xd] = -(pcVar2[0xd] == cVar44);
      auVar48[0xe] = -(pcVar2[0xe] == cVar45);
      auVar48[0xf] = -(cVar15 == cVar46);
      if ((((((((((((((((auVar48 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                       (auVar48 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar48 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar48 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar48 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar48 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar48 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar48 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar48 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar48 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar48 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar48 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar48 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar48 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar48 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || cVar15 == cVar46)
      break;
      uVar16 = uVar16 + lVar19 + 0x10;
      lVar19 = lVar19 + 0x10;
    }
LAB_00a50bd9:
    lVar19 = lVar24 + -0x20;
    if (lVar24 == 0) {
      lVar19 = 0;
    }
    puVar17 = (undefined8 *)(lVar19 + 0x18);
    if (lVar24 == 0) {
      puVar17 = &anon_dd6c99ee2bde759f5a856c5a78ece045_174_llvm_14103393223393158700;
    }
    uVar51 = *puVar17;
    uVar16 = _ZN4core4hash11BuildHasher8hash_one17h4c80eaa158253d25E(plVar1,&UNK_0037ea1d,0xe);
    bVar25 = (byte)(uVar16 >> 0x39);
    auVar28 = ZEXT216(CONCAT11(bVar25,bVar25));
    auVar28 = pshuflw(auVar28,auVar28,0);
    lVar24 = 0;
    iVar11 = -(uint)(CONCAT13(cVar32,CONCAT12(cVar30,CONCAT11(cVar27,cVar35))) ==
                    CONCAT13(cVar32,CONCAT12(cVar30,CONCAT11(cVar27,cVar35))));
    cVar35 = (char)iVar11;
    cVar27 = (char)((uint)iVar11 >> 8);
    cVar30 = (char)((uint)iVar11 >> 0x10);
    cVar32 = (char)((uint)iVar11 >> 0x18);
    iVar11 = -(uint)(CONCAT13(cVar38,CONCAT12(cVar37,CONCAT11(cVar36,cVar34))) ==
                    CONCAT13(cVar38,CONCAT12(cVar37,CONCAT11(cVar36,cVar34))));
    cVar34 = (char)iVar11;
    cVar36 = (char)((uint)iVar11 >> 8);
    cVar37 = (char)((uint)iVar11 >> 0x10);
    cVar38 = (char)((uint)iVar11 >> 0x18);
    iVar11 = -(uint)(CONCAT13(cVar42,CONCAT12(cVar41,CONCAT11(cVar40,cVar39))) ==
                    CONCAT13(cVar42,CONCAT12(cVar41,CONCAT11(cVar40,cVar39))));
    cVar39 = (char)iVar11;
    cVar40 = (char)((uint)iVar11 >> 8);
    cVar41 = (char)((uint)iVar11 >> 0x10);
    cVar42 = (char)((uint)iVar11 >> 0x18);
    iVar11 = -(uint)(CONCAT13(cVar46,CONCAT12(cVar45,CONCAT11(cVar44,cVar43))) ==
                    CONCAT13(cVar46,CONCAT12(cVar45,CONCAT11(cVar44,cVar43))));
    cVar43 = (char)iVar11;
    cVar44 = (char)((uint)iVar11 >> 8);
    cVar45 = (char)((uint)iVar11 >> 0x10);
    cVar46 = (char)((uint)iVar11 >> 0x18);
    lVar19 = 0;
    while( true ) {
      uVar16 = uVar16 & uVar5;
      pcVar2 = (char *)(lVar4 + uVar16);
      cVar15 = pcVar2[0xf];
      cVar26 = auVar28[0];
      auVar49[0] = -(*pcVar2 == cVar26);
      cVar29 = auVar28[1];
      auVar49[1] = -(pcVar2[1] == cVar29);
      cVar31 = auVar28[2];
      auVar49[2] = -(pcVar2[2] == cVar31);
      cVar33 = auVar28[3];
      auVar49[3] = -(pcVar2[3] == cVar33);
      auVar49[4] = -(pcVar2[4] == cVar26);
      auVar49[5] = -(pcVar2[5] == cVar29);
      auVar49[6] = -(pcVar2[6] == cVar31);
      auVar49[7] = -(pcVar2[7] == cVar33);
      auVar49[8] = -(pcVar2[8] == cVar26);
      auVar49[9] = -(pcVar2[9] == cVar29);
      auVar49[10] = -(pcVar2[10] == cVar31);
      auVar49[0xb] = -(pcVar2[0xb] == cVar33);
      auVar49[0xc] = -(pcVar2[0xc] == cVar26);
      auVar49[0xd] = -(pcVar2[0xd] == cVar29);
      auVar49[0xe] = -(pcVar2[0xe] == cVar31);
      auVar49[0xf] = -(cVar15 == cVar33);
      uVar21 = (ushort)(SUB161(auVar49 >> 7,0) & 1) | (ushort)(SUB161(auVar49 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar49 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar49 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar49 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar49 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar49 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar49 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar49 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar49 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar49 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar49 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar49 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar49 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar49 >> 0x77,0) & 1) << 0xe | (ushort)(auVar49[0xf] >> 7) << 0xf;
      uVar20 = (uint)uVar21;
      while (uVar21 != 0) {
        uVar9 = 0;
        for (uVar10 = uVar20; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
          uVar9 = uVar9 + 1;
        }
        uVar22 = uVar9 + uVar16 & uVar5;
        lVar23 = lVar18 + uVar22 * -0x20;
        if ((*(long *)(lVar23 + 0x10) == 0xe) &&
           (plVar7 = *(long **)(lVar23 + 8),
           *(long *)((long)plVar7 + 6) == 0x7972657070696c73 && *plVar7 == 0x6c735f72656b6174)) {
          lVar24 = uVar22 * -0x20 + lVar4;
          goto LAB_00a50cdb;
        }
        uVar21 = (ushort)(uVar20 - 1) & (ushort)uVar20;
        uVar20 = CONCAT22((short)(uVar20 - 1 >> 0x10),uVar21);
      }
      auVar47[0] = -(*pcVar2 == cVar35);
      auVar47[1] = -(pcVar2[1] == cVar27);
      auVar47[2] = -(pcVar2[2] == cVar30);
      auVar47[3] = -(pcVar2[3] == cVar32);
      auVar47[4] = -(pcVar2[4] == cVar34);
      auVar47[5] = -(pcVar2[5] == cVar36);
      auVar47[6] = -(pcVar2[6] == cVar37);
      auVar47[7] = -(pcVar2[7] == cVar38);
      auVar47[8] = -(pcVar2[8] == cVar39);
      auVar47[9] = -(pcVar2[9] == cVar40);
      auVar47[10] = -(pcVar2[10] == cVar41);
      auVar47[0xb] = -(pcVar2[0xb] == cVar42);
      auVar47[0xc] = -(pcVar2[0xc] == cVar43);
      auVar47[0xd] = -(pcVar2[0xd] == cVar44);
      auVar47[0xe] = -(pcVar2[0xe] == cVar45);
      auVar47[0xf] = -(cVar15 == cVar46);
      if ((((((((((((((((auVar47 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                       (auVar47 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar47 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar47 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar47 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar47 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar47 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar47 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar47 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar47 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar47 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar47 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar47 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar47 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar47 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || cVar15 == cVar46)
      break;
      uVar16 = uVar16 + lVar19 + 0x10;
      lVar19 = lVar19 + 0x10;
    }
LAB_00a50cdb:
    lVar19 = lVar24 + -0x20;
    if (lVar24 == 0) {
      lVar19 = 0;
    }
    puVar17 = (undefined8 *)(lVar19 + 0x18);
    if (lVar24 == 0) {
      puVar17 = &anon_dd6c99ee2bde759f5a856c5a78ece045_174_llvm_14103393223393158700;
    }
    uVar62 = *puVar17;
    uVar16 = _ZN4core4hash11BuildHasher8hash_one17h4c80eaa158253d25E(plVar1,&UNK_0037ea2b,0x18);
    bVar25 = (byte)(uVar16 >> 0x39);
    auVar28 = ZEXT216(CONCAT11(bVar25,bVar25));
    auVar28 = pshuflw(auVar28,auVar28,0);
    lVar24 = 0;
    iVar11 = -(uint)(CONCAT13(cVar32,CONCAT12(cVar30,CONCAT11(cVar27,cVar35))) ==
                    CONCAT13(cVar32,CONCAT12(cVar30,CONCAT11(cVar27,cVar35))));
    cVar35 = (char)iVar11;
    cVar27 = (char)((uint)iVar11 >> 8);
    cVar30 = (char)((uint)iVar11 >> 0x10);
    cVar32 = (char)((uint)iVar11 >> 0x18);
    iVar11 = -(uint)(CONCAT13(cVar38,CONCAT12(cVar37,CONCAT11(cVar36,cVar34))) ==
                    CONCAT13(cVar38,CONCAT12(cVar37,CONCAT11(cVar36,cVar34))));
    cVar34 = (char)iVar11;
    cVar36 = (char)((uint)iVar11 >> 8);
    cVar37 = (char)((uint)iVar11 >> 0x10);
    cVar38 = (char)((uint)iVar11 >> 0x18);
    iVar11 = -(uint)(CONCAT13(cVar42,CONCAT12(cVar41,CONCAT11(cVar40,cVar39))) ==
                    CONCAT13(cVar42,CONCAT12(cVar41,CONCAT11(cVar40,cVar39))));
    cVar39 = (char)iVar11;
    cVar40 = (char)((uint)iVar11 >> 8);
    cVar41 = (char)((uint)iVar11 >> 0x10);
    cVar42 = (char)((uint)iVar11 >> 0x18);
    iVar11 = -(uint)(CONCAT13(cVar46,CONCAT12(cVar45,CONCAT11(cVar44,cVar43))) ==
                    CONCAT13(cVar46,CONCAT12(cVar45,CONCAT11(cVar44,cVar43))));
    cVar43 = (char)iVar11;
    cVar44 = (char)((uint)iVar11 >> 8);
    cVar45 = (char)((uint)iVar11 >> 0x10);
    cVar46 = (char)((uint)iVar11 >> 0x18);
    lVar19 = 0;
    while( true ) {
      uVar16 = uVar16 & uVar5;
      pcVar2 = (char *)(lVar4 + uVar16);
      cVar15 = pcVar2[0xf];
      cVar26 = auVar28[0];
      auVar54[0] = -(*pcVar2 == cVar26);
      cVar29 = auVar28[1];
      auVar54[1] = -(pcVar2[1] == cVar29);
      cVar31 = auVar28[2];
      auVar54[2] = -(pcVar2[2] == cVar31);
      cVar33 = auVar28[3];
      auVar54[3] = -(pcVar2[3] == cVar33);
      auVar54[4] = -(pcVar2[4] == cVar26);
      auVar54[5] = -(pcVar2[5] == cVar29);
      auVar54[6] = -(pcVar2[6] == cVar31);
      auVar54[7] = -(pcVar2[7] == cVar33);
      auVar54[8] = -(pcVar2[8] == cVar26);
      auVar54[9] = -(pcVar2[9] == cVar29);
      auVar54[10] = -(pcVar2[10] == cVar31);
      auVar54[0xb] = -(pcVar2[0xb] == cVar33);
      auVar54[0xc] = -(pcVar2[0xc] == cVar26);
      auVar54[0xd] = -(pcVar2[0xd] == cVar29);
      auVar54[0xe] = -(pcVar2[0xe] == cVar31);
      auVar54[0xf] = -(cVar15 == cVar33);
      uVar21 = (ushort)(SUB161(auVar54 >> 7,0) & 1) | (ushort)(SUB161(auVar54 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar54 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar54 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar54 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar54 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar54 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar54 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar54 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar54 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar54 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar54 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar54 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar54 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar54 >> 0x77,0) & 1) << 0xe | (ushort)(auVar54[0xf] >> 7) << 0xf;
      uVar20 = (uint)uVar21;
      while (uVar21 != 0) {
        uVar9 = 0;
        for (uVar10 = uVar20; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
          uVar9 = uVar9 + 1;
        }
        uVar22 = uVar9 + uVar16 & uVar5;
        lVar23 = lVar18 + uVar22 * -0x20;
        if (*(long *)(lVar23 + 0x10) == 0x18) {
          pcVar6 = *(char **)(lVar23 + 8);
          uVar63 = *(undefined8 *)(pcVar6 + 0x10);
          auVar58[0] = -((char)uVar63 == (char)_DAT_00353b60);
          auVar58[1] = -((char)((ulong)uVar63 >> 8) == (char)((ulong)_DAT_00353b60 >> 8));
          auVar58[2] = -((char)((ulong)uVar63 >> 0x10) == (char)((ulong)_DAT_00353b60 >> 0x10));
          auVar58[3] = -((char)((ulong)uVar63 >> 0x18) == (char)((ulong)_DAT_00353b60 >> 0x18));
          auVar58[4] = -((char)((ulong)uVar63 >> 0x20) == (char)((ulong)_DAT_00353b60 >> 0x20));
          auVar58[5] = -((char)((ulong)uVar63 >> 0x28) == (char)((ulong)_DAT_00353b60 >> 0x28));
          auVar58[6] = -((char)((ulong)uVar63 >> 0x30) == (char)((ulong)_DAT_00353b60 >> 0x30));
          auVar58[7] = -((char)((ulong)uVar63 >> 0x38) == (char)((ulong)_DAT_00353b60 >> 0x38));
          auVar58[8] = 0xff;
          auVar58[9] = 0xff;
          auVar58[10] = 0xff;
          auVar58[0xb] = 0xff;
          auVar58[0xc] = 0xff;
          auVar58[0xd] = 0xff;
          auVar58[0xe] = 0xff;
          auVar58[0xf] = 0xff;
          auVar55[0] = -(*pcVar6 == 't');
          auVar55[1] = -(pcVar6[1] == 'r');
          auVar55[2] = -(pcVar6[2] == 'a');
          auVar55[3] = -(pcVar6[3] == 'n');
          auVar55[4] = -(pcVar6[4] == 's');
          auVar55[5] = -(pcVar6[5] == '_');
          auVar55[6] = -(pcVar6[6] == 'r');
          auVar55[7] = -(pcVar6[7] == 'a');
          auVar55[8] = -(pcVar6[8] == 'n');
          auVar55[9] = -(pcVar6[9] == 'g');
          auVar55[10] = -(pcVar6[10] == 'e');
          auVar55[0xb] = -(pcVar6[0xb] == '_');
          auVar55[0xc] = -(pcVar6[0xc] == 'a');
          auVar55[0xd] = -(pcVar6[0xd] == 'l');
          auVar55[0xe] = -(pcVar6[0xe] == 'p');
          auVar55[0xf] = -(pcVar6[0xf] == 'h');
          auVar55 = auVar55 & auVar58;
          if ((ushort)((ushort)(SUB161(auVar55 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar55 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar55 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar55 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar55 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar55 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar55 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar55 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar55 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar55 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar55 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar55 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar55 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar55 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar55 >> 0x77,0) & 1) << 0xe |
                      (ushort)(byte)(auVar55[0xf] >> 7) << 0xf) == 0xffff) {
            lVar24 = uVar22 * -0x20 + lVar4;
            goto LAB_00a50dd9;
          }
        }
        uVar21 = (ushort)(uVar20 - 1) & (ushort)uVar20;
        uVar20 = CONCAT22((short)(uVar20 - 1 >> 0x10),uVar21);
      }
      auVar50[0] = -(*pcVar2 == cVar35);
      auVar50[1] = -(pcVar2[1] == cVar27);
      auVar50[2] = -(pcVar2[2] == cVar30);
      auVar50[3] = -(pcVar2[3] == cVar32);
      auVar50[4] = -(pcVar2[4] == cVar34);
      auVar50[5] = -(pcVar2[5] == cVar36);
      auVar50[6] = -(pcVar2[6] == cVar37);
      auVar50[7] = -(pcVar2[7] == cVar38);
      auVar50[8] = -(pcVar2[8] == cVar39);
      auVar50[9] = -(pcVar2[9] == cVar40);
      auVar50[10] = -(pcVar2[10] == cVar41);
      auVar50[0xb] = -(pcVar2[0xb] == cVar42);
      auVar50[0xc] = -(pcVar2[0xc] == cVar43);
      auVar50[0xd] = -(pcVar2[0xd] == cVar44);
      auVar50[0xe] = -(pcVar2[0xe] == cVar45);
      auVar50[0xf] = -(cVar15 == cVar46);
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
          (auVar50 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || cVar15 == cVar46)
      break;
      uVar16 = uVar16 + lVar19 + 0x10;
      lVar19 = lVar19 + 0x10;
    }
LAB_00a50dd9:
    lVar19 = lVar24 + -0x20;
    if (lVar24 == 0) {
      lVar19 = 0;
    }
    puVar17 = (undefined8 *)(lVar19 + 0x18);
    if (lVar24 == 0) {
      puVar17 = &anon_dd6c99ee2bde759f5a856c5a78ece045_174_llvm_14103393223393158700;
    }
    uVar63 = *puVar17;
    uVar16 = _ZN4core4hash11BuildHasher8hash_one17h4c80eaa158253d25E(plVar1,&UNK_0037ea43,0x1f);
    bVar25 = (byte)(uVar16 >> 0x39);
    auVar28 = ZEXT216(CONCAT11(bVar25,bVar25));
    auVar28 = pshuflw(auVar28,auVar28,0);
    lVar24 = 0;
    iVar11 = -(uint)(CONCAT13(cVar32,CONCAT12(cVar30,CONCAT11(cVar27,cVar35))) ==
                    CONCAT13(cVar32,CONCAT12(cVar30,CONCAT11(cVar27,cVar35))));
    iVar12 = -(uint)(CONCAT13(cVar38,CONCAT12(cVar37,CONCAT11(cVar36,cVar34))) ==
                    CONCAT13(cVar38,CONCAT12(cVar37,CONCAT11(cVar36,cVar34))));
    iVar13 = -(uint)(CONCAT13(cVar42,CONCAT12(cVar41,CONCAT11(cVar40,cVar39))) ==
                    CONCAT13(cVar42,CONCAT12(cVar41,CONCAT11(cVar40,cVar39))));
    iVar14 = -(uint)(CONCAT13(cVar46,CONCAT12(cVar45,CONCAT11(cVar44,cVar43))) ==
                    CONCAT13(cVar46,CONCAT12(cVar45,CONCAT11(cVar44,cVar43))));
    lVar19 = 0;
    while( true ) {
      uVar16 = uVar16 & uVar5;
      pcVar2 = (char *)(lVar4 + uVar16);
      cVar35 = pcVar2[0xf];
      cVar27 = auVar28[0];
      auVar59[0] = -(*pcVar2 == cVar27);
      cVar30 = auVar28[1];
      auVar59[1] = -(pcVar2[1] == cVar30);
      cVar32 = auVar28[2];
      auVar59[2] = -(pcVar2[2] == cVar32);
      cVar34 = auVar28[3];
      auVar59[3] = -(pcVar2[3] == cVar34);
      auVar59[4] = -(pcVar2[4] == cVar27);
      auVar59[5] = -(pcVar2[5] == cVar30);
      auVar59[6] = -(pcVar2[6] == cVar32);
      auVar59[7] = -(pcVar2[7] == cVar34);
      auVar59[8] = -(pcVar2[8] == cVar27);
      auVar59[9] = -(pcVar2[9] == cVar30);
      auVar59[10] = -(pcVar2[10] == cVar32);
      auVar59[0xb] = -(pcVar2[0xb] == cVar34);
      auVar59[0xc] = -(pcVar2[0xc] == cVar27);
      auVar59[0xd] = -(pcVar2[0xd] == cVar30);
      auVar59[0xe] = -(pcVar2[0xe] == cVar32);
      auVar59[0xf] = -(cVar35 == cVar34);
      uVar21 = (ushort)(SUB161(auVar59 >> 7,0) & 1) | (ushort)(SUB161(auVar59 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar59 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar59 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar59 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar59 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar59 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar59 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar59 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar59 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar59 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar59 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar59 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar59 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar59 >> 0x77,0) & 1) << 0xe | (ushort)(auVar59[0xf] >> 7) << 0xf;
      uVar20 = (uint)uVar21;
      while (uVar21 != 0) {
        uVar9 = 0;
        for (uVar10 = uVar20; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
          uVar9 = uVar9 + 1;
        }
        uVar22 = uVar9 + uVar16 & uVar5;
        lVar23 = lVar18 + uVar22 * -0x20;
        if (*(long *)(lVar23 + 0x10) == 0x1f) {
          pcVar6 = *(char **)(lVar23 + 8);
          auVar60[0] = -(*pcVar6 == DAT_003532a0);
          auVar60[1] = -(pcVar6[1] == UNK_003532a1);
          auVar60[2] = -(pcVar6[2] == UNK_003532a2);
          auVar60[3] = -(pcVar6[3] == UNK_003532a3);
          auVar60[4] = -(pcVar6[4] == UNK_003532a4);
          auVar60[5] = -(pcVar6[5] == UNK_003532a5);
          auVar60[6] = -(pcVar6[6] == UNK_003532a6);
          auVar60[7] = -(pcVar6[7] == UNK_003532a7);
          auVar60[8] = -(pcVar6[8] == UNK_003532a8);
          auVar60[9] = -(pcVar6[9] == UNK_003532a9);
          auVar60[10] = -(pcVar6[10] == UNK_003532aa);
          auVar60[0xb] = -(pcVar6[0xb] == UNK_003532ab);
          auVar60[0xc] = -(pcVar6[0xc] == UNK_003532ac);
          auVar60[0xd] = -(pcVar6[0xd] == UNK_003532ad);
          auVar60[0xe] = -(pcVar6[0xe] == UNK_003532ae);
          auVar60[0xf] = -(pcVar6[0xf] == UNK_003532af);
          auVar61[0] = -(pcVar6[0xf] == DAT_00352fb0);
          auVar61[1] = -(pcVar6[0x10] == UNK_00352fb1);
          auVar61[2] = -(pcVar6[0x11] == UNK_00352fb2);
          auVar61[3] = -(pcVar6[0x12] == UNK_00352fb3);
          auVar61[4] = -(pcVar6[0x13] == UNK_00352fb4);
          auVar61[5] = -(pcVar6[0x14] == UNK_00352fb5);
          auVar61[6] = -(pcVar6[0x15] == UNK_00352fb6);
          auVar61[7] = -(pcVar6[0x16] == UNK_00352fb7);
          auVar61[8] = -(pcVar6[0x17] == UNK_00352fb8);
          auVar61[9] = -(pcVar6[0x18] == UNK_00352fb9);
          auVar61[10] = -(pcVar6[0x19] == UNK_00352fba);
          auVar61[0xb] = -(pcVar6[0x1a] == UNK_00352fbb);
          auVar61[0xc] = -(pcVar6[0x1b] == UNK_00352fbc);
          auVar61[0xd] = -(pcVar6[0x1c] == UNK_00352fbd);
          auVar61[0xe] = -(pcVar6[0x1d] == UNK_00352fbe);
          auVar61[0xf] = -(pcVar6[0x1e] == UNK_00352fbf);
          auVar61 = auVar61 & auVar60;
          if ((ushort)((ushort)(SUB161(auVar61 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar61 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar61 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar61 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar61 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar61 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar61 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar61 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar61 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar61 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar61 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar61 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar61 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar61 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar61 >> 0x77,0) & 1) << 0xe |
                      (ushort)(byte)(auVar61[0xf] >> 7) << 0xf) == 0xffff) {
            lVar24 = lVar4 + uVar22 * -0x20;
            goto LAB_00a50ee9;
          }
        }
        uVar21 = (ushort)(uVar20 - 1) & (ushort)uVar20;
        uVar20 = CONCAT22((short)(uVar20 - 1 >> 0x10),uVar21);
      }
      auVar56[0] = -(*pcVar2 == (char)iVar11);
      auVar56[1] = -(pcVar2[1] == (char)((uint)iVar11 >> 8));
      auVar56[2] = -(pcVar2[2] == (char)((uint)iVar11 >> 0x10));
      auVar56[3] = -(pcVar2[3] == (char)((uint)iVar11 >> 0x18));
      auVar56[4] = -(pcVar2[4] == (char)iVar12);
      auVar56[5] = -(pcVar2[5] == (char)((uint)iVar12 >> 8));
      auVar56[6] = -(pcVar2[6] == (char)((uint)iVar12 >> 0x10));
      auVar56[7] = -(pcVar2[7] == (char)((uint)iVar12 >> 0x18));
      auVar56[8] = -(pcVar2[8] == (char)iVar13);
      auVar56[9] = -(pcVar2[9] == (char)((uint)iVar13 >> 8));
      auVar56[10] = -(pcVar2[10] == (char)((uint)iVar13 >> 0x10));
      auVar56[0xb] = -(pcVar2[0xb] == (char)((uint)iVar13 >> 0x18));
      auVar56[0xc] = -(pcVar2[0xc] == (char)iVar14);
      auVar56[0xd] = -(pcVar2[0xd] == (char)((uint)iVar14 >> 8));
      auVar56[0xe] = -(pcVar2[0xe] == (char)((uint)iVar14 >> 0x10));
      bVar8 = cVar35 == (char)((uint)iVar14 >> 0x18);
      auVar56[0xf] = -bVar8;
      if ((((((((((((((((auVar56 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                       (auVar56 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar56 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar56 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar56 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar56 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar56 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar56 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar56 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar56 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar56 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar56 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar56 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar56 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar56 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar8) break;
      uVar16 = uVar16 + lVar19 + 0x10;
      lVar19 = lVar19 + 0x10;
    }
LAB_00a50ee9:
    lVar18 = lVar24 + -0x20;
    if (lVar24 == 0) {
      lVar18 = 0;
    }
  }
  puVar17 = (undefined8 *)&UNK_00356190;
  if (lVar18 != 0) {
    puVar17 = (undefined8 *)(lVar18 + 0x18);
  }
  uVar3 = *puVar17;
  lVar18 = *param_2;
  lVar4 = param_2[1];
  lVar24 = param_2[2];
  lVar19 = param_2[3];
  lVar23 = param_2[5];
  param_1[0x61] = param_2[4];
  param_1[0x62] = lVar23;
  param_1[0x5f] = lVar24;
  param_1[0x60] = lVar19;
  param_1[0x5d] = lVar18;
  param_1[0x5e] = lVar4;
  param_1[0xc] = 0;
  param_1[0xd] = 8;
  *(undefined1 (*) [16])(param_1 + 0xe) = ZEXT216(0) << 0x20;
  *(undefined1 (*) [16])(param_1 + 99) = ZEXT216(0) << 0x20;
  param_1[0x65] = 0;
  param_1[0x66] = uVar51;
  param_1[0x67] = uVar63;
  param_1[0x68] = uVar62;
  param_1[0x69] = uVar3;
  *(undefined2 *)(param_1 + 0x70) = 0xffff;
  param_1[0x13] = 0x8000000000000000;
  param_1[0x38] = 0x8000000000000000;
  *param_1 = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[0x10] = 8;
  param_1[0x6a] = 0;
  param_1[0x6f] = 0;
  *(undefined1 (*) [16])(param_1 + 0x11) = ZEXT216(0) << 0x20;
  *(undefined1 (*) [16])(param_1 + 0x6c) = ZEXT216(0) << 0x20;
  return param_1;
}


