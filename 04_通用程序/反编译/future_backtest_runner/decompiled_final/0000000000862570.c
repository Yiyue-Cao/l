// ELF address 0x0000000000862570; future_backtest::Exchange::exchange::Exchange::cancel_order

undefined8
_ZN15future_backtest8Exchange8exchange8Exchange12cancel_order17hfdf13eec915e525cE
          (long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined8 uStack_a0;
  undefined1 **ppuStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  code *pcStack_50;
  undefined8 *puStack_48;
  code *pcStack_40;
  undefined1 auStack_30 [24];
  
  puStack_78 = (undefined1 *)&uStack_b8;
  uStack_b8 = *(undefined8 *)(param_1 + 0x98);
  uStack_b0 = *(undefined8 *)(param_1 + 0xa0);
  puStack_70 = 
  PTR__ZN4core3fmt5float52__LT_impl_u20_core__fmt__Display_u20_for_u20_f64_GT_3fmt17hd7443fdfc6565159E_019fc2c0
  ;
  puStack_68 = &uStack_b0;
  puStack_60 = 
  PTR__ZN4core3fmt5float52__LT_impl_u20_core__fmt__Display_u20_for_u20_f64_GT_3fmt17hd7443fdfc6565159E_019fc2c0
  ;
  pcStack_50 = 
  _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE_llvm_3900561041070810133
  ;
  pcStack_40 = 
  _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE_llvm_3900561041070810133
  ;
  puStack_a8 = anon_ba86f49aa5aaa651eac02428852ec324_324_llvm_3900561041070810133;
  uStack_a0 = 4;
  uStack_88 = 0;
  ppuStack_98 = &puStack_78;
  uStack_90 = 4;
  puStack_58 = param_2;
  puStack_48 = param_3;
  (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_019fc058)
            (auStack_30,&puStack_a8);
  (*(code *)PTR__ZN15future_backtest7Logging7logging11BacktestLog5debug17hfb188531b1342676E_019fc2d8
  )(param_1,auStack_30);
  ppuStack_98 = (undefined1 **)param_2[2];
  puStack_a8 = (undefined1 *)*param_2;
  uStack_a0 = param_2[1];
  puStack_68 = (undefined8 *)param_3[2];
  puStack_78 = (undefined1 *)*param_3;
  puStack_70 = (undefined *)param_3[1];
  (*(code *)
    PTR__ZN15future_backtest8Customer11order_store21ExchangeRemovingOrder9add_order17h7fc6c58524d272f3E_019fcdd0
  )(param_1 + 0x138,&puStack_a8,&puStack_78);
  return 0;
}


