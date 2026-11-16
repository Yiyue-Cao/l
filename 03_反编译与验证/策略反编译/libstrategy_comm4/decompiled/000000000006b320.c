// ELF address 0x000000000006b320; core::ptr::drop_in_place<strategy_comm4::StrategyComm4>

/* WARNING: Switch with 1 destination removed at 0x0016b52e */
/* core::ptr::drop_in_place<strategy_comm4::StrategyComm4> */

void __rustcall core::ptr::drop_in_place<strategy_comm4::StrategyComm4>(long param_1)

{
  undefined1 auVar1 [16];
  long lVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined *puVar7;
  undefined1 (*pauVar8) [16];
  undefined1 (*pauVar9) [16];
  uint uVar10;
  long lVar11;
  
                    /* try { // try from 0016b335 to 0016b339 has its CatchHandler @ 0016b54b */
  _<hashbrown::raw::RawTable<T,A>as_core::ops::drop::Drop>::drop(param_1 + 0x4d0);
  puVar7 = PTR___rust_dealloc_001f10f8;
  lVar2 = *(long *)(param_1 + 0x508);
  if (lVar2 != 0) {
    lVar11 = *(long *)(param_1 + 0x518);
    if (lVar11 != 0) {
      pauVar8 = *(undefined1 (**) [16])(param_1 + 0x500);
      auVar1 = *pauVar8;
      uVar10 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
      pauVar9 = pauVar8 + 1;
      do {
        if ((short)uVar10 == 0) {
          do {
            auVar1 = *pauVar9;
            pauVar8 = pauVar8 + -0x30;
            pauVar9 = pauVar9 + 1;
            uVar10 = (uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
          } while (uVar10 == 0xffff);
          uVar10 = ~uVar10;
        }
        uVar4 = 0;
        for (uVar6 = uVar10; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        if (*(long *)pauVar8[(ulong)uVar4 * -3 + -3] != 0) {
          (*(code *)puVar7)(*(undefined8 *)(pauVar8[(ulong)uVar4 * -3 + -3] + 8),
                            *(long *)pauVar8[(ulong)uVar4 * -3 + -3],1);
        }
        lVar11 = lVar11 + -1;
        uVar10 = uVar10 - 1 & uVar10;
      } while (lVar11 != 0);
    }
    lVar11 = lVar2 * 0x31 + 0x41;
    if (lVar11 != 0) {
      (*(code *)PTR___rust_dealloc_001f10f8)
                (*(long *)(param_1 + 0x500) + lVar2 * -0x30 + -0x30,lVar11,0x10);
    }
  }
                    /* try { // try from 0016b436 to 0016b43a has its CatchHandler @ 0016b543 */
  _<hashbrown::raw::RawTable<T,A>as_core::ops::drop::Drop>::drop(param_1 + 0x530);
  drop_in_place<core::option::Option<strategy_comm4::Comm4Params>>(param_1);
  puVar7 = PTR___rust_dealloc_001f10f8;
  lVar2 = *(long *)(param_1 + 0x568);
  if (lVar2 != 0) {
    lVar11 = *(long *)(param_1 + 0x578);
    if (lVar11 != 0) {
      pauVar8 = *(undefined1 (**) [16])(param_1 + 0x560);
      auVar1 = *pauVar8;
      uVar10 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
      pauVar9 = pauVar8 + 1;
      do {
        if ((short)uVar10 == 0) {
          do {
            auVar1 = *pauVar9;
            pauVar8 = pauVar8 + -0x20;
            pauVar9 = pauVar9 + 1;
            uVar10 = (uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
          } while (uVar10 == 0xffff);
          uVar10 = ~uVar10;
        }
        iVar5 = 0;
        for (uVar4 = uVar10; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          iVar5 = iVar5 + 1;
        }
        lVar3 = *(long *)((long)pauVar8 + (-0x20 - (ulong)(uint)(iVar5 << 5)));
        if (lVar3 != 0) {
          (*(code *)puVar7)(*(undefined8 *)((long)pauVar8 + (-0x18 - (ulong)(uint)(iVar5 << 5))),
                            lVar3,1);
        }
        lVar11 = lVar11 + -1;
        uVar10 = uVar10 - 1 & uVar10;
      } while (lVar11 != 0);
    }
    lVar11 = lVar2 * 0x21 + 0x31;
    if (lVar11 != 0) {
      (*(code *)PTR_free_001f1c38)(*(long *)(param_1 + 0x560) + lVar2 * -0x20 + -0x20,lVar11,0x10);
      return;
    }
  }
  return;
}


