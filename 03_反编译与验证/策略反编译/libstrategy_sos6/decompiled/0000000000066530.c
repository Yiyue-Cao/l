// ELF address 0x0000000000066530; strategy_sos6::__fb_plugin_impl::destroy

/* WARNING: Switch with 1 destination removed at 0x0016655f */
/* strategy_sos6::__fb_plugin_impl::destroy */

void __rustcall strategy_sos6::__fb_plugin_impl::destroy(long param_1)

{
  core::ptr::drop_in_place<core::option::Option<strategy_sos6::SoS6Params>>();
                    /* try { // try from 00166540 to 00166544 has its CatchHandler @ 00166567 */
  _<hashbrown::raw::RawTable<T,A>as_core::ops::drop::Drop>::drop(param_1 + 0x340);
                    /* try { // try from 0016654c to 00166550 has its CatchHandler @ 00166565 */
  _<hashbrown::raw::RawTable<T,A>as_core::ops::drop::Drop>::drop(param_1 + 0x370);
  (*(code *)PTR_free_001ddad8)(param_1,0x408,8);
  return;
}


