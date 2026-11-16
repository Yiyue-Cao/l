// ELF address 0x0000000000050090; <strategy_comm4::StrategyComm4 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin

/* _<strategy_comm4::StrategyComm4 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin */

undefined8 __rustcall
_<strategy_comm4::StrategyComm4_as_future_backtest_sdk::plugin::StrategyPlugin>::on_begin
          (long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long local_a58;
  long local_a50;
  ulong local_a48;
  long local_a40;
  ulong local_a38;
  undefined4 *local_a30;
  undefined *local_a28;
  long *local_a20;
  code *local_a18;
  undefined **local_a10;
  undefined8 local_a08;
  undefined4 **local_a00;
  undefined8 local_9f8;
  undefined8 local_9f0;
  undefined1 local_9e0 [24];
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
  undefined4 local_998;
  undefined4 uStack_994;
  undefined4 uStack_990;
  undefined4 uStack_98c;
  long local_988;
  long lStack_980;
  undefined8 local_978;
  undefined8 uStack_970;
  long local_500;
  undefined4 local_4f8;
  undefined4 uStack_4f4;
  undefined4 uStack_4f0;
  undefined4 uStack_4ec;
  undefined4 local_4e8;
  undefined4 uStack_4e4;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  undefined4 local_4d8;
  undefined4 uStack_4d4;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined4 local_4c8;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  long local_4b8;
  long lStack_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  
  (*(code *)PTR_custom_config_001f1208)(&local_a58);
                    /* try { // try from 001500b9 to 001500e7 has its CatchHandler @ 0015033d */
  _<toml::de::Deserializer_as_serde_core::de::Deserializer>::deserialize_struct
            (&local_500,local_a50,local_a48,"Comm4Params",0xb,
             &PTR_s_signal_modepv1_alphacost_alphasi_001eae60,0x37);
  if (local_500 == 2) {
    local_978 = local_4a8;
    uStack_970 = uStack_4a0;
    local_988 = local_4b8;
    lStack_980 = lStack_4b0;
    local_998 = local_4c8;
    uStack_994 = uStack_4c4;
    uStack_990 = uStack_4c0;
    uStack_98c = uStack_4bc;
    local_9a8 = local_4d8;
    uStack_9a4 = uStack_4d4;
    uStack_9a0 = uStack_4d0;
    uStack_99c = uStack_4cc;
    local_9b8 = local_4e8;
    uStack_9b4 = uStack_4e4;
    uStack_9b0 = uStack_4e0;
    uStack_9ac = uStack_4dc;
    local_9c8 = local_4f8;
    uStack_9c4 = uStack_4f4;
    uStack_9c0 = uStack_4f0;
    uStack_9bc = uStack_4ec;
    local_a38 = 200;
    if (local_a48 < 200) {
      local_a38 = local_a48;
    }
    if ((200 < local_a48) && (*(char *)(local_a50 + local_a38) < -0x40)) {
                    /* try { // try from 00150326 to 0015033a has its CatchHandler @ 00150342 */
      (*(code *)PTR_slice_error_fail_001f1220)
                (local_a50,local_a48,0,local_a38,&PTR_s_strategies_comm_strategy_strateg_001eb1d0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    local_a40 = local_a50;
    local_a30 = &local_9c8;
    local_a28 = PTR_fmt_001f1210;
    local_a20 = &local_a40;
    local_a18 = _<&T_as_core::fmt::Display>::fmt;
    local_a10 = &PTR_s__custom__parse_error____Raw__001eb1e8;
    local_a08 = 2;
    local_9f0 = 0;
    local_a00 = &local_a30;
    local_9f8 = 2;
                    /* try { // try from 001501cf to 001501ee has its CatchHandler @ 00150342 */
    (*(code *)PTR_format_inner_001f1218)(local_9e0,&local_a10);
    uVar4 = anyhow::error::_<impl_anyhow::Error>::msg(local_9e0);
    if (CONCAT44(uStack_9ac,uStack_9b0) != 0) {
      (*(code *)PTR___rust_dealloc_001f10f8)
                (CONCAT44(uStack_9a4,local_9a8),CONCAT44(uStack_9ac,uStack_9b0),1);
    }
    if (lStack_980 != 0) {
      (*(code *)PTR___rust_dealloc_001f10f8)(local_978,lStack_980,1);
    }
    puVar3 = PTR___rust_dealloc_001f10f8;
    lVar2 = CONCAT44(uStack_98c,uStack_990);
    if (local_988 != 0) {
      puVar6 = (undefined8 *)(lVar2 + 8);
      lVar5 = local_988;
      do {
        if (puVar6[-1] != 0) {
          (*(code *)puVar3)(*puVar6,puVar6[-1],1);
        }
        puVar6 = puVar6 + 3;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    if (CONCAT44(uStack_994,local_998) != 0) {
      (*(code *)PTR___rust_dealloc_001f10f8)(lVar2,CONCAT44(uStack_994,local_998) * 0x18,8);
    }
  }
  else {
    (*(code *)PTR_memcpy_001f1158)(&local_9c8,&uStack_4f0,0x4c0);
    if ((int)*param_1 != 2) {
      core::ptr::drop_in_place<strategy_comm4::Comm4Params>(param_1);
    }
    *param_1 = local_500;
    param_1[1] = CONCAT44(uStack_4f4,local_4f8);
    (*(code *)PTR_memcpy_001f1158)(param_1 + 2,&local_9c8,0x4c0);
    uVar4 = 0;
  }
  if (local_a58 != 0) {
    (*(code *)PTR___rust_dealloc_001f10f8)(local_a50,local_a58,1);
  }
  return uVar4;
}


