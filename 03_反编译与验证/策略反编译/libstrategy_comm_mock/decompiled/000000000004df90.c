// ELF address 0x000000000004df90; _ZN4core3ptr73drop_in_place$LT$strategy_comm_mock..vol_spread_ratio..VolSpreadRatio$GT$17h279119c340450847E.llvm.2993965461073850794

/* core::ptr::drop_in_place<strategy_comm_mock::vol_spread_ratio::VolSpreadRatio> */

void __rustcall
core::ptr::drop_in_place<strategy_comm_mock::vol_spread_ratio::VolSpreadRatio>(long *param_1)

{
  if (*param_1 != 0) {
    (*(code *)PTR___rust_dealloc_001e0298)(param_1[1],*param_1 << 4,8);
  }
  if (param_1[5] != 0) {
    (*(code *)PTR___rust_dealloc_001e0298)(param_1[6],param_1[5] * 0x18,8);
  }
                    /* try { // try from 0014dfd6 to 0014dfda has its CatchHandler @ 0014e017 */
  _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop(param_1 + 9);
  if (param_1[0x17] != 0) {
    (*(code *)PTR___rust_dealloc_001e0298)(param_1[0x18],param_1[0x17] * 0x18,8);
  }
  _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop(param_1 + 0x1b);
  return;
}


