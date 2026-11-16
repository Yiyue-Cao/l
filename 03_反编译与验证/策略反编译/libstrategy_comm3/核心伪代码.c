// ELF address 0x0000000000038b60; strategy_comm3::Comm3Params::signal_mode

/* strategy_comm3::Comm3Params::signal_mode */

ulong __rustcall strategy_comm3::Comm3Params::signal_mode(ushort *param_1,long param_2)

{
  if (param_2 != 3) {
    return 0;
  }
  if ((char)param_1[1] != '2' || (short)(*param_1 ^ 0x5650) != 0) {
    return (ulong)((uint)((char)param_1[1] == '4' && *param_1 == 0x5650) * 3);
  }
  return CONCAT71((uint7)(uint3)((*param_1 ^ 0x5650) >> 8),1);
}




// ELF address 0x0000000000038cb0; strategy_comm3::Comm3Params::low_action_enum

/* strategy_comm3::Comm3Params::low_action_enum */

bool __rustcall strategy_comm3::Comm3Params::low_action_enum(int *param_1,long param_2)

{
  if (param_2 == 5) {
    return (bool)(((char)param_1[1] == 'r' && *param_1 == 0x656b616d) * '\x02');
  }
  if (param_2 == 4) {
    return *param_1 == 0x70696b73;
  }
  return false;
}




// ELF address 0x0000000000038ba0; strategy_comm3::Comm3Params::signal_trigger_mode

/* strategy_comm3::Comm3Params::signal_trigger_mode */

short __rustcall strategy_comm3::Comm3Params::signal_trigger_mode(long *param_1,long param_2)

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
      auVar3[0] = -((char)*param_1 == s_WindowsStdTrigge_00117930[0]);
      auVar3[1] = -(*(char *)((long)param_1 + 1) == s_WindowsStdTrigge_00117930[1]);
      auVar3[2] = -(*(char *)((long)param_1 + 2) == s_WindowsStdTrigge_00117930[2]);
      auVar3[3] = -(*(char *)((long)param_1 + 3) == s_WindowsStdTrigge_00117930[3]);
      auVar3[4] = -(*(char *)((long)param_1 + 4) == s_WindowsStdTrigge_00117930[4]);
      auVar3[5] = -(*(char *)((long)param_1 + 5) == s_WindowsStdTrigge_00117930[5]);
      auVar3[6] = -(*(char *)((long)param_1 + 6) == s_WindowsStdTrigge_00117930[6]);
      auVar3[7] = -(*(char *)((long)param_1 + 7) == s_WindowsStdTrigge_00117930[7]);
      auVar3[8] = -((char)param_1[1] == s_WindowsStdTrigge_00117930[8]);
      auVar3[9] = -(*(char *)((long)param_1 + 9) == s_WindowsStdTrigge_00117930[9]);
      auVar3[10] = -(*(char *)((long)param_1 + 10) == s_WindowsStdTrigge_00117930[10]);
      auVar3[0xb] = -(*(char *)((long)param_1 + 0xb) == s_WindowsStdTrigge_00117930[0xb]);
      auVar3[0xc] = -(*(char *)((long)param_1 + 0xc) == s_WindowsStdTrigge_00117930[0xc]);
      auVar3[0xd] = -(*(char *)((long)param_1 + 0xd) == s_WindowsStdTrigge_00117930[0xd]);
      auVar3[0xe] = -(*(char *)((long)param_1 + 0xe) == s_WindowsStdTrigge_00117930[0xe]);
      auVar3[0xf] = -(*(char *)((long)param_1 + 0xf) == s_WindowsStdTrigge_00117930[0xf]);
      auVar7[0] = -((char)param_1[2] == s_r_001176d0[0]);
      auVar7[1] = -(s_r_001176d0[1] == '\0');
      auVar7[2] = -(s_r_001176d0[2] == '\0');
      auVar7[3] = -(s_r_001176d0[3] == '\0');
      auVar7[4] = -(UNK_001176d4 == '\0');
      auVar7[5] = -(UNK_001176d5 == '\0');
      auVar7[6] = -(UNK_001176d6 == '\0');
      auVar7[7] = -(UNK_001176d7 == '\0');
      auVar7[8] = -(UNK_001176d8 == '\0');
      auVar7[9] = -(UNK_001176d9 == '\0');
      auVar7[10] = -(UNK_001176da == '\0');
      auVar7[0xb] = -(UNK_001176db == '\0');
      auVar7[0xc] = -(UNK_001176dc == '\0');
      auVar7[0xd] = -(UNK_001176dd == '\0');
      auVar7[0xe] = -(UNK_001176de == '\0');
      auVar7[0xf] = -(UNK_001176df == '\0');
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
      auVar5[0] = -((char)*param_1 == s_WindowsMeanTrigg_001175b0[0]);
      auVar5[1] = -(*(char *)((long)param_1 + 1) == s_WindowsMeanTrigg_001175b0[1]);
      auVar5[2] = -(*(char *)((long)param_1 + 2) == s_WindowsMeanTrigg_001175b0[2]);
      auVar5[3] = -(*(char *)((long)param_1 + 3) == s_WindowsMeanTrigg_001175b0[3]);
      auVar5[4] = -(*(char *)((long)param_1 + 4) == s_WindowsMeanTrigg_001175b0[4]);
      auVar5[5] = -(*(char *)((long)param_1 + 5) == s_WindowsMeanTrigg_001175b0[5]);
      auVar5[6] = -(*(char *)((long)param_1 + 6) == s_WindowsMeanTrigg_001175b0[6]);
      auVar5[7] = -(*(char *)((long)param_1 + 7) == s_WindowsMeanTrigg_001175b0[7]);
      auVar5[8] = -((char)param_1[1] == s_WindowsMeanTrigg_001175b0[8]);
      auVar5[9] = -(*(char *)((long)param_1 + 9) == s_WindowsMeanTrigg_001175b0[9]);
      auVar5[10] = -(*(char *)((long)param_1 + 10) == s_WindowsMeanTrigg_001175b0[10]);
      auVar5[0xb] = -(*(char *)((long)param_1 + 0xb) == s_WindowsMeanTrigg_001175b0[0xb]);
      auVar5[0xc] = -(*(char *)((long)param_1 + 0xc) == s_WindowsMeanTrigg_001175b0[0xc]);
      auVar5[0xd] = -(*(char *)((long)param_1 + 0xd) == s_WindowsMeanTrigg_001175b0[0xd]);
      auVar5[0xe] = -(*(char *)((long)param_1 + 0xe) == s_WindowsMeanTrigg_001175b0[0xe]);
      auVar5[0xf] = -(*(char *)((long)param_1 + 0xf) == s_WindowsMeanTrigg_001175b0[0xf]);
      auVar9[0] = -((char)(short)param_1[2] == DAT_00117550);
      auVar9[1] = -((char)((ushort)(short)param_1[2] >> 8) == UNK_00117551);
      auVar9[2] = -(UNK_00117552 == '\0');
      auVar9[3] = -(UNK_00117553 == '\0');
      auVar9[4] = -(UNK_00117554 == '\0');
      auVar9[5] = -(UNK_00117555 == '\0');
      auVar9[6] = -(UNK_00117556 == '\0');
      auVar9[7] = -(UNK_00117557 == '\0');
      auVar9[8] = -(UNK_00117558 == '\0');
      auVar9[9] = -(UNK_00117559 == '\0');
      auVar9[10] = -(UNK_0011755a == '\0');
      auVar9[0xb] = -(UNK_0011755b == '\0');
      auVar9[0xc] = -(UNK_0011755c == '\0');
      auVar9[0xd] = -(UNK_0011755d == '\0');
      auVar9[0xe] = -(UNK_0011755e == '\0');
      auVar9[0xf] = -(UNK_0011755f == '\0');
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
      auVar4[0] = -((char)uVar1 == s_gger_001176b0[0]);
      auVar4[1] = -((char)((uint)uVar1 >> 8) == s_gger_001176b0[1]);
      auVar4[2] = -((char)((uint)uVar1 >> 0x10) == s_gger_001176b0[2]);
      auVar4[3] = -((char)((uint)uVar1 >> 0x18) == s_gger_001176b0[3]);
      auVar4[4] = -(s_gger_001176b0[4] == '\0');
      auVar4[5] = -(s_gger_001176b0[5] == '\0');
      auVar4[6] = -(s_gger_001176b0[6] == '\0');
      auVar4[7] = -(s_gger_001176b0[7] == '\0');
      auVar4[8] = -(UNK_001176b8 == '\0');
      auVar4[9] = -(UNK_001176b9 == '\0');
      auVar4[10] = -(UNK_001176ba == '\0');
      auVar4[0xb] = -(UNK_001176bb == '\0');
      auVar4[0xc] = -(UNK_001176bc == '\0');
      auVar4[0xd] = -(UNK_001176bd == '\0');
      auVar4[0xe] = -(UNK_001176be == '\0');
      auVar4[0xf] = -(UNK_001176bf == '\0');
      auVar8[0] = -((char)*param_1 == s_WindowsSharpeTri_001176c0[0]);
      auVar8[1] = -(*(char *)((long)param_1 + 1) == s_WindowsSharpeTri_001176c0[1]);
      auVar8[2] = -(*(char *)((long)param_1 + 2) == s_WindowsSharpeTri_001176c0[2]);
      auVar8[3] = -(*(char *)((long)param_1 + 3) == s_WindowsSharpeTri_001176c0[3]);
      auVar8[4] = -(*(char *)((long)param_1 + 4) == s_WindowsSharpeTri_001176c0[4]);
      auVar8[5] = -(*(char *)((long)param_1 + 5) == s_WindowsSharpeTri_001176c0[5]);
      auVar8[6] = -(*(char *)((long)param_1 + 6) == s_WindowsSharpeTri_001176c0[6]);
      auVar8[7] = -(*(char *)((long)param_1 + 7) == s_WindowsSharpeTri_001176c0[7]);
      auVar8[8] = -((char)param_1[1] == s_WindowsSharpeTri_001176c0[8]);
      auVar8[9] = -(*(char *)((long)param_1 + 9) == s_WindowsSharpeTri_001176c0[9]);
      auVar8[10] = -(*(char *)((long)param_1 + 10) == s_WindowsSharpeTri_001176c0[10]);
      auVar8[0xb] = -(*(char *)((long)param_1 + 0xb) == s_WindowsSharpeTri_001176c0[0xb]);
      auVar8[0xc] = -(*(char *)((long)param_1 + 0xc) == s_WindowsSharpeTri_001176c0[0xc]);
      auVar8[0xd] = -(*(char *)((long)param_1 + 0xd) == s_WindowsSharpeTri_001176c0[0xd]);
      auVar8[0xe] = -(*(char *)((long)param_1 + 0xe) == s_WindowsSharpeTri_001176c0[0xe]);
      auVar8[0xf] = -(*(char *)((long)param_1 + 0xf) == s_WindowsSharpeTri_001176c0[0xf]);
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
      auVar10[0] = -(*(char *)((long)param_1 + 6) == DAT_00117980);
      auVar10[1] = -(*(char *)((long)param_1 + 7) == UNK_00117981);
      auVar10[2] = -((char)param_1[1] == UNK_00117982);
      auVar10[3] = -(*(char *)((long)param_1 + 9) == UNK_00117983);
      auVar10[4] = -(*(char *)((long)param_1 + 10) == UNK_00117984);
      auVar10[5] = -(*(char *)((long)param_1 + 0xb) == UNK_00117985);
      auVar10[6] = -(*(char *)((long)param_1 + 0xc) == UNK_00117986);
      auVar10[7] = -(*(char *)((long)param_1 + 0xd) == UNK_00117987);
      auVar10[8] = -(*(char *)((long)param_1 + 0xe) == UNK_00117988);
      auVar10[9] = -(*(char *)((long)param_1 + 0xf) == UNK_00117989);
      auVar10[10] = -((char)param_1[2] == UNK_0011798a);
      auVar10[0xb] = -(*(char *)((long)param_1 + 0x11) == UNK_0011798b);
      auVar10[0xc] = -(*(char *)((long)param_1 + 0x12) == UNK_0011798c);
      auVar10[0xd] = -(*(char *)((long)param_1 + 0x13) == UNK_0011798d);
      auVar10[0xe] = -(*(char *)((long)param_1 + 0x14) == UNK_0011798e);
      auVar10[0xf] = -(*(char *)((long)param_1 + 0x15) == UNK_0011798f);
      auVar6[0] = -((char)*param_1 == DAT_001175f0);
      auVar6[1] = -(*(char *)((long)param_1 + 1) == UNK_001175f1);
      auVar6[2] = -(*(char *)((long)param_1 + 2) == UNK_001175f2);
      auVar6[3] = -(*(char *)((long)param_1 + 3) == UNK_001175f3);
      auVar6[4] = -(*(char *)((long)param_1 + 4) == UNK_001175f4);
      auVar6[5] = -(*(char *)((long)param_1 + 5) == UNK_001175f5);
      auVar6[6] = -(*(char *)((long)param_1 + 6) == UNK_001175f6);
      auVar6[7] = -(*(char *)((long)param_1 + 7) == UNK_001175f7);
      auVar6[8] = -((char)param_1[1] == UNK_001175f8);
      auVar6[9] = -(*(char *)((long)param_1 + 9) == UNK_001175f9);
      auVar6[10] = -(*(char *)((long)param_1 + 10) == UNK_001175fa);
      auVar6[0xb] = -(*(char *)((long)param_1 + 0xb) == UNK_001175fb);
      auVar6[0xc] = -(*(char *)((long)param_1 + 0xc) == UNK_001175fc);
      auVar6[0xd] = -(*(char *)((long)param_1 + 0xd) == UNK_001175fd);
      auVar6[0xe] = -(*(char *)((long)param_1 + 0xe) == UNK_001175fe);
      auVar6[0xf] = -(*(char *)((long)param_1 + 0xf) == UNK_001175ff);
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




// ELF address 0x0000000000059e70; strategy_comm3::signal_trigger::SignalTrigger::update_score

/* strategy_comm3::signal_trigger::SignalTrigger::update_score */

void __rustcall
strategy_comm3::signal_trigger::SignalTrigger::update_score
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
LAB_0015a042:
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
          goto LAB_0015a042;
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




// ELF address 0x000000000005ac40; strategy_comm3::signal_trigger::SignalTrigger::windows_rsi_trigger

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm3::signal_trigger::SignalTrigger::windows_rsi_trigger */

