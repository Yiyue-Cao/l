// ELF address 0x0000000000057970; core::ptr::drop_in_place<strategy_comm_maker1::StrategyCommMaker1>

/* WARNING: Switch with 1 destination removed at 0x00157a0b */
/* core::ptr::drop_in_place<strategy_comm_maker1::StrategyCommMaker1> */

void __rustcall core::ptr::drop_in_place<strategy_comm_maker1::StrategyCommMaker1>(int *param_1)

{
                    /* try { // try from 0015797e to 00157982 has its CatchHandler @ 00157a31 */
  _<hashbrown::raw::RawTable<T,A>as_core::ops::drop::Drop>::drop(param_1 + 0x68);
                    /* try { // try from 0015798a to 0015798e has its CatchHandler @ 00157a2c */
  _<hashbrown::raw::RawTable<T,A>as_core::ops::drop::Drop>::drop(param_1 + 0x74);
                    /* try { // try from 00157996 to 0015799a has its CatchHandler @ 00157a19 */
  _<hashbrown::raw::RawTable<T,A>as_core::ops::drop::Drop>::drop(param_1 + 0x80);
  if (*param_1 != 2) {
    if (*(long *)(param_1 + 0x10) != 0) {
      (*(code *)PTR___rust_dealloc_001dd388)
                (*(undefined8 *)(param_1 + 0x12),*(long *)(param_1 + 0x10),1);
    }
    if (*(long *)(param_1 + 0x16) != 0) {
      (*(code *)PTR___rust_dealloc_001dd388)
                (*(undefined8 *)(param_1 + 0x18),*(long *)(param_1 + 0x16),1);
    }
    if (*(long *)(param_1 + 0x1c) != 0) {
      (*(code *)PTR___rust_dealloc_001dd388)
                (*(undefined8 *)(param_1 + 0x1e),*(long *)(param_1 + 0x1c) << 3,8);
    }
    if (*(long *)(param_1 + 0x22) != 0) {
      (*(code *)PTR_free_001dde98)(*(undefined8 *)(param_1 + 0x24),*(long *)(param_1 + 0x22),1);
      return;
    }
  }
  return;
}


