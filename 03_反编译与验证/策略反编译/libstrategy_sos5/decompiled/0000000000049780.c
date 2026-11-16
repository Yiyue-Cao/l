// ELF address 0x0000000000049780; strategy_sos5::SoS5Params::signal_trigger_mode

/* strategy_sos5::SoS5Params::signal_trigger_mode */

short __rustcall strategy_sos5::SoS5Params::signal_trigger_mode(long *param_1,undefined8 param_2)

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
    auVar5[0] = -((char)*param_1 == s_WindowsMeanTrigg_00115a50[0]);
    auVar5[1] = -(*(char *)((long)param_1 + 1) == s_WindowsMeanTrigg_00115a50[1]);
    auVar5[2] = -(*(char *)((long)param_1 + 2) == s_WindowsMeanTrigg_00115a50[2]);
    auVar5[3] = -(*(char *)((long)param_1 + 3) == s_WindowsMeanTrigg_00115a50[3]);
    auVar5[4] = -(*(char *)((long)param_1 + 4) == s_WindowsMeanTrigg_00115a50[4]);
    auVar5[5] = -(*(char *)((long)param_1 + 5) == s_WindowsMeanTrigg_00115a50[5]);
    auVar5[6] = -(*(char *)((long)param_1 + 6) == s_WindowsMeanTrigg_00115a50[6]);
    auVar5[7] = -(*(char *)((long)param_1 + 7) == s_WindowsMeanTrigg_00115a50[7]);
    auVar5[8] = -((char)param_1[1] == s_WindowsMeanTrigg_00115a50[8]);
    auVar5[9] = -(*(char *)((long)param_1 + 9) == s_WindowsMeanTrigg_00115a50[9]);
    auVar5[10] = -(*(char *)((long)param_1 + 10) == s_WindowsMeanTrigg_00115a50[10]);
    auVar5[0xb] = -(*(char *)((long)param_1 + 0xb) == s_WindowsMeanTrigg_00115a50[0xb]);
    auVar5[0xc] = -(*(char *)((long)param_1 + 0xc) == s_WindowsMeanTrigg_00115a50[0xc]);
    auVar5[0xd] = -(*(char *)((long)param_1 + 0xd) == s_WindowsMeanTrigg_00115a50[0xd]);
    auVar5[0xe] = -(*(char *)((long)param_1 + 0xe) == s_WindowsMeanTrigg_00115a50[0xe]);
    auVar5[0xf] = -(*(char *)((long)param_1 + 0xf) == s_WindowsMeanTrigg_00115a50[0xf]);
    auVar9[0] = -((char)(short)param_1[2] == DAT_001159c0);
    auVar9[1] = -((char)((ushort)(short)param_1[2] >> 8) == UNK_001159c1);
    auVar9[2] = -(UNK_001159c2 == '\0');
    auVar9[3] = -(UNK_001159c3 == '\0');
    auVar9[4] = -(UNK_001159c4 == '\0');
    auVar9[5] = -(UNK_001159c5 == '\0');
    auVar9[6] = -(UNK_001159c6 == '\0');
    auVar9[7] = -(UNK_001159c7 == '\0');
    auVar9[8] = -(UNK_001159c8 == '\0');
    auVar9[9] = -(UNK_001159c9 == '\0');
    auVar9[10] = -(UNK_001159ca == '\0');
    auVar9[0xb] = -(UNK_001159cb == '\0');
    auVar9[0xc] = -(UNK_001159cc == '\0');
    auVar9[0xd] = -(UNK_001159cd == '\0');
    auVar9[0xe] = -(UNK_001159ce == '\0');
    auVar9[0xf] = -(UNK_001159cf == '\0');
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
    auVar4[0] = -((char)uVar1 == s_gger_00115b80[0]);
    auVar4[1] = -((char)((uint)uVar1 >> 8) == s_gger_00115b80[1]);
    auVar4[2] = -((char)((uint)uVar1 >> 0x10) == s_gger_00115b80[2]);
    auVar4[3] = -((char)((uint)uVar1 >> 0x18) == s_gger_00115b80[3]);
    auVar4[4] = -(s_gger_00115b80[4] == '\0');
    auVar4[5] = -(s_gger_00115b80[5] == '\0');
    auVar4[6] = -(s_gger_00115b80[6] == '\0');
    auVar4[7] = -(s_gger_00115b80[7] == '\0');
    auVar4[8] = -(UNK_00115b88 == '\0');
    auVar4[9] = -(UNK_00115b89 == '\0');
    auVar4[10] = -(UNK_00115b8a == '\0');
    auVar4[0xb] = -(UNK_00115b8b == '\0');
    auVar4[0xc] = -(UNK_00115b8c == '\0');
    auVar4[0xd] = -(UNK_00115b8d == '\0');
    auVar4[0xe] = -(UNK_00115b8e == '\0');
    auVar4[0xf] = -(UNK_00115b8f == '\0');
    auVar8[0] = -((char)*param_1 == s_WindowsSharpeTri_00115b90[0]);
    auVar8[1] = -(*(char *)((long)param_1 + 1) == s_WindowsSharpeTri_00115b90[1]);
    auVar8[2] = -(*(char *)((long)param_1 + 2) == s_WindowsSharpeTri_00115b90[2]);
    auVar8[3] = -(*(char *)((long)param_1 + 3) == s_WindowsSharpeTri_00115b90[3]);
    auVar8[4] = -(*(char *)((long)param_1 + 4) == s_WindowsSharpeTri_00115b90[4]);
    auVar8[5] = -(*(char *)((long)param_1 + 5) == s_WindowsSharpeTri_00115b90[5]);
    auVar8[6] = -(*(char *)((long)param_1 + 6) == s_WindowsSharpeTri_00115b90[6]);
    auVar8[7] = -(*(char *)((long)param_1 + 7) == s_WindowsSharpeTri_00115b90[7]);
    auVar8[8] = -((char)param_1[1] == s_WindowsSharpeTri_00115b90[8]);
    auVar8[9] = -(*(char *)((long)param_1 + 9) == s_WindowsSharpeTri_00115b90[9]);
    auVar8[10] = -(*(char *)((long)param_1 + 10) == s_WindowsSharpeTri_00115b90[10]);
    auVar8[0xb] = -(*(char *)((long)param_1 + 0xb) == s_WindowsSharpeTri_00115b90[0xb]);
    auVar8[0xc] = -(*(char *)((long)param_1 + 0xc) == s_WindowsSharpeTri_00115b90[0xc]);
    auVar8[0xd] = -(*(char *)((long)param_1 + 0xd) == s_WindowsSharpeTri_00115b90[0xd]);
    auVar8[0xe] = -(*(char *)((long)param_1 + 0xe) == s_WindowsSharpeTri_00115b90[0xe]);
    auVar8[0xf] = -(*(char *)((long)param_1 + 0xf) == s_WindowsSharpeTri_00115b90[0xf]);
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
    auVar10[0] = -(*(char *)((long)param_1 + 6) == DAT_00115eb0);
    auVar10[1] = -(*(char *)((long)param_1 + 7) == UNK_00115eb1);
    auVar10[2] = -((char)param_1[1] == UNK_00115eb2);
    auVar10[3] = -(*(char *)((long)param_1 + 9) == UNK_00115eb3);
    auVar10[4] = -(*(char *)((long)param_1 + 10) == UNK_00115eb4);
    auVar10[5] = -(*(char *)((long)param_1 + 0xb) == UNK_00115eb5);
    auVar10[6] = -(*(char *)((long)param_1 + 0xc) == UNK_00115eb6);
    auVar10[7] = -(*(char *)((long)param_1 + 0xd) == UNK_00115eb7);
    auVar10[8] = -(*(char *)((long)param_1 + 0xe) == UNK_00115eb8);
    auVar10[9] = -(*(char *)((long)param_1 + 0xf) == UNK_00115eb9);
    auVar10[10] = -((char)param_1[2] == UNK_00115eba);
    auVar10[0xb] = -(*(char *)((long)param_1 + 0x11) == UNK_00115ebb);
    auVar10[0xc] = -(*(char *)((long)param_1 + 0x12) == UNK_00115ebc);
    auVar10[0xd] = -(*(char *)((long)param_1 + 0x13) == UNK_00115ebd);
    auVar10[0xe] = -(*(char *)((long)param_1 + 0x14) == UNK_00115ebe);
    auVar10[0xf] = -(*(char *)((long)param_1 + 0x15) == UNK_00115ebf);
    auVar6[0] = -((char)*param_1 == s_WindowsQuantileT_00115a60[0]);
    auVar6[1] = -(*(char *)((long)param_1 + 1) == s_WindowsQuantileT_00115a60[1]);
    auVar6[2] = -(*(char *)((long)param_1 + 2) == s_WindowsQuantileT_00115a60[2]);
    auVar6[3] = -(*(char *)((long)param_1 + 3) == s_WindowsQuantileT_00115a60[3]);
    auVar6[4] = -(*(char *)((long)param_1 + 4) == s_WindowsQuantileT_00115a60[4]);
    auVar6[5] = -(*(char *)((long)param_1 + 5) == s_WindowsQuantileT_00115a60[5]);
    auVar6[6] = -(*(char *)((long)param_1 + 6) == s_WindowsQuantileT_00115a60[6]);
    auVar6[7] = -(*(char *)((long)param_1 + 7) == s_WindowsQuantileT_00115a60[7]);
    auVar6[8] = -((char)param_1[1] == s_WindowsQuantileT_00115a60[8]);
    auVar6[9] = -(*(char *)((long)param_1 + 9) == s_WindowsQuantileT_00115a60[9]);
    auVar6[10] = -(*(char *)((long)param_1 + 10) == s_WindowsQuantileT_00115a60[10]);
    auVar6[0xb] = -(*(char *)((long)param_1 + 0xb) == s_WindowsQuantileT_00115a60[0xb]);
    auVar6[0xc] = -(*(char *)((long)param_1 + 0xc) == s_WindowsQuantileT_00115a60[0xc]);
    auVar6[0xd] = -(*(char *)((long)param_1 + 0xd) == s_WindowsQuantileT_00115a60[0xd]);
    auVar6[0xe] = -(*(char *)((long)param_1 + 0xe) == s_WindowsQuantileT_00115a60[0xe]);
    auVar6[0xf] = -(*(char *)((long)param_1 + 0xf) == s_WindowsQuantileT_00115a60[0xf]);
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
  auVar3[0] = -((char)*param_1 == DAT_00115e60);
  auVar3[1] = -(*(char *)((long)param_1 + 1) == UNK_00115e61);
  auVar3[2] = -(*(char *)((long)param_1 + 2) == UNK_00115e62);
  auVar3[3] = -(*(char *)((long)param_1 + 3) == UNK_00115e63);
  auVar3[4] = -(*(char *)((long)param_1 + 4) == UNK_00115e64);
  auVar3[5] = -(*(char *)((long)param_1 + 5) == UNK_00115e65);
  auVar3[6] = -(*(char *)((long)param_1 + 6) == UNK_00115e66);
  auVar3[7] = -(*(char *)((long)param_1 + 7) == UNK_00115e67);
  auVar3[8] = -((char)param_1[1] == UNK_00115e68);
  auVar3[9] = -(*(char *)((long)param_1 + 9) == UNK_00115e69);
  auVar3[10] = -(*(char *)((long)param_1 + 10) == UNK_00115e6a);
  auVar3[0xb] = -(*(char *)((long)param_1 + 0xb) == UNK_00115e6b);
  auVar3[0xc] = -(*(char *)((long)param_1 + 0xc) == UNK_00115e6c);
  auVar3[0xd] = -(*(char *)((long)param_1 + 0xd) == UNK_00115e6d);
  auVar3[0xe] = -(*(char *)((long)param_1 + 0xe) == UNK_00115e6e);
  auVar3[0xf] = -(*(char *)((long)param_1 + 0xf) == UNK_00115e6f);
  auVar7[0] = -((char)param_1[2] == s_r_00115ba0[0]);
  auVar7[1] = -(s_r_00115ba0[1] == '\0');
  auVar7[2] = -(s_r_00115ba0[2] == '\0');
  auVar7[3] = -(s_r_00115ba0[3] == '\0');
  auVar7[4] = -(UNK_00115ba4 == '\0');
  auVar7[5] = -(UNK_00115ba5 == '\0');
  auVar7[6] = -(UNK_00115ba6 == '\0');
  auVar7[7] = -(UNK_00115ba7 == '\0');
  auVar7[8] = -(UNK_00115ba8 == '\0');
  auVar7[9] = -(UNK_00115ba9 == '\0');
  auVar7[10] = -(UNK_00115baa == '\0');
  auVar7[0xb] = -(UNK_00115bab == '\0');
  auVar7[0xc] = -(UNK_00115bac == '\0');
  auVar7[0xd] = -(UNK_00115bad == '\0');
  auVar7[0xe] = -(UNK_00115bae == '\0');
  auVar7[0xf] = -(UNK_00115baf == '\0');
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


