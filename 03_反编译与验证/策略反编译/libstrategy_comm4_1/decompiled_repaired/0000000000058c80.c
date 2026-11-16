// ELF address 0x0000000000058c80; _ZN4core3ptr75drop_in_place$LT$strategy_comm4_1..signal_trigger..TsQuantileCalculator$GT$17hbc5f75133623783eE.llvm.9672446651200127818

/* core::ptr::drop_in_place<strategy_comm4_1::signal_trigger::TsQuantileCalculator> */

void __rustcall
core::ptr::drop_in_place<strategy_comm4_1::signal_trigger::TsQuantileCalculator>(long *param_1)

{
  if (*param_1 != 0) {
    (*(code *)PTR___rust_dealloc_001f1ee8)(param_1[1],*param_1 * 0x18,8);
  }
  _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop(param_1 + 4);
  return;
}


