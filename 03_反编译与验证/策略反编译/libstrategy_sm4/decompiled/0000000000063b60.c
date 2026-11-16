// ELF address 0x0000000000063b60; _ZN12strategy_sm417signal_pairs_tree15SignalPairStats28get_pairs_time_sec_ms_median17hd03f3837d95f7339E.llvm.4719369549894925764

/* strategy_sm4::signal_pairs_tree::SignalPairStats::get_pairs_time_sec_ms_median */

undefined8 __rustcall
strategy_sm4::signal_pairs_tree::SignalPairStats::get_pairs_time_sec_ms_median(ulong *param_1)

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
                               &
                               PTR_anon_783cd9a4f7724ec660c77fda0343f220_2_llvm_17731430809145393098_001e2018
                              );
  lVar2 = local_40;
  if (local_38 == 0) {
    uVar6 = 0;
  }
  else {
    local_30 = &local_51;
    if (local_38 != 1) {
      if (local_38 < 0x15) {
                    /* try { // try from 00163c5b to 00163cca has its CatchHandler @ 00163ccd */
        core::slice::sort::shared::smallsort::insertion_sort_shift_left
                  (local_40,local_38,1,&local_30);
      }
      else {
        core::slice::sort::stable::driftsort_main(local_40,local_38,&local_30);
      }
      if ((local_38 & 1) == 0) {
        uVar3 = local_38 >> 1;
        if (local_38 <= uVar3 - 1) {
          (*(code *)PTR_panic_bounds_check_001e7ca8)
                    (uVar3 - 1,local_38,
                     &PTR_anon_6f943687bdd6e710d6695cc1d1c13590_14_llvm_7346471370157798290_001e21b8
                    );
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        local_50 = (*(double *)(lVar2 + -8 + uVar3 * 8) + *(double *)(lVar2 + uVar3 * 8)) *
                   DAT_00117f50;
        uVar6 = 1;
        goto joined_r0x00163ca5;
      }
    }
    local_50 = *(double *)(lVar2 + (local_38 & 0xfffffffffffffffe) * 4);
    uVar6 = 1;
  }
joined_r0x00163ca5:
  if (local_48 != 0) {
    (*(code *)PTR___rust_dealloc_001e78c8)(local_40,local_48 << 3,8);
  }
  return uVar6;
}


