// ELF address 0x000000000007a130; future_backtest_sdk::context::StrategyContext::log_debug

/* WARNING: Switch with 1 destination removed at 0x0017a196 */
/* future_backtest_sdk::context::StrategyContext::log_debug */

void __rustcall future_backtest_sdk::context::StrategyContext::log_debug(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 auVar4 [16];
  
  lVar1 = *param_2;
  lVar2 = param_2[1];
                    /* try { // try from 0017a147 to 0017a14f has its CatchHandler @ 0017a1a6 */
  auVar4 = (*(code *)PTR_to_cstring_00203da0)(lVar2,param_2[2]);
  puVar3 = auVar4._0_8_;
  if (lVar1 != 0) {
    (*(code *)PTR___rust_dealloc_00203c78)(lVar2,lVar1,1);
  }
  (*(code *)PTR_fb_ctx_log_debug_00203fb0)(*(undefined8 *)(param_1 + 0x30),puVar3);
  *puVar3 = 0;
  if (auVar4._8_8_ == 0) {
    return;
  }
  (*(code *)PTR_free_002047f8)(puVar3,auVar4._8_8_,1);
  return;
}


