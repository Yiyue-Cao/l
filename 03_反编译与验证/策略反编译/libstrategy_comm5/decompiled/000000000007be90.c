// ELF address 0x000000000007be90; strategy_comm5::__fb_plugin_impl::destroy

/* WARNING: Switch with 1 destination removed at 0x0017bea7 */
/* strategy_comm5::__fb_plugin_impl::destroy */

void __rustcall strategy_comm5::__fb_plugin_impl::destroy(undefined8 param_1)

{
                    /* try { // try from 0017be94 to 0017be98 has its CatchHandler @ 0017bead */
  core::ptr::drop_in_place<strategy_comm5::StrategyComm5>();
  (*(code *)PTR_free_002047f8)(param_1,0x658,8);
  return;
}


