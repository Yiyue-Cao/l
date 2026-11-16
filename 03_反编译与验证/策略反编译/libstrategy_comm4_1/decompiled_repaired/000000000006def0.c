// ELF address 0x000000000006def0; strategy_comm4_1::__fb_plugin_impl::destroy

/* WARNING: Switch with 1 destination removed at 0x0016df07 */
/* strategy_comm4_1::__fb_plugin_impl::destroy */

void __rustcall strategy_comm4_1::__fb_plugin_impl::destroy(undefined8 param_1)

{
                    /* try { // try from 0016def4 to 0016def8 has its CatchHandler @ 0016df0d */
  core::ptr::drop_in_place<strategy_comm4_1::StrategyComm41>();
  (*(code *)PTR_free_001f2a28)(param_1,0x598,8);
  return;
}


