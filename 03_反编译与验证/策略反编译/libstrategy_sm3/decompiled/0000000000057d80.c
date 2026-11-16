// ELF address 0x0000000000057d80; strategy_sm3::__fb_plugin_impl::on_depth

/* strategy_sm3::__fb_plugin_impl::on_depth */

undefined8 __rustcall
strategy_sm3::__fb_plugin_impl::on_depth(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  
                    /* try { // try from 00157d90 to 00157d9d has its CatchHandler @ 00157e95 */
  (*(code *)PTR_to_depth_001dc408)(local_118);
  local_120 = 0;
  local_158[0] = 0x8000000000000000;
  local_140 = 0x8000000000000000;
                    /* try { // try from 00157dc6 to 00157dda has its CatchHandler @ 00157e9b */
  local_128 = param_3;
  lVar1 = _<strategy_sm3::StrategySM3_as_future_backtest_sdk::plugin::StrategyPlugin>::on_depth
                    (param_1,local_118,local_158);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    local_198 = &local_1a0;
    local_190 = PTR_fmt_001dc3e0;
    local_188 = &DAT_001d6b68;
    local_180 = 2;
    local_168 = 0;
    local_178 = &local_198;
    local_170 = 1;
                    /* try { // try from 00157e2c to 00157e36 has its CatchHandler @ 00157e82 */
    local_1a0 = lVar1;
    (*(code *)PTR__eprint_001dc3e8)(&local_188);
                    /* try { // try from 00157e37 to 00157e41 has its CatchHandler @ 00157e9b */
    (*(code *)PTR_drop_001dc3f0)(&local_1a0);
    uVar2 = 0xffffffff;
  }
  core::ptr::drop_in_place<future_backtest_sdk::context::StrategyContext>(local_158);
  if (local_f8 != 0) {
    (*(code *)PTR___rust_dealloc_001dc090)(local_f0,local_f8,1);
  }
  return uVar2;
}


