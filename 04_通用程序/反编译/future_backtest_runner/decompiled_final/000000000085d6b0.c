// ELF address 0x000000000085d6b0; future_backtest::Exchange::exchange::Exchange::exchange_update_init_by_codes

undefined8
_ZN15future_backtest8Exchange8exchange8Exchange29exchange_update_init_by_codes17h323e6ac981dc0b99E
          (long param_1,long *param_2)

{
  long *plVar1;
  undefined1 auVar2 [16];
  long lVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  undefined1 (*pauVar10) [16];
  undefined8 *puVar11;
  undefined1 (*pauVar12) [16];
  uint uVar13;
  long lVar14;
  long lVar15;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  long lStack_68;
  undefined1 auStack_60 [24];
  undefined8 auStack_48 [3];
  
  _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17h50a5061b4b6652f4E
            (auStack_60,param_2,anon_ba86f49aa5aaa651eac02428852ec324_242_llvm_3900561041070810133);
  (*(code *)
    PTR__ZN15future_backtest8Exchange11market_info10MarketInfo3new17hb3c84cc17e241ed3E_019fcde0)
            (&lStack_a8,auStack_60);
  _ZN79__LT_hashbrown__raw__RawTable_LT_T_C_A_GT__u20_as_u20_core__ops__drop__Drop_GT_4drop17h93feca8850eadb55E
            ((long *)(param_1 + 0x68));
  *(undefined4 *)(param_1 + 0x98) = uStack_78;
  *(undefined4 *)(param_1 + 0x9c) = uStack_74;
  *(undefined4 *)(param_1 + 0xa0) = uStack_70;
  *(undefined4 *)(param_1 + 0xa4) = uStack_6c;
  *(undefined4 *)(param_1 + 0x88) = uStack_88;
  *(undefined4 *)(param_1 + 0x8c) = uStack_84;
  *(undefined4 *)(param_1 + 0x90) = uStack_80;
  *(undefined4 *)(param_1 + 0x94) = uStack_7c;
  *(undefined4 *)(param_1 + 0x78) = uStack_98;
  *(undefined4 *)(param_1 + 0x7c) = uStack_94;
  *(undefined4 *)(param_1 + 0x80) = uStack_90;
  *(undefined4 *)(param_1 + 0x84) = uStack_8c;
  *(long *)(param_1 + 0x68) = lStack_a8;
  *(undefined8 *)(param_1 + 0x70) = uStack_a0;
  _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17h50a5061b4b6652f4E
            (auStack_60,param_2,anon_ba86f49aa5aaa651eac02428852ec324_243_llvm_3900561041070810133);
  (*(code *)
    PTR__ZN15future_backtest8Customer11order_store10OrderStore3new17h45accad775c7bbf8E_019fcd80)
            (&lStack_a8,auStack_60);
  plVar1 = (long *)(param_1 + 0xa8);
  lVar15 = *(long *)(param_1 + 0xb0);
  if (lVar15 != 0) {
    lVar9 = *(long *)(param_1 + 0xc0);
    if (lVar9 != 0) {
      pauVar10 = (undefined1 (*) [16])*plVar1;
      auVar2 = *pauVar10;
      uVar13 = ~(uint)(ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
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
      pauVar12 = pauVar10 + 1;
      do {
        if ((short)uVar13 == 0) {
          do {
            auVar2 = *pauVar12;
            pauVar10 = pauVar10 + -0x48;
            pauVar12 = pauVar12 + 1;
            uVar13 = (uint)(ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
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
          } while (uVar13 == 0xffff);
          uVar13 = ~uVar13;
        }
        uVar4 = 0;
        for (uVar6 = uVar13; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        _ZN4core3ptr375drop_in_place_LT__LP_alloc__string__String_C_std__collections__hash__map__HashMap_LT_future_backtest__Exchange__trade_mode__OrderSide_C_alloc__collections__btree__map__BTreeMap_LT_ordered_float__OrderedFloat_LT_f64_GT__C_alloc__collections__btree__map__BTreeMap_LT_ordered_float__OrderedFloat_LT_f64_GT__C_future_backtest__Order__trade_order__TradingOrder_GT__GT__GT__RP__GT_17h2477be8083445c57E_llvm_4094939851438509727
                  ((ulong)uVar4 * -0x48 + -0x48 + (long)pauVar10);
        uVar13 = uVar13 - 1 & uVar13;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    uVar8 = lVar15 * 0x48 + 0x57U & 0xfffffffffffffff0;
    lVar15 = lVar15 + uVar8 + 0x11;
    if (lVar15 != 0) {
      (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_019fbb20)
                (*plVar1 - uVar8,lVar15,0x10);
    }
  }
  *(undefined4 *)(param_1 + 200) = uStack_88;
  *(undefined4 *)(param_1 + 0xcc) = uStack_84;
  *(undefined4 *)(param_1 + 0xd0) = uStack_80;
  *(undefined4 *)(param_1 + 0xd4) = uStack_7c;
  *(undefined4 *)(param_1 + 0xb8) = uStack_98;
  *(undefined4 *)(param_1 + 0xbc) = uStack_94;
  *(undefined4 *)(param_1 + 0xc0) = uStack_90;
  *(undefined4 *)(param_1 + 0xc4) = uStack_8c;
  *plVar1 = lStack_a8;
  *(undefined8 *)(param_1 + 0xb0) = uStack_a0;
  _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17h50a5061b4b6652f4E
            (auStack_60,param_2,anon_ba86f49aa5aaa651eac02428852ec324_244_llvm_3900561041070810133);
  (*(code *)
    PTR__ZN15future_backtest8Customer11order_store20ExchangeRunningOrder3new17hb41adeb87e04fce5E_019fcd98
  )(&lStack_a8,auStack_60);
  plVar1 = (long *)(param_1 + 0xd8);
  lVar15 = *(long *)(param_1 + 0xe0);
  if (lVar15 != 0) {
    lVar9 = *(long *)(param_1 + 0xf0);
    if (lVar9 != 0) {
      pauVar10 = (undefined1 (*) [16])*plVar1;
      auVar2 = *pauVar10;
      uVar13 = ~(uint)(ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
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
      pauVar12 = pauVar10 + 1;
      do {
        if ((short)uVar13 == 0) {
          do {
            auVar2 = *pauVar12;
            pauVar10 = pauVar10 + -0x48;
            pauVar12 = pauVar12 + 1;
            uVar13 = (uint)(ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
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
          } while (uVar13 == 0xffff);
          uVar13 = ~uVar13;
        }
        uVar4 = 0;
        for (uVar6 = uVar13; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        _ZN4core3ptr286drop_in_place_LT__LP_alloc__string__String_C_std__collections__hash__map__HashMap_LT_future_backtest__Exchange__trade_mode__OrderSide_C_alloc__collections__btree__map__BTreeMap_LT_ordered_float__OrderedFloat_LT_f64_GT__C_future_backtest__Order__trade_order__TradingOrder_GT__GT__RP__GT_17h5127d5bd2efe0789E_llvm_4094939851438509727
                  ((ulong)uVar4 * -0x48 + -0x48 + (long)pauVar10);
        uVar13 = uVar13 - 1 & uVar13;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    uVar8 = lVar15 * 0x48 + 0x57U & 0xfffffffffffffff0;
    lVar15 = lVar15 + uVar8 + 0x11;
    if (lVar15 != 0) {
      (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_019fbb20)
                (*plVar1 - uVar8,lVar15,0x10);
    }
  }
  *(undefined4 *)(param_1 + 0xf8) = uStack_88;
  *(undefined4 *)(param_1 + 0xfc) = uStack_84;
  *(undefined4 *)(param_1 + 0x100) = uStack_80;
  *(undefined4 *)(param_1 + 0x104) = uStack_7c;
  *(undefined4 *)(param_1 + 0xe8) = uStack_98;
  *(undefined4 *)(param_1 + 0xec) = uStack_94;
  *(undefined4 *)(param_1 + 0xf0) = uStack_90;
  *(undefined4 *)(param_1 + 0xf4) = uStack_8c;
  *plVar1 = lStack_a8;
  *(undefined8 *)(param_1 + 0xe0) = uStack_a0;
  auStack_48[0] = 0x8000000000000000;
  (*(code *)
    PTR__ZN15future_backtest8Customer11order_store20ExchangeDealingOrder3new17h16476edd510abfd5E_019fcdb0
  )(&lStack_a8,auStack_48);
  plVar1 = (long *)(param_1 + 0x108);
  lVar15 = *(long *)(param_1 + 0x110);
  if (lVar15 != 0) {
    lVar9 = *(long *)(param_1 + 0x120);
    if (lVar9 != 0) {
      pauVar10 = (undefined1 (*) [16])*plVar1;
      auVar2 = *pauVar10;
      uVar13 = ~(uint)(ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
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
      pauVar12 = pauVar10 + 1;
      do {
        if ((short)uVar13 == 0) {
          do {
            auVar2 = *pauVar12;
            pauVar10 = pauVar10 + -0x30;
            pauVar12 = pauVar12 + 1;
            uVar13 = (uint)(ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
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
          } while (uVar13 == 0xffff);
          uVar13 = ~uVar13;
        }
        uVar4 = 0;
        for (uVar6 = uVar13; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        _ZN4core3ptr125drop_in_place_LT__LP_alloc__string__String_C_alloc__vec__Vec_LT_future_backtest__Order__trade_order__TradingOrder_GT__RP__GT_17h50f6f0417d4b0e58E_llvm_4094939851438509727
                  (pauVar10 + (ulong)uVar4 * -3 + -3);
        uVar13 = uVar13 - 1 & uVar13;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    lVar9 = lVar15 * 0x31 + 0x41;
    if (lVar9 != 0) {
      (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_019fbb20)
                (*plVar1 + lVar15 * -0x30 + -0x30,lVar9,0x10);
    }
  }
  *(undefined4 *)(param_1 + 0x128) = uStack_88;
  *(undefined4 *)(param_1 + 300) = uStack_84;
  *(undefined4 *)(param_1 + 0x130) = uStack_80;
  *(undefined4 *)(param_1 + 0x134) = uStack_7c;
  *(undefined4 *)(param_1 + 0x118) = uStack_98;
  *(undefined4 *)(param_1 + 0x11c) = uStack_94;
  *(undefined4 *)(param_1 + 0x120) = uStack_90;
  *(undefined4 *)(param_1 + 0x124) = uStack_8c;
  *plVar1 = lStack_a8;
  *(undefined8 *)(param_1 + 0x110) = uStack_a0;
  (*(code *)
    PTR__ZN15future_backtest8Customer11order_store21ExchangeRemovingOrder3new17hd8245e05f0399ce1E_019fcdc8
  )(&lStack_a8,auStack_48);
  _ZN79__LT_hashbrown__raw__RawTable_LT_T_C_A_GT__u20_as_u20_core__ops__drop__Drop_GT_4drop17h9d5a9408f14b47e3E
            ((long *)(param_1 + 0x138));
  *(undefined4 *)(param_1 + 0x158) = uStack_88;
  *(undefined4 *)(param_1 + 0x15c) = uStack_84;
  *(undefined4 *)(param_1 + 0x160) = uStack_80;
  *(undefined4 *)(param_1 + 0x164) = uStack_7c;
  *(undefined4 *)(param_1 + 0x148) = uStack_98;
  *(undefined4 *)(param_1 + 0x14c) = uStack_94;
  *(undefined4 *)(param_1 + 0x150) = uStack_90;
  *(undefined4 *)(param_1 + 0x154) = uStack_8c;
  *(long *)(param_1 + 0x138) = lStack_a8;
  *(undefined8 *)(param_1 + 0x140) = uStack_a0;
  lVar15 = param_2[1];
  lVar9 = param_2[2];
  _ZN136__LT_std__collections__hash__map__HashMap_LT_K_C_V_C_S_GT__u20_as_u20_core__iter__traits__collect__FromIterator_LT__LP_K_C_V_RP__GT__GT_9from_iter17h80406e9d3685b22fE
            (&lStack_a8,lVar15,lVar15 + lVar9 * 0x18);
  plVar1 = (long *)(param_1 + 0x168);
  lVar3 = *(long *)(param_1 + 0x170);
  if (lVar3 != 0) {
    lVar14 = *(long *)(param_1 + 0x180);
    lStack_68 = lVar15;
    if (lVar14 != 0) {
      pauVar10 = (undefined1 (*) [16])*plVar1;
      auVar2 = *pauVar10;
      uVar13 = ~(uint)(ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
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
      pauVar12 = pauVar10 + 1;
      do {
        if ((short)uVar13 == 0) {
          do {
            auVar2 = *pauVar12;
            pauVar10 = pauVar10 + -0x20;
            pauVar12 = pauVar12 + 1;
            uVar13 = (uint)(ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
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
          } while (uVar13 == 0xffff);
          uVar13 = ~uVar13;
        }
        iVar5 = 0;
        for (uVar4 = uVar13; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          iVar5 = iVar5 + 1;
        }
        lVar15 = *(long *)((long)pauVar10 + (-0x20 - (ulong)(uint)(iVar5 << 5)));
        if (lVar15 != 0) {
          (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_019fbb20)
                    (*(undefined8 *)((long)pauVar10 + (-0x18 - (ulong)(uint)(iVar5 << 5))),lVar15,1)
          ;
        }
        lVar14 = lVar14 + -1;
        uVar13 = uVar13 - 1 & uVar13;
      } while (lVar14 != 0);
    }
    lVar15 = lStack_68;
    lVar14 = lVar3 * 0x21 + 0x31;
    if (lVar14 != 0) {
      (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_019fbb20)
                (*plVar1 + lVar3 * -0x20 + -0x20,lVar14,0x10);
    }
  }
  *(ulong *)(param_1 + 0x188) = CONCAT44(uStack_84,uStack_88);
  *(ulong *)(param_1 + 400) = CONCAT44(uStack_7c,uStack_80);
  *(ulong *)(param_1 + 0x178) = CONCAT44(uStack_94,uStack_98);
  *(ulong *)(param_1 + 0x180) = CONCAT44(uStack_8c,uStack_90);
  *plVar1 = lStack_a8;
  *(undefined8 *)(param_1 + 0x170) = uStack_a0;
  puVar7 = PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_019fbb20;
  if (lVar9 != 0) {
    puVar11 = (undefined8 *)(lVar15 + 8);
    do {
      if (puVar11[-1] != 0) {
        (*(code *)puVar7)(*puVar11,puVar11[-1],1);
      }
      puVar11 = puVar11 + 3;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  if (*param_2 != 0) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_019fbb20)(lVar15,*param_2 * 0x18,8);
  }
  return 0;
}


