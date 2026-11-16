// ELF address 0x00000000000ae540; <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter

/* _<alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter */

long * __rustcall
_<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
          (long *param_1,int *param_2,int *param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int *piVar4;
  int *piVar5;
  long local_40;
  undefined8 *puStack_38;
  long local_30;
  
  do {
    piVar5 = param_2;
    if (piVar5 == param_3) {
      *param_1 = 0;
      param_1[1] = 8;
      param_1[2] = 0;
      return param_1;
    }
    param_2 = piVar5 + 6;
  } while (*piVar5 == 3);
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00203c98)();
  puVar2 = (undefined8 *)(*(code *)PTR___rust_alloc_00203c70)(0x20,8);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = piVar5;
    local_40 = 4;
    local_30 = 1;
    piVar5 = piVar5 + 6;
    puStack_38 = puVar2;
    while (piVar4 = piVar5, lVar1 = local_30, piVar4 != param_3) {
      piVar5 = piVar4 + 6;
      if (*piVar4 != 3) {
        if (local_30 == local_40) {
                    /* try { // try from 001ae5e8 to 001ae5f2 has its CatchHandler @ 001ae658 */
          alloc::raw_vec::RawVecInner<A>::reserve::do_reserve_and_handle(&local_40,local_30);
          puVar2 = puStack_38;
        }
        puVar2[lVar1] = piVar4;
        local_30 = lVar1 + 1;
      }
    }
    param_1[2] = local_30;
    *param_1 = local_40;
    param_1[1] = (long)puStack_38;
    return param_1;
  }
  uVar3 = (*(code *)PTR_handle_error_00203cd8)(8,0x20,param_4);
                    /* catch() { ... } // from try @ 001ae5e8 with catch @ 001ae658 */
  if (local_40 != 0) {
    (*(code *)PTR___rust_dealloc_00203c78)(puStack_38,local_40 << 3,8);
  }
                    /* WARNING: Subroutine does not return */
  _Unwind_Resume(uVar3);
}


