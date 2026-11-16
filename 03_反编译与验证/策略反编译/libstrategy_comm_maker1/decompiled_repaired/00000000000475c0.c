// ELF address 0x00000000000475c0; <strategy_comm_maker1::StrategyCommMaker1 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin

/* _<strategy_comm_maker1::StrategyCommMaker1 as
   future_backtest_sdk::plugin::StrategyPlugin>::on_begin */

undefined8 __rustcall
_<strategy_comm_maker1::StrategyCommMaker1_as_future_backtest_sdk::plugin::StrategyPlugin>::on_begin
          (long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long local_3f8;
  long local_3f0;
  ulong local_3e8;
  long local_3e0;
  ulong local_3d8;
  undefined4 *local_3d0;
  undefined *local_3c8;
  long *local_3c0;
  code *local_3b8;
  undefined **local_3b0;
  undefined8 local_3a8;
  undefined4 **local_3a0;
  undefined8 local_398;
  undefined8 local_390;
  undefined1 local_380 [24];
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
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  long local_328;
  long lStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  long local_1d0;
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
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  long local_188;
  long lStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  
  (*(code *)PTR_custom_config_001dd4b0)(&local_3f8);
                    /* try { // try from 001475e9 to 00147617 has its CatchHandler @ 001478d3 */
  _<toml::de::Deserializer_as_serde_core::de::Deserializer>::deserialize_struct
            (&local_1d0,local_3f0,local_3e8,&DAT_00117a70,0x10,
             &PTR_s_signal_modepv1_alphacost_alphasi_001d74e0,0x28);
  if (local_1d0 == 2) {
    local_318 = local_178;
    uStack_310 = uStack_170;
    local_328 = local_188;
    lStack_320 = lStack_180;
    local_338 = local_198;
    uStack_334 = uStack_194;
    uStack_330 = uStack_190;
    uStack_32c = uStack_18c;
    local_348 = local_1a8;
    uStack_344 = uStack_1a4;
    uStack_340 = uStack_1a0;
    uStack_33c = uStack_19c;
    local_358 = local_1b8;
    uStack_354 = uStack_1b4;
    uStack_350 = uStack_1b0;
    uStack_34c = uStack_1ac;
    local_368 = local_1c8;
    uStack_364 = uStack_1c4;
    uStack_360 = uStack_1c0;
    uStack_35c = uStack_1bc;
    local_3d8 = 200;
    if (local_3e8 < 200) {
      local_3d8 = local_3e8;
    }
    if ((200 < local_3e8) && (*(char *)(local_3f0 + local_3d8) < -0x40)) {
                    /* try { // try from 001478bc to 001478d0 has its CatchHandler @ 001478d8 */
      (*(code *)PTR_slice_error_fail_001dd4c8)
                (local_3f0,local_3e8,0,local_3d8,
                 &PTR_anon_0ab731c97b03f09d8447c1a9a198517a_17_llvm_10408552336170730617_001d7760);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    local_3e0 = local_3f0;
    local_3d0 = &local_368;
    local_3c8 = PTR_fmt_001dd4b8;
    local_3c0 = &local_3e0;
    local_3b8 = _<&T_as_core::fmt::Display>::fmt;
    local_3b0 = &PTR_s__custom__parse_error____Raw__001d7778;
    local_3a8 = 2;
    local_390 = 0;
    local_3a0 = &local_3d0;
    local_398 = 2;
                    /* try { // try from 001476ff to 0014771e has its CatchHandler @ 001478d8 */
    (*(code *)PTR_format_inner_001dd4c0)(local_380,&local_3b0);
    uVar4 = anyhow::error::_<impl_anyhow::Error>::msg(local_380);
    if (CONCAT44(uStack_34c,uStack_350) != 0) {
      (*(code *)PTR___rust_dealloc_001dd388)
                (CONCAT44(uStack_344,local_348),CONCAT44(uStack_34c,uStack_350),1);
    }
    if (lStack_320 != 0) {
      (*(code *)PTR___rust_dealloc_001dd388)(local_318,lStack_320,1);
    }
    puVar3 = PTR___rust_dealloc_001dd388;
    lVar2 = CONCAT44(uStack_32c,uStack_330);
    if (local_328 != 0) {
      puVar6 = (undefined8 *)(lVar2 + 8);
      lVar5 = local_328;
      do {
        if (puVar6[-1] != 0) {
          (*(code *)puVar3)(*puVar6,puVar6[-1],1);
        }
        puVar6 = puVar6 + 3;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    if (CONCAT44(uStack_334,local_338) != 0) {
      (*(code *)PTR___rust_dealloc_001dd388)(lVar2,CONCAT44(uStack_334,local_338) * 0x18,8);
    }
  }
  else {
    (*(code *)PTR_memcpy_001dd3e8)(&local_368,&uStack_1c0,400);
    if ((int)*param_1 != 2) {
      if (param_1[8] != 0) {
        (*(code *)PTR___rust_dealloc_001dd388)(param_1[9],param_1[8],1);
      }
      if (param_1[0xb] != 0) {
        (*(code *)PTR___rust_dealloc_001dd388)(param_1[0xc],param_1[0xb],1);
      }
      if (param_1[0xe] != 0) {
        (*(code *)PTR___rust_dealloc_001dd388)(param_1[0xf],param_1[0xe] << 3,8);
      }
      if (param_1[0x11] != 0) {
        (*(code *)PTR___rust_dealloc_001dd388)(param_1[0x12],param_1[0x11],1);
      }
    }
    *param_1 = local_1d0;
    param_1[1] = CONCAT44(uStack_1c4,local_1c8);
    (*(code *)PTR_memcpy_001dd3e8)(param_1 + 2,&local_368,400);
    uVar4 = 0;
  }
  if (local_3f8 != 0) {
    (*(code *)PTR___rust_dealloc_001dd388)(local_3f0,local_3f8,1);
  }
  return uVar4;
}


