// ELF address 0x0000000000069d00; strategy_sos5::__fb_plugin_impl::on_depth

/* strategy_sos5::__fb_plugin_impl::on_depth */

undefined8 __rustcall
strategy_sos5::__fb_plugin_impl::on_depth(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long local_1a0;
  long *local_198;
  undefined *local_190;
  undefined **local_188;
  undefined8 local_180;
  undefined8 **local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_158 [3];
  undefined8 local_140;
  undefined8 local_128;
  undefined8 local_120;
  undefined1 local_118 [32];
  long local_f8;
  undefined8 local_f0;
  
                    /* try { // try from 00169d10 to 00169d1d has its CatchHandler @ 00169e15 */
  (*(code *)PTR_to_depth_001e41d0)(local_118);
  local_120 = 0;
  local_158[0] = 0x8000000000000000;
  local_140 = 0x8000000000000000;
                    /* try { // try from 00169d46 to 00169d5a has its CatchHandler @ 00169e1b */
  local_128 = param_3;
  lVar1 = _<strategy_sos5::StrategySoS5_as_future_backtest_sdk::plugin::StrategyPlugin>::on_depth
                    (param_1,local_118,local_158);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    local_198 = &local_1a0;
    local_190 = PTR_fmt_001e41b8;
    local_188 = &PTR_s__fb_plugin__on_depth_error__001ded08;
    local_180 = 2;
    local_168 = 0;
    local_178 = &local_198;
    local_170 = 1;
                    /* try { // try from 00169dac to 00169db6 has its CatchHandler @ 00169e02 */
    local_1a0 = lVar1;
    (*(code *)PTR__eprint_001e3ec0)(&local_188);
                    /* try { // try from 00169db7 to 00169dc1 has its CatchHandler @ 00169e1b */
    (*(code *)PTR_drop_001e4188)(&local_1a0);
    uVar2 = 0xffffffff;
  }
  core::ptr::drop_in_place<future_backtest_sdk::context::StrategyContext>(local_158);
  if (local_f8 != 0) {
    (*(code *)PTR___rust_dealloc_001e3dc8)(local_f0,local_f8,1);
  }
  return uVar2;
}


