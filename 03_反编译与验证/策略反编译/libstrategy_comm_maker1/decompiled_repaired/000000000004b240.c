// ELF address 0x000000000004b240; _ZN4core3ptr75drop_in_place$LT$strategy_comm_maker1..vol_spread_ratio..VolSpreadRatio$GT$17h28d1c0b64bd8a58bE.llvm.13709799112244779361

/* core::ptr::drop_in_place<strategy_comm_maker1::vol_spread_ratio::VolSpreadRatio> */

void __rustcall
core::ptr::drop_in_place<strategy_comm_maker1::vol_spread_ratio::VolSpreadRatio>(long *param_1)

{
  if (*param_1 != 0) {
    (*(code *)PTR___rust_dealloc_001dd388)(param_1[1],*param_1 << 4,8);
  }
  if (param_1[5] != 0) {
    (*(code *)PTR___rust_dealloc_001dd388)(param_1[6],param_1[5] * 0x18,8);
  }
                    /* try { // try from 0014b286 to 0014b28a has its CatchHandler @ 0014b2c7 */
  _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop(param_1 + 9);
  if (param_1[0x17] != 0) {
    (*(code *)PTR___rust_dealloc_001dd388)(param_1[0x18],param_1[0x17] * 0x18,8);
  }
  _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop(param_1 + 0x1b);
  return;
}


