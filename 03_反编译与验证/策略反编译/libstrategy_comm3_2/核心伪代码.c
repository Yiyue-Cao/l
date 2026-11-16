// ELF address 0x0000000000038d80; strategy_comm3_2::Comm3Params::signal_mode

/* strategy_comm3_2::Comm3Params::signal_mode */

ulong __rustcall strategy_comm3_2::Comm3Params::signal_mode(ushort *param_1,long param_2)

{
  if (param_2 != 3) {
    return 0;
  }
  if ((char)param_1[1] != '2' || (short)(*param_1 ^ 0x5650) != 0) {
    return (ulong)((uint)((char)param_1[1] == '4' && *param_1 == 0x5650) * 3);
  }
  return CONCAT71((uint7)(uint3)((*param_1 ^ 0x5650) >> 8),1);
}




// ELF address 0x0000000000038ed0; strategy_comm3_2::Comm3Params::low_action_enum

/* strategy_comm3_2::Comm3Params::low_action_enum */

bool __rustcall strategy_comm3_2::Comm3Params::low_action_enum(int *param_1,long param_2)

{
  if (param_2 == 5) {
    return (bool)(((char)param_1[1] == 'r' && *param_1 == 0x656b616d) * '\x02');
  }
  if (param_2 == 4) {
    return *param_1 == 0x70696b73;
  }
  return false;
}




// ELF address 0x0000000000038dc0; strategy_comm3_2::Comm3Params::signal_trigger_mode

/* strategy_comm3_2::Comm3Params::signal_trigger_mode */

short __rustcall strategy_comm3_2::Comm3Params::signal_trigger_mode(long *param_1,long param_2)

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
      auVar3[0] = -((char)*param_1 == s_WindowsStdTrigge_00117a20[0]);
      auVar3[1] = -(*(char *)((long)param_1 + 1) == s_WindowsStdTrigge_00117a20[1]);
      auVar3[2] = -(*(char *)((long)param_1 + 2) == s_WindowsStdTrigge_00117a20[2]);
      auVar3[3] = -(*(char *)((long)param_1 + 3) == s_WindowsStdTrigge_00117a20[3]);
      auVar3[4] = -(*(char *)((long)param_1 + 4) == s_WindowsStdTrigge_00117a20[4]);
      auVar3[5] = -(*(char *)((long)param_1 + 5) == s_WindowsStdTrigge_00117a20[5]);
      auVar3[6] = -(*(char *)((long)param_1 + 6) == s_WindowsStdTrigge_00117a20[6]);
      auVar3[7] = -(*(char *)((long)param_1 + 7) == s_WindowsStdTrigge_00117a20[7]);
      auVar3[8] = -((char)param_1[1] == s_WindowsStdTrigge_00117a20[8]);
      auVar3[9] = -(*(char *)((long)param_1 + 9) == s_WindowsStdTrigge_00117a20[9]);
      auVar3[10] = -(*(char *)((long)param_1 + 10) == s_WindowsStdTrigge_00117a20[10]);
      auVar3[0xb] = -(*(char *)((long)param_1 + 0xb) == s_WindowsStdTrigge_00117a20[0xb]);
      auVar3[0xc] = -(*(char *)((long)param_1 + 0xc) == s_WindowsStdTrigge_00117a20[0xc]);
      auVar3[0xd] = -(*(char *)((long)param_1 + 0xd) == s_WindowsStdTrigge_00117a20[0xd]);
      auVar3[0xe] = -(*(char *)((long)param_1 + 0xe) == s_WindowsStdTrigge_00117a20[0xe]);
      auVar3[0xf] = -(*(char *)((long)param_1 + 0xf) == s_WindowsStdTrigge_00117a20[0xf]);
      auVar7[0] = -((char)param_1[2] == s_r_001177b0[0]);
      auVar7[1] = -(s_r_001177b0[1] == '\0');
      auVar7[2] = -(s_r_001177b0[2] == '\0');
      auVar7[3] = -(s_r_001177b0[3] == '\0');
      auVar7[4] = -(UNK_001177b4 == '\0');
      auVar7[5] = -(UNK_001177b5 == '\0');
      auVar7[6] = -(UNK_001177b6 == '\0');
      auVar7[7] = -(UNK_001177b7 == '\0');
      auVar7[8] = -(UNK_001177b8 == '\0');
      auVar7[9] = -(UNK_001177b9 == '\0');
      auVar7[10] = -(UNK_001177ba == '\0');
      auVar7[0xb] = -(UNK_001177bb == '\0');
      auVar7[0xc] = -(UNK_001177bc == '\0');
      auVar7[0xd] = -(UNK_001177bd == '\0');
      auVar7[0xe] = -(UNK_001177be == '\0');
      auVar7[0xf] = -(UNK_001177bf == '\0');
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
      auVar5[0] = -((char)*param_1 == s_WindowsMeanTrigg_001176b0[0]);
      auVar5[1] = -(*(char *)((long)param_1 + 1) == s_WindowsMeanTrigg_001176b0[1]);
      auVar5[2] = -(*(char *)((long)param_1 + 2) == s_WindowsMeanTrigg_001176b0[2]);
      auVar5[3] = -(*(char *)((long)param_1 + 3) == s_WindowsMeanTrigg_001176b0[3]);
      auVar5[4] = -(*(char *)((long)param_1 + 4) == s_WindowsMeanTrigg_001176b0[4]);
      auVar5[5] = -(*(char *)((long)param_1 + 5) == s_WindowsMeanTrigg_001176b0[5]);
      auVar5[6] = -(*(char *)((long)param_1 + 6) == s_WindowsMeanTrigg_001176b0[6]);
      auVar5[7] = -(*(char *)((long)param_1 + 7) == s_WindowsMeanTrigg_001176b0[7]);
      auVar5[8] = -((char)param_1[1] == s_WindowsMeanTrigg_001176b0[8]);
      auVar5[9] = -(*(char *)((long)param_1 + 9) == s_WindowsMeanTrigg_001176b0[9]);
      auVar5[10] = -(*(char *)((long)param_1 + 10) == s_WindowsMeanTrigg_001176b0[10]);
      auVar5[0xb] = -(*(char *)((long)param_1 + 0xb) == s_WindowsMeanTrigg_001176b0[0xb]);
      auVar5[0xc] = -(*(char *)((long)param_1 + 0xc) == s_WindowsMeanTrigg_001176b0[0xc]);
      auVar5[0xd] = -(*(char *)((long)param_1 + 0xd) == s_WindowsMeanTrigg_001176b0[0xd]);
      auVar5[0xe] = -(*(char *)((long)param_1 + 0xe) == s_WindowsMeanTrigg_001176b0[0xe]);
      auVar5[0xf] = -(*(char *)((long)param_1 + 0xf) == s_WindowsMeanTrigg_001176b0[0xf]);
      auVar9[0] = -((char)(short)param_1[2] == DAT_00117650);
      auVar9[1] = -((char)((ushort)(short)param_1[2] >> 8) == UNK_00117651);
      auVar9[2] = -(UNK_00117652 == '\0');
      auVar9[3] = -(UNK_00117653 == '\0');
      auVar9[4] = -(UNK_00117654 == '\0');
      auVar9[5] = -(UNK_00117655 == '\0');
      auVar9[6] = -(UNK_00117656 == '\0');
      auVar9[7] = -(UNK_00117657 == '\0');
      auVar9[8] = -(UNK_00117658 == '\0');
      auVar9[9] = -(UNK_00117659 == '\0');
      auVar9[10] = -(UNK_0011765a == '\0');
      auVar9[0xb] = -(UNK_0011765b == '\0');
      auVar9[0xc] = -(UNK_0011765c == '\0');
      auVar9[0xd] = -(UNK_0011765d == '\0');
      auVar9[0xe] = -(UNK_0011765e == '\0');
      auVar9[0xf] = -(UNK_0011765f == '\0');
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
      auVar4[0] = -((char)uVar1 == s_gger_00117790[0]);
      auVar4[1] = -((char)((uint)uVar1 >> 8) == s_gger_00117790[1]);
      auVar4[2] = -((char)((uint)uVar1 >> 0x10) == s_gger_00117790[2]);
      auVar4[3] = -((char)((uint)uVar1 >> 0x18) == s_gger_00117790[3]);
      auVar4[4] = -(s_gger_00117790[4] == '\0');
      auVar4[5] = -(s_gger_00117790[5] == '\0');
      auVar4[6] = -(s_gger_00117790[6] == '\0');
      auVar4[7] = -(s_gger_00117790[7] == '\0');
      auVar4[8] = -(UNK_00117798 == '\0');
      auVar4[9] = -(UNK_00117799 == '\0');
      auVar4[10] = -(UNK_0011779a == '\0');
      auVar4[0xb] = -(UNK_0011779b == '\0');
      auVar4[0xc] = -(UNK_0011779c == '\0');
      auVar4[0xd] = -(UNK_0011779d == '\0');
      auVar4[0xe] = -(UNK_0011779e == '\0');
      auVar4[0xf] = -(UNK_0011779f == '\0');
      auVar8[0] = -((char)*param_1 == s_WindowsSharpeTri_001177a0[0]);
      auVar8[1] = -(*(char *)((long)param_1 + 1) == s_WindowsSharpeTri_001177a0[1]);
      auVar8[2] = -(*(char *)((long)param_1 + 2) == s_WindowsSharpeTri_001177a0[2]);
      auVar8[3] = -(*(char *)((long)param_1 + 3) == s_WindowsSharpeTri_001177a0[3]);
      auVar8[4] = -(*(char *)((long)param_1 + 4) == s_WindowsSharpeTri_001177a0[4]);
      auVar8[5] = -(*(char *)((long)param_1 + 5) == s_WindowsSharpeTri_001177a0[5]);
      auVar8[6] = -(*(char *)((long)param_1 + 6) == s_WindowsSharpeTri_001177a0[6]);
      auVar8[7] = -(*(char *)((long)param_1 + 7) == s_WindowsSharpeTri_001177a0[7]);
      auVar8[8] = -((char)param_1[1] == s_WindowsSharpeTri_001177a0[8]);
      auVar8[9] = -(*(char *)((long)param_1 + 9) == s_WindowsSharpeTri_001177a0[9]);
      auVar8[10] = -(*(char *)((long)param_1 + 10) == s_WindowsSharpeTri_001177a0[10]);
      auVar8[0xb] = -(*(char *)((long)param_1 + 0xb) == s_WindowsSharpeTri_001177a0[0xb]);
      auVar8[0xc] = -(*(char *)((long)param_1 + 0xc) == s_WindowsSharpeTri_001177a0[0xc]);
      auVar8[0xd] = -(*(char *)((long)param_1 + 0xd) == s_WindowsSharpeTri_001177a0[0xd]);
      auVar8[0xe] = -(*(char *)((long)param_1 + 0xe) == s_WindowsSharpeTri_001177a0[0xe]);
      auVar8[0xf] = -(*(char *)((long)param_1 + 0xf) == s_WindowsSharpeTri_001177a0[0xf]);
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
      auVar10[0] = -(*(char *)((long)param_1 + 6) == DAT_00117a70);
      auVar10[1] = -(*(char *)((long)param_1 + 7) == UNK_00117a71);
      auVar10[2] = -((char)param_1[1] == UNK_00117a72);
      auVar10[3] = -(*(char *)((long)param_1 + 9) == UNK_00117a73);
      auVar10[4] = -(*(char *)((long)param_1 + 10) == UNK_00117a74);
      auVar10[5] = -(*(char *)((long)param_1 + 0xb) == UNK_00117a75);
      auVar10[6] = -(*(char *)((long)param_1 + 0xc) == UNK_00117a76);
      auVar10[7] = -(*(char *)((long)param_1 + 0xd) == UNK_00117a77);
      auVar10[8] = -(*(char *)((long)param_1 + 0xe) == UNK_00117a78);
      auVar10[9] = -(*(char *)((long)param_1 + 0xf) == UNK_00117a79);
      auVar10[10] = -((char)param_1[2] == UNK_00117a7a);
      auVar10[0xb] = -(*(char *)((long)param_1 + 0x11) == UNK_00117a7b);
      auVar10[0xc] = -(*(char *)((long)param_1 + 0x12) == UNK_00117a7c);
      auVar10[0xd] = -(*(char *)((long)param_1 + 0x13) == UNK_00117a7d);
      auVar10[0xe] = -(*(char *)((long)param_1 + 0x14) == UNK_00117a7e);
      auVar10[0xf] = -(*(char *)((long)param_1 + 0x15) == UNK_00117a7f);
      auVar6[0] = -((char)*param_1 == DAT_001176e0);
      auVar6[1] = -(*(char *)((long)param_1 + 1) == UNK_001176e1);
      auVar6[2] = -(*(char *)((long)param_1 + 2) == UNK_001176e2);
      auVar6[3] = -(*(char *)((long)param_1 + 3) == UNK_001176e3);
      auVar6[4] = -(*(char *)((long)param_1 + 4) == UNK_001176e4);
      auVar6[5] = -(*(char *)((long)param_1 + 5) == UNK_001176e5);
      auVar6[6] = -(*(char *)((long)param_1 + 6) == UNK_001176e6);
      auVar6[7] = -(*(char *)((long)param_1 + 7) == UNK_001176e7);
      auVar6[8] = -((char)param_1[1] == UNK_001176e8);
      auVar6[9] = -(*(char *)((long)param_1 + 9) == UNK_001176e9);
      auVar6[10] = -(*(char *)((long)param_1 + 10) == UNK_001176ea);
      auVar6[0xb] = -(*(char *)((long)param_1 + 0xb) == UNK_001176eb);
      auVar6[0xc] = -(*(char *)((long)param_1 + 0xc) == UNK_001176ec);
      auVar6[0xd] = -(*(char *)((long)param_1 + 0xd) == UNK_001176ed);
      auVar6[0xe] = -(*(char *)((long)param_1 + 0xe) == UNK_001176ee);
      auVar6[0xf] = -(*(char *)((long)param_1 + 0xf) == UNK_001176ef);
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




// ELF address 0x0000000000062d80; strategy_comm3_2::signal_trigger::SignalTrigger::update_score

/* strategy_comm3_2::signal_trigger::SignalTrigger::update_score */

void __rustcall
strategy_comm3_2::signal_trigger::SignalTrigger::update_score
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
LAB_00162f52:
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
          goto LAB_00162f52;
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




// ELF address 0x0000000000063b50; strategy_comm3_2::signal_trigger::SignalTrigger::windows_rsi_trigger

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm3_2::signal_trigger::SignalTrigger::windows_rsi_trigger */

