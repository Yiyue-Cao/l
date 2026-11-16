// ELF address 0x00000000000b2770; future_backtest_sdk::context::StrategyContext::is_should_lock

/* future_backtest_sdk::context::StrategyContext::is_should_lock */

ulong __rustcall
future_backtest_sdk::context::StrategyContext::is_should_lock
          (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  auVar3 = (*(code *)PTR_to_cstring_00203da0)(param_2,param_3);
  puVar1 = auVar3._0_8_;
  uVar2 = (*(code *)PTR_fb_ctx_is_should_lock_00204370)(*(undefined8 *)(param_1 + 0x30),puVar1);
  *puVar1 = 0;
  if (auVar3._8_8_ != 0) {
    uVar2 = uVar2 & 0xffffffff;
    (*(code *)PTR___rust_dealloc_00203c78)(puVar1,auVar3._8_8_,1);
  }
  return uVar2;
}


