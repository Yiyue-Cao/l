// ELF address 0x00000000000591c0; strategy_comm_maker1::__fb_plugin_impl::destroy

/* WARNING: Switch with 1 destination removed at 0x001591d7 */
/* strategy_comm_maker1::__fb_plugin_impl::destroy */

void __rustcall strategy_comm_maker1::__fb_plugin_impl::destroy(undefined8 param_1)

{
                    /* try { // try from 001591c4 to 001591c8 has its CatchHandler @ 001591dd */
  core::ptr::drop_in_place<strategy_comm_maker1::StrategyCommMaker1>();
  (*(code *)PTR_free_001dde98)(param_1,0x230,8);
  return;
}


