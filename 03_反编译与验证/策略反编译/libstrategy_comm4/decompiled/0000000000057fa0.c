// ELF address 0x0000000000057fa0; _ZN4core3ptr69drop_in_place$LT$strategy_comm4..vol_spread_ratio..VolSpreadRatio$GT$17hfd262a1471f3eb53E.llvm.8634291397887141858

/* core::ptr::drop_in_place<strategy_comm4::vol_spread_ratio::VolSpreadRatio> */

void __rustcall
core::ptr::drop_in_place<strategy_comm4::vol_spread_ratio::VolSpreadRatio>(long *param_1)

{
  if (*param_1 != 0) {
    (*(code *)PTR___rust_dealloc_001f10f8)(param_1[1],*param_1 << 4,8);
  }
  if (param_1[5] != 0) {
    (*(code *)PTR___rust_dealloc_001f10f8)(param_1[6],param_1[5] * 0x18,8);
  }
                    /* try { // try from 00157fe6 to 00157fea has its CatchHandler @ 00158027 */
  _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop(param_1 + 9);
  if (param_1[0x17] != 0) {
    (*(code *)PTR___rust_dealloc_001f10f8)(param_1[0x18],param_1[0x17] * 0x18,8);
  }
  _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop(param_1 + 0x1b);
  return;
}


