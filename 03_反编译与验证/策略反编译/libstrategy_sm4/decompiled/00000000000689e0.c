// ELF address 0x00000000000689e0; strategy_sm4::__fb_plugin_impl::on_depth

/* strategy_sm4::__fb_plugin_impl::on_depth */

undefined8 __rustcall
strategy_sm4::__fb_plugin_impl::on_depth(long param_1,undefined8 param_2,undefined8 param_3)

{
  double *pdVar1;
  int local_178 [2];
  long local_170;
  long local_160;
  undefined8 local_158 [3];
  undefined8 local_140;
  undefined8 local_128;
  undefined8 local_120;
  undefined1 local_118 [32];
  long local_f8;
  undefined8 local_f0;
  double local_d0;
  double local_80;
  
                    /* try { // try from 001689f0 to 001689fa has its CatchHandler @ 00168af4 */
  (*(code *)PTR_to_depth_001e7d30)(local_118);
  local_120 = 0;
  local_158[0] = 0x8000000000000000;
  local_140 = 0x8000000000000000;
  local_128 = param_3;
  if (*(long *)(param_1 + 0x1d8) != 0) {
                    /* try { // try from 00168a38 to 00168a97 has its CatchHandler @ 00168acf */
    alloc::collections::btree::search::
    _<impl_alloc::collections::btree::node::NodeRef<BorrowType,K,V,alloc::collections::btree::node::marker::LeafOrInternal>>
    ::search_tree(local_178,*(long *)(param_1 + 0x1d8),*(undefined8 *)(param_1 + 0x1e0),&local_f8);
    if (local_178[0] != 1) {
      pdVar1 = (double *)(local_170 + 0x110 + local_160 * 0x18);
      if ((local_80 == *pdVar1) && (!NAN(local_80) && !NAN(*pdVar1))) {
        pdVar1 = (double *)(local_170 + 0x118 + local_160 * 0x18);
        if ((local_d0 == *pdVar1) && (!NAN(local_d0) && !NAN(*pdVar1))) goto LAB_00168a98;
      }
      alloc::collections::btree::map::BTreeMap<K,V,A>::remove(local_178,param_1 + 0x1d8,&local_f8);
    }
  }
LAB_00168a98:
  core::ptr::drop_in_place<future_backtest_sdk::context::StrategyContext>(local_158);
  if (local_f8 != 0) {
    (*(code *)PTR___rust_dealloc_001e78c8)(local_f0,local_f8,1);
  }
  return 0;
}


