// ELF address 0x00000000000b2690; future_backtest_sdk::context::StrategyContext::position

/* future_backtest_sdk::context::StrategyContext::position */

undefined8 __rustcall
future_backtest_sdk::context::StrategyContext::position
          (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auVar4 [16];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  
  auVar4 = (*(code *)PTR_to_cstring_00203da0)(param_2,param_3);
  puVar1 = auVar4._0_8_;
  local_38 = 0;
  uStack_30 = 0;
  (*(code *)PTR_fb_ctx_position_00204360)(*(undefined8 *)(param_1 + 0x30),puVar1,&local_38);
  uVar2 = (undefined4)local_38;
  uVar3 = (undefined4)((ulong)local_38 >> 0x20);
  *puVar1 = 0;
  if (auVar4._8_8_ != 0) {
    local_20 = local_38;
    local_28 = uStack_30;
    (*(code *)PTR___rust_dealloc_00203c78)(puVar1,auVar4._8_8_,1);
    uVar2 = (undefined4)local_20;
    uVar3 = (undefined4)((ulong)local_20 >> 0x20);
  }
  return CONCAT44(uVar3,uVar2);
}


