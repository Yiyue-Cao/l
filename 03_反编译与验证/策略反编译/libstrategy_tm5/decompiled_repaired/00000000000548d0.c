// ELF address 0x00000000000548d0; strategy_tm5::__fb_plugin_impl::destroy

/* WARNING: Switch with 1 destination removed at 0x001548e7 */
/* strategy_tm5::__fb_plugin_impl::destroy */

void __rustcall strategy_tm5::__fb_plugin_impl::destroy(undefined8 param_1)

{
                    /* try { // try from 001548d4 to 001548d8 has its CatchHandler @ 001548ed */
  core::ptr::drop_in_place<strategy_tm5::StrategyTM5>();
  (*(code *)PTR_free_001cbd08)(param_1,0x178,8);
  return;
}