undefined1 * __rustcall
strategy_comm3::signal_trigger::SignalTrigger::windows_rsi_trigger
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
      dVar13 = (double)(*(ulong *)((long)pauVar10 + lVar6 + -0x18) & _DAT_00117310);
      uVar12 = -(ulong)(DAT_001171e0 < dVar13);
      dVar13 = (double)(~uVar12 & _s__001172a8 |
                       (ulong)(DAT_00117248 -
                              DAT_00117248 /
                              (*(double *)((long)pauVar10 + lVar6 + -0x20) / dVar13 + DAT_001171f8))
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
                    /* try { // try from 0015ade3 to 0015adf3 has its CatchHandler @ 0015ae45 */
        alloc::raw_vec::RawVec<T,A>::grow_one
                  (&local_90,anon_2e1bd4dd84132b12ad5b1a4972b4d8e8_5_llvm_5776159170460620602);
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




// ELF address 0x000000000005a280; strategy_comm3::signal_trigger::SignalTrigger::windows_std_trigger

/* WARNING: Removing unreachable block (ram,0x0015a2eb) */
/* strategy_comm3::signal_trigger::SignalTrigger::windows_std_trigger */

undefined1 * __rustcall
strategy_comm3::signal_trigger::SignalTrigger::windows_std_trigger
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




// ELF address 0x000000000005a1d0; strategy_comm3::signal_trigger::SignalTrigger::windows_mean_trigger

/* WARNING: Removing unreachable block (ram,0x0015a23b) */
/* strategy_comm3::signal_trigger::SignalTrigger::windows_mean_trigger */

undefined1 * __rustcall
strategy_comm3::signal_trigger::SignalTrigger::windows_mean_trigger
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




// ELF address 0x000000000005a9f0; strategy_comm3::signal_trigger::SignalTrigger::windows_sharpe_trigger

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm3::signal_trigger::SignalTrigger::windows_sharpe_trigger */

undefined1 * __rustcall
strategy_comm3::signal_trigger::SignalTrigger::windows_sharpe_trigger
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
      auVar14._12_4_ = _UNK_00117474;
      dVar1 = *(double *)((long)pauVar11 + lVar6 + -0x38);
      dVar15 = *(double *)((long)pauVar11 + lVar6 + -0x30) /
               ((auVar14._8_8_ - _UNK_00117338) +
               ((double)CONCAT44(_s__00117470,(int)lVar7) - _s__00117330)) - dVar1 * dVar1;
      dVar13 = 0.0;
      if (dVar15 <= 0.0) {
        dVar15 = dVar13;
      }
      dVar15 = SQRT(dVar15);
      *(double *)((long)pauVar11 + lVar6 + -0x28) = dVar15;
      if (DAT_001171e0 < (double)((ulong)dVar15 & _DAT_00117310)) {
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
                    /* try { // try from 0015abb3 to 0015abc3 has its CatchHandler @ 0015ac15 */
        alloc::raw_vec::RawVec<T,A>::grow_one
                  (&local_90,anon_2e1bd4dd84132b12ad5b1a4972b4d8e8_4_llvm_5776159170460620602);
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




// ELF address 0x000000000005a140; strategy_comm3::signal_trigger::SignalTrigger::point_signal_trigger_pv4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm3::signal_trigger::SignalTrigger::point_signal_trigger_pv4 */

void __rustcall
strategy_comm3::signal_trigger::SignalTrigger::point_signal_trigger_pv4
          (double param_1,double param_2,ulong param_3,undefined1 *param_4,long param_5)

{
  undefined1 uVar1;
  double dVar2;
  
  dVar2 = *(double *)(param_5 + 0x38);
  param_1 = ((double)(param_3 & _DAT_00117310) + param_2) * param_1;
  if (dVar2 <= 0.0) {
    dVar2 = param_1 + dVar2;
    if (0.0 <= dVar2) {
      dVar2 = 0.0;
    }
    if (dVar2 < *(double *)(param_5 + 0x40)) goto LAB_0015a197;
  }
  else {
    dVar2 = dVar2 - param_1;
    if (dVar2 <= 0.0) {
      dVar2 = 0.0;
    }
    if (dVar2 < *(double *)(param_5 + 0x40)) {
LAB_0015a197:
      uVar1 = 3;
      if (((dVar2 < *(double *)(param_5 + 0x58)) && (uVar1 = 2, *(double *)(param_5 + 0x50) < dVar2)
          ) && (uVar1 = 4, dVar2 <= *(double *)(param_5 + 0x48))) {
        *param_4 = 1;
        *(undefined8 *)(param_4 + 8) = 0x3ff0000000000000;
        return;
      }
      goto LAB_0015a177;
    }
  }
  uVar1 = 0;
LAB_0015a177:
  *param_4 = uVar1;
  *(undefined8 *)(param_4 + 8) = 0x3ff0000000000000;
  return;
}




// ELF address 0x000000000005a330; strategy_comm3::signal_trigger::SignalTrigger::windows_quantile_trigger

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm3::signal_trigger::SignalTrigger::windows_quantile_trigger */

undefined1 * __rustcall
strategy_comm3::signal_trigger::SignalTrigger::windows_quantile_trigger
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
  if ((param_1 < 0.0) || (DAT_001171f8 < param_1)) {
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
LAB_0015a93f:
                    /* try { // try from 0015a93f to 0015a94f has its CatchHandler @ 0015a9ba */
      uVar12 = anyhow::error::_<impl_anyhow::Error>::msg(&DAT_00118bbe,0x12);
      *(undefined8 *)(param_3 + 8) = uVar12;
      *param_3 = 5;
      if (local_f0 == 0) {
        return param_3;
      }
      (*(code *)PTR___rust_dealloc_001dcef0)(local_e8,local_f0,1);
      return param_3;
    }
  }
  else {
    uVar19 = ~(uint)uVar1;
    dVar23 = DAT_001171f8 - param_1;
    local_48 = param_1;
    if ((dVar23 < 0.0) || (DAT_001171f8 < dVar23)) {
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
          auVar22._12_4_ = _UNK_00117474;
          param_1 = param_1 * ((auVar22._8_8_ - _UNK_00117338) +
                              ((double)CONCAT44(_s__00117470,(int)uVar15) - _s__00117330));
          uVar8 = 0;
          if (0.0 <= param_1) {
            uVar8 = (long)(param_1 - _DAT_00117220) & (long)param_1 >> 0x3f | (long)param_1;
          }
          uVar11 = 0xffffffffffffffff;
          if (param_1 <= _DAT_00117160) {
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
                    /* try { // try from 0015a920 to 0015a927 has its CatchHandler @ 0015a9bc */
              lVar9 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                      ::next(&uStack_d8);
              if (lVar9 == 0) goto LAB_0015a93f;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
                    /* try { // try from 0015a932 to 0015a93b has its CatchHandler @ 0015a9b6 */
          _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>::
          next(&uStack_d8);
        }
        goto LAB_0015a93f;
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
          if (uVar15 == 0) goto LAB_0015a93f;
          auVar20._8_4_ = (int)(uVar15 >> 0x20);
          auVar20._0_8_ = uVar15;
          auVar20._12_4_ = _UNK_00117474;
          dVar23 = ((auVar20._8_8_ - _UNK_00117338) +
                   ((double)CONCAT44(_s__00117470,(int)uVar15) - _s__00117330)) * local_48;
          uVar8 = (long)(dVar23 - _DAT_00117220) & (long)dVar23 >> 0x3f | (long)dVar23;
          if (dVar23 < _DAT_00117218) {
            uVar8 = 0;
          }
          if (_DAT_00117160 < dVar23) {
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
                    /* try { // try from 0015a540 to 0015a549 has its CatchHandler @ 0015a9c0 */
              lVar9 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                      ::next(&uStack_d8);
              if (lVar9 == 0) goto LAB_0015a93f;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
                    /* try { // try from 0015a558 to 0015a561 has its CatchHandler @ 0015a9b8 */
          pdVar10 = (double *)
                    _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                    ::next(&uStack_d8);
          if ((pdVar10 == (double *)0x0) ||
             (uVar15 = *(ulong *)((long)pauVar16 + lVar18 + -0x60), uVar15 == 0)) goto LAB_0015a93f;
          auVar21._8_4_ = (int)(uVar15 >> 0x20);
          auVar21._0_8_ = uVar15;
          auVar21._12_4_ = _UNK_00117474;
          dVar23 = ((auVar21._8_8_ - _UNK_00117338) +
                   ((double)CONCAT44(_s__00117470,(int)uVar15) - _s__00117330)) * local_58;
          uVar8 = 0;
          if (_DAT_00117218 <= dVar23) {
            uVar8 = (long)(dVar23 - _DAT_00117220) & (long)dVar23 >> 0x3f | (long)dVar23;
          }
          if (_DAT_00117160 < dVar23) {
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
                    /* try { // try from 0015a650 to 0015a659 has its CatchHandler @ 0015a9be */
              lVar9 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                      ::next(&uStack_d8);
              if (lVar9 == 0) goto LAB_0015a93f;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
                    /* try { // try from 0015a668 to 0015a77d has its CatchHandler @ 0015a9b8 */
          pdVar10 = (double *)
                    _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                    ::next(&uStack_d8);
          uVar15 = local_e0;
          if (pdVar10 == (double *)0x0) goto LAB_0015a93f;
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
                       PTR_anon_2e1bd4dd84132b12ad5b1a4972b4d8e8_0_llvm_5776159170460620602_001d7bd8
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




// ELF address 0x000000000005a0b0; strategy_comm3::signal_trigger::SignalTrigger::point_signal_trigger_pv1_spread

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm3::signal_trigger::SignalTrigger::point_signal_trigger_pv1_spread */

void __rustcall
strategy_comm3::signal_trigger::SignalTrigger::point_signal_trigger_pv1_spread
          (double param_1,ulong param_2,undefined1 *param_3,long param_4)

{
  undefined1 uVar1;
  double dVar2;
  
  dVar2 = *(double *)(param_4 + 0x38);
  param_1 = (double)(param_2 & _DAT_00117310) * param_1;
  if (dVar2 <= 0.0) {
    dVar2 = param_1 + dVar2;
    if (0.0 <= dVar2) {
      dVar2 = 0.0;
    }
    if (dVar2 < *(double *)(param_4 + 0x40)) goto LAB_0015a103;
  }
  else {
    dVar2 = dVar2 - param_1;
    if (dVar2 <= 0.0) {
      dVar2 = 0.0;
    }
    if (dVar2 < *(double *)(param_4 + 0x40)) {
LAB_0015a103:
      uVar1 = 3;
      if (((dVar2 < *(double *)(param_4 + 0x58)) && (uVar1 = 2, *(double *)(param_4 + 0x50) < dVar2)
          ) && (uVar1 = 4, dVar2 <= *(double *)(param_4 + 0x48))) {
        *param_3 = 1;
        *(undefined8 *)(param_3 + 8) = 0x3ff0000000000000;
        return;
      }
      goto LAB_0015a0e3;
    }
  }
  uVar1 = 0;
LAB_0015a0e3:
  *param_3 = uVar1;
  *(undefined8 *)(param_3 + 8) = 0x3ff0000000000000;
  return;
}




// ELF address 0x000000000005b3e0; strategy_comm3::signal_trigger::dynamic_threshold

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm3::signal_trigger::dynamic_threshold */

void __rustcall
strategy_comm3::signal_trigger::dynamic_threshold
          (double param_1,double param_2,double param_3,double param_4,double *param_5,
          double *param_6)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  
  if ((((0.0 <= param_2) && (0.0 <= param_3)) && (param_2 <= param_1)) &&
     (DAT_00117260 < (double)(_DAT_00117310 & (ulong)param_4))) {
    dVar1 = param_3 - param_2;
    if (param_3 - param_2 <= DAT_001171e0) {
      dVar1 = DAT_001171e0;
    }
    dVar1 = (param_1 - param_2) / dVar1;
    if (DAT_001171f8 <= dVar1) {
      dVar1 = DAT_001171f8;
    }
    dVar4 = (double)((ulong)(param_4 * dVar1) & _DAT_00117310);
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




// ELF address 0x000000000005ae70; _ZN14strategy_comm314signal_trigger17enum_rate_counter17h905b0f882511e003E.llvm.5776159170460620602

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm3::signal_trigger::enum_rate_counter */

ulong __rustcall strategy_comm3::signal_trigger::enum_rate_counter(double param_1,long *param_2)

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
      (*(code *)PTR___rust_dealloc_001dcef0)(param_2[1],*param_2,1);
    }
    goto LAB_0015b36c;
  }
  local_98 = param_1;
  uStack_90 = in_XMM0_Qb;
  pauVar9 = (undefined1 (*) [16])__tls_get_addr(&PTR_001dd258);
  if (pauVar9[1][0] == '\x01') {
    local_a8 = *pauVar9;
  }
  else {
                    /* try { // try from 0015b380 to 0015b385 has its CatchHandler @ 0015b397 */
    local_a8 = (*(code *)PTR_hashmap_random_keys_001dd268)();
    *pauVar9 = local_a8;
    pauVar9[1][0] = 1;
  }
  *(long *)*pauVar9 = local_a8._0_8_ + 1;
  local_b8 = _DAT_001d7c30;
  lStack_b0 = _UNK_001d7c38;
  local_c8 = (undefined1 (*) [16])
             PTR_anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263_001d7c20;
  uStack_c0 = _UNK_001d7c28;
  pcVar25 = (char *)param_2[1];
  pcVar1 = pcVar25 + lVar3;
  local_68 = pcVar25;
  do {
    cVar14 = *pcVar25;
    local_60 = CONCAT71(local_60._1_7_,cVar14);
                    /* try { // try from 0015b02b to 0015b0a5 has its CatchHandler @ 0015b39c */
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
          goto joined_r0x0015af94;
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
joined_r0x0015af94:
  } while (pcVar25 != pcVar1);
  if (uStack_c0 == 0) {
    uVar13 = 0;
    if (lStack_b0 != 0) goto LAB_0015b11b;
LAB_0015b2a6:
    dVar34 = 0.0;
    dVar33 = 0.0;
    uVar16 = 4;
    if (uVar17 != 0 && uStack_c0 != 0) {
      (*(code *)PTR___rust_dealloc_001dcef0)();
      dVar34 = 0.0;
      dVar33 = 0.0;
    }
  }
  else {
    uVar17 = uStack_c0 * 0x11 + 0x21;
    pauVar9 = local_c8 + (-1 - uStack_c0);
    uVar13 = 0x10;
    if (lStack_b0 == 0) goto LAB_0015b2a6;
LAB_0015b11b:
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
      (*(code *)PTR___rust_dealloc_001dcef0)(pauVar9,uVar17,uVar13);
    }
    auVar29._8_4_ = (int)(uVar21 >> 0x20);
    auVar29._0_8_ = uVar21;
    auVar29._12_4_ = _UNK_00117474;
    dVar33 = auVar29._8_8_ - _UNK_00117338;
    dVar34 = dVar33 + ((double)CONCAT44(_s__00117470,(int)uVar21) - _s__00117330);
  }
  dVar34 = dVar34 / (double)lVar3;
  uVar17 = 4;
  if (local_98 < dVar34) {
    uVar17 = uVar16 & 0xff;
  }
  local_98 = (double)(-(ulong)(local_98 < dVar34) & (ulong)dVar34);
  uStack_90 = uStack_90 & (ulong)dVar33;
  if (*param_2 != 0) {
    (*(code *)PTR___rust_dealloc_001dcef0)(local_68,*param_2,1);
  }
LAB_0015b36c:
  return uVar17 & 0xffffffff;
}




// ELF address 0x0000000000059a80; strategy_comm3::signal_trigger::TsQuantileCalculator::update

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm3::signal_trigger::TsQuantileCalculator::update */

void __rustcall
strategy_comm3::signal_trigger::TsQuantileCalculator::update
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
    param_4 = &PTR_anon_2e1bd4dd84132b12ad5b1a4972b4d8e8_0_llvm_5776159170460620602_001d7bc0;
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
        if (lVar7 == 0) goto LAB_00159b93;
        dVar17 = *pdVar6;
        dVar18 = pdVar6[1];
        param_4 = ppuVar13;
        if (param_2 <= dVar17) {
          if (param_2 < dVar17) goto LAB_00159b93;
LAB_00159b36:
          cVar10 = ((ulong)dVar16 >= (ulong)dVar18 && dVar16 != dVar18) -
                   ((ulong)dVar16 < (ulong)dVar18);
        }
        else {
          cVar10 = '\x01';
          if (param_2 < dVar17) goto LAB_00159b36;
        }
        pdVar6 = pdVar6 + 2;
        lVar7 = lVar7 + -0x10;
        ppuVar13 = (undefined **)((long)ppuVar13 + 1);
      } while (cVar10 == '\x01');
      if (cVar10 == '\0') goto LAB_00159be6;
LAB_00159b93:
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
LAB_00159be6:
  param_3[8] = param_3[8] + 1;
  dVar16 = (double)param_3[9] + param_2;
  param_3[9] = (ulong)dVar16;
  uVar9 = param_3[10] + 1;
  param_3[10] = uVar9;
  auVar20._8_4_ = (int)(uVar9 >> 0x20);
  auVar20._0_8_ = uVar9;
  auVar20._12_4_ = _UNK_00117474;
  param_3[0xb] = (ulong)(dVar16 / ((auVar20._8_8_ - _UNK_00117338) +
                                  ((double)CONCAT44(_s__00117470,(int)uVar9) - _s__00117330)));
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
            if (lVar7 == 0) goto joined_r0x00159dc8;
            dVar1 = *pdVar5;
            dVar4 = pdVar5[1];
            if (dVar17 <= dVar1) {
              uVar12 = uVar8;
              if (dVar17 < dVar1) goto joined_r0x00159dc8;
LAB_00159d56:
              cVar10 = ((ulong)dVar18 >= (ulong)dVar4 && dVar18 != dVar4) -
                       ((ulong)dVar18 < (ulong)dVar4);
            }
            else {
              cVar10 = '\x01';
              if (dVar17 < dVar1) goto LAB_00159d56;
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
joined_r0x00159dc8:
          if (local_78 == 0.0) break;
          local_78 = (double)((long)local_78 - 1);
          local_80 = (double *)local_80[uVar12 + 0x18];
        } while( true );
      }
      dVar16 = dVar16 - dVar17;
      param_3[9] = (ulong)dVar16;
      dVar18 = 0.0;
      if (uVar9 == 0) {
LAB_00159c70:
        uVar9 = 0;
      }
      else {
        uVar9 = uVar9 - 1;
        param_3[10] = uVar9;
        if (uVar9 == 0) goto LAB_00159c70;
        auVar19._8_4_ = (int)(uVar9 >> 0x20);
        auVar19._0_8_ = uVar9;
        auVar19._12_4_ = _UNK_00117474;
        dVar18 = dVar16 / ((auVar19._8_8_ - _UNK_00117338) +
                          ((double)CONCAT44(_s__00117470,(int)uVar9) - _s__00117330));
      }
      param_3[0xb] = (ulong)dVar18;
      dVar18 = _DAT_00117218;
      param_3[0xc] = (ulong)((double)param_3[0xc] - dVar17 * dVar17);
      param_3[(ulong)(dVar17 <= dVar18) + 0xe] =
           (ulong)((double)param_3[(ulong)(dVar17 <= dVar18) + 0xe] - dVar17);
      uVar8 = param_3[3];
    } while (uVar8 != 0);
  }
  return;
}




