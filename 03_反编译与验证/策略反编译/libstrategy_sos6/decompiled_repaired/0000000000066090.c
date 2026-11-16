// ELF address 0x0000000000066090; strategy_sos6::__fb_plugin_impl::on_depth

/* strategy_sos6::__fb_plugin_impl::on_depth */

undefined8 __rustcall
strategy_sos6::__fb_plugin_impl::on_depth(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_150 [3];
  undefined8 local_138;
  undefined8 local_120;
  undefined8 local_118;
  undefined1 local_110 [32];
  long local_f0;
  undefined8 local_e8;
  
                    /* try { // try from 0016609b to 001660a5 has its CatchHandler @ 001660f7 */
  (*(code *)PTR_to_depth_001dd420)(local_110);
  local_118 = 0;
  local_150[0] = 0x8000000000000000;
  local_138 = 0x8000000000000000;
  local_120 = param_3;
  core::ptr::drop_in_place<future_backtest_sdk::context::StrategyContext>(local_150);
  if (local_f0 != 0) {
    (*(code *)PTR___rust_dealloc_001dd030)(local_e8,local_f0,1);
  }
  return 0;
}


