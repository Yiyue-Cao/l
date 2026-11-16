// ELF address 0x000000000085f310; future_backtest::Exchange::exchange::Exchange::exchange_run_on_marketevent

undefined *
_ZN15future_backtest8Exchange8exchange8Exchange27exchange_run_on_marketevent17h67eb63190fc2ba45E
          (undefined8 param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long *plStack_a8;
  undefined *puStack_a0;
  long **pplStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long *plStack_70;
  undefined *puStack_68;
  long **pplStack_60;
  undefined *puStack_58;
  long *plStack_50;
  code *pcStack_48;
  long lStack_40;
  long *plStack_38;
  undefined1 auStack_30 [24];
  
  lStack_40 = param_2[6];
  plStack_38 = (long *)param_2[5];
  plStack_70 = &lStack_40;
  puStack_68 = 
  PTR__ZN4core3fmt5float52__LT_impl_u20_core__fmt__Display_u20_for_u20_f64_GT_3fmt17hd7443fdfc6565159E_019fc2c0
  ;
  pplStack_60 = &plStack_38;
  puStack_58 = 
  PTR__ZN4core3fmt5float52__LT_impl_u20_core__fmt__Display_u20_for_u20_f64_GT_3fmt17hd7443fdfc6565159E_019fc2c0
  ;
  pcStack_48 = 
  _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE_llvm_3900561041070810133
  ;
  plStack_a8 = (long *)&UNK_01946378;
  puStack_a0 = (undefined *)0x3;
  uStack_88 = 0;
  pplStack_98 = &plStack_70;
  uStack_90 = 3;
  plStack_50 = param_2;
  (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_019fc058)
            (auStack_30,&plStack_a8);
  (*(code *)PTR__ZN15future_backtest7Logging7logging11BacktestLog5debug17hfb188531b1342676E_019fc2d8
  )(param_1,auStack_30);
  puVar2 = (undefined *)
           (*(code *)
             PTR__ZN15future_backtest8Exchange8exchange8Exchange48exchange_operation_on_depth_with_maker_simulator17h8deed556192fa865E_019fce20
           )(param_1,param_2,param_3);
  if (puVar2 == (undefined *)0x0) {
    (*(code *)
      PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17he3b8c48364a1d3a4E_019fc038
    )(&plStack_70,param_2,&UNK_019463a8);
    pplStack_98 = pplStack_60;
    plStack_a8 = plStack_70;
    puStack_a0 = puStack_68;
    (*(code *)
      PTR__ZN15future_backtest8Exchange8exchange8Exchange32exchange_deal_with_dealing_order17h7d284166eec23996E_019fce00
    )(param_1,&plStack_a8);
    (*(code *)
      PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17he3b8c48364a1d3a4E_019fc038
    )(&plStack_70,param_2,&UNK_019463c0);
    (*(code *)
      PTR__ZN15future_backtest8Exchange8exchange8Exchange15cancel_by_depth17hbe08df9d5e5fc197E_019fce28
    )(&plStack_a8,param_1,&plStack_70);
    puVar2 = puStack_a0;
    if ((char)plStack_a8 == '\0') {
      (*(code *)
        PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17he3b8c48364a1d3a4E_019fc038
      )(&plStack_70,param_2,&UNK_019463d8);
      pplStack_98 = pplStack_60;
      plStack_a8 = plStack_70;
      puStack_a0 = puStack_68;
      (*(code *)
        PTR__ZN15future_backtest8Exchange8exchange8Exchange33exchange_deal_with_removing_order17hd515d44764047bc6E_019fce08
      )(param_1,&plStack_a8);
      puVar2 = (undefined *)0x0;
      lVar1 = *param_2;
      goto joined_r0x0095f43c;
    }
  }
  lVar1 = *param_2;
joined_r0x0095f43c:
  if (lVar1 != 0) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_019fbb20)(param_2[1],lVar1,1);
  }
  return puVar2;
}


