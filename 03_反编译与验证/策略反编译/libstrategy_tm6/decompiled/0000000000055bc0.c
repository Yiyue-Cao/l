// ELF address 0x0000000000055bc0; strategy_tm6::signal_trigger::SignalTrigger::windows_sharpe_trigger

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_tm6::signal_trigger::SignalTrigger::windows_sharpe_trigger */

undefined1 * __rustcall
strategy_tm6::signal_trigger::SignalTrigger::windows_sharpe_trigger
          (undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  double dVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined1 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 (*pauVar9) [16];
  long lVar10;
  undefined1 (*pauVar11) [16];
  uint uVar12;
  char cVar13;
  double dVar14;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar15 [16];
  double dVar16;
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
  lVar10 = param_3[3];
  local_60 = param_1;
  local_58 = param_2;
  if (lVar10 != 0) {
    pauVar11 = (undefined1 (*) [16])*param_3;
    pauVar9 = pauVar11 + 1;
    auVar15 = *pauVar11;
    uVar12 = ~(uint)(ushort)((ushort)(SUB161(auVar15 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar15 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar15 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar15 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar15 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar15 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar15 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar15 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar15 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar15 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar15 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar15 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar15 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar15 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar15[0xf] >> 7) << 0xf);
    local_38 = (double)param_3[8];
    local_40 = (double)param_3[0xb];
    local_48 = (double)param_3[10];
    local_50 = (double)param_3[9];
    lVar6 = 1;
    do {
      lVar4 = local_68;
      if ((short)uVar12 == 0) {
        do {
          auVar15 = *pauVar9;
          pauVar11 = pauVar11 + -0x98;
          pauVar9 = pauVar9 + 1;
          uVar12 = (uint)(ushort)((ushort)(SUB161(auVar15 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1 |
                                  (ushort)(SUB161(auVar15 >> 0x17,0) & 1) << 2 |
                                  (ushort)(SUB161(auVar15 >> 0x1f,0) & 1) << 3 |
                                  (ushort)(SUB161(auVar15 >> 0x27,0) & 1) << 4 |
                                  (ushort)(SUB161(auVar15 >> 0x2f,0) & 1) << 5 |
                                  (ushort)(SUB161(auVar15 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar15 >> 0x3f,0) & 1) << 7 |
                                  (ushort)(SUB161(auVar15 >> 0x47,0) & 1) << 8 |
                                  (ushort)(SUB161(auVar15 >> 0x4f,0) & 1) << 9 |
                                  (ushort)(SUB161(auVar15 >> 0x57,0) & 1) << 10 |
                                  (ushort)(SUB161(auVar15 >> 0x5f,0) & 1) << 0xb |
                                  (ushort)(SUB161(auVar15 >> 0x67,0) & 1) << 0xc |
                                  (ushort)(SUB161(auVar15 >> 0x6f,0) & 1) << 0xd |
                                  (ushort)(SUB161(auVar15 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar15[0xf] >> 7) << 0xf);
        } while (uVar12 == 0xffff);
        uVar12 = ~uVar12;
      }
      uVar2 = 0;
      for (uVar3 = uVar12; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
        uVar2 = uVar2 + 1;
      }
      lVar7 = (ulong)uVar2 * -0x98;
      lVar8 = *(long *)((long)pauVar11 + lVar7 + -0x40);
      lVar8 = lVar8 + (ulong)(lVar8 == 0);
      auVar15._8_4_ = (int)((ulong)lVar8 >> 0x20);
      auVar15._0_8_ = lVar8;
      auVar15._12_4_ = _UNK_00117034;
      dVar1 = *(double *)((long)pauVar11 + lVar7 + -0x38);
      dVar16 = *(double *)((long)pauVar11 + lVar7 + -0x30) /
               ((auVar15._8_8_ - _UNK_00116f18) +
               ((double)CONCAT44(_DAT_00117030,(int)lVar8) - _DAT_00116f10)) - dVar1 * dVar1;
      dVar14 = 0.0;
      if (dVar16 <= 0.0) {
        dVar16 = dVar14;
      }
      dVar16 = SQRT(dVar16);
      *(double *)((long)pauVar11 + lVar7 + -0x28) = dVar16;
      if (DAT_001175b0 < (double)((ulong)dVar16 & _DAT_00116f30)) {
        dVar14 = dVar1 / dVar16;
      }
      *(double *)((long)pauVar11 + lVar7 + -8) = dVar14;
      if (local_38 <= dVar14) {
        cVar13 = '\0';
      }
      else {
        cVar13 = '\x03';
        if (dVar14 < local_40) {
          cVar13 = '\x02';
          if (local_48 < dVar14) {
            cVar13 = (local_50 < dVar14) * '\x03' + '\x01';
          }
        }
      }
      if (local_68 == local_78) {
                    /* try { // try from 00155d8d to 00155d9b has its CatchHandler @ 00155dcd */
        alloc::raw_vec::RawVec<T,A>::grow_one
                  (&local_78,anon_1716677ce335e42ffcebf7b090067291_9_llvm_9466522774482311751);
        lVar6 = local_70;
      }
      uVar12 = uVar12 - 1 & uVar12;
      lVar10 = lVar10 + -1;
      *(char *)(lVar6 + lVar4) = cVar13;
      local_68 = lVar4 + 1;
    } while (lVar10 != 0);
  }
  uVar5 = enum_rate_counter(local_60,&local_78);
  *local_58 = uVar5;
  *(undefined8 *)(local_58 + 8) = extraout_XMM0_Qa;
  return local_58;
}


