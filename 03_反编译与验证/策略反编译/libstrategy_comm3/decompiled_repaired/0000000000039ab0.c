// ELF address 0x0000000000039ab0; <strategy_comm3::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin

/* _<strategy_comm3::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin */

undefined8 __rustcall
_<strategy_comm3::StrategyComm3_as_future_backtest_sdk::plugin::StrategyPlugin>::on_begin
          (long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long local_3e8;
  long local_3e0;
  ulong local_3d8;
  long local_3d0;
  ulong local_3c8;
  undefined4 *local_3c0;
  undefined *local_3b8;
  long *local_3b0;
  code *local_3a8;
  undefined **local_3a0;
  undefined8 local_398;
  undefined4 **local_390;
  undefined8 local_388;
  undefined8 local_380;
  undefined1 local_370 [24];
  undefined4 local_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 local_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  long local_318;
  long lStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  long local_1c8;
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
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  long local_180;
  long lStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  
  (*(code *)PTR_custom_config_001dcfd0)(&local_3e8);
                    /* try { // try from 00139ad9 to 00139b07 has its CatchHandler @ 00139dc3 */
  _<toml::de::Deserializer_as_serde_core::de::Deserializer>::deserialize_struct
            (&local_1c8,local_3e0,local_3d8,"Comm3Params",0xb,
             &PTR_s_signal_modepv1_alphacost_alphasi_001d7070,0x28);
  if (local_1c8 == 2) {
    local_308 = local_170;
    uStack_300 = uStack_168;
    local_318 = local_180;
    lStack_310 = lStack_178;
    local_328 = local_190;
    uStack_324 = uStack_18c;
    uStack_320 = uStack_188;
    uStack_31c = uStack_184;
    local_338 = local_1a0;
    uStack_334 = uStack_19c;
    uStack_330 = uStack_198;
    uStack_32c = uStack_194;
    local_348 = local_1b0;
    uStack_344 = uStack_1ac;
    uStack_340 = uStack_1a8;
    uStack_33c = uStack_1a4;
    local_358 = local_1c0;
    uStack_354 = uStack_1bc;
    uStack_350 = uStack_1b8;
    uStack_34c = uStack_1b4;
    local_3c8 = 200;
    if (local_3d8 < 200) {
      local_3c8 = local_3d8;
    }
    if ((200 < local_3d8) && (*(char *)(local_3e0 + local_3c8) < -0x40)) {
                    /* try { // try from 00139dac to 00139dc0 has its CatchHandler @ 00139dc8 */
      (*(code *)PTR_slice_error_fail_001dcfe8)
                (local_3e0,local_3d8,0,local_3c8,&PTR_s_strategies_comm_strategy_strateg_001d72f0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    local_3d0 = local_3e0;
    local_3c0 = &local_358;
    local_3b8 = PTR_fmt_001dcfd8;
    local_3b0 = &local_3d0;
    local_3a8 = _<&T_as_core::fmt::Display>::fmt;
    local_3a0 = &PTR_s__custom__parse_error____Raw__001d7308;
    local_398 = 2;
    local_380 = 0;
    local_390 = &local_3c0;
    local_388 = 2;
                    /* try { // try from 00139bef to 00139c0e has its CatchHandler @ 00139dc8 */
    (*(code *)PTR_format_inner_001dcfe0)(local_370,&local_3a0);
    uVar4 = anyhow::error::_<impl_anyhow::Error>::msg(local_370);
    if (CONCAT44(uStack_33c,uStack_340) != 0) {
      (*(code *)PTR___rust_dealloc_001dcef0)
                (CONCAT44(uStack_334,local_338),CONCAT44(uStack_33c,uStack_340),1);
    }
    if (lStack_310 != 0) {
      (*(code *)PTR___rust_dealloc_001dcef0)(local_308,lStack_310,1);
    }
    puVar3 = PTR___rust_dealloc_001dcef0;
    lVar2 = CONCAT44(uStack_31c,uStack_320);
    if (local_318 != 0) {
      puVar6 = (undefined8 *)(lVar2 + 8);
      lVar5 = local_318;
      do {
        if (puVar6[-1] != 0) {
          (*(code *)puVar3)(*puVar6,puVar6[-1],1);
        }
        puVar6 = puVar6 + 3;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    if (CONCAT44(uStack_324,local_328) != 0) {
      (*(code *)PTR___rust_dealloc_001dcef0)(lVar2,CONCAT44(uStack_324,local_328) * 0x18,8);
    }
  }
  else {
    (*(code *)PTR_memcpy_001dcf50)(&local_358,&uStack_1b8,0x188);
    if ((int)*param_1 != 2) {
      if (param_1[8] != 0) {
        (*(code *)PTR___rust_dealloc_001dcef0)(param_1[9],param_1[8],1);
      }
      if (param_1[0xb] != 0) {
        (*(code *)PTR___rust_dealloc_001dcef0)(param_1[0xc],param_1[0xb],1);
      }
      if (param_1[0xe] != 0) {
        (*(code *)PTR___rust_dealloc_001dcef0)(param_1[0xf],param_1[0xe] << 3,8);
      }
      if (param_1[0x11] != 0) {
        (*(code *)PTR___rust_dealloc_001dcef0)(param_1[0x12],param_1[0x11],1);
      }
    }
    *param_1 = local_1c8;
    param_1[1] = CONCAT44(uStack_1bc,local_1c0);
    (*(code *)PTR_memcpy_001dcf50)(param_1 + 2,&local_358,0x188);
    uVar4 = 0;
  }
  if (local_3e8 != 0) {
    (*(code *)PTR___rust_dealloc_001dcef0)(local_3e0,local_3e8,1);
  }
  return uVar4;
}


