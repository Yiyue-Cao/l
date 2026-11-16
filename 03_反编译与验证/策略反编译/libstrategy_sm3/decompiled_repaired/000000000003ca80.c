// ELF address 0x000000000003ca80; <strategy_sm3::StrategySM3 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin

/* WARNING: Removing unreachable block (ram,0x0013caf6) */
/* WARNING: Removing unreachable block (ram,0x0013cb51) */
/* WARNING: Removing unreachable block (ram,0x0013cb55) */
/* WARNING: Removing unreachable block (ram,0x0013cb57) */
/* WARNING: Removing unreachable block (ram,0x0013cd6d) */
/* WARNING: Removing unreachable block (ram,0x0013cb61) */
/* WARNING: Removing unreachable block (ram,0x0013cbfb) */
/* WARNING: Removing unreachable block (ram,0x0013cc0e) */
/* WARNING: Removing unreachable block (ram,0x0013cc1b) */
/* WARNING: Removing unreachable block (ram,0x0013cc20) */
/* WARNING: Removing unreachable block (ram,0x0013cc33) */
/* WARNING: Removing unreachable block (ram,0x0013cc4c) */
/* WARNING: Removing unreachable block (ram,0x0013cc6d) */
/* WARNING: Removing unreachable block (ram,0x0013cc76) */
/* WARNING: Removing unreachable block (ram,0x0013cc60) */
/* WARNING: Removing unreachable block (ram,0x0013cd1d) */
/* WARNING: Removing unreachable block (ram,0x0013cd2a) */
/* _<strategy_sm3::StrategySM3 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin */

undefined8 __rustcall
_<strategy_sm3::StrategySM3_as_future_backtest_sdk::plugin::StrategyPlugin>::on_begin(long *param_1)

{
  long lVar1;
  long local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined1 local_288 [296];
  long local_160;
  long local_158;
  undefined1 auStack_150 [288];
  
  (*(code *)PTR_custom_config_001dc178)(&local_318);
                    /* try { // try from 0013caa9 to 0013cad7 has its CatchHandler @ 0013cd84 */
  _<toml::de::Deserializer_as_serde_core::de::Deserializer>::deserialize_struct
            (&local_160,local_310,local_308,&DAT_00117e5b,9,&PTR_DAT_001d6100,0x21);
  (*(code *)PTR_memcpy_001dc0f0)(local_288,auStack_150,0x120);
  lVar1 = *param_1;
  if (lVar1 != -0x8000000000000000) {
    if (lVar1 != 0) {
      (*(code *)PTR___rust_dealloc_001dc090)(param_1[1],lVar1,1);
    }
    lVar1 = param_1[6];
    if ((lVar1 != -0x8000000000000000) && (lVar1 != 0)) {
      (*(code *)PTR___rust_dealloc_001dc090)(param_1[7],lVar1,1);
    }
    if (param_1[3] != 0) {
      (*(code *)PTR___rust_dealloc_001dc090)(param_1[4],param_1[3],1);
    }
  }
  *param_1 = local_160;
  param_1[1] = local_158;
  (*(code *)PTR_memcpy_001dc0f0)(param_1 + 2,local_288,0x120);
  if (local_318 != 0) {
    (*(code *)PTR___rust_dealloc_001dc090)(local_310,local_318,1);
  }
  return 0;
}