// ELF address 0x0000000000060dc0; strategy_comm3::vol_spread_ratio::VolSpreadRatio::update

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm3::vol_spread_ratio::VolSpreadRatio::update */

ulong __rustcall
strategy_comm3::vol_spread_ratio::VolSpreadRatio::update
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
  
  dVar11 = DAT_00117250 * (param_2 + param_3);
  dVar9 = (double)(*(code *)PTR_round_001dd2d0)
                            (((param_3 - param_2) / (param_2 + param_3)) * _DAT_00117268);
  uVar4 = *param_4;
  uVar1 = param_4[3];
  if (uVar1 == uVar4) {
    alloc::collections::vec_deque::VecDeque<T,A>::grow
              (param_4,anon_7e054b90e0f64601639b7d9b537b74f4_43_llvm_8547773417852952172);
    uVar4 = *param_4;
    uVar1 = param_4[3];
  }
  dVar9 = dVar9 / DAT_00117238;
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
    if ((double)param_4[0x29] * DAT_00117250 <= param_1 - *(double *)(uVar4 + lVar2)) {
      dVar9 = *(double *)(lVar2 + uVar4 + 8);
      if (dVar9 <= 0.0) {
        return 0;
      }
      dVar9 = (double)(*(code *)PTR_round_001dd2d0)
                                ((*(double *)(uVar4 + 8 + (uVar5 - uVar6) * 0x10) / dVar9 +
                                 _s__00117180) * _DAT_00117268);
      signal_trigger::TsQuantileCalculator::update(param_1,dVar9 / DAT_00117238,param_4 + 5);
      uVar4 = param_4[0xf];
      uVar1 = 1;
      if (1 < uVar4) {
        uVar1 = uVar4;
      }
      auVar10._8_4_ = (int)(uVar1 >> 0x20);
      auVar10._0_8_ = uVar1;
      auVar10._12_4_ = _UNK_00117474;
      dVar9 = (double)param_4[0x11] /
              ((auVar10._8_8_ - _UNK_00117338) +
              ((double)CONCAT44(_s__00117470,(int)uVar1) - _s__00117330)) -
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




// ELF address 0x0000000000039540; strategy_comm3::live_pending_counts

/* strategy_comm3::live_pending_counts */

undefined1  [16] __rustcall
strategy_comm3::live_pending_counts
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
  
  (*(code *)PTR_pending_orders_001dcfb0)(&local_48,param_1,param_2,param_3);
                    /* try { // try from 00139577 to 0013958a has its CatchHandler @ 00139a89 */
  (*(code *)PTR_cancel_pending_ids_001dcfc8)(&local_60,param_1,param_2,param_3);
  lVar7 = local_50;
  lVar17 = local_58;
  puVar8 = PTR___rust_dealloc_001dcef0;
  plVar14 = local_40 + local_38 * 0xb;
  if (local_38 == 0) {
    local_c0 = 0;
    lVar12 = 0;
    plVar15 = local_40;
LAB_001398fa:
    puVar8 = PTR___rust_dealloc_001dcef0;
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
LAB_00139637:
      do {
        plVar15 = plVar10 + 0xb;
        lVar2 = *plVar10;
        if (lVar2 == -0x8000000000000000) goto LAB_001398fa;
        lVar3 = plVar10[1];
        lVar4 = plVar10[2];
        lVar5 = plVar10[3];
        lVar16 = plVar10[4];
        bVar1 = *(byte *)(plVar10 + 10);
        lVar13 = 0;
        do {
          plVar10 = plVar15;
          if ((*(long *)(param_4 + 0x10 + lVar13) == lVar4) &&
             (iVar9 = (*(code *)PTR_bcmp_001dcfa8)
                                (*(undefined8 *)(param_4 + 8 + lVar13),lVar3,lVar4), iVar9 == 0))
          goto LAB_001396f7;
          lVar13 = lVar13 + 0x18;
        } while (param_5 * 0x18 != lVar13);
        if (lVar7 != 0) {
          lVar13 = 0;
          do {
            if ((*(long *)(lVar17 + 0x10 + lVar13) == lVar4) &&
               (iVar9 = (*(code *)PTR_bcmp_001dcfa8)
                                  (*(undefined8 *)(lVar17 + 8 + lVar13),lVar3,lVar4), iVar9 == 0))
            goto LAB_001396f7;
            lVar13 = lVar13 + 0x18;
          } while (lVar6 != lVar13);
        }
        if (lVar2 != 0) {
          (*(code *)PTR___rust_dealloc_001dcef0)(lVar3,lVar2,1);
        }
        if (lVar5 != 0) {
          (*(code *)PTR___rust_dealloc_001dcef0)(lVar16,lVar5,1);
        }
        lVar12 = lVar12 + (ulong)bVar1;
        local_c0 = local_c0 + (ulong)(bVar1 ^ 1);
      } while (plVar15 != plVar14);
      goto LAB_001399f6;
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
LAB_001397f0:
      do {
        plVar15 = plVar10 + 0xb;
        lVar6 = *plVar10;
        if (lVar6 == -0x8000000000000000) goto LAB_001398fa;
        lVar2 = plVar10[1];
        lVar3 = plVar10[2];
        lVar4 = plVar10[3];
        lVar5 = plVar10[4];
        bVar1 = *(byte *)(plVar10 + 10);
        lVar16 = 0;
        do {
          plVar10 = plVar15;
          if ((*(long *)(lVar17 + 0x10 + lVar16) == lVar3) &&
             (iVar9 = (*(code *)PTR_bcmp_001dcfa8)(*(undefined8 *)(lVar17 + 8 + lVar16),lVar2,lVar3)
             , iVar9 == 0)) {
            if (lVar6 != 0) {
              (*(code *)PTR___rust_dealloc_001dcef0)(lVar2,lVar6,1);
            }
            if (lVar4 != 0) {
              (*(code *)PTR___rust_dealloc_001dcef0)(lVar5,lVar4,1);
            }
            if (plVar15 != plVar14) goto LAB_001397f0;
            goto LAB_001398fa;
          }
          lVar16 = lVar16 + 0x18;
        } while (lVar7 != lVar16);
        if (lVar6 != 0) {
          (*(code *)PTR___rust_dealloc_001dcef0)(lVar2,lVar6,1);
        }
        if (lVar4 != 0) {
          (*(code *)PTR___rust_dealloc_001dcef0)(lVar5,lVar4,1);
        }
        lVar12 = lVar12 + (ulong)bVar1;
        local_c0 = local_c0 + (ulong)(bVar1 ^ 1);
      } while (plVar15 != plVar14);
    }
  }
LAB_001399f6:
  if (local_48 != 0) {
    (*(code *)PTR___rust_dealloc_001dcef0)(local_40,local_48 * 0x58,8);
  }
  puVar8 = PTR___rust_dealloc_001dcef0;
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
    (*(code *)PTR___rust_dealloc_001dcef0)(local_58,local_60 * 0x18,8);
  }
  auVar19._8_8_ = local_c0;
  auVar19._0_8_ = lVar12;
  return auVar19;
LAB_001396f7:
  if (lVar2 != 0) {
    (*(code *)PTR___rust_dealloc_001dcef0)(lVar3,lVar2,1);
  }
  if (lVar5 != 0) {
    (*(code *)PTR___rust_dealloc_001dcef0)(lVar16,lVar5,1);
  }
  if (plVar15 == plVar14) goto LAB_001398fa;
  goto LAB_00139637;
}




// ELF address 0x0000000000038ce0; strategy_comm3::cancel_order_use_range

/* strategy_comm3::cancel_order_use_range */

long __rustcall
strategy_comm3::cancel_order_use_range
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
  (*(code *)PTR_pending_orders_001dcfb0)(&local_48,param_3,param_4,param_5);
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
LAB_00138db0:
    uVar14 = (long)plVar9 - (long)plVar8;
    plVar12 = plVar8;
    do {
      lVar2 = *plVar12;
      lVar7 = plVar12[1];
      lVar13 = plVar12[3];
      local_108 = plVar12[4];
      if (*(byte *)(plVar12 + 10) == local_109) {
        if (lVar2 != -0x8000000000000000) goto LAB_00138e40;
      }
      else {
        if (lVar2 != 0) {
          (*(code *)PTR___rust_dealloc_001dcef0)(lVar7,lVar2,1);
        }
        if (lVar13 != 0) {
          (*(code *)PTR___rust_dealloc_001dcef0)(local_108,lVar13,1);
        }
      }
      plVar12 = plVar12 + 0xb;
      uVar14 = uVar14 - 0x58;
      local_48 = local_d8;
      local_40 = local_e0;
      if (plVar12 == local_e8) break;
    } while( true );
  }
LAB_00138fa8:
  local_c0 = plVar8;
  plVar8 = local_f0;
  if (local_48 != 0) {
    (*(code *)PTR___rust_dealloc_001dcef0)(local_40,local_48 * 0x58,8);
  }
  (*(code *)PTR_pending_orders_001dcfb0)(&local_60,local_90,local_88,local_80);
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
LAB_0013907a:
    uVar14 = (long)local_d0 - (long)plVar9;
    plVar12 = plVar9;
    do {
      lVar2 = *plVar12;
      lVar7 = plVar12[1];
      local_108 = plVar12[3];
      local_e8 = (long *)plVar12[4];
      bVar1 = *(byte *)(plVar12 + 10);
      if (bVar1 == local_10a) {
        if (lVar2 != -0x8000000000000000) goto LAB_00139110;
      }
      else {
        if (lVar2 != 0) {
          (*(code *)PTR___rust_dealloc_001dcef0)(lVar7,lVar2,1);
        }
        if (local_108 != 0) {
          (*(code *)PTR___rust_dealloc_001dcef0)(local_e8,local_108,1);
        }
      }
      plVar12 = plVar12 + 0xb;
      uVar14 = uVar14 - 0x58;
      local_60 = local_d8;
      local_58 = local_e0;
      if (plVar12 == local_f8) break;
    } while( true );
  }
LAB_001392da:
  local_c0 = plVar9;
  if (local_60 != 0) {
    (*(code *)PTR___rust_dealloc_001dcef0)(local_58,local_60 * 0x58,8);
  }
  return 0;
