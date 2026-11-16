// ELF address 0x0000000000039230; strategy_comm_mock::Comm3Params::signal_trigger_mode

/* strategy_comm_mock::Comm3Params::signal_trigger_mode */

short __rustcall
strategy_comm_mock::Comm3Params::signal_trigger_mode(long *param_1,undefined8 param_2)

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
            (ushort)(SUB161(auVar9 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar9[0xf] >> 7) << 0xf;
    return CONCAT11((char)(uVar2 >> 8),uVar2 == 0xffff);
  default:
    return 0;
  case 0x14:
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
            (ushort)(SUB161(auVar8 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar8[0xf] >> 7) << 0xf;
    return CONCAT11((char)(uVar2 >> 8),(uVar2 == 0xffff) << 2);
  case 0x16:
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


