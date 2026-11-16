// ELF address 0x0000000000685650; future_backtest::Customer::customer::Account::order_split

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long _ZN15future_backtest8Customer8customer7Account11order_split17h5d1efa9792c40059E
               (undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  ushort uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  undefined1 *puVar16;
  byte bVar17;
  undefined4 uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  long *plVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  char cStack_1e9;
  long lStack_1e8;
  double dStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  double dStack_188;
  undefined8 uStack_180;
  long *plStack_178;
  undefined8 uStack_170;
  long *plStack_160;
  long **pplStack_158;
  undefined *puStack_150;
  long **pplStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  long *plStack_128;
  code *pcStack_120;
  long ***ppplStack_118;
  code *pcStack_110;
  long **pplStack_108;
  undefined *puStack_100;
  long **pplStack_f8;
  undefined *puStack_f0;
  long **pplStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  uStack_1c8 = *(undefined8 *)(param_3 + 0x5d8);
  uStack_1d8 = param_2;
  uStack_1d0 = param_1;
  (*(code *)
    PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17he3b8c48364a1d3a4E_019fc038
  )(&lStack_1a0,param_4 + 0x80,&UNK_01936d50);
  cStack_1e9 = *(char *)(param_4 + 0x29b);
  dStack_1e0 = *(double *)(param_4 + 0x168);
  plStack_178 = *(long **)(param_4 + 0x170);
  uStack_170 = 0;
  plStack_b0 = (long *)0x0;
  lStack_1c0 = param_4;
  lVar15 = lStack_1b8;
  uVar12 = uStack_1a8;
  plStack_160 = plStack_178;
  if (*(long *)(param_3 + 0x998) != 0) {
    uVar8 = _ZN4core4hash11BuildHasher8hash_one17hec92e4315c4796f5E(param_3 + 0x9a0,&lStack_1a0);
    lVar5 = lStack_190;
    uVar4 = uStack_198;
    puVar14 = PTR_bcmp_019fbf00;
    lVar10 = *(long *)(param_3 + 0x980);
    uVar9 = *(ulong *)(param_3 + 0x988);
    bVar17 = (byte)(uVar8 >> 0x39);
    auVar19 = ZEXT216(CONCAT11(bVar17,bVar17));
    auVar19 = pshuflw(auVar19,auVar19,0);
    uVar18 = auVar19._0_4_;
    auVar19._4_4_ = uVar18;
    auVar19._0_4_ = uVar18;
    auVar19._8_4_ = uVar18;
    auVar19._12_4_ = uVar18;
    lVar13 = 0;
    while( true ) {
      auVar30 = *(undefined1 (*) [16])(lVar10 + (uVar8 & uVar9));
      auVar20[0] = -(auVar30[0] == auVar19[0]);
      auVar20[1] = -(auVar30[1] == auVar19[1]);
      auVar20[2] = -(auVar30[2] == auVar19[2]);
      auVar20[3] = -(auVar30[3] == auVar19[3]);
      auVar20[4] = -(auVar30[4] == auVar19[4]);
      auVar20[5] = -(auVar30[5] == auVar19[5]);
      auVar20[6] = -(auVar30[6] == auVar19[6]);
      auVar20[7] = -(auVar30[7] == auVar19[7]);
      auVar20[8] = -(auVar30[8] == auVar19[8]);
      auVar20[9] = -(auVar30[9] == auVar19[9]);
      auVar20[10] = -(auVar30[10] == auVar19[10]);
      auVar20[0xb] = -(auVar30[0xb] == auVar19[0xb]);
      auVar20[0xc] = -(auVar30[0xc] == auVar19[0xc]);
      auVar20[0xd] = -(auVar30[0xd] == auVar19[0xd]);
      auVar20[0xe] = -(auVar30[0xe] == auVar19[0xe]);
      auVar20[0xf] = -(auVar30[0xf] == auVar19[0xf]);
      uVar6 = (ushort)(SUB161(auVar20 >> 7,0) & 1) | (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar20 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar20 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar20 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar20 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar20 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar20 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar20 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar20 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar20 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar20 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar20 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar20 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe | (ushort)(auVar20[0xf] >> 7) << 0xf;
      uVar8 = uVar8 & uVar9;
      dVar26 = (double)(ulong)uVar6;
      lVar15 = lStack_1b8;
      uVar12 = uStack_1a8;
      dVar23 = dStack_188;
      auVar20 = auStack_d8;
      while (lStack_1b8 = lVar13, dStack_188 = dVar26, auStack_d8 = auVar30, uStack_1a8 = uVar8,
            uVar6 != 0) {
        uVar3 = 0;
        for (uVar11 = SUB84(dStack_188,0); (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        uVar12 = uVar3 + uStack_1a8 & uVar9;
        lStack_1e8 = param_3;
        uStack_1b0 = uVar9;
        auStack_c8 = auVar19;
        if ((lVar5 == *(long *)(lVar10 + -0x18 + uVar12 * -0x28)) &&
           (iVar7 = (*(code *)puVar14)(uVar4,*(undefined8 *)(uVar12 * -0x28 + lVar10 + -0x20),lVar5)
           , iVar7 == 0)) {
          plStack_b0 = *(long **)(lVar10 + -8 + uVar12 * -0x28);
          param_3 = lStack_1e8;
          lVar15 = lStack_1b8;
          uVar12 = uStack_1a8;
          goto LAB_00785839;
        }
        iVar7 = SUB84(dStack_188,0) + -1;
        uVar6 = (ushort)iVar7 & SUB82(dStack_188,0);
        uVar8 = uStack_1a8;
        auVar30 = auStack_d8;
        dVar26 = (double)(ulong)CONCAT22((short)((uint)iVar7 >> 0x10),uVar6);
        uVar9 = uStack_1b0;
        lVar13 = lStack_1b8;
        param_3 = lStack_1e8;
        auVar19 = auStack_c8;
        lVar15 = lStack_1b8;
        uVar12 = uStack_1a8;
        dVar23 = dStack_188;
        auVar20 = auStack_d8;
      }
      plStack_b0 = (long *)0x0;
      auVar30[0] = -(auStack_d8[0] == -1);
      auVar30[1] = -(auStack_d8[1] == -1);
      auVar30[2] = -(auStack_d8[2] == -1);
      auVar30[3] = -(auStack_d8[3] == -1);
      auVar30[4] = -(auStack_d8[4] == -1);
      auVar30[5] = -(auStack_d8[5] == -1);
      auVar30[6] = -(auStack_d8[6] == -1);
      auVar30[7] = -(auStack_d8[7] == -1);
      auVar30[8] = -(auStack_d8[8] == -1);
      auVar30[9] = -(auStack_d8[9] == -1);
      auVar30[10] = -(auStack_d8[10] == -1);
      auVar30[0xb] = -(auStack_d8[0xb] == -1);
      auVar30[0xc] = -(auStack_d8[0xc] == -1);
      auVar30[0xd] = -(auStack_d8[0xd] == -1);
      auVar30[0xe] = -(auStack_d8[0xe] == -1);
      bVar2 = auStack_d8[0xf] == -1;
      auVar30[0xf] = -bVar2;
      dStack_188 = dVar23;
      auStack_d8 = auVar20;
      if ((((((((((((((((auVar30 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                       (auVar30 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar30 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar30 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar30 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar30 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar30 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar30 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar30 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar30 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar30 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar30 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar30 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar30 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar30 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar2) break;
      uVar8 = uStack_1a8 + lStack_1b8 + 0x10;
      lVar13 = lStack_1b8 + 0x10;
      lStack_1b8 = lVar15;
      uStack_1a8 = uVar12;
    }
  }
LAB_00785839:
  uStack_1a8 = uVar12;
  lStack_1b8 = lVar15;
  lVar15 = lStack_1c0;
  plStack_98 = plStack_160;
  plStack_a0 = plStack_b0;
                    /* WARNING: Switch is manually overridden */
  switch(cStack_1e9) {
  default:
    goto override_jmp_00785873_case_0;
  case '\x01':
    if (_DAT_003568f8 <= (double)plStack_160) {
      pplStack_158 = &plStack_a0;
      puStack_150 = 
      PTR__ZN4core3fmt5float52__LT_impl_u20_core__fmt__Display_u20_for_u20_f64_GT_3fmt17hd7443fdfc6565159E_019fc2c0
      ;
      pplStack_148 = &plStack_98;
      puStack_140 = 
      PTR__ZN4core3fmt5float52__LT_impl_u20_core__fmt__Display_u20_for_u20_f64_GT_3fmt17hd7443fdfc6565159E_019fc2c0
      ;
      plStack_128 = (long *)&UNK_01936b38;
      pcStack_120 = (code *)0x2;
      pplStack_108 = (long **)0x0;
      ppplStack_118 = &pplStack_158;
      pcStack_110 = (code *)0x2;
      puVar16 = auStack_48;
      (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_019fc058)
                (puVar16,&plStack_128);
LAB_00786305:
      lVar10 = _ZN6anyhow5error31__LT_impl_u20_anyhow__Error_GT_3msg17he9ded60e53cfdf36E(puVar16);
      goto joined_r0x00785cfa;
    }
    plVar27 = plStack_b0;
    if ((double)plStack_b0 <= 0.0) {
      plVar27 = (long *)0x0;
    }
    plStack_a8 = (long *)(_DAT_0034f910 & (ulong)plStack_160);
    if ((double)plVar27 <= (double)(_DAT_0034f910 & (ulong)plStack_160)) {
      plStack_a8 = plVar27;
    }
    plStack_a8 = (long *)((ulong)plStack_a8 ^ _DAT_00354010);
    break;
  case '\x03':
    if ((double)plStack_160 <= _DAT_00356160) {
      pplStack_158 = &plStack_a0;
      puStack_150 = 
      PTR__ZN4core3fmt5float52__LT_impl_u20_core__fmt__Display_u20_for_u20_f64_GT_3fmt17hd7443fdfc6565159E_019fc2c0
      ;
      pplStack_148 = &plStack_98;
      puStack_140 = 
      PTR__ZN4core3fmt5float52__LT_impl_u20_core__fmt__Display_u20_for_u20_f64_GT_3fmt17hd7443fdfc6565159E_019fc2c0
      ;
      plStack_128 = (long *)&UNK_01936b58;
      pcStack_120 = (code *)0x2;
      pplStack_108 = (long **)0x0;
      ppplStack_118 = &pplStack_158;
      pcStack_110 = (code *)0x2;
      puVar16 = auStack_60;
      (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_019fc058)
                (puVar16,&plStack_128);
      goto LAB_00786305;
    }
    plVar27 = (long *)((ulong)plStack_b0 ^ _DAT_00354010);
    if ((double)((ulong)plStack_b0 ^ _DAT_00354010) <= 0.0) {
      plVar27 = (long *)0x0;
    }
    plStack_a8 = plStack_160;
    if ((double)plVar27 <= (double)plStack_160) {
      plStack_a8 = plVar27;
    }
  }
  if ((double)(_DAT_0034f910 & (ulong)plStack_a8) <= _DAT_00356160) {
    pcStack_120 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE_llvm_1643563994444475245
    ;
    ppplStack_118 = (long ***)&cStack_1e9;
    pcStack_110 = 
    _ZN82__LT_future_backtest__Order__order__TradeOperation_u20_as_u20_core__fmt__Debug_GT_3fmt17h92dedd500a49f82cE
    ;
    pplStack_108 = &plStack_160;
    puStack_100 = 
    PTR__ZN4core3fmt5float52__LT_impl_u20_core__fmt__Display_u20_for_u20_f64_GT_3fmt17hd7443fdfc6565159E_019fc2c0
    ;
    pplStack_f8 = &plStack_b0;
    puStack_f0 = 
    PTR__ZN4core3fmt5float52__LT_impl_u20_core__fmt__Display_u20_for_u20_f64_GT_3fmt17hd7443fdfc6565159E_019fc2c0
    ;
    pplStack_158 = (long **)&UNK_01936db8;
    puStack_150 = (undefined *)0x4;
    uStack_138 = 0;
    pplStack_148 = &plStack_128;
    puStack_140 = (undefined *)0x4;
    plStack_128 = &lStack_1a0;
    (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_019fc058)
              (auStack_90,&pplStack_158);
    (*(code *)
      PTR__ZN15future_backtest7Logging7logging11BacktestLog7warning17hb32731492fafaac4E_019fc2c8)
              (param_3 + 0x898,auStack_90);
joined_r0x00785cfa:
    lVar10 = 0;
joined_r0x00785cfa:
    if (lStack_1a0 != 0) {
      (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_019fbb20)(uStack_198,lStack_1a0,1);
    }
    _ZN4core3ptr70drop_in_place_LT_future_backtest__Order__trade_order__TradingOrder_GT_17hb69872fb2d20e498E_llvm_1643563994444475245
              (lVar15);
    return lVar10;
  }
  if ((double)(_DAT_0034f910 & (ulong)plStack_a8) + _DAT_00356160 <
      (double)(_DAT_0034f910 & (ulong)plStack_160)) {
    dVar23 = *(double *)(lStack_1c0 + 0x178) - ((double)plStack_160 - (double)plStack_a8);
    dVar26 = *(double *)(lStack_1c0 + 0x180) -
             dStack_1e0 * ((double)plStack_160 - (double)plStack_a8) *
             *(double *)(lStack_1c0 + 0x260);
    *(double *)(lStack_1c0 + 0x178) = dVar23;
    *(double *)(lStack_1c0 + 0x180) = dVar26;
    if ((double)(_DAT_0034f910 & (ulong)dVar23) <= _DAT_00356160) {
      *(undefined8 *)(lStack_1c0 + 0x178) = 0;
      *(undefined8 *)(lStack_1c0 + 0x180) = 0;
      *(undefined8 *)(lStack_1c0 + 0x188) = 0;
    }
    else {
      dVar23 = (double)(*(code *)PTR_round_019fc2b8)((dVar26 / dVar23) * _DAT_00356030);
      *(double *)(lVar15 + 0x188) = dVar23 / _DAT_00356030;
    }
    pcStack_120 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE_llvm_1643563994444475245
    ;
    ppplStack_118 = (long ***)&cStack_1e9;
    pcStack_110 = 
    _ZN82__LT_future_backtest__Order__order__TradeOperation_u20_as_u20_core__fmt__Debug_GT_3fmt17h92dedd500a49f82cE
    ;
    pplStack_108 = &plStack_160;
    puStack_100 = 
    PTR__ZN4core3fmt5float52__LT_impl_u20_core__fmt__Display_u20_for_u20_f64_GT_3fmt17hd7443fdfc6565159E_019fc2c0
    ;
    pplStack_f8 = &plStack_a8;
    puStack_f0 = 
    PTR__ZN4core3fmt5float52__LT_impl_u20_core__fmt__Display_u20_for_u20_f64_GT_3fmt17hd7443fdfc6565159E_019fc2c0
    ;
    pplStack_e8 = &plStack_b0;
    puStack_e0 = 
    PTR__ZN4core3fmt5float52__LT_impl_u20_core__fmt__Display_u20_for_u20_f64_GT_3fmt17hd7443fdfc6565159E_019fc2c0
    ;
    pplStack_158 = (long **)&UNK_01936d68;
    puStack_150 = (undefined *)0x5;
    uStack_138 = 0;
    pplStack_148 = &plStack_128;
    puStack_140 = (undefined *)0x5;
    plStack_128 = &lStack_1a0;
    (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_019fc058)
              (auStack_78,&pplStack_158);
    (*(code *)
      PTR__ZN15future_backtest7Logging7logging11BacktestLog7warning17hb32731492fafaac4E_019fc2c8)
              (param_3 + 0x898,auStack_78);
    plStack_178 = plStack_a8;
    uStack_170 = 0;
  }
override_jmp_00785873_case_0:
  if ((byte)(cStack_1e9 - 1U) < 2) {
    puVar14 = &UNK_01936df8;
    if (*(long *)(param_3 + 0x998) != 0) {
      uVar9 = _ZN4core4hash11BuildHasher8hash_one17hec92e4315c4796f5E(param_3 + 0x9a0,&lStack_1a0);
      uVar4 = uStack_198;
      puVar14 = PTR_bcmp_019fbf00;
      lVar10 = *(long *)(param_3 + 0x980);
      uVar12 = *(ulong *)(param_3 + 0x988);
      bVar17 = (byte)(uVar9 >> 0x39);
      auVar19 = ZEXT216(CONCAT11(bVar17,bVar17));
      auVar19 = pshuflw(auVar19,auVar19,0);
      uVar18 = auVar19._0_4_;
      auVar24._4_4_ = uVar18;
      auVar24._0_4_ = uVar18;
      auVar24._8_4_ = uVar18;
      auVar24._12_4_ = uVar18;
      lVar15 = 0;
      do {
        uVar9 = uVar9 & uVar12;
        auVar19 = *(undefined1 (*) [16])(lVar10 + uVar9);
        auVar21[0] = -(auVar19[0] == auVar24[0]);
        auVar21[1] = -(auVar19[1] == auVar24[1]);
        auVar21[2] = -(auVar19[2] == auVar24[2]);
        auVar21[3] = -(auVar19[3] == auVar24[3]);
        auVar21[4] = -(auVar19[4] == auVar24[4]);
        auVar21[5] = -(auVar19[5] == auVar24[5]);
        auVar21[6] = -(auVar19[6] == auVar24[6]);
        auVar21[7] = -(auVar19[7] == auVar24[7]);
        auVar21[8] = -(auVar19[8] == auVar24[8]);
        auVar21[9] = -(auVar19[9] == auVar24[9]);
        auVar21[10] = -(auVar19[10] == auVar24[10]);
        auVar21[0xb] = -(auVar19[0xb] == auVar24[0xb]);
        auVar21[0xc] = -(auVar19[0xc] == auVar24[0xc]);
        auVar21[0xd] = -(auVar19[0xd] == auVar24[0xd]);
        auVar21[0xe] = -(auVar19[0xe] == auVar24[0xe]);
        auVar21[0xf] = -(auVar19[0xf] == auVar24[0xf]);
        uVar6 = (ushort)(SUB161(auVar21 >> 7,0) & 1) | (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar21 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar21 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar21 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar21 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar21 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar21 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar21 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar21 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar21 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar21 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar21 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar21 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar21 >> 0x77,0) & 1) << 0xe | (ushort)(auVar21[0xf] >> 7) << 0xf;
        dVar23 = (double)(ulong)uVar6;
        lVar5 = param_3;
        if (uVar6 != 0) {
          while( true ) {
            auStack_c8 = auVar24;
            auStack_d8 = auVar19;
            uStack_1a8 = uVar9;
            uStack_1b0 = uVar12;
            lStack_1b8 = lVar15;
            lStack_1e8 = lVar5;
            uVar3 = 0;
            for (uVar11 = SUB84(dVar23,0); (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
              uVar3 = uVar3 + 1;
            }
            uVar12 = uVar3 + uStack_1a8 & uStack_1b0;
            dStack_188 = dVar23;
            if ((lStack_190 == *(long *)(lVar10 + -0x18 + uVar12 * -0x28)) &&
               (iVar7 = (*(code *)puVar14)(uVar4,*(undefined8 *)(uVar12 * -0x28 + lVar10 + -0x20),
                                           lStack_190), lVar15 = lStack_1c0, lVar5 = lStack_1e8,
               uVar9 = _DAT_00354010, iVar7 == 0)) break;
            iVar7 = SUB84(dStack_188,0) + -1;
            uVar6 = (ushort)iVar7 & SUB82(dStack_188,0);
            dVar23 = (double)(ulong)CONCAT22((short)((uint)iVar7 >> 0x10),uVar6);
            uVar9 = uStack_1a8;
            uVar12 = uStack_1b0;
            lVar15 = lStack_1b8;
            param_3 = lStack_1e8;
            auVar24 = auStack_c8;
            auVar19 = auStack_d8;
            lVar5 = lStack_1e8;
            if (uVar6 == 0) goto LAB_007859a2;
          }
          dVar23 = *(double *)(lVar10 + -8 + uVar12 * -0x28);
          if (dVar23 <= _DAT_003566d8) {
LAB_00785e83:
            if (dVar23 <= _DAT_003566d8) {
              *(undefined1 *)(lStack_1c0 + 0x29c) = 2;
              *(undefined1 *)(lStack_1c0 + 0x29e) = 8;
              lVar10 = (*(code *)
                         PTR__ZN15future_backtest8Customer8customer7Account5trade17hc6e81bcffe8e716eE_019fbe08
                       )(uStack_1d8,uStack_1d0,dStack_1e0,plStack_178,uStack_1c8,lStack_1e8,
                         lStack_1c0);
            }
            else {
              *(undefined1 *)(lStack_1c0 + 0x29c) = 1;
              uStack_180 = 0;
              *(char *)(lStack_1c0 + 0x29e) =
                   ((*(byte *)(lStack_1c0 + 0x297) & 1) != 0) * '\x03' + '\x05';
              dStack_188 = dVar23;
              lVar10 = (*(code *)
                         PTR__ZN15future_backtest8Customer8customer7Account5trade17hc6e81bcffe8e716eE_019fbe08
                       )(uStack_1d8,uStack_1d0,dStack_1e0,uVar9 ^ (ulong)dVar23,uStack_1c8,
                         lStack_1e8,lStack_1c0);
              if (lVar10 != 0) goto joined_r0x00785cfa;
              *(undefined1 *)(lVar15 + 0x29c) = 2;
              *(undefined1 *)(lVar15 + 0x29e) = 8;
              lVar10 = (*(code *)
                         PTR__ZN15future_backtest8Customer8customer7Account5trade17hc6e81bcffe8e716eE_019fbe08
                       )(uStack_1d8,uStack_1d0,dStack_1e0,(double)plStack_178 + dStack_188,
                         uStack_1c8,lVar5,lVar15);
            }
            goto LAB_0078618c;
          }
          dVar26 = dVar23;
          if (dVar23 <= 0.0) {
            dVar26 = 0.0;
          }
          if ((double)((ulong)dVar26 & _DAT_0034f910) < (double)((ulong)plStack_178 & _DAT_0034f910)
             ) goto LAB_00785e83;
          *(undefined1 *)(lStack_1c0 + 0x29c) = 1;
          bVar17 = *(byte *)(lStack_1c0 + 0x297) | 6;
          if ((double)plStack_178 <= 0.0) {
            bVar17 = ((*(byte *)(lStack_1c0 + 0x297) & 1) != 0) * '\x03' + 5;
          }
          *(byte *)(lStack_1c0 + 0x29e) = bVar17;
          lVar10 = (*(code *)
                     PTR__ZN15future_backtest8Customer8customer7Account5trade17hc6e81bcffe8e716eE_019fbe08
                   )(uStack_1d8,uStack_1d0,dStack_1e0,plStack_178,uStack_1c8,lStack_1e8,lStack_1c0);
LAB_0078618c:
          if (lVar10 != 0) goto joined_r0x00785cfa;
          goto joined_r0x00785cfa;
        }
LAB_007859a2:
        auVar28[0] = -(auVar19[0] == -1);
        auVar28[1] = -(auVar19[1] == -1);
        auVar28[2] = -(auVar19[2] == -1);
        auVar28[3] = -(auVar19[3] == -1);
        auVar28[4] = -(auVar19[4] == -1);
        auVar28[5] = -(auVar19[5] == -1);
        auVar28[6] = -(auVar19[6] == -1);
        auVar28[7] = -(auVar19[7] == -1);
        auVar28[8] = -(auVar19[8] == -1);
        auVar28[9] = -(auVar19[9] == -1);
        auVar28[10] = -(auVar19[10] == -1);
        auVar28[0xb] = -(auVar19[0xb] == -1);
        auVar28[0xc] = -(auVar19[0xc] == -1);
        auVar28[0xd] = -(auVar19[0xd] == -1);
        auVar28[0xe] = -(auVar19[0xe] == -1);
        bVar2 = auVar19[0xf] == -1;
        auVar28[0xf] = -bVar2;
        if ((((((((((((((((auVar28 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                         (auVar28 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar28 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar28 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar28 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar28 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar28 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar28 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar28 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar28 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar28 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar28 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar28 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar28 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar28 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar2)
        goto LAB_00785e61;
        uVar9 = uVar9 + lVar15 + 0x10;
        lVar15 = lVar15 + 0x10;
      } while( true );
    }
  }
  else {
    puVar14 = &UNK_01936e10;
    if (*(long *)(param_3 + 0x998) != 0) {
      uVar9 = _ZN4core4hash11BuildHasher8hash_one17hec92e4315c4796f5E(param_3 + 0x9a0,&lStack_1a0);
      uVar4 = uStack_198;
      puVar14 = PTR_bcmp_019fbf00;
      lVar10 = *(long *)(param_3 + 0x980);
      uVar12 = *(ulong *)(param_3 + 0x988);
      bVar17 = (byte)(uVar9 >> 0x39);
      auVar19 = ZEXT216(CONCAT11(bVar17,bVar17));
      auVar19 = pshuflw(auVar19,auVar19,0);
      uVar18 = auVar19._0_4_;
      auVar25._4_4_ = uVar18;
      auVar25._0_4_ = uVar18;
      auVar25._8_4_ = uVar18;
      auVar25._12_4_ = uVar18;
      lVar15 = 0;
      while( true ) {
        auVar19 = *(undefined1 (*) [16])(lVar10 + (uVar9 & uVar12));
        auVar22[0] = -(auVar19[0] == auVar25[0]);
        auVar22[1] = -(auVar19[1] == auVar25[1]);
        auVar22[2] = -(auVar19[2] == auVar25[2]);
        auVar22[3] = -(auVar19[3] == auVar25[3]);
        auVar22[4] = -(auVar19[4] == auVar25[4]);
        auVar22[5] = -(auVar19[5] == auVar25[5]);
        auVar22[6] = -(auVar19[6] == auVar25[6]);
        auVar22[7] = -(auVar19[7] == auVar25[7]);
        auVar22[8] = -(auVar19[8] == auVar25[8]);
        auVar22[9] = -(auVar19[9] == auVar25[9]);
        auVar22[10] = -(auVar19[10] == auVar25[10]);
        auVar22[0xb] = -(auVar19[0xb] == auVar25[0xb]);
        auVar22[0xc] = -(auVar19[0xc] == auVar25[0xc]);
        auVar22[0xd] = -(auVar19[0xd] == auVar25[0xd]);
        auVar22[0xe] = -(auVar19[0xe] == auVar25[0xe]);
        auVar22[0xf] = -(auVar19[0xf] == auVar25[0xf]);
        uVar6 = (ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
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
                (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe | (ushort)(auVar22[0xf] >> 7) << 0xf;
        uVar9 = uVar9 & uVar12;
        dVar26 = (double)(ulong)uVar6;
        lVar5 = lStack_1b8;
        uVar8 = uStack_1a8;
        dVar23 = dStack_188;
        auVar30 = auStack_d8;
        while (lStack_1b8 = lVar15, dStack_188 = dVar26, auStack_d8 = auVar19, uStack_1a8 = uVar9,
              uVar6 != 0) {
          uVar3 = 0;
          for (uVar11 = SUB84(dStack_188,0); (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
            uVar3 = uVar3 + 1;
          }
          uVar9 = uVar3 + uStack_1a8 & uVar12;
          lStack_1e8 = param_3;
          uStack_1b0 = uVar12;
          auStack_c8 = auVar25;
          if ((lStack_190 == *(long *)(lVar10 + -0x18 + uVar9 * -0x28)) &&
             (iVar7 = (*(code *)puVar14)(uVar4,*(undefined8 *)(uVar9 * -0x28 + lVar10 + -0x20),
                                         lStack_190), lVar15 = lStack_1c0, lVar5 = lStack_1e8,
             iVar7 == 0)) {
            dVar23 = *(double *)(lVar10 + -8 + uVar9 * -0x28);
            if (dVar23 < _DAT_00355278) {
              dVar26 = dVar23;
              if (0.0 <= dVar23) {
                dVar26 = 0.0;
              }
              if ((double)((ulong)plStack_178 & _DAT_0034f910) <=
                  (double)((ulong)dVar26 & _DAT_0034f910)) {
                *(undefined1 *)(lStack_1c0 + 0x29c) = 3;
                bVar17 = *(byte *)(lStack_1c0 + 0x297) | 6;
                if ((double)plStack_178 <= 0.0) {
                  bVar17 = ((*(byte *)(lStack_1c0 + 0x297) & 1) != 0) * '\x03' + 5;
                }
                *(byte *)(lStack_1c0 + 0x29e) = bVar17;
                lVar10 = (*(code *)
                           PTR__ZN15future_backtest8Customer8customer7Account5trade17hc6e81bcffe8e716eE_019fbe08
                         )(uStack_1d8,uStack_1d0,dStack_1e0,plStack_178,uStack_1c8,lStack_1e8,
                           lStack_1c0);
                goto LAB_0078618c;
              }
            }
            if (_DAT_00355278 <= dVar23) {
              *(undefined1 *)(lStack_1c0 + 0x29c) = 0;
              *(undefined1 *)(lStack_1c0 + 0x29e) = 7;
              lVar10 = (*(code *)
                         PTR__ZN15future_backtest8Customer8customer7Account5trade17hc6e81bcffe8e716eE_019fbe08
                       )(uStack_1d8,uStack_1d0,dStack_1e0,lStack_1e8,lStack_1c0);
            }
            else {
              uStack_180 = 0;
              uVar12 = _DAT_00354010 ^ (ulong)dVar23;
              *(undefined1 *)(lStack_1c0 + 0x29c) = 3;
              *(byte *)(lStack_1c0 + 0x29e) = *(byte *)(lStack_1c0 + 0x297) | 6;
              dStack_188 = dVar23;
              lVar10 = (*(code *)
                         PTR__ZN15future_backtest8Customer8customer7Account5trade17hc6e81bcffe8e716eE_019fbe08
                       )(uStack_1d8,uStack_1d0,dStack_1e0,uVar12,uStack_1c8,lStack_1e8,lStack_1c0);
              if (lVar10 != 0) goto joined_r0x00785cfa;
              *(undefined1 *)(lVar15 + 0x29c) = 0;
              *(undefined1 *)(lVar15 + 0x29e) = 7;
              lVar10 = (*(code *)
                         PTR__ZN15future_backtest8Customer8customer7Account5trade17hc6e81bcffe8e716eE_019fbe08
                       )(uStack_1d8,uStack_1d0,dStack_1e0,(double)plStack_178 + dStack_188,
                         uStack_1c8,lVar5,lVar15);
            }
            goto LAB_0078618c;
          }
          iVar7 = SUB84(dStack_188,0) + -1;
          uVar6 = (ushort)iVar7 & SUB82(dStack_188,0);
          uVar9 = uStack_1a8;
          auVar19 = auStack_d8;
          dVar26 = (double)(ulong)CONCAT22((short)((uint)iVar7 >> 0x10),uVar6);
          uVar12 = uStack_1b0;
          lVar15 = lStack_1b8;
          param_3 = lStack_1e8;
          auVar25 = auStack_c8;
          lVar5 = lStack_1b8;
          uVar8 = uStack_1a8;
          dVar23 = dStack_188;
          auVar30 = auStack_d8;
        }
        auVar29[0] = -(auStack_d8[0] == -1);
        auVar29[1] = -(auStack_d8[1] == -1);
        auVar29[2] = -(auStack_d8[2] == -1);
        auVar29[3] = -(auStack_d8[3] == -1);
        auVar29[4] = -(auStack_d8[4] == -1);
        auVar29[5] = -(auStack_d8[5] == -1);
        auVar29[6] = -(auStack_d8[6] == -1);
        auVar29[7] = -(auStack_d8[7] == -1);
        auVar29[8] = -(auStack_d8[8] == -1);
        auVar29[9] = -(auStack_d8[9] == -1);
        auVar29[10] = -(auStack_d8[10] == -1);
        auVar29[0xb] = -(auStack_d8[0xb] == -1);
        auVar29[0xc] = -(auStack_d8[0xc] == -1);
        auVar29[0xd] = -(auStack_d8[0xd] == -1);
        auVar29[0xe] = -(auStack_d8[0xe] == -1);
        bVar2 = auStack_d8[0xf] == -1;
        auVar29[0xf] = -bVar2;
        dStack_188 = dVar23;
        auStack_d8 = auVar30;
        if ((((((((((((((((auVar29 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                         (auVar29 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar29 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar29 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar29 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar29 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar29 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar29 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar29 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar29 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar29 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar29 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar29 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar29 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar29 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar2) break;
        uVar9 = uStack_1a8 + lStack_1b8 + 0x10;
        lVar15 = lStack_1b8 + 0x10;
        lStack_1b8 = lVar5;
        uStack_1a8 = uVar8;
      }
      puVar14 = &UNK_01936e10;
      lStack_1b8 = lVar5;
      uStack_1a8 = uVar8;
    }
  }
LAB_00785e7b:
  (*(code *)PTR__ZN4core6option13unwrap_failed17h4154e01d14eb4879E_019fbeb0)(puVar14);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
LAB_00785e61:
  puVar14 = &UNK_01936df8;
  goto LAB_00785e7b;
}