undefined1 * __rustcall
strategy_comm3_2::signal_trigger::SignalTrigger::windows_rsi_trigger
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
      dVar13 = (double)(*(ulong *)((long)pauVar10 + lVar6 + -0x18) & _DAT_00117410);
      uVar12 = -(ulong)(DAT_001172e0 < dVar13);
      dVar13 = (double)(~uVar12 & _s__001173a8 |
                       (ulong)(DAT_00117350 -
                              DAT_00117350 /
                              (*(double *)((long)pauVar10 + lVar6 + -0x20) / dVar13 + DAT_001172f8))
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
                    /* try { // try from 00163cf3 to 00163d03 has its CatchHandler @ 00163d55 */
        alloc::raw_vec::RawVec<T,A>::grow_one
                  (&local_90,anon_121a221fb921199c1c519d895f664d51_5_llvm_17298346514359621430);
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




// ELF address 0x0000000000063190; strategy_comm3_2::signal_trigger::SignalTrigger::windows_std_trigger

/* WARNING: Removing unreachable block (ram,0x001631fb) */
/* strategy_comm3_2::signal_trigger::SignalTrigger::windows_std_trigger */

undefined1 * __rustcall
strategy_comm3_2::signal_trigger::SignalTrigger::windows_std_trigger
          (undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined1 auVar1 [16];
  undefined1 uVar2;
  undefined8 extraout_XMM0_Qa;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 (*local_38) [16];
  undefined1 (*local_30) [16];
  undefined1 *local_28;
  ushort local_20;
  undefined8 local_18;
  undefined8 *local_10;
  
  local_38 = (undefined1 (*) [16])*param_3;
  local_28 = *local_38 + param_3[1] + 1;
  auVar1 = *local_38;
  local_20 = ~((ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
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
  local_30 = local_38 + 1;
  local_18 = param_3[3];
  local_10 = param_3;
  core::iter::adapters::try_process(&local_68,&local_38);
  local_50 = local_68;
  local_48 = local_60;
  local_40 = local_58;
  uVar2 = enum_rate_counter(param_1,&local_50);
  *(undefined8 *)(param_2 + 8) = extraout_XMM0_Qa;
  *param_2 = uVar2;
  return param_2;
}




// ELF address 0x00000000000630e0; strategy_comm3_2::signal_trigger::SignalTrigger::windows_mean_trigger

/* WARNING: Removing unreachable block (ram,0x0016314b) */
/* strategy_comm3_2::signal_trigger::SignalTrigger::windows_mean_trigger */

undefined1 * __rustcall
strategy_comm3_2::signal_trigger::SignalTrigger::windows_mean_trigger
          (undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined1 auVar1 [16];
  undefined1 uVar2;
  undefined8 extraout_XMM0_Qa;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 (*local_38) [16];
  undefined1 (*local_30) [16];
  undefined1 *local_28;
  ushort local_20;
  undefined8 local_18;
  undefined8 *local_10;
  
  local_38 = (undefined1 (*) [16])*param_3;
  local_28 = *local_38 + param_3[1] + 1;
  auVar1 = *local_38;
  local_20 = ~((ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
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
  local_30 = local_38 + 1;
  local_18 = param_3[3];
  local_10 = param_3;
  core::iter::adapters::try_process(&local_68,&local_38);
  local_50 = local_68;
  local_48 = local_60;
  local_40 = local_58;
  uVar2 = enum_rate_counter(param_1,&local_50);
  *(undefined8 *)(param_2 + 8) = extraout_XMM0_Qa;
  *param_2 = uVar2;
  return param_2;
}




// ELF address 0x0000000000063900; strategy_comm3_2::signal_trigger::SignalTrigger::windows_sharpe_trigger

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm3_2::signal_trigger::SignalTrigger::windows_sharpe_trigger */

undefined1 * __rustcall
strategy_comm3_2::signal_trigger::SignalTrigger::windows_sharpe_trigger
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
      auVar14._12_4_ = _UNK_00117574;
      dVar1 = *(double *)((long)pauVar11 + lVar6 + -0x38);
      dVar15 = *(double *)((long)pauVar11 + lVar6 + -0x30) /
               ((auVar14._8_8_ - _UNK_00117438) +
               ((double)CONCAT44(_s__00117570,(int)lVar7) - _s__00117430)) - dVar1 * dVar1;
      dVar13 = 0.0;
      if (dVar15 <= 0.0) {
        dVar15 = dVar13;
      }
      dVar15 = SQRT(dVar15);
      *(double *)((long)pauVar11 + lVar6 + -0x28) = dVar15;
      if (DAT_001172e0 < (double)((ulong)dVar15 & _DAT_00117410)) {
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
                    /* try { // try from 00163ac3 to 00163ad3 has its CatchHandler @ 00163b25 */
        alloc::raw_vec::RawVec<T,A>::grow_one
                  (&local_90,anon_121a221fb921199c1c519d895f664d51_4_llvm_17298346514359621430);
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




// ELF address 0x0000000000063050; strategy_comm3_2::signal_trigger::SignalTrigger::point_signal_trigger_pv4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm3_2::signal_trigger::SignalTrigger::point_signal_trigger_pv4 */

void __rustcall
strategy_comm3_2::signal_trigger::SignalTrigger::point_signal_trigger_pv4
          (double param_1,double param_2,ulong param_3,undefined1 *param_4,long param_5)

{
  undefined1 uVar1;
  double dVar2;
  
  dVar2 = *(double *)(param_5 + 0x38);
  param_1 = ((double)(param_3 & _DAT_00117410) + param_2) * param_1;
  if (dVar2 <= 0.0) {
    dVar2 = param_1 + dVar2;
    if (0.0 <= dVar2) {
      dVar2 = 0.0;
    }
    if (dVar2 < *(double *)(param_5 + 0x40)) goto LAB_001630a7;
  }
  else {
    dVar2 = dVar2 - param_1;
    if (dVar2 <= 0.0) {
      dVar2 = 0.0;
    }
    if (dVar2 < *(double *)(param_5 + 0x40)) {
LAB_001630a7:
      uVar1 = 3;
      if (((dVar2 < *(double *)(param_5 + 0x58)) && (uVar1 = 2, *(double *)(param_5 + 0x50) < dVar2)
          ) && (uVar1 = 4, dVar2 <= *(double *)(param_5 + 0x48))) {
        *param_4 = 1;
        *(undefined8 *)(param_4 + 8) = 0x3ff0000000000000;
        return;
      }
      goto LAB_00163087;
    }
  }
  uVar1 = 0;
LAB_00163087:
  *param_4 = uVar1;
  *(undefined8 *)(param_4 + 8) = 0x3ff0000000000000;
  return;
}




// ELF address 0x0000000000063240; strategy_comm3_2::signal_trigger::SignalTrigger::windows_quantile_trigger

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm3_2::signal_trigger::SignalTrigger::windows_quantile_trigger */

undefined1 * __rustcall
strategy_comm3_2::signal_trigger::SignalTrigger::windows_quantile_trigger
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
  if ((param_1 < 0.0) || (DAT_001172f8 < param_1)) {
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
LAB_0016384f:
                    /* try { // try from 0016384f to 0016385f has its CatchHandler @ 001638ca */
      uVar12 = anyhow::error::_<impl_anyhow::Error>::msg("quantile not found",0x12);
      *(undefined8 *)(param_3 + 8) = uVar12;
      *param_3 = 5;
      if (local_f0 == 0) {
        return param_3;
      }
      (*(code *)PTR___rust_dealloc_001de3d0)(local_e8,local_f0,1);
      return param_3;
    }
  }
  else {
    uVar19 = ~(uint)uVar1;
    dVar23 = DAT_001172f8 - param_1;
    local_48 = param_1;
    if ((dVar23 < 0.0) || (DAT_001172f8 < dVar23)) {
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
          auVar22._12_4_ = _UNK_00117574;
          param_1 = param_1 * ((auVar22._8_8_ - _UNK_00117438) +
                              ((double)CONCAT44(_s__00117570,(int)uVar15) - _s__00117430));
          uVar8 = 0;
          if (0.0 <= param_1) {
            uVar8 = (long)(param_1 - _DAT_00117320) & (long)param_1 >> 0x3f | (long)param_1;
          }
          uVar11 = 0xffffffffffffffff;
          if (param_1 <= _DAT_00117260) {
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
                    /* try { // try from 00163830 to 00163837 has its CatchHandler @ 001638cc */
              lVar9 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                      ::next(&uStack_d8);
              if (lVar9 == 0) goto LAB_0016384f;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
                    /* try { // try from 00163842 to 0016384b has its CatchHandler @ 001638c6 */
          _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>::
          next(&uStack_d8);
        }
        goto LAB_0016384f;
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
          if (uVar15 == 0) goto LAB_0016384f;
          auVar20._8_4_ = (int)(uVar15 >> 0x20);
          auVar20._0_8_ = uVar15;
          auVar20._12_4_ = _UNK_00117574;
          dVar23 = ((auVar20._8_8_ - _UNK_00117438) +
                   ((double)CONCAT44(_s__00117570,(int)uVar15) - _s__00117430)) * local_48;
          uVar8 = (long)(dVar23 - _DAT_00117320) & (long)dVar23 >> 0x3f | (long)dVar23;
          if (dVar23 < DAT_00117318) {
            uVar8 = 0;
          }
          if (_DAT_00117260 < dVar23) {
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
                    /* try { // try from 00163450 to 00163459 has its CatchHandler @ 001638d0 */
              lVar9 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                      ::next(&uStack_d8);
              if (lVar9 == 0) goto LAB_0016384f;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
                    /* try { // try from 00163468 to 00163471 has its CatchHandler @ 001638c8 */
          pdVar10 = (double *)
                    _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                    ::next(&uStack_d8);
          if ((pdVar10 == (double *)0x0) ||
             (uVar15 = *(ulong *)((long)pauVar16 + lVar18 + -0x60), uVar15 == 0)) goto LAB_0016384f;
          auVar21._8_4_ = (int)(uVar15 >> 0x20);
          auVar21._0_8_ = uVar15;
          auVar21._12_4_ = _UNK_00117574;
          dVar23 = ((auVar21._8_8_ - _UNK_00117438) +
                   ((double)CONCAT44(_s__00117570,(int)uVar15) - _s__00117430)) * local_58;
          uVar8 = 0;
          if (DAT_00117318 <= dVar23) {
            uVar8 = (long)(dVar23 - _DAT_00117320) & (long)dVar23 >> 0x3f | (long)dVar23;
          }
          if (_DAT_00117260 < dVar23) {
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
                    /* try { // try from 00163560 to 00163569 has its CatchHandler @ 001638ce */
              lVar9 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                      ::next(&uStack_d8);
              if (lVar9 == 0) goto LAB_0016384f;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
                    /* try { // try from 00163578 to 0016368d has its CatchHandler @ 001638c8 */
          pdVar10 = (double *)
                    _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                    ::next(&uStack_d8);
          uVar15 = local_e0;
          if (pdVar10 == (double *)0x0) goto LAB_0016384f;
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
                       PTR_anon_121a221fb921199c1c519d895f664d51_0_llvm_17298346514359621430_001d9598
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




// ELF address 0x0000000000062fc0; strategy_comm3_2::signal_trigger::SignalTrigger::point_signal_trigger_pv1_spread

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm3_2::signal_trigger::SignalTrigger::point_signal_trigger_pv1_spread */

void __rustcall
strategy_comm3_2::signal_trigger::SignalTrigger::point_signal_trigger_pv1_spread
          (double param_1,ulong param_2,undefined1 *param_3,long param_4)

{
  undefined1 uVar1;
  double dVar2;
  
  dVar2 = *(double *)(param_4 + 0x38);
  param_1 = (double)(param_2 & _DAT_00117410) * param_1;
  if (dVar2 <= 0.0) {
    dVar2 = param_1 + dVar2;
    if (0.0 <= dVar2) {
      dVar2 = 0.0;
    }
    if (dVar2 < *(double *)(param_4 + 0x40)) goto LAB_00163013;
  }
  else {
    dVar2 = dVar2 - param_1;
    if (dVar2 <= 0.0) {
      dVar2 = 0.0;
    }
    if (dVar2 < *(double *)(param_4 + 0x40)) {
LAB_00163013:
      uVar1 = 3;
      if (((dVar2 < *(double *)(param_4 + 0x58)) && (uVar1 = 2, *(double *)(param_4 + 0x50) < dVar2)
          ) && (uVar1 = 4, dVar2 <= *(double *)(param_4 + 0x48))) {
        *param_3 = 1;
        *(undefined8 *)(param_3 + 8) = 0x3ff0000000000000;
        return;
      }
      goto LAB_00162ff3;
    }
  }
  uVar1 = 0;
LAB_00162ff3:
  *param_3 = uVar1;
  *(undefined8 *)(param_3 + 8) = 0x3ff0000000000000;
  return;
}




// ELF address 0x00000000000642f0; strategy_comm3_2::signal_trigger::dynamic_threshold

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm3_2::signal_trigger::dynamic_threshold */

void __rustcall
strategy_comm3_2::signal_trigger::dynamic_threshold
          (double param_1,double param_2,double param_3,double param_4,double *param_5,
          double *param_6)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  
  if ((((0.0 <= param_2) && (0.0 <= param_3)) && (param_2 <= param_1)) &&
     (DAT_00117360 < (double)(_DAT_00117410 & (ulong)param_4))) {
    dVar1 = param_3 - param_2;
    if (param_3 - param_2 <= DAT_001172e0) {
      dVar1 = DAT_001172e0;
    }
    dVar1 = (param_1 - param_2) / dVar1;
    if (DAT_001172f8 <= dVar1) {
      dVar1 = DAT_001172f8;
    }
    dVar4 = (double)((ulong)(param_4 * dVar1) & _DAT_00117410);
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




// ELF address 0x0000000000063d80; _ZN16strategy_comm3_214signal_trigger17enum_rate_counter17h6c3412650fa35c6eE.llvm.17298346514359621430

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm3_2::signal_trigger::enum_rate_counter */

ulong __rustcall strategy_comm3_2::signal_trigger::enum_rate_counter(double param_1,long *param_2)

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
      (*(code *)PTR___rust_dealloc_001de3d0)(param_2[1],*param_2,1);
    }
    goto LAB_0016427c;
  }
  local_98 = param_1;
  uStack_90 = in_XMM0_Qb;
  pauVar9 = (undefined1 (*) [16])__tls_get_addr(&PTR_001de7b8);
  if (pauVar9[1][0] == '\x01') {
    local_a8 = *pauVar9;
  }
  else {
                    /* try { // try from 00164290 to 00164295 has its CatchHandler @ 001642a7 */
    local_a8 = (*(code *)PTR_hashmap_random_keys_001de768)();
    *pauVar9 = local_a8;
    pauVar9[1][0] = 1;
  }
  *(long *)*pauVar9 = local_a8._0_8_ + 1;
  local_b8 = _DAT_001d95f0;
  lStack_b0 = _UNK_001d95f8;
  local_c8 = (undefined1 (*) [16])
             PTR_anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263_001d95e0;
  uStack_c0 = _UNK_001d95e8;
  pcVar25 = (char *)param_2[1];
  pcVar1 = pcVar25 + lVar3;
  local_68 = pcVar25;
  do {
    cVar14 = *pcVar25;
    local_60 = CONCAT71(local_60._1_7_,cVar14);
                    /* try { // try from 00163f3b to 00163fb5 has its CatchHandler @ 001642ac */
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
          goto joined_r0x00163ea4;
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
joined_r0x00163ea4:
  } while (pcVar25 != pcVar1);
  if (uStack_c0 == 0) {
    uVar13 = 0;
    if (lStack_b0 != 0) goto LAB_0016402b;
LAB_001641b6:
    dVar34 = 0.0;
    dVar33 = 0.0;
    uVar16 = 4;
    if (uVar17 != 0 && uStack_c0 != 0) {
      (*(code *)PTR___rust_dealloc_001de3d0)();
      dVar34 = 0.0;
      dVar33 = 0.0;
    }
  }
  else {
    uVar17 = uStack_c0 * 0x11 + 0x21;
    pauVar9 = local_c8 + (-1 - uStack_c0);
    uVar13 = 0x10;
    if (lStack_b0 == 0) goto LAB_001641b6;
LAB_0016402b:
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
      (*(code *)PTR___rust_dealloc_001de3d0)(pauVar9,uVar17,uVar13);
    }
    auVar29._8_4_ = (int)(uVar21 >> 0x20);
    auVar29._0_8_ = uVar21;
    auVar29._12_4_ = _UNK_00117574;
    dVar33 = auVar29._8_8_ - _UNK_00117438;
    dVar34 = dVar33 + ((double)CONCAT44(_s__00117570,(int)uVar21) - _s__00117430);
  }
  dVar34 = dVar34 / (double)lVar3;
  uVar17 = 4;
  if (local_98 < dVar34) {
    uVar17 = uVar16 & 0xff;
  }
  local_98 = (double)(-(ulong)(local_98 < dVar34) & (ulong)dVar34);
  uStack_90 = uStack_90 & (ulong)dVar33;
  if (*param_2 != 0) {
    (*(code *)PTR___rust_dealloc_001de3d0)(local_68,*param_2,1);
  }
LAB_0016427c:
  return uVar17 & 0xffffffff;
}




// ELF address 0x0000000000062990; strategy_comm3_2::signal_trigger::TsQuantileCalculator::update

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm3_2::signal_trigger::TsQuantileCalculator::update */

void __rustcall
strategy_comm3_2::signal_trigger::TsQuantileCalculator::update
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
    param_4 = &PTR_anon_121a221fb921199c1c519d895f664d51_0_llvm_17298346514359621430_001d9580;
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
        if (lVar7 == 0) goto LAB_00162aa3;
        dVar17 = *pdVar6;
        dVar18 = pdVar6[1];
        param_4 = ppuVar13;
        if (param_2 <= dVar17) {
          if (param_2 < dVar17) goto LAB_00162aa3;
LAB_00162a46:
          cVar10 = ((ulong)dVar16 >= (ulong)dVar18 && dVar16 != dVar18) -
                   ((ulong)dVar16 < (ulong)dVar18);
        }
        else {
          cVar10 = '\x01';
          if (param_2 < dVar17) goto LAB_00162a46;
        }
        pdVar6 = pdVar6 + 2;
        lVar7 = lVar7 + -0x10;
        ppuVar13 = (undefined **)((long)ppuVar13 + 1);
      } while (cVar10 == '\x01');
      if (cVar10 == '\0') goto LAB_00162af6;
LAB_00162aa3:
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
LAB_00162af6:
  param_3[8] = param_3[8] + 1;
  dVar16 = (double)param_3[9] + param_2;
  param_3[9] = (ulong)dVar16;
  uVar9 = param_3[10] + 1;
  param_3[10] = uVar9;
  auVar20._8_4_ = (int)(uVar9 >> 0x20);
  auVar20._0_8_ = uVar9;
  auVar20._12_4_ = _UNK_00117574;
  param_3[0xb] = (ulong)(dVar16 / ((auVar20._8_8_ - _UNK_00117438) +
                                  ((double)CONCAT44(_s__00117570,(int)uVar9) - _s__00117430)));
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
            if (lVar7 == 0) goto joined_r0x00162cd8;
            dVar1 = *pdVar5;
            dVar4 = pdVar5[1];
            if (dVar17 <= dVar1) {
              uVar12 = uVar8;
              if (dVar17 < dVar1) goto joined_r0x00162cd8;
LAB_00162c66:
              cVar10 = ((ulong)dVar18 >= (ulong)dVar4 && dVar18 != dVar4) -
                       ((ulong)dVar18 < (ulong)dVar4);
            }
            else {
              cVar10 = '\x01';
              if (dVar17 < dVar1) goto LAB_00162c66;
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
joined_r0x00162cd8:
          if (local_78 == 0.0) break;
          local_78 = (double)((long)local_78 - 1);
          local_80 = (double *)local_80[uVar12 + 0x18];
        } while( true );
      }
      dVar16 = dVar16 - dVar17;
      param_3[9] = (ulong)dVar16;
      dVar18 = 0.0;
      if (uVar9 == 0) {
LAB_00162b80:
        uVar9 = 0;
      }
      else {
        uVar9 = uVar9 - 1;
        param_3[10] = uVar9;
        if (uVar9 == 0) goto LAB_00162b80;
        auVar19._8_4_ = (int)(uVar9 >> 0x20);
        auVar19._0_8_ = uVar9;
        auVar19._12_4_ = _UNK_00117574;
        dVar18 = dVar16 / ((auVar19._8_8_ - _UNK_00117438) +
                          ((double)CONCAT44(_s__00117570,(int)uVar9) - _s__00117430));
      }
      param_3[0xb] = (ulong)dVar18;
      dVar18 = DAT_00117318;
      param_3[0xc] = (ulong)((double)param_3[0xc] - dVar17 * dVar17);
      param_3[(ulong)(dVar17 <= dVar18) + 0xe] =
           (ulong)((double)param_3[(ulong)(dVar17 <= dVar18) + 0xe] - dVar17);
      uVar8 = param_3[3];
    } while (uVar8 != 0);
  }
  return;
}




// ELF address 0x0000000000039cd0; strategy_comm3_2::high_taker_rate

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm3_2::high_taker_rate */

double __rustcall
strategy_comm3_2::high_taker_rate
          (ulong param_1,ulong param_2,double param_3,double param_4,double param_5,double param_6,
          double unaff_XMM6_Qa,double unaff_XMM7_Qa)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double in_stack_00000008;
  
  dVar4 = 0.0;
  if ((0.0 < param_4 + param_5) &&
     ((unaff_XMM7_Qa <= 0.0 || (dVar4 = in_stack_00000008, param_3 <= unaff_XMM7_Qa)))) {
    dVar4 = (param_4 - param_5) / (param_4 + param_5);
    if (dVar4 <= 0.0) {
      dVar4 = 0.0;
    }
    if (((0.0 < param_3) && (DAT_001172f8 < param_6)) &&
       (dVar3 = (double)(param_2 & _DAT_00117410), DAT_00117360 <= dVar3)) {
      dVar1 = (double)(param_1 & _DAT_00117410);
      dVar2 = dVar1 / dVar3 + _s__00117280;
      if (dVar2 <= 0.0) {
        dVar2 = 0.0;
      }
      dVar2 = (double)(*(code *)PTR_tanh_001de4b0)(dVar2 * DAT_00117348);
      dVar2 = (param_6 + _s__00117280) * dVar2 + DAT_001172f8;
      param_3 = ((dVar1 - dVar3) * unaff_XMM6_Qa) / param_3;
      dVar3 = param_3;
      if (dVar2 <= param_3) {
        dVar3 = dVar2;
      }
      dVar3 = (double)(-(ulong)NAN(dVar2) & (ulong)param_3 | ~-(ulong)NAN(dVar2) & (ulong)dVar3);
      if (dVar3 <= DAT_00117318) {
        dVar3 = DAT_00117318;
      }
      return dVar4 * dVar3;
    }
  }
  return dVar4;
}




