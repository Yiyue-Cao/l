// ELF address 0x00000000001ad8f0; fb_ctx_list_strategies

undefined1 * fb_ctx_list_strategies(long param_1,long param_2,long param_3)

{
  undefined1 auVar1 [16];
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined1 (*pauVar5) [16];
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined1 *puVar11;
  ulong uVar12;
  undefined1 (*local_a8) [16];
  undefined1 (*local_a0) [16];
  undefined1 *local_98;
  ushort local_90;
  undefined8 local_88;
  undefined1 (*local_80) [16];
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  ulong local_50;
  long local_48;
  long local_40;
  long local_38;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0xe8) + 0x14b8);
  if (0x7ffffffffffffffe < *(ulong *)(lVar2 + 0x10)) {
                    /* try { // try from 002adb3e to 002adb4a has its CatchHandler @ 002adbc8 */
    (*(code *)PTR_panic_already_mutably_borrowed_003f2830)
              (&PTR_s_future_backtest_src_ffi_rs_003e2d88);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  *(ulong *)(lVar2 + 0x10) = *(ulong *)(lVar2 + 0x10) + 1;
  local_a8 = *(undefined1 (**) [16])(lVar2 + 0x18);
  local_98 = *local_a8 + *(long *)(lVar2 + 0x20) + 1;
  auVar1 = *local_a8;
  local_90 = ~((ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
  local_88 = *(undefined8 *)(lVar2 + 0x30);
  local_a0 = local_a8 + 1;
                    /* try { // try from 002ad973 to 002ad98c has its CatchHandler @ 002adbba */
  local_68 = param_2;
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (&local_60,&local_a8,anon_d0b8e27bea7bf57269a32e15b6abf5cf_102_llvm_1643563994444475245)
  ;
  if (1 < local_50) {
    if (local_50 < 0x15) {
      lVar10 = 0x30;
      do {
                    /* try { // try from 002adb68 to 002adb6f has its CatchHandler @ 002adb94 */
        core::slice::sort::shared::smallsort::insert_tail(local_58,lVar10 + local_58);
        lVar10 = lVar10 + 0x30;
      } while (local_50 * 0x30 != lVar10);
    }
    else {
                    /* try { // try from 002adb7e to 002adb8e has its CatchHandler @ 002adba2 */
      (*(code *)PTR_driftsort_main_003f2a38)(local_58,local_50,&local_a8);
    }
  }
                    /* try { // try from 002ad9ac to 002ad9bf has its CatchHandler @ 002adba2 */
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (&local_48,local_58,local_50 * 0x30 + local_58,
             anon_d0b8e27bea7bf57269a32e15b6abf5cf_102_llvm_1643563994444475245);
  local_70 = local_58;
                    /* try { // try from 002ad9d7 to 002ad9f3 has its CatchHandler @ 002adb96 */
  local_78 = param_3;
  alloc::str::join_generic_copy(&local_a8,local_40,local_38,"\n",1);
  puVar6 = local_98;
  pauVar5 = local_a0;
  puVar4 = PTR___rust_dealloc_003f2638;
  local_80 = local_a8;
  if (local_38 != 0) {
    puVar9 = (undefined8 *)(local_40 + 8);
    lVar10 = local_38;
    do {
      if (puVar9[-1] != 0) {
        (*(code *)puVar4)(*puVar9,puVar9[-1],1);
      }
      puVar9 = puVar9 + 3;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  if (local_48 != 0) {
    (*(code *)PTR___rust_dealloc_003f2638)(local_40,local_48 * 0x18,8);
  }
  lVar8 = local_68;
  lVar10 = local_78;
  puVar11 = (undefined1 *)0x0;
  if (local_78 != 0) {
    puVar11 = (undefined1 *)(local_78 + -1);
  }
  if (puVar6 <= puVar11) {
    puVar11 = puVar6;
  }
  (*(code *)PTR_memcpy_003f2700)(local_68,pauVar5,puVar11);
  lVar7 = local_70;
  if (lVar10 != 0) {
    puVar11[lVar8] = 0;
  }
  if (local_80 != (undefined1 (*) [16])0x0) {
    (*(code *)PTR___rust_dealloc_003f2638)(pauVar5,local_80,1);
  }
  puVar4 = PTR___rust_dealloc_003f2638;
  if (local_50 != 0) {
    puVar9 = (undefined8 *)(lVar7 + 0x20);
    uVar12 = local_50;
    do {
      if (puVar9[-4] != 0) {
        (*(code *)puVar4)(puVar9[-3],puVar9[-4],1);
      }
      if (puVar9[-1] != 0) {
        (*(code *)puVar4)(*puVar9,puVar9[-1],1);
      }
      puVar9 = puVar9 + 6;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  if (local_60 != 0) {
    (*(code *)PTR___rust_dealloc_003f2638)(lVar7,local_60 * 0x30,8);
  }
  *(long *)(lVar2 + 0x10) = *(long *)(lVar2 + 0x10) + -1;
  return puVar11;
}


