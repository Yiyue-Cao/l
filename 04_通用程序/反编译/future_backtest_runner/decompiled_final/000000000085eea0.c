// ELF address 0x000000000085eea0; future_backtest::Exchange::exchange::Exchange::exchange_run_on_last_depth_event

undefined8
_ZN15future_backtest8Exchange8exchange8Exchange32exchange_run_on_last_depth_event17hcafc93d5af0b0882E
          (long param_1,long *param_2)

{
  undefined1 auVar1 [16];
  long lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined1 (*pauVar6) [16];
  long lVar7;
  uint uVar8;
  undefined1 (*pauVar9) [16];
  long lVar10;
  long *plStack_5b8;
  code *pcStack_5b0;
  long **pplStack_5a8;
  undefined *puStack_5a0;
  long *plStack_598;
  code *pcStack_590;
  long lStack_580;
  long lStack_578;
  undefined8 uStack_570;
  undefined *puStack_568;
  undefined8 uStack_560;
  long **pplStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined1 auStack_538 [24];
  undefined1 auStack_520 [24];
  undefined1 auStack_508 [24];
  long *plStack_4f0;
  undefined *puStack_4e8;
  long **pplStack_4e0;
  undefined *puStack_4d8;
  long *plStack_4d0;
  code *pcStack_4c8;
  long lStack_418;
  undefined8 uStack_410;
  long lStack_3d8;
  undefined8 uStack_3d0;
  long lStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_188;
  long lStack_180;
  
  plStack_4f0 = param_2 + 6;
  pplStack_4e0 = (long **)(param_2 + 5);
  puStack_4e8 = 
  PTR__ZN4core3fmt5float52__LT_impl_u20_core__fmt__Display_u20_for_u20_f64_GT_3fmt17hd7443fdfc6565159E_019fc2c0
  ;
  puStack_4d8 = 
  PTR__ZN4core3fmt5float52__LT_impl_u20_core__fmt__Display_u20_for_u20_f64_GT_3fmt17hd7443fdfc6565159E_019fc2c0
  ;
  pcStack_4c8 = 
  _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE_llvm_3900561041070810133
  ;
  plStack_5b8 = (long *)&UNK_019462d0;
  pcStack_5b0 = (code *)0x3;
  plStack_598 = (long *)0x0;
  pplStack_5a8 = &plStack_4f0;
  puStack_5a0 = (undefined *)0x3;
  plStack_4d0 = param_2;
  (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_019fc058)
            (auStack_538,&plStack_5b8);
  (*(code *)PTR__ZN15future_backtest7Logging7logging11BacktestLog5debug17hfb188531b1342676E_019fc2d8
  )(param_1,auStack_538);
  lVar10 = *(long *)(param_1 + 0x80);
  if (lVar10 != 0) {
    lStack_580 = param_2[1];
    lVar2 = param_2[2];
    pauVar9 = *(undefined1 (**) [16])(param_1 + 0x68);
    pauVar6 = pauVar9 + 1;
    auVar1 = *pauVar9;
    uVar8 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
      if ((short)uVar8 == 0) {
        do {
          auVar1 = *pauVar6;
          pauVar9 = pauVar9 + -0x4d8;
          pauVar6 = pauVar6 + 1;
          uVar8 = (uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
        } while (uVar8 == 0xffff);
        uVar8 = ~uVar8;
      }
      uVar3 = 0;
      for (uVar4 = uVar8; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
        uVar3 = uVar3 + 1;
      }
      lVar7 = (ulong)uVar3 * -0x4d8;
      if (*(long *)((long)pauVar9 + lVar7 + -0x4c8) == lVar2) {
        iVar5 = (*(code *)PTR_bcmp_019fbf00)
                          (*(undefined8 *)((long)pauVar9 + lVar7 + -0x4d0),lStack_580,lVar2);
        if (iVar5 == 0) {
          _ZN93__LT_future_backtest__Exchange__market_info__CodeMarketInfo_u20_as_u20_core__clone__Clone_GT_5clone17he7aa244e257bfd9dE
                    (&plStack_4f0,(long)pauVar9 + lVar7 + -0x4c0);
          lStack_578 = lStack_180;
          uStack_570 = uStack_188;
          plStack_5b8 = &lStack_578;
          pcStack_5b0 = (code *)
                        PTR__ZN4core3fmt5float52__LT_impl_u20_core__fmt__Display_u20_for_u20_f64_GT_3fmt17hd7443fdfc6565159E_019fc2c0
          ;
          pplStack_5a8 = (long **)&uStack_570;
          puStack_5a0 = 
          PTR__ZN4core3fmt5float52__LT_impl_u20_core__fmt__Display_u20_for_u20_f64_GT_3fmt17hd7443fdfc6565159E_019fc2c0
          ;
          pcStack_590 = 
          _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE_llvm_3900561041070810133
          ;
          puStack_568 = &UNK_01946300;
          uStack_560 = 3;
          uStack_548 = 0;
          pplStack_558 = &plStack_5b8;
          uStack_550 = 3;
          plStack_598 = param_2;
          (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_019fc058)
                    (auStack_520,&puStack_568);
          (*(code *)
            PTR__ZN15future_backtest7Logging7logging11BacktestLog5debug17hfb188531b1342676E_019fc2d8
          )(param_1,auStack_520);
          if (lStack_3d8 != 0) {
            (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_019fbb20)
                      (uStack_3d0,lStack_3d8,1);
          }
          if ((lStack_2b0 != -0x8000000000000000) && (lStack_2b0 != 0)) {
            (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_019fbb20)
                      (uStack_2a8,lStack_2b0,1);
          }
          if (lStack_418 != 0) {
            (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_019fbb20)
                      (uStack_410,lStack_418,1);
          }
          (*(code *)
            PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17he3b8c48364a1d3a4E_019fc038
          )(&plStack_4f0,param_2,&UNK_01946330);
          pplStack_5a8 = pplStack_4e0;
          plStack_5b8 = plStack_4f0;
          pcStack_5b0 = (code *)puStack_4e8;
          (*(code *)
            PTR__ZN15future_backtest8Exchange8exchange8Exchange33exchange_deal_with_removing_order17hd515d44764047bc6E_019fce08
          )(param_1,&plStack_5b8);
          (*(code *)
            PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17he3b8c48364a1d3a4E_019fc038
          )(&plStack_4f0,param_2,&UNK_01946348);
          pplStack_5a8 = pplStack_4e0;
          plStack_5b8 = plStack_4f0;
          pcStack_5b0 = (code *)puStack_4e8;
          (*(code *)
            PTR__ZN15future_backtest8Exchange8exchange8Exchange32exchange_deal_with_running_order17h57463609bdbdc74eE_019fcdf0
          )(param_1,&plStack_5b8);
          (*(code *)
            PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17he3b8c48364a1d3a4E_019fc038
          )(&plStack_4f0,param_2,&UNK_01946360);
          pplStack_5a8 = pplStack_4e0;
          plStack_5b8 = plStack_4f0;
          pcStack_5b0 = (code *)puStack_4e8;
          (*(code *)
            PTR__ZN15future_backtest8Exchange8exchange8Exchange32exchange_deal_with_dealing_order17h7d284166eec23996E_019fce00
          )(param_1,&plStack_5b8);
          plStack_5b8 = (long *)(param_1 + 0xa8);
          pcStack_5b0 = 
          _ZN87__LT_future_backtest__Customer__order_store__OrderStore_u20_as_u20_core__fmt__Debug_GT_3fmt17he6b1d9c80acc0febE
          ;
          plStack_4f0 = (long *)&UNK_019462c0;
          puStack_4e8 = (undefined *)0x1;
          plStack_4d0 = (long *)0x0;
          puStack_4d8 = (undefined *)0x1;
          pplStack_4e0 = &plStack_5b8;
          (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_019fc058)
                    (auStack_508,&plStack_4f0);
          (*(code *)
            PTR__ZN15future_backtest7Logging7logging11BacktestLog5debug17hfb188531b1342676E_019fc2d8
          )(param_1,auStack_508);
          break;
        }
      }
      uVar8 = uVar8 - 1 & uVar8;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  if (*param_2 != 0) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_019fbb20)(param_2[1],*param_2,1);
  }
  return 0;
}


