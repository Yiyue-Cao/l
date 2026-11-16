// ELF address 0x0000000000038e50; strategy_comm3_1::Comm3Params::signal_mode

/* strategy_comm3_1::Comm3Params::signal_mode */

ulong __rustcall strategy_comm3_1::Comm3Params::signal_mode(ushort *param_1,long param_2)

{
  if (param_2 != 3) {
    return 0;
  }
  if ((char)param_1[1] != '2' || (short)(*param_1 ^ 0x5650) != 0) {
    return (ulong)((uint)((char)param_1[1] == '4' && *param_1 == 0x5650) * 3);
  }
  return CONCAT71((uint7)(uint3)((*param_1 ^ 0x5650) >> 8),1);
}




// ELF address 0x0000000000038fa0; strategy_comm3_1::Comm3Params::low_action_enum

/* strategy_comm3_1::Comm3Params::low_action_enum */

bool __rustcall strategy_comm3_1::Comm3Params::low_action_enum(int *param_1,long param_2)

{
  if (param_2 == 5) {
    return (bool)(((char)param_1[1] == 'r' && *param_1 == 0x656b616d) * '\x02');
  }
  if (param_2 == 4) {
    return *param_1 == 0x70696b73;
  }
  return false;
}




// ELF address 0x0000000000038e90; strategy_comm3_1::Comm3Params::signal_trigger_mode

/* strategy_comm3_1::Comm3Params::signal_trigger_mode */

short __rustcall strategy_comm3_1::Comm3Params::signal_trigger_mode(long *param_1,long param_2)

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
      auVar3[0] = -((char)*param_1 == s_WindowsStdTrigge_001179b0[0]);
      auVar3[1] = -(*(char *)((long)param_1 + 1) == s_WindowsStdTrigge_001179b0[1]);
      auVar3[2] = -(*(char *)((long)param_1 + 2) == s_WindowsStdTrigge_001179b0[2]);
      auVar3[3] = -(*(char *)((long)param_1 + 3) == s_WindowsStdTrigge_001179b0[3]);
      auVar3[4] = -(*(char *)((long)param_1 + 4) == s_WindowsStdTrigge_001179b0[4]);
      auVar3[5] = -(*(char *)((long)param_1 + 5) == s_WindowsStdTrigge_001179b0[5]);
      auVar3[6] = -(*(char *)((long)param_1 + 6) == s_WindowsStdTrigge_001179b0[6]);
      auVar3[7] = -(*(char *)((long)param_1 + 7) == s_WindowsStdTrigge_001179b0[7]);
      auVar3[8] = -((char)param_1[1] == s_WindowsStdTrigge_001179b0[8]);
      auVar3[9] = -(*(char *)((long)param_1 + 9) == s_WindowsStdTrigge_001179b0[9]);
      auVar3[10] = -(*(char *)((long)param_1 + 10) == s_WindowsStdTrigge_001179b0[10]);
      auVar3[0xb] = -(*(char *)((long)param_1 + 0xb) == s_WindowsStdTrigge_001179b0[0xb]);
      auVar3[0xc] = -(*(char *)((long)param_1 + 0xc) == s_WindowsStdTrigge_001179b0[0xc]);
      auVar3[0xd] = -(*(char *)((long)param_1 + 0xd) == s_WindowsStdTrigge_001179b0[0xd]);
      auVar3[0xe] = -(*(char *)((long)param_1 + 0xe) == s_WindowsStdTrigge_001179b0[0xe]);
      auVar3[0xf] = -(*(char *)((long)param_1 + 0xf) == s_WindowsStdTrigge_001179b0[0xf]);
      auVar7[0] = -((char)param_1[2] == s_r_00117750[0]);
      auVar7[1] = -(s_r_00117750[1] == '\0');
      auVar7[2] = -(s_r_00117750[2] == '\0');
      auVar7[3] = -(s_r_00117750[3] == '\0');
      auVar7[4] = -(UNK_00117754 == '\0');
      auVar7[5] = -(UNK_00117755 == '\0');
      auVar7[6] = -(UNK_00117756 == '\0');
      auVar7[7] = -(UNK_00117757 == '\0');
      auVar7[8] = -(UNK_00117758 == '\0');
      auVar7[9] = -(UNK_00117759 == '\0');
      auVar7[10] = -(UNK_0011775a == '\0');
      auVar7[0xb] = -(UNK_0011775b == '\0');
      auVar7[0xc] = -(UNK_0011775c == '\0');
      auVar7[0xd] = -(UNK_0011775d == '\0');
      auVar7[0xe] = -(UNK_0011775e == '\0');
      auVar7[0xf] = -(UNK_0011775f == '\0');
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
      auVar5[0] = -((char)*param_1 == s_WindowsMeanTrigg_00117630[0]);
      auVar5[1] = -(*(char *)((long)param_1 + 1) == s_WindowsMeanTrigg_00117630[1]);
      auVar5[2] = -(*(char *)((long)param_1 + 2) == s_WindowsMeanTrigg_00117630[2]);
      auVar5[3] = -(*(char *)((long)param_1 + 3) == s_WindowsMeanTrigg_00117630[3]);
      auVar5[4] = -(*(char *)((long)param_1 + 4) == s_WindowsMeanTrigg_00117630[4]);
      auVar5[5] = -(*(char *)((long)param_1 + 5) == s_WindowsMeanTrigg_00117630[5]);
      auVar5[6] = -(*(char *)((long)param_1 + 6) == s_WindowsMeanTrigg_00117630[6]);
      auVar5[7] = -(*(char *)((long)param_1 + 7) == s_WindowsMeanTrigg_00117630[7]);
      auVar5[8] = -((char)param_1[1] == s_WindowsMeanTrigg_00117630[8]);
      auVar5[9] = -(*(char *)((long)param_1 + 9) == s_WindowsMeanTrigg_00117630[9]);
      auVar5[10] = -(*(char *)((long)param_1 + 10) == s_WindowsMeanTrigg_00117630[10]);
      auVar5[0xb] = -(*(char *)((long)param_1 + 0xb) == s_WindowsMeanTrigg_00117630[0xb]);
      auVar5[0xc] = -(*(char *)((long)param_1 + 0xc) == s_WindowsMeanTrigg_00117630[0xc]);
      auVar5[0xd] = -(*(char *)((long)param_1 + 0xd) == s_WindowsMeanTrigg_00117630[0xd]);
      auVar5[0xe] = -(*(char *)((long)param_1 + 0xe) == s_WindowsMeanTrigg_00117630[0xe]);
      auVar5[0xf] = -(*(char *)((long)param_1 + 0xf) == s_WindowsMeanTrigg_00117630[0xf]);
      auVar9[0] = -((char)(short)param_1[2] == DAT_001175d0);
      auVar9[1] = -((char)((ushort)(short)param_1[2] >> 8) == UNK_001175d1);
      auVar9[2] = -(UNK_001175d2 == '\0');
      auVar9[3] = -(UNK_001175d3 == '\0');
      auVar9[4] = -(UNK_001175d4 == '\0');
      auVar9[5] = -(UNK_001175d5 == '\0');
      auVar9[6] = -(UNK_001175d6 == '\0');
      auVar9[7] = -(UNK_001175d7 == '\0');
      auVar9[8] = -(UNK_001175d8 == '\0');
      auVar9[9] = -(UNK_001175d9 == '\0');
      auVar9[10] = -(UNK_001175da == '\0');
      auVar9[0xb] = -(UNK_001175db == '\0');
      auVar9[0xc] = -(UNK_001175dc == '\0');
      auVar9[0xd] = -(UNK_001175dd == '\0');
      auVar9[0xe] = -(UNK_001175de == '\0');
      auVar9[0xf] = -(UNK_001175df == '\0');
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
      auVar4[0] = -((char)uVar1 == s_gger_00117730[0]);
      auVar4[1] = -((char)((uint)uVar1 >> 8) == s_gger_00117730[1]);
      auVar4[2] = -((char)((uint)uVar1 >> 0x10) == s_gger_00117730[2]);
      auVar4[3] = -((char)((uint)uVar1 >> 0x18) == s_gger_00117730[3]);
      auVar4[4] = -(s_gger_00117730[4] == '\0');
      auVar4[5] = -(s_gger_00117730[5] == '\0');
      auVar4[6] = -(s_gger_00117730[6] == '\0');
      auVar4[7] = -(s_gger_00117730[7] == '\0');
      auVar4[8] = -(UNK_00117738 == '\0');
      auVar4[9] = -(UNK_00117739 == '\0');
      auVar4[10] = -(UNK_0011773a == '\0');
      auVar4[0xb] = -(UNK_0011773b == '\0');
      auVar4[0xc] = -(UNK_0011773c == '\0');
      auVar4[0xd] = -(UNK_0011773d == '\0');
      auVar4[0xe] = -(UNK_0011773e == '\0');
      auVar4[0xf] = -(UNK_0011773f == '\0');
      auVar8[0] = -((char)*param_1 == s_WindowsSharpeTri_00117740[0]);
      auVar8[1] = -(*(char *)((long)param_1 + 1) == s_WindowsSharpeTri_00117740[1]);
      auVar8[2] = -(*(char *)((long)param_1 + 2) == s_WindowsSharpeTri_00117740[2]);
      auVar8[3] = -(*(char *)((long)param_1 + 3) == s_WindowsSharpeTri_00117740[3]);
      auVar8[4] = -(*(char *)((long)param_1 + 4) == s_WindowsSharpeTri_00117740[4]);
      auVar8[5] = -(*(char *)((long)param_1 + 5) == s_WindowsSharpeTri_00117740[5]);
      auVar8[6] = -(*(char *)((long)param_1 + 6) == s_WindowsSharpeTri_00117740[6]);
      auVar8[7] = -(*(char *)((long)param_1 + 7) == s_WindowsSharpeTri_00117740[7]);
      auVar8[8] = -((char)param_1[1] == s_WindowsSharpeTri_00117740[8]);
      auVar8[9] = -(*(char *)((long)param_1 + 9) == s_WindowsSharpeTri_00117740[9]);
      auVar8[10] = -(*(char *)((long)param_1 + 10) == s_WindowsSharpeTri_00117740[10]);
      auVar8[0xb] = -(*(char *)((long)param_1 + 0xb) == s_WindowsSharpeTri_00117740[0xb]);
      auVar8[0xc] = -(*(char *)((long)param_1 + 0xc) == s_WindowsSharpeTri_00117740[0xc]);
      auVar8[0xd] = -(*(char *)((long)param_1 + 0xd) == s_WindowsSharpeTri_00117740[0xd]);
      auVar8[0xe] = -(*(char *)((long)param_1 + 0xe) == s_WindowsSharpeTri_00117740[0xe]);
      auVar8[0xf] = -(*(char *)((long)param_1 + 0xf) == s_WindowsSharpeTri_00117740[0xf]);
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
      auVar10[0] = -(*(char *)((long)param_1 + 6) == DAT_00117a00);
      auVar10[1] = -(*(char *)((long)param_1 + 7) == UNK_00117a01);
      auVar10[2] = -((char)param_1[1] == UNK_00117a02);
      auVar10[3] = -(*(char *)((long)param_1 + 9) == UNK_00117a03);
      auVar10[4] = -(*(char *)((long)param_1 + 10) == UNK_00117a04);
      auVar10[5] = -(*(char *)((long)param_1 + 0xb) == UNK_00117a05);
      auVar10[6] = -(*(char *)((long)param_1 + 0xc) == UNK_00117a06);
      auVar10[7] = -(*(char *)((long)param_1 + 0xd) == UNK_00117a07);
      auVar10[8] = -(*(char *)((long)param_1 + 0xe) == UNK_00117a08);
      auVar10[9] = -(*(char *)((long)param_1 + 0xf) == UNK_00117a09);
      auVar10[10] = -((char)param_1[2] == UNK_00117a0a);
      auVar10[0xb] = -(*(char *)((long)param_1 + 0x11) == UNK_00117a0b);
      auVar10[0xc] = -(*(char *)((long)param_1 + 0x12) == UNK_00117a0c);
      auVar10[0xd] = -(*(char *)((long)param_1 + 0x13) == UNK_00117a0d);
      auVar10[0xe] = -(*(char *)((long)param_1 + 0x14) == UNK_00117a0e);
      auVar10[0xf] = -(*(char *)((long)param_1 + 0x15) == UNK_00117a0f);
      auVar6[0] = -((char)*param_1 == DAT_00117670);
      auVar6[1] = -(*(char *)((long)param_1 + 1) == UNK_00117671);
      auVar6[2] = -(*(char *)((long)param_1 + 2) == UNK_00117672);
      auVar6[3] = -(*(char *)((long)param_1 + 3) == UNK_00117673);
      auVar6[4] = -(*(char *)((long)param_1 + 4) == UNK_00117674);
      auVar6[5] = -(*(char *)((long)param_1 + 5) == UNK_00117675);
      auVar6[6] = -(*(char *)((long)param_1 + 6) == UNK_00117676);
      auVar6[7] = -(*(char *)((long)param_1 + 7) == UNK_00117677);
      auVar6[8] = -((char)param_1[1] == UNK_00117678);
      auVar6[9] = -(*(char *)((long)param_1 + 9) == UNK_00117679);
      auVar6[10] = -(*(char *)((long)param_1 + 10) == UNK_0011767a);
      auVar6[0xb] = -(*(char *)((long)param_1 + 0xb) == UNK_0011767b);
      auVar6[0xc] = -(*(char *)((long)param_1 + 0xc) == UNK_0011767c);
      auVar6[0xd] = -(*(char *)((long)param_1 + 0xd) == UNK_0011767d);
      auVar6[0xe] = -(*(char *)((long)param_1 + 0xe) == UNK_0011767e);
      auVar6[0xf] = -(*(char *)((long)param_1 + 0xf) == UNK_0011767f);
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




// ELF address 0x000000000005bfc0; strategy_comm3_1::signal_trigger::SignalTrigger::update_score

/* strategy_comm3_1::signal_trigger::SignalTrigger::update_score */

void __rustcall
strategy_comm3_1::signal_trigger::SignalTrigger::update_score
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
LAB_0015c192:
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
          goto LAB_0015c192;
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




// ELF address 0x000000000005cd90; strategy_comm3_1::signal_trigger::SignalTrigger::windows_rsi_trigger

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm3_1::signal_trigger::SignalTrigger::windows_rsi_trigger */

