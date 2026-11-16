// ELF address 0x000000000004f2c0; strategy_lf4::__fb_plugin_impl::on_depth

/* strategy_lf4::__fb_plugin_impl::on_depth */

undefined8 __rustcall
strategy_lf4::__fb_plugin_impl::on_depth(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long local_1a0;
  long *local_198;
  undefined *local_190;
  undefined *local_188;
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
  
                    /* try { // try from 0014f2d0 to 0014f2dd has its CatchHandler @ 0014f3d5 */
  (*(code *)PTR_to_depth_001ccd70)(local_118);
  local_120 = 0;
  local_158[0] = 0x8000000000000000;
  local_140 = 0x8000000000000000;
                    /* try { // try from 0014f306 to 0014f31a has its CatchHandler @ 0014f3db */
  local_128 = param_3;
  lVar1 = _<strategy_lf4::StrategyLF4_as_future_backtest_sdk::plugin::StrategyPlugin>::on_depth
                    (param_1,local_118,local_158);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    local_198 = &local_1a0;
    local_190 = PTR_fmt_001ccd50;
    local_188 = &DAT_001c7808;
    local_180 = 2;
    local_168 = 0;
    local_178 = &local_198;
    local_170 = 1;
                    /* try { // try from 0014f36c to 0014f376 has its CatchHandler @ 0014f3c2 */
    local_1a0 = lVar1;
    (*(code *)PTR__eprint_001ccd58)(&local_188);
                    /* try { // try from 0014f377 to 0014f381 has its CatchHandler @ 0014f3db */
    (*(code *)PTR_drop_001cccf0)(&local_1a0);
    uVar2 = 0xffffffff;
  }
  core::ptr::drop_in_place<future_backtest_sdk::context::StrategyContext>(local_158);
  if (local_f8 != 0) {
    (*(code *)PTR___rust_dealloc_001cca48)(local_f0,local_f8,1);
  }
  return uVar2;
}


