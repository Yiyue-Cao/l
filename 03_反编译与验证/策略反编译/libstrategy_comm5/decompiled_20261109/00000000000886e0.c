// ELF address 0x00000000000886e0; <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter

/* _<alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter */

long * __rustcall
_<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
          (long *param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  long local_d8;
  long local_d0;
  undefined8 *puStack_c8;
  long local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long lStack_40;
  
  puVar5 = PTR_memcmp_00203ce8;
  do {
    lVar7 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>::
            next(param_2);
    if (lVar7 == 0) {
      *param_1 = 0;
      param_1[1] = 8;
      param_1[2] = 0;
      return param_1;
    }
    uVar2 = *(ulong *)(lVar7 + 0x10);
    uVar3 = *(ulong *)(*(long *)(param_2 + 0x12) + 0x3c8);
    uVar9 = uVar3;
    if (uVar2 < uVar3) {
      uVar9 = uVar2;
    }
    iVar6 = (*(code *)puVar5)(*(undefined8 *)(lVar7 + 8),
                              *(undefined8 *)(*(long *)(param_2 + 0x12) + 0x3c0),uVar9);
    lVar10 = uVar2 - uVar3;
    if (iVar6 != 0) {
      lVar10 = (long)iVar6;
    }
  } while (-1 < lVar10);
  (*(code *)PTR_clone_00203db8)
            (&local_b8,lVar7,anon_50e25bb1355b8971fc58210c29d1b4b6_1_llvm_1301231569978033549);
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00203c98)();
  puVar8 = (undefined8 *)(*(code *)PTR___rust_alloc_00203c70)(0x60,8);
  if (puVar8 == (undefined8 *)0x0) {
                    /* try { // try from 00188925 to 0018893b has its CatchHandler @ 0018895b */
    (*(code *)PTR_handle_error_00203cd8)(8,0x60,param_3);
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  puVar8[2] = local_a8;
  *puVar8 = local_b8;
  puVar8[1] = uStack_b0;
  local_d0 = 4;
  local_c0 = 1;
  local_48 = *(undefined8 *)(param_2 + 0x10);
  lStack_40 = *(long *)(param_2 + 0x12);
  local_88 = *param_2;
  uStack_84 = param_2[1];
  uStack_80 = param_2[2];
  uStack_7c = param_2[3];
  local_78 = *(undefined8 *)(param_2 + 4);
  uStack_70 = *(undefined8 *)(param_2 + 6);
  local_68 = *(undefined8 *)(param_2 + 8);
  uStack_60 = *(undefined8 *)(param_2 + 10);
  local_58 = *(undefined8 *)(param_2 + 0xc);
  uStack_50 = *(undefined8 *)(param_2 + 0xe);
  local_d8 = 1;
  puStack_c8 = puVar8;
                    /* try { // try from 00188830 to 00188837 has its CatchHandler @ 0018897c */
  while (lVar7 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                 ::next(&local_88), lVar7 != 0) {
    uVar2 = *(ulong *)(lVar7 + 0x10);
    uVar3 = *(ulong *)(lStack_40 + 0x3c8);
    uVar9 = uVar3;
    if (uVar2 < uVar3) {
      uVar9 = uVar2;
    }
    iVar6 = (*(code *)puVar5)(*(undefined8 *)(lVar7 + 8),*(undefined8 *)(lStack_40 + 0x3c0),uVar9);
    lVar10 = uVar2 - uVar3;
    if (iVar6 != 0) {
      lVar10 = (long)iVar6;
    }
    if (lVar10 < 0) {
                    /* try { // try from 0018887b to 0018888f has its CatchHandler @ 00188959 */
      (*(code *)PTR_clone_00203db8)
                (&local_a0,lVar7,anon_50e25bb1355b8971fc58210c29d1b4b6_1_llvm_1301231569978033549);
      if (CONCAT44(uStack_9c,local_a0) == -0x8000000000000000) break;
      if (local_d8 == local_d0) {
                    /* try { // try from 001888af to 001888d0 has its CatchHandler @ 0018893e */
        alloc::raw_vec::RawVecInner<A>::reserve::do_reserve_and_handle(&local_d0,local_d8,1,8,0x18);
        puVar8 = puStack_c8;
      }
      puVar8[local_d8 * 3 + 2] = local_90;
      puVar1 = puVar8 + local_d8 * 3;
      *(undefined4 *)puVar1 = local_a0;
      *(undefined4 *)((long)puVar1 + 4) = uStack_9c;
      *(undefined4 *)(puVar1 + 1) = uStack_98;
      *(undefined4 *)((long)puVar1 + 0xc) = uStack_94;
      local_d8 = local_d8 + 1;
      local_c0 = local_d8;
    }
  }
  param_1[2] = local_c0;
  *param_1 = local_d0;
  param_1[1] = (long)puStack_c8;
  return param_1;
}