undefined1 * __rustcall
strategy_comm3_1::signal_trigger::SignalTrigger::windows_rsi_trigger
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
      dVar13 = (double)(*(ulong *)((long)pauVar10 + lVar6 + -0x18) & _DAT_00117390);
      uVar12 = -(ulong)(DAT_00117260 < dVar13);
      dVar13 = (double)(~uVar12 & _s__00117328 |
                       (ulong)(DAT_001172d0 -
                              DAT_001172d0 /
                              (*(double *)((long)pauVar10 + lVar6 + -0x20) / dVar13 + DAT_00117278))
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
                    /* try { // try from 0015cf33 to 0015cf43 has its CatchHandler @ 0015cf95 */
        alloc::raw_vec::RawVec<T,A>::grow_one
                  (&local_90,anon_8ef4501075edbbf829f558f2af1847e3_5_llvm_12839419423354967770);
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




// ELF address 0x000000000005c3d0; strategy_comm3_1::signal_trigger::SignalTrigger::windows_std_trigger

/* WARNING: Removing unreachable block (ram,0x0015c43b) */
/* strategy_comm3_1::signal_trigger::SignalTrigger::windows_std_trigger */

undefined1 * __rustcall
strategy_comm3_1::signal_trigger::SignalTrigger::windows_std_trigger
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




// ELF address 0x000000000005c320; strategy_comm3_1::signal_trigger::SignalTrigger::windows_mean_trigger

/* WARNING: Removing unreachable block (ram,0x0015c38b) */
/* strategy_comm3_1::signal_trigger::SignalTrigger::windows_mean_trigger */

undefined1 * __rustcall
strategy_comm3_1::signal_trigger::SignalTrigger::windows_mean_trigger
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




// ELF address 0x000000000005cb40; strategy_comm3_1::signal_trigger::SignalTrigger::windows_sharpe_trigger

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm3_1::signal_trigger::SignalTrigger::windows_sharpe_trigger */

undefined1 * __rustcall
strategy_comm3_1::signal_trigger::SignalTrigger::windows_sharpe_trigger
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
      auVar14._12_4_ = _UNK_001174f4;
      dVar1 = *(double *)((long)pauVar11 + lVar6 + -0x38);
      dVar15 = *(double *)((long)pauVar11 + lVar6 + -0x30) /
               ((auVar14._8_8_ - _UNK_001173b8) +
               ((double)CONCAT44(_s__001174f0,(int)lVar7) - _s__001173b0)) - dVar1 * dVar1;
      dVar13 = 0.0;
      if (dVar15 <= 0.0) {
        dVar15 = dVar13;
      }
      dVar15 = SQRT(dVar15);
      *(double *)((long)pauVar11 + lVar6 + -0x28) = dVar15;
      if (DAT_00117260 < (double)((ulong)dVar15 & _DAT_00117390)) {
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
                    /* try { // try from 0015cd03 to 0015cd13 has its CatchHandler @ 0015cd65 */
        alloc::raw_vec::RawVec<T,A>::grow_one
                  (&local_90,anon_8ef4501075edbbf829f558f2af1847e3_4_llvm_12839419423354967770);
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




// ELF address 0x000000000005c290; strategy_comm3_1::signal_trigger::SignalTrigger::point_signal_trigger_pv4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm3_1::signal_trigger::SignalTrigger::point_signal_trigger_pv4 */

void __rustcall
strategy_comm3_1::signal_trigger::SignalTrigger::point_signal_trigger_pv4
          (double param_1,double param_2,ulong param_3,undefined1 *param_4,long param_5)

{
  undefined1 uVar1;
  double dVar2;
  
  dVar2 = *(double *)(param_5 + 0x38);
  param_1 = ((double)(param_3 & _DAT_00117390) + param_2) * param_1;
  if (dVar2 <= 0.0) {
    dVar2 = param_1 + dVar2;
    if (0.0 <= dVar2) {
      dVar2 = 0.0;
    }
    if (dVar2 < *(double *)(param_5 + 0x40)) goto LAB_0015c2e7;
  }
  else {
    dVar2 = dVar2 - param_1;
    if (dVar2 <= 0.0) {
      dVar2 = 0.0;
    }
    if (dVar2 < *(double *)(param_5 + 0x40)) {
LAB_0015c2e7:
      uVar1 = 3;
      if (((dVar2 < *(double *)(param_5 + 0x58)) && (uVar1 = 2, *(double *)(param_5 + 0x50) < dVar2)
          ) && (uVar1 = 4, dVar2 <= *(double *)(param_5 + 0x48))) {
        *param_4 = 1;
        *(undefined8 *)(param_4 + 8) = 0x3ff0000000000000;
        return;
      }
      goto LAB_0015c2c7;
    }
  }
  uVar1 = 0;
LAB_0015c2c7:
  *param_4 = uVar1;
  *(undefined8 *)(param_4 + 8) = 0x3ff0000000000000;
  return;
}




// ELF address 0x000000000005c480; strategy_comm3_1::signal_trigger::SignalTrigger::windows_quantile_trigger

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm3_1::signal_trigger::SignalTrigger::windows_quantile_trigger */

undefined1 * __rustcall
strategy_comm3_1::signal_trigger::SignalTrigger::windows_quantile_trigger
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
  if ((param_1 < 0.0) || (DAT_00117278 < param_1)) {
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
LAB_0015ca8f:
                    /* try { // try from 0015ca8f to 0015ca9f has its CatchHandler @ 0015cb0a */
      uVar12 = anyhow::error::_<impl_anyhow::Error>::msg(&DAT_00118d0c,0x12);
      *(undefined8 *)(param_3 + 8) = uVar12;
      *param_3 = 5;
      if (local_f0 == 0) {
        return param_3;
      }
      (*(code *)PTR___rust_dealloc_001de0f0)(local_e8,local_f0,1);
      return param_3;
    }
  }
  else {
    uVar19 = ~(uint)uVar1;
    dVar23 = DAT_00117278 - param_1;
    local_48 = param_1;
    if ((dVar23 < 0.0) || (DAT_00117278 < dVar23)) {
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
          auVar22._12_4_ = _UNK_001174f4;
          param_1 = param_1 * ((auVar22._8_8_ - _UNK_001173b8) +
                              ((double)CONCAT44(_s__001174f0,(int)uVar15) - _s__001173b0));
          uVar8 = 0;
          if (0.0 <= param_1) {
            uVar8 = (long)(param_1 - _DAT_001172a0) & (long)param_1 >> 0x3f | (long)param_1;
          }
          uVar11 = 0xffffffffffffffff;
          if (param_1 <= _DAT_001171e0) {
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
                    /* try { // try from 0015ca70 to 0015ca77 has its CatchHandler @ 0015cb0c */
              lVar9 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                      ::next(&uStack_d8);
              if (lVar9 == 0) goto LAB_0015ca8f;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
                    /* try { // try from 0015ca82 to 0015ca8b has its CatchHandler @ 0015cb06 */
          _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>::
          next(&uStack_d8);
        }
        goto LAB_0015ca8f;
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
          if (uVar15 == 0) goto LAB_0015ca8f;
          auVar20._8_4_ = (int)(uVar15 >> 0x20);
          auVar20._0_8_ = uVar15;
          auVar20._12_4_ = _UNK_001174f4;
          dVar23 = ((auVar20._8_8_ - _UNK_001173b8) +
                   ((double)CONCAT44(_s__001174f0,(int)uVar15) - _s__001173b0)) * local_48;
          uVar8 = (long)(dVar23 - _DAT_001172a0) & (long)dVar23 >> 0x3f | (long)dVar23;
          if (dVar23 < DAT_00117298) {
            uVar8 = 0;
          }
          if (_DAT_001171e0 < dVar23) {
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
                    /* try { // try from 0015c690 to 0015c699 has its CatchHandler @ 0015cb10 */
              lVar9 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                      ::next(&uStack_d8);
              if (lVar9 == 0) goto LAB_0015ca8f;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
                    /* try { // try from 0015c6a8 to 0015c6b1 has its CatchHandler @ 0015cb08 */
          pdVar10 = (double *)
                    _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                    ::next(&uStack_d8);
          if ((pdVar10 == (double *)0x0) ||
             (uVar15 = *(ulong *)((long)pauVar16 + lVar18 + -0x60), uVar15 == 0)) goto LAB_0015ca8f;
          auVar21._8_4_ = (int)(uVar15 >> 0x20);
          auVar21._0_8_ = uVar15;
          auVar21._12_4_ = _UNK_001174f4;
          dVar23 = ((auVar21._8_8_ - _UNK_001173b8) +
                   ((double)CONCAT44(_s__001174f0,(int)uVar15) - _s__001173b0)) * local_58;
          uVar8 = 0;
          if (DAT_00117298 <= dVar23) {
            uVar8 = (long)(dVar23 - _DAT_001172a0) & (long)dVar23 >> 0x3f | (long)dVar23;
          }
          if (_DAT_001171e0 < dVar23) {
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
                    /* try { // try from 0015c7a0 to 0015c7a9 has its CatchHandler @ 0015cb0e */
              lVar9 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                      ::next(&uStack_d8);
              if (lVar9 == 0) goto LAB_0015ca8f;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
                    /* try { // try from 0015c7b8 to 0015c8cd has its CatchHandler @ 0015cb08 */
          pdVar10 = (double *)
                    _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                    ::next(&uStack_d8);
          uVar15 = local_e0;
          if (pdVar10 == (double *)0x0) goto LAB_0015ca8f;
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
                       PTR_anon_8ef4501075edbbf829f558f2af1847e3_0_llvm_12839419423354967770_001d8e50
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




// ELF address 0x000000000005c200; strategy_comm3_1::signal_trigger::SignalTrigger::point_signal_trigger_pv1_spread

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm3_1::signal_trigger::SignalTrigger::point_signal_trigger_pv1_spread */

void __rustcall
strategy_comm3_1::signal_trigger::SignalTrigger::point_signal_trigger_pv1_spread
          (double param_1,ulong param_2,undefined1 *param_3,long param_4)

{
  undefined1 uVar1;
  double dVar2;
  
  dVar2 = *(double *)(param_4 + 0x38);
  param_1 = (double)(param_2 & _DAT_00117390) * param_1;
  if (dVar2 <= 0.0) {
    dVar2 = param_1 + dVar2;
    if (0.0 <= dVar2) {
      dVar2 = 0.0;
    }
    if (dVar2 < *(double *)(param_4 + 0x40)) goto LAB_0015c253;
  }
  else {
    dVar2 = dVar2 - param_1;
    if (dVar2 <= 0.0) {
      dVar2 = 0.0;
    }
    if (dVar2 < *(double *)(param_4 + 0x40)) {
LAB_0015c253:
      uVar1 = 3;
      if (((dVar2 < *(double *)(param_4 + 0x58)) && (uVar1 = 2, *(double *)(param_4 + 0x50) < dVar2)
          ) && (uVar1 = 4, dVar2 <= *(double *)(param_4 + 0x48))) {
        *param_3 = 1;
        *(undefined8 *)(param_3 + 8) = 0x3ff0000000000000;
        return;
      }
      goto LAB_0015c233;
    }
  }
  uVar1 = 0;
LAB_0015c233:
  *param_3 = uVar1;
  *(undefined8 *)(param_3 + 8) = 0x3ff0000000000000;
  return;
}




// ELF address 0x000000000005d530; strategy_comm3_1::signal_trigger::dynamic_threshold

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm3_1::signal_trigger::dynamic_threshold */

void __rustcall
strategy_comm3_1::signal_trigger::dynamic_threshold
          (double param_1,double param_2,double param_3,double param_4,double *param_5,
          double *param_6)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  
  if ((((0.0 <= param_2) && (0.0 <= param_3)) && (param_2 <= param_1)) &&
     (DAT_001172e0 < (double)(_DAT_00117390 & (ulong)param_4))) {
    dVar1 = param_3 - param_2;
    if (param_3 - param_2 <= DAT_00117260) {
      dVar1 = DAT_00117260;
    }
    dVar1 = (param_1 - param_2) / dVar1;
    if (DAT_00117278 <= dVar1) {
      dVar1 = DAT_00117278;
    }
    dVar4 = (double)((ulong)(param_4 * dVar1) & _DAT_00117390);
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




// ELF address 0x000000000005cfc0; _ZN16strategy_comm3_114signal_trigger17enum_rate_counter17hb2b1659f9016b723E.llvm.12839419423354967770

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm3_1::signal_trigger::enum_rate_counter */

ulong __rustcall strategy_comm3_1::signal_trigger::enum_rate_counter(double param_1,long *param_2)

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
      (*(code *)PTR___rust_dealloc_001de0f0)(param_2[1],*param_2,1);
    }
    goto LAB_0015d4bc;
  }
  local_98 = param_1;
  uStack_90 = in_XMM0_Qb;
  pauVar9 = (undefined1 (*) [16])__tls_get_addr(&PTR_001de488);
  if (pauVar9[1][0] == '\x01') {
    local_a8 = *pauVar9;
  }
  else {
                    /* try { // try from 0015d4d0 to 0015d4d5 has its CatchHandler @ 0015d4e7 */
    local_a8 = (*(code *)PTR_hashmap_random_keys_001de498)();
    *pauVar9 = local_a8;
    pauVar9[1][0] = 1;
  }
  *(long *)*pauVar9 = local_a8._0_8_ + 1;
  local_b8 = _DAT_001d8ea8;
  lStack_b0 = _UNK_001d8eb0;
  local_c8 = (undefined1 (*) [16])
             PTR_anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263_001d8e98;
  uStack_c0 = _UNK_001d8ea0;
  pcVar25 = (char *)param_2[1];
  pcVar1 = pcVar25 + lVar3;
  local_68 = pcVar25;
  do {
    cVar14 = *pcVar25;
    local_60 = CONCAT71(local_60._1_7_,cVar14);
                    /* try { // try from 0015d17b to 0015d1f5 has its CatchHandler @ 0015d4ec */
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
          goto joined_r0x0015d0e4;
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
joined_r0x0015d0e4:
  } while (pcVar25 != pcVar1);
  if (uStack_c0 == 0) {
    uVar13 = 0;
    if (lStack_b0 != 0) goto LAB_0015d26b;
LAB_0015d3f6:
    dVar34 = 0.0;
    dVar33 = 0.0;
    uVar16 = 4;
    if (uVar17 != 0 && uStack_c0 != 0) {
      (*(code *)PTR___rust_dealloc_001de0f0)();
      dVar34 = 0.0;
      dVar33 = 0.0;
    }
  }
  else {
    uVar17 = uStack_c0 * 0x11 + 0x21;
    pauVar9 = local_c8 + (-1 - uStack_c0);
    uVar13 = 0x10;
    if (lStack_b0 == 0) goto LAB_0015d3f6;
LAB_0015d26b:
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
      (*(code *)PTR___rust_dealloc_001de0f0)(pauVar9,uVar17,uVar13);
    }
    auVar29._8_4_ = (int)(uVar21 >> 0x20);
    auVar29._0_8_ = uVar21;
    auVar29._12_4_ = _UNK_001174f4;
    dVar33 = auVar29._8_8_ - _UNK_001173b8;
    dVar34 = dVar33 + ((double)CONCAT44(_s__001174f0,(int)uVar21) - _s__001173b0);
  }
  dVar34 = dVar34 / (double)lVar3;
  uVar17 = 4;
  if (local_98 < dVar34) {
    uVar17 = uVar16 & 0xff;
  }
  local_98 = (double)(-(ulong)(local_98 < dVar34) & (ulong)dVar34);
  uStack_90 = uStack_90 & (ulong)dVar33;
  if (*param_2 != 0) {
    (*(code *)PTR___rust_dealloc_001de0f0)(local_68,*param_2,1);
  }
LAB_0015d4bc:
  return uVar17 & 0xffffffff;
}




// ELF address 0x000000000005bbd0; strategy_comm3_1::signal_trigger::TsQuantileCalculator::update

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm3_1::signal_trigger::TsQuantileCalculator::update */

void __rustcall
strategy_comm3_1::signal_trigger::TsQuantileCalculator::update
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
    param_4 = &PTR_anon_8ef4501075edbbf829f558f2af1847e3_0_llvm_12839419423354967770_001d8e38;
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
        if (lVar7 == 0) goto LAB_0015bce3;
        dVar17 = *pdVar6;
        dVar18 = pdVar6[1];
        param_4 = ppuVar13;
        if (param_2 <= dVar17) {
          if (param_2 < dVar17) goto LAB_0015bce3;
LAB_0015bc86:
          cVar10 = ((ulong)dVar16 >= (ulong)dVar18 && dVar16 != dVar18) -
                   ((ulong)dVar16 < (ulong)dVar18);
        }
        else {
          cVar10 = '\x01';
          if (param_2 < dVar17) goto LAB_0015bc86;
        }
        pdVar6 = pdVar6 + 2;
        lVar7 = lVar7 + -0x10;
        ppuVar13 = (undefined **)((long)ppuVar13 + 1);
      } while (cVar10 == '\x01');
      if (cVar10 == '\0') goto LAB_0015bd36;
LAB_0015bce3:
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
LAB_0015bd36:
  param_3[8] = param_3[8] + 1;
  dVar16 = (double)param_3[9] + param_2;
  param_3[9] = (ulong)dVar16;
  uVar9 = param_3[10] + 1;
  param_3[10] = uVar9;
  auVar20._8_4_ = (int)(uVar9 >> 0x20);
  auVar20._0_8_ = uVar9;
  auVar20._12_4_ = _UNK_001174f4;
  param_3[0xb] = (ulong)(dVar16 / ((auVar20._8_8_ - _UNK_001173b8) +
                                  ((double)CONCAT44(_s__001174f0,(int)uVar9) - _s__001173b0)));
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
            if (lVar7 == 0) goto joined_r0x0015bf18;
            dVar1 = *pdVar5;
            dVar4 = pdVar5[1];
            if (dVar17 <= dVar1) {
              uVar12 = uVar8;
              if (dVar17 < dVar1) goto joined_r0x0015bf18;
LAB_0015bea6:
              cVar10 = ((ulong)dVar18 >= (ulong)dVar4 && dVar18 != dVar4) -
                       ((ulong)dVar18 < (ulong)dVar4);
            }
            else {
              cVar10 = '\x01';
              if (dVar17 < dVar1) goto LAB_0015bea6;
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
joined_r0x0015bf18:
          if (local_78 == 0.0) break;
          local_78 = (double)((long)local_78 - 1);
          local_80 = (double *)local_80[uVar12 + 0x18];
        } while( true );
      }
      dVar16 = dVar16 - dVar17;
      param_3[9] = (ulong)dVar16;
      dVar18 = 0.0;
      if (uVar9 == 0) {
LAB_0015bdc0:
        uVar9 = 0;
      }
      else {
        uVar9 = uVar9 - 1;
        param_3[10] = uVar9;
        if (uVar9 == 0) goto LAB_0015bdc0;
        auVar19._8_4_ = (int)(uVar9 >> 0x20);
        auVar19._0_8_ = uVar9;
        auVar19._12_4_ = _UNK_001174f4;
        dVar18 = dVar16 / ((auVar19._8_8_ - _UNK_001173b8) +
                          ((double)CONCAT44(_s__001174f0,(int)uVar9) - _s__001173b0));
      }
      param_3[0xb] = (ulong)dVar18;
      dVar18 = DAT_00117298;
      param_3[0xc] = (ulong)((double)param_3[0xc] - dVar17 * dVar17);
      param_3[(ulong)(dVar17 <= dVar18) + 0xe] =
           (ulong)((double)param_3[(ulong)(dVar17 <= dVar18) + 0xe] - dVar17);
      uVar8 = param_3[3];
    } while (uVar8 != 0);
  }
  return;
}




// ELF address 0x0000000000039da0; strategy_comm3_1::high_taker_rate

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm3_1::high_taker_rate */

