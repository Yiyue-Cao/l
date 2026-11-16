// ELF address 0x000000000006a270; strategy_sos5::__fb_plugin_impl::destroy

/* WARNING: Switch with 1 destination removed at 0x0016a287 */
/* strategy_sos5::__fb_plugin_impl::destroy */

void __rustcall strategy_sos5::__fb_plugin_impl::destroy(undefined8 param_1)

{
                    /* try { // try from 0016a274 to 0016a278 has its CatchHandler @ 0016a28d */
  core::ptr::drop_in_place<strategy_sos5::StrategySoS5>();
  (*(code *)PTR_free_001e4888)(param_1,0x420,8);
  return;
}


