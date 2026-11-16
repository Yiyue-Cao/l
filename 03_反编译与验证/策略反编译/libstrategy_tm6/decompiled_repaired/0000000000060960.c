// ELF address 0x0000000000060960; core::ptr::drop_in_place<strategy_tm6::StrategyTM6>

/* WARNING: Switch with 1 destination removed at 0x00160a11 */
/* core::ptr::drop_in_place<strategy_tm6::StrategyTM6> */

long __rustcall core::ptr::drop_in_place<strategy_tm6::StrategyTM6>(long *param_1)

{
  long lVar1;
  long lVar2;
  
                    /* try { // try from 0016096e to 00160972 has its CatchHandler @ 00160a38 */
  _<hashbrown::raw::RawTable<T,A>as_core::ops::drop::Drop>::drop(param_1 + 0x3d);
  lVar2 = param_1[0x15];
  lVar1 = -lVar2;
  if (lVar2 != 0) {
    lVar1 = (*(code *)PTR___rust_dealloc_001d9238)(param_1[0x16],lVar2,1);
  }
  if (param_1[0x18] != 0) {
    lVar1 = (*(code *)PTR___rust_dealloc_001d9238)(param_1[0x19],param_1[0x18],1);
  }
  if (param_1[0x1b] != 0) {
    lVar1 = (*(code *)PTR___rust_dealloc_001d9238)(param_1[0x1c],param_1[0x1b] << 3,8);
  }
  if (*param_1 != 0) {
                    /* try { // try from 001609e0 to 001609e4 has its CatchHandler @ 00160a24 */
    _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop(param_1 + 5);
                    /* try { // try from 001609e9 to 001609ed has its CatchHandler @ 00160a1f */
    lVar1 = _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop
                      (param_1 + 8);
  }
  if (param_1[0x10] != 0) {
    lVar2 = (*(code *)PTR_free_001d9cb0)(param_1[0x11],param_1[0x10] << 4,8);
    return lVar2;
  }
  return lVar1;
}


