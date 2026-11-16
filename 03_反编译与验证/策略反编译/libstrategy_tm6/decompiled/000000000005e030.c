// ELF address 0x000000000005e030; _ZN12strategy_tm617signal_pairs_tree15SignalPairStats28get_pairs_time_sec_ms_median17h4a9fe67d7a117850E.llvm.17305594220767975752

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_tm6::signal_pairs_tree::SignalPairStats::get_pairs_time_sec_ms_median */

undefined8 __rustcall
strategy_tm6::signal_pairs_tree::SignalPairStats::get_pairs_time_sec_ms_median(ulong *param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined1 local_51;
  double local_50;
  long local_48;
  long local_40;
  ulong local_38;
  undefined1 *local_30;
  long local_28;
  ulong local_20;
  long local_18;
  
  uVar3 = param_1[3];
  if (uVar3 == 0) {
    lVar2 = 0;
    uVar7 = 0;
    lVar5 = 0;
  }
  else {
    uVar7 = *param_1;
    uVar4 = 0;
    if (uVar7 <= param_1[2]) {
      uVar4 = uVar7;
    }
    lVar2 = param_1[2] - uVar4;
    lVar5 = uVar3 - (uVar7 - lVar2);
    if (uVar3 < uVar7 - lVar2 || lVar5 == 0) {
      uVar7 = uVar3 + lVar2;
      lVar5 = 0;
    }
  }
  local_20 = param_1[1];
  local_30 = (undefined1 *)(lVar2 * 0x68 + local_20);
  local_28 = uVar7 * 0x68 + local_20;
  local_18 = lVar5 * 0x68 + local_20;
  local_50 = (double)_<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::
                     from_iter(&local_48,&local_30,
                               anon_d4a1fc886ee21fee57a5c323490ee03a_9_llvm_17305594220767975752);
  lVar2 = local_40;
  if (local_38 == 0) {
    uVar6 = 0;
  }
  else {
    local_30 = &local_51;
    if (local_38 != 1) {
      if (local_38 < 0x15) {
                    /* try { // try from 0015e12b to 0015e19a has its CatchHandler @ 0015e19d */
        core::slice::sort::shared::smallsort::insertion_sort_shift_left
                  (local_40,local_38,1,&local_30);
      }
      else {
        core::slice::sort::stable::driftsort_main(local_40,local_38,&local_30);
      }
      if ((local_38 & 1) == 0) {
        uVar3 = local_38 >> 1;
        if (local_38 <= uVar3 - 1) {
          (*(code *)PTR_panic_bounds_check_001d95f0)
                    (uVar3 - 1,local_38,
                     &
                     PTR_anon_d4a1fc886ee21fee57a5c323490ee03a_28_llvm_17305594220767975752_001d4388
                    );
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        local_50 = (*(double *)(lVar2 + -8 + uVar3 * 8) + *(double *)(lVar2 + uVar3 * 8)) *
                   _DAT_00117600;
        uVar6 = 1;
        goto joined_r0x0015e175;
      }
    }
    local_50 = *(double *)(lVar2 + (local_38 & 0xfffffffffffffffe) * 4);
    uVar6 = 1;
  }
joined_r0x0015e175:
  if (local_48 != 0) {
    (*(code *)PTR___rust_dealloc_001d9238)(local_40,local_48 << 3,8);
  }
  return uVar6;
}


