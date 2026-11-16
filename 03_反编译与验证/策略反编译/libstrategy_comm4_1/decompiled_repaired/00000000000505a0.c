// ELF address 0x00000000000505a0; <strategy_comm4_1::StrategyComm41 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin

/* _<strategy_comm4_1::StrategyComm41 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin */

undefined8 __rustcall
_<strategy_comm4_1::StrategyComm41_as_future_backtest_sdk::plugin::StrategyPlugin>::on_begin
          (long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long local_a68;
  long local_a60;
  ulong local_a58;
  long local_a50;
  ulong local_a48;
  undefined4 *local_a40;
  undefined *local_a38;
  long *local_a30;
  code *local_a28;
  undefined **local_a20;
  undefined8 local_a18;
  undefined4 **local_a10;
  undefined8 local_a08;
  undefined8 local_a00;
  undefined1 local_9f0 [24];
  undefined4 local_9d8;
  undefined4 uStack_9d4;
  undefined4 uStack_9d0;
  undefined4 uStack_9cc;
  undefined4 local_9c8;
  undefined4 uStack_9c4;
  undefined4 uStack_9c0;
  undefined4 uStack_9bc;
  undefined4 local_9b8;
  undefined4 uStack_9b4;
  undefined4 uStack_9b0;
  undefined4 uStack_9ac;
  undefined4 local_9a8;
  undefined4 uStack_9a4;
  undefined4 uStack_9a0;
  undefined4 uStack_99c;
  long local_998;
  long lStack_990;
  undefined8 local_988;
  undefined8 uStack_980;
  long local_508;
  undefined4 local_500;
  undefined4 uStack_4fc;
  undefined4 uStack_4f8;
  undefined4 uStack_4f4;
  undefined4 local_4f0;
  undefined4 uStack_4ec;
  undefined4 uStack_4e8;
  undefined4 uStack_4e4;
  undefined4 local_4e0;
  undefined4 uStack_4dc;
  undefined4 uStack_4d8;
  undefined4 uStack_4d4;
  undefined4 local_4d0;
  undefined4 uStack_4cc;
  undefined4 uStack_4c8;
  undefined4 uStack_4c4;
  long local_4c0;
  long lStack_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  
  (*(code *)PTR_custom_config_001f1ff8)(&local_a68);
                    /* try { // try from 001505c9 to 001505f7 has its CatchHandler @ 0015084d */
  _<toml::de::Deserializer_as_serde_core::de::Deserializer>::deserialize_struct
            (&local_508,local_a60,local_a58,"Comm4Params",0xb,
             &PTR_s_signal_modepv1_alphacost_alphasi_001ebc30,0x38);
  if (local_508 == 2) {
    local_988 = local_4b0;
    uStack_980 = uStack_4a8;
    local_998 = local_4c0;
    lStack_990 = lStack_4b8;
    local_9a8 = local_4d0;
    uStack_9a4 = uStack_4cc;
    uStack_9a0 = uStack_4c8;
    uStack_99c = uStack_4c4;
    local_9b8 = local_4e0;
    uStack_9b4 = uStack_4dc;
    uStack_9b0 = uStack_4d8;
    uStack_9ac = uStack_4d4;
    local_9c8 = local_4f0;
    uStack_9c4 = uStack_4ec;
    uStack_9c0 = uStack_4e8;
    uStack_9bc = uStack_4e4;
    local_9d8 = local_500;
    uStack_9d4 = uStack_4fc;
    uStack_9d0 = uStack_4f8;
    uStack_9cc = uStack_4f4;
    local_a48 = 200;
    if (local_a58 < 200) {
      local_a48 = local_a58;
    }
    if ((200 < local_a58) && (*(char *)(local_a60 + local_a48) < -0x40)) {
                    /* try { // try from 00150836 to 0015084a has its CatchHandler @ 00150852 */
      (*(code *)PTR_slice_error_fail_001f2010)
                (local_a60,local_a58,0,local_a48,&PTR_s_strategies_comm_strategy_strateg_001ebfb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    local_a50 = local_a60;
    local_a40 = &local_9d8;
    local_a38 = PTR_fmt_001f2000;
    local_a30 = &local_a50;
    local_a28 = _<&T_as_core::fmt::Display>::fmt;
    local_a20 = &PTR_s__custom__parse_error____Raw__001ebfc8;
    local_a18 = 2;
    local_a00 = 0;
    local_a10 = &local_a40;
    local_a08 = 2;
                    /* try { // try from 001506df to 001506fe has its CatchHandler @ 00150852 */
    (*(code *)PTR_format_inner_001f2008)(local_9f0,&local_a20);
    uVar4 = anyhow::error::_<impl_anyhow::Error>::msg(local_9f0);
    if (CONCAT44(uStack_9bc,uStack_9c0) != 0) {
      (*(code *)PTR___rust_dealloc_001f1ee8)
                (CONCAT44(uStack_9b4,local_9b8),CONCAT44(uStack_9bc,uStack_9c0),1);
    }
    if (lStack_990 != 0) {
      (*(code *)PTR___rust_dealloc_001f1ee8)(local_988,lStack_990,1);
    }
    puVar3 = PTR___rust_dealloc_001f1ee8;
    lVar2 = CONCAT44(uStack_99c,uStack_9a0);
    if (local_998 != 0) {
      puVar6 = (undefined8 *)(lVar2 + 8);
      lVar5 = local_998;
      do {
        if (puVar6[-1] != 0) {
          (*(code *)puVar3)(*puVar6,puVar6[-1],1);
        }
        puVar6 = puVar6 + 3;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    if (CONCAT44(uStack_9a4,local_9a8) != 0) {
      (*(code *)PTR___rust_dealloc_001f1ee8)(lVar2,CONCAT44(uStack_9a4,local_9a8) * 0x18,8);
    }
  }
  else {
    (*(code *)PTR_memcpy_001f1f48)(&local_9d8,&uStack_4f8,0x4c8);
    if ((int)*param_1 != 2) {
      core::ptr::drop_in_place<strategy_comm4_1::Comm4Params>(param_1);
    }
    *param_1 = local_508;
    param_1[1] = CONCAT44(uStack_4fc,local_500);
    (*(code *)PTR_memcpy_001f1f48)(param_1 + 2,&local_9d8,0x4c8);
    uVar4 = 0;
  }
  if (local_a68 != 0) {
    (*(code *)PTR___rust_dealloc_001f1ee8)(local_a60,local_a68,1);
  }
  return uVar4;
}


