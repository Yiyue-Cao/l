// ELF address 0x000000000006b230; core::ptr::drop_in_place<std::collections::hash::map::HashMap<(alloc::string::String,alloc::string::String),strategy_comm4::signal_trigger::SignalTrigger>>

/* core::ptr::drop_in_place<std::collections::hash::map::HashMap<(alloc::string::String,alloc::string::String),strategy_comm4::signal_trigger::SignalTrigger>>
    */

void __rustcall
core::ptr::
drop_in_place<std::collections::hash::map::HashMap<(alloc::string::String,alloc::string::String),strategy_comm4::signal_trigger::SignalTrigger>>
          (long *param_1)

{
  undefined1 auVar1 [16];
  long lVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  undefined1 (*pauVar6) [16];
  long lVar7;
  undefined1 (*pauVar8) [16];
  uint uVar9;
  
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    lVar7 = param_1[3];
    if (lVar7 != 0) {
      pauVar8 = (undefined1 (*) [16])*param_1;
      auVar1 = *pauVar8;
      uVar9 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
      pauVar6 = pauVar8 + 1;
      do {
        if ((short)uVar9 == 0) {
          do {
            auVar1 = *pauVar6;
            pauVar8 = pauVar8 + -0xc0;
            pauVar6 = pauVar6 + 1;
            uVar9 = (uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
          } while (uVar9 == 0xffff);
          uVar9 = ~uVar9;
        }
        uVar3 = 0;
        for (uVar4 = uVar9; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        uVar5 = (ulong)uVar3;
        if (*(long *)pauVar8[uVar5 * -0xc + -0xc] != 0) {
          (*(code *)PTR___rust_dealloc_001f10f8)
                    (*(undefined8 *)(pauVar8[uVar5 * -0xc + -0xc] + 8),
                     *(long *)pauVar8[uVar5 * -0xc + -0xc],1);
        }
        if (*(long *)(pauVar8[uVar5 * -0xc + -0xb] + 8) != 0) {
          (*(code *)PTR___rust_dealloc_001f10f8)
                    (*(undefined8 *)pauVar8[uVar5 * -0xc + -10],
                     *(long *)(pauVar8[uVar5 * -0xc + -0xb] + 8),1);
        }
        uVar9 = uVar9 - 1 & uVar9;
        lVar7 = lVar7 + -1;
        _<hashbrown::raw::RawTable<T,A>as_core::ops::drop::Drop>::drop(pauVar8 + uVar5 * -0xc + -9);
      } while (lVar7 != 0);
    }
    lVar7 = lVar2 * 0xc1 + 0xd1;
    if (lVar7 != 0) {
      (*(code *)PTR___rust_dealloc_001f10f8)(*param_1 + lVar2 * -0xc0 + -0xc0,lVar7,0x10);
      return;
    }
  }
  return;
}


