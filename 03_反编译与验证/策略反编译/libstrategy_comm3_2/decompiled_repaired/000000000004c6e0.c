// ELF address 0x000000000004c6e0; _ZN4core3ptr71drop_in_place$LT$strategy_comm3_2..vol_spread_ratio..VolSpreadRatio$GT$17h862f7b0b5252b94aE.llvm.13809448683775648307

/* core::ptr::drop_in_place<strategy_comm3_2::vol_spread_ratio::VolSpreadRatio> */

void __rustcall
core::ptr::drop_in_place<strategy_comm3_2::vol_spread_ratio::VolSpreadRatio>(long *param_1)

{
  if (*param_1 != 0) {
    (*(code *)PTR___rust_dealloc_001de3d0)(param_1[1],*param_1 << 4,8);
  }
  if (param_1[5] != 0) {
    (*(code *)PTR___rust_dealloc_001de3d0)(param_1[6],param_1[5] * 0x18,8);
  }
                    /* try { // try from 0014c726 to 0014c72a has its CatchHandler @ 0014c767 */
  _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop(param_1 + 9);
  if (param_1[0x17] != 0) {
    (*(code *)PTR___rust_dealloc_001de3d0)(param_1[0x18],param_1[0x17] * 0x18,8);
  }
  _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop(param_1 + 0x1b);
  return;
}


