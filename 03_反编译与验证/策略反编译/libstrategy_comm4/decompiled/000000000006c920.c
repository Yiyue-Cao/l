// ELF address 0x000000000006c920; strategy_comm4::__fb_plugin_impl::on_begin

/* strategy_comm4::__fb_plugin_impl::on_begin */

undefined8 __rustcall
strategy_comm4::__fb_plugin_impl::on_begin(undefined8 param_1,undefined8 param_2)

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
                    /* try { // try from 0016c950 to 0016c959 has its CatchHandler @ 0016c9f2 */
  local_18 = param_2;
  lVar1 = _<strategy_comm4::StrategyComm4_as_future_backtest_sdk::plugin::StrategyPlugin>::on_begin
                    (param_1,local_48);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    local_88 = &local_90;
    local_80 = PTR_fmt_001f1440;
    local_78 = &DAT_001eba70;
    local_70 = 2;
    local_58 = 0;
    local_68 = &local_88;
    local_60 = 1;
                    /* try { // try from 0016c9ab to 0016c9b5 has its CatchHandler @ 0016c9df */
    local_90 = lVar1;
    (*(code *)PTR__eprint_001f1448)(&local_78);
                    /* try { // try from 0016c9b6 to 0016c9c0 has its CatchHandler @ 0016c9f2 */
    (*(code *)PTR_drop_001f1450)(&local_90);
    uVar2 = 0xffffffff;
  }
  core::ptr::drop_in_place<future_backtest_sdk::context::StrategyContext>(local_48);
  return uVar2;
}


