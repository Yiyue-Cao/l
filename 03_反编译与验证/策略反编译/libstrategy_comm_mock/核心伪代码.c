// ELF address 0x00000000000391f0; strategy_comm_mock::Comm3Params::signal_mode

/* strategy_comm_mock::Comm3Params::signal_mode */

ulong __rustcall strategy_comm_mock::Comm3Params::signal_mode(ushort *param_1,long param_2)

{
  if (param_2 != 3) {
    return 0;
  }
  if ((char)param_1[1] != '2' || (short)(*param_1 ^ 0x5650) != 0) {
    return (ulong)((uint)((char)param_1[1] == '4' && *param_1 == 0x5650) * 3);
  }
  return CONCAT71((uint7)(uint3)((*param_1 ^ 0x5650) >> 8),1);
}




// ELF address 0x0000000000039340; strategy_comm_mock::Comm3Params::low_action_enum

/* strategy_comm_mock::Comm3Params::low_action_enum */

bool __rustcall strategy_comm_mock::Comm3Params::low_action_enum(int *param_1,long param_2)

{
  if (param_2 == 5) {
    return (bool)(((char)param_1[1] == 'r' && *param_1 == 0x656b616d) * '\x02');
  }
  if (param_2 == 4) {
    return *param_1 == 0x70696b73;
  }
  return false;
}




// ELF address 0x0000000000039230; strategy_comm_mock::Comm3Params::signal_trigger_mode

/* strategy_comm_mock::Comm3Params::signal_trigger_mode */

short __rustcall strategy_comm_mock::Comm3Params::signal_trigger_mode(long *param_1,long param_2)

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
      auVar3[0] = -((char)*param_1 == s_WindowsStdTrigge_00117d70[0]);
      auVar3[1] = -(*(char *)((long)param_1 + 1) == s_WindowsStdTrigge_00117d70[1]);
      auVar3[2] = -(*(char *)((long)param_1 + 2) == s_WindowsStdTrigge_00117d70[2]);
      auVar3[3] = -(*(char *)((long)param_1 + 3) == s_WindowsStdTrigge_00117d70[3]);
      auVar3[4] = -(*(char *)((long)param_1 + 4) == s_WindowsStdTrigge_00117d70[4]);
      auVar3[5] = -(*(char *)((long)param_1 + 5) == s_WindowsStdTrigge_00117d70[5]);
      auVar3[6] = -(*(char *)((long)param_1 + 6) == s_WindowsStdTrigge_00117d70[6]);
      auVar3[7] = -(*(char *)((long)param_1 + 7) == s_WindowsStdTrigge_00117d70[7]);
      auVar3[8] = -((char)param_1[1] == s_WindowsStdTrigge_00117d70[8]);
      auVar3[9] = -(*(char *)((long)param_1 + 9) == s_WindowsStdTrigge_00117d70[9]);
      auVar3[10] = -(*(char *)((long)param_1 + 10) == s_WindowsStdTrigge_00117d70[10]);
      auVar3[0xb] = -(*(char *)((long)param_1 + 0xb) == s_WindowsStdTrigge_00117d70[0xb]);
      auVar3[0xc] = -(*(char *)((long)param_1 + 0xc) == s_WindowsStdTrigge_00117d70[0xc]);
      auVar3[0xd] = -(*(char *)((long)param_1 + 0xd) == s_WindowsStdTrigge_00117d70[0xd]);
      auVar3[0xe] = -(*(char *)((long)param_1 + 0xe) == s_WindowsStdTrigge_00117d70[0xe]);
      auVar3[0xf] = -(*(char *)((long)param_1 + 0xf) == s_WindowsStdTrigge_00117d70[0xf]);
      auVar7[0] = -((char)param_1[2] == s_r_00117b10[0]);
      auVar7[1] = -(s_r_00117b10[1] == '\0');
      auVar7[2] = -(s_r_00117b10[2] == '\0');
      auVar7[3] = -(s_r_00117b10[3] == '\0');
      auVar7[4] = -(UNK_00117b14 == '\0');
      auVar7[5] = -(UNK_00117b15 == '\0');
      auVar7[6] = -(UNK_00117b16 == '\0');
      auVar7[7] = -(UNK_00117b17 == '\0');
      auVar7[8] = -(UNK_00117b18 == '\0');
      auVar7[9] = -(UNK_00117b19 == '\0');
      auVar7[10] = -(UNK_00117b1a == '\0');
      auVar7[0xb] = -(UNK_00117b1b == '\0');
      auVar7[0xc] = -(UNK_00117b1c == '\0');
      auVar7[0xd] = -(UNK_00117b1d == '\0');
      auVar7[0xe] = -(UNK_00117b1e == '\0');
      auVar7[0xf] = -(UNK_00117b1f == '\0');
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
      auVar5[0] = -((char)*param_1 == s_WindowsMeanTrigg_001179f0[0]);
      auVar5[1] = -(*(char *)((long)param_1 + 1) == s_WindowsMeanTrigg_001179f0[1]);
      auVar5[2] = -(*(char *)((long)param_1 + 2) == s_WindowsMeanTrigg_001179f0[2]);
      auVar5[3] = -(*(char *)((long)param_1 + 3) == s_WindowsMeanTrigg_001179f0[3]);
      auVar5[4] = -(*(char *)((long)param_1 + 4) == s_WindowsMeanTrigg_001179f0[4]);
      auVar5[5] = -(*(char *)((long)param_1 + 5) == s_WindowsMeanTrigg_001179f0[5]);
      auVar5[6] = -(*(char *)((long)param_1 + 6) == s_WindowsMeanTrigg_001179f0[6]);
      auVar5[7] = -(*(char *)((long)param_1 + 7) == s_WindowsMeanTrigg_001179f0[7]);
      auVar5[8] = -((char)param_1[1] == s_WindowsMeanTrigg_001179f0[8]);
      auVar5[9] = -(*(char *)((long)param_1 + 9) == s_WindowsMeanTrigg_001179f0[9]);
      auVar5[10] = -(*(char *)((long)param_1 + 10) == s_WindowsMeanTrigg_001179f0[10]);
      auVar5[0xb] = -(*(char *)((long)param_1 + 0xb) == s_WindowsMeanTrigg_001179f0[0xb]);
      auVar5[0xc] = -(*(char *)((long)param_1 + 0xc) == s_WindowsMeanTrigg_001179f0[0xc]);
      auVar5[0xd] = -(*(char *)((long)param_1 + 0xd) == s_WindowsMeanTrigg_001179f0[0xd]);
      auVar5[0xe] = -(*(char *)((long)param_1 + 0xe) == s_WindowsMeanTrigg_001179f0[0xe]);
      auVar5[0xf] = -(*(char *)((long)param_1 + 0xf) == s_WindowsMeanTrigg_001179f0[0xf]);
      auVar9[0] = -((char)(short)param_1[2] == DAT_00117990);
      auVar9[1] = -((char)((ushort)(short)param_1[2] >> 8) == UNK_00117991);
      auVar9[2] = -(UNK_00117992 == '\0');
      auVar9[3] = -(UNK_00117993 == '\0');
      auVar9[4] = -(UNK_00117994 == '\0');
      auVar9[5] = -(UNK_00117995 == '\0');
      auVar9[6] = -(UNK_00117996 == '\0');
      auVar9[7] = -(UNK_00117997 == '\0');
      auVar9[8] = -(UNK_00117998 == '\0');
      auVar9[9] = -(UNK_00117999 == '\0');
      auVar9[10] = -(UNK_0011799a == '\0');
      auVar9[0xb] = -(UNK_0011799b == '\0');
      auVar9[0xc] = -(UNK_0011799c == '\0');
      auVar9[0xd] = -(UNK_0011799d == '\0');
      auVar9[0xe] = -(UNK_0011799e == '\0');
      auVar9[0xf] = -(UNK_0011799f == '\0');
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
      auVar4[0] = -((char)uVar1 == s_gger_00117af0[0]);
      auVar4[1] = -((char)((uint)uVar1 >> 8) == s_gger_00117af0[1]);
      auVar4[2] = -((char)((uint)uVar1 >> 0x10) == s_gger_00117af0[2]);
      auVar4[3] = -((char)((uint)uVar1 >> 0x18) == s_gger_00117af0[3]);
      auVar4[4] = -(s_gger_00117af0[4] == '\0');
      auVar4[5] = -(s_gger_00117af0[5] == '\0');
      auVar4[6] = -(s_gger_00117af0[6] == '\0');
      auVar4[7] = -(s_gger_00117af0[7] == '\0');
      auVar4[8] = -(UNK_00117af8 == '\0');
      auVar4[9] = -(UNK_00117af9 == '\0');
      auVar4[10] = -(UNK_00117afa == '\0');
      auVar4[0xb] = -(UNK_00117afb == '\0');
      auVar4[0xc] = -(UNK_00117afc == '\0');
      auVar4[0xd] = -(UNK_00117afd == '\0');
      auVar4[0xe] = -(UNK_00117afe == '\0');
      auVar4[0xf] = -(UNK_00117aff == '\0');
      auVar8[0] = -((char)*param_1 == s_WindowsSharpeTri_00117b00[0]);
      auVar8[1] = -(*(char *)((long)param_1 + 1) == s_WindowsSharpeTri_00117b00[1]);
      auVar8[2] = -(*(char *)((long)param_1 + 2) == s_WindowsSharpeTri_00117b00[2]);
      auVar8[3] = -(*(char *)((long)param_1 + 3) == s_WindowsSharpeTri_00117b00[3]);
      auVar8[4] = -(*(char *)((long)param_1 + 4) == s_WindowsSharpeTri_00117b00[4]);
      auVar8[5] = -(*(char *)((long)param_1 + 5) == s_WindowsSharpeTri_00117b00[5]);
      auVar8[6] = -(*(char *)((long)param_1 + 6) == s_WindowsSharpeTri_00117b00[6]);
      auVar8[7] = -(*(char *)((long)param_1 + 7) == s_WindowsSharpeTri_00117b00[7]);
      auVar8[8] = -((char)param_1[1] == s_WindowsSharpeTri_00117b00[8]);
      auVar8[9] = -(*(char *)((long)param_1 + 9) == s_WindowsSharpeTri_00117b00[9]);
      auVar8[10] = -(*(char *)((long)param_1 + 10) == s_WindowsSharpeTri_00117b00[10]);
      auVar8[0xb] = -(*(char *)((long)param_1 + 0xb) == s_WindowsSharpeTri_00117b00[0xb]);
      auVar8[0xc] = -(*(char *)((long)param_1 + 0xc) == s_WindowsSharpeTri_00117b00[0xc]);
      auVar8[0xd] = -(*(char *)((long)param_1 + 0xd) == s_WindowsSharpeTri_00117b00[0xd]);
      auVar8[0xe] = -(*(char *)((long)param_1 + 0xe) == s_WindowsSharpeTri_00117b00[0xe]);
      auVar8[0xf] = -(*(char *)((long)param_1 + 0xf) == s_WindowsSharpeTri_00117b00[0xf]);
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
      auVar10[0] = -(*(char *)((long)param_1 + 6) == DAT_00117dd0);
      auVar10[1] = -(*(char *)((long)param_1 + 7) == UNK_00117dd1);
      auVar10[2] = -((char)param_1[1] == UNK_00117dd2);
      auVar10[3] = -(*(char *)((long)param_1 + 9) == UNK_00117dd3);
      auVar10[4] = -(*(char *)((long)param_1 + 10) == UNK_00117dd4);
      auVar10[5] = -(*(char *)((long)param_1 + 0xb) == UNK_00117dd5);
      auVar10[6] = -(*(char *)((long)param_1 + 0xc) == UNK_00117dd6);
      auVar10[7] = -(*(char *)((long)param_1 + 0xd) == UNK_00117dd7);
      auVar10[8] = -(*(char *)((long)param_1 + 0xe) == UNK_00117dd8);
      auVar10[9] = -(*(char *)((long)param_1 + 0xf) == UNK_00117dd9);
      auVar10[10] = -((char)param_1[2] == UNK_00117dda);
      auVar10[0xb] = -(*(char *)((long)param_1 + 0x11) == UNK_00117ddb);
      auVar10[0xc] = -(*(char *)((long)param_1 + 0x12) == UNK_00117ddc);
      auVar10[0xd] = -(*(char *)((long)param_1 + 0x13) == UNK_00117ddd);
      auVar10[0xe] = -(*(char *)((long)param_1 + 0x14) == UNK_00117dde);
      auVar10[0xf] = -(*(char *)((long)param_1 + 0x15) == UNK_00117ddf);
      auVar6[0] = -((char)*param_1 == DAT_00117a20);
      auVar6[1] = -(*(char *)((long)param_1 + 1) == UNK_00117a21);
      auVar6[2] = -(*(char *)((long)param_1 + 2) == UNK_00117a22);
      auVar6[3] = -(*(char *)((long)param_1 + 3) == UNK_00117a23);
      auVar6[4] = -(*(char *)((long)param_1 + 4) == UNK_00117a24);
      auVar6[5] = -(*(char *)((long)param_1 + 5) == UNK_00117a25);
      auVar6[6] = -(*(char *)((long)param_1 + 6) == UNK_00117a26);
      auVar6[7] = -(*(char *)((long)param_1 + 7) == UNK_00117a27);
      auVar6[8] = -((char)param_1[1] == UNK_00117a28);
      auVar6[9] = -(*(char *)((long)param_1 + 9) == UNK_00117a29);
      auVar6[10] = -(*(char *)((long)param_1 + 10) == UNK_00117a2a);
      auVar6[0xb] = -(*(char *)((long)param_1 + 0xb) == UNK_00117a2b);
      auVar6[0xc] = -(*(char *)((long)param_1 + 0xc) == UNK_00117a2c);
      auVar6[0xd] = -(*(char *)((long)param_1 + 0xd) == UNK_00117a2d);
      auVar6[0xe] = -(*(char *)((long)param_1 + 0xe) == UNK_00117a2e);
      auVar6[0xf] = -(*(char *)((long)param_1 + 0xf) == UNK_00117a2f);
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




// ELF address 0x000000000005e470; strategy_comm_mock::signal_trigger::SignalTrigger::update_score

/* strategy_comm_mock::signal_trigger::SignalTrigger::update_score */

void __rustcall
strategy_comm_mock::signal_trigger::SignalTrigger::update_score
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
LAB_0015e642:
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
          goto LAB_0015e642;
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




// ELF address 0x000000000005f300; strategy_comm_mock::signal_trigger::SignalTrigger::windows_rsi_trigger

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm_mock::signal_trigger::SignalTrigger::windows_rsi_trigger */

undefined1 * __rustcall
strategy_comm_mock::signal_trigger::SignalTrigger::windows_rsi_trigger
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
      dVar13 = (double)(*(ulong *)((long)pauVar10 + lVar6 + -0x18) & _DAT_00117750);
      uVar12 = -(ulong)(DAT_00117618 < dVar13);
      dVar13 = (double)(~uVar12 & _s__001176e8 |
                       (ulong)(DAT_00117688 -
                              DAT_00117688 /
                              (*(double *)((long)pauVar10 + lVar6 + -0x20) / dVar13 + DAT_00117630))
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
                    /* try { // try from 0015f4a3 to 0015f4b3 has its CatchHandler @ 0015f505 */
        alloc::raw_vec::RawVec<T,A>::grow_one
                  (&local_90,anon_b8312b07175a16823579d7f1f12338b6_5_llvm_9348514807243868232);
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




// ELF address 0x000000000005e8e0; strategy_comm_mock::signal_trigger::SignalTrigger::windows_std_trigger

/* strategy_comm_mock::signal_trigger::SignalTrigger::windows_std_trigger */

undefined1 * __rustcall
strategy_comm_mock::signal_trigger::SignalTrigger::windows_std_trigger
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
                    /* try { // try from 0015e93c to 0015e951 has its CatchHandler @ 0015e9c7 */
  local_80 = param_1;
  local_20 = param_3;
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (&local_78,&local_48,anon_2f99fdb6c6ea4837581494ade133b282_11_llvm_2385902288926793999);
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
      (*(code *)PTR___rust_dealloc_001e0298)(local_70,local_78,1);
    }
    *(long *)(param_2 + 8) = lVar2;
    uVar3 = 5;
  }
  *param_2 = uVar3;
  return param_2;
}




// ELF address 0x000000000005e7d0; strategy_comm_mock::signal_trigger::SignalTrigger::windows_mean_trigger

/* strategy_comm_mock::signal_trigger::SignalTrigger::windows_mean_trigger */

undefined1 * __rustcall
strategy_comm_mock::signal_trigger::SignalTrigger::windows_mean_trigger
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
                    /* try { // try from 0015e82c to 0015e841 has its CatchHandler @ 0015e8b7 */
  local_80 = param_1;
  local_20 = param_3;
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (&local_78,&local_48,anon_2f99fdb6c6ea4837581494ade133b282_11_llvm_2385902288926793999);
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
      (*(code *)PTR___rust_dealloc_001e0298)(local_70,local_78,1);
    }
    *(long *)(param_2 + 8) = lVar2;
    uVar3 = 5;
  }
  *param_2 = uVar3;
  return param_2;
}




// ELF address 0x000000000005f0b0; strategy_comm_mock::signal_trigger::SignalTrigger::windows_sharpe_trigger

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm_mock::signal_trigger::SignalTrigger::windows_sharpe_trigger */

