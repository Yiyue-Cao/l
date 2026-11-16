// ELF address 0x00000000009078f0; future_backtest::Exchange::exchange::Exchange::exchange_run_on_signalevent

undefined8
_ZN15future_backtest8Exchange8exchange8Exchange27exchange_run_on_signalevent17h4a47723f5c41a003E
          (long param_1,long *param_2)

{
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined **ppuStack_b8;
  undefined *puStack_b0;
  long *plStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined1 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_60;
  undefined8 uStack_58;
  undefined1 auStack_48 [24];
  undefined1 auStack_30 [24];
  
  puStack_88 = (undefined1 *)&puStack_c8;
  puStack_c8 = (undefined *)(param_1 + 0xa0);
  ppuStack_b8 = (undefined **)(param_1 + 0x98);
  puStack_c0 = 
  PTR__ZN4core3fmt5float52__LT_impl_u20_core__fmt__Display_u20_for_u20_f64_GT_3fmt17hd7443fdfc6565159E_01aa7568
  ;
  puStack_b0 = 
  PTR__ZN4core3fmt5float52__LT_impl_u20_core__fmt__Display_u20_for_u20_f64_GT_3fmt17hd7443fdfc6565159E_01aa7568
  ;
  pcStack_a0 = 
  _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE_llvm_3900561041070810133
  ;
  puStack_98 = &UNK_019f1138;
  pcStack_90 = (code *)0x3;
  uStack_78 = 0;
  uStack_80 = 3;
  plStack_a8 = param_2;
  (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_01aa6d80)
            (auStack_48,&puStack_98);
  (*(code *)PTR__ZN15future_backtest7Logging7logging11BacktestLog5debug17hfb188531b1342676E_01aa7580
  )(param_1,auStack_48);
  (*(code *)
    PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17he3b8c48364a1d3a4E_01aa6c80
  )(&lStack_60,param_2,&UNK_019f1168);
  (*(code *)
    PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17he3b8c48364a1d3a4E_01aa6c80
  )(&puStack_c8,&lStack_60,&UNK_019f1180);
  puStack_88 = (undefined1 *)ppuStack_b8;
  puStack_98 = puStack_c8;
  pcStack_90 = (code *)puStack_c0;
  (*(code *)
    PTR__ZN15future_backtest8Exchange8exchange8Exchange33exchange_deal_with_removing_order17hd515d44764047bc6E_01aa7ef0
  )(param_1,&puStack_98);
  (*(code *)
    PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17he3b8c48364a1d3a4E_01aa6c80
  )(&puStack_c8,&lStack_60,&UNK_019f1198);
  puStack_88 = (undefined1 *)ppuStack_b8;
  puStack_98 = puStack_c8;
  pcStack_90 = (code *)puStack_c0;
  (*(code *)
    PTR__ZN15future_backtest8Exchange8exchange8Exchange32exchange_deal_with_running_order17h57463609bdbdc74eE_01aa7ed8
  )(param_1,&puStack_98);
  (*(code *)
    PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17he3b8c48364a1d3a4E_01aa6c80
  )(&puStack_c8,&lStack_60,&UNK_019f11b0);
  puStack_88 = (undefined1 *)ppuStack_b8;
  puStack_98 = puStack_c8;
  pcStack_90 = (code *)puStack_c0;
  (*(code *)
    PTR__ZN15future_backtest8Exchange8exchange8Exchange32exchange_deal_with_dealing_order17h7d284166eec23996E_01aa7ee8
  )(param_1,&puStack_98);
  puStack_98 = (undefined *)(param_1 + 0xa8);
  pcStack_90 = 
  _ZN87__LT_future_backtest__Customer__order_store__OrderStore_u20_as_u20_core__fmt__Debug_GT_3fmt17he6b1d9c80acc0febE
  ;
  puStack_c8 = &UNK_019f11c8;
  puStack_c0 = (undefined *)0x1;
  plStack_a8 = (long *)0x0;
  puStack_b0 = (undefined *)0x1;
  ppuStack_b8 = &puStack_98;
  (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_01aa6d80)
            (auStack_30,&puStack_c8);
  (*(code *)PTR__ZN15future_backtest7Logging7logging11BacktestLog5debug17hfb188531b1342676E_01aa7580
  )(param_1,auStack_30);
  if (lStack_60 != 0) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20)(uStack_58,lStack_60,1);
  }
  if (*param_2 != 0) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20)(param_2[1],*param_2,1);
  }
  if (param_2[3] != 0) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20)(param_2[4],param_2[3],1);
  }
  if (param_2[6] != 0) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20)(param_2[7],param_2[6],1);
  }
  if (param_2[9] != 0) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20)(param_2[10],param_2[9],1);
  }
  return 0;
}


