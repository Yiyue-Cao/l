// ELF address 0x0000000000046350; strategy_comm2::Comm2Params::signal_mode

/* strategy_comm2::Comm2Params::signal_mode */

ulong __rustcall strategy_comm2::Comm2Params::signal_mode(ushort *param_1,long param_2)

{
  if (param_2 != 3) {
    return 0;
  }
  if ((char)param_1[1] != '2' || (short)(*param_1 ^ 0x5650) != 0) {
    return (ulong)((uint)((char)param_1[1] == '4' && *param_1 == 0x5650) * 3);
  }
  return CONCAT71((uint7)(uint3)((*param_1 ^ 0x5650) >> 8),1);
}




// ELF address 0x0000000000046390; strategy_comm2::Comm2Params::signal_trigger_mode

/* strategy_comm2::Comm2Params::signal_trigger_mode */

short __rustcall strategy_comm2::Comm2Params::signal_trigger_mode(long *param_1,long param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  if (param_2 - 0x11U < 6) {
                    /* WARNING: Switch is manually overridden */
    switch(param_2 - 0x11U) {
    case 0:
      auVar3[0] = -((char)*param_1 == s_WindowsStdTrigge_00117060[0]);
      auVar3[1] = -(*(char *)((long)param_1 + 1) == s_WindowsStdTrigge_00117060[1]);
      auVar3[2] = -(*(char *)((long)param_1 + 2) == s_WindowsStdTrigge_00117060[2]);
      auVar3[3] = -(*(char *)((long)param_1 + 3) == s_WindowsStdTrigge_00117060[3]);
      auVar3[4] = -(*(char *)((long)param_1 + 4) == s_WindowsStdTrigge_00117060[4]);
      auVar3[5] = -(*(char *)((long)param_1 + 5) == s_WindowsStdTrigge_00117060[5]);
      auVar3[6] = -(*(char *)((long)param_1 + 6) == s_WindowsStdTrigge_00117060[6]);
      auVar3[7] = -(*(char *)((long)param_1 + 7) == s_WindowsStdTrigge_00117060[7]);
      auVar3[8] = -((char)param_1[1] == s_WindowsStdTrigge_00117060[8]);
      auVar3[9] = -(*(char *)((long)param_1 + 9) == s_WindowsStdTrigge_00117060[9]);
      auVar3[10] = -(*(char *)((long)param_1 + 10) == s_WindowsStdTrigge_00117060[10]);
      auVar3[0xb] = -(*(char *)((long)param_1 + 0xb) == s_WindowsStdTrigge_00117060[0xb]);
      auVar3[0xc] = -(*(char *)((long)param_1 + 0xc) == s_WindowsStdTrigge_00117060[0xc]);
      auVar3[0xd] = -(*(char *)((long)param_1 + 0xd) == s_WindowsStdTrigge_00117060[0xd]);
      auVar3[0xe] = -(*(char *)((long)param_1 + 0xe) == s_WindowsStdTrigge_00117060[0xe]);
      auVar3[0xf] = -(*(char *)((long)param_1 + 0xf) == s_WindowsStdTrigge_00117060[0xf]);
      auVar7[0] = -((char)param_1[2] == s_r_00116e30[0]);
      auVar7[1] = -(s_r_00116e30[1] == '\0');
      auVar7[2] = -(s_r_00116e30[2] == '\0');
      auVar7[3] = -(s_r_00116e30[3] == '\0');
      auVar7[4] = -(UNK_00116e34 == '\0');
      auVar7[5] = -(UNK_00116e35 == '\0');
      auVar7[6] = -(UNK_00116e36 == '\0');
      auVar7[7] = -(UNK_00116e37 == '\0');
      auVar7[8] = -(UNK_00116e38 == '\0');
      auVar7[9] = -(UNK_00116e39 == '\0');
      auVar7[10] = -(UNK_00116e3a == '\0');
      auVar7[0xb] = -(UNK_00116e3b == '\0');
      auVar7[0xc] = -(UNK_00116e3c == '\0');
      auVar7[0xd] = -(UNK_00116e3d == '\0');
      auVar7[0xe] = -(UNK_00116e3e == '\0');
      auVar7[0xf] = -(UNK_00116e3f == '\0');
      auVar7 = auVar7 & auVar3;
      if ((ushort)((ushort)(SUB161(auVar7 >> 7,0) & 1) | (ushort)(SUB161(auVar7 >> 0xf,0) & 1) << 1
                   | (ushort)(SUB161(auVar7 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar7 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar7 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar7 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar7 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar7 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar7 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar7 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar7 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar7 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar7 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar7 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar7 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar7[0xf] >> 7) << 0xf) != 0xffff) {
        return (ushort)(((char)param_1[2] == 'r' && *param_1 == 0x5273776f646e6957) &&
                       param_1[1] == 0x6567676972546973) * 5;
      }
      return -0xfe;
    case 1:
      auVar5[0] = -((char)*param_1 == s_WindowsMeanTrigg_00116d40[0]);
      auVar5[1] = -(*(char *)((long)param_1 + 1) == s_WindowsMeanTrigg_00116d40[1]);
      auVar5[2] = -(*(char *)((long)param_1 + 2) == s_WindowsMeanTrigg_00116d40[2]);
      auVar5[3] = -(*(char *)((long)param_1 + 3) == s_WindowsMeanTrigg_00116d40[3]);
      auVar5[4] = -(*(char *)((long)param_1 + 4) == s_WindowsMeanTrigg_00116d40[4]);
      auVar5[5] = -(*(char *)((long)param_1 + 5) == s_WindowsMeanTrigg_00116d40[5]);
      auVar5[6] = -(*(char *)((long)param_1 + 6) == s_WindowsMeanTrigg_00116d40[6]);
      auVar5[7] = -(*(char *)((long)param_1 + 7) == s_WindowsMeanTrigg_00116d40[7]);
      auVar5[8] = -((char)param_1[1] == s_WindowsMeanTrigg_00116d40[8]);
      auVar5[9] = -(*(char *)((long)param_1 + 9) == s_WindowsMeanTrigg_00116d40[9]);
      auVar5[10] = -(*(char *)((long)param_1 + 10) == s_WindowsMeanTrigg_00116d40[10]);
      auVar5[0xb] = -(*(char *)((long)param_1 + 0xb) == s_WindowsMeanTrigg_00116d40[0xb]);
      auVar5[0xc] = -(*(char *)((long)param_1 + 0xc) == s_WindowsMeanTrigg_00116d40[0xc]);
      auVar5[0xd] = -(*(char *)((long)param_1 + 0xd) == s_WindowsMeanTrigg_00116d40[0xd]);
      auVar5[0xe] = -(*(char *)((long)param_1 + 0xe) == s_WindowsMeanTrigg_00116d40[0xe]);
      auVar5[0xf] = -(*(char *)((long)param_1 + 0xf) == s_WindowsMeanTrigg_00116d40[0xf]);
      auVar9[0] = -((char)(short)param_1[2] == DAT_00116ce0);
      auVar9[1] = -((char)((ushort)(short)param_1[2] >> 8) == UNK_00116ce1);
      auVar9[2] = -(UNK_00116ce2 == '\0');
      auVar9[3] = -(UNK_00116ce3 == '\0');
      auVar9[4] = -(UNK_00116ce4 == '\0');
      auVar9[5] = -(UNK_00116ce5 == '\0');
      auVar9[6] = -(UNK_00116ce6 == '\0');
      auVar9[7] = -(UNK_00116ce7 == '\0');
      auVar9[8] = -(UNK_00116ce8 == '\0');
      auVar9[9] = -(UNK_00116ce9 == '\0');
      auVar9[10] = -(UNK_00116cea == '\0');
      auVar9[0xb] = -(UNK_00116ceb == '\0');
      auVar9[0xc] = -(UNK_00116cec == '\0');
      auVar9[0xd] = -(UNK_00116ced == '\0');
      auVar9[0xe] = -(UNK_00116cee == '\0');
      auVar9[0xf] = -(UNK_00116cef == '\0');
      auVar9 = auVar9 & auVar5;
      uVar2 = (ushort)(SUB161(auVar9 >> 7,0) & 1) | (ushort)(SUB161(auVar9 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar9 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar9 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar9 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar9 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar9 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar9 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar9 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar9 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar9 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar9 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar9 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar9 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar9 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar9[0xf] >> 7) << 0xf;
      return CONCAT11((char)(uVar2 >> 8),uVar2 == 0xffff);
    case 3:
      uVar1 = (undefined4)param_1[2];
      auVar4[0] = -((char)uVar1 == s_gger_00116e10[0]);
      auVar4[1] = -((char)((uint)uVar1 >> 8) == s_gger_00116e10[1]);
      auVar4[2] = -((char)((uint)uVar1 >> 0x10) == s_gger_00116e10[2]);
      auVar4[3] = -((char)((uint)uVar1 >> 0x18) == s_gger_00116e10[3]);
      auVar4[4] = -(s_gger_00116e10[4] == '\0');
      auVar4[5] = -(s_gger_00116e10[5] == '\0');
      auVar4[6] = -(s_gger_00116e10[6] == '\0');
      auVar4[7] = -(s_gger_00116e10[7] == '\0');
      auVar4[8] = -(UNK_00116e18 == '\0');
      auVar4[9] = -(UNK_00116e19 == '\0');
      auVar4[10] = -(UNK_00116e1a == '\0');
      auVar4[0xb] = -(UNK_00116e1b == '\0');
      auVar4[0xc] = -(UNK_00116e1c == '\0');
      auVar4[0xd] = -(UNK_00116e1d == '\0');
      auVar4[0xe] = -(UNK_00116e1e == '\0');
      auVar4[0xf] = -(UNK_00116e1f == '\0');
      auVar8[0] = -((char)*param_1 == s_WindowsSharpeTri_00116e20[0]);
      auVar8[1] = -(*(char *)((long)param_1 + 1) == s_WindowsSharpeTri_00116e20[1]);
      auVar8[2] = -(*(char *)((long)param_1 + 2) == s_WindowsSharpeTri_00116e20[2]);
      auVar8[3] = -(*(char *)((long)param_1 + 3) == s_WindowsSharpeTri_00116e20[3]);
      auVar8[4] = -(*(char *)((long)param_1 + 4) == s_WindowsSharpeTri_00116e20[4]);
      auVar8[5] = -(*(char *)((long)param_1 + 5) == s_WindowsSharpeTri_00116e20[5]);
      auVar8[6] = -(*(char *)((long)param_1 + 6) == s_WindowsSharpeTri_00116e20[6]);
      auVar8[7] = -(*(char *)((long)param_1 + 7) == s_WindowsSharpeTri_00116e20[7]);
      auVar8[8] = -((char)param_1[1] == s_WindowsSharpeTri_00116e20[8]);
      auVar8[9] = -(*(char *)((long)param_1 + 9) == s_WindowsSharpeTri_00116e20[9]);
      auVar8[10] = -(*(char *)((long)param_1 + 10) == s_WindowsSharpeTri_00116e20[10]);
      auVar8[0xb] = -(*(char *)((long)param_1 + 0xb) == s_WindowsSharpeTri_00116e20[0xb]);
      auVar8[0xc] = -(*(char *)((long)param_1 + 0xc) == s_WindowsSharpeTri_00116e20[0xc]);
      auVar8[0xd] = -(*(char *)((long)param_1 + 0xd) == s_WindowsSharpeTri_00116e20[0xd]);
      auVar8[0xe] = -(*(char *)((long)param_1 + 0xe) == s_WindowsSharpeTri_00116e20[0xe]);
      auVar8[0xf] = -(*(char *)((long)param_1 + 0xf) == s_WindowsSharpeTri_00116e20[0xf]);
      auVar8 = auVar8 & auVar4;
      uVar2 = (ushort)(SUB161(auVar8 >> 7,0) & 1) | (ushort)(SUB161(auVar8 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar8 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar8 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar8 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar8 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar8 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar8 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar8 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar8 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar8 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar8 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar8 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar8 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar8 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar8[0xf] >> 7) << 0xf;
      return CONCAT11((char)(uVar2 >> 8),(uVar2 == 0xffff) << 2);
    case 5:
      auVar10[0] = -(*(char *)((long)param_1 + 6) == DAT_001170b0);
      auVar10[1] = -(*(char *)((long)param_1 + 7) == UNK_001170b1);
      auVar10[2] = -((char)param_1[1] == UNK_001170b2);
      auVar10[3] = -(*(char *)((long)param_1 + 9) == UNK_001170b3);
      auVar10[4] = -(*(char *)((long)param_1 + 10) == UNK_001170b4);
      auVar10[5] = -(*(char *)((long)param_1 + 0xb) == UNK_001170b5);
      auVar10[6] = -(*(char *)((long)param_1 + 0xc) == UNK_001170b6);
      auVar10[7] = -(*(char *)((long)param_1 + 0xd) == UNK_001170b7);
      auVar10[8] = -(*(char *)((long)param_1 + 0xe) == UNK_001170b8);
      auVar10[9] = -(*(char *)((long)param_1 + 0xf) == UNK_001170b9);
      auVar10[10] = -((char)param_1[2] == UNK_001170ba);
      auVar10[0xb] = -(*(char *)((long)param_1 + 0x11) == UNK_001170bb);
      auVar10[0xc] = -(*(char *)((long)param_1 + 0x12) == UNK_001170bc);
      auVar10[0xd] = -(*(char *)((long)param_1 + 0x13) == UNK_001170bd);
      auVar10[0xe] = -(*(char *)((long)param_1 + 0x14) == UNK_001170be);
      auVar10[0xf] = -(*(char *)((long)param_1 + 0x15) == UNK_001170bf);
      auVar6[0] = -((char)*param_1 == DAT_00116d70);
      auVar6[1] = -(*(char *)((long)param_1 + 1) == UNK_00116d71);
      auVar6[2] = -(*(char *)((long)param_1 + 2) == UNK_00116d72);
      auVar6[3] = -(*(char *)((long)param_1 + 3) == UNK_00116d73);
      auVar6[4] = -(*(char *)((long)param_1 + 4) == UNK_00116d74);
      auVar6[5] = -(*(char *)((long)param_1 + 5) == UNK_00116d75);
      auVar6[6] = -(*(char *)((long)param_1 + 6) == UNK_00116d76);
      auVar6[7] = -(*(char *)((long)param_1 + 7) == UNK_00116d77);
      auVar6[8] = -((char)param_1[1] == UNK_00116d78);
      auVar6[9] = -(*(char *)((long)param_1 + 9) == UNK_00116d79);
      auVar6[10] = -(*(char *)((long)param_1 + 10) == UNK_00116d7a);
      auVar6[0xb] = -(*(char *)((long)param_1 + 0xb) == UNK_00116d7b);
      auVar6[0xc] = -(*(char *)((long)param_1 + 0xc) == UNK_00116d7c);
      auVar6[0xd] = -(*(char *)((long)param_1 + 0xd) == UNK_00116d7d);
      auVar6[0xe] = -(*(char *)((long)param_1 + 0xe) == UNK_00116d7e);
      auVar6[0xf] = -(*(char *)((long)param_1 + 0xf) == UNK_00116d7f);
      auVar6 = auVar6 & auVar10;
      if ((ushort)((ushort)(SUB161(auVar6 >> 7,0) & 1) | (ushort)(SUB161(auVar6 >> 0xf,0) & 1) << 1
                   | (ushort)(SUB161(auVar6 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar6 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar6 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar6 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar6 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar6 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar6 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar6 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar6 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar6 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar6 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar6 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar6 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar6[0xf] >> 7) << 0xf) == 0xffff) {
        return -0xfd;
      }
    }
  }
  return 0;
}




// ELF address 0x0000000000050920; strategy_comm2::signal_trigger::SignalTrigger::update_score

/* strategy_comm2::signal_trigger::SignalTrigger::update_score */

void __rustcall
strategy_comm2::signal_trigger::SignalTrigger::update_score
          (long param_1,long param_2,double param_3,double param_4,long *param_5,ulong param_6,
          long param_7)

{
  char *pcVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  undefined1 (*pauVar9) [16];
  long lVar10;
  ushort uVar11;
  long lVar12;
  long lVar13;
  undefined1 (*pauVar14) [16];
  byte bVar15;
  char cVar16;
  char cVar18;
  char cVar19;
  char cVar20;
  undefined1 auVar17 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  long lStack_38;
  
  param_5[6] = param_1;
  param_5[7] = param_2;
  lVar13 = param_5[3];
  if (lVar13 != 0) {
    pauVar14 = (undefined1 (*) [16])*param_5;
    pauVar9 = pauVar14 + 1;
    auVar17 = *pauVar14;
    uVar6 = ~(uint)(ushort)((ushort)(SUB161(auVar17 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar17 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar17 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar17 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar17 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar17 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar17 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar17[0xf] >> 7) << 0xf);
    do {
      if ((short)uVar6 == 0) {
        do {
          auVar17 = *pauVar9;
          pauVar14 = pauVar14 + -0x98;
          pauVar9 = pauVar9 + 1;
          uVar6 = (uint)(ushort)((ushort)(SUB161(auVar17 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar17 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar17 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar17 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar17 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar17 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar17 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar17[0xf] >> 7) << 0xf);
        } while (uVar6 == 0xffff);
        uVar6 = ~uVar6;
      }
      uVar8 = 0;
      for (uVar4 = uVar6; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
        uVar8 = uVar8 + 1;
      }
      uVar6 = uVar6 - 1 & uVar6;
      TsQuantileCalculator::update(param_1,(long)pauVar14 + (ulong)uVar8 * -0x98 + -0x90);
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  if ((param_6 & 1) == 0) {
    if (param_5[3] != 0) {
      pauVar9 = (undefined1 (*) [16])*param_5;
      auVar17 = *pauVar9;
      uVar11 = (ushort)(SUB161(auVar17 >> 7,0) & 1) | (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar17 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar17 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar17 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar17 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar17 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar17 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe |
               (ushort)(byte)(auVar17[0xf] >> 7) << 0xf;
      pauVar14 = pauVar9;
      while (uVar11 == 0xffff) {
        pauVar14 = pauVar14 + 1;
        auVar17 = *pauVar14;
        pauVar9 = pauVar9 + -0x98;
        uVar11 = (ushort)(SUB161(auVar17 >> 7,0) & 1) | (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar17 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar17 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar17 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar17 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar17 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar17 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe |
                 (ushort)(byte)(auVar17[0xf] >> 7) << 0xf;
      }
      uVar6 = 0;
      for (uVar8 = ~(uint)uVar11; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
        uVar6 = uVar6 + 1;
      }
      lVar13 = (ulong)uVar6 * -0x98 + (long)pauVar9;
LAB_00150af2:
      dVar2 = *(double *)(lVar13 + -0x38);
      param_5[0xc] = (long)dVar2;
      dVar3 = *(double *)(lVar13 + -0x28);
      param_5[0xd] = (long)dVar3;
      param_5[0x10] = (long)(param_3 * dVar3 + (double)param_5[7]);
      param_5[0x11] = (long)((double)param_5[7] - param_4 * dVar3);
      param_5[0xe] = (long)(dVar2 + param_3 * dVar3);
      param_5[0xf] = (long)(dVar2 - param_4 * dVar3);
    }
  }
  else if (param_5[3] != 0) {
    lStack_38 = param_7;
    uVar7 = core::hash::BuildHasher::hash_one(param_5 + 4,&lStack_38);
    lVar13 = *param_5;
    bVar15 = (byte)(uVar7 >> 0x39);
    auVar17 = ZEXT216(CONCAT11(bVar15,bVar15));
    auVar17 = pshuflw(auVar17,auVar17,0);
    lVar10 = 0;
    while( true ) {
      uVar7 = uVar7 & param_5[1];
      pcVar1 = (char *)(lVar13 + uVar7);
      cVar5 = pcVar1[0xf];
      cVar16 = auVar17[0];
      auVar22[0] = -(*pcVar1 == cVar16);
      cVar18 = auVar17[1];
      auVar22[1] = -(pcVar1[1] == cVar18);
      cVar19 = auVar17[2];
      auVar22[2] = -(pcVar1[2] == cVar19);
      cVar20 = auVar17[3];
      auVar22[3] = -(pcVar1[3] == cVar20);
      auVar22[4] = -(pcVar1[4] == cVar16);
      auVar22[5] = -(pcVar1[5] == cVar18);
      auVar22[6] = -(pcVar1[6] == cVar19);
      auVar22[7] = -(pcVar1[7] == cVar20);
      auVar22[8] = -(pcVar1[8] == cVar16);
      auVar22[9] = -(pcVar1[9] == cVar18);
      auVar22[10] = -(pcVar1[10] == cVar19);
      auVar22[0xb] = -(pcVar1[0xb] == cVar20);
      auVar22[0xc] = -(pcVar1[0xc] == cVar16);
      auVar22[0xd] = -(pcVar1[0xd] == cVar18);
      auVar22[0xe] = -(pcVar1[0xe] == cVar19);
      auVar22[0xf] = -(cVar5 == cVar20);
      uVar11 = (ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe | (ushort)(auVar22[0xf] >> 7) << 0xf;
      uVar6 = (uint)uVar11;
      while (uVar11 != 0) {
        uVar8 = 0;
        for (uVar4 = uVar6; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar8 = uVar8 + 1;
        }
        lVar12 = (uVar8 + uVar7 & param_5[1]) * -0x98;
        if (param_7 == *(long *)(lVar13 + -0x98 + lVar12)) {
          lVar13 = lVar13 + lVar12;
          goto LAB_00150af2;
        }
        uVar11 = (ushort)(uVar6 - 1) & (ushort)uVar6;
        uVar6 = CONCAT22((short)(uVar6 - 1 >> 0x10),uVar11);
      }
      auVar21[0] = -(*pcVar1 == -1);
      auVar21[1] = -(pcVar1[1] == -1);
      auVar21[2] = -(pcVar1[2] == -1);
      auVar21[3] = -(pcVar1[3] == -1);
      auVar21[4] = -(pcVar1[4] == -1);
      auVar21[5] = -(pcVar1[5] == -1);
      auVar21[6] = -(pcVar1[6] == -1);
      auVar21[7] = -(pcVar1[7] == -1);
      auVar21[8] = -(pcVar1[8] == -1);
      auVar21[9] = -(pcVar1[9] == -1);
      auVar21[10] = -(pcVar1[10] == -1);
      auVar21[0xb] = -(pcVar1[0xb] == -1);
      auVar21[0xc] = -(pcVar1[0xc] == -1);
      auVar21[0xd] = -(pcVar1[0xd] == -1);
      auVar21[0xe] = -(pcVar1[0xe] == -1);
      auVar21[0xf] = -(cVar5 == -1);
      if ((((((((((((((((auVar21 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                       (auVar21 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar21 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar21 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar21 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar21 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar21 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar21 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar21 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar21 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar21 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar21 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar21 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar21 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar21 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || cVar5 == -1) break;
      uVar7 = uVar7 + lVar10 + 0x10;
      lVar10 = lVar10 + 0x10;
    }
  }
  return;
}




// ELF address 0x00000000000517b0; strategy_comm2::signal_trigger::SignalTrigger::windows_rsi_trigger

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm2::signal_trigger::SignalTrigger::windows_rsi_trigger */

undefined1 * __rustcall
strategy_comm2::signal_trigger::SignalTrigger::windows_rsi_trigger
          (undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined1 auVar1 [16];
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined1 uVar5;
  long lVar6;
  uint uVar7;
  undefined1 (*pauVar8) [16];
  long lVar9;
  undefined1 (*pauVar10) [16];
  char cVar11;
  ulong uVar12;
  double dVar13;
  undefined8 extraout_XMM0_Qa;
  long local_90;
  long local_88;
  long local_80;
  undefined8 local_78;
  undefined1 *local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  local_90 = 0;
  local_88 = 1;
  local_80 = 0;
  lVar9 = param_3[3];
  local_78 = param_1;
  local_70 = param_2;
  if (lVar9 != 0) {
    pauVar10 = (undefined1 (*) [16])*param_3;
    pauVar8 = pauVar10 + 1;
    auVar1 = *pauVar10;
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
    local_50 = (double)param_3[8];
    local_58 = (double)param_3[0xb];
    local_60 = (double)param_3[10];
    local_68 = (double)param_3[9];
    do {
      lVar4 = local_80;
      if ((short)uVar7 == 0) {
        do {
          auVar1 = *pauVar8;
          pauVar10 = pauVar10 + -0x98;
          pauVar8 = pauVar8 + 1;
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
      lVar6 = (ulong)uVar2 * -0x98;
      dVar13 = (double)(*(ulong *)((long)pauVar10 + lVar6 + -0x18) & _DAT_00116ac0);
      uVar12 = -(ulong)(DAT_00117318 < dVar13);
      dVar13 = (double)(~uVar12 & _s__001173d0 |
                       (ulong)(DAT_00117378 -
                              DAT_00117378 /
                              (*(double *)((long)pauVar10 + lVar6 + -0x20) / dVar13 + DAT_00117328))
                       & uVar12);
      *(double *)((long)pauVar10 + lVar6 + -0x10) = dVar13;
      if (local_50 <= dVar13) {
        cVar11 = '\0';
      }
      else {
        cVar11 = '\x03';
        if (dVar13 < local_58) {
          cVar11 = '\x02';
          if (local_60 < dVar13) {
            cVar11 = (local_68 < dVar13) * '\x03' + '\x01';
          }
        }
      }
      if (local_80 == local_90) {
                    /* try { // try from 00151953 to 00151963 has its CatchHandler @ 001519b5 */
        alloc::raw_vec::RawVec<T,A>::grow_one
                  (&local_90,anon_5d1793e484c313653e5ba6492de742cc_5_llvm_12268379600032372830);
      }
      uVar7 = uVar7 - 1 & uVar7;
      lVar9 = lVar9 + -1;
      *(char *)(local_88 + lVar4) = cVar11;
      local_80 = lVar4 + 1;
    } while (lVar9 != 0);
  }
  lStack_38 = local_80;
  lStack_48 = local_90;
  lStack_40 = local_88;
  uVar5 = enum_rate_counter(local_78,&lStack_48);
  *local_70 = uVar5;
  *(undefined8 *)(local_70 + 8) = extraout_XMM0_Qa;
  return local_70;
}




// ELF address 0x0000000000050d90; strategy_comm2::signal_trigger::SignalTrigger::windows_std_trigger

/* strategy_comm2::signal_trigger::SignalTrigger::windows_std_trigger */

undefined1 * __rustcall
strategy_comm2::signal_trigger::SignalTrigger::windows_std_trigger
          (undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined1 auVar1 [16];
  long lVar2;
  undefined1 uVar3;
  undefined8 extraout_XMM0_Qa;
  long local_88;
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 (*local_48) [16];
  undefined1 (*local_40) [16];
  undefined1 *local_38;
  ushort local_30;
  undefined8 local_28;
  undefined8 *local_20;
  undefined1 *local_18;
  
  local_18 = (undefined1 *)&local_88;
  local_48 = (undefined1 (*) [16])*param_3;
  local_38 = *local_48 + param_3[1] + 1;
  auVar1 = *local_48;
  local_30 = ~((ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
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
  local_28 = param_3[3];
  local_88 = 0;
  local_40 = local_48 + 1;
                    /* try { // try from 00150dec to 00150e01 has its CatchHandler @ 00150e77 */
  local_80 = param_1;
  local_20 = param_3;
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (&local_78,&local_48,anon_54b137dd7f9f0f37829e7172f280935c_1_llvm_4057491061108798203);
  lVar2 = local_88;
  if (local_88 == 0) {
    local_60 = local_78;
    local_58 = local_70;
    local_50 = local_68;
    uVar3 = enum_rate_counter(local_80,&local_60);
    *(undefined8 *)(param_2 + 8) = extraout_XMM0_Qa;
  }
  else {
    if (local_78 != 0) {
      (*(code *)PTR___rust_dealloc_001d5c50)(local_70,local_78,1);
    }
    *(long *)(param_2 + 8) = lVar2;
    uVar3 = 5;
  }
  *param_2 = uVar3;
  return param_2;
}




// ELF address 0x0000000000050c80; strategy_comm2::signal_trigger::SignalTrigger::windows_mean_trigger

/* strategy_comm2::signal_trigger::SignalTrigger::windows_mean_trigger */

undefined1 * __rustcall
strategy_comm2::signal_trigger::SignalTrigger::windows_mean_trigger
          (undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined1 auVar1 [16];
  long lVar2;
  undefined1 uVar3;
  undefined8 extraout_XMM0_Qa;
  long local_88;
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 (*local_48) [16];
  undefined1 (*local_40) [16];
  undefined1 *local_38;
  ushort local_30;
  undefined8 local_28;
  undefined8 *local_20;
  undefined1 *local_18;
  
  local_18 = (undefined1 *)&local_88;
  local_48 = (undefined1 (*) [16])*param_3;
  local_38 = *local_48 + param_3[1] + 1;
  auVar1 = *local_48;
  local_30 = ~((ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
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
  local_28 = param_3[3];
  local_88 = 0;
  local_40 = local_48 + 1;
                    /* try { // try from 00150cdc to 00150cf1 has its CatchHandler @ 00150d67 */
  local_80 = param_1;
  local_20 = param_3;
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (&local_78,&local_48,anon_54b137dd7f9f0f37829e7172f280935c_1_llvm_4057491061108798203);
  lVar2 = local_88;
  if (local_88 == 0) {
    local_60 = local_78;
    local_58 = local_70;
    local_50 = local_68;
    uVar3 = enum_rate_counter(local_80,&local_60);
    *(undefined8 *)(param_2 + 8) = extraout_XMM0_Qa;
  }
  else {
    if (local_78 != 0) {
      (*(code *)PTR___rust_dealloc_001d5c50)(local_70,local_78,1);
    }
    *(long *)(param_2 + 8) = lVar2;
    uVar3 = 5;
  }
  *param_2 = uVar3;
  return param_2;
}




// ELF address 0x0000000000051560; strategy_comm2::signal_trigger::SignalTrigger::windows_sharpe_trigger

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm2::signal_trigger::SignalTrigger::windows_sharpe_trigger */

undefined1 * __rustcall
strategy_comm2::signal_trigger::SignalTrigger::windows_sharpe_trigger
          (undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  double dVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined1 uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  undefined1 (*pauVar9) [16];
  long lVar10;
  undefined1 (*pauVar11) [16];
  char cVar12;
  double dVar13;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar14 [16];
  double dVar15;
  long local_90;
  long local_88;
  long local_80;
  undefined8 local_78;
  undefined1 *local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  local_90 = 0;
  local_88 = 1;
  local_80 = 0;
  lVar10 = param_3[3];
  local_78 = param_1;
  local_70 = param_2;
  if (lVar10 != 0) {
    pauVar11 = (undefined1 (*) [16])*param_3;
    pauVar9 = pauVar11 + 1;
    auVar14 = *pauVar11;
    uVar8 = ~(uint)(ushort)((ushort)(SUB161(auVar14 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar14 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar14 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar14 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar14 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar14 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar14 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar14 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar14 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar14 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar14 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar14 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar14 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar14 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar14[0xf] >> 7) << 0xf);
    local_50 = (double)param_3[8];
    local_58 = (double)param_3[0xb];
    local_60 = (double)param_3[10];
    local_68 = (double)param_3[9];
    do {
      lVar4 = local_80;
      if ((short)uVar8 == 0) {
        do {
          auVar14 = *pauVar9;
          pauVar11 = pauVar11 + -0x98;
          pauVar9 = pauVar9 + 1;
          uVar8 = (uint)(ushort)((ushort)(SUB161(auVar14 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar14 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar14 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar14 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar14 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar14 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar14 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar14 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar14 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar14 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar14 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar14 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar14 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar14 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar14[0xf] >> 7) << 0xf);
        } while (uVar8 == 0xffff);
        uVar8 = ~uVar8;
      }
      uVar2 = 0;
      for (uVar3 = uVar8; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
        uVar2 = uVar2 + 1;
      }
      lVar6 = (ulong)uVar2 * -0x98;
      lVar7 = *(long *)((long)pauVar11 + lVar6 + -0x40);
      lVar7 = lVar7 + (ulong)(lVar7 == 0);
      auVar14._8_4_ = (int)((ulong)lVar7 >> 0x20);
      auVar14._0_8_ = lVar7;
      auVar14._12_4_ = _UNK_00116be4;
      dVar1 = *(double *)((long)pauVar11 + lVar6 + -0x38);
      dVar15 = *(double *)((long)pauVar11 + lVar6 + -0x30) /
               ((auVar14._8_8_ - _UNK_00116ab8) +
               ((double)CONCAT44(_DAT_00116be0,(int)lVar7) - _DAT_00116ab0)) - dVar1 * dVar1;
      dVar13 = 0.0;
      if (dVar15 <= 0.0) {
        dVar15 = dVar13;
      }
      dVar15 = SQRT(dVar15);
      *(double *)((long)pauVar11 + lVar6 + -0x28) = dVar15;
      if (DAT_00117318 < (double)((ulong)dVar15 & _DAT_00116ac0)) {
        dVar13 = dVar1 / dVar15;
      }
      *(double *)((long)pauVar11 + lVar6 + -8) = dVar13;
      if (local_50 <= dVar13) {
        cVar12 = '\0';
      }
      else {
        cVar12 = '\x03';
        if (dVar13 < local_58) {
          cVar12 = '\x02';
          if (local_60 < dVar13) {
            cVar12 = (local_68 < dVar13) * '\x03' + '\x01';
          }
        }
      }
      if (local_80 == local_90) {
                    /* try { // try from 00151723 to 00151733 has its CatchHandler @ 00151785 */
        alloc::raw_vec::RawVec<T,A>::grow_one
                  (&local_90,anon_5d1793e484c313653e5ba6492de742cc_4_llvm_12268379600032372830);
      }
      uVar8 = uVar8 - 1 & uVar8;
      lVar10 = lVar10 + -1;
      *(char *)(local_88 + lVar4) = cVar12;
      local_80 = lVar4 + 1;
    } while (lVar10 != 0);
  }
  lStack_38 = local_80;
  lStack_48 = local_90;
  lStack_40 = local_88;
  uVar5 = enum_rate_counter(local_78,&lStack_48);
  *local_70 = uVar5;
  *(undefined8 *)(local_70 + 8) = extraout_XMM0_Qa;
  return local_70;
}




// ELF address 0x0000000000050bf0; strategy_comm2::signal_trigger::SignalTrigger::point_signal_trigger_pv4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm2::signal_trigger::SignalTrigger::point_signal_trigger_pv4 */

void __rustcall
strategy_comm2::signal_trigger::SignalTrigger::point_signal_trigger_pv4
          (double param_1,double param_2,ulong param_3,undefined1 *param_4,long param_5)

{
  undefined1 uVar1;
  double dVar2;
  
  dVar2 = *(double *)(param_5 + 0x38);
  param_1 = ((double)(param_3 & _DAT_00116ac0) + param_2) * param_1;
  if (dVar2 <= 0.0) {
    dVar2 = param_1 + dVar2;
    if (0.0 <= dVar2) {
      dVar2 = 0.0;
    }
    if (dVar2 < *(double *)(param_5 + 0x40)) goto LAB_00150c47;
  }
  else {
    dVar2 = dVar2 - param_1;
    if (dVar2 <= 0.0) {
      dVar2 = 0.0;
    }
    if (dVar2 < *(double *)(param_5 + 0x40)) {
LAB_00150c47:
      uVar1 = 3;
      if (((dVar2 < *(double *)(param_5 + 0x58)) && (uVar1 = 2, *(double *)(param_5 + 0x50) < dVar2)
          ) && (uVar1 = 4, dVar2 <= *(double *)(param_5 + 0x48))) {
        *param_4 = 1;
        *(undefined8 *)(param_4 + 8) = 0x3ff0000000000000;
        return;
      }
      goto LAB_00150c27;
    }
  }
  uVar1 = 0;
LAB_00150c27:
  *param_4 = uVar1;
  *(undefined8 *)(param_4 + 8) = 0x3ff0000000000000;
  return;
}




// ELF address 0x0000000000050ea0; strategy_comm2::signal_trigger::SignalTrigger::windows_quantile_trigger

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm2::signal_trigger::SignalTrigger::windows_quantile_trigger */

undefined1 * __rustcall
strategy_comm2::signal_trigger::SignalTrigger::windows_quantile_trigger
          (double param_1,undefined8 param_2,undefined1 *param_3,undefined8 *param_4)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  undefined1 uVar7;
  ulong uVar8;
  long lVar9;
  double *pdVar10;
  ulong uVar11;
  undefined8 uVar12;
  char cVar13;
  undefined1 (*pauVar14) [16];
  ulong uVar15;
  undefined1 (*pauVar16) [16];
  char cVar17;
  long lVar18;
  uint uVar19;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar23;
  ulong local_f0;
  long local_e8;
  ulong local_e0;
  ulong uStack_d8;
  long lStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double dStack_68;
  long local_60;
  double local_58;
  undefined8 local_50;
  double local_48;
  
  local_f0 = 0;
  local_e8 = 1;
  local_e0 = 0;
  pauVar16 = (undefined1 (*) [16])*param_4;
  lVar9 = param_4[3];
  auVar22 = *pauVar16;
  uVar1 = (ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
          (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
          (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
          (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
          (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
          (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
          (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
          (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
          (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
          (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
          (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
          (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
          (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar22[0xf] >> 7) << 0xf;
  pauVar14 = pauVar16 + 1;
  local_50 = param_2;
  if ((param_1 < 0.0) || (DAT_00117328 < param_1)) {
    if (lVar9 != 0) {
      while (uVar1 == 0xffff) {
        auVar22 = *pauVar14;
        pauVar14 = pauVar14 + 1;
        uVar1 = (ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar22[0xf] >> 7) << 0xf;
      }
LAB_001514af:
                    /* try { // try from 001514af to 001514bf has its CatchHandler @ 0015152a */
      uVar12 = anyhow::error::_<impl_anyhow::Error>::msg
                         ("quantile not foundinvalid type: , expected duplicate field ``",0x12);
      *(undefined8 *)(param_3 + 8) = uVar12;
      *param_3 = 5;
      if (local_f0 == 0) {
        return param_3;
      }
      (*(code *)PTR___rust_dealloc_001d5c50)(local_e8,local_f0,1);
      return param_3;
    }
  }
  else {
    uVar19 = ~(uint)uVar1;
    dVar23 = DAT_00117328 - param_1;
    local_48 = param_1;
    if ((dVar23 < 0.0) || (DAT_00117328 < dVar23)) {
      if (lVar9 != 0) {
        if (uVar1 == 0xffff) {
          do {
            auVar22 = *pauVar14;
            pauVar16 = pauVar16 + -0x98;
            pauVar14 = pauVar14 + 1;
            uVar19 = (uint)(ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar22[0xf] >> 7) << 0xf);
          } while (uVar19 == 0xffff);
          uVar19 = ~uVar19;
        }
        uVar2 = 0;
        for (; (uVar19 & 1) == 0; uVar19 = uVar19 >> 1 | 0x80000000) {
          uVar2 = uVar2 + 1;
        }
        lVar9 = (ulong)uVar2 * -0x98;
        uVar15 = *(ulong *)((long)pauVar16 + lVar9 + -0x60);
        if (uVar15 != 0) {
          auVar22._8_4_ = (int)(uVar15 >> 0x20);
          auVar22._0_8_ = uVar15;
          auVar22._12_4_ = _UNK_00116be4;
          param_1 = param_1 * ((auVar22._8_8_ - _UNK_00116ab8) +
                              ((double)CONCAT44(_DAT_00116be0,(int)uVar15) - _DAT_00116ab0));
          uVar8 = 0;
          if (0.0 <= param_1) {
            uVar8 = (long)(param_1 - _DAT_00117350) & (long)param_1 >> 0x3f | (long)param_1;
          }
          uVar11 = 0xffffffffffffffff;
          if (param_1 <= _DAT_00117298) {
            uVar11 = uVar8;
          }
          uStack_c8 = *(long *)((long)pauVar16 + lVar9 + -0x70);
          uStack_c0 = *(undefined8 *)((long)pauVar16 + lVar9 + -0x68);
          uStack_d8 = (ulong)(uStack_c8 != 0);
          uStack_98 = uVar15;
          if (uStack_c8 == 0) {
            uStack_98 = 0;
          }
          lStack_d0 = 0;
          uStack_b0 = 0;
          uStack_b8 = uStack_d8;
          lStack_a8 = uStack_c8;
          uStack_a0 = uStack_c0;
          if (uVar11 != 0) {
            if (uVar11 < uVar15) {
              uVar15 = uVar11;
            }
            do {
                    /* try { // try from 00151490 to 00151497 has its CatchHandler @ 0015152c */
              lVar9 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                      ::next(&uStack_d8);
              if (lVar9 == 0) goto LAB_001514af;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
                    /* try { // try from 001514a2 to 001514ab has its CatchHandler @ 00151526 */
          _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>::
          next(&uStack_d8);
        }
        goto LAB_001514af;
      }
    }
    else {
      local_58 = dVar23;
      if (lVar9 != 0) {
        local_70 = (double)param_4[8];
        local_78 = (double)param_4[0xb];
        local_80 = (double)param_4[10];
        local_88 = (double)param_4[9];
        do {
          if ((short)uVar19 == 0) {
            do {
              auVar22 = *pauVar14;
              pauVar16 = pauVar16 + -0x98;
              pauVar14 = pauVar14 + 1;
              uVar19 = (uint)(ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
                                      (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                                      (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                                      (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                                      (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                                      (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                                      (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                                      (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                                      (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                                      (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                                      (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                                      (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                                      (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                                      (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                                      (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                                     (ushort)(byte)(auVar22[0xf] >> 7) << 0xf);
            } while (uVar19 == 0xffff);
            uVar19 = ~uVar19;
          }
          uVar2 = 0;
          for (uVar3 = uVar19; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
            uVar2 = uVar2 + 1;
          }
          lVar18 = (ulong)uVar2 * -0x98;
          uVar15 = *(ulong *)((long)pauVar16 + lVar18 + -0x60);
          local_60 = lVar9;
          if (uVar15 == 0) goto LAB_001514af;
          auVar20._8_4_ = (int)(uVar15 >> 0x20);
          auVar20._0_8_ = uVar15;
          auVar20._12_4_ = _UNK_00116be4;
          dVar23 = ((auVar20._8_8_ - _UNK_00116ab8) +
                   ((double)CONCAT44(_DAT_00116be0,(int)uVar15) - _DAT_00116ab0)) * local_48;
          uVar8 = (long)(dVar23 - _DAT_00117350) & (long)dVar23 >> 0x3f | (long)dVar23;
          if (dVar23 < _DAT_00117348) {
            uVar8 = 0;
          }
          if (_DAT_00117298 < dVar23) {
            uVar8 = 0xffffffffffffffff;
          }
          uStack_c8 = *(long *)((long)pauVar16 + lVar18 + -0x70);
          uStack_c0 = *(undefined8 *)((long)pauVar16 + lVar18 + -0x68);
          uStack_d8 = (ulong)(uStack_c8 != 0);
          uStack_98 = uVar15;
          if (uStack_c8 == 0) {
            uStack_98 = 0;
          }
          lStack_d0 = 0;
          uStack_b0 = 0;
          uStack_b8 = uStack_d8;
          lStack_a8 = uStack_c8;
          uStack_a0 = uStack_c0;
          if (uVar8 != 0) {
            if (uVar8 < uVar15) {
              uVar15 = uVar8;
            }
            do {
                    /* try { // try from 001510b0 to 001510b9 has its CatchHandler @ 00151530 */
              lVar9 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                      ::next(&uStack_d8);
              if (lVar9 == 0) goto LAB_001514af;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
                    /* try { // try from 001510c8 to 001510d1 has its CatchHandler @ 00151528 */
          pdVar10 = (double *)
                    _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                    ::next(&uStack_d8);
          if ((pdVar10 == (double *)0x0) ||
             (uVar15 = *(ulong *)((long)pauVar16 + lVar18 + -0x60), uVar15 == 0)) goto LAB_001514af;
          auVar21._8_4_ = (int)(uVar15 >> 0x20);
          auVar21._0_8_ = uVar15;
          auVar21._12_4_ = _UNK_00116be4;
          dVar23 = ((auVar21._8_8_ - _UNK_00116ab8) +
                   ((double)CONCAT44(_DAT_00116be0,(int)uVar15) - _DAT_00116ab0)) * local_58;
          uVar8 = 0;
          if (_DAT_00117348 <= dVar23) {
            uVar8 = (long)(dVar23 - _DAT_00117350) & (long)dVar23 >> 0x3f | (long)dVar23;
          }
          if (_DAT_00117298 < dVar23) {
            uVar8 = 0xffffffffffffffff;
          }
          dStack_68 = *pdVar10;
          uStack_c8 = *(long *)((long)pauVar16 + lVar18 + -0x70);
          uStack_c0 = *(undefined8 *)((long)pauVar16 + lVar18 + -0x68);
          uStack_d8 = (ulong)(uStack_c8 != 0);
          uStack_98 = uVar15;
          if (uStack_c8 == 0) {
            uStack_98 = 0;
          }
          lStack_d0 = 0;
          uStack_b0 = 0;
          uStack_b8 = uStack_d8;
          lStack_a8 = uStack_c8;
          uStack_a0 = uStack_c0;
          if (uVar8 != 0) {
            if (uVar8 < uVar15) {
              uVar15 = uVar8;
            }
            do {
                    /* try { // try from 001511c0 to 001511c9 has its CatchHandler @ 0015152e */
              lVar9 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                      ::next(&uStack_d8);
              if (lVar9 == 0) goto LAB_001514af;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
                    /* try { // try from 001511d8 to 001512ed has its CatchHandler @ 00151528 */
          pdVar10 = (double *)
                    _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                    ::next(&uStack_d8);
          uVar15 = local_e0;
          if (pdVar10 == (double *)0x0) goto LAB_001514af;
          bVar5 = true;
          if (local_70 <= dStack_68) {
            bVar4 = true;
            cVar13 = '\0';
          }
          else {
            cVar13 = '\x03';
            bVar4 = true;
            if ((dStack_68 < local_78) && (cVar13 = '\x02', local_80 < dStack_68)) {
              bVar4 = local_88 >= dStack_68;
              cVar13 = (local_88 < dStack_68) * '\x03' + '\x01';
            }
          }
          dVar23 = *pdVar10;
          if (local_70 <= dVar23) {
            cVar6 = '\0';
          }
          else {
            cVar6 = '\x03';
            if ((dVar23 < local_78) && (cVar6 = '\x02', local_80 < dVar23)) {
              bVar5 = local_88 >= dVar23;
              cVar6 = (local_88 < dVar23) * '\x03' + '\x01';
            }
          }
          cVar17 = '\x04';
          if (bVar4) {
            if (!bVar5) {
              cVar17 = '\x04' - (cVar13 == '\x03');
              if (cVar13 == '\0') {
                cVar17 = '\0';
              }
            }
          }
          else if ((bVar5) && (cVar17 = (cVar6 != '\x02') * '\x02' + '\x02', cVar6 == '\x01')) {
            cVar17 = '\x01';
          }
          if (local_e0 == local_f0) {
            alloc::raw_vec::RawVec<T,A>::grow_one
                      (&local_f0,
                       &
                       PTR_anon_5d1793e484c313653e5ba6492de742cc_0_llvm_12268379600032372830_001d05f8
                      );
          }
          uVar19 = uVar19 - 1 & uVar19;
          lVar9 = local_60 + -1;
          *(char *)(local_e8 + uVar15) = cVar17;
          local_e0 = uVar15 + 1;
        } while (lVar9 != 0);
      }
    }
  }
  uStack_c8 = local_e0;
  uStack_d8 = local_f0;
  lStack_d0 = local_e8;
  uVar7 = enum_rate_counter(local_50,&uStack_d8);
  *param_3 = uVar7;
  *(undefined8 *)(param_3 + 8) = extraout_XMM0_Qa;
  return param_3;
}




// ELF address 0x0000000000050b60; strategy_comm2::signal_trigger::SignalTrigger::point_signal_trigger_pv1_spread

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm2::signal_trigger::SignalTrigger::point_signal_trigger_pv1_spread */

void __rustcall
strategy_comm2::signal_trigger::SignalTrigger::point_signal_trigger_pv1_spread
          (double param_1,ulong param_2,undefined1 *param_3,long param_4)

{
  undefined1 uVar1;
  double dVar2;
  
  dVar2 = *(double *)(param_4 + 0x38);
  param_1 = (double)(param_2 & _DAT_00116ac0) * param_1;
  if (dVar2 <= 0.0) {
    dVar2 = param_1 + dVar2;
    if (0.0 <= dVar2) {
      dVar2 = 0.0;
    }
    if (dVar2 < *(double *)(param_4 + 0x40)) goto LAB_00150bb3;
  }
  else {
    dVar2 = dVar2 - param_1;
    if (dVar2 <= 0.0) {
      dVar2 = 0.0;
    }
    if (dVar2 < *(double *)(param_4 + 0x40)) {
LAB_00150bb3:
      uVar1 = 3;
      if (((dVar2 < *(double *)(param_4 + 0x58)) && (uVar1 = 2, *(double *)(param_4 + 0x50) < dVar2)
          ) && (uVar1 = 4, dVar2 <= *(double *)(param_4 + 0x48))) {
        *param_3 = 1;
        *(undefined8 *)(param_3 + 8) = 0x3ff0000000000000;
        return;
      }
      goto LAB_00150b93;
    }
  }
  uVar1 = 0;
LAB_00150b93:
  *param_3 = uVar1;
  *(undefined8 *)(param_3 + 8) = 0x3ff0000000000000;
  return;
}




// ELF address 0x0000000000051f50; strategy_comm2::signal_trigger::dynamic_threshold

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm2::signal_trigger::dynamic_threshold */

void __rustcall
strategy_comm2::signal_trigger::dynamic_threshold
          (double param_1,double param_2,double param_3,double param_4,double *param_5,
          double *param_6)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  
  if ((((0.0 <= param_2) && (0.0 <= param_3)) && (param_2 <= param_1)) &&
     (DAT_00117390 < (double)(_DAT_00116ac0 & (ulong)param_4))) {
    dVar1 = param_3 - param_2;
    if (param_3 - param_2 <= DAT_00117318) {
      dVar1 = DAT_00117318;
    }
    dVar1 = (param_1 - param_2) / dVar1;
    if (DAT_00117328 <= dVar1) {
      dVar1 = DAT_00117328;
    }
    dVar4 = (double)((ulong)(param_4 * dVar1) & _DAT_00116ac0);
    dVar1 = param_6[3];
    *param_5 = *param_6 - dVar4;
    auVar2._8_4_ = SUB84(dVar4 + param_6[2],0);
    auVar2._0_8_ = dVar4 + param_6[1];
    auVar2._12_4_ = (int)((ulong)(dVar4 + param_6[2]) >> 0x20);
    *(undefined1 (*) [16])(param_5 + 1) = auVar2;
    param_5[3] = dVar1 - dVar4;
    return;
  }
  dVar1 = *param_6;
  dVar4 = param_6[1];
  dVar3 = param_6[3];
  param_5[2] = param_6[2];
  param_5[3] = dVar3;
  *param_5 = dVar1;
  param_5[1] = dVar4;
  return;
}




// ELF address 0x00000000000519e0; _ZN14strategy_comm214signal_trigger17enum_rate_counter17h75e99b178f4d0e51E.llvm.12268379600032372830

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm2::signal_trigger::enum_rate_counter */

ulong __rustcall strategy_comm2::signal_trigger::enum_rate_counter(double param_1,long *param_2)

{
  char *pcVar1;
  char *pcVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  char cVar7;
  undefined4 *puVar8;
  undefined1 (*pauVar9) [16];
  undefined1 *puVar10;
  undefined1 (*pauVar11) [16];
  uint uVar12;
  undefined8 uVar13;
  char cVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 unaff_RBP;
  ulong uVar17;
  undefined1 *puVar18;
  long lVar19;
  ushort uVar20;
  ulong uVar21;
  undefined1 (*pauVar22) [16];
  ulong uVar23;
  uint uVar24;
  char *pcVar25;
  byte bVar26;
  char cVar27;
  byte bVar28;
  char cVar30;
  char cVar31;
  char cVar32;
  ulong in_XMM0_Qb;
  undefined1 auVar29 [16];
  double dVar33;
  double dVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined4 uStack_d8;
  undefined3 uStack_d4;
  undefined1 (*local_c8) [16];
  ulong uStack_c0;
  long local_b8;
  long lStack_b0;
  undefined1 local_a8 [16];
  double local_98;
  ulong uStack_90;
  undefined1 (*pauStack_80) [16];
  undefined8 uStack_78;
  ulong uStack_70;
  char *local_68;
  ulong local_60;
  undefined1 uStack_58;
  undefined4 uStack_57;
  undefined3 uStack_53;
  undefined4 auStack_3f [3];
  
  lVar3 = param_2[2];
  if (lVar3 == 0) {
    uVar17 = CONCAT71((int7)((ulong)unaff_RBP >> 8),4);
    if (*param_2 != 0) {
      (*(code *)PTR___rust_dealloc_001d5c50)(param_2[1],*param_2,1);
    }
    goto LAB_00151edc;
  }
  local_98 = param_1;
  uStack_90 = in_XMM0_Qb;
  pauVar9 = (undefined1 (*) [16])__tls_get_addr(&PTR_001d5f10);
  if (pauVar9[1][0] == '\x01') {
    local_a8 = *pauVar9;
  }
  else {
                    /* try { // try from 00151ef0 to 00151ef5 has its CatchHandler @ 00151f07 */
    local_a8 = (*(code *)PTR_hashmap_random_keys_001d5f20)();
    *pauVar9 = local_a8;
    pauVar9[1][0] = 1;
  }
  *(long *)*pauVar9 = local_a8._0_8_ + 1;
  local_b8 = _DAT_001d0650;
  lStack_b0 = _UNK_001d0658;
  local_c8 = (undefined1 (*) [16])
             PTR_anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263_001d0640;
  uStack_c0 = _UNK_001d0648;
  pcVar25 = (char *)param_2[1];
  pcVar1 = pcVar25 + lVar3;
  local_68 = pcVar25;
  do {
    cVar14 = *pcVar25;
    local_60 = CONCAT71(local_60._1_7_,cVar14);
                    /* try { // try from 00151b9b to 00151c15 has its CatchHandler @ 00151f0c */
    puVar10 = (undefined1 *)core::hash::BuildHasher::hash_one(local_a8);
    pcVar25 = pcVar25 + 1;
    bVar26 = (byte)((ulong)puVar10 >> 0x38);
    bVar28 = bVar26 >> 1;
    auVar29 = ZEXT216(CONCAT11(bVar28,bVar28));
    auVar29 = pshuflw(auVar29,auVar29,0);
    uVar17 = 0;
    puVar18 = puVar10;
    while( true ) {
      pauVar9 = (undefined1 (*) [16])((ulong)puVar18 & uStack_c0);
      pcVar2 = *pauVar9 + (long)*local_c8;
      cVar7 = pcVar2[0xf];
      cVar27 = auVar29[0];
      auVar36[0] = -(*pcVar2 == cVar27);
      cVar30 = auVar29[1];
      auVar36[1] = -(pcVar2[1] == cVar30);
      cVar31 = auVar29[2];
      auVar36[2] = -(pcVar2[2] == cVar31);
      cVar32 = auVar29[3];
      auVar36[3] = -(pcVar2[3] == cVar32);
      auVar36[4] = -(pcVar2[4] == cVar27);
      auVar36[5] = -(pcVar2[5] == cVar30);
      auVar36[6] = -(pcVar2[6] == cVar31);
      auVar36[7] = -(pcVar2[7] == cVar32);
      auVar36[8] = -(pcVar2[8] == cVar27);
      auVar36[9] = -(pcVar2[9] == cVar30);
      auVar36[10] = -(pcVar2[10] == cVar31);
      auVar36[0xb] = -(pcVar2[0xb] == cVar32);
      auVar36[0xc] = -(pcVar2[0xc] == cVar27);
      auVar36[0xd] = -(pcVar2[0xd] == cVar30);
      auVar36[0xe] = -(pcVar2[0xe] == cVar31);
      auVar36[0xf] = -(cVar7 == cVar32);
      uVar20 = (ushort)(SUB161(auVar36 >> 7,0) & 1) | (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar36 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar36 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar36 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar36 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar36 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar36 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar36 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar36 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe | (ushort)(auVar36[0xf] >> 7) << 0xf;
      uVar12 = (uint)uVar20;
      while (uVar20 != 0) {
        uVar24 = 0;
        for (uVar6 = uVar12; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar24 = uVar24 + 1;
        }
        uVar21 = (ulong)(*pauVar9 + uVar24) & uStack_c0;
        if (cVar14 == local_c8[-1 - uVar21][0]) {
          *(long *)(local_c8[-1 - uVar21] + 8) = *(long *)(local_c8[-1 - uVar21] + 8) + 1;
          goto joined_r0x00151b04;
        }
        uVar20 = (ushort)(uVar12 - 1) & (ushort)uVar12;
        uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar20);
      }
      auVar35[0] = -(*pcVar2 == anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0]
                    );
      auVar35[1] = -(pcVar2[1] ==
                    anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[1]);
      auVar35[2] = -(pcVar2[2] ==
                    anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[2]);
      auVar35[3] = -(pcVar2[3] ==
                    anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[3]);
      auVar35[4] = -(pcVar2[4] ==
                    anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[4]);
      auVar35[5] = -(pcVar2[5] ==
                    anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[5]);
      auVar35[6] = -(pcVar2[6] ==
                    anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[6]);
      auVar35[7] = -(pcVar2[7] ==
                    anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[7]);
      auVar35[8] = -(pcVar2[8] ==
                    anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[8]);
      auVar35[9] = -(pcVar2[9] ==
                    anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[9]);
      auVar35[10] = -(pcVar2[10] ==
                     anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[10]);
      auVar35[0xb] = -(pcVar2[0xb] ==
                      anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0xb]);
      auVar35[0xc] = -(pcVar2[0xc] ==
                      anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0xc]);
      auVar35[0xd] = -(pcVar2[0xd] ==
                      anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0xd]);
      auVar35[0xe] = -(pcVar2[0xe] ==
                      anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0xe]);
      auVar35[0xf] = -(cVar7 == anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263
                                [0xf]);
      if ((((((((((((((((auVar35 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                       (auVar35 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar35 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar35 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar35 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar35 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar35 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar35 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar35 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar35 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar35 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar35 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar35 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar35 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar35 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          cVar7 == anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0xf]) break;
      puVar18 = pauVar9[1] + uVar17;
      uVar17 = uVar17 + 0x10;
    }
    if (local_b8 == 0) {
      hashbrown::raw::RawTable<T,A>::reserve_rehash(&local_c8,1,local_a8);
      cVar14 = (char)local_60;
    }
    uVar17 = (ulong)puVar10 & uStack_c0;
    auVar29 = *(undefined1 (*) [16])(*local_c8 + uVar17);
    uVar20 = (ushort)(SUB161(auVar29 >> 7,0) & 1) | (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
             (ushort)(byte)(auVar29[0xf] >> 7) << 0xf;
    uVar12 = (uint)uVar20;
    if (uVar20 == 0) {
      lVar19 = 0x10;
      do {
        uVar17 = uVar17 + lVar19 & uStack_c0;
        auVar29 = *(undefined1 (*) [16])(*local_c8 + uVar17);
        lVar19 = lVar19 + 0x10;
        uVar12 = (uint)(ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar29[0xf] >> 7) << 0xf);
      } while (uVar12 == 0);
    }
    uVar24 = 0;
    for (; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
      uVar24 = uVar24 + 1;
    }
    uVar21 = uVar24 + uVar17 & uStack_c0;
    bVar28 = (*local_c8)[uVar21];
    if (-1 < (char)bVar28) {
      auVar29 = *local_c8;
      uVar12 = 0;
      for (uVar24 = (uint)(ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(byte)(auVar29[0xf] >> 7) << 0xf); (uVar24 & 1) == 0;
          uVar24 = uVar24 >> 1 | 0x80000000) {
        uVar12 = uVar12 + 1;
      }
      uVar21 = (ulong)uVar12;
      bVar28 = (*local_c8)[uVar21];
    }
    pauVar9 = (undefined1 (*) [16])(uVar21 - 0x10 & uStack_c0);
    bVar26 = bVar26 >> 1;
    (*local_c8)[uVar21] = bVar26;
    (*pauVar9)[(long)local_c8[1]] = bVar26;
    uVar17 = (ulong)bVar28 & 0xffffffffffffff01;
    local_b8 = local_b8 - uVar17;
    local_c8[-1 - uVar21][0] = cVar14;
    *(undefined8 *)(local_c8[-1 - uVar21] + 8) = 0;
    lStack_b0 = lStack_b0 + 1;
    *(long *)(local_c8[-1 - uVar21] + 8) = *(long *)(local_c8[-1 - uVar21] + 8) + 1;
joined_r0x00151b04:
  } while (pcVar25 != pcVar1);
  if (uStack_c0 == 0) {
    uVar13 = 0;
    if (lStack_b0 != 0) goto LAB_00151c8b;
LAB_00151e16:
    dVar34 = 0.0;
    dVar33 = 0.0;
    uVar16 = 4;
    if (uVar17 != 0 && uStack_c0 != 0) {
      (*(code *)PTR___rust_dealloc_001d5c50)();
      dVar34 = 0.0;
      dVar33 = 0.0;
    }
  }
  else {
    uVar17 = uStack_c0 * 0x11 + 0x21;
    pauVar9 = local_c8 + (-1 - uStack_c0);
    uVar13 = 0x10;
    if (lStack_b0 == 0) goto LAB_00151e16;
LAB_00151c8b:
    auVar29 = *local_c8;
    uVar20 = (ushort)(SUB161(auVar29 >> 7,0) & 1) | (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
             (ushort)(byte)(auVar29[0xf] >> 7) << 0xf;
    pauVar11 = local_c8;
    pauVar22 = local_c8;
    while (pauVar22 = pauVar22 + 1, uVar20 == 0xffff) {
      auVar29 = *pauVar22;
      pauVar11 = pauVar11 + -0x10;
      uVar20 = (ushort)(SUB161(auVar29 >> 7,0) & 1) | (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
               (ushort)(byte)(auVar29[0xf] >> 7) << 0xf;
    }
    iVar5 = 0;
    uVar24 = ~(uint)uVar20;
    for (uVar12 = uVar24; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
      iVar5 = iVar5 + 1;
    }
    uVar16 = (ulong)*(byte *)((long)pauVar11 + (-0x10 - (ulong)(uint)(iVar5 << 4)));
    uVar21 = *(ulong *)((long)pauVar11 + (-8 - (ulong)(uint)(iVar5 << 4)));
    lVar19 = lStack_b0 + -1;
    if (lVar19 != 0) {
      uVar24 = uVar24 & -(uint)uVar20 - 2;
      uVar15 = uVar16;
      uVar23 = uVar21;
      do {
        local_60 = uVar23;
        if ((short)uVar24 == 0) {
          do {
            auVar29 = *pauVar22;
            pauVar11 = pauVar11 + -0x10;
            pauVar22 = pauVar22 + 1;
            uVar24 = (uint)(ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar29[0xf] >> 7) << 0xf);
          } while (uVar24 == 0xffff);
          uVar24 = ~uVar24;
        }
        iVar5 = 0;
        for (uVar12 = uVar24; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
          iVar5 = iVar5 + 1;
        }
        uVar24 = uVar24 - 1 & uVar24;
        uVar4 = *(ulong *)((long)pauVar11 + (-8 - (ulong)(uint)(iVar5 << 4)));
        uVar23 = local_60;
        if (local_60 < uVar4) {
          uVar23 = uVar4;
        }
        uVar16 = uVar15 & 0xff;
        puVar8 = &uStack_57;
        if (local_60 <= uVar4) {
          uVar21 = uVar4;
          uVar16 = (ulong)*(uint *)((long)pauVar11 + (-0x10 - (ulong)(uint)(iVar5 << 4)));
          puVar8 = auStack_3f;
        }
        uStack_58 = (undefined1)uVar15;
        uStack_53 = uStack_d4;
        uStack_57 = uStack_d8;
        uStack_d8 = *puVar8;
        uStack_d4 = (undefined3)((uint)*(undefined4 *)((long)puVar8 + 3) >> 8);
        lVar19 = lVar19 + -1;
        uVar15 = uVar16;
      } while (lVar19 != 0);
    }
    pauStack_80 = pauVar9;
    uStack_78 = uVar13;
    uStack_70 = uStack_c0;
    if (uVar17 != 0 && uStack_c0 != 0) {
      (*(code *)PTR___rust_dealloc_001d5c50)(pauVar9,uVar17,uVar13);
    }
    auVar29._8_4_ = (int)(uVar21 >> 0x20);
    auVar29._0_8_ = uVar21;
    auVar29._12_4_ = _UNK_00116be4;
    dVar33 = auVar29._8_8_ - _UNK_00116ab8;
    dVar34 = dVar33 + ((double)CONCAT44(_DAT_00116be0,(int)uVar21) - _DAT_00116ab0);
  }
  dVar34 = dVar34 / (double)lVar3;
  uVar17 = 4;
  if (local_98 < dVar34) {
    uVar17 = uVar16 & 0xff;
  }
  local_98 = (double)(-(ulong)(local_98 < dVar34) & (ulong)dVar34);
  uStack_90 = uStack_90 & (ulong)dVar33;
  if (*param_2 != 0) {
    (*(code *)PTR___rust_dealloc_001d5c50)(local_68,*param_2,1);
  }
LAB_00151edc:
  return uVar17 & 0xffffffff;
}




// ELF address 0x0000000000050530; strategy_comm2::signal_trigger::TsQuantileCalculator::update

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm2::signal_trigger::TsQuantileCalculator::update */

void __rustcall
strategy_comm2::signal_trigger::TsQuantileCalculator::update
          (double param_1,double param_2,ulong *param_3,undefined **param_4)

{
  double dVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  double *pdVar5;
  double *pdVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  char cVar10;
  ulong uVar11;
  ulong uVar12;
  undefined **ppuVar13;
  long lVar14;
  bool bVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double *local_80;
  double local_78;
  double local_70;
  double *local_68;
  undefined8 local_60;
  undefined **local_58;
  undefined1 local_50 [32];
  
  dVar16 = (double)param_3[8];
  pdVar5 = (double *)*param_3;
  pdVar6 = (double *)param_3[3];
  if (pdVar6 == pdVar5) {
    param_4 = &PTR_anon_5d1793e484c313653e5ba6492de742cc_0_llvm_12268379600032372830_001d05e0;
    alloc::collections::vec_deque::VecDeque<T,A>::grow(param_3);
    pdVar5 = (double *)*param_3;
    pdVar6 = (double *)param_3[3];
  }
  if ((double *)((long)pdVar6 + param_3[2]) < pdVar5) {
    pdVar5 = (double *)0x0;
  }
  lVar7 = (long)((long)pdVar6 + param_3[2]) - (long)pdVar5;
  uVar8 = param_3[1];
  *(double *)(uVar8 + lVar7 * 0x18) = param_1;
  *(double *)(uVar8 + 8 + lVar7 * 0x18) = param_2;
  *(double *)(uVar8 + 0x10 + lVar7 * 0x18) = dVar16;
  uVar8 = param_3[3] + 1;
  param_3[3] = uVar8;
  pdVar5 = (double *)param_3[4];
  local_68 = (double *)0x0;
  if (pdVar5 != (double *)0x0) {
    uVar9 = param_3[5];
    do {
      lVar7 = (ulong)*(ushort *)((long)pdVar5 + 0xba) << 4;
      pdVar6 = pdVar5;
      ppuVar13 = (undefined **)0x0;
      do {
        param_4 = (undefined **)(ulong)*(ushort *)((long)pdVar5 + 0xba);
        if (lVar7 == 0) goto LAB_00150643;
        dVar17 = *pdVar6;
        dVar18 = pdVar6[1];
        param_4 = ppuVar13;
        if (param_2 <= dVar17) {
          if (param_2 < dVar17) goto LAB_00150643;
LAB_001505e6:
          cVar10 = ((ulong)dVar16 >= (ulong)dVar18 && dVar16 != dVar18) -
                   ((ulong)dVar16 < (ulong)dVar18);
        }
        else {
          cVar10 = '\x01';
          if (param_2 < dVar17) goto LAB_001505e6;
        }
        pdVar6 = pdVar6 + 2;
        lVar7 = lVar7 + -0x10;
        ppuVar13 = (undefined **)((long)ppuVar13 + 1);
      } while (cVar10 == '\x01');
      if (cVar10 == '\0') goto LAB_00150696;
LAB_00150643:
      bVar15 = uVar9 == 0;
      uVar9 = uVar9 - 1;
      local_68 = pdVar5;
      if (bVar15) break;
      pdVar5 = (double *)pdVar5[(long)(param_4 + 3)];
    } while( true );
  }
  local_60 = 0;
  local_80 = (double *)(param_3 + 4);
  local_78 = param_2;
  local_70 = dVar16;
  local_58 = param_4;
  alloc::collections::btree::map::entry::VacantEntry<K,V,A>::insert_entry(local_50,&local_80);
  uVar8 = param_3[3];
LAB_00150696:
  param_3[8] = param_3[8] + 1;
  dVar16 = (double)param_3[9] + param_2;
  param_3[9] = (ulong)dVar16;
  uVar9 = param_3[10] + 1;
  param_3[10] = uVar9;
  auVar20._8_4_ = (int)(uVar9 >> 0x20);
  auVar20._0_8_ = uVar9;
  auVar20._12_4_ = _UNK_00116be4;
  param_3[0xb] = (ulong)(dVar16 / ((auVar20._8_8_ - _UNK_00116ab8) +
                                  ((double)CONCAT44(_DAT_00116be0,(int)uVar9) - _DAT_00116ab0)));
  param_3[0xc] = (ulong)(param_2 * param_2 + (double)param_3[0xc]);
  param_3[(ulong)(param_2 <= 0.0) + 0xe] =
       (ulong)(param_2 + (double)param_3[(ulong)(param_2 <= 0.0) + 0xe]);
  if (uVar8 != 0) {
    do {
      uVar12 = param_3[2];
      uVar2 = *param_3;
      uVar3 = param_3[1];
      uVar11 = uVar2;
      if (uVar12 < uVar2) {
        uVar11 = 0;
      }
      dVar17 = param_1 - *(double *)(uVar3 + (uVar12 - uVar11) * 0x18);
      if (dVar17 < (double)param_3[7] || dVar17 == (double)param_3[7]) {
        return;
      }
      uVar11 = 0;
      if (uVar2 <= uVar12 + 1) {
        uVar11 = uVar2;
      }
      param_3[2] = (uVar12 - uVar11) + 1;
      param_3[3] = uVar8 - 1;
      dVar17 = *(double *)(uVar3 + 8 + uVar12 * 0x18);
      local_80 = (double *)param_3[4];
      if (local_80 != (double *)0x0) {
        dVar18 = *(double *)(uVar3 + 0x10 + uVar12 * 0x18);
        local_78 = (double)param_3[5];
        do {
          lVar7 = (ulong)*(ushort *)((long)local_80 + 0xba) << 4;
          uVar8 = 0;
          pdVar5 = local_80;
          local_70 = (double)-1;
          do {
            lVar14 = (long)local_70;
            uVar12 = (ulong)*(ushort *)((long)local_80 + 0xba);
            if (lVar7 == 0) goto joined_r0x00150878;
            dVar1 = *pdVar5;
            dVar4 = pdVar5[1];
            if (dVar17 <= dVar1) {
              uVar12 = uVar8;
              if (dVar17 < dVar1) goto joined_r0x00150878;
LAB_00150806:
              cVar10 = ((ulong)dVar18 >= (ulong)dVar4 && dVar18 != dVar4) -
                       ((ulong)dVar18 < (ulong)dVar4);
            }
            else {
              cVar10 = '\x01';
              if (dVar17 < dVar1) goto LAB_00150806;
            }
            pdVar5 = pdVar5 + 2;
            lVar7 = lVar7 + -0x10;
            local_70 = (double)(lVar14 + 1);
            uVar8 = uVar8 + 1;
          } while (cVar10 == '\x01');
          if (cVar10 == '\0') {
            local_68 = (double *)(param_3 + 4);
            alloc::collections::btree::map::entry::OccupiedEntry<K,V,A>::remove_kv(&local_80);
            dVar16 = (double)param_3[9];
            uVar9 = param_3[10];
            break;
          }
          uVar12 = lVar14 + 1;
joined_r0x00150878:
          if (local_78 == 0.0) break;
          local_78 = (double)((long)local_78 - 1);
          local_80 = (double *)local_80[uVar12 + 0x18];
        } while( true );
      }
      dVar16 = dVar16 - dVar17;
      param_3[9] = (ulong)dVar16;
      dVar18 = 0.0;
      if (uVar9 == 0) {
LAB_00150720:
        uVar9 = 0;
      }
      else {
        uVar9 = uVar9 - 1;
        param_3[10] = uVar9;
        if (uVar9 == 0) goto LAB_00150720;
        auVar19._8_4_ = (int)(uVar9 >> 0x20);
        auVar19._0_8_ = uVar9;
        auVar19._12_4_ = _UNK_00116be4;
        dVar18 = dVar16 / ((auVar19._8_8_ - _UNK_00116ab8) +
                          ((double)CONCAT44(_DAT_00116be0,(int)uVar9) - _DAT_00116ab0));
      }
      param_3[0xb] = (ulong)dVar18;
      dVar18 = _DAT_00117348;
      param_3[0xc] = (ulong)((double)param_3[0xc] - dVar17 * dVar17);
      param_3[(ulong)(dVar17 <= dVar18) + 0xe] =
           (ulong)((double)param_3[(ulong)(dVar17 <= dVar18) + 0xe] - dVar17);
      uVar8 = param_3[3];
    } while (uVar8 != 0);
  }
  return;
}




// ELF address 0x0000000000055cc0; strategy_comm2::vol_spread_ratio::VolSpreadRatio::update

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm2::vol_spread_ratio::VolSpreadRatio::update */

ulong __rustcall
strategy_comm2::vol_spread_ratio::VolSpreadRatio::update
          (double param_1,double param_2,double param_3,ulong *param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  bool bVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  
  dVar11 = DAT_00117380 * (param_2 + param_3);
  dVar9 = (double)(*(code *)PTR_round_001d5f58)
                            (((param_3 - param_2) / (param_2 + param_3)) * _DAT_00117398);
  uVar4 = *param_4;
  uVar1 = param_4[3];
  if (uVar1 == uVar4) {
    alloc::collections::vec_deque::VecDeque<T,A>::grow
              (param_4,anon_fc452b6885b8f5fb70aecd59f7754f5b_20_llvm_12093297076045436479);
    uVar4 = *param_4;
    uVar1 = param_4[3];
  }
  dVar9 = dVar9 / DAT_00117368;
  uVar6 = 0;
  if (uVar4 <= uVar1 + param_4[2]) {
    uVar6 = uVar4;
  }
  uVar4 = param_4[1];
  lVar2 = ((uVar1 + param_4[2]) - uVar6) * 0x10;
  *(double *)(uVar4 + lVar2) = param_1;
  *(double *)(uVar4 + 8 + lVar2) = dVar11;
  uVar4 = param_4[3];
  param_4[3] = uVar4 + 1;
  if (uVar4 + 1 != 0) {
    uVar1 = *param_4;
    uVar6 = param_4[2];
    do {
      uVar7 = uVar1;
      if (uVar6 < uVar1) {
        uVar7 = 0;
      }
      if (param_1 - *(double *)(param_4[1] + (uVar6 - uVar7) * 0x10) <= (double)param_4[4]) break;
      uVar7 = uVar1;
      if (uVar6 + 1 < uVar1) {
        uVar7 = 0;
      }
      uVar6 = (uVar6 + 1) - uVar7;
      param_4[2] = uVar6;
      param_4[3] = uVar4;
      bVar8 = uVar4 != 0;
      uVar4 = uVar4 - 1;
    } while (bVar8);
  }
  signal_trigger::TsQuantileCalculator::update(param_1,dVar9,param_4 + 0x17);
  uVar4 = param_4[3];
  if (uVar4 == 0) {
    return 0;
  }
  uVar1 = param_4[2];
  uVar6 = *param_4;
  uVar3 = 0;
  uVar7 = uVar6;
  if (uVar1 < uVar6) {
    uVar7 = uVar3;
  }
  uVar5 = (uVar4 + uVar1) - 1;
  if (uVar5 < uVar6) {
    uVar6 = uVar3;
  }
  if (uVar4 != 1) {
    uVar4 = param_4[1];
    lVar2 = (uVar1 - uVar7) * 0x10;
    if ((double)param_4[0x29] * DAT_00117380 <= param_1 - *(double *)(uVar4 + lVar2)) {
      dVar9 = *(double *)(lVar2 + uVar4 + 8);
      if (dVar9 <= 0.0) {
        return 0;
      }
      dVar9 = (double)(*(code *)PTR_round_001d5f58)
                                ((*(double *)(uVar4 + 8 + (uVar5 - uVar6) * 0x10) / dVar9 +
                                 _s__001172b8) * _DAT_00117398);
      signal_trigger::TsQuantileCalculator::update(param_1,dVar9 / DAT_00117368,param_4 + 5);
      uVar4 = param_4[0xf];
      uVar1 = 1;
      if (1 < uVar4) {
        uVar1 = uVar4;
      }
      auVar10._8_4_ = (int)(uVar1 >> 0x20);
      auVar10._0_8_ = uVar1;
      auVar10._12_4_ = _UNK_00116be4;
      dVar9 = (double)param_4[0x11] /
              ((auVar10._8_8_ - _UNK_00116ab8) +
              ((double)CONCAT44(_DAT_00116be0,(int)uVar1) - _DAT_00116ab0)) -
              (double)param_4[0x10] * (double)param_4[0x10];
      if (dVar9 <= 0.0) {
        dVar9 = 0.0;
      }
      param_4[0x12] = (ulong)SQRT(dVar9);
      uVar3 = (ulong)(1 < uVar4 && 0.0 < (double)param_4[0x22]);
    }
    return uVar3;
  }
  return 0;
}




// ELF address 0x00000000000464a0; <strategy_comm2::StrategyComm2 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin

/* WARNING: Removing unreachable block (ram,0x00146516) */
/* WARNING: Removing unreachable block (ram,0x00146571) */
/* WARNING: Removing unreachable block (ram,0x00146575) */
/* WARNING: Removing unreachable block (ram,0x00146577) */
/* WARNING: Removing unreachable block (ram,0x0014678c) */
/* WARNING: Removing unreachable block (ram,0x00146581) */
/* WARNING: Removing unreachable block (ram,0x0014661b) */
/* WARNING: Removing unreachable block (ram,0x0014662e) */
/* WARNING: Removing unreachable block (ram,0x0014663b) */
/* WARNING: Removing unreachable block (ram,0x00146640) */
/* WARNING: Removing unreachable block (ram,0x00146653) */
/* WARNING: Removing unreachable block (ram,0x0014666c) */
/* WARNING: Removing unreachable block (ram,0x0014668d) */
/* WARNING: Removing unreachable block (ram,0x00146696) */
/* WARNING: Removing unreachable block (ram,0x00146680) */
/* WARNING: Removing unreachable block (ram,0x0014673c) */
/* WARNING: Removing unreachable block (ram,0x00146749) */
/* _<strategy_comm2::StrategyComm2 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin */

undefined8 __rustcall
_<strategy_comm2::StrategyComm2_as_future_backtest_sdk::plugin::StrategyPlugin>::on_begin
          (long *param_1)

{
  long lVar1;
  long local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined1 local_2a8 [312];
  long local_170;
  long local_168;
  undefined1 auStack_160 [304];
  
  (*(code *)PTR_custom_config_001d5d70)(&local_338);
                    /* try { // try from 001464c9 to 001464f7 has its CatchHandler @ 001467a3 */
  _<toml::de::Deserializer_as_serde_core::de::Deserializer>::deserialize_struct
            (&local_170,local_330,local_328,"Comm2Params",0xb,
             &PTR_s_signal_modepv1_alphacost_alphasi_001cffc0,0x23);
  (*(code *)PTR_memcpy_001d5cb0)(local_2a8,auStack_160,0x130);
  lVar1 = *param_1;
  if (lVar1 != -0x8000000000000000) {
    if (lVar1 != 0) {
      (*(code *)PTR___rust_dealloc_001d5c50)(param_1[1],lVar1,1);
    }
    if (param_1[3] != 0) {
      (*(code *)PTR___rust_dealloc_001d5c50)(param_1[4],param_1[3],1);
    }
    if (param_1[6] != 0) {
      (*(code *)PTR___rust_dealloc_001d5c50)(param_1[7],param_1[6] << 3,8);
    }
  }
  *param_1 = local_170;
  param_1[1] = local_168;
  (*(code *)PTR_memcpy_001d5cb0)(param_1 + 2,local_2a8,0x130);
  if (local_338 != 0) {
    (*(code *)PTR___rust_dealloc_001d5c50)(local_330,local_338,1);
  }
  return 0;
}




// ELF address 0x0000000000048da0; <strategy_comm2::StrategyComm2 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth

/* _<strategy_comm2::StrategyComm2 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth */

undefined8 __rustcall
_<strategy_comm2::StrategyComm2_as_future_backtest_sdk::plugin::StrategyPlugin>::on_depth
          (long param_1,long param_2)

{
  double *pdVar1;
  undefined1 auVar2 [16];
  long lVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  ushort uVar9;
  int iVar10;
  ulong uVar11;
  undefined8 uVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  byte bVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  char cVar20;
  char cVar21;
  char cVar22;
  undefined1 auVar23 [16];
  long lStack_60;
  undefined8 uStack_58;
  char cVar19;
  
  if (*(long *)(param_1 + 0x188) != 0) {
    uVar11 = core::hash::BuildHasher::hash_one(param_1 + 400);
    puVar8 = PTR_bcmp_001d5ce8;
    lVar3 = *(long *)(param_1 + 0x170);
    uVar4 = *(ulong *)(param_1 + 0x178);
    bVar16 = (byte)(uVar11 >> 0x39);
    auVar17 = ZEXT216(CONCAT11(bVar16,bVar16));
    auVar17 = pshuflw(auVar17,auVar17,0);
    uVar12 = *(undefined8 *)(param_2 + 0x28);
    lVar5 = *(long *)(param_2 + 0x30);
    lVar14 = 0;
    while( true ) {
      uVar11 = uVar11 & uVar4;
      auVar2 = *(undefined1 (*) [16])(lVar3 + uVar11);
      cVar19 = auVar17[0];
      auVar18[0] = -(auVar2[0] == cVar19);
      cVar20 = auVar17[1];
      auVar18[1] = -(auVar2[1] == cVar20);
      cVar21 = auVar17[2];
      auVar18[2] = -(auVar2[2] == cVar21);
      cVar22 = auVar17[3];
      auVar18[3] = -(auVar2[3] == cVar22);
      auVar18[4] = -(auVar2[4] == cVar19);
      auVar18[5] = -(auVar2[5] == cVar20);
      auVar18[6] = -(auVar2[6] == cVar21);
      auVar18[7] = -(auVar2[7] == cVar22);
      auVar18[8] = -(auVar2[8] == cVar19);
      auVar18[9] = -(auVar2[9] == cVar20);
      auVar18[10] = -(auVar2[10] == cVar21);
      auVar18[0xb] = -(auVar2[0xb] == cVar22);
      auVar18[0xc] = -(auVar2[0xc] == cVar19);
      auVar18[0xd] = -(auVar2[0xd] == cVar20);
      cVar19 = auVar2[0xf];
      auVar18[0xe] = -(auVar2[0xe] == cVar21);
      auVar18[0xf] = -(cVar19 == cVar22);
      uVar9 = (ushort)(SUB161(auVar18 >> 7,0) & 1) | (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe | (ushort)(auVar18[0xf] >> 7) << 0xf;
      uVar13 = (uint)uVar9;
      while (uVar9 != 0) {
        uVar6 = 0;
        for (uVar7 = uVar13; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
          uVar6 = uVar6 + 1;
        }
        lVar15 = (uVar6 + uVar11 & uVar4) * -0x30;
        if ((lVar5 == *(long *)(lVar3 + -0x20 + lVar15)) &&
           (iVar10 = (*(code *)puVar8)(uVar12,*(undefined8 *)(lVar15 + lVar3 + -0x28)), iVar10 == 0)
           ) {
          pdVar1 = (double *)(lVar3 + -0x18 + lVar15);
          if ((*(double *)(param_2 + 0x98) == *pdVar1) &&
             (!NAN(*(double *)(param_2 + 0x98)) && !NAN(*pdVar1))) {
            pdVar1 = (double *)(lVar3 + -0x10 + lVar15);
            if ((*(double *)(param_2 + 0x48) == *pdVar1) &&
               (!NAN(*(double *)(param_2 + 0x48)) && !NAN(*pdVar1))) {
              return 0;
            }
          }
          uVar12 = core::hash::BuildHasher::hash_one(param_1 + 400,param_2 + 0x20);
          hashbrown::raw::RawTable<T,A>::remove_entry
                    (&lStack_60,param_1 + 0x170,uVar12,param_2 + 0x20);
          if (lStack_60 == 0) {
            return 0;
          }
          (*(code *)PTR___rust_dealloc_001d5c50)(uStack_58,lStack_60,1);
          return 0;
        }
        uVar9 = (ushort)(uVar13 - 1) & (ushort)uVar13;
        uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar9);
      }
      auVar23[0] = -(auVar2[0] == -1);
      auVar23[1] = -(auVar2[1] == -1);
      auVar23[2] = -(auVar2[2] == -1);
      auVar23[3] = -(auVar2[3] == -1);
      auVar23[4] = -(auVar2[4] == -1);
      auVar23[5] = -(auVar2[5] == -1);
      auVar23[6] = -(auVar2[6] == -1);
      auVar23[7] = -(auVar2[7] == -1);
      auVar23[8] = -(auVar2[8] == -1);
      auVar23[9] = -(auVar2[9] == -1);
      auVar23[10] = -(auVar2[10] == -1);
      auVar23[0xb] = -(auVar2[0xb] == -1);
      auVar23[0xc] = -(auVar2[0xc] == -1);
      auVar23[0xd] = -(auVar2[0xd] == -1);
      auVar23[0xe] = -(auVar2[0xe] == -1);
      auVar23[0xf] = -(cVar19 == -1);
      if ((((((((((((((((auVar23 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                       (auVar23 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar23 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar23 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar23 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar23 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar23 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar23 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar23 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar23 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar23 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar23 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar23 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar23 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar23 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || cVar19 == -1)
      break;
      uVar11 = uVar11 + lVar14 + 0x10;
      lVar14 = lVar14 + 0x10;
    }
  }
  return 0;
}




// ELF address 0x0000000000048f80; <strategy_comm2::StrategyComm2 as future_backtest_sdk::plugin::StrategyPlugin>::on_finish

/* _<strategy_comm2::StrategyComm2 as future_backtest_sdk::plugin::StrategyPlugin>::on_finish */

undefined8 __rustcall
_<strategy_comm2::StrategyComm2_as_future_backtest_sdk::plugin::StrategyPlugin>::on_finish
          (undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined1 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long local_80;
  long local_78;
  long local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined2 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  lVar6 = (*(code *)PTR_para_001d5d90)(param_2);
  uVar2 = *(undefined2 *)(lVar6 + 0x34);
  uVar7 = *(undefined8 *)(lVar6 + 0x28);
  local_48 = *(undefined4 *)(lVar6 + 0x18);
  uStack_44 = *(undefined4 *)(lVar6 + 0x1c);
  uStack_40 = *(undefined4 *)(lVar6 + 0x20);
  uStack_3c = *(undefined4 *)(lVar6 + 0x24);
  uVar3 = *(undefined4 *)(lVar6 + 0x30);
  uVar1 = *(undefined1 *)(lVar6 + 0x30);
  _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone
            (&local_80,lVar6,anon_73c6854463ca780e0f1d654c11f72aa2_56_llvm_3192694419942890325);
  local_68 = CONCAT44(uStack_44,local_48);
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_58 = uVar7;
  local_50 = uVar3;
  local_4c = uVar2;
                    /* try { // try from 00148fee to 00149006 has its CatchHandler @ 00149083 */
  uVar5 = (*(code *)PTR_is_night_001d5e78)(param_2);
  uVar7 = (*(code *)PTR_all_in_001d5dd0)(param_2,uVar5,uVar1);
  puVar4 = PTR___rust_dealloc_001d5c50;
  if (local_70 != 0) {
    puVar8 = (undefined8 *)(local_78 + 8);
    lVar6 = local_70;
    do {
      if (puVar8[-1] != 0) {
        (*(code *)puVar4)(*puVar8,puVar8[-1],1);
      }
      puVar8 = puVar8 + 3;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  if (local_80 != 0) {
    (*(code *)PTR___rust_dealloc_001d5c50)(local_78,local_80 * 0x18,8);
  }
  return uVar7;
}




// ELF address 0x00000000000467e0; <strategy_comm2::StrategyComm2 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal

/* WARNING: Removing unreachable block (ram,0x00146fae) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _<strategy_comm2::StrategyComm2 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal */

code * __rustcall
_<strategy_comm2::StrategyComm2_as_future_backtest_sdk::plugin::StrategyPlugin>::on_signal
          (long param_1,double param_2,undefined8 param_3)

{
  undefined1 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  double **ppdVar5;
  char cVar6;
  char cVar7;
  byte bVar8;
  undefined1 uVar9;
  int iVar10;
  long lVar11;
  code *pcVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined4 uVar15;
  undefined *puVar16;
  long lVar17;
  undefined8 uVar18;
  ulong uVar19;
  long *plVar20;
  long lVar21;
  long lVar22;
  double *extraout_XMM0_Qa;
  double dVar23;
  double *pdVar24;
  double *pdVar25;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  double *extraout_XMM1_Qa;
  double *pdVar26;
  undefined8 extraout_XMM1_Qb;
  double dVar27;
  double *pdVar28;
  double dVar29;
  undefined1 auVar30 [12];
  undefined1 uStack_64a;
  char cStack_649;
  double *local_648;
  undefined8 uStack_640;
  undefined1 *local_630;
  code *local_628;
  code *local_620;
  double *local_618;
  undefined8 uStack_610;
  double local_608;
  undefined8 uStack_600;
  double *local_5f8;
  double local_5f0;
  undefined8 local_5e8;
  undefined8 local_5e0;
  double *pdStack_5d8;
  double dStack_5d0;
  double **local_5c8;
  long local_5c0;
  double *local_5b8;
  code *pcStack_5b0;
  double **local_5a8;
  undefined1 *puStack_5a0;
  double *local_598;
  undefined1 *puStack_590;
  double *pdStack_588;
  code *pcStack_580;
  double dStack_570;
  double *local_568;
  undefined8 uStack_560;
  double local_550;
  undefined1 *local_548;
  double *pdStack_540;
  undefined8 uStack_538;
  double dStack_530;
  undefined8 uStack_528;
  double *local_518;
  code *pcStack_510;
  double **local_508;
  undefined1 *puStack_500;
  double *local_4f8;
  undefined1 *local_4f0;
  double *pdStack_4e8;
  code *pcStack_4e0;
  double *local_4d8;
  code *local_4d0;
  double *local_480;
  long local_408;
  double *local_400;
  long local_3f8;
  long local_3f0;
  undefined8 local_3e8;
  double dStack_3d8;
  undefined8 uStack_3d0;
  double *local_3c8;
  code *pcStack_3c0;
  double **ppdStack_3b8;
  double *pdStack_3b0;
  code *pcStack_3a8;
  double **ppdStack_3a0;
  double *local_398;
  code *pcStack_390;
  double **local_388;
  double *local_380;
  code *pcStack_378;
  double **local_370;
  ulong local_368;
  long local_360;
  ulong local_358;
  double local_350;
  undefined8 uStack_348;
  double *local_340;
  undefined8 uStack_338;
  double local_330;
  double dStack_328;
  double local_320;
  undefined1 *puStack_318;
  double local_310;
  double dStack_308;
  double local_300;
  double dStack_2f8;
  double local_2f0;
  double dStack_2e8;
  double local_2e0;
  double dStack_2d8;
  double *local_2d0;
  code *pcStack_2c8;
  double **local_2c0;
  undefined1 *puStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  double dStack_298;
  double local_290;
  double dStack_288;
  double local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  double dStack_268;
  char local_260;
  char local_25f;
  long local_250;
  long *local_248;
  long local_240;
  double *local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined4 local_220;
  undefined1 local_21c;
  undefined1 local_21b;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  double dStack_200;
  double dStack_1f8;
  double *pdStack_1f0;
  double *pdStack_1e8;
  code *pcStack_1e0;
  undefined1 *puStack_1d8;
  undefined1 uStack_1d0;
  char cStack_1cf;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  double dStack_1b0;
  double dStack_1a8;
  code *pcStack_1a0;
  double *pdStack_198;
  code *pcStack_190;
  undefined1 *puStack_188;
  undefined1 uStack_180;
  byte bStack_17f;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  double dStack_160;
  double dStack_158;
  code *pcStack_150;
  double *pdStack_148;
  code *pcStack_140;
  undefined1 *puStack_138;
  undefined2 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  double dStack_110;
  double dStack_108;
  double *pdStack_100;
  double *pdStack_f8;
  code *pcStack_f0;
  undefined1 *puStack_e8;
  undefined2 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  double *pdStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [32];
  
  lVar11 = (*(code *)PTR_para_001d5d90)(param_3);
  uVar9 = *(undefined1 *)(lVar11 + 0x34);
  local_648 = *(double **)(lVar11 + 0x28);
  uVar1 = *(undefined1 *)(lVar11 + 0x35);
  local_568 = *(double **)(lVar11 + 0x18);
  uStack_560 = *(undefined8 *)(lVar11 + 0x20);
  pdVar26 = *(double **)(lVar11 + 0x30);
  _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone
            (&local_250,lVar11,anon_73c6854463ca780e0f1d654c11f72aa2_56_llvm_3192694419942890325);
  local_220 = SUB84(pdVar26,0);
  local_548 = (undefined1 *)CONCAT71(local_548._1_7_,uVar9);
  local_238 = local_568;
  uStack_230 = uStack_560;
  local_228 = local_648;
                    /* try { // try from 00146887 to 0014689e has its CatchHandler @ 00148d28 */
  local_21c = uVar9;
  local_21b = uVar1;
  (*(code *)PTR_clone_001d5d98)(&local_5b8,param_1,&PTR_s_strategies_comm_strategy_strateg_001d0400)
  ;
  local_648 = *(double **)(param_1 + 0x48);
  uStack_640 = *(undefined8 *)(param_1 + 0x50);
                    /* try { // try from 001468ad to 001468c1 has its CatchHandler @ 00148d23 */
  (*(code *)PTR_clone_001d5d98)
            (&local_518,param_1 + 0x18,&PTR_s_strategies_comm_strategy_strateg_001d0400);
  uVar2 = *(ulong *)(param_1 + 0x40);
  uVar13 = uVar2 * 8;
  if (0x7ffffffffffffff8 < uVar13 || uVar2 >> 0x3d != 0) {
    uVar18 = 0;
LAB_001468f3:
                    /* try { // try from 001468f3 to 00146905 has its CatchHandler @ 00148d40 */
    (*(code *)PTR_handle_error_001d5d50)
              (uVar18,uVar13,anon_af7648d3f90f552d9b132a28deb8bf13_1_llvm_5249397926571400851);
                    /* WARNING: Does not return */
    pcVar12 = (code *)invalidInstructionException();
    (*pcVar12)();
  }
  local_568 = *(double **)(param_1 + 0x58);
  uStack_560 = *(undefined8 *)(param_1 + 0x60);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  local_608 = param_2;
  local_5c0 = param_1;
  if (uVar13 == 0) {
    lVar11 = 8;
    uVar19 = 0;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001d5c70)();
    uVar18 = 8;
    lVar11 = (*(code *)PTR___rust_alloc_001d5c48)(uVar13,8);
    uVar19 = uVar2;
    if (lVar11 == 0) goto LAB_001468f3;
  }
  (*(code *)PTR_memcpy_001d5cb0)(lVar11,uVar3,uVar13);
  plVar20 = local_248;
  dVar23 = local_608;
  puVar16 = PTR_bcmp_001d5ce8;
  local_260 = *(char *)(local_5c0 + 0x138);
  local_25f = *(char *)(local_5c0 + 0x139);
  local_388 = local_5a8;
  local_398 = local_5b8;
  pcStack_390 = pcStack_5b0;
  local_350 = (double)local_648;
  uStack_348 = uStack_640;
  local_370 = local_508;
  local_380 = local_518;
  pcStack_378 = pcStack_510;
  local_340 = local_568;
  uStack_338 = uStack_560;
  local_330 = *(double *)(local_5c0 + 0x68);
  dStack_328 = *(double *)(local_5c0 + 0x70);
  local_320 = *(double *)(local_5c0 + 0x78);
  puStack_318 = *(undefined1 **)(local_5c0 + 0x80);
  local_310 = *(double *)(local_5c0 + 0x88);
  dStack_308 = *(double *)(local_5c0 + 0x90);
  local_300 = *(double *)(local_5c0 + 0x98);
  dStack_2f8 = *(double *)(local_5c0 + 0xa0);
  local_2f0 = *(double *)(local_5c0 + 0xa8);
  dStack_2e8 = *(double *)(local_5c0 + 0xb0);
  local_2e0 = *(double *)(local_5c0 + 0xb8);
  dStack_2d8 = *(double *)(local_5c0 + 0xc0);
  local_2d0 = *(double **)(local_5c0 + 200);
  pcStack_2c8 = *(code **)(local_5c0 + 0xd0);
  local_2c0 = *(double ***)(local_5c0 + 0xd8);
  puStack_2b8 = *(undefined1 **)(local_5c0 + 0xe0);
  local_2b0 = *(undefined8 *)(local_5c0 + 0xe8);
  uStack_2a8 = *(undefined8 *)(local_5c0 + 0xf0);
  local_2a0 = *(undefined8 *)(local_5c0 + 0xf8);
  dStack_298 = *(double *)(local_5c0 + 0x100);
  local_290 = *(double *)(local_5c0 + 0x108);
  dStack_288 = *(double *)(local_5c0 + 0x110);
  local_280 = *(double *)(local_5c0 + 0x118);
  uStack_278 = *(undefined8 *)(local_5c0 + 0x120);
  local_270 = *(undefined8 *)(local_5c0 + 0x128);
  dStack_268 = *(double *)(local_5c0 + 0x130);
  local_368 = uVar19;
  local_360 = lVar11;
  local_358 = uVar2;
  if (local_240 != 0) {
    uStack_610 = 0;
    local_5c8 = (double **)((long)local_608 + 0x48);
    local_648 = *(double **)((long)local_608 + 0x50);
    lVar11 = *(long *)((long)local_608 + 0x58);
    lVar17 = local_240 * 0x18;
    lVar21 = 0;
    local_618 = pdVar26;
    do {
      if ((*(long *)((long)plVar20 + lVar21 + 0x10) == lVar11) &&
         (iVar10 = (*(code *)puVar16)(*(undefined8 *)((long)plVar20 + lVar21 + 8),local_648,lVar11),
         iVar10 == 0)) {
                    /* try { // try from 00146b48 to 00146b59 has its CatchHandler @ 00148cfe */
        (*(code *)PTR_trade_codes_001d5da0)(&local_408,param_3);
        lVar17 = local_3f8;
        local_568 = local_400;
        if (local_3f8 != 0) {
          local_620 = *(code **)((long)dVar23 + 8);
          lVar21 = *(long *)((long)dVar23 + 0x10);
          lVar4 = local_3f8 * 0x18;
          lVar22 = 0;
          goto LAB_00146bad;
        }
        pcVar12 = (code *)0x0;
        goto LAB_00146dd2;
      }
      lVar21 = lVar21 + 0x18;
    } while (lVar17 != lVar21);
  }
  pcVar12 = (code *)0x0;
  goto LAB_00146ca2;
  while (lVar22 = lVar22 + 0x18, lVar4 != lVar22) {
LAB_00146bad:
    if ((*(long *)((long)local_568 + lVar22 + 0x10) == lVar21) &&
       (iVar10 = (*(code *)puVar16)(*(undefined8 *)((long)local_568 + lVar22 + 8),local_620,lVar21),
       dVar23 = local_608, iVar10 == 0)) {
      cVar7 = *(char *)((long)local_608 + 0x94);
                    /* try { // try from 00146be5 to 00146c4b has its CatchHandler @ 00148cec */
      (*(code *)PTR_inst_start_time_sec_001d5da8)(param_3);
      cVar6 = (*(code *)PTR_is_trade_start_001d5db0)(param_3,cVar7);
      if (cVar6 != '\0') {
        cVar6 = (*(code *)PTR_is_trade_end_001d5db8)(param_3,cVar7);
        if (cVar6 != '\0') {
          if (cVar7 == '\0') {
            if ((char)local_548 != '\0') goto LAB_00146ed3;
          }
          else if (((ushort)((ulong)local_618 >> 0x10) >> 8 & 1) != 0) {
LAB_00146ed3:
                    /* try { // try from 00146ed3 to 00146eef has its CatchHandler @ 00148cec */
            pcVar12 = (code *)(*(code *)PTR_all_in_001d5dd0)(param_3,cVar7,(uint)local_618 & 1);
            goto LAB_00146d8a;
          }
        }
        (*(code *)PTR_clone_001d5d98)
                  (&local_5f0,dVar23,&PTR_s_strategies_comm_strategy_strateg_001d0258);
                    /* try { // try from 00146c4c to 00146c68 has its CatchHandler @ 00148c82 */
        (*(code *)PTR_clone_001d5d98)
                  (&local_3f0,local_5c8,&PTR_s_strategies_comm_strategy_strateg_001d0270);
                    /* try { // try from 00146c73 to 00146c84 has its CatchHandler @ 00148c7d */
        (*(code *)PTR_depth_001d5dc0)(&local_518,param_3,local_5e8);
        ppdVar5 = local_508;
        pdVar26 = local_518;
        if (local_518 == (double *)0x2) {
          pcVar12 = (code *)0x0;
        }
        else {
          local_568 = local_4f8;
          local_548 = local_4f0;
          local_620 = local_4d0;
          pcVar12 = (code *)0x0;
          if ((0.0 < (double)local_4d0) && (local_5f8 = local_480, 0.0 < (double)local_480)) {
                    /* try { // try from 00146e5c to 00146ea3 has its CatchHandler @ 00148c87 */
            local_628 = pcStack_510;
            local_630 = puStack_500;
            local_618 = local_4d8;
            local_5c8 = (double **)(*(code *)PTR_time_sec_001d5dc8)(param_3);
            if ((double)DAT_00117328 < (double)local_5c8 - (double)local_618) {
LAB_00146ebd:
              pcVar12 = (code *)0x0;
              goto LAB_001477e5;
            }
            if (local_25f == '\0') {
              auVar30 = (*(code *)PTR_signal_parameter_id_001d5dd8)(local_648,lVar11);
              uVar15 = 0;
              if ((auVar30 & (undefined1  [12])0x1) != (undefined1  [12])0x0) {
                uVar15 = auVar30._8_4_;
              }
              local_518 = (double *)CONCAT44(local_518._4_4_,uVar15);
              puVar16 = PTR_K1_MAP_G2_HIGH_001d5de0;
              if (*(long *)(PTR_K1_MAP_G2_HIGH_001d5de0 + 0x30) != 2) {
                    /* try { // try from 00148c17 to 00148c38 has its CatchHandler @ 00148c87 */
                once_cell::imp::OnceCell<T>::initialize
                          (PTR_K1_MAP_G2_HIGH_001d5de0,PTR_K1_MAP_G2_HIGH_001d5de0);
                puVar16 = PTR_K1_MAP_G2_HIGH_001d5de0;
              }
            }
            else {
                    /* try { // try from 00146f02 to 00146f7e has its CatchHandler @ 00148c87 */
              (*(code *)PTR_clone_001d5d98)
                        (&local_3c8,&local_5f0,&PTR_s_strategies_comm_strategy_strateg_001d0288);
              hashbrown::rustc_entry::_<impl_hashbrown::map::HashMap<K,V,S,A>>::rustc_entry
                        (&local_518,local_5c0 + 0x1a0,&local_3c8);
              if (local_518 == (double *)0x8000000000000000) {
                local_5b8 = (double *)0x8000000000000000;
              }
              else {
                local_598 = local_4f8;
                puStack_5a0 = puStack_500;
                local_5b8 = local_518;
              }
              local_5a8 = local_508;
              pcStack_5b0 = pcStack_510;
              uVar18 = std::collections::hash::map::Entry<K,V>::or_insert_with
                                 (uStack_278,local_270,&local_5b8);
                    /* try { // try from 0014702b to 00147055 has its CatchHandler @ 00148c87 */
              uVar13 = strategy_comm2::vol_spread_ratio::VolSpreadRatio::update
                                 (DAT_001173f8 * (double)local_5c8,local_5f8,local_620,uVar18);
              local_618 = extraout_XMM0_Qa;
              auVar30 = (*(code *)PTR_signal_parameter_id_001d5dd8)(local_648,lVar11);
              uVar15 = 0;
              if ((auVar30 & (undefined1  [12])0x1) != (undefined1  [12])0x0) {
                uVar15 = auVar30._8_4_;
              }
              local_518 = (double *)CONCAT44(local_518._4_4_,uVar15);
              puVar14 = PTR_K1_MAP_G2_HIGH_001d5de0;
              if ((double)local_618 <= dStack_268) {
                puVar14 = PTR_K1_MAP_G1_LOW_001d5df0;
              }
              puVar16 = PTR_K1_MAP_G2_HIGH_001d5de0;
              if ((uVar13 & 1) != 0) {
                puVar16 = puVar14;
              }
              if (*(long *)(puVar16 + 0x30) != 2) {
                once_cell::imp::OnceCell<T>::initialize(puVar16,puVar16);
              }
            }
            lVar11 = hashbrown::map::HashMap<K,V,S,A>::get_inner(puVar16,&local_518);
            local_648 = (double *)&DAT_00117328;
            if (lVar11 != 0) {
              local_648 = (double *)(lVar11 + 8);
            }
            local_648 = (double *)*local_648;
            local_550 = (double)local_648;
            cVar7 = strategy_comm2::Comm2Params::signal_mode(pcStack_390,local_388);
                    /* WARNING: Switch is manually overridden */
            switch(cVar7) {
            case '\0':
              pdStack_5d8 = (double *)(*(double *)((long)dVar23 + 0x70) * local_350);
              break;
            case '\x01':
              pdStack_5d8 = *(double **)((long)dVar23 + 0x78);
              break;
            case '\x02':
              pdStack_5d8 = *(double **)((long)dVar23 + 0x70);
              break;
            case '\x03':
              dVar23 = *(double *)((long)dVar23 + 0x70);
              local_608 = (double)(~-(ulong)NAN(dVar23) &
                                   (_s__00117070 & (ulong)dVar23 | ram0x00116f80) |
                                  DAT_001173b0 & -(ulong)NAN(dVar23));
              uStack_600 = _UNK_00116f88;
              dVar23 = (double)(*(code *)PTR_pow_001d5df8)
                                         ((ulong)dVar23 & _DAT_00116ac0,
                                          (double)DAT_00117328 / (double)local_648);
              pdStack_5d8 = (double *)(dVar23 * local_608);
            }
            if (((((ulong)pdVar26 & 1) != 0) && (((ulong)ppdVar5 & 1) != 0)) &&
               (DAT_00117360 <
                (double)((ulong)(((double)local_628 - (double)local_630) /
                                ((double)local_628 + (double)local_630)) & _DAT_00116ac0)))
            goto LAB_00146ebd;
                    /* try { // try from 001471c0 to 0014735f has its CatchHandler @ 00148c87 */
            local_608 = (double)(*(code *)PTR_time_sec_001d5dc8)(param_3);
            local_648 = local_238;
            dStack_570 = (double)(*(code *)PTR_spread_bp_001d5e00)(param_3,local_5e8,local_5e0);
            pdStack_540 = (double *)(*(code *)PTR_fee_bp_001d5e08)(param_3,local_5e8,local_5e0);
            local_628 = (code *)(*(code *)PTR_contract_mult_001d5e10)(param_3,local_5e8,local_5e0);
            local_630 = (undefined1 *)
                        (*(code *)PTR_price_step_001d5e18)(param_3,local_5e8,local_5e0);
            uStack_538 = (*(code *)PTR_vol_step_001d5e20)(param_3,local_5e8,local_5e0);
            (*(code *)PTR_position_001d5e28)(param_3,local_5e8,local_5e0);
            local_618 = extraout_XMM1_Qa;
            uStack_610 = extraout_XMM1_Qb;
            dStack_5d0 = (double)(*(code *)PTR_position_holding_secs_001d5e30)
                                           (param_3,local_5e8,local_5e0);
            local_648 = (double *)((double)local_648 / DAT_001173f8);
            dStack_5d0 = dStack_5d0 + (double)local_648;
            bVar8 = (*(code *)PTR_is_should_lock_001d5e38)(param_3,local_5e8,local_5e0);
            local_518 = local_2d0;
            pcStack_510 = pcStack_2c8;
            local_508 = local_2c0;
            puStack_500 = puStack_2b8;
            strategy_comm2::signal_trigger::dynamic_threshold
                      (dStack_5d0,local_2b0,uStack_2a8,local_2a0,&pdStack_70,&local_518);
            uStack_64a = strategy_comm2::Comm2Params::signal_trigger_mode(pcStack_378,local_370);
            (*(code *)PTR_clone_001d5d98)
                      (&local_5b8,&local_5f0,&PTR_s_strategies_comm_strategy_strateg_001d02a0);
                    /* try { // try from 00147360 to 0014737f has its CatchHandler @ 00148c58 */
            (*(code *)PTR_clone_001d5d98)
                      (&local_518,&local_3f0,&PTR_s_strategies_comm_strategy_strateg_001d02b8);
            ppdStack_3b8 = local_5a8;
            local_3c8 = local_5b8;
            pcStack_3c0 = pcStack_5b0;
            pdStack_3b0 = local_518;
            pcStack_3a8 = pcStack_510;
            ppdStack_3a0 = local_508;
                    /* try { // try from 001473d1 to 001478b6 has its CatchHandler @ 00148c87 */
            hashbrown::rustc_entry::_<impl_hashbrown::map::HashMap<K,V,S,A>>::rustc_entry
                      (&local_518,local_5c0 + 0x140,&local_3c8);
            if (local_518 == (double *)0x8000000000000000) {
              local_5b8 = (double *)0x8000000000000000;
            }
            else {
              pdStack_588 = pdStack_4e8;
              pcStack_580 = pcStack_4e0;
              local_598 = local_4f8;
              puStack_590 = local_4f0;
              puStack_5a0 = puStack_500;
              local_5b8 = local_518;
            }
            local_5a8 = local_508;
            pcStack_5b0 = pcStack_510;
            local_518 = (double *)&uStack_64a;
            pcStack_510 = (code *)&local_368;
            local_508 = &pdStack_70;
            lVar11 = std::collections::hash::map::Entry<K,V>::or_insert_with(&local_5b8,&local_518);
            local_608 = local_608 + (double)local_648;
            strategy_comm2::signal_trigger::SignalTrigger::update_score
                      (local_608,pdStack_5d8,0,0,lVar11,0);
            *(undefined8 *)(lVar11 + 0x50) = uStack_60;
            *(undefined8 *)(lVar11 + 0x58) = uStack_58;
            *(double **)(lVar11 + 0x40) = pdStack_70;
            *(undefined8 *)(lVar11 + 0x48) = uStack_68;
                    /* WARNING: Switch is manually overridden */
            switch(uStack_64a) {
            case 0:
              if (cVar7 == '\0') {
                strategy_comm2::signal_trigger::SignalTrigger::point_signal_trigger_pv1_spread
                          (uStack_348,dStack_570,&local_518,lVar11);
                goto joined_r0x001475e5;
              }
              if (cVar7 == '\x03') {
                strategy_comm2::signal_trigger::SignalTrigger::point_signal_trigger_pv4
                          (uStack_348,pdStack_540,dStack_570,&local_518,lVar11);
                pcVar12 = pcStack_510;
                local_518._0_1_ = (char)local_518;
                if ((char)local_518 == '\x05') goto LAB_001477e5;
              }
              else {
                dVar23 = *(double *)(lVar11 + 0x38);
                if (*(double *)(lVar11 + 0x40) <= dVar23) {
                  local_518._0_1_ = '\0';
                }
                else {
                  local_518._0_1_ = '\x03';
                  if ((dVar23 < *(double *)(lVar11 + 0x58)) &&
                     (local_518._0_1_ = '\x02', *(double *)(lVar11 + 0x50) < dVar23)) {
                    local_518._0_1_ = (*(double *)(lVar11 + 0x48) < dVar23) * '\x03' + '\x01';
                  }
                }
              }
              goto LAB_0014765d;
            case 1:
              strategy_comm2::signal_trigger::SignalTrigger::windows_mean_trigger
                        (local_340,&local_518,lVar11);
              break;
            case 2:
              strategy_comm2::signal_trigger::SignalTrigger::windows_std_trigger
                        (local_340,&local_518,lVar11);
              break;
            case 3:
              strategy_comm2::signal_trigger::SignalTrigger::windows_quantile_trigger
                        (uStack_338,local_340,&local_518,lVar11);
              break;
            case 4:
              strategy_comm2::signal_trigger::SignalTrigger::windows_sharpe_trigger
                        (local_340,&local_518,lVar11);
              break;
            case 5:
              strategy_comm2::signal_trigger::SignalTrigger::windows_rsi_trigger
                        (local_340,&local_518,lVar11);
            }
joined_r0x001475e5:
            pcVar12 = pcStack_510;
            if ((char)local_518 != '\x05') {
LAB_0014765d:
              cStack_649 = (char)local_518;
              local_518 = &local_5f0;
              pcStack_510 = _<alloc::string::String_as_core::fmt::Display>::fmt;
              local_508 = &pdStack_5d8;
              puStack_500 = PTR_fmt_001d5e40;
              local_4f8 = &dStack_570;
              local_4f0 = PTR_fmt_001d5e40;
              pdStack_4e8 = &local_550;
              pcStack_4e0 = (code *)PTR_fmt_001d5e40;
              local_4d8 = (double *)&cStack_649;
              local_4d0 = _<core::option::Option<T>as_core::fmt::Debug>::fmt;
              local_5b8 = (double *)&UNK_001d02d0;
              pcStack_5b0 = (code *)&DAT_00000005;
              local_598 = (double *)&UNK_00117c88;
              puStack_590 = &DAT_00000005;
              puStack_5a0 = &DAT_00000005;
              local_5a8 = &local_518;
              (*(code *)PTR_format_inner_001d5d80)(auStack_50,&local_5b8);
              future_backtest_sdk::context::StrategyContext::log_debug(param_3,auStack_50);
              uVar9 = (*(code *)PTR_margin_filter_001d5e48)(param_3,cStack_649);
              dVar23 = dStack_288;
              if (((dStack_298 <= dStack_5d0) && (0.0 <= dStack_298)) && (0.0 <= local_290)) {
                dVar23 = local_290 - dStack_298;
                if (local_290 - dStack_298 <= DAT_00117318) {
                  dVar23 = DAT_00117318;
                }
                pdVar26 = (double *)((dStack_5d0 - dStack_298) / dVar23);
                if ((double)DAT_00117328 <= (double)pdVar26) {
                  pdVar26 = DAT_00117328;
                }
                dVar23 = dStack_288 + (double)pdVar26 * local_280;
              }
              pcVar12 = (code *)(*(code *)PTR_cancel_by_pending_ts_001d5e50)(dVar23,param_3,1);
              if (pcVar12 == (code *)0x0) {
                cVar7 = (*(code *)PTR_impact_block_check_001d5e58)
                                  (local_608,local_5f8,local_620,param_3,uVar9);
                plVar20 = &local_3f0;
                if (local_240 != 0) {
                  plVar20 = local_248;
                }
                puVar16 = &UNK_001d0338;
                if (local_240 == 0) {
                  puVar16 = &UNK_001d0320;
                }
                (*(code *)PTR_clone_001d5d98)(&dStack_530,plVar20,puVar16);
                local_608 = local_330;
                uStack_600 = 0;
                local_648 = (double *)dStack_328;
                uStack_640 = 0;
                dStack_3d8 = local_320;
                uStack_3d0 = 0;
                if ((cVar7 != '\x04') && (local_260 != '\0')) {
                  lVar17 = local_5c0 + 0x170;
                    /* try { // try from 00147904 to 00148b6d has its CatchHandler @ 00148c3e */
                  lVar21 = hashbrown::map::HashMap<K,V,S,A>::get_inner(lVar17,&local_5f0);
                  if (lVar21 != 0) {
                    if ((dStack_308 <= 0.0) ||
                       (((double)local_5c8 - *(double *)(lVar21 + 0x28)) * DAT_001173f8 < dStack_308
                       )) goto override_jmp_00147974_case_4;
                    hashbrown::map::HashMap<K,V,S,A>::remove(&local_518,lVar17,&local_5f0);
                  }
                }
                    /* WARNING: Switch is manually overridden */
                switch(cVar7) {
                case '\0':
                  if ((_DAT_00117408 <= (double)local_618) ||
                     (local_310 / DAT_001173f8 <= dStack_5d0)) {
                    pcVar12 = (code *)(*(code *)PTR_cancel_all_001d5e60)(param_3);
                    if (pcVar12 == (code *)0x0) {
                      if ((DAT_00117318 < (double)((ulong)local_608 & _DAT_00116ac0)) &&
                         (DAT_00117318 < (double)(_DAT_00116ac0 & (ulong)local_2d0))) {
                        dVar23 = (double)((ulong)((double)pdStack_5d8 / (double)local_2d0) &
                                         _DAT_00116ac0) + _s__001172b8;
                        if (dVar23 <= 0.0) {
                          dVar23 = 0.0;
                        }
                        dVar27 = (double)local_648 + local_608 * dVar23;
                        dVar23 = dStack_3d8;
                        if (dVar27 <= dStack_3d8) {
                          dVar23 = dVar27;
                        }
                        local_648 = (double *)
                                    (-(ulong)NAN(dVar27) & (ulong)dStack_3d8 |
                                    ~-(ulong)NAN(dVar27) & (ulong)dVar23);
                        uStack_640 = uStack_3d0;
                      }
                      local_608 = (double)(*(code *)PTR_round_with_step_f64_001d5e68)
                                                    (((double)local_648 + (double)DAT_00117328) *
                                                     (double)local_620,local_630,1);
                      pdVar26 = local_618;
                      if ((double)local_618 <= 0.0) {
                        pdVar26 = (double *)0x0;
                      }
                      dVar27 = (double)(~-(ulong)(local_2f0 < 0.0) & (ulong)local_2f0 |
                                       -(ulong)(local_2f0 < 0.0) & _DAT_001172d8) - (double)pdVar26;
                      dVar29 = ((double)(~-(ulong)(dStack_2e8 < 0.0) & (ulong)dStack_2e8 |
                                        -(ulong)(dStack_2e8 < 0.0) & _DAT_001172d8) /
                               (double)local_628) / (double)local_620 - (double)pdVar26;
                      dVar23 = dVar29;
                      if (dVar27 <= dVar29) {
                        dVar23 = dVar27;
                      }
                      pdVar28 = (double *)
                                (~-(ulong)NAN(dVar27) & (ulong)dVar23 |
                                -(ulong)NAN(dVar27) & (ulong)dVar29);
                      pdVar26 = (double *)
                                (~-(ulong)(local_300 < 0.0) & (ulong)local_300 |
                                -(ulong)(local_300 < 0.0) & _DAT_001172d8);
                      pdVar24 = (double *)
                                (((double)(~-(ulong)(dStack_2f8 < 0.0) & (ulong)dStack_2f8 |
                                          -(ulong)(dStack_2f8 < 0.0) & _DAT_001172d8) /
                                 (double)local_628) / (double)local_620);
                      if ((double)pdVar24 <= (double)DAT_00117328) {
                        pdVar24 = DAT_00117328;
                      }
                      if ((double)pdVar24 <= (double)pdVar26) {
                        pdVar26 = pdVar24;
                      }
                      pdVar25 = (double *)
                                (~-(ulong)(local_2e0 < 0.0) & (ulong)local_2e0 |
                                -(ulong)(local_2e0 < 0.0) & _DAT_001172d8);
                      pdVar24 = (double *)
                                (((double)(~-(ulong)(dStack_2d8 < 0.0) & (ulong)dStack_2d8 |
                                          _DAT_001172d8 & -(ulong)(dStack_2d8 < 0.0)) /
                                 (double)local_628) / (double)local_620);
                      if ((double)pdVar24 <= (double)DAT_00117328) {
                        pdVar24 = DAT_00117328;
                      }
                      if ((double)pdVar24 <= (double)pdVar25) {
                        pdVar25 = pdVar24;
                      }
                      pdVar24 = local_618;
                      if (0.0 <= (double)local_618) {
                        pdVar24 = (double *)0x0;
                      }
                      if ((double)pdVar26 <= (double)pdVar28) {
                        pdVar28 = pdVar26;
                      }
                      if ((double)((ulong)pdVar24 ^ _s__00117070) <= (double)pdVar25) {
                        pdVar25 = (double *)((ulong)pdVar24 ^ _s__00117070);
                      }
                      dVar23 = (double)pdVar25 + (double)pdVar28;
                      if (dVar23 <= 0.0) {
                        dVar23 = 0.0;
                      }
                      local_648 = (double *)
                                  (*(code *)PTR_round_with_step_f64_001d5e68)(dVar23,uStack_538,1);
                      uStack_640 = extraout_XMM0_Qb;
                      if ((double)(_DAT_00116ac0 & (ulong)local_648) <= DAT_00117318) {
override_jmp_00147974_case_4:
                        if (dStack_530 != 0.0) {
                          (*(code *)PTR___rust_dealloc_001d5c50)(uStack_528,dStack_530,1);
                        }
                        if (local_568 != (double *)0x0) {
                          (*(code *)PTR___rust_dealloc_001d5c50)(local_548,local_568,1);
                        }
                        if (local_3f0 != 0) {
                          (*(code *)PTR___rust_dealloc_001d5c50)(local_3e8,local_3f0,1);
                        }
                        if (local_5f0 != 0.0) {
                          (*(code *)PTR___rust_dealloc_001d5c50)(local_5e8,local_5f0,1);
                        }
                        core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&local_408)
                        ;
                        core::ptr::drop_in_place<strategy_comm2::Comm2Params>(&local_398);
                        core::ptr::drop_in_place<future_backtest_sdk::types::StrategyPara>
                                  (&local_250);
                        return (code *)0x0;
                      }
                      local_618 = pdStack_5d8;
                      local_628 = *(code **)(lVar11 + 0x40);
                      local_630 = puStack_318;
                      local_518 = &dStack_570;
                      pcStack_510 = (code *)PTR_fmt_001d5e40;
                      local_508 = &pdStack_540;
                      puStack_500 = PTR_fmt_001d5e40;
                      local_4f8 = &local_550;
                      local_4f0 = PTR_fmt_001d5e40;
                      pdStack_4e8 = &dStack_530;
                      pcStack_4e0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                      local_4d8 = &dStack_5d0;
                      local_4d0 = (code *)PTR_fmt_001d5e40;
                      local_5b8 = (double *)&UNK_001d0350;
                      pcStack_5b0 = (code *)&DAT_00000005;
                      local_598 = (double *)0x0;
                      puStack_5a0 = &DAT_00000005;
                      local_5a8 = &local_518;
                      (*(code *)PTR_format_inner_001d5d80)(&uStack_d0,&local_5b8);
                      uStack_130 = 0x700;
                      dStack_160 = local_608;
                      dStack_158 = (double)local_648;
                      pcStack_150 = local_620;
                      pdStack_148 = local_618;
                      pcStack_140 = local_628;
                      puStack_138 = local_630;
                      uStack_178 = uStack_d0;
                      uStack_170 = uStack_c8;
                      uStack_168 = uStack_c0;
                      pcVar12 = (code *)(*(code *)PTR_place_order_iap_001d5e70)(param_3,&uStack_178)
                      ;
                      if (pcVar12 == (code *)0x0) {
                        if (local_260 == '\x01') {
                          (*(code *)PTR_clone_001d5d98)(&local_3c8,&local_5f0,&UNK_001d03a0);
                          local_5b8 = local_5f8;
                          pcStack_5b0 = local_620;
                          local_5a8 = local_5c8;
                          hashbrown::map::HashMap<K,V,S,A>::insert
                                    (&local_518,local_5c0 + 0x170,&local_3c8,&local_5b8);
                        }
                        goto override_jmp_00147974_case_4;
                      }
                    }
                  }
                  else {
LAB_0014869d:
                    pcVar12 = (code *)0x0;
                  }
                  break;
                case '\x01':
                  if ((DAT_00117318 < (double)local_618) && (dStack_5d0 < local_310 / DAT_001173f8))
                  goto LAB_0014869d;
                  pcVar12 = (code *)(*(code *)PTR_cancel_all_001d5e60)(param_3);
                  if (pcVar12 == (code *)0x0) {
                    if ((double)local_618 <= 0.0) goto override_jmp_00147974_case_4;
                    if ((DAT_00117318 < (double)((ulong)local_608 & _DAT_00116ac0)) &&
                       (DAT_00117318 < (double)(_DAT_00116ac0 & (ulong)pcStack_2c8))) {
                      dVar23 = (double)((ulong)((double)pdStack_5d8 / (double)pcStack_2c8) &
                                       _DAT_00116ac0) + _s__001172b8;
                      if (dVar23 <= 0.0) {
                        dVar23 = 0.0;
                      }
                      dVar27 = (double)local_648 + local_608 * dVar23;
                      dVar23 = dStack_3d8;
                      if (dVar27 <= dStack_3d8) {
                        dVar23 = dVar27;
                      }
                      local_648 = (double *)
                                  (-(ulong)NAN(dVar27) & (ulong)dStack_3d8 |
                                  ~-(ulong)NAN(dVar27) & (ulong)dVar23);
                      uStack_640 = uStack_3d0;
                    }
                    local_608 = (double)(*(code *)PTR_round_with_step_f64_001d5e68)
                                                  (((double)DAT_00117328 - (double)local_648) *
                                                   (double)local_5f8,local_630,1);
                    uVar13 = -(ulong)(local_2e0 < (double)((ulong)local_2e0 ^ _s__00117070));
                    dVar29 = (double)(uVar13 & _DAT_001172e0 |
                                     ~uVar13 & ((ulong)local_2e0 ^ _s__00117070));
                    uVar13 = -(ulong)(dStack_2d8 < (double)((ulong)dStack_2d8 ^ _s__00117070));
                    dVar27 = ((double)(uVar13 & _DAT_001172e0 |
                                      ~uVar13 & ((ulong)dStack_2d8 ^ _s__00117070)) /
                             (double)local_628) / (double)local_5f8;
                    dVar23 = dVar27;
                    if (dVar27 <= dVar29) {
                      dVar23 = dVar29;
                    }
                    dVar23 = (double)(~-(ulong)NAN(dVar29) & (ulong)dVar23 |
                                     -(ulong)NAN(dVar29) & (ulong)dVar27);
                    pdVar26 = local_618;
                    if ((double)local_618 <= 0.0) {
                      pdVar26 = (double *)0x0;
                    }
                    if (dVar23 <= (double)((ulong)pdVar26 ^ _s__00117070)) {
                      dVar23 = (double)((ulong)pdVar26 ^ _s__00117070);
                    }
                    local_648 = (double *)
                                (*(code *)PTR_round_with_step_f64_001d5e68)(dVar23,uStack_538,1);
                    uStack_640 = extraout_XMM0_Qb_01;
                    if ((double)(_DAT_00116ac0 & (ulong)local_648) <= DAT_00117318)
                    goto override_jmp_00147974_case_4;
                    local_618 = pdStack_5d8;
                    local_628 = *(code **)(lVar11 + 0x48);
                    local_630 = puStack_318;
                    local_518 = &dStack_570;
                    pcStack_510 = (code *)PTR_fmt_001d5e40;
                    local_508 = &pdStack_540;
                    puStack_500 = PTR_fmt_001d5e40;
                    local_4f8 = &local_550;
                    local_4f0 = PTR_fmt_001d5e40;
                    pdStack_4e8 = &dStack_530;
                    pcStack_4e0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                    local_4d8 = &dStack_5d0;
                    local_4d0 = (code *)PTR_fmt_001d5e40;
                    local_5b8 = (double *)&UNK_001d0350;
                    pcStack_5b0 = (code *)&DAT_00000005;
                    local_598 = (double *)0x0;
                    puStack_5a0 = &DAT_00000005;
                    local_5a8 = &local_518;
                    (*(code *)PTR_format_inner_001d5d80)(&uStack_a0,&local_5b8);
                    cStack_1cf = (bVar8 != 0) * '\x03' + '\x05';
                    uStack_1d0 = 1;
                    dStack_200 = local_608;
                    dStack_1f8 = (double)local_648;
                    pdStack_1f0 = local_5f8;
                    pdStack_1e8 = local_618;
                    pcStack_1e0 = local_628;
                    puStack_1d8 = local_630;
                    uStack_218 = uStack_a0;
                    uStack_210 = uStack_98;
                    uStack_208 = uStack_90;
                    pcVar12 = (code *)(*(code *)PTR_place_order_iap_001d5e70)(param_3,&uStack_218);
                    if (pcVar12 == (code *)0x0) {
                      if (local_260 == '\x01') {
                        (*(code *)PTR_clone_001d5d98)(&local_3c8,&local_5f0,&UNK_001d03b8);
                        local_5b8 = local_5f8;
                        pcStack_5b0 = local_620;
                        local_5a8 = local_5c8;
                        hashbrown::map::HashMap<K,V,S,A>::insert
                                  (&local_518,local_5c0 + 0x170,&local_3c8,&local_5b8);
                      }
                      goto override_jmp_00147974_case_4;
                    }
                  }
                  break;
                case '\x02':
                  if ((DAT_00117318 < (double)local_618) && (dStack_5d0 < local_310 / DAT_001173f8))
                  goto LAB_0014869d;
                  pcVar12 = (code *)(*(code *)PTR_cancel_all_001d5e60)(param_3);
                  if (pcVar12 == (code *)0x0) {
                    if ((DAT_00117318 < (double)((ulong)local_608 & _DAT_00116ac0)) &&
                       (DAT_00117318 < (double)(_DAT_00116ac0 & (ulong)local_2c0))) {
                      dVar23 = (double)((ulong)((double)pdStack_5d8 / (double)local_2c0) &
                                       _DAT_00116ac0) + _s__001172b8;
                      if (dVar23 <= 0.0) {
                        dVar23 = 0.0;
                      }
                      dVar27 = (double)local_648 + local_608 * dVar23;
                      dVar23 = dStack_3d8;
                      if (dVar27 <= dStack_3d8) {
                        dVar23 = dVar27;
                      }
                      local_648 = (double *)
                                  (-(ulong)NAN(dVar27) & (ulong)dStack_3d8 |
                                  ~-(ulong)NAN(dVar27) & (ulong)dVar23);
                      uStack_640 = uStack_3d0;
                    }
                    local_608 = (double)(*(code *)PTR_round_with_step_f64_001d5e68)
                                                  (((double)DAT_00117328 - (double)local_648) *
                                                   (double)local_5f8,local_630,1);
                    uVar13 = -(ulong)(local_2f0 < (double)((ulong)local_2f0 ^ _s__00117070));
                    pdVar26 = local_618;
                    if (0.0 <= (double)local_618) {
                      pdVar26 = (double *)0x0;
                    }
                    dVar27 = (double)(uVar13 & _DAT_001172e0 |
                                     ~uVar13 & ((ulong)local_2f0 ^ _s__00117070)) - (double)pdVar26;
                    uVar13 = -(ulong)(dStack_2e8 < (double)((ulong)dStack_2e8 ^ _s__00117070));
                    dVar29 = ((double)(uVar13 & _DAT_001172e0 |
                                      ~uVar13 & ((ulong)dStack_2e8 ^ _s__00117070)) /
                             (double)local_628) / (double)local_5f8 - (double)pdVar26;
                    dVar23 = dVar29;
                    if (dVar29 <= dVar27) {
                      dVar23 = dVar27;
                    }
                    dVar23 = (double)(~-(ulong)NAN(dVar27) & (ulong)dVar23 |
                                     -(ulong)NAN(dVar27) & (ulong)dVar29);
                    pdVar28 = (double *)
                              (~-(ulong)(local_300 < 0.0) & (ulong)local_300 |
                              -(ulong)(local_300 < 0.0) & _DAT_001172d8);
                    pdVar26 = (double *)
                              (((double)(~-(ulong)(dStack_2f8 < 0.0) & (ulong)dStack_2f8 |
                                        -(ulong)(dStack_2f8 < 0.0) & _DAT_001172d8) /
                               (double)local_628) / (double)local_5f8);
                    if ((double)pdVar26 <= (double)DAT_00117328) {
                      pdVar26 = DAT_00117328;
                    }
                    if ((double)pdVar26 <= (double)pdVar28) {
                      pdVar28 = pdVar26;
                    }
                    pdVar24 = (double *)
                              (~-(ulong)(local_2e0 < 0.0) & (ulong)local_2e0 |
                              -(ulong)(local_2e0 < 0.0) & _DAT_001172d8);
                    pdVar26 = (double *)
                              (((double)(~-(ulong)(dStack_2d8 < 0.0) & (ulong)dStack_2d8 |
                                        _DAT_001172d8 & -(ulong)(dStack_2d8 < 0.0)) /
                               (double)local_628) / (double)local_5f8);
                    if ((double)pdVar26 <= (double)DAT_00117328) {
                      pdVar26 = DAT_00117328;
                    }
                    if ((double)pdVar26 <= (double)pdVar24) {
                      pdVar24 = pdVar26;
                    }
                    if (dVar23 <= (double)((ulong)pdVar28 ^ _s__00117070)) {
                      dVar23 = (double)((ulong)pdVar28 ^ _s__00117070);
                    }
                    pdVar26 = local_618;
                    if ((double)local_618 <= 0.0) {
                      pdVar26 = (double *)0x0;
                    }
                    if ((double)pdVar26 <= (double)pdVar24) {
                      pdVar24 = pdVar26;
                    }
                    dVar23 = dVar23 - (double)pdVar24;
                    if (0.0 <= dVar23) {
                      dVar23 = 0.0;
                    }
                    local_648 = (double *)
                                (*(code *)PTR_round_with_step_f64_001d5e68)(dVar23,uStack_538,1);
                    uStack_640 = extraout_XMM0_Qb_02;
                    if ((double)(_DAT_00116ac0 & (ulong)local_648) <= DAT_00117318)
                    goto override_jmp_00147974_case_4;
                    local_618 = pdStack_5d8;
                    local_628 = *(code **)(lVar11 + 0x50);
                    local_630 = puStack_318;
                    local_518 = &dStack_570;
                    pcStack_510 = (code *)PTR_fmt_001d5e40;
                    local_508 = &pdStack_540;
                    puStack_500 = PTR_fmt_001d5e40;
                    local_4f8 = &local_550;
                    local_4f0 = PTR_fmt_001d5e40;
                    pdStack_4e8 = &dStack_530;
                    pcStack_4e0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                    local_4d8 = &dStack_5d0;
                    local_4d0 = (code *)PTR_fmt_001d5e40;
                    local_5b8 = (double *)&UNK_001d0350;
                    pcStack_5b0 = (code *)&DAT_00000005;
                    local_598 = (double *)0x0;
                    puStack_5a0 = &DAT_00000005;
                    local_5a8 = &local_518;
                    (*(code *)PTR_format_inner_001d5d80)(&uStack_b8,&local_5b8);
                    uStack_e0 = 0x802;
                    dStack_110 = local_608;
                    dStack_108 = (double)local_648;
                    pdStack_100 = local_5f8;
                    pdStack_f8 = local_618;
                    pcStack_f0 = local_628;
                    puStack_e8 = local_630;
                    uStack_128 = uStack_b8;
                    uStack_120 = uStack_b0;
                    uStack_118 = uStack_a8;
                    pcVar12 = (code *)(*(code *)PTR_place_order_iap_001d5e70)(param_3,&uStack_128);
                    if (pcVar12 == (code *)0x0) {
                      if (local_260 == '\x01') {
                        (*(code *)PTR_clone_001d5d98)(&local_3c8,&local_5f0,&UNK_001d03d0);
                        local_5b8 = local_5f8;
                        pcStack_5b0 = local_620;
                        local_5a8 = local_5c8;
                        hashbrown::map::HashMap<K,V,S,A>::insert
                                  (&local_518,local_5c0 + 0x170,&local_3c8,&local_5b8);
                      }
                      goto override_jmp_00147974_case_4;
                    }
                  }
                  break;
                case '\x03':
                  if (((double)local_618 < _DAT_00117408) && (dStack_5d0 < local_310 / DAT_001173f8)
                     ) goto LAB_0014869d;
                  pcVar12 = (code *)(*(code *)PTR_cancel_all_001d5e60)(param_3);
                  if (pcVar12 == (code *)0x0) {
                    if (0.0 <= (double)local_618) goto override_jmp_00147974_case_4;
                    if ((DAT_00117318 < (double)((ulong)local_608 & _DAT_00116ac0)) &&
                       (DAT_00117318 < (double)(_DAT_00116ac0 & (ulong)puStack_2b8))) {
                      dVar23 = (double)((ulong)((double)pdStack_5d8 / (double)puStack_2b8) &
                                       _DAT_00116ac0) + _s__001172b8;
                      if (dVar23 <= 0.0) {
                        dVar23 = 0.0;
                      }
                      dVar27 = (double)local_648 + local_608 * dVar23;
                      dVar23 = dStack_3d8;
                      if (dVar27 <= dStack_3d8) {
                        dVar23 = dVar27;
                      }
                      local_648 = (double *)
                                  (-(ulong)NAN(dVar27) & (ulong)dStack_3d8 |
                                  ~-(ulong)NAN(dVar27) & (ulong)dVar23);
                      uStack_640 = uStack_3d0;
                    }
                    local_608 = (double)(*(code *)PTR_round_with_step_f64_001d5e68)
                                                  (((double)local_648 + (double)DAT_00117328) *
                                                   (double)local_620,local_630,1);
                    dVar23 = (double)(~-(ulong)(local_2e0 < 0.0) & (ulong)local_2e0 |
                                     -(ulong)(local_2e0 < 0.0) & _DAT_001172d8);
                    dVar29 = ((double)(~-(ulong)(dStack_2d8 < 0.0) & (ulong)dStack_2d8 |
                                      _DAT_001172d8 & -(ulong)(dStack_2d8 < 0.0)) /
                             (double)local_628) / (double)local_620;
                    dVar27 = dVar29;
                    if (dVar23 <= dVar29) {
                      dVar27 = dVar23;
                    }
                    dVar23 = (double)(~-(ulong)NAN(dVar23) & (ulong)dVar27 |
                                     -(ulong)NAN(dVar23) & (ulong)dVar29);
                    pdVar26 = local_618;
                    if (0.0 <= (double)local_618) {
                      pdVar26 = (double *)0x0;
                    }
                    if ((double)((ulong)pdVar26 ^ _s__00117070) <= dVar23) {
                      dVar23 = (double)((ulong)pdVar26 ^ _s__00117070);
                    }
                    local_648 = (double *)
                                (*(code *)PTR_round_with_step_f64_001d5e68)(dVar23,uStack_538,1);
                    uStack_640 = extraout_XMM0_Qb_00;
                    if ((double)(_DAT_00116ac0 & (ulong)local_648) <= DAT_00117318)
                    goto override_jmp_00147974_case_4;
                    local_618 = pdStack_5d8;
                    local_628 = *(code **)(lVar11 + 0x58);
                    local_630 = puStack_318;
                    local_518 = &dStack_570;
                    pcStack_510 = (code *)PTR_fmt_001d5e40;
                    local_508 = &pdStack_540;
                    puStack_500 = PTR_fmt_001d5e40;
                    local_4f8 = &local_550;
                    local_4f0 = PTR_fmt_001d5e40;
                    pdStack_4e8 = &dStack_530;
                    pcStack_4e0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                    local_4d8 = &dStack_5d0;
                    local_4d0 = (code *)PTR_fmt_001d5e40;
                    local_5b8 = (double *)&UNK_001d0350;
                    pcStack_5b0 = (code *)&DAT_00000005;
                    local_598 = (double *)0x0;
                    puStack_5a0 = &DAT_00000005;
                    local_5a8 = &local_518;
                    (*(code *)PTR_format_inner_001d5d80)(&uStack_88,&local_5b8);
                    bStack_17f = bVar8 | 6;
                    uStack_180 = 3;
                    dStack_1b0 = local_608;
                    dStack_1a8 = (double)local_648;
                    pcStack_1a0 = local_620;
                    pdStack_198 = local_618;
                    pcStack_190 = local_628;
                    puStack_188 = local_630;
                    uStack_1c8 = uStack_88;
                    uStack_1c0 = uStack_80;
                    uStack_1b8 = uStack_78;
                    pcVar12 = (code *)(*(code *)PTR_place_order_iap_001d5e70)(param_3,&uStack_1c8);
                    if (pcVar12 == (code *)0x0) {
                      if (local_260 == '\x01') {
                        (*(code *)PTR_clone_001d5d98)(&local_3c8,&local_5f0,&UNK_001d03e8);
                        local_5b8 = local_5f8;
                        pcStack_5b0 = local_620;
                        local_5a8 = local_5c8;
                        hashbrown::map::HashMap<K,V,S,A>::insert
                                  (&local_518,local_5c0 + 0x170,&local_3c8,&local_5b8);
                      }
                      goto override_jmp_00147974_case_4;
                    }
                  }
                  break;
                case '\x04':
                  goto override_jmp_00147974_case_4;
                }
                if (dStack_530 != 0.0) {
                  (*(code *)PTR___rust_dealloc_001d5c50)(uStack_528,dStack_530,1);
                }
              }
            }
          }
LAB_001477e5:
          if (local_568 != (double *)0x0) {
            (*(code *)PTR___rust_dealloc_001d5c50)(local_548,local_568,1);
          }
        }
        if (local_3f0 != 0) {
          (*(code *)PTR___rust_dealloc_001d5c50)(local_3e8,local_3f0,1);
        }
        if (local_5f0 != 0.0) {
          (*(code *)PTR___rust_dealloc_001d5c50)(local_5e8,local_5f0,1);
        }
        local_568 = local_400;
        lVar17 = local_3f8;
        goto LAB_00146d8a;
      }
      break;
    }
  }
  pcVar12 = (code *)0x0;
LAB_00146d8a:
  puVar16 = PTR___rust_dealloc_001d5c50;
  if (lVar17 != 0) {
    pdVar26 = local_568 + 1;
    do {
      if (pdVar26[-1] != 0.0) {
        (*(code *)puVar16)(*pdVar26,pdVar26[-1],1);
      }
      pdVar26 = pdVar26 + 3;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
LAB_00146dd2:
  if (local_408 != 0) {
    (*(code *)PTR___rust_dealloc_001d5c50)(local_568,local_408 * 0x18,8);
  }
LAB_00146ca2:
  if (local_398 != (double *)0x0) {
    (*(code *)PTR___rust_dealloc_001d5c50)(pcStack_390,local_398,1);
  }
  if (local_380 != (double *)0x0) {
    (*(code *)PTR___rust_dealloc_001d5c50)(pcStack_378,local_380,1);
  }
  if (local_368 != 0) {
    (*(code *)PTR___rust_dealloc_001d5c50)(local_360,local_368 << 3,8);
  }
  puVar16 = PTR___rust_dealloc_001d5c50;
  if (local_240 != 0) {
    plVar20 = local_248 + 1;
    lVar11 = local_240;
    do {
      if (plVar20[-1] != 0) {
        (*(code *)puVar16)(*plVar20,plVar20[-1],1);
      }
      plVar20 = plVar20 + 3;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  if (local_250 != 0) {
    (*(code *)PTR___rust_dealloc_001d5c50)(local_248,local_250 * 0x18,8);
  }
  return pcVar12;
}




// ELF address 0x0000000000055f60; fb_strategy_sdk_abi_version

undefined8 fb_strategy_sdk_abi_version(void)

{
  return 4;
}




// ELF address 0x0000000000055f70; fb_strategy_sdk_version_str

ulong fb_strategy_sdk_version_str(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = param_2 - 1;
  }
  uVar2 = 5;
  if (uVar1 < 5) {
    uVar2 = uVar1;
  }
  (*(code *)PTR_memcpy_001d5cb0)(param_1,"0.6.0",uVar2);
  if (param_2 != 0) {
    *(undefined1 *)(param_1 + uVar2) = 0;
  }
  return uVar2;
}


