// ELF address 0x0000000000051cd0; strategy_sm1::__fb_plugin_impl::on_finish

/* strategy_sm1::__fb_plugin_impl::on_finish */

undefined8 __rustcall
strategy_sm1::__fb_plugin_impl::on_finish(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_40 [3];
  undefined8 local_28;
  undefined8 local_10;
  undefined8 local_8;
  
  local_8 = 0;
  local_40[0] = 0x8000000000000000;
  local_28 = 0x8000000000000000;
  local_10 = param_2;
  core::ptr::drop_in_place<future_backtest_sdk::context::StrategyContext>(local_40);
  return 0;
}