double __rustcall
strategy_comm3_1::high_taker_rate
          (ulong param_1,ulong param_2,double param_3,double param_4,double param_5,double param_6,
          double unaff_XMM6_Qa)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar4 = 0.0;
  if (0.0 < param_4 + param_5) {
    dVar4 = (param_4 - param_5) / (param_4 + param_5);
    if (dVar4 <= 0.0) {
      dVar4 = 0.0;
    }
    if ((0.0 < param_3) && (DAT_00117278 < param_6)) {
      dVar3 = (double)(param_2 & _DAT_00117390);
      if (DAT_001172e0 <= dVar3) {
        dVar1 = (double)(param_1 & _DAT_00117390);
        dVar2 = dVar1 / dVar3 + _s__00117200;
        if (dVar2 <= 0.0) {
          dVar2 = 0.0;
        }
        dVar2 = (double)(*(code *)PTR_tanh_001de1d0)(dVar2 * DAT_001172c8);
        dVar2 = (param_6 + _s__00117200) * dVar2 + DAT_00117278;
        param_3 = ((dVar1 - dVar3) * unaff_XMM6_Qa) / param_3;
        dVar3 = param_3;
        if (dVar2 <= param_3) {
          dVar3 = dVar2;
        }
        dVar3 = (double)(-(ulong)NAN(dVar2) & (ulong)param_3 | ~-(ulong)NAN(dVar2) & (ulong)dVar3);
        if (dVar3 <= DAT_00117298) {
          dVar3 = DAT_00117298;
        }
        dVar4 = dVar4 * dVar3;
      }
    }
  }
  return dVar4;
}




// ELF address 0x000000000005ec30; strategy_comm3_1::vol_spread_ratio::VolSpreadRatio::update

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm3_1::vol_spread_ratio::VolSpreadRatio::update */

ulong __rustcall
strategy_comm3_1::vol_spread_ratio::VolSpreadRatio::update
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
  
  dVar11 = DAT_001172c8 * (param_2 + param_3);
  dVar9 = (double)(*(code *)PTR_round_001de4d0)
                            (((param_3 - param_2) / (param_2 + param_3)) * _DAT_001172e8);
  uVar4 = *param_4;
  uVar1 = param_4[3];
  if (uVar1 == uVar4) {
    alloc::collections::vec_deque::VecDeque<T,A>::grow
              (param_4,anon_62b1755a4e59245ff4708d76c6ff315a_43_llvm_1958943323043304036);
    uVar4 = *param_4;
    uVar1 = param_4[3];
  }
  dVar9 = dVar9 / DAT_001172b8;
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
    if ((double)param_4[0x29] * DAT_001172c8 <= param_1 - *(double *)(uVar4 + lVar2)) {
      dVar9 = *(double *)(lVar2 + uVar4 + 8);
      if (dVar9 <= 0.0) {
        return 0;
      }
      dVar9 = (double)(*(code *)PTR_round_001de4d0)
                                ((*(double *)(uVar4 + 8 + (uVar5 - uVar6) * 0x10) / dVar9 +
                                 _s__00117200) * _DAT_001172e8);
      signal_trigger::TsQuantileCalculator::update(param_1,dVar9 / DAT_001172b8,param_4 + 5);
      uVar4 = param_4[0xf];
      uVar1 = 1;
      if (1 < uVar4) {
        uVar1 = uVar4;
      }
      auVar10._8_4_ = (int)(uVar1 >> 0x20);
      auVar10._0_8_ = uVar1;
      auVar10._12_4_ = _UNK_001174f4;
      dVar9 = (double)param_4[0x11] /
              ((auVar10._8_8_ - _UNK_001173b8) +
              ((double)CONCAT44(_s__001174f0,(int)uVar1) - _s__001173b0)) -
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




// ELF address 0x0000000000039830; strategy_comm3_1::live_pending_counts

/* strategy_comm3_1::live_pending_counts */

undefined1  [16] __rustcall
strategy_comm3_1::live_pending_counts
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
  
  (*(code *)PTR_pending_orders_001de1b0)(&local_48,param_1,param_2,param_3);
                    /* try { // try from 00139867 to 0013987a has its CatchHandler @ 00139d79 */
  (*(code *)PTR_cancel_pending_ids_001de1c8)(&local_60,param_1,param_2,param_3);
  lVar7 = local_50;
  lVar17 = local_58;
  puVar8 = PTR___rust_dealloc_001de0f0;
  plVar14 = local_40 + local_38 * 0xb;
  if (local_38 == 0) {
    local_c0 = 0;
    lVar12 = 0;
    plVar15 = local_40;
LAB_00139bea:
    puVar8 = PTR___rust_dealloc_001de0f0;
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
LAB_00139927:
      do {
        plVar15 = plVar10 + 0xb;
        lVar2 = *plVar10;
        if (lVar2 == -0x8000000000000000) goto LAB_00139bea;
        lVar3 = plVar10[1];
        lVar4 = plVar10[2];
        lVar5 = plVar10[3];
        lVar16 = plVar10[4];
        bVar1 = *(byte *)(plVar10 + 10);
        lVar13 = 0;
        do {
          plVar10 = plVar15;
          if ((*(long *)(param_4 + 0x10 + lVar13) == lVar4) &&
             (iVar9 = (*(code *)PTR_bcmp_001de1a8)
                                (*(undefined8 *)(param_4 + 8 + lVar13),lVar3,lVar4), iVar9 == 0))
          goto LAB_001399e7;
          lVar13 = lVar13 + 0x18;
        } while (param_5 * 0x18 != lVar13);
        if (lVar7 != 0) {
          lVar13 = 0;
          do {
            if ((*(long *)(lVar17 + 0x10 + lVar13) == lVar4) &&
               (iVar9 = (*(code *)PTR_bcmp_001de1a8)
                                  (*(undefined8 *)(lVar17 + 8 + lVar13),lVar3,lVar4), iVar9 == 0))
            goto LAB_001399e7;
            lVar13 = lVar13 + 0x18;
          } while (lVar6 != lVar13);
        }
        if (lVar2 != 0) {
          (*(code *)PTR___rust_dealloc_001de0f0)(lVar3,lVar2,1);
        }
        if (lVar5 != 0) {
          (*(code *)PTR___rust_dealloc_001de0f0)(lVar16,lVar5,1);
        }
        lVar12 = lVar12 + (ulong)bVar1;
        local_c0 = local_c0 + (ulong)(bVar1 ^ 1);
      } while (plVar15 != plVar14);
      goto LAB_00139ce6;
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
LAB_00139ae0:
      do {
        plVar15 = plVar10 + 0xb;
        lVar6 = *plVar10;
        if (lVar6 == -0x8000000000000000) goto LAB_00139bea;
        lVar2 = plVar10[1];
        lVar3 = plVar10[2];
        lVar4 = plVar10[3];
        lVar5 = plVar10[4];
        bVar1 = *(byte *)(plVar10 + 10);
        lVar16 = 0;
        do {
          plVar10 = plVar15;
          if ((*(long *)(lVar17 + 0x10 + lVar16) == lVar3) &&
             (iVar9 = (*(code *)PTR_bcmp_001de1a8)(*(undefined8 *)(lVar17 + 8 + lVar16),lVar2,lVar3)
             , iVar9 == 0)) {
            if (lVar6 != 0) {
              (*(code *)PTR___rust_dealloc_001de0f0)(lVar2,lVar6,1);
            }
            if (lVar4 != 0) {
              (*(code *)PTR___rust_dealloc_001de0f0)(lVar5,lVar4,1);
            }
            if (plVar15 != plVar14) goto LAB_00139ae0;
            goto LAB_00139bea;
          }
          lVar16 = lVar16 + 0x18;
        } while (lVar7 != lVar16);
        if (lVar6 != 0) {
          (*(code *)PTR___rust_dealloc_001de0f0)(lVar2,lVar6,1);
        }
        if (lVar4 != 0) {
          (*(code *)PTR___rust_dealloc_001de0f0)(lVar5,lVar4,1);
        }
        lVar12 = lVar12 + (ulong)bVar1;
        local_c0 = local_c0 + (ulong)(bVar1 ^ 1);
      } while (plVar15 != plVar14);
    }
  }
LAB_00139ce6:
  if (local_48 != 0) {
    (*(code *)PTR___rust_dealloc_001de0f0)(local_40,local_48 * 0x58,8);
  }
  puVar8 = PTR___rust_dealloc_001de0f0;
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
    (*(code *)PTR___rust_dealloc_001de0f0)(local_58,local_60 * 0x18,8);
  }
  auVar19._8_8_ = local_c0;
  auVar19._0_8_ = lVar12;
  return auVar19;
LAB_001399e7:
  if (lVar2 != 0) {
    (*(code *)PTR___rust_dealloc_001de0f0)(lVar3,lVar2,1);
  }
  if (lVar5 != 0) {
    (*(code *)PTR___rust_dealloc_001de0f0)(lVar16,lVar5,1);
  }
  if (plVar15 == plVar14) goto LAB_00139bea;
  goto LAB_00139927;
}




// ELF address 0x0000000000038fd0; strategy_comm3_1::cancel_order_use_range

/* strategy_comm3_1::cancel_order_use_range */

long __rustcall
strategy_comm3_1::cancel_order_use_range
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
  (*(code *)PTR_pending_orders_001de1b0)(&local_48,param_3,param_4,param_5);
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
LAB_001390a0:
    uVar14 = (long)plVar9 - (long)plVar8;
    plVar12 = plVar8;
    do {
      lVar2 = *plVar12;
      lVar7 = plVar12[1];
      lVar13 = plVar12[3];
      local_108 = plVar12[4];
      if (*(byte *)(plVar12 + 10) == local_109) {
        if (lVar2 != -0x8000000000000000) goto LAB_00139130;
      }
      else {
        if (lVar2 != 0) {
          (*(code *)PTR___rust_dealloc_001de0f0)(lVar7,lVar2,1);
        }
        if (lVar13 != 0) {
          (*(code *)PTR___rust_dealloc_001de0f0)(local_108,lVar13,1);
        }
      }
      plVar12 = plVar12 + 0xb;
      uVar14 = uVar14 - 0x58;
      local_48 = local_d8;
      local_40 = local_e0;
      if (plVar12 == local_e8) break;
    } while( true );
  }
LAB_00139298:
  local_c0 = plVar8;
  plVar8 = local_f0;
  if (local_48 != 0) {
    (*(code *)PTR___rust_dealloc_001de0f0)(local_40,local_48 * 0x58,8);
  }
  (*(code *)PTR_pending_orders_001de1b0)(&local_60,local_90,local_88,local_80);
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
LAB_0013936a:
    uVar14 = (long)local_d0 - (long)plVar9;
    plVar12 = plVar9;
    do {
      lVar2 = *plVar12;
      lVar7 = plVar12[1];
      local_108 = plVar12[3];
      local_e8 = (long *)plVar12[4];
      bVar1 = *(byte *)(plVar12 + 10);
      if (bVar1 == local_10a) {
        if (lVar2 != -0x8000000000000000) goto LAB_00139400;
      }
      else {
        if (lVar2 != 0) {
          (*(code *)PTR___rust_dealloc_001de0f0)(lVar7,lVar2,1);
        }
        if (local_108 != 0) {
          (*(code *)PTR___rust_dealloc_001de0f0)(local_e8,local_108,1);
        }
      }
      plVar12 = plVar12 + 0xb;
      uVar14 = uVar14 - 0x58;
      local_60 = local_d8;
      local_58 = local_e0;
      if (plVar12 == local_f8) break;
    } while( true );
  }
LAB_001395ca:
  local_c0 = plVar9;
  if (local_60 != 0) {
    (*(code *)PTR___rust_dealloc_001de0f0)(local_58,local_60 * 0x58,8);
  }
  return 0;