undefined1 * __rustcall
strategy_comm_mock::signal_trigger::SignalTrigger::windows_sharpe_trigger
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
      auVar14._12_4_ = _UNK_001178b4;
      dVar1 = *(double *)((long)pauVar11 + lVar6 + -0x38);
      dVar15 = *(double *)((long)pauVar11 + lVar6 + -0x30) /
               ((auVar14._8_8_ - _UNK_00117778) +
               ((double)CONCAT44(_s__001178b0,(int)lVar7) - _s__00117770)) - dVar1 * dVar1;
      dVar13 = 0.0;
      if (dVar15 <= 0.0) {
        dVar15 = dVar13;
      }
      dVar15 = SQRT(dVar15);
      *(double *)((long)pauVar11 + lVar6 + -0x28) = dVar15;
      if (DAT_00117618 < (double)((ulong)dVar15 & _DAT_00117750)) {
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
                    /* try { // try from 0015f273 to 0015f283 has its CatchHandler @ 0015f2d5 */
        alloc::raw_vec::RawVec<T,A>::grow_one
                  (&local_90,anon_b8312b07175a16823579d7f1f12338b6_4_llvm_9348514807243868232);
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




// ELF address 0x000000000005e740; strategy_comm_mock::signal_trigger::SignalTrigger::point_signal_trigger_pv4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm_mock::signal_trigger::SignalTrigger::point_signal_trigger_pv4 */

void __rustcall
strategy_comm_mock::signal_trigger::SignalTrigger::point_signal_trigger_pv4
          (double param_1,double param_2,ulong param_3,undefined1 *param_4,long param_5)

{
  undefined1 uVar1;
  double dVar2;
  
  dVar2 = *(double *)(param_5 + 0x38);
  param_1 = ((double)(param_3 & _DAT_00117750) + param_2) * param_1;
  if (dVar2 <= 0.0) {
    dVar2 = param_1 + dVar2;
    if (0.0 <= dVar2) {
      dVar2 = 0.0;
    }
    if (dVar2 < *(double *)(param_5 + 0x40)) goto LAB_0015e797;
  }
  else {
    dVar2 = dVar2 - param_1;
    if (dVar2 <= 0.0) {
      dVar2 = 0.0;
    }
    if (dVar2 < *(double *)(param_5 + 0x40)) {
LAB_0015e797:
      uVar1 = 3;
      if (((dVar2 < *(double *)(param_5 + 0x58)) && (uVar1 = 2, *(double *)(param_5 + 0x50) < dVar2)
          ) && (uVar1 = 4, dVar2 <= *(double *)(param_5 + 0x48))) {
        *param_4 = 1;
        *(undefined8 *)(param_4 + 8) = 0x3ff0000000000000;
        return;
      }
      goto LAB_0015e777;
    }
  }
  uVar1 = 0;
LAB_0015e777:
  *param_4 = uVar1;
  *(undefined8 *)(param_4 + 8) = 0x3ff0000000000000;
  return;
}




// ELF address 0x000000000005e9f0; strategy_comm_mock::signal_trigger::SignalTrigger::windows_quantile_trigger

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm_mock::signal_trigger::SignalTrigger::windows_quantile_trigger */

undefined1 * __rustcall
strategy_comm_mock::signal_trigger::SignalTrigger::windows_quantile_trigger
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
  if ((param_1 < 0.0) || (DAT_00117630 < param_1)) {
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
LAB_0015efff:
                    /* try { // try from 0015efff to 0015f00f has its CatchHandler @ 0015f07a */
      uVar12 = anyhow::error::_<impl_anyhow::Error>::msg
                         ("quantile not foundinternal error: entered unreachable code: invalid Once state"
                          ,0x12);
      *(undefined8 *)(param_3 + 8) = uVar12;
      *param_3 = 5;
      if (local_f0 == 0) {
        return param_3;
      }
      (*(code *)PTR___rust_dealloc_001e0298)(local_e8,local_f0,1);
      return param_3;
    }
  }
  else {
    uVar19 = ~(uint)uVar1;
    dVar23 = DAT_00117630 - param_1;
    local_48 = param_1;
    if ((dVar23 < 0.0) || (DAT_00117630 < dVar23)) {
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
          auVar22._12_4_ = _UNK_001178b4;
          param_1 = param_1 * ((auVar22._8_8_ - _UNK_00117778) +
                              ((double)CONCAT44(_s__001178b0,(int)uVar15) - _s__00117770));
          uVar8 = 0;
          if (0.0 <= param_1) {
            uVar8 = (long)(param_1 - _DAT_00117658) & (long)param_1 >> 0x3f | (long)param_1;
          }
          uVar11 = 0xffffffffffffffff;
          if (param_1 <= _DAT_00117598) {
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
                    /* try { // try from 0015efe0 to 0015efe7 has its CatchHandler @ 0015f07c */
              lVar9 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                      ::next(&uStack_d8);
              if (lVar9 == 0) goto LAB_0015efff;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
                    /* try { // try from 0015eff2 to 0015effb has its CatchHandler @ 0015f076 */
          _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>::
          next(&uStack_d8);
        }
        goto LAB_0015efff;
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
          if (uVar15 == 0) goto LAB_0015efff;
          auVar20._8_4_ = (int)(uVar15 >> 0x20);
          auVar20._0_8_ = uVar15;
          auVar20._12_4_ = _UNK_001178b4;
          dVar23 = ((auVar20._8_8_ - _UNK_00117778) +
                   ((double)CONCAT44(_s__001178b0,(int)uVar15) - _s__00117770)) * local_48;
          uVar8 = (long)(dVar23 - _DAT_00117658) & (long)dVar23 >> 0x3f | (long)dVar23;
          if (dVar23 < DAT_00117650) {
            uVar8 = 0;
          }
          if (_DAT_00117598 < dVar23) {
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
                    /* try { // try from 0015ec00 to 0015ec09 has its CatchHandler @ 0015f080 */
              lVar9 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                      ::next(&uStack_d8);
              if (lVar9 == 0) goto LAB_0015efff;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
                    /* try { // try from 0015ec18 to 0015ec21 has its CatchHandler @ 0015f078 */
          pdVar10 = (double *)
                    _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                    ::next(&uStack_d8);
          if ((pdVar10 == (double *)0x0) ||
             (uVar15 = *(ulong *)((long)pauVar16 + lVar18 + -0x60), uVar15 == 0)) goto LAB_0015efff;
          auVar21._8_4_ = (int)(uVar15 >> 0x20);
          auVar21._0_8_ = uVar15;
          auVar21._12_4_ = _UNK_001178b4;
          dVar23 = ((auVar21._8_8_ - _UNK_00117778) +
                   ((double)CONCAT44(_s__001178b0,(int)uVar15) - _s__00117770)) * local_58;
          uVar8 = 0;
          if (DAT_00117650 <= dVar23) {
            uVar8 = (long)(dVar23 - _DAT_00117658) & (long)dVar23 >> 0x3f | (long)dVar23;
          }
          if (_DAT_00117598 < dVar23) {
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
                    /* try { // try from 0015ed10 to 0015ed19 has its CatchHandler @ 0015f07e */
              lVar9 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                      ::next(&uStack_d8);
              if (lVar9 == 0) goto LAB_0015efff;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
                    /* try { // try from 0015ed28 to 0015ee3d has its CatchHandler @ 0015f078 */
          pdVar10 = (double *)
                    _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                    ::next(&uStack_d8);
          uVar15 = local_e0;
          if (pdVar10 == (double *)0x0) goto LAB_0015efff;
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
                       PTR_anon_b8312b07175a16823579d7f1f12338b6_0_llvm_9348514807243868232_001db238
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




// ELF address 0x000000000005e6b0; strategy_comm_mock::signal_trigger::SignalTrigger::point_signal_trigger_pv1_spread

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm_mock::signal_trigger::SignalTrigger::point_signal_trigger_pv1_spread */

void __rustcall
strategy_comm_mock::signal_trigger::SignalTrigger::point_signal_trigger_pv1_spread
          (double param_1,ulong param_2,undefined1 *param_3,long param_4)

{
  undefined1 uVar1;
  double dVar2;
  
  dVar2 = *(double *)(param_4 + 0x38);
  param_1 = (double)(param_2 & _DAT_00117750) * param_1;
  if (dVar2 <= 0.0) {
    dVar2 = param_1 + dVar2;
    if (0.0 <= dVar2) {
      dVar2 = 0.0;
    }
    if (dVar2 < *(double *)(param_4 + 0x40)) goto LAB_0015e703;
  }
  else {
    dVar2 = dVar2 - param_1;
    if (dVar2 <= 0.0) {
      dVar2 = 0.0;
    }
    if (dVar2 < *(double *)(param_4 + 0x40)) {
LAB_0015e703:
      uVar1 = 3;
      if (((dVar2 < *(double *)(param_4 + 0x58)) && (uVar1 = 2, *(double *)(param_4 + 0x50) < dVar2)
          ) && (uVar1 = 4, dVar2 <= *(double *)(param_4 + 0x48))) {
        *param_3 = 1;
        *(undefined8 *)(param_3 + 8) = 0x3ff0000000000000;
        return;
      }
      goto LAB_0015e6e3;
    }
  }
  uVar1 = 0;
LAB_0015e6e3:
  *param_3 = uVar1;
  *(undefined8 *)(param_3 + 8) = 0x3ff0000000000000;
  return;
}




// ELF address 0x000000000005faa0; strategy_comm_mock::signal_trigger::dynamic_threshold

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm_mock::signal_trigger::dynamic_threshold */

void __rustcall
strategy_comm_mock::signal_trigger::dynamic_threshold
          (double param_1,double param_2,double param_3,double param_4,double *param_5,
          double *param_6)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  
  if ((((0.0 <= param_2) && (0.0 <= param_3)) && (param_2 <= param_1)) &&
     (DAT_00117698 < (double)(_DAT_00117750 & (ulong)param_4))) {
    dVar1 = param_3 - param_2;
    if (param_3 - param_2 <= DAT_00117618) {
      dVar1 = DAT_00117618;
    }
    dVar1 = (param_1 - param_2) / dVar1;
    if (DAT_00117630 <= dVar1) {
      dVar1 = DAT_00117630;
    }
    dVar4 = (double)((ulong)(param_4 * dVar1) & _DAT_00117750);
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




// ELF address 0x000000000005f530; _ZN18strategy_comm_mock14signal_trigger17enum_rate_counter17h8b1360ee3ad6c1afE.llvm.9348514807243868232

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm_mock::signal_trigger::enum_rate_counter */

ulong __rustcall strategy_comm_mock::signal_trigger::enum_rate_counter(double param_1,long *param_2)

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
      (*(code *)PTR___rust_dealloc_001e0298)(param_2[1],*param_2,1);
    }
    goto LAB_0015fa2c;
  }
  local_98 = param_1;
  uStack_90 = in_XMM0_Qb;
  pauVar9 = (undefined1 (*) [16])__tls_get_addr(&PTR_001e0640);
  if (pauVar9[1][0] == '\x01') {
    local_a8 = *pauVar9;
  }
  else {
                    /* try { // try from 0015fa40 to 0015fa45 has its CatchHandler @ 0015fa57 */
    local_a8 = (*(code *)PTR_hashmap_random_keys_001e0650)();
    *pauVar9 = local_a8;
    pauVar9[1][0] = 1;
  }
  *(long *)*pauVar9 = local_a8._0_8_ + 1;
  local_b8 = _DAT_001db290;
  lStack_b0 = _UNK_001db298;
  local_c8 = (undefined1 (*) [16])
             PTR_anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263_001db280;
  uStack_c0 = _UNK_001db288;
  pcVar25 = (char *)param_2[1];
  pcVar1 = pcVar25 + lVar3;
  local_68 = pcVar25;
  do {
    cVar14 = *pcVar25;
    local_60 = CONCAT71(local_60._1_7_,cVar14);
                    /* try { // try from 0015f6eb to 0015f765 has its CatchHandler @ 0015fa5c */
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
          goto joined_r0x0015f654;
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
joined_r0x0015f654:
  } while (pcVar25 != pcVar1);
  if (uStack_c0 == 0) {
    uVar13 = 0;
    if (lStack_b0 != 0) goto LAB_0015f7db;
LAB_0015f966:
    dVar34 = 0.0;
    dVar33 = 0.0;
    uVar16 = 4;
    if (uVar17 != 0 && uStack_c0 != 0) {
      (*(code *)PTR___rust_dealloc_001e0298)();
      dVar34 = 0.0;
      dVar33 = 0.0;
    }
  }
  else {
    uVar17 = uStack_c0 * 0x11 + 0x21;
    pauVar9 = local_c8 + (-1 - uStack_c0);
    uVar13 = 0x10;
    if (lStack_b0 == 0) goto LAB_0015f966;
LAB_0015f7db:
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
      (*(code *)PTR___rust_dealloc_001e0298)(pauVar9,uVar17,uVar13);
    }
    auVar29._8_4_ = (int)(uVar21 >> 0x20);
    auVar29._0_8_ = uVar21;
    auVar29._12_4_ = _UNK_001178b4;
    dVar33 = auVar29._8_8_ - _UNK_00117778;
    dVar34 = dVar33 + ((double)CONCAT44(_s__001178b0,(int)uVar21) - _s__00117770);
  }
  dVar34 = dVar34 / (double)lVar3;
  uVar17 = 4;
  if (local_98 < dVar34) {
    uVar17 = uVar16 & 0xff;
  }
  local_98 = (double)(-(ulong)(local_98 < dVar34) & (ulong)dVar34);
  uStack_90 = uStack_90 & (ulong)dVar33;
  if (*param_2 != 0) {
    (*(code *)PTR___rust_dealloc_001e0298)(local_68,*param_2,1);
  }
LAB_0015fa2c:
  return uVar17 & 0xffffffff;
}




// ELF address 0x000000000005e080; strategy_comm_mock::signal_trigger::TsQuantileCalculator::update

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm_mock::signal_trigger::TsQuantileCalculator::update */

void __rustcall
strategy_comm_mock::signal_trigger::TsQuantileCalculator::update
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
    param_4 = &PTR_anon_b8312b07175a16823579d7f1f12338b6_0_llvm_9348514807243868232_001db220;
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
        if (lVar7 == 0) goto LAB_0015e193;
        dVar17 = *pdVar6;
        dVar18 = pdVar6[1];
        param_4 = ppuVar13;
        if (param_2 <= dVar17) {
          if (param_2 < dVar17) goto LAB_0015e193;
LAB_0015e136:
          cVar10 = ((ulong)dVar16 >= (ulong)dVar18 && dVar16 != dVar18) -
                   ((ulong)dVar16 < (ulong)dVar18);
        }
        else {
          cVar10 = '\x01';
          if (param_2 < dVar17) goto LAB_0015e136;
        }
        pdVar6 = pdVar6 + 2;
        lVar7 = lVar7 + -0x10;
        ppuVar13 = (undefined **)((long)ppuVar13 + 1);
      } while (cVar10 == '\x01');
      if (cVar10 == '\0') goto LAB_0015e1e6;
LAB_0015e193:
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
LAB_0015e1e6:
  param_3[8] = param_3[8] + 1;
  dVar16 = (double)param_3[9] + param_2;
  param_3[9] = (ulong)dVar16;
  uVar9 = param_3[10] + 1;
  param_3[10] = uVar9;
  auVar20._8_4_ = (int)(uVar9 >> 0x20);
  auVar20._0_8_ = uVar9;
  auVar20._12_4_ = _UNK_001178b4;
  param_3[0xb] = (ulong)(dVar16 / ((auVar20._8_8_ - _UNK_00117778) +
                                  ((double)CONCAT44(_s__001178b0,(int)uVar9) - _s__00117770)));
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
            if (lVar7 == 0) goto joined_r0x0015e3c8;
            dVar1 = *pdVar5;
            dVar4 = pdVar5[1];
            if (dVar17 <= dVar1) {
              uVar12 = uVar8;
              if (dVar17 < dVar1) goto joined_r0x0015e3c8;
LAB_0015e356:
              cVar10 = ((ulong)dVar18 >= (ulong)dVar4 && dVar18 != dVar4) -
                       ((ulong)dVar18 < (ulong)dVar4);
            }
            else {
              cVar10 = '\x01';
              if (dVar17 < dVar1) goto LAB_0015e356;
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
joined_r0x0015e3c8:
          if (local_78 == 0.0) break;
          local_78 = (double)((long)local_78 - 1);
          local_80 = (double *)local_80[uVar12 + 0x18];
        } while( true );
      }
      dVar16 = dVar16 - dVar17;
      param_3[9] = (ulong)dVar16;
      dVar18 = 0.0;
      if (uVar9 == 0) {
LAB_0015e270:
        uVar9 = 0;
      }
      else {
        uVar9 = uVar9 - 1;
        param_3[10] = uVar9;
        if (uVar9 == 0) goto LAB_0015e270;
        auVar19._8_4_ = (int)(uVar9 >> 0x20);
        auVar19._0_8_ = uVar9;
        auVar19._12_4_ = _UNK_001178b4;
        dVar18 = dVar16 / ((auVar19._8_8_ - _UNK_00117778) +
                          ((double)CONCAT44(_s__001178b0,(int)uVar9) - _s__00117770));
      }
      param_3[0xb] = (ulong)dVar18;
      dVar18 = DAT_00117650;
      param_3[0xc] = (ulong)((double)param_3[0xc] - dVar17 * dVar17);
      param_3[(ulong)(dVar17 <= dVar18) + 0xe] =
           (ulong)((double)param_3[(ulong)(dVar17 <= dVar18) + 0xe] - dVar17);
      uVar8 = param_3[3];
    } while (uVar8 != 0);
  }
  return;
}




// ELF address 0x000000000003a140; strategy_comm_mock::high_taker_rate

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm_mock::high_taker_rate */

double __rustcall
strategy_comm_mock::high_taker_rate
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
    if (((0.0 < param_3) && (DAT_00117630 < param_6)) &&
       (dVar3 = (double)(param_2 & _DAT_00117750), DAT_00117698 <= dVar3)) {
      dVar1 = (double)(param_1 & _DAT_00117750);
      dVar2 = dVar1 / dVar3 + _s__001175b8;
      if (dVar2 <= 0.0) {
        dVar2 = 0.0;
      }
      dVar2 = (double)(*(code *)PTR_tanh_001e0378)(dVar2 * DAT_00117680);
      dVar2 = (param_6 + _s__001175b8) * dVar2 + DAT_00117630;
      param_3 = ((dVar1 - dVar3) * unaff_XMM6_Qa) / param_3;
      dVar3 = param_3;
      if (dVar2 <= param_3) {
        dVar3 = dVar2;
      }
      dVar3 = (double)(-(ulong)NAN(dVar2) & (ulong)param_3 | ~-(ulong)NAN(dVar2) & (ulong)dVar3);
      if (dVar3 <= DAT_00117650) {
        dVar3 = DAT_00117650;
      }
      return dVar4 * dVar3;
    }
  }
  return dVar4;
}




// ELF address 0x000000000005b020; strategy_comm_mock::vol_spread_ratio::VolSpreadRatio::update

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm_mock::vol_spread_ratio::VolSpreadRatio::update */

ulong __rustcall
strategy_comm_mock::vol_spread_ratio::VolSpreadRatio::update
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
  
  dVar11 = DAT_00117680 * (param_2 + param_3);
  dVar9 = (double)(*(code *)PTR_round_001e0630)
                            (((param_3 - param_2) / (param_2 + param_3)) * _DAT_001176a0);
  uVar4 = *param_4;
  uVar1 = param_4[3];
  if (uVar1 == uVar4) {
    alloc::collections::vec_deque::VecDeque<T,A>::grow
              (param_4,anon_4dee3ab0eff5c245c2cc3d18a6e7ca87_44_llvm_1315458490432333045);
    uVar4 = *param_4;
    uVar1 = param_4[3];
  }
  dVar9 = dVar9 / DAT_00117670;
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
    if ((double)param_4[0x29] * DAT_00117680 <= param_1 - *(double *)(uVar4 + lVar2)) {
      dVar9 = *(double *)(lVar2 + uVar4 + 8);
      if (dVar9 <= 0.0) {
        return 0;
      }
      dVar9 = (double)(*(code *)PTR_round_001e0630)
                                ((*(double *)(uVar4 + 8 + (uVar5 - uVar6) * 0x10) / dVar9 +
                                 _s__001175b8) * _DAT_001176a0);
      signal_trigger::TsQuantileCalculator::update(param_1,dVar9 / DAT_00117670,param_4 + 5);
      uVar4 = param_4[0xf];
      uVar1 = 1;
      if (1 < uVar4) {
        uVar1 = uVar4;
      }
      auVar10._8_4_ = (int)(uVar1 >> 0x20);
      auVar10._0_8_ = uVar1;
      auVar10._12_4_ = _UNK_001178b4;
      dVar9 = (double)param_4[0x11] /
              ((auVar10._8_8_ - _UNK_00117778) +
              ((double)CONCAT44(_s__001178b0,(int)uVar1) - _s__00117770)) -
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




// ELF address 0x0000000000039bd0; strategy_comm_mock::live_pending_counts

/* strategy_comm_mock::live_pending_counts */

undefined1  [16] __rustcall
strategy_comm_mock::live_pending_counts
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
  
  (*(code *)PTR_pending_orders_001e0350)(&local_48,param_1,param_2,param_3);
                    /* try { // try from 00139c07 to 00139c1a has its CatchHandler @ 0013a119 */
  (*(code *)PTR_cancel_pending_ids_001e0370)(&local_60,param_1,param_2,param_3);
  lVar7 = local_50;
  lVar17 = local_58;
  puVar8 = PTR___rust_dealloc_001e0298;
  plVar14 = local_40 + local_38 * 0xb;
  if (local_38 == 0) {
    local_c0 = 0;
    lVar12 = 0;
    plVar15 = local_40;
LAB_00139f8a:
    puVar8 = PTR___rust_dealloc_001e0298;
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
LAB_00139cc7:
      do {
        plVar15 = plVar10 + 0xb;
        lVar2 = *plVar10;
        if (lVar2 == -0x8000000000000000) goto LAB_00139f8a;
        lVar3 = plVar10[1];
        lVar4 = plVar10[2];
        lVar5 = plVar10[3];
        lVar16 = plVar10[4];
        bVar1 = *(byte *)(plVar10 + 10);
        lVar13 = 0;
        do {
          plVar10 = plVar15;
          if ((*(long *)(param_4 + 0x10 + lVar13) == lVar4) &&
             (iVar9 = (*(code *)PTR_bcmp_001e0358)
                                (*(undefined8 *)(param_4 + 8 + lVar13),lVar3,lVar4), iVar9 == 0))
          goto LAB_00139d87;
          lVar13 = lVar13 + 0x18;
        } while (param_5 * 0x18 != lVar13);
        if (lVar7 != 0) {
          lVar13 = 0;
          do {
            if ((*(long *)(lVar17 + 0x10 + lVar13) == lVar4) &&
               (iVar9 = (*(code *)PTR_bcmp_001e0358)
                                  (*(undefined8 *)(lVar17 + 8 + lVar13),lVar3,lVar4), iVar9 == 0))
            goto LAB_00139d87;
            lVar13 = lVar13 + 0x18;
          } while (lVar6 != lVar13);
        }
        if (lVar2 != 0) {
          (*(code *)PTR___rust_dealloc_001e0298)(lVar3,lVar2,1);
        }
        if (lVar5 != 0) {
          (*(code *)PTR___rust_dealloc_001e0298)(lVar16,lVar5,1);
        }
        lVar12 = lVar12 + (ulong)bVar1;
        local_c0 = local_c0 + (ulong)(bVar1 ^ 1);
      } while (plVar15 != plVar14);
      goto LAB_0013a086;
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
LAB_00139e80:
      do {
        plVar15 = plVar10 + 0xb;
        lVar6 = *plVar10;
        if (lVar6 == -0x8000000000000000) goto LAB_00139f8a;
        lVar2 = plVar10[1];
        lVar3 = plVar10[2];
        lVar4 = plVar10[3];
        lVar5 = plVar10[4];
        bVar1 = *(byte *)(plVar10 + 10);
        lVar16 = 0;
        do {
          plVar10 = plVar15;
          if ((*(long *)(lVar17 + 0x10 + lVar16) == lVar3) &&
             (iVar9 = (*(code *)PTR_bcmp_001e0358)(*(undefined8 *)(lVar17 + 8 + lVar16),lVar2,lVar3)
             , iVar9 == 0)) {
            if (lVar6 != 0) {
              (*(code *)PTR___rust_dealloc_001e0298)(lVar2,lVar6,1);
            }
            if (lVar4 != 0) {
              (*(code *)PTR___rust_dealloc_001e0298)(lVar5,lVar4,1);
            }
            if (plVar15 != plVar14) goto LAB_00139e80;
            goto LAB_00139f8a;
          }
          lVar16 = lVar16 + 0x18;
        } while (lVar7 != lVar16);
        if (lVar6 != 0) {
          (*(code *)PTR___rust_dealloc_001e0298)(lVar2,lVar6,1);
        }
        if (lVar4 != 0) {
          (*(code *)PTR___rust_dealloc_001e0298)(lVar5,lVar4,1);
        }
        lVar12 = lVar12 + (ulong)bVar1;
        local_c0 = local_c0 + (ulong)(bVar1 ^ 1);
      } while (plVar15 != plVar14);
    }
  }
LAB_0013a086:
  if (local_48 != 0) {
    (*(code *)PTR___rust_dealloc_001e0298)(local_40,local_48 * 0x58,8);
  }
  puVar8 = PTR___rust_dealloc_001e0298;
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
    (*(code *)PTR___rust_dealloc_001e0298)(local_58,local_60 * 0x18,8);
  }
  auVar19._8_8_ = local_c0;
  auVar19._0_8_ = lVar12;
  return auVar19;
LAB_00139d87:
  if (lVar2 != 0) {
    (*(code *)PTR___rust_dealloc_001e0298)(lVar3,lVar2,1);
  }
  if (lVar5 != 0) {
    (*(code *)PTR___rust_dealloc_001e0298)(lVar16,lVar5,1);
  }
  if (plVar15 == plVar14) goto LAB_00139f8a;
  goto LAB_00139cc7;
}




// ELF address 0x0000000000039370; strategy_comm_mock::cancel_order_use_range

/* strategy_comm_mock::cancel_order_use_range */

long __rustcall
strategy_comm_mock::cancel_order_use_range
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
  (*(code *)PTR_pending_orders_001e0350)(&local_48,param_3,param_4,param_5);
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
LAB_00139440:
    uVar14 = (long)plVar9 - (long)plVar8;
    plVar12 = plVar8;
    do {
      lVar2 = *plVar12;
      lVar7 = plVar12[1];
      lVar13 = plVar12[3];
      local_108 = plVar12[4];
      if (*(byte *)(plVar12 + 10) == local_109) {
        if (lVar2 != -0x8000000000000000) goto LAB_001394d0;
      }
      else {
        if (lVar2 != 0) {
          (*(code *)PTR___rust_dealloc_001e0298)(lVar7,lVar2,1);
        }
        if (lVar13 != 0) {
          (*(code *)PTR___rust_dealloc_001e0298)(local_108,lVar13,1);
        }
      }
      plVar12 = plVar12 + 0xb;
      uVar14 = uVar14 - 0x58;
      local_48 = local_d8;
      local_40 = local_e0;
      if (plVar12 == local_e8) break;
    } while( true );
  }
LAB_00139638:
  local_c0 = plVar8;
  plVar8 = local_f0;
  if (local_48 != 0) {
    (*(code *)PTR___rust_dealloc_001e0298)(local_40,local_48 * 0x58,8);
  }
  (*(code *)PTR_pending_orders_001e0350)(&local_60,local_90,local_88,local_80);
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
LAB_0013970a:
    uVar14 = (long)local_d0 - (long)plVar9;
    plVar12 = plVar9;
    do {
      lVar2 = *plVar12;
      lVar7 = plVar12[1];
      local_108 = plVar12[3];
      local_e8 = (long *)plVar12[4];
      bVar1 = *(byte *)(plVar12 + 10);
      if (bVar1 == local_10a) {
        if (lVar2 != -0x8000000000000000) goto LAB_001397a0;
      }
      else {
        if (lVar2 != 0) {
          (*(code *)PTR___rust_dealloc_001e0298)(lVar7,lVar2,1);
        }
        if (local_108 != 0) {
          (*(code *)PTR___rust_dealloc_001e0298)(local_e8,local_108,1);
        }
      }
      plVar12 = plVar12 + 0xb;
      uVar14 = uVar14 - 0x58;
      local_60 = local_d8;
      local_58 = local_e0;
      if (plVar12 == local_f8) break;
    } while( true );
  }
LAB_0013996a:
  local_c0 = plVar9;
  if (local_60 != 0) {
    (*(code *)PTR___rust_dealloc_001e0298)(local_58,local_60 * 0x58,8);
  }
  return 0;
