// ELF address 0x00000000000b3030; future_backtest_sdk::context::StrategyContext::margin_filter

/* future_backtest_sdk::context::StrategyContext::margin_filter */

uint __rustcall
future_backtest_sdk::context::StrategyContext::margin_filter(long param_1,byte param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = 0xffffffff;
  if (param_2 != 4) {
    uVar2 = (ulong)param_2;
  }
  uVar1 = (*(code *)PTR_fb_ctx_margin_filter_002043e0)
                    (*(undefined8 *)(param_1 + 0x30),param_2 != 4,uVar2);
  if (3 < uVar1) {
    uVar1 = 4;
  }
  return uVar1;
}


