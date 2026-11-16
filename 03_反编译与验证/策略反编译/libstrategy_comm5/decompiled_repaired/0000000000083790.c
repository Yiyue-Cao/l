// ELF address 0x0000000000083790; strategy_comm5::signal_trigger::SignalTrigger::windows_rsi_trigger

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm5::signal_trigger::SignalTrigger::windows_rsi_trigger */

undefined1 * __rustcall
strategy_comm5::signal_trigger::SignalTrigger::windows_rsi_trigger
          (undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined1 auVar1 [16];
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined1 uVar5;
  long lVar6;
  long lVar7;
  undefined1 (*pauVar8) [16];
  long lVar9;
  undefined1 (*pauVar10) [16];
  uint uVar11;
  char cVar12;
  ulong uVar13;
  double dVar14;
  undefined8 extraout_XMM0_Qa;
  long local_78;
  long local_70;
  long local_68;
  undefined8 local_60;
  undefined1 *local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  
  local_78 = 0;
  local_70 = 1;
  local_68 = 0;
  lVar9 = param_3[3];
  local_60 = param_1;
  local_58 = param_2;
  if (lVar9 != 0) {
    pauVar10 = (undefined1 (*) [16])*param_3;
    pauVar8 = pauVar10 + 1;
    auVar1 = *pauVar10;
    uVar11 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
    local_38 = (double)param_3[8];
    local_40 = (double)param_3[0xb];
    local_48 = (double)param_3[10];
    local_50 = (double)param_3[9];
    lVar6 = 1;
    do {
      lVar4 = local_68;
      if ((short)uVar11 == 0) {
        do {
          auVar1 = *pauVar8;
          pauVar10 = pauVar10 + -0x98;
          pauVar8 = pauVar8 + 1;
          uVar11 = (uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
        } while (uVar11 == 0xffff);
        uVar11 = ~uVar11;
      }
      uVar2 = 0;
      for (uVar3 = uVar11; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
        uVar2 = uVar2 + 1;
      }
      lVar7 = (ulong)uVar2 * -0x98;
      dVar14 = (double)(*(ulong *)((long)pauVar10 + lVar7 + -0x18) & _DAT_001164c0);
      uVar13 = -(ulong)(DAT_00116348 < dVar14);
      dVar14 = (double)(~uVar13 & _s__00116440 |
                       (ulong)(DAT_001163c8 -
                              DAT_001163c8 /
                              (*(double *)((long)pauVar10 + lVar7 + -0x20) / dVar14 + DAT_00116368))
                       & uVar13);
      *(double *)((long)pauVar10 + lVar7 + -0x10) = dVar14;
      if (local_38 <= dVar14) {
        cVar12 = '\0';
      }
      else {
        cVar12 = '\x03';
        if (dVar14 < local_40) {
          cVar12 = '\x02';
          if (local_48 < dVar14) {
            cVar12 = (local_50 < dVar14) * '\x03' + '\x01';
          }
        }
      }
      if (local_68 == local_78) {
                    /* try { // try from 0018392d to 0018393b has its CatchHandler @ 0018396d */
        alloc::raw_vec::RawVec<T,A>::grow_one
                  (&local_78,anon_50e25bb1355b8971fc58210c29d1b4b6_12_llvm_1301231569978033549);
        lVar6 = local_70;
      }
      uVar11 = uVar11 - 1 & uVar11;
      lVar9 = lVar9 + -1;
      *(char *)(lVar6 + lVar4) = cVar12;
      local_68 = lVar4 + 1;
    } while (lVar9 != 0);
  }
  uVar5 = enum_rate_counter(local_60,&local_78);
  *local_58 = uVar5;
  *(undefined8 *)(local_58 + 8) = extraout_XMM0_Qa;
  return local_58;
}


