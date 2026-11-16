// ELF address 0x0000000000045990; <strategy_sm2::StrategySM2 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin

/* WARNING: Removing unreachable block (ram,0x00145a06) */
/* WARNING: Removing unreachable block (ram,0x00145a61) */
/* WARNING: Removing unreachable block (ram,0x00145a65) */
/* WARNING: Removing unreachable block (ram,0x00145a67) */
/* WARNING: Removing unreachable block (ram,0x00145c9a) */
/* WARNING: Removing unreachable block (ram,0x00145a71) */
/* WARNING: Removing unreachable block (ram,0x00145b0b) */
/* WARNING: Removing unreachable block (ram,0x00145b1e) */
/* WARNING: Removing unreachable block (ram,0x00145b2b) */
/* WARNING: Removing unreachable block (ram,0x00145b30) */
/* WARNING: Removing unreachable block (ram,0x00145b43) */
/* WARNING: Removing unreachable block (ram,0x00145b5c) */
/* WARNING: Removing unreachable block (ram,0x00145b7d) */
/* WARNING: Removing unreachable block (ram,0x00145b86) */
/* WARNING: Removing unreachable block (ram,0x00145b70) */
/* WARNING: Removing unreachable block (ram,0x00145c4a) */
/* WARNING: Removing unreachable block (ram,0x00145c57) */
/* _<strategy_sm2::StrategySM2 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin */

undefined8 __rustcall
_<strategy_sm2::StrategySM2_as_future_backtest_sdk::plugin::StrategyPlugin>::on_begin(long *param_1)

{
  long lVar1;
  long local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined1 local_278 [288];
  long local_158;
  long local_150;
  undefined1 auStack_148 [280];
  
  (*(code *)PTR_custom_config_001d77e0)(&local_308);
                    /* try { // try from 001459b9 to 001459e7 has its CatchHandler @ 00145cb1 */
  _<toml::de::Deserializer_as_serde_core::de::Deserializer>::deserialize_struct
            (&local_158,local_300,local_2f8,"SM2Params",9,
             &PTR_s_signal_modepv1_alphatrade_slippe_001d19f0,0x1e);
  (*(code *)PTR_memcpy_001d7738)(local_278,auStack_148,0x118);
  lVar1 = *param_1;
  if (lVar1 != -0x8000000000000000) {
    if (lVar1 != 0) {
      (*(code *)PTR___rust_dealloc_001d76d8)(param_1[1],lVar1,1);
    }
    lVar1 = param_1[6];
    if ((lVar1 != -0x8000000000000000) && (lVar1 != 0)) {
      (*(code *)PTR___rust_dealloc_001d76d8)(param_1[7],lVar1,1);
    }
    lVar1 = param_1[9];
    if ((lVar1 != -0x8000000000000000) && (lVar1 != 0)) {
      (*(code *)PTR___rust_dealloc_001d76d8)(param_1[10],lVar1,1);
    }
    if (param_1[3] != 0) {
      (*(code *)PTR___rust_dealloc_001d76d8)(param_1[4],param_1[3],1);
    }
  }
  *param_1 = local_158;
  param_1[1] = local_150;
  (*(code *)PTR_memcpy_001d7738)(param_1 + 2,local_278,0x118);
  if (local_308 != 0) {
    (*(code *)PTR___rust_dealloc_001d76d8)(local_300,local_308,1);
  }
  return 0;
}


