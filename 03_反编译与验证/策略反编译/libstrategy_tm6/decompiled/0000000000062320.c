// ELF address 0x0000000000062320; strategy_tm6::__fb_plugin_impl::destroy

/* WARNING: Switch with 1 destination removed at 0x00162337 */
/* strategy_tm6::__fb_plugin_impl::destroy */

void __rustcall strategy_tm6::__fb_plugin_impl::destroy(undefined8 param_1)

{
                    /* try { // try from 00162324 to 00162328 has its CatchHandler @ 0016233d */
  core::ptr::drop_in_place<strategy_tm6::StrategyTM6>();
  (*(code *)PTR_free_001d9cb0)(param_1,0x218,8);
  return;
}