// ELF address 0x000000000005d4e0; strategy_comm3_2::vol_spread_ratio::VolSpreadRatio::update

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm3_2::vol_spread_ratio::VolSpreadRatio::update */

ulong __rustcall
strategy_comm3_2::vol_spread_ratio::VolSpreadRatio::update
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
  
  dVar11 = DAT_00117348 * (param_2 + param_3);
  dVar9 = (double)(*(code *)PTR_round_001de7a0)
                            (((param_3 - param_2) / (param_2 + param_3)) * _DAT_00117368);
  uVar4 = *param_4;
  uVar1 = param_4[3];
  if (uVar1 == uVar4) {
    alloc::collections::vec_deque::VecDeque<T,A>::grow
              (param_4,anon_350ed88e42a0a20580f4bccf46e55341_43_llvm_3085305271729852366);
    uVar4 = *param_4;
    uVar1 = param_4[3];
  }
  dVar9 = dVar9 / DAT_00117338;
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
    if ((double)param_4[0x29] * DAT_00117348 <= param_1 - *(double *)(uVar4 + lVar2)) {
      dVar9 = *(double *)(lVar2 + uVar4 + 8);
      if (dVar9 <= 0.0) {
        return 0;
      }
      dVar9 = (double)(*(code *)PTR_round_001de7a0)
                                ((*(double *)(uVar4 + 8 + (uVar5 - uVar6) * 0x10) / dVar9 +
                                 _s__00117280) * _DAT_00117368);
      signal_trigger::TsQuantileCalculator::update(param_1,dVar9 / DAT_00117338,param_4 + 5);
      uVar4 = param_4[0xf];
      uVar1 = 1;
      if (1 < uVar4) {
        uVar1 = uVar4;
      }
      auVar10._8_4_ = (int)(uVar1 >> 0x20);
      auVar10._0_8_ = uVar1;
      auVar10._12_4_ = _UNK_00117574;
      dVar9 = (double)param_4[0x11] /
              ((auVar10._8_8_ - _UNK_00117438) +
              ((double)CONCAT44(_s__00117570,(int)uVar1) - _s__00117430)) -
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




// ELF address 0x0000000000039760; strategy_comm3_2::live_pending_counts

/* strategy_comm3_2::live_pending_counts */

undefined1  [16] __rustcall
strategy_comm3_2::live_pending_counts
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  int iVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined1 auVar19 [16];
  long local_c0;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long *local_40;
  long local_38;
  
  (*(code *)PTR_pending_orders_001de490)(&local_48,param_1,param_2,param_3);
                    /* try { // try from 00139797 to 001397aa has its CatchHandler @ 00139ca9 */
  (*(code *)PTR_cancel_pending_ids_001de4a8)(&local_60,param_1,param_2,param_3);
  lVar7 = local_50;
  lVar17 = local_58;
  puVar8 = PTR___rust_dealloc_001de3d0;
  plVar14 = local_40 + local_38 * 0xb;
  if (local_38 == 0) {
    local_c0 = 0;
    lVar12 = 0;
    plVar15 = local_40;
LAB_00139b1a:
    puVar8 = PTR___rust_dealloc_001de3d0;
    if (plVar14 != plVar15) {
      uVar11 = (ulong)((long)plVar14 - (long)plVar15) / 0x58;
      plVar15 = plVar15 + 4;
      do {
        if (plVar15[-4] != 0) {
          (*(code *)puVar8)(plVar15[-3],plVar15[-4],1);
        }
        if (plVar15[-1] != 0) {
          (*(code *)puVar8)(*plVar15,plVar15[-1],1);
        }
        plVar15 = plVar15 + 0xb;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
  }
  else {
    if (param_5 != 0) {
      lVar6 = local_50 * 0x18;
      lVar12 = 0;
      local_c0 = 0;
      plVar10 = local_40;
LAB_00139857:
      do {
        plVar15 = plVar10 + 0xb;
        lVar2 = *plVar10;
        if (lVar2 == -0x8000000000000000) goto LAB_00139b1a;
        lVar3 = plVar10[1];
        lVar4 = plVar10[2];
        lVar5 = plVar10[3];
        lVar16 = plVar10[4];
        bVar1 = *(byte *)(plVar10 + 10);
        lVar13 = 0;
        do {
          plVar10 = plVar15;
          if ((*(long *)(param_4 + 0x10 + lVar13) == lVar4) &&
             (iVar9 = (*(code *)PTR_bcmp_001de488)
                                (*(undefined8 *)(param_4 + 8 + lVar13),lVar3,lVar4), iVar9 == 0))
          goto LAB_00139917;
          lVar13 = lVar13 + 0x18;
        } while (param_5 * 0x18 != lVar13);
        if (lVar7 != 0) {
          lVar13 = 0;
          do {
            if ((*(long *)(lVar17 + 0x10 + lVar13) == lVar4) &&
               (iVar9 = (*(code *)PTR_bcmp_001de488)
                                  (*(undefined8 *)(lVar17 + 8 + lVar13),lVar3,lVar4), iVar9 == 0))
            goto LAB_00139917;
            lVar13 = lVar13 + 0x18;
          } while (lVar6 != lVar13);
        }
        if (lVar2 != 0) {
          (*(code *)PTR___rust_dealloc_001de3d0)(lVar3,lVar2,1);
        }
        if (lVar5 != 0) {
          (*(code *)PTR___rust_dealloc_001de3d0)(lVar16,lVar5,1);
        }
        lVar12 = lVar12 + (ulong)bVar1;
        local_c0 = local_c0 + (ulong)(bVar1 ^ 1);
      } while (plVar15 != plVar14);
      goto LAB_00139c16;
    }
    if (local_50 == 0) {
      lVar12 = 0;
      local_c0 = 0;
      plVar15 = local_40;
      do {
        plVar10 = plVar15 + 0xb;
        lVar17 = plVar15[3];
        lVar7 = plVar15[4];
        bVar1 = *(byte *)(plVar15 + 10);
        if (*plVar15 != 0) {
          (*(code *)puVar8)(plVar15[1],*plVar15,1);
        }
        if (lVar17 != 0) {
          (*(code *)puVar8)(lVar7,lVar17,1);
        }
        lVar12 = lVar12 + (ulong)bVar1;
        local_c0 = local_c0 + (ulong)(bVar1 ^ 1);
        plVar15 = plVar10;
      } while (plVar10 != plVar14);
    }
    else {
      lVar7 = local_50 * 0x18;
      lVar12 = 0;
      local_c0 = 0;
      plVar10 = local_40;
LAB_00139a10:
      do {
        plVar15 = plVar10 + 0xb;
        lVar6 = *plVar10;
        if (lVar6 == -0x8000000000000000) goto LAB_00139b1a;
        lVar2 = plVar10[1];
        lVar3 = plVar10[2];
        lVar4 = plVar10[3];
        lVar5 = plVar10[4];
        bVar1 = *(byte *)(plVar10 + 10);
        lVar16 = 0;
        do {
          plVar10 = plVar15;
          if ((*(long *)(lVar17 + 0x10 + lVar16) == lVar3) &&
             (iVar9 = (*(code *)PTR_bcmp_001de488)(*(undefined8 *)(lVar17 + 8 + lVar16),lVar2,lVar3)
             , iVar9 == 0)) {
            if (lVar6 != 0) {
              (*(code *)PTR___rust_dealloc_001de3d0)(lVar2,lVar6,1);
            }
            if (lVar4 != 0) {
              (*(code *)PTR___rust_dealloc_001de3d0)(lVar5,lVar4,1);
            }
            if (plVar15 != plVar14) goto LAB_00139a10;
            goto LAB_00139b1a;
          }
          lVar16 = lVar16 + 0x18;
        } while (lVar7 != lVar16);
        if (lVar6 != 0) {
          (*(code *)PTR___rust_dealloc_001de3d0)(lVar2,lVar6,1);
        }
        if (lVar4 != 0) {
          (*(code *)PTR___rust_dealloc_001de3d0)(lVar5,lVar4,1);
        }
        lVar12 = lVar12 + (ulong)bVar1;
        local_c0 = local_c0 + (ulong)(bVar1 ^ 1);
      } while (plVar15 != plVar14);
    }
  }
LAB_00139c16:
  if (local_48 != 0) {
    (*(code *)PTR___rust_dealloc_001de3d0)(local_40,local_48 * 0x58,8);
  }
  puVar8 = PTR___rust_dealloc_001de3d0;
  if (local_50 != 0) {
    puVar18 = (undefined8 *)(local_58 + 8);
    lVar17 = local_50;
    do {
      if (puVar18[-1] != 0) {
        (*(code *)puVar8)(*puVar18,puVar18[-1],1);
      }
      puVar18 = puVar18 + 3;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
  if (local_60 != 0) {
    (*(code *)PTR___rust_dealloc_001de3d0)(local_58,local_60 * 0x18,8);
  }
  auVar19._8_8_ = local_c0;
  auVar19._0_8_ = lVar12;
  return auVar19;
LAB_00139917:
  if (lVar2 != 0) {
    (*(code *)PTR___rust_dealloc_001de3d0)(lVar3,lVar2,1);
  }
  if (lVar5 != 0) {
    (*(code *)PTR___rust_dealloc_001de3d0)(lVar16,lVar5,1);
  }
  if (plVar15 == plVar14) goto LAB_00139b1a;
  goto LAB_00139857;
}




// ELF address 0x0000000000038f00; strategy_comm3_2::cancel_order_use_range

/* strategy_comm3_2::cancel_order_use_range */

long __rustcall
strategy_comm3_2::cancel_order_use_range
          (double param_1,double param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
          byte param_6,long *param_7)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  double dVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  byte local_10a;
  byte local_109;
  long local_108;
  long local_100;
  long *local_f8;
  long *local_f0;
  long *local_e8;
  long *local_e0;
  long local_d8;
  long *local_d0;
  long *local_c8;
  long *local_c0;
  long local_b8;
  long *local_b0;
  byte *local_a8;
  double local_a0;
  long local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  double local_78;
  double local_70;
  double local_68;
  long local_60;
  long *local_58;
  long local_50;
  long local_48;
  long *local_40;
  long local_38;
  
  local_109 = param_6 ^ 1;
  local_10a = param_6;
  local_a0 = param_2;
  local_90 = param_3;
  local_88 = param_4;
  local_80 = param_5;
  local_78 = param_1;
  (*(code *)PTR_pending_orders_001de490)(&local_48,param_3,param_4,param_5);
  local_e8 = local_40 + local_38 * 0xb;
  local_c8 = local_40;
  local_c0 = local_40;
  local_b8 = local_48;
  local_a8 = &local_109;
  local_f0 = param_7;
  plVar8 = local_c0;
  local_b0 = local_e8;
  if (local_38 != 0) {
    local_d8 = local_48;
    plVar9 = local_40 + local_38 * 0xb + -0xb;
    local_e0 = local_40;
    plVar8 = local_40;
    local_d0 = plVar9;
LAB_00138fd0:
    uVar14 = (long)plVar9 - (long)plVar8;
    plVar12 = plVar8;
    do {
      lVar2 = *plVar12;
      lVar7 = plVar12[1];
      lVar13 = plVar12[3];
      local_108 = plVar12[4];
      if (*(byte *)(plVar12 + 10) == local_109) {
        if (lVar2 != -0x8000000000000000) goto LAB_00139060;
      }
      else {
        if (lVar2 != 0) {
          (*(code *)PTR___rust_dealloc_001de3d0)(lVar7,lVar2,1);
        }
        if (lVar13 != 0) {
          (*(code *)PTR___rust_dealloc_001de3d0)(local_108,lVar13,1);
        }
      }
      plVar12 = plVar12 + 0xb;
      uVar14 = uVar14 - 0x58;
      local_48 = local_d8;
      local_40 = local_e0;
      if (plVar12 == local_e8) break;
    } while( true );
  }
LAB_001391c8:
  local_c0 = plVar8;
  plVar8 = local_f0;
  if (local_48 != 0) {
    (*(code *)PTR___rust_dealloc_001de3d0)(local_40,local_48 * 0x58,8);
  }
  (*(code *)PTR_pending_orders_001de490)(&local_60,local_90,local_88,local_80);
  local_f8 = local_58 + local_50 * 0xb;
  local_c8 = local_58;
  local_c0 = local_58;
  local_b8 = local_60;
  local_a8 = &local_10a;
  plVar9 = local_c0;
  local_b0 = local_f8;
  if (local_50 != 0) {
    local_d8 = local_60;
    local_68 = local_78 + local_a0;
    local_78 = local_78 - local_a0;
    local_d0 = local_58 + local_50 * 0xb + -0xb;
    local_e0 = local_58;
    plVar9 = local_58;
LAB_0013929a:
    uVar14 = (long)local_d0 - (long)plVar9;
    plVar12 = plVar9;
    do {
      lVar2 = *plVar12;
      lVar7 = plVar12[1];
      local_108 = plVar12[3];
      local_e8 = (long *)plVar12[4];
      bVar1 = *(byte *)(plVar12 + 10);
      if (bVar1 == local_10a) {
        if (lVar2 != -0x8000000000000000) goto LAB_00139330;
      }
      else {
        if (lVar2 != 0) {
          (*(code *)PTR___rust_dealloc_001de3d0)(lVar7,lVar2,1);
        }
        if (local_108 != 0) {
          (*(code *)PTR___rust_dealloc_001de3d0)(local_e8,local_108,1);
        }
      }
      plVar12 = plVar12 + 0xb;
      uVar14 = uVar14 - 0x58;
      local_60 = local_d8;
      local_58 = local_e0;
      if (plVar12 == local_f8) break;
    } while( true );
  }
LAB_001394fa:
  local_c0 = plVar9;
  if (local_60 != 0) {
    (*(code *)PTR___rust_dealloc_001de3d0)(local_58,local_60 * 0x58,8);
  }
  return 0;
LAB_00139060:
  plVar8 = (long *)plVar12[2];
  local_100 = lVar13;
  local_f8 = plVar8;
  if (local_f0[2] != 0) {
    lVar5 = local_f0[1];
    lVar4 = local_f0[2] * 0x18;
    lVar10 = 0;
    local_98 = lVar4;
    do {
      if (((long *)*(long *)(lVar5 + 0x10 + lVar10) == plVar8) &&
         (iVar3 = (*(code *)PTR_bcmp_001de488)(*(undefined8 *)(lVar5 + 8 + lVar10),lVar7),
         lVar13 = local_100, lVar4 = local_98, plVar8 = local_f8, iVar3 == 0)) {
        if (lVar2 != 0) {
          (*(code *)PTR___rust_dealloc_001de3d0)(lVar7,lVar2,1);
        }
        goto LAB_0013917e;
      }
      lVar10 = lVar10 + 0x18;
    } while (lVar4 != lVar10);
  }
                    /* try { // try from 00139110 to 00139133 has its CatchHandler @ 001396ff */
  lVar5 = (*(code *)PTR_cancel_order_001de498)(local_90,local_88,local_80,lVar7,plVar8);
  plVar8 = local_f0;
  if (lVar5 != 0) {
    plVar8 = plVar12 + 0xb;
    local_f8 = (long *)lVar5;
    local_c0 = plVar8;
    if (lVar2 != 0) {
      (*(code *)PTR___rust_dealloc_001de3d0)(lVar7,lVar2,1);
    }
    if (lVar13 != 0) {
      (*(code *)PTR___rust_dealloc_001de3d0)(local_108,lVar13,1);
    }
    if (plVar8 != local_e8) {
      plVar12 = plVar12 + 0xf;
      uVar14 = uVar14 / 0x58;
      do {
        if (plVar12[-4] != 0) {
          (*(code *)PTR___rust_dealloc_001de3d0)(plVar12[-3],plVar12[-4],1);
        }
        if (plVar12[-1] != 0) {
          (*(code *)PTR___rust_dealloc_001de3d0)(*plVar12,plVar12[-1],1);
        }
        plVar12 = plVar12 + 0xb;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    if (local_d8 == 0) {
      return (long)local_f8;
    }
    (*(code *)PTR___rust_dealloc_001de3d0)(local_e0,local_d8 * 0x58,8);
    return (long)local_f8;
  }
  lVar5 = local_f0[2];
  if (lVar5 == *local_f0) {
                    /* try { // try from 0013914c to 0013915b has its CatchHandler @ 001396aa */
    (*(code *)PTR_grow_one_001de4a0)(local_f0,&PTR_s_strategies_comm_strategy_strateg_001d84e0);
  }
  lVar4 = plVar8[1];
  *(long *)(lVar4 + lVar5 * 0x18) = lVar2;
  *(long *)(lVar4 + 8 + lVar5 * 0x18) = lVar7;
  *(long **)(lVar4 + 0x10 + lVar5 * 0x18) = local_f8;
  plVar8[2] = lVar5 + 1;
LAB_0013917e:
  plVar9 = local_d0;
  if (lVar13 != 0) {
    (*(code *)PTR___rust_dealloc_001de3d0)(local_108,lVar13,1);
  }
  plVar8 = plVar12 + 0xb;
  if (plVar8 == local_e8) goto code_r0x001391ad;
  goto LAB_00138fd0;
code_r0x001391ad:
  local_48 = local_d8;
  local_40 = local_e0;
  plVar8 = plVar12 + 0xb;
  goto LAB_001391c8;
LAB_00139330:
  lVar13 = plVar12[2];
  local_70 = (double)plVar12[6];
  local_100 = lVar7;
  if (plVar8[2] != 0) {
    lVar5 = local_f0[1];
    dVar6 = (double)(plVar8[2] * 0x18);
    dVar11 = 0.0;
    local_a0 = dVar6;
    local_98 = lVar5;
    do {
      if ((*(long *)(lVar5 + 0x10 + (long)dVar11) == lVar13) &&
         (iVar3 = (*(code *)PTR_bcmp_001de488)
                            (*(undefined8 *)(lVar5 + 8 + (long)dVar11),lVar7,lVar13),
         dVar6 = local_a0, lVar5 = local_98, lVar7 = local_100, iVar3 == 0)) {
        plVar8 = local_f0;
        if (lVar2 != 0) {
          (*(code *)PTR___rust_dealloc_001de3d0)(local_100,lVar2,1);
          plVar8 = local_f0;
        }
        goto joined_r0x001393d7;
      }
      dVar11 = (double)((long)dVar11 + 0x18);
    } while (dVar6 != dVar11);
  }
  plVar8 = local_f0;
  if ((bVar1 & 1) == 0) {
    if (local_68 < local_70) goto LAB_0013944a;
  }
  else if (local_70 < local_78) {
LAB_0013944a:
                    /* try { // try from 0013944a to 0013946d has its CatchHandler @ 001396ac */
    lVar7 = (*(code *)PTR_cancel_order_001de498)(local_90,local_88,local_80,lVar7,lVar13);
    if (lVar7 != 0) {
      plVar8 = plVar12 + 0xb;
      local_c0 = plVar8;
      if (lVar2 != 0) {
        (*(code *)PTR___rust_dealloc_001de3d0)(local_100,lVar2,1);
      }
      if (local_108 != 0) {
        (*(code *)PTR___rust_dealloc_001de3d0)(local_e8,local_108,1);
      }
      if (plVar8 != local_f8) {
        plVar12 = plVar12 + 0xf;
        uVar14 = uVar14 / 0x58;
        do {
          if (plVar12[-4] != 0) {
            (*(code *)PTR___rust_dealloc_001de3d0)(plVar12[-3],plVar12[-4],1);
          }
          if (plVar12[-1] != 0) {
            (*(code *)PTR___rust_dealloc_001de3d0)(*plVar12,plVar12[-1],1);
          }
          plVar12 = plVar12 + 0xb;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
      if (local_d8 == 0) {
        return lVar7;
      }
      (*(code *)PTR___rust_dealloc_001de3d0)(local_e0,local_d8 * 0x58,8);
      return lVar7;
    }
    lVar7 = plVar8[2];
    if (lVar7 == *plVar8) {
                    /* try { // try from 00139481 to 00139490 has its CatchHandler @ 001396a8 */
      (*(code *)PTR_grow_one_001de4a0)(plVar8,&PTR_s_strategies_comm_strategy_strateg_001d84f8);
    }
    lVar5 = plVar8[1];
    *(long *)(lVar5 + lVar7 * 0x18) = lVar2;
    *(long *)(lVar5 + 8 + lVar7 * 0x18) = local_100;
    *(long *)(lVar5 + 0x10 + lVar7 * 0x18) = lVar13;
    plVar8[2] = lVar7 + 1;
    goto joined_r0x001393d7;
  }
  if (lVar2 != 0) {
    (*(code *)PTR___rust_dealloc_001de3d0)(lVar7,lVar2,1);
  }
joined_r0x001393d7:
  if (local_108 != 0) {
    (*(code *)PTR___rust_dealloc_001de3d0)(local_e8,local_108,1);
  }
  plVar9 = plVar12 + 0xb;
  if (plVar9 == local_f8) goto code_r0x001394e4;
  goto LAB_0013929a;
code_r0x001394e4:
  local_60 = local_d8;
  local_58 = local_e0;
  plVar9 = plVar12 + 0xb;
  goto LAB_001394fa;
}




// ELF address 0x000000000003d9f0; strategy_comm3_2::place

/* strategy_comm3_2::place */

void __rustcall strategy_comm3_2::place(double param_1,undefined8 param_2,undefined8 param_3)

{
  if (0.0 < param_1) {
    (*(code *)PTR_place_order_iap_with_target_001de5c8)(param_2,param_3,1);
    return;
  }
  (*(code *)PTR_place_order_iap_001de5d0)();
  return;
}




// ELF address 0x0000000000039e10; <strategy_comm3_2::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin

/* _<strategy_comm3_2::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin */

undefined8 __rustcall
_<strategy_comm3_2::StrategyComm3_as_future_backtest_sdk::plugin::StrategyPlugin>::on_begin
          (long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long local_418;
  long local_410;
  ulong local_408;
  long local_400;
  ulong local_3f8;
  undefined4 *local_3f0;
  undefined *local_3e8;
  long *local_3e0;
  code *local_3d8;
  undefined **local_3d0;
  undefined8 local_3c8;
  undefined4 **local_3c0;
  undefined8 local_3b8;
  undefined8 local_3b0;
  undefined1 local_3a0 [24];
  undefined4 local_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 local_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 local_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  long local_348;
  long lStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  long local_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  long local_198;
  long lStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  
  (*(code *)PTR_custom_config_001de4b8)(&local_418);
                    /* try { // try from 00139e39 to 00139e67 has its CatchHandler @ 0013a123 */
  _<toml::de::Deserializer_as_serde_core::de::Deserializer>::deserialize_struct
            (&local_1e0,local_410,local_408,"Comm3Params",0xb,
             &PTR_s_signal_modepv1_alphacost_alphasi_001d8510,0x2c);
  if (local_1e0 == 2) {
    local_338 = local_188;
    uStack_330 = uStack_180;
    local_348 = local_198;
    lStack_340 = lStack_190;
    local_358 = local_1a8;
    uStack_354 = uStack_1a4;
    uStack_350 = uStack_1a0;
    uStack_34c = uStack_19c;
    local_368 = local_1b8;
    uStack_364 = uStack_1b4;
    uStack_360 = uStack_1b0;
    uStack_35c = uStack_1ac;
    local_378 = local_1c8;
    uStack_374 = uStack_1c4;
    uStack_370 = uStack_1c0;
    uStack_36c = uStack_1bc;
    local_388 = local_1d8;
    uStack_384 = uStack_1d4;
    uStack_380 = uStack_1d0;
    uStack_37c = uStack_1cc;
    local_3f8 = 200;
    if (local_408 < 200) {
      local_3f8 = local_408;
    }
    if ((200 < local_408) && (*(char *)(local_410 + local_3f8) < -0x40)) {
                    /* try { // try from 0013a10c to 0013a120 has its CatchHandler @ 0013a128 */
      (*(code *)PTR_slice_error_fail_001de4d0)
                (local_410,local_408,0,local_3f8,&PTR_s_strategies_comm_strategy_strateg_001d87d0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    local_400 = local_410;
    local_3f0 = &local_388;
    local_3e8 = PTR_fmt_001de4c0;
    local_3e0 = &local_400;
    local_3d8 = _<&T_as_core::fmt::Display>::fmt;
    local_3d0 = &PTR_s__custom__parse_error____Raw__001d87e8;
    local_3c8 = 2;
    local_3b0 = 0;
    local_3c0 = &local_3f0;
    local_3b8 = 2;
                    /* try { // try from 00139f4f to 00139f6e has its CatchHandler @ 0013a128 */
    (*(code *)PTR_format_inner_001de4c8)(local_3a0,&local_3d0);
    uVar4 = anyhow::error::_<impl_anyhow::Error>::msg(local_3a0);
    if (CONCAT44(uStack_36c,uStack_370) != 0) {
      (*(code *)PTR___rust_dealloc_001de3d0)
                (CONCAT44(uStack_364,local_368),CONCAT44(uStack_36c,uStack_370),1);
    }
    if (lStack_340 != 0) {
      (*(code *)PTR___rust_dealloc_001de3d0)(local_338,lStack_340,1);
    }
    puVar3 = PTR___rust_dealloc_001de3d0;
    lVar2 = CONCAT44(uStack_34c,uStack_350);
    if (local_348 != 0) {
      puVar6 = (undefined8 *)(lVar2 + 8);
      lVar5 = local_348;
      do {
        if (puVar6[-1] != 0) {
          (*(code *)puVar3)(*puVar6,puVar6[-1],1);
        }
        puVar6 = puVar6 + 3;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    if (CONCAT44(uStack_354,local_358) != 0) {
      (*(code *)PTR___rust_dealloc_001de3d0)(lVar2,CONCAT44(uStack_354,local_358) * 0x18,8);
    }
  }
  else {
    (*(code *)PTR_memcpy_001de430)(&local_388,&uStack_1d0,0x1a0);
    if ((int)*param_1 != 2) {
      if (param_1[8] != 0) {
        (*(code *)PTR___rust_dealloc_001de3d0)(param_1[9],param_1[8],1);
      }
      if (param_1[0xb] != 0) {
        (*(code *)PTR___rust_dealloc_001de3d0)(param_1[0xc],param_1[0xb],1);
      }
      if (param_1[0xe] != 0) {
        (*(code *)PTR___rust_dealloc_001de3d0)(param_1[0xf],param_1[0xe] << 3,8);
      }
      if (param_1[0x11] != 0) {
        (*(code *)PTR___rust_dealloc_001de3d0)(param_1[0x12],param_1[0x11],1);
      }
    }
    *param_1 = local_1e0;
    param_1[1] = CONCAT44(uStack_1d4,local_1d8);
    (*(code *)PTR_memcpy_001de430)(param_1 + 2,&local_388,0x1a0);
    uVar4 = 0;
  }
  if (local_418 != 0) {
    (*(code *)PTR___rust_dealloc_001de3d0)(local_410,local_418,1);
  }
  return uVar4;
}




// ELF address 0x000000000003d6f0; <strategy_comm3_2::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth

/* _<strategy_comm3_2::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth */

undefined8 __rustcall
_<strategy_comm3_2::StrategyComm3_as_future_backtest_sdk::plugin::StrategyPlugin>::on_depth
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
  
  if (*(long *)(param_1 + 0x1f8) != 0) {
    uVar11 = core::hash::BuildHasher::hash_one(param_1 + 0x200);
    puVar8 = PTR_bcmp_001de488;
    lVar3 = *(long *)(param_1 + 0x1e0);
    uVar4 = *(ulong *)(param_1 + 0x1e8);
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
          uVar12 = core::hash::BuildHasher::hash_one(param_1 + 0x200,param_2 + 0x20);
          hashbrown::raw::RawTable<T,A>::remove_entry
                    (&lStack_60,param_1 + 0x1e0,uVar12,param_2 + 0x20);
          if (lStack_60 == 0) {
            return 0;
          }
          (*(code *)PTR___rust_dealloc_001de3d0)(uStack_58,lStack_60,1);
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




// ELF address 0x000000000003d8d0; <strategy_comm3_2::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_finish

/* _<strategy_comm3_2::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_finish */

undefined8 __rustcall
_<strategy_comm3_2::StrategyComm3_as_future_backtest_sdk::plugin::StrategyPlugin>::on_finish
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
  
  lVar6 = (*(code *)PTR_para_001de4d8)(param_2);
  uVar2 = *(undefined2 *)(lVar6 + 0x34);
  uVar7 = *(undefined8 *)(lVar6 + 0x28);
  local_48 = *(undefined4 *)(lVar6 + 0x18);
  uStack_44 = *(undefined4 *)(lVar6 + 0x1c);
  uStack_40 = *(undefined4 *)(lVar6 + 0x20);
  uStack_3c = *(undefined4 *)(lVar6 + 0x24);
  uVar3 = *(undefined4 *)(lVar6 + 0x30);
  uVar1 = *(undefined1 *)(lVar6 + 0x30);
  _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone
            (&local_80,lVar6,anon_4776545aeff8e403db59e493c9f42238_69_llvm_9362780676010287746);
  local_68 = CONCAT44(uStack_44,local_48);
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_58 = uVar7;
  local_50 = uVar3;
  local_4c = uVar2;
                    /* try { // try from 0013d93e to 0013d956 has its CatchHandler @ 0013d9d3 */
  uVar5 = (*(code *)PTR_is_night_001de5c0)(param_2);
  uVar7 = (*(code *)PTR_all_in_001de518)(param_2,uVar5,uVar1);
  puVar4 = PTR___rust_dealloc_001de3d0;
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
    (*(code *)PTR___rust_dealloc_001de3d0)(local_78,local_80 * 0x18,8);
  }
  return uVar7;
}




// ELF address 0x000000000003a160; <strategy_comm3_2::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _<strategy_comm3_2::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal */

double *** __rustcall
_<strategy_comm3_2::StrategyComm3_as_future_backtest_sdk::plugin::StrategyPlugin>::on_signal
          (double *param_1,double param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  char cVar3;
  undefined1 uVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  long lVar8;
  double ***pppdVar9;
  ulong uVar10;
  double **ppdVar11;
  undefined *puVar12;
  long extraout_RDX;
  long extraout_RDX_00;
  long lVar13;
  double **ppdVar14;
  undefined *puVar15;
  long lVar16;
  byte bVar17;
  long lVar18;
  double ***pppdVar19;
  undefined8 uVar20;
  long *plVar21;
  bool bVar22;
  ulong uVar23;
  double extraout_XMM0_Qa;
  double dVar24;
  double *pdVar25;
  double extraout_XMM0_Qb;
  double extraout_XMM0_Qb_00;
  double extraout_XMM0_Qb_01;
  double extraout_XMM0_Qb_02;
  double extraout_XMM0_Qb_03;
  double extraout_XMM0_Qb_04;
  double extraout_XMM0_Qb_05;
  double extraout_XMM0_Qb_06;
  double *extraout_XMM1_Qa;
  double extraout_XMM1_Qb;
  double dVar26;
  double *pdVar27;
  double *pdVar28;
  double *pdVar29;
  double *pdVar30;
  double dVar31;
  undefined1 auVar32 [16];
  char local_8d9;
  undefined8 local_8d8;
  undefined1 uStack_8ca;
  char cStack_8c9;
  double ***local_8c8;
  double dStack_8c0;
  uint local_8b8;
  undefined4 uStack_8b4;
  double dStack_8b0;
  double local_8a8;
  undefined8 uStack_8a0;
  double local_898;
  undefined8 local_890;
  undefined8 local_888;
  char local_87a;
  char local_879;
  double ***local_878;
  undefined8 uStack_870;
  double **local_868;
  double *pdStack_860;
  double *local_858;
  double dStack_850;
  double *local_848;
  double dStack_840;
  double dStack_830;
  double *local_828;
  double dStack_820;
  double dStack_818;
  double *local_810;
  double *local_808;
  double ***pppdStack_800;
  double **local_7f8;
  undefined1 *puStack_7f0;
  double *local_7e8;
  undefined *puStack_7e0;
  double *pdStack_7d8;
  code *pcStack_7d0;
  double *local_7c8;
  double dStack_7c0;
  double local_7b8;
  double *pdStack_7b0;
  char *pcStack_7a8;
  undefined8 uStack_7a0;
  double local_798;
  double dStack_790;
  double *local_780;
  double ***pppdStack_778;
  double **local_770;
  undefined1 *puStack_768;
  double *local_760;
  undefined *puStack_758;
  double *pdStack_750;
  code *pcStack_748;
  double *pdStack_740;
  undefined *puStack_738;
  char **ppcStack_730;
  code *pcStack_728;
  double **ppdStack_720;
  code *pcStack_718;
  double local_678;
  double local_670;
  double local_668;
  undefined4 local_65c;
  double *local_658;
  double ***pppdStack_650;
  double **ppdStack_648;
  double *pdStack_640;
  double ***pppdStack_638;
  double **ppdStack_630;
  double dStack_620;
  undefined8 uStack_618;
  double *local_608;
  double dStack_600;
  double local_5f8;
  double dStack_5f0;
  double local_5e8;
  undefined8 uStack_5e0;
  double *local_5d8;
  undefined8 uStack_5d0;
  double *local_5c8;
  double dStack_5c0;
  double local_5b8;
  double *pdStack_5b0;
  double local_5a8;
  double *local_5a0;
  double local_598;
  double *local_590;
  double local_588;
  double local_580;
  double local_578;
  double local_570;
  double *local_568;
  double ***pppdStack_560;
  double **local_558;
  long local_550;
  double dStack_548;
  undefined8 local_540;
  double **local_538;
  long local_530;
  double **local_528;
  double *local_520;
  double ***pppdStack_518;
  double **local_510;
  double local_508;
  double dStack_500;
  double *local_4f8;
  double dStack_4f0;
  double local_4e8;
  double dStack_4e0;
  double *local_4d8;
  double dStack_4d0;
  double *local_4c8;
  double dStack_4c0;
  double *local_4b8;
  double dStack_4b0;
  double local_4a8;
  double dStack_4a0;
  double local_498;
  double dStack_490;
  double local_488;
  double dStack_480;
  double local_478;
  double *pdStack_470;
  double *local_468;
  double dStack_460;
  double local_458;
  double dStack_450;
  double local_448;
  double dStack_440;
  double local_438;
  double dStack_430;
  double local_428;
  double local_420;
  double dStack_418;
  double local_410;
  double local_408;
  char local_400;
  char local_3ff;
  char local_3fe;
  long local_3f8;
  double ***local_3f0;
  long local_3e8;
  long local_3e0;
  undefined8 local_3d8;
  double local_3c8;
  double dStack_3c0;
  long local_3b0;
  long *local_3a8;
  long local_3a0;
  double ***local_398;
  undefined8 uStack_390;
  double local_388;
  undefined4 local_380;
  char local_37c;
  undefined1 local_37b;
  double local_378;
  double local_370;
  double *pdStack_368;
  double *pdStack_360;
  double dStack_358;
  double dStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  double dStack_330;
  undefined8 uStack_328;
  double *pdStack_320;
  double *pdStack_318;
  double dStack_310;
  double *pdStack_308;
  undefined1 uStack_300;
  char cStack_2ff;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  double dStack_2e0;
  undefined8 uStack_2d8;
  double ***pppdStack_2d0;
  double *pdStack_2c8;
  double dStack_2c0;
  double *pdStack_2b8;
  undefined1 uStack_2b0;
  byte bStack_2af;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  double dStack_260;
  undefined8 uStack_258;
  double ***pppdStack_250;
  double *pdStack_248;
  double dStack_240;
  double *pdStack_238;
  undefined2 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  double dStack_210;
  undefined8 uStack_208;
  double *pdStack_200;
  double *pdStack_1f8;
  double *pdStack_1f0;
  double *pdStack_1e8;
  undefined2 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  double *pdStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  int local_158;
  undefined4 uStack_154;
  double dStack_150;
  byte local_148;
  undefined7 uStack_147;
  double dStack_140;
  long local_138;
  undefined8 local_130;
  double local_118;
  double ***local_110 [10];
  double *local_c0 [14];
  undefined1 auStack_50 [32];
  
  lVar8 = (*(code *)PTR_para_001de4d8)(param_3);
  cVar5 = *(char *)(lVar8 + 0x34);
  local_8c8 = *(double ****)(lVar8 + 0x28);
  uVar4 = *(undefined1 *)(lVar8 + 0x35);
  local_878 = *(double ****)(lVar8 + 0x18);
  uStack_870 = *(undefined8 *)(lVar8 + 0x20);
  pppdVar9 = *(double ****)(lVar8 + 0x30);
  _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone
            (&local_3b0,lVar8,anon_4776545aeff8e403db59e493c9f42238_69_llvm_9362780676010287746);
  local_380 = SUB84(pppdVar9,0);
  local_398 = local_878;
  uStack_390 = uStack_870;
  local_388 = (double)local_8c8;
  local_37c = cVar5;
  local_37b = uVar4;
  if (*(int *)param_1 == 2) {
                    /* try { // try from 0013ab63 to 0013ab7b has its CatchHandler @ 0013d674 */
    (*(code *)PTR_expect_failed_001de528)
              ("on_begin must be called firston_signal code= score= vol_alpha=",0x1d,
               &PTR_s_strategies_comm_strategy_strateg_001d8820);
    goto LAB_0013ab7c;
  }
                    /* try { // try from 0013a1fb to 0013a20f has its CatchHandler @ 0013d674 */
  (*(code *)PTR_clone_001de4e0)
            (&local_808,param_1 + 8,&PTR_s_strategies_comm_strategy_strateg_001d8a10);
  local_8c8 = (double ***)param_1[0x14];
  dStack_8c0 = param_1[0x15];
                    /* try { // try from 0013a22b to 0013a23f has its CatchHandler @ 0013d66f */
  local_8a8 = param_2;
  local_878 = pppdVar9;
  (*(code *)PTR_clone_001de4e0)
            (&local_158,param_1 + 0xb,&PTR_s_strategies_comm_strategy_strateg_001d8a10);
  ppdVar11 = (double **)param_1[0x10];
  uVar23 = (long)ppdVar11 * 8;
  if (0x7ffffffffffffff8 < uVar23 || (ulong)ppdVar11 >> 0x3d != 0) {
    uVar20 = 0;
LAB_0013a274:
                    /* try { // try from 0013a274 to 0013a286 has its CatchHandler @ 0013d68c */
    (*(code *)PTR_handle_error_001de468)
              (uVar20,uVar23,anon_c1f72e355104cf01b9935a66b28bb254_8_llvm_17908147241132672453);
LAB_0013ab7c:
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_848 = (double *)param_1[0x16];
  dStack_840 = param_1[0x17];
  dVar24 = param_1[0xf];
  local_8d8 = param_3;
  local_87a = cVar5;
  local_810 = param_1;
  if (uVar23 == 0) {
    local_530 = 8;
    local_868 = (double **)0x0;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001de3f0)();
    uVar20 = 8;
    local_530 = (*(code *)PTR___rust_alloc_001de3c8)(uVar23,8);
    local_868 = ppdVar11;
    if (local_530 == 0) goto LAB_0013a274;
  }
  (*(code *)PTR_memcpy_001de430)(local_530,dVar24,uVar23);
  pdVar30 = local_810;
  dStack_8b0 = local_810[0x19];
  local_8b8 = SUB84(local_810[0x18],0);
  uStack_8b4 = (undefined4)((ulong)local_810[0x18] >> 0x20);
  cVar5 = *(char *)(local_810 + 0x35);
  local_828 = (double *)local_810[0x1a];
  dStack_820 = local_810[0x1b];
  local_858 = (double *)local_810[0x1c];
  dStack_850 = local_810[0x1d];
  local_7c8 = (double *)local_810[0x1e];
  dStack_7c0 = local_810[0x1f];
  cVar3 = *(char *)((long)local_810 + 0x1a9);
  local_5f8 = local_810[0x20];
  dStack_5f0 = local_810[0x21];
  local_798 = local_810[0x22];
  dStack_790 = local_810[0x23];
  local_3c8 = local_810[0x24];
  dStack_3c0 = local_810[0x25];
  local_5b8 = local_810[0x26];
  pdStack_5b0 = (double *)local_810[0x27];
  local_5c8 = (double *)local_810[0x28];
  dStack_5c0 = local_810[0x29];
  dVar24 = *local_810;
  local_5d8 = (double *)local_810[1];
  local_5e8 = local_810[2];
  local_608 = (double *)local_810[3];
  local_668 = local_810[4];
  local_670 = local_810[5];
  local_678 = local_810[6];
  local_370 = local_810[7];
  local_288 = local_810[0x2a];
  dStack_280 = local_810[0x2b];
  local_298 = local_810[0x2c];
  dStack_290 = local_810[0x2d];
  local_879 = *(char *)((long)local_810 + 0x1aa);
  local_2a8 = local_810[0x2e];
  dStack_2a0 = local_810[0x2f];
  local_378 = local_810[0x30];
                    /* try { // try from 0013a44e to 0013a462 has its CatchHandler @ 0013d645 */
  (*(code *)PTR_clone_001de4e0)
            (&local_780,local_810 + 0x11,&PTR_s_strategies_comm_strategy_strateg_001d8a10);
  plVar21 = local_3a8;
  dVar26 = local_8a8;
  puVar15 = PTR_bcmp_001de488;
  local_568 = local_808;
  pppdStack_560 = pppdStack_800;
  local_558 = local_7f8;
  local_508 = (double)local_8c8;
  dStack_500 = dStack_8c0;
  local_550 = CONCAT44(uStack_154,local_158);
  dStack_548 = dStack_150;
  local_540 = CONCAT71(uStack_147,local_148);
  local_4f8 = local_848;
  dStack_4f0 = dStack_840;
  local_538 = local_868;
  local_4e8 = (double)CONCAT44(uStack_8b4,local_8b8);
  dStack_4e0 = dStack_8b0;
  local_4d8 = local_828;
  dStack_4d0 = dStack_820;
  local_4c8 = local_858;
  dStack_4c0 = dStack_850;
  local_4b8 = local_7c8;
  dStack_4b0 = dStack_7c0;
  local_4a8 = local_5f8;
  dStack_4a0 = dStack_5f0;
  local_498 = local_798;
  dStack_490 = dStack_790;
  local_488 = local_3c8;
  dStack_480 = dStack_3c0;
  local_478 = local_5b8;
  pdStack_470 = pdStack_5b0;
  local_468 = local_5c8;
  dStack_460 = dStack_5c0;
  local_5a0 = local_5d8;
  local_598 = local_5e8;
  local_590 = local_608;
  local_588 = local_668;
  local_580 = local_670;
  local_578 = local_678;
  local_570 = local_370;
  local_458 = local_288;
  dStack_450 = dStack_280;
  local_448 = local_298;
  dStack_440 = dStack_290;
  local_3fe = local_879;
  local_438 = local_2a8;
  dStack_430 = dStack_2a0;
  local_428 = local_378;
  local_510 = local_770;
  local_520 = local_780;
  pppdStack_518 = pppdStack_778;
  local_420 = pdVar30[0x31];
  dStack_418 = pdVar30[0x32];
  local_410 = pdVar30[0x33];
  local_408 = pdVar30[0x34];
  local_5a8 = dVar24;
  local_528 = ppdVar11;
  local_400 = cVar5;
  local_3ff = cVar3;
  if (local_3a0 != 0) {
    local_8b8 = (uint)local_878;
    uStack_8b4 = (undefined4)((ulong)local_878 >> 0x20);
    dStack_8b0 = 0.0;
    local_848 = (double *)((long)local_8a8 + 0x48);
    local_8c8 = *(double ****)((long)local_8a8 + 0x50);
    lVar8 = *(long *)((long)local_8a8 + 0x58);
    lVar13 = local_3a0 * 0x18;
    lVar16 = 0;
    do {
      if ((*(long *)((long)plVar21 + lVar16 + 0x10) == lVar8) &&
         (iVar7 = (*(code *)puVar15)(*(undefined8 *)((long)plVar21 + lVar16 + 8),local_8c8,lVar8),
         iVar7 == 0)) {
                    /* try { // try from 0013a728 to 0013a73a has its CatchHandler @ 0013d620 */
        (*(code *)PTR_trade_codes_001de4e8)(&local_3f8,local_8d8);
        lVar13 = local_3e8;
        local_878 = local_3f0;
        if (local_3e8 != 0) {
          local_868 = *(double ***)((long)dVar26 + 8);
          lVar16 = *(long *)((long)dVar26 + 0x10);
          lVar2 = local_3e8 * 0x18;
          lVar18 = 0;
          goto LAB_0013a78d;
        }
        pppdVar9 = (double ***)0x0;
        goto LAB_0013a9d2;
      }
      lVar16 = lVar16 + 0x18;
    } while (lVar13 != lVar16);
  }
  pppdVar9 = (double ***)0x0;
LAB_0013a87c:
  if (local_568 != (double *)0x0) {
    (*(code *)PTR___rust_dealloc_001de3d0)(pppdStack_560,local_568,1);
  }
  if (local_550 != 0) {
    (*(code *)PTR___rust_dealloc_001de3d0)(dStack_548,local_550,1);
  }
  if (local_538 != (double **)0x0) {
    (*(code *)PTR___rust_dealloc_001de3d0)(local_530,(long)local_538 << 3,8);
  }
  if (local_520 != (double *)0x0) {
    (*(code *)PTR___rust_dealloc_001de3d0)(pppdStack_518,local_520,1);
  }
  puVar15 = PTR___rust_dealloc_001de3d0;
  if (local_3a0 != 0) {
    plVar21 = local_3a8 + 1;
    lVar8 = local_3a0;
    do {
      if (plVar21[-1] != 0) {
        (*(code *)puVar15)(*plVar21,plVar21[-1],1);
      }
      plVar21 = plVar21 + 3;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  if (local_3b0 != 0) {
    (*(code *)PTR___rust_dealloc_001de3d0)(local_3a8,local_3b0 * 0x18,8);
  }
  return pppdVar9;
  while (lVar18 = lVar18 + 0x18, lVar2 != lVar18) {
LAB_0013a78d:
    if ((*(long *)((long)local_878 + lVar18 + 0x10) == lVar16) &&
       (iVar7 = (*(code *)puVar15)(*(undefined8 *)((long)local_878 + lVar18 + 8),local_868,lVar16),
       dVar24 = local_8a8, uVar20 = local_8d8, iVar7 == 0)) {
      cVar5 = *(char *)((long)local_8a8 + 0x94);
                    /* try { // try from 0013a7c2 to 0013a82a has its CatchHandler @ 0013d60e */
      (*(code *)PTR_inst_start_time_sec_001de4f0)(local_8d8);
      cVar3 = (*(code *)PTR_is_trade_start_001de4f8)(uVar20,cVar5);
      if (cVar3 != '\0') {
        cVar3 = (*(code *)PTR_is_trade_end_001de500)(uVar20,cVar5);
        if (cVar3 != '\0') {
          if (cVar5 == '\0') {
            if (local_87a != '\0') goto LAB_0013aaa9;
          }
          else if (((ushort)(local_8b8 >> 0x18) & 1) != 0) {
LAB_0013aaa9:
                    /* try { // try from 0013aaa9 to 0013aac4 has its CatchHandler @ 0013d60e */
            pppdVar9 = (double ***)(*(code *)PTR_all_in_001de518)(uVar20,cVar5,local_8b8 & 1);
            goto LAB_0013a98a;
          }
        }
        (*(code *)PTR_clone_001de4e0)
                  (&local_898,dVar24,&PTR_s_strategies_comm_strategy_strateg_001d8838);
                    /* try { // try from 0013a82b to 0013a847 has its CatchHandler @ 0013d5aa */
        (*(code *)PTR_clone_001de4e0)
                  (&local_3e0,local_848,&PTR_s_strategies_comm_strategy_strateg_001d8850);
                    /* try { // try from 0013a852 to 0013a862 has its CatchHandler @ 0013d5a5 */
        (*(code *)PTR_depth_001de508)(&local_780,uVar20,local_890);
        if ((int)local_780 == 2) {
          pppdVar9 = (double ***)0x0;
        }
        else {
          (*(code *)PTR_memcpy_001de430)(&local_158,&local_780,0x108);
          local_878 = local_110[0];
          pppdVar9 = (double ***)0x0;
          if ((0.0 < (double)local_110[0]) && (local_848 = local_c0[0], 0.0 < (double)local_c0[0]))
          {
                    /* try { // try from 0013aa57 to 0013aa68 has its CatchHandler @ 0013d5af */
            local_868 = (double **)(*(code *)PTR_time_sec_001de510)(uVar20);
            if ((double)DAT_001172f8 < (double)local_868 - local_118) {
LAB_0013aa85:
              pppdVar9 = (double ***)0x0;
              goto joined_r0x0013b4a8;
            }
                    /* try { // try from 0013aacd to 0013ab34 has its CatchHandler @ 0013d5af */
            auVar32 = (*(code *)PTR_signal_parameter_id_001de520)(local_8c8,lVar8);
            uVar23 = 0;
            if ((auVar32 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
              uVar23 = auVar32._8_8_ & 0xffffffff;
            }
            local_65c = (undefined4)uVar23;
            if (local_3fe == '\x01') {
              (*(code *)PTR_clone_001de4e0)
                        (&local_658,&local_898,&PTR_s_strategies_comm_strategy_strateg_001d8868);
              hashbrown::rustc_entry::_<impl_hashbrown::map::HashMap<K,V,S,A>>::rustc_entry
                        (&local_780,local_810 + 0x42,&local_658);
              if (local_780 == (double *)0x8000000000000000) {
                local_808 = (double *)0x8000000000000000;
              }
              else {
                local_7e8 = local_760;
                puStack_7f0 = puStack_768;
                local_808 = local_780;
              }
              local_7f8 = local_770;
              pppdStack_800 = pppdStack_778;
              uVar20 = std::collections::hash::map::Entry<K,V>::or_insert_with
                                 (local_438,dStack_430,&local_808);
                    /* try { // try from 0013abe0 to 0013ac31 has its CatchHandler @ 0013d5af */
              uVar10 = strategy_comm3_2::vol_spread_ratio::VolSpreadRatio::update
                                 ((double)local_868 * _DAT_001173d0,local_848,local_878,uVar20);
              puVar15 = PTR_K1_MAP_G1_LOW_001de530;
              if (((uVar10 & 1) == 0) || (local_428 < extraout_XMM0_Qa)) goto LAB_0013ac34;
              local_8b8 = (uint)CONCAT71((int7)(uVar23 >> 8),1);
              if (*(long *)(PTR_K1_MAP_G1_LOW_001de530 + 0x30) != 2) {
                once_cell::imp::OnceCell<T>::initialize
                          (PTR_K1_MAP_G1_LOW_001de530,PTR_K1_MAP_G1_LOW_001de530);
              }
            }
            else {
LAB_0013ac34:
              puVar15 = PTR_K1_MAP_G2_HIGH_001de538;
              if (*(long *)(PTR_K1_MAP_G2_HIGH_001de538 + 0x30) != 2) {
                    /* try { // try from 0013d53b to 0013d545 has its CatchHandler @ 0013d5af */
                once_cell::imp::OnceCell<T>::initialize
                          (PTR_K1_MAP_G2_HIGH_001de538,PTR_K1_MAP_G2_HIGH_001de538);
              }
              local_8b8 = 0;
            }
            lVar8 = hashbrown::map::HashMap<K,V,S,A>::get_inner(puVar15,&local_65c);
            pdVar30 = (double *)&DAT_001172f8;
            if (lVar8 != 0) {
              pdVar30 = (double *)(lVar8 + 8);
            }
            local_8c8 = (double ***)*pdVar30;
            local_8d9 = (char)local_8b8;
            local_7b8 = (double)local_8c8;
            uVar4 = strategy_comm3_2::Comm3Params::low_action_enum(pppdStack_518,local_510);
            local_828 = (double *)CONCAT71(local_828._1_7_,uVar4);
            cVar5 = strategy_comm3_2::Comm3Params::signal_mode(pppdStack_560,local_558);
                    /* WARNING: Switch is manually overridden */
            switch(cVar5) {
            case '\0':
              pdStack_860 = (double *)(*(double *)((long)local_8a8 + 0x70) * local_508);
              break;
            case '\x01':
              pdStack_860 = *(double **)((long)local_8a8 + 0x78);
              break;
            case '\x02':
              pdStack_860 = *(double **)((long)local_8a8 + 0x70);
              break;
            case '\x03':
              dVar24 = *(double *)((long)local_8a8 + 0x70);
              local_8a8 = (double)(~-(ulong)NAN(dVar24) &
                                   (_s__00117a30 & (ulong)dVar24 | ram0x00117940) |
                                  DAT_00117388 & -(ulong)NAN(dVar24));
              uStack_8a0 = _UNK_00117948;
              dVar24 = (double)(*(code *)PTR_pow_001de540)
                                         ((ulong)dVar24 & _DAT_00117410,
                                          (double)DAT_001172f8 / (double)local_8c8);
              pdStack_860 = (double *)(dVar24 * local_8a8);
            }
            if (((local_158 == 1) && ((local_148 & 1) != 0)) &&
               (DAT_00117330 <
                (double)((ulong)((dStack_150 - dStack_140) / (dStack_150 + dStack_140)) &
                        _DAT_00117410))) goto LAB_0013aa85;
                    /* try { // try from 0013adbd to 0013b035 has its CatchHandler @ 0013d5af */
            local_8a8 = (double)(*(code *)PTR_time_sec_001de510)(local_8d8);
            local_8c8 = local_398;
            dStack_830 = (double)(*(code *)PTR_spread_bp_001de548)(local_8d8,local_890,local_888);
            pdStack_7b0 = (double *)(*(code *)PTR_fee_bp_001de550)(local_8d8,local_890,local_888);
            local_5f8 = (double)(*(code *)PTR_contract_mult_001de558)(local_8d8,local_890,local_888)
            ;
            local_798 = (double)(*(code *)PTR_price_step_001de560)(local_8d8,local_890,local_888);
            local_7c8 = (double *)(*(code *)PTR_vol_step_001de568)(local_8d8,local_890,local_888);
            (*(code *)PTR_position_001de570)(local_8d8,local_890,local_888);
            local_858 = extraout_XMM1_Qa;
            dStack_850 = extraout_XMM1_Qb;
            dStack_818 = (double)(*(code *)PTR_position_holding_secs_001de578)
                                           (local_8d8,local_890,local_888);
            local_8c8 = (double ***)((double)local_8c8 / _DAT_001173d0);
            dStack_818 = dStack_818 + (double)local_8c8;
            uVar4 = (*(code *)PTR_is_should_lock_001de580)(local_8d8,local_890,local_888);
            local_3c8 = (double)CONCAT71(local_3c8._1_7_,uVar4);
            lVar8 = 0x150;
            if (local_8d9 == '\x01') {
              ppdVar11 = &pdStack_470;
              if (local_5a8._0_1_ != '\0') {
                ppdVar11 = &local_5a0;
              }
              ppdVar14 = &local_468;
              if (local_598._0_1_ != '\0') {
                ppdVar14 = &local_590;
              }
              pdVar30 = &dStack_460;
              if (local_588._0_1_ != '\0') {
                pdVar30 = &local_580;
              }
              lVar8 = 0x150;
              if (local_578._0_1_ != '\0') {
                lVar8 = 0x38;
              }
            }
            else {
              ppdVar11 = &pdStack_470;
              ppdVar14 = &local_468;
              pdVar30 = &dStack_460;
            }
            local_5e8 = *(double *)((long)&local_5a8 + lVar8);
            local_5b8 = *pdVar30;
            local_5d8 = *ppdVar14;
            local_5c8 = *ppdVar11;
            dStack_5c0 = 0.0;
            uStack_5d0 = 0;
            pdStack_5b0 = (double *)0x0;
            uStack_5e0 = 0;
            pdStack_368 = local_5c8;
            pdStack_360 = local_5d8;
            dStack_358 = local_5b8;
            dStack_350 = local_5e8;
            strategy_comm3_2::signal_trigger::dynamic_threshold
                      (dStack_818,dStack_450,local_448,dStack_440,&pdStack_178,&pdStack_368);
            uStack_8ca = strategy_comm3_2::Comm3Params::signal_trigger_mode(dStack_548,local_540);
            (*(code *)PTR_clone_001de4e0)
                      (&local_808,&local_898,&PTR_s_strategies_comm_strategy_strateg_001d8880);
                    /* try { // try from 0013b036 to 0013b055 has its CatchHandler @ 0013d580 */
            (*(code *)PTR_clone_001de4e0)
                      (&local_780,&local_3e0,&PTR_s_strategies_comm_strategy_strateg_001d8898);
            ppdStack_648 = local_7f8;
            local_658 = local_808;
            pppdStack_650 = pppdStack_800;
            pdStack_640 = local_780;
            pppdStack_638 = pppdStack_778;
            ppdStack_630 = local_770;
                    /* try { // try from 0013b0a7 to 0013b58a has its CatchHandler @ 0013d5af */
            hashbrown::rustc_entry::_<impl_hashbrown::map::HashMap<K,V,S,A>>::rustc_entry
                      (&local_780,local_810 + 0x36,&local_658);
            if (local_780 == (double *)0x8000000000000000) {
              local_808 = (double *)0x8000000000000000;
            }
            else {
              pdStack_7d8 = pdStack_750;
              pcStack_7d0 = pcStack_748;
              local_7e8 = local_760;
              puStack_7e0 = puStack_758;
              puStack_7f0 = puStack_768;
              local_808 = local_780;
            }
            local_7f8 = local_770;
            pppdStack_800 = pppdStack_778;
            local_780 = (double *)&uStack_8ca;
            pppdStack_778 = &local_538;
            local_770 = &pdStack_178;
            lVar8 = std::collections::hash::map::Entry<K,V>::or_insert_with(&local_808,&local_780);
            local_8a8 = local_8a8 + (double)local_8c8;
            strategy_comm3_2::signal_trigger::SignalTrigger::update_score
                      (local_8a8,pdStack_860,0,0,lVar8,0);
            *(undefined8 *)(lVar8 + 0x50) = uStack_168;
            *(undefined8 *)(lVar8 + 0x58) = uStack_160;
            *(double **)(lVar8 + 0x40) = pdStack_178;
            *(undefined8 *)(lVar8 + 0x48) = uStack_170;
                    /* WARNING: Switch is manually overridden */
            switch(uStack_8ca) {
            case 0:
              if (cVar5 == '\0') {
                strategy_comm3_2::signal_trigger::SignalTrigger::point_signal_trigger_pv1_spread
                          (dStack_500,dStack_830,&local_780,lVar8);
                goto joined_r0x0013b2bb;
              }
              if (cVar5 == '\x03') {
                strategy_comm3_2::signal_trigger::SignalTrigger::point_signal_trigger_pv4
                          (dStack_500,pdStack_7b0,dStack_830,&local_780,lVar8);
                local_780._0_1_ = (char)local_780;
                pppdVar9 = pppdStack_778;
                if ((char)local_780 == '\x05') goto joined_r0x0013b4a8;
              }
              else {
                dVar24 = *(double *)(lVar8 + 0x38);
                if (*(double *)(lVar8 + 0x40) <= dVar24) {
                  local_780._0_1_ = '\0';
                }
                else {
                  local_780._0_1_ = '\x03';
                  if ((dVar24 < *(double *)(lVar8 + 0x58)) &&
                     (local_780._0_1_ = '\x02', *(double *)(lVar8 + 0x50) < dVar24)) {
                    local_780._0_1_ = (*(double *)(lVar8 + 0x48) < dVar24) * '\x03' + '\x01';
                  }
                }
              }
              goto LAB_0013b348;
            case 1:
              strategy_comm3_2::signal_trigger::SignalTrigger::windows_mean_trigger
                        (local_4f8,&local_780,lVar8);
              break;
            case 2:
              strategy_comm3_2::signal_trigger::SignalTrigger::windows_std_trigger
                        (local_4f8,&local_780,lVar8);
              break;
            case 3:
              strategy_comm3_2::signal_trigger::SignalTrigger::windows_quantile_trigger
                        (dStack_4f0,local_4f8,&local_780,lVar8);
              break;
            case 4:
              strategy_comm3_2::signal_trigger::SignalTrigger::windows_sharpe_trigger
                        (local_4f8,&local_780,lVar8);
              break;
            case 5:
              strategy_comm3_2::signal_trigger::SignalTrigger::windows_rsi_trigger
                        (local_4f8,&local_780,lVar8);
            }
joined_r0x0013b2bb:
            pppdVar9 = pppdStack_778;
            if ((char)local_780 != '\x05') {
LAB_0013b348:
              cStack_8c9 = (char)local_780;
              puVar15 = PTR_fmt_001de588;
              local_780 = &local_898;
              pppdStack_778 = (double ***)_<alloc::string::String_as_core::fmt::Display>::fmt;
              local_770 = &pdStack_860;
              puStack_768 = PTR_fmt_001de588;
              local_760 = &dStack_830;
              puStack_758 = PTR_fmt_001de588;
              pdStack_750 = &local_7b8;
              pcStack_748 = (code *)PTR_fmt_001de588;
              pdStack_740 = (double *)&local_8d9;
              puStack_738 = PTR_fmt_001de590;
              ppcStack_730 = (char **)&cStack_8c9;
              pcStack_728 = _<core::option::Option<T>as_core::fmt::Debug>::fmt;
              local_808 = (double *)&UNK_001d88b0;
              pppdStack_800 = (double ***)0x6;
              local_7e8 = (double *)&UNK_00117fa8;
              puStack_7e0 = (undefined *)0x6;
              local_7f8 = &local_780;
              puStack_7f0 = (undefined1 *)0x6;
              (*(code *)PTR_format_inner_001de4c8)(auStack_50,&local_808);
              future_backtest_sdk::context::StrategyContext::log_debug(local_8d8,auStack_50);
              uVar4 = (*(code *)PTR_margin_filter_001de598)(local_8d8,cStack_8c9);
              pppdVar9 = (double ***)
                         (*(code *)PTR_cancel_by_pending_ts_001de5a0)(local_420,local_8d8,1);
              if (pppdVar9 == (double ***)0x0) {
                bVar6 = (*(code *)PTR_impact_block_check_001de5a8)
                                  (local_8a8,local_848,local_878,local_8d8,uVar4);
                if (((char)local_828 == '\x01' && (char)local_8b8 == '\x01') && ((bVar6 & 5) == 0))
                {
                  bVar6 = 4;
                }
                plVar21 = &local_3e0;
                if (local_3a0 != 0) {
                  plVar21 = local_3a8;
                }
                puVar12 = &UNK_001d8928;
                if (local_3a0 == 0) {
                  puVar12 = &UNK_001d8910;
                }
                (*(code *)PTR_clone_001de4e0)(&dStack_620,plVar21,puVar12);
                local_8a8 = local_4e8;
                uStack_8a0 = 0;
                local_8c8 = (double ***)dStack_4e0;
                dStack_8c0 = 0.0;
                local_608 = local_4d8;
                dStack_600 = 0.0;
                bVar22 = (char)local_828 == '\x02';
                local_668 = *(double *)(lVar8 + 0x40);
                local_670 = *(double *)(lVar8 + 0x48);
                local_828 = *(double **)(lVar8 + 0x50);
                local_678 = *(double *)(lVar8 + 0x58);
                if ((bVar6 != 4) && (local_3ff != '\0')) {
                  pdVar30 = local_810 + 0x3c;
                    /* try { // try from 0013b622 to 0013b8cd has its CatchHandler @ 0013d566 */
                  lVar8 = hashbrown::map::HashMap<K,V,S,A>::get_inner(pdVar30,&local_898);
                  if (lVar8 != 0) {
                    if ((local_4a8 <= 0.0) ||
                       (((double)local_868 - *(double *)(lVar8 + 0x28)) * _DAT_001173d0 < local_4a8)
                       ) goto override_jmp_0013b6a5_case_4;
                    hashbrown::map::HashMap<K,V,S,A>::remove(&local_780,pdVar30,&local_898);
                  }
                }
                bVar17 = bVar22 & (byte)local_8b8;
                    /* WARNING: Switch is manually overridden */
                switch(bVar6) {
                case 0:
                  if ((_DAT_001173d8 <= (double)local_858) ||
                     (dStack_4b0 / _DAT_001173d0 <= dStack_818)) {
                    pdVar27 = (double *)0x0;
                    pdVar30 = local_858;
                    if ((double)local_858 <= 0.0) {
                      pdVar30 = pdVar27;
                    }
                    dVar26 = (double)(~-(ulong)(dStack_490 < 0.0) & (ulong)dStack_490 |
                                     -(ulong)(dStack_490 < 0.0) & _DAT_001172a0) - (double)pdVar30;
                    dVar31 = ((double)(~-(ulong)(local_488 < 0.0) & (ulong)local_488 |
                                      -(ulong)(local_488 < 0.0) & _DAT_001172a0) / local_5f8) /
                             (double)local_878 - (double)pdVar30;
                    dVar24 = dVar31;
                    if (dVar26 <= dVar31) {
                      dVar24 = dVar26;
                    }
                    pdVar28 = (double *)
                              (~-(ulong)NAN(dVar26) & (ulong)dVar24 |
                              -(ulong)NAN(dVar26) & (ulong)dVar31);
                    pdVar29 = (double *)
                              (~-(ulong)(dStack_4a0 < 0.0) & (ulong)dStack_4a0 |
                              -(ulong)(dStack_4a0 < 0.0) & _DAT_001172a0);
                    pdVar30 = (double *)
                              (((double)(~-(ulong)(local_498 < 0.0) & (ulong)local_498 |
                                        -(ulong)(local_498 < 0.0) & _DAT_001172a0) / local_5f8) /
                              (double)local_878);
                    if ((double)pdVar30 <= (double)DAT_001172f8) {
                      pdVar30 = DAT_001172f8;
                    }
                    if ((double)pdVar30 <= (double)pdVar29) {
                      pdVar29 = pdVar30;
                    }
                    pdVar25 = (double *)
                              (~-(ulong)(dStack_480 < 0.0) & (ulong)dStack_480 |
                              -(ulong)(dStack_480 < 0.0) & _DAT_001172a0);
                    pdVar30 = (double *)
                              (((double)(~-(ulong)(local_478 < 0.0) & (ulong)local_478 |
                                        _DAT_001172a0 & -(ulong)(local_478 < 0.0)) / local_5f8) /
                              (double)local_878);
                    if ((double)pdVar30 <= (double)DAT_001172f8) {
                      pdVar30 = DAT_001172f8;
                    }
                    if ((double)pdVar30 <= (double)pdVar25) {
                      pdVar25 = pdVar30;
                    }
                    pdVar30 = local_858;
                    if (0.0 <= (double)local_858) {
                      pdVar30 = pdVar27;
                    }
                    if ((double)pdVar29 <= (double)pdVar28) {
                      pdVar28 = pdVar29;
                    }
                    if ((double)((ulong)pdVar30 ^ _s__00117a30) <= (double)pdVar25) {
                      pdVar25 = (double *)((ulong)pdVar30 ^ _s__00117a30);
                    }
                    pdVar30 = (double *)((double)pdVar25 + (double)pdVar28);
                    if ((double)pdVar25 + (double)pdVar28 <= 0.0) {
                      pdVar30 = pdVar27;
                    }
                    uVar20 = (*(code *)PTR_round_with_step_f64_001de5b0)(pdVar30,local_7c8,1);
                    local_8b8 = (uint)uVar20;
                    uStack_8b4 = (undefined4)((ulong)uVar20 >> 0x20);
                    dStack_8b0 = extraout_XMM0_Qb;
                    if (bVar17 == 0) {
                      pppdVar9 = (double ***)(*(code *)PTR_cancel_all_001de5b8)(local_8d8);
                      if (pppdVar9 == (double ***)0x0) {
                        if ((local_400 == '\0') || (local_8d9 != '\0')) {
                          if ((DAT_001172e0 < (double)((ulong)local_8a8 & _DAT_00117410)) &&
                             (DAT_001172e0 < (double)(_DAT_00117410 & (ulong)local_5c8))) {
                            dVar24 = (double)((ulong)((double)pdStack_860 / (double)local_5c8) &
                                             _DAT_00117410) + _s__00117280;
                            if (dVar24 <= 0.0) {
                              dVar24 = 0.0;
                            }
                            pdVar27 = (double *)((double)local_8c8 + local_8a8 * dVar24);
                            pdVar30 = local_608;
                            if ((double)pdVar27 <= (double)local_608) {
                              pdVar30 = pdVar27;
                            }
                            local_8c8 = (double ***)
                                        (-(ulong)NAN((double)pdVar27) & (ulong)local_608 |
                                        ~-(ulong)NAN((double)pdVar27) & (ulong)pdVar30);
                            dStack_8c0 = dStack_600;
                          }
                        }
                        else {
                          local_8c8 = (double ***)
                                      strategy_comm3_2::high_taker_rate
                                                (pdStack_860,local_5c8,dStack_830,local_878,
                                                 local_848,dStack_4d0);
                          dStack_8c0 = extraout_XMM0_Qb_04;
                        }
                        local_8c8 = (double ***)
                                    (*(code *)PTR_round_with_step_f64_001de5b0)
                                              (((double)local_8c8 + (double)DAT_001172f8) *
                                               (double)local_878,local_798,1);
                        local_8a8 = _s__00117378;
                        goto LAB_0013ca7d;
                      }
                    }
                    else {
                      dVar31 = local_410 * local_798 + (double)local_848;
                      dVar26 = (double)local_878 - local_798;
                      dVar24 = dVar26;
                      if (dVar31 <= dVar26) {
                        dVar24 = dVar31;
                      }
                      local_8c8 = (double ***)
                                  (*(code *)PTR_round_with_step_f64_001de5b0)
                                            (~-(ulong)NAN(dVar31) & (ulong)dVar24 |
                                             -(ulong)NAN(dVar31) & (ulong)dVar26,1);
                      dVar24 = 1.97626258336499e-323;
                      if ((ulong)local_408 < 4) {
                        dVar24 = local_408;
                      }
                      iVar7 = SUB84(dVar24,0);
                      if ((long)local_408 < 1) {
                        iVar7 = 1;
                      }
                      local_780 = (double *)0x0;
                      pppdStack_778 = (double ***)&DAT_00000008;
                      local_770 = (double **)0x0;
                    /* try { // try from 0013b92a to 0013b9e6 has its CatchHandler @ 0013d554 */
                      pppdVar9 = (double ***)
                                 strategy_comm3_2::cancel_order_use_range
                                           (local_8c8,
                                            (double)local_c0[0] -
                                            *(double *)((long)local_c0 + (ulong)(uint)(iVar7 << 4)),
                                            local_8d8,local_890,local_888,1,&local_780);
                      if (pppdVar9 == (double ***)0x0) {
                        lVar8 = strategy_comm3_2::live_pending_counts
                                          (local_8d8,local_890,local_888,pppdStack_778,local_770);
                        local_828 = (double *)0x0;
                        if ((lVar8 == 0) &&
                           (local_828 = (double *)CONCAT44(uStack_8b4,local_8b8), 0.0 < dStack_418))
                        {
                          dVar26 = (double)CONCAT44(uStack_8b4,local_8b8);
                          dVar24 = dStack_418;
                          if (dVar26 <= dStack_418) {
                            dVar24 = dVar26;
                          }
                          local_828 = (double *)
                                      (*(code *)PTR_round_with_step_f64_001de5b0)
                                                (~-(ulong)NAN(dVar26) & (ulong)dVar24 |
                                                 -(ulong)NAN(dVar26) & (ulong)dStack_418,local_7c8,1
                                                );
                        }
                        local_8a8 = local_420;
                        core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&local_780)
                        ;
                        local_8b8 = (uint)local_828;
                        uStack_8b4 = (undefined4)((ulong)local_828 >> 0x20);
                        dStack_8b0 = 0.0;
LAB_0013ca7d:
                        if ((double)(_DAT_00117410 & CONCAT44(uStack_8b4,local_8b8)) <= DAT_001172e0
                           ) {
override_jmp_0013b6a5_case_4:
                          if (dStack_620 != 0.0) {
                            (*(code *)PTR___rust_dealloc_001de3d0)(uStack_618,dStack_620,1);
                          }
                          if (local_138 != 0) {
                            (*(code *)PTR___rust_dealloc_001de3d0)(local_130,local_138,1);
                          }
                          if (local_3e0 != 0) {
                            (*(code *)PTR___rust_dealloc_001de3d0)(local_3d8,local_3e0,1);
                          }
                          if (local_898 != 0.0) {
                            (*(code *)PTR___rust_dealloc_001de3d0)(local_890,local_898,1);
                          }
                          core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>
                                    (&local_3f8);
                          core::ptr::drop_in_place<strategy_comm3_2::Comm3Params>(&local_5a8);
                          core::ptr::drop_in_place<future_backtest_sdk::types::StrategyPara>
                                    (&local_3b0);
                          return (double ***)0x0;
                        }
                        local_858 = pdStack_860;
                        local_828 = local_4b8;
                        pcStack_7a8 = "H";
                        if (local_8d9 != '\0') {
                          pcStack_7a8 = "L";
                        }
                        uStack_7a0 = 1;
                        local_658 = (double *)0x1180ca;
                        if (bVar17 != 0) {
                          local_658 = (double *)0x1180cb;
                        }
                        pppdStack_650 = (double ***)0x1;
                        local_780 = &dStack_830;
                        pppdStack_778 = (double ***)puVar15;
                        local_770 = &pdStack_7b0;
                        puStack_768 = puVar15;
                        local_760 = &local_7b8;
                        puStack_758 = puVar15;
                        pdStack_750 = &dStack_620;
                        pcStack_748 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                        pdStack_740 = &dStack_818;
                        puStack_738 = puVar15;
                        ppcStack_730 = &pcStack_7a8;
                        pcStack_728 = _<&T_as_core::fmt::Display>::fmt;
                        pcStack_718 = _<&T_as_core::fmt::Display>::fmt;
                        local_808 = (double *)&DAT_001d8940;
                        pppdStack_800 = (double ***)&DAT_00000007;
                        local_7e8 = (double *)0x0;
                        local_7f8 = &local_780;
                        puStack_7f0 = &DAT_00000007;
                        ppdStack_720 = &local_658;
                        (*(code *)PTR_format_inner_001de4c8)(&uStack_1d8,&local_808);
                        uStack_230 = 0x700;
                        dStack_260 = (double)local_8c8;
                        uStack_258 = CONCAT44(uStack_8b4,local_8b8);
                        pppdStack_250 = local_878;
                        pdStack_248 = local_858;
                        dStack_240 = local_668;
                        pdStack_238 = local_828;
                        uStack_278 = uStack_1d8;
                        uStack_270 = uStack_1d0;
                        uStack_268 = uStack_1c8;
                        pppdVar9 = (double ***)
                                   strategy_comm3_2::place(local_8a8,local_8d8,&uStack_278);
                        if (pppdVar9 == (double ***)0x0) {
                          if (local_3ff == '\x01') {
                            (*(code *)PTR_clone_001de4e0)
                                      (&local_658,&local_898,
                                       &PTR_s_strategies_comm_strategy_strateg_001d89b0);
                            local_808 = local_848;
                            pppdStack_800 = local_878;
                            local_7f8 = local_868;
                            hashbrown::map::HashMap<K,V,S,A>::insert
                                      (&local_780,local_810 + 0x3c,&local_658,&local_808);
                          }
                          goto override_jmp_0013b6a5_case_4;
                        }
                      }
                      else {
LAB_0013c247:
                        core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&local_780)
                        ;
                      }
                    }
                  }
                  else {
LAB_0013bfb4:
                    pppdVar9 = (double ***)0x0;
                  }
                  break;
                case 1:
                  if ((DAT_001172e0 < (double)local_858) &&
                     (dStack_818 < dStack_4b0 / _DAT_001173d0)) goto LAB_0013bfb4;
                  if ((double)local_858 <= 0.0) goto override_jmp_0013b6a5_case_4;
                  uVar23 = -(ulong)(dStack_480 < (double)((ulong)dStack_480 ^ _s__00117a30));
                  dVar31 = (double)(uVar23 & _DAT_001172a8 |
                                   ~uVar23 & ((ulong)dStack_480 ^ _s__00117a30));
                  uVar23 = -(ulong)(local_478 < (double)((ulong)local_478 ^ _s__00117a30));
                  dVar26 = ((double)(uVar23 & _DAT_001172a8 |
                                    ~uVar23 & ((ulong)local_478 ^ _s__00117a30)) / local_5f8) /
                           (double)local_848;
                  dVar24 = dVar26;
                  if (dVar26 <= dVar31) {
                    dVar24 = dVar31;
                  }
                  dVar24 = (double)(~-(ulong)NAN(dVar31) & (ulong)dVar24 |
                                   -(ulong)NAN(dVar31) & (ulong)dVar26);
                  pdVar30 = local_858;
                  if ((double)local_858 <= 0.0) {
                    pdVar30 = (double *)0x0;
                  }
                  if (dVar24 <= (double)((ulong)pdVar30 ^ _s__00117a30)) {
                    dVar24 = (double)((ulong)pdVar30 ^ _s__00117a30);
                  }
                    /* try { // try from 0013bda0 to 0013be35 has its CatchHandler @ 0013d566 */
                  uVar20 = (*(code *)PTR_round_with_step_f64_001de5b0)(dVar24,local_7c8,1);
                  local_8b8 = (uint)uVar20;
                  uStack_8b4 = (undefined4)((ulong)uVar20 >> 0x20);
                  local_828 = (double *)CONCAT71(local_828._1_7_,local_3c8._0_1_ != '\0');
                  dStack_8b0 = extraout_XMM0_Qb_01;
                  if (bVar17 == 0) {
                    pppdVar9 = (double ***)(*(code *)PTR_cancel_all_001de5b8)(local_8d8);
                    if (pppdVar9 != (double ***)0x0) break;
                    if ((local_400 == '\0') || (local_8d9 != '\0')) {
                      if ((DAT_001172e0 < (double)((ulong)local_8a8 & _DAT_00117410)) &&
                         (DAT_001172e0 < (double)(_DAT_00117410 & (ulong)local_5d8))) {
                        dVar24 = (double)((ulong)((double)pdStack_860 / (double)local_5d8) &
                                         _DAT_00117410) + _s__00117280;
                        if (dVar24 <= 0.0) {
                          dVar24 = 0.0;
                        }
                        pdVar27 = (double *)((double)local_8c8 + local_8a8 * dVar24);
                        pdVar30 = local_608;
                        if ((double)pdVar27 <= (double)local_608) {
                          pdVar30 = pdVar27;
                        }
                        local_8c8 = (double ***)
                                    (-(ulong)NAN((double)pdVar27) & (ulong)local_608 |
                                    ~-(ulong)NAN((double)pdVar27) & (ulong)pdVar30);
                        dStack_8c0 = dStack_600;
                      }
                    }
                    else {
                      local_8c8 = (double ***)
                                  strategy_comm3_2::high_taker_rate
                                            (pdStack_860,local_5d8,dStack_830,local_878,local_848,
                                             dStack_4d0);
                      dStack_8c0 = extraout_XMM0_Qb_06;
                    }
                    local_8c8 = (double ***)
                                (*(code *)PTR_round_with_step_f64_001de5b0)
                                          (((double)DAT_001172f8 - (double)local_8c8) *
                                           (double)local_848,local_798,1);
                    local_8a8 = _s__00117378;
                  }
                  else {
                    dVar31 = (double)local_878 - local_410 * local_798;
                    dVar26 = local_798 + (double)local_848;
                    dVar24 = dVar26;
                    if (dVar26 <= dVar31) {
                      dVar24 = dVar31;
                    }
                    local_8c8 = (double ***)
                                (*(code *)PTR_round_with_step_f64_001de5b0)
                                          (~-(ulong)NAN(dVar31) & (ulong)dVar24 |
                                           -(ulong)NAN(dVar31) & (ulong)dVar26,1);
                    dVar24 = 1.97626258336499e-323;
                    if ((ulong)local_408 < 4) {
                      dVar24 = local_408;
                    }
                    iVar7 = SUB84(dVar24,0);
                    if ((long)local_408 < 1) {
                      iVar7 = 1;
                    }
                    local_780 = (double *)0x0;
                    pppdStack_778 = (double ***)&DAT_00000008;
                    local_770 = (double **)0x0;
                    /* try { // try from 0013be91 to 0013bf52 has its CatchHandler @ 0013d54e */
                    pppdVar9 = (double ***)
                               strategy_comm3_2::cancel_order_use_range
                                         (local_8c8,
                                          *(double *)((long)local_110 + (ulong)(uint)(iVar7 << 4)) -
                                          (double)local_110[0],local_8d8,local_890,local_888,0,
                                          &local_780);
                    if (pppdVar9 != (double ***)0x0) goto LAB_0013c247;
                    strategy_comm3_2::live_pending_counts
                              (local_8d8,local_890,local_888,pppdStack_778,local_770);
                    local_858 = (double *)0x0;
                    if ((extraout_RDX == 0) &&
                       (local_858 = (double *)CONCAT44(uStack_8b4,local_8b8), 0.0 < dStack_418)) {
                      dVar31 = (double)((ulong)dStack_418 ^ _s__00117a30);
                      dVar24 = (double)CONCAT44(uStack_8b4,local_8b8);
                      dVar26 = dVar31;
                      if (dVar31 <= dVar24) {
                        dVar26 = dVar24;
                      }
                      local_858 = (double *)
                                  (*(code *)PTR_round_with_step_f64_001de5b0)
                                            (~-(ulong)NAN(dVar24) & (ulong)dVar26 |
                                             -(ulong)NAN(dVar24) & (ulong)dVar31,local_7c8,1);
                    }
                    local_8a8 = local_420;
                    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&local_780);
                    local_8b8 = (uint)local_858;
                    uStack_8b4 = (undefined4)((ulong)local_858 >> 0x20);
                    dStack_8b0 = 0.0;
                  }
                  if ((double)(_DAT_00117410 & CONCAT44(uStack_8b4,local_8b8)) <= DAT_001172e0)
                  goto override_jmp_0013b6a5_case_4;
                  local_7c8 = pdStack_860;
                  local_858 = local_4b8;
                  pcStack_7a8 = "H";
                  if (local_8d9 != '\0') {
                    pcStack_7a8 = "L";
                  }
                  uStack_7a0 = 1;
                  local_658 = (double *)0x1180ca;
                  if (bVar17 != 0) {
                    local_658 = (double *)0x1180cb;
                  }
                  pppdStack_650 = (double ***)0x1;
                  local_780 = &dStack_830;
                  pppdStack_778 = (double ***)puVar15;
                  local_770 = &pdStack_7b0;
                  puStack_768 = puVar15;
                  local_760 = &local_7b8;
                  puStack_758 = puVar15;
                  pdStack_750 = &dStack_620;
                  pcStack_748 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                  pdStack_740 = &dStack_818;
                  puStack_738 = puVar15;
                  ppcStack_730 = &pcStack_7a8;
                  pcStack_728 = _<&T_as_core::fmt::Display>::fmt;
                  pcStack_718 = _<&T_as_core::fmt::Display>::fmt;
                  local_808 = (double *)&DAT_001d8940;
                  pppdStack_800 = (double ***)&DAT_00000007;
                  local_7e8 = (double *)0x0;
                  local_7f8 = &local_780;
                  puStack_7f0 = &DAT_00000007;
                  ppdStack_720 = &local_658;
                  (*(code *)PTR_format_inner_001de4c8)(&uStack_1a8,&local_808);
                  cStack_2ff = (char)local_828 * '\x03' + '\x05';
                  uStack_300 = 1;
                  dStack_330 = (double)local_8c8;
                  uStack_328 = CONCAT44(uStack_8b4,local_8b8);
                  pdStack_320 = local_848;
                  pdStack_318 = local_7c8;
                  dStack_310 = local_670;
                  pdStack_308 = local_858;
                  uStack_348 = uStack_1a8;
                  uStack_340 = uStack_1a0;
                  uStack_338 = uStack_198;
                  pppdVar9 = (double ***)strategy_comm3_2::place(local_8a8,local_8d8,&uStack_348);
                  if (pppdVar9 == (double ***)0x0) {
                    if (local_3ff == '\x01') {
                      (*(code *)PTR_clone_001de4e0)
                                (&local_658,&local_898,
                                 &PTR_s_strategies_comm_strategy_strateg_001d89c8);
                      local_808 = local_848;
                      pppdStack_800 = local_878;
                      local_7f8 = local_868;
                      hashbrown::map::HashMap<K,V,S,A>::insert
                                (&local_780,local_810 + 0x3c,&local_658,&local_808);
                    }
                    goto override_jmp_0013b6a5_case_4;
                  }
                  break;
                case 2:
                  if ((DAT_001172e0 < (double)local_858) &&
                     (dStack_818 < dStack_4b0 / _DAT_001173d0)) goto LAB_0013bfb4;
                  uVar23 = -(ulong)(dStack_490 < (double)((ulong)dStack_490 ^ _s__00117a30));
                  pdVar30 = local_858;
                  if (0.0 <= (double)local_858) {
                    pdVar30 = (double *)0x0;
                  }
                  dVar26 = (double)(uVar23 & _DAT_001172a8 |
                                   ~uVar23 & ((ulong)dStack_490 ^ _s__00117a30)) - (double)pdVar30;
                  uVar23 = -(ulong)(local_488 < (double)((ulong)local_488 ^ _s__00117a30));
                  dVar31 = ((double)(uVar23 & _DAT_001172a8 |
                                    ~uVar23 & ((ulong)local_488 ^ _s__00117a30)) / local_5f8) /
                           (double)local_848 - (double)pdVar30;
                  dVar24 = dVar31;
                  if (dVar31 <= dVar26) {
                    dVar24 = dVar26;
                  }
                  dVar24 = (double)(~-(ulong)NAN(dVar26) & (ulong)dVar24 |
                                   -(ulong)NAN(dVar26) & (ulong)dVar31);
                  pdVar27 = (double *)
                            (~-(ulong)(dStack_4a0 < 0.0) & (ulong)dStack_4a0 |
                            -(ulong)(dStack_4a0 < 0.0) & _DAT_001172a0);
                  pdVar30 = (double *)
                            (((double)(~-(ulong)(local_498 < 0.0) & (ulong)local_498 |
                                      -(ulong)(local_498 < 0.0) & _DAT_001172a0) / local_5f8) /
                            (double)local_848);
                  if ((double)pdVar30 <= (double)DAT_001172f8) {
                    pdVar30 = DAT_001172f8;
                  }
                  if ((double)pdVar30 <= (double)pdVar27) {
                    pdVar27 = pdVar30;
                  }
                  pdVar29 = (double *)
                            (~-(ulong)(dStack_480 < 0.0) & (ulong)dStack_480 |
                            -(ulong)(dStack_480 < 0.0) & _DAT_001172a0);
                  pdVar30 = (double *)
                            (((double)(~-(ulong)(local_478 < 0.0) & (ulong)local_478 |
                                      _DAT_001172a0 & -(ulong)(local_478 < 0.0)) / local_5f8) /
                            (double)local_848);
                  if ((double)pdVar30 <= (double)DAT_001172f8) {
                    pdVar30 = DAT_001172f8;
                  }
                  if ((double)pdVar30 <= (double)pdVar29) {
                    pdVar29 = pdVar30;
                  }
                  if (dVar24 <= (double)((ulong)pdVar27 ^ _s__00117a30)) {
                    dVar24 = (double)((ulong)pdVar27 ^ _s__00117a30);
                  }
                  pdVar30 = local_858;
                  if ((double)local_858 <= 0.0) {
                    pdVar30 = (double *)0x0;
                  }
                  if ((double)pdVar30 <= (double)pdVar29) {
                    pdVar29 = pdVar30;
                  }
                  dVar24 = dVar24 - (double)pdVar29;
                  if (0.0 <= dVar24) {
                    dVar24 = 0.0;
                  }
                    /* try { // try from 0013c143 to 0013c1c5 has its CatchHandler @ 0013d566 */
                  uVar20 = (*(code *)PTR_round_with_step_f64_001de5b0)(dVar24,local_7c8,1);
                  local_8b8 = (uint)uVar20;
                  uStack_8b4 = (undefined4)((ulong)uVar20 >> 0x20);
                  dStack_8b0 = extraout_XMM0_Qb_02;
                  if (bVar17 == 0) {
                    /* try { // try from 0013c259 to 0013c4d9 has its CatchHandler @ 0013d566 */
                    pppdVar9 = (double ***)(*(code *)PTR_cancel_all_001de5b8)(local_8d8);
                    if (pppdVar9 != (double ***)0x0) break;
                    if ((local_400 == '\0') || (local_8d9 != '\0')) {
                      if ((DAT_001172e0 < (double)((ulong)local_8a8 & _DAT_00117410)) &&
                         (DAT_001172e0 < (double)(_DAT_00117410 & (ulong)local_5b8))) {
                        dVar24 = (double)((ulong)((double)pdStack_860 / local_5b8) & _DAT_00117410)
                                 + _s__00117280;
                        if (dVar24 <= 0.0) {
                          dVar24 = 0.0;
                        }
                        pdVar27 = (double *)((double)local_8c8 + local_8a8 * dVar24);
                        pdVar30 = local_608;
                        if ((double)pdVar27 <= (double)local_608) {
                          pdVar30 = pdVar27;
                        }
                        local_8c8 = (double ***)
                                    (-(ulong)NAN((double)pdVar27) & (ulong)local_608 |
                                    ~-(ulong)NAN((double)pdVar27) & (ulong)pdVar30);
                        dStack_8c0 = dStack_600;
                      }
                    }
                    else {
                      local_8c8 = (double ***)
                                  strategy_comm3_2::high_taker_rate
                                            (pdStack_860,local_5b8,dStack_830,local_878,local_848,
                                             dStack_4d0);
                      dStack_8c0 = extraout_XMM0_Qb_03;
                    }
                    /* try { // try from 0013c6e1 to 0013d48a has its CatchHandler @ 0013d566 */
                    local_8c8 = (double ***)
                                (*(code *)PTR_round_with_step_f64_001de5b0)
                                          (((double)DAT_001172f8 - (double)local_8c8) *
                                           (double)local_848,local_798,1);
                    local_8a8 = _s__00117378;
                  }
                  else {
                    dVar31 = (double)local_878 - local_410 * local_798;
                    dVar26 = local_798 + (double)local_848;
                    dVar24 = dVar26;
                    if (dVar26 <= dVar31) {
                      dVar24 = dVar31;
                    }
                    local_8c8 = (double ***)
                                (*(code *)PTR_round_with_step_f64_001de5b0)
                                          (~-(ulong)NAN(dVar31) & (ulong)dVar24 |
                                           -(ulong)NAN(dVar31) & (ulong)dVar26,1);
                    dVar24 = 1.97626258336499e-323;
                    if ((ulong)local_408 < 4) {
                      dVar24 = local_408;
                    }
                    iVar7 = SUB84(dVar24,0);
                    if ((long)local_408 < 1) {
                      iVar7 = 1;
                    }
                    local_780 = (double *)0x0;
                    pppdStack_778 = (double ***)&DAT_00000008;
                    local_770 = (double **)0x0;
                    /* try { // try from 0013c221 to 0013c23a has its CatchHandler @ 0013d552 */
                    pppdVar9 = (double ***)
                               strategy_comm3_2::cancel_order_use_range
                                         (local_8c8,
                                          *(double *)((long)local_110 + (ulong)(uint)(iVar7 << 4)) -
                                          (double)local_110[0],local_8d8,local_890,local_888,0,
                                          &local_780);
                    if (pppdVar9 != (double ***)0x0) goto LAB_0013c247;
                    /* try { // try from 0013c5bb to 0013c63c has its CatchHandler @ 0013d552 */
                    strategy_comm3_2::live_pending_counts
                              (local_8d8,local_890,local_888,pppdStack_778,local_770);
                    local_858 = (double *)0x0;
                    if ((extraout_RDX_00 == 0) &&
                       (local_858 = (double *)CONCAT44(uStack_8b4,local_8b8), 0.0 < dStack_418)) {
                      dVar31 = (double)((ulong)dStack_418 ^ _s__00117a30);
                      dVar24 = (double)CONCAT44(uStack_8b4,local_8b8);
                      dVar26 = dVar31;
                      if (dVar31 <= dVar24) {
                        dVar26 = dVar24;
                      }
                      local_858 = (double *)
                                  (*(code *)PTR_round_with_step_f64_001de5b0)
                                            (~-(ulong)NAN(dVar24) & (ulong)dVar26 |
                                             -(ulong)NAN(dVar24) & (ulong)dVar31,local_7c8,1);
                    }
                    local_8a8 = local_420;
                    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&local_780);
                    local_8b8 = (uint)local_858;
                    uStack_8b4 = (undefined4)((ulong)local_858 >> 0x20);
                    dStack_8b0 = 0.0;
                  }
                  if ((double)(_DAT_00117410 & CONCAT44(uStack_8b4,local_8b8)) <= DAT_001172e0)
                  goto override_jmp_0013b6a5_case_4;
                  local_7c8 = pdStack_860;
                  local_858 = local_4b8;
                  pcStack_7a8 = "H";
                  if (local_8d9 != '\0') {
                    pcStack_7a8 = "L";
                  }
                  uStack_7a0 = 1;
                  local_658 = (double *)0x1180ca;
                  if (bVar17 != 0) {
                    local_658 = (double *)0x1180cb;
                  }
                  pppdStack_650 = (double ***)0x1;
                  local_780 = &dStack_830;
                  pppdStack_778 = (double ***)puVar15;
                  local_770 = &pdStack_7b0;
                  puStack_768 = puVar15;
                  local_760 = &local_7b8;
                  puStack_758 = puVar15;
                  pdStack_750 = &dStack_620;
                  pcStack_748 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                  pdStack_740 = &dStack_818;
                  puStack_738 = puVar15;
                  ppcStack_730 = &pcStack_7a8;
                  pcStack_728 = _<&T_as_core::fmt::Display>::fmt;
                  pcStack_718 = _<&T_as_core::fmt::Display>::fmt;
                  local_808 = (double *)&DAT_001d8940;
                  pppdStack_800 = (double ***)&DAT_00000007;
                  local_7e8 = (double *)0x0;
                  local_7f8 = &local_780;
                  puStack_7f0 = &DAT_00000007;
                  ppdStack_720 = &local_658;
                  (*(code *)PTR_format_inner_001de4c8)(&uStack_1c0,&local_808);
                  uStack_1e0 = 0x802;
                  dStack_210 = (double)local_8c8;
                  uStack_208 = CONCAT44(uStack_8b4,local_8b8);
                  pdStack_200 = local_848;
                  pdStack_1f8 = local_7c8;
                  pdStack_1f0 = local_828;
                  pdStack_1e8 = local_858;
                  uStack_228 = uStack_1c0;
                  uStack_220 = uStack_1b8;
                  uStack_218 = uStack_1b0;
                  pppdVar9 = (double ***)strategy_comm3_2::place(local_8a8,local_8d8,&uStack_228);
                  if (pppdVar9 == (double ***)0x0) {
                    if (local_3ff == '\x01') {
                      (*(code *)PTR_clone_001de4e0)
                                (&local_658,&local_898,
                                 &PTR_s_strategies_comm_strategy_strateg_001d89e0);
                      local_808 = local_848;
                      pppdStack_800 = local_878;
                      local_7f8 = local_868;
                      hashbrown::map::HashMap<K,V,S,A>::insert
                                (&local_780,local_810 + 0x3c,&local_658,&local_808);
                    }
                    goto override_jmp_0013b6a5_case_4;
                  }
                  break;
                case 3:
                  if (((double)local_858 < _DAT_001173d8) &&
                     (dStack_818 < dStack_4b0 / _DAT_001173d0)) goto LAB_0013bfb4;
                  if (0.0 <= (double)local_858) goto override_jmp_0013b6a5_case_4;
                  dVar24 = (double)(~-(ulong)(dStack_480 < 0.0) & (ulong)dStack_480 |
                                   -(ulong)(dStack_480 < 0.0) & _DAT_001172a0);
                  dVar31 = ((double)(~-(ulong)(local_478 < 0.0) & (ulong)local_478 |
                                    _DAT_001172a0 & -(ulong)(local_478 < 0.0)) / local_5f8) /
                           (double)local_878;
                  dVar26 = dVar31;
                  if (dVar24 <= dVar31) {
                    dVar26 = dVar24;
                  }
                  dVar24 = (double)(~-(ulong)NAN(dVar24) & (ulong)dVar26 |
                                   -(ulong)NAN(dVar24) & (ulong)dVar31);
                  pdVar30 = local_858;
                  if (0.0 <= (double)local_858) {
                    pdVar30 = (double *)0x0;
                  }
                  if ((double)((ulong)pdVar30 ^ _s__00117a30) <= dVar24) {
                    dVar24 = (double)((ulong)pdVar30 ^ _s__00117a30);
                  }
                    /* try { // try from 0013baec to 0013bb6a has its CatchHandler @ 0013d566 */
                  uVar20 = (*(code *)PTR_round_with_step_f64_001de5b0)(dVar24,local_7c8,1);
                  local_8b8 = (uint)uVar20;
                  uStack_8b4 = (undefined4)((ulong)uVar20 >> 0x20);
                  dStack_8b0 = extraout_XMM0_Qb_00;
                  if (bVar17 == 0) {
                    pppdVar9 = (double ***)(*(code *)PTR_cancel_all_001de5b8)(local_8d8);
                    if (pppdVar9 != (double ***)0x0) break;
                    if ((local_400 == '\0') || (local_8d9 != '\0')) {
                      if ((DAT_001172e0 < (double)((ulong)local_8a8 & _DAT_00117410)) &&
                         (DAT_001172e0 < (double)(_DAT_00117410 & (ulong)local_5e8))) {
                        dVar24 = (double)((ulong)((double)pdStack_860 / local_5e8) & _DAT_00117410)
                                 + _s__00117280;
                        if (dVar24 <= 0.0) {
                          dVar24 = 0.0;
                        }
                        pdVar27 = (double *)((double)local_8c8 + local_8a8 * dVar24);
                        pdVar30 = local_608;
                        if ((double)pdVar27 <= (double)local_608) {
                          pdVar30 = pdVar27;
                        }
                        local_8c8 = (double ***)
                                    (-(ulong)NAN((double)pdVar27) & (ulong)local_608 |
                                    ~-(ulong)NAN((double)pdVar27) & (ulong)pdVar30);
                        dStack_8c0 = dStack_600;
                      }
                    }
                    else {
                      local_8c8 = (double ***)
                                  strategy_comm3_2::high_taker_rate
                                            (pdStack_860,local_5e8,dStack_830,local_878,local_848,
                                             dStack_4d0);
                      dStack_8c0 = extraout_XMM0_Qb_05;
                    }
                    local_8c8 = (double ***)
                                (*(code *)PTR_round_with_step_f64_001de5b0)
                                          (((double)local_8c8 + (double)DAT_001172f8) *
                                           (double)local_878,local_798,1);
                    local_8a8 = _s__00117378;
                  }
                  else {
                    dVar31 = local_410 * local_798 + (double)local_848;
                    dVar26 = (double)local_878 - local_798;
                    dVar24 = dVar26;
                    if (dVar31 <= dVar26) {
                      dVar24 = dVar31;
                    }
                    local_8c8 = (double ***)
                                (*(code *)PTR_round_with_step_f64_001de5b0)
                                          (~-(ulong)NAN(dVar31) & (ulong)dVar24 |
                                           -(ulong)NAN(dVar31) & (ulong)dVar26,1);
                    dVar24 = 1.97626258336499e-323;
                    if ((ulong)local_408 < 4) {
                      dVar24 = local_408;
                    }
                    iVar7 = SUB84(dVar24,0);
                    if ((long)local_408 < 1) {
                      iVar7 = 1;
                    }
                    local_780 = (double *)0x0;
                    pppdStack_778 = (double ***)&DAT_00000008;
                    local_770 = (double **)0x0;
                    /* try { // try from 0013bbc7 to 0013bc83 has its CatchHandler @ 0013d550 */
                    pppdVar9 = (double ***)
                               strategy_comm3_2::cancel_order_use_range
                                         (local_8c8,
                                          (double)local_c0[0] -
                                          *(double *)((long)local_c0 + (ulong)(uint)(iVar7 << 4)),
                                          local_8d8,local_890,local_888,1,&local_780);
                    if (pppdVar9 != (double ***)0x0) goto LAB_0013c247;
                    lVar8 = strategy_comm3_2::live_pending_counts
                                      (local_8d8,local_890,local_888,pppdStack_778,local_770);
                    local_828 = (double *)0x0;
                    if ((lVar8 == 0) &&
                       (local_828 = (double *)CONCAT44(uStack_8b4,local_8b8), 0.0 < dStack_418)) {
                      dVar26 = (double)CONCAT44(uStack_8b4,local_8b8);
                      dVar24 = dStack_418;
                      if (dVar26 <= dStack_418) {
                        dVar24 = dVar26;
                      }
                      local_828 = (double *)
                                  (*(code *)PTR_round_with_step_f64_001de5b0)
                                            (~-(ulong)NAN(dVar26) & (ulong)dVar24 |
                                             -(ulong)NAN(dVar26) & (ulong)dStack_418,local_7c8,1);
                    }
                    local_8a8 = local_420;
                    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&local_780);
                    local_8b8 = (uint)local_828;
                    uStack_8b4 = (undefined4)((ulong)local_828 >> 0x20);
                    dStack_8b0 = 0.0;
                  }
                  if ((double)(_DAT_00117410 & CONCAT44(uStack_8b4,local_8b8)) <= DAT_001172e0)
                  goto override_jmp_0013b6a5_case_4;
                  local_858 = pdStack_860;
                  local_828 = local_4b8;
                  pcStack_7a8 = "H";
                  if (local_8d9 != '\0') {
                    pcStack_7a8 = "L";
                  }
                  uStack_7a0 = 1;
                  local_658 = (double *)0x1180ca;
                  if (bVar17 != 0) {
                    local_658 = (double *)0x1180cb;
                  }
                  pppdStack_650 = (double ***)0x1;
                  local_780 = &dStack_830;
                  pppdStack_778 = (double ***)puVar15;
                  local_770 = &pdStack_7b0;
                  puStack_768 = puVar15;
                  local_760 = &local_7b8;
                  puStack_758 = puVar15;
                  pdStack_750 = &dStack_620;
                  pcStack_748 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                  pdStack_740 = &dStack_818;
                  puStack_738 = puVar15;
                  ppcStack_730 = &pcStack_7a8;
                  pcStack_728 = _<&T_as_core::fmt::Display>::fmt;
                  pcStack_718 = _<&T_as_core::fmt::Display>::fmt;
                  local_808 = (double *)&DAT_001d8940;
                  pppdStack_800 = (double ***)&DAT_00000007;
                  local_7e8 = (double *)0x0;
                  local_7f8 = &local_780;
                  puStack_7f0 = &DAT_00000007;
                  ppdStack_720 = &local_658;
                  (*(code *)PTR_format_inner_001de4c8)(&uStack_190,&local_808);
                  bStack_2af = local_3c8._0_1_ | 6;
                  uStack_2b0 = 3;
                  dStack_2e0 = (double)local_8c8;
                  uStack_2d8 = CONCAT44(uStack_8b4,local_8b8);
                  pppdStack_2d0 = local_878;
                  pdStack_2c8 = local_858;
                  dStack_2c0 = local_678;
                  pdStack_2b8 = local_828;
                  uStack_2f8 = uStack_190;
                  uStack_2f0 = uStack_188;
                  uStack_2e8 = uStack_180;
                  pppdVar9 = (double ***)strategy_comm3_2::place(local_8a8,local_8d8,&uStack_2f8);
                  if (pppdVar9 == (double ***)0x0) {
                    if (local_3ff == '\x01') {
                      (*(code *)PTR_clone_001de4e0)
                                (&local_658,&local_898,
                                 &PTR_s_strategies_comm_strategy_strateg_001d89f8);
                      local_808 = local_848;
                      pppdStack_800 = local_878;
                      local_7f8 = local_868;
                      hashbrown::map::HashMap<K,V,S,A>::insert
                                (&local_780,local_810 + 0x3c,&local_658,&local_808);
                    }
                    goto override_jmp_0013b6a5_case_4;
                  }
                  break;
                case 4:
                  goto override_jmp_0013b6a5_case_4;
                }
                if (dStack_620 != 0.0) {
                  (*(code *)PTR___rust_dealloc_001de3d0)(uStack_618,dStack_620,1);
                }
              }
            }
          }
joined_r0x0013b4a8:
          if (local_138 != 0) {
            (*(code *)PTR___rust_dealloc_001de3d0)(local_130,local_138,1);
          }
        }
        if (local_3e0 != 0) {
          (*(code *)PTR___rust_dealloc_001de3d0)(local_3d8,local_3e0,1);
        }
        if (local_898 != 0.0) {
          (*(code *)PTR___rust_dealloc_001de3d0)(local_890,local_898,1);
        }
        local_878 = local_3f0;
        lVar13 = local_3e8;
        goto LAB_0013a98a;
      }
      break;
    }
  }
  pppdVar9 = (double ***)0x0;
LAB_0013a98a:
  puVar15 = PTR___rust_dealloc_001de3d0;
  if (lVar13 != 0) {
    pppdVar19 = local_878 + 1;
    do {
      if (pppdVar19[-1] != (double **)0x0) {
        (*(code *)puVar15)(*pppdVar19,pppdVar19[-1],1);
      }
      pppdVar19 = pppdVar19 + 3;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
LAB_0013a9d2:
  if (local_3f8 != 0) {
    (*(code *)PTR___rust_dealloc_001de3d0)(local_878,local_3f8 * 0x18,8);
  }
  goto LAB_0013a87c;
}




// ELF address 0x0000000000060e70; fb_strategy_sdk_abi_version

undefined8 fb_strategy_sdk_abi_version(void)

{
  return 4;
}




// ELF address 0x0000000000060e80; fb_strategy_sdk_version_str

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
  (*(code *)PTR_memcpy_001de430)(param_1,"0.6.0",uVar2);
  if (param_2 != 0) {
    *(undefined1 *)(param_1 + uVar2) = 0;
  }
  return uVar2;
}


