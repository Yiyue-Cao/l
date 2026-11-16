// ELF address 0x0000000000068e90; strategy_sm4::__fb_plugin_impl::destroy

/* WARNING: Switch with 1 destination removed at 0x00168ea7 */
/* strategy_sm4::__fb_plugin_impl::destroy */

void __rustcall strategy_sm4::__fb_plugin_impl::destroy(undefined8 param_1)

{
                    /* try { // try from 00168e94 to 00168e98 has its CatchHandler @ 00168ead */
  core::ptr::drop_in_place<strategy_sm4::StrategySM4>();
  (*(code *)PTR_free_001e83e8)(param_1,0x1f8,8);
  return;
}


