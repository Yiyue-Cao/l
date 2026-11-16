// ELF address 0x000000000006d120; strategy_comm4::__fb_plugin_impl::destroy

/* WARNING: Switch with 1 destination removed at 0x0016d137 */
/* strategy_comm4::__fb_plugin_impl::destroy */

void __rustcall strategy_comm4::__fb_plugin_impl::destroy(undefined8 param_1)

{
                    /* try { // try from 0016d124 to 0016d128 has its CatchHandler @ 0016d13d */
  core::ptr::drop_in_place<strategy_comm4::StrategyComm4>();
  (*(code *)PTR_free_001f1c38)(param_1,0x590,8);
  return;
}


