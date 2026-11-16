// ELF address 0x00000000000370d0; _ZN4core3ptr69drop_in_place$LT$strategy_comm2..vol_spread_ratio..VolSpreadRatio$GT$17h8780844683c599b1E.llvm.8691690692858323044

/* core::ptr::drop_in_place<strategy_comm2::vol_spread_ratio::VolSpreadRatio> */

void __rustcall
core::ptr::drop_in_place<strategy_comm2::vol_spread_ratio::VolSpreadRatio>(long *param_1)

{
  if (*param_1 != 0) {
    (*(code *)PTR___rust_dealloc_001d5c50)(param_1[1],*param_1 << 4,8);
  }
  if (param_1[5] != 0) {
    (*(code *)PTR___rust_dealloc_001d5c50)(param_1[6],param_1[5] * 0x18,8);
  }
                    /* try { // try from 00137116 to 0013711a has its CatchHandler @ 00137157 */
  _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop(param_1 + 9);
  if (param_1[0x17] != 0) {
    (*(code *)PTR___rust_dealloc_001d5c50)(param_1[0x18],param_1[0x17] * 0x18,8);
  }
  _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop(param_1 + 0x1b);
  return;
}


