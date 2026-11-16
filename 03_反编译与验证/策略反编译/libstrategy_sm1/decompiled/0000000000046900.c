// ELF address 0x0000000000046900; <strategy_sm1::StrategySM1 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin

/* WARNING: Removing unreachable block (ram,0x00146976) */
/* WARNING: Removing unreachable block (ram,0x001469d1) */
/* WARNING: Removing unreachable block (ram,0x001469d5) */
/* WARNING: Removing unreachable block (ram,0x001469d7) */
/* WARNING: Removing unreachable block (ram,0x00146c04) */
/* WARNING: Removing unreachable block (ram,0x001469e1) */
/* WARNING: Removing unreachable block (ram,0x00146a7b) */
/* WARNING: Removing unreachable block (ram,0x00146a8e) */
/* WARNING: Removing unreachable block (ram,0x00146a9b) */
/* WARNING: Removing unreachable block (ram,0x00146aa0) */
/* WARNING: Removing unreachable block (ram,0x00146ab3) */
/* WARNING: Removing unreachable block (ram,0x00146acc) */
/* WARNING: Removing unreachable block (ram,0x00146aed) */
/* WARNING: Removing unreachable block (ram,0x00146af6) */
/* WARNING: Removing unreachable block (ram,0x00146ae0) */
/* WARNING: Removing unreachable block (ram,0x00146bb4) */
/* WARNING: Removing unreachable block (ram,0x00146bc1) */
/* _<strategy_sm1::StrategySM1 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin */

undefined8 __rustcall
_<strategy_sm1::StrategySM1_as_future_backtest_sdk::plugin::StrategyPlugin>::on_begin(long *param_1)

{
  long lVar1;
  long local_358;
  undefined8 local_350;
  undefined8 local_348;
  undefined1 local_2c8 [328];
  long local_180;
  long local_178;
  undefined1 auStack_170 [320];
  
  (*(code *)PTR_custom_config_001d9800)(&local_358);
                    /* try { // try from 00146929 to 00146957 has its CatchHandler @ 00146c1b */
  _<toml::de::Deserializer_as_serde_core::de::Deserializer>::deserialize_struct
            (&local_180,local_350,local_348,&DAT_00117f33,9,&PTR_DAT_001d38c0,0x23);
  (*(code *)PTR_memcpy_001d9728)(local_2c8,auStack_170,0x140);
  lVar1 = *param_1;
  if (lVar1 != -0x8000000000000000) {
    if (lVar1 != 0) {
      (*(code *)PTR___rust_dealloc_001d96d0)(param_1[1],lVar1,1);
    }
    if (param_1[3] != 0) {
      (*(code *)PTR___rust_dealloc_001d96d0)(param_1[4],param_1[3],1);
    }
    if (param_1[6] != 0) {
      (*(code *)PTR___rust_dealloc_001d96d0)(param_1[7],param_1[6] << 3,8);
    }
    if (param_1[9] != 0) {
      (*(code *)PTR___rust_dealloc_001d96d0)(param_1[10],param_1[9],1);
    }
  }
  *param_1 = local_180;
  param_1[1] = local_178;
  (*(code *)PTR_memcpy_001d9728)(param_1 + 2,local_2c8,0x140);
  if (local_358 != 0) {
    (*(code *)PTR___rust_dealloc_001d96d0)(local_350,local_358,1);
  }
  return 0;
}


