// ELF address 0x00000000009069c0; future_backtest::Exchange::exchange::Exchange::exchange_deal_with_running_order

undefined8
_ZN15future_backtest8Exchange8exchange8Exchange32exchange_deal_with_running_order17h57463609bdbdc74eE
          (long param_1,ulong *param_2)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  undefined **ppuVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  undefined1 (*pauVar12) [16];
  long lVar13;
  undefined1 (*pauVar14) [16];
  ulong *puVar15;
  undefined8 *puStack_210;
  undefined1 (*pauStack_208) [16];
  undefined **ppuStack_200;
  undefined *puStack_1f8;
  ulong *puStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  ulong uStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined *puStack_1a8;
  ulong uStack_1a0;
  undefined1 (*pauStack_198) [16];
  undefined1 (*pauStack_190) [16];
  long lStack_188;
  long lStack_180;
  undefined *puStack_178;
  code *pcStack_170;
  undefined8 **ppuStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 (*pauStack_148) [16];
  undefined **ppuStack_140;
  undefined8 uStack_138;
  long lStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  ulong uStack_110;
  ulong uStack_108;
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [160];
  
  uStack_1c0 = *(undefined8 *)(param_1 + 0xa0);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x98);
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uStack_1d0 = param_2[2];
  puStack_210 = &uStack_1c0;
  pauStack_208 = (undefined1 (*) [16])
                 PTR__ZN4core3fmt5float52__LT_impl_u20_core__fmt__Display_u20_for_u20_f64_GT_3fmt17hd7443fdfc6565159E_01aa7568
  ;
  ppuStack_200 = (undefined **)&uStack_1b8;
  puStack_1f8 = 
  PTR__ZN4core3fmt5float52__LT_impl_u20_core__fmt__Display_u20_for_u20_f64_GT_3fmt17hd7443fdfc6565159E_01aa7568
  ;
  puStack_1f0 = &uStack_110;
  pcStack_1e8 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h4d57bdf6d260acb4E;
  puStack_178 = &UNK_019f1018;
  pcStack_170 = (code *)0x3;
  uStack_158 = 0;
  ppuStack_168 = &puStack_210;
  uStack_160 = 3;
  uStack_110 = uVar4;
  uStack_108 = uStack_1d0;
  (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_01aa6d80)
            (auStack_100,&puStack_178);
  (*(code *)PTR__ZN15future_backtest7Logging7logging11BacktestLog5debug17hfb188531b1342676E_01aa7580
  )(param_1,auStack_100);
  puStack_1a8 = (undefined *)(param_1 + 0xd8);
  pcStack_170 = 
  _ZN97__LT_future_backtest__Customer__order_store__ExchangeRunningOrder_u20_as_u20_core__fmt__Debug_GT_3fmt17h7cc090798bf12a9dE
  ;
  puStack_210 = (undefined8 *)&UNK_019f1048;
  pauStack_208 = (undefined1 (*) [16])0x1;
  puStack_1f0 = (ulong *)0x0;
  puStack_1f8 = (undefined *)0x1;
  ppuStack_200 = &puStack_178;
  puStack_178 = puStack_1a8;
  (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_01aa6d80)
            (auStack_e8,&puStack_210);
  (*(code *)PTR__ZN15future_backtest7Logging7logging11BacktestLog5debug17hfb188531b1342676E_01aa7580
  )(param_1,auStack_e8);
  lVar13 = *(long *)(param_1 + 0x80);
  lStack_1d8 = param_1;
  if (lVar13 != 0) {
    pauVar1 = (undefined1 (*) [16])(param_1 + 0x108);
    pauVar14 = *(undefined1 (**) [16])(param_1 + 0x68);
    pauVar12 = pauVar14 + 1;
    auVar2 = *pauVar14;
    uVar8 = ~(uint)(ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar2[0xf] >> 7) << 0xf);
    do {
      if ((short)uVar8 == 0) {
        do {
          auVar2 = *pauVar12;
          pauVar14 = pauVar14 + -0x4d8;
          pauVar12 = pauVar12 + 1;
          uVar8 = (uint)(ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar2[0xf] >> 7) << 0xf);
        } while (uVar8 == 0xffff);
        uVar8 = ~uVar8;
      }
      uVar5 = 0;
      for (uVar6 = uVar8; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
        uVar5 = uVar5 + 1;
      }
      lVar11 = (ulong)uVar5 * -0x4d8;
      if ((uStack_1d0 == *(ulong *)((long)pauVar14 + lVar11 + -0x4c8)) &&
         (iVar9 = (*(code *)PTR_bcmp_01aa6eb8)
                            (uVar4,*(undefined8 *)((long)pauVar14 + lVar11 + -0x4d0),uStack_1d0),
         iVar9 == 0)) {
        uStack_1a0 = (ulong)uVar8;
        pauStack_198 = pauVar12;
        pauStack_190 = pauVar14;
        lStack_188 = lVar13;
        (*(code *)PTR_memcpy_01aa6b48)(auStack_d0,(long)pauVar14 + lVar11 + -0xa8,0xa0);
        (*(code *)
          PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17he3b8c48364a1d3a4E_01aa6c80
        )(&puStack_178,(long)pauVar14 + lVar11 + -0x4d8,&UNK_019f1058);
        (*(code *)
          PTR__ZN15future_backtest8Exchange7matched46matching_depth_position_ioc_with_running_order17hf56b1f0cd10bc11eE_01aa7ee0
        )(uStack_1c0,(int)uStack_1b8,&puStack_210,auStack_d0,&puStack_178,puStack_1a8);
        if ((puStack_210 == (undefined8 *)0x0) && (pauStack_208 != (undefined1 (*) [16])0x0)) {
          pcStack_128 = pcStack_1e8;
          uStack_120 = uStack_1e0;
          uStack_138 = puStack_1f8;
          lStack_130 = (long)puStack_1f0;
          pauStack_148 = pauStack_208;
          ppuStack_140 = ppuStack_200;
          lVar13 = *(long *)(lStack_1d8 + 0x110);
          if (lVar13 != 0) {
            lStack_1b0 = lVar13;
            if (*(long *)(lStack_1d8 + 0x120) != 0) {
              pauVar14 = *(undefined1 (**) [16])*pauVar1;
              auVar2 = *pauVar14;
              uVar8 = ~(uint)(ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                                      (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                                      (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                                      (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                                      (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                                      (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                                      (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                                      (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                                      (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                                      (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                                      (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                                      (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                                      (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                                      (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                                      (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                                     (ushort)(byte)(auVar2[0xf] >> 7) << 0xf);
              pauVar12 = pauVar14 + 1;
              lVar13 = *(long *)(lStack_1d8 + 0x120);
              do {
                if ((short)uVar8 == 0) {
                  do {
                    auVar2 = *pauVar12;
                    pauVar14 = pauVar14 + -0x30;
                    pauVar12 = pauVar12 + 1;
                    uVar8 = (uint)(ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                                           (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                                           (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                                           (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                                           (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                                           (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                                           (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                                           (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                                           (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                                           (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                                           (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                                           (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                                           (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                                           (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                                           (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                                          (ushort)(byte)(auVar2[0xf] >> 7) << 0xf);
                  } while (uVar8 == 0xffff);
                  uVar8 = ~uVar8;
                }
                uVar5 = 0;
                for (uVar6 = uVar8; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
                  uVar5 = uVar5 + 1;
                }
                uVar10 = (ulong)uVar5;
                if (*(long *)pauVar14[uVar10 * -3 + -3] != 0) {
                  (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20)
                            (*(undefined8 *)(pauVar14[uVar10 * -3 + -3] + 8),
                             *(long *)pauVar14[uVar10 * -3 + -3],1);
                }
                uVar8 = uVar8 - 1 & uVar8;
                lStack_180 = lVar13 + -1;
                lStack_1c8 = *(long *)pauVar14[uVar10 * -3 + -1];
                lVar13 = lStack_1c8;
                for (lVar11 = *(long *)(pauVar14[uVar10 * -3 + -1] + 8) + 1; lVar11 != 1;
                    lVar11 = lVar11 + -1) {
                  _ZN4core3ptr70drop_in_place_LT_future_backtest__Order__trade_order__TradingOrder_GT_17hb69872fb2d20e498E_llvm_1325298290625399205
                            (lVar13);
                  lVar13 = lVar13 + 0x2a0;
                }
                if (*(long *)(pauVar14[uVar10 * -3 + -2] + 8) != 0) {
                  (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20)
                            (lStack_1c8,*(long *)(pauVar14[uVar10 * -3 + -2] + 8) * 0x2a0,8);
                }
                lVar13 = lStack_180;
              } while (lStack_180 != 0);
            }
            lVar13 = lStack_1b0 * 0x31 + 0x41;
            if (lVar13 != 0) {
              (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20)
                        (*(long *)*pauVar1 + lStack_1b0 * -0x30 + -0x30,lVar13,0x10);
            }
          }
          auVar2._8_8_ = ppuStack_140;
          auVar2._0_8_ = pauStack_148;
          *(code **)(param_1 + 0x128) = pcStack_128;
          *(undefined8 *)(param_1 + 0x130) = uStack_120;
          *(undefined8 *)(param_1 + 0x118) = uStack_138;
          *(long *)(param_1 + 0x120) = lStack_130;
          *pauVar1 = auVar2;
        }
        ppuVar7 = ppuStack_200;
        if (((ulong)puStack_210 & 1) != 0) {
          if (puStack_210 == (undefined8 *)0x0) {
            if ((pauStack_208 != (undefined1 (*) [16])0x0) && (ppuStack_200 != (undefined **)0x0)) {
              if (puStack_1f0 != (ulong *)0x0) {
                auVar2 = *pauStack_208;
                uVar8 = ~(uint)(ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                                        (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                                        (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                                        (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                                        (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                                        (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                                        (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                                        (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                                        (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                                        (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                                        (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                                        (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                                        (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                                        (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                                        (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                                       (ushort)(byte)(auVar2[0xf] >> 7) << 0xf);
                pauVar12 = pauStack_208 + 1;
                pauVar14 = pauStack_208;
                puVar15 = puStack_1f0;
                do {
                  if ((short)uVar8 == 0) {
                    do {
                      auVar2 = *pauVar12;
                      pauVar14 = pauVar14 + -0x30;
                      pauVar12 = pauVar12 + 1;
                      uVar8 = (uint)(ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                                             (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                                             (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                                             (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                                             (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                                             (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                                             (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                                             (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                                             (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                                             (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                                             (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                                             (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                                             (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                                             (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                                             (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                                            (ushort)(byte)(auVar2[0xf] >> 7) << 0xf);
                    } while (uVar8 == 0xffff);
                    uVar8 = ~uVar8;
                  }
                  uVar5 = 0;
                  for (uVar6 = uVar8; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
                    uVar5 = uVar5 + 1;
                  }
                  _ZN4core3ptr125drop_in_place_LT__LP_alloc__string__String_C_alloc__vec__Vec_LT_future_backtest__Order__trade_order__TradingOrder_GT__RP__GT_17h50f6f0417d4b0e58E_llvm_4094939851438509727
                            (pauVar14 + (ulong)uVar5 * -3 + -3);
                  uVar8 = uVar8 - 1 & uVar8;
                  puVar15 = (ulong *)((long)puVar15 + -1);
                } while (puVar15 != (ulong *)0x0);
              }
              lVar13 = (long)ppuVar7 * 0x31 + 0x41;
              if (lVar13 != 0) {
                (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20)
                          (pauStack_208 + (long)ppuVar7 * -3 + -3,lVar13,0x10);
              }
            }
          }
          else {
            (*(code *)
              PTR__ZN6anyhow5error65__LT_impl_u20_core__ops__drop__Drop_u20_for_u20_anyhow__Error_GT_4drop17h412df20aa64642a3E_01aa6f68
            )(&pauStack_208);
          }
        }
        uVar8 = (uint)uStack_1a0;
        pauVar12 = pauStack_198;
        pauVar14 = pauStack_190;
        lVar13 = lStack_188;
      }
      uVar8 = uVar8 - 1 & uVar8;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  if ((uVar3 & 0x7fffffffffffffff) != 0) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20)(uVar4,uVar3,1);
  }
  return 0;
}


