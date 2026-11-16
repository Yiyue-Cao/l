// ELF address 0x0000000000063820; strategy_comm3_1::__fb_plugin_impl::destroy

/* WARNING: Switch with 1 destination removed at 0x00163837 */
/* strategy_comm3_1::__fb_plugin_impl::destroy */

void __rustcall strategy_comm3_1::__fb_plugin_impl::destroy(undefined8 param_1)

{
                    /* try { // try from 00163824 to 00163828 has its CatchHandler @ 0016383d */
  core::ptr::drop_in_place<strategy_comm3_1::StrategyComm3>();
  (*(code *)PTR_free_001dec18)(param_1,0x238,8);
  return;
}


