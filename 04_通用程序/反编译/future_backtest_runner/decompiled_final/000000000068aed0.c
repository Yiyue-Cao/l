// ELF address 0x000000000068aed0; future_backtest::Customer::customer::Account::update_equity

void _ZN15future_backtest8Customer8customer7Account13update_equity17h62a10ec03009d95eE(long param_1)

{
  undefined1 auVar1 [16];
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined1 (*pauVar5) [16];
  undefined1 (*pauVar6) [16];
  uint uVar7;
  double dVar8;
  
  lVar4 = (*(code *)
            PTR__ZN15future_backtest8Customer8customer7Account21upnl_code_calculation17h834ebe2bb239a90bE_019fbe48
          )();
  if (lVar4 != 0) {
    return;
  }
  pauVar5 = *(undefined1 (**) [16])(param_1 + 0x768);
  lVar4 = *(long *)(param_1 + 0x780);
  auVar1 = *pauVar5;
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
  pauVar6 = pauVar5 + 1;
  dVar8 = 0.0;
  do {
    if ((short)uVar7 == 0) {
      if (lVar4 == 0) {
        *(double *)(param_1 + 0x7d8) = dVar8;
        *(double *)(param_1 + 0x7c8) = dVar8 + *(double *)(param_1 + 2000);
        return;
      }
      do {
        auVar1 = *pauVar6;
        pauVar5 = pauVar5 + -0x290;
        pauVar6 = pauVar6 + 1;
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
    uVar2 = 0;
    for (uVar3 = uVar7; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
      uVar2 = uVar2 + 1;
    }
    uVar7 = uVar7 - 1 & uVar7;
    dVar8 = dVar8 + *(double *)pauVar5[(ulong)uVar2 * -0x29 + -7];
    lVar4 = lVar4 + -1;
  } while( true );
}


