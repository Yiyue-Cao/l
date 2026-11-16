// ELF address 0x000000000005b640; core::ptr::drop_in_place<strategy_comm_mock::StrategyComm3>

/* core::ptr::drop_in_place<strategy_comm_mock::StrategyComm3> */

void __rustcall core::ptr::drop_in_place<strategy_comm_mock::StrategyComm3>(int *param_1)

{
                    /* try { // try from 0015b64e to 0015b652 has its CatchHandler @ 0015b70b */
  _<hashbrown::raw::RawTable<T,A>as_core::ops::drop::Drop>::drop(param_1 + 0x6c);
                    /* try { // try from 0015b65a to 0015b65e has its CatchHandler @ 0015b706 */
  _<hashbrown::raw::RawTable<T,A>as_core::ops::drop::Drop>::drop(param_1 + 0x78);
  if (*param_1 != 2) {
    if (*(long *)(param_1 + 0x10) != 0) {
      (*(code *)PTR___rust_dealloc_001e0298)
                (*(undefined8 *)(param_1 + 0x12),*(long *)(param_1 + 0x10),1);
    }
    if (*(long *)(param_1 + 0x16) != 0) {
      (*(code *)PTR___rust_dealloc_001e0298)
                (*(undefined8 *)(param_1 + 0x18),*(long *)(param_1 + 0x16),1);
    }
    if (*(long *)(param_1 + 0x1c) != 0) {
      (*(code *)PTR___rust_dealloc_001e0298)
                (*(undefined8 *)(param_1 + 0x1e),*(long *)(param_1 + 0x1c) << 3,8);
    }
    if (*(long *)(param_1 + 0x22) != 0) {
      (*(code *)PTR___rust_dealloc_001e0298)
                (*(undefined8 *)(param_1 + 0x24),*(long *)(param_1 + 0x22),1);
    }
  }
                    /* try { // try from 0015b6d5 to 0015b6d9 has its CatchHandler @ 0015b701 */
  _<hashbrown::raw::RawTable<T,A>as_core::ops::drop::Drop>::drop(param_1 + 0x84);
                    /* try { // try from 0015b6e1 to 0015b6e5 has its CatchHandler @ 0015b6fc */
  _<hashbrown::raw::RawTable<T,A>as_core::ops::drop::Drop>::drop(param_1 + 0x90);
  _<hashbrown::raw::RawTable<T,A>as_core::ops::drop::Drop>::drop(param_1 + 0x9c);
  return;
}


