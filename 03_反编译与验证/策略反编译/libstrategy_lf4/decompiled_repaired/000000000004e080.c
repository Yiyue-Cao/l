// ELF address 0x000000000004e080; core::ptr::drop_in_place<strategy_lf4::StrategyLF4>

/* WARNING: Switch with 1 destination removed at 0x0014e1df */
/* core::ptr::drop_in_place<strategy_lf4::StrategyLF4> */

long __rustcall core::ptr::drop_in_place<strategy_lf4::StrategyLF4>(long *param_1)

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
  
                    /* try { // try from 0014e095 to 0014e099 has its CatchHandler @ 0014e1f4 */
  _<hashbrown::raw::RawTable<T,A>as_core::ops::drop::Drop>::drop(param_1 + 0x22);
  puVar4 = PTR___rust_dealloc_001cca48;
  lVar5 = param_1[0x29];
  if (lVar5 != 0) {
    lVar9 = param_1[0x2b];
    if (lVar9 != 0) {
      pauVar6 = (undefined1 (*) [16])param_1[0x28];
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
            pauVar6 = pauVar6 + -0x70;
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
        if (*(long *)pauVar6[(ulong)uVar2 * -7 + -7] != 0) {
          (*(code *)puVar4)(*(undefined8 *)(pauVar6[(ulong)uVar2 * -7 + -7] + 8),
                            *(long *)pauVar6[(ulong)uVar2 * -7 + -7],1);
        }
        lVar9 = lVar9 + -1;
        uVar8 = uVar8 - 1 & uVar8;
      } while (lVar9 != 0);
    }
    lVar9 = lVar5 * 0x71 + 0x81;
    if (lVar9 != 0) {
      (*(code *)PTR___rust_dealloc_001cca48)(param_1[0x28] + lVar5 * -0x70 + -0x70,lVar9,0x10);
    }
  }
  lVar5 = *param_1;
  lVar9 = -lVar5;
  if (lVar5 != 0) {
    lVar9 = (*(code *)PTR___rust_dealloc_001cca48)(param_1[1],lVar5,1);
  }
  if (param_1[3] != 0) {
    lVar9 = (*(code *)PTR___rust_dealloc_001cca48)(param_1[4],param_1[3],1);
  }
  if (param_1[6] != 0) {
    lVar5 = (*(code *)PTR_free_001cd498)(param_1[7],param_1[6] << 3,8);
    return lVar5;
  }
  return lVar9;
}


