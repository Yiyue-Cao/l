// ELF address 0x0000000000070e10; strategy_sm3_1::__fb_plugin_impl::on_finish

/* strategy_sm3_1::__fb_plugin_impl::on_finish */

undefined8 __rustcall
strategy_sm3_1::__fb_plugin_impl::on_finish(undefined8 param_1,undefined8 param_2)

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
                    /* try { // try from 00170e40 to 00170e49 has its CatchHandler @ 00170ee2 */
  local_18 = param_2;
  lVar1 = _<strategy_sm3_1::StrategySM31_as_future_backtest_sdk::plugin::StrategyPlugin>::on_finish
                    (param_1,local_48);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    local_88 = &local_90;
    local_80 = PTR_fmt_001efa98;
    local_78 = &PTR_s__fb_plugin__on_finish_error__001ea638;
    local_70 = 2;
    local_58 = 0;
    local_68 = &local_88;
    local_60 = 1;
                    /* try { // try from 00170e9b to 00170ea5 has its CatchHandler @ 00170ecf */
    local_90 = lVar1;
    (*(code *)PTR__eprint_001ef820)(&local_78);
                    /* try { // try from 00170ea6 to 00170eb0 has its CatchHandler @ 00170ee2 */
    (*(code *)PTR_drop_001efaa0)(&local_90);
    uVar2 = 0xffffffff;
  }
  core::ptr::drop_in_place<future_backtest_sdk::context::StrategyContext>(local_48);
  return uVar2;
}


