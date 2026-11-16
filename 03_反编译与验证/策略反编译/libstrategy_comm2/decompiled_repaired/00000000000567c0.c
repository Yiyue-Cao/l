// ELF address 0x00000000000567c0; strategy_comm2::__fb_plugin_impl::destroy

/* WARNING: Switch with 1 destination removed at 0x001567d7 */
/* strategy_comm2::__fb_plugin_impl::destroy */

void __rustcall strategy_comm2::__fb_plugin_impl::destroy(undefined8 param_1)

{
                    /* try { // try from 001567c4 to 001567c8 has its CatchHandler @ 001567dd */
  core::ptr::drop_in_place<strategy_comm2::StrategyComm2>();
  (*(code *)PTR_free_001d6728)(param_1,0x1d0,8);
  return;
}


