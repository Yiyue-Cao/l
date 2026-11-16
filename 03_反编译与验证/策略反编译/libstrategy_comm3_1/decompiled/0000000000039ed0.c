// ELF address 0x0000000000039ed0; <strategy_comm3_1::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin

/* _<strategy_comm3_1::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin */

undefined8 __rustcall
_<strategy_comm3_1::StrategyComm3_as_future_backtest_sdk::plugin::StrategyPlugin>::on_begin
          (long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long local_408;
  long local_400;
  ulong local_3f8;
  long local_3f0;
  ulong local_3e8;
  undefined4 *local_3e0;
  undefined *local_3d8;
  long *local_3d0;
  code *local_3c8;
  undefined **local_3c0;
  undefined8 local_3b8;
  undefined4 **local_3b0;
  undefined8 local_3a8;
  undefined8 local_3a0;
  undefined1 local_390 [24];
  undefined4 local_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 local_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 local_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  long local_338;
  long lStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  long local_1d8;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  long local_190;
  long lStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  
  (*(code *)PTR_custom_config_001de1d8)(&local_408);
                    /* try { // try from 00139ef9 to 00139f27 has its CatchHandler @ 0013a1e3 */
  _<toml::de::Deserializer_as_serde_core::de::Deserializer>::deserialize_struct
            (&local_1d8,local_400,local_3f8,"Comm3Params",0xb,
             &PTR_s_signal_modepv1_alphacost_alphasi_001d8240,0x2b);
  if (local_1d8 == 2) {
    local_328 = local_180;
    uStack_320 = uStack_178;
    local_338 = local_190;
    lStack_330 = lStack_188;
    local_348 = local_1a0;
    uStack_344 = uStack_19c;
    uStack_340 = uStack_198;
    uStack_33c = uStack_194;
    local_358 = local_1b0;
    uStack_354 = uStack_1ac;
    uStack_350 = uStack_1a8;
    uStack_34c = uStack_1a4;
    local_368 = local_1c0;
    uStack_364 = uStack_1bc;
    uStack_360 = uStack_1b8;
    uStack_35c = uStack_1b4;
    local_378 = local_1d0;
    uStack_374 = uStack_1cc;
    uStack_370 = uStack_1c8;
    uStack_36c = uStack_1c4;
    local_3e8 = 200;
    if (local_3f8 < 200) {
      local_3e8 = local_3f8;
    }
    if ((200 < local_3f8) && (*(char *)(local_400 + local_3e8) < -0x40)) {
                    /* try { // try from 0013a1cc to 0013a1e0 has its CatchHandler @ 0013a1e8 */
      (*(code *)PTR_slice_error_fail_001de1f0)
                (local_400,local_3f8,0,local_3e8,&PTR_s_strategies_comm_strategy_strateg_001d84f0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    local_3f0 = local_400;
    local_3e0 = &local_378;
    local_3d8 = PTR_fmt_001de1e0;
    local_3d0 = &local_3f0;
    local_3c8 = _<&T_as_core::fmt::Display>::fmt;
    local_3c0 = &PTR_s__custom__parse_error____Raw__001d8508;
    local_3b8 = 2;
    local_3a0 = 0;
    local_3b0 = &local_3e0;
    local_3a8 = 2;
                    /* try { // try from 0013a00f to 0013a02e has its CatchHandler @ 0013a1e8 */
    (*(code *)PTR_format_inner_001de1e8)(local_390,&local_3c0);
    uVar4 = anyhow::error::_<impl_anyhow::Error>::msg(local_390);
    if (CONCAT44(uStack_35c,uStack_360) != 0) {
      (*(code *)PTR___rust_dealloc_001de0f0)
                (CONCAT44(uStack_354,local_358),CONCAT44(uStack_35c,uStack_360),1);
    }
    if (lStack_330 != 0) {
      (*(code *)PTR___rust_dealloc_001de0f0)(local_328,lStack_330,1);
    }
    puVar3 = PTR___rust_dealloc_001de0f0;
    lVar2 = CONCAT44(uStack_33c,uStack_340);
    if (local_338 != 0) {
      puVar6 = (undefined8 *)(lVar2 + 8);
      lVar5 = local_338;
      do {
        if (puVar6[-1] != 0) {
          (*(code *)puVar3)(*puVar6,puVar6[-1],1);
        }
        puVar6 = puVar6 + 3;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    if (CONCAT44(uStack_344,local_348) != 0) {
      (*(code *)PTR___rust_dealloc_001de0f0)(lVar2,CONCAT44(uStack_344,local_348) * 0x18,8);
    }
  }
  else {
    (*(code *)PTR_memcpy_001de150)(&local_378,&uStack_1c8,0x198);
    if ((int)*param_1 != 2) {
      if (param_1[8] != 0) {
        (*(code *)PTR___rust_dealloc_001de0f0)(param_1[9],param_1[8],1);
      }
      if (param_1[0xb] != 0) {
        (*(code *)PTR___rust_dealloc_001de0f0)(param_1[0xc],param_1[0xb],1);
      }
      if (param_1[0xe] != 0) {
        (*(code *)PTR___rust_dealloc_001de0f0)(param_1[0xf],param_1[0xe] << 3,8);
      }
      if (param_1[0x11] != 0) {
        (*(code *)PTR___rust_dealloc_001de0f0)(param_1[0x12],param_1[0x11],1);
      }
    }
    *param_1 = local_1d8;
    param_1[1] = CONCAT44(uStack_1cc,local_1d0);
    (*(code *)PTR_memcpy_001de150)(param_1 + 2,&local_378,0x198);
    uVar4 = 0;
  }
  if (local_408 != 0) {
    (*(code *)PTR___rust_dealloc_001de0f0)(local_400,local_408,1);
  }
  return uVar4;
}


