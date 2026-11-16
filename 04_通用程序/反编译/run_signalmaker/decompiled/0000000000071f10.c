// ELF address 0x0000000000071f10; run_signalmaker::SignalMakerSweepGrid::restrict_signals

/* run_signalmaker::SignalMakerSweepGrid::restrict_signals */

undefined8 __rustcall
run_signalmaker::SignalMakerSweepGrid::restrict_signals(long *param_1,long *param_2)

{
  long lVar1;
  undefined **ppuVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long local_b0;
  undefined8 local_a8;
  long local_a0;
  undefined **local_98;
  undefined **local_90;
  long **local_88;
  undefined8 local_80;
  undefined8 local_78;
  long *local_68;
  code *local_60;
  undefined1 local_58 [24];
  undefined1 local_40 [24];
  
  lVar1 = param_1[1];
                    /* try { // try from 00171f32 to 00171f41 has its CatchHandler @ 001720c5 */
  _<alloc::collections::btree::set::BTreeSet<T>as_core::iter::traits::collect::FromIterator<T>>::
  from_iter(local_58,lVar1,lVar1 + param_1[2] * 8);
  ppuVar2 = (undefined **)param_2[1];
  local_90 = ppuVar2 + param_2[2];
                    /* try { // try from 00171f5d to 00171f75 has its CatchHandler @ 0017208d */
  local_98 = ppuVar2;
  local_88 = (long **)local_58;
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (&local_b0,&local_98,
             &PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_002a5720);
  if (local_a0 == 0) {
    if (*param_1 != 0) {
      (*(code *)PTR___rust_dealloc_002b2908)(lVar1,*param_1 << 3,8);
    }
    param_1[2] = param_2[2];
    uVar3 = *(undefined4 *)((long)param_2 + 4);
    lVar1 = param_2[1];
    uVar4 = *(undefined4 *)((long)param_2 + 0xc);
    *(int *)param_1 = (int)*param_2;
    *(undefined4 *)((long)param_1 + 4) = uVar3;
    *(int *)(param_1 + 1) = (int)lVar1;
    *(undefined4 *)((long)param_1 + 0xc) = uVar4;
    if (local_b0 != 0) {
      (*(code *)PTR___rust_dealloc_002b2908)(local_a8,local_b0 << 3,8);
    }
    _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop(local_58);
    uVar5 = 0;
  }
  else {
    local_60 = _<alloc::vec::Vec<T,A>as_core::fmt::Debug>::fmt;
    local_98 = &PTR_s___sigs_contains_signals_outside_b_002a5b90;
    local_90 = (undefined **)0x1;
    local_78 = 0;
    local_88 = &local_68;
    local_80 = 1;
                    /* try { // try from 00171fc4 to 00171fdd has its CatchHandler @ 00172092 */
    local_68 = &local_b0;
    (*(code *)PTR_format_inner_002b2978)(local_40,&local_98);
    uVar5 = anyhow::error::_<impl_anyhow::Error>::msg(local_40);
    if (local_b0 != 0) {
      (*(code *)PTR___rust_dealloc_002b2908)(local_a8,local_b0 << 3,8);
    }
                    /* try { // try from 00171fff to 00172008 has its CatchHandler @ 001720c5 */
    _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop(local_58);
    if (*param_2 != 0) {
      (*(code *)PTR___rust_dealloc_002b2908)(ppuVar2,*param_2 << 3,8);
    }
  }
  return uVar5;
}


