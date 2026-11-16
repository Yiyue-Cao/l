// ELF address 0x0000000000062780; strategy_comm3::__fb_plugin_impl::destroy

/* WARNING: Switch with 1 destination removed at 0x00162797 */
/* strategy_comm3::__fb_plugin_impl::destroy */

void __rustcall strategy_comm3::__fb_plugin_impl::destroy(undefined8 param_1)

{
                    /* try { // try from 00162784 to 00162788 has its CatchHandler @ 0016279d */
  core::ptr::drop_in_place<strategy_comm3::StrategyComm3>();
  (*(code *)PTR_free_001dda10)(param_1,0x228,8);
  return;
}


