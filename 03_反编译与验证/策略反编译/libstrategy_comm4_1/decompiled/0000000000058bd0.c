// ELF address 0x0000000000058bd0; _ZN4core3ptr71drop_in_place$LT$strategy_comm4_1..vol_spread_ratio..VolSpreadRatio$GT$17h3b2ad89f39ba57cbE.llvm.9672446651200127818

/* core::ptr::drop_in_place<strategy_comm4_1::vol_spread_ratio::VolSpreadRatio> */

void __rustcall
core::ptr::drop_in_place<strategy_comm4_1::vol_spread_ratio::VolSpreadRatio>(long *param_1)

{
  if (*param_1 != 0) {
    (*(code *)PTR___rust_dealloc_001f1ee8)(param_1[1],*param_1 << 4,8);
  }
  if (param_1[5] != 0) {
    (*(code *)PTR___rust_dealloc_001f1ee8)(param_1[6],param_1[5] * 0x18,8);
  }
                    /* try { // try from 00158c16 to 00158c1a has its CatchHandler @ 00158c57 */
  _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop(param_1 + 9);
  if (param_1[0x17] != 0) {
    (*(code *)PTR___rust_dealloc_001f1ee8)(param_1[0x18],param_1[0x17] * 0x18,8);
  }
  _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop(param_1 + 0x1b);
  return;
}


