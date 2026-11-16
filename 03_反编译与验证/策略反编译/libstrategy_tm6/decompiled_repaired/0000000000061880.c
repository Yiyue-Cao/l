// ELF address 0x0000000000061880; strategy_tm6::__fb_plugin_impl::on_begin

/* strategy_tm6::__fb_plugin_impl::on_begin */

undefined8 __rustcall
strategy_tm6::__fb_plugin_impl::on_begin(undefined8 param_1,undefined8 param_2)

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
                    /* try { // try from 001618b0 to 001618b9 has its CatchHandler @ 00161952 */
  local_18 = param_2;
  lVar1 = _<strategy_tm6::StrategyTM6_as_future_backtest_sdk::plugin::StrategyPlugin>::on_begin
                    (param_1,local_48);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    local_88 = &local_90;
    local_80 = PTR_fmt_001d9610;
    local_78 = &DAT_001d4590;
    local_70 = 2;
    local_58 = 0;
    local_68 = &local_88;
    local_60 = 1;
                    /* try { // try from 0016190b to 00161915 has its CatchHandler @ 0016193f */
    local_90 = lVar1;
    (*(code *)PTR__eprint_001d9618)(&local_78);
                    /* try { // try from 00161916 to 00161920 has its CatchHandler @ 00161952 */
    (*(code *)PTR_drop_001d9510)(&local_90);
    uVar2 = 0xffffffff;
  }
  core::ptr::drop_in_place<future_backtest_sdk::context::StrategyContext>(local_48);
  return uVar2;
}


