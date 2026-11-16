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


