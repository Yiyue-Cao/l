// ELF address 0x0000000000907490; future_backtest::Exchange::exchange::Exchange::exchange_deal_with_removing_order

/* WARNING: Removing unreachable block (ram,0x00a0763c) */
/* WARNING: Removing unreachable block (ram,0x00a0766d) */
/* WARNING: Removing unreachable block (ram,0x00a07690) */
/* WARNING: Removing unreachable block (ram,0x00a076a0) */
/* WARNING: Removing unreachable block (ram,0x00a076ba) */
/* WARNING: Removing unreachable block (ram,0x00a07677) */
/* WARNING: Removing unreachable block (ram,0x00a076c1) */
/* WARNING: Removing unreachable block (ram,0x00a076c6) */
/* WARNING: Removing unreachable block (ram,0x00a076e8) */
/* WARNING: Removing unreachable block (ram,0x00a07700) */
/* WARNING: Removing unreachable block (ram,0x00a07739) */
/* WARNING: Removing unreachable block (ram,0x00a07650) */

undefined8
_ZN15future_backtest8Exchange8exchange8Exchange33exchange_deal_with_removing_order17hd515d44764047bc6E
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
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined1 (*pauVar14) [16];
  long lVar15;
  undefined1 (*pauStack_110) [16];
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 **ppuStack_c0;
  undefined *puStack_b8;
  ulong *puStack_b0;
  code *pcStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  undefined8 *puStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  puStack_d0 = (undefined *)(param_1 + 0xa0);
  ppuStack_c0 = (undefined8 **)(param_1 + 0x98);
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  puStack_c8 = 
  PTR__ZN4core3fmt5float52__LT_impl_u20_core__fmt__Display_u20_for_u20_f64_GT_3fmt17hd7443fdfc6565159E_01aa7568
  ;
  puStack_b8 = 
  PTR__ZN4core3fmt5float52__LT_impl_u20_core__fmt__Display_u20_for_u20_f64_GT_3fmt17hd7443fdfc6565159E_01aa7568
  ;
  puStack_b0 = &uStack_a0;
  pcStack_a8 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h4d57bdf6d260acb4E;
  puStack_90 = (undefined8 *)&UNK_019f10e0;
  pcStack_88 = (code *)0x3;
  uStack_70 = 0;
  ppuStack_80 = &puStack_d0;
  uStack_78 = 3;
  uStack_a0 = uVar3;
  uStack_98 = uVar4;
  (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_01aa6d80)
            (auStack_60,&puStack_90);
  (*(code *)PTR__ZN15future_backtest7Logging7logging11BacktestLog5debug17hfb188531b1342676E_01aa7580
  )(param_1,auStack_60);
  pcStack_88 = 
  _ZN98__LT_future_backtest__Customer__order_store__ExchangeRemovingOrder_u20_as_u20_core__fmt__Debug_GT_3fmt17h702f2cbe456df999E
  ;
  puStack_d0 = &UNK_019f1110;
  puStack_c8 = (undefined *)0x1;
  puStack_b0 = (ulong *)0x0;
  puStack_b8 = (undefined *)0x1;
  ppuStack_c0 = &puStack_90;
  puStack_90 = (undefined8 *)(param_1 + 0x138);
  (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_01aa6d80)
            (auStack_48,&puStack_d0);
  (*(code *)PTR__ZN15future_backtest7Logging7logging11BacktestLog5debug17hfb188531b1342676E_01aa7580
  )(param_1,auStack_48);
  lVar12 = *(long *)(param_1 + 0x150);
  if (lVar12 != 0) {
    pauStack_110 = *(undefined1 (**) [16])(param_1 + 0x138);
    pauVar14 = pauStack_110 + 1;
    auVar1 = *pauStack_110;
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
          pauStack_110 = pauStack_110 + -0x30;
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
      uVar11 = (ulong)uVar7;
      if (uVar4 == *(ulong *)pauStack_110[uVar11 * -3 + -2]) {
        iVar10 = (*(code *)PTR_bcmp_01aa6eb8)
                           (uVar3,*(undefined8 *)(pauStack_110[uVar11 * -3 + -3] + 8),uVar4);
        if ((iVar10 == 0) && (*(long *)(pauStack_110[uVar11 * -3 + -1] + 8) != 0)) {
          lVar13 = *(long *)pauStack_110[uVar11 * -3 + -1];
          lVar15 = *(long *)(pauStack_110[uVar11 * -3 + -1] + 8) * 0x18;
          do {
            uVar5 = *(undefined8 *)(pauStack_110[uVar11 * -3 + -3] + 8);
            uVar6 = *(undefined8 *)pauStack_110[uVar11 * -3 + -2];
            (*(code *)
              PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17he3b8c48364a1d3a4E_01aa6c80
            )(&puStack_d0,lVar13,&UNK_019f1120);
            (*(code *)
              PTR__ZN15future_backtest8Customer11order_store10OrderStore12remove_order17he2cda499837d04c9E_01aa75a8
            )(param_1 + 0xa8,uVar5,uVar6,&puStack_d0);
            lVar13 = lVar13 + 0x18;
            lVar15 = lVar15 + -0x18;
          } while (lVar15 != 0);
        }
      }
      uVar9 = uVar9 - 1 & uVar9;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  if ((uVar2 & 0x7fffffffffffffff) != 0) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20)(uVar3,uVar2,1);
  }
  return 0;
}


