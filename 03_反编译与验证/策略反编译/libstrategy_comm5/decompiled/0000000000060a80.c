// ELF address 0x0000000000060a80; _ZN4core3ptr69drop_in_place$LT$strategy_comm5..vol_spread_ratio..VolSpreadRatio$GT$17h1ce622403930dcd4E.llvm.2190550127363389366

/* core::ptr::drop_in_place<strategy_comm5::vol_spread_ratio::VolSpreadRatio> */

void __rustcall
core::ptr::drop_in_place<strategy_comm5::vol_spread_ratio::VolSpreadRatio>(long *param_1)

{
  if (*param_1 != 0) {
    (*(code *)PTR___rust_dealloc_00203c78)(param_1[1],*param_1 << 4,8);
  }
  if (param_1[5] != 0) {
    (*(code *)PTR___rust_dealloc_00203c78)(param_1[6],param_1[5] * 0x18,8);
  }
                    /* try { // try from 00160ac6 to 00160aca has its CatchHandler @ 00160b07 */
  _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop(param_1 + 9);
  if (param_1[0x17] != 0) {
    (*(code *)PTR___rust_dealloc_00203c78)(param_1[0x18],param_1[0x17] * 0x18,8);
  }
  _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop(param_1 + 0x1b);
  return;
}


