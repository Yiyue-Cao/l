// ELF address 0x0000000000088450; <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter

/* _<alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter */

long * __rustcall
_<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
          (long *param_1,long *param_2,undefined8 param_3)

{
  double dVar1;
  undefined1 auVar2 [16];
  long lVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined1 (*pauVar9) [16];
  uint uVar10;
  undefined1 uVar11;
  long lVar12;
  long lVar13;
  long lStack_50;
  undefined1 *puStack_48;
  long lStack_40;
  long *local_38;
  
  local_38 = param_1;
  if (param_2[4] == 0) {
    *param_1 = 0;
    param_1[1] = 1;
    param_1[2] = 0;
  }
  else {
    uVar6 = (uint)*(ushort *)(param_2 + 3);
    lVar13 = *param_2;
    if (*(ushort *)(param_2 + 3) == 0) {
      pauVar9 = (undefined1 (*) [16])param_2[1];
      do {
        auVar2 = *pauVar9;
        lVar13 = lVar13 + -0x980;
        pauVar9 = pauVar9 + 1;
        uVar6 = (uint)(ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar2[0xf] >> 7) << 0xf);
      } while (uVar6 == 0xffff);
      uVar6 = ~uVar6;
      param_2[1] = (long)pauVar9;
      *param_2 = lVar13;
    }
    uVar10 = uVar6 - 1 & uVar6;
    *(short *)(param_2 + 3) = (short)uVar10;
    lVar12 = param_2[4] + -1;
    param_2[4] = lVar12;
    uVar4 = 0;
    for (; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar4 = uVar4 + 1;
    }
    dVar1 = *(double *)(lVar13 + -0x38 + (ulong)uVar4 * -0x98);
    lVar3 = param_2[5];
    if (*(double *)(lVar3 + 0x40) <= dVar1) {
      uVar11 = 0;
    }
    else {
      uVar11 = 3;
      if (dVar1 < *(double *)(lVar3 + 0x58)) {
        uVar11 = 2;
        if (*(double *)(lVar3 + 0x50) < dVar1) {
          uVar11 = 4;
          if (dVar1 <= *(double *)(lVar3 + 0x48)) {
            uVar11 = 1;
          }
        }
      }
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00203c98)();
    puVar7 = (undefined1 *)(*(code *)PTR___rust_alloc_00203c70)(8,1);
    if (puVar7 == (undefined1 *)0x0) {
      uVar8 = (*(code *)PTR_handle_error_00203cd8)(1,8,param_3);
                    /* catch() { ... } // from try @ 0018864d with catch @ 001886b3 */
      if (lStack_50 != 0) {
        (*(code *)PTR___rust_dealloc_00203c78)(puStack_48,lStack_50,1);
      }
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume(uVar8);
    }
    *puVar7 = uVar11;
    lStack_50 = 8;
    lStack_40 = 1;
    puStack_48 = puVar7;
    if (lVar12 != 0) {
      pauVar9 = (undefined1 (*) [16])param_2[1];
      do {
        lVar5 = lStack_40;
        if ((short)uVar10 == 0) {
          do {
            auVar2 = *pauVar9;
            lVar13 = lVar13 + -0x980;
            pauVar9 = pauVar9 + 1;
            uVar10 = (uint)(ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar2[0xf] >> 7) << 0xf);
          } while (uVar10 == 0xffff);
          uVar10 = ~uVar10;
        }
        uVar6 = 0;
        for (uVar4 = uVar10; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar6 = uVar6 + 1;
        }
        dVar1 = *(double *)(lVar13 + -0x38 + (ulong)uVar6 * -0x98);
        if (*(double *)(lVar3 + 0x40) <= dVar1) {
          uVar11 = 0;
        }
        else {
          uVar11 = 3;
          if (((dVar1 < *(double *)(lVar3 + 0x58)) &&
              (uVar11 = 2, *(double *)(lVar3 + 0x50) < dVar1)) &&
             (uVar11 = 4, dVar1 <= *(double *)(lVar3 + 0x48))) {
            uVar11 = 1;
          }
        }
        if (lStack_40 == lStack_50) {
                    /* try { // try from 0018864d to 00188669 has its CatchHandler @ 001886b3 */
          alloc::raw_vec::RawVecInner<A>::reserve::do_reserve_and_handle(&lStack_50,lStack_40,1,1,1)
          ;
          puVar7 = puStack_48;
        }
        uVar10 = uVar10 - 1 & uVar10;
        lVar12 = lVar12 + -1;
        puVar7[lVar5] = uVar11;
        lStack_40 = lVar5 + 1;
      } while (lVar12 != 0);
    }
    local_38[2] = lStack_40;
    *local_38 = lStack_50;
    local_38[1] = (long)puStack_48;
  }
  return local_38;
}


