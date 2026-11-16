// ELF address 0x000000000004c790; _ZN4core3ptr75drop_in_place$LT$strategy_comm3_2..signal_trigger..TsQuantileCalculator$GT$17h85eb31b83146da12E.llvm.13809448683775648307

/* core::ptr::drop_in_place<strategy_comm3_2::signal_trigger::TsQuantileCalculator> */

void __rustcall
core::ptr::drop_in_place<strategy_comm3_2::signal_trigger::TsQuantileCalculator>(long *param_1)

{
  if (*param_1 != 0) {
    (*(code *)PTR___rust_dealloc_001de3d0)(param_1[1],*param_1 * 0x18,8);
  }
  _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop(param_1 + 4);
  return;
}


