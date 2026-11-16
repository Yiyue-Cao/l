// ELF address 0x0000000000068840; strategy_sm4::__fb_plugin_impl::on_signal

/* strategy_sm4::__fb_plugin_impl::on_signal */

undefined8 __rustcall
strategy_sm4::__fb_plugin_impl::on_signal(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long local_130;
  long *local_128;
  undefined *local_120;
  undefined *local_118;
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
  
                    /* try { // try from 00168850 to 0016885d has its CatchHandler @ 001689b5 */
  (*(code *)PTR_to_signal_001e7d28)(&local_a8);
  local_b0 = 0;
  local_e8[0] = 0x8000000000000000;
  local_d0 = 0x8000000000000000;
                    /* try { // try from 00168886 to 0016889a has its CatchHandler @ 001689bb */
  local_b8 = param_3;
  lVar1 = _<strategy_sm4::StrategySM4_as_future_backtest_sdk::plugin::StrategyPlugin>::on_signal
                    (param_1,&local_a8,local_e8);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    local_128 = &local_130;
    local_120 = PTR_fmt_001e7d10;
    local_118 = &DAT_001e26b8;
    local_110 = 2;
    local_f8 = 0;
    local_108 = &local_128;
    local_100 = 1;
                    /* try { // try from 001688ec to 001688f6 has its CatchHandler @ 001689a2 */
    local_130 = lVar1;
    (*(code *)PTR__eprint_001e7a88)(&local_118);
                    /* try { // try from 001688f7 to 00168901 has its CatchHandler @ 001689bb */
    (*(code *)PTR_drop_001e7d18)(&local_130);
    uVar2 = 0xffffffff;
  }
  core::ptr::drop_in_place<future_backtest_sdk::context::StrategyContext>(local_e8);
  if (local_a8 != 0) {
    (*(code *)PTR___rust_dealloc_001e78c8)(local_a0,local_a8,1);
  }
  if (local_90 != 0) {
    (*(code *)PTR___rust_dealloc_001e78c8)(local_88,local_90,1);
  }
  if (local_78 != 0) {
    (*(code *)PTR___rust_dealloc_001e78c8)(local_70,local_78,1);
  }
  if (local_60 != 0) {
    (*(code *)PTR___rust_dealloc_001e78c8)(local_58,local_60,1);
  }
  return uVar2;
}


