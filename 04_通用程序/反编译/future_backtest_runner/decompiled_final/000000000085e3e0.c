// ELF address 0x000000000085e3e0; future_backtest::Exchange::exchange::Exchange::exchange_deal_with_dealing_order

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
_ZN15future_backtest8Exchange8exchange8Exchange32exchange_deal_with_dealing_order17h7d284166eec23996E
          (long param_1,ulong *param_2)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 (*pauVar14) [16];
  undefined1 (*pauVar15) [16];
  undefined8 *puStack_340;
  code *pcStack_338;
  undefined **ppuStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  ulong uStack_310;
  ulong uStack_308;
  undefined1 auStack_300 [24];
  undefined1 auStack_2e8 [24];
  undefined *puStack_2d0;
  undefined *puStack_2c8;
  undefined8 **ppuStack_2c0;
  undefined *puStack_2b8;
  ulong *puStack_2b0;
  code *pcStack_2a8;
  
  puStack_2d0 = (undefined *)(param_1 + 0xa0);
  ppuStack_2c0 = (undefined8 **)(param_1 + 0x98);
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  puStack_2c8 = 
  PTR__ZN4core3fmt5float52__LT_impl_u20_core__fmt__Display_u20_for_u20_f64_GT_3fmt17hd7443fdfc6565159E_019fc2c0
  ;
  puStack_2b8 = 
  PTR__ZN4core3fmt5float52__LT_impl_u20_core__fmt__Display_u20_for_u20_f64_GT_3fmt17hd7443fdfc6565159E_019fc2c0
  ;
  puStack_2b0 = &uStack_310;
  pcStack_2a8 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h4d57bdf6d260acb4E;
  puStack_340 = (undefined8 *)&UNK_01946168;
  pcStack_338 = (code *)0x3;
  uStack_320 = 0;
  ppuStack_330 = &puStack_2d0;
  uStack_328 = 3;
  uStack_310 = uVar3;
  uStack_308 = uVar4;
  (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_019fc058)
            (auStack_300,&puStack_340);
  (*(code *)PTR__ZN15future_backtest7Logging7logging11BacktestLog5debug17hfb188531b1342676E_019fc2d8
  )(param_1,auStack_300);
  pcStack_338 = 
  _ZN97__LT_future_backtest__Customer__order_store__ExchangeDealingOrder_u20_as_u20_core__fmt__Debug_GT_3fmt17h336de0d0f92bec47E
  ;
  puStack_2d0 = &UNK_01946198;
  puStack_2c8 = (undefined *)0x1;
  puStack_2b0 = (ulong *)0x0;
  puStack_2b8 = (undefined *)0x1;
  puStack_340 = (undefined8 *)(param_1 + 0x108);
  ppuStack_2c0 = &puStack_340;
  (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_019fc058)
            (auStack_2e8,&puStack_2d0);
  (*(code *)PTR__ZN15future_backtest7Logging7logging11BacktestLog5debug17hfb188531b1342676E_019fc2d8
  )(param_1,auStack_2e8);
  lVar11 = *(long *)(param_1 + 0x120);
  if (lVar11 != 0) {
    pauVar15 = *(undefined1 (**) [16])(param_1 + 0x108);
    pauVar14 = pauVar15 + 1;
    auVar1 = *pauVar15;
    uVar9 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
    do {
      if ((short)uVar9 == 0) {
        do {
          auVar1 = *pauVar14;
          pauVar15 = pauVar15 + -0x30;
          pauVar14 = pauVar14 + 1;
          uVar9 = (uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
        } while (uVar9 == 0xffff);
        uVar9 = ~uVar9;
      }
      uVar7 = 0;
      for (uVar8 = uVar9; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
        uVar7 = uVar7 + 1;
      }
      if (((uVar4 == *(ulong *)pauVar15[(ulong)uVar7 * -3 + -2]) &&
          (iVar10 = (*(code *)PTR_bcmp_019fbf00)
                              (uVar3,*(undefined8 *)(pauVar15[(ulong)uVar7 * -3 + -3] + 8),uVar4),
          iVar10 == 0)) && (*(long *)(pauVar15[(ulong)uVar7 * -3 + -1] + 8) != 0)) {
        lVar12 = *(long *)pauVar15[(ulong)uVar7 * -3 + -1];
        lVar13 = *(long *)(pauVar15[(ulong)uVar7 * -3 + -1] + 8) * 0x2a0;
        do {
          if (*(char *)(lVar12 + 0x29d) == '\0') {
            uVar5 = *(undefined8 *)(lVar12 + 0x88);
            uVar6 = *(undefined8 *)(lVar12 + 0x90);
            if ((double)(*(ulong *)(lVar12 + 0x100) & _DAT_0034f910) + _DAT_00355278 <=
                (double)(*(ulong *)(lVar12 + 0x178) & _DAT_0034f910)) {
              (*(code *)
                PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17he3b8c48364a1d3a4E_019fc038
              )(&puStack_2d0,lVar12 + 0x50,&UNK_019461a8);
              (*(code *)
                PTR__ZN15future_backtest8Customer11order_store10OrderStore12remove_order17he2cda499837d04c9E_019fc300
              )(param_1 + 0xa8,uVar5,uVar6,&puStack_2d0);
            }
            else {
              (*(code *)
                PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17he3b8c48364a1d3a4E_019fc038
              )(&puStack_340,lVar12 + 0x50,&UNK_019461c0);
              _ZN88__LT_future_backtest__Order__trade_order__TradingOrder_u20_as_u20_core__clone__Clone_GT_5clone17h915ade41e7883ea9E_llvm_3900561041070810133
                        (&puStack_2d0,lVar12);
              (*(code *)
                PTR__ZN15future_backtest8Customer11order_store10OrderStore12modify_order17h4daeebf95be03ae8E_019fc2f8
              )(param_1 + 0xa8,uVar5,uVar6,&puStack_340,&puStack_2d0);
            }
          }
          lVar12 = lVar12 + 0x2a0;
          lVar13 = lVar13 + -0x2a0;
        } while (lVar13 != 0);
      }
      uVar9 = uVar9 - 1 & uVar9;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  if ((uVar2 & 0x7fffffffffffffff) != 0) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_019fbb20)(uVar3,uVar2,1);
  }
  return 0;
}


