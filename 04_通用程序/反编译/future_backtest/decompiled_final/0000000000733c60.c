// ELF address 0x0000000000733c60; future_backtest::Customer::customer::Account::upnl_posvalue

undefined8
_ZN15future_backtest8Customer8customer7Account13upnl_posvalue17ha370625ce335420aE(long param_1)

{
  undefined1 auVar1 [16];
  uint uVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  uint uVar5;
  
  lVar3 = *(long *)(param_1 + 0x780);
  auVar1 = **(undefined1 (**) [16])(param_1 + 0x768);
  uVar5 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
  pauVar4 = *(undefined1 (**) [16])(param_1 + 0x768) + 1;
  do {
    if ((short)uVar5 == 0) {
      if (lVar3 == 0) {
        return 1;
      }
      do {
        auVar1 = *pauVar4;
        pauVar4 = pauVar4 + 1;
        uVar5 = (uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
      } while (uVar5 == 0xffff);
      uVar5 = ~uVar5;
    }
    for (uVar2 = uVar5; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1 | 0x80000000) {
    }
    uVar5 = uVar5 - 1 & uVar5;
    lVar3 = lVar3 + -1;
  } while( true );
}


