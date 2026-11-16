// ELF address 0x0000000000071240; strategy_sm3_1::__fb_plugin_impl::destroy

/* WARNING: Switch with 1 destination removed at 0x00171257 */
/* strategy_sm3_1::__fb_plugin_impl::destroy */

void __rustcall strategy_sm3_1::__fb_plugin_impl::destroy(undefined8 param_1)

{
                    /* try { // try from 00171244 to 00171248 has its CatchHandler @ 0017125d */
  core::ptr::drop_in_place<strategy_sm3_1::StrategySM31>();
  (*(code *)PTR_free_001f01c8)(param_1,0x2d8,8);
  return;
}


