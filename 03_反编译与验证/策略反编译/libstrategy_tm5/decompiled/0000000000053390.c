// ELF address 0x0000000000053390; core::ptr::drop_in_place<strategy_tm5::StrategyTM5>

/* WARNING: Switch with 1 destination removed at 0x00153410 */
/* core::ptr::drop_in_place<strategy_tm5::StrategyTM5> */

long __rustcall core::ptr::drop_in_place<strategy_tm5::StrategyTM5>(long *param_1)

{
  long lVar1;
  long lVar2;
  
                    /* try { // try from 0015339e to 001533a2 has its CatchHandler @ 0015341e */
  _<hashbrown::raw::RawTable<T,A>as_core::ops::drop::Drop>::drop(param_1 + 0x29);
  lVar2 = param_1[5];
  lVar1 = -lVar2;
  if (lVar2 != 0) {
    lVar1 = (*(code *)PTR___rust_dealloc_001cb2a8)(param_1[6],lVar2,1);
  }
  if (param_1[8] != 0) {
    lVar1 = (*(code *)PTR___rust_dealloc_001cb2a8)(param_1[9],param_1[8],1);
  }
  if (param_1[0xb] != 0) {
    lVar1 = (*(code *)PTR___rust_dealloc_001cb2a8)(param_1[0xc],param_1[0xb] << 3,8);
  }
  if (*param_1 != 0) {
    lVar2 = (*(code *)PTR_free_001cbd08)(param_1[1],*param_1 << 4,8);
    return lVar2;
  }
  return lVar1;
}


