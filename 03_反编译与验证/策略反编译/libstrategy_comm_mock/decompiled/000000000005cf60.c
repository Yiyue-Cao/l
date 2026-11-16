// ELF address 0x000000000005cf60; strategy_comm_mock::__fb_plugin_impl::destroy

/* WARNING: Switch with 1 destination removed at 0x0015cf77 */
/* strategy_comm_mock::__fb_plugin_impl::destroy */

void __rustcall strategy_comm_mock::__fb_plugin_impl::destroy(undefined8 param_1)

{
                    /* try { // try from 0015cf64 to 0015cf68 has its CatchHandler @ 0015cf7d */
  core::ptr::drop_in_place<strategy_comm_mock::StrategyComm3>();
  (*(code *)PTR_free_001e0df0)(param_1,0x2a0,8);
  return;
}


