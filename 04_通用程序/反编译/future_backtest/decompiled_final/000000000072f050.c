// ELF address 0x000000000072f050; future_backtest::Customer::customer::Account::trade

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
_ZN15future_backtest8Customer8customer7Account5trade17hc6e81bcffe8e716eE
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,double param_5,
          long param_6,ulong param_7)

{
  int *piVar1;
  double *pdVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  ulong uVar8;
  ushort uVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  uint uVar16;
  long unaff_RBX;
  long lVar17;
  double dVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long unaff_R12;
  ulong unaff_R13;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  byte bVar25;
  undefined4 uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  char cVar37;
  char cVar38;
  char cVar39;
  undefined1 auVar36 [16];
  double dVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  ulong uStack_430;
  long lStack_428;
  long lStack_420;
  ulong uStack_418;
  undefined1 auStack_408 [16];
  double dStack_3c8;
  long lStack_3c0;
  double dStack_3a8;
  ulong *puStack_398;
  code *pcStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined1 auStack_378 [16];
  long lStack_368;
  ulong uStack_360;
  ulong uStack_358;
  long lStack_350;
  undefined *puStack_348;
  undefined8 uStack_340;
  long lStack_338;
  undefined8 uStack_330;
  ulong uStack_328;
  long lStack_320;
  long *plStack_318;
  code *pcStack_310;
  undefined1 auStack_308 [16];
  undefined1 auStack_2f8 [16];
  undefined1 auStack_2e8 [24];
  undefined *puStack_2d0;
  undefined8 uStack_2c8;
  ulong **ppuStack_2c0;
  undefined8 uStack_2b8;
  ulong uStack_2b0;
  char cVar35;
  
  *(undefined8 *)(param_7 + 0x280) =
       *(undefined8 *)(param_7 + *(long *)(&UNK_00374fb8 + (ulong)*(byte *)(param_7 + 0x29e) * 8));
  uVar24 = *(ulong *)(param_6 + 0x5d8);
  lVar17 = param_7 + 0x80;
  uStack_330 = param_1;
  uStack_328 = param_7;
  lStack_320 = lVar17;
  if (*(long *)(param_6 + 0x780) != 0) {
    lStack_338 = param_7 + 0x98;
    lStack_3c0 = param_6 + 0x788;
    uVar12 = _ZN4core4hash11BuildHasher8hash_one17hec92e4315c4796f5E();
    unaff_R12 = *(long *)(param_6 + 0x768);
    dVar40 = *(double *)(param_6 + 0x770);
    bVar25 = (byte)(uVar12 >> 0x39);
    auVar27 = ZEXT216(CONCAT11(bVar25,bVar25));
    auVar27 = pshuflw(auVar27,auVar27,0);
    uVar26 = auVar27._0_4_;
    auVar36._4_4_ = uVar26;
    auVar36._0_4_ = uVar26;
    auVar36._8_4_ = uVar26;
    auVar36._12_4_ = uVar26;
    unaff_RBX = *(long *)(param_7 + 0x88);
    unaff_R13 = *(ulong *)(param_7 + 0x90);
    dVar18 = 0.0;
    while( true ) {
      uVar12 = uVar12 & (ulong)dVar40;
      auVar41 = *(undefined1 (*) [16])(unaff_R12 + uVar12);
      cVar35 = auVar27[0];
      auVar28[0] = -(auVar41[0] == cVar35);
      cVar37 = auVar27[1];
      auVar28[1] = -(auVar41[1] == cVar37);
      cVar38 = auVar27[2];
      auVar28[2] = -(auVar41[2] == cVar38);
      cVar39 = auVar27[3];
      auVar28[3] = -(auVar41[3] == cVar39);
      auVar28[4] = -(auVar41[4] == cVar35);
      auVar28[5] = -(auVar41[5] == cVar37);
      auVar28[6] = -(auVar41[6] == cVar38);
      auVar28[7] = -(auVar41[7] == cVar39);
      auVar28[8] = -(auVar41[8] == cVar35);
      auVar28[9] = -(auVar41[9] == cVar37);
      auVar28[10] = -(auVar41[10] == cVar38);
      auVar28[0xb] = -(auVar41[0xb] == cVar39);
      auVar28[0xc] = -(auVar41[0xc] == cVar35);
      auVar28[0xd] = -(auVar41[0xd] == cVar37);
      auVar28[0xe] = -(auVar41[0xe] == cVar38);
      auVar28[0xf] = -(auVar41[0xf] == cVar39);
      uVar9 = (ushort)(SUB161(auVar28 >> 7,0) & 1) | (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
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
      uVar16 = (uint)uVar9;
      auVar28 = auStack_378;
      while (auStack_378 = auVar41, lStack_428 = param_6, lStack_420 = lVar17, uVar9 != 0) {
        uVar11 = 0;
        for (uVar7 = uVar16; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
          uVar11 = uVar11 + 1;
        }
        uVar22 = (uVar11 + uVar12 & (ulong)dVar40) * -0x290;
        uStack_430 = param_7;
        if ((unaff_R13 == *(ulong *)(unaff_R12 + -0x280 + uVar22)) &&
           (iVar10 = (*(code *)PTR_bcmp_01aa6eb8)
                               (unaff_RBX,*(undefined8 *)(uVar22 + unaff_R12 + -0x288),unaff_R13),
           iVar10 == 0)) {
          dStack_3a8 = (double)(_DAT_00354750 & param_4);
          auStack_408._0_8_ = 0;
          if (_DAT_00353b80 <= dStack_3a8) {
            auStack_408._0_8_ = param_3;
          }
          dStack_3c8 = *(double *)(unaff_R12 + -0x28 + uVar22);
          uStack_418 = ~-(ulong)(dStack_3a8 < _DAT_00353b80) & param_4;
          (*(code *)
            PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17he3b8c48364a1d3a4E_01aa6c80
          )(&puStack_398,lVar17,&UNK_019e1d48);
          (*(code *)
            PTR__ZN15future_backtest8Customer8customer7Account20real_position_update17hf750a26ac21edb5cE_01aa7208
          )(param_2,auStack_408._0_8_,uStack_418,
            -(ulong)(param_5 < 0.0) & uVar24 | ~-(ulong)(param_5 < 0.0) & (ulong)param_5,
            &puStack_2d0,param_6,param_7,&puStack_398);
          unaff_R13 = uStack_2b0 & 0xff;
          puVar13 = puStack_2d0;
          if ((char)uStack_2b0 == '\x03') {
            return puStack_2d0;
          }
          goto LAB_0082f31f;
        }
        uVar9 = (ushort)(uVar16 - 1) & (ushort)uVar16;
        uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar9);
        auVar41 = auStack_378;
        uStack_418 = uVar12;
        auStack_408 = auVar36;
        dStack_3c8 = dVar18;
        dStack_3a8 = dVar40;
        auVar28 = auStack_378;
      }
      auVar41[0] = -(auStack_378[0] == -1);
      auVar41[1] = -(auStack_378[1] == -1);
      auVar41[2] = -(auStack_378[2] == -1);
      auVar41[3] = -(auStack_378[3] == -1);
      auVar41[4] = -(auStack_378[4] == -1);
      auVar41[5] = -(auStack_378[5] == -1);
      auVar41[6] = -(auStack_378[6] == -1);
      auVar41[7] = -(auStack_378[7] == -1);
      auVar41[8] = -(auStack_378[8] == -1);
      auVar41[9] = -(auStack_378[9] == -1);
      auVar41[10] = -(auStack_378[10] == -1);
      auVar41[0xb] = -(auStack_378[0xb] == -1);
      auVar41[0xc] = -(auStack_378[0xc] == -1);
      auVar41[0xd] = -(auStack_378[0xd] == -1);
      auVar41[0xe] = -(auStack_378[0xe] == -1);
      bVar6 = auStack_378[0xf] == -1;
      auVar41[0xf] = -bVar6;
      auStack_378 = auVar28;
      if ((((((((((((((((auVar41 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                       (auVar41 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar41 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar41 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar41 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar41 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar41 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar41 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar41 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar41 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar41 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar41 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar41 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar41 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar41 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar6) break;
      uVar12 = uVar12 + (long)dVar18 + 0x10;
      dVar18 = (double)((long)dVar18 + 0x10);
    }
  }
  param_6 = unaff_RBX;
  puVar13 = (undefined *)
            (*(code *)PTR__ZN4core6option13unwrap_failed17h4154e01d14eb4879E_01aa6fa8)
                      (&UNK_019e1d30);
  uVar22 = param_7;
LAB_0082f31f:
  uVar24 = uStack_2b0;
  if ((int)unaff_R13 != 2) {
    lVar17 = lStack_368;
    if (*(long *)(param_6 + 0x780) != 0) {
      uStack_340 = uStack_2c8;
      auStack_378._0_8_ = puVar13;
      puStack_348 = puVar13;
      uVar22 = _ZN4core4hash11BuildHasher8hash_one17hec92e4315c4796f5E(lStack_3c0,lStack_420);
      lVar19 = *(long *)(param_6 + 0x768);
      uVar12 = *(ulong *)(param_6 + 0x770);
      bVar25 = (byte)(uVar22 >> 0x39);
      auVar27 = ZEXT216(CONCAT11(bVar25,bVar25));
      auVar27 = pshuflw(auVar27,auVar27,0);
      uVar26 = auVar27._0_4_;
      auVar27._4_4_ = uVar26;
      auVar27._0_4_ = uVar26;
      auVar27._8_4_ = uVar26;
      auVar27._12_4_ = uVar26;
      unaff_R12 = *(long *)(uStack_430 + 0x88);
      lVar20 = *(long *)(uStack_430 + 0x90);
      lVar21 = 0;
      lVar23 = lVar19;
      while( true ) {
        uVar22 = uVar22 & uVar12;
        auVar36 = *(undefined1 (*) [16])(lVar23 + uVar22);
        auVar29[0] = -(auVar36[0] == auVar27[0]);
        auVar29[1] = -(auVar36[1] == auVar27[1]);
        auVar29[2] = -(auVar36[2] == auVar27[2]);
        auVar29[3] = -(auVar36[3] == auVar27[3]);
        auVar29[4] = -(auVar36[4] == auVar27[4]);
        auVar29[5] = -(auVar36[5] == auVar27[5]);
        auVar29[6] = -(auVar36[6] == auVar27[6]);
        auVar29[7] = -(auVar36[7] == auVar27[7]);
        auVar29[8] = -(auVar36[8] == auVar27[8]);
        auVar29[9] = -(auVar36[9] == auVar27[9]);
        auVar29[10] = -(auVar36[10] == auVar27[10]);
        auVar29[0xb] = -(auVar36[0xb] == auVar27[0xb]);
        auVar29[0xc] = -(auVar36[0xc] == auVar27[0xc]);
        auVar29[0xd] = -(auVar36[0xd] == auVar27[0xd]);
        auVar29[0xe] = -(auVar36[0xe] == auVar27[0xe]);
        auVar29[0xf] = -(auVar36[0xf] == auVar27[0xf]);
        uVar9 = (ushort)(SUB161(auVar29 >> 7,0) & 1) | (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
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
                (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe | (ushort)(auVar29[0xf] >> 7) << 0xf;
        uVar8 = (ulong)uVar9;
        lVar17 = lStack_368;
        uVar15 = uStack_358;
        auVar41 = auStack_308;
        while (lStack_368 = lVar21, uStack_358 = uVar8, auStack_308 = auVar36, uVar9 != 0) {
          uVar16 = 0;
          for (uVar11 = (uint)uStack_358; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
            uVar16 = uVar16 + 1;
          }
          lVar17 = (uVar16 + uVar22 & uVar12) * -0x290;
          uVar15 = unaff_R13;
          uStack_360 = uVar12;
          auStack_2f8 = auVar27;
          if (lVar20 == *(long *)(lVar19 + -0x280 + lVar17)) {
            uVar15 = unaff_R13 & 0xffffffff;
            lStack_350 = lVar23;
            iVar10 = (*(code *)PTR_bcmp_01aa6eb8)
                               (unaff_R12,*(undefined8 *)(lVar19 + lVar17 + -0x288),lVar20);
            lVar23 = lStack_350;
            if (iVar10 == 0) {
              lVar19 = lStack_350 + lVar17;
              lVar17 = *(long *)(lStack_350 + -0x90 + lVar17);
              if ((uVar24 & 0x100) != 0) {
                lVar17 = lVar17 + 1;
                *(long *)(lVar19 + -0x90) = lVar17;
              }
              *(undefined8 *)(uStack_430 + 0x10) = 1;
              *(long *)(uStack_430 + 0x18) = lVar17;
              dVar40 = (double)(~-(ulong)(dStack_3a8 < _DAT_00353b80) & (ulong)dStack_3a8);
              if (_DAT_00353b80 < dVar40) {
                *(double *)(lVar19 + -0x50) = dVar40 + *(double *)(lVar19 + -0x50);
                puVar13 = 
                PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17he3b8c48364a1d3a4E_01aa6c80
                ;
                (*(code *)
                  PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17he3b8c48364a1d3a4E_01aa6c80
                )(&puStack_2d0,lStack_420,&UNK_019e1d90);
                (*(code *)
                  PTR__ZN15future_backtest8Customer8customer7Account16receive_pnl_data17haaa769a532847250E_01aa7210
                )(param_2,puStack_348,lStack_428,&puStack_2d0,unaff_R13 & 0xff);
                uVar3 = *(undefined1 *)(uStack_430 + 0x29e);
                (*(code *)puVar13)(&puStack_2d0,lStack_420,&UNK_019e1da8);
                puVar13 = (undefined *)
                          (*(code *)
                            PTR__ZN15future_backtest8Customer8customer7Account22postion_locking_update17ha960190ac2721b11E_01aa7218
                          )(auStack_408._0_8_,uStack_418,*(undefined8 *)(uStack_430 + 0x260),
                            lStack_428,uVar3,&puStack_2d0);
                if (puVar13 != (undefined *)0x0) {
                  return puVar13;
                }
                (*(code *)
                  PTR__ZN15future_backtest8Customer8customer7Account13margin_update17hd69393f514f39438E_01aa7220
                )(lStack_428,uStack_430);
              }
              *(undefined8 *)(uStack_430 + 0x158) = uStack_330;
              *(undefined8 *)(uStack_430 + 0x160) = param_2;
              *(undefined8 *)(uStack_430 + 0x168) = param_3;
              *(ulong *)(uStack_430 + 0x170) = param_4;
              *(undefined8 *)(uStack_430 + 400) = auStack_408._0_8_;
              *(ulong *)(uStack_430 + 0x198) = uStack_418;
              *(undefined8 *)(uStack_430 + 0x1a0) = uStack_340;
              *(undefined8 *)(uStack_430 + 0x1a8) = auStack_378._0_8_;
              if (*(long *)(lStack_428 + 0x998) == 0) goto LAB_0082f8c4;
              uVar12 = _ZN4core4hash11BuildHasher8hash_one17hec92e4315c4796f5E
                                 (lStack_428 + 0x9a0,lStack_420);
              unaff_R12 = *(long *)(lStack_428 + 0x980);
              uVar24 = *(ulong *)(lStack_428 + 0x988);
              bVar25 = (byte)(uVar12 >> 0x39);
              auVar27 = ZEXT216(CONCAT11(bVar25,bVar25));
              auVar27 = pshuflw(auVar27,auVar27,0);
              uVar4 = *(undefined8 *)(uStack_430 + 0x88);
              lVar17 = *(long *)(uStack_430 + 0x90);
              lVar19 = 0;
              goto LAB_0082f690;
            }
          }
          iVar10 = (int)uStack_358 + -1;
          uVar9 = (ushort)iVar10 & (ushort)uStack_358;
          auVar36 = auStack_308;
          uVar8 = (ulong)CONCAT22((short)((uint)iVar10 >> 0x10),uVar9);
          uVar12 = uStack_360;
          lVar21 = lStack_368;
          unaff_R13 = uVar15;
          auVar27 = auStack_2f8;
          lVar17 = lStack_368;
          uVar15 = uStack_358;
          auVar41 = auStack_308;
        }
        auVar42[0] = -(auStack_308[0] == -1);
        auVar42[1] = -(auStack_308[1] == -1);
        auVar42[2] = -(auStack_308[2] == -1);
        auVar42[3] = -(auStack_308[3] == -1);
        auVar42[4] = -(auStack_308[4] == -1);
        auVar42[5] = -(auStack_308[5] == -1);
        auVar42[6] = -(auStack_308[6] == -1);
        auVar42[7] = -(auStack_308[7] == -1);
        auVar42[8] = -(auStack_308[8] == -1);
        auVar42[9] = -(auStack_308[9] == -1);
        auVar42[10] = -(auStack_308[10] == -1);
        auVar42[0xb] = -(auStack_308[0xb] == -1);
        auVar42[0xc] = -(auStack_308[0xc] == -1);
        auVar42[0xd] = -(auStack_308[0xd] == -1);
        auVar42[0xe] = -(auStack_308[0xe] == -1);
        bVar6 = auStack_308[0xf] == -1;
        auVar42[0xf] = -bVar6;
        uStack_358 = uVar15;
        auStack_308 = auVar41;
        if ((((((((((((((((auVar42 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                         (auVar42 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar42 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar42 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar42 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar42 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar42 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar42 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar42 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar42 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar42 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar42 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar42 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar42 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar42 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar6) break;
        uVar22 = uVar22 + lStack_368 + 0x10;
        lVar21 = lStack_368 + 0x10;
        lStack_368 = lVar17;
      }
    }
    lStack_368 = lVar17;
    (*(code *)PTR__ZN4core6option13unwrap_failed17h4154e01d14eb4879E_01aa6fa8)(&UNK_019e1d78);
LAB_0082f757:
    pdVar2 = (double *)(unaff_R12 + -0x10 + uVar22 * 8);
    dVar40 = *pdVar2;
    dVar18 = pdVar2[1];
    *(double *)(uStack_430 + 0x1b0) = dVar40;
    *(double *)(uStack_430 + 0x1b8) = dVar18;
    *(double *)(uStack_430 + 0x1c0) = dStack_3c8 * dVar40 * dVar18;
    if (*(long *)(lStack_428 + 0x780) != 0) {
      uVar12 = _ZN4core4hash11BuildHasher8hash_one17hec92e4315c4796f5E(lStack_3c0,lStack_420);
      lVar17 = *(long *)(lStack_428 + 0x768);
      uVar24 = *(ulong *)(lStack_428 + 0x770);
      bVar25 = (byte)(uVar12 >> 0x39);
      auVar27 = ZEXT216(CONCAT11(bVar25,bVar25));
      auVar27 = pshuflw(auVar27,auVar27,0);
      uVar4 = *(undefined8 *)(uStack_430 + 0x88);
      lVar19 = *(long *)(uStack_430 + 0x90);
      lVar20 = 0;
      while( true ) {
        uVar12 = uVar12 & uVar24;
        auVar36 = *(undefined1 (*) [16])(lVar17 + uVar12);
        cVar35 = auVar27[0];
        auVar31[0] = -(auVar36[0] == cVar35);
        cVar37 = auVar27[1];
        auVar31[1] = -(auVar36[1] == cVar37);
        cVar38 = auVar27[2];
        auVar31[2] = -(auVar36[2] == cVar38);
        cVar39 = auVar27[3];
        auVar31[3] = -(auVar36[3] == cVar39);
        auVar31[4] = -(auVar36[4] == cVar35);
        auVar31[5] = -(auVar36[5] == cVar37);
        auVar31[6] = -(auVar36[6] == cVar38);
        auVar31[7] = -(auVar36[7] == cVar39);
        auVar31[8] = -(auVar36[8] == cVar35);
        auVar31[9] = -(auVar36[9] == cVar37);
        auVar31[10] = -(auVar36[10] == cVar38);
        auVar31[0xb] = -(auVar36[0xb] == cVar39);
        auVar31[0xc] = -(auVar36[0xc] == cVar35);
        auVar31[0xd] = -(auVar36[0xd] == cVar37);
        cVar35 = auVar36[0xf];
        auVar31[0xe] = -(auVar36[0xe] == cVar38);
        auVar31[0xf] = -(cVar35 == cVar39);
        uVar9 = (ushort)(SUB161(auVar31 >> 7,0) & 1) | (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
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
                (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe | (ushort)(auVar31[0xf] >> 7) << 0xf;
        uVar16 = (uint)uVar9;
        while (uVar9 != 0) {
          uVar11 = 0;
          for (uVar7 = uVar16; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
            uVar11 = uVar11 + 1;
          }
          lVar23 = (uVar11 + uVar12 & uVar24) * -0x290;
          if ((lVar19 == *(long *)(lVar17 + -0x280 + lVar23)) &&
             (iVar10 = (*(code *)PTR_bcmp_01aa6eb8)
                                 (uVar4,*(undefined8 *)(lVar23 + lVar17 + -0x288),lVar19),
             iVar10 == 0)) {
            *(undefined8 *)(uStack_430 + 0x250) = *(undefined8 *)(lVar17 + -0x48 + lVar23);
            *(undefined8 *)(uStack_430 + 600) = *(undefined8 *)(lVar17 + -0x40 + lVar23);
            goto LAB_0082f9be;
          }
          uVar9 = (ushort)(uVar16 - 1) & (ushort)uVar16;
          uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar9);
        }
        auVar44[0] = -(auVar36[0] == -1);
        auVar44[1] = -(auVar36[1] == -1);
        auVar44[2] = -(auVar36[2] == -1);
        auVar44[3] = -(auVar36[3] == -1);
        auVar44[4] = -(auVar36[4] == -1);
        auVar44[5] = -(auVar36[5] == -1);
        auVar44[6] = -(auVar36[6] == -1);
        auVar44[7] = -(auVar36[7] == -1);
        auVar44[8] = -(auVar36[8] == -1);
        auVar44[9] = -(auVar36[9] == -1);
        auVar44[10] = -(auVar36[10] == -1);
        auVar44[0xb] = -(auVar36[0xb] == -1);
        auVar44[0xc] = -(auVar36[0xc] == -1);
        auVar44[0xd] = -(auVar36[0xd] == -1);
        auVar44[0xe] = -(auVar36[0xe] == -1);
        auVar44[0xf] = -(cVar35 == -1);
        if ((((((((((((((((auVar44 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                         (auVar44 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar44 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar44 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar44 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar44 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar44 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar44 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar44 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar44 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar44 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar44 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar44 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar44 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar44 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || cVar35 == -1)
        break;
        uVar12 = uVar12 + lVar20 + 0x10;
        lVar20 = lVar20 + 0x10;
      }
    }
LAB_0082f9be:
    auVar27 = *(undefined1 (*) [16])(lStack_428 + 0x7c8);
    auVar32._0_8_ = auVar27._8_8_;
    auVar32._8_4_ = auVar27._0_4_;
    auVar32._12_4_ = auVar27._4_4_;
    *(undefined1 (*) [16])(uStack_430 + 0x1c8) = auVar32;
    uVar4 = *(undefined8 *)(lStack_428 + 0x7e8);
    *(undefined8 *)(uStack_430 + 0x1d8) = *(undefined8 *)(lStack_428 + 0x7e0);
    *(undefined8 *)(uStack_430 + 0x1e0) = uVar4;
    *(undefined8 *)(uStack_430 + 0x1e8) = *(undefined8 *)(lStack_428 + 0x7f0);
    uVar4 = *(undefined8 *)(lStack_428 + 0x810);
    *(undefined8 *)(uStack_430 + 0x1f0) = *(undefined8 *)(lStack_428 + 0x808);
    *(undefined8 *)(uStack_430 + 0x1f8) = uVar4;
    uVar4 = *(undefined8 *)(lStack_428 + 0x830);
    *(undefined8 *)(uStack_430 + 0x200) = *(undefined8 *)(lStack_428 + 0x828);
    *(undefined8 *)(uStack_430 + 0x208) = uVar4;
    uVar4 = *(undefined8 *)(lStack_428 + 0x850);
    *(undefined8 *)(uStack_430 + 0x210) = *(undefined8 *)(lStack_428 + 0x848);
    *(undefined8 *)(uStack_430 + 0x218) = uVar4;
    uVar4 = *(undefined8 *)(lStack_428 + 0x860);
    *(undefined8 *)(uStack_430 + 0x220) = *(undefined8 *)(lStack_428 + 0x858);
    *(undefined8 *)(uStack_430 + 0x228) = uVar4;
    if (*(long *)(lStack_428 + 0x7b0) != 0) {
      uVar12 = _ZN4core4hash11BuildHasher8hash_one17hec92e4315c4796f5E
                         (lStack_428 + 0x7b8,lStack_338);
      lVar17 = *(long *)(lStack_428 + 0x798);
      uVar24 = *(ulong *)(lStack_428 + 0x7a0);
      bVar25 = (byte)(uVar12 >> 0x39);
      auVar27 = ZEXT216(CONCAT11(bVar25,bVar25));
      auVar27 = pshuflw(auVar27,auVar27,0);
      uVar4 = *(undefined8 *)(uStack_430 + 0xa0);
      lVar19 = *(long *)(uStack_430 + 0xa8);
      lVar20 = 0;
      while( true ) {
        uVar12 = uVar12 & uVar24;
        auVar36 = *(undefined1 (*) [16])(lVar17 + uVar12);
        cVar35 = auVar27[0];
        auVar33[0] = -(auVar36[0] == cVar35);
        cVar37 = auVar27[1];
        auVar33[1] = -(auVar36[1] == cVar37);
        cVar38 = auVar27[2];
        auVar33[2] = -(auVar36[2] == cVar38);
        cVar39 = auVar27[3];
        auVar33[3] = -(auVar36[3] == cVar39);
        auVar33[4] = -(auVar36[4] == cVar35);
        auVar33[5] = -(auVar36[5] == cVar37);
        auVar33[6] = -(auVar36[6] == cVar38);
        auVar33[7] = -(auVar36[7] == cVar39);
        auVar33[8] = -(auVar36[8] == cVar35);
        auVar33[9] = -(auVar36[9] == cVar37);
        auVar33[10] = -(auVar36[10] == cVar38);
        auVar33[0xb] = -(auVar36[0xb] == cVar39);
        auVar33[0xc] = -(auVar36[0xc] == cVar35);
        auVar33[0xd] = -(auVar36[0xd] == cVar37);
        cVar35 = auVar36[0xf];
        auVar33[0xe] = -(auVar36[0xe] == cVar38);
        auVar33[0xf] = -(cVar35 == cVar39);
        uVar9 = (ushort)(SUB161(auVar33 >> 7,0) & 1) | (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
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
                (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe | (ushort)(auVar33[0xf] >> 7) << 0xf;
        uVar16 = (uint)uVar9;
        while (uVar9 != 0) {
          uVar11 = 0;
          for (uVar7 = uVar16; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
            uVar11 = uVar11 + 1;
          }
          lVar23 = (uVar11 + uVar12 & uVar24) * -0x60;
          if ((lVar19 == *(long *)(lVar17 + -0x50 + lVar23)) &&
             (iVar10 = (*(code *)PTR_bcmp_01aa6eb8)
                                 (uVar4,*(undefined8 *)(lVar23 + lVar17 + -0x58),lVar19),
             iVar10 == 0)) {
            *(undefined8 *)(uStack_430 + 0x230) = *(undefined8 *)(lVar17 + -0x40 + lVar23);
            *(undefined8 *)(uStack_430 + 0x238) = *(undefined8 *)(lVar17 + -0x38 + lVar23);
            *(undefined8 *)(uStack_430 + 0x240) = *(undefined8 *)(lVar17 + -0x20 + lVar23);
            *(undefined8 *)(uStack_430 + 0x248) = *(undefined8 *)(lVar17 + -0x18 + lVar23);
            goto LAB_0082fba2;
          }
          uVar9 = (ushort)(uVar16 - 1) & (ushort)uVar16;
          uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar9);
        }
        auVar45[0] = -(auVar36[0] == -1);
        auVar45[1] = -(auVar36[1] == -1);
        auVar45[2] = -(auVar36[2] == -1);
        auVar45[3] = -(auVar36[3] == -1);
        auVar45[4] = -(auVar36[4] == -1);
        auVar45[5] = -(auVar36[5] == -1);
        auVar45[6] = -(auVar36[6] == -1);
        auVar45[7] = -(auVar36[7] == -1);
        auVar45[8] = -(auVar36[8] == -1);
        auVar45[9] = -(auVar36[9] == -1);
        auVar45[10] = -(auVar36[10] == -1);
        auVar45[0xb] = -(auVar36[0xb] == -1);
        auVar45[0xc] = -(auVar36[0xc] == -1);
        auVar45[0xd] = -(auVar36[0xd] == -1);
        auVar45[0xe] = -(auVar36[0xe] == -1);
        auVar45[0xf] = -(cVar35 == -1);
        if ((((((((((((((((auVar45 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                         (auVar45 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar45 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar45 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar45 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar45 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar45 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar45 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar45 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar45 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar45 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar45 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar45 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar45 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar45 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || cVar35 == -1)
        break;
        uVar12 = uVar12 + lVar20 + 0x10;
        lVar20 = lVar20 + 0x10;
      }
    }
LAB_0082fba2:
    *(undefined1 *)(uStack_430 + 0x294) = 1;
    if (*(long *)(lStack_428 + 0x780) != 0) {
      uVar12 = _ZN4core4hash11BuildHasher8hash_one17hec92e4315c4796f5E(lStack_3c0,lStack_420);
      lVar17 = *(long *)(lStack_428 + 0x768);
      uVar24 = *(ulong *)(lStack_428 + 0x770);
      bVar25 = (byte)(uVar12 >> 0x39);
      auVar27 = ZEXT216(CONCAT11(bVar25,bVar25));
      auVar27 = pshuflw(auVar27,auVar27,0);
      uVar4 = *(undefined8 *)(uStack_430 + 0x88);
      lVar19 = *(long *)(uStack_430 + 0x90);
      lVar20 = 0;
      do {
        uVar12 = uVar12 & uVar24;
        auVar36 = *(undefined1 (*) [16])(lVar17 + uVar12);
        cVar35 = auVar27[0];
        auVar34[0] = -(auVar36[0] == cVar35);
        cVar37 = auVar27[1];
        auVar34[1] = -(auVar36[1] == cVar37);
        cVar38 = auVar27[2];
        auVar34[2] = -(auVar36[2] == cVar38);
        cVar39 = auVar27[3];
        auVar34[3] = -(auVar36[3] == cVar39);
        auVar34[4] = -(auVar36[4] == cVar35);
        auVar34[5] = -(auVar36[5] == cVar37);
        auVar34[6] = -(auVar36[6] == cVar38);
        auVar34[7] = -(auVar36[7] == cVar39);
        auVar34[8] = -(auVar36[8] == cVar35);
        auVar34[9] = -(auVar36[9] == cVar37);
        auVar34[10] = -(auVar36[10] == cVar38);
        auVar34[0xb] = -(auVar36[0xb] == cVar39);
        auVar34[0xc] = -(auVar36[0xc] == cVar35);
        auVar34[0xd] = -(auVar36[0xd] == cVar37);
        cVar35 = auVar36[0xf];
        auVar34[0xe] = -(auVar36[0xe] == cVar38);
        auVar34[0xf] = -(cVar35 == cVar39);
        uVar9 = (ushort)(SUB161(auVar34 >> 7,0) & 1) | (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1 |
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
                (ushort)(SUB161(auVar34 >> 0x77,0) & 1) << 0xe | (ushort)(auVar34[0xf] >> 7) << 0xf;
        uVar16 = (uint)uVar9;
        while (uVar9 != 0) {
          uVar11 = 0;
          for (uVar7 = uVar16; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
            uVar11 = uVar11 + 1;
          }
          lVar23 = (uVar11 + uVar12 & uVar24) * -0x290;
          if ((lVar19 == *(long *)(lVar17 + -0x280 + lVar23)) &&
             (iVar10 = (*(code *)PTR_bcmp_01aa6eb8)
                                 (uVar4,*(undefined8 *)(lVar17 + lVar23 + -0x288),lVar19),
             iVar10 == 0)) {
            if ((_DAT_00353b80 <= dStack_3a8) &&
               (_DAT_00353b80 < (double)(_DAT_00354750 & (ulong)dVar18))) {
              dVar18 = (double)((ulong)dVar18 & _DAT_00358eb0 | _DAT_00358360);
              uVar24 = -(ulong)NAN(*(double *)(uStack_430 + 0x100));
              dVar40 = (double)(~uVar24 & (_DAT_00358eb0 & (ulong)*(double *)(uStack_430 + 0x100) |
                                          _DAT_00358360) | _DAT_00353a78 & uVar24);
              if ((dVar18 != dVar40) || (NAN(dVar18) || NAN(dVar40))) {
                piVar1 = (int *)(lVar17 + lVar23 + -0x10);
                *piVar1 = *piVar1 + 1;
                goto LAB_0082fd50;
              }
            }
            *(undefined4 *)(lVar17 + lVar23 + -0x10) = 0;
LAB_0082fd50:
            _ZN88__LT_future_backtest__Order__trade_order__TradingOrder_u20_as_u20_core__clone__Clone_GT_5clone17h915ade41e7883ea9E
                      (&puStack_2d0);
            lVar17 = *(long *)(lStack_428 + 0x8f8);
            if (lVar17 == *(long *)(lStack_428 + 0x8e8)) {
              (*(code *)
                PTR__ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17hbdee29da73606d91E_01aa7578)
                        (lStack_428 + 0x8e8,&UNK_019e1e60);
            }
            (*(code *)PTR_memcpy_01aa6b48)
                      (lVar17 * 0x2a0 + *(long *)(lStack_428 + 0x8f0),&puStack_2d0,0x2a0);
            *(long *)(lStack_428 + 0x8f8) = lVar17 + 1;
            puStack_398 = &uStack_328;
            pcStack_390 = _ZN42__LT__RF_T_u20_as_u20_core__fmt__Debug_GT_3fmt17h8f412a82935da609E;
            puStack_2d0 = &UNK_019e1e78;
            uStack_2c8 = 1;
            uStack_2b0 = 0;
            uStack_2b8 = 1;
            ppuStack_2c0 = &puStack_398;
            (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_01aa6d80)
                      (auStack_2e8,&puStack_2d0);
            (*(code *)
              PTR__ZN15future_backtest7Logging7logging11BacktestLog5debug17hfb188531b1342676E_01aa7580
            )(lStack_428 + 0x898,auStack_2e8);
            return (undefined *)0x0;
          }
          uVar9 = (ushort)(uVar16 - 1) & (ushort)uVar16;
          uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar9);
        }
        auVar46[0] = -(auVar36[0] == -1);
        auVar46[1] = -(auVar36[1] == -1);
        auVar46[2] = -(auVar36[2] == -1);
        auVar46[3] = -(auVar36[3] == -1);
        auVar46[4] = -(auVar36[4] == -1);
        auVar46[5] = -(auVar36[5] == -1);
        auVar46[6] = -(auVar36[6] == -1);
        auVar46[7] = -(auVar36[7] == -1);
        auVar46[8] = -(auVar36[8] == -1);
        auVar46[9] = -(auVar36[9] == -1);
        auVar46[10] = -(auVar36[10] == -1);
        auVar46[0xb] = -(auVar36[0xb] == -1);
        auVar46[0xc] = -(auVar36[0xc] == -1);
        auVar46[0xd] = -(auVar36[0xd] == -1);
        auVar46[0xe] = -(auVar36[0xe] == -1);
        auVar46[0xf] = -(cVar35 == -1);
        if ((((((((((((((((auVar46 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                         (auVar46 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar46 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar46 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar46 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar46 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar46 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar46 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar46 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar46 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar46 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar46 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar46 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar46 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar46 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || cVar35 == -1)
        break;
        uVar12 = uVar12 + lVar20 + 0x10;
        lVar20 = lVar20 + 0x10;
      } while( true );
    }
    (*(code *)PTR__ZN4core6option13unwrap_failed17h4154e01d14eb4879E_01aa6fa8)(&UNK_019e1e48);
  }
  (*(code *)PTR__ZN4core6option13unwrap_failed17h4154e01d14eb4879E_01aa6fa8)(&UNK_019e1d60);
LAB_0082fe63:
  (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17hf07a1aab219f1466E_01aa6c98)(8,0x20);
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
LAB_0082f690:
  uVar12 = uVar12 & uVar24;
  auVar36 = *(undefined1 (*) [16])(unaff_R12 + uVar12);
  cVar35 = auVar27[0];
  auVar30[0] = -(auVar36[0] == cVar35);
  cVar37 = auVar27[1];
  auVar30[1] = -(auVar36[1] == cVar37);
  cVar38 = auVar27[2];
  auVar30[2] = -(auVar36[2] == cVar38);
  cVar39 = auVar27[3];
  auVar30[3] = -(auVar36[3] == cVar39);
  auVar30[4] = -(auVar36[4] == cVar35);
  auVar30[5] = -(auVar36[5] == cVar37);
  auVar30[6] = -(auVar36[6] == cVar38);
  auVar30[7] = -(auVar36[7] == cVar39);
  auVar30[8] = -(auVar36[8] == cVar35);
  auVar30[9] = -(auVar36[9] == cVar37);
  auVar30[10] = -(auVar36[10] == cVar38);
  auVar30[0xb] = -(auVar36[0xb] == cVar39);
  auVar30[0xc] = -(auVar36[0xc] == cVar35);
  auVar30[0xd] = -(auVar36[0xd] == cVar37);
  cVar35 = auVar36[0xf];
  auVar30[0xe] = -(auVar36[0xe] == cVar38);
  auVar30[0xf] = -(cVar35 == cVar39);
  uVar9 = (ushort)(SUB161(auVar30 >> 7,0) & 1) | (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
          (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
          (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
          (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
          (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
          (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
          (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
          (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
          (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
          (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
          (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
          (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
          (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe | (ushort)(auVar30[0xf] >> 7) << 0xf;
  uVar16 = (uint)uVar9;
  while (uVar9 != 0) {
    uVar11 = 0;
    for (uVar7 = uVar16; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
      uVar11 = uVar11 + 1;
    }
    uVar15 = uVar11 + uVar12 & uVar24;
    uVar22 = uVar15 * -5;
    if ((lVar17 == *(long *)(unaff_R12 + -0x18 + uVar15 * -0x28)) &&
       (iVar10 = (*(code *)PTR_bcmp_01aa6eb8)
                           (uVar4,*(undefined8 *)(uVar15 * -0x28 + unaff_R12 + -0x20),lVar17),
       iVar10 == 0)) goto LAB_0082f757;
    uVar9 = (ushort)(uVar16 - 1) & (ushort)uVar16;
    uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar9);
  }
  auVar43[0] = -(auVar36[0] == -1);
  auVar43[1] = -(auVar36[1] == -1);
  auVar43[2] = -(auVar36[2] == -1);
  auVar43[3] = -(auVar36[3] == -1);
  auVar43[4] = -(auVar36[4] == -1);
  auVar43[5] = -(auVar36[5] == -1);
  auVar43[6] = -(auVar36[6] == -1);
  auVar43[7] = -(auVar36[7] == -1);
  auVar43[8] = -(auVar36[8] == -1);
  auVar43[9] = -(auVar36[9] == -1);
  auVar43[10] = -(auVar36[10] == -1);
  auVar43[0xb] = -(auVar36[0xb] == -1);
  auVar43[0xc] = -(auVar36[0xc] == -1);
  auVar43[0xd] = -(auVar36[0xd] == -1);
  auVar43[0xe] = -(auVar36[0xe] == -1);
  auVar43[0xf] = -(cVar35 == -1);
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
      (auVar43 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || cVar35 == -1)
  goto LAB_0082f8c4;
  uVar12 = uVar12 + lVar19 + 0x10;
  lVar19 = lVar19 + 0x10;
  goto LAB_0082f690;
LAB_0082f8c4:
  plStack_318 = &lStack_320;
  pcStack_310 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h800c00530b30273bE;
  puStack_2d0 = &UNK_019e1dc0;
  uStack_2c8 = 1;
  uStack_2b0 = 0;
  ppuStack_2c0 = (ulong **)&plStack_318;
  uStack_2b8 = 1;
  (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_01aa6d80)
            (&pcStack_390,&puStack_2d0);
  puStack_398 = (ulong *)0x0;
  (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc35___rust_no_alloc_shim_is_unstable_v2_01aa6a40)();
  puVar14 = (undefined8 *)(*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc12___rust_alloc_01aa6a18)(0x20,8)
  ;
  if (puVar14 != (undefined8 *)0x0) {
    puVar14[2] = uStack_388;
    puVar14[3] = uStack_380;
    *puVar14 = puStack_398;
    puVar14[1] = pcStack_390;
    puVar13 = (undefined *)
              _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17hd179a16700024adcE
                        (puVar14,anon_d0b8e27bea7bf57269a32e15b6abf5cf_309_llvm_1643563994444475245)
    ;
    return puVar13;
  }
  goto LAB_0082fe63;
}


