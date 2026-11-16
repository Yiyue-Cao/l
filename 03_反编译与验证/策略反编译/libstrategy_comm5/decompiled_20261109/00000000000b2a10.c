// ELF address 0x00000000000b2a10; future_backtest_sdk::context::StrategyContext::price_step

/* future_backtest_sdk::context::StrategyContext::price_step */

undefined8 __rustcall
future_backtest_sdk::context::StrategyContext::price_step
          (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  auVar3 = (*(code *)PTR_to_cstring_00203da0)(param_2,param_3);
  puVar1 = auVar3._0_8_;
  uVar2 = (*(code *)PTR_fb_ctx_price_step_00204398)(*(undefined8 *)(param_1 + 0x30),puVar1);
  *puVar1 = 0;
  if (auVar3._8_8_ != 0) {
    (*(code *)PTR___rust_dealloc_00203c78)(puVar1,auVar3._8_8_,1);
  }
  return uVar2;
}


