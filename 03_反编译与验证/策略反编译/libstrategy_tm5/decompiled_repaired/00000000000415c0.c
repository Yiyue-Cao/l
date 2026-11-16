// ELF address 0x00000000000415c0; <strategy_tm5::StrategyTM5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin

/* WARNING: Removing unreachable block (ram,0x00141636) */
/* WARNING: Removing unreachable block (ram,0x00141691) */
/* WARNING: Removing unreachable block (ram,0x00141695) */
/* WARNING: Removing unreachable block (ram,0x00141697) */
/* WARNING: Removing unreachable block (ram,0x00141907) */
/* WARNING: Removing unreachable block (ram,0x001416a1) */
/* WARNING: Removing unreachable block (ram,0x0014173b) */
/* WARNING: Removing unreachable block (ram,0x0014174e) */
/* WARNING: Removing unreachable block (ram,0x0014175b) */
/* WARNING: Removing unreachable block (ram,0x00141760) */
/* WARNING: Removing unreachable block (ram,0x00141773) */
/* WARNING: Removing unreachable block (ram,0x0014178c) */
/* WARNING: Removing unreachable block (ram,0x001417ad) */
/* WARNING: Removing unreachable block (ram,0x001417b6) */
/* WARNING: Removing unreachable block (ram,0x001417a0) */
/* WARNING: Removing unreachable block (ram,0x001418b7) */
/* WARNING: Removing unreachable block (ram,0x001418c4) */
/* _<strategy_tm5::StrategyTM5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin */

undefined8 __rustcall
_<strategy_tm5::StrategyTM5_as_future_backtest_sdk::plugin::StrategyPlugin>::on_begin(long *param_1)

{
  long lVar1;
  long local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined1 local_258 [264];
  long local_150;
  long local_148;
  undefined1 auStack_140 [264];
  long local_38;
  
  (*(code *)PTR_custom_config_001cb3b0)(&local_2e8);
                    /* try { // try from 001415e9 to 00141617 has its CatchHandler @ 0014191e */
  _<toml::de::Deserializer_as_serde_core::de::Deserializer>::deserialize_struct
            (&local_150,local_2e0,local_2d8,"TM5Params",9,
             &PTR_s_signal_modepv1_alphacost_alphasi_001c5890,0x1e);
  (*(code *)PTR_memcpy_001cb308)(local_258,auStack_140,0x108);
  if (*param_1 != 0) {
    (*(code *)PTR___rust_dealloc_001cb2a8)(param_1[1],*param_1 << 4,8);
  }
  *param_1 = 0;
  param_1[1] = 8;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = local_38;
  lVar1 = param_1[5];
  if (lVar1 != -0x8000000000000000) {
    if (lVar1 != 0) {
      (*(code *)PTR___rust_dealloc_001cb2a8)(param_1[6],lVar1,1);
    }
    if (param_1[8] != 0) {
      (*(code *)PTR___rust_dealloc_001cb2a8)(param_1[9],param_1[8],1);
    }
    if (param_1[0xb] != 0) {
      (*(code *)PTR___rust_dealloc_001cb2a8)(param_1[0xc],param_1[0xb] << 3,8);
    }
  }
  param_1[5] = local_150;
  param_1[6] = local_148;
  (*(code *)PTR_memcpy_001cb308)(param_1 + 7,local_258,0x108);
  param_1[0x28] = local_38;
  if (local_2e8 != 0) {
    (*(code *)PTR___rust_dealloc_001cb2a8)(local_2e0,local_2e8,1);
  }
  return 0;
}


