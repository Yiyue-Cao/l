// ELF address 0x0000000000088350; <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter

/* _<alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter */

long * __rustcall
_<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
          (long *param_1,ulong param_2,ulong param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong extraout_RDX;
  ulong uVar4;
  long local_50;
  long *local_48;
  undefined8 local_40;
  long local_38;
  
  uVar4 = param_3 - param_2;
  if (uVar4 < 0x7ffffffffffffff9) goto LAB_00188385;
  plVar1 = (long *)0x0;
  while( true ) {
    param_1 = plVar1;
    param_2 = uVar4;
    (*(code *)PTR_handle_error_00203cd8)(param_1,uVar4,param_4);
    param_3 = extraout_RDX;
LAB_00188385:
    if (param_3 == param_2) break;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00203c98)();
    lVar2 = (*(code *)PTR___rust_alloc_00203c70)(uVar4,8);
    plVar1 = (long *)&DAT_00000008;
    if (lVar2 != 0) {
      lVar3 = (uVar4 >> 3) * -0x5555555555555555;
LAB_001883d9:
      local_48 = &local_50;
      local_50 = 0;
      local_40 = 0;
                    /* try { // try from 00188404 to 00188416 has its CatchHandler @ 0018843a */
      local_38 = lVar2;
      _<core::iter::adapters::map::Map<I,F>as_core::iter::traits::iterator::Iterator>::fold
                (param_2,param_3,&local_48);
      param_1[2] = local_50;
      *param_1 = lVar3;
      param_1[1] = lVar2;
      return param_1;
    }
  }
  lVar2 = 8;
  lVar3 = 0;
  goto LAB_001883d9;
}