LAB_001394d0:
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
         (iVar3 = (*(code *)PTR_bcmp_001e0358)(*(undefined8 *)(lVar5 + 8 + lVar10),lVar7),
         lVar13 = local_100, lVar4 = local_98, plVar8 = local_f8, iVar3 == 0)) {
        if (lVar2 != 0) {
          (*(code *)PTR___rust_dealloc_001e0298)(lVar7,lVar2,1);
        }
        goto LAB_001395ee;
      }
      lVar10 = lVar10 + 0x18;
    } while (lVar4 != lVar10);
  }
                    /* try { // try from 00139580 to 001395a3 has its CatchHandler @ 00139b6f */
  lVar5 = (*(code *)PTR_cancel_order_001e0360)(local_90,local_88,local_80,lVar7,plVar8);
  plVar8 = local_f0;
  if (lVar5 != 0) {
    plVar8 = plVar12 + 0xb;
    local_f8 = (long *)lVar5;
    local_c0 = plVar8;
    if (lVar2 != 0) {
      (*(code *)PTR___rust_dealloc_001e0298)(lVar7,lVar2,1);
    }
    if (lVar13 != 0) {
      (*(code *)PTR___rust_dealloc_001e0298)(local_108,lVar13,1);
    }
    if (plVar8 != local_e8) {
      plVar12 = plVar12 + 0xf;
      uVar14 = uVar14 / 0x58;
      do {
        if (plVar12[-4] != 0) {
          (*(code *)PTR___rust_dealloc_001e0298)(plVar12[-3],plVar12[-4],1);
        }
        if (plVar12[-1] != 0) {
          (*(code *)PTR___rust_dealloc_001e0298)(*plVar12,plVar12[-1],1);
        }
        plVar12 = plVar12 + 0xb;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    if (local_d8 == 0) {
      return (long)local_f8;
    }
    (*(code *)PTR___rust_dealloc_001e0298)(local_e0,local_d8 * 0x58,8);
    return (long)local_f8;
  }
  lVar5 = local_f0[2];
  if (lVar5 == *local_f0) {
                    /* try { // try from 001395bc to 001395cb has its CatchHandler @ 00139b1a */
    (*(code *)PTR_grow_one_001e0368)(local_f0,&PTR_s_strategies_comm_strategy_strateg_001da308);
  }
  lVar4 = plVar8[1];
  *(long *)(lVar4 + lVar5 * 0x18) = lVar2;
  *(long *)(lVar4 + 8 + lVar5 * 0x18) = lVar7;
  *(long **)(lVar4 + 0x10 + lVar5 * 0x18) = local_f8;
  plVar8[2] = lVar5 + 1;
LAB_001395ee:
  plVar9 = local_d0;
  if (lVar13 != 0) {
    (*(code *)PTR___rust_dealloc_001e0298)(local_108,lVar13,1);
  }
  plVar8 = plVar12 + 0xb;
  if (plVar8 == local_e8) goto code_r0x0013961d;
  goto LAB_00139440;
code_r0x0013961d:
  local_48 = local_d8;
  local_40 = local_e0;
  plVar8 = plVar12 + 0xb;
  goto LAB_00139638;
LAB_001397a0:
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
         (iVar3 = (*(code *)PTR_bcmp_001e0358)
                            (*(undefined8 *)(lVar5 + 8 + (long)dVar11),lVar7,lVar13),
         dVar6 = local_a0, lVar5 = local_98, lVar7 = local_100, iVar3 == 0)) {
        plVar8 = local_f0;
        if (lVar2 != 0) {
          (*(code *)PTR___rust_dealloc_001e0298)(local_100,lVar2,1);
          plVar8 = local_f0;
        }
        goto joined_r0x00139847;
      }
      dVar11 = (double)((long)dVar11 + 0x18);
    } while (dVar6 != dVar11);
  }
  plVar8 = local_f0;
  if ((bVar1 & 1) == 0) {
    if (local_68 < local_70) goto LAB_001398ba;
  }
  else if (local_70 < local_78) {
LAB_001398ba:
                    /* try { // try from 001398ba to 001398dd has its CatchHandler @ 00139b1c */
    lVar7 = (*(code *)PTR_cancel_order_001e0360)(local_90,local_88,local_80,lVar7,lVar13);
    if (lVar7 != 0) {
      plVar8 = plVar12 + 0xb;
      local_c0 = plVar8;
      if (lVar2 != 0) {
        (*(code *)PTR___rust_dealloc_001e0298)(local_100,lVar2,1);
      }
      if (local_108 != 0) {
        (*(code *)PTR___rust_dealloc_001e0298)(local_e8,local_108,1);
      }
      if (plVar8 != local_f8) {
        plVar12 = plVar12 + 0xf;
        uVar14 = uVar14 / 0x58;
        do {
          if (plVar12[-4] != 0) {
            (*(code *)PTR___rust_dealloc_001e0298)(plVar12[-3],plVar12[-4],1);
          }
          if (plVar12[-1] != 0) {
            (*(code *)PTR___rust_dealloc_001e0298)(*plVar12,plVar12[-1],1);
          }
          plVar12 = plVar12 + 0xb;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
      if (local_d8 == 0) {
        return lVar7;
      }
      (*(code *)PTR___rust_dealloc_001e0298)(local_e0,local_d8 * 0x58,8);
      return lVar7;
    }
    lVar7 = plVar8[2];
    if (lVar7 == *plVar8) {
                    /* try { // try from 001398f1 to 00139900 has its CatchHandler @ 00139b18 */
      (*(code *)PTR_grow_one_001e0368)(plVar8,&PTR_s_strategies_comm_strategy_strateg_001da320);
    }
    lVar5 = plVar8[1];
    *(long *)(lVar5 + lVar7 * 0x18) = lVar2;
    *(long *)(lVar5 + 8 + lVar7 * 0x18) = local_100;
    *(long *)(lVar5 + 0x10 + lVar7 * 0x18) = lVar13;
    plVar8[2] = lVar7 + 1;
    goto joined_r0x00139847;
  }
  if (lVar2 != 0) {
    (*(code *)PTR___rust_dealloc_001e0298)(lVar7,lVar2,1);
  }
joined_r0x00139847:
  if (local_108 != 0) {
    (*(code *)PTR___rust_dealloc_001e0298)(local_e8,local_108,1);
  }
  plVar9 = plVar12 + 0xb;
  if (plVar9 == local_f8) goto code_r0x00139954;
  goto LAB_0013970a;
code_r0x00139954:
  local_60 = local_d8;
  local_58 = local_e0;
  plVar9 = plVar12 + 0xb;
  goto LAB_0013996a;
}




// ELF address 0x000000000003f360; strategy_comm_mock::place

/* strategy_comm_mock::place */

void __rustcall
strategy_comm_mock::place(double param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  if (param_4 != 0) {
    (*(code *)PTR_place_order_ioc_001e04a0)();
    return;
  }
  if (0.0 < param_1) {
    (*(code *)PTR_place_order_iap_with_target_001e04a8)(param_2,param_3,1);
    return;
  }
  (*(code *)PTR_place_order_iap_001e04b0)();
  return;
}




// ELF address 0x000000000003a280; <strategy_comm_mock::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin

/* _<strategy_comm_mock::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin */

undefined8 __rustcall
_<strategy_comm_mock::StrategyComm3_as_future_backtest_sdk::plugin::StrategyPlugin>::on_begin
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
  
  (*(code *)PTR_custom_config_001e0380)(&local_418);
                    /* try { // try from 0013a2a9 to 0013a2d7 has its CatchHandler @ 0013a593 */
  _<toml::de::Deserializer_as_serde_core::de::Deserializer>::deserialize_struct
            (&local_1e0,local_410,local_408,"Comm3Params",0xb,
             &PTR_s_signal_modepv1_alphacost_alphasi_001da338,0x2c);
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
                    /* try { // try from 0013a57c to 0013a590 has its CatchHandler @ 0013a598 */
      (*(code *)PTR_slice_error_fail_001e0398)
                (local_410,local_408,0,local_3f8,&PTR_s_strategies_comm_strategy_strateg_001da5f8);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    local_400 = local_410;
    local_3f0 = &local_388;
    local_3e8 = PTR_fmt_001e0388;
    local_3e0 = &local_400;
    local_3d8 = _<&T_as_core::fmt::Display>::fmt;
    local_3d0 = &PTR_s__custom__parse_error____Raw__001da610;
    local_3c8 = 2;
    local_3b0 = 0;
    local_3c0 = &local_3f0;
    local_3b8 = 2;
                    /* try { // try from 0013a3bf to 0013a3de has its CatchHandler @ 0013a598 */
    (*(code *)PTR_format_inner_001e0390)(local_3a0,&local_3d0);
    uVar4 = anyhow::error::_<impl_anyhow::Error>::msg(local_3a0);
    if (CONCAT44(uStack_36c,uStack_370) != 0) {
      (*(code *)PTR___rust_dealloc_001e0298)
                (CONCAT44(uStack_364,local_368),CONCAT44(uStack_36c,uStack_370),1);
    }
    if (lStack_340 != 0) {
      (*(code *)PTR___rust_dealloc_001e0298)(local_338,lStack_340,1);
    }
    puVar3 = PTR___rust_dealloc_001e0298;
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
      (*(code *)PTR___rust_dealloc_001e0298)(lVar2,CONCAT44(uStack_354,local_358) * 0x18,8);
    }
  }
  else {
    (*(code *)PTR_memcpy_001e02f8)(&local_388,&uStack_1d0,0x1a0);
    if ((int)*param_1 != 2) {
      if (param_1[8] != 0) {
        (*(code *)PTR___rust_dealloc_001e0298)(param_1[9],param_1[8],1);
      }
      if (param_1[0xb] != 0) {
        (*(code *)PTR___rust_dealloc_001e0298)(param_1[0xc],param_1[0xb],1);
      }
      if (param_1[0xe] != 0) {
        (*(code *)PTR___rust_dealloc_001e0298)(param_1[0xf],param_1[0xe] << 3,8);
      }
      if (param_1[0x11] != 0) {
        (*(code *)PTR___rust_dealloc_001e0298)(param_1[0x12],param_1[0x11],1);
      }
    }
    *param_1 = local_1e0;
    param_1[1] = CONCAT44(uStack_1d4,local_1d8);
    (*(code *)PTR_memcpy_001e02f8)(param_1 + 2,&local_388,0x1a0);
    uVar4 = 0;
  }
  if (local_418 != 0) {
    (*(code *)PTR___rust_dealloc_001e0298)(local_410,local_418,1);
  }
  return uVar4;
}




// ELF address 0x000000000003e120; <strategy_comm_mock::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _<strategy_comm_mock::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth */

undefined8 __rustcall
_<strategy_comm_mock::StrategyComm3_as_future_backtest_sdk::plugin::StrategyPlugin>::on_depth
          (long param_1,long param_2,undefined8 param_3)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  undefined *puVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  double dVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  double *pdVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  undefined8 uVar25;
  long lVar26;
  byte bVar27;
  undefined4 uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double local_148;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  double local_120;
  double local_118;
  long *plStack_110;
  code *pcStack_108;
  double local_100;
  undefined **ppuStack_f8;
  undefined8 uStack_f0;
  long **pplStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  ulong local_c8;
  ulong local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  double local_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  double local_78;
  undefined1 local_68 [16];
  undefined1 auStack_58 [16];
  long local_48;
  long local_40;
  long local_38;
  
  (*(code *)PTR_clone_001e03a8)
            (&local_48,param_2 + 0x20,&PTR_s_strategies_comm_strategy_strateg_001da820);
  local_100 = (double)local_38;
  lVar13 = 1;
  lVar10 = local_40 + local_38;
  do {
    while( true ) {
      lVar22 = lVar10;
      if (local_40 == lVar22) goto LAB_0013e236;
      uVar6 = (uint)*(char *)(lVar22 + -1);
      if (-1 < (int)uVar6) break;
      bVar27 = *(byte *)(lVar22 + -2);
      if ((char)bVar27 < -0x40) {
        bVar1 = *(byte *)(lVar22 + -3);
        if ((char)bVar1 < -0x40) {
          lVar10 = lVar22 + -4;
          uVar15 = bVar1 & 0x3f | (*(byte *)(lVar22 + -4) & 7) << 6;
        }
        else {
          lVar10 = lVar22 + -3;
          uVar15 = bVar1 & 0xf;
        }
        uVar15 = bVar27 & 0x3f | uVar15 << 6;
      }
      else {
        lVar10 = lVar22 + -2;
        uVar15 = bVar27 & 0x1f;
      }
      if ((uVar6 & 0x3f | uVar15 << 6) - 0x3a < 0xfffffff6) goto LAB_0013e1f3;
    }
    lVar10 = lVar22 + -1;
  } while (0xfffffff5 < uVar6 - 0x3a);
