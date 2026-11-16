// ELF address 0x0000000000053f70; strategy_tm5::__fb_plugin_impl::on_signal

/* strategy_tm5::__fb_plugin_impl::on_signal */

undefined8 __rustcall
strategy_tm5::__fb_plugin_impl::on_signal(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long local_130;
  long *local_128;
  undefined *local_120;
  undefined **local_118;
  undefined8 local_110;
  undefined8 **local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_e8 [3];
  undefined8 local_d0;
  undefined8 local_b8;
  undefined8 local_b0;
  long local_a8;
  undefined8 local_a0;
  long local_90;
  undefined8 local_88;
  long local_78;
  undefined8 local_70;
  long local_60;
  undefined8 local_58;
  
                    /* try { // try from 00153f80 to 00153f8d has its CatchHandler @ 001540e5 */
  (*(code *)PTR_to_signal_001cb638)(&local_a8);
  local_b0 = 0;
  local_e8[0] = 0x8000000000000000;
  local_d0 = 0x8000000000000000;
                    /* try { // try from 00153fb6 to 00153fca has its CatchHandler @ 001540eb */
  local_b8 = param_3;
  lVar1 = _<strategy_tm5::StrategyTM5_as_future_backtest_sdk::plugin::StrategyPlugin>::on_signal
                    (param_1,&local_a8,local_e8);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    local_128 = &local_130;
    local_120 = PTR_fmt_001cb628;
    local_118 = &PTR_DAT_001c6610;
    local_110 = 2;
    local_f8 = 0;
    local_108 = &local_128;
    local_100 = 1;
                    /* try { // try from 0015401c to 00154026 has its CatchHandler @ 001540d2 */
    local_130 = lVar1;
    (*(code *)PTR__eprint_001cb4a8)(&local_118);
                    /* try { // try from 00154027 to 00154031 has its CatchHandler @ 001540eb */
    (*(code *)PTR_drop_001cb560)(&local_130);
    uVar2 = 0xffffffff;
  }
  core::ptr::drop_in_place<future_backtest_sdk::context::StrategyContext>(local_e8);
  if (local_a8 != 0) {
    (*(code *)PTR___rust_dealloc_001cb2a8)(local_a0,local_a8,1);
  }
  if (local_90 != 0) {
    (*(code *)PTR___rust_dealloc_001cb2a8)(local_88,local_90,1);
  }
  if (local_78 != 0) {
    (*(code *)PTR___rust_dealloc_001cb2a8)(local_70,local_78,1);
  }
  if (local_60 != 0) {
    (*(code *)PTR___rust_dealloc_001cb2a8)(local_58,local_60,1);
  }
  return uVar2;
}


