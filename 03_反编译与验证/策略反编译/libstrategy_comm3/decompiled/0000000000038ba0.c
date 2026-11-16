// ELF address 0x0000000000038ba0; strategy_comm3::Comm3Params::signal_trigger_mode

/* strategy_comm3::Comm3Params::signal_trigger_mode */

short __rustcall strategy_comm3::Comm3Params::signal_trigger_mode(long *param_1,undefined8 param_2)

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
            (ushort)(SUB161(auVar9 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar9[0xf] >> 7) << 0xf;
    return CONCAT11((char)(uVar2 >> 8),uVar2 == 0xffff);
  default:
    return 0;
  case 0x14:
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
            (ushort)(SUB161(auVar8 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar8[0xf] >> 7) << 0xf;
    return CONCAT11((char)(uVar2 >> 8),(uVar2 == 0xffff) << 2);
  case 0x16:
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


