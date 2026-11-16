// ELF address 0x000000000007a810; core::ptr::drop_in_place<future_backtest_sdk::types::MarketDepth>

/* WARNING: Switch with 1 destination removed at 0x0017a823 */
/* core::ptr::drop_in_place<future_backtest_sdk::types::MarketDepth> */

void __rustcall
core::ptr::drop_in_place<future_backtest_sdk::types::MarketDepth>(long param_1,undefined8 param_2)

{
  if (param_1 == 0) {
    return;
  }
  (*(code *)PTR_free_002047f8)(param_2,param_1,1);
  return;
}


