// ELF address 0x00000000000616d0; strategy_comm3_2::__fb_plugin_impl::destroy

/* WARNING: Switch with 1 destination removed at 0x001616e7 */
/* strategy_comm3_2::__fb_plugin_impl::destroy */

void __rustcall strategy_comm3_2::__fb_plugin_impl::destroy(undefined8 param_1)

{
                    /* try { // try from 001616d4 to 001616d8 has its CatchHandler @ 001616ed */
  core::ptr::drop_in_place<strategy_comm3_2::StrategyComm3>();
  (*(code *)PTR_free_001deef8)(param_1,0x240,8);
  return;
}


