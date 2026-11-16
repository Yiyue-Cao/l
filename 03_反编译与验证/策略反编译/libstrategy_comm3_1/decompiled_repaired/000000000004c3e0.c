// ELF address 0x000000000004c3e0; _ZN4core3ptr75drop_in_place$LT$strategy_comm3_1..signal_trigger..TsQuantileCalculator$GT$17h537ef7c11bd120f6E.llvm.5660894211744637865

/* core::ptr::drop_in_place<strategy_comm3_1::signal_trigger::TsQuantileCalculator> */

void __rustcall
core::ptr::drop_in_place<strategy_comm3_1::signal_trigger::TsQuantileCalculator>(long *param_1)

{
  if (*param_1 != 0) {
    (*(code *)PTR___rust_dealloc_001de0f0)(param_1[1],*param_1 * 0x18,8);
  }
  _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop(param_1 + 4);
  return;
}