LAB_0013e1f3:
  lVar22 = lVar22 - local_40;
  if (lVar22 < 0) {
    uVar25 = 0;
LAB_0013e1fb:
                    /* try { // try from 0013e1fb to 0013e20d has its CatchHandler @ 0013f211 */
    (*(code *)PTR_handle_error_001e0330)
              (uVar25,lVar22,
               &PTR_anon_bf65de67c24155f465f4e3f0b4be96c2_2_llvm_4550705873496731735_001da2f0);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (lVar22 == 0) {
LAB_0013e236:
    lVar22 = 0;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001e02b8)();
    uVar25 = 1;
    lVar13 = (*(code *)PTR___rust_alloc_001e0290)(lVar22,1);
    if (lVar13 == 0) goto LAB_0013e1fb;
  }
  (*(code *)PTR_memcpy_001e02f8)(lVar13,local_40,lVar22);
  local_b8 = lVar22;
  local_b0 = lVar13;
  local_a8 = lVar22;
                    /* try { // try from 0013e260 to 0013e2ab has its CatchHandler @ 0013f1ec */
  local_78 = (double)(*(code *)PTR_time_sec_001e03d8)(param_3);
  local_78 = local_78 * _DAT_00117718;
  local_a0 = 0.0;
  local_118 = 0.0;
  if (*(long *)(param_1 + 0x228) != 0) {
    uVar8 = core::hash::BuildHasher::hash_one(param_1 + 0x230,&local_b8);
    lVar11 = local_a8;
    lVar22 = local_b0;
    puVar4 = PTR_bcmp_001e0358;
    lVar13 = *(long *)(param_1 + 0x210);
    uVar23 = *(ulong *)(param_1 + 0x218);
    bVar27 = (byte)(uVar8 >> 0x39);
    auVar29 = ZEXT216(CONCAT11(bVar27,bVar27));
    auVar29 = pshuflw(auVar29,auVar29,0);
    uVar28 = auVar29._0_4_;
    auVar29._4_4_ = uVar28;
    auVar29._0_4_ = uVar28;
    auVar29._8_4_ = uVar28;
    auVar29._12_4_ = uVar28;
    lVar10 = lVar13 + -0x40;
    uVar17 = 0;
    while( true ) {
      dVar9 = (double)(uVar8 & uVar23);
      auVar33 = *(undefined1 (*) [16])(lVar13 + (long)dVar9);
      auVar30[0] = -(auVar33[0] == auVar29[0]);
      auVar30[1] = -(auVar33[1] == auVar29[1]);
      auVar30[2] = -(auVar33[2] == auVar29[2]);
      auVar30[3] = -(auVar33[3] == auVar29[3]);
      auVar30[4] = -(auVar33[4] == auVar29[4]);
      auVar30[5] = -(auVar33[5] == auVar29[5]);
      auVar30[6] = -(auVar33[6] == auVar29[6]);
      auVar30[7] = -(auVar33[7] == auVar29[7]);
      auVar30[8] = -(auVar33[8] == auVar29[8]);
      auVar30[9] = -(auVar33[9] == auVar29[9]);
      auVar30[10] = -(auVar33[10] == auVar29[10]);
      auVar30[0xb] = -(auVar33[0xb] == auVar29[0xb]);
      auVar30[0xc] = -(auVar33[0xc] == auVar29[0xc]);
      auVar30[0xd] = -(auVar33[0xd] == auVar29[0xd]);
      auVar30[0xe] = -(auVar33[0xe] == auVar29[0xe]);
      auVar30[0xf] = -(auVar33[0xf] == auVar29[0xf]);
      uVar5 = (ushort)(SUB161(auVar30 >> 7,0) & 1) | (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe | (ushort)(auVar30[0xf] >> 7) << 0xf;
      local_a0 = (double)(ulong)uVar5;
      if (uVar5 != 0) {
        local_88._0_8_ = lVar10;
        local_120 = dVar9;
        local_c8 = uVar17;
        local_c0 = uVar23;
        local_98 = auVar29;
        local_68 = auVar33;
        do {
          uVar6 = 0;
          for (uVar15 = SUB84(local_a0,0); (uVar15 & 1) == 0; uVar15 = uVar15 >> 1 | 0x80000000) {
            uVar6 = uVar6 + 1;
          }
          uVar23 = (ulong)uVar6 + (long)local_120 & local_c0;
          lVar10 = lVar10 + uVar23 * -0x40;
          if ((lVar11 == *(long *)(lVar10 + 0x10)) &&
             (iVar7 = (*(code *)puVar4)(lVar22,*(undefined8 *)(lVar10 + 8),lVar11), iVar7 == 0)) {
            lVar10 = uVar23 * -0x40;
            uVar23 = *(ulong *)(lVar13 + -0x10 + lVar10);
            local_a0 = 0.0;
            if (uVar23 == 0) goto LAB_0013e60e;
            lVar13 = lVar13 + lVar10;
            uVar17 = *(ulong *)(lVar13 + -0x28);
            lVar10 = *(long *)(lVar13 + -0x20);
            uVar8 = *(ulong *)(lVar13 + -0x18);
            lVar11 = uVar23 - uVar17;
            lVar22 = -uVar23;
            uVar16 = uVar23;
            goto LAB_0013e460;
          }
          iVar7 = SUB84(local_a0,0) + -1;
          uVar5 = (ushort)iVar7 & SUB82(local_a0,0);
          local_a0 = (double)(ulong)CONCAT22((short)((uint)iVar7 >> 0x10),uVar5);
          dVar9 = local_120;
          lVar10 = local_88._0_8_;
          uVar23 = local_c0;
          uVar17 = local_c8;
          auVar29 = local_98;
          auVar33 = local_68;
        } while (uVar5 != 0);
      }
      auVar35[0] = -(auVar33[0] == -1);
      auVar35[1] = -(auVar33[1] == -1);
      auVar35[2] = -(auVar33[2] == -1);
      auVar35[3] = -(auVar33[3] == -1);
      auVar35[4] = -(auVar33[4] == -1);
      auVar35[5] = -(auVar33[5] == -1);
      auVar35[6] = -(auVar33[6] == -1);
      auVar35[7] = -(auVar33[7] == -1);
      auVar35[8] = -(auVar33[8] == -1);
      auVar35[9] = -(auVar33[9] == -1);
      auVar35[10] = -(auVar33[10] == -1);
      auVar35[0xb] = -(auVar33[0xb] == -1);
      auVar35[0xc] = -(auVar33[0xc] == -1);
      auVar35[0xd] = -(auVar33[0xd] == -1);
      auVar35[0xe] = -(auVar33[0xe] == -1);
      bVar3 = auVar33[0xf] == -1;
      auVar35[0xf] = -bVar3;
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
          (auVar35 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar3) break;
      uVar8 = (long)dVar9 + uVar17 + 0x10;
      uVar17 = uVar17 + 0x10;
    }
    local_a0 = 0.0;
  }
LAB_0013e60e:
  if (*(long *)(param_1 + 600) != 0) {
                    /* try { // try from 0013e62c to 0013e638 has its CatchHandler @ 0013f1ec */
    uVar8 = core::hash::BuildHasher::hash_one(param_1 + 0x260,&local_b8);
    lVar22 = local_a8;
    lVar13 = local_b0;
    puVar4 = PTR_bcmp_001e0358;
    lVar10 = *(long *)(param_1 + 0x240);
    uVar17 = *(ulong *)(param_1 + 0x248);
    bVar27 = (byte)(uVar8 >> 0x39);
    auVar29 = ZEXT216(CONCAT11(bVar27,bVar27));
    auVar29 = pshuflw(auVar29,auVar29,0);
    uVar28 = auVar29._0_4_;
    auVar33._4_4_ = uVar28;
    auVar33._0_4_ = uVar28;
    auVar33._8_4_ = uVar28;
    auVar33._12_4_ = uVar28;
    uVar23 = lVar10 - 0x40;
    lVar11 = 0;
    while( true ) {
      uVar8 = uVar8 & uVar17;
      auVar29 = *(undefined1 (*) [16])(lVar10 + uVar8);
      auVar31[0] = -(auVar29[0] == auVar33[0]);
      auVar31[1] = -(auVar29[1] == auVar33[1]);
      auVar31[2] = -(auVar29[2] == auVar33[2]);
      auVar31[3] = -(auVar29[3] == auVar33[3]);
      auVar31[4] = -(auVar29[4] == auVar33[4]);
      auVar31[5] = -(auVar29[5] == auVar33[5]);
      auVar31[6] = -(auVar29[6] == auVar33[6]);
      auVar31[7] = -(auVar29[7] == auVar33[7]);
      auVar31[8] = -(auVar29[8] == auVar33[8]);
      auVar31[9] = -(auVar29[9] == auVar33[9]);
      auVar31[10] = -(auVar29[10] == auVar33[10]);
      auVar31[0xb] = -(auVar29[0xb] == auVar33[0xb]);
      auVar31[0xc] = -(auVar29[0xc] == auVar33[0xc]);
      auVar31[0xd] = -(auVar29[0xd] == auVar33[0xd]);
      auVar31[0xe] = -(auVar29[0xe] == auVar33[0xe]);
      auVar31[0xf] = -(auVar29[0xf] == auVar33[0xf]);
      uVar5 = (ushort)(SUB161(auVar31 >> 7,0) & 1) | (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar31 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar31 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar31 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar31 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar31 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar31 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar31 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar31 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar31 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar31 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar31 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar31 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe | (ushort)(auVar31[0xf] >> 7) << 0xf;
      uVar16 = (ulong)uVar5;
      if (uVar5 != 0) {
        local_98._0_8_ = uVar8;
        local_68._0_8_ = lVar11;
        local_c8 = uVar17;
        local_c0 = uVar23;
        local_88 = auVar33;
        auStack_58 = auVar29;
        do {
          uVar6 = 0;
          for (uVar15 = (uint)uVar16; (uVar15 & 1) == 0; uVar15 = uVar15 >> 1 | 0x80000000) {
            uVar6 = uVar6 + 1;
          }
          uVar23 = uVar6 + uVar8 & local_c8;
          lVar11 = local_c0 + uVar23 * -0x40;
          local_120 = (double)uVar16;
          if ((lVar22 == *(long *)(lVar11 + 0x10)) &&
             (iVar7 = (*(code *)puVar4)(lVar13,*(undefined8 *)(lVar11 + 8),lVar22), iVar7 == 0)) {
            lVar13 = uVar23 * -0x40;
            uVar23 = *(ulong *)(lVar10 + -0x10 + lVar13);
            if (uVar23 == 0) goto LAB_0013e835;
            lVar10 = lVar10 + lVar13;
            uVar17 = *(ulong *)(lVar10 + -0x28);
            lVar13 = *(long *)(lVar10 + -0x20);
            uVar8 = *(ulong *)(lVar10 + -0x18);
            lVar11 = uVar23 - uVar17;
            lVar22 = -uVar23;
            uVar16 = uVar23;
            goto LAB_0013e7ec;
          }
          iVar7 = SUB84(local_120,0) + -1;
          uVar5 = (ushort)iVar7 & SUB82(local_120,0);
          uVar16 = (ulong)CONCAT22((short)((uint)iVar7 >> 0x10),uVar5);
          uVar8 = local_98._0_8_;
          uVar23 = local_c0;
          uVar17 = local_c8;
          lVar11 = local_68._0_8_;
          auVar33 = local_88;
          auVar29 = auStack_58;
        } while (uVar5 != 0);
      }
      auVar36[0] = -(auVar29[0] == -1);
      auVar36[1] = -(auVar29[1] == -1);
      auVar36[2] = -(auVar29[2] == -1);
      auVar36[3] = -(auVar29[3] == -1);
      auVar36[4] = -(auVar29[4] == -1);
      auVar36[5] = -(auVar29[5] == -1);
      auVar36[6] = -(auVar29[6] == -1);
      auVar36[7] = -(auVar29[7] == -1);
      auVar36[8] = -(auVar29[8] == -1);
      auVar36[9] = -(auVar29[9] == -1);
      auVar36[10] = -(auVar29[10] == -1);
      auVar36[0xb] = -(auVar29[0xb] == -1);
      auVar36[0xc] = -(auVar29[0xc] == -1);
      auVar36[0xd] = -(auVar29[0xd] == -1);
      auVar36[0xe] = -(auVar29[0xe] == -1);
      bVar3 = auVar29[0xf] == -1;
      auVar36[0xf] = -bVar3;
      if ((((((((((((((((auVar36 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                       (auVar36 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar36 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar36 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar36 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar36 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar36 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar36 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar36 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar36 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar36 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar36 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar36 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar36 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar36 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar3) break;
      uVar8 = uVar8 + lVar11 + 0x10;
      lVar11 = lVar11 + 0x10;
    }
  }
LAB_0013e835:
  local_148 = 0.0;
  if (*(long *)(param_1 + 0x288) != 0) {
                    /* try { // try from 0013e853 to 0013e85f has its CatchHandler @ 0013f1ec */
    uVar8 = core::hash::BuildHasher::hash_one(param_1 + 0x290,&local_b8);
    lVar22 = local_a8;
    lVar13 = local_b0;
    puVar4 = PTR_bcmp_001e0358;
    lVar10 = *(long *)(param_1 + 0x270);
    uVar17 = *(ulong *)(param_1 + 0x278);
    bVar27 = (byte)(uVar8 >> 0x39);
    auVar29 = ZEXT216(CONCAT11(bVar27,bVar27));
    auVar29 = pshuflw(auVar29,auVar29,0);
    uVar28 = auVar29._0_4_;
    auVar34._4_4_ = uVar28;
    auVar34._0_4_ = uVar28;
    auVar34._8_4_ = uVar28;
    auVar34._12_4_ = uVar28;
    uVar23 = lVar10 - 0x40;
    lVar11 = 0;
    while( true ) {
      uVar8 = uVar8 & uVar17;
      auVar29 = *(undefined1 (*) [16])(lVar10 + uVar8);
      auVar32[0] = -(auVar29[0] == auVar34[0]);
      auVar32[1] = -(auVar29[1] == auVar34[1]);
      auVar32[2] = -(auVar29[2] == auVar34[2]);
      auVar32[3] = -(auVar29[3] == auVar34[3]);
      auVar32[4] = -(auVar29[4] == auVar34[4]);
      auVar32[5] = -(auVar29[5] == auVar34[5]);
      auVar32[6] = -(auVar29[6] == auVar34[6]);
      auVar32[7] = -(auVar29[7] == auVar34[7]);
      auVar32[8] = -(auVar29[8] == auVar34[8]);
      auVar32[9] = -(auVar29[9] == auVar34[9]);
      auVar32[10] = -(auVar29[10] == auVar34[10]);
      auVar32[0xb] = -(auVar29[0xb] == auVar34[0xb]);
      auVar32[0xc] = -(auVar29[0xc] == auVar34[0xc]);
      auVar32[0xd] = -(auVar29[0xd] == auVar34[0xd]);
      auVar32[0xe] = -(auVar29[0xe] == auVar34[0xe]);
      auVar32[0xf] = -(auVar29[0xf] == auVar34[0xf]);
      uVar5 = (ushort)(SUB161(auVar32 >> 7,0) & 1) | (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe | (ushort)(auVar32[0xf] >> 7) << 0xf;
      uVar16 = (ulong)uVar5;
      if (uVar5 != 0) {
        local_98._0_8_ = uVar8;
        local_68._0_8_ = lVar11;
        local_c8 = uVar17;
        local_c0 = uVar23;
        local_88 = auVar34;
        auStack_58 = auVar29;
        do {
          uVar6 = 0;
          for (uVar15 = (uint)uVar16; (uVar15 & 1) == 0; uVar15 = uVar15 >> 1 | 0x80000000) {
            uVar6 = uVar6 + 1;
          }
          uVar23 = uVar6 + uVar8 & local_c8;
          lVar11 = local_c0 + uVar23 * -0x40;
          local_120 = (double)uVar16;
          if ((lVar22 == *(long *)(lVar11 + 0x10)) &&
             (iVar7 = (*(code *)puVar4)(lVar13,*(undefined8 *)(lVar11 + 8),lVar22), iVar7 == 0)) {
            lVar13 = uVar23 * -0x40;
            uVar23 = *(ulong *)(lVar10 + -0x10 + lVar13);
            if (uVar23 == 0) goto LAB_0013ed38;
            lVar10 = lVar10 + lVar13;
            uVar17 = *(ulong *)(lVar10 + -0x28);
            lVar13 = *(long *)(lVar10 + -0x20);
            uVar8 = *(ulong *)(lVar10 + -0x18);
            lVar11 = uVar23 - uVar17;
            lVar22 = -uVar23;
            uVar16 = uVar23;
            goto LAB_0013ea00;
          }
          iVar7 = SUB84(local_120,0) + -1;
          uVar5 = (ushort)iVar7 & SUB82(local_120,0);
          uVar16 = (ulong)CONCAT22((short)((uint)iVar7 >> 0x10),uVar5);
          uVar8 = local_98._0_8_;
          uVar23 = local_c0;
          uVar17 = local_c8;
          lVar11 = local_68._0_8_;
          auVar34 = local_88;
          auVar29 = auStack_58;
        } while (uVar5 != 0);
      }
      auVar37[0] = -(auVar29[0] == -1);
      auVar37[1] = -(auVar29[1] == -1);
      auVar37[2] = -(auVar29[2] == -1);
      auVar37[3] = -(auVar29[3] == -1);
      auVar37[4] = -(auVar29[4] == -1);
      auVar37[5] = -(auVar29[5] == -1);
      auVar37[6] = -(auVar29[6] == -1);
      auVar37[7] = -(auVar29[7] == -1);
      auVar37[8] = -(auVar29[8] == -1);
      auVar37[9] = -(auVar29[9] == -1);
      auVar37[10] = -(auVar29[10] == -1);
      auVar37[0xb] = -(auVar29[0xb] == -1);
      auVar37[0xc] = -(auVar29[0xc] == -1);
      auVar37[0xd] = -(auVar29[0xd] == -1);
      auVar37[0xe] = -(auVar29[0xe] == -1);
      bVar3 = auVar29[0xf] == -1;
      auVar37[0xf] = -bVar3;
      if ((((((((((((((((auVar37 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                       (auVar37 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar37 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar37 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar37 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar37 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar37 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar37 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar37 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar37 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar37 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar37 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar37 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar37 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar37 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar3) break;
      uVar8 = uVar8 + lVar11 + 0x10;
      lVar11 = lVar11 + 0x10;
    }
  }
LAB_0013ed38:
                    /* try { // try from 0013ed38 to 0013ede8 has its CatchHandler @ 0013f1ec */
  auVar29 = (*(code *)PTR_position_001e0438)(param_3,local_40,local_100);
  local_78 = auVar29._8_8_;
  local_98._0_8_ = auVar29._0_8_;
  local_120 = (double)(*(code *)PTR_contract_mult_001e0420)(param_3,local_40,local_100);
  local_100 = (double)(*(code *)PTR_mid_price_001e0488)(param_3,local_40,local_100);
  pcStack_108 = _<alloc::string::String_as_core::fmt::Display>::fmt;
  ppuStack_f8 = &PTR_s_pnl_rel__001da838;
  uStack_f0 = 1;
  uStack_d8 = 0;
  uStack_e0 = 1;
  plStack_110 = &local_b8;
  pplStack_e8 = &plStack_110;
  (*(code *)PTR_format_inner_001e0390)(&lStack_138,&ppuStack_f8);
  uVar25 = uStack_130;
  lVar10 = lStack_138;
                    /* try { // try from 0013edf8 to 0013ee0e has its CatchHandler @ 0013f1d1 */
  (*(code *)PTR_publish_001e0490)(local_a0,param_3,uStack_130,uStack_128);
  if (lVar10 != 0) {
    (*(code *)PTR___rust_dealloc_001e0298)(uVar25,lVar10,1);
  }
  pcStack_108 = _<alloc::string::String_as_core::fmt::Display>::fmt;
  ppuStack_f8 = &PTR_s_pnl_unrel__001da848;
  uStack_f0 = 1;
  uStack_d8 = 0;
  uStack_e0 = 1;
                    /* try { // try from 0013ee5b to 0013ee6a has its CatchHandler @ 0013f1ec */
  plStack_110 = &local_b8;
  pplStack_e8 = &plStack_110;
  (*(code *)PTR_format_inner_001e0390)(&lStack_138,&ppuStack_f8);
  uVar25 = uStack_130;
  lVar10 = lStack_138;
                    /* try { // try from 0013ee9c to 0013eeb2 has its CatchHandler @ 0013f1cf */
  local_88._0_8_ = (local_100 - (double)local_98._0_8_) * local_78 * local_120;
  (*(code *)PTR_publish_001e0490)(param_3,uStack_130,uStack_128);
  if (lVar10 != 0) {
    (*(code *)PTR___rust_dealloc_001e0298)(uVar25,lVar10,1);
  }
  pcStack_108 = _<alloc::string::String_as_core::fmt::Display>::fmt;
  ppuStack_f8 = &PTR_s_pnl__001da858;
  uStack_f0 = 1;
  uStack_d8 = 0;
  uStack_e0 = 1;
                    /* try { // try from 0013eeff to 0013ef0e has its CatchHandler @ 0013f1ec */
  plStack_110 = &local_b8;
  pplStack_e8 = &plStack_110;
  (*(code *)PTR_format_inner_001e0390)(&lStack_138,&ppuStack_f8);
  uVar25 = uStack_130;
  lVar10 = lStack_138;
                    /* try { // try from 0013ef30 to 0013ef3d has its CatchHandler @ 0013f1cd */
  (*(code *)PTR_publish_001e0490)(local_a0 + (double)local_88._0_8_,param_3,uStack_130,uStack_128);
  if (lVar10 != 0) {
    (*(code *)PTR___rust_dealloc_001e0298)(uVar25,lVar10,1);
  }
  pcStack_108 = _<alloc::string::String_as_core::fmt::Display>::fmt;
  ppuStack_f8 = &PTR_s_amt__001da868;
  uStack_f0 = 1;
  uStack_d8 = 0;
  uStack_e0 = 1;
                    /* try { // try from 0013ef8a to 0013ef99 has its CatchHandler @ 0013f1ec */
  plStack_110 = &local_b8;
  pplStack_e8 = &plStack_110;
  (*(code *)PTR_format_inner_001e0390)(&lStack_138,&ppuStack_f8);
  uVar25 = uStack_130;
  lVar10 = lStack_138;
                    /* try { // try from 0013efd0 to 0013efdd has its CatchHandler @ 0013f1cb */
  (*(code *)PTR_publish_001e0490)
            (local_118 + (double)(_DAT_00117750 & (ulong)local_78) * local_120 * local_100,param_3,
             uStack_130,uStack_128);
  if (lVar10 != 0) {
    (*(code *)PTR___rust_dealloc_001e0298)(uVar25,lVar10,1);
  }
  pcStack_108 = _<alloc::string::String_as_core::fmt::Display>::fmt;
  ppuStack_f8 = &PTR_DAT_001da878;
  uStack_f0 = 1;
  uStack_d8 = 0;
  uStack_e0 = 1;
                    /* try { // try from 0013f02a to 0013f039 has its CatchHandler @ 0013f1ec */
  plStack_110 = &local_b8;
  pplStack_e8 = &plStack_110;
  (*(code *)PTR_format_inner_001e0390)(&lStack_138,&ppuStack_f8);
  uVar25 = uStack_130;
  lVar10 = lStack_138;
                    /* try { // try from 0013f049 to 0013f05b has its CatchHandler @ 0013f1c9 */
  (*(code *)PTR_publish_001e0490)(local_148,param_3,uStack_130,uStack_128);
  if (lVar10 != 0) {
    (*(code *)PTR___rust_dealloc_001e0298)(uVar25,lVar10,1);
  }
  pcStack_108 = _<alloc::string::String_as_core::fmt::Display>::fmt;
  ppuStack_f8 = &PTR_s_pos__001da888;
  uStack_f0 = 1;
  uStack_d8 = 0;
  uStack_e0 = 1;
                    /* try { // try from 0013f0a8 to 0013f0b7 has its CatchHandler @ 0013f1ec */
  plStack_110 = &local_b8;
  pplStack_e8 = &plStack_110;
  (*(code *)PTR_format_inner_001e0390)(&lStack_138,&ppuStack_f8);
  uVar25 = uStack_130;
  lVar10 = lStack_138;
                    /* try { // try from 0013f0c7 to 0013f0dd has its CatchHandler @ 0013f1c7 */
  (*(code *)PTR_publish_001e0490)(local_78,param_3,uStack_130,uStack_128);
  if (lVar10 != 0) {
    (*(code *)PTR___rust_dealloc_001e0298)(uVar25,lVar10,1);
  }
  pcStack_108 = _<alloc::string::String_as_core::fmt::Display>::fmt;
  ppuStack_f8 = &PTR_s_price__001da898;
  uStack_f0 = 1;
  uStack_d8 = 0;
  uStack_e0 = 1;
                    /* try { // try from 0013f12a to 0013f139 has its CatchHandler @ 0013f1ec */
  plStack_110 = &local_b8;
  pplStack_e8 = &plStack_110;
  (*(code *)PTR_format_inner_001e0390)(&lStack_138,&ppuStack_f8);
                    /* try { // try from 0013f149 to 0013f15f has its CatchHandler @ 0013f1c5 */
  (*(code *)PTR_publish_001e0490)(local_98._0_8_,param_3,uStack_130,uStack_128);
  if (lStack_138 != 0) {
    (*(code *)PTR___rust_dealloc_001e0298)(uStack_130,lStack_138,1);
  }
  if (local_b8 != 0) {
    (*(code *)PTR___rust_dealloc_001e0298)(local_b0,local_b8,1);
  }
  if (local_48 != 0) {
    (*(code *)PTR___rust_dealloc_001e0298)(local_40,local_48,1);
  }
  return 0;
LAB_0013e460:
  uVar16 = uVar16 - 1;
  uVar12 = uVar17;
  if (uVar8 < uVar17) {
    uVar12 = 0;
  }
  lVar19 = uVar8 - uVar12;
  lVar26 = lVar19 * 0x10;
  if (*(double *)(lVar13 + -8) < local_78 - *(double *)(lVar10 + lVar26)) goto code_r0x0013e490;
  uVar16 = uVar17 - lVar19;
  uVar18 = -lVar22;
  uVar24 = lVar19 - lVar22;
  if (uVar16 < uVar18) {
    uVar24 = uVar17;
  }
  uVar17 = uVar16;
  if (uVar23 < uVar16) {
    uVar17 = uVar23;
  }
  local_a0 = 0.0;
  uVar24 = uVar24 - lVar19;
  if (uVar24 != 0) {
    if (uVar24 - 1 < 3) {
      uVar20 = 0;
    }
    else {
      uVar21 = uVar16;
      if (uVar18 < uVar16) {
        uVar21 = uVar18;
      }
      pdVar14 = (double *)(lVar10 + lVar26 + 0x38);
      uVar20 = 0;
      do {
        local_a0 = local_a0 + pdVar14[-6] + pdVar14[-4] + pdVar14[-2] + *pdVar14;
        uVar20 = uVar20 + 4;
        pdVar14 = pdVar14 + 8;
      } while ((uVar21 & 0xfffffffffffffffc) != uVar20);
    }
    if ((uVar24 & 3) != 0) {
      uVar24 = uVar16;
      if (uVar18 < uVar16) {
        uVar24 = uVar18;
      }
      uVar21 = 0;
      do {
        local_a0 = local_a0 + *(double *)(lVar26 + uVar20 * 0x10 + lVar10 + 8 + uVar21);
        uVar21 = uVar21 + 0x10;
      } while (((uint)uVar24 & 3) << 4 != uVar21);
    }
  }
  if (uVar16 < uVar18) {
    if ((uVar12 - uVar8) - lVar11 < 0xfffffffffffffffd) {
      pdVar14 = (double *)(lVar10 + 0x38);
      uVar8 = uVar16;
      if (uVar23 < uVar16) {
        uVar8 = uVar23;
      }
      uVar12 = 0;
      do {
        local_a0 = local_a0 + pdVar14[-6] + pdVar14[-4] + pdVar14[-2] + *pdVar14;
        uVar12 = uVar12 + 4;
        pdVar14 = pdVar14 + 8;
      } while ((-(uVar8 + lVar22) & 0xfffffffffffffffc) != uVar12);
    }
    else {
      uVar12 = 0;
    }
    if ((-(uVar17 + lVar22) & 3) != 0) {
      if (uVar18 < uVar16) {
        uVar16 = uVar18;
      }
      uVar17 = 0;
      do {
        local_a0 = local_a0 + *(double *)(lVar10 + uVar12 * 0x10 + 8 + uVar17);
        uVar17 = uVar17 + 0x10;
      } while (((byte)((char)uVar23 - (char)uVar16) & 3) << 4 != uVar17);
    }
  }
  goto LAB_0013e60e;
code_r0x0013e490:
  uVar12 = uVar17;
  if (uVar8 + 1 < uVar17) {
    uVar12 = 0;
  }
  uVar8 = (uVar8 + 1) - uVar12;
  *(ulong *)(lVar13 + -0x18) = uVar8;
  uVar23 = uVar23 - 1;
  *(ulong *)(lVar13 + -0x10) = uVar16;
  lVar11 = lVar11 + -1;
  lVar22 = lVar22 + 1;
  if (lVar22 == 0) goto LAB_0013e4e9;
  goto LAB_0013e460;
LAB_0013e4e9:
  local_a0 = 0.0;
  goto LAB_0013e60e;
LAB_0013e7ec:
  uVar16 = uVar16 - 1;
  uVar12 = uVar17;
  if (uVar8 < uVar17) {
    uVar12 = 0;
  }
  lVar19 = uVar8 - uVar12;
  lVar26 = lVar19 * 0x10;
  if (*(double *)(lVar10 + -8) < local_78 - *(double *)(lVar13 + lVar26)) goto code_r0x0013e824;
  uVar16 = uVar17 - lVar19;
  uVar18 = -lVar22;
  uVar24 = lVar19 - lVar22;
  if (uVar16 < uVar18) {
    uVar24 = uVar17;
  }
  uVar17 = uVar16;
  if (uVar23 < uVar16) {
    uVar17 = uVar23;
  }
  local_118 = 0.0;
  uVar24 = uVar24 - lVar19;
  if (uVar24 != 0) {
    if (uVar24 - 1 < 3) {
      uVar20 = 0;
    }
    else {
      uVar21 = uVar16;
      if (uVar18 < uVar16) {
        uVar21 = uVar18;
      }
      pdVar14 = (double *)(lVar13 + lVar26 + 0x38);
      uVar20 = 0;
      do {
        local_118 = local_118 + pdVar14[-6] + pdVar14[-4] + pdVar14[-2] + *pdVar14;
        uVar20 = uVar20 + 4;
        pdVar14 = pdVar14 + 8;
      } while ((uVar21 & 0xfffffffffffffffc) != uVar20);
    }
    if ((uVar24 & 3) != 0) {
      uVar24 = uVar16;
      if (uVar18 < uVar16) {
        uVar24 = uVar18;
      }
      uVar21 = 0;
      do {
        local_118 = local_118 + *(double *)(lVar26 + uVar20 * 0x10 + lVar13 + 8 + uVar21);
        uVar21 = uVar21 + 0x10;
      } while (((uint)uVar24 & 3) << 4 != uVar21);
    }
  }
  if (uVar16 < uVar18) {
    if ((uVar12 - uVar8) - lVar11 < 0xfffffffffffffffd) {
      pdVar14 = (double *)(lVar13 + 0x38);
      uVar8 = uVar16;
      if (uVar23 < uVar16) {
        uVar8 = uVar23;
      }
      uVar12 = 0;
      do {
        local_118 = local_118 + pdVar14[-6] + pdVar14[-4] + pdVar14[-2] + *pdVar14;
        uVar12 = uVar12 + 4;
        pdVar14 = pdVar14 + 8;
      } while ((-(uVar8 + lVar22) & 0xfffffffffffffffc) != uVar12);
    }
    else {
      uVar12 = 0;
    }
    if ((-(uVar17 + lVar22) & 3) != 0) {
      if (uVar18 < uVar16) {
        uVar16 = uVar18;
      }
      uVar17 = 0;
      do {
        local_118 = local_118 + *(double *)(lVar13 + uVar12 * 0x10 + 8 + uVar17);
        uVar17 = uVar17 + 0x10;
      } while (((byte)((char)uVar23 - (char)uVar16) & 3) << 4 != uVar17);
    }
  }
  goto LAB_0013e835;
code_r0x0013e824:
  uVar12 = uVar17;
  if (uVar8 + 1 < uVar17) {
    uVar12 = 0;
  }
  uVar8 = (uVar8 + 1) - uVar12;
  *(ulong *)(lVar10 + -0x18) = uVar8;
  uVar23 = uVar23 - 1;
  *(ulong *)(lVar10 + -0x10) = uVar16;
  lVar11 = lVar11 + -1;
  lVar22 = lVar22 + 1;
  if (lVar22 == 0) goto LAB_0013e835;
  goto LAB_0013e7ec;
  while( true ) {
    uVar12 = uVar17;
    if (uVar8 + 1 < uVar17) {
      uVar12 = 0;
    }
    uVar8 = (uVar8 + 1) - uVar12;
    *(ulong *)(lVar10 + -0x18) = uVar8;
    uVar23 = uVar23 - 1;
    *(ulong *)(lVar10 + -0x10) = uVar16;
    lVar11 = lVar11 + -1;
    lVar22 = lVar22 + 1;
    if (lVar22 == 0) break;
LAB_0013ea00:
    uVar16 = uVar16 - 1;
    uVar12 = uVar17;
    if (uVar8 < uVar17) {
      uVar12 = 0;
    }
    lVar19 = uVar8 - uVar12;
    lVar26 = lVar19 * 0x10;
    if (local_78 - *(double *)(lVar13 + lVar26) <= *(double *)(lVar10 + -8)) {
      uVar16 = uVar17 - lVar19;
      uVar18 = -lVar22;
      uVar24 = lVar19 - lVar22;
      if (uVar16 < uVar18) {
        uVar24 = uVar17;
      }
      uVar17 = uVar16;
      if (uVar23 < uVar16) {
        uVar17 = uVar23;
      }
      local_148 = 0.0;
      uVar24 = uVar24 - lVar19;
      if (uVar24 != 0) {
        if (uVar24 - 1 < 3) {
          uVar20 = 0;
        }
        else {
          uVar21 = uVar16;
          if (uVar18 < uVar16) {
            uVar21 = uVar18;
          }
          pdVar14 = (double *)(lVar13 + lVar26 + 0x38);
          uVar20 = 0;
          do {
            local_148 = local_148 + pdVar14[-6] + pdVar14[-4] + pdVar14[-2] + *pdVar14;
            uVar20 = uVar20 + 4;
            pdVar14 = pdVar14 + 8;
          } while ((uVar21 & 0xfffffffffffffffc) != uVar20);
        }
        if ((uVar24 & 3) != 0) {
          uVar24 = uVar16;
          if (uVar18 < uVar16) {
            uVar24 = uVar18;
          }
          uVar21 = 0;
          do {
            local_148 = local_148 + *(double *)(lVar26 + uVar20 * 0x10 + lVar13 + 8 + uVar21);
            uVar21 = uVar21 + 0x10;
          } while (((uint)uVar24 & 3) << 4 != uVar21);
        }
      }
      if (uVar16 < uVar18) {
        if ((uVar12 - uVar8) - lVar11 < 0xfffffffffffffffd) {
          pdVar14 = (double *)(lVar13 + 0x38);
          uVar8 = uVar16;
          if (uVar23 < uVar16) {
            uVar8 = uVar23;
          }
          uVar12 = 0;
          do {
            local_148 = local_148 + pdVar14[-6] + pdVar14[-4] + pdVar14[-2] + *pdVar14;
            uVar12 = uVar12 + 4;
            pdVar14 = pdVar14 + 8;
          } while ((-(uVar8 + lVar22) & 0xfffffffffffffffc) != uVar12);
        }
        else {
          uVar12 = 0;
        }
        if ((-(uVar17 + lVar22) & 3) != 0) {
          if (uVar18 < uVar16) {
            uVar16 = uVar18;
          }
          uVar17 = 0;
          do {
            local_148 = local_148 + *(double *)(lVar13 + uVar12 * 0x10 + 8 + uVar17);
            uVar17 = uVar17 + 0x10;
          } while (((byte)((char)uVar23 - (char)uVar16) & 3) << 4 != uVar17);
        }
      }
      break;
    }
  }
  goto LAB_0013ed38;
}




// ELF address 0x000000000003d8d0; <strategy_comm_mock::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_order

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _<strategy_comm_mock::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_order */

undefined8 __rustcall
_<strategy_comm_mock::StrategyComm3_as_future_backtest_sdk::plugin::StrategyPlugin>::on_order
          (int *param_1,long param_2,undefined8 param_3)

{
  double dVar1;
  undefined1 auVar2 [16];
  long lVar3;
  undefined1 (*pauVar4) [16];
  ushort uVar5;
  undefined8 uVar6;
  int *piVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 extraout_RDX;
  ulong uVar13;
  undefined8 uVar14;
  byte bVar15;
  uint uVar16;
  byte bVar17;
  ulong uVar18;
  long lVar19;
  undefined1 (*pauVar20) [16];
  bool bVar21;
  double dVar22;
  double dVar23;
  undefined8 local_c8;
  long local_b8;
  undefined1 (*local_b0) [16];
  undefined8 local_a8;
  undefined8 *local_a0;
  ulong local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  double local_58;
  int *local_50;
  double local_48;
  undefined8 uStack_40;
  
  local_48 = (double)(*(ulong *)(param_2 + 0x60) & _DAT_00117750);
  uStack_40 = 0;
  if (local_48 <= _DAT_001176d0) {
    return 0;
  }
  uVar6 = _s__001175f0;
  if (*param_1 != 2) {
    uVar6 = *(undefined8 *)(param_1 + 0x5e);
  }
  lVar10 = *(long *)(param_2 + 8);
  lVar3 = *(long *)(param_2 + 0x10);
  lVar11 = lVar10 + lVar3;
  do {
    while( true ) {
      lVar19 = lVar11;
      local_c8 = param_3;
      local_50 = param_1;
      if (lVar10 == lVar19) goto LAB_0013d9da;
      uVar8 = (uint)*(char *)(lVar19 + -1);
      if (-1 < (int)uVar8) break;
      bVar17 = *(byte *)(lVar19 + -2);
      if ((char)bVar17 < -0x40) {
        bVar15 = *(byte *)(lVar19 + -3);
        if ((char)bVar15 < -0x40) {
          lVar11 = lVar19 + -4;
          uVar16 = bVar15 & 0x3f | (*(byte *)(lVar19 + -4) & 7) << 6;
        }
        else {
          lVar11 = lVar19 + -3;
          uVar16 = bVar15 & 0xf;
        }
        uVar16 = bVar17 & 0x3f | uVar16 << 6;
      }
      else {
        lVar11 = lVar19 + -2;
        uVar16 = bVar17 & 0x1f;
      }
      if ((uVar8 & 0x3f | uVar16 << 6) - 0x3a < 0xfffffff6) goto LAB_0013d9b7;
    }
    lVar11 = lVar19 + -1;
  } while (0xfffffff5 < uVar8 - 0x3a);
LAB_0013d9b7:
  lVar19 = lVar19 - lVar10;
  if (lVar19 < 0) {
    uVar14 = 0;
LAB_0013d9c2:
    (*(code *)PTR_handle_error_001e0330)
              (uVar14,lVar19,
               &PTR_anon_bf65de67c24155f465f4e3f0b4be96c2_2_llvm_4550705873496731735_001da2f0);
    local_c8 = extraout_RDX;
  }
  else if (lVar19 != 0) {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001e02b8)();
    uVar14 = 1;
    lVar11 = (*(code *)PTR___rust_alloc_001e0290)(lVar19,1);
    if (lVar11 != 0) goto LAB_0013d9dd;
    goto LAB_0013d9c2;
  }
LAB_0013d9da:
  lVar19 = 0;
  lVar11 = 1;
LAB_0013d9dd:
  (*(code *)PTR_memcpy_001e02f8)(lVar11,lVar10,lVar19);
  dVar23 = *(double *)(param_2 + 0x50);
  local_58 = *(double *)(param_2 + 0x68);
  local_90 = lVar19;
  local_88 = lVar11;
  local_80 = lVar19;
                    /* try { // try from 0013da16 to 0013dcbc has its CatchHandler @ 0013e0ed */
  dVar22 = (double)(*(code *)PTR_contract_mult_001e0420)(local_c8,lVar10,lVar3);
  piVar7 = local_50;
  (*(code *)PTR_clone_001e03a8)
            (&local_78,&local_90,&PTR_s_strategies_comm_strategy_strateg_001da7d8);
  hashbrown::rustc_entry::_<impl_hashbrown::map::HashMap<K,V,S,A>>::rustc_entry
            (&local_b8,piVar7 + 0x84,&local_78);
  pauVar20 = (undefined1 (*) [16])*local_a0;
  uVar12 = local_a0[1];
  uVar18 = uVar12 & local_98;
  auVar2 = *(undefined1 (*) [16])(*pauVar20 + uVar18);
  uVar5 = (ushort)(SUB161(auVar2 >> 7,0) & 1) | (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 | (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3
          | (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
          (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 | (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6
          | (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
          (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 | (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9
          | (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
          (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
          (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
          (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
          (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar2[0xf] >> 7) << 0xf;
  uVar8 = (uint)uVar5;
  if (uVar5 == 0) {
    lVar11 = 0x10;
    do {
      uVar18 = uVar18 + lVar11 & uVar12;
      auVar2 = *(undefined1 (*) [16])(*pauVar20 + uVar18);
      lVar11 = lVar11 + 0x10;
      uVar8 = (uint)(ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar2[0xf] >> 7) << 0xf);
    } while (uVar8 == 0);
  }
  uVar16 = 0;
  for (; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
    uVar16 = uVar16 + 1;
  }
  uVar18 = uVar16 + uVar18 & uVar12;
  bVar17 = (*pauVar20)[uVar18];
  if (-1 < (char)bVar17) {
    auVar2 = *pauVar20;
    uVar8 = 0;
    for (uVar16 = (uint)(ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar2[0xf] >> 7) << 0xf); (uVar16 & 1) == 0;
        uVar16 = uVar16 >> 1 | 0x80000000) {
      uVar8 = uVar8 + 1;
    }
    uVar18 = (ulong)uVar8;
    bVar17 = (*pauVar20)[uVar18];
  }
  bVar15 = (byte)(local_98 >> 0x39);
  (*pauVar20)[uVar18] = bVar15;
  pauVar20[1][uVar18 - 0x10 & uVar12] = bVar15;
  local_a0[2] = local_a0[2] - (ulong)(bVar17 & 1);
  *(long *)pauVar20[uVar18 * -4 + -4] = local_b8;
  *(undefined1 (**) [16])(pauVar20[uVar18 * -4 + -4] + 8) = local_b0;
  *(undefined8 *)pauVar20[uVar18 * -4 + -3] = local_a8;
  *(undefined8 *)(pauVar20[uVar18 * -4 + -3] + 8) = 0;
  *(undefined8 *)pauVar20[uVar18 * -4 + -2] = 8;
  *(undefined1 (*) [16])(pauVar20[uVar18 * -4 + -2] + 8) = (undefined1  [16])0x0;
  *(undefined8 *)(pauVar20[uVar18 * -4 + -1] + 8) = uVar6;
  local_a0[3] = local_a0[3] + 1;
  uStack_60 = *(undefined8 *)(param_2 + 0x78);
  uVar12 = *(ulong *)(pauVar20[uVar18 * -4 + -3] + 8);
  uVar9 = *(ulong *)pauVar20[uVar18 * -4 + -1];
  if (uVar9 == uVar12) {
    alloc::collections::vec_deque::VecDeque<T,A>::grow
              (pauVar20[uVar18 * -4 + -3] + 8,&PTR_s__hdd1_lyt_d_FutureCommodity_Mult_001da7f0);
    uVar12 = *(ulong *)(pauVar20[uVar18 * -4 + -3] + 8);
    uVar9 = *(ulong *)pauVar20[uVar18 * -4 + -1];
  }
  dVar23 = dVar23 * _DAT_00117718;
  uVar9 = uVar9 + *(long *)(pauVar20[uVar18 * -4 + -2] + 8);
  uVar13 = 0;
  if (uVar12 <= uVar9) {
    uVar13 = uVar12;
  }
  lVar11 = *(long *)pauVar20[uVar18 * -4 + -2];
  lVar10 = (uVar9 - uVar13) * 0x10;
  *(double *)(lVar11 + lVar10) = dVar23;
  *(undefined8 *)(lVar11 + 8 + lVar10) = uStack_60;
  lVar11 = *(long *)pauVar20[uVar18 * -4 + -1];
  *(long *)pauVar20[uVar18 * -4 + -1] = lVar11 + 1;
  if (lVar11 + 1 != 0) {
    uVar12 = *(ulong *)(pauVar20[uVar18 * -4 + -3] + 8);
    lVar10 = *(long *)pauVar20[uVar18 * -4 + -2];
    dVar1 = *(double *)(pauVar20[uVar18 * -4 + -1] + 8);
    uVar9 = *(ulong *)(pauVar20[uVar18 * -4 + -2] + 8);
    do {
      uVar13 = uVar12;
      if (uVar9 < uVar12) {
        uVar13 = 0;
      }
      if (dVar23 - *(double *)(lVar10 + (uVar9 - uVar13) * 0x10) <= dVar1) break;
      uVar13 = uVar12;
      if (uVar9 + 1 < uVar12) {
        uVar13 = 0;
      }
      uVar9 = (uVar9 + 1) - uVar13;
      *(ulong *)(pauVar20[uVar18 * -4 + -2] + 8) = uVar9;
      *(long *)pauVar20[uVar18 * -4 + -1] = lVar11;
      bVar21 = lVar11 != 0;
      lVar11 = lVar11 + -1;
    } while (bVar21);
  }
  (*(code *)PTR_clone_001e03a8)
            (&local_78,&local_90,&PTR_s_strategies_comm_strategy_strateg_001da808);
  hashbrown::rustc_entry::_<impl_hashbrown::map::HashMap<K,V,S,A>>::rustc_entry
            (&local_b8,piVar7 + 0x90,&local_78);
  pauVar20 = local_b0;
  if (local_b8 != -0x8000000000000000) {
    pauVar4 = (undefined1 (*) [16])*local_a0;
    uVar12 = local_a0[1];
    uVar18 = uVar12 & local_98;
    auVar2 = *(undefined1 (*) [16])(*pauVar4 + uVar18);
    uVar5 = (ushort)(SUB161(auVar2 >> 7,0) & 1) | (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar2[0xf] >> 7) << 0xf;
    uVar8 = (uint)uVar5;
    if (uVar5 == 0) {
      lVar11 = 0x10;
      do {
        uVar18 = uVar18 + lVar11 & uVar12;
        auVar2 = *(undefined1 (*) [16])(*pauVar4 + uVar18);
        lVar11 = lVar11 + 0x10;
        uVar8 = (uint)(ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar2[0xf] >> 7) << 0xf);
      } while (uVar8 == 0);
    }
    uVar16 = 0;
    for (; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
      uVar16 = uVar16 + 1;
    }
    uVar18 = uVar16 + uVar18 & uVar12;
    bVar17 = (*pauVar4)[uVar18];
    if (-1 < (char)bVar17) {
      auVar2 = *pauVar4;
      uVar8 = 0;
      for (uVar16 = (uint)(ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(byte)(auVar2[0xf] >> 7) << 0xf); (uVar16 & 1) == 0;
          uVar16 = uVar16 >> 1 | 0x80000000) {
        uVar8 = uVar8 + 1;
      }
      uVar18 = (ulong)uVar8;
      bVar17 = (*pauVar4)[uVar18];
    }
    bVar15 = (byte)(local_98 >> 0x39);
    (*pauVar4)[uVar18] = bVar15;
    pauVar4[1][uVar18 - 0x10 & uVar12] = bVar15;
    pauVar20 = pauVar4 + uVar18 * -4;
    local_a0[2] = local_a0[2] - (ulong)(bVar17 & 1);
    *(long *)pauVar4[uVar18 * -4 + -4] = local_b8;
    *(undefined1 (**) [16])(pauVar20[-4] + 8) = local_b0;
    *(undefined8 *)pauVar20[-3] = local_a8;
    *(undefined8 *)(pauVar20[-3] + 8) = 0;
    *(undefined8 *)pauVar20[-2] = 8;
    *(undefined1 (*) [16])(pauVar20[-2] + 8) = (undefined1  [16])0x0;
    *(undefined8 *)(pauVar20[-1] + 8) = uVar6;
    local_a0[3] = local_a0[3] + 1;
  }
  uVar12 = *(ulong *)(pauVar20[-3] + 8);
  uVar18 = *(ulong *)pauVar20[-1];
  if (uVar18 == uVar12) {
    alloc::collections::vec_deque::VecDeque<T,A>::grow
              (pauVar20[-3] + 8,&PTR_s__hdd1_lyt_d_FutureCommodity_Mult_001da7f0);
    uVar12 = *(ulong *)(pauVar20[-3] + 8);
    uVar18 = *(ulong *)pauVar20[-1];
  }
  uVar18 = uVar18 + *(long *)(pauVar20[-2] + 8);
  uVar9 = 0;
  if (uVar12 <= uVar18) {
    uVar9 = uVar12;
  }
  lVar11 = *(long *)pauVar20[-2];
  lVar10 = (uVar18 - uVar9) * 0x10;
  *(double *)(lVar11 + lVar10) = dVar23;
  *(double *)(lVar11 + 8 + lVar10) = local_48 * local_58 * dVar22;
  lVar11 = *(long *)pauVar20[-1];
  *(long *)pauVar20[-1] = lVar11 + 1;
  if (lVar11 + 1 != 0) {
    uVar12 = *(ulong *)(pauVar20[-3] + 8);
    lVar10 = *(long *)pauVar20[-2];
    dVar22 = *(double *)(pauVar20[-1] + 8);
    uVar18 = *(ulong *)(pauVar20[-2] + 8);
    do {
      uVar9 = uVar12;
      if (uVar18 < uVar12) {
        uVar9 = 0;
      }
      if (dVar23 - *(double *)(lVar10 + (uVar18 - uVar9) * 0x10) <= dVar22) break;
      uVar9 = uVar12;
      if (uVar18 + 1 < uVar12) {
        uVar9 = 0;
      }
      uVar18 = (uVar18 + 1) - uVar9;
      *(ulong *)(pauVar20[-2] + 8) = uVar18;
      *(long *)pauVar20[-1] = lVar11;
      bVar21 = lVar11 != 0;
      lVar11 = lVar11 + -1;
    } while (bVar21);
  }
  lStack_68 = local_80;
  local_78 = local_90;
  lStack_70 = local_88;
  hashbrown::rustc_entry::_<impl_hashbrown::map::HashMap<K,V,S,A>>::rustc_entry
            (&local_b8,piVar7 + 0x9c,&local_78);
  pauVar20 = local_b0;
  if (local_b8 != -0x8000000000000000) {
    pauVar4 = (undefined1 (*) [16])*local_a0;
    uVar12 = local_a0[1];
    uVar18 = uVar12 & local_98;
    auVar2 = *(undefined1 (*) [16])(*pauVar4 + uVar18);
    uVar5 = (ushort)(SUB161(auVar2 >> 7,0) & 1) | (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar2[0xf] >> 7) << 0xf;
    uVar8 = (uint)uVar5;
    if (uVar5 == 0) {
      lVar11 = 0x10;
      do {
        uVar18 = uVar18 + lVar11 & uVar12;
        auVar2 = *(undefined1 (*) [16])(*pauVar4 + uVar18);
        lVar11 = lVar11 + 0x10;
        uVar8 = (uint)(ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar2[0xf] >> 7) << 0xf);
      } while (uVar8 == 0);
    }
    uVar16 = 0;
    for (; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
      uVar16 = uVar16 + 1;
    }
    uVar18 = uVar16 + uVar18 & uVar12;
    bVar17 = (*pauVar4)[uVar18];
    if (-1 < (char)bVar17) {
      auVar2 = *pauVar4;
      uVar8 = 0;
      for (uVar16 = (uint)(ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(byte)(auVar2[0xf] >> 7) << 0xf); (uVar16 & 1) == 0;
          uVar16 = uVar16 >> 1 | 0x80000000) {
        uVar8 = uVar8 + 1;
      }
      uVar18 = (ulong)uVar8;
      bVar17 = (*pauVar4)[uVar18];
    }
    bVar15 = (byte)(local_98 >> 0x39);
    (*pauVar4)[uVar18] = bVar15;
    pauVar4[1][uVar18 - 0x10 & uVar12] = bVar15;
    pauVar20 = pauVar4 + uVar18 * -4;
    local_a0[2] = local_a0[2] - (ulong)(bVar17 & 1);
    *(long *)pauVar4[uVar18 * -4 + -4] = local_b8;
    *(undefined1 (**) [16])(pauVar20[-4] + 8) = local_b0;
    *(undefined8 *)pauVar20[-3] = local_a8;
    *(undefined8 *)(pauVar20[-3] + 8) = 0;
    *(undefined8 *)pauVar20[-2] = 8;
    *(undefined1 (*) [16])(pauVar20[-2] + 8) = (undefined1  [16])0x0;
    *(undefined8 *)(pauVar20[-1] + 8) = uVar6;
    local_a0[3] = local_a0[3] + 1;
  }
  uVar12 = *(ulong *)(pauVar20[-3] + 8);
  uVar18 = *(ulong *)pauVar20[-1];
  if (uVar18 == uVar12) {
    alloc::collections::vec_deque::VecDeque<T,A>::grow
              (pauVar20[-3] + 8,&PTR_s__hdd1_lyt_d_FutureCommodity_Mult_001da7f0);
    uVar12 = *(ulong *)(pauVar20[-3] + 8);
    uVar18 = *(ulong *)pauVar20[-1];
  }
  uVar18 = uVar18 + *(long *)(pauVar20[-2] + 8);
  uVar9 = 0;
  if (uVar12 <= uVar18) {
    uVar9 = uVar12;
  }
  lVar11 = *(long *)pauVar20[-2];
  lVar10 = (uVar18 - uVar9) * 0x10;
  *(double *)(lVar11 + lVar10) = dVar23;
  *(undefined8 *)(lVar11 + 8 + lVar10) = 0x3ff0000000000000;
  lVar11 = *(long *)pauVar20[-1];
  *(long *)pauVar20[-1] = lVar11 + 1;
  if (lVar11 + 1 != 0) {
    uVar12 = *(ulong *)(pauVar20[-3] + 8);
    lVar10 = *(long *)pauVar20[-2];
    dVar22 = *(double *)(pauVar20[-1] + 8);
    uVar18 = *(ulong *)(pauVar20[-2] + 8);
    do {
      uVar9 = uVar12;
      if (uVar18 < uVar12) {
        uVar9 = 0;
      }
      if (dVar23 - *(double *)(lVar10 + (uVar18 - uVar9) * 0x10) <= dVar22) {
        return 0;
      }
      uVar9 = uVar12;
      if (uVar18 + 1 < uVar12) {
        uVar9 = 0;
      }
      uVar18 = (uVar18 + 1) - uVar9;
      *(ulong *)(pauVar20[-2] + 8) = uVar18;
      *(long *)pauVar20[-1] = lVar11;
      bVar21 = lVar11 != 0;
      lVar11 = lVar11 + -1;
    } while (bVar21);
  }
  return 0;
}




// ELF address 0x000000000003f240; <strategy_comm_mock::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_finish

/* _<strategy_comm_mock::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_finish */

undefined8 __rustcall
_<strategy_comm_mock::StrategyComm3_as_future_backtest_sdk::plugin::StrategyPlugin>::on_finish
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
  
  lVar6 = (*(code *)PTR_para_001e03a0)(param_2);
  uVar2 = *(undefined2 *)(lVar6 + 0x34);
  uVar7 = *(undefined8 *)(lVar6 + 0x28);
  local_48 = *(undefined4 *)(lVar6 + 0x18);
  uStack_44 = *(undefined4 *)(lVar6 + 0x1c);
  uStack_40 = *(undefined4 *)(lVar6 + 0x20);
  uStack_3c = *(undefined4 *)(lVar6 + 0x24);
  uVar3 = *(undefined4 *)(lVar6 + 0x30);
  uVar1 = *(undefined1 *)(lVar6 + 0x30);
  _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone
            (&local_80,lVar6,anon_0036399ff1eb44f47ba6f1e636ff6265_71_llvm_6957943596352109903);
  local_68 = CONCAT44(uStack_44,local_48);
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_58 = uVar7;
  local_50 = uVar3;
  local_4c = uVar2;
                    /* try { // try from 0013f2ae to 0013f2c6 has its CatchHandler @ 0013f343 */
  uVar5 = (*(code *)PTR_is_night_001e0498)(param_2);
  uVar7 = (*(code *)PTR_all_in_001e03e0)(param_2,uVar5,uVar1);
  puVar4 = PTR___rust_dealloc_001e0298;
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
    (*(code *)PTR___rust_dealloc_001e0298)(local_78,local_80 * 0x18,8);
  }
  return uVar7;
}




// ELF address 0x000000000003a5d0; <strategy_comm_mock::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _<strategy_comm_mock::StrategyComm3 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal */

long *** __rustcall
_<strategy_comm_mock::StrategyComm3_as_future_backtest_sdk::plugin::StrategyPlugin>::on_signal
          (double **param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  undefined1 uVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  long lVar9;
  long ***ppplVar10;
  ulong uVar11;
  long **pplVar12;
  undefined *puVar13;
  long extraout_RDX;
  long extraout_RDX_00;
  long lVar14;
  long **pplVar15;
  undefined *puVar16;
  long **pplVar17;
  long lVar18;
  long lVar19;
  double **ppdVar20;
  byte bVar21;
  undefined8 uVar22;
  long *plVar23;
  bool bVar24;
  ulong uVar25;
  double extraout_XMM0_Qa;
  double dVar26;
  double *pdVar27;
  double **extraout_XMM0_Qb;
  double *extraout_XMM0_Qb_00;
  double *extraout_XMM0_Qb_01;
  double **extraout_XMM0_Qb_02;
  double *extraout_XMM0_Qb_03;
  double *extraout_XMM0_Qb_04;
  double *extraout_XMM0_Qb_05;
  double *extraout_XMM0_Qb_06;
  double *extraout_XMM1_Qa;
  double *pdVar28;
  double **ppdVar29;
  double *extraout_XMM1_Qb;
  double *pdVar30;
  double dVar31;
  double *pdVar32;
  double *pdVar33;
  double dVar34;
  undefined1 auVar35 [16];
  char local_8b1;
  undefined8 local_8b0;
  double **local_8a8;
  undefined1 uStack_89a;
  char cStack_899;
  double **local_898;
  double *pdStack_890;
  double **local_888;
  undefined8 uStack_880;
  double **local_878;
  double *pdStack_870;
  char local_85b;
  undefined1 local_85a;
  char local_859;
  double **ppdStack_858;
  undefined8 **local_850;
  undefined8 local_848;
  undefined8 local_840;
  double **local_838;
  double **ppdStack_830;
  double **local_828;
  double *pdStack_820;
  long **pplStack_810;
  double **local_808;
  double *pdStack_800;
  double dStack_7f8;
  long local_7f0;
  undefined8 ***local_7e8;
  long ***ppplStack_7e0;
  double ***local_7d8;
  undefined1 *puStack_7d0;
  long ***local_7c8;
  undefined *puStack_7c0;
  double ***pppdStack_7b8;
  code *pcStack_7b0;
  double *local_7a8;
  double *pdStack_7a0;
  double **local_798;
  double **ppdStack_790;
  char *pcStack_788;
  undefined8 uStack_780;
  char *pcStack_778;
  undefined8 uStack_770;
  double *local_768;
  double *pdStack_760;
  double **local_758;
  double *pdStack_750;
  undefined8 ***local_748;
  long ***ppplStack_740;
  double ***local_738;
  undefined1 *puStack_730;
  long ***local_728;
  undefined *puStack_720;
  double ***pppdStack_718;
  code *pcStack_710;
  double *pdStack_708;
  undefined *puStack_700;
  char **ppcStack_6f8;
  code *pcStack_6f0;
  char **ppcStack_6e8;
  code *pcStack_6e0;
  undefined4 local_63c;
  double *local_638;
  double *pdStack_630;
  double *local_628;
  undefined8 uStack_620;
  double *local_618;
  undefined8 uStack_610;
  double *local_608;
  double *pdStack_600;
  double *local_5f8;
  double *pdStack_5f0;
  undefined8 ***local_5e8;
  long ***ppplStack_5e0;
  double ***pppdStack_5d8;
  undefined8 ***pppuStack_5d0;
  long ***ppplStack_5c8;
  double ***pppdStack_5c0;
  double *local_5b8 [2];
  double *local_5a8;
  double *local_5a0;
  double *local_598;
  double *local_590;
  double *local_588;
  double *local_580;
  undefined8 ***local_578;
  long ***ppplStack_570;
  double ***local_568;
  long local_560;
  double dStack_558;
  undefined8 local_550;
  double **local_548;
  long local_540;
  double **local_538;
  undefined8 ***local_530;
  long ***ppplStack_528;
  double ***local_520;
  double **local_518;
  double *pdStack_510;
  double **local_508;
  double *pdStack_500;
  double **local_4f8;
  double **ppdStack_4f0;
  double **local_4e8;
  double *pdStack_4e0;
  double *local_4d8;
  double *pdStack_4d0;
  double **local_4c8;
  double *pdStack_4c0;
  double *local_4b8;
  double *pdStack_4b0;
  double *local_4a8;
  double *pdStack_4a0;
  double *local_498;
  double *pdStack_490;
  double *local_488;
  double *pdStack_480;
  double *local_478;
  double *pdStack_470;
  double *local_468;
  double *pdStack_460;
  double *local_458;
  double *pdStack_450;
  double *local_448;
  double *pdStack_440;
  double *local_438;
  double **local_430;
  double **ppdStack_428;
  double *local_420;
  double *local_418;
  char local_410;
  char local_40f;
  undefined1 local_40e;
  long local_408;
  double **local_400;
  long local_3f8;
  long local_3f0;
  undefined8 local_3e8;
  double *local_3d8;
  double *pdStack_3d0;
  long local_3c8;
  long *local_3c0;
  long local_3b8;
  double **local_3b0;
  undefined8 uStack_3a8;
  double **local_3a0;
  undefined4 local_398;
  char local_394;
  undefined1 local_393;
  double *local_390;
  double *local_388;
  double *local_380;
  double *local_378;
  double *local_370;
  double *pdStack_368;
  double *pdStack_360;
  double *pdStack_358;
  double *pdStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  double **ppdStack_330;
  double **ppdStack_328;
  double **ppdStack_320;
  double **ppdStack_318;
  double **ppdStack_310;
  double **ppdStack_308;
  undefined1 uStack_300;
  char cStack_2ff;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  double **ppdStack_2e0;
  double **ppdStack_2d8;
  double **ppdStack_2d0;
  double **ppdStack_2c8;
  double **ppdStack_2c0;
  double **ppdStack_2b8;
  undefined1 uStack_2b0;
  byte bStack_2af;
  double *local_2a8;
  double *pdStack_2a0;
  double *local_298;
  double *pdStack_290;
  double *local_288;
  double *pdStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  double **ppdStack_260;
  double **ppdStack_258;
  double **ppdStack_250;
  double **ppdStack_248;
  double **ppdStack_240;
  double **ppdStack_238;
  undefined2 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  double **ppdStack_210;
  double **ppdStack_208;
  double **ppdStack_200;
  double **ppdStack_1f8;
  double **ppdStack_1f0;
  double **ppdStack_1e8;
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
  int local_178;
  undefined4 uStack_174;
  double dStack_170;
  byte local_168;
  undefined7 uStack_167;
  double dStack_160;
  long local_158;
  undefined8 local_150;
  double local_138;
  double **local_130 [10];
  double **local_e0 [14];
  double **ppdStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [32];
  
  local_8b0 = param_3;
  lVar9 = (*(code *)PTR_para_001e03a0)(param_3);
  cVar6 = *(char *)(lVar9 + 0x34);
  local_898 = *(double ***)(lVar9 + 0x28);
  uVar5 = *(undefined1 *)(lVar9 + 0x35);
  local_888 = *(double ***)(lVar9 + 0x18);
  uStack_880 = *(undefined8 *)(lVar9 + 0x20);
  ppdVar20 = *(double ***)(lVar9 + 0x30);
  _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone
            (&local_3c8,lVar9,anon_0036399ff1eb44f47ba6f1e636ff6265_71_llvm_6957943596352109903);
  local_398 = SUB84(ppdVar20,0);
  local_3b0 = local_888;
  uStack_3a8 = uStack_880;
  local_3a0 = local_898;
  local_394 = cVar6;
  local_393 = uVar5;
  if (*(int *)param_1 == 2) {
                    /* try { // try from 0013afd0 to 0013afe8 has its CatchHandler @ 0013d85d */
    (*(code *)PTR_expect_failed_001e03f0)
              ("on_begin must be called firston_signal code= score= vol_alpha=",0x1d,
               &PTR_s_strategies_comm_strategy_strateg_001da648);
    goto LAB_0013afe9;
  }
                    /* try { // try from 0013a66d to 0013a681 has its CatchHandler @ 0013d85d */
  (*(code *)PTR_clone_001e03a8)
            (&local_7e8,param_1 + 8,&PTR_s_strategies_comm_strategy_strateg_001da8a8);
  local_898 = (double **)param_1[0x14];
  pdStack_890 = param_1[0x15];
                    /* try { // try from 0013a698 to 0013a6ac has its CatchHandler @ 0013d858 */
  local_888 = ppdVar20;
  (*(code *)PTR_clone_001e03a8)
            (&local_178,param_1 + 0xb,&PTR_s_strategies_comm_strategy_strateg_001da8a8);
  ppdVar20 = (double **)param_1[0x10];
  uVar25 = (long)ppdVar20 * 8;
  if (uVar25 < 0x7ffffffffffffff9 && (ulong)ppdVar20 >> 0x3d == 0) {
    local_828 = (double **)param_1[0x16];
    pdStack_820 = param_1[0x17];
    pdVar33 = param_1[0xf];
    local_878 = param_1;
    local_85b = cVar6;
    local_7f0 = param_2;
    if (uVar25 == 0) {
      lVar9 = 8;
      local_8a8 = (double **)0x0;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001e02b8)();
      uVar22 = 8;
      lVar9 = (*(code *)PTR___rust_alloc_001e0290)(uVar25,8);
      local_8a8 = ppdVar20;
      if (lVar9 == 0) goto LAB_0013a6e1;
    }
    (*(code *)PTR_memcpy_001e02f8)(lVar9,pdVar33,uVar25);
    ppdVar29 = local_878;
    local_838 = (double **)local_878[0x18];
    ppdStack_830 = (double **)local_878[0x19];
    cVar6 = *(char *)(local_878 + 0x35);
    local_808 = (double **)local_878[0x1a];
    pdStack_800 = local_878[0x1b];
    local_7a8 = local_878[0x1c];
    pdStack_7a0 = local_878[0x1d];
    local_758 = (double **)local_878[0x1e];
    pdStack_750 = local_878[0x1f];
    local_638 = local_878[0x20];
    pdStack_630 = local_878[0x21];
    local_768 = local_878[0x22];
    pdStack_760 = local_878[0x23];
    local_3d8 = local_878[0x24];
    pdStack_3d0 = local_878[0x25];
    local_5f8 = local_878[0x26];
    pdStack_5f0 = local_878[0x27];
    local_608 = local_878[0x28];
    pdStack_600 = local_878[0x29];
    pdVar33 = *local_878;
    local_618 = local_878[1];
    pdVar28 = local_878[2];
    local_628 = local_878[3];
    local_370 = local_878[4];
    local_378 = local_878[5];
    local_380 = local_878[6];
    local_388 = local_878[7];
    local_288 = local_878[0x2a];
    pdStack_280 = local_878[0x2b];
    local_859 = *(char *)((long)local_878 + 0x1a9);
    local_298 = local_878[0x2c];
    pdStack_290 = local_878[0x2d];
    local_2a8 = local_878[0x2e];
    pdStack_2a0 = local_878[0x2f];
    local_85a = *(undefined1 *)((long)local_878 + 0x1aa);
    local_390 = local_878[0x30];
                    /* try { // try from 0013a8c4 to 0013a8d8 has its CatchHandler @ 0013d834 */
    (*(code *)PTR_clone_001e03a8)
              (&local_748,local_878 + 0x11,&PTR_s_strategies_comm_strategy_strateg_001da8a8);
    plVar23 = local_3c0;
    puVar16 = PTR_bcmp_001e0358;
    local_578 = local_7e8;
    ppplStack_570 = ppplStack_7e0;
    local_568 = local_7d8;
    local_518 = local_898;
    pdStack_510 = pdStack_890;
    local_560 = CONCAT44(uStack_174,local_178);
    dStack_558 = dStack_170;
    local_550 = CONCAT71(uStack_167,local_168);
    local_508 = local_828;
    pdStack_500 = pdStack_820;
    local_548 = local_8a8;
    local_4f8 = local_838;
    ppdStack_4f0 = ppdStack_830;
    local_4e8 = local_808;
    pdStack_4e0 = pdStack_800;
    local_4d8 = local_7a8;
    pdStack_4d0 = pdStack_7a0;
    local_4c8 = local_758;
    pdStack_4c0 = pdStack_750;
    local_4b8 = local_638;
    pdStack_4b0 = pdStack_630;
    local_4a8 = local_768;
    pdStack_4a0 = pdStack_760;
    local_498 = local_3d8;
    pdStack_490 = pdStack_3d0;
    local_488 = local_5f8;
    pdStack_480 = pdStack_5f0;
    local_478 = local_608;
    pdStack_470 = pdStack_600;
    local_5b8[1] = local_618;
    local_5a0 = local_628;
    local_598 = local_370;
    local_590 = local_378;
    local_588 = local_380;
    local_580 = local_388;
    local_468 = local_288;
    pdStack_460 = pdStack_280;
    local_40f = local_859;
    local_458 = local_298;
    pdStack_450 = pdStack_290;
    local_448 = local_2a8;
    pdStack_440 = pdStack_2a0;
    local_40e = local_85a;
    local_438 = local_390;
    local_530 = local_748;
    ppplStack_528 = ppplStack_740;
    local_520 = local_738;
    local_430 = (double **)ppdVar29[0x31];
    ppdStack_428 = (double **)ppdVar29[0x32];
    local_420 = ppdVar29[0x33];
    local_418 = ppdVar29[0x34];
    local_5b8[0] = pdVar33;
    local_5a8 = pdVar28;
    local_540 = lVar9;
    local_538 = ppdVar20;
    local_410 = cVar6;
    if (local_3b8 != 0) {
      local_828 = local_888;
      pdStack_820 = (double *)0x0;
      ppdVar20 = (double **)(local_7f0 + 0x48);
      local_898 = *(double ***)(local_7f0 + 0x50);
      lVar9 = *(long *)(local_7f0 + 0x58);
      lVar14 = local_3b8 * 0x18;
      lVar18 = 0;
      do {
        if ((*(long *)((long)plVar23 + lVar18 + 0x10) == lVar9) &&
           (iVar8 = (*(code *)puVar16)(*(undefined8 *)((long)plVar23 + lVar18 + 8),local_898,lVar9),
           iVar8 == 0)) {
                    /* try { // try from 0013ab98 to 0013abaa has its CatchHandler @ 0013d80f */
          (*(code *)PTR_trade_codes_001e03b0)(&local_408,local_8b0);
          lVar14 = local_3f8;
          local_888 = local_400;
          if (local_3f8 == 0) {
            ppplVar10 = (long ***)0x0;
            goto LAB_0013ae52;
          }
          local_8a8 = *(double ***)(local_7f0 + 8);
          lVar18 = *(long *)(local_7f0 + 0x10);
          lVar2 = local_3f8 * 0x18;
          lVar19 = 0;
          local_838 = ppdVar20;
          goto LAB_0013ac0d;
        }
        lVar18 = lVar18 + 0x18;
      } while (lVar14 != lVar18);
    }
    ppplVar10 = (long ***)0x0;
LAB_0013ad06:
    if (local_578 != (undefined8 ***)0x0) {
      (*(code *)PTR___rust_dealloc_001e0298)(ppplStack_570,local_578,1);
    }
    if (local_560 != 0) {
      (*(code *)PTR___rust_dealloc_001e0298)(dStack_558,local_560,1);
    }
    if (local_548 != (double **)0x0) {
      (*(code *)PTR___rust_dealloc_001e0298)(local_540,(long)local_548 << 3,8);
    }
    if (local_530 != (undefined8 ***)0x0) {
      (*(code *)PTR___rust_dealloc_001e0298)(ppplStack_528,local_530,1);
    }
    puVar16 = PTR___rust_dealloc_001e0298;
    if (local_3b8 != 0) {
      plVar23 = local_3c0 + 1;
      lVar9 = local_3b8;
      do {
        if (plVar23[-1] != 0) {
          (*(code *)puVar16)(*plVar23,plVar23[-1],1);
        }
        plVar23 = plVar23 + 3;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    if (local_3c8 != 0) {
      (*(code *)PTR___rust_dealloc_001e0298)(local_3c0,local_3c8 * 0x18,8);
    }
    return ppplVar10;
  }
  uVar22 = 0;
LAB_0013a6e1:
                    /* try { // try from 0013a6e1 to 0013a6f3 has its CatchHandler @ 0013d875 */
  (*(code *)PTR_handle_error_001e0330)
            (uVar22,uVar25,anon_08119abc419c6269d25c73074d2b8f76_3_llvm_17838595212292778028);
LAB_0013afe9:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
  while (lVar19 = lVar19 + 0x18, lVar2 != lVar19) {
LAB_0013ac0d:
    if ((*(long *)((long)local_888 + lVar19 + 0x10) == lVar18) &&
       (iVar8 = (*(code *)puVar16)(*(undefined8 *)((long)local_888 + lVar19 + 8),local_8a8,lVar18),
       lVar3 = local_7f0, uVar22 = local_8b0, iVar8 == 0)) {
      cVar6 = *(char *)(local_7f0 + 0x94);
                    /* try { // try from 0013ac43 to 0013acae has its CatchHandler @ 0013d7fd */
      (*(code *)PTR_inst_start_time_sec_001e03b8)(local_8b0);
      cVar4 = (*(code *)PTR_is_trade_start_001e03c0)(uVar22,cVar6);
      if (cVar4 != '\0') {
        cVar4 = (*(code *)PTR_is_trade_end_001e03c8)(uVar22,cVar6);
        if (cVar4 != '\0') {
          if (cVar6 == '\0') {
            if (local_85b != '\0') goto LAB_0013af16;
          }
          else if (((ushort)((ulong)local_828 >> 0x10) >> 8 & 1) != 0) {
LAB_0013af16:
                    /* try { // try from 0013af16 to 0013af34 has its CatchHandler @ 0013d7fd */
            ppplVar10 = (long ***)(*(code *)PTR_all_in_001e03e0)(uVar22,cVar6,(uint)local_828 & 1);
            goto LAB_0013ae0a;
          }
        }
        (*(code *)PTR_clone_001e03a8)
                  (&local_850,lVar3,&PTR_s_strategies_comm_strategy_strateg_001da660);
                    /* try { // try from 0013acaf to 0013accb has its CatchHandler @ 0013d796 */
        (*(code *)PTR_clone_001e03a8)
                  (&local_3f0,local_838,&PTR_s_strategies_comm_strategy_strateg_001da678);
                    /* try { // try from 0013acdc to 0013acec has its CatchHandler @ 0013d791 */
        (*(code *)PTR_depth_001e03d0)(&local_748,uVar22,local_848);
        if ((int)local_748 == 2) {
          ppplVar10 = (long ***)0x0;
        }
        else {
          (*(code *)PTR_memcpy_001e02f8)(&local_178,&local_748,0x108);
          ppplVar10 = (long ***)0x0;
          if (0.0 < (double)local_130[0]) {
            local_828 = local_130[0];
            local_8a8 = local_e0[0];
            if ((double)local_e0[0] <= 0.0) goto LAB_0013b92f;
                    /* try { // try from 0013aed7 to 0013aee5 has its CatchHandler @ 0013d79b */
            local_888 = (double **)(*(code *)PTR_time_sec_001e03d8)(uVar22);
            if ((double)DAT_00117630 < (double)local_888 - local_138) {
LAB_0013af03:
              ppplVar10 = (long ***)0x0;
              goto LAB_0013b92f;
            }
                    /* try { // try from 0013af3d to 0013afa1 has its CatchHandler @ 0013d79b */
            auVar35 = (*(code *)PTR_signal_parameter_id_001e03e8)(local_898,lVar9);
            uVar25 = 0;
            if ((auVar35 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
              uVar25 = auVar35._8_8_ & 0xffffffff;
            }
            local_63c = (undefined4)uVar25;
            if (local_40f == '\x01') {
              (*(code *)PTR_clone_001e03a8)
                        (&local_5e8,&local_850,&PTR_s_strategies_comm_strategy_strateg_001da690);
              hashbrown::rustc_entry::_<impl_hashbrown::map::HashMap<K,V,S,A>>::rustc_entry
                        (&local_748,local_878 + 0x3c,&local_5e8);
              if (local_748 == (undefined8 ***)0x8000000000000000) {
                local_7e8 = (undefined8 ***)0x8000000000000000;
              }
              else {
                local_7c8 = local_728;
                puStack_7d0 = puStack_730;
                local_7e8 = local_748;
              }
              local_7d8 = local_738;
              ppplStack_7e0 = ppplStack_740;
              uVar22 = std::collections::hash::map::Entry<K,V>::or_insert_with
                                 (pdStack_450,local_448,&local_7e8);
                    /* try { // try from 0013b04a to 0013b09e has its CatchHandler @ 0013d79b */
              uVar11 = strategy_comm_mock::vol_spread_ratio::VolSpreadRatio::update
                                 ((double)local_888 * _DAT_00117718,local_8a8,local_828,uVar22);
              puVar16 = PTR_K1_MAP_G1_LOW_001e03f8;
              if (((uVar11 & 1) == 0) || ((double)local_438 < extraout_XMM0_Qa)) goto LAB_0013b0a1;
              local_838 = (double **)CONCAT44(local_838._4_4_,(int)CONCAT71((int7)(uVar25 >> 8),1));
              if (*(long *)(PTR_K1_MAP_G1_LOW_001e03f8 + 0x30) != 2) {
                once_cell::imp::OnceCell<T>::initialize
                          (PTR_K1_MAP_G1_LOW_001e03f8,PTR_K1_MAP_G1_LOW_001e03f8);
              }
            }
            else {
LAB_0013b0a1:
              puVar16 = PTR_K1_MAP_G2_HIGH_001e0400;
              if (*(long *)(PTR_K1_MAP_G2_HIGH_001e0400 + 0x30) != 2) {
                    /* try { // try from 0013d727 to 0013d731 has its CatchHandler @ 0013d79b */
                once_cell::imp::OnceCell<T>::initialize
                          (PTR_K1_MAP_G2_HIGH_001e0400,PTR_K1_MAP_G2_HIGH_001e0400);
              }
              local_838 = (double **)((ulong)local_838 & 0xffffffff00000000);
            }
            lVar9 = hashbrown::map::HashMap<K,V,S,A>::get_inner(puVar16,&local_63c);
            pdVar33 = (double *)&DAT_00117630;
            if (lVar9 != 0) {
              pdVar33 = (double *)(lVar9 + 8);
            }
            local_898 = (double **)*pdVar33;
            local_8b1 = (char)local_838;
            local_798 = local_898;
            uVar5 = strategy_comm_mock::Comm3Params::low_action_enum(ppplStack_528,local_520);
            local_808 = (double **)CONCAT71(local_808._1_7_,uVar5);
            cVar6 = strategy_comm_mock::Comm3Params::signal_mode(ppplStack_570,local_568);
                    /* WARNING: Switch is manually overridden */
            switch(cVar6) {
            case '\0':
              ppdStack_858 = (double **)(*(double *)(local_7f0 + 0x70) * (double)local_518);
              break;
            case '\x01':
              ppdStack_858 = *(double ***)(local_7f0 + 0x78);
              break;
            case '\x02':
              ppdStack_858 = *(double ***)(local_7f0 + 0x70);
              break;
            case '\x03':
              dVar26 = *(double *)(local_7f0 + 0x70);
              local_888 = (double **)
                          (~-(ulong)NAN(dVar26) & (_s__00117d80 & (ulong)dVar26 | ram0x00117c80) |
                          DAT_001176c0 & -(ulong)NAN(dVar26));
              uStack_880 = _UNK_00117c88;
              dVar26 = (double)(*(code *)PTR_pow_001e0408)
                                         ((ulong)dVar26 & _DAT_00117750,
                                          (double)DAT_00117630 / (double)local_898);
              ppdStack_858 = (double **)(dVar26 * (double)local_888);
            }
            if (((local_178 == 1) && ((local_168 & 1) != 0)) &&
               (DAT_00117668 <
                (double)((ulong)((dStack_170 - dStack_160) / (dStack_170 + dStack_160)) &
                        _DAT_00117750))) goto LAB_0013af03;
                    /* try { // try from 0013b23c to 0013b4e7 has its CatchHandler @ 0013d79b */
            local_888 = (double **)(*(code *)PTR_time_sec_001e03d8)(local_8b0);
            local_898 = local_3b0;
            pplStack_810 = (long **)(*(code *)PTR_spread_bp_001e0410)(local_8b0,local_848,local_840)
            ;
            ppdStack_790 = (double **)(*(code *)PTR_fee_bp_001e0418)(local_8b0,local_848,local_840);
            local_638 = (double *)
                        (*(code *)PTR_contract_mult_001e0420)(local_8b0,local_848,local_840);
            local_768 = (double *)(*(code *)PTR_price_step_001e0428)(local_8b0,local_848,local_840);
            local_758 = (double **)(*(code *)PTR_vol_step_001e0430)(local_8b0,local_848,local_840);
            (*(code *)PTR_position_001e0438)(local_8b0,local_848,local_840);
            local_7a8 = extraout_XMM1_Qa;
            pdStack_7a0 = extraout_XMM1_Qb;
            dStack_7f8 = (double)(*(code *)PTR_position_holding_secs_001e0440)
                                           (local_8b0,local_848,local_840);
            local_898 = (double **)((double)local_898 / _DAT_00117718);
            dStack_7f8 = dStack_7f8 + (double)local_898;
            uVar5 = (*(code *)PTR_is_should_lock_001e0448)(local_8b0,local_848,local_840);
            local_3d8 = (double *)CONCAT71(local_3d8._1_7_,uVar5);
            lVar9 = 0x148;
            if (local_8b1 == '\x01') {
              pplVar12 = (long **)&local_488;
              if ((char)local_5b8[0] != '\0') {
                pplVar12 = (long **)(local_5b8 + 1);
              }
              pplVar15 = (long **)&pdStack_480;
              if ((char)local_5a8 != '\0') {
                pplVar15 = (long **)&local_5a0;
              }
              pplVar17 = (long **)&local_478;
              if ((char)local_598 != '\0') {
                pplVar17 = (long **)&local_590;
              }
              lVar9 = 0x148;
              if ((char)local_588 != '\0') {
                lVar9 = 0x38;
              }
            }
            else {
              pplVar12 = (long **)&local_488;
              pplVar15 = (long **)&pdStack_480;
              pplVar17 = (long **)&local_478;
            }
            local_628 = *(double **)((long)local_5b8 + lVar9);
            local_5f8 = (double *)*pplVar17;
            local_618 = (double *)*pplVar15;
            local_608 = (double *)*pplVar12;
            pdStack_600 = (double *)0x0;
            uStack_610 = 0;
            pdStack_5f0 = (double *)0x0;
            uStack_620 = 0;
            pdStack_368 = local_608;
            pdStack_360 = local_618;
            pdStack_358 = local_5f8;
            pdStack_350 = local_628;
            strategy_comm_mock::signal_trigger::dynamic_threshold
                      (dStack_7f8,local_468,pdStack_460,local_458,&ppdStack_70,&pdStack_368);
            uStack_89a = strategy_comm_mock::Comm3Params::signal_trigger_mode(dStack_558,local_550);
            (*(code *)PTR_clone_001e03a8)
                      (&local_7e8,&local_850,&PTR_s_strategies_comm_strategy_strateg_001da6a8);
                    /* try { // try from 0013b4e8 to 0013b507 has its CatchHandler @ 0013d76c */
            (*(code *)PTR_clone_001e03a8)
                      (&local_748,&local_3f0,&PTR_s_strategies_comm_strategy_strateg_001da6c0);
            pppdStack_5d8 = local_7d8;
            local_5e8 = local_7e8;
            ppplStack_5e0 = ppplStack_7e0;
            pppuStack_5d0 = local_748;
            ppplStack_5c8 = ppplStack_740;
            pppdStack_5c0 = local_738;
                    /* try { // try from 0013b556 to 0013ba1e has its CatchHandler @ 0013d79b */
            hashbrown::rustc_entry::_<impl_hashbrown::map::HashMap<K,V,S,A>>::rustc_entry
                      (&local_748,local_878 + 0x36,&local_5e8);
            if (local_748 == (undefined8 ***)0x8000000000000000) {
              local_7e8 = (undefined8 ***)0x8000000000000000;
            }
            else {
              pppdStack_7b8 = pppdStack_718;
              pcStack_7b0 = pcStack_710;
              local_7c8 = local_728;
              puStack_7c0 = puStack_720;
              puStack_7d0 = puStack_730;
              local_7e8 = local_748;
            }
            local_7d8 = local_738;
            ppplStack_7e0 = ppplStack_740;
            local_748 = (undefined8 ***)&uStack_89a;
            ppplStack_740 = (long ***)&local_548;
            local_738 = &ppdStack_70;
            lVar9 = std::collections::hash::map::Entry<K,V>::or_insert_with(&local_7e8,&local_748);
            local_888 = (double **)((double)local_888 + (double)local_898);
            strategy_comm_mock::signal_trigger::SignalTrigger::update_score
                      (local_888,ppdStack_858,0,0,lVar9,0);
            *(undefined8 *)(lVar9 + 0x50) = uStack_60;
            *(undefined8 *)(lVar9 + 0x58) = uStack_58;
            *(double ***)(lVar9 + 0x40) = ppdStack_70;
            *(undefined8 *)(lVar9 + 0x48) = uStack_68;
                    /* WARNING: Switch is manually overridden */
            switch(uStack_89a) {
            case 0:
              if (cVar6 == '\0') {
                strategy_comm_mock::signal_trigger::SignalTrigger::point_signal_trigger_pv1_spread
                          (pdStack_510,pplStack_810,&local_748,lVar9);
                ppplVar10 = ppplStack_740;
                goto joined_r0x0013b766;
              }
              if (cVar6 == '\x03') {
                strategy_comm_mock::signal_trigger::SignalTrigger::point_signal_trigger_pv4
                          (pdStack_510,ppdStack_790,pplStack_810,&local_748,lVar9);
                ppplVar10 = ppplStack_740;
                goto joined_r0x0013b766;
              }
              dVar26 = *(double *)(lVar9 + 0x38);
              if (*(double *)(lVar9 + 0x40) <= dVar26) {
                local_748._0_1_ = '\0';
              }
              else {
                local_748._0_1_ = '\x03';
                if ((dVar26 < *(double *)(lVar9 + 0x58)) &&
                   (local_748._0_1_ = '\x02', *(double *)(lVar9 + 0x50) < dVar26)) {
                  local_748._0_1_ = (*(double *)(lVar9 + 0x48) < dVar26) * '\x03' + '\x01';
                }
              }
              goto LAB_0013b7e3;
            case 1:
              strategy_comm_mock::signal_trigger::SignalTrigger::windows_mean_trigger
                        (local_508,&local_748,lVar9);
              break;
            case 2:
              strategy_comm_mock::signal_trigger::SignalTrigger::windows_std_trigger
                        (local_508,&local_748,lVar9);
              break;
            case 3:
              strategy_comm_mock::signal_trigger::SignalTrigger::windows_quantile_trigger
                        (pdStack_500,local_508,&local_748,lVar9);
              break;
            case 4:
              strategy_comm_mock::signal_trigger::SignalTrigger::windows_sharpe_trigger
                        (local_508,&local_748,lVar9);
              break;
            case 5:
              strategy_comm_mock::signal_trigger::SignalTrigger::windows_rsi_trigger
                        (local_508,&local_748,lVar9);
            }
            ppplVar10 = ppplStack_740;
joined_r0x0013b766:
            ppplStack_740 = ppplVar10;
            if ((char)local_748 == '\x05') goto LAB_0013b92f;
LAB_0013b7e3:
            cStack_899 = (char)local_748;
            puVar16 = PTR_fmt_001e0450;
            ppplStack_740 = (long ***)_<alloc::string::String_as_core::fmt::Display>::fmt;
            local_738 = &ppdStack_858;
            puStack_730 = PTR_fmt_001e0450;
            local_728 = &pplStack_810;
            puStack_720 = PTR_fmt_001e0450;
            pppdStack_718 = &local_798;
            pcStack_710 = (code *)PTR_fmt_001e0450;
            pdStack_708 = (double *)&local_8b1;
            puStack_700 = PTR_fmt_001e0458;
            ppcStack_6f8 = (char **)&cStack_899;
            pcStack_6f0 = _<core::option::Option<T>as_core::fmt::Debug>::fmt;
            local_7e8 = (undefined8 ***)&UNK_001da6d8;
            ppplStack_7e0 = (long ***)0x6;
            local_7c8 = (long ***)&UNK_00118300;
            puStack_7c0 = (undefined *)0x6;
            local_7d8 = (double ***)&local_748;
            puStack_7d0 = (undefined1 *)0x6;
            local_748 = &local_850;
            (*(code *)PTR_format_inner_001e0390)(auStack_50,&local_7e8);
            future_backtest_sdk::context::StrategyContext::log_debug(local_8b0,auStack_50);
            uVar5 = (*(code *)PTR_margin_filter_001e0460)(local_8b0,cStack_899);
            ppplVar10 = (long ***)
                        (*(code *)PTR_cancel_by_pending_ts_001e0468)(local_430,local_8b0,1);
            if (ppplVar10 != (long ***)0x0) goto LAB_0013b92f;
            bVar7 = (*(code *)PTR_impact_block_check_001e0470)
                              (local_888,local_8a8,local_828,local_8b0,uVar5);
            if (((char)local_808 == '\x01' && (char)local_838 == '\x01') && ((bVar7 & 5) == 0)) {
              bVar7 = 4;
            }
            plVar23 = &local_3f0;
            if (local_3b8 != 0) {
              plVar23 = local_3c0;
            }
            puVar13 = &UNK_001da750;
            if (local_3b8 == 0) {
              puVar13 = &UNK_001da738;
            }
            (*(code *)PTR_clone_001e03a8)(&local_5e8,plVar23,puVar13);
            local_888 = local_4f8;
            uStack_880 = 0;
            local_898 = ppdStack_4f0;
            pdStack_890 = (double *)0x0;
            local_878 = local_4e8;
            pdStack_870 = (double *)0x0;
            bVar21 = (char)local_808 == '\x02' & (byte)local_838;
                    /* WARNING: Switch is manually overridden */
            switch(bVar7) {
            case 0:
              local_808 = *(double ***)(lVar9 + 0x40);
              if (((double)local_7a8 < _DAT_00117720) &&
                 (dStack_7f8 < (double)pdStack_4c0 / _DAT_00117718)) break;
              pdVar28 = (double *)0x0;
              pdVar33 = local_7a8;
              if ((double)local_7a8 <= 0.0) {
                pdVar33 = pdVar28;
              }
              dVar31 = (double)(~-(ulong)((double)local_4a8 < 0.0) & (ulong)local_4a8 |
                               -(ulong)((double)local_4a8 < 0.0) & _DAT_001175d8) - (double)pdVar33;
              dVar34 = ((double)(~-(ulong)((double)pdStack_4a0 < 0.0) & (ulong)pdStack_4a0 |
                                -(ulong)((double)pdStack_4a0 < 0.0) & _DAT_001175d8) /
                       (double)local_638) / (double)local_828 - (double)pdVar33;
              dVar26 = dVar34;
              if (dVar31 <= dVar34) {
                dVar26 = dVar31;
              }
              pdVar30 = (double *)
                        (~-(ulong)NAN(dVar31) & (ulong)dVar26 | -(ulong)NAN(dVar31) & (ulong)dVar34)
              ;
              pdVar32 = (double *)
                        (~-(ulong)((double)local_4b8 < 0.0) & (ulong)local_4b8 |
                        -(ulong)((double)local_4b8 < 0.0) & _DAT_001175d8);
              pdVar33 = (double *)
                        (((double)(~-(ulong)((double)pdStack_4b0 < 0.0) & (ulong)pdStack_4b0 |
                                  -(ulong)((double)pdStack_4b0 < 0.0) & _DAT_001175d8) /
                         (double)local_638) / (double)local_828);
              if ((double)pdVar33 <= (double)DAT_00117630) {
                pdVar33 = DAT_00117630;
              }
              if ((double)pdVar33 <= (double)pdVar32) {
                pdVar32 = pdVar33;
              }
              pdVar27 = (double *)
                        (~-(ulong)((double)local_498 < 0.0) & (ulong)local_498 |
                        -(ulong)((double)local_498 < 0.0) & _DAT_001175d8);
              pdVar33 = (double *)
                        (((double)(~-(ulong)((double)pdStack_490 < 0.0) & (ulong)pdStack_490 |
                                  _DAT_001175d8 & -(ulong)((double)pdStack_490 < 0.0)) /
                         (double)local_638) / (double)local_828);
              if ((double)pdVar33 <= (double)DAT_00117630) {
                pdVar33 = DAT_00117630;
              }
              if ((double)pdVar33 <= (double)pdVar27) {
                pdVar27 = pdVar33;
              }
              pdVar33 = local_7a8;
              if (0.0 <= (double)local_7a8) {
                pdVar33 = pdVar28;
              }
              if ((double)pdVar32 <= (double)pdVar30) {
                pdVar30 = pdVar32;
              }
              if ((double)((ulong)pdVar33 ^ _s__00117d80) <= (double)pdVar27) {
                pdVar27 = (double *)((ulong)pdVar33 ^ _s__00117d80);
              }
              pdVar33 = (double *)((double)pdVar27 + (double)pdVar30);
              if ((double)pdVar27 + (double)pdVar30 <= 0.0) {
                pdVar33 = pdVar28;
              }
                    /* try { // try from 0013bc28 to 0013bcad has its CatchHandler @ 0013d752 */
              local_838 = (double **)
                          (*(code *)PTR_round_with_step_f64_001e0478)(pdVar33,local_758,1);
              ppdStack_830 = extraout_XMM0_Qb;
              if (bVar21 == 0) {
                ppplVar10 = (long ***)(*(code *)PTR_cancel_all_001e0480)(local_8b0);
                if (ppplVar10 == (long ***)0x0) {
                  if ((local_410 == '\0') || (local_8b1 != '\0')) {
                    if ((DAT_00117618 < (double)((ulong)local_888 & _DAT_00117750)) &&
                       (DAT_00117618 < (double)(_DAT_00117750 & (ulong)local_608))) {
                      dVar26 = (double)((ulong)((double)ppdStack_858 / (double)local_608) &
                                       _DAT_00117750) + _s__001175b8;
                      if (dVar26 <= 0.0) {
                        dVar26 = 0.0;
                      }
                      local_898 = (double **)((double)local_898 + (double)local_888 * dVar26);
                      ppdVar20 = local_878;
                      if ((double)local_898 <= (double)local_878) {
                        ppdVar20 = local_898;
                      }
                      local_898 = (double **)
                                  (-(ulong)NAN((double)local_898) & (ulong)local_878 |
                                  ~-(ulong)NAN((double)local_898) & (ulong)ppdVar20);
                      pdStack_890 = pdStack_870;
                    }
                  }
                  else {
                    local_898 = (double **)
                                strategy_comm_mock::high_taker_rate
                                          (ppdStack_858,local_608,pplStack_810,local_828,local_8a8,
                                           pdStack_4e0);
                    pdStack_890 = extraout_XMM0_Qb_04;
                  }
                  local_898 = (double **)
                              (*(code *)PTR_round_with_step_f64_001e0478)
                                        (((double)local_898 + (double)DAT_00117630) *
                                         (double)local_828,local_768,1);
                  local_888 = _s__001176b0;
                  goto LAB_0013ce1b;
                }
              }
              else {
                dVar31 = (double)local_8a8 + (double)local_420 * (double)local_768;
                dVar34 = (double)local_828 - (double)local_768;
                dVar26 = dVar34;
                if (dVar31 <= dVar34) {
                  dVar26 = dVar31;
                }
                local_898 = (double **)
                            (*(code *)PTR_round_with_step_f64_001e0478)
                                      (~-(ulong)NAN(dVar31) & (ulong)dVar26 |
                                       -(ulong)NAN(dVar31) & (ulong)dVar34,1);
                pdVar33 = (double *)0x4;
                if (local_418 < (double *)0x4) {
                  pdVar33 = local_418;
                }
                iVar8 = (int)pdVar33;
                if ((long)local_418 < 1) {
                  iVar8 = 1;
                }
                local_748 = (undefined8 ***)0x0;
                ppplStack_740 = (long ***)&DAT_00000008;
                local_738 = (double ***)0x0;
                    /* try { // try from 0013bd17 to 0013bdd6 has its CatchHandler @ 0013d740 */
                ppplVar10 = (long ***)
                            strategy_comm_mock::cancel_order_use_range
                                      (local_898,
                                       (double)local_e0[0] -
                                       *(double *)((long)local_e0 + (ulong)(uint)(iVar8 << 4)),
                                       local_8b0,local_848,local_840,1,&local_748);
                if (ppplVar10 == (long ***)0x0) {
                  lVar9 = strategy_comm_mock::live_pending_counts
                                    (local_8b0,local_848,local_840,ppplStack_740,local_738);
                  local_878 = (double **)0x0;
                  if ((lVar9 == 0) && (local_878 = local_838, 0.0 < (double)ppdStack_428)) {
                    ppdVar20 = ppdStack_428;
                    if ((double)local_838 <= (double)ppdStack_428) {
                      ppdVar20 = local_838;
                    }
                    local_878 = (double **)
                                (*(code *)PTR_round_with_step_f64_001e0478)
                                          (~-(ulong)NAN((double)local_838) & (ulong)ppdVar20 |
                                           -(ulong)NAN((double)local_838) & (ulong)ppdStack_428,
                                           local_758,1);
                  }
                  local_888 = local_430;
                  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&local_748);
                  local_838 = local_878;
                  ppdStack_830 = (double **)0x0;
LAB_0013ce1b:
                  if ((double)(_DAT_00117750 & (ulong)local_838) <= DAT_00117618)
                  goto override_jmp_0013ba6f_case_4;
                  local_8a8 = ppdStack_858;
                  local_878 = local_4c8;
                  pcStack_788 = "H";
                  if (local_8b1 != '\0') {
                    pcStack_788 = "L";
                  }
                  pcStack_778 = "T";
                  if (bVar21 != 0) {
                    pcStack_778 = "M-";
                  }
                  uStack_780 = 1;
                  uStack_770 = 1;
                  local_748 = &pplStack_810;
                  ppplStack_740 = (long ***)puVar16;
                  local_738 = &ppdStack_790;
                  puStack_730 = puVar16;
                  local_728 = (long ***)&local_798;
                  puStack_720 = puVar16;
                  pppdStack_718 = (double ***)&local_5e8;
                  pcStack_710 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                  pdStack_708 = &dStack_7f8;
                  puStack_700 = puVar16;
                  ppcStack_6f8 = &pcStack_788;
                  pcStack_6f0 = _<&T_as_core::fmt::Display>::fmt;
                  ppcStack_6e8 = &pcStack_778;
                  pcStack_6e0 = _<&T_as_core::fmt::Display>::fmt;
                  local_7e8 = (undefined8 ***)&DAT_001da768;
                  ppplStack_7e0 = (long ***)&DAT_00000007;
                  local_7c8 = (long ***)0x0;
                  local_7d8 = (double ***)&local_748;
                  puStack_7d0 = &DAT_00000007;
                  (*(code *)PTR_format_inner_001e0390)(&uStack_1d8,&local_7e8);
                  uStack_230 = 0x700;
                  ppdStack_260 = local_898;
                  ppdStack_258 = local_838;
                  ppdStack_250 = local_828;
                  ppdStack_248 = local_8a8;
                  ppdStack_240 = local_808;
                  ppdStack_238 = local_878;
                  uStack_278 = uStack_1d8;
                  uStack_270 = uStack_1d0;
                  uStack_268 = uStack_1c8;
                  ppplVar10 = (long ***)
                              strategy_comm_mock::place(local_888,local_8b0,&uStack_278,local_40e);
                  goto LAB_0013d643;
                }
LAB_0013c690:
                core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&local_748);
              }
              goto LAB_0013d64b;
            case 1:
              local_838 = *(double ***)(lVar9 + 0x48);
              if (((double)local_7a8 <= DAT_00117618) ||
                 ((double)pdStack_4c0 / _DAT_00117718 <= dStack_7f8)) {
                if ((double)local_7a8 <= 0.0) goto override_jmp_0013ba6f_case_4;
                uVar25 = -(ulong)((double)local_498 < (double)((ulong)local_498 ^ _s__00117d80));
                dVar34 = (double)(uVar25 & _DAT_001175e0 |
                                 ~uVar25 & ((ulong)local_498 ^ _s__00117d80));
                uVar25 = -(ulong)((double)pdStack_490 < (double)((ulong)pdStack_490 ^ _s__00117d80))
                ;
                dVar31 = ((double)(uVar25 & _DAT_001175e0 |
                                  ~uVar25 & ((ulong)pdStack_490 ^ _s__00117d80)) / (double)local_638
                         ) / (double)local_8a8;
                dVar26 = dVar31;
                if (dVar31 <= dVar34) {
                  dVar26 = dVar34;
                }
                dVar26 = (double)(~-(ulong)NAN(dVar34) & (ulong)dVar26 |
                                 -(ulong)NAN(dVar34) & (ulong)dVar31);
                pdVar33 = local_7a8;
                if ((double)local_7a8 <= 0.0) {
                  pdVar33 = (double *)0x0;
                }
                if (dVar26 <= (double)((ulong)pdVar33 ^ _s__00117d80)) {
                  dVar26 = (double)((ulong)pdVar33 ^ _s__00117d80);
                }
                    /* try { // try from 0013c1bf to 0013c253 has its CatchHandler @ 0013d752 */
                local_808 = (double **)
                            (*(code *)PTR_round_with_step_f64_001e0478)(dVar26,local_758,1);
                bVar24 = (byte)local_3d8 != '\0';
                pdStack_800 = extraout_XMM0_Qb_01;
                if (bVar21 == 0) {
                  ppplVar10 = (long ***)(*(code *)PTR_cancel_all_001e0480)(local_8b0);
                  if (ppplVar10 != (long ***)0x0) goto LAB_0013d64b;
                  if ((local_410 == '\0') || (local_8b1 != '\0')) {
                    if ((DAT_00117618 < (double)((ulong)local_888 & _DAT_00117750)) &&
                       (DAT_00117618 < (double)(_DAT_00117750 & (ulong)local_618))) {
                      dVar26 = (double)((ulong)((double)ppdStack_858 / (double)local_618) &
                                       _DAT_00117750) + _s__001175b8;
                      if (dVar26 <= 0.0) {
                        dVar26 = 0.0;
                      }
                      local_898 = (double **)((double)local_898 + (double)local_888 * dVar26);
                      ppdVar20 = local_878;
                      if ((double)local_898 <= (double)local_878) {
                        ppdVar20 = local_898;
                      }
                      local_898 = (double **)
                                  (-(ulong)NAN((double)local_898) & (ulong)local_878 |
                                  ~-(ulong)NAN((double)local_898) & (ulong)ppdVar20);
                      pdStack_890 = pdStack_870;
                    }
                  }
                  else {
                    local_898 = (double **)
                                strategy_comm_mock::high_taker_rate
                                          (ppdStack_858,local_618,pplStack_810,local_828,local_8a8,
                                           pdStack_4e0);
                    pdStack_890 = extraout_XMM0_Qb_06;
                  }
                  local_898 = (double **)
                              (*(code *)PTR_round_with_step_f64_001e0478)
                                        (((double)DAT_00117630 - (double)local_898) *
                                         (double)local_8a8,local_768,1);
                  local_888 = _s__001176b0;
                }
                else {
                  dVar31 = (double)local_828 - (double)local_420 * (double)local_768;
                  dVar34 = (double)local_768 + (double)local_8a8;
                  dVar26 = dVar34;
                  if (dVar34 <= dVar31) {
                    dVar26 = dVar31;
                  }
                  local_898 = (double **)
                              (*(code *)PTR_round_with_step_f64_001e0478)
                                        (~-(ulong)NAN(dVar31) & (ulong)dVar26 |
                                         -(ulong)NAN(dVar31) & (ulong)dVar34,1);
                  pdVar33 = (double *)0x4;
                  if (local_418 < (double *)0x4) {
                    pdVar33 = local_418;
                  }
                  iVar8 = (int)pdVar33;
                  if ((long)local_418 < 1) {
                    iVar8 = 1;
                  }
                  local_748 = (undefined8 ***)0x0;
                  ppplStack_740 = (long ***)&DAT_00000008;
                  local_738 = (double ***)0x0;
                    /* try { // try from 0013c2bd to 0013c381 has its CatchHandler @ 0013d73a */
                  ppplVar10 = (long ***)
                              strategy_comm_mock::cancel_order_use_range
                                        (local_898,
                                         *(double *)((long)local_130 + (ulong)(uint)(iVar8 << 4)) -
                                         (double)local_130[0],local_8b0,local_848,local_840,0,
                                         &local_748);
                  if (ppplVar10 != (long ***)0x0) goto LAB_0013c690;
                  strategy_comm_mock::live_pending_counts
                            (local_8b0,local_848,local_840,ppplStack_740,local_738);
                  local_878 = (double **)0x0;
                  if ((extraout_RDX == 0) && (local_878 = local_808, 0.0 < (double)ppdStack_428)) {
                    ppdVar29 = (double **)((ulong)ppdStack_428 ^ _s__00117d80);
                    ppdVar20 = ppdVar29;
                    if ((double)ppdVar29 <= (double)local_808) {
                      ppdVar20 = local_808;
                    }
                    local_878 = (double **)
                                (*(code *)PTR_round_with_step_f64_001e0478)
                                          (~-(ulong)NAN((double)local_808) & (ulong)ppdVar20 |
                                           -(ulong)NAN((double)local_808) & (ulong)ppdVar29,
                                           local_758,1);
                  }
                  local_888 = local_430;
                  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&local_748);
                  local_808 = local_878;
                  pdStack_800 = (double *)0x0;
                }
                if ((double)(_DAT_00117750 & (ulong)local_808) <= DAT_00117618)
                goto override_jmp_0013ba6f_case_4;
                local_828 = ppdStack_858;
                local_878 = local_4c8;
                pcStack_788 = "H";
                if (local_8b1 != '\0') {
                  pcStack_788 = "L";
                }
                pcStack_778 = "T";
                if (bVar21 != 0) {
                  pcStack_778 = "M-";
                }
                uStack_780 = 1;
                uStack_770 = 1;
                local_748 = &pplStack_810;
                ppplStack_740 = (long ***)puVar16;
                local_738 = &ppdStack_790;
                puStack_730 = puVar16;
                local_728 = (long ***)&local_798;
                puStack_720 = puVar16;
                pppdStack_718 = (double ***)&local_5e8;
                pcStack_710 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                pdStack_708 = &dStack_7f8;
                puStack_700 = puVar16;
                ppcStack_6f8 = &pcStack_788;
                pcStack_6f0 = _<&T_as_core::fmt::Display>::fmt;
                ppcStack_6e8 = &pcStack_778;
                pcStack_6e0 = _<&T_as_core::fmt::Display>::fmt;
                local_7e8 = (undefined8 ***)&DAT_001da768;
                ppplStack_7e0 = (long ***)&DAT_00000007;
                local_7c8 = (long ***)0x0;
                local_7d8 = (double ***)&local_748;
                puStack_7d0 = &DAT_00000007;
                (*(code *)PTR_format_inner_001e0390)(&uStack_1a8,&local_7e8);
                cStack_2ff = bVar24 * '\x03' + '\x05';
                uStack_300 = 1;
                ppdStack_330 = local_898;
                ppdStack_328 = local_808;
                ppdStack_320 = local_8a8;
                ppdStack_318 = local_828;
                ppdStack_310 = local_838;
                ppdStack_308 = local_878;
                uStack_348 = uStack_1a8;
                uStack_340 = uStack_1a0;
                uStack_338 = uStack_198;
                ppplVar10 = (long ***)
                            strategy_comm_mock::place(local_888,local_8b0,&uStack_348,local_40e);
LAB_0013d643:
                if (ppplVar10 == (long ***)0x0) {
override_jmp_0013ba6f_case_4:
                  if (local_5e8 != (undefined8 ***)0x0) {
                    (*(code *)PTR___rust_dealloc_001e0298)(ppplStack_5e0,local_5e8,1);
                  }
                  if (local_158 != 0) {
                    (*(code *)PTR___rust_dealloc_001e0298)(local_150,local_158,1);
                  }
                  if (local_3f0 != 0) {
                    (*(code *)PTR___rust_dealloc_001e0298)(local_3e8,local_3f0,1);
                  }
                  if (local_850 != (undefined8 **)0x0) {
                    (*(code *)PTR___rust_dealloc_001e0298)(local_848,local_850,1);
                  }
                  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&local_408);
                  core::ptr::drop_in_place<strategy_comm_mock::Comm3Params>(local_5b8);
                  core::ptr::drop_in_place<future_backtest_sdk::types::StrategyPara>(&local_3c8);
                  return (long ***)0x0;
                }
                goto LAB_0013d64b;
              }
              break;
            case 2:
              local_808 = *(double ***)(lVar9 + 0x50);
              if (((double)local_7a8 <= DAT_00117618) ||
                 ((double)pdStack_4c0 / _DAT_00117718 <= dStack_7f8)) {
                uVar25 = -(ulong)((double)local_4a8 < (double)((ulong)local_4a8 ^ _s__00117d80));
                pdVar33 = local_7a8;
                if (0.0 <= (double)local_7a8) {
                  pdVar33 = (double *)0x0;
                }
                dVar31 = (double)(uVar25 & _DAT_001175e0 |
                                 ~uVar25 & ((ulong)local_4a8 ^ _s__00117d80)) - (double)pdVar33;
                uVar25 = -(ulong)((double)pdStack_4a0 < (double)((ulong)pdStack_4a0 ^ _s__00117d80))
                ;
                dVar34 = ((double)(uVar25 & _DAT_001175e0 |
                                  ~uVar25 & ((ulong)pdStack_4a0 ^ _s__00117d80)) / (double)local_638
                         ) / (double)local_8a8 - (double)pdVar33;
                dVar26 = dVar34;
                if (dVar34 <= dVar31) {
                  dVar26 = dVar31;
                }
                dVar26 = (double)(~-(ulong)NAN(dVar31) & (ulong)dVar26 |
                                 -(ulong)NAN(dVar31) & (ulong)dVar34);
                pdVar28 = (double *)
                          (~-(ulong)((double)local_4b8 < 0.0) & (ulong)local_4b8 |
                          -(ulong)((double)local_4b8 < 0.0) & _DAT_001175d8);
                pdVar33 = (double *)
                          (((double)(~-(ulong)((double)pdStack_4b0 < 0.0) & (ulong)pdStack_4b0 |
                                    -(ulong)((double)pdStack_4b0 < 0.0) & _DAT_001175d8) /
                           (double)local_638) / (double)local_8a8);
                if ((double)pdVar33 <= (double)DAT_00117630) {
                  pdVar33 = DAT_00117630;
                }
                if ((double)pdVar33 <= (double)pdVar28) {
                  pdVar28 = pdVar33;
                }
                pdVar30 = (double *)
                          (~-(ulong)((double)local_498 < 0.0) & (ulong)local_498 |
                          -(ulong)((double)local_498 < 0.0) & _DAT_001175d8);
                pdVar33 = (double *)
                          (((double)(~-(ulong)((double)pdStack_490 < 0.0) & (ulong)pdStack_490 |
                                    _DAT_001175d8 & -(ulong)((double)pdStack_490 < 0.0)) /
                           (double)local_638) / (double)local_8a8);
                if ((double)pdVar33 <= (double)DAT_00117630) {
                  pdVar33 = DAT_00117630;
                }
                if ((double)pdVar33 <= (double)pdVar30) {
                  pdVar30 = pdVar33;
                }
                if (dVar26 <= (double)((ulong)pdVar28 ^ _s__00117d80)) {
                  dVar26 = (double)((ulong)pdVar28 ^ _s__00117d80);
                }
                pdVar33 = local_7a8;
                if ((double)local_7a8 <= 0.0) {
                  pdVar33 = (double *)0x0;
                }
                if ((double)pdVar33 <= (double)pdVar30) {
                  pdVar30 = pdVar33;
                }
                dVar26 = dVar26 - (double)pdVar30;
                if (0.0 <= dVar26) {
                  dVar26 = 0.0;
                }
                    /* try { // try from 0013c57c to 0013c601 has its CatchHandler @ 0013d752 */
                local_838 = (double **)
                            (*(code *)PTR_round_with_step_f64_001e0478)(dVar26,local_758,1);
                ppdStack_830 = extraout_XMM0_Qb_02;
                if (bVar21 == 0) {
                    /* try { // try from 0013c6a2 to 0013c910 has its CatchHandler @ 0013d752 */
                  ppplVar10 = (long ***)(*(code *)PTR_cancel_all_001e0480)(local_8b0);
                  if (ppplVar10 != (long ***)0x0) goto LAB_0013d64b;
                  if ((local_410 == '\0') || (local_8b1 != '\0')) {
                    if ((DAT_00117618 < (double)((ulong)local_888 & _DAT_00117750)) &&
                       (DAT_00117618 < (double)(_DAT_00117750 & (ulong)local_5f8))) {
                      dVar26 = (double)((ulong)((double)ppdStack_858 / (double)local_5f8) &
                                       _DAT_00117750) + _s__001175b8;
                      if (dVar26 <= 0.0) {
                        dVar26 = 0.0;
                      }
                      local_898 = (double **)((double)local_898 + (double)local_888 * dVar26);
                      ppdVar20 = local_878;
                      if ((double)local_898 <= (double)local_878) {
                        ppdVar20 = local_898;
                      }
                      local_898 = (double **)
                                  (-(ulong)NAN((double)local_898) & (ulong)local_878 |
                                  ~-(ulong)NAN((double)local_898) & (ulong)ppdVar20);
                      pdStack_890 = pdStack_870;
                    }
                  }
                  else {
                    local_898 = (double **)
                                strategy_comm_mock::high_taker_rate
                                          (ppdStack_858,local_5f8,pplStack_810,local_828,local_8a8,
                                           pdStack_4e0);
                    pdStack_890 = extraout_XMM0_Qb_03;
                  }
                    /* try { // try from 0013cb0f to 0013d642 has its CatchHandler @ 0013d752 */
                  local_898 = (double **)
                              (*(code *)PTR_round_with_step_f64_001e0478)
                                        (((double)DAT_00117630 - (double)local_898) *
                                         (double)local_8a8,local_768,1);
                  local_888 = _s__001176b0;
                }
                else {
                  dVar31 = (double)local_828 - (double)local_420 * (double)local_768;
                  dVar34 = (double)local_768 + (double)local_8a8;
                  dVar26 = dVar34;
                  if (dVar34 <= dVar31) {
                    dVar26 = dVar31;
                  }
                  local_898 = (double **)
                              (*(code *)PTR_round_with_step_f64_001e0478)
                                        (~-(ulong)NAN(dVar31) & (ulong)dVar26 |
                                         -(ulong)NAN(dVar31) & (ulong)dVar34,1);
                  pdVar33 = (double *)0x4;
                  if (local_418 < (double *)0x4) {
                    pdVar33 = local_418;
                  }
                  iVar8 = (int)pdVar33;
                  if ((long)local_418 < 1) {
                    iVar8 = 1;
                  }
                  local_748 = (undefined8 ***)0x0;
                  ppplStack_740 = (long ***)&DAT_00000008;
                  local_738 = (double ***)0x0;
                    /* try { // try from 0013c66a to 0013c683 has its CatchHandler @ 0013d73e */
                  ppplVar10 = (long ***)
                              strategy_comm_mock::cancel_order_use_range
                                        (local_898,
                                         *(double *)((long)local_130 + (ulong)(uint)(iVar8 << 4)) -
                                         (double)local_130[0],local_8b0,local_848,local_840,0,
                                         &local_748);
                  if (ppplVar10 != (long ***)0x0) goto LAB_0013c690;
                    /* try { // try from 0013c9f2 to 0013ca70 has its CatchHandler @ 0013d73e */
                  strategy_comm_mock::live_pending_counts
                            (local_8b0,local_848,local_840,ppplStack_740,local_738);
                  local_878 = (double **)0x0;
                  if ((extraout_RDX_00 == 0) && (local_878 = local_838, 0.0 < (double)ppdStack_428))
                  {
                    ppdVar29 = (double **)((ulong)ppdStack_428 ^ _s__00117d80);
                    ppdVar20 = ppdVar29;
                    if ((double)ppdVar29 <= (double)local_838) {
                      ppdVar20 = local_838;
                    }
                    local_878 = (double **)
                                (*(code *)PTR_round_with_step_f64_001e0478)
                                          (~-(ulong)NAN((double)local_838) & (ulong)ppdVar20 |
                                           -(ulong)NAN((double)local_838) & (ulong)ppdVar29,
                                           local_758,1);
                  }
                  local_888 = local_430;
                  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&local_748);
                  local_838 = local_878;
                  ppdStack_830 = (double **)0x0;
                }
                if ((double)(_DAT_00117750 & (ulong)local_838) <= DAT_00117618)
                goto override_jmp_0013ba6f_case_4;
                local_828 = ppdStack_858;
                local_878 = local_4c8;
                pcStack_788 = "H";
                if (local_8b1 != '\0') {
                  pcStack_788 = "L";
                }
                pcStack_778 = "T";
                if (bVar21 != 0) {
                  pcStack_778 = "M-";
                }
                uStack_780 = 1;
                uStack_770 = 1;
                local_748 = &pplStack_810;
                ppplStack_740 = (long ***)puVar16;
                local_738 = &ppdStack_790;
                puStack_730 = puVar16;
                local_728 = (long ***)&local_798;
                puStack_720 = puVar16;
                pppdStack_718 = (double ***)&local_5e8;
                pcStack_710 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                pdStack_708 = &dStack_7f8;
                puStack_700 = puVar16;
                ppcStack_6f8 = &pcStack_788;
                pcStack_6f0 = _<&T_as_core::fmt::Display>::fmt;
                ppcStack_6e8 = &pcStack_778;
                pcStack_6e0 = _<&T_as_core::fmt::Display>::fmt;
                local_7e8 = (undefined8 ***)&DAT_001da768;
                ppplStack_7e0 = (long ***)&DAT_00000007;
                local_7c8 = (long ***)0x0;
                local_7d8 = (double ***)&local_748;
                puStack_7d0 = &DAT_00000007;
                (*(code *)PTR_format_inner_001e0390)(&uStack_1c0,&local_7e8);
                uStack_1e0 = 0x802;
                ppdStack_210 = local_898;
                ppdStack_208 = local_838;
                ppdStack_200 = local_8a8;
                ppdStack_1f8 = local_828;
                ppdStack_1f0 = local_808;
                ppdStack_1e8 = local_878;
                uStack_228 = uStack_1c0;
                uStack_220 = uStack_1b8;
                uStack_218 = uStack_1b0;
                ppplVar10 = (long ***)
                            strategy_comm_mock::place(local_888,local_8b0,&uStack_228,local_40e);
                goto LAB_0013d643;
              }
              break;
            case 3:
              local_838 = *(double ***)(lVar9 + 0x58);
              if ((_DAT_00117720 <= (double)local_7a8) ||
                 ((double)pdStack_4c0 / _DAT_00117718 <= dStack_7f8)) {
                if (0.0 <= (double)local_7a8) goto override_jmp_0013ba6f_case_4;
                dVar26 = (double)(~-(ulong)((double)local_498 < 0.0) & (ulong)local_498 |
                                 -(ulong)((double)local_498 < 0.0) & _DAT_001175d8);
                dVar34 = ((double)(~-(ulong)((double)pdStack_490 < 0.0) & (ulong)pdStack_490 |
                                  _DAT_001175d8 & -(ulong)((double)pdStack_490 < 0.0)) /
                         (double)local_638) / (double)local_828;
                dVar31 = dVar34;
                if (dVar26 <= dVar34) {
                  dVar31 = dVar26;
                }
                dVar26 = (double)(~-(ulong)NAN(dVar26) & (ulong)dVar31 |
                                 -(ulong)NAN(dVar26) & (ulong)dVar34);
                pdVar33 = local_7a8;
                if (0.0 <= (double)local_7a8) {
                  pdVar33 = (double *)0x0;
                }
                if ((double)((ulong)pdVar33 ^ _s__00117d80) <= dVar26) {
                  dVar26 = (double)((ulong)pdVar33 ^ _s__00117d80);
                }
                    /* try { // try from 0013beeb to 0013bf70 has its CatchHandler @ 0013d752 */
                local_808 = (double **)
                            (*(code *)PTR_round_with_step_f64_001e0478)(dVar26,local_758,1);
                pdStack_800 = extraout_XMM0_Qb_00;
                if (bVar21 == 0) {
                  ppplVar10 = (long ***)(*(code *)PTR_cancel_all_001e0480)(local_8b0);
                  if (ppplVar10 != (long ***)0x0) goto LAB_0013d64b;
                  if ((local_410 == '\0') || (local_8b1 != '\0')) {
                    if ((DAT_00117618 < (double)((ulong)local_888 & _DAT_00117750)) &&
                       (DAT_00117618 < (double)(_DAT_00117750 & (ulong)local_628))) {
                      dVar26 = (double)((ulong)((double)ppdStack_858 / (double)local_628) &
                                       _DAT_00117750) + _s__001175b8;
                      if (dVar26 <= 0.0) {
                        dVar26 = 0.0;
                      }
                      local_898 = (double **)((double)local_898 + (double)local_888 * dVar26);
                      ppdVar20 = local_878;
                      if ((double)local_898 <= (double)local_878) {
                        ppdVar20 = local_898;
                      }
                      local_898 = (double **)
                                  (-(ulong)NAN((double)local_898) & (ulong)local_878 |
                                  ~-(ulong)NAN((double)local_898) & (ulong)ppdVar20);
                      pdStack_890 = pdStack_870;
                    }
                  }
                  else {
                    local_898 = (double **)
                                strategy_comm_mock::high_taker_rate
                                          (ppdStack_858,local_628,pplStack_810,local_828,local_8a8,
                                           pdStack_4e0);
                    pdStack_890 = extraout_XMM0_Qb_05;
                  }
                  local_898 = (double **)
                              (*(code *)PTR_round_with_step_f64_001e0478)
                                        (((double)local_898 + (double)DAT_00117630) *
                                         (double)local_828,local_768,1);
                  local_888 = _s__001176b0;
                }
                else {
                  dVar31 = (double)local_8a8 + (double)local_420 * (double)local_768;
                  dVar34 = (double)local_828 - (double)local_768;
                  dVar26 = dVar34;
                  if (dVar31 <= dVar34) {
                    dVar26 = dVar31;
                  }
                  local_898 = (double **)
                              (*(code *)PTR_round_with_step_f64_001e0478)
                                        (~-(ulong)NAN(dVar31) & (ulong)dVar26 |
                                         -(ulong)NAN(dVar31) & (ulong)dVar34,1);
                  pdVar33 = (double *)0x4;
                  if (local_418 < (double *)0x4) {
                    pdVar33 = local_418;
                  }
                  iVar8 = (int)pdVar33;
                  if ((long)local_418 < 1) {
                    iVar8 = 1;
                  }
                  local_748 = (undefined8 ***)0x0;
                  ppplStack_740 = (long ***)&DAT_00000008;
                  local_738 = (double ***)0x0;
                    /* try { // try from 0013bfda to 0013c099 has its CatchHandler @ 0013d73c */
                  ppplVar10 = (long ***)
                              strategy_comm_mock::cancel_order_use_range
                                        (local_898,
                                         (double)local_e0[0] -
                                         *(double *)((long)local_e0 + (ulong)(uint)(iVar8 << 4)),
                                         local_8b0,local_848,local_840,1,&local_748);
                  if (ppplVar10 != (long ***)0x0) goto LAB_0013c690;
                  lVar9 = strategy_comm_mock::live_pending_counts
                                    (local_8b0,local_848,local_840,ppplStack_740,local_738);
                  local_878 = (double **)0x0;
                  if ((lVar9 == 0) && (local_878 = local_808, 0.0 < (double)ppdStack_428)) {
                    ppdVar20 = ppdStack_428;
                    if ((double)local_808 <= (double)ppdStack_428) {
                      ppdVar20 = local_808;
                    }
                    local_878 = (double **)
                                (*(code *)PTR_round_with_step_f64_001e0478)
                                          (~-(ulong)NAN((double)local_808) & (ulong)ppdVar20 |
                                           -(ulong)NAN((double)local_808) & (ulong)ppdStack_428,
                                           local_758,1);
                  }
                  local_888 = local_430;
                  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&local_748);
                  local_808 = local_878;
                  pdStack_800 = (double *)0x0;
                }
                if ((double)(_DAT_00117750 & (ulong)local_808) <= DAT_00117618)
                goto override_jmp_0013ba6f_case_4;
                local_8a8 = ppdStack_858;
                local_878 = local_4c8;
                pcStack_788 = "H";
                if (local_8b1 != '\0') {
                  pcStack_788 = "L";
                }
                pcStack_778 = "T";
                if (bVar21 != 0) {
                  pcStack_778 = "M-";
                }
                uStack_780 = 1;
                uStack_770 = 1;
                local_748 = &pplStack_810;
                ppplStack_740 = (long ***)puVar16;
                local_738 = &ppdStack_790;
                puStack_730 = puVar16;
                local_728 = (long ***)&local_798;
                puStack_720 = puVar16;
                pppdStack_718 = (double ***)&local_5e8;
                pcStack_710 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                pdStack_708 = &dStack_7f8;
                puStack_700 = puVar16;
                ppcStack_6f8 = &pcStack_788;
                pcStack_6f0 = _<&T_as_core::fmt::Display>::fmt;
                ppcStack_6e8 = &pcStack_778;
                pcStack_6e0 = _<&T_as_core::fmt::Display>::fmt;
                local_7e8 = (undefined8 ***)&DAT_001da768;
                ppplStack_7e0 = (long ***)&DAT_00000007;
                local_7c8 = (long ***)0x0;
                local_7d8 = (double ***)&local_748;
                puStack_7d0 = &DAT_00000007;
                (*(code *)PTR_format_inner_001e0390)(&uStack_190,&local_7e8);
                bStack_2af = (byte)local_3d8 | 6;
                uStack_2b0 = 3;
                ppdStack_2e0 = local_898;
                ppdStack_2d8 = local_808;
                ppdStack_2d0 = local_828;
                ppdStack_2c8 = local_8a8;
                ppdStack_2c0 = local_838;
                ppdStack_2b8 = local_878;
                uStack_2f8 = uStack_190;
                uStack_2f0 = uStack_188;
                uStack_2e8 = uStack_180;
                ppplVar10 = (long ***)
                            strategy_comm_mock::place(local_888,local_8b0,&uStack_2f8,local_40e);
                goto LAB_0013d643;
              }
              break;
            case 4:
              goto override_jmp_0013ba6f_case_4;
            }
            ppplVar10 = (long ***)0x0;
LAB_0013d64b:
            if (local_5e8 != (undefined8 ***)0x0) {
              (*(code *)PTR___rust_dealloc_001e0298)(ppplStack_5e0,local_5e8,1);
            }
          }
LAB_0013b92f:
          if (local_158 != 0) {
            (*(code *)PTR___rust_dealloc_001e0298)(local_150,local_158,1);
          }
        }
        if (local_3f0 != 0) {
          (*(code *)PTR___rust_dealloc_001e0298)(local_3e8,local_3f0,1);
        }
        if (local_850 != (undefined8 **)0x0) {
          (*(code *)PTR___rust_dealloc_001e0298)(local_848,local_850,1);
        }
        local_888 = local_400;
        lVar14 = local_3f8;
        goto LAB_0013ae0a;
      }
      break;
    }
  }
  ppplVar10 = (long ***)0x0;
LAB_0013ae0a:
  puVar16 = PTR___rust_dealloc_001e0298;
  if (lVar14 != 0) {
    ppdVar20 = local_888 + 1;
    do {
      if (ppdVar20[-1] != (double *)0x0) {
        (*(code *)puVar16)(*ppdVar20,ppdVar20[-1],1);
      }
      ppdVar20 = ppdVar20 + 3;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
LAB_0013ae52:
  if (local_408 != 0) {
    (*(code *)PTR___rust_dealloc_001e0298)(local_888,local_408 * 0x18,8);
  }
  goto LAB_0013ad06;
}




// ELF address 0x000000000005c4b0; fb_strategy_sdk_abi_version

undefined8 fb_strategy_sdk_abi_version(void)

{
  return 4;
}




// ELF address 0x000000000005c4c0; fb_strategy_sdk_version_str

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
  (*(code *)PTR_memcpy_001e02f8)(param_1,"0.6.0",uVar2);
  if (param_2 != 0) {
    *(undefined1 *)(param_1 + uVar2) = 0;
  }
  return uVar2;
}


