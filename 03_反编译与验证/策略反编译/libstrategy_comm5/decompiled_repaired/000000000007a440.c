// ELF address 0x000000000007a440; core::ptr::drop_in_place<strategy_comm5::StrategyComm5>

/* WARNING: Switch with 1 destination removed at 0x0017a72e */
/* core::ptr::drop_in_place<strategy_comm5::StrategyComm5> */

void __rustcall core::ptr::drop_in_place<strategy_comm5::StrategyComm5>(long param_1)

{
  undefined1 auVar1 [16];
  long lVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined *puVar7;
  uint uVar8;
  undefined1 (*pauVar9) [16];
  undefined1 (*pauVar10) [16];
  long lVar11;
  
                    /* try { // try from 0017a455 to 0017a45d has its CatchHandler @ 0017a748 */
  _<hashbrown::raw::RawTable<T,A>as_core::ops::drop::Drop>::drop(param_1 + 0x568);
  puVar7 = PTR___rust_dealloc_00203c78;
  lVar2 = *(long *)(param_1 + 0x5a0);
  if (lVar2 != 0) {
    lVar11 = *(long *)(param_1 + 0x5b0);
    if (lVar11 != 0) {
      pauVar9 = *(undefined1 (**) [16])(param_1 + 0x598);
      auVar1 = *pauVar9;
      uVar8 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
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
      pauVar10 = pauVar9 + 1;
      do {
        if ((short)uVar8 == 0) {
          do {
            auVar1 = *pauVar10;
            pauVar9 = pauVar9 + -0x30;
            pauVar10 = pauVar10 + 1;
            uVar8 = (uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
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
          } while (uVar8 == 0xffff);
          uVar8 = ~uVar8;
        }
        uVar4 = 0;
        for (uVar6 = uVar8; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        if (*(long *)pauVar9[(ulong)uVar4 * -3 + -3] != 0) {
          (*(code *)puVar7)(*(undefined8 *)(pauVar9[(ulong)uVar4 * -3 + -3] + 8),
                            *(long *)pauVar9[(ulong)uVar4 * -3 + -3],1);
        }
        lVar11 = lVar11 + -1;
        uVar8 = uVar8 - 1 & uVar8;
      } while (lVar11 != 0);
    }
    lVar11 = lVar2 * 0x31 + 0x41;
    if (lVar11 != 0) {
      (*(code *)PTR___rust_dealloc_00203c78)
                (*(long *)(param_1 + 0x598) + lVar2 * -0x30 + -0x30,lVar11,0x10);
    }
  }
                    /* try { // try from 0017a552 to 0017a556 has its CatchHandler @ 0017a743 */
  _<hashbrown::raw::RawTable<T,A>as_core::ops::drop::Drop>::drop(param_1 + 0x5c8);
  drop_in_place<core::option::Option<strategy_comm5::Comm5Params>>(param_1);
  puVar7 = PTR___rust_dealloc_00203c78;
  lVar2 = *(long *)(param_1 + 0x600);
  if (lVar2 != 0) {
    lVar11 = *(long *)(param_1 + 0x610);
    if (lVar11 != 0) {
      pauVar9 = *(undefined1 (**) [16])(param_1 + 0x5f8);
      auVar1 = *pauVar9;
      uVar8 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
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
      pauVar10 = pauVar9 + 1;
      do {
        if ((short)uVar8 == 0) {
          do {
            auVar1 = *pauVar10;
            pauVar9 = pauVar9 + -0x20;
            pauVar10 = pauVar10 + 1;
            uVar8 = (uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
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
          } while (uVar8 == 0xffff);
          uVar8 = ~uVar8;
        }
        iVar5 = 0;
        for (uVar4 = uVar8; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          iVar5 = iVar5 + 1;
        }
        lVar3 = *(long *)((long)pauVar9 + (-0x20 - (ulong)(uint)(iVar5 << 5)));
        if (lVar3 != 0) {
          (*(code *)puVar7)(*(undefined8 *)((long)pauVar9 + (-0x18 - (ulong)(uint)(iVar5 << 5))),
                            lVar3,1);
        }
        lVar11 = lVar11 + -1;
        uVar8 = uVar8 - 1 & uVar8;
      } while (lVar11 != 0);
    }
    lVar11 = lVar2 * 0x21 + 0x31;
    if (lVar11 != 0) {
      (*(code *)PTR___rust_dealloc_00203c78)
                (*(long *)(param_1 + 0x5f8) + lVar2 * -0x20 + -0x20,lVar11,0x10);
    }
  }
  puVar7 = PTR___rust_dealloc_00203c78;
  lVar2 = *(long *)(param_1 + 0x630);
  if (lVar2 != 0) {
    lVar11 = *(long *)(param_1 + 0x640);
    if (lVar11 != 0) {
      pauVar9 = *(undefined1 (**) [16])(param_1 + 0x628);
      auVar1 = *pauVar9;
      uVar8 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
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
      pauVar10 = pauVar9 + 1;
      do {
        if ((short)uVar8 == 0) {
          do {
            auVar1 = *pauVar10;
            pauVar9 = pauVar9 + -0x20;
            pauVar10 = pauVar10 + 1;
            uVar8 = (uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
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
          } while (uVar8 == 0xffff);
          uVar8 = ~uVar8;
        }
        iVar5 = 0;
        for (uVar4 = uVar8; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          iVar5 = iVar5 + 1;
        }
        lVar3 = *(long *)((long)pauVar9 + (-0x20 - (ulong)(uint)(iVar5 << 5)));
        if (lVar3 != 0) {
          (*(code *)puVar7)(*(undefined8 *)((long)pauVar9 + (-0x18 - (ulong)(uint)(iVar5 << 5))),
                            lVar3,1);
        }
        lVar11 = lVar11 + -1;
        uVar8 = uVar8 - 1 & uVar8;
      } while (lVar11 != 0);
    }
    lVar11 = lVar2 * 0x21 + 0x31;
    if (lVar11 != 0) {
      (*(code *)PTR_free_002047f8)(*(long *)(param_1 + 0x628) + lVar2 * -0x20 + -0x20,lVar11,0x10);
      return;
    }
  }
  return;
}


