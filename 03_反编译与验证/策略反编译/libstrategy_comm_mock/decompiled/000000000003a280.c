// ELF address 0x000000000003a280; <strategy_comm_mock::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin

/* _<strategy_comm_mock::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin */

undefined8 __rustcall
_<strategy_comm_mock::StrategyComm3_as_future_backtest_sdk::plugin::StrategyPlugin>::on_begin
          (long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long local_418;
  long local_410;
  ulong local_408;
  long local_400;
  ulong local_3f8;
  undefined4 *local_3f0;
  undefined *local_3e8;
  long *local_3e0;
  code *local_3d8;
  undefined **local_3d0;
  undefined8 local_3c8;
  undefined4 **local_3c0;
  undefined8 local_3b8;
  undefined8 local_3b0;
  undefined1 local_3a0 [24];
  undefined4 local_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
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
  long local_348;
  long lStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  long local_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  long local_198;
  long lStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  
  (*(code *)PTR_custom_config_001e0380)(&local_418);
                    /* try { // try from 0013a2a9 to 0013a2d7 has its CatchHandler @ 0013a593 */
  _<toml::de::Deserializer_as_serde_core::de::Deserializer>::deserialize_struct
            (&local_1e0,local_410,local_408,"Comm3Params",0xb,
             &PTR_s_signal_modepv1_alphacost_alphasi_001da338,0x2c);
  if (local_1e0 == 2) {
    local_338 = local_188;
    uStack_330 = uStack_180;
    local_348 = local_198;
    lStack_340 = lStack_190;
    local_358 = local_1a8;
    uStack_354 = uStack_1a4;
    uStack_350 = uStack_1a0;
    uStack_34c = uStack_19c;
    local_368 = local_1b8;
    uStack_364 = uStack_1b4;
    uStack_360 = uStack_1b0;
    uStack_35c = uStack_1ac;
    local_378 = local_1c8;
    uStack_374 = uStack_1c4;
    uStack_370 = uStack_1c0;
    uStack_36c = uStack_1bc;
    local_388 = local_1d8;
    uStack_384 = uStack_1d4;
    uStack_380 = uStack_1d0;
    uStack_37c = uStack_1cc;
    local_3f8 = 200;
    if (local_408 < 200) {
      local_3f8 = local_408;
    }
    if ((200 < local_408) && (*(char *)(local_410 + local_3f8) < -0x40)) {
                    /* try { // try from 0013a57c to 0013a590 has its CatchHandler @ 0013a598 */
      (*(code *)PTR_slice_error_fail_001e0398)
                (local_410,local_408,0,local_3f8,&PTR_s_strategies_comm_strategy_strateg_001da5f8);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    local_400 = local_410;
    local_3f0 = &local_388;
    local_3e8 = PTR_fmt_001e0388;
    local_3e0 = &local_400;
    local_3d8 = _<&T_as_core::fmt::Display>::fmt;
    local_3d0 = &PTR_s__custom__parse_error____Raw__001da610;
    local_3c8 = 2;
    local_3b0 = 0;
    local_3c0 = &local_3f0;
    local_3b8 = 2;
                    /* try { // try from 0013a3bf to 0013a3de has its CatchHandler @ 0013a598 */
    (*(code *)PTR_format_inner_001e0390)(local_3a0,&local_3d0);
    uVar4 = anyhow::error::_<impl_anyhow::Error>::msg(local_3a0);
    if (CONCAT44(uStack_36c,uStack_370) != 0) {
      (*(code *)PTR___rust_dealloc_001e0298)
                (CONCAT44(uStack_364,local_368),CONCAT44(uStack_36c,uStack_370),1);
    }
    if (lStack_340 != 0) {
      (*(code *)PTR___rust_dealloc_001e0298)(local_338,lStack_340,1);
    }
    puVar3 = PTR___rust_dealloc_001e0298;
    lVar2 = CONCAT44(uStack_34c,uStack_350);
    if (local_348 != 0) {
      puVar6 = (undefined8 *)(lVar2 + 8);
      lVar5 = local_348;
      do {
        if (puVar6[-1] != 0) {
          (*(code *)puVar3)(*puVar6,puVar6[-1],1);
        }
        puVar6 = puVar6 + 3;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    if (CONCAT44(uStack_354,local_358) != 0) {
      (*(code *)PTR___rust_dealloc_001e0298)(lVar2,CONCAT44(uStack_354,local_358) * 0x18,8);
    }
  }
  else {
    (*(code *)PTR_memcpy_001e02f8)(&local_388,&uStack_1d0,0x1a0);
    if ((int)*param_1 != 2) {
      if (param_1[8] != 0) {
        (*(code *)PTR___rust_dealloc_001e0298)(param_1[9],param_1[8],1);
      }
      if (param_1[0xb] != 0) {
        (*(code *)PTR___rust_dealloc_001e0298)(param_1[0xc],param_1[0xb],1);
      }
      if (param_1[0xe] != 0) {
        (*(code *)PTR___rust_dealloc_001e0298)(param_1[0xf],param_1[0xe] << 3,8);
      }
      if (param_1[0x11] != 0) {
        (*(code *)PTR___rust_dealloc_001e0298)(param_1[0x12],param_1[0x11],1);
      }
    }
    *param_1 = local_1e0;
    param_1[1] = CONCAT44(uStack_1d4,local_1d8);
    (*(code *)PTR_memcpy_001e02f8)(param_1 + 2,&local_388,0x1a0);
    uVar4 = 0;
  }
  if (local_418 != 0) {
    (*(code *)PTR___rust_dealloc_001e0298)(local_410,local_418,1);
  }
  return uVar4;
}


