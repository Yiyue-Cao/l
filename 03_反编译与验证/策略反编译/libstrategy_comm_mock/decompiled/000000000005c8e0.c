// ELF address 0x000000000005c8e0; strategy_comm_mock::__fb_plugin_impl::on_finish

/* strategy_comm_mock::__fb_plugin_impl::on_finish */

undefined8 __rustcall
strategy_comm_mock::__fb_plugin_impl::on_finish(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long local_90;
  long *local_88;
  undefined *local_80;
  undefined **local_78;
  undefined8 local_70;
  undefined8 **local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_48 [3];
  undefined8 local_30;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_48[0] = 0x8000000000000000;
  local_30 = 0x8000000000000000;
                    /* try { // try from 0015c910 to 0015c919 has its CatchHandler @ 0015c9b2 */
  local_18 = param_2;
  lVar1 = _<strategy_comm_mock::StrategyComm3_as_future_backtest_sdk::plugin::StrategyPlugin>::
          on_finish(param_1,local_48);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    local_88 = &local_90;
    local_80 = PTR_fmt_001e0680;
    local_78 = &PTR_s__fb_plugin__on_finish_error__001db118;
    local_70 = 2;
    local_58 = 0;
    local_68 = &local_88;
    local_60 = 1;
                    /* try { // try from 0015c96b to 0015c975 has its CatchHandler @ 0015c99f */
    local_90 = lVar1;
    (*(code *)PTR__eprint_001e0688)(&local_78);
                    /* try { // try from 0015c976 to 0015c980 has its CatchHandler @ 0015c9b2 */
    (*(code *)PTR_drop_001e0658)(&local_90);
    uVar2 = 0xffffffff;
  }
  core::ptr::drop_in_place<future_backtest_sdk::context::StrategyContext>(local_48);
  return uVar2;
}


