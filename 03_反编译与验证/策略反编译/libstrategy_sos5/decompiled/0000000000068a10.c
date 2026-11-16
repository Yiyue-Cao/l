// ELF address 0x0000000000068a10; core::ptr::drop_in_place<strategy_sos5::StrategySoS5>

/* WARNING: Switch with 1 destination removed at 0x00168b2e */
/* core::ptr::drop_in_place<strategy_sos5::StrategySoS5> */

void __rustcall core::ptr::drop_in_place<strategy_sos5::StrategySoS5>(long param_1)

{
  undefined1 auVar1 [16];
  long lVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  uint uVar7;
  undefined1 (*pauVar8) [16];
  undefined1 (*pauVar9) [16];
  long lVar10;
  
  drop_in_place<core::option::Option<strategy_sos5::SoS5Params>>();
                    /* try { // try from 00168a2a to 00168a2e has its CatchHandler @ 00168b4b */
  _<hashbrown::raw::RawTable<T,A>as_core::ops::drop::Drop>::drop(param_1 + 0x380);
                    /* try { // try from 00168a36 to 00168a3a has its CatchHandler @ 00168b43 */
  _<hashbrown::raw::RawTable<T,A>as_core::ops::drop::Drop>::drop(param_1 + 0x3b0);
  puVar6 = PTR___rust_dealloc_001e3dc8;
  lVar2 = *(long *)(param_1 + 1000);
  if (lVar2 != 0) {
    lVar10 = *(long *)(param_1 + 0x3f8);
    if (lVar10 != 0) {
      pauVar8 = *(undefined1 (**) [16])(param_1 + 0x3e0);
      auVar1 = *pauVar8;
      uVar7 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
        if ((short)uVar7 == 0) {
          do {
            auVar1 = *pauVar9;
            pauVar8 = pauVar8 + -0x20;
            pauVar9 = pauVar9 + 1;
            uVar7 = (uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
          } while (uVar7 == 0xffff);
          uVar7 = ~uVar7;
        }
        iVar4 = 0;
        for (uVar5 = uVar7; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          iVar4 = iVar4 + 1;
        }
        lVar3 = *(long *)((long)pauVar8 + (-0x20 - (ulong)(uint)(iVar4 << 5)));
        if (lVar3 != 0) {
          (*(code *)puVar6)(*(undefined8 *)((long)pauVar8 + (-0x18 - (ulong)(uint)(iVar4 << 5))),
                            lVar3,1);
        }
        lVar10 = lVar10 + -1;
        uVar7 = uVar7 - 1 & uVar7;
      } while (lVar10 != 0);
    }
    lVar10 = lVar2 * 0x21 + 0x31;
    if (lVar10 != 0) {
      (*(code *)PTR_free_001e4888)(*(long *)(param_1 + 0x3e0) + lVar2 * -0x20 + -0x20,lVar10,0x10);
      return;
    }
  }
  return;
}