LAB_00139130:
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
         (iVar3 = (*(code *)PTR_bcmp_001de1a8)(*(undefined8 *)(lVar5 + 8 + lVar10),lVar7),
         lVar13 = local_100, lVar4 = local_98, plVar8 = local_f8, iVar3 == 0)) {
        if (lVar2 != 0) {
          (*(code *)PTR___rust_dealloc_001de0f0)(lVar7,lVar2,1);
        }
        goto LAB_0013924e;
      }
      lVar10 = lVar10 + 0x18;
    } while (lVar4 != lVar10);
  }
                    /* try { // try from 001391e0 to 00139203 has its CatchHandler @ 001397cf */
  lVar5 = (*(code *)PTR_cancel_order_001de1b8)(local_90,local_88,local_80,lVar7,plVar8);
  plVar8 = local_f0;
  if (lVar5 != 0) {
    plVar8 = plVar12 + 0xb;
    local_f8 = (long *)lVar5;
    local_c0 = plVar8;
    if (lVar2 != 0) {
      (*(code *)PTR___rust_dealloc_001de0f0)(lVar7,lVar2,1);
    }
    if (lVar13 != 0) {
      (*(code *)PTR___rust_dealloc_001de0f0)(local_108,lVar13,1);
    }
    if (plVar8 != local_e8) {
      plVar12 = plVar12 + 0xf;
      uVar14 = uVar14 / 0x58;
      do {
        if (plVar12[-4] != 0) {
          (*(code *)PTR___rust_dealloc_001de0f0)(plVar12[-3],plVar12[-4],1);
        }
        if (plVar12[-1] != 0) {
          (*(code *)PTR___rust_dealloc_001de0f0)(*plVar12,plVar12[-1],1);
        }
        plVar12 = plVar12 + 0xb;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    if (local_d8 == 0) {
      return (long)local_f8;
    }
    (*(code *)PTR___rust_dealloc_001de0f0)(local_e0,local_d8 * 0x58,8);
    return (long)local_f8;
  }
  lVar5 = local_f0[2];
  if (lVar5 == *local_f0) {
                    /* try { // try from 0013921c to 0013922b has its CatchHandler @ 0013977a */
    (*(code *)PTR_grow_one_001de1c0)(local_f0,&PTR_s_strategies_comm_strategy_strateg_001d8210);
  }
  lVar4 = plVar8[1];
  *(long *)(lVar4 + lVar5 * 0x18) = lVar2;
  *(long *)(lVar4 + 8 + lVar5 * 0x18) = lVar7;
  *(long **)(lVar4 + 0x10 + lVar5 * 0x18) = local_f8;
  plVar8[2] = lVar5 + 1;
LAB_0013924e:
  plVar9 = local_d0;
  if (lVar13 != 0) {
    (*(code *)PTR___rust_dealloc_001de0f0)(local_108,lVar13,1);
  }
  plVar8 = plVar12 + 0xb;
  if (plVar8 == local_e8) goto code_r0x0013927d;
  goto LAB_001390a0;
code_r0x0013927d:
  local_48 = local_d8;
  local_40 = local_e0;
  plVar8 = plVar12 + 0xb;
  goto LAB_00139298;
LAB_00139400:
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
         (iVar3 = (*(code *)PTR_bcmp_001de1a8)
                            (*(undefined8 *)(lVar5 + 8 + (long)dVar11),lVar7,lVar13),
         dVar6 = local_a0, lVar5 = local_98, lVar7 = local_100, iVar3 == 0)) {
        plVar8 = local_f0;
        if (lVar2 != 0) {
          (*(code *)PTR___rust_dealloc_001de0f0)(local_100,lVar2,1);
          plVar8 = local_f0;
        }
        goto joined_r0x001394a7;
      }
      dVar11 = (double)((long)dVar11 + 0x18);
    } while (dVar6 != dVar11);
  }
  plVar8 = local_f0;
  if ((bVar1 & 1) == 0) {
    if (local_68 < local_70) goto LAB_0013951a;
  }
  else if (local_70 < local_78) {
LAB_0013951a:
                    /* try { // try from 0013951a to 0013953d has its CatchHandler @ 0013977c */
    lVar7 = (*(code *)PTR_cancel_order_001de1b8)(local_90,local_88,local_80,lVar7,lVar13);
    if (lVar7 != 0) {
      plVar8 = plVar12 + 0xb;
      local_c0 = plVar8;
      if (lVar2 != 0) {
        (*(code *)PTR___rust_dealloc_001de0f0)(local_100,lVar2,1);
      }
      if (local_108 != 0) {
        (*(code *)PTR___rust_dealloc_001de0f0)(local_e8,local_108,1);
      }
      if (plVar8 != local_f8) {
        plVar12 = plVar12 + 0xf;
        uVar14 = uVar14 / 0x58;
        do {
          if (plVar12[-4] != 0) {
            (*(code *)PTR___rust_dealloc_001de0f0)(plVar12[-3],plVar12[-4],1);
          }
          if (plVar12[-1] != 0) {
            (*(code *)PTR___rust_dealloc_001de0f0)(*plVar12,plVar12[-1],1);
          }
          plVar12 = plVar12 + 0xb;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
      if (local_d8 == 0) {
        return lVar7;
      }
      (*(code *)PTR___rust_dealloc_001de0f0)(local_e0,local_d8 * 0x58,8);
      return lVar7;
    }
    lVar7 = plVar8[2];
    if (lVar7 == *plVar8) {
                    /* try { // try from 00139551 to 00139560 has its CatchHandler @ 00139778 */
      (*(code *)PTR_grow_one_001de1c0)(plVar8,&PTR_s_strategies_comm_strategy_strateg_001d8228);
    }
    lVar5 = plVar8[1];
    *(long *)(lVar5 + lVar7 * 0x18) = lVar2;
    *(long *)(lVar5 + 8 + lVar7 * 0x18) = local_100;
    *(long *)(lVar5 + 0x10 + lVar7 * 0x18) = lVar13;
    plVar8[2] = lVar7 + 1;
    goto joined_r0x001394a7;
  }
  if (lVar2 != 0) {
    (*(code *)PTR___rust_dealloc_001de0f0)(lVar7,lVar2,1);
  }
joined_r0x001394a7:
  if (local_108 != 0) {
    (*(code *)PTR___rust_dealloc_001de0f0)(local_e8,local_108,1);
  }
  plVar9 = plVar12 + 0xb;
  if (plVar9 == local_f8) goto code_r0x001395b4;
  goto LAB_0013936a;
code_r0x001395b4:
  local_60 = local_d8;
  local_58 = local_e0;
  plVar9 = plVar12 + 0xb;
  goto LAB_001395ca;
}




// ELF address 0x000000000003da20; strategy_comm3_1::place

/* strategy_comm3_1::place */

void __rustcall strategy_comm3_1::place(double param_1,undefined8 param_2,undefined8 param_3)

{
  if (0.0 < param_1) {
    (*(code *)PTR_place_order_iap_with_target_001de2e8)(param_2,param_3,1);
    return;
  }
  (*(code *)PTR_place_order_iap_001de2f0)();
  return;
}




// ELF address 0x0000000000039ed0; <strategy_comm3_1::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin

/* _<strategy_comm3_1::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin */

undefined8 __rustcall
_<strategy_comm3_1::StrategyComm3_as_future_backtest_sdk::plugin::StrategyPlugin>::on_begin
          (long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long local_408;
  long local_400;
  ulong local_3f8;
  long local_3f0;
  ulong local_3e8;
  undefined4 *local_3e0;
  undefined *local_3d8;
  long *local_3d0;
  code *local_3c8;
  undefined **local_3c0;
  undefined8 local_3b8;
  undefined4 **local_3b0;
  undefined8 local_3a8;
  undefined8 local_3a0;
  undefined1 local_390 [24];
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
  undefined4 local_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  long local_338;
  long lStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  long local_1d8;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  long local_190;
  long lStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  
  (*(code *)PTR_custom_config_001de1d8)(&local_408);
                    /* try { // try from 00139ef9 to 00139f27 has its CatchHandler @ 0013a1e3 */
  _<toml::de::Deserializer_as_serde_core::de::Deserializer>::deserialize_struct
            (&local_1d8,local_400,local_3f8,"Comm3Params",0xb,
             &PTR_s_signal_modepv1_alphacost_alphasi_001d8240,0x2b);
  if (local_1d8 == 2) {
    local_328 = local_180;
    uStack_320 = uStack_178;
    local_338 = local_190;
    lStack_330 = lStack_188;
    local_348 = local_1a0;
    uStack_344 = uStack_19c;
    uStack_340 = uStack_198;
    uStack_33c = uStack_194;
    local_358 = local_1b0;
    uStack_354 = uStack_1ac;
    uStack_350 = uStack_1a8;
    uStack_34c = uStack_1a4;
    local_368 = local_1c0;
    uStack_364 = uStack_1bc;
    uStack_360 = uStack_1b8;
    uStack_35c = uStack_1b4;
    local_378 = local_1d0;
    uStack_374 = uStack_1cc;
    uStack_370 = uStack_1c8;
    uStack_36c = uStack_1c4;
    local_3e8 = 200;
    if (local_3f8 < 200) {
      local_3e8 = local_3f8;
    }
    if ((200 < local_3f8) && (*(char *)(local_400 + local_3e8) < -0x40)) {
                    /* try { // try from 0013a1cc to 0013a1e0 has its CatchHandler @ 0013a1e8 */
      (*(code *)PTR_slice_error_fail_001de1f0)
                (local_400,local_3f8,0,local_3e8,&PTR_s_strategies_comm_strategy_strateg_001d84f0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    local_3f0 = local_400;
    local_3e0 = &local_378;
    local_3d8 = PTR_fmt_001de1e0;
    local_3d0 = &local_3f0;
    local_3c8 = _<&T_as_core::fmt::Display>::fmt;
    local_3c0 = &PTR_s__custom__parse_error____Raw__001d8508;
    local_3b8 = 2;
    local_3a0 = 0;
    local_3b0 = &local_3e0;
    local_3a8 = 2;
                    /* try { // try from 0013a00f to 0013a02e has its CatchHandler @ 0013a1e8 */
    (*(code *)PTR_format_inner_001de1e8)(local_390,&local_3c0);
    uVar4 = anyhow::error::_<impl_anyhow::Error>::msg(local_390);
    if (CONCAT44(uStack_35c,uStack_360) != 0) {
      (*(code *)PTR___rust_dealloc_001de0f0)
                (CONCAT44(uStack_354,local_358),CONCAT44(uStack_35c,uStack_360),1);
    }
    if (lStack_330 != 0) {
      (*(code *)PTR___rust_dealloc_001de0f0)(local_328,lStack_330,1);
    }
    puVar3 = PTR___rust_dealloc_001de0f0;
    lVar2 = CONCAT44(uStack_33c,uStack_340);
    if (local_338 != 0) {
      puVar6 = (undefined8 *)(lVar2 + 8);
      lVar5 = local_338;
      do {
        if (puVar6[-1] != 0) {
          (*(code *)puVar3)(*puVar6,puVar6[-1],1);
        }
        puVar6 = puVar6 + 3;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    if (CONCAT44(uStack_344,local_348) != 0) {
      (*(code *)PTR___rust_dealloc_001de0f0)(lVar2,CONCAT44(uStack_344,local_348) * 0x18,8);
    }
  }
  else {
    (*(code *)PTR_memcpy_001de150)(&local_378,&uStack_1c8,0x198);
    if ((int)*param_1 != 2) {
      if (param_1[8] != 0) {
        (*(code *)PTR___rust_dealloc_001de0f0)(param_1[9],param_1[8],1);
      }
      if (param_1[0xb] != 0) {
        (*(code *)PTR___rust_dealloc_001de0f0)(param_1[0xc],param_1[0xb],1);
      }
      if (param_1[0xe] != 0) {
        (*(code *)PTR___rust_dealloc_001de0f0)(param_1[0xf],param_1[0xe] << 3,8);
      }
      if (param_1[0x11] != 0) {
        (*(code *)PTR___rust_dealloc_001de0f0)(param_1[0x12],param_1[0x11],1);
      }
    }
    *param_1 = local_1d8;
    param_1[1] = CONCAT44(uStack_1cc,local_1d0);
    (*(code *)PTR_memcpy_001de150)(param_1 + 2,&local_378,0x198);
    uVar4 = 0;
  }
  if (local_408 != 0) {
    (*(code *)PTR___rust_dealloc_001de0f0)(local_400,local_408,1);
  }
  return uVar4;
}




// ELF address 0x000000000003d720; <strategy_comm3_1::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth

/* _<strategy_comm3_1::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth */

undefined8 __rustcall
_<strategy_comm3_1::StrategyComm3_as_future_backtest_sdk::plugin::StrategyPlugin>::on_depth
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
  
  if (*(long *)(param_1 + 0x1f0) != 0) {
    uVar11 = core::hash::BuildHasher::hash_one(param_1 + 0x1f8);
    puVar8 = PTR_bcmp_001de1a8;
    lVar3 = *(long *)(param_1 + 0x1d8);
    uVar4 = *(ulong *)(param_1 + 0x1e0);
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
          uVar12 = core::hash::BuildHasher::hash_one(param_1 + 0x1f8,param_2 + 0x20);
          hashbrown::raw::RawTable<T,A>::remove_entry
                    (&lStack_60,param_1 + 0x1d8,uVar12,param_2 + 0x20);
          if (lStack_60 == 0) {
            return 0;
          }
          (*(code *)PTR___rust_dealloc_001de0f0)(uStack_58,lStack_60,1);
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




// ELF address 0x000000000003d900; <strategy_comm3_1::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_finish

/* _<strategy_comm3_1::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_finish */

undefined8 __rustcall
_<strategy_comm3_1::StrategyComm3_as_future_backtest_sdk::plugin::StrategyPlugin>::on_finish
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
  
  lVar6 = (*(code *)PTR_para_001de1f8)(param_2);
  uVar2 = *(undefined2 *)(lVar6 + 0x34);
  uVar7 = *(undefined8 *)(lVar6 + 0x28);
  local_48 = *(undefined4 *)(lVar6 + 0x18);
  uStack_44 = *(undefined4 *)(lVar6 + 0x1c);
  uStack_40 = *(undefined4 *)(lVar6 + 0x20);
  uStack_3c = *(undefined4 *)(lVar6 + 0x24);
  uVar3 = *(undefined4 *)(lVar6 + 0x30);
  uVar1 = *(undefined1 *)(lVar6 + 0x30);
  _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone
            (&local_80,lVar6,anon_5975c54c689ab122e96d0a719b34dc36_68_llvm_1230708571859544835);
  local_68 = CONCAT44(uStack_44,local_48);
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_58 = uVar7;
  local_50 = uVar3;
  local_4c = uVar2;
                    /* try { // try from 0013d96e to 0013d986 has its CatchHandler @ 0013da03 */
  uVar5 = (*(code *)PTR_is_night_001de2e0)(param_2);
  uVar7 = (*(code *)PTR_all_in_001de238)(param_2,uVar5,uVar1);
  puVar4 = PTR___rust_dealloc_001de0f0;
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
    (*(code *)PTR___rust_dealloc_001de0f0)(local_78,local_80 * 0x18,8);
  }
  return uVar7;
}




// ELF address 0x000000000003a220; <strategy_comm3_1::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _<strategy_comm3_1::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal */

double *** __rustcall
_<strategy_comm3_1::StrategyComm3_as_future_backtest_sdk::plugin::StrategyPlugin>::on_signal
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
  double **ppdVar16;
  long lVar17;
  byte bVar18;
  long lVar19;
  double ***pppdVar20;
  undefined8 uVar21;
  long *plVar22;
  bool bVar23;
  ulong uVar24;
  double extraout_XMM0_Qa;
  double dVar25;
  double *pdVar26;
  double extraout_XMM0_Qb;
  double extraout_XMM0_Qb_00;
  double extraout_XMM0_Qb_01;
  double extraout_XMM0_Qb_02;
  double extraout_XMM0_Qb_03;
  double extraout_XMM0_Qb_04;
  double extraout_XMM0_Qb_05;
  double extraout_XMM0_Qb_06;
  double *extraout_XMM1_Qa;
  double *extraout_XMM1_Qb;
  double dVar27;
  double *pdVar28;
  double *pdVar29;
  double *pdVar30;
  double *pdVar31;
  double dVar32;
  undefined1 auVar33 [16];
  char local_8c9;
  undefined8 local_8c8;
  undefined1 uStack_8ba;
  char cStack_8b9;
  double ***local_8b8;
  double dStack_8b0;
  uint local_8a8;
  undefined4 uStack_8a4;
  double dStack_8a0;
  double local_898;
  undefined8 uStack_890;
  double local_888;
  undefined8 local_880;
  undefined8 local_878;
  char local_86a;
  char local_869;
  double ***local_868;
  undefined8 uStack_860;
  double **local_858;
  double *pdStack_850;
  double *local_848;
  double *pdStack_840;
  double *local_838;
  double dStack_830;
  double dStack_820;
  double *local_818;
  double dStack_810;
  double dStack_808;
  double *local_800;
  double *local_7f8;
  double ***pppdStack_7f0;
  double **local_7e8;
  undefined1 *puStack_7e0;
  double *local_7d8;
  undefined *puStack_7d0;
  double *pdStack_7c8;
  code *pcStack_7c0;
  double *local_7b8;
  double dStack_7b0;
  double local_7a8;
  double *pdStack_7a0;
  char *pcStack_798;
  undefined8 uStack_790;
  double local_788;
  double dStack_780;
  double *local_770;
  double ***pppdStack_768;
  double **local_760;
  undefined1 *puStack_758;
  double *local_750;
  undefined *puStack_748;
  double *pdStack_740;
  code *pcStack_738;
  double *pdStack_730;
  undefined *puStack_728;
  char **ppcStack_720;
  code *pcStack_718;
  double **ppdStack_710;
  code *pcStack_708;
  double local_668;
  double *local_660;
  double local_658;
  undefined4 local_64c;
  double *local_648;
  double ***pppdStack_640;
  double **ppdStack_638;
  double *pdStack_630;
  double ***pppdStack_628;
  double **ppdStack_620;
  double dStack_610;
  undefined8 uStack_608;
  double *local_5f8;
  double dStack_5f0;
  double local_5e8;
  double dStack_5e0;
  double local_5d8;
  undefined8 uStack_5d0;
  double *local_5c8;
  undefined8 uStack_5c0;
  double *local_5b8;
  double dStack_5b0;
  double *local_5a8;
  double *pdStack_5a0;
  double local_590;
  double *local_588;
  double local_580;
  double *local_578;
  double local_570;
  double *local_568;
  double local_560;
  double local_558;
  double *local_550;
  double ***pppdStack_548;
  double **local_540;
  long local_538;
  double dStack_530;
  undefined8 local_528;
  double **local_520;
  long local_518;
  double **local_510;
  double *local_508;
  double ***pppdStack_500;
  double **local_4f8;
  double local_4f0;
  double dStack_4e8;
  double *local_4e0;
  double dStack_4d8;
  double local_4d0;
  double dStack_4c8;
  double *local_4c0;
  double dStack_4b8;
  double *local_4b0;
  double *pdStack_4a8;
  double *local_4a0;
  double dStack_498;
  double local_490;
  double dStack_488;
  double local_480;
  double dStack_478;
  double local_470;
  double dStack_468;
  double *local_460;
  double *pdStack_458;
  double *local_450;
  double dStack_448;
  double local_440;
  double dStack_438;
  double local_430;
  double dStack_428;
  double local_420;
  double dStack_418;
  double local_410;
  double dStack_408;
  double local_400;
  double local_3f8;
  char local_3f0;
  char local_3ef;
  char local_3ee;
  long local_3e8;
  double ***local_3e0;
  long local_3d8;
  long local_3d0;
  undefined8 local_3c8;
  double local_3b8;
  double dStack_3b0;
  long local_3a8;
  long *local_3a0;
  long local_398;
  double ***local_390;
  undefined8 uStack_388;
  double local_380;
  undefined4 local_378;
  char local_374;
  undefined1 local_373;
  double local_370;
  double *pdStack_368;
  double *pdStack_360;
  double *pdStack_358;
  double dStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  double dStack_330;
  undefined8 uStack_328;
  double *pdStack_320;
  double *pdStack_318;
  double *pdStack_310;
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
  
  lVar8 = (*(code *)PTR_para_001de1f8)(param_3);
  cVar5 = *(char *)(lVar8 + 0x34);
  local_8b8 = *(double ****)(lVar8 + 0x28);
  uVar4 = *(undefined1 *)(lVar8 + 0x35);
  local_868 = *(double ****)(lVar8 + 0x18);
  uStack_860 = *(undefined8 *)(lVar8 + 0x20);
  pppdVar9 = *(double ****)(lVar8 + 0x30);
  _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone
            (&local_3a8,lVar8,anon_5975c54c689ab122e96d0a719b34dc36_68_llvm_1230708571859544835);
  local_378 = SUB84(pppdVar9,0);
  local_390 = local_868;
  uStack_388 = uStack_860;
  local_380 = (double)local_8b8;
  local_374 = cVar5;
  local_373 = uVar4;
  if (*(int *)param_1 == 2) {
                    /* try { // try from 0013abf3 to 0013ac0b has its CatchHandler @ 0013d6a8 */
    (*(code *)PTR_expect_failed_001de248)
              ("on_begin must be called firston_signal code= score= vol_alpha=",0x1d,
               &PTR_s_strategies_comm_strategy_strateg_001d8540);
    goto LAB_0013ac0c;
  }
                    /* try { // try from 0013a2bb to 0013a2cf has its CatchHandler @ 0013d6a8 */
  (*(code *)PTR_clone_001de200)
            (&local_7f8,param_1 + 8,&PTR_s_strategies_comm_strategy_strateg_001d8730);
  local_8b8 = (double ***)param_1[0x14];
  dStack_8b0 = param_1[0x15];
                    /* try { // try from 0013a2eb to 0013a2ff has its CatchHandler @ 0013d6a3 */
  local_898 = param_2;
  local_868 = pppdVar9;
  (*(code *)PTR_clone_001de200)
            (&local_158,param_1 + 0xb,&PTR_s_strategies_comm_strategy_strateg_001d8730);
  ppdVar11 = (double **)param_1[0x10];
  uVar24 = (long)ppdVar11 * 8;
  if (0x7ffffffffffffff8 < uVar24 || (ulong)ppdVar11 >> 0x3d != 0) {
    uVar21 = 0;
LAB_0013a334:
                    /* try { // try from 0013a334 to 0013a346 has its CatchHandler @ 0013d6c0 */
    (*(code *)PTR_handle_error_001de188)
              (uVar21,uVar24,anon_37c40bb4ecede8bd1cab19323b87bb5b_9_llvm_1510501023419195018);
LAB_0013ac0c:
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_838 = (double *)param_1[0x16];
  dStack_830 = param_1[0x17];
  dVar25 = param_1[0xf];
  local_8c8 = param_3;
  local_86a = cVar5;
  local_800 = param_1;
  if (uVar24 == 0) {
    local_518 = 8;
    local_858 = (double **)0x0;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001de110)();
    uVar21 = 8;
    local_518 = (*(code *)PTR___rust_alloc_001de0e8)(uVar24,8);
    local_858 = ppdVar11;
    if (local_518 == 0) goto LAB_0013a334;
  }
  (*(code *)PTR_memcpy_001de150)(local_518,dVar25,uVar24);
  pdVar31 = local_800;
  dStack_8a0 = local_800[0x19];
  local_8a8 = SUB84(local_800[0x18],0);
  uStack_8a4 = (undefined4)((ulong)local_800[0x18] >> 0x20);
  cVar5 = *(char *)(local_800 + 0x34);
  local_818 = (double *)local_800[0x1a];
  dStack_810 = local_800[0x1b];
  local_848 = (double *)local_800[0x1c];
  pdStack_840 = (double *)local_800[0x1d];
  cVar3 = *(char *)((long)local_800 + 0x1a1);
  local_7b8 = (double *)local_800[0x1e];
  dStack_7b0 = local_800[0x1f];
  local_5e8 = local_800[0x20];
  dStack_5e0 = local_800[0x21];
  local_788 = local_800[0x22];
  dStack_780 = local_800[0x23];
  local_3b8 = local_800[0x24];
  dStack_3b0 = local_800[0x25];
  local_5a8 = (double *)local_800[0x26];
  pdStack_5a0 = (double *)local_800[0x27];
  local_5b8 = (double *)local_800[0x28];
  dStack_5b0 = local_800[0x29];
  dVar25 = *local_800;
  local_5c8 = (double *)local_800[1];
  local_5d8 = local_800[2];
  local_5f8 = (double *)local_800[3];
  local_658 = local_800[4];
  local_660 = (double *)local_800[5];
  local_668 = local_800[6];
  local_370 = local_800[7];
  local_288 = local_800[0x2a];
  dStack_280 = local_800[0x2b];
  local_869 = *(char *)((long)local_800 + 0x1a2);
  local_298 = local_800[0x2c];
  dStack_290 = local_800[0x2d];
  local_2a8 = local_800[0x2e];
  dStack_2a0 = local_800[0x2f];
                    /* try { // try from 0013a4fd to 0013a511 has its CatchHandler @ 0013d679 */
  (*(code *)PTR_clone_001de200)
            (&local_770,local_800 + 0x11,&PTR_s_strategies_comm_strategy_strateg_001d8730);
  plVar22 = local_3a0;
  dVar27 = local_898;
  puVar15 = PTR_bcmp_001de1a8;
  local_550 = local_7f8;
  pppdStack_548 = pppdStack_7f0;
  local_540 = local_7e8;
  local_4f0 = (double)local_8b8;
  dStack_4e8 = dStack_8b0;
  local_538 = CONCAT44(uStack_154,local_158);
  dStack_530 = dStack_150;
  local_528 = CONCAT71(uStack_147,local_148);
  local_4e0 = local_838;
  dStack_4d8 = dStack_830;
  local_520 = local_858;
  local_4d0 = (double)CONCAT44(uStack_8a4,local_8a8);
  dStack_4c8 = dStack_8a0;
  local_4c0 = local_818;
  dStack_4b8 = dStack_810;
  local_4b0 = local_848;
  pdStack_4a8 = pdStack_840;
  local_4a0 = local_7b8;
  dStack_498 = dStack_7b0;
  local_490 = local_5e8;
  dStack_488 = dStack_5e0;
  local_480 = local_788;
  dStack_478 = dStack_780;
  local_470 = local_3b8;
  dStack_468 = dStack_3b0;
  local_460 = local_5a8;
  pdStack_458 = pdStack_5a0;
  local_450 = local_5b8;
  dStack_448 = dStack_5b0;
  local_588 = local_5c8;
  local_580 = local_5d8;
  local_578 = local_5f8;
  local_570 = local_658;
  local_568 = local_660;
  local_560 = local_668;
  local_558 = local_370;
  local_440 = local_288;
  dStack_438 = dStack_280;
  local_3ee = local_869;
  local_430 = local_298;
  dStack_428 = dStack_290;
  local_420 = local_2a8;
  dStack_418 = dStack_2a0;
  local_4f8 = local_760;
  local_508 = local_770;
  pppdStack_500 = pppdStack_768;
  local_410 = pdVar31[0x30];
  dStack_408 = pdVar31[0x31];
  local_400 = pdVar31[0x32];
  local_3f8 = pdVar31[0x33];
  local_590 = dVar25;
  local_510 = ppdVar11;
  local_3f0 = cVar5;
  local_3ef = cVar3;
  if (local_398 != 0) {
    local_8a8 = (uint)local_868;
    uStack_8a4 = (undefined4)((ulong)local_868 >> 0x20);
    dStack_8a0 = 0.0;
    local_838 = (double *)((long)local_898 + 0x48);
    local_8b8 = *(double ****)((long)local_898 + 0x50);
    lVar8 = *(long *)((long)local_898 + 0x58);
    lVar13 = local_398 * 0x18;
    lVar17 = 0;
    do {
      if ((*(long *)((long)plVar22 + lVar17 + 0x10) == lVar8) &&
         (iVar7 = (*(code *)puVar15)(*(undefined8 *)((long)plVar22 + lVar17 + 8),local_8b8,lVar8),
         iVar7 == 0)) {
                    /* try { // try from 0013a7b8 to 0013a7ca has its CatchHandler @ 0013d654 */
        (*(code *)PTR_trade_codes_001de208)(&local_3e8,local_8c8);
        lVar13 = local_3d8;
        local_868 = local_3e0;
        if (local_3d8 != 0) {
          local_858 = *(double ***)((long)dVar27 + 8);
          lVar17 = *(long *)((long)dVar27 + 0x10);
          lVar2 = local_3d8 * 0x18;
          lVar19 = 0;
          goto LAB_0013a81d;
        }
        pppdVar9 = (double ***)0x0;
        goto LAB_0013aa62;
      }
      lVar17 = lVar17 + 0x18;
    } while (lVar13 != lVar17);
  }
  pppdVar9 = (double ***)0x0;
LAB_0013a90c:
  if (local_550 != (double *)0x0) {
    (*(code *)PTR___rust_dealloc_001de0f0)(pppdStack_548,local_550,1);
  }
  if (local_538 != 0) {
    (*(code *)PTR___rust_dealloc_001de0f0)(dStack_530,local_538,1);
  }
  if (local_520 != (double **)0x0) {
    (*(code *)PTR___rust_dealloc_001de0f0)(local_518,(long)local_520 << 3,8);
  }
  if (local_508 != (double *)0x0) {
    (*(code *)PTR___rust_dealloc_001de0f0)(pppdStack_500,local_508,1);
  }
  puVar15 = PTR___rust_dealloc_001de0f0;
  if (local_398 != 0) {
    plVar22 = local_3a0 + 1;
    lVar8 = local_398;
    do {
      if (plVar22[-1] != 0) {
        (*(code *)puVar15)(*plVar22,plVar22[-1],1);
      }
      plVar22 = plVar22 + 3;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  if (local_3a8 != 0) {
    (*(code *)PTR___rust_dealloc_001de0f0)(local_3a0,local_3a8 * 0x18,8);
  }
  return pppdVar9;
  while (lVar19 = lVar19 + 0x18, lVar2 != lVar19) {
LAB_0013a81d:
    if ((*(long *)((long)local_868 + lVar19 + 0x10) == lVar17) &&
       (iVar7 = (*(code *)puVar15)(*(undefined8 *)((long)local_868 + lVar19 + 8),local_858,lVar17),
       dVar25 = local_898, uVar21 = local_8c8, iVar7 == 0)) {
      cVar5 = *(char *)((long)local_898 + 0x94);
                    /* try { // try from 0013a852 to 0013a8ba has its CatchHandler @ 0013d642 */
      (*(code *)PTR_inst_start_time_sec_001de210)(local_8c8);
      cVar3 = (*(code *)PTR_is_trade_start_001de218)(uVar21,cVar5);
      if (cVar3 != '\0') {
        cVar3 = (*(code *)PTR_is_trade_end_001de220)(uVar21,cVar5);
        if (cVar3 != '\0') {
          if (cVar5 == '\0') {
            if (local_86a != '\0') goto LAB_0013ab39;
          }
          else if (((ushort)(local_8a8 >> 0x18) & 1) != 0) {
LAB_0013ab39:
                    /* try { // try from 0013ab39 to 0013ab54 has its CatchHandler @ 0013d642 */
            pppdVar9 = (double ***)(*(code *)PTR_all_in_001de238)(uVar21,cVar5,local_8a8 & 1);
            goto LAB_0013aa1a;
          }
        }
        (*(code *)PTR_clone_001de200)
                  (&local_888,dVar25,&PTR_s_strategies_comm_strategy_strateg_001d8558);
                    /* try { // try from 0013a8bb to 0013a8d7 has its CatchHandler @ 0013d5de */
        (*(code *)PTR_clone_001de200)
                  (&local_3d0,local_838,&PTR_s_strategies_comm_strategy_strateg_001d8570);
                    /* try { // try from 0013a8e2 to 0013a8f2 has its CatchHandler @ 0013d5d9 */
        (*(code *)PTR_depth_001de228)(&local_770,uVar21,local_880);
        if ((int)local_770 == 2) {
          pppdVar9 = (double ***)0x0;
        }
        else {
          (*(code *)PTR_memcpy_001de150)(&local_158,&local_770,0x108);
          local_868 = local_110[0];
          pppdVar9 = (double ***)0x0;
          if ((0.0 < (double)local_110[0]) && (local_838 = local_c0[0], 0.0 < (double)local_c0[0]))
          {
                    /* try { // try from 0013aae7 to 0013aaf8 has its CatchHandler @ 0013d5e3 */
            local_858 = (double **)(*(code *)PTR_time_sec_001de230)(uVar21);
            if ((double)DAT_00117278 < (double)local_858 - local_118) {
LAB_0013ab15:
              pppdVar9 = (double ***)0x0;
              goto joined_r0x0013b538;
            }
                    /* try { // try from 0013ab5d to 0013abc4 has its CatchHandler @ 0013d5e3 */
            auVar33 = (*(code *)PTR_signal_parameter_id_001de240)(local_8b8,lVar8);
            uVar24 = 0;
            if ((auVar33 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
              uVar24 = auVar33._8_8_ & 0xffffffff;
            }
            local_64c = (undefined4)uVar24;
            if (local_3ee == '\x01') {
              (*(code *)PTR_clone_001de200)
                        (&local_648,&local_888,&PTR_s_strategies_comm_strategy_strateg_001d8588);
              hashbrown::rustc_entry::_<impl_hashbrown::map::HashMap<K,V,S,A>>::rustc_entry
                        (&local_770,local_800 + 0x41,&local_648);
              if (local_770 == (double *)0x8000000000000000) {
                local_7f8 = (double *)0x8000000000000000;
              }
              else {
                local_7d8 = local_750;
                puStack_7e0 = puStack_758;
                local_7f8 = local_770;
              }
              local_7e8 = local_760;
              pppdStack_7f0 = pppdStack_768;
              uVar21 = std::collections::hash::map::Entry<K,V>::or_insert_with
                                 (dStack_428,local_420,&local_7f8);
                    /* try { // try from 0013ac70 to 0013acc1 has its CatchHandler @ 0013d5e3 */
              uVar10 = strategy_comm3_1::vol_spread_ratio::VolSpreadRatio::update
                                 ((double)local_858 * _DAT_00117350,local_838,local_868,uVar21);
              puVar15 = PTR_K1_MAP_G1_LOW_001de250;
              if (((uVar10 & 1) == 0) || (dStack_418 < extraout_XMM0_Qa)) goto LAB_0013acc4;
              local_8a8 = (uint)CONCAT71((int7)(uVar24 >> 8),1);
              if (*(long *)(PTR_K1_MAP_G1_LOW_001de250 + 0x30) != 2) {
                once_cell::imp::OnceCell<T>::initialize
                          (PTR_K1_MAP_G1_LOW_001de250,PTR_K1_MAP_G1_LOW_001de250);
              }
            }
            else {
LAB_0013acc4:
              puVar15 = PTR_K1_MAP_G2_HIGH_001de258;
              if (*(long *)(PTR_K1_MAP_G2_HIGH_001de258 + 0x30) != 2) {
                    /* try { // try from 0013d56f to 0013d579 has its CatchHandler @ 0013d5e3 */
                once_cell::imp::OnceCell<T>::initialize
                          (PTR_K1_MAP_G2_HIGH_001de258,PTR_K1_MAP_G2_HIGH_001de258);
              }
              local_8a8 = 0;
            }
            lVar8 = hashbrown::map::HashMap<K,V,S,A>::get_inner(puVar15,&local_64c);
            pdVar31 = (double *)&DAT_00117278;
            if (lVar8 != 0) {
              pdVar31 = (double *)(lVar8 + 8);
            }
            local_8b8 = (double ***)*pdVar31;
            local_8c9 = (char)local_8a8;
            local_7a8 = (double)local_8b8;
            uVar4 = strategy_comm3_1::Comm3Params::low_action_enum(pppdStack_500,local_4f8);
            local_818 = (double *)CONCAT71(local_818._1_7_,uVar4);
            cVar5 = strategy_comm3_1::Comm3Params::signal_mode(pppdStack_548,local_540);
                    /* WARNING: Switch is manually overridden */
            switch(cVar5) {
            case '\0':
              pdStack_850 = (double *)(*(double *)((long)local_898 + 0x70) * local_4f0);
              break;
            case '\x01':
              pdStack_850 = *(double **)((long)local_898 + 0x78);
              break;
            case '\x02':
              pdStack_850 = *(double **)((long)local_898 + 0x70);
              break;
            case '\x03':
              dVar25 = *(double *)((long)local_898 + 0x70);
              local_898 = (double)(~-(ulong)NAN(dVar25) &
                                   (_s__001179c0 & (ulong)dVar25 | ram0x001178d0) |
                                  DAT_00117308 & -(ulong)NAN(dVar25));
              uStack_890 = _UNK_001178d8;
              dVar25 = (double)(*(code *)PTR_pow_001de260)
                                         ((ulong)dVar25 & _DAT_00117390,
                                          (double)DAT_00117278 / (double)local_8b8);
              pdStack_850 = (double *)(dVar25 * local_898);
            }
            if (((local_158 == 1) && ((local_148 & 1) != 0)) &&
               (DAT_001172b0 <
                (double)((ulong)((dStack_150 - dStack_140) / (dStack_150 + dStack_140)) &
                        _DAT_00117390))) goto LAB_0013ab15;
                    /* try { // try from 0013ae4d to 0013b0c5 has its CatchHandler @ 0013d5e3 */
            local_898 = (double)(*(code *)PTR_time_sec_001de230)(local_8c8);
            local_8b8 = local_390;
            dStack_820 = (double)(*(code *)PTR_spread_bp_001de268)(local_8c8,local_880,local_878);
            pdStack_7a0 = (double *)(*(code *)PTR_fee_bp_001de270)(local_8c8,local_880,local_878);
            local_5e8 = (double)(*(code *)PTR_contract_mult_001de278)(local_8c8,local_880,local_878)
            ;
            local_788 = (double)(*(code *)PTR_price_step_001de280)(local_8c8,local_880,local_878);
            local_7b8 = (double *)(*(code *)PTR_vol_step_001de288)(local_8c8,local_880,local_878);
            (*(code *)PTR_position_001de290)(local_8c8,local_880,local_878);
            local_848 = extraout_XMM1_Qa;
            pdStack_840 = extraout_XMM1_Qb;
            dStack_808 = (double)(*(code *)PTR_position_holding_secs_001de298)
                                           (local_8c8,local_880,local_878);
            local_8b8 = (double ***)((double)local_8b8 / _DAT_00117350);
            dStack_808 = dStack_808 + (double)local_8b8;
            uVar4 = (*(code *)PTR_is_should_lock_001de2a0)(local_8c8,local_880,local_878);
            local_3b8 = (double)CONCAT71(local_3b8._1_7_,uVar4);
            lVar8 = 0x148;
            if (local_8c9 == '\x01') {
              ppdVar11 = &local_460;
              if (local_590._0_1_ != '\0') {
                ppdVar11 = &local_588;
              }
              ppdVar14 = &pdStack_458;
              if (local_580._0_1_ != '\0') {
                ppdVar14 = &local_578;
              }
              ppdVar16 = &local_450;
              if (local_570._0_1_ != '\0') {
                ppdVar16 = &local_568;
              }
              lVar8 = 0x148;
              if (local_560._0_1_ != '\0') {
                lVar8 = 0x38;
              }
            }
            else {
              ppdVar11 = &local_460;
              ppdVar14 = &pdStack_458;
              ppdVar16 = &local_450;
            }
            local_5d8 = *(double *)((long)&local_590 + lVar8);
            local_5a8 = *ppdVar16;
            local_5c8 = *ppdVar14;
            local_5b8 = *ppdVar11;
            dStack_5b0 = 0.0;
            uStack_5c0 = 0;
            pdStack_5a0 = (double *)0x0;
            uStack_5d0 = 0;
            pdStack_368 = local_5b8;
            pdStack_360 = local_5c8;
            pdStack_358 = local_5a8;
            dStack_350 = local_5d8;
            strategy_comm3_1::signal_trigger::dynamic_threshold
                      (dStack_808,local_440,dStack_438,local_430,&pdStack_178,&pdStack_368);
            uStack_8ba = strategy_comm3_1::Comm3Params::signal_trigger_mode(dStack_530,local_528);
            (*(code *)PTR_clone_001de200)
                      (&local_7f8,&local_888,&PTR_s_strategies_comm_strategy_strateg_001d85a0);
                    /* try { // try from 0013b0c6 to 0013b0e5 has its CatchHandler @ 0013d5b4 */
            (*(code *)PTR_clone_001de200)
                      (&local_770,&local_3d0,&PTR_s_strategies_comm_strategy_strateg_001d85b8);
            ppdStack_638 = local_7e8;
            local_648 = local_7f8;
            pppdStack_640 = pppdStack_7f0;
            pdStack_630 = local_770;
            pppdStack_628 = pppdStack_768;
            ppdStack_620 = local_760;
                    /* try { // try from 0013b137 to 0013b61a has its CatchHandler @ 0013d5e3 */
            hashbrown::rustc_entry::_<impl_hashbrown::map::HashMap<K,V,S,A>>::rustc_entry
                      (&local_770,local_800 + 0x35,&local_648);
            if (local_770 == (double *)0x8000000000000000) {
              local_7f8 = (double *)0x8000000000000000;
            }
            else {
              pdStack_7c8 = pdStack_740;
              pcStack_7c0 = pcStack_738;
              local_7d8 = local_750;
              puStack_7d0 = puStack_748;
              puStack_7e0 = puStack_758;
              local_7f8 = local_770;
            }
            local_7e8 = local_760;
            pppdStack_7f0 = pppdStack_768;
            local_770 = (double *)&uStack_8ba;
            pppdStack_768 = &local_520;
            local_760 = &pdStack_178;
            lVar8 = std::collections::hash::map::Entry<K,V>::or_insert_with(&local_7f8,&local_770);
            local_898 = local_898 + (double)local_8b8;
            strategy_comm3_1::signal_trigger::SignalTrigger::update_score
                      (local_898,pdStack_850,0,0,lVar8,0);
            *(undefined8 *)(lVar8 + 0x50) = uStack_168;
            *(undefined8 *)(lVar8 + 0x58) = uStack_160;
            *(double **)(lVar8 + 0x40) = pdStack_178;
            *(undefined8 *)(lVar8 + 0x48) = uStack_170;
                    /* WARNING: Switch is manually overridden */
            switch(uStack_8ba) {
            case 0:
              if (cVar5 == '\0') {
                strategy_comm3_1::signal_trigger::SignalTrigger::point_signal_trigger_pv1_spread
                          (dStack_4e8,dStack_820,&local_770,lVar8);
                goto joined_r0x0013b34b;
              }
              if (cVar5 == '\x03') {
                strategy_comm3_1::signal_trigger::SignalTrigger::point_signal_trigger_pv4
                          (dStack_4e8,pdStack_7a0,dStack_820,&local_770,lVar8);
                local_770._0_1_ = (char)local_770;
                pppdVar9 = pppdStack_768;
                if ((char)local_770 == '\x05') goto joined_r0x0013b538;
              }
              else {
                dVar25 = *(double *)(lVar8 + 0x38);
                if (*(double *)(lVar8 + 0x40) <= dVar25) {
                  local_770._0_1_ = '\0';
                }
                else {
                  local_770._0_1_ = '\x03';
                  if ((dVar25 < *(double *)(lVar8 + 0x58)) &&
                     (local_770._0_1_ = '\x02', *(double *)(lVar8 + 0x50) < dVar25)) {
                    local_770._0_1_ = (*(double *)(lVar8 + 0x48) < dVar25) * '\x03' + '\x01';
                  }
                }
              }
              goto LAB_0013b3d8;
            case 1:
              strategy_comm3_1::signal_trigger::SignalTrigger::windows_mean_trigger
                        (local_4e0,&local_770,lVar8);
              break;
            case 2:
              strategy_comm3_1::signal_trigger::SignalTrigger::windows_std_trigger
                        (local_4e0,&local_770,lVar8);
              break;
            case 3:
              strategy_comm3_1::signal_trigger::SignalTrigger::windows_quantile_trigger
                        (dStack_4d8,local_4e0,&local_770,lVar8);
              break;
            case 4:
              strategy_comm3_1::signal_trigger::SignalTrigger::windows_sharpe_trigger
                        (local_4e0,&local_770,lVar8);
              break;
            case 5:
              strategy_comm3_1::signal_trigger::SignalTrigger::windows_rsi_trigger
                        (local_4e0,&local_770,lVar8);
            }
joined_r0x0013b34b:
            pppdVar9 = pppdStack_768;
            if ((char)local_770 != '\x05') {
LAB_0013b3d8:
              cStack_8b9 = (char)local_770;
              puVar15 = PTR_fmt_001de2a8;
              local_770 = &local_888;
              pppdStack_768 = (double ***)_<alloc::string::String_as_core::fmt::Display>::fmt;
              local_760 = &pdStack_850;
              puStack_758 = PTR_fmt_001de2a8;
              local_750 = &dStack_820;
              puStack_748 = PTR_fmt_001de2a8;
              pdStack_740 = &local_7a8;
              pcStack_738 = (code *)PTR_fmt_001de2a8;
              pdStack_730 = (double *)&local_8c9;
              puStack_728 = PTR_fmt_001de2b0;
              ppcStack_720 = (char **)&cStack_8b9;
              pcStack_718 = _<core::option::Option<T>as_core::fmt::Debug>::fmt;
              local_7f8 = (double *)&UNK_001d85d0;
              pppdStack_7f0 = (double ***)0x6;
              local_7d8 = (double *)&UNK_00117f30;
              puStack_7d0 = (undefined *)0x6;
              local_7e8 = &local_770;
              puStack_7e0 = (undefined1 *)0x6;
              (*(code *)PTR_format_inner_001de1e8)(auStack_50,&local_7f8);
              future_backtest_sdk::context::StrategyContext::log_debug(local_8c8,auStack_50);
              uVar4 = (*(code *)PTR_margin_filter_001de2b8)(local_8c8,cStack_8b9);
              pppdVar9 = (double ***)
                         (*(code *)PTR_cancel_by_pending_ts_001de2c0)(local_410,local_8c8,1);
              if (pppdVar9 == (double ***)0x0) {
                bVar6 = (*(code *)PTR_impact_block_check_001de2c8)
                                  (local_898,local_838,local_868,local_8c8,uVar4);
                if (((char)local_818 == '\x01' && (char)local_8a8 == '\x01') && ((bVar6 & 5) == 0))
                {
                  bVar6 = 4;
                }
                plVar22 = &local_3d0;
                if (local_398 != 0) {
                  plVar22 = local_3a0;
                }
                puVar12 = &UNK_001d8648;
                if (local_398 == 0) {
                  puVar12 = &UNK_001d8630;
                }
                (*(code *)PTR_clone_001de200)(&dStack_610,plVar22,puVar12);
                local_898 = local_4d0;
                uStack_890 = 0;
                local_8b8 = (double ***)dStack_4c8;
                dStack_8b0 = 0.0;
                local_5f8 = local_4c0;
                dStack_5f0 = 0.0;
                bVar23 = (char)local_818 == '\x02';
                local_658 = *(double *)(lVar8 + 0x40);
                local_660 = *(double **)(lVar8 + 0x48);
                local_818 = *(double **)(lVar8 + 0x50);
                local_668 = *(double *)(lVar8 + 0x58);
                if ((bVar6 != 4) && (local_3ef != '\0')) {
                  pdVar31 = local_800 + 0x3b;
                    /* try { // try from 0013b6b2 to 0013b95d has its CatchHandler @ 0013d59a */
                  lVar8 = hashbrown::map::HashMap<K,V,S,A>::get_inner(pdVar31,&local_888);
                  if (lVar8 != 0) {
                    if ((dStack_498 <= 0.0) ||
                       (((double)local_858 - *(double *)(lVar8 + 0x28)) * _DAT_00117350 < dStack_498
                       )) goto override_jmp_0013b735_case_4;
                    hashbrown::map::HashMap<K,V,S,A>::remove(&local_770,pdVar31,&local_888);
                  }
                }
                bVar18 = bVar23 & (byte)local_8a8;
                    /* WARNING: Switch is manually overridden */
                switch(bVar6) {
                case 0:
                  if ((_DAT_00117358 <= (double)local_848) ||
                     ((double)local_4a0 / _DAT_00117350 <= dStack_808)) {
                    pdVar28 = (double *)0x0;
                    pdVar31 = local_848;
                    if ((double)local_848 <= 0.0) {
                      pdVar31 = pdVar28;
                    }
                    dVar27 = (double)(~-(ulong)(local_480 < 0.0) & (ulong)local_480 |
                                     -(ulong)(local_480 < 0.0) & _DAT_00117220) - (double)pdVar31;
                    dVar32 = ((double)(~-(ulong)(dStack_478 < 0.0) & (ulong)dStack_478 |
                                      -(ulong)(dStack_478 < 0.0) & _DAT_00117220) / local_5e8) /
                             (double)local_868 - (double)pdVar31;
                    dVar25 = dVar32;
                    if (dVar27 <= dVar32) {
                      dVar25 = dVar27;
                    }
                    pdVar29 = (double *)
                              (~-(ulong)NAN(dVar27) & (ulong)dVar25 |
                              -(ulong)NAN(dVar27) & (ulong)dVar32);
                    pdVar30 = (double *)
                              (~-(ulong)(local_490 < 0.0) & (ulong)local_490 |
                              -(ulong)(local_490 < 0.0) & _DAT_00117220);
                    pdVar31 = (double *)
                              (((double)(~-(ulong)(dStack_488 < 0.0) & (ulong)dStack_488 |
                                        -(ulong)(dStack_488 < 0.0) & _DAT_00117220) / local_5e8) /
                              (double)local_868);
                    if ((double)pdVar31 <= (double)DAT_00117278) {
                      pdVar31 = DAT_00117278;
                    }
                    if ((double)pdVar31 <= (double)pdVar30) {
                      pdVar30 = pdVar31;
                    }
                    pdVar26 = (double *)
                              (~-(ulong)(local_470 < 0.0) & (ulong)local_470 |
                              -(ulong)(local_470 < 0.0) & _DAT_00117220);
                    pdVar31 = (double *)
                              (((double)(~-(ulong)(dStack_468 < 0.0) & (ulong)dStack_468 |
                                        _DAT_00117220 & -(ulong)(dStack_468 < 0.0)) / local_5e8) /
                              (double)local_868);
                    if ((double)pdVar31 <= (double)DAT_00117278) {
                      pdVar31 = DAT_00117278;
                    }
                    if ((double)pdVar31 <= (double)pdVar26) {
                      pdVar26 = pdVar31;
                    }
                    pdVar31 = local_848;
                    if (0.0 <= (double)local_848) {
                      pdVar31 = pdVar28;
                    }
                    if ((double)pdVar30 <= (double)pdVar29) {
                      pdVar29 = pdVar30;
                    }
                    if ((double)((ulong)pdVar31 ^ _s__001179c0) <= (double)pdVar26) {
                      pdVar26 = (double *)((ulong)pdVar31 ^ _s__001179c0);
                    }
                    pdVar31 = (double *)((double)pdVar26 + (double)pdVar29);
                    if ((double)pdVar26 + (double)pdVar29 <= 0.0) {
                      pdVar31 = pdVar28;
                    }
                    uVar21 = (*(code *)PTR_round_with_step_f64_001de2d0)(pdVar31,local_7b8,1);
                    local_8a8 = (uint)uVar21;
                    uStack_8a4 = (undefined4)((ulong)uVar21 >> 0x20);
                    dStack_8a0 = extraout_XMM0_Qb;
                    if (bVar18 == 0) {
                      pppdVar9 = (double ***)(*(code *)PTR_cancel_all_001de2d8)(local_8c8);
                      if (pppdVar9 == (double ***)0x0) {
                        if ((local_3f0 == '\0') || (local_8c9 != '\0')) {
                          if ((DAT_00117260 < (double)((ulong)local_898 & _DAT_00117390)) &&
                             (DAT_00117260 < (double)(_DAT_00117390 & (ulong)local_5b8))) {
                            dVar25 = (double)((ulong)((double)pdStack_850 / (double)local_5b8) &
                                             _DAT_00117390) + _s__00117200;
                            if (dVar25 <= 0.0) {
                              dVar25 = 0.0;
                            }
                            pdVar28 = (double *)((double)local_8b8 + local_898 * dVar25);
                            pdVar31 = local_5f8;
                            if ((double)pdVar28 <= (double)local_5f8) {
                              pdVar31 = pdVar28;
                            }
                            local_8b8 = (double ***)
                                        (-(ulong)NAN((double)pdVar28) & (ulong)local_5f8 |
                                        ~-(ulong)NAN((double)pdVar28) & (ulong)pdVar31);
                            dStack_8b0 = dStack_5f0;
                          }
                        }
                        else {
                          local_8b8 = (double ***)
                                      strategy_comm3_1::high_taker_rate
                                                (pdStack_850,local_5b8,dStack_820,local_868,
                                                 local_838,dStack_4b8);
                          dStack_8b0 = extraout_XMM0_Qb_04;
                        }
                        local_8b8 = (double ***)
                                    (*(code *)PTR_round_with_step_f64_001de2d0)
                                              (((double)local_8b8 + (double)DAT_00117278) *
                                               (double)local_868,local_788,1);
                        local_898 = _s__001172f8;
                        goto LAB_0013cadf;
                      }
                    }
                    else {
                      dVar32 = local_400 * local_788 + (double)local_838;
                      dVar27 = (double)local_868 - local_788;
                      dVar25 = dVar27;
                      if (dVar32 <= dVar27) {
                        dVar25 = dVar32;
                      }
                      local_8b8 = (double ***)
                                  (*(code *)PTR_round_with_step_f64_001de2d0)
                                            (~-(ulong)NAN(dVar32) & (ulong)dVar25 |
                                             -(ulong)NAN(dVar32) & (ulong)dVar27,1);
                      dVar25 = 1.97626258336499e-323;
                      if ((ulong)local_3f8 < 4) {
                        dVar25 = local_3f8;
                      }
                      iVar7 = SUB84(dVar25,0);
                      if ((long)local_3f8 < 1) {
                        iVar7 = 1;
                      }
                      local_770 = (double *)0x0;
                      pppdStack_768 = (double ***)&DAT_00000008;
                      local_760 = (double **)0x0;
                    /* try { // try from 0013b9ba to 0013ba76 has its CatchHandler @ 0013d588 */
                      pppdVar9 = (double ***)
                                 strategy_comm3_1::cancel_order_use_range
                                           (local_8b8,
                                            (double)local_c0[0] -
                                            *(double *)((long)local_c0 + (ulong)(uint)(iVar7 << 4)),
                                            local_8c8,local_880,local_878,1,&local_770);
                      if (pppdVar9 == (double ***)0x0) {
                        lVar8 = strategy_comm3_1::live_pending_counts
                                          (local_8c8,local_880,local_878,pppdStack_768,local_760);
                        local_818 = (double *)0x0;
                        if ((lVar8 == 0) &&
                           (local_818 = (double *)CONCAT44(uStack_8a4,local_8a8), 0.0 < dStack_408))
                        {
                          dVar27 = (double)CONCAT44(uStack_8a4,local_8a8);
                          dVar25 = dStack_408;
                          if (dVar27 <= dStack_408) {
                            dVar25 = dVar27;
                          }
                          local_818 = (double *)
                                      (*(code *)PTR_round_with_step_f64_001de2d0)
                                                (~-(ulong)NAN(dVar27) & (ulong)dVar25 |
                                                 -(ulong)NAN(dVar27) & (ulong)dStack_408,local_7b8,1
                                                );
                        }
                        local_898 = local_410;
                        core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&local_770)
                        ;
                        local_8a8 = (uint)local_818;
                        uStack_8a4 = (undefined4)((ulong)local_818 >> 0x20);
                        dStack_8a0 = 0.0;
LAB_0013cadf:
                        if ((double)(_DAT_00117390 & CONCAT44(uStack_8a4,local_8a8)) <= DAT_00117260
                           ) {
override_jmp_0013b735_case_4:
                          if (dStack_610 != 0.0) {
                            (*(code *)PTR___rust_dealloc_001de0f0)(uStack_608,dStack_610,1);
                          }
                          if (local_138 != 0) {
                            (*(code *)PTR___rust_dealloc_001de0f0)(local_130,local_138,1);
                          }
                          if (local_3d0 != 0) {
                            (*(code *)PTR___rust_dealloc_001de0f0)(local_3c8,local_3d0,1);
                          }
                          if (local_888 != 0.0) {
                            (*(code *)PTR___rust_dealloc_001de0f0)(local_880,local_888,1);
                          }
                          core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>
                                    (&local_3e8);
                          core::ptr::drop_in_place<strategy_comm3_1::Comm3Params>(&local_590);
                          core::ptr::drop_in_place<future_backtest_sdk::types::StrategyPara>
                                    (&local_3a8);
                          return (double ***)0x0;
                        }
                        local_848 = pdStack_850;
                        local_818 = pdStack_4a8;
                        pcStack_798 = "H";
                        if (local_8c9 != '\0') {
                          pcStack_798 = "L";
                        }
                        uStack_790 = 1;
                        local_648 = (double *)0x118052;
                        if (bVar18 != 0) {
                          local_648 = (double *)0x118053;
                        }
                        pppdStack_640 = (double ***)0x1;
                        local_770 = &dStack_820;
                        pppdStack_768 = (double ***)puVar15;
                        local_760 = &pdStack_7a0;
                        puStack_758 = puVar15;
                        local_750 = &local_7a8;
                        puStack_748 = puVar15;
                        pdStack_740 = &dStack_610;
                        pcStack_738 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                        pdStack_730 = &dStack_808;
                        puStack_728 = puVar15;
                        ppcStack_720 = &pcStack_798;
                        pcStack_718 = _<&T_as_core::fmt::Display>::fmt;
                        pcStack_708 = _<&T_as_core::fmt::Display>::fmt;
                        local_7f8 = (double *)&DAT_001d8660;
                        pppdStack_7f0 = (double ***)&DAT_00000007;
                        local_7d8 = (double *)0x0;
                        local_7e8 = &local_770;
                        puStack_7e0 = &DAT_00000007;
                        ppdStack_710 = &local_648;
                        (*(code *)PTR_format_inner_001de1e8)(&uStack_1d8,&local_7f8);
                        uStack_230 = 0x700;
                        dStack_260 = (double)local_8b8;
                        uStack_258 = CONCAT44(uStack_8a4,local_8a8);
                        pppdStack_250 = local_868;
                        pdStack_248 = local_848;
                        dStack_240 = local_658;
                        pdStack_238 = local_818;
                        uStack_278 = uStack_1d8;
                        uStack_270 = uStack_1d0;
                        uStack_268 = uStack_1c8;
                        pppdVar9 = (double ***)
                                   strategy_comm3_1::place(local_898,local_8c8,&uStack_278);
                        if (pppdVar9 == (double ***)0x0) {
                          if (local_3ef == '\x01') {
                            (*(code *)PTR_clone_001de200)
                                      (&local_648,&local_888,
                                       &PTR_s_strategies_comm_strategy_strateg_001d86d0);
                            local_7f8 = local_838;
                            pppdStack_7f0 = local_868;
                            local_7e8 = local_858;
                            hashbrown::map::HashMap<K,V,S,A>::insert
                                      (&local_770,local_800 + 0x3b,&local_648,&local_7f8);
                          }
                          goto override_jmp_0013b735_case_4;
                        }
                      }
                      else {
LAB_0013c2d7:
                        core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&local_770)
                        ;
                      }
                    }
                  }
                  else {
LAB_0013c044:
                    pppdVar9 = (double ***)0x0;
                  }
                  break;
                case 1:
                  if ((DAT_00117260 < (double)local_848) &&
                     (dStack_808 < (double)local_4a0 / _DAT_00117350)) goto LAB_0013c044;
                  if ((double)local_848 <= 0.0) goto override_jmp_0013b735_case_4;
                  uVar24 = -(ulong)(local_470 < (double)((ulong)local_470 ^ _s__001179c0));
                  dVar32 = (double)(uVar24 & _DAT_00117228 |
                                   ~uVar24 & ((ulong)local_470 ^ _s__001179c0));
                  uVar24 = -(ulong)(dStack_468 < (double)((ulong)dStack_468 ^ _s__001179c0));
                  dVar27 = ((double)(uVar24 & _DAT_00117228 |
                                    ~uVar24 & ((ulong)dStack_468 ^ _s__001179c0)) / local_5e8) /
                           (double)local_838;
                  dVar25 = dVar27;
                  if (dVar27 <= dVar32) {
                    dVar25 = dVar32;
                  }
                  dVar25 = (double)(~-(ulong)NAN(dVar32) & (ulong)dVar25 |
                                   -(ulong)NAN(dVar32) & (ulong)dVar27);
                  pdVar31 = local_848;
                  if ((double)local_848 <= 0.0) {
                    pdVar31 = (double *)0x0;
                  }
                  if (dVar25 <= (double)((ulong)pdVar31 ^ _s__001179c0)) {
                    dVar25 = (double)((ulong)pdVar31 ^ _s__001179c0);
                  }
                    /* try { // try from 0013be30 to 0013bec5 has its CatchHandler @ 0013d59a */
                  uVar21 = (*(code *)PTR_round_with_step_f64_001de2d0)(dVar25,local_7b8,1);
                  local_8a8 = (uint)uVar21;
                  uStack_8a4 = (undefined4)((ulong)uVar21 >> 0x20);
                  local_818 = (double *)CONCAT71(local_818._1_7_,local_3b8._0_1_ != '\0');
                  dStack_8a0 = extraout_XMM0_Qb_01;
                  if (bVar18 == 0) {
                    pppdVar9 = (double ***)(*(code *)PTR_cancel_all_001de2d8)(local_8c8);
                    if (pppdVar9 != (double ***)0x0) break;
                    if ((local_3f0 == '\0') || (local_8c9 != '\0')) {
                      if ((DAT_00117260 < (double)((ulong)local_898 & _DAT_00117390)) &&
                         (DAT_00117260 < (double)(_DAT_00117390 & (ulong)local_5c8))) {
                        dVar25 = (double)((ulong)((double)pdStack_850 / (double)local_5c8) &
                                         _DAT_00117390) + _s__00117200;
                        if (dVar25 <= 0.0) {
                          dVar25 = 0.0;
                        }
                        pdVar28 = (double *)((double)local_8b8 + local_898 * dVar25);
                        pdVar31 = local_5f8;
                        if ((double)pdVar28 <= (double)local_5f8) {
                          pdVar31 = pdVar28;
                        }
                        local_8b8 = (double ***)
                                    (-(ulong)NAN((double)pdVar28) & (ulong)local_5f8 |
                                    ~-(ulong)NAN((double)pdVar28) & (ulong)pdVar31);
                        dStack_8b0 = dStack_5f0;
                      }
                    }
                    else {
                      local_8b8 = (double ***)
                                  strategy_comm3_1::high_taker_rate
                                            (pdStack_850,local_5c8,dStack_820,local_868,local_838,
                                             dStack_4b8);
                      dStack_8b0 = extraout_XMM0_Qb_06;
                    }
                    local_8b8 = (double ***)
                                (*(code *)PTR_round_with_step_f64_001de2d0)
                                          (((double)DAT_00117278 - (double)local_8b8) *
                                           (double)local_838,local_788,1);
                    local_898 = _s__001172f8;
                  }
                  else {
                    dVar32 = (double)local_868 - local_400 * local_788;
                    dVar27 = local_788 + (double)local_838;
                    dVar25 = dVar27;
                    if (dVar27 <= dVar32) {
                      dVar25 = dVar32;
                    }
                    local_8b8 = (double ***)
                                (*(code *)PTR_round_with_step_f64_001de2d0)
                                          (~-(ulong)NAN(dVar32) & (ulong)dVar25 |
                                           -(ulong)NAN(dVar32) & (ulong)dVar27,1);
                    dVar25 = 1.97626258336499e-323;
                    if ((ulong)local_3f8 < 4) {
                      dVar25 = local_3f8;
                    }
                    iVar7 = SUB84(dVar25,0);
                    if ((long)local_3f8 < 1) {
                      iVar7 = 1;
                    }
                    local_770 = (double *)0x0;
                    pppdStack_768 = (double ***)&DAT_00000008;
                    local_760 = (double **)0x0;
                    /* try { // try from 0013bf21 to 0013bfe2 has its CatchHandler @ 0013d582 */
                    pppdVar9 = (double ***)
                               strategy_comm3_1::cancel_order_use_range
                                         (local_8b8,
                                          *(double *)((long)local_110 + (ulong)(uint)(iVar7 << 4)) -
                                          (double)local_110[0],local_8c8,local_880,local_878,0,
                                          &local_770);
                    if (pppdVar9 != (double ***)0x0) goto LAB_0013c2d7;
                    strategy_comm3_1::live_pending_counts
                              (local_8c8,local_880,local_878,pppdStack_768,local_760);
                    local_848 = (double *)0x0;
                    if ((extraout_RDX == 0) &&
                       (local_848 = (double *)CONCAT44(uStack_8a4,local_8a8), 0.0 < dStack_408)) {
                      dVar32 = (double)((ulong)dStack_408 ^ _s__001179c0);
                      dVar25 = (double)CONCAT44(uStack_8a4,local_8a8);
                      dVar27 = dVar32;
                      if (dVar32 <= dVar25) {
                        dVar27 = dVar25;
                      }
                      local_848 = (double *)
                                  (*(code *)PTR_round_with_step_f64_001de2d0)
                                            (~-(ulong)NAN(dVar25) & (ulong)dVar27 |
                                             -(ulong)NAN(dVar25) & (ulong)dVar32,local_7b8,1);
                    }
                    local_898 = local_410;
                    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&local_770);
                    local_8a8 = (uint)local_848;
                    uStack_8a4 = (undefined4)((ulong)local_848 >> 0x20);
                    dStack_8a0 = 0.0;
                  }
                  if ((double)(_DAT_00117390 & CONCAT44(uStack_8a4,local_8a8)) <= DAT_00117260)
                  goto override_jmp_0013b735_case_4;
                  local_7b8 = pdStack_850;
                  local_848 = pdStack_4a8;
                  pcStack_798 = "H";
                  if (local_8c9 != '\0') {
                    pcStack_798 = "L";
                  }
                  uStack_790 = 1;
                  local_648 = (double *)0x118052;
                  if (bVar18 != 0) {
                    local_648 = (double *)0x118053;
                  }
                  pppdStack_640 = (double ***)0x1;
                  local_770 = &dStack_820;
                  pppdStack_768 = (double ***)puVar15;
                  local_760 = &pdStack_7a0;
                  puStack_758 = puVar15;
                  local_750 = &local_7a8;
                  puStack_748 = puVar15;
                  pdStack_740 = &dStack_610;
                  pcStack_738 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                  pdStack_730 = &dStack_808;
                  puStack_728 = puVar15;
                  ppcStack_720 = &pcStack_798;
                  pcStack_718 = _<&T_as_core::fmt::Display>::fmt;
                  pcStack_708 = _<&T_as_core::fmt::Display>::fmt;
                  local_7f8 = (double *)&DAT_001d8660;
                  pppdStack_7f0 = (double ***)&DAT_00000007;
                  local_7d8 = (double *)0x0;
                  local_7e8 = &local_770;
                  puStack_7e0 = &DAT_00000007;
                  ppdStack_710 = &local_648;
                  (*(code *)PTR_format_inner_001de1e8)(&uStack_1a8,&local_7f8);
                  cStack_2ff = (char)local_818 * '\x03' + '\x05';
                  uStack_300 = 1;
                  dStack_330 = (double)local_8b8;
                  uStack_328 = CONCAT44(uStack_8a4,local_8a8);
                  pdStack_320 = local_838;
                  pdStack_318 = local_7b8;
                  pdStack_310 = local_660;
                  pdStack_308 = local_848;
                  uStack_348 = uStack_1a8;
                  uStack_340 = uStack_1a0;
                  uStack_338 = uStack_198;
                  pppdVar9 = (double ***)strategy_comm3_1::place(local_898,local_8c8,&uStack_348);
                  if (pppdVar9 == (double ***)0x0) {
                    if (local_3ef == '\x01') {
                      (*(code *)PTR_clone_001de200)
                                (&local_648,&local_888,
                                 &PTR_s_strategies_comm_strategy_strateg_001d86e8);
                      local_7f8 = local_838;
                      pppdStack_7f0 = local_868;
                      local_7e8 = local_858;
                      hashbrown::map::HashMap<K,V,S,A>::insert
                                (&local_770,local_800 + 0x3b,&local_648,&local_7f8);
                    }
                    goto override_jmp_0013b735_case_4;
                  }
                  break;
                case 2:
                  if ((DAT_00117260 < (double)local_848) &&
                     (dStack_808 < (double)local_4a0 / _DAT_00117350)) goto LAB_0013c044;
                  uVar24 = -(ulong)(local_480 < (double)((ulong)local_480 ^ _s__001179c0));
                  pdVar31 = local_848;
                  if (0.0 <= (double)local_848) {
                    pdVar31 = (double *)0x0;
                  }
                  dVar27 = (double)(uVar24 & _DAT_00117228 |
                                   ~uVar24 & ((ulong)local_480 ^ _s__001179c0)) - (double)pdVar31;
                  uVar24 = -(ulong)(dStack_478 < (double)((ulong)dStack_478 ^ _s__001179c0));
                  dVar32 = ((double)(uVar24 & _DAT_00117228 |
                                    ~uVar24 & ((ulong)dStack_478 ^ _s__001179c0)) / local_5e8) /
                           (double)local_838 - (double)pdVar31;
                  dVar25 = dVar32;
                  if (dVar32 <= dVar27) {
                    dVar25 = dVar27;
                  }
                  dVar25 = (double)(~-(ulong)NAN(dVar27) & (ulong)dVar25 |
                                   -(ulong)NAN(dVar27) & (ulong)dVar32);
                  pdVar28 = (double *)
                            (~-(ulong)(local_490 < 0.0) & (ulong)local_490 |
                            -(ulong)(local_490 < 0.0) & _DAT_00117220);
                  pdVar31 = (double *)
                            (((double)(~-(ulong)(dStack_488 < 0.0) & (ulong)dStack_488 |
                                      -(ulong)(dStack_488 < 0.0) & _DAT_00117220) / local_5e8) /
                            (double)local_838);
                  if ((double)pdVar31 <= (double)DAT_00117278) {
                    pdVar31 = DAT_00117278;
                  }
                  if ((double)pdVar31 <= (double)pdVar28) {
                    pdVar28 = pdVar31;
                  }
                  pdVar30 = (double *)
                            (~-(ulong)(local_470 < 0.0) & (ulong)local_470 |
                            -(ulong)(local_470 < 0.0) & _DAT_00117220);
                  pdVar31 = (double *)
                            (((double)(~-(ulong)(dStack_468 < 0.0) & (ulong)dStack_468 |
                                      _DAT_00117220 & -(ulong)(dStack_468 < 0.0)) / local_5e8) /
                            (double)local_838);
                  if ((double)pdVar31 <= (double)DAT_00117278) {
                    pdVar31 = DAT_00117278;
                  }
                  if ((double)pdVar31 <= (double)pdVar30) {
                    pdVar30 = pdVar31;
                  }
                  if (dVar25 <= (double)((ulong)pdVar28 ^ _s__001179c0)) {
                    dVar25 = (double)((ulong)pdVar28 ^ _s__001179c0);
                  }
                  pdVar31 = local_848;
                  if ((double)local_848 <= 0.0) {
                    pdVar31 = (double *)0x0;
                  }
                  if ((double)pdVar31 <= (double)pdVar30) {
                    pdVar30 = pdVar31;
                  }
                  dVar25 = dVar25 - (double)pdVar30;
                  if (0.0 <= dVar25) {
                    dVar25 = 0.0;
                  }
                    /* try { // try from 0013c1d3 to 0013c255 has its CatchHandler @ 0013d59a */
                  uVar21 = (*(code *)PTR_round_with_step_f64_001de2d0)(dVar25,local_7b8,1);
                  local_8a8 = (uint)uVar21;
                  uStack_8a4 = (undefined4)((ulong)uVar21 >> 0x20);
                  dStack_8a0 = extraout_XMM0_Qb_02;
                  if (bVar18 == 0) {
                    /* try { // try from 0013c2e9 to 0013c569 has its CatchHandler @ 0013d59a */
                    pppdVar9 = (double ***)(*(code *)PTR_cancel_all_001de2d8)(local_8c8);
                    if (pppdVar9 != (double ***)0x0) break;
                    if ((local_3f0 == '\0') || (local_8c9 != '\0')) {
                      if ((DAT_00117260 < (double)((ulong)local_898 & _DAT_00117390)) &&
                         (DAT_00117260 < (double)(_DAT_00117390 & (ulong)local_5a8))) {
                        dVar25 = (double)((ulong)((double)pdStack_850 / (double)local_5a8) &
                                         _DAT_00117390) + _s__00117200;
                        if (dVar25 <= 0.0) {
                          dVar25 = 0.0;
                        }
                        pdVar28 = (double *)((double)local_8b8 + local_898 * dVar25);
                        pdVar31 = local_5f8;
                        if ((double)pdVar28 <= (double)local_5f8) {
                          pdVar31 = pdVar28;
                        }
                        local_8b8 = (double ***)
                                    (-(ulong)NAN((double)pdVar28) & (ulong)local_5f8 |
                                    ~-(ulong)NAN((double)pdVar28) & (ulong)pdVar31);
                        dStack_8b0 = dStack_5f0;
                      }
                    }
                    else {
                      local_8b8 = (double ***)
                                  strategy_comm3_1::high_taker_rate
                                            (pdStack_850,local_5a8,dStack_820,local_868,local_838,
                                             dStack_4b8);
                      dStack_8b0 = extraout_XMM0_Qb_03;
                    }
                    /* try { // try from 0013c75a to 0013d4be has its CatchHandler @ 0013d59a */
                    local_8b8 = (double ***)
                                (*(code *)PTR_round_with_step_f64_001de2d0)
                                          (((double)DAT_00117278 - (double)local_8b8) *
                                           (double)local_838,local_788,1);
                    local_898 = _s__001172f8;
                  }
                  else {
                    dVar32 = (double)local_868 - local_400 * local_788;
                    dVar27 = local_788 + (double)local_838;
                    dVar25 = dVar27;
                    if (dVar27 <= dVar32) {
                      dVar25 = dVar32;
                    }
                    local_8b8 = (double ***)
                                (*(code *)PTR_round_with_step_f64_001de2d0)
                                          (~-(ulong)NAN(dVar32) & (ulong)dVar25 |
                                           -(ulong)NAN(dVar32) & (ulong)dVar27,1);
                    dVar25 = 1.97626258336499e-323;
                    if ((ulong)local_3f8 < 4) {
                      dVar25 = local_3f8;
                    }
                    iVar7 = SUB84(dVar25,0);
                    if ((long)local_3f8 < 1) {
                      iVar7 = 1;
                    }
                    local_770 = (double *)0x0;
                    pppdStack_768 = (double ***)&DAT_00000008;
                    local_760 = (double **)0x0;
                    /* try { // try from 0013c2b1 to 0013c2ca has its CatchHandler @ 0013d586 */
                    pppdVar9 = (double ***)
                               strategy_comm3_1::cancel_order_use_range
                                         (local_8b8,
                                          *(double *)((long)local_110 + (ulong)(uint)(iVar7 << 4)) -
                                          (double)local_110[0],local_8c8,local_880,local_878,0,
                                          &local_770);
                    if (pppdVar9 != (double ***)0x0) goto LAB_0013c2d7;
                    /* try { // try from 0013c64b to 0013c6cc has its CatchHandler @ 0013d586 */
                    strategy_comm3_1::live_pending_counts
                              (local_8c8,local_880,local_878,pppdStack_768,local_760);
                    local_848 = (double *)0x0;
                    if ((extraout_RDX_00 == 0) &&
                       (local_848 = (double *)CONCAT44(uStack_8a4,local_8a8), 0.0 < dStack_408)) {
                      dVar32 = (double)((ulong)dStack_408 ^ _s__001179c0);
                      dVar25 = (double)CONCAT44(uStack_8a4,local_8a8);
                      dVar27 = dVar32;
                      if (dVar32 <= dVar25) {
                        dVar27 = dVar25;
                      }
                      local_848 = (double *)
                                  (*(code *)PTR_round_with_step_f64_001de2d0)
                                            (~-(ulong)NAN(dVar25) & (ulong)dVar27 |
                                             -(ulong)NAN(dVar25) & (ulong)dVar32,local_7b8,1);
                    }
                    local_898 = local_410;
                    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&local_770);
                    local_8a8 = (uint)local_848;
                    uStack_8a4 = (undefined4)((ulong)local_848 >> 0x20);
                    dStack_8a0 = 0.0;
                  }
                  if ((double)(_DAT_00117390 & CONCAT44(uStack_8a4,local_8a8)) <= DAT_00117260)
                  goto override_jmp_0013b735_case_4;
                  local_7b8 = pdStack_850;
                  local_848 = pdStack_4a8;
                  pcStack_798 = "H";
                  if (local_8c9 != '\0') {
                    pcStack_798 = "L";
                  }
                  uStack_790 = 1;
                  local_648 = (double *)0x118052;
                  if (bVar18 != 0) {
                    local_648 = (double *)0x118053;
                  }
                  pppdStack_640 = (double ***)0x1;
                  local_770 = &dStack_820;
                  pppdStack_768 = (double ***)puVar15;
                  local_760 = &pdStack_7a0;
                  puStack_758 = puVar15;
                  local_750 = &local_7a8;
                  puStack_748 = puVar15;
                  pdStack_740 = &dStack_610;
                  pcStack_738 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                  pdStack_730 = &dStack_808;
                  puStack_728 = puVar15;
                  ppcStack_720 = &pcStack_798;
                  pcStack_718 = _<&T_as_core::fmt::Display>::fmt;
                  pcStack_708 = _<&T_as_core::fmt::Display>::fmt;
                  local_7f8 = (double *)&DAT_001d8660;
                  pppdStack_7f0 = (double ***)&DAT_00000007;
                  local_7d8 = (double *)0x0;
                  local_7e8 = &local_770;
                  puStack_7e0 = &DAT_00000007;
                  ppdStack_710 = &local_648;
                  (*(code *)PTR_format_inner_001de1e8)(&uStack_1c0,&local_7f8);
                  uStack_1e0 = 0x802;
                  dStack_210 = (double)local_8b8;
                  uStack_208 = CONCAT44(uStack_8a4,local_8a8);
                  pdStack_200 = local_838;
                  pdStack_1f8 = local_7b8;
                  pdStack_1f0 = local_818;
                  pdStack_1e8 = local_848;
                  uStack_228 = uStack_1c0;
                  uStack_220 = uStack_1b8;
                  uStack_218 = uStack_1b0;
                  pppdVar9 = (double ***)strategy_comm3_1::place(local_898,local_8c8,&uStack_228);
                  if (pppdVar9 == (double ***)0x0) {
                    if (local_3ef == '\x01') {
                      (*(code *)PTR_clone_001de200)
                                (&local_648,&local_888,
                                 &PTR_s_strategies_comm_strategy_strateg_001d8700);
                      local_7f8 = local_838;
                      pppdStack_7f0 = local_868;
                      local_7e8 = local_858;
                      hashbrown::map::HashMap<K,V,S,A>::insert
                                (&local_770,local_800 + 0x3b,&local_648,&local_7f8);
                    }
                    goto override_jmp_0013b735_case_4;
                  }
                  break;
                case 3:
                  if (((double)local_848 < _DAT_00117358) &&
                     (dStack_808 < (double)local_4a0 / _DAT_00117350)) goto LAB_0013c044;
                  if (0.0 <= (double)local_848) goto override_jmp_0013b735_case_4;
                  dVar25 = (double)(~-(ulong)(local_470 < 0.0) & (ulong)local_470 |
                                   -(ulong)(local_470 < 0.0) & _DAT_00117220);
                  dVar32 = ((double)(~-(ulong)(dStack_468 < 0.0) & (ulong)dStack_468 |
                                    _DAT_00117220 & -(ulong)(dStack_468 < 0.0)) / local_5e8) /
                           (double)local_868;
                  dVar27 = dVar32;
                  if (dVar25 <= dVar32) {
                    dVar27 = dVar25;
                  }
                  dVar25 = (double)(~-(ulong)NAN(dVar25) & (ulong)dVar27 |
                                   -(ulong)NAN(dVar25) & (ulong)dVar32);
                  pdVar31 = local_848;
                  if (0.0 <= (double)local_848) {
                    pdVar31 = (double *)0x0;
                  }
                  if ((double)((ulong)pdVar31 ^ _s__001179c0) <= dVar25) {
                    dVar25 = (double)((ulong)pdVar31 ^ _s__001179c0);
                  }
                    /* try { // try from 0013bb7c to 0013bbfa has its CatchHandler @ 0013d59a */
                  uVar21 = (*(code *)PTR_round_with_step_f64_001de2d0)(dVar25,local_7b8,1);
                  local_8a8 = (uint)uVar21;
                  uStack_8a4 = (undefined4)((ulong)uVar21 >> 0x20);
                  dStack_8a0 = extraout_XMM0_Qb_00;
                  if (bVar18 == 0) {
                    pppdVar9 = (double ***)(*(code *)PTR_cancel_all_001de2d8)(local_8c8);
                    if (pppdVar9 != (double ***)0x0) break;
                    if ((local_3f0 == '\0') || (local_8c9 != '\0')) {
                      if ((DAT_00117260 < (double)((ulong)local_898 & _DAT_00117390)) &&
                         (DAT_00117260 < (double)(_DAT_00117390 & (ulong)local_5d8))) {
                        dVar25 = (double)((ulong)((double)pdStack_850 / local_5d8) & _DAT_00117390)
                                 + _s__00117200;
                        if (dVar25 <= 0.0) {
                          dVar25 = 0.0;
                        }
                        pdVar28 = (double *)((double)local_8b8 + local_898 * dVar25);
                        pdVar31 = local_5f8;
                        if ((double)pdVar28 <= (double)local_5f8) {
                          pdVar31 = pdVar28;
                        }
                        local_8b8 = (double ***)
                                    (-(ulong)NAN((double)pdVar28) & (ulong)local_5f8 |
                                    ~-(ulong)NAN((double)pdVar28) & (ulong)pdVar31);
                        dStack_8b0 = dStack_5f0;
                      }
                    }
                    else {
                      local_8b8 = (double ***)
                                  strategy_comm3_1::high_taker_rate
                                            (pdStack_850,local_5d8,dStack_820,local_868,local_838,
                                             dStack_4b8);
                      dStack_8b0 = extraout_XMM0_Qb_05;
                    }
                    local_8b8 = (double ***)
                                (*(code *)PTR_round_with_step_f64_001de2d0)
                                          (((double)local_8b8 + (double)DAT_00117278) *
                                           (double)local_868,local_788,1);
                    local_898 = _s__001172f8;
                  }
                  else {
                    dVar32 = local_400 * local_788 + (double)local_838;
                    dVar27 = (double)local_868 - local_788;
                    dVar25 = dVar27;
                    if (dVar32 <= dVar27) {
                      dVar25 = dVar32;
                    }
                    local_8b8 = (double ***)
                                (*(code *)PTR_round_with_step_f64_001de2d0)
                                          (~-(ulong)NAN(dVar32) & (ulong)dVar25 |
                                           -(ulong)NAN(dVar32) & (ulong)dVar27,1);
                    dVar25 = 1.97626258336499e-323;
                    if ((ulong)local_3f8 < 4) {
                      dVar25 = local_3f8;
                    }
                    iVar7 = SUB84(dVar25,0);
                    if ((long)local_3f8 < 1) {
                      iVar7 = 1;
                    }
                    local_770 = (double *)0x0;
                    pppdStack_768 = (double ***)&DAT_00000008;
                    local_760 = (double **)0x0;
                    /* try { // try from 0013bc57 to 0013bd13 has its CatchHandler @ 0013d584 */
                    pppdVar9 = (double ***)
                               strategy_comm3_1::cancel_order_use_range
                                         (local_8b8,
                                          (double)local_c0[0] -
                                          *(double *)((long)local_c0 + (ulong)(uint)(iVar7 << 4)),
                                          local_8c8,local_880,local_878,1,&local_770);
                    if (pppdVar9 != (double ***)0x0) goto LAB_0013c2d7;
                    lVar8 = strategy_comm3_1::live_pending_counts
                                      (local_8c8,local_880,local_878,pppdStack_768,local_760);
                    local_818 = (double *)0x0;
                    if ((lVar8 == 0) &&
                       (local_818 = (double *)CONCAT44(uStack_8a4,local_8a8), 0.0 < dStack_408)) {
                      dVar27 = (double)CONCAT44(uStack_8a4,local_8a8);
                      dVar25 = dStack_408;
                      if (dVar27 <= dStack_408) {
                        dVar25 = dVar27;
                      }
                      local_818 = (double *)
                                  (*(code *)PTR_round_with_step_f64_001de2d0)
                                            (~-(ulong)NAN(dVar27) & (ulong)dVar25 |
                                             -(ulong)NAN(dVar27) & (ulong)dStack_408,local_7b8,1);
                    }
                    local_898 = local_410;
                    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&local_770);
                    local_8a8 = (uint)local_818;
                    uStack_8a4 = (undefined4)((ulong)local_818 >> 0x20);
                    dStack_8a0 = 0.0;
                  }
                  if ((double)(_DAT_00117390 & CONCAT44(uStack_8a4,local_8a8)) <= DAT_00117260)
                  goto override_jmp_0013b735_case_4;
                  local_848 = pdStack_850;
                  local_818 = pdStack_4a8;
                  pcStack_798 = "H";
                  if (local_8c9 != '\0') {
                    pcStack_798 = "L";
                  }
                  uStack_790 = 1;
                  local_648 = (double *)0x118052;
                  if (bVar18 != 0) {
                    local_648 = (double *)0x118053;
                  }
                  pppdStack_640 = (double ***)0x1;
                  local_770 = &dStack_820;
                  pppdStack_768 = (double ***)puVar15;
                  local_760 = &pdStack_7a0;
                  puStack_758 = puVar15;
                  local_750 = &local_7a8;
                  puStack_748 = puVar15;
                  pdStack_740 = &dStack_610;
                  pcStack_738 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                  pdStack_730 = &dStack_808;
                  puStack_728 = puVar15;
                  ppcStack_720 = &pcStack_798;
                  pcStack_718 = _<&T_as_core::fmt::Display>::fmt;
                  pcStack_708 = _<&T_as_core::fmt::Display>::fmt;
                  local_7f8 = (double *)&DAT_001d8660;
                  pppdStack_7f0 = (double ***)&DAT_00000007;
                  local_7d8 = (double *)0x0;
                  local_7e8 = &local_770;
                  puStack_7e0 = &DAT_00000007;
                  ppdStack_710 = &local_648;
                  (*(code *)PTR_format_inner_001de1e8)(&uStack_190,&local_7f8);
                  bStack_2af = local_3b8._0_1_ | 6;
                  uStack_2b0 = 3;
                  dStack_2e0 = (double)local_8b8;
                  uStack_2d8 = CONCAT44(uStack_8a4,local_8a8);
                  pppdStack_2d0 = local_868;
                  pdStack_2c8 = local_848;
                  dStack_2c0 = local_668;
                  pdStack_2b8 = local_818;
                  uStack_2f8 = uStack_190;
                  uStack_2f0 = uStack_188;
                  uStack_2e8 = uStack_180;
                  pppdVar9 = (double ***)strategy_comm3_1::place(local_898,local_8c8,&uStack_2f8);
                  if (pppdVar9 == (double ***)0x0) {
                    if (local_3ef == '\x01') {
                      (*(code *)PTR_clone_001de200)
                                (&local_648,&local_888,
                                 &PTR_s_strategies_comm_strategy_strateg_001d8718);
                      local_7f8 = local_838;
                      pppdStack_7f0 = local_868;
                      local_7e8 = local_858;
                      hashbrown::map::HashMap<K,V,S,A>::insert
                                (&local_770,local_800 + 0x3b,&local_648,&local_7f8);
                    }
                    goto override_jmp_0013b735_case_4;
                  }
                  break;
                case 4:
                  goto override_jmp_0013b735_case_4;
                }
                if (dStack_610 != 0.0) {
                  (*(code *)PTR___rust_dealloc_001de0f0)(uStack_608,dStack_610,1);
                }
              }
            }
          }
joined_r0x0013b538:
          if (local_138 != 0) {
            (*(code *)PTR___rust_dealloc_001de0f0)(local_130,local_138,1);
          }
        }
        if (local_3d0 != 0) {
          (*(code *)PTR___rust_dealloc_001de0f0)(local_3c8,local_3d0,1);
        }
        if (local_888 != 0.0) {
          (*(code *)PTR___rust_dealloc_001de0f0)(local_880,local_888,1);
        }
        local_868 = local_3e0;
        lVar13 = local_3d8;
        goto LAB_0013aa1a;
      }
      break;
    }
  }
  pppdVar9 = (double ***)0x0;
LAB_0013aa1a:
  puVar15 = PTR___rust_dealloc_001de0f0;
  if (lVar13 != 0) {
    pppdVar20 = local_868 + 1;
    do {
      if (pppdVar20[-1] != (double **)0x0) {
        (*(code *)puVar15)(*pppdVar20,pppdVar20[-1],1);
      }
      pppdVar20 = pppdVar20 + 3;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
LAB_0013aa62:
  if (local_3e8 != 0) {
    (*(code *)PTR___rust_dealloc_001de0f0)(local_868,local_3e8 * 0x18,8);
  }
  goto LAB_0013a90c;
}




// ELF address 0x0000000000062fc0; fb_strategy_sdk_abi_version

undefined8 fb_strategy_sdk_abi_version(void)

{
  return 4;
}




// ELF address 0x0000000000062fd0; fb_strategy_sdk_version_str

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
  (*(code *)PTR_memcpy_001de150)
            (param_1,
             "0.6.0[fb_plugin] on_begin error: \n[fb_plugin] on_signal error: [fb_plugin] on_depth error: [fb_plugin] on_finish error: "
             ,uVar2);
  if (param_2 != 0) {
    *(undefined1 *)(param_1 + uVar2) = 0;
  }
  return uVar2;
}


