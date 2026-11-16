// ELF address 0x00000000009081c0; future_backtest::Exchange::exchange::Exchange::exchange_cleaning_order

/* WARNING: Removing unreachable block (ram,0x00a081e0) */

undefined8
_ZN15future_backtest8Exchange8exchange8Exchange23exchange_cleaning_order17hf5abef3abbfa5786E
          (long param_1,long *param_2)

{
  long lVar1;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  
  (*(code *)
    PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17he3b8c48364a1d3a4E_01aa6c80
  )(&uStack_30,param_2,anon_ba86f49aa5aaa651eac02428852ec324_283_llvm_3900561041070810133);
  uStack_38 = uStack_20;
  uStack_40 = uStack_28;
  uStack_3c = uStack_24;
  (*(code *)
    PTR__ZN15future_backtest8Customer11order_store20ExchangeDealingOrder11clean_order17h2187e75fb428d1bbE_01aa7ea8
  )(param_1 + 0x108,&uStack_48);
  if (*param_2 == -0x8000000000000000) {
    uStack_48 = 0x8000000000000000;
  }
  else {
    (*(code *)
      PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17he3b8c48364a1d3a4E_01aa6c80
    )(&uStack_30,param_2,anon_ba86f49aa5aaa651eac02428852ec324_283_llvm_3900561041070810133);
    uStack_38 = uStack_20;
    uStack_48 = CONCAT44(uStack_2c,uStack_30);
    uStack_40 = uStack_28;
    uStack_3c = uStack_24;
  }
  (*(code *)
    PTR__ZN15future_backtest8Customer11order_store21ExchangeRemovingOrder11clean_order17h3889932cb5e26d19E_01aa7ec0
  )(param_1 + 0x138,&uStack_48);
  lVar1 = *param_2;
  if ((lVar1 != -0x8000000000000000) && (lVar1 != 0)) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20)(param_2[1],lVar1,1);
  }
  return 0;
}


