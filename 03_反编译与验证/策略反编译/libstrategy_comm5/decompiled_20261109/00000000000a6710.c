// ELF address 0x00000000000a6710; <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter

/* _<alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter */

void __rustcall
_<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
          (long *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long local_1a0;
  long local_190;
  long local_180;
  long local_178;
  long local_170;
  long *local_168;
  long local_160;
  undefined8 local_158;
  long local_150;
  undefined1 local_148 [136];
  long local_c0;
  undefined1 local_b8 [136];
  
  puVar7 = PTR_clone_00203f88;
  puVar6 = PTR_bcmp_00203d28;
  lVar10 = *param_2;
  lVar1 = param_2[1];
  local_168 = param_1;
  if (lVar10 != lVar1) {
    lVar2 = param_2[2];
    local_160 = param_2[3];
    local_158 = param_3;
    if (local_160 == 0) {
      do {
        lVar9 = lVar10 + 0x148;
        *param_2 = lVar9;
        (*(code *)puVar7)(&local_c0,lVar10 + 0xb0);
        if (local_c0 != -0x8000000000000000) {
          lVar9 = lVar10 + 0x148;
          goto LAB_001a68a2;
        }
        lVar10 = lVar9;
      } while (lVar9 != lVar1);
    }
    else {
      lVar12 = local_160 << 4;
      do {
        lVar9 = lVar10 + 0x148;
        *param_2 = lVar9;
        uVar3 = *(undefined8 *)(lVar10 + 0xb8);
        lVar4 = *(long *)(lVar10 + 0xc0);
        lVar11 = 0;
        do {
          if ((*(long *)(lVar2 + 8 + lVar11) == lVar4) &&
             (iVar8 = (*(code *)puVar6)(*(undefined8 *)(lVar2 + lVar11),uVar3,lVar4), iVar8 == 0))
          goto LAB_001a679e;
          lVar11 = lVar11 + 0x10;
        } while (lVar12 != lVar11);
        (*(code *)PTR_clone_00203f88)(&local_c0,lVar10 + 0xb0);
        if (local_c0 != -0x8000000000000000) goto LAB_001a68a2;
LAB_001a679e:
        lVar10 = lVar9;
      } while (lVar9 != lVar1);
    }
  }
  *local_168 = 0;
  local_168[1] = 8;
  local_168[2] = 0;
  return;
LAB_001a68a2:
  lVar10 = local_c0;
  (*(code *)PTR_memcpy_00203cc8)(local_148,local_b8,0x88);
  local_150 = lVar10;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00203c98)();
  local_1a0 = (*(code *)PTR___rust_alloc_00203c70)(0x240,8);
  if (local_1a0 == 0) {
                    /* try { // try from 001a6b7a to 001a6b8e has its CatchHandler @ 001a6bb2 */
    (*(code *)PTR_handle_error_00203cd8)(8,0x240,local_158);
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  (*(code *)PTR_memcpy_00203cc8)(local_1a0,&local_150,0x90);
  puVar7 = PTR_clone_00203f88;
  puVar6 = PTR_memcpy_00203cc8;
  local_180 = 4;
  local_170 = 1;
  local_178 = local_1a0;
  if (lVar9 != lVar1) {
    if (local_160 == 0) {
      lVar10 = 1;
      do {
                    /* try { // try from 001a6a9b to 001a6a9f has its CatchHandler @ 001a6bc7 */
        while ((*(code *)puVar7)(&local_c0,lVar9 + 0xb0), lVar2 = local_c0,
              local_c0 != -0x8000000000000000) {
          (*(code *)puVar6)(local_148,local_b8,0x88);
          local_150 = lVar2;
          if (lVar10 == local_180) {
                    /* try { // try from 001a6aee to 001a6b0a has its CatchHandler @ 001a6b91 */
            alloc::raw_vec::RawVecInner<A>::reserve::do_reserve_and_handle
                      (&local_180,lVar10,1,8,0x90);
            local_1a0 = local_178;
          }
          lVar9 = lVar9 + 0x148;
          (*(code *)puVar6)(lVar10 * 0x90 + local_1a0,&local_150,0x90);
          lVar10 = lVar10 + 1;
          local_170 = lVar10;
          if (lVar9 == lVar1) goto LAB_001a6b49;
        }
        lVar9 = lVar9 + 0x148;
      } while (lVar9 != lVar1);
    }
    else {
      lVar10 = local_160 << 4;
      local_190 = 1;
      do {
        lVar12 = lVar9 + 0xb0;
        uVar3 = *(undefined8 *)(lVar9 + 0xb8);
        lVar4 = *(long *)(lVar9 + 0xc0);
        lVar9 = lVar9 + 0x148;
        lVar11 = 0;
        do {
          if ((*(long *)(lVar2 + 8 + lVar11) == lVar4) &&
             (iVar8 = (*(code *)PTR_bcmp_00203d28)(*(undefined8 *)(lVar2 + lVar11),uVar3,lVar4),
             iVar8 == 0)) goto LAB_001a6970;
          lVar11 = lVar11 + 0x10;
        } while (lVar10 != lVar11);
                    /* try { // try from 001a69e0 to 001a69f2 has its CatchHandler @ 001a6bc9 */
        (*(code *)PTR_clone_00203f88)(&local_c0,lVar12);
        lVar12 = local_c0;
        if (local_c0 != -0x8000000000000000) {
          (*(code *)PTR_memcpy_00203cc8)(local_148,local_b8,0x88);
          local_150 = lVar12;
          if (local_190 == local_180) {
                    /* try { // try from 001a6a40 to 001a6a5c has its CatchHandler @ 001a6b93 */
            alloc::raw_vec::RawVecInner<A>::reserve::do_reserve_and_handle
                      (&local_180,local_190,1,8,0x90);
            local_1a0 = local_178;
          }
          (*(code *)PTR_memcpy_00203cc8)(local_190 * 0x90 + local_1a0,&local_150,0x90);
          local_190 = local_190 + 1;
          local_170 = local_190;
        }
LAB_001a6970:
      } while (lVar9 != lVar1);
    }
  }
LAB_001a6b49:
  local_168[2] = local_170;
  *local_168 = local_180;
  local_168[1] = local_178;
  return;
}


