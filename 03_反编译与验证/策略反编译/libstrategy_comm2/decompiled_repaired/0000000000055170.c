// ELF address 0x0000000000055170; core::ptr::drop_in_place<strategy_comm2::StrategyComm2>

/* WARNING: Switch with 1 destination removed at 0x001552e3 */
/* core::ptr::drop_in_place<strategy_comm2::StrategyComm2> */

long __rustcall core::ptr::drop_in_place<strategy_comm2::StrategyComm2>(long *param_1)

{
  undefined1 auVar1 [16];
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 (*pauVar6) [16];
  undefined1 (*pauVar7) [16];
  uint uVar8;
  long lVar9;
  
                    /* try { // try from 00155185 to 00155189 has its CatchHandler @ 0015530b */
  _<hashbrown::raw::RawTable<T,A>as_core::ops::drop::Drop>::drop(param_1 + 0x28);
  puVar4 = PTR___rust_dealloc_001d5c50;
  lVar5 = param_1[0x2f];
  if (lVar5 != 0) {
    lVar9 = param_1[0x31];
    if (lVar9 != 0) {
      pauVar6 = (undefined1 (*) [16])param_1[0x2e];
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
        uVar2 = 0;
        for (uVar3 = uVar8; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
          uVar2 = uVar2 + 1;
        }
        if (*(long *)pauVar6[(ulong)uVar2 * -3 + -3] != 0) {
          (*(code *)puVar4)(*(undefined8 *)(pauVar6[(ulong)uVar2 * -3 + -3] + 8),
                            *(long *)pauVar6[(ulong)uVar2 * -3 + -3],1);
        }
        lVar9 = lVar9 + -1;
        uVar8 = uVar8 - 1 & uVar8;
      } while (lVar9 != 0);
    }
    lVar9 = lVar5 * 0x31 + 0x41;
    if (lVar9 != 0) {
      (*(code *)PTR___rust_dealloc_001d5c50)(param_1[0x2e] + lVar5 * -0x30 + -0x30,lVar9,0x10);
    }
  }
                    /* try { // try from 00155286 to 0015528a has its CatchHandler @ 001552f8 */
  _<hashbrown::raw::RawTable<T,A>as_core::ops::drop::Drop>::drop(param_1 + 0x34);
  lVar5 = *param_1;
  lVar9 = -lVar5;
  if (lVar5 != 0) {
    lVar9 = (*(code *)PTR___rust_dealloc_001d5c50)(param_1[1],lVar5,1);
  }
  if (param_1[3] != 0) {
    lVar9 = (*(code *)PTR___rust_dealloc_001d5c50)(param_1[4],param_1[3],1);
  }
  if (param_1[6] != 0) {
    lVar5 = (*(code *)PTR_free_001d6728)(param_1[7],param_1[6] << 3,8);
    return lVar5;
  }
  return lVar9;
}


