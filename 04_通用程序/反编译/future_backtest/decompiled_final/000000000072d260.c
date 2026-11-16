// ELF address 0x000000000072d260; future_backtest::Customer::customer::Account::deal_with_orders

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long _ZN15future_backtest8Customer8customer7Account16deal_with_orders17he0373d1f48d4db58E
               (undefined8 param_1,double param_2,long param_3,undefined8 *param_4,
               undefined8 *param_5)

{
  undefined1 auVar1 [16];
  byte bVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  long lVar9;
  ulong uVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  bool bVar15;
  uint uVar16;
  undefined1 (*pauVar17) [16];
  int iVar18;
  undefined *puVar19;
  code *pcVar20;
  undefined1 (*pauVar21) [16];
  long lVar22;
  double dVar23;
  uint uStack_6a4;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  code *pcStack_690;
  undefined8 uStack_688;
  undefined1 (*pauStack_680) [16];
  undefined1 (*pauStack_678) [16];
  undefined8 *puStack_670;
  long lStack_668;
  long lStack_660;
  long lStack_658;
  undefined1 (*pauStack_650) [16];
  long lStack_648;
  long lStack_640;
  long lStack_638;
  undefined1 (*pauStack_630) [16];
  long lStack_628;
  ulong uStack_620;
  undefined1 (*pauStack_618) [16];
  uint uStack_60c;
  undefined8 uStack_608;
  long lStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5e8;
  uint uStack_5e0;
  undefined4 uStack_5dc;
  long lStack_5d8;
  undefined8 uStack_5d0;
  undefined8 *puStack_5c0;
  ulong uStack_5b8;
  long lStack_5b0;
  undefined1 (*pauStack_5a8) [16];
  long lStack_5a0;
  undefined1 (*pauStack_598) [16];
  long lStack_590;
  long lStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  uint uStack_570;
  uint uStack_56c;
  undefined8 uStack_568;
  long *plStack_560;
  long *plStack_558;
  undefined8 uStack_550;
  long lStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined *puStack_2d0;
  undefined8 uStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 auStack_238 [216];
  ulong uStack_160;
  byte bStack_37;
  char cStack_36;
  char cStack_33;
  
  uStack_608 = *(undefined8 *)(param_3 + 0x5d8);
  pauStack_678 = (undefined1 (*) [16])*param_5;
  lStack_658 = param_5[1];
  pauVar21 = pauStack_678 + 1;
  lVar22 = param_5[3];
  lVar14 = 0x7fffffffffffffff;
  if (param_2 <= _DAT_003527e8) {
    lVar14 = (long)param_2;
  }
  lStack_638 = param_3 + 0x968;
  lStack_640 = param_3 + 0x30;
  lStack_668 = 0;
  if (!NAN(param_2)) {
    lStack_668 = lVar14;
  }
  puStack_670 = param_4;
  lStack_660 = param_3;
  puStack_5c0 = param_5;
  if (lVar22 != 0) {
    auVar1 = *pauStack_678;
    uVar16 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
    lVar14 = lStack_668 % 1000;
    lVar13 = lStack_668 / 1000 + (lVar14 >> 0x3f);
    lStack_628 = CONCAT44(lStack_628._4_4_,(((uint)(lVar14 >> 0x3f) & 1000) + (int)lVar14) * 1000000
                         );
    lVar14 = lVar13 / 0x15180;
    lVar13 = lVar13 % 0x15180;
    uVar6 = (uint)(lVar13 >> 0x3f);
    pauStack_618 = (undefined1 (*) [16])(lVar14 + (lVar13 >> 0x3f) + -0x7ff506c5);
    uStack_60c = (uVar6 & 0x15180) + (int)lVar13;
    uStack_620 = (ulong)(uVar6 + (int)lVar14 + 0xaf93b);
    pauStack_5a8 = pauVar21;
    pcVar20 = (code *)
              PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17he3b8c48364a1d3a4E_01aa6c80
    ;
    lVar14 = lVar22;
    pauStack_630 = pauStack_678;
    do {
      if ((short)uVar16 == 0) {
        do {
          auVar1 = *pauStack_5a8;
          pauStack_630 = pauStack_630 + -0x30;
          pauStack_5a8 = pauStack_5a8 + 1;
          uVar16 = (uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
        } while (uVar16 == 0xffff);
        uVar16 = ~uVar16;
      }
      uVar10 = (ulong)uVar16;
      lStack_5b0 = lVar14;
      (*pcVar20)(&lStack_5d8,lStack_638,&UNK_019e1b98);
      (*pcVar20)(&lStack_600,lStack_640,&UNK_019e1bb0);
      uVar6 = 0;
      for (; (uVar16 & 1) == 0; uVar16 = uVar16 >> 1 | 0x80000000) {
        uVar6 = uVar6 + 1;
      }
      lVar14 = *(long *)pauStack_630[(ulong)uVar6 * -3 + -1];
      uStack_568 = *(long *)(pauStack_630[(ulong)uVar6 * -3 + -1] + 8) * 0x2a0 + lVar14;
      uStack_570 = (uint)lVar14;
      uStack_56c = (uint)((ulong)lVar14 >> 0x20);
      uStack_5b8 = uVar10;
      plStack_560 = &lStack_600;
      plStack_558 = &lStack_5d8;
      _ZN98__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__GT_9from_iter17h795f12732d5478b2E
                (&lStack_5a0,&uStack_570,
                 anon_d0b8e27bea7bf57269a32e15b6abf5cf_102_llvm_1643563994444475245);
      lVar14 = lStack_5a0;
      pauStack_680 = pauStack_598;
      lStack_648 = lStack_590;
      if (lStack_590 != 0) {
        lStack_648 = lStack_590 << 3;
        lVar13 = 0;
        do {
          while( true ) {
            _ZN88__LT_future_backtest__Order__trade_order__TradingOrder_u20_as_u20_core__clone__Clone_GT_5clone17h915ade41e7883ea9E
                      (&puStack_2d0,*(undefined8 *)(*pauStack_680 + lVar13));
            cVar3 = cStack_36;
            bVar2 = bStack_37;
            if (_DAT_00353b80 < (double)(uStack_160 & _DAT_00354750)) break;
            if (cStack_33 == '\x01') {
              (*(code *)
                PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17he3b8c48364a1d3a4E_01aa6c80
              )(&uStack_570,auStack_238,&UNK_019e1bc8);
              if (cVar3 == '\0') {
                dVar23 = (double)(*(code *)
                                   PTR__ZN15future_backtest5utils13cut_timestamp17convert_timestamp17h49283a22208d61fdE_01aa71b8
                                 )(param_2);
              }
              else {
                dVar23 = (double)(*(code *)
                                   PTR__ZN15future_backtest5utils13cut_timestamp28convert_timestamp_commmodity17heeb0b5e6d80d0c69E_01aa71c0
                                 )(param_2,bVar2 ^ 1,uStack_568,plStack_560);
              }
              lVar9 = (*(code *)
                        PTR__ZN15future_backtest8Customer8customer7Account5trade17hc6e81bcffe8e716eE_01aa71f0
                      )(param_2,dVar23 / _DAT_003541f0,0,0,uStack_608,lStack_660,&puStack_2d0);
              if (lVar9 != 0) {
                if (CONCAT44(uStack_56c,uStack_570) != 0) {
                  (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20)
                            (uStack_568,CONCAT44(uStack_56c,uStack_570),1);
                }
                _ZN4core3ptr70drop_in_place_LT_future_backtest__Order__trade_order__TradingOrder_GT_17hb69872fb2d20e498E_llvm_1643563994444475245
                          (&puStack_2d0);
joined_r0x0082db6a:
                if (lVar14 != 0) {
                  (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20)
                            (pauStack_680,lVar14 << 3,8);
                }
                if (lStack_600 != 0) {
                  (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20)
                            (uStack_5f8,lStack_600,1);
                }
                if (lStack_5d8 != 0) {
                  (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20)
                            (uStack_5d0,lStack_5d8,1);
                }
                if (lStack_658 != 0) {
                  auVar1 = *pauStack_678;
                  uVar16 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
                  pauVar17 = pauStack_678;
                  do {
                    if ((short)uVar16 == 0) {
                      do {
                        auVar1 = *pauVar21;
                        pauVar17 = pauVar17 + -0x30;
                        pauVar21 = pauVar21 + 1;
                        uVar16 = (uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
                      } while (uVar16 == 0xffff);
                      uVar16 = ~uVar16;
                    }
                    uVar6 = 0;
                    for (uVar7 = uVar16; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
                      uVar6 = uVar6 + 1;
                    }
                    _ZN4core3ptr125drop_in_place_LT__LP_alloc__string__String_C_alloc__vec__Vec_LT_future_backtest__Order__trade_order__TradingOrder_GT__RP__GT_17h50f6f0417d4b0e58E_llvm_4094939851438509727
                              (pauVar17 + (ulong)uVar6 * -3 + -3);
                    uVar16 = uVar16 - 1 & uVar16;
                    lVar22 = lVar22 + -1;
                  } while (lVar22 != 0);
                  lVar22 = lStack_658 * 0x31 + 0x41;
                  if (lVar22 != 0) {
                    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20)
                              (pauStack_678 + lStack_658 * -3 + -3,lVar22,0x10);
                  }
                }
                goto LAB_0082df78;
              }
              if (CONCAT44(uStack_56c,uStack_570) != 0) {
                (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20)
                          (uStack_568,CONCAT44(uStack_56c,uStack_570),1);
              }
            }
            _ZN4core3ptr70drop_in_place_LT_future_backtest__Order__trade_order__TradingOrder_GT_17hb69872fb2d20e498E_llvm_1643563994444475245
                      (&puStack_2d0);
            lVar13 = lVar13 + 8;
            if (lStack_648 == lVar13) goto LAB_0082da00;
          }
          if (pauStack_618 < (undefined1 (*) [16])0xffffffff00000000) {
LAB_0082e014:
            uStack_570 = 0x1a04d90;
            uStack_56c = 0;
            uStack_568._0_4_ = 1;
            uStack_568._4_4_ = 0;
            plStack_560 = (long *)0x8;
            plStack_558 = (long *)0x0;
            uStack_550 = 0;
            (*(code *)PTR__ZN4core9panicking9panic_fmt17h7a459a2e5c566496E_01aa6bc8)
                      (&uStack_570,&UNK_019e1be0);
LAB_0082e0e2:
                    /* WARNING: Does not return */
            pcVar20 = (code *)invalidInstructionException();
            (*pcVar20)();
          }
          uStack_570 = (*(code *)
                         PTR__ZN6chrono5naive4date9NaiveDate25from_num_days_from_ce_opt17h809b9d003970c332E_01aa74f0
                       )(uStack_620);
          if (uStack_570 == 0) goto LAB_0082e014;
          uStack_56c = uStack_60c;
          uStack_568._0_4_ = (uint)lStack_628;
          uVar8 = (*(code *)
                    PTR__ZN73__LT_chrono__offset__local__Local_u20_as_u20_chrono__offset__TimeZone_GT_24offset_from_utc_datetime17hed2297c6b0f93880E_01aa74f8
                  )(1,&uStack_570);
          uStack_5e0 = (uint)uStack_568;
          uStack_5e8 = CONCAT44(uStack_56c,uStack_570);
          uStack_5dc = uVar8;
          (*(code *)
            PTR__ZN6chrono5naive8datetime13NaiveDateTime18checked_add_offset17hfd021a75af988472E_01aa7550
          )(&uStack_570,&uStack_5e8,uVar8);
          if (uStack_570 == 0) {
LAB_0082dff6:
            (*(code *)PTR__ZN4core6option13expect_failed17h9f9eceee6280f039E_01aa73d0)
                      (&UNK_0037480d,0x2b,&UNK_019e1bf8);
            goto LAB_0082e0e2;
          }
          uStack_6a4 = uStack_570;
          uStack_6a0 = 0x7080;
          (*(code *)
            PTR__ZN73__LT_chrono__offset__local__Local_u20_as_u20_chrono__offset__TimeZone_GT_26offset_from_local_datetime17h4cd16c2e993ca0ecE_01aa7510
          )(&uStack_698,1,&uStack_6a4);
          if ((int)uStack_698 != 0) {
            if ((int)uStack_698 == 1) {
              (*(code *)
                PTR__ZN6chrono5naive8datetime13NaiveDateTime18checked_sub_offset17hb45e41ef8e9dae96E_01aa7518
              )(&uStack_570,&uStack_6a4,uStack_698._4_4_);
              (*(code *)
                PTR__ZN6chrono5naive8datetime13NaiveDateTime18checked_sub_offset17hb45e41ef8e9dae96E_01aa7518
              )(&uStack_570,&uStack_6a4,(ulong)pcStack_690 & 0xffffffff);
            }
LAB_0082e097:
            puVar19 = &UNK_019e1c10;
LAB_0082e0dc:
            (*(code *)PTR__ZN4core6option13unwrap_failed17h4154e01d14eb4879E_01aa6fa8)(puVar19);
            goto LAB_0082e0e2;
          }
          (*(code *)
            PTR__ZN6chrono5naive8datetime13NaiveDateTime18checked_sub_offset17hb45e41ef8e9dae96E_01aa7518
          )(&uStack_570,&uStack_6a4,uStack_698._4_4_);
          uVar7 = (uint)uStack_568;
          uVar6 = uStack_56c;
          uVar16 = uStack_570;
          if (uStack_570 == 0) goto LAB_0082e097;
          (*(code *)
            PTR__ZN6chrono5naive8datetime13NaiveDateTime18checked_add_offset17hfd021a75af988472E_01aa7550
          )(&uStack_570,&uStack_5e8,uVar8);
          if (uStack_570 == 0) goto LAB_0082dff6;
          uStack_6a4 = uStack_570;
          uStack_6a0 = 0xe100;
          (*(code *)
            PTR__ZN73__LT_chrono__offset__local__Local_u20_as_u20_chrono__offset__TimeZone_GT_26offset_from_local_datetime17h4cd16c2e993ca0ecE_01aa7510
          )(&uStack_698,1,&uStack_6a4);
          if ((int)uStack_698 != 0) {
            if ((int)uStack_698 == 1) {
              (*(code *)
                PTR__ZN6chrono5naive8datetime13NaiveDateTime18checked_sub_offset17hb45e41ef8e9dae96E_01aa7518
              )(&uStack_570,&uStack_6a4,uStack_698._4_4_);
              (*(code *)
                PTR__ZN6chrono5naive8datetime13NaiveDateTime18checked_sub_offset17hb45e41ef8e9dae96E_01aa7518
              )(&uStack_570,&uStack_6a4,(ulong)pcStack_690 & 0xffffffff);
            }
LAB_0082e0d5:
            puVar19 = &UNK_019e1c28;
            goto LAB_0082e0dc;
          }
          (*(code *)
            PTR__ZN6chrono5naive8datetime13NaiveDateTime18checked_sub_offset17hb45e41ef8e9dae96E_01aa7518
          )(&uStack_570,&uStack_6a4,uStack_698._4_4_);
          cVar3 = cStack_36;
          if (uStack_570 == 0) goto LAB_0082e0d5;
          iVar11 = (int)uVar16 >> 0xd;
          iVar18 = iVar11 + -1;
          iVar12 = 0;
          if (iVar11 < 1) {
            iVar12 = (1U - iVar11) / 400 + 1;
            iVar18 = iVar18 + iVar12 * 400;
            iVar12 = iVar12 * -0x23ab1;
          }
          bVar15 = false;
          iVar11 = 0;
          if ((long)((ulong)uVar7 / 1000000 +
                    (((ulong)uVar6 - 0xe77934880) +
                    (long)(int)((((uVar16 >> 4 & 0x1ff) + iVar12) - iVar18 / 100) +
                                (iVar18 * 0x5b5 >> 2) + (iVar18 / 100 >> 2)) * 0x15180) * 1000) <=
              lStack_668) {
            iVar12 = (int)uStack_570 >> 0xd;
            iVar18 = iVar12 + -1;
            if (iVar12 < 1) {
              iVar11 = (1U - iVar12) / 400 + 1;
              iVar18 = iVar18 + iVar11 * 400;
              iVar11 = iVar11 * -0x23ab1;
            }
            bVar15 = lStack_668 <=
                     (long)((ulong)(uint)uStack_568 / 1000000 +
                           (((ulong)uStack_56c - 0xe77934880) +
                           (long)(int)((((uStack_570 >> 4 & 0x1ff) + iVar11) - iVar18 / 100) +
                                       (iVar18 * 0x5b5 >> 2) + (iVar18 / 100 >> 2)) * 0x15180) *
                           1000);
          }
          (*(code *)
            PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17he3b8c48364a1d3a4E_01aa6c80
          )(&uStack_698,auStack_238,&UNK_019e1c40);
          if (cVar3 == '\0') {
            dVar23 = (double)(*(code *)
                               PTR__ZN15future_backtest5utils13cut_timestamp17convert_timestamp17h49283a22208d61fdE_01aa71b8
                             )(param_2);
          }
          else {
            dVar23 = (double)(*(code *)
                               PTR__ZN15future_backtest5utils13cut_timestamp28convert_timestamp_commmodity17heeb0b5e6d80d0c69E_01aa71c0
                             )(param_2,bVar15,pcStack_690,uStack_688);
          }
          pauStack_650 = (undefined1 (*) [16])(dVar23 / _DAT_003541f0);
          (*(code *)PTR_memcpy_01aa6b48)(&uStack_570,&puStack_2d0,0x2a0);
          lVar9 = (*(code *)
                    PTR__ZN15future_backtest8Customer8customer7Account11order_split17h5d1efa9792c40059E_01aa71e8
                  )(pauStack_650,param_2,lStack_660,&uStack_570);
          if (lVar9 != 0) {
            if (uStack_698 != (long *)0x0) {
              (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20)
                        (pcStack_690,uStack_698,1);
            }
            goto joined_r0x0082db6a;
          }
          if (uStack_698 != (long *)0x0) {
            (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20)
                      (pcStack_690,uStack_698,1);
          }
          lVar13 = lVar13 + 8;
        } while (lStack_648 != lVar13);
      }
LAB_0082da00:
      if (lVar14 != 0) {
        (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20)
                  (pauStack_680,lVar14 << 3,8);
      }
      uVar10 = uStack_5b8;
      pcVar20 = (code *)
                PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17he3b8c48364a1d3a4E_01aa6c80
      ;
      if (lStack_600 != 0) {
        (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20)
                  (uStack_5f8,lStack_600,1);
      }
      lVar14 = lStack_5b0;
      if (lStack_5d8 != 0) {
        (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20)
                  (uStack_5d0,lStack_5d8,1);
      }
      uVar16 = (uint)uVar10 - 1 & (uint)uVar10;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  (*(code *)
    PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17he3b8c48364a1d3a4E_01aa6c80
  )(&puStack_2d0,lStack_638,&UNK_019e1af8);
  (*(code *)
    PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17he3b8c48364a1d3a4E_01aa6c80
  )(&uStack_570,lStack_640,&UNK_019e1b10);
  lVar22 = lStack_660 + 0x8e8;
  lVar9 = (*(code *)
            PTR__ZN15future_backtest8Customer19customer_orderstore17AccountOrderStore33update_order_store_dealing_orders17h014bccb689388c3fE_01aa71f8
          )(lVar22,&puStack_2d0,&uStack_570,puStack_5c0);
  if (lVar9 == 0) {
    lVar14 = puStack_670[3];
    lStack_628 = lVar22;
    if (lVar14 != 0) {
      lStack_648 = lStack_660 + 0x900;
      pauStack_650 = (undefined1 (*) [16])*puStack_670;
      pauStack_618 = pauStack_650 + 1;
      auVar1 = *pauStack_650;
      uVar16 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
        if ((short)uVar16 == 0) {
          do {
            auVar1 = *pauStack_618;
            pauStack_650 = pauStack_650 + -0x30;
            pauStack_618 = pauStack_618 + 1;
            uVar16 = (uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
          } while (uVar16 == 0xffff);
          uVar16 = ~uVar16;
        }
        uStack_620 = (ulong)uVar16;
        uVar6 = 0;
        for (; (uVar16 & 1) == 0; uVar16 = uVar16 >> 1 | 0x80000000) {
          uVar6 = uVar6 + 1;
        }
        uVar10 = (ulong)uVar6;
        lStack_668 = lVar14;
        if (*(long *)(pauStack_650[uVar10 * -3 + -1] + 8) != 0) {
          pauStack_680 = pauStack_650 + uVar10 * -3;
          lVar22 = *(long *)pauStack_650[uVar10 * -3 + -1];
          lVar14 = *(long *)(pauStack_650[uVar10 * -3 + -1] + 8) * 0x18;
          do {
            uVar4 = *(undefined8 *)(pauStack_680[-3] + 8);
            uVar5 = *(undefined8 *)pauStack_680[-2];
            (*(code *)
              PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17he3b8c48364a1d3a4E_01aa6c80
            )(&uStack_570,lVar22,&UNK_019e1b58);
            lVar13 = (*(code *)
                       PTR__ZN15future_backtest8Customer11order_store10OrderStore9get_order17h7ccb873ac197451cE_01aa7558
                     )(lStack_648,uVar4,uVar5,&uStack_570);
            if (lVar13 != 0) {
              _ZN88__LT_future_backtest__Order__trade_order__TradingOrder_u20_as_u20_core__clone__Clone_GT_5clone17h915ade41e7883ea9E
                        (&uStack_570,lVar13);
              uStack_698 = &lStack_4c0;
              pcStack_690 = 
              _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE_llvm_1643563994444475245
              ;
              puStack_2d0 = &UNK_019e1b70;
              uStack_2c8 = 1;
              uStack_2b0 = 0;
              puStack_2c0 = &uStack_698;
              uStack_2b8 = 1;
              (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_01aa6d80)
                        (&lStack_588,&puStack_2d0);
              if (lStack_4c0 != 0) {
                (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20)
                          (uStack_4b8,lStack_4c0,1);
              }
              uStack_4b0 = uStack_578;
              lStack_4c0 = lStack_588;
              uStack_4b8 = uStack_580;
              bVar2 = *(byte *)(lVar13 + 0x299);
              cVar3 = *(char *)(lVar13 + 0x29a);
              (*(code *)
                PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17he3b8c48364a1d3a4E_01aa6c80
              )(&puStack_2d0,lVar13 + 0x98,&UNK_019e1b80);
              if (cVar3 == '\0') {
                dVar23 = (double)(*(code *)
                                   PTR__ZN15future_backtest5utils13cut_timestamp17convert_timestamp17h49283a22208d61fdE_01aa71b8
                                 )(param_2);
              }
              else {
                dVar23 = (double)(*(code *)
                                   PTR__ZN15future_backtest5utils13cut_timestamp28convert_timestamp_commmodity17heeb0b5e6d80d0c69E_01aa71c0
                                 )(param_2,bVar2 ^ 1,uStack_2c8,puStack_2c0);
              }
              lVar9 = (*(code *)
                        PTR__ZN15future_backtest8Customer8customer7Account5trade17hc6e81bcffe8e716eE_01aa71f0
                      )(param_2,dVar23 / _DAT_003541f0,0,0,uStack_608,lStack_660,&uStack_570);
              if (lVar9 != 0) {
                if (puStack_2d0 != (undefined *)0x0) {
                  (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20)
                            (uStack_2c8,puStack_2d0,1);
                }
                _ZN4core3ptr70drop_in_place_LT_future_backtest__Order__trade_order__TradingOrder_GT_17hb69872fb2d20e498E_llvm_1643563994444475245
                          (&uStack_570);
                goto LAB_0082df78;
              }
              if (puStack_2d0 != (undefined *)0x0) {
                (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20)
                          (uStack_2c8,puStack_2d0,1);
              }
              _ZN4core3ptr70drop_in_place_LT_future_backtest__Order__trade_order__TradingOrder_GT_17hb69872fb2d20e498E_llvm_1643563994444475245
                        (&uStack_570);
            }
            lVar22 = lVar22 + 0x18;
            lVar14 = lVar14 + -0x18;
          } while (lVar14 != 0);
        }
        uVar16 = (uint)uStack_620 - 1 & (uint)uStack_620;
        lVar14 = lStack_668 + -1;
      } while (lVar14 != 0);
    }
    (*(code *)
      PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17he3b8c48364a1d3a4E_01aa6c80
    )(&puStack_2d0,lStack_638,&UNK_019e1b28);
    (*(code *)
      PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17he3b8c48364a1d3a4E_01aa6c80
    )(&uStack_570,lStack_640,&UNK_019e1b40);
    lVar9 = (*(code *)
              PTR__ZN15future_backtest8Customer19customer_orderstore17AccountOrderStore34update_order_store_removing_orders17h1e3aa07ab4dab2e6E_01aa7200
            )(lStack_628,&puStack_2d0,&uStack_570,puStack_670);
  }
  else {
LAB_0082df78:
    _ZN79__LT_hashbrown__raw__RawTable_LT_T_C_A_GT__u20_as_u20_core__ops__drop__Drop_GT_4drop17h9d5a9408f14b47e3E
              (puStack_670);
  }
  return lVar9;
}


