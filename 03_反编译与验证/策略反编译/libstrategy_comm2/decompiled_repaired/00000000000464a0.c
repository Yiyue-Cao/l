// ELF address 0x00000000000464a0; <strategy_comm2::StrategyComm2 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin

/* WARNING: Removing unreachable block (ram,0x00146516) */
/* WARNING: Removing unreachable block (ram,0x00146571) */
/* WARNING: Removing unreachable block (ram,0x00146575) */
/* WARNING: Removing unreachable block (ram,0x00146577) */
/* WARNING: Removing unreachable block (ram,0x0014678c) */
/* WARNING: Removing unreachable block (ram,0x00146581) */
/* WARNING: Removing unreachable block (ram,0x0014661b) */
/* WARNING: Removing unreachable block (ram,0x0014662e) */
/* WARNING: Removing unreachable block (ram,0x0014663b) */
/* WARNING: Removing unreachable block (ram,0x00146640) */
/* WARNING: Removing unreachable block (ram,0x00146653) */
/* WARNING: Removing unreachable block (ram,0x0014666c) */
/* WARNING: Removing unreachable block (ram,0x0014668d) */
/* WARNING: Removing unreachable block (ram,0x00146696) */
/* WARNING: Removing unreachable block (ram,0x00146680) */
/* WARNING: Removing unreachable block (ram,0x0014673c) */
/* WARNING: Removing unreachable block (ram,0x00146749) */
/* _<strategy_comm2::StrategyComm2 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin */

undefined8 __rustcall
_<strategy_comm2::StrategyComm2_as_future_backtest_sdk::plugin::StrategyPlugin>::on_begin
          (long *param_1)

{
  long lVar1;
  long local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined1 local_2a8 [312];
  long local_170;
  long local_168;
  undefined1 auStack_160 [304];
  
  (*(code *)PTR_custom_config_001d5d70)(&local_338);
                    /* try { // try from 001464c9 to 001464f7 has its CatchHandler @ 001467a3 */
  _<toml::de::Deserializer_as_serde_core::de::Deserializer>::deserialize_struct
            (&local_170,local_330,local_328,"Comm2Params",0xb,
             &PTR_s_signal_modepv1_alphacost_alphasi_001cffc0,0x23);
  (*(code *)PTR_memcpy_001d5cb0)(local_2a8,auStack_160,0x130);
  lVar1 = *param_1;
  if (lVar1 != -0x8000000000000000) {
    if (lVar1 != 0) {
      (*(code *)PTR___rust_dealloc_001d5c50)(param_1[1],lVar1,1);
    }
    if (param_1[3] != 0) {
      (*(code *)PTR___rust_dealloc_001d5c50)(param_1[4],param_1[3],1);
    }
    if (param_1[6] != 0) {
      (*(code *)PTR___rust_dealloc_001d5c50)(param_1[7],param_1[6] << 3,8);
    }
  }
  *param_1 = local_170;
  param_1[1] = local_168;
  (*(code *)PTR_memcpy_001d5cb0)(param_1 + 2,local_2a8,0x130);
  if (local_338 != 0) {
    (*(code *)PTR___rust_dealloc_001d5c50)(local_330,local_338,1);
  }
  return 0;
}


