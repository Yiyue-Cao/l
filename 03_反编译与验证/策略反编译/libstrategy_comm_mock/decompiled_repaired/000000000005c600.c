// ELF address 0x000000000005c600; strategy_comm_mock::__fb_plugin_impl::on_signal

/* strategy_comm_mock::__fb_plugin_impl::on_signal */

undefined8 __rustcall
strategy_comm_mock::__fb_plugin_impl::on_signal
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  
                    /* try { // try from 0015c610 to 0015c61d has its CatchHandler @ 0015c775 */
  (*(code *)PTR_to_signal_001e0698)(&local_a8);
  local_b0 = 0;
  local_e8[0] = 0x8000000000000000;
  local_d0 = 0x8000000000000000;
                    /* try { // try from 0015c646 to 0015c65a has its CatchHandler @ 0015c77b */
  local_b8 = param_3;
  lVar1 = _<strategy_comm_mock::StrategyComm3_as_future_backtest_sdk::plugin::StrategyPlugin>::
          on_signal(param_1,&local_a8,local_e8);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    local_128 = &local_130;
    local_120 = PTR_fmt_001e0680;
    local_118 = &PTR_s__fb_plugin__on_signal_error__001db0d8;
    local_110 = 2;
    local_f8 = 0;
    local_108 = &local_128;
    local_100 = 1;
                    /* try { // try from 0015c6ac to 0015c6b6 has its CatchHandler @ 0015c762 */
    local_130 = lVar1;
    (*(code *)PTR__eprint_001e0688)(&local_118);
                    /* try { // try from 0015c6b7 to 0015c6c1 has its CatchHandler @ 0015c77b */
    (*(code *)PTR_drop_001e0658)(&local_130);
    uVar2 = 0xffffffff;
  }
  core::ptr::drop_in_place<future_backtest_sdk::context::StrategyContext>(local_e8);
  if (local_a8 != 0) {
    (*(code *)PTR___rust_dealloc_001e0298)(local_a0,local_a8,1);
  }
  if (local_90 != 0) {
    (*(code *)PTR___rust_dealloc_001e0298)(local_88,local_90,1);
  }
  if (local_78 != 0) {
    (*(code *)PTR___rust_dealloc_001e0298)(local_70,local_78,1);
  }
  if (local_60 != 0) {
    (*(code *)PTR___rust_dealloc_001e0298)(local_58,local_60,1);
  }
  return uVar2;
}


