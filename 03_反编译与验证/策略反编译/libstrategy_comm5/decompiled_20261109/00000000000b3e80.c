// ELF address 0x00000000000b3e80; future_backtest_sdk::context::StrategyContext::cancel_order

/* future_backtest_sdk::context::StrategyContext::cancel_order */

undefined8 __rustcall
future_backtest_sdk::context::StrategyContext::cancel_order
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  undefined *puVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 *local_98;
  code *local_90;
  undefined8 *local_88;
  code *local_80;
  undefined **local_78;
  undefined8 local_70;
  undefined1 **local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_48 [24];
  
  puVar1 = PTR_to_cstring_00203da0;
  local_b8 = param_2;
  local_b0 = param_3;
  local_a8 = param_4;
  local_a0 = param_5;
  auVar6 = (*(code *)PTR_to_cstring_00203da0)(param_2,param_3);
  puVar3 = auVar6._0_8_;
                    /* try { // try from 001b3ec2 to 001b3ec9 has its CatchHandler @ 001b3fd5 */
  auVar7 = (*(code *)puVar1)(param_4,param_5);
  puVar4 = auVar7._0_8_;
  iVar2 = (*(code *)PTR_fb_ctx_cancel_order_00204430)(*(undefined8 *)(param_1 + 0x30),puVar3,puVar4)
  ;
  if (iVar2 < 0) {
    local_90 = _<&T_as_core::fmt::Display>::fmt;
    local_88 = &local_a8;
    local_80 = _<&T_as_core::fmt::Display>::fmt;
    local_78 = &PTR_DAT_002006d8;
    local_70 = 2;
    local_58 = 0;
    local_68 = &local_98;
    local_60 = 2;
                    /* try { // try from 001b3f85 to 001b3f9e has its CatchHandler @ 001b3fb5 */
    local_98 = (undefined1 *)&local_b8;
    (*(code *)PTR_format_inner_00203d18)(local_48,&local_78);
    uVar5 = anyhow::error::_<impl_anyhow::Error>::msg(local_48);
    *puVar4 = 0;
  }
  else {
    uVar5 = 0;
    *puVar4 = 0;
  }
  if (auVar7._8_8_ != 0) {
    (*(code *)PTR___rust_dealloc_00203c78)(puVar4,auVar7._8_8_,1);
  }
  *puVar3 = 0;
  if (auVar6._8_8_ != 0) {
    (*(code *)PTR___rust_dealloc_00203c78)(puVar3,auVar6._8_8_,1);
  }
  return uVar5;
}


