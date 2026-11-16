// ELF address 0x00000000000633f0; strategy_comm3_1::__fb_plugin_impl::on_finish

/* strategy_comm3_1::__fb_plugin_impl::on_finish */

undefined8 __rustcall
strategy_comm3_1::__fb_plugin_impl::on_finish(undefined8 param_1,undefined8 param_2)

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
                    /* try { // try from 00163420 to 00163429 has its CatchHandler @ 001634c2 */
  local_18 = param_2;
  lVar1 = _<strategy_comm3_1::StrategyComm3_as_future_backtest_sdk::plugin::StrategyPlugin>::
          on_finish(param_1,local_48);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    local_88 = &local_90;
    local_80 = PTR_fmt_001de510;
    local_78 = &DAT_001d9300;
    local_70 = 2;
    local_58 = 0;
    local_68 = &local_88;
    local_60 = 1;
                    /* try { // try from 0016347b to 00163485 has its CatchHandler @ 001634af */
    local_90 = lVar1;
    (*(code *)PTR__eprint_001de518)(&local_78);
                    /* try { // try from 00163486 to 00163490 has its CatchHandler @ 001634c2 */
    (*(code *)PTR_drop_001de480)(&local_90);
    uVar2 = 0xffffffff;
  }
  core::ptr::drop_in_place<future_backtest_sdk::context::StrategyContext>(local_48);
  return uVar2;
}


