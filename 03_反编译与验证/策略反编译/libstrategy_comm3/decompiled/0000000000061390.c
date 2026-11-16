// ELF address 0x0000000000061390; core::ptr::drop_in_place<strategy_comm3::StrategyComm3>

/* WARNING: Switch with 1 destination removed at 0x00161522 */
/* core::ptr::drop_in_place<strategy_comm3::StrategyComm3> */

void __rustcall core::ptr::drop_in_place<strategy_comm3::StrategyComm3>(int *param_1)

{
  undefined1 auVar1 [16];
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined1 (*pauVar6) [16];
  undefined1 (*pauVar7) [16];
  uint uVar8;
  long lVar9;
  
                    /* try { // try from 001613a5 to 001613a9 has its CatchHandler @ 0016154a */
  _<hashbrown::raw::RawTable<T,A>as_core::ops::drop::Drop>::drop(param_1 + 0x66);
  puVar5 = PTR___rust_dealloc_001dcef0;
  lVar2 = *(long *)(param_1 + 0x74);
  if (lVar2 != 0) {
    lVar9 = *(long *)(param_1 + 0x78);
    if (lVar9 != 0) {
      pauVar6 = *(undefined1 (**) [16])(param_1 + 0x72);
      auVar1 = *pauVar6;
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
      pauVar7 = pauVar6 + 1;
      do {
        if ((short)uVar8 == 0) {
          do {
            auVar1 = *pauVar7;
            pauVar6 = pauVar6 + -0x30;
            pauVar7 = pauVar7 + 1;
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
        uVar3 = 0;
        for (uVar4 = uVar8; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        if (*(long *)pauVar6[(ulong)uVar3 * -3 + -3] != 0) {
          (*(code *)puVar5)(*(undefined8 *)(pauVar6[(ulong)uVar3 * -3 + -3] + 8),
                            *(long *)pauVar6[(ulong)uVar3 * -3 + -3],1);
        }
        lVar9 = lVar9 + -1;
        uVar8 = uVar8 - 1 & uVar8;
      } while (lVar9 != 0);
    }
    lVar9 = lVar2 * 0x31 + 0x41;
    if (lVar9 != 0) {
      (*(code *)PTR___rust_dealloc_001dcef0)
                (*(long *)(param_1 + 0x72) + lVar2 * -0x30 + -0x30,lVar9,0x10);
    }
  }
                    /* try { // try from 001614a6 to 001614aa has its CatchHandler @ 00161537 */
  _<hashbrown::raw::RawTable<T,A>as_core::ops::drop::Drop>::drop(param_1 + 0x7e);
  if (*param_1 != 2) {
    if (*(long *)(param_1 + 0x10) != 0) {
      (*(code *)PTR___rust_dealloc_001dcef0)
                (*(undefined8 *)(param_1 + 0x12),*(long *)(param_1 + 0x10),1);
    }
    if (*(long *)(param_1 + 0x16) != 0) {
      (*(code *)PTR___rust_dealloc_001dcef0)
                (*(undefined8 *)(param_1 + 0x18),*(long *)(param_1 + 0x16),1);
    }
    if (*(long *)(param_1 + 0x1c) != 0) {
      (*(code *)PTR___rust_dealloc_001dcef0)
                (*(undefined8 *)(param_1 + 0x1e),*(long *)(param_1 + 0x1c) << 3,8);
    }
    if (*(long *)(param_1 + 0x22) != 0) {
      (*(code *)PTR_free_001dda10)(*(undefined8 *)(param_1 + 0x24),*(long *)(param_1 + 0x22),1);
      return;
    }
  }
  return;
}


