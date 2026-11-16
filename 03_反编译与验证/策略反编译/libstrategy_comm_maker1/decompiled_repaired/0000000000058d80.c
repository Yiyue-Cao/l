// ELF address 0x0000000000058d80; strategy_comm_maker1::__fb_plugin_impl::on_finish

/* strategy_comm_maker1::__fb_plugin_impl::on_finish */

undefined8 __rustcall
strategy_comm_maker1::__fb_plugin_impl::on_finish(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long local_90;
  long *local_88;
  undefined *local_80;
  undefined *local_78;
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
                    /* try { // try from 00158db0 to 00158db9 has its CatchHandler @ 00158e52 */
  local_18 = param_2;
  lVar1 = _<strategy_comm_maker1::StrategyCommMaker1_as_future_backtest_sdk::plugin::StrategyPlugin>
          ::on_finish(param_1,local_48);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    local_88 = &local_90;
    local_80 = PTR_fmt_001dd6d8;
    local_78 = &DAT_001d7df8;
    local_70 = 2;
    local_58 = 0;
    local_68 = &local_88;
    local_60 = 1;
                    /* try { // try from 00158e0b to 00158e15 has its CatchHandler @ 00158e3f */
    local_90 = lVar1;
    (*(code *)PTR__eprint_001dd6e0)(&local_78);
                    /* try { // try from 00158e16 to 00158e20 has its CatchHandler @ 00158e52 */
    (*(code *)PTR_drop_001dd6e8)(&local_90);
    uVar2 = 0xffffffff;
  }
  core::ptr::drop_in_place<future_backtest_sdk::context::StrategyContext>(local_48);
  return uVar2;
}


