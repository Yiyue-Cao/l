// ELF address 0x000000000004ed90; strategy_comm4::Comm4Params::signal_trigger_mode

/* strategy_comm4::Comm4Params::signal_trigger_mode */

short __rustcall strategy_comm4::Comm4Params::signal_trigger_mode(long *param_1,undefined8 param_2)

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
  
  switch(param_2) {
  case 0x11:
    break;
  case 0x12:
    auVar5[0] = -((char)*param_1 == s_WindowsMeanTrigg_00115d80[0]);
    auVar5[1] = -(*(char *)((long)param_1 + 1) == s_WindowsMeanTrigg_00115d80[1]);
    auVar5[2] = -(*(char *)((long)param_1 + 2) == s_WindowsMeanTrigg_00115d80[2]);
    auVar5[3] = -(*(char *)((long)param_1 + 3) == s_WindowsMeanTrigg_00115d80[3]);
    auVar5[4] = -(*(char *)((long)param_1 + 4) == s_WindowsMeanTrigg_00115d80[4]);
    auVar5[5] = -(*(char *)((long)param_1 + 5) == s_WindowsMeanTrigg_00115d80[5]);
    auVar5[6] = -(*(char *)((long)param_1 + 6) == s_WindowsMeanTrigg_00115d80[6]);
    auVar5[7] = -(*(char *)((long)param_1 + 7) == s_WindowsMeanTrigg_00115d80[7]);
    auVar5[8] = -((char)param_1[1] == s_WindowsMeanTrigg_00115d80[8]);
    auVar5[9] = -(*(char *)((long)param_1 + 9) == s_WindowsMeanTrigg_00115d80[9]);
    auVar5[10] = -(*(char *)((long)param_1 + 10) == s_WindowsMeanTrigg_00115d80[10]);
    auVar5[0xb] = -(*(char *)((long)param_1 + 0xb) == s_WindowsMeanTrigg_00115d80[0xb]);
    auVar5[0xc] = -(*(char *)((long)param_1 + 0xc) == s_WindowsMeanTrigg_00115d80[0xc]);
    auVar5[0xd] = -(*(char *)((long)param_1 + 0xd) == s_WindowsMeanTrigg_00115d80[0xd]);
    auVar5[0xe] = -(*(char *)((long)param_1 + 0xe) == s_WindowsMeanTrigg_00115d80[0xe]);
    auVar5[0xf] = -(*(char *)((long)param_1 + 0xf) == s_WindowsMeanTrigg_00115d80[0xf]);
    auVar9[0] = -((char)(short)param_1[2] == DAT_00115d20);
    auVar9[1] = -((char)((ushort)(short)param_1[2] >> 8) == UNK_00115d21);
    auVar9[2] = -(UNK_00115d22 == '\0');
    auVar9[3] = -(UNK_00115d23 == '\0');
    auVar9[4] = -(UNK_00115d24 == '\0');
    auVar9[5] = -(UNK_00115d25 == '\0');
    auVar9[6] = -(UNK_00115d26 == '\0');
    auVar9[7] = -(UNK_00115d27 == '\0');
    auVar9[8] = -(UNK_00115d28 == '\0');
    auVar9[9] = -(UNK_00115d29 == '\0');
    auVar9[10] = -(UNK_00115d2a == '\0');
    auVar9[0xb] = -(UNK_00115d2b == '\0');
    auVar9[0xc] = -(UNK_00115d2c == '\0');
    auVar9[0xd] = -(UNK_00115d2d == '\0');
    auVar9[0xe] = -(UNK_00115d2e == '\0');
    auVar9[0xf] = -(UNK_00115d2f == '\0');
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
            (ushort)(SUB161(auVar9 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar9[0xf] >> 7) << 0xf;
    return CONCAT11((char)(uVar2 >> 8),uVar2 == 0xffff);
  default:
    return 0;
  case 0x14:
    uVar1 = (undefined4)param_1[2];
    auVar4[0] = -((char)uVar1 == s_gger_00115e90[0]);
    auVar4[1] = -((char)((uint)uVar1 >> 8) == s_gger_00115e90[1]);
    auVar4[2] = -((char)((uint)uVar1 >> 0x10) == s_gger_00115e90[2]);
    auVar4[3] = -((char)((uint)uVar1 >> 0x18) == s_gger_00115e90[3]);
    auVar4[4] = -(s_gger_00115e90[4] == '\0');
    auVar4[5] = -(s_gger_00115e90[5] == '\0');
    auVar4[6] = -(s_gger_00115e90[6] == '\0');
    auVar4[7] = -(s_gger_00115e90[7] == '\0');
    auVar4[8] = -(UNK_00115e98 == '\0');
    auVar4[9] = -(UNK_00115e99 == '\0');
    auVar4[10] = -(UNK_00115e9a == '\0');
    auVar4[0xb] = -(UNK_00115e9b == '\0');
    auVar4[0xc] = -(UNK_00115e9c == '\0');
    auVar4[0xd] = -(UNK_00115e9d == '\0');
    auVar4[0xe] = -(UNK_00115e9e == '\0');
    auVar4[0xf] = -(UNK_00115e9f == '\0');
    auVar8[0] = -((char)*param_1 == s_WindowsSharpeTri_00115ea0[0]);
    auVar8[1] = -(*(char *)((long)param_1 + 1) == s_WindowsSharpeTri_00115ea0[1]);
    auVar8[2] = -(*(char *)((long)param_1 + 2) == s_WindowsSharpeTri_00115ea0[2]);
    auVar8[3] = -(*(char *)((long)param_1 + 3) == s_WindowsSharpeTri_00115ea0[3]);
    auVar8[4] = -(*(char *)((long)param_1 + 4) == s_WindowsSharpeTri_00115ea0[4]);
    auVar8[5] = -(*(char *)((long)param_1 + 5) == s_WindowsSharpeTri_00115ea0[5]);
    auVar8[6] = -(*(char *)((long)param_1 + 6) == s_WindowsSharpeTri_00115ea0[6]);
    auVar8[7] = -(*(char *)((long)param_1 + 7) == s_WindowsSharpeTri_00115ea0[7]);
    auVar8[8] = -((char)param_1[1] == s_WindowsSharpeTri_00115ea0[8]);
    auVar8[9] = -(*(char *)((long)param_1 + 9) == s_WindowsSharpeTri_00115ea0[9]);
    auVar8[10] = -(*(char *)((long)param_1 + 10) == s_WindowsSharpeTri_00115ea0[10]);
    auVar8[0xb] = -(*(char *)((long)param_1 + 0xb) == s_WindowsSharpeTri_00115ea0[0xb]);
    auVar8[0xc] = -(*(char *)((long)param_1 + 0xc) == s_WindowsSharpeTri_00115ea0[0xc]);
    auVar8[0xd] = -(*(char *)((long)param_1 + 0xd) == s_WindowsSharpeTri_00115ea0[0xd]);
    auVar8[0xe] = -(*(char *)((long)param_1 + 0xe) == s_WindowsSharpeTri_00115ea0[0xe]);
    auVar8[0xf] = -(*(char *)((long)param_1 + 0xf) == s_WindowsSharpeTri_00115ea0[0xf]);
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
            (ushort)(SUB161(auVar8 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar8[0xf] >> 7) << 0xf;
    return CONCAT11((char)(uVar2 >> 8),(uVar2 == 0xffff) << 2);
  case 0x16:
    auVar10[0] = -(*(char *)((long)param_1 + 6) == DAT_001161c0);
    auVar10[1] = -(*(char *)((long)param_1 + 7) == UNK_001161c1);
    auVar10[2] = -((char)param_1[1] == UNK_001161c2);
    auVar10[3] = -(*(char *)((long)param_1 + 9) == UNK_001161c3);
    auVar10[4] = -(*(char *)((long)param_1 + 10) == UNK_001161c4);
    auVar10[5] = -(*(char *)((long)param_1 + 0xb) == UNK_001161c5);
    auVar10[6] = -(*(char *)((long)param_1 + 0xc) == UNK_001161c6);
    auVar10[7] = -(*(char *)((long)param_1 + 0xd) == UNK_001161c7);
    auVar10[8] = -(*(char *)((long)param_1 + 0xe) == UNK_001161c8);
    auVar10[9] = -(*(char *)((long)param_1 + 0xf) == UNK_001161c9);
    auVar10[10] = -((char)param_1[2] == UNK_001161ca);
    auVar10[0xb] = -(*(char *)((long)param_1 + 0x11) == UNK_001161cb);
    auVar10[0xc] = -(*(char *)((long)param_1 + 0x12) == UNK_001161cc);
    auVar10[0xd] = -(*(char *)((long)param_1 + 0x13) == UNK_001161cd);
    auVar10[0xe] = -(*(char *)((long)param_1 + 0x14) == UNK_001161ce);
    auVar10[0xf] = -(*(char *)((long)param_1 + 0x15) == UNK_001161cf);
    auVar6[0] = -((char)*param_1 == DAT_00115db0);
    auVar6[1] = -(*(char *)((long)param_1 + 1) == UNK_00115db1);
    auVar6[2] = -(*(char *)((long)param_1 + 2) == UNK_00115db2);
    auVar6[3] = -(*(char *)((long)param_1 + 3) == UNK_00115db3);
    auVar6[4] = -(*(char *)((long)param_1 + 4) == UNK_00115db4);
    auVar6[5] = -(*(char *)((long)param_1 + 5) == UNK_00115db5);
    auVar6[6] = -(*(char *)((long)param_1 + 6) == UNK_00115db6);
    auVar6[7] = -(*(char *)((long)param_1 + 7) == UNK_00115db7);
    auVar6[8] = -((char)param_1[1] == UNK_00115db8);
    auVar6[9] = -(*(char *)((long)param_1 + 9) == UNK_00115db9);
    auVar6[10] = -(*(char *)((long)param_1 + 10) == UNK_00115dba);
    auVar6[0xb] = -(*(char *)((long)param_1 + 0xb) == UNK_00115dbb);
    auVar6[0xc] = -(*(char *)((long)param_1 + 0xc) == UNK_00115dbc);
    auVar6[0xd] = -(*(char *)((long)param_1 + 0xd) == UNK_00115dbd);
    auVar6[0xe] = -(*(char *)((long)param_1 + 0xe) == UNK_00115dbe);
    auVar6[0xf] = -(*(char *)((long)param_1 + 0xf) == UNK_00115dbf);
    auVar6 = auVar6 & auVar10;
    if ((ushort)((ushort)(SUB161(auVar6 >> 7,0) & 1) | (ushort)(SUB161(auVar6 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar6 >> 0x17,0) & 1) << 2 |
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
                (ushort)(byte)(auVar6[0xf] >> 7) << 0xf) != 0xffff) {
      return 0;
    }
    return -0xfd;
  }
  auVar3[0] = -((char)*param_1 == s_WindowsStdTrigge_00116150[0]);
  auVar3[1] = -(*(char *)((long)param_1 + 1) == s_WindowsStdTrigge_00116150[1]);
  auVar3[2] = -(*(char *)((long)param_1 + 2) == s_WindowsStdTrigge_00116150[2]);
  auVar3[3] = -(*(char *)((long)param_1 + 3) == s_WindowsStdTrigge_00116150[3]);
  auVar3[4] = -(*(char *)((long)param_1 + 4) == s_WindowsStdTrigge_00116150[4]);
  auVar3[5] = -(*(char *)((long)param_1 + 5) == s_WindowsStdTrigge_00116150[5]);
  auVar3[6] = -(*(char *)((long)param_1 + 6) == s_WindowsStdTrigge_00116150[6]);
  auVar3[7] = -(*(char *)((long)param_1 + 7) == s_WindowsStdTrigge_00116150[7]);
  auVar3[8] = -((char)param_1[1] == s_WindowsStdTrigge_00116150[8]);
  auVar3[9] = -(*(char *)((long)param_1 + 9) == s_WindowsStdTrigge_00116150[9]);
  auVar3[10] = -(*(char *)((long)param_1 + 10) == s_WindowsStdTrigge_00116150[10]);
  auVar3[0xb] = -(*(char *)((long)param_1 + 0xb) == s_WindowsStdTrigge_00116150[0xb]);
  auVar3[0xc] = -(*(char *)((long)param_1 + 0xc) == s_WindowsStdTrigge_00116150[0xc]);
  auVar3[0xd] = -(*(char *)((long)param_1 + 0xd) == s_WindowsStdTrigge_00116150[0xd]);
  auVar3[0xe] = -(*(char *)((long)param_1 + 0xe) == s_WindowsStdTrigge_00116150[0xe]);
  auVar3[0xf] = -(*(char *)((long)param_1 + 0xf) == s_WindowsStdTrigge_00116150[0xf]);
  auVar7[0] = -((char)param_1[2] == s_r_00115eb0[0]);
  auVar7[1] = -(s_r_00115eb0[1] == '\0');
  auVar7[2] = -(s_r_00115eb0[2] == '\0');
  auVar7[3] = -(s_r_00115eb0[3] == '\0');
  auVar7[4] = -(UNK_00115eb4 == '\0');
  auVar7[5] = -(UNK_00115eb5 == '\0');
  auVar7[6] = -(UNK_00115eb6 == '\0');
  auVar7[7] = -(UNK_00115eb7 == '\0');
  auVar7[8] = -(UNK_00115eb8 == '\0');
  auVar7[9] = -(UNK_00115eb9 == '\0');
  auVar7[10] = -(UNK_00115eba == '\0');
  auVar7[0xb] = -(UNK_00115ebb == '\0');
  auVar7[0xc] = -(UNK_00115ebc == '\0');
  auVar7[0xd] = -(UNK_00115ebd == '\0');
  auVar7[0xe] = -(UNK_00115ebe == '\0');
  auVar7[0xf] = -(UNK_00115ebf == '\0');
  auVar7 = auVar7 & auVar3;
  if ((ushort)((ushort)(SUB161(auVar7 >> 7,0) & 1) | (ushort)(SUB161(auVar7 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar7 >> 0x17,0) & 1) << 2 |
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
              (ushort)(byte)(auVar7[0xf] >> 7) << 0xf) == 0xffff) {
    return -0xfe;
  }
  return (ushort)(((char)param_1[2] == 'r' && *param_1 == 0x5273776f646e6957) &&
                 param_1[1] == 0x6567676972546973) * 5;
}