LAB_00138e40:
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
         (iVar3 = (*(code *)PTR_bcmp_001dcfa8)(*(undefined8 *)(lVar5 + 8 + lVar10),lVar7),
         lVar13 = local_100, lVar4 = local_98, plVar8 = local_f8, iVar3 == 0)) {
        if (lVar2 != 0) {
          (*(code *)PTR___rust_dealloc_001dcef0)(lVar7,lVar2,1);
        }
        goto LAB_00138f5e;
      }
      lVar10 = lVar10 + 0x18;
    } while (lVar4 != lVar10);
  }
                    /* try { // try from 00138ef0 to 00138f13 has its CatchHandler @ 001394df */
  lVar5 = (*(code *)PTR_cancel_order_001dcfb8)(local_90,local_88,local_80,lVar7,plVar8);
  plVar8 = local_f0;
  if (lVar5 != 0) {
    plVar8 = plVar12 + 0xb;
    local_f8 = (long *)lVar5;
    local_c0 = plVar8;
    if (lVar2 != 0) {
      (*(code *)PTR___rust_dealloc_001dcef0)(lVar7,lVar2,1);
    }
    if (lVar13 != 0) {
      (*(code *)PTR___rust_dealloc_001dcef0)(local_108,lVar13,1);
    }
    if (plVar8 != local_e8) {
      plVar12 = plVar12 + 0xf;
      uVar14 = uVar14 / 0x58;
      do {
        if (plVar12[-4] != 0) {
          (*(code *)PTR___rust_dealloc_001dcef0)(plVar12[-3],plVar12[-4],1);
        }
        if (plVar12[-1] != 0) {
          (*(code *)PTR___rust_dealloc_001dcef0)(*plVar12,plVar12[-1],1);
        }
        plVar12 = plVar12 + 0xb;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    if (local_d8 == 0) {
      return (long)local_f8;
    }
    (*(code *)PTR___rust_dealloc_001dcef0)(local_e0,local_d8 * 0x58,8);
    return (long)local_f8;
  }
  lVar5 = local_f0[2];
  if (lVar5 == *local_f0) {
                    /* try { // try from 00138f2c to 00138f3b has its CatchHandler @ 0013948a */
    (*(code *)PTR_grow_one_001dcfc0)(local_f0,&PTR_s_strategies_comm_strategy_strateg_001d7040);
  }
  lVar4 = plVar8[1];
  *(long *)(lVar4 + lVar5 * 0x18) = lVar2;
  *(long *)(lVar4 + 8 + lVar5 * 0x18) = lVar7;
  *(long **)(lVar4 + 0x10 + lVar5 * 0x18) = local_f8;
  plVar8[2] = lVar5 + 1;
LAB_00138f5e:
  plVar9 = local_d0;
  if (lVar13 != 0) {
    (*(code *)PTR___rust_dealloc_001dcef0)(local_108,lVar13,1);
  }
  plVar8 = plVar12 + 0xb;
  if (plVar8 == local_e8) goto code_r0x00138f8d;
  goto LAB_00138db0;
code_r0x00138f8d:
  local_48 = local_d8;
  local_40 = local_e0;
  plVar8 = plVar12 + 0xb;
  goto LAB_00138fa8;
LAB_00139110:
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
         (iVar3 = (*(code *)PTR_bcmp_001dcfa8)
                            (*(undefined8 *)(lVar5 + 8 + (long)dVar11),lVar7,lVar13),
         dVar6 = local_a0, lVar5 = local_98, lVar7 = local_100, iVar3 == 0)) {
        plVar8 = local_f0;
        if (lVar2 != 0) {
          (*(code *)PTR___rust_dealloc_001dcef0)(local_100,lVar2,1);
          plVar8 = local_f0;
        }
        goto joined_r0x001391b7;
      }
      dVar11 = (double)((long)dVar11 + 0x18);
    } while (dVar6 != dVar11);
  }
  plVar8 = local_f0;
  if ((bVar1 & 1) == 0) {
    if (local_68 < local_70) goto LAB_0013922a;
  }
  else if (local_70 < local_78) {
LAB_0013922a:
                    /* try { // try from 0013922a to 0013924d has its CatchHandler @ 0013948c */
    lVar7 = (*(code *)PTR_cancel_order_001dcfb8)(local_90,local_88,local_80,lVar7,lVar13);
    if (lVar7 != 0) {
      plVar8 = plVar12 + 0xb;
      local_c0 = plVar8;
      if (lVar2 != 0) {
        (*(code *)PTR___rust_dealloc_001dcef0)(local_100,lVar2,1);
      }
      if (local_108 != 0) {
        (*(code *)PTR___rust_dealloc_001dcef0)(local_e8,local_108,1);
      }
      if (plVar8 != local_f8) {
        plVar12 = plVar12 + 0xf;
        uVar14 = uVar14 / 0x58;
        do {
          if (plVar12[-4] != 0) {
            (*(code *)PTR___rust_dealloc_001dcef0)(plVar12[-3],plVar12[-4],1);
          }
          if (plVar12[-1] != 0) {
            (*(code *)PTR___rust_dealloc_001dcef0)(*plVar12,plVar12[-1],1);
          }
          plVar12 = plVar12 + 0xb;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
      if (local_d8 == 0) {
        return lVar7;
      }
      (*(code *)PTR___rust_dealloc_001dcef0)(local_e0,local_d8 * 0x58,8);
      return lVar7;
    }
    lVar7 = plVar8[2];
    if (lVar7 == *plVar8) {
                    /* try { // try from 00139261 to 00139270 has its CatchHandler @ 00139488 */
      (*(code *)PTR_grow_one_001dcfc0)(plVar8,&PTR_s_strategies_comm_strategy_strateg_001d7058);
    }
    lVar5 = plVar8[1];
    *(long *)(lVar5 + lVar7 * 0x18) = lVar2;
    *(long *)(lVar5 + 8 + lVar7 * 0x18) = local_100;
    *(long *)(lVar5 + 0x10 + lVar7 * 0x18) = lVar13;
    plVar8[2] = lVar7 + 1;
    goto joined_r0x001391b7;
  }
  if (lVar2 != 0) {
    (*(code *)PTR___rust_dealloc_001dcef0)(lVar7,lVar2,1);
  }
joined_r0x001391b7:
  if (local_108 != 0) {
    (*(code *)PTR___rust_dealloc_001dcef0)(local_e8,local_108,1);
  }
  plVar9 = plVar12 + 0xb;
  if (plVar9 == local_f8) goto code_r0x001392c4;
  goto LAB_0013907a;
code_r0x001392c4:
  local_60 = local_d8;
  local_58 = local_e0;
  plVar9 = plVar12 + 0xb;
  goto LAB_001392da;
}




// ELF address 0x000000000003d440; strategy_comm3::place

/* strategy_comm3::place */

void __rustcall strategy_comm3::place(double param_1,undefined8 param_2,undefined8 param_3)

{
  if (0.0 < param_1) {
    (*(code *)PTR_place_order_iap_with_target_001dd0e0)(param_2,param_3,1);
    return;
  }
  (*(code *)PTR_place_order_iap_001dd0e8)();
  return;
}




// ELF address 0x0000000000039ab0; <strategy_comm3::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin

/* _<strategy_comm3::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin */

undefined8 __rustcall
_<strategy_comm3::StrategyComm3_as_future_backtest_sdk::plugin::StrategyPlugin>::on_begin
          (long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long local_3e8;
  long local_3e0;
  ulong local_3d8;
  long local_3d0;
  ulong local_3c8;
  undefined4 *local_3c0;
  undefined *local_3b8;
  long *local_3b0;
  code *local_3a8;
  undefined **local_3a0;
  undefined8 local_398;
  undefined4 **local_390;
  undefined8 local_388;
  undefined8 local_380;
  undefined1 local_370 [24];
  undefined4 local_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 local_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  long local_318;
  long lStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  long local_1c8;
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
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  long local_180;
  long lStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  
  (*(code *)PTR_custom_config_001dcfd0)(&local_3e8);
                    /* try { // try from 00139ad9 to 00139b07 has its CatchHandler @ 00139dc3 */
  _<toml::de::Deserializer_as_serde_core::de::Deserializer>::deserialize_struct
            (&local_1c8,local_3e0,local_3d8,"Comm3Params",0xb,
             &PTR_s_signal_modepv1_alphacost_alphasi_001d7070,0x28);
  if (local_1c8 == 2) {
    local_308 = local_170;
    uStack_300 = uStack_168;
    local_318 = local_180;
    lStack_310 = lStack_178;
    local_328 = local_190;
    uStack_324 = uStack_18c;
    uStack_320 = uStack_188;
    uStack_31c = uStack_184;
    local_338 = local_1a0;
    uStack_334 = uStack_19c;
    uStack_330 = uStack_198;
    uStack_32c = uStack_194;
    local_348 = local_1b0;
    uStack_344 = uStack_1ac;
    uStack_340 = uStack_1a8;
    uStack_33c = uStack_1a4;
    local_358 = local_1c0;
    uStack_354 = uStack_1bc;
    uStack_350 = uStack_1b8;
    uStack_34c = uStack_1b4;
    local_3c8 = 200;
    if (local_3d8 < 200) {
      local_3c8 = local_3d8;
    }
    if ((200 < local_3d8) && (*(char *)(local_3e0 + local_3c8) < -0x40)) {
                    /* try { // try from 00139dac to 00139dc0 has its CatchHandler @ 00139dc8 */
      (*(code *)PTR_slice_error_fail_001dcfe8)
                (local_3e0,local_3d8,0,local_3c8,&PTR_s_strategies_comm_strategy_strateg_001d72f0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    local_3d0 = local_3e0;
    local_3c0 = &local_358;
    local_3b8 = PTR_fmt_001dcfd8;
    local_3b0 = &local_3d0;
    local_3a8 = _<&T_as_core::fmt::Display>::fmt;
    local_3a0 = &PTR_s__custom__parse_error____Raw__001d7308;
    local_398 = 2;
    local_380 = 0;
    local_390 = &local_3c0;
    local_388 = 2;
                    /* try { // try from 00139bef to 00139c0e has its CatchHandler @ 00139dc8 */
    (*(code *)PTR_format_inner_001dcfe0)(local_370,&local_3a0);
    uVar4 = anyhow::error::_<impl_anyhow::Error>::msg(local_370);
    if (CONCAT44(uStack_33c,uStack_340) != 0) {
      (*(code *)PTR___rust_dealloc_001dcef0)
                (CONCAT44(uStack_334,local_338),CONCAT44(uStack_33c,uStack_340),1);
    }
    if (lStack_310 != 0) {
      (*(code *)PTR___rust_dealloc_001dcef0)(local_308,lStack_310,1);
    }
    puVar3 = PTR___rust_dealloc_001dcef0;
    lVar2 = CONCAT44(uStack_31c,uStack_320);
    if (local_318 != 0) {
      puVar6 = (undefined8 *)(lVar2 + 8);
      lVar5 = local_318;
      do {
        if (puVar6[-1] != 0) {
          (*(code *)puVar3)(*puVar6,puVar6[-1],1);
        }
        puVar6 = puVar6 + 3;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    if (CONCAT44(uStack_324,local_328) != 0) {
      (*(code *)PTR___rust_dealloc_001dcef0)(lVar2,CONCAT44(uStack_324,local_328) * 0x18,8);
    }
  }
  else {
    (*(code *)PTR_memcpy_001dcf50)(&local_358,&uStack_1b8,0x188);
    if ((int)*param_1 != 2) {
      if (param_1[8] != 0) {
        (*(code *)PTR___rust_dealloc_001dcef0)(param_1[9],param_1[8],1);
      }
      if (param_1[0xb] != 0) {
        (*(code *)PTR___rust_dealloc_001dcef0)(param_1[0xc],param_1[0xb],1);
      }
      if (param_1[0xe] != 0) {
        (*(code *)PTR___rust_dealloc_001dcef0)(param_1[0xf],param_1[0xe] << 3,8);
      }
      if (param_1[0x11] != 0) {
        (*(code *)PTR___rust_dealloc_001dcef0)(param_1[0x12],param_1[0x11],1);
      }
    }
    *param_1 = local_1c8;
    param_1[1] = CONCAT44(uStack_1bc,local_1c0);
    (*(code *)PTR_memcpy_001dcf50)(param_1 + 2,&local_358,0x188);
    uVar4 = 0;
  }
  if (local_3e8 != 0) {
    (*(code *)PTR___rust_dealloc_001dcef0)(local_3e0,local_3e8,1);
  }
  return uVar4;
}




// ELF address 0x000000000003d140; <strategy_comm3::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth

/* _<strategy_comm3::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth */

undefined8 __rustcall
_<strategy_comm3::StrategyComm3_as_future_backtest_sdk::plugin::StrategyPlugin>::on_depth
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
  
  if (*(long *)(param_1 + 0x1e0) != 0) {
    uVar11 = core::hash::BuildHasher::hash_one(param_1 + 0x1e8);
    puVar8 = PTR_bcmp_001dcfa8;
    lVar3 = *(long *)(param_1 + 0x1c8);
    uVar4 = *(ulong *)(param_1 + 0x1d0);
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
          uVar12 = core::hash::BuildHasher::hash_one(param_1 + 0x1e8,param_2 + 0x20);
          hashbrown::raw::RawTable<T,A>::remove_entry
                    (&lStack_60,param_1 + 0x1c8,uVar12,param_2 + 0x20);
          if (lStack_60 == 0) {
            return 0;
          }
          (*(code *)PTR___rust_dealloc_001dcef0)(uStack_58,lStack_60,1);
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




// ELF address 0x000000000003d320; <strategy_comm3::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_finish

/* _<strategy_comm3::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_finish */

undefined8 __rustcall
_<strategy_comm3::StrategyComm3_as_future_backtest_sdk::plugin::StrategyPlugin>::on_finish
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
  
  lVar6 = (*(code *)PTR_para_001dcff0)(param_2);
  uVar2 = *(undefined2 *)(lVar6 + 0x34);
  uVar7 = *(undefined8 *)(lVar6 + 0x28);
  local_48 = *(undefined4 *)(lVar6 + 0x18);
  uStack_44 = *(undefined4 *)(lVar6 + 0x1c);
  uStack_40 = *(undefined4 *)(lVar6 + 0x20);
  uStack_3c = *(undefined4 *)(lVar6 + 0x24);
  uVar3 = *(undefined4 *)(lVar6 + 0x30);
  uVar1 = *(undefined1 *)(lVar6 + 0x30);
  _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone
            (&local_80,lVar6,anon_d454c997cf4fb3d184ccf491cfa91eb4_65_llvm_253228783764338055);
  local_68 = CONCAT44(uStack_44,local_48);
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_58 = uVar7;
  local_50 = uVar3;
  local_4c = uVar2;
                    /* try { // try from 0013d38e to 0013d3a6 has its CatchHandler @ 0013d423 */
  uVar5 = (*(code *)PTR_is_night_001dd0d8)(param_2);
  uVar7 = (*(code *)PTR_all_in_001dd030)(param_2,uVar5,uVar1);
  puVar4 = PTR___rust_dealloc_001dcef0;
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
    (*(code *)PTR___rust_dealloc_001dcef0)(local_78,local_80 * 0x18,8);
  }
  return uVar7;
}




// ELF address 0x0000000000039e00; <strategy_comm3::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _<strategy_comm3::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal */

double *** __rustcall
_<strategy_comm3::StrategyComm3_as_future_backtest_sdk::plugin::StrategyPlugin>::on_signal
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
  ulong uVar11;
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
  double extraout_XMM0_Qa;
  double dVar23;
  double *pdVar24;
  double *pdVar25;
  double extraout_XMM0_Qb;
  double extraout_XMM0_Qb_00;
  double extraout_XMM0_Qb_01;
  double extraout_XMM0_Qb_02;
  double *extraout_XMM1_Qa;
  double extraout_XMM1_Qb;
  double dVar26;
  double *pdVar27;
  double *pdVar28;
  double *pdVar29;
  double dVar30;
  undefined1 auVar31 [16];
  char local_8b9;
  undefined8 local_8b8;
  undefined1 uStack_8aa;
  char cStack_8a9;
  double ***local_8a8;
  double dStack_8a0;
  uint local_898;
  undefined4 uStack_894;
  double dStack_890;
  double local_888;
  undefined8 uStack_880;
  double local_870;
  undefined8 local_868;
  undefined8 local_860;
  char local_852;
  char local_851;
  double **local_850;
  double *local_848;
  double dStack_840;
  double ***local_838;
  undefined8 uStack_830;
  double *pdStack_820;
  double *local_818;
  double *pdStack_810;
  double *local_808;
  double dStack_800;
  double dStack_7f8;
  double *local_7f0;
  double *local_7e8;
  double ***pppdStack_7e0;
  double **local_7d8;
  undefined1 *puStack_7d0;
  double *local_7c8;
  undefined *puStack_7c0;
  double *pdStack_7b8;
  code *pcStack_7b0;
  double dStack_7a0;
  double *local_798;
  double dStack_790;
  double local_788;
  double *pdStack_780;
  char *pcStack_778;
  undefined8 uStack_770;
  double local_768;
  double dStack_760;
  double *local_758;
  double ***pppdStack_750;
  double **local_748;
  undefined1 *puStack_740;
  double *local_738;
  undefined *puStack_730;
  double *pdStack_728;
  code *pcStack_720;
  double *pdStack_718;
  undefined *puStack_710;
  char **ppcStack_708;
  code *pcStack_700;
  double **ppdStack_6f8;
  code *pcStack_6f0;
  double local_650;
  double local_648;
  undefined4 local_63c;
  double *local_638;
  double ***pppdStack_630;
  double **ppdStack_628;
  double *pdStack_620;
  double ***pppdStack_618;
  double **ppdStack_610;
  double dStack_600;
  undefined8 uStack_5f8;
  double *local_5e8;
  double dStack_5e0;
  double local_5d8;
  double dStack_5d0;
  long local_5c0;
  double ***local_5b8;
  long local_5b0;
  long local_5a8;
  undefined8 local_5a0;
  double local_590 [2];
  double local_580;
  double local_578;
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
  double *pdStack_4b8;
  double *local_4b0;
  double dStack_4a8;
  double *local_4a0;
  double dStack_498;
  double local_490;
  double dStack_488;
  double local_480;
  double dStack_478;
  double local_470;
  double dStack_468;
  double *local_460;
  double dStack_458;
  double local_450;
  double dStack_448;
  double local_440;
  double dStack_438;
  double local_430;
  double dStack_428;
  double local_420;
  double dStack_418;
  double local_410;
  double local_408;
  char local_400;
  char local_3ff;
  double local_3f8;
  undefined8 uStack_3f0;
  double local_3e8;
  undefined8 uStack_3e0;
  double local_3d8;
  undefined8 uStack_3d0;
  double *local_3c8;
  double dStack_3c0;
  double local_3b8;
  double dStack_3b0;
  long local_3a0;
  long *local_398;
  long local_390;
  double ***local_388;
  undefined8 uStack_380;
  double local_378;
  undefined4 local_370;
  char local_36c;
  undefined1 local_36b;
  double local_368;
  double dStack_360;
  double dStack_358;
  double dStack_350;
  double *pdStack_348;
  double dStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  double dStack_320;
  undefined8 uStack_318;
  double *pdStack_310;
  double *pdStack_308;
  double dStack_300;
  double *pdStack_2f8;
  undefined1 uStack_2f0;
  char cStack_2ef;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  double dStack_2d0;
  undefined8 uStack_2c8;
  double ***pppdStack_2c0;
  double *pdStack_2b8;
  double dStack_2b0;
  double *pdStack_2a8;
  undefined1 uStack_2a0;
  byte bStack_29f;
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
  
  lVar8 = (*(code *)PTR_para_001dcff0)(param_3);
  cVar5 = *(char *)(lVar8 + 0x34);
  local_8a8 = *(double ****)(lVar8 + 0x28);
  uVar4 = *(undefined1 *)(lVar8 + 0x35);
  local_838 = *(double ****)(lVar8 + 0x18);
  uStack_830 = *(undefined8 *)(lVar8 + 0x20);
  pppdVar9 = *(double ****)(lVar8 + 0x30);
  _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone
            (&local_3a0,lVar8,anon_d454c997cf4fb3d184ccf491cfa91eb4_65_llvm_253228783764338055);
  local_370 = SUB84(pppdVar9,0);
  local_388 = local_838;
  uStack_380 = uStack_830;
  local_378 = (double)local_8a8;
  local_36c = cVar5;
  local_36b = uVar4;
  if (*(int *)param_1 == 2) {
                    /* try { // try from 0013a7a3 to 0013a7bb has its CatchHandler @ 0013d0c9 */
    (*(code *)PTR_expect_failed_001dd040)
              ("on_begin must be called firston_signal code= score= vol_alpha=",0x1d,
               &PTR_s_strategies_comm_strategy_strateg_001d7340);
    goto LAB_0013a7bc;
  }
                    /* try { // try from 00139ea1 to 00139eb5 has its CatchHandler @ 0013d0c9 */
  (*(code *)PTR_clone_001dcff8)
            (&local_7e8,param_1 + 8,&PTR_s_strategies_comm_strategy_strateg_001d7530);
  local_8a8 = (double ***)param_1[0x14];
  dStack_8a0 = param_1[0x15];
                    /* try { // try from 00139ed4 to 00139ee8 has its CatchHandler @ 0013d0c4 */
  local_888 = param_2;
  local_838 = pppdVar9;
  (*(code *)PTR_clone_001dcff8)
            (&local_158,param_1 + 0xb,&PTR_s_strategies_comm_strategy_strateg_001d7530);
  ppdVar14 = (double **)param_1[0x10];
  uVar11 = (long)ppdVar14 * 8;
  if (0x7ffffffffffffff8 < uVar11 || (ulong)ppdVar14 >> 0x3d != 0) {
    uVar20 = 0;
LAB_00139f1d:
                    /* try { // try from 00139f1d to 00139f2f has its CatchHandler @ 0013d0e1 */
    (*(code *)PTR_handle_error_001dcf88)
              (uVar20,uVar11,anon_a27aab168df1f9cec081ba8be49579d8_8_llvm_10594042000815737515);
LAB_0013a7bc:
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_808 = (double *)param_1[0x16];
  dStack_800 = param_1[0x17];
  dVar23 = param_1[0xf];
  local_8b8 = param_3;
  local_852 = cVar5;
  local_7f0 = param_1;
  if (uVar11 == 0) {
    local_518 = 8;
    local_850 = (double **)0x0;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001dcf10)();
    uVar20 = 8;
    local_518 = (*(code *)PTR___rust_alloc_001dcee8)(uVar11,8);
    local_850 = ppdVar14;
    if (local_518 == 0) goto LAB_00139f1d;
  }
  (*(code *)PTR_memcpy_001dcf50)(local_518,dVar23,uVar11);
  pdVar29 = local_7f0;
  dStack_890 = local_7f0[0x19];
  local_898 = SUB84(local_7f0[0x18],0);
  uStack_894 = (undefined4)((ulong)local_7f0[0x18] >> 0x20);
  local_818 = (double *)local_7f0[0x1a];
  pdStack_810 = (double *)local_7f0[0x1b];
  cVar5 = *(char *)(local_7f0 + 0x32);
  local_848 = (double *)local_7f0[0x1c];
  dStack_840 = local_7f0[0x1d];
  local_798 = (double *)local_7f0[0x1e];
  dStack_790 = local_7f0[0x1f];
  local_5d8 = local_7f0[0x20];
  dStack_5d0 = local_7f0[0x21];
  local_768 = local_7f0[0x22];
  dStack_760 = local_7f0[0x23];
  local_3b8 = local_7f0[0x24];
  dStack_3b0 = local_7f0[0x25];
  local_3c8 = (double *)local_7f0[0x26];
  dStack_3c0 = local_7f0[0x27];
  dVar23 = *local_7f0;
  local_3d8 = local_7f0[1];
  dVar26 = local_7f0[2];
  local_3e8 = local_7f0[3];
  local_3f8 = local_7f0[4];
  local_5e8 = (double *)local_7f0[5];
  local_648 = local_7f0[6];
  local_650 = local_7f0[7];
  local_368 = local_7f0[0x28];
  dStack_360 = local_7f0[0x29];
  local_851 = *(char *)((long)local_7f0 + 0x191);
  local_288 = local_7f0[0x2a];
  dStack_280 = local_7f0[0x2b];
  local_298 = local_7f0[0x2c];
  dStack_290 = local_7f0[0x2d];
                    /* try { // try from 0013a0c1 to 0013a0d5 has its CatchHandler @ 0013d0a0 */
  (*(code *)PTR_clone_001dcff8)
            (&local_758,local_7f0 + 0x11,&PTR_s_strategies_comm_strategy_strateg_001d7530);
  plVar21 = local_398;
  dVar30 = local_888;
  puVar15 = PTR_bcmp_001dcfa8;
  local_550 = local_7e8;
  pppdStack_548 = pppdStack_7e0;
  local_540 = local_7d8;
  local_4f0 = (double)local_8a8;
  dStack_4e8 = dStack_8a0;
  local_538 = CONCAT44(uStack_154,local_158);
  dStack_530 = dStack_150;
  local_528 = CONCAT71(uStack_147,local_148);
  local_4e0 = local_808;
  dStack_4d8 = dStack_800;
  local_520 = local_850;
  local_4d0 = (double)CONCAT44(uStack_894,local_898);
  dStack_4c8 = dStack_890;
  local_4c0 = local_818;
  pdStack_4b8 = pdStack_810;
  local_4b0 = local_848;
  dStack_4a8 = dStack_840;
  local_4a0 = local_798;
  dStack_498 = dStack_790;
  local_490 = local_5d8;
  dStack_488 = dStack_5d0;
  local_480 = local_768;
  dStack_478 = dStack_760;
  local_470 = local_3b8;
  dStack_468 = dStack_3b0;
  local_460 = local_3c8;
  dStack_458 = dStack_3c0;
  local_590[1] = local_3d8;
  local_578 = local_3e8;
  local_570 = local_3f8;
  local_568 = local_5e8;
  local_560 = local_648;
  local_558 = local_650;
  local_450 = local_368;
  dStack_448 = dStack_360;
  local_3ff = local_851;
  local_440 = local_288;
  dStack_438 = dStack_280;
  local_430 = local_298;
  dStack_428 = dStack_290;
  local_508 = local_758;
  pppdStack_500 = pppdStack_750;
  local_4f8 = local_748;
  local_420 = pdVar29[0x2e];
  dStack_418 = pdVar29[0x2f];
  local_410 = pdVar29[0x30];
  local_408 = pdVar29[0x31];
  local_590[0] = dVar23;
  local_580 = dVar26;
  local_510 = ppdVar14;
  local_400 = cVar5;
  if (local_390 != 0) {
    local_898 = (uint)local_838;
    uStack_894 = (undefined4)((ulong)local_838 >> 0x20);
    dStack_890 = 0.0;
    local_808 = (double *)((long)local_888 + 0x48);
    local_8a8 = *(double ****)((long)local_888 + 0x50);
    lVar8 = *(long *)((long)local_888 + 0x58);
    lVar13 = local_390 * 0x18;
    lVar16 = 0;
    do {
      if ((*(long *)((long)plVar21 + lVar16 + 0x10) == lVar8) &&
         (iVar7 = (*(code *)puVar15)(*(undefined8 *)((long)plVar21 + lVar16 + 8),local_8a8,lVar8),
         iVar7 == 0)) {
                    /* try { // try from 0013a368 to 0013a37a has its CatchHandler @ 0013d07b */
        (*(code *)PTR_trade_codes_001dd000)(&local_5c0,local_8b8);
        lVar13 = local_5b0;
        local_838 = local_5b8;
        if (local_5b0 != 0) {
          local_850 = *(double ***)((long)dVar30 + 8);
          lVar16 = *(long *)((long)dVar30 + 0x10);
          lVar2 = local_5b0 * 0x18;
          lVar18 = 0;
          goto LAB_0013a3cd;
        }
        pppdVar9 = (double ***)0x0;
        goto LAB_0013a612;
      }
      lVar16 = lVar16 + 0x18;
    } while (lVar13 != lVar16);
  }
  pppdVar9 = (double ***)0x0;
LAB_0013a4bf:
  if (local_550 != (double *)0x0) {
    (*(code *)PTR___rust_dealloc_001dcef0)(pppdStack_548,local_550,1);
  }
  if (local_538 != 0) {
    (*(code *)PTR___rust_dealloc_001dcef0)(dStack_530,local_538,1);
  }
  if (local_520 != (double **)0x0) {
    (*(code *)PTR___rust_dealloc_001dcef0)(local_518,(long)local_520 << 3,8);
  }
  if (local_508 != (double *)0x0) {
    (*(code *)PTR___rust_dealloc_001dcef0)(pppdStack_500,local_508,1);
  }
  puVar15 = PTR___rust_dealloc_001dcef0;
  if (local_390 != 0) {
    plVar21 = local_398 + 1;
    lVar8 = local_390;
    do {
      if (plVar21[-1] != 0) {
        (*(code *)puVar15)(*plVar21,plVar21[-1],1);
      }
      plVar21 = plVar21 + 3;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  if (local_3a0 != 0) {
    (*(code *)PTR___rust_dealloc_001dcef0)(local_398,local_3a0 * 0x18,8);
  }
  return pppdVar9;
  while (lVar18 = lVar18 + 0x18, lVar2 != lVar18) {
LAB_0013a3cd:
    if ((*(long *)((long)local_838 + lVar18 + 0x10) == lVar16) &&
       (iVar7 = (*(code *)puVar15)(*(undefined8 *)((long)local_838 + lVar18 + 8),local_850,lVar16),
       dVar23 = local_888, uVar20 = local_8b8, iVar7 == 0)) {
      cVar5 = *(char *)((long)local_888 + 0x94);
                    /* try { // try from 0013a405 to 0013a46d has its CatchHandler @ 0013d069 */
      (*(code *)PTR_inst_start_time_sec_001dd008)(local_8b8);
      cVar3 = (*(code *)PTR_is_trade_start_001dd010)(uVar20,cVar5);
      if (cVar3 != '\0') {
        cVar3 = (*(code *)PTR_is_trade_end_001dd018)(uVar20,cVar5);
        if (cVar3 != '\0') {
          if (cVar5 == '\0') {
            if (local_852 != '\0') goto LAB_0013a6e9;
          }
          else if (((ushort)(local_898 >> 0x18) & 1) != 0) {
LAB_0013a6e9:
                    /* try { // try from 0013a6e9 to 0013a704 has its CatchHandler @ 0013d069 */
            pppdVar9 = (double ***)(*(code *)PTR_all_in_001dd030)(uVar20,cVar5,local_898 & 1);
            goto LAB_0013a5ca;
          }
        }
        (*(code *)PTR_clone_001dcff8)
                  (&local_870,dVar23,&PTR_s_strategies_comm_strategy_strateg_001d7358);
                    /* try { // try from 0013a46e to 0013a48a has its CatchHandler @ 0013d005 */
        (*(code *)PTR_clone_001dcff8)
                  (&local_5a8,local_808,&PTR_s_strategies_comm_strategy_strateg_001d7370);
                    /* try { // try from 0013a495 to 0013a4a5 has its CatchHandler @ 0013d000 */
        (*(code *)PTR_depth_001dd020)(&local_758,uVar20,local_868);
        if ((int)local_758 == 2) {
          pppdVar9 = (double ***)0x0;
        }
        else {
          (*(code *)PTR_memcpy_001dcf50)(&local_158,&local_758,0x108);
          local_838 = local_110[0];
          pppdVar9 = (double ***)0x0;
          if ((0.0 < (double)local_110[0]) && (local_808 = local_c0[0], 0.0 < (double)local_c0[0]))
          {
                    /* try { // try from 0013a69d to 0013a6ab has its CatchHandler @ 0013d00a */
            local_850 = (double **)(*(code *)PTR_time_sec_001dd028)(uVar20);
            if ((double)DAT_001171f8 < (double)local_850 - local_118) {
LAB_0013a6c5:
              pppdVar9 = (double ***)0x0;
              goto joined_r0x0013b0e6;
            }
                    /* try { // try from 0013a70d to 0013a774 has its CatchHandler @ 0013d00a */
            auVar31 = (*(code *)PTR_signal_parameter_id_001dd038)(local_8a8,lVar8);
            uVar11 = 0;
            if ((auVar31 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
              uVar11 = auVar31._8_8_ & 0xffffffff;
            }
            local_63c = (undefined4)uVar11;
            if (local_3ff == '\x01') {
              (*(code *)PTR_clone_001dcff8)
                        (&local_638,&local_870,&PTR_s_strategies_comm_strategy_strateg_001d7388);
              hashbrown::rustc_entry::_<impl_hashbrown::map::HashMap<K,V,S,A>>::rustc_entry
                        (&local_758,local_7f0 + 0x3f,&local_638);
              if (local_758 == (double *)0x8000000000000000) {
                local_7e8 = (double *)0x8000000000000000;
              }
              else {
                local_7c8 = local_738;
                puStack_7d0 = puStack_740;
                local_7e8 = local_758;
              }
              local_7d8 = local_748;
              pppdStack_7e0 = pppdStack_750;
              uVar20 = std::collections::hash::map::Entry<K,V>::or_insert_with
                                 (dStack_438,local_430,&local_7e8);
                    /* try { // try from 0013a81d to 0013a871 has its CatchHandler @ 0013d00a */
              uVar10 = strategy_comm3::vol_spread_ratio::VolSpreadRatio::update
                                 ((double)local_850 * _DAT_001172d0,local_808,local_838,uVar20);
              puVar15 = PTR_K1_MAP_G1_LOW_001dd048;
              if (((uVar10 & 1) == 0) || (dStack_428 < extraout_XMM0_Qa)) goto LAB_0013a874;
              local_898 = (uint)CONCAT71((int7)(uVar11 >> 8),1);
              if (*(long *)(PTR_K1_MAP_G1_LOW_001dd048 + 0x30) != 2) {
                once_cell::imp::OnceCell<T>::initialize
                          (PTR_K1_MAP_G1_LOW_001dd048,PTR_K1_MAP_G1_LOW_001dd048);
              }
            }
            else {
LAB_0013a874:
              puVar15 = PTR_K1_MAP_G2_HIGH_001dd050;
              if (*(long *)(PTR_K1_MAP_G2_HIGH_001dd050 + 0x30) != 2) {
                    /* try { // try from 0013cf96 to 0013cfa0 has its CatchHandler @ 0013d00a */
                once_cell::imp::OnceCell<T>::initialize
                          (PTR_K1_MAP_G2_HIGH_001dd050,PTR_K1_MAP_G2_HIGH_001dd050);
              }
              local_898 = 0;
            }
            lVar8 = hashbrown::map::HashMap<K,V,S,A>::get_inner(puVar15,&local_63c);
            pdVar29 = (double *)&DAT_001171f8;
            if (lVar8 != 0) {
              pdVar29 = (double *)(lVar8 + 8);
            }
            local_8a8 = (double ***)*pdVar29;
            local_8b9 = (char)local_898;
            local_788 = (double)local_8a8;
            uVar4 = strategy_comm3::Comm3Params::low_action_enum(pppdStack_500,local_4f8);
            local_818 = (double *)CONCAT71(local_818._1_7_,uVar4);
            cVar5 = strategy_comm3::Comm3Params::signal_mode(pppdStack_548,local_540);
                    /* WARNING: Switch is manually overridden */
            switch(cVar5) {
            case '\0':
              pdStack_820 = (double *)(*(double *)((long)local_888 + 0x70) * local_4f0);
              break;
            case '\x01':
              pdStack_820 = *(double **)((long)local_888 + 0x78);
              break;
            case '\x02':
              pdStack_820 = *(double **)((long)local_888 + 0x70);
              break;
            case '\x03':
              dVar23 = *(double *)((long)local_888 + 0x70);
              local_888 = (double)(~-(ulong)NAN(dVar23) &
                                   (_s__00117940 & (ulong)dVar23 | ram0x00117850) |
                                  DAT_00117288 & -(ulong)NAN(dVar23));
              uStack_880 = _UNK_00117858;
              dVar23 = (double)(*(code *)PTR_pow_001dd058)
                                         ((ulong)dVar23 & _DAT_00117310,
                                          (double)DAT_001171f8 / (double)local_8a8);
              pdStack_820 = (double *)(dVar23 * local_888);
            }
            if (((local_158 == 1) && ((local_148 & 1) != 0)) &&
               (DAT_00117230 <
                (double)((ulong)((dStack_150 - dStack_140) / (dStack_150 + dStack_140)) &
                        _DAT_00117310))) goto LAB_0013a6c5;
                    /* try { // try from 0013a9fd to 0013ac73 has its CatchHandler @ 0013d00a */
            local_888 = (double)(*(code *)PTR_time_sec_001dd028)(local_8b8);
            local_8a8 = local_388;
            dStack_7a0 = (double)(*(code *)PTR_spread_bp_001dd060)(local_8b8,local_868,local_860);
            pdStack_780 = (double *)(*(code *)PTR_fee_bp_001dd068)(local_8b8,local_868,local_860);
            local_5d8 = (double)(*(code *)PTR_contract_mult_001dd070)(local_8b8,local_868,local_860)
            ;
            local_768 = (double)(*(code *)PTR_price_step_001dd078)(local_8b8,local_868,local_860);
            local_798 = (double *)(*(code *)PTR_vol_step_001dd080)(local_8b8,local_868,local_860);
            (*(code *)PTR_position_001dd088)(local_8b8,local_868,local_860);
            local_848 = extraout_XMM1_Qa;
            dStack_840 = extraout_XMM1_Qb;
            dStack_7f8 = (double)(*(code *)PTR_position_holding_secs_001dd090)
                                           (local_8b8,local_868,local_860);
            local_8a8 = (double ***)((double)local_8a8 / _DAT_001172d0);
            dStack_7f8 = dStack_7f8 + (double)local_8a8;
            uVar4 = (*(code *)PTR_is_should_lock_001dd098)(local_8b8,local_868,local_860);
            local_3b8 = (double)CONCAT71(local_3b8._1_7_,uVar4);
            uVar11 = 0x138;
            if (local_8b9 == '\x01') {
              pdVar29 = &local_470;
              if (local_590[0]._0_1_ != '\0') {
                pdVar29 = local_590 + 1;
              }
              pdVar27 = &dStack_468;
              if (local_580._0_1_ != '\0') {
                pdVar27 = &local_578;
              }
              ppdVar14 = &local_460;
              if (local_570._0_1_ != '\0') {
                ppdVar14 = &local_568;
              }
              uVar11 = (ulong)(local_560._0_1_ ^ 1) << 8 | 0x38;
            }
            else {
              pdVar29 = &local_470;
              pdVar27 = &dStack_468;
              ppdVar14 = &local_460;
            }
            local_3f8 = *(double *)((long)local_590 + uVar11);
            local_3c8 = *ppdVar14;
            local_3e8 = *pdVar27;
            local_3d8 = *pdVar29;
            uStack_3d0 = 0;
            uStack_3e0 = 0;
            dStack_3c0 = 0.0;
            uStack_3f0 = 0;
            dStack_358 = local_3d8;
            dStack_350 = local_3e8;
            pdStack_348 = local_3c8;
            dStack_340 = local_3f8;
            strategy_comm3::signal_trigger::dynamic_threshold
                      (dStack_7f8,local_450,dStack_448,local_440,&pdStack_178,&dStack_358);
            uStack_8aa = strategy_comm3::Comm3Params::signal_trigger_mode(dStack_530,local_528);
            (*(code *)PTR_clone_001dcff8)
                      (&local_7e8,&local_870,&PTR_s_strategies_comm_strategy_strateg_001d73a0);
                    /* try { // try from 0013ac74 to 0013ac93 has its CatchHandler @ 0013cfdb */
            (*(code *)PTR_clone_001dcff8)
                      (&local_758,&local_5a8,&PTR_s_strategies_comm_strategy_strateg_001d73b8);
            ppdStack_628 = local_7d8;
            local_638 = local_7e8;
            pppdStack_630 = pppdStack_7e0;
            pdStack_620 = local_758;
            pppdStack_618 = pppdStack_750;
            ppdStack_610 = local_748;
                    /* try { // try from 0013ace5 to 0013b1ce has its CatchHandler @ 0013d00a */
            hashbrown::rustc_entry::_<impl_hashbrown::map::HashMap<K,V,S,A>>::rustc_entry
                      (&local_758,local_7f0 + 0x33,&local_638);
            if (local_758 == (double *)0x8000000000000000) {
              local_7e8 = (double *)0x8000000000000000;
            }
            else {
              pdStack_7b8 = pdStack_728;
              pcStack_7b0 = pcStack_720;
              local_7c8 = local_738;
              puStack_7c0 = puStack_730;
              puStack_7d0 = puStack_740;
              local_7e8 = local_758;
            }
            local_7d8 = local_748;
            pppdStack_7e0 = pppdStack_750;
            local_758 = (double *)&uStack_8aa;
            pppdStack_750 = &local_520;
            local_748 = &pdStack_178;
            lVar8 = std::collections::hash::map::Entry<K,V>::or_insert_with(&local_7e8,&local_758);
            local_888 = local_888 + (double)local_8a8;
            strategy_comm3::signal_trigger::SignalTrigger::update_score
                      (local_888,pdStack_820,0,0,lVar8,0);
            *(undefined8 *)(lVar8 + 0x50) = uStack_168;
            *(undefined8 *)(lVar8 + 0x58) = uStack_160;
            *(double **)(lVar8 + 0x40) = pdStack_178;
            *(undefined8 *)(lVar8 + 0x48) = uStack_170;
                    /* WARNING: Switch is manually overridden */
            switch(uStack_8aa) {
            case 0:
              if (cVar5 == '\0') {
                strategy_comm3::signal_trigger::SignalTrigger::point_signal_trigger_pv1_spread
                          (dStack_4e8,dStack_7a0,&local_758,lVar8);
                goto joined_r0x0013aef9;
              }
              if (cVar5 == '\x03') {
                strategy_comm3::signal_trigger::SignalTrigger::point_signal_trigger_pv4
                          (dStack_4e8,pdStack_780,dStack_7a0,&local_758,lVar8);
                local_758._0_1_ = (char)local_758;
                pppdVar9 = pppdStack_750;
                if ((char)local_758 == '\x05') goto joined_r0x0013b0e6;
              }
              else {
                dVar23 = *(double *)(lVar8 + 0x38);
                if (*(double *)(lVar8 + 0x40) <= dVar23) {
                  local_758._0_1_ = '\0';
                }
                else {
                  local_758._0_1_ = '\x03';
                  if ((dVar23 < *(double *)(lVar8 + 0x58)) &&
                     (local_758._0_1_ = '\x02', *(double *)(lVar8 + 0x50) < dVar23)) {
                    local_758._0_1_ = (*(double *)(lVar8 + 0x48) < dVar23) * '\x03' + '\x01';
                  }
                }
              }
              goto LAB_0013af86;
            case 1:
              strategy_comm3::signal_trigger::SignalTrigger::windows_mean_trigger
                        (local_4e0,&local_758,lVar8);
              break;
            case 2:
              strategy_comm3::signal_trigger::SignalTrigger::windows_std_trigger
                        (local_4e0,&local_758,lVar8);
              break;
            case 3:
              strategy_comm3::signal_trigger::SignalTrigger::windows_quantile_trigger
                        (dStack_4d8,local_4e0,&local_758,lVar8);
              break;
            case 4:
              strategy_comm3::signal_trigger::SignalTrigger::windows_sharpe_trigger
                        (local_4e0,&local_758,lVar8);
              break;
            case 5:
              strategy_comm3::signal_trigger::SignalTrigger::windows_rsi_trigger
                        (local_4e0,&local_758,lVar8);
            }
joined_r0x0013aef9:
            pppdVar9 = pppdStack_750;
            if ((char)local_758 != '\x05') {
LAB_0013af86:
              cStack_8a9 = (char)local_758;
              puVar15 = PTR_fmt_001dd0a0;
              local_758 = &local_870;
              pppdStack_750 = (double ***)_<alloc::string::String_as_core::fmt::Display>::fmt;
              local_748 = &pdStack_820;
              puStack_740 = PTR_fmt_001dd0a0;
              local_738 = &dStack_7a0;
              puStack_730 = PTR_fmt_001dd0a0;
              pdStack_728 = &local_788;
              pcStack_720 = (code *)PTR_fmt_001dd0a0;
              pdStack_718 = (double *)&local_8b9;
              puStack_710 = PTR_fmt_001dd0a8;
              ppcStack_708 = (char **)&cStack_8a9;
              pcStack_700 = _<core::option::Option<T>as_core::fmt::Debug>::fmt;
              local_7e8 = (double *)&UNK_001d73d0;
              pppdStack_7e0 = (double ***)0x6;
              local_7c8 = (double *)&UNK_00117e80;
              puStack_7c0 = (undefined *)0x6;
              local_7d8 = &local_758;
              puStack_7d0 = (undefined1 *)0x6;
              (*(code *)PTR_format_inner_001dcfe0)(auStack_50,&local_7e8);
              future_backtest_sdk::context::StrategyContext::log_debug(local_8b8,auStack_50);
              uVar4 = (*(code *)PTR_margin_filter_001dd0b0)(local_8b8,cStack_8a9);
              pppdVar9 = (double ***)
                         (*(code *)PTR_cancel_by_pending_ts_001dd0b8)(local_420,local_8b8,1);
              if (pppdVar9 == (double ***)0x0) {
                bVar6 = (*(code *)PTR_impact_block_check_001dd0c0)
                                  (local_888,local_808,local_838,local_8b8,uVar4);
                if (((char)local_818 == '\x01' && (char)local_898 == '\x01') && ((bVar6 & 5) == 0))
                {
                  bVar6 = 4;
                }
                plVar21 = &local_5a8;
                if (local_390 != 0) {
                  plVar21 = local_398;
                }
                puVar12 = &UNK_001d7448;
                if (local_390 == 0) {
                  puVar12 = &UNK_001d7430;
                }
                (*(code *)PTR_clone_001dcff8)(&dStack_600,plVar21,puVar12);
                local_888 = local_4d0;
                uStack_880 = 0;
                local_8a8 = (double ***)dStack_4c8;
                dStack_8a0 = 0.0;
                local_5e8 = local_4c0;
                dStack_5e0 = 0.0;
                bVar22 = (char)local_818 == '\x02';
                local_648 = *(double *)(lVar8 + 0x40);
                local_650 = *(double *)(lVar8 + 0x48);
                local_818 = *(double **)(lVar8 + 0x50);
                local_368 = *(double *)(lVar8 + 0x58);
                if ((bVar6 != 4) && (local_400 != '\0')) {
                  pdVar29 = local_7f0 + 0x39;
                    /* try { // try from 0013b262 to 0013b510 has its CatchHandler @ 0013cfc1 */
                  lVar8 = hashbrown::map::HashMap<K,V,S,A>::get_inner(pdVar29,&local_870);
                  if (lVar8 != 0) {
                    if ((dStack_4a8 <= 0.0) ||
                       (((double)local_850 - *(double *)(lVar8 + 0x28)) * _DAT_001172d0 < dStack_4a8
                       )) goto override_jmp_0013b2e2_case_4;
                    hashbrown::map::HashMap<K,V,S,A>::remove(&local_758,pdVar29,&local_870);
                  }
                }
                bVar17 = bVar22 & (byte)local_898;
                    /* WARNING: Switch is manually overridden */
                switch(bVar6) {
                case 0:
                  if ((_DAT_001172d8 <= (double)local_848) ||
                     ((double)local_4b0 / _DAT_001172d0 <= dStack_7f8)) {
                    pdVar27 = (double *)0x0;
                    pdVar29 = local_848;
                    if ((double)local_848 <= 0.0) {
                      pdVar29 = pdVar27;
                    }
                    dVar26 = (double)(~-(ulong)(local_490 < 0.0) & (ulong)local_490 |
                                     -(ulong)(local_490 < 0.0) & _DAT_001171a0) - (double)pdVar29;
                    dVar30 = ((double)(~-(ulong)(dStack_488 < 0.0) & (ulong)dStack_488 |
                                      -(ulong)(dStack_488 < 0.0) & _DAT_001171a0) / local_5d8) /
                             (double)local_838 - (double)pdVar29;
                    dVar23 = dVar30;
                    if (dVar26 <= dVar30) {
                      dVar23 = dVar26;
                    }
                    pdVar28 = (double *)
                              (~-(ulong)NAN(dVar26) & (ulong)dVar23 |
                              -(ulong)NAN(dVar26) & (ulong)dVar30);
                    pdVar29 = (double *)
                              (~-(ulong)((double)local_4a0 < 0.0) & (ulong)local_4a0 |
                              -(ulong)((double)local_4a0 < 0.0) & _DAT_001171a0);
                    pdVar24 = (double *)
                              (((double)(~-(ulong)(dStack_498 < 0.0) & (ulong)dStack_498 |
                                        -(ulong)(dStack_498 < 0.0) & _DAT_001171a0) / local_5d8) /
                              (double)local_838);
                    if ((double)pdVar24 <= (double)DAT_001171f8) {
                      pdVar24 = DAT_001171f8;
                    }
                    if ((double)pdVar24 <= (double)pdVar29) {
                      pdVar29 = pdVar24;
                    }
                    pdVar25 = (double *)
                              (~-(ulong)(local_480 < 0.0) & (ulong)local_480 |
                              -(ulong)(local_480 < 0.0) & _DAT_001171a0);
                    pdVar24 = (double *)
                              (((double)(~-(ulong)(dStack_478 < 0.0) & (ulong)dStack_478 |
                                        _DAT_001171a0 & -(ulong)(dStack_478 < 0.0)) / local_5d8) /
                              (double)local_838);
                    if ((double)pdVar24 <= (double)DAT_001171f8) {
                      pdVar24 = DAT_001171f8;
                    }
                    if ((double)pdVar24 <= (double)pdVar25) {
                      pdVar25 = pdVar24;
                    }
                    pdVar24 = local_848;
                    if (0.0 <= (double)local_848) {
                      pdVar24 = pdVar27;
                    }
                    if ((double)pdVar29 <= (double)pdVar28) {
                      pdVar28 = pdVar29;
                    }
                    if ((double)((ulong)pdVar24 ^ _s__00117940) <= (double)pdVar25) {
                      pdVar25 = (double *)((ulong)pdVar24 ^ _s__00117940);
                    }
                    pdVar29 = (double *)((double)pdVar25 + (double)pdVar28);
                    if ((double)pdVar25 + (double)pdVar28 <= 0.0) {
                      pdVar29 = pdVar27;
                    }
                    uVar20 = (*(code *)PTR_round_with_step_f64_001dd0c8)(pdVar29,local_798,1);
                    local_898 = (uint)uVar20;
                    uStack_894 = (undefined4)((ulong)uVar20 >> 0x20);
                    dStack_890 = extraout_XMM0_Qb;
                    if (bVar17 == 0) {
                      pppdVar9 = (double ***)(*(code *)PTR_cancel_all_001dd0d0)(local_8b8);
                      if (pppdVar9 == (double ***)0x0) {
                        if ((DAT_001171e0 < (double)((ulong)local_888 & _DAT_00117310)) &&
                           (DAT_001171e0 < (double)(_DAT_00117310 & (ulong)local_3d8))) {
                          dVar23 = (double)((ulong)((double)pdStack_820 / local_3d8) & _DAT_00117310
                                           ) + _s__00117180;
                          if (dVar23 <= 0.0) {
                            dVar23 = 0.0;
                          }
                          pdVar27 = (double *)((double)local_8a8 + local_888 * dVar23);
                          pdVar29 = local_5e8;
                          if ((double)pdVar27 <= (double)local_5e8) {
                            pdVar29 = pdVar27;
                          }
                          local_8a8 = (double ***)
                                      (-(ulong)NAN((double)pdVar27) & (ulong)local_5e8 |
                                      ~-(ulong)NAN((double)pdVar27) & (ulong)pdVar29);
                          dStack_8a0 = dStack_5e0;
                        }
                        local_8a8 = (double ***)
                                    (*(code *)PTR_round_with_step_f64_001dd0c8)
                                              (((double)local_8a8 + (double)DAT_001171f8) *
                                               (double)local_838,local_768,1);
                        local_888 = _s__00117278;
                        goto LAB_0013c08b;
                      }
                    }
                    else {
                      dVar30 = local_410 * local_768 + (double)local_808;
                      dVar26 = (double)local_838 - local_768;
                      dVar23 = dVar26;
                      if (dVar30 <= dVar26) {
                        dVar23 = dVar30;
                      }
                      local_8a8 = (double ***)
                                  (*(code *)PTR_round_with_step_f64_001dd0c8)
                                            (~-(ulong)NAN(dVar30) & (ulong)dVar23 |
                                             -(ulong)NAN(dVar30) & (ulong)dVar26,1);
                      dVar23 = 1.97626258336499e-323;
                      if ((ulong)local_408 < 4) {
                        dVar23 = local_408;
                      }
                      iVar7 = SUB84(dVar23,0);
                      if ((long)local_408 < 1) {
                        iVar7 = 1;
                      }
                      local_758 = (double *)0x0;
                      pppdStack_750 = (double ***)&DAT_00000008;
                      local_748 = (double **)0x0;
                    /* try { // try from 0013b56d to 0013b629 has its CatchHandler @ 0013cfaf */
                      pppdVar9 = (double ***)
                                 strategy_comm3::cancel_order_use_range
                                           (local_8a8,
                                            (double)local_c0[0] -
                                            *(double *)((long)local_c0 + (ulong)(uint)(iVar7 << 4)),
                                            local_8b8,local_868,local_860,1,&local_758);
                      if (pppdVar9 == (double ***)0x0) {
                        lVar8 = strategy_comm3::live_pending_counts
                                          (local_8b8,local_868,local_860,pppdStack_750,local_748);
                        local_818 = (double *)0x0;
                        if ((lVar8 == 0) &&
                           (local_818 = (double *)CONCAT44(uStack_894,local_898), 0.0 < dStack_418))
                        {
                          dVar26 = (double)CONCAT44(uStack_894,local_898);
                          dVar23 = dStack_418;
                          if (dVar26 <= dStack_418) {
                            dVar23 = dVar26;
                          }
                          local_818 = (double *)
                                      (*(code *)PTR_round_with_step_f64_001dd0c8)
                                                (~-(ulong)NAN(dVar26) & (ulong)dVar23 |
                                                 -(ulong)NAN(dVar26) & (ulong)dStack_418,local_798,1
                                                );
                        }
                        local_888 = local_420;
                        core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&local_758)
                        ;
                        local_898 = (uint)local_818;
                        uStack_894 = (undefined4)((ulong)local_818 >> 0x20);
                        dStack_890 = 0.0;
LAB_0013c08b:
                        if ((double)(_DAT_00117310 & CONCAT44(uStack_894,local_898)) <= DAT_001171e0
                           ) {
override_jmp_0013b2e2_case_4:
                          if (dStack_600 != 0.0) {
                            (*(code *)PTR___rust_dealloc_001dcef0)(uStack_5f8,dStack_600,1);
                          }
                          if (local_138 != 0) {
                            (*(code *)PTR___rust_dealloc_001dcef0)(local_130,local_138,1);
                          }
                          if (local_5a8 != 0) {
                            (*(code *)PTR___rust_dealloc_001dcef0)(local_5a0,local_5a8,1);
                          }
                          if (local_870 != 0.0) {
                            (*(code *)PTR___rust_dealloc_001dcef0)(local_868,local_870,1);
                          }
                          core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>
                                    (&local_5c0);
                          core::ptr::drop_in_place<strategy_comm3::Comm3Params>(local_590);
                          core::ptr::drop_in_place<future_backtest_sdk::types::StrategyPara>
                                    (&local_3a0);
                          return (double ***)0x0;
                        }
                        local_848 = pdStack_820;
                        local_818 = pdStack_4b8;
                        pcStack_778 = "H";
                        if (local_8b9 != '\0') {
                          pcStack_778 = "L";
                        }
                        uStack_770 = 1;
                        local_638 = (double *)0x117fa2;
                        if (bVar17 != 0) {
                          local_638 = (double *)0x117fa3;
                        }
                        pppdStack_630 = (double ***)0x1;
                        local_758 = &dStack_7a0;
                        pppdStack_750 = (double ***)puVar15;
                        local_748 = &pdStack_780;
                        puStack_740 = puVar15;
                        local_738 = &local_788;
                        puStack_730 = puVar15;
                        pdStack_728 = &dStack_600;
                        pcStack_720 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                        pdStack_718 = &dStack_7f8;
                        puStack_710 = puVar15;
                        ppcStack_708 = &pcStack_778;
                        pcStack_700 = _<&T_as_core::fmt::Display>::fmt;
                        pcStack_6f0 = _<&T_as_core::fmt::Display>::fmt;
                        local_7e8 = (double *)&DAT_001d7460;
                        pppdStack_7e0 = (double ***)&DAT_00000007;
                        local_7c8 = (double *)0x0;
                        local_7d8 = &local_758;
                        puStack_7d0 = &DAT_00000007;
                        ppdStack_6f8 = &local_638;
                        (*(code *)PTR_format_inner_001dcfe0)(&uStack_1d8,&local_7e8);
                        uStack_230 = 0x700;
                        dStack_260 = (double)local_8a8;
                        uStack_258 = CONCAT44(uStack_894,local_898);
                        pppdStack_250 = local_838;
                        pdStack_248 = local_848;
                        dStack_240 = local_648;
                        pdStack_238 = local_818;
                        uStack_278 = uStack_1d8;
                        uStack_270 = uStack_1d0;
                        uStack_268 = uStack_1c8;
                        pppdVar9 = (double ***)
                                   strategy_comm3::place(local_888,local_8b8,&uStack_278);
                        if (pppdVar9 == (double ***)0x0) {
                          if (local_400 == '\x01') {
                            (*(code *)PTR_clone_001dcff8)
                                      (&local_638,&local_870,
                                       &PTR_s_strategies_comm_strategy_strateg_001d74d0);
                            local_7e8 = local_808;
                            pppdStack_7e0 = local_838;
                            local_7d8 = local_850;
                            hashbrown::map::HashMap<K,V,S,A>::insert
                                      (&local_758,local_7f0 + 0x39,&local_638,&local_7e8);
                          }
                          goto override_jmp_0013b2e2_case_4;
                        }
                      }
                      else {
LAB_0013be96:
                        core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&local_758)
                        ;
                      }
                    }
                  }
                  else {
LAB_0013bc00:
                    pppdVar9 = (double ***)0x0;
                  }
                  break;
                case 1:
                  if ((DAT_001171e0 < (double)local_848) &&
                     (dStack_7f8 < (double)local_4b0 / _DAT_001172d0)) goto LAB_0013bc00;
                  if ((double)local_848 <= 0.0) goto override_jmp_0013b2e2_case_4;
                  uVar11 = -(ulong)(local_480 < (double)((ulong)local_480 ^ _s__00117940));
                  dVar30 = (double)(uVar11 & _DAT_001171a8 |
                                   ~uVar11 & ((ulong)local_480 ^ _s__00117940));
                  uVar11 = -(ulong)(dStack_478 < (double)((ulong)dStack_478 ^ _s__00117940));
                  dVar26 = ((double)(uVar11 & _DAT_001171a8 |
                                    ~uVar11 & ((ulong)dStack_478 ^ _s__00117940)) / local_5d8) /
                           (double)local_808;
                  dVar23 = dVar26;
                  if (dVar26 <= dVar30) {
                    dVar23 = dVar30;
                  }
                  dVar23 = (double)(~-(ulong)NAN(dVar30) & (ulong)dVar23 |
                                   -(ulong)NAN(dVar30) & (ulong)dVar26);
                  pdVar29 = local_848;
                  if ((double)local_848 <= 0.0) {
                    pdVar29 = (double *)0x0;
                  }
                  if (dVar23 <= (double)((ulong)pdVar29 ^ _s__00117940)) {
                    dVar23 = (double)((ulong)pdVar29 ^ _s__00117940);
                  }
                    /* try { // try from 0013b9e9 to 0013ba81 has its CatchHandler @ 0013cfc1 */
                  uVar20 = (*(code *)PTR_round_with_step_f64_001dd0c8)(dVar23,local_798,1);
                  local_898 = (uint)uVar20;
                  uStack_894 = (undefined4)((ulong)uVar20 >> 0x20);
                  local_818 = (double *)CONCAT71(local_818._1_7_,local_3b8._0_1_ != '\0');
                  dStack_890 = extraout_XMM0_Qb_01;
                  if (bVar17 == 0) {
                    pppdVar9 = (double ***)(*(code *)PTR_cancel_all_001dd0d0)(local_8b8);
                    if (pppdVar9 != (double ***)0x0) break;
                    if ((DAT_001171e0 < (double)((ulong)local_888 & _DAT_00117310)) &&
                       (DAT_001171e0 < (double)(_DAT_00117310 & (ulong)local_3e8))) {
                      dVar23 = (double)((ulong)((double)pdStack_820 / local_3e8) & _DAT_00117310) +
                               _s__00117180;
                      if (dVar23 <= 0.0) {
                        dVar23 = 0.0;
                      }
                      pdVar27 = (double *)((double)local_8a8 + local_888 * dVar23);
                      pdVar29 = local_5e8;
                      if ((double)pdVar27 <= (double)local_5e8) {
                        pdVar29 = pdVar27;
                      }
                      local_8a8 = (double ***)
                                  (-(ulong)NAN((double)pdVar27) & (ulong)local_5e8 |
                                  ~-(ulong)NAN((double)pdVar27) & (ulong)pdVar29);
                      dStack_8a0 = dStack_5e0;
                    }
                    local_8a8 = (double ***)
                                (*(code *)PTR_round_with_step_f64_001dd0c8)
                                          (((double)DAT_001171f8 - (double)local_8a8) *
                                           (double)local_808,local_768,1);
                    local_888 = _s__00117278;
                  }
                  else {
                    dVar30 = (double)local_838 - local_410 * local_768;
                    dVar26 = local_768 + (double)local_808;
                    dVar23 = dVar26;
                    if (dVar26 <= dVar30) {
                      dVar23 = dVar30;
                    }
                    local_8a8 = (double ***)
                                (*(code *)PTR_round_with_step_f64_001dd0c8)
                                          (~-(ulong)NAN(dVar30) & (ulong)dVar23 |
                                           -(ulong)NAN(dVar30) & (ulong)dVar26,1);
                    dVar23 = 1.97626258336499e-323;
                    if ((ulong)local_408 < 4) {
                      dVar23 = local_408;
                    }
                    iVar7 = SUB84(dVar23,0);
                    if ((long)local_408 < 1) {
                      iVar7 = 1;
                    }
                    local_758 = (double *)0x0;
                    pppdStack_750 = (double ***)&DAT_00000008;
                    local_748 = (double **)0x0;
                    /* try { // try from 0013badd to 0013bb9e has its CatchHandler @ 0013cfa9 */
                    pppdVar9 = (double ***)
                               strategy_comm3::cancel_order_use_range
                                         (local_8a8,
                                          *(double *)((long)local_110 + (ulong)(uint)(iVar7 << 4)) -
                                          (double)local_110[0],local_8b8,local_868,local_860,0,
                                          &local_758);
                    if (pppdVar9 != (double ***)0x0) goto LAB_0013be96;
                    strategy_comm3::live_pending_counts
                              (local_8b8,local_868,local_860,pppdStack_750,local_748);
                    local_848 = (double *)0x0;
                    if ((extraout_RDX == 0) &&
                       (local_848 = (double *)CONCAT44(uStack_894,local_898), 0.0 < dStack_418)) {
                      dVar30 = (double)((ulong)dStack_418 ^ _s__00117940);
                      dVar23 = (double)CONCAT44(uStack_894,local_898);
                      dVar26 = dVar30;
                      if (dVar30 <= dVar23) {
                        dVar26 = dVar23;
                      }
                      local_848 = (double *)
                                  (*(code *)PTR_round_with_step_f64_001dd0c8)
                                            (~-(ulong)NAN(dVar23) & (ulong)dVar26 |
                                             -(ulong)NAN(dVar23) & (ulong)dVar30,local_798,1);
                    }
                    local_888 = local_420;
                    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&local_758);
                    local_898 = (uint)local_848;
                    uStack_894 = (undefined4)((ulong)local_848 >> 0x20);
                    dStack_890 = 0.0;
                  }
                  if ((double)(_DAT_00117310 & CONCAT44(uStack_894,local_898)) <= DAT_001171e0)
                  goto override_jmp_0013b2e2_case_4;
                  local_798 = pdStack_820;
                  local_848 = pdStack_4b8;
                  pcStack_778 = "H";
                  if (local_8b9 != '\0') {
                    pcStack_778 = "L";
                  }
                  uStack_770 = 1;
                  local_638 = (double *)0x117fa2;
                  if (bVar17 != 0) {
                    local_638 = (double *)0x117fa3;
                  }
                  pppdStack_630 = (double ***)0x1;
                  local_758 = &dStack_7a0;
                  pppdStack_750 = (double ***)puVar15;
                  local_748 = &pdStack_780;
                  puStack_740 = puVar15;
                  local_738 = &local_788;
                  puStack_730 = puVar15;
                  pdStack_728 = &dStack_600;
                  pcStack_720 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                  pdStack_718 = &dStack_7f8;
                  puStack_710 = puVar15;
                  ppcStack_708 = &pcStack_778;
                  pcStack_700 = _<&T_as_core::fmt::Display>::fmt;
                  pcStack_6f0 = _<&T_as_core::fmt::Display>::fmt;
                  local_7e8 = (double *)&DAT_001d7460;
                  pppdStack_7e0 = (double ***)&DAT_00000007;
                  local_7c8 = (double *)0x0;
                  local_7d8 = &local_758;
                  puStack_7d0 = &DAT_00000007;
                  ppdStack_6f8 = &local_638;
                  (*(code *)PTR_format_inner_001dcfe0)(&uStack_1a8,&local_7e8);
                  cStack_2ef = (char)local_818 * '\x03' + '\x05';
                  uStack_2f0 = 1;
                  dStack_320 = (double)local_8a8;
                  uStack_318 = CONCAT44(uStack_894,local_898);
                  pdStack_310 = local_808;
                  pdStack_308 = local_798;
                  dStack_300 = local_650;
                  pdStack_2f8 = local_848;
                  uStack_338 = uStack_1a8;
                  uStack_330 = uStack_1a0;
                  uStack_328 = uStack_198;
                  pppdVar9 = (double ***)strategy_comm3::place(local_888,local_8b8,&uStack_338);
                  if (pppdVar9 == (double ***)0x0) {
                    if (local_400 == '\x01') {
                      (*(code *)PTR_clone_001dcff8)
                                (&local_638,&local_870,
                                 &PTR_s_strategies_comm_strategy_strateg_001d74e8);
                      local_7e8 = local_808;
                      pppdStack_7e0 = local_838;
                      local_7d8 = local_850;
                      hashbrown::map::HashMap<K,V,S,A>::insert
                                (&local_758,local_7f0 + 0x39,&local_638,&local_7e8);
                    }
                    goto override_jmp_0013b2e2_case_4;
                  }
                  break;
                case 2:
                  if ((DAT_001171e0 < (double)local_848) &&
                     (dStack_7f8 < (double)local_4b0 / _DAT_001172d0)) goto LAB_0013bc00;
                  uVar11 = -(ulong)(local_490 < (double)((ulong)local_490 ^ _s__00117940));
                  pdVar29 = local_848;
                  if (0.0 <= (double)local_848) {
                    pdVar29 = (double *)0x0;
                  }
                  dVar26 = (double)(uVar11 & _DAT_001171a8 |
                                   ~uVar11 & ((ulong)local_490 ^ _s__00117940)) - (double)pdVar29;
                  uVar11 = -(ulong)(dStack_488 < (double)((ulong)dStack_488 ^ _s__00117940));
                  dVar30 = ((double)(uVar11 & _DAT_001171a8 |
                                    ~uVar11 & ((ulong)dStack_488 ^ _s__00117940)) / local_5d8) /
                           (double)local_808 - (double)pdVar29;
                  dVar23 = dVar30;
                  if (dVar30 <= dVar26) {
                    dVar23 = dVar26;
                  }
                  dVar23 = (double)(~-(ulong)NAN(dVar26) & (ulong)dVar23 |
                                   -(ulong)NAN(dVar26) & (ulong)dVar30);
                  pdVar27 = (double *)
                            (~-(ulong)((double)local_4a0 < 0.0) & (ulong)local_4a0 |
                            -(ulong)((double)local_4a0 < 0.0) & _DAT_001171a0);
                  pdVar29 = (double *)
                            (((double)(~-(ulong)(dStack_498 < 0.0) & (ulong)dStack_498 |
                                      -(ulong)(dStack_498 < 0.0) & _DAT_001171a0) / local_5d8) /
                            (double)local_808);
                  if ((double)pdVar29 <= (double)DAT_001171f8) {
                    pdVar29 = DAT_001171f8;
                  }
                  if ((double)pdVar29 <= (double)pdVar27) {
                    pdVar27 = pdVar29;
                  }
                  pdVar24 = (double *)
                            (~-(ulong)(local_480 < 0.0) & (ulong)local_480 |
                            -(ulong)(local_480 < 0.0) & _DAT_001171a0);
                  pdVar29 = (double *)
                            (((double)(~-(ulong)(dStack_478 < 0.0) & (ulong)dStack_478 |
                                      _DAT_001171a0 & -(ulong)(dStack_478 < 0.0)) / local_5d8) /
                            (double)local_808);
                  if ((double)pdVar29 <= (double)DAT_001171f8) {
                    pdVar29 = DAT_001171f8;
                  }
                  if ((double)pdVar29 <= (double)pdVar24) {
                    pdVar24 = pdVar29;
                  }
                  if (dVar23 <= (double)((ulong)pdVar27 ^ _s__00117940)) {
                    dVar23 = (double)((ulong)pdVar27 ^ _s__00117940);
                  }
                  pdVar29 = local_848;
                  if ((double)local_848 <= 0.0) {
                    pdVar29 = (double *)0x0;
                  }
                  if ((double)pdVar29 <= (double)pdVar24) {
                    pdVar24 = pdVar29;
                  }
                  dVar23 = dVar23 - (double)pdVar24;
                  if (0.0 <= dVar23) {
                    dVar23 = 0.0;
                  }
                    /* try { // try from 0013bd8f to 0013be14 has its CatchHandler @ 0013cfc1 */
                  uVar20 = (*(code *)PTR_round_with_step_f64_001dd0c8)(dVar23,local_798,1);
                  local_898 = (uint)uVar20;
                  uStack_894 = (undefined4)((ulong)uVar20 >> 0x20);
                  dStack_890 = extraout_XMM0_Qb_02;
                  if (bVar17 == 0) {
                    /* try { // try from 0013bea8 to 0013cb14 has its CatchHandler @ 0013cfc1 */
                    pppdVar9 = (double ***)(*(code *)PTR_cancel_all_001dd0d0)(local_8b8);
                    if (pppdVar9 != (double ***)0x0) break;
                    if ((DAT_001171e0 < (double)((ulong)local_888 & _DAT_00117310)) &&
                       (DAT_001171e0 < (double)(_DAT_00117310 & (ulong)local_3c8))) {
                      dVar23 = (double)((ulong)((double)pdStack_820 / (double)local_3c8) &
                                       _DAT_00117310) + _s__00117180;
                      if (dVar23 <= 0.0) {
                        dVar23 = 0.0;
                      }
                      pdVar27 = (double *)((double)local_8a8 + local_888 * dVar23);
                      pdVar29 = local_5e8;
                      if ((double)pdVar27 <= (double)local_5e8) {
                        pdVar29 = pdVar27;
                      }
                      local_8a8 = (double ***)
                                  (-(ulong)NAN((double)pdVar27) & (ulong)local_5e8 |
                                  ~-(ulong)NAN((double)pdVar27) & (ulong)pdVar29);
                      dStack_8a0 = dStack_5e0;
                    }
                    local_8a8 = (double ***)
                                (*(code *)PTR_round_with_step_f64_001dd0c8)
                                          (((double)DAT_001171f8 - (double)local_8a8) *
                                           (double)local_808,local_768,1);
                    local_888 = _s__00117278;
                  }
                  else {
                    dVar30 = (double)local_838 - local_410 * local_768;
                    dVar26 = local_768 + (double)local_808;
                    dVar23 = dVar26;
                    if (dVar26 <= dVar30) {
                      dVar23 = dVar30;
                    }
                    local_8a8 = (double ***)
                                (*(code *)PTR_round_with_step_f64_001dd0c8)
                                          (~-(ulong)NAN(dVar30) & (ulong)dVar23 |
                                           -(ulong)NAN(dVar30) & (ulong)dVar26,1);
                    dVar23 = 1.97626258336499e-323;
                    if ((ulong)local_408 < 4) {
                      dVar23 = local_408;
                    }
                    iVar7 = SUB84(dVar23,0);
                    if ((long)local_408 < 1) {
                      iVar7 = 1;
                    }
                    local_758 = (double *)0x0;
                    pppdStack_750 = (double ***)&DAT_00000008;
                    local_748 = (double **)0x0;
                    /* try { // try from 0013be70 to 0013be89 has its CatchHandler @ 0013cfad */
                    pppdVar9 = (double ***)
                               strategy_comm3::cancel_order_use_range
                                         (local_8a8,
                                          *(double *)((long)local_110 + (ulong)(uint)(iVar7 << 4)) -
                                          (double)local_110[0],local_8b8,local_868,local_860,0,
                                          &local_758);
                    if (pppdVar9 != (double ***)0x0) goto LAB_0013be96;
                    /* try { // try from 0013cb34 to 0013cbb5 has its CatchHandler @ 0013cfad */
                    strategy_comm3::live_pending_counts
                              (local_8b8,local_868,local_860,pppdStack_750,local_748);
                    local_848 = (double *)0x0;
                    if ((extraout_RDX_00 == 0) &&
                       (local_848 = (double *)CONCAT44(uStack_894,local_898), 0.0 < dStack_418)) {
                      dVar30 = (double)((ulong)dStack_418 ^ _s__00117940);
                      dVar23 = (double)CONCAT44(uStack_894,local_898);
                      dVar26 = dVar30;
                      if (dVar30 <= dVar23) {
                        dVar26 = dVar23;
                      }
                      local_848 = (double *)
                                  (*(code *)PTR_round_with_step_f64_001dd0c8)
                                            (~-(ulong)NAN(dVar23) & (ulong)dVar26 |
                                             -(ulong)NAN(dVar23) & (ulong)dVar30,local_798,1);
                    }
                    local_888 = local_420;
                    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&local_758);
                    local_898 = (uint)local_848;
                    uStack_894 = (undefined4)((ulong)local_848 >> 0x20);
                    dStack_890 = 0.0;
                  }
                  if ((double)(_DAT_00117310 & CONCAT44(uStack_894,local_898)) <= DAT_001171e0)
                  goto override_jmp_0013b2e2_case_4;
                  local_798 = pdStack_820;
                  local_848 = pdStack_4b8;
                  pcStack_778 = "H";
                  if (local_8b9 != '\0') {
                    pcStack_778 = "L";
                  }
                  uStack_770 = 1;
                  local_638 = (double *)0x117fa2;
                  if (bVar17 != 0) {
                    local_638 = (double *)0x117fa3;
                  }
                  pppdStack_630 = (double ***)0x1;
                  local_758 = &dStack_7a0;
                  pppdStack_750 = (double ***)puVar15;
                  local_748 = &pdStack_780;
                  puStack_740 = puVar15;
                  local_738 = &local_788;
                  puStack_730 = puVar15;
                  pdStack_728 = &dStack_600;
                  pcStack_720 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                  pdStack_718 = &dStack_7f8;
                  puStack_710 = puVar15;
                  ppcStack_708 = &pcStack_778;
                  pcStack_700 = _<&T_as_core::fmt::Display>::fmt;
                  pcStack_6f0 = _<&T_as_core::fmt::Display>::fmt;
                  local_7e8 = (double *)&DAT_001d7460;
                  pppdStack_7e0 = (double ***)&DAT_00000007;
                  local_7c8 = (double *)0x0;
                  local_7d8 = &local_758;
                  puStack_7d0 = &DAT_00000007;
                    /* try { // try from 0013cd65 to 0013cee5 has its CatchHandler @ 0013cfc1 */
                  ppdStack_6f8 = &local_638;
                  (*(code *)PTR_format_inner_001dcfe0)(&uStack_1c0,&local_7e8);
                  uStack_1e0 = 0x802;
                  dStack_210 = (double)local_8a8;
                  uStack_208 = CONCAT44(uStack_894,local_898);
                  pdStack_200 = local_808;
                  pdStack_1f8 = local_798;
                  pdStack_1f0 = local_818;
                  pdStack_1e8 = local_848;
                  uStack_228 = uStack_1c0;
                  uStack_220 = uStack_1b8;
                  uStack_218 = uStack_1b0;
                  pppdVar9 = (double ***)strategy_comm3::place(local_888,local_8b8,&uStack_228);
                  if (pppdVar9 == (double ***)0x0) {
                    if (local_400 == '\x01') {
                      (*(code *)PTR_clone_001dcff8)
                                (&local_638,&local_870,
                                 &PTR_s_strategies_comm_strategy_strateg_001d7500);
                      local_7e8 = local_808;
                      pppdStack_7e0 = local_838;
                      local_7d8 = local_850;
                      hashbrown::map::HashMap<K,V,S,A>::insert
                                (&local_758,local_7f0 + 0x39,&local_638,&local_7e8);
                    }
                    goto override_jmp_0013b2e2_case_4;
                  }
                  break;
                case 3:
                  if (((double)local_848 < _DAT_001172d8) &&
                     (dStack_7f8 < (double)local_4b0 / _DAT_001172d0)) goto LAB_0013bc00;
                  if (0.0 <= (double)local_848) goto override_jmp_0013b2e2_case_4;
                  dVar23 = (double)(~-(ulong)(local_480 < 0.0) & (ulong)local_480 |
                                   -(ulong)(local_480 < 0.0) & _DAT_001171a0);
                  dVar30 = ((double)(~-(ulong)(dStack_478 < 0.0) & (ulong)dStack_478 |
                                    _DAT_001171a0 & -(ulong)(dStack_478 < 0.0)) / local_5d8) /
                           (double)local_838;
                  dVar26 = dVar30;
                  if (dVar23 <= dVar30) {
                    dVar26 = dVar23;
                  }
                  dVar23 = (double)(~-(ulong)NAN(dVar23) & (ulong)dVar26 |
                                   -(ulong)NAN(dVar23) & (ulong)dVar30);
                  pdVar29 = local_848;
                  if (0.0 <= (double)local_848) {
                    pdVar29 = (double *)0x0;
                  }
                  if ((double)((ulong)pdVar29 ^ _s__00117940) <= dVar23) {
                    dVar23 = (double)((ulong)pdVar29 ^ _s__00117940);
                  }
                    /* try { // try from 0013b732 to 0013b7b3 has its CatchHandler @ 0013cfc1 */
                  uVar20 = (*(code *)PTR_round_with_step_f64_001dd0c8)(dVar23,local_798,1);
                  local_898 = (uint)uVar20;
                  uStack_894 = (undefined4)((ulong)uVar20 >> 0x20);
                  dStack_890 = extraout_XMM0_Qb_00;
                  if (bVar17 == 0) {
                    pppdVar9 = (double ***)(*(code *)PTR_cancel_all_001dd0d0)(local_8b8);
                    if (pppdVar9 != (double ***)0x0) break;
                    if ((DAT_001171e0 < (double)((ulong)local_888 & _DAT_00117310)) &&
                       (DAT_001171e0 < (double)(_DAT_00117310 & (ulong)local_3f8))) {
                      dVar23 = (double)((ulong)((double)pdStack_820 / local_3f8) & _DAT_00117310) +
                               _s__00117180;
                      if (dVar23 <= 0.0) {
                        dVar23 = 0.0;
                      }
                      pdVar27 = (double *)((double)local_8a8 + local_888 * dVar23);
                      pdVar29 = local_5e8;
                      if ((double)pdVar27 <= (double)local_5e8) {
                        pdVar29 = pdVar27;
                      }
                      local_8a8 = (double ***)
                                  (-(ulong)NAN((double)pdVar27) & (ulong)local_5e8 |
                                  ~-(ulong)NAN((double)pdVar27) & (ulong)pdVar29);
                      dStack_8a0 = dStack_5e0;
                    }
                    local_8a8 = (double ***)
                                (*(code *)PTR_round_with_step_f64_001dd0c8)
                                          (((double)local_8a8 + (double)DAT_001171f8) *
                                           (double)local_838,local_768,1);
                    local_888 = _s__00117278;
                  }
                  else {
                    dVar30 = local_410 * local_768 + (double)local_808;
                    dVar26 = (double)local_838 - local_768;
                    dVar23 = dVar26;
                    if (dVar30 <= dVar26) {
                      dVar23 = dVar30;
                    }
                    local_8a8 = (double ***)
                                (*(code *)PTR_round_with_step_f64_001dd0c8)
                                          (~-(ulong)NAN(dVar30) & (ulong)dVar23 |
                                           -(ulong)NAN(dVar30) & (ulong)dVar26,1);
                    dVar23 = 1.97626258336499e-323;
                    if ((ulong)local_408 < 4) {
                      dVar23 = local_408;
                    }
                    iVar7 = SUB84(dVar23,0);
                    if ((long)local_408 < 1) {
                      iVar7 = 1;
                    }
                    local_758 = (double *)0x0;
                    pppdStack_750 = (double ***)&DAT_00000008;
                    local_748 = (double **)0x0;
                    /* try { // try from 0013b810 to 0013b8cc has its CatchHandler @ 0013cfab */
                    pppdVar9 = (double ***)
                               strategy_comm3::cancel_order_use_range
                                         (local_8a8,
                                          (double)local_c0[0] -
                                          *(double *)((long)local_c0 + (ulong)(uint)(iVar7 << 4)),
                                          local_8b8,local_868,local_860,1,&local_758);
                    if (pppdVar9 != (double ***)0x0) goto LAB_0013be96;
                    lVar8 = strategy_comm3::live_pending_counts
                                      (local_8b8,local_868,local_860,pppdStack_750,local_748);
                    local_818 = (double *)0x0;
                    if ((lVar8 == 0) &&
                       (local_818 = (double *)CONCAT44(uStack_894,local_898), 0.0 < dStack_418)) {
                      dVar26 = (double)CONCAT44(uStack_894,local_898);
                      dVar23 = dStack_418;
                      if (dVar26 <= dStack_418) {
                        dVar23 = dVar26;
                      }
                      local_818 = (double *)
                                  (*(code *)PTR_round_with_step_f64_001dd0c8)
                                            (~-(ulong)NAN(dVar26) & (ulong)dVar23 |
                                             -(ulong)NAN(dVar26) & (ulong)dStack_418,local_798,1);
                    }
                    local_888 = local_420;
                    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&local_758);
                    local_898 = (uint)local_818;
                    uStack_894 = (undefined4)((ulong)local_818 >> 0x20);
                    dStack_890 = 0.0;
                  }
                  if ((double)(_DAT_00117310 & CONCAT44(uStack_894,local_898)) <= DAT_001171e0)
                  goto override_jmp_0013b2e2_case_4;
                  local_848 = pdStack_820;
                  local_818 = pdStack_4b8;
                  pcStack_778 = "H";
                  if (local_8b9 != '\0') {
                    pcStack_778 = "L";
                  }
                  uStack_770 = 1;
                  local_638 = (double *)0x117fa2;
                  if (bVar17 != 0) {
                    local_638 = (double *)0x117fa3;
                  }
                  pppdStack_630 = (double ***)0x1;
                  local_758 = &dStack_7a0;
                  pppdStack_750 = (double ***)puVar15;
                  local_748 = &pdStack_780;
                  puStack_740 = puVar15;
                  local_738 = &local_788;
                  puStack_730 = puVar15;
                  pdStack_728 = &dStack_600;
                  pcStack_720 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                  pdStack_718 = &dStack_7f8;
                  puStack_710 = puVar15;
                  ppcStack_708 = &pcStack_778;
                  pcStack_700 = _<&T_as_core::fmt::Display>::fmt;
                  pcStack_6f0 = _<&T_as_core::fmt::Display>::fmt;
                  local_7e8 = (double *)&DAT_001d7460;
                  pppdStack_7e0 = (double ***)&DAT_00000007;
                  local_7c8 = (double *)0x0;
                  local_7d8 = &local_758;
                  puStack_7d0 = &DAT_00000007;
                  ppdStack_6f8 = &local_638;
                  (*(code *)PTR_format_inner_001dcfe0)(&uStack_190,&local_7e8);
                  bStack_29f = local_3b8._0_1_ | 6;
                  uStack_2a0 = 3;
                  dStack_2d0 = (double)local_8a8;
                  uStack_2c8 = CONCAT44(uStack_894,local_898);
                  pppdStack_2c0 = local_838;
                  pdStack_2b8 = local_848;
                  dStack_2b0 = local_368;
                  pdStack_2a8 = local_818;
                  uStack_2e8 = uStack_190;
                  uStack_2e0 = uStack_188;
                  uStack_2d8 = uStack_180;
                  pppdVar9 = (double ***)strategy_comm3::place(local_888,local_8b8,&uStack_2e8);
                  if (pppdVar9 == (double ***)0x0) {
                    if (local_400 == '\x01') {
                      (*(code *)PTR_clone_001dcff8)
                                (&local_638,&local_870,
                                 &PTR_s_strategies_comm_strategy_strateg_001d7518);
                      local_7e8 = local_808;
                      pppdStack_7e0 = local_838;
                      local_7d8 = local_850;
                      hashbrown::map::HashMap<K,V,S,A>::insert
                                (&local_758,local_7f0 + 0x39,&local_638,&local_7e8);
                    }
                    goto override_jmp_0013b2e2_case_4;
                  }
                  break;
                case 4:
                  goto override_jmp_0013b2e2_case_4;
                }
                if (dStack_600 != 0.0) {
                  (*(code *)PTR___rust_dealloc_001dcef0)(uStack_5f8,dStack_600,1);
                }
              }
            }
          }
joined_r0x0013b0e6:
          if (local_138 != 0) {
            (*(code *)PTR___rust_dealloc_001dcef0)(local_130,local_138,1);
          }
        }
        if (local_5a8 != 0) {
          (*(code *)PTR___rust_dealloc_001dcef0)(local_5a0,local_5a8,1);
        }
        if (local_870 != 0.0) {
          (*(code *)PTR___rust_dealloc_001dcef0)(local_868,local_870,1);
        }
        local_838 = local_5b8;
        lVar13 = local_5b0;
        goto LAB_0013a5ca;
      }
      break;
    }
  }
  pppdVar9 = (double ***)0x0;
LAB_0013a5ca:
  puVar15 = PTR___rust_dealloc_001dcef0;
  if (lVar13 != 0) {
    pppdVar19 = local_838 + 1;
    do {
      if (pppdVar19[-1] != (double **)0x0) {
        (*(code *)puVar15)(*pppdVar19,pppdVar19[-1],1);
      }
      pppdVar19 = pppdVar19 + 3;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
LAB_0013a612:
  if (local_5c0 != 0) {
    (*(code *)PTR___rust_dealloc_001dcef0)(local_838,local_5c0 * 0x18,8);
  }
  goto LAB_0013a4bf;
}




// ELF address 0x0000000000061f20; fb_strategy_sdk_abi_version

undefined8 fb_strategy_sdk_abi_version(void)

{
  return 4;
}




// ELF address 0x0000000000061f30; fb_strategy_sdk_version_str

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
  (*(code *)PTR_memcpy_001dcf50)(param_1,&DAT_00118dea,uVar2);
  if (param_2 != 0) {
    *(undefined1 *)(param_1 + uVar2) = 0;
  }
  return uVar2;
}


