// ELF address 0x000000000004f4c0; strategy_comm4_1::next_phase

/* strategy_comm4_1::next_phase */

uint __rustcall
strategy_comm4_1::next_phase(double param_1,double param_2,char param_3,long param_4)

{
  double dVar1;
  
  dVar1 = *(double *)(param_4 + 0x4c8);
  if (*(char *)(param_4 + 0x4d4) == '\0') {
    if (param_3 == '\0') {
      return -(uint)(dVar1 <= param_2 && *(double *)(param_4 + 0x4a8) <= param_1) & 0xffffff01;
    }
    if (param_3 != '\x01') {
      return (uint)(byte)(2 - (param_1 < *(double *)(param_4 + 0x4c0)));
    }
    if ((param_2 < dVar1) || (param_1 < *(double *)(param_4 + 0x4b8))) {
      return (uint)(*(double *)(param_4 + 0x4b0) <= param_1);
    }
  }
  else {
    if (param_3 == '\0') {
      return -(uint)(dVar1 <= param_2 && param_1 <= *(double *)(param_4 + 0x4b0)) & 0xffffff01;
    }
    if (param_3 != '\x01') {
      return (uint)(byte)(2 - (*(double *)(param_4 + 0x4b8) <= param_1 &&
                              param_1 != *(double *)(param_4 + 0x4b8)));
    }
    if ((param_2 < dVar1) || (*(double *)(param_4 + 0x4c0) < param_1)) {
      return (uint)(param_1 < *(double *)(param_4 + 0x4a8) ||
                   param_1 == *(double *)(param_4 + 0x4a8));
    }
  }
  return 2;
}




// ELF address 0x000000000004f130; strategy_comm4_1::Comm4Params::signal_mode

/* strategy_comm4_1::Comm4Params::signal_mode */

ulong __rustcall strategy_comm4_1::Comm4Params::signal_mode(ushort *param_1,long param_2)

{
  if (param_2 != 3) {
    return 0;
  }
  if ((char)param_1[1] != '2' || (short)(*param_1 ^ 0x5650) != 0) {
    return (ulong)((uint)((char)param_1[1] == '4' && *param_1 == 0x5650) * 3);
  }
  return CONCAT71((uint7)(uint3)((*param_1 ^ 0x5650) >> 8),1);
}




// ELF address 0x000000000004f170; strategy_comm4_1::Comm4Params::signal_trigger_mode

/* strategy_comm4_1::Comm4Params::signal_trigger_mode */

short __rustcall strategy_comm4_1::Comm4Params::signal_trigger_mode(long *param_1,long param_2)

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
      auVar3[0] = -((char)*param_1 == s_WindowsStdTrigge_001161e0[0]);
      auVar3[1] = -(*(char *)((long)param_1 + 1) == s_WindowsStdTrigge_001161e0[1]);
      auVar3[2] = -(*(char *)((long)param_1 + 2) == s_WindowsStdTrigge_001161e0[2]);
      auVar3[3] = -(*(char *)((long)param_1 + 3) == s_WindowsStdTrigge_001161e0[3]);
      auVar3[4] = -(*(char *)((long)param_1 + 4) == s_WindowsStdTrigge_001161e0[4]);
      auVar3[5] = -(*(char *)((long)param_1 + 5) == s_WindowsStdTrigge_001161e0[5]);
      auVar3[6] = -(*(char *)((long)param_1 + 6) == s_WindowsStdTrigge_001161e0[6]);
      auVar3[7] = -(*(char *)((long)param_1 + 7) == s_WindowsStdTrigge_001161e0[7]);
      auVar3[8] = -((char)param_1[1] == s_WindowsStdTrigge_001161e0[8]);
      auVar3[9] = -(*(char *)((long)param_1 + 9) == s_WindowsStdTrigge_001161e0[9]);
      auVar3[10] = -(*(char *)((long)param_1 + 10) == s_WindowsStdTrigge_001161e0[10]);
      auVar3[0xb] = -(*(char *)((long)param_1 + 0xb) == s_WindowsStdTrigge_001161e0[0xb]);
      auVar3[0xc] = -(*(char *)((long)param_1 + 0xc) == s_WindowsStdTrigge_001161e0[0xc]);
      auVar3[0xd] = -(*(char *)((long)param_1 + 0xd) == s_WindowsStdTrigge_001161e0[0xd]);
      auVar3[0xe] = -(*(char *)((long)param_1 + 0xe) == s_WindowsStdTrigge_001161e0[0xe]);
      auVar3[0xf] = -(*(char *)((long)param_1 + 0xf) == s_WindowsStdTrigge_001161e0[0xf]);
      auVar7[0] = -((char)param_1[2] == s_r_00115f40[0]);
      auVar7[1] = -(s_r_00115f40[1] == '\0');
      auVar7[2] = -(s_r_00115f40[2] == '\0');
      auVar7[3] = -(s_r_00115f40[3] == '\0');
      auVar7[4] = -(UNK_00115f44 == '\0');
      auVar7[5] = -(UNK_00115f45 == '\0');
      auVar7[6] = -(UNK_00115f46 == '\0');
      auVar7[7] = -(UNK_00115f47 == '\0');
      auVar7[8] = -(UNK_00115f48 == '\0');
      auVar7[9] = -(UNK_00115f49 == '\0');
      auVar7[10] = -(UNK_00115f4a == '\0');
      auVar7[0xb] = -(UNK_00115f4b == '\0');
      auVar7[0xc] = -(UNK_00115f4c == '\0');
      auVar7[0xd] = -(UNK_00115f4d == '\0');
      auVar7[0xe] = -(UNK_00115f4e == '\0');
      auVar7[0xf] = -(UNK_00115f4f == '\0');
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
      auVar5[0] = -((char)*param_1 == s_WindowsMeanTrigg_00115e10[0]);
      auVar5[1] = -(*(char *)((long)param_1 + 1) == s_WindowsMeanTrigg_00115e10[1]);
      auVar5[2] = -(*(char *)((long)param_1 + 2) == s_WindowsMeanTrigg_00115e10[2]);
      auVar5[3] = -(*(char *)((long)param_1 + 3) == s_WindowsMeanTrigg_00115e10[3]);
      auVar5[4] = -(*(char *)((long)param_1 + 4) == s_WindowsMeanTrigg_00115e10[4]);
      auVar5[5] = -(*(char *)((long)param_1 + 5) == s_WindowsMeanTrigg_00115e10[5]);
      auVar5[6] = -(*(char *)((long)param_1 + 6) == s_WindowsMeanTrigg_00115e10[6]);
      auVar5[7] = -(*(char *)((long)param_1 + 7) == s_WindowsMeanTrigg_00115e10[7]);
      auVar5[8] = -((char)param_1[1] == s_WindowsMeanTrigg_00115e10[8]);
      auVar5[9] = -(*(char *)((long)param_1 + 9) == s_WindowsMeanTrigg_00115e10[9]);
      auVar5[10] = -(*(char *)((long)param_1 + 10) == s_WindowsMeanTrigg_00115e10[10]);
      auVar5[0xb] = -(*(char *)((long)param_1 + 0xb) == s_WindowsMeanTrigg_00115e10[0xb]);
      auVar5[0xc] = -(*(char *)((long)param_1 + 0xc) == s_WindowsMeanTrigg_00115e10[0xc]);
      auVar5[0xd] = -(*(char *)((long)param_1 + 0xd) == s_WindowsMeanTrigg_00115e10[0xd]);
      auVar5[0xe] = -(*(char *)((long)param_1 + 0xe) == s_WindowsMeanTrigg_00115e10[0xe]);
      auVar5[0xf] = -(*(char *)((long)param_1 + 0xf) == s_WindowsMeanTrigg_00115e10[0xf]);
      auVar9[0] = -((char)(short)param_1[2] == DAT_00115db0);
      auVar9[1] = -((char)((ushort)(short)param_1[2] >> 8) == UNK_00115db1);
      auVar9[2] = -(UNK_00115db2 == '\0');
      auVar9[3] = -(UNK_00115db3 == '\0');
      auVar9[4] = -(UNK_00115db4 == '\0');
      auVar9[5] = -(UNK_00115db5 == '\0');
      auVar9[6] = -(UNK_00115db6 == '\0');
      auVar9[7] = -(UNK_00115db7 == '\0');
      auVar9[8] = -(UNK_00115db8 == '\0');
      auVar9[9] = -(UNK_00115db9 == '\0');
      auVar9[10] = -(UNK_00115dba == '\0');
      auVar9[0xb] = -(UNK_00115dbb == '\0');
      auVar9[0xc] = -(UNK_00115dbc == '\0');
      auVar9[0xd] = -(UNK_00115dbd == '\0');
      auVar9[0xe] = -(UNK_00115dbe == '\0');
      auVar9[0xf] = -(UNK_00115dbf == '\0');
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
      auVar4[0] = -((char)uVar1 == s_gger_00115f20[0]);
      auVar4[1] = -((char)((uint)uVar1 >> 8) == s_gger_00115f20[1]);
      auVar4[2] = -((char)((uint)uVar1 >> 0x10) == s_gger_00115f20[2]);
      auVar4[3] = -((char)((uint)uVar1 >> 0x18) == s_gger_00115f20[3]);
      auVar4[4] = -(s_gger_00115f20[4] == '\0');
      auVar4[5] = -(s_gger_00115f20[5] == '\0');
      auVar4[6] = -(s_gger_00115f20[6] == '\0');
      auVar4[7] = -(s_gger_00115f20[7] == '\0');
      auVar4[8] = -(UNK_00115f28 == '\0');
      auVar4[9] = -(UNK_00115f29 == '\0');
      auVar4[10] = -(UNK_00115f2a == '\0');
      auVar4[0xb] = -(UNK_00115f2b == '\0');
      auVar4[0xc] = -(UNK_00115f2c == '\0');
      auVar4[0xd] = -(UNK_00115f2d == '\0');
      auVar4[0xe] = -(UNK_00115f2e == '\0');
      auVar4[0xf] = -(UNK_00115f2f == '\0');
      auVar8[0] = -((char)*param_1 == s_WindowsSharpeTri_00115f30[0]);
      auVar8[1] = -(*(char *)((long)param_1 + 1) == s_WindowsSharpeTri_00115f30[1]);
      auVar8[2] = -(*(char *)((long)param_1 + 2) == s_WindowsSharpeTri_00115f30[2]);
      auVar8[3] = -(*(char *)((long)param_1 + 3) == s_WindowsSharpeTri_00115f30[3]);
      auVar8[4] = -(*(char *)((long)param_1 + 4) == s_WindowsSharpeTri_00115f30[4]);
      auVar8[5] = -(*(char *)((long)param_1 + 5) == s_WindowsSharpeTri_00115f30[5]);
      auVar8[6] = -(*(char *)((long)param_1 + 6) == s_WindowsSharpeTri_00115f30[6]);
      auVar8[7] = -(*(char *)((long)param_1 + 7) == s_WindowsSharpeTri_00115f30[7]);
      auVar8[8] = -((char)param_1[1] == s_WindowsSharpeTri_00115f30[8]);
      auVar8[9] = -(*(char *)((long)param_1 + 9) == s_WindowsSharpeTri_00115f30[9]);
      auVar8[10] = -(*(char *)((long)param_1 + 10) == s_WindowsSharpeTri_00115f30[10]);
      auVar8[0xb] = -(*(char *)((long)param_1 + 0xb) == s_WindowsSharpeTri_00115f30[0xb]);
      auVar8[0xc] = -(*(char *)((long)param_1 + 0xc) == s_WindowsSharpeTri_00115f30[0xc]);
      auVar8[0xd] = -(*(char *)((long)param_1 + 0xd) == s_WindowsSharpeTri_00115f30[0xd]);
      auVar8[0xe] = -(*(char *)((long)param_1 + 0xe) == s_WindowsSharpeTri_00115f30[0xe]);
      auVar8[0xf] = -(*(char *)((long)param_1 + 0xf) == s_WindowsSharpeTri_00115f30[0xf]);
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
      auVar10[0] = -(*(char *)((long)param_1 + 6) == DAT_00116250);
      auVar10[1] = -(*(char *)((long)param_1 + 7) == UNK_00116251);
      auVar10[2] = -((char)param_1[1] == UNK_00116252);
      auVar10[3] = -(*(char *)((long)param_1 + 9) == UNK_00116253);
      auVar10[4] = -(*(char *)((long)param_1 + 10) == UNK_00116254);
      auVar10[5] = -(*(char *)((long)param_1 + 0xb) == UNK_00116255);
      auVar10[6] = -(*(char *)((long)param_1 + 0xc) == UNK_00116256);
      auVar10[7] = -(*(char *)((long)param_1 + 0xd) == UNK_00116257);
      auVar10[8] = -(*(char *)((long)param_1 + 0xe) == UNK_00116258);
      auVar10[9] = -(*(char *)((long)param_1 + 0xf) == UNK_00116259);
      auVar10[10] = -((char)param_1[2] == UNK_0011625a);
      auVar10[0xb] = -(*(char *)((long)param_1 + 0x11) == UNK_0011625b);
      auVar10[0xc] = -(*(char *)((long)param_1 + 0x12) == UNK_0011625c);
      auVar10[0xd] = -(*(char *)((long)param_1 + 0x13) == UNK_0011625d);
      auVar10[0xe] = -(*(char *)((long)param_1 + 0x14) == UNK_0011625e);
      auVar10[0xf] = -(*(char *)((long)param_1 + 0x15) == UNK_0011625f);
      auVar6[0] = -((char)*param_1 == DAT_00115e40);
      auVar6[1] = -(*(char *)((long)param_1 + 1) == UNK_00115e41);
      auVar6[2] = -(*(char *)((long)param_1 + 2) == UNK_00115e42);
      auVar6[3] = -(*(char *)((long)param_1 + 3) == UNK_00115e43);
      auVar6[4] = -(*(char *)((long)param_1 + 4) == UNK_00115e44);
      auVar6[5] = -(*(char *)((long)param_1 + 5) == UNK_00115e45);
      auVar6[6] = -(*(char *)((long)param_1 + 6) == UNK_00115e46);
      auVar6[7] = -(*(char *)((long)param_1 + 7) == UNK_00115e47);
      auVar6[8] = -((char)param_1[1] == UNK_00115e48);
      auVar6[9] = -(*(char *)((long)param_1 + 9) == UNK_00115e49);
      auVar6[10] = -(*(char *)((long)param_1 + 10) == UNK_00115e4a);
      auVar6[0xb] = -(*(char *)((long)param_1 + 0xb) == UNK_00115e4b);
      auVar6[0xc] = -(*(char *)((long)param_1 + 0xc) == UNK_00115e4c);
      auVar6[0xd] = -(*(char *)((long)param_1 + 0xd) == UNK_00115e4d);
      auVar6[0xe] = -(*(char *)((long)param_1 + 0xe) == UNK_00115e4e);
      auVar6[0xf] = -(*(char *)((long)param_1 + 0xf) == UNK_00115e4f);
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




// ELF address 0x000000000004f280; strategy_comm4_1::Comm4Params::effective

/* WARNING: Removing unreachable block (ram,0x0014f29a) */
/* WARNING: Removing unreachable block (ram,0x0014f2ae) */
/* strategy_comm4_1::Comm4Params::effective */

void __rustcall
strategy_comm4_1::Comm4Params::effective(undefined8 *param_1,long param_2,ulong param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int *piVar14;
  char cVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  char cVar19;
  
  lVar1 = param_2 + (param_3 & 0xff) * 0xf0;
  piVar14 = *(int **)(lVar1 + 0x118);
  if (*(long *)(lVar1 + 0x120) == 5) {
    cVar19 = ((char)piVar14[1] == 'r' && *piVar14 == 0x656b616d) * '\x02';
  }
  else if (*(long *)(lVar1 + 0x120) == 4) {
    cVar19 = *piVar14 == 0x70696b73;
  }
  else {
    cVar19 = '\0';
  }
  puVar17 = (undefined8 *)(param_2 + 0x438);
  if (*(char *)(lVar1 + 0x40) != '\0') {
    puVar17 = (undefined8 *)(lVar1 + 0x48);
  }
  puVar16 = (undefined8 *)(param_2 + 0x440);
  if (*(char *)(lVar1 + 0x50) != '\0') {
    puVar16 = (undefined8 *)(lVar1 + 0x58);
  }
  uVar2 = *puVar16;
  puVar16 = (undefined8 *)(param_2 + 0x448);
  if (*(char *)(lVar1 + 0x60) != '\0') {
    puVar16 = (undefined8 *)(lVar1 + 0x68);
  }
  puVar18 = (undefined8 *)(param_2 + 0x450);
  if (*(char *)(lVar1 + 0x70) != '\0') {
    puVar18 = (undefined8 *)(lVar1 + 0x78);
  }
  uVar3 = *puVar16;
  uVar4 = *puVar18;
  puVar16 = (undefined8 *)(param_2 + 0x418);
  if (*(char *)(lVar1 + 0x80) != '\0') {
    puVar16 = (undefined8 *)(lVar1 + 0x88);
  }
  uVar5 = *puVar16;
  puVar16 = (undefined8 *)(param_2 + 0x420);
  if (*(char *)(lVar1 + 0x90) != '\0') {
    puVar16 = (undefined8 *)(lVar1 + 0x98);
  }
  uVar6 = *puVar16;
  puVar16 = (undefined8 *)(param_2 + 0x408);
  if (*(char *)(lVar1 + 0xa0) != '\0') {
    puVar16 = (undefined8 *)(lVar1 + 0xa8);
  }
  puVar18 = (undefined8 *)(param_2 + 0x410);
  if (*(char *)(lVar1 + 0xb0) != '\0') {
    puVar18 = (undefined8 *)(lVar1 + 0xb8);
  }
  uVar7 = *puVar16;
  uVar8 = *puVar18;
  cVar15 = (char)*(undefined4 *)(lVar1 + 0x128);
  if (cVar15 == '\x02') {
    cVar15 = (char)*(undefined4 *)(param_2 + 0x4d0);
  }
  puVar16 = (undefined8 *)(param_2 + 0x3d8);
  if (*(char *)(lVar1 + 0xc0) != '\0') {
    puVar16 = (undefined8 *)(lVar1 + 200);
  }
  uVar9 = *puVar16;
  puVar16 = (undefined8 *)(param_2 + 0x3e0);
  if (*(char *)(lVar1 + 0xd0) != '\0') {
    puVar16 = (undefined8 *)(lVar1 + 0xd8);
  }
  uVar10 = *puVar16;
  puVar16 = (undefined8 *)(param_2 + 1000);
  if (*(char *)(lVar1 + 0xe0) != '\0') {
    puVar16 = (undefined8 *)(lVar1 + 0xe8);
  }
  puVar18 = (undefined8 *)(param_2 + 0x3c8);
  if (*(char *)(lVar1 + 0xf0) != '\0') {
    puVar18 = (undefined8 *)(lVar1 + 0xf8);
  }
  uVar11 = *puVar16;
  uVar12 = *puVar18;
  puVar16 = (undefined8 *)(param_2 + 0x3d0);
  if (*(char *)(lVar1 + 0x100) != '\0') {
    puVar16 = (undefined8 *)(lVar1 + 0x108);
  }
  uVar13 = *puVar16;
  *param_1 = *puVar17;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  param_1[4] = uVar5;
  param_1[5] = uVar6;
  param_1[6] = uVar7;
  param_1[7] = uVar8;
  *(char *)((long)param_1 + 0x69) = cVar15;
  param_1[8] = uVar9;
  param_1[9] = uVar10;
  param_1[10] = uVar11;
  param_1[0xb] = uVar12;
  param_1[0xc] = uVar13;
  *(char *)(param_1 + 0xd) = cVar19;
  return;
}




// ELF address 0x0000000000072b60; strategy_comm4_1::signal_trigger::SignalTrigger::update_score

/* strategy_comm4_1::signal_trigger::SignalTrigger::update_score */

void __rustcall
strategy_comm4_1::signal_trigger::SignalTrigger::update_score
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
LAB_00172d32:
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
          goto LAB_00172d32;
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




// ELF address 0x00000000000739f0; strategy_comm4_1::signal_trigger::SignalTrigger::windows_rsi_trigger

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm4_1::signal_trigger::SignalTrigger::windows_rsi_trigger */

undefined1 * __rustcall
strategy_comm4_1::signal_trigger::SignalTrigger::windows_rsi_trigger
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
      dVar13 = (double)(*(ulong *)((long)pauVar10 + lVar6 + -0x18) & _DAT_00115b60);
      uVar12 = -(ulong)(DAT_00116400 < dVar13);
      dVar13 = (double)(~uVar12 & _s__001164c8 |
                       (ulong)(DAT_00116470 -
                              DAT_00116470 /
                              (*(double *)((long)pauVar10 + lVar6 + -0x20) / dVar13 + DAT_00116418))
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
                    /* try { // try from 00173b93 to 00173ba3 has its CatchHandler @ 00173bf5 */
        alloc::raw_vec::RawVec<T,A>::grow_one
                  (&local_90,anon_2a80cb132fb301ec4a7d87936c9817ad_14_llvm_14061952965871823163);
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




// ELF address 0x0000000000072fd0; strategy_comm4_1::signal_trigger::SignalTrigger::windows_std_trigger

/* strategy_comm4_1::signal_trigger::SignalTrigger::windows_std_trigger */

undefined1 * __rustcall
strategy_comm4_1::signal_trigger::SignalTrigger::windows_std_trigger
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
                    /* try { // try from 0017302c to 00173041 has its CatchHandler @ 001730b7 */
  local_80 = param_1;
  local_20 = param_3;
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (&local_78,&local_48,anon_c1745bac63137f5e4fd2a303e96367ef_5_llvm_14898688471948119321);
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
      (*(code *)PTR___rust_dealloc_001f1ee8)(local_70,local_78,1);
    }
    *(long *)(param_2 + 8) = lVar2;
    uVar3 = 5;
  }
  *param_2 = uVar3;
  return param_2;
}




// ELF address 0x0000000000072ec0; strategy_comm4_1::signal_trigger::SignalTrigger::windows_mean_trigger

/* strategy_comm4_1::signal_trigger::SignalTrigger::windows_mean_trigger */

undefined1 * __rustcall
strategy_comm4_1::signal_trigger::SignalTrigger::windows_mean_trigger
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
                    /* try { // try from 00172f1c to 00172f31 has its CatchHandler @ 00172fa7 */
  local_80 = param_1;
  local_20 = param_3;
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (&local_78,&local_48,anon_c1745bac63137f5e4fd2a303e96367ef_5_llvm_14898688471948119321);
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
      (*(code *)PTR___rust_dealloc_001f1ee8)(local_70,local_78,1);
    }
    *(long *)(param_2 + 8) = lVar2;
    uVar3 = 5;
  }
  *param_2 = uVar3;
  return param_2;
}




// ELF address 0x00000000000737a0; strategy_comm4_1::signal_trigger::SignalTrigger::windows_sharpe_trigger

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm4_1::signal_trigger::SignalTrigger::windows_sharpe_trigger */

undefined1 * __rustcall
strategy_comm4_1::signal_trigger::SignalTrigger::windows_sharpe_trigger
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
      auVar14._12_4_ = _UNK_00115ca4;
      dVar1 = *(double *)((long)pauVar11 + lVar6 + -0x38);
      dVar15 = *(double *)((long)pauVar11 + lVar6 + -0x30) /
               ((auVar14._8_8_ - _UNK_00115b58) +
               ((double)CONCAT44(_DAT_00115ca0,(int)lVar7) - _DAT_00115b50)) - dVar1 * dVar1;
      dVar13 = 0.0;
      if (dVar15 <= 0.0) {
        dVar15 = dVar13;
      }
      dVar15 = SQRT(dVar15);
      *(double *)((long)pauVar11 + lVar6 + -0x28) = dVar15;
      if (DAT_00116400 < (double)((ulong)dVar15 & _DAT_00115b60)) {
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
                    /* try { // try from 00173963 to 00173973 has its CatchHandler @ 001739c5 */
        alloc::raw_vec::RawVec<T,A>::grow_one
                  (&local_90,anon_2a80cb132fb301ec4a7d87936c9817ad_13_llvm_14061952965871823163);
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




// ELF address 0x0000000000072e30; strategy_comm4_1::signal_trigger::SignalTrigger::point_signal_trigger_pv4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm4_1::signal_trigger::SignalTrigger::point_signal_trigger_pv4 */

void __rustcall
strategy_comm4_1::signal_trigger::SignalTrigger::point_signal_trigger_pv4
          (double param_1,double param_2,ulong param_3,undefined1 *param_4,long param_5)

{
  undefined1 uVar1;
  double dVar2;
  
  dVar2 = *(double *)(param_5 + 0x38);
  param_1 = ((double)(param_3 & _DAT_00115b60) + param_2) * param_1;
  if (dVar2 <= 0.0) {
    dVar2 = param_1 + dVar2;
    if (0.0 <= dVar2) {
      dVar2 = 0.0;
    }
    if (dVar2 < *(double *)(param_5 + 0x40)) goto LAB_00172e87;
  }
  else {
    dVar2 = dVar2 - param_1;
    if (dVar2 <= 0.0) {
      dVar2 = 0.0;
    }
    if (dVar2 < *(double *)(param_5 + 0x40)) {
LAB_00172e87:
      uVar1 = 3;
      if (((dVar2 < *(double *)(param_5 + 0x58)) && (uVar1 = 2, *(double *)(param_5 + 0x50) < dVar2)
          ) && (uVar1 = 4, dVar2 <= *(double *)(param_5 + 0x48))) {
        *param_4 = 1;
        *(undefined8 *)(param_4 + 8) = 0x3ff0000000000000;
        return;
      }
      goto LAB_00172e67;
    }
  }
  uVar1 = 0;
LAB_00172e67:
  *param_4 = uVar1;
  *(undefined8 *)(param_4 + 8) = 0x3ff0000000000000;
  return;
}




// ELF address 0x00000000000730e0; strategy_comm4_1::signal_trigger::SignalTrigger::windows_quantile_trigger

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm4_1::signal_trigger::SignalTrigger::windows_quantile_trigger */

undefined1 * __rustcall
strategy_comm4_1::signal_trigger::SignalTrigger::windows_quantile_trigger
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
  if ((param_1 < 0.0) || (DAT_00116418 < param_1)) {
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
LAB_001736ef:
                    /* try { // try from 001736ef to 001736ff has its CatchHandler @ 0017376a */
      uVar12 = anyhow::error::_<impl_anyhow::Error>::msg(&DAT_00119eee,0x12);
      *(undefined8 *)(param_3 + 8) = uVar12;
      *param_3 = 5;
      if (local_f0 == 0) {
        return param_3;
      }
      (*(code *)PTR___rust_dealloc_001f1ee8)(local_e8,local_f0,1);
      return param_3;
    }
  }
  else {
    uVar19 = ~(uint)uVar1;
    dVar23 = DAT_00116418 - param_1;
    local_48 = param_1;
    if ((dVar23 < 0.0) || (DAT_00116418 < dVar23)) {
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
          auVar22._12_4_ = _UNK_00115ca4;
          param_1 = param_1 * ((auVar22._8_8_ - _UNK_00115b58) +
                              ((double)CONCAT44(_DAT_00115ca0,(int)uVar15) - _DAT_00115b50));
          uVar8 = 0;
          if (0.0 <= param_1) {
            uVar8 = (long)(param_1 - _DAT_00116440) & (long)param_1 >> 0x3f | (long)param_1;
          }
          uVar11 = 0xffffffffffffffff;
          if (param_1 <= _DAT_00116380) {
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
                    /* try { // try from 001736d0 to 001736d7 has its CatchHandler @ 0017376c */
              lVar9 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                      ::next(&uStack_d8);
              if (lVar9 == 0) goto LAB_001736ef;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
                    /* try { // try from 001736e2 to 001736eb has its CatchHandler @ 00173766 */
          _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>::
          next(&uStack_d8);
        }
        goto LAB_001736ef;
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
          if (uVar15 == 0) goto LAB_001736ef;
          auVar20._8_4_ = (int)(uVar15 >> 0x20);
          auVar20._0_8_ = uVar15;
          auVar20._12_4_ = _UNK_00115ca4;
          dVar23 = ((auVar20._8_8_ - _UNK_00115b58) +
                   ((double)CONCAT44(_DAT_00115ca0,(int)uVar15) - _DAT_00115b50)) * local_48;
          uVar8 = (long)(dVar23 - _DAT_00116440) & (long)dVar23 >> 0x3f | (long)dVar23;
          if (dVar23 < DAT_00116438) {
            uVar8 = 0;
          }
          if (_DAT_00116380 < dVar23) {
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
                    /* try { // try from 001732f0 to 001732f9 has its CatchHandler @ 00173770 */
              lVar9 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                      ::next(&uStack_d8);
              if (lVar9 == 0) goto LAB_001736ef;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
                    /* try { // try from 00173308 to 00173311 has its CatchHandler @ 00173768 */
          pdVar10 = (double *)
                    _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                    ::next(&uStack_d8);
          if ((pdVar10 == (double *)0x0) ||
             (uVar15 = *(ulong *)((long)pauVar16 + lVar18 + -0x60), uVar15 == 0)) goto LAB_001736ef;
          auVar21._8_4_ = (int)(uVar15 >> 0x20);
          auVar21._0_8_ = uVar15;
          auVar21._12_4_ = _UNK_00115ca4;
          dVar23 = ((auVar21._8_8_ - _UNK_00115b58) +
                   ((double)CONCAT44(_DAT_00115ca0,(int)uVar15) - _DAT_00115b50)) * local_58;
          uVar8 = 0;
          if (DAT_00116438 <= dVar23) {
            uVar8 = (long)(dVar23 - _DAT_00116440) & (long)dVar23 >> 0x3f | (long)dVar23;
          }
          if (_DAT_00116380 < dVar23) {
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
                    /* try { // try from 00173400 to 00173409 has its CatchHandler @ 0017376e */
              lVar9 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                      ::next(&uStack_d8);
              if (lVar9 == 0) goto LAB_001736ef;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
                    /* try { // try from 00173418 to 0017352d has its CatchHandler @ 00173768 */
          pdVar10 = (double *)
                    _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                    ::next(&uStack_d8);
          uVar15 = local_e0;
          if (pdVar10 == (double *)0x0) goto LAB_001736ef;
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
                       PTR_anon_2a80cb132fb301ec4a7d87936c9817ad_9_llvm_14061952965871823163_001ecbf8
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




// ELF address 0x0000000000072da0; strategy_comm4_1::signal_trigger::SignalTrigger::point_signal_trigger_pv1_spread

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm4_1::signal_trigger::SignalTrigger::point_signal_trigger_pv1_spread */

void __rustcall
strategy_comm4_1::signal_trigger::SignalTrigger::point_signal_trigger_pv1_spread
          (double param_1,ulong param_2,undefined1 *param_3,long param_4)

{
  undefined1 uVar1;
  double dVar2;
  
  dVar2 = *(double *)(param_4 + 0x38);
  param_1 = (double)(param_2 & _DAT_00115b60) * param_1;
  if (dVar2 <= 0.0) {
    dVar2 = param_1 + dVar2;
    if (0.0 <= dVar2) {
      dVar2 = 0.0;
    }
    if (dVar2 < *(double *)(param_4 + 0x40)) goto LAB_00172df3;
  }
  else {
    dVar2 = dVar2 - param_1;
    if (dVar2 <= 0.0) {
      dVar2 = 0.0;
    }
    if (dVar2 < *(double *)(param_4 + 0x40)) {
LAB_00172df3:
      uVar1 = 3;
      if (((dVar2 < *(double *)(param_4 + 0x58)) && (uVar1 = 2, *(double *)(param_4 + 0x50) < dVar2)
          ) && (uVar1 = 4, dVar2 <= *(double *)(param_4 + 0x48))) {
        *param_3 = 1;
        *(undefined8 *)(param_3 + 8) = 0x3ff0000000000000;
        return;
      }
      goto LAB_00172dd3;
    }
  }
  uVar1 = 0;
LAB_00172dd3:
  *param_3 = uVar1;
  *(undefined8 *)(param_3 + 8) = 0x3ff0000000000000;
  return;
}




// ELF address 0x0000000000074190; strategy_comm4_1::signal_trigger::dynamic_threshold

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm4_1::signal_trigger::dynamic_threshold */

void __rustcall
strategy_comm4_1::signal_trigger::dynamic_threshold
          (double param_1,double param_2,double param_3,double param_4,double *param_5,
          double *param_6)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  
  if ((((0.0 <= param_2) && (0.0 <= param_3)) && (param_2 <= param_1)) &&
     (DAT_00116480 < (double)(_DAT_00115b60 & (ulong)param_4))) {
    dVar1 = param_3 - param_2;
    if (param_3 - param_2 <= DAT_00116400) {
      dVar1 = DAT_00116400;
    }
    dVar1 = (param_1 - param_2) / dVar1;
    if (DAT_00116418 <= dVar1) {
      dVar1 = DAT_00116418;
    }
    dVar4 = (double)((ulong)(param_4 * dVar1) & _DAT_00115b60);
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




// ELF address 0x0000000000073c20; _ZN16strategy_comm4_114signal_trigger17enum_rate_counter17h11fb9a90182a0820E.llvm.14061952965871823163

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm4_1::signal_trigger::enum_rate_counter */

ulong __rustcall strategy_comm4_1::signal_trigger::enum_rate_counter(double param_1,long *param_2)

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
      (*(code *)PTR___rust_dealloc_001f1ee8)(param_2[1],*param_2,1);
    }
    goto LAB_0017411c;
  }
  local_98 = param_1;
  uStack_90 = in_XMM0_Qb;
  pauVar9 = (undefined1 (*) [16])__tls_get_addr(&PTR_001f21f8);
  if (pauVar9[1][0] == '\x01') {
    local_a8 = *pauVar9;
  }
  else {
                    /* try { // try from 00174130 to 00174135 has its CatchHandler @ 00174147 */
    local_a8 = (*(code *)PTR_hashmap_random_keys_001f2208)();
    *pauVar9 = local_a8;
    pauVar9[1][0] = 1;
  }
  *(long *)*pauVar9 = local_a8._0_8_ + 1;
  local_b8 = _DAT_001ecc50;
  lStack_b0 = _UNK_001ecc58;
  local_c8 = (undefined1 (*) [16])
             PTR_anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263_001ecc40;
  uStack_c0 = _UNK_001ecc48;
  pcVar25 = (char *)param_2[1];
  pcVar1 = pcVar25 + lVar3;
  local_68 = pcVar25;
  do {
    cVar14 = *pcVar25;
    local_60 = CONCAT71(local_60._1_7_,cVar14);
                    /* try { // try from 00173ddb to 00173e55 has its CatchHandler @ 0017414c */
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
          goto joined_r0x00173d44;
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
joined_r0x00173d44:
  } while (pcVar25 != pcVar1);
  if (uStack_c0 == 0) {
    uVar13 = 0;
    if (lStack_b0 != 0) goto LAB_00173ecb;
LAB_00174056:
    dVar34 = 0.0;
    dVar33 = 0.0;
    uVar16 = 4;
    if (uVar17 != 0 && uStack_c0 != 0) {
      (*(code *)PTR___rust_dealloc_001f1ee8)();
      dVar34 = 0.0;
      dVar33 = 0.0;
    }
  }
  else {
    uVar17 = uStack_c0 * 0x11 + 0x21;
    pauVar9 = local_c8 + (-1 - uStack_c0);
    uVar13 = 0x10;
    if (lStack_b0 == 0) goto LAB_00174056;
LAB_00173ecb:
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
      (*(code *)PTR___rust_dealloc_001f1ee8)(pauVar9,uVar17,uVar13);
    }
    auVar29._8_4_ = (int)(uVar21 >> 0x20);
    auVar29._0_8_ = uVar21;
    auVar29._12_4_ = _UNK_00115ca4;
    dVar33 = auVar29._8_8_ - _UNK_00115b58;
    dVar34 = dVar33 + ((double)CONCAT44(_DAT_00115ca0,(int)uVar21) - _DAT_00115b50);
  }
  dVar34 = dVar34 / (double)lVar3;
  uVar17 = 4;
  if (local_98 < dVar34) {
    uVar17 = uVar16 & 0xff;
  }
  local_98 = (double)(-(ulong)(local_98 < dVar34) & (ulong)dVar34);
  uStack_90 = uStack_90 & (ulong)dVar33;
  if (*param_2 != 0) {
    (*(code *)PTR___rust_dealloc_001f1ee8)(local_68,*param_2,1);
  }
LAB_0017411c:
  return uVar17 & 0xffffffff;
}




// ELF address 0x0000000000072770; strategy_comm4_1::signal_trigger::TsQuantileCalculator::update

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm4_1::signal_trigger::TsQuantileCalculator::update */

void __rustcall
strategy_comm4_1::signal_trigger::TsQuantileCalculator::update
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
    param_4 = &PTR_anon_2a80cb132fb301ec4a7d87936c9817ad_9_llvm_14061952965871823163_001ecbe0;
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
        if (lVar7 == 0) goto LAB_00172883;
        dVar17 = *pdVar6;
        dVar18 = pdVar6[1];
        param_4 = ppuVar13;
        if (param_2 <= dVar17) {
          if (param_2 < dVar17) goto LAB_00172883;
LAB_00172826:
          cVar10 = ((ulong)dVar16 >= (ulong)dVar18 && dVar16 != dVar18) -
                   ((ulong)dVar16 < (ulong)dVar18);
        }
        else {
          cVar10 = '\x01';
          if (param_2 < dVar17) goto LAB_00172826;
        }
        pdVar6 = pdVar6 + 2;
        lVar7 = lVar7 + -0x10;
        ppuVar13 = (undefined **)((long)ppuVar13 + 1);
      } while (cVar10 == '\x01');
      if (cVar10 == '\0') goto LAB_001728d6;
LAB_00172883:
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
LAB_001728d6:
  param_3[8] = param_3[8] + 1;
  dVar16 = (double)param_3[9] + param_2;
  param_3[9] = (ulong)dVar16;
  uVar9 = param_3[10] + 1;
  param_3[10] = uVar9;
  auVar20._8_4_ = (int)(uVar9 >> 0x20);
  auVar20._0_8_ = uVar9;
  auVar20._12_4_ = _UNK_00115ca4;
  param_3[0xb] = (ulong)(dVar16 / ((auVar20._8_8_ - _UNK_00115b58) +
                                  ((double)CONCAT44(_DAT_00115ca0,(int)uVar9) - _DAT_00115b50)));
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
            if (lVar7 == 0) goto joined_r0x00172ab8;
            dVar1 = *pdVar5;
            dVar4 = pdVar5[1];
            if (dVar17 <= dVar1) {
              uVar12 = uVar8;
              if (dVar17 < dVar1) goto joined_r0x00172ab8;
LAB_00172a46:
              cVar10 = ((ulong)dVar18 >= (ulong)dVar4 && dVar18 != dVar4) -
                       ((ulong)dVar18 < (ulong)dVar4);
            }
            else {
              cVar10 = '\x01';
              if (dVar17 < dVar1) goto LAB_00172a46;
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
joined_r0x00172ab8:
          if (local_78 == 0.0) break;
          local_78 = (double)((long)local_78 - 1);
          local_80 = (double *)local_80[uVar12 + 0x18];
        } while( true );
      }
      dVar16 = dVar16 - dVar17;
      param_3[9] = (ulong)dVar16;
      dVar18 = 0.0;
      if (uVar9 == 0) {
LAB_00172960:
        uVar9 = 0;
      }
      else {
        uVar9 = uVar9 - 1;
        param_3[10] = uVar9;
        if (uVar9 == 0) goto LAB_00172960;
        auVar19._8_4_ = (int)(uVar9 >> 0x20);
        auVar19._0_8_ = uVar9;
        auVar19._12_4_ = _UNK_00115ca4;
        dVar18 = dVar16 / ((auVar19._8_8_ - _UNK_00115b58) +
                          ((double)CONCAT44(_DAT_00115ca0,(int)uVar9) - _DAT_00115b50));
      }
      param_3[0xb] = (ulong)dVar18;
      dVar18 = DAT_00116438;
      param_3[0xc] = (ulong)((double)param_3[0xc] - dVar17 * dVar17);
      param_3[(ulong)(dVar17 <= dVar18) + 0xe] =
           (ulong)((double)param_3[(ulong)(dVar17 <= dVar18) + 0xe] - dVar17);
      uVar8 = param_3[3];
    } while (uVar8 != 0);
  }
  return;
}




// ELF address 0x0000000000050360; strategy_comm4_1::high_taker_rate

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm4_1::high_taker_rate */

double __rustcall
strategy_comm4_1::high_taker_rate
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
    if (((0.0 < param_3) && (DAT_00116418 < param_6)) &&
       (dVar3 = (double)(param_2 & _DAT_00115b60), DAT_00116480 <= dVar3)) {
      dVar1 = (double)(param_1 & _DAT_00115b60);
      dVar2 = dVar1 / dVar3 + _s__001163a0;
      if (dVar2 <= 0.0) {
        dVar2 = 0.0;
      }
      dVar2 = (double)(*(code *)PTR_tanh_001f1ff0)(dVar2 * DAT_00116468);
      dVar2 = (param_6 + _s__001163a0) * dVar2 + DAT_00116418;
      param_3 = ((dVar1 - dVar3) * unaff_XMM6_Qa) / param_3;
      dVar3 = param_3;
      if (dVar2 <= param_3) {
        dVar3 = dVar2;
      }
      dVar3 = (double)(-(ulong)NAN(dVar2) & (ulong)param_3 | ~-(ulong)NAN(dVar2) & (ulong)dVar3);
      if (dVar3 <= DAT_00116438) {
        dVar3 = DAT_00116438;
      }
      return dVar4 * dVar3;
    }
  }
  return dVar4;
}




// ELF address 0x0000000000077800; strategy_comm4_1::vol_spread_ratio::VolSpreadRatio::update

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm4_1::vol_spread_ratio::VolSpreadRatio::update */

ulong __rustcall
strategy_comm4_1::vol_spread_ratio::VolSpreadRatio::update
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
  
  dVar11 = DAT_00116468 * (param_2 + param_3);
  dVar9 = (double)(*(code *)PTR_round_001f2350)
                            (((param_3 - param_2) / (param_2 + param_3)) * _DAT_00116488);
  uVar4 = *param_4;
  uVar1 = param_4[3];
  if (uVar1 == uVar4) {
    alloc::collections::vec_deque::VecDeque<T,A>::grow
              (param_4,anon_4f3cd2129c239fe003a7d7b9c28b2856_28_llvm_6002621159356826365);
    uVar4 = *param_4;
    uVar1 = param_4[3];
  }
  dVar9 = dVar9 / DAT_00116458;
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
    if ((double)param_4[0x29] * DAT_00116468 <= param_1 - *(double *)(uVar4 + lVar2)) {
      dVar9 = *(double *)(lVar2 + uVar4 + 8);
      if (dVar9 <= 0.0) {
        return 0;
      }
      dVar9 = (double)(*(code *)PTR_round_001f2350)
                                ((*(double *)(uVar4 + 8 + (uVar5 - uVar6) * 0x10) / dVar9 +
                                 _s__001163a0) * _DAT_00116488);
      signal_trigger::TsQuantileCalculator::update(param_1,dVar9 / DAT_00116458,param_4 + 5);
      uVar4 = param_4[0xf];
      uVar1 = 1;
      if (1 < uVar4) {
        uVar1 = uVar4;
      }
      auVar10._8_4_ = (int)(uVar1 >> 0x20);
      auVar10._0_8_ = uVar1;
      auVar10._12_4_ = _UNK_00115ca4;
      dVar9 = (double)param_4[0x11] /
              ((auVar10._8_8_ - _UNK_00115b58) +
              ((double)CONCAT44(_DAT_00115ca0,(int)uVar1) - _DAT_00115b50)) -
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




// ELF address 0x00000000000504a0; strategy_comm4_1::taker_fillable_cum

/* strategy_comm4_1::taker_fillable_cum */

double __rustcall strategy_comm4_1::taker_fillable_cum(double param_1,long param_2,int param_3)

{
  double dVar1;
  bool bVar2;
  long lVar3;
  char cVar4;
  double dVar5;
  
  lVar3 = 0x98;
  if (param_3 != 0) {
    lVar3 = 0x48;
  }
  dVar5 = 0.0;
  if (0.0 < *(double *)(param_2 + lVar3)) {
    dVar5 = *(double *)(param_2 + 8 + lVar3) + 0.0;
    dVar1 = *(double *)(param_2 + 0x10 + lVar3);
    if (0.0 < dVar1) {
      cVar4 = (char)param_3;
      bVar2 = param_1 <= dVar1;
      if (cVar4 != '\0') {
        bVar2 = dVar1 <= param_1;
      }
      if (bVar2) {
        dVar5 = dVar5 + *(double *)(param_2 + 0x18 + lVar3);
        dVar1 = *(double *)(param_2 + 0x20 + lVar3);
        if (0.0 < dVar1) {
          bVar2 = param_1 <= dVar1;
          if (cVar4 != '\0') {
            bVar2 = dVar1 <= param_1;
          }
          if (bVar2) {
            dVar5 = dVar5 + *(double *)(param_2 + 0x28 + lVar3);
            dVar1 = *(double *)(param_2 + 0x30 + lVar3);
            if (0.0 < dVar1) {
              bVar2 = param_1 <= dVar1;
              if (cVar4 != '\0') {
                bVar2 = dVar1 <= param_1;
              }
              if (bVar2) {
                dVar5 = dVar5 + *(double *)(param_2 + 0x38 + lVar3);
                dVar1 = *(double *)(param_2 + 0x40 + lVar3);
                if (0.0 < dVar1) {
                  bVar2 = param_1 <= dVar1;
                  if (cVar4 != '\0') {
                    bVar2 = dVar1 <= param_1;
                  }
                  if (bVar2) {
                    dVar5 = dVar5 + *(double *)(param_2 + 0x48 + lVar3);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return dVar5;
}




// ELF address 0x000000000004fdf0; strategy_comm4_1::live_pending_counts

/* strategy_comm4_1::live_pending_counts */

undefined1  [16] __rustcall
strategy_comm4_1::live_pending_counts
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
  
  (*(code *)PTR_pending_orders_001f1fd0)(&local_48,param_1,param_2,param_3);
                    /* try { // try from 0014fe27 to 0014fe3a has its CatchHandler @ 00150339 */
  (*(code *)PTR_cancel_pending_ids_001f1fe8)(&local_60,param_1,param_2,param_3);
  lVar7 = local_50;
  lVar17 = local_58;
  puVar8 = PTR___rust_dealloc_001f1ee8;
  plVar14 = local_40 + local_38 * 0xb;
  if (local_38 == 0) {
    local_c0 = 0;
    lVar12 = 0;
    plVar15 = local_40;
LAB_001501aa:
    puVar8 = PTR___rust_dealloc_001f1ee8;
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
LAB_0014fee7:
      do {
        plVar15 = plVar10 + 0xb;
        lVar2 = *plVar10;
        if (lVar2 == -0x8000000000000000) goto LAB_001501aa;
        lVar3 = plVar10[1];
        lVar4 = plVar10[2];
        lVar5 = plVar10[3];
        lVar16 = plVar10[4];
        bVar1 = *(byte *)(plVar10 + 10);
        lVar13 = 0;
        do {
          plVar10 = plVar15;
          if ((*(long *)(param_4 + 0x10 + lVar13) == lVar4) &&
             (iVar9 = (*(code *)PTR_bcmp_001f1fc8)
                                (*(undefined8 *)(param_4 + 8 + lVar13),lVar3,lVar4), iVar9 == 0))
          goto LAB_0014ffa7;
          lVar13 = lVar13 + 0x18;
        } while (param_5 * 0x18 != lVar13);
        if (lVar7 != 0) {
          lVar13 = 0;
          do {
            if ((*(long *)(lVar17 + 0x10 + lVar13) == lVar4) &&
               (iVar9 = (*(code *)PTR_bcmp_001f1fc8)
                                  (*(undefined8 *)(lVar17 + 8 + lVar13),lVar3,lVar4), iVar9 == 0))
            goto LAB_0014ffa7;
            lVar13 = lVar13 + 0x18;
          } while (lVar6 != lVar13);
        }
        if (lVar2 != 0) {
          (*(code *)PTR___rust_dealloc_001f1ee8)(lVar3,lVar2,1);
        }
        if (lVar5 != 0) {
          (*(code *)PTR___rust_dealloc_001f1ee8)(lVar16,lVar5,1);
        }
        lVar12 = lVar12 + (ulong)bVar1;
        local_c0 = local_c0 + (ulong)(bVar1 ^ 1);
      } while (plVar15 != plVar14);
      goto LAB_001502a6;
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
LAB_001500a0:
      do {
        plVar15 = plVar10 + 0xb;
        lVar6 = *plVar10;
        if (lVar6 == -0x8000000000000000) goto LAB_001501aa;
        lVar2 = plVar10[1];
        lVar3 = plVar10[2];
        lVar4 = plVar10[3];
        lVar5 = plVar10[4];
        bVar1 = *(byte *)(plVar10 + 10);
        lVar16 = 0;
        do {
          plVar10 = plVar15;
          if ((*(long *)(lVar17 + 0x10 + lVar16) == lVar3) &&
             (iVar9 = (*(code *)PTR_bcmp_001f1fc8)(*(undefined8 *)(lVar17 + 8 + lVar16),lVar2,lVar3)
             , iVar9 == 0)) {
            if (lVar6 != 0) {
              (*(code *)PTR___rust_dealloc_001f1ee8)(lVar2,lVar6,1);
            }
            if (lVar4 != 0) {
              (*(code *)PTR___rust_dealloc_001f1ee8)(lVar5,lVar4,1);
            }
            if (plVar15 != plVar14) goto LAB_001500a0;
            goto LAB_001501aa;
          }
          lVar16 = lVar16 + 0x18;
        } while (lVar7 != lVar16);
        if (lVar6 != 0) {
          (*(code *)PTR___rust_dealloc_001f1ee8)(lVar2,lVar6,1);
        }
        if (lVar4 != 0) {
          (*(code *)PTR___rust_dealloc_001f1ee8)(lVar5,lVar4,1);
        }
        lVar12 = lVar12 + (ulong)bVar1;
        local_c0 = local_c0 + (ulong)(bVar1 ^ 1);
      } while (plVar15 != plVar14);
    }
  }
LAB_001502a6:
  if (local_48 != 0) {
    (*(code *)PTR___rust_dealloc_001f1ee8)(local_40,local_48 * 0x58,8);
  }
  puVar8 = PTR___rust_dealloc_001f1ee8;
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
    (*(code *)PTR___rust_dealloc_001f1ee8)(local_58,local_60 * 0x18,8);
  }
  auVar19._8_8_ = local_c0;
  auVar19._0_8_ = lVar12;
  return auVar19;
LAB_0014ffa7:
  if (lVar2 != 0) {
    (*(code *)PTR___rust_dealloc_001f1ee8)(lVar3,lVar2,1);
  }
  if (lVar5 != 0) {
    (*(code *)PTR___rust_dealloc_001f1ee8)(lVar16,lVar5,1);
  }
  if (plVar15 == plVar14) goto LAB_001501aa;
  goto LAB_0014fee7;
}




// ELF address 0x000000000004f590; strategy_comm4_1::cancel_order_use_range

/* strategy_comm4_1::cancel_order_use_range */

long __rustcall
strategy_comm4_1::cancel_order_use_range
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
  (*(code *)PTR_pending_orders_001f1fd0)(&local_48,param_3,param_4,param_5);
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
LAB_0014f660:
    uVar14 = (long)plVar9 - (long)plVar8;
    plVar12 = plVar8;
    do {
      lVar2 = *plVar12;
      lVar7 = plVar12[1];
      lVar13 = plVar12[3];
      local_108 = plVar12[4];
      if (*(byte *)(plVar12 + 10) == local_109) {
        if (lVar2 != -0x8000000000000000) goto LAB_0014f6f0;
      }
      else {
        if (lVar2 != 0) {
          (*(code *)PTR___rust_dealloc_001f1ee8)(lVar7,lVar2,1);
        }
        if (lVar13 != 0) {
          (*(code *)PTR___rust_dealloc_001f1ee8)(local_108,lVar13,1);
        }
      }
      plVar12 = plVar12 + 0xb;
      uVar14 = uVar14 - 0x58;
      local_48 = local_d8;
      local_40 = local_e0;
      if (plVar12 == local_e8) break;
    } while( true );
  }
LAB_0014f858:
  local_c0 = plVar8;
  plVar8 = local_f0;
  if (local_48 != 0) {
    (*(code *)PTR___rust_dealloc_001f1ee8)(local_40,local_48 * 0x58,8);
  }
  (*(code *)PTR_pending_orders_001f1fd0)(&local_60,local_90,local_88,local_80);
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
LAB_0014f92a:
    uVar14 = (long)local_d0 - (long)plVar9;
    plVar12 = plVar9;
    do {
      lVar2 = *plVar12;
      lVar7 = plVar12[1];
      local_108 = plVar12[3];
      local_e8 = (long *)plVar12[4];
      bVar1 = *(byte *)(plVar12 + 10);
      if (bVar1 == local_10a) {
        if (lVar2 != -0x8000000000000000) goto LAB_0014f9c0;
      }
      else {
        if (lVar2 != 0) {
          (*(code *)PTR___rust_dealloc_001f1ee8)(lVar7,lVar2,1);
        }
        if (local_108 != 0) {
          (*(code *)PTR___rust_dealloc_001f1ee8)(local_e8,local_108,1);
        }
      }
      plVar12 = plVar12 + 0xb;
      uVar14 = uVar14 - 0x58;
      local_60 = local_d8;
      local_58 = local_e0;
      if (plVar12 == local_f8) break;
    } while( true );
  }
LAB_0014fb8a:
  local_c0 = plVar9;
  if (local_60 != 0) {
    (*(code *)PTR___rust_dealloc_001f1ee8)(local_58,local_60 * 0x58,8);
  }
  return 0;
LAB_0014f6f0:
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
         (iVar3 = (*(code *)PTR_bcmp_001f1fc8)(*(undefined8 *)(lVar5 + 8 + lVar10),lVar7),
         lVar13 = local_100, lVar4 = local_98, plVar8 = local_f8, iVar3 == 0)) {
        if (lVar2 != 0) {
          (*(code *)PTR___rust_dealloc_001f1ee8)(lVar7,lVar2,1);
        }
        goto LAB_0014f80e;
      }
      lVar10 = lVar10 + 0x18;
    } while (lVar4 != lVar10);
  }
                    /* try { // try from 0014f7a0 to 0014f7c3 has its CatchHandler @ 0014fd8f */
  lVar5 = (*(code *)PTR_cancel_order_001f1fd8)(local_90,local_88,local_80,lVar7,plVar8);
  plVar8 = local_f0;
  if (lVar5 != 0) {
    plVar8 = plVar12 + 0xb;
    local_f8 = (long *)lVar5;
    local_c0 = plVar8;
    if (lVar2 != 0) {
      (*(code *)PTR___rust_dealloc_001f1ee8)(lVar7,lVar2,1);
    }
    if (lVar13 != 0) {
      (*(code *)PTR___rust_dealloc_001f1ee8)(local_108,lVar13,1);
    }
    if (plVar8 != local_e8) {
      plVar12 = plVar12 + 0xf;
      uVar14 = uVar14 / 0x58;
      do {
        if (plVar12[-4] != 0) {
          (*(code *)PTR___rust_dealloc_001f1ee8)(plVar12[-3],plVar12[-4],1);
        }
        if (plVar12[-1] != 0) {
          (*(code *)PTR___rust_dealloc_001f1ee8)(*plVar12,plVar12[-1],1);
        }
        plVar12 = plVar12 + 0xb;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    if (local_d8 == 0) {
      return (long)local_f8;
    }
    (*(code *)PTR___rust_dealloc_001f1ee8)(local_e0,local_d8 * 0x58,8);
    return (long)local_f8;
  }
  lVar5 = local_f0[2];
  if (lVar5 == *local_f0) {
                    /* try { // try from 0014f7dc to 0014f7eb has its CatchHandler @ 0014fd3a */
    (*(code *)PTR_grow_one_001f1fe0)(local_f0,&PTR_s_strategies_comm_strategy_strateg_001ebc00);
  }
  lVar4 = plVar8[1];
  *(long *)(lVar4 + lVar5 * 0x18) = lVar2;
  *(long *)(lVar4 + 8 + lVar5 * 0x18) = lVar7;
  *(long **)(lVar4 + 0x10 + lVar5 * 0x18) = local_f8;
  plVar8[2] = lVar5 + 1;
LAB_0014f80e:
  plVar9 = local_d0;
  if (lVar13 != 0) {
    (*(code *)PTR___rust_dealloc_001f1ee8)(local_108,lVar13,1);
  }
  plVar8 = plVar12 + 0xb;
  if (plVar8 == local_e8) goto code_r0x0014f83d;
  goto LAB_0014f660;
code_r0x0014f83d:
  local_48 = local_d8;
  local_40 = local_e0;
  plVar8 = plVar12 + 0xb;
  goto LAB_0014f858;
LAB_0014f9c0:
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
         (iVar3 = (*(code *)PTR_bcmp_001f1fc8)
                            (*(undefined8 *)(lVar5 + 8 + (long)dVar11),lVar7,lVar13),
         dVar6 = local_a0, lVar5 = local_98, lVar7 = local_100, iVar3 == 0)) {
        plVar8 = local_f0;
        if (lVar2 != 0) {
          (*(code *)PTR___rust_dealloc_001f1ee8)(local_100,lVar2,1);
          plVar8 = local_f0;
        }
        goto joined_r0x0014fa67;
      }
      dVar11 = (double)((long)dVar11 + 0x18);
    } while (dVar6 != dVar11);
  }
  plVar8 = local_f0;
  if ((bVar1 & 1) == 0) {
    if (local_68 < local_70) goto LAB_0014fada;
  }
  else if (local_70 < local_78) {
LAB_0014fada:
                    /* try { // try from 0014fada to 0014fafd has its CatchHandler @ 0014fd3c */
    lVar7 = (*(code *)PTR_cancel_order_001f1fd8)(local_90,local_88,local_80,lVar7,lVar13);
    if (lVar7 != 0) {
      plVar8 = plVar12 + 0xb;
      local_c0 = plVar8;
      if (lVar2 != 0) {
        (*(code *)PTR___rust_dealloc_001f1ee8)(local_100,lVar2,1);
      }
      if (local_108 != 0) {
        (*(code *)PTR___rust_dealloc_001f1ee8)(local_e8,local_108,1);
      }
      if (plVar8 != local_f8) {
        plVar12 = plVar12 + 0xf;
        uVar14 = uVar14 / 0x58;
        do {
          if (plVar12[-4] != 0) {
            (*(code *)PTR___rust_dealloc_001f1ee8)(plVar12[-3],plVar12[-4],1);
          }
          if (plVar12[-1] != 0) {
            (*(code *)PTR___rust_dealloc_001f1ee8)(*plVar12,plVar12[-1],1);
          }
          plVar12 = plVar12 + 0xb;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
      if (local_d8 == 0) {
        return lVar7;
      }
      (*(code *)PTR___rust_dealloc_001f1ee8)(local_e0,local_d8 * 0x58,8);
      return lVar7;
    }
    lVar7 = plVar8[2];
    if (lVar7 == *plVar8) {
                    /* try { // try from 0014fb11 to 0014fb20 has its CatchHandler @ 0014fd38 */
      (*(code *)PTR_grow_one_001f1fe0)(plVar8,&PTR_s_strategies_comm_strategy_strateg_001ebc18);
    }
    lVar5 = plVar8[1];
    *(long *)(lVar5 + lVar7 * 0x18) = lVar2;
    *(long *)(lVar5 + 8 + lVar7 * 0x18) = local_100;
    *(long *)(lVar5 + 0x10 + lVar7 * 0x18) = lVar13;
    plVar8[2] = lVar7 + 1;
    goto joined_r0x0014fa67;
  }
  if (lVar2 != 0) {
    (*(code *)PTR___rust_dealloc_001f1ee8)(lVar7,lVar2,1);
  }
joined_r0x0014fa67:
  if (local_108 != 0) {
    (*(code *)PTR___rust_dealloc_001f1ee8)(local_e8,local_108,1);
  }
  plVar9 = plVar12 + 0xb;
  if (plVar9 == local_f8) goto code_r0x0014fb74;
  goto LAB_0014f92a;
code_r0x0014fb74:
  local_60 = local_d8;
  local_58 = local_e0;
  plVar9 = plVar12 + 0xb;
  goto LAB_0014fb8a;
}




// ELF address 0x0000000000055c90; strategy_comm4_1::place

/* strategy_comm4_1::place */

void __rustcall strategy_comm4_1::place(double param_1,undefined8 param_2,undefined8 param_3)

{
  if (0.0 < param_1) {
    (*(code *)PTR_place_order_iap_with_target_001f2118)(param_2,param_3,1);
    return;
  }
  (*(code *)PTR_place_order_iap_001f2120)();
  return;
}




// ELF address 0x00000000000505a0; <strategy_comm4_1::StrategyComm41 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin

/* _<strategy_comm4_1::StrategyComm41 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin */

undefined8 __rustcall
_<strategy_comm4_1::StrategyComm41_as_future_backtest_sdk::plugin::StrategyPlugin>::on_begin
          (long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long local_a68;
  long local_a60;
  ulong local_a58;
  long local_a50;
  ulong local_a48;
  undefined4 *local_a40;
  undefined *local_a38;
  long *local_a30;
  code *local_a28;
  undefined **local_a20;
  undefined8 local_a18;
  undefined4 **local_a10;
  undefined8 local_a08;
  undefined8 local_a00;
  undefined1 local_9f0 [24];
  undefined4 local_9d8;
  undefined4 uStack_9d4;
  undefined4 uStack_9d0;
  undefined4 uStack_9cc;
  undefined4 local_9c8;
  undefined4 uStack_9c4;
  undefined4 uStack_9c0;
  undefined4 uStack_9bc;
  undefined4 local_9b8;
  undefined4 uStack_9b4;
  undefined4 uStack_9b0;
  undefined4 uStack_9ac;
  undefined4 local_9a8;
  undefined4 uStack_9a4;
  undefined4 uStack_9a0;
  undefined4 uStack_99c;
  long local_998;
  long lStack_990;
  undefined8 local_988;
  undefined8 uStack_980;
  long local_508;
  undefined4 local_500;
  undefined4 uStack_4fc;
  undefined4 uStack_4f8;
  undefined4 uStack_4f4;
  undefined4 local_4f0;
  undefined4 uStack_4ec;
  undefined4 uStack_4e8;
  undefined4 uStack_4e4;
  undefined4 local_4e0;
  undefined4 uStack_4dc;
  undefined4 uStack_4d8;
  undefined4 uStack_4d4;
  undefined4 local_4d0;
  undefined4 uStack_4cc;
  undefined4 uStack_4c8;
  undefined4 uStack_4c4;
  long local_4c0;
  long lStack_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  
  (*(code *)PTR_custom_config_001f1ff8)(&local_a68);
                    /* try { // try from 001505c9 to 001505f7 has its CatchHandler @ 0015084d */
  _<toml::de::Deserializer_as_serde_core::de::Deserializer>::deserialize_struct
            (&local_508,local_a60,local_a58,"Comm4Params",0xb,
             &PTR_s_signal_modepv1_alphacost_alphasi_001ebc30,0x38);
  if (local_508 == 2) {
    local_988 = local_4b0;
    uStack_980 = uStack_4a8;
    local_998 = local_4c0;
    lStack_990 = lStack_4b8;
    local_9a8 = local_4d0;
    uStack_9a4 = uStack_4cc;
    uStack_9a0 = uStack_4c8;
    uStack_99c = uStack_4c4;
    local_9b8 = local_4e0;
    uStack_9b4 = uStack_4dc;
    uStack_9b0 = uStack_4d8;
    uStack_9ac = uStack_4d4;
    local_9c8 = local_4f0;
    uStack_9c4 = uStack_4ec;
    uStack_9c0 = uStack_4e8;
    uStack_9bc = uStack_4e4;
    local_9d8 = local_500;
    uStack_9d4 = uStack_4fc;
    uStack_9d0 = uStack_4f8;
    uStack_9cc = uStack_4f4;
    local_a48 = 200;
    if (local_a58 < 200) {
      local_a48 = local_a58;
    }
    if ((200 < local_a58) && (*(char *)(local_a60 + local_a48) < -0x40)) {
                    /* try { // try from 00150836 to 0015084a has its CatchHandler @ 00150852 */
      (*(code *)PTR_slice_error_fail_001f2010)
                (local_a60,local_a58,0,local_a48,&PTR_s_strategies_comm_strategy_strateg_001ebfb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    local_a50 = local_a60;
    local_a40 = &local_9d8;
    local_a38 = PTR_fmt_001f2000;
    local_a30 = &local_a50;
    local_a28 = _<&T_as_core::fmt::Display>::fmt;
    local_a20 = &PTR_s__custom__parse_error____Raw__001ebfc8;
    local_a18 = 2;
    local_a00 = 0;
    local_a10 = &local_a40;
    local_a08 = 2;
                    /* try { // try from 001506df to 001506fe has its CatchHandler @ 00150852 */
    (*(code *)PTR_format_inner_001f2008)(local_9f0,&local_a20);
    uVar4 = anyhow::error::_<impl_anyhow::Error>::msg(local_9f0);
    if (CONCAT44(uStack_9bc,uStack_9c0) != 0) {
      (*(code *)PTR___rust_dealloc_001f1ee8)
                (CONCAT44(uStack_9b4,local_9b8),CONCAT44(uStack_9bc,uStack_9c0),1);
    }
    if (lStack_990 != 0) {
      (*(code *)PTR___rust_dealloc_001f1ee8)(local_988,lStack_990,1);
    }
    puVar3 = PTR___rust_dealloc_001f1ee8;
    lVar2 = CONCAT44(uStack_99c,uStack_9a0);
    if (local_998 != 0) {
      puVar6 = (undefined8 *)(lVar2 + 8);
      lVar5 = local_998;
      do {
        if (puVar6[-1] != 0) {
          (*(code *)puVar3)(*puVar6,puVar6[-1],1);
        }
        puVar6 = puVar6 + 3;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    if (CONCAT44(uStack_9a4,local_9a8) != 0) {
      (*(code *)PTR___rust_dealloc_001f1ee8)(lVar2,CONCAT44(uStack_9a4,local_9a8) * 0x18,8);
    }
  }
  else {
    (*(code *)PTR_memcpy_001f1f48)(&local_9d8,&uStack_4f8,0x4c8);
    if ((int)*param_1 != 2) {
      core::ptr::drop_in_place<strategy_comm4_1::Comm4Params>(param_1);
    }
    *param_1 = local_508;
    param_1[1] = CONCAT44(uStack_4fc,local_500);
    (*(code *)PTR_memcpy_001f1f48)(param_1 + 2,&local_9d8,0x4c8);
    uVar4 = 0;
  }
  if (local_a68 != 0) {
    (*(code *)PTR___rust_dealloc_001f1ee8)(local_a60,local_a68,1);
  }
  return uVar4;
}




// ELF address 0x0000000000055990; <strategy_comm4_1::StrategyComm41 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth

/* _<strategy_comm4_1::StrategyComm41 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth */

undefined8 __rustcall
_<strategy_comm4_1::StrategyComm41_as_future_backtest_sdk::plugin::StrategyPlugin>::on_depth
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
  
  if (*(long *)(param_1 + 0x520) != 0) {
    uVar11 = core::hash::BuildHasher::hash_one(param_1 + 0x528);
    puVar8 = PTR_bcmp_001f1fc8;
    lVar3 = *(long *)(param_1 + 0x508);
    uVar4 = *(ulong *)(param_1 + 0x510);
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
          uVar12 = core::hash::BuildHasher::hash_one(param_1 + 0x528,param_2 + 0x20);
          hashbrown::raw::RawTable<T,A>::remove_entry
                    (&lStack_60,param_1 + 0x508,uVar12,param_2 + 0x20);
          if (lStack_60 == 0) {
            return 0;
          }
          (*(code *)PTR___rust_dealloc_001f1ee8)(uStack_58,lStack_60,1);
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




// ELF address 0x0000000000055b70; <strategy_comm4_1::StrategyComm41 as future_backtest_sdk::plugin::StrategyPlugin>::on_finish

/* _<strategy_comm4_1::StrategyComm41 as future_backtest_sdk::plugin::StrategyPlugin>::on_finish */

undefined8 __rustcall
_<strategy_comm4_1::StrategyComm41_as_future_backtest_sdk::plugin::StrategyPlugin>::on_finish
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
  
  lVar6 = (*(code *)PTR_para_001f2018)(param_2);
  uVar2 = *(undefined2 *)(lVar6 + 0x34);
  uVar7 = *(undefined8 *)(lVar6 + 0x28);
  local_48 = *(undefined4 *)(lVar6 + 0x18);
  uStack_44 = *(undefined4 *)(lVar6 + 0x1c);
  uStack_40 = *(undefined4 *)(lVar6 + 0x20);
  uStack_3c = *(undefined4 *)(lVar6 + 0x24);
  uVar3 = *(undefined4 *)(lVar6 + 0x30);
  uVar1 = *(undefined1 *)(lVar6 + 0x30);
  _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone
            (&local_80,lVar6,anon_ab58a32db4853913d20d6c13c2a45330_87_llvm_12698094425615926394);
  local_68 = CONCAT44(uStack_44,local_48);
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_58 = uVar7;
  local_50 = uVar3;
  local_4c = uVar2;
                    /* try { // try from 00155bde to 00155bf6 has its CatchHandler @ 00155c73 */
  uVar5 = (*(code *)PTR_is_night_001f2110)(param_2);
  uVar7 = (*(code *)PTR_all_in_001f2058)(param_2,uVar5,uVar1);
  puVar4 = PTR___rust_dealloc_001f1ee8;
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
    (*(code *)PTR___rust_dealloc_001f1ee8)(local_78,local_80 * 0x18,8);
  }
  return uVar7;
}




// ELF address 0x0000000000050890; <strategy_comm4_1::StrategyComm41 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _<strategy_comm4_1::StrategyComm41 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal */

undefined8 ******* __rustcall
_<strategy_comm4_1::StrategyComm41_as_future_backtest_sdk::plugin::StrategyPlugin>::on_signal
          (int *param_1,undefined8 *******param_2,undefined8 param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined8 ******ppppppuVar3;
  undefined8 ******ppppppuVar4;
  code *pcVar5;
  uint uVar6;
  char cVar7;
  char cVar8;
  undefined1 uVar9;
  byte bVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  undefined8 *******pppppppuVar14;
  undefined8 uVar15;
  ulong uVar16;
  double *pdVar17;
  byte *pbVar18;
  byte bVar19;
  long *plVar20;
  undefined8 *puVar21;
  undefined *puVar22;
  long extraout_RDX;
  long extraout_RDX_00;
  long lVar23;
  int *piVar24;
  undefined *puVar25;
  undefined8 uVar26;
  long lVar27;
  bool bVar28;
  double extraout_XMM0_Qa;
  undefined8 *******extraout_XMM0_Qa_00;
  undefined8 *******extraout_XMM0_Qa_01;
  undefined8 *******extraout_XMM0_Qa_02;
  double dVar29;
  undefined8 *******pppppppuVar30;
  undefined8 *******pppppppuVar31;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  undefined8 extraout_XMM0_Qb_04;
  undefined8 extraout_XMM0_Qb_05;
  undefined8 extraout_XMM0_Qb_06;
  undefined8 extraout_XMM0_Qb_07;
  undefined8 extraout_XMM0_Qb_08;
  undefined8 extraout_XMM0_Qb_09;
  undefined8 extraout_XMM0_Qb_10;
  undefined8 *******extraout_XMM1_Qa;
  double extraout_XMM1_Qb;
  double dVar32;
  undefined8 *******pppppppuVar33;
  undefined8 *******pppppppuVar34;
  double dVar35;
  undefined1 auVar36 [12];
  char local_fc1;
  undefined8 local_fc0;
  undefined8 ******local_fb8;
  undefined8 uStack_fb0;
  undefined1 uStack_f9a;
  char cStack_f99;
  undefined8 *******local_f98;
  undefined8 uStack_f90;
  undefined8 *******local_f88;
  undefined8 uStack_f80;
  undefined8 ******local_f78;
  undefined8 local_f70;
  undefined8 local_f68;
  undefined1 local_f5e;
  undefined1 local_f5d;
  undefined1 local_f5c;
  undefined1 local_f5b;
  byte local_f5a;
  char local_f59;
  undefined8 *******local_f58;
  undefined8 uStack_f50;
  undefined8 *******local_f48;
  undefined8 *******pppppppuStack_f40;
  undefined8 *******local_f38;
  double dStack_f30;
  undefined8 *******local_f28;
  undefined8 uStack_f20;
  undefined8 *******local_f18;
  undefined8 uStack_f10;
  undefined8 ******ppppppuStack_f00;
  undefined8 *******local_ef8;
  undefined8 uStack_ef0;
  undefined8 *******local_ee8;
  undefined8 *******pppppppuStack_ee0;
  undefined8 *******local_ed8;
  undefined8 ******local_ed0;
  undefined8 *******local_ec8;
  code *pcStack_ec0;
  undefined8 *******pppppppuStack_eb8;
  code *pcStack_eb0;
  double dStack_ea0;
  undefined8 *******local_e98;
  undefined8 *******pppppppuStack_e90;
  undefined8 *******local_e88;
  undefined8 *******pppppppuStack_e80;
  undefined8 *******pppppppuStack_e78;
  undefined8 *******pppppppuStack_e70;
  undefined8 ******local_e60;
  undefined8 ******local_e58;
  undefined8 uStack_e50;
  undefined8 *******local_e48;
  undefined8 *******pppppppuStack_e40;
  undefined8 *******pppppppuStack_e38;
  undefined8 ******ppppppuStack_e30;
  undefined8 *******local_e28;
  code *local_e20;
  undefined8 *******pppppppuStack_e18;
  code *pcStack_e10;
  double *pdStack_e08;
  undefined *puStack_e00;
  undefined8 ******ppppppuStack_df8;
  code *pcStack_df0;
  undefined8 *******pppppppuStack_de8;
  code *pcStack_de0;
  undefined8 *******pppppppuStack_dd8;
  code *pcStack_dd0;
  int *local_d38;
  double dStack_d30;
  undefined8 *******local_d28;
  undefined8 uStack_d20;
  undefined8 ******ppppppuStack_d10;
  undefined8 *******local_d08;
  undefined8 *******pppppppuStack_d00;
  undefined8 local_cf8;
  undefined8 *******local_ce8;
  undefined8 *******pppppppuStack_ce0;
  undefined8 local_cd8;
  int *local_cc8;
  undefined8 uStack_cc0;
  undefined8 *******local_cb8;
  undefined8 *******local_cb0;
  undefined8 *******local_ca8;
  undefined8 *******pppppppuStack_ca0;
  undefined8 *******local_c98;
  undefined8 ******ppppppuStack_c90;
  undefined8 local_c88;
  undefined8 local_c80;
  long local_c78;
  undefined4 local_c6c;
  undefined8 *******local_c68;
  undefined8 *******pppppppuStack_c60;
  undefined8 *******local_c58;
  undefined8 ******ppppppuStack_c50;
  undefined8 *******local_c48;
  double dStack_c40;
  double dStack_c38;
  double dStack_c30;
  undefined8 uStack_c28;
  undefined8 uStack_c20;
  undefined8 uStack_c18;
  undefined8 ******ppppppuStack_c10;
  double dStack_c08;
  undefined1 local_c00;
  char cStack_bff;
  double local_bf8;
  undefined8 uStack_bf0;
  undefined8 ******local_be8;
  undefined8 uStack_be0;
  undefined8 *******local_bd8;
  undefined8 uStack_bd0;
  undefined8 *******local_bc8;
  undefined8 uStack_bc0;
  undefined8 *******local_bb8;
  long lStack_bb0;
  undefined8 *******local_ba0;
  undefined8 *******local_b98;
  long local_b90;
  undefined8 *******local_b88;
  long local_b80;
  long local_b78;
  undefined8 local_b70;
  long local_b60;
  long *local_b58;
  long local_b50;
  double local_b48;
  undefined8 uStack_b40;
  undefined8 ******local_b38;
  undefined4 local_b30;
  undefined2 local_b2c;
  double local_b28;
  undefined8 ******ppppppuStack_b20;
  undefined8 *******local_b10;
  undefined8 *******local_b08;
  undefined8 local_b00;
  undefined8 local_af8;
  undefined8 local_af0;
  undefined8 local_ae8;
  undefined8 local_ae0;
  undefined8 local_ad8;
  undefined8 local_ad0;
  undefined8 local_ac8;
  undefined8 local_ac0;
  undefined8 local_ab8;
  undefined8 local_ab0;
  undefined8 local_aa8;
  undefined8 local_aa0;
  undefined8 local_a98;
  undefined8 local_a90;
  undefined8 local_a88;
  undefined8 local_a80;
  undefined8 local_a78;
  undefined8 local_a70;
  undefined8 local_a68;
  undefined8 local_a60;
  undefined8 local_a58;
  undefined8 local_a50;
  undefined8 local_a48;
  undefined8 local_a40;
  undefined8 local_a38;
  undefined8 local_a30;
  undefined8 local_a28;
  undefined8 local_a20;
  undefined8 local_a18;
  undefined8 local_a10;
  undefined8 local_a08;
  undefined8 local_a00;
  undefined8 local_9f8;
  undefined8 local_9f0;
  undefined8 local_9e8;
  undefined8 local_9e0;
  undefined8 local_9d8;
  undefined8 local_9d0;
  undefined8 local_9c8;
  undefined8 local_9c0;
  undefined8 local_9b8;
  undefined8 local_9b0;
  undefined8 local_9a8;
  undefined8 local_9a0;
  undefined8 local_998;
  undefined8 local_990;
  undefined8 local_988;
  undefined8 local_980;
  undefined8 local_978;
  undefined8 local_970;
  undefined8 local_968;
  undefined8 local_960;
  undefined8 local_958;
  undefined8 local_950;
  undefined8 local_948;
  undefined8 local_940;
  undefined8 local_938;
  undefined8 local_930;
  undefined8 local_928;
  undefined8 local_920;
  undefined8 local_918;
  undefined8 local_910;
  undefined8 local_908;
  undefined8 local_900;
  undefined8 local_8f8;
  undefined8 local_8f0;
  undefined8 local_8e8;
  undefined8 local_8e0;
  undefined8 local_8d8;
  undefined8 local_8d0;
  undefined8 local_8c8;
  undefined8 local_8c0;
  undefined8 local_8b8;
  undefined8 local_8b0;
  undefined8 local_8a8;
  undefined8 local_8a0;
  undefined8 local_898;
  undefined8 local_890;
  double local_888;
  double local_880;
  undefined8 local_878;
  undefined8 *******local_870;
  undefined8 *******local_868;
  undefined8 ******local_860;
  double local_858;
  long local_850;
  undefined8 local_848;
  undefined8 local_840;
  undefined8 local_838;
  undefined8 local_830;
  undefined8 local_828;
  undefined8 local_820;
  undefined8 local_818;
  undefined8 local_810;
  undefined8 local_808;
  undefined8 local_800;
  undefined8 local_7f8;
  undefined8 local_7f0;
  undefined8 local_7e8;
  undefined8 local_7e0;
  undefined8 local_7d8;
  undefined8 local_7d0;
  undefined8 local_7c8;
  undefined8 local_7c0;
  undefined8 local_7b8;
  undefined8 local_7b0;
  undefined8 local_7a8;
  undefined8 local_7a0;
  undefined8 local_798;
  undefined8 local_790;
  undefined8 local_788;
  undefined8 local_780;
  undefined8 local_778;
  undefined8 local_770;
  undefined8 *******local_768;
  undefined8 *******local_760;
  undefined8 *******local_758;
  undefined1 local_750;
  undefined4 uStack_74f;
  undefined3 uStack_74b;
  undefined8 local_748;
  undefined8 local_740;
  undefined8 local_738;
  undefined8 local_730;
  undefined8 local_728;
  undefined8 local_720;
  undefined8 local_718;
  undefined8 local_710;
  undefined8 local_708;
  undefined8 local_700;
  undefined8 local_6f8;
  undefined8 local_6f0;
  undefined8 local_6e8;
  undefined8 local_6e0;
  undefined8 local_6d8;
  undefined8 local_6d0;
  undefined8 local_6c8;
  undefined8 local_6c0;
  undefined8 local_6b8;
  undefined8 local_6b0;
  undefined8 local_6a8;
  undefined8 local_6a0;
  undefined8 local_698;
  undefined8 local_690;
  undefined8 local_688;
  undefined8 local_680;
  undefined8 *******local_678;
  undefined8 *******local_670;
  undefined8 *******local_668;
  undefined1 local_660;
  undefined4 uStack_65f;
  undefined3 uStack_65b;
  undefined8 local_658;
  undefined8 local_650;
  undefined8 local_648;
  undefined8 local_640;
  undefined8 local_638;
  undefined8 local_630;
  undefined8 local_628;
  undefined8 local_620;
  undefined8 local_618;
  undefined8 local_610;
  undefined8 local_608;
  undefined8 local_600;
  undefined8 local_5f8;
  undefined8 local_5f0;
  undefined8 local_5e8;
  undefined8 local_5e0;
  undefined8 local_5d8;
  undefined8 local_5d0;
  undefined8 local_5c8;
  undefined8 local_5c0;
  undefined8 local_5b8;
  undefined8 local_5b0;
  undefined8 local_5a8;
  undefined8 local_5a0;
  undefined8 local_598;
  undefined8 local_590;
  undefined8 *******local_588;
  undefined8 *******local_580;
  undefined8 *******pppppppuStack_578;
  undefined1 local_570;
  undefined8 *******local_568;
  undefined8 *******pppppppuStack_560;
  undefined8 *******local_558;
  undefined8 *******local_550;
  undefined8 *******pppppppuStack_548;
  undefined8 *******local_540;
  undefined8 *******local_538;
  undefined8 *******local_530;
  undefined8 *******local_528;
  undefined8 *******local_520;
  undefined8 *******pppppppuStack_518;
  undefined8 *******local_510;
  undefined8 *******local_508;
  undefined8 *******pppppppuStack_500;
  undefined8 *******local_4f8;
  double dStack_4e8;
  undefined8 local_4e0;
  undefined8 ******local_4d8;
  undefined8 uStack_4d0;
  int *local_4c8;
  undefined8 uStack_4c0;
  undefined8 *******local_4b8;
  undefined8 uStack_4b0;
  undefined8 *******local_4a8;
  undefined8 uStack_4a0;
  undefined8 *******local_498;
  undefined8 uStack_490;
  undefined8 *******local_488;
  double dStack_480;
  undefined8 *******local_478;
  undefined8 uStack_470;
  undefined8 *******local_468;
  undefined8 uStack_460;
  int *local_458;
  double dStack_450;
  double local_448;
  undefined8 ******ppppppuStack_440;
  undefined8 *******local_438;
  long lStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  double local_3f8;
  undefined8 *******local_3f0;
  undefined8 *******pppppppuStack_3e8;
  double local_3e0;
  undefined8 local_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  undefined1 local_3a8;
  char local_3a7;
  char local_3a6;
  byte local_3a5;
  undefined1 local_3a4;
  int local_3a0 [2];
  double dStack_398;
  byte local_390;
  undefined7 uStack_38f;
  double dStack_388;
  long local_380;
  undefined8 local_378;
  double local_360;
  undefined8 *******local_358;
  double dStack_350;
  double dStack_348;
  double dStack_340;
  double dStack_338;
  double dStack_330;
  undefined8 *******local_308;
  double dStack_300;
  double dStack_2f8;
  double dStack_2f0;
  double dStack_2e8;
  double dStack_2e0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 ******ppppppuStack_280;
  undefined8 *******pppppppuStack_278;
  undefined8 *******pppppppuStack_270;
  undefined8 *******pppppppuStack_268;
  undefined8 uStack_260;
  undefined8 *******pppppppuStack_258;
  undefined1 uStack_250;
  char cStack_24f;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 ******ppppppuStack_230;
  undefined8 *******pppppppuStack_228;
  undefined8 *******pppppppuStack_220;
  undefined8 *******pppppppuStack_218;
  undefined8 uStack_210;
  undefined8 *******pppppppuStack_208;
  undefined1 uStack_200;
  byte bStack_1ff;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 *******local_1d8;
  undefined8 *******pppppppuStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 ******ppppppuStack_180;
  undefined8 *******pppppppuStack_178;
  undefined8 *******pppppppuStack_170;
  undefined8 *******pppppppuStack_168;
  long lStack_160;
  undefined8 *******pppppppuStack_158;
  undefined2 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 ******ppppppuStack_130;
  undefined8 *******pppppppuStack_128;
  undefined8 *******pppppppuStack_120;
  undefined8 *******pppppppuStack_118;
  undefined8 *******pppppppuStack_110;
  undefined8 *******pppppppuStack_108;
  undefined2 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *******local_98;
  undefined8 *******pppppppuStack_90;
  undefined8 *******local_88;
  undefined8 *******local_80;
  undefined8 *******pppppppuStack_78;
  undefined8 *******local_70;
  undefined8 ******ppppppuStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  local_f98 = param_2;
  lVar13 = (*(code *)PTR_para_001f2018)(param_3);
  uVar1 = *(undefined2 *)(lVar13 + 0x34);
  local_fb8 = *(undefined8 *******)(lVar13 + 0x28);
  local_f88 = *(undefined8 ********)(lVar13 + 0x18);
  uStack_f80 = *(undefined8 *)(lVar13 + 0x20);
  uVar2 = *(undefined4 *)(lVar13 + 0x30);
  _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone
            (&local_b60,lVar13,anon_ab58a32db4853913d20d6c13c2a45330_87_llvm_12698094425615926394);
  local_b48 = (double)local_f88;
  uStack_b40 = uStack_f80;
  local_b38 = local_fb8;
  local_b30 = uVar2;
  local_b2c = uVar1;
  if (*param_1 == 2) {
                    /* try { // try from 00151ee6 to 00151efe has its CatchHandler @ 0015591e */
    (*(code *)PTR_expect_failed_001f2068)
              ("on_begin must be called first",0x1d,&PTR_s_strategies_comm_strategy_strateg_001ec000
              );
    goto LAB_00151eff;
  }
                    /* try { // try from 00150926 to 0015093a has its CatchHandler @ 0015591e */
  (*(code *)PTR_clone_001f2020)
            (&local_ca8,param_1 + 0xc4,&PTR_s_strategies_comm_strategy_strateg_001ec260);
  local_fb8 = *(undefined8 *******)(param_1 + 0xe8);
  uStack_fb0 = *(undefined8 *)(param_1 + 0xea);
                    /* try { // try from 0015094e to 00150962 has its CatchHandler @ 00155919 */
  (*(code *)PTR_clone_001f2020)
            (&local_e98,param_1 + 0xca,&PTR_s_strategies_comm_strategy_strateg_001ec260);
  pppppppuVar14 = *(undefined8 ********)(param_1 + 0xd4);
  uVar16 = (long)pppppppuVar14 * 8;
  if (uVar16 < 0x7ffffffffffffff9 && (ulong)pppppppuVar14 >> 0x3d == 0) {
    local_cc8 = *(int **)(param_1 + 0xec);
    uStack_cc0 = *(undefined8 *)(param_1 + 0xee);
    uVar15 = *(undefined8 *)(param_1 + 0xd2);
    local_fc0 = param_3;
    if (uVar16 == 0) {
      local_f48 = (undefined8 *******)&DAT_00000008;
      local_f88 = (undefined8 *******)0x0;
      pppppppuVar31 = local_f88;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001f1f08)();
      uVar26 = 8;
      local_f48 = (undefined8 *******)(*(code *)PTR___rust_alloc_001f1ee0)(uVar16,8);
      pppppppuVar31 = pppppppuVar14;
      if (local_f48 == (undefined8 *******)0x0) goto LAB_00150997;
    }
    local_f88 = pppppppuVar31;
    (*(code *)PTR_memcpy_001f1f48)(local_f48,uVar15,uVar16);
    local_f28 = *(undefined8 ********)(param_1 + 0xf0);
    uStack_f20 = *(undefined8 *)(param_1 + 0xf2);
    iVar11 = param_1[0x134];
    local_f58 = *(undefined8 ********)(param_1 + 0xf4);
    uStack_f50 = *(undefined8 *)(param_1 + 0xf6);
    local_f18 = *(undefined8 ********)(param_1 + 0xf8);
    uStack_f10 = *(undefined8 *)(param_1 + 0xfa);
    local_f38 = *(undefined8 ********)(param_1 + 0xfc);
    dStack_f30 = *(double *)(param_1 + 0xfe);
    cVar8 = *(char *)((long)param_1 + 0x4d1);
    local_ef8 = *(undefined8 ********)(param_1 + 0x100);
    uStack_ef0 = *(undefined8 *)(param_1 + 0x102);
    local_d28 = *(undefined8 ********)(param_1 + 0x104);
    uStack_d20 = *(undefined8 *)(param_1 + 0x106);
    local_d38 = *(int **)(param_1 + 0x108);
    dStack_d30 = *(double *)(param_1 + 0x10a);
    local_b28 = *(double *)(param_1 + 0x10c);
    ppppppuStack_b20 = *(undefined8 *******)(param_1 + 0x10e);
    local_bb8 = *(undefined8 ********)(param_1 + 0x110);
    lStack_bb0 = *(long *)(param_1 + 0x112);
    uVar26 = *(undefined8 *)param_1;
    local_bc8 = *(undefined8 ********)(param_1 + 2);
    local_bd8 = *(undefined8 ********)(param_1 + 4);
    local_be8 = *(undefined8 *******)(param_1 + 6);
    local_bf8 = *(double *)(param_1 + 8);
    local_c78 = *(long *)(param_1 + 10);
    local_c80 = *(undefined8 *)(param_1 + 0xc);
    local_c88 = *(undefined8 *)(param_1 + 0xe);
    local_1a8 = *(undefined8 *)(param_1 + 0x114);
    uStack_1a0 = *(undefined8 *)(param_1 + 0x116);
    local_1b8 = *(undefined8 *)(param_1 + 0x118);
    uStack_1b0 = *(undefined8 *)(param_1 + 0x11a);
    local_f59 = *(char *)((long)param_1 + 0x4d2);
    local_1c8 = *(undefined8 *)(param_1 + 0x11c);
    uStack_1c0 = *(undefined8 *)(param_1 + 0x11e);
    local_880 = *(double *)(param_1 + 0x120);
                    /* try { // try from 00150b60 to 00150b74 has its CatchHandler @ 001558f0 */
    (*(code *)PTR_clone_001f2020)
              (&local_ee8,param_1 + 0xd6,&PTR_s_strategies_comm_strategy_strateg_001ec260);
    local_1d8 = *(undefined8 ********)(param_1 + 0x122);
    pppppppuStack_1d0 = *(undefined8 ********)(param_1 + 0x124);
    local_888 = *(double *)(param_1 + 0x126);
    local_890 = *(undefined8 *)(param_1 + 0x128);
    local_f5a = *(byte *)((long)param_1 + 0x4d3);
    local_f5b = (undefined1)param_1[0x135];
                    /* try { // try from 00150bc1 to 00150bd5 has its CatchHandler @ 001558cb */
    (*(code *)PTR_clone_001f2020)
              (&local_c68,param_1 + 0xdc,&PTR_s_strategies_comm_strategy_strateg_001ec260);
                    /* try { // try from 00150bdd to 00150bf1 has its CatchHandler @ 001558a6 */
    (*(code *)PTR_clone_001f2020)
              (local_3a0,param_1 + 0xe2,&PTR_s_strategies_comm_strategy_strateg_001ec260);
    local_1e8 = *(undefined8 *)(param_1 + 0x12a);
    uStack_1e0 = *(undefined8 *)(param_1 + 300);
    local_1f8 = *(undefined8 *)(param_1 + 0x12e);
    uStack_1f0 = *(undefined8 *)(param_1 + 0x130);
    local_898 = *(undefined8 *)(param_1 + 0x132);
    local_8a0 = *(undefined8 *)(param_1 + 0x10);
    local_8a8 = *(undefined8 *)(param_1 + 0x12);
    local_8b0 = *(undefined8 *)(param_1 + 0x14);
    local_8b8 = *(undefined8 *)(param_1 + 0x16);
    local_8c0 = *(undefined8 *)(param_1 + 0x18);
    local_8c8 = *(undefined8 *)(param_1 + 0x1a);
    local_8d0 = *(undefined8 *)(param_1 + 0x1c);
    local_8d8 = *(undefined8 *)(param_1 + 0x1e);
    local_8e0 = *(undefined8 *)(param_1 + 0x20);
    local_8e8 = *(undefined8 *)(param_1 + 0x22);
    local_8f0 = *(undefined8 *)(param_1 + 0x24);
    local_8f8 = *(undefined8 *)(param_1 + 0x26);
    local_900 = *(undefined8 *)(param_1 + 0x28);
    local_908 = *(undefined8 *)(param_1 + 0x2a);
    local_910 = *(undefined8 *)(param_1 + 0x2c);
    local_918 = *(undefined8 *)(param_1 + 0x2e);
    local_f5c = (undefined1)param_1[0x4a];
    local_920 = *(undefined8 *)(param_1 + 0x30);
    local_928 = *(undefined8 *)(param_1 + 0x32);
    local_930 = *(undefined8 *)(param_1 + 0x34);
    local_938 = *(undefined8 *)(param_1 + 0x36);
    local_940 = *(undefined8 *)(param_1 + 0x38);
    local_948 = *(undefined8 *)(param_1 + 0x3a);
    local_950 = *(undefined8 *)(param_1 + 0x3c);
    local_958 = *(undefined8 *)(param_1 + 0x3e);
    local_960 = *(undefined8 *)(param_1 + 0x40);
    local_968 = *(undefined8 *)(param_1 + 0x42);
    if (*(long *)(param_1 + 0x44) == -0x8000000000000000) {
      local_cb0 = (undefined8 *******)0x8000000000000000;
    }
    else {
                    /* try { // try from 00150dc7 to 00150de2 has its CatchHandler @ 00155881 */
      (*(code *)PTR_clone_001f2020)
                (&local_e48,param_1 + 0x44,&PTR_s__home_lyt__rustup_toolchains_nig_001ec368);
      local_cb0 = local_e48;
      local_b98 = pppppppuStack_e40;
      local_b08 = pppppppuStack_e38;
    }
    local_970 = *(undefined8 *)(param_1 + 0x4c);
    local_978 = *(undefined8 *)(param_1 + 0x4e);
    local_980 = *(undefined8 *)(param_1 + 0x50);
    local_988 = *(undefined8 *)(param_1 + 0x52);
    local_990 = *(undefined8 *)(param_1 + 0x54);
    local_998 = *(undefined8 *)(param_1 + 0x56);
    local_9a0 = *(undefined8 *)(param_1 + 0x58);
    local_9a8 = *(undefined8 *)(param_1 + 0x5a);
    local_9b0 = *(undefined8 *)(param_1 + 0x5c);
    local_9b8 = *(undefined8 *)(param_1 + 0x5e);
    local_9c0 = *(undefined8 *)(param_1 + 0x60);
    local_9c8 = *(undefined8 *)(param_1 + 0x62);
    local_9d0 = *(undefined8 *)(param_1 + 100);
    local_9d8 = *(undefined8 *)(param_1 + 0x66);
    local_9e0 = *(undefined8 *)(param_1 + 0x68);
    local_9e8 = *(undefined8 *)(param_1 + 0x6a);
    local_f5d = (undefined1)param_1[0x86];
    local_9f0 = *(undefined8 *)(param_1 + 0x6c);
    local_9f8 = *(undefined8 *)(param_1 + 0x6e);
    local_a00 = *(undefined8 *)(param_1 + 0x70);
    local_a08 = *(undefined8 *)(param_1 + 0x72);
    local_a10 = *(undefined8 *)(param_1 + 0x74);
    local_a18 = *(undefined8 *)(param_1 + 0x76);
    local_a20 = *(undefined8 *)(param_1 + 0x78);
    local_a28 = *(undefined8 *)(param_1 + 0x7a);
    local_a30 = *(undefined8 *)(param_1 + 0x7c);
    local_a38 = *(undefined8 *)(param_1 + 0x7e);
    if (*(long *)(param_1 + 0x80) == -0x8000000000000000) {
      local_cb8 = (undefined8 *******)0x8000000000000000;
    }
    else {
                    /* try { // try from 00150fd1 to 00150fec has its CatchHandler @ 0015584c */
      (*(code *)PTR_clone_001f2020)
                (&local_e48,param_1 + 0x80,&PTR_s__home_lyt__rustup_toolchains_nig_001ec368);
      local_cb8 = local_e48;
      local_ba0 = pppppppuStack_e40;
      local_b10 = pppppppuStack_e38;
    }
    local_a40 = *(undefined8 *)(param_1 + 0x88);
    local_a48 = *(undefined8 *)(param_1 + 0x8a);
    local_a50 = *(undefined8 *)(param_1 + 0x8c);
    local_a58 = *(undefined8 *)(param_1 + 0x8e);
    local_a60 = *(undefined8 *)(param_1 + 0x90);
    local_a68 = *(undefined8 *)(param_1 + 0x92);
    local_a70 = *(undefined8 *)(param_1 + 0x94);
    local_a78 = *(undefined8 *)(param_1 + 0x96);
    local_a80 = *(undefined8 *)(param_1 + 0x98);
    local_a88 = *(undefined8 *)(param_1 + 0x9a);
    local_a90 = *(undefined8 *)(param_1 + 0x9c);
    local_a98 = *(undefined8 *)(param_1 + 0x9e);
    local_aa0 = *(undefined8 *)(param_1 + 0xa0);
    local_aa8 = *(undefined8 *)(param_1 + 0xa2);
    local_ab0 = *(undefined8 *)(param_1 + 0xa4);
    local_ab8 = *(undefined8 *)(param_1 + 0xa6);
    local_f5e = (undefined1)param_1[0xc2];
    local_ac0 = *(undefined8 *)(param_1 + 0xa8);
    local_ac8 = *(undefined8 *)(param_1 + 0xaa);
    local_ad0 = *(undefined8 *)(param_1 + 0xac);
    local_ad8 = *(undefined8 *)(param_1 + 0xae);
    local_ae0 = *(undefined8 *)(param_1 + 0xb0);
    local_ae8 = *(undefined8 *)(param_1 + 0xb2);
    uVar15 = *(undefined8 *)(param_1 + 0xb4);
    local_af0 = *(undefined8 *)(param_1 + 0xb6);
    local_af8 = *(undefined8 *)(param_1 + 0xb8);
    local_b00 = *(undefined8 *)(param_1 + 0xba);
    local_588 = (undefined8 *******)0x8000000000000000;
    if (*(long *)(param_1 + 0xbc) != -0x8000000000000000) {
                    /* try { // try from 001511cf to 001511ea has its CatchHandler @ 00155817 */
      (*(code *)PTR_clone_001f2020)
                (&local_e48,param_1 + 0xbc,&PTR_s__home_lyt__rustup_toolchains_nig_001ec368);
      local_ce8 = pppppppuStack_e40;
      pppppppuStack_ce0 = pppppppuStack_e38;
      local_588 = local_e48;
    }
    plVar20 = local_b58;
    pppppppuVar31 = local_f98;
    puVar25 = PTR_bcmp_001f1fc8;
    local_568 = local_ca8;
    pppppppuStack_560 = pppppppuStack_ca0;
    local_558 = local_c98;
    local_4d8 = local_fb8;
    uStack_4d0 = uStack_fb0;
    local_550 = local_e98;
    pppppppuStack_548 = pppppppuStack_e90;
    local_540 = local_e88;
    local_4c8 = local_cc8;
    uStack_4c0 = uStack_cc0;
    local_538 = local_f88;
    local_530 = local_f48;
    local_4b8 = local_f28;
    uStack_4b0 = uStack_f20;
    local_4a8 = local_f58;
    uStack_4a0 = uStack_f50;
    local_498 = local_f18;
    uStack_490 = uStack_f10;
    local_488 = local_f38;
    dStack_480 = dStack_f30;
    local_478 = local_ef8;
    uStack_470 = uStack_ef0;
    local_468 = local_d28;
    uStack_460 = uStack_d20;
    local_458 = local_d38;
    dStack_450 = dStack_d30;
    local_448 = local_b28;
    ppppppuStack_440 = ppppppuStack_b20;
    local_438 = local_bb8;
    lStack_430 = lStack_bb0;
    local_870 = local_bc8;
    local_868 = local_bd8;
    local_860 = local_be8;
    local_858 = local_bf8;
    local_850 = local_c78;
    local_848 = local_c80;
    local_840 = local_c88;
    local_428 = local_1a8;
    uStack_420 = uStack_1a0;
    local_418 = local_1b8;
    uStack_410 = uStack_1b0;
    local_3a6 = local_f59;
    local_408 = local_1c8;
    uStack_400 = uStack_1c0;
    local_3f8 = local_880;
    local_520 = local_ee8;
    pppppppuStack_518 = pppppppuStack_ee0;
    local_510 = local_ed8;
    local_3f0 = local_1d8;
    pppppppuStack_3e8 = pppppppuStack_1d0;
    local_3e0 = local_888;
    local_3d8 = local_890;
    local_3a5 = local_f5a;
    local_3a4 = local_f5b;
    local_508 = local_c68;
    pppppppuStack_500 = pppppppuStack_c60;
    local_4f8 = local_c58;
    dStack_4e8 = dStack_398;
    local_4e0 = CONCAT71(uStack_38f,local_390);
    local_3d0 = local_1e8;
    uStack_3c8 = uStack_1e0;
    local_3c0 = local_1f8;
    uStack_3b8 = uStack_1f0;
    local_3b0 = local_898;
    local_838 = local_8a0;
    local_830 = local_8a8;
    local_828 = local_8b0;
    local_820 = local_8b8;
    local_818 = local_8c0;
    local_810 = local_8c8;
    local_808 = local_8d0;
    local_800 = local_8d8;
    local_7f8 = local_8e0;
    local_7f0 = local_8e8;
    local_7e8 = local_8f0;
    local_7e0 = local_8f8;
    local_7d8 = local_900;
    local_7d0 = local_908;
    local_7c8 = local_910;
    local_7c0 = local_918;
    local_7b8 = local_920;
    local_7b0 = local_928;
    local_7a8 = local_930;
    local_7a0 = local_938;
    local_798 = local_940;
    local_790 = local_948;
    local_788 = local_950;
    local_780 = local_958;
    local_778 = local_960;
    local_770 = local_968;
    local_768 = local_cb0;
    local_760 = local_b98;
    local_758 = local_b08;
    local_750 = local_f5c;
    uStack_74b = (undefined3)((ulong)local_d08 >> 0x20);
    uStack_74f = local_d08._0_4_;
    local_748 = local_970;
    local_740 = local_978;
    local_738 = local_980;
    local_730 = local_988;
    local_728 = local_990;
    local_720 = local_998;
    local_718 = local_9a0;
    local_710 = local_9a8;
    local_708 = local_9b0;
    local_700 = local_9b8;
    local_6f8 = local_9c0;
    local_6f0 = local_9c8;
    local_6e8 = local_9d0;
    local_6e0 = local_9d8;
    local_6d8 = local_9e0;
    local_6d0 = local_9e8;
    local_6c8 = local_9f0;
    local_6c0 = local_9f8;
    local_6b8 = local_a00;
    local_6b0 = local_a08;
    local_6a8 = local_a10;
    local_6a0 = local_a18;
    local_698 = local_a20;
    local_690 = local_a28;
    local_688 = local_a30;
    local_680 = local_a38;
    local_678 = local_cb8;
    local_670 = local_ba0;
    local_668 = local_b10;
    local_660 = local_f5d;
    uStack_65b = (undefined3)((ulong)local_e48 >> 0x20);
    uStack_65f = (int)local_e48;
    local_658 = local_a40;
    local_650 = local_a48;
    local_648 = local_a50;
    local_640 = local_a58;
    local_638 = local_a60;
    local_630 = local_a68;
    local_628 = local_a70;
    local_620 = local_a78;
    local_618 = local_a80;
    local_610 = local_a88;
    local_608 = local_a90;
    local_600 = local_a98;
    local_5f8 = local_aa0;
    local_5f0 = local_aa8;
    local_5e8 = local_ab0;
    local_5e0 = local_ab8;
    local_5d8 = local_ac0;
    local_5d0 = local_ac8;
    local_5c8 = local_ad0;
    local_5c0 = local_ad8;
    local_5b8 = local_ae0;
    local_5b0 = local_ae8;
    local_5a0 = local_af0;
    local_598 = local_af8;
    local_590 = local_b00;
    local_580 = local_ce8;
    pppppppuStack_578 = pppppppuStack_ce0;
    local_570 = local_f5e;
    local_878 = uVar26;
    local_5a8 = uVar15;
    local_528 = pppppppuVar14;
    local_3a8 = (char)iVar11;
    local_3a7 = cVar8;
    if (local_b50 != 0) {
      local_f28 = local_f98 + 9;
      local_fb8 = local_f98[10];
      ppppppuVar3 = local_f98[0xb];
      lVar13 = local_b50 * 0x18;
      lVar23 = 0;
      local_cc8 = param_1;
      do {
        if ((*(undefined8 *******)((long)plVar20 + lVar23 + 0x10) == ppppppuVar3) &&
           (iVar11 = (*(code *)puVar25)(*(undefined8 *)((long)plVar20 + lVar23 + 8),local_fb8,
                                        ppppppuVar3), iVar11 == 0)) {
                    /* try { // try from 00151b48 to 00151b5a has its CatchHandler @ 001557f2 */
          (*(code *)PTR_trade_codes_001f2028)(&local_b90,local_fc0);
          lVar13 = local_b80;
          local_f88 = local_b88;
          if (local_b80 == 0) {
            pppppppuVar14 = (undefined8 *******)0x0;
            goto LAB_00151d71;
          }
          local_f48 = (undefined8 *******)pppppppuVar31[1];
          ppppppuVar4 = pppppppuVar31[2];
          lVar23 = local_b80 * 0x18;
          lVar27 = 0;
          goto LAB_00151bad;
        }
        lVar23 = lVar23 + 0x18;
      } while (lVar13 != lVar23);
    }
    pppppppuVar14 = (undefined8 *******)0x0;
LAB_00151cae:
    core::ptr::drop_in_place<strategy_comm4_1::Comm4Params>(&local_878);
    puVar25 = PTR___rust_dealloc_001f1ee8;
    if (local_b50 != 0) {
      plVar20 = local_b58 + 1;
      lVar13 = local_b50;
      do {
        if (plVar20[-1] != 0) {
          (*(code *)puVar25)(*plVar20,plVar20[-1],1);
        }
        plVar20 = plVar20 + 3;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
    if (local_b60 != 0) {
      (*(code *)PTR___rust_dealloc_001f1ee8)(local_b58,local_b60 * 0x18,8);
    }
    return pppppppuVar14;
  }
  uVar26 = 0;
LAB_00150997:
                    /* try { // try from 00150997 to 001509a9 has its CatchHandler @ 00155936 */
  (*(code *)PTR_handle_error_001f1fa0)
            (uVar26,uVar16,anon_1b262b5831a33bd610c18951b258da66_9_llvm_8401225308454409687);
LAB_00151eff:
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
  while (lVar27 = lVar27 + 0x18, lVar23 != lVar27) {
LAB_00151bad:
    if ((*(undefined8 *******)((long)local_f88 + lVar27 + 0x10) == ppppppuVar4) &&
       (iVar11 = (*(code *)puVar25)(*(undefined8 *)((long)local_f88 + lVar27 + 8),local_f48,
                                    ppppppuVar4), pppppppuVar14 = local_f98, iVar11 == 0)) {
      cVar8 = *(char *)((long)local_f98 + 0x94);
      local_f48 = (undefined8 *******)CONCAT71(local_f48._1_7_,(undefined1)local_b30);
                    /* try { // try from 00151bf1 to 00151c59 has its CatchHandler @ 001557e0 */
      (*(code *)PTR_inst_start_time_sec_001f2030)(local_fc0);
      piVar24 = local_cc8;
      cVar7 = (*(code *)PTR_is_trade_start_001f2038)(local_fc0,cVar8);
      if (cVar7 != '\0') {
        cVar7 = (*(code *)PTR_is_trade_end_001f2040)(local_fc0,cVar8);
        if (cVar7 != '\0') {
          if (cVar8 == '\0') {
            if ((char)local_b2c != '\0') goto LAB_00151e3b;
          }
          else if (local_b30._3_1_ == '\x01') {
LAB_00151e3b:
                    /* try { // try from 00151e3b to 00151e4f has its CatchHandler @ 001557e0 */
            pppppppuVar14 =
                 (undefined8 *******)
                 (*(code *)PTR_all_in_001f2058)(local_fc0,cVar8,(ulong)local_f48 & 0xff);
            goto LAB_00151d39;
          }
        }
        (*(code *)PTR_clone_001f2020)
                  (&local_f78,pppppppuVar14,&PTR_s_strategies_comm_strategy_strateg_001ec018);
                    /* try { // try from 00151c5a to 00151c76 has its CatchHandler @ 0015575c */
        (*(code *)PTR_clone_001f2020)
                  (&local_b78,local_f28,&PTR_s_strategies_comm_strategy_strateg_001ec030);
        uVar26 = local_fc0;
                    /* try { // try from 00151c81 to 00151c96 has its CatchHandler @ 00155757 */
        (*(code *)PTR_depth_001f2048)(&local_e48,local_fc0,local_f70);
        if ((int)local_e48 == 2) {
          pppppppuVar14 = (undefined8 *******)0x0;
        }
        else {
          (*(code *)PTR_memcpy_001f1f48)(local_3a0,&local_e48,0x108);
          pppppppuVar14 = (undefined8 *******)0x0;
          local_f88 = local_358;
          if ((0.0 < (double)local_358) && (local_f28 = local_308, 0.0 < (double)local_308)) {
                    /* try { // try from 00151df8 to 00151e09 has its CatchHandler @ 00155752 */
            local_f48 = (undefined8 *******)(*(code *)PTR_time_sec_001f2050)(uVar26);
            if ((double)DAT_00116418 < (double)local_f48 - local_360) {
              pppppppuVar14 = (undefined8 *******)0x0;
              goto LAB_00152f14;
            }
                    /* try { // try from 00151e58 to 00151eb7 has its CatchHandler @ 00155752 */
            auVar36 = (*(code *)PTR_signal_parameter_id_001f2060)(local_fb8,ppppppuVar3);
            local_c6c = 0;
            if ((auVar36 & (undefined1  [12])0x1) != (undefined1  [12])0x0) {
              local_c6c = auVar36._8_4_;
            }
            if (local_3a6 == '\x01') {
              (*(code *)PTR_clone_001f2020)
                        (&local_ee8,&local_f78,&PTR_s_strategies_comm_strategy_strateg_001ec048);
              hashbrown::rustc_entry::_<impl_hashbrown::map::HashMap<K,V,S,A>>::rustc_entry
                        (&local_e48,piVar24 + 0x14e,&local_ee8);
              if (local_e48 == (undefined8 *******)0x8000000000000000) {
                local_c68 = (undefined8 *******)0x8000000000000000;
              }
              else {
                local_c48 = local_e28;
                ppppppuStack_c50 = ppppppuStack_e30;
                local_c68 = local_e48;
              }
              local_c58 = pppppppuStack_e38;
              pppppppuStack_c60 = pppppppuStack_e40;
              uVar15 = std::collections::hash::map::Entry<K,V>::or_insert_with
                                 (local_408,uStack_400,&local_c68);
                    /* try { // try from 00151f63 to 0015202c has its CatchHandler @ 00155752 */
              uVar16 = strategy_comm4_1::vol_spread_ratio::VolSpreadRatio::update
                                 ((double)local_f48 * _DAT_001164f8,local_f28,local_f88,uVar15);
              puVar25 = PTR_K1_MAP_G1_LOW_001f2070;
              if (((uVar16 & 1) == 0) || (local_3f8 < extraout_XMM0_Qa)) goto LAB_00151fb4;
              cVar8 = '\x01';
              if (*(long *)(PTR_K1_MAP_G1_LOW_001f2070 + 0x30) != 2) {
                once_cell::imp::OnceCell<T>::initialize
                          (PTR_K1_MAP_G1_LOW_001f2070,PTR_K1_MAP_G1_LOW_001f2070);
              }
            }
            else {
LAB_00151fb4:
              puVar25 = PTR_K1_MAP_G2_HIGH_001f2078;
              if (*(long *)(PTR_K1_MAP_G2_HIGH_001f2078 + 0x30) != 2) {
                    /* try { // try from 00154c66 to 00154c70 has its CatchHandler @ 00155752 */
                once_cell::imp::OnceCell<T>::initialize
                          (PTR_K1_MAP_G2_HIGH_001f2078,PTR_K1_MAP_G2_HIGH_001f2078);
              }
              cVar8 = '\0';
            }
            lVar13 = hashbrown::map::HashMap<K,V,S,A>::get_inner(puVar25,&local_c6c);
            pdVar17 = (double *)&DAT_00116418;
            if (lVar13 != 0) {
              pdVar17 = (double *)(lVar13 + 8);
            }
            local_e60 = (undefined8 ******)*pdVar17;
            local_fc1 = cVar8;
            if (local_3a5 == 0) {
              local_fb8 = (undefined8 ******)0x0;
              local_f58 = (undefined8 *******)0x0;
              uVar12 = 0;
            }
            else {
              uVar26 = core::str::_<impl_str>::trim_end_matches(local_f70,local_f68);
              _<T_as_alloc::slice::<impl[T]>::to_vec_in::ConvertVec>::to_vec(&local_e48,uVar26);
              local_ed8 = pppppppuStack_e38;
              local_ee8 = local_e48;
              pppppppuStack_ee0 = pppppppuStack_e40;
              local_d38 = piVar24 + 0x15a;
                    /* try { // try from 00152056 to 0015211e has its CatchHandler @ 00155738 */
              lVar13 = hashbrown::map::HashMap<K,V,S,A>::get_inner(local_d38,&local_ee8);
              dVar29 = dStack_4e8;
              pppppppuVar31 = local_4f8;
              pppppppuVar14 = pppppppuStack_500;
              pbVar18 = &DAT_0011729b;
              if (lVar13 != 0) {
                pbVar18 = (byte *)(lVar13 + 0x18);
              }
              local_f38 = (undefined8 *******)CONCAT44(local_f38._4_4_,(uint)*pbVar18);
              local_fb8 = (undefined8 ******)local_4e0;
              pppppppuStack_e90 =
                   (undefined8 *******)_<alloc::string::String_as_core::fmt::Display>::fmt;
              local_e48 = (undefined8 *******)&PTR_s_pnl__001ec060;
              pppppppuStack_e40 = (undefined8 *******)0x1;
              local_e28 = (undefined8 *******)0x0;
              pppppppuStack_e38 = &local_e98;
              ppppppuStack_e30 = (undefined8 ******)0x1;
              local_e98 = &local_ee8;
              (*(code *)PTR_format_inner_001f2008)(&local_c68,&local_e48);
              pppppppuVar33 = pppppppuStack_c60;
              pppppppuVar34 = local_c68;
                    /* try { // try from 00152137 to 00152164 has its CatchHandler @ 001556f8 */
              local_fb8 = (undefined8 ******)
                          (*(code *)PTR_get_published_001f2080)
                                    (local_fc0,pppppppuVar14,pppppppuVar31,dVar29,local_fb8,
                                     pppppppuStack_c60,local_c58);
              local_f18 = extraout_XMM0_Qa_00;
              if (pppppppuVar34 != (undefined8 *******)0x0) {
                (*(code *)PTR___rust_dealloc_001f1ee8)(pppppppuVar33,pppppppuVar34,1);
              }
              dVar29 = dStack_4e8;
              pppppppuVar33 = local_4f8;
              pppppppuVar34 = pppppppuStack_500;
              local_f58 = (undefined8 *******)local_4e0;
              local_e98 = &local_ee8;
              pppppppuStack_e90 =
                   (undefined8 *******)_<alloc::string::String_as_core::fmt::Display>::fmt;
              local_e48 = (undefined8 *******)&PTR_s_amt__001ec070;
              pppppppuStack_e40 = (undefined8 *******)0x1;
              local_e28 = (undefined8 *******)0x0;
              pppppppuStack_e38 = &local_e98;
              ppppppuStack_e30 = (undefined8 ******)0x1;
                    /* try { // try from 00152205 to 0015221a has its CatchHandler @ 00155738 */
              (*(code *)PTR_format_inner_001f2008)(&local_c68,&local_e48);
              pppppppuVar31 = pppppppuStack_c60;
              pppppppuVar14 = local_c68;
                    /* try { // try from 00152233 to 0015225e has its CatchHandler @ 001556dd */
              local_f58 = (undefined8 *******)
                          (*(code *)PTR_get_published_001f2080)
                                    (local_fc0,pppppppuVar34,pppppppuVar33,dVar29,local_f58,
                                     pppppppuStack_c60,local_c58);
              local_ef8 = extraout_XMM0_Qa_01;
              if (pppppppuVar14 != (undefined8 *******)0x0) {
                (*(code *)PTR___rust_dealloc_001f1ee8)(pppppppuVar31,pppppppuVar14,1);
              }
              dVar29 = dStack_4e8;
              pppppppuVar31 = local_4f8;
              pppppppuVar14 = pppppppuStack_500;
              local_e98 = &local_ee8;
              pppppppuStack_e90 =
                   (undefined8 *******)_<alloc::string::String_as_core::fmt::Display>::fmt;
              local_e48 = (undefined8 *******)&PTR_DAT_001ec080;
              pppppppuStack_e40 = (undefined8 *******)0x1;
              local_e28 = (undefined8 *******)0x0;
              pppppppuStack_e38 = &local_e98;
              ppppppuStack_e30 = (undefined8 ******)0x1;
                    /* try { // try from 001522ff to 00152314 has its CatchHandler @ 00155738 */
              (*(code *)PTR_format_inner_001f2008)(&local_c68,&local_e48);
              pppppppuVar34 = pppppppuStack_c60;
              local_d28 = local_c68;
                    /* try { // try from 00152335 to 00152352 has its CatchHandler @ 0015566a */
              uVar16 = (*(code *)PTR_get_published_001f2080)
                                 (local_fc0,pppppppuVar14,pppppppuVar31,dVar29,local_4e0,
                                  pppppppuStack_c60,local_c58);
              pppppppuVar31 = local_d28;
              pppppppuVar14 = local_f38;
              uVar26 = local_fc0;
              pppppppuVar33 = extraout_XMM0_Qa_02;
              if ((uVar16 & 1) == 0) {
                pppppppuVar33 = (undefined8 *******)0x0;
              }
              uVar6 = (uint)local_f38;
              if (local_d28 != (undefined8 *******)0x0) {
                local_d28 = pppppppuVar33;
                (*(code *)PTR___rust_dealloc_001f1ee8)(pppppppuVar34,pppppppuVar31,1);
              }
              if ((((ulong)local_fb8 & 1) == 0) ||
                 (uVar12 = strategy_comm4_1::next_phase(local_f18,uVar6 & 0xff,&local_878),
                 (char)uVar12 == (char)pppppppuVar14)) {
                uVar12 = uVar6;
                if (local_ee8 != (undefined8 *******)0x0) {
                  (*(code *)PTR___rust_dealloc_001f1ee8)(pppppppuStack_ee0,local_ee8,1);
                }
              }
              else {
                pppppppuStack_e38 = local_ed8;
                local_e48 = local_ee8;
                pppppppuStack_e40 = pppppppuStack_ee0;
                    /* try { // try from 0015242a to 00152442 has its CatchHandler @ 00155644 */
                hashbrown::map::HashMap<K,V,S,A>::insert(local_d38,&local_e48,uVar12 & 0xff);
              }
            }
            bVar10 = local_3a5;
            strategy_comm4_1::Comm4Params::effective(&local_c68,&local_878,uVar12 & 0xff);
            pppppppuVar14 = local_f98;
            if ((bVar10 & 1) == 0) {
              local_d08 = (undefined8 *******)0x0;
              pppppppuStack_d00 = (undefined8 *******)0x1;
              local_cf8 = 0;
            }
            else {
              local_e58 = (undefined8 ******)CONCAT44(local_e58._4_4_,(uVar12 & 0xff) + 0x31);
              if (((ulong)local_fb8 & 1) == 0) {
                _<T_as_alloc::slice::<impl[T]>::to_vec_in::ConvertVec>::to_vec
                          (&local_e48,"NA-pon_signal code= score= vol_alpha=",2);
                local_c98 = pppppppuStack_e38;
                local_98 = local_e48;
                pppppppuStack_90 = pppppppuStack_e40;
              }
              else {
                lVar13 = 0x7fffffffffffffff;
                if ((double)local_f18 <= DAT_001163b0) {
                  lVar13 = (long)(double)local_f18;
                }
                lVar23 = 0;
                if (!NAN((double)local_f18)) {
                  lVar23 = lVar13;
                }
                    /* try { // try from 001524b8 to 00152525 has its CatchHandler @ 00155752 */
                _<i64_as_alloc::string::SpecToString>::spec_to_string(&local_98,lVar23);
                local_c98 = local_88;
              }
              local_ca8 = local_98;
              pppppppuStack_ca0 = pppppppuStack_90;
              if (((ulong)local_f58 & 1) == 0) {
                _<T_as_alloc::slice::<impl[T]>::to_vec_in::ConvertVec>::to_vec
                          (&local_e48,"NA-pon_signal code= score= vol_alpha=",2);
                local_e88 = pppppppuStack_e38;
                local_80 = local_e48;
                pppppppuStack_78 = pppppppuStack_e40;
              }
              else {
                lVar13 = 0x7fffffffffffffff;
                if ((double)local_ef8 <= DAT_001163b0) {
                  lVar13 = (long)(double)local_ef8;
                }
                lVar23 = 0;
                if (!NAN((double)local_ef8)) {
                  lVar23 = lVar13;
                }
                    /* try { // try from 0015257e to 001525be has its CatchHandler @ 001556bc */
                _<i64_as_alloc::string::SpecToString>::spec_to_string(&local_80,lVar23);
                local_e88 = local_70;
              }
              local_e48 = &local_e58;
              pppppppuStack_e40 = (undefined8 *******)PTR_fmt_001f2088;
              pppppppuStack_e38 = &local_ca8;
              ppppppuStack_e30 =
                   (undefined8 ******)_<alloc::string::String_as_core::fmt::Display>::fmt;
              local_e28 = &local_e98;
              local_e20 = _<alloc::string::String_as_core::fmt::Display>::fmt;
              local_ee8 = (undefined8 *******)&DAT_001ec090;
              pppppppuStack_ee0 = (undefined8 *******)0x3;
              local_ec8 = (undefined8 *******)0x0;
              local_ed0 = (undefined8 ******)0x3;
                    /* try { // try from 00152672 to 00152687 has its CatchHandler @ 00155697 */
              local_ed8 = &local_e48;
              local_e98 = local_80;
              pppppppuStack_e90 = pppppppuStack_78;
              (*(code *)PTR_format_inner_001f2008)(&local_ce8,&local_ee8);
              if (local_e98 != (undefined8 *******)0x0) {
                (*(code *)PTR___rust_dealloc_001f1ee8)(pppppppuStack_e90,local_e98,1);
              }
              if (local_ca8 != (undefined8 *******)0x0) {
                (*(code *)PTR___rust_dealloc_001f1ee8)(pppppppuStack_ca0,local_ca8,1);
              }
              local_d08 = local_ce8;
              pppppppuStack_d00 = pppppppuStack_ce0;
              local_cf8 = local_cd8;
            }
            local_f58 = (undefined8 *******)CONCAT71(local_f58._1_7_,local_c00);
            local_f18 = (undefined8 *******)CONCAT71(local_f18._1_7_,local_fc1);
            cVar8 = strategy_comm4_1::Comm4Params::signal_mode(pppppppuStack_560,local_558);
                    /* WARNING: Switch is manually overridden */
            switch(cVar8) {
            case '\0':
              pppppppuStack_f40 =
                   (undefined8 *******)((double)pppppppuVar14[0xe] * (double)local_4d8);
              break;
            case '\x01':
              pppppppuStack_f40 = (undefined8 *******)pppppppuVar14[0xf];
              break;
            case '\x02':
              pppppppuStack_f40 = (undefined8 *******)pppppppuVar14[0xe];
              break;
            case '\x03':
              ppppppuVar3 = pppppppuVar14[0xe];
              local_fb8 = (undefined8 ******)
                          (~-(ulong)NAN((double)ppppppuVar3) &
                           (_s__001161f0 & (ulong)ppppppuVar3 | ram0x001160e0) |
                          DAT_001164a8 & -(ulong)NAN((double)ppppppuVar3));
              uStack_fb0 = _UNK_001160e8;
              dVar29 = (double)(*(code *)PTR_pow_001f2090)
                                         ((ulong)ppppppuVar3 & _DAT_00115b60,
                                          (double)DAT_00116418 / (double)local_e60);
              pppppppuStack_f40 = (undefined8 *******)(dVar29 * (double)local_fb8);
            }
            if (((local_3a0[0] != 1) || ((local_390 & 1) == 0)) ||
               ((double)((ulong)((dStack_398 - dStack_388) / (dStack_398 + dStack_388)) &
                        _DAT_00115b60) <= DAT_00116450)) {
                    /* try { // try from 0015281c to 00152aa6 has its CatchHandler @ 00155761 */
              local_f98 = (undefined8 *******)(*(code *)PTR_time_sec_001f2050)(uVar26);
              local_fb8 = (undefined8 ******)local_b48;
              ppppppuStack_f00 =
                   (undefined8 ******)
                   (*(code *)PTR_spread_bp_001f2098)(local_fc0,local_f70,local_f68);
              ppppppuStack_d10 =
                   (undefined8 ******)(*(code *)PTR_fee_bp_001f20a0)(local_fc0,local_f70,local_f68);
              local_d28 = (undefined8 *******)
                          (*(code *)PTR_contract_mult_001f20a8)(local_fc0,local_f70,local_f68);
              local_d38 = (int *)(*(code *)PTR_price_step_001f20b0)(local_fc0,local_f70,local_f68);
              local_ef8 = (undefined8 *******)
                          (*(code *)PTR_vol_step_001f20b8)(local_fc0,local_f70,local_f68);
              (*(code *)PTR_position_001f20c0)(local_fc0,local_f70,local_f68);
              local_f38 = extraout_XMM1_Qa;
              dStack_f30 = extraout_XMM1_Qb;
              dStack_ea0 = (double)(*(code *)PTR_position_holding_secs_001f20c8)
                                             (local_fc0,local_f70,local_f68);
              local_fb8 = (undefined8 ******)((double)local_fb8 / _DAT_001164f8);
              dStack_ea0 = dStack_ea0 + (double)local_fb8;
              uVar9 = (*(code *)PTR_is_should_lock_001f20d0)(local_fc0,local_f70,local_f68);
              local_b28 = (double)CONCAT71(local_b28._1_7_,uVar9);
              local_ca8 = local_c68;
              ppppppuStack_c90 = ppppppuStack_c50;
              if (local_fc1 != '\0') {
                pppppppuVar14 = &ppppppuStack_440;
                if ((char)local_878 != '\0') {
                  pppppppuVar14 = &local_870;
                }
                pppppppuStack_c60 = &local_438;
                if ((char)local_868 != '\0') {
                  pppppppuStack_c60 = &local_860;
                }
                pppppppuStack_c60 = (undefined8 *******)*pppppppuStack_c60;
                plVar20 = &lStack_430;
                if (local_858._0_1_ != '\0') {
                  plVar20 = &local_850;
                }
                local_c58 = (undefined8 *******)*plVar20;
                puVar21 = &local_428;
                if ((char)local_848 != '\0') {
                  puVar21 = &local_840;
                }
                local_ca8 = (undefined8 *******)*pppppppuVar14;
                ppppppuStack_c90 = (undefined8 ******)*puVar21;
              }
              lStack_bb0 = 0;
              uStack_bd0 = 0;
              uStack_bc0 = 0;
              uStack_be0 = 0;
              pppppppuStack_ca0 = pppppppuStack_c60;
              local_c98 = local_c58;
              local_be8 = ppppppuStack_c90;
              local_bd8 = pppppppuStack_c60;
              local_bc8 = local_c58;
              local_bb8 = local_ca8;
              strategy_comm4_1::signal_trigger::dynamic_threshold
                        (dStack_ea0,uStack_420,local_418,uStack_410,&ppppppuStack_68,&local_ca8);
              uStack_f9a = strategy_comm4_1::Comm4Params::signal_trigger_mode
                                     (pppppppuStack_548,local_540);
              (*(code *)PTR_clone_001f2020)
                        (&local_ee8,&local_f78,&PTR_s_strategies_comm_strategy_strateg_001ec0c0);
                    /* try { // try from 00152aa7 to 00152ac6 has its CatchHandler @ 00155713 */
              (*(code *)PTR_clone_001f2020)
                        (&local_e48,&local_b78,&PTR_s_strategies_comm_strategy_strateg_001ec0d8);
              local_e88 = local_ed8;
              local_e98 = local_ee8;
              pppppppuStack_e90 = pppppppuStack_ee0;
              pppppppuStack_e80 = local_e48;
              pppppppuStack_e78 = pppppppuStack_e40;
              pppppppuStack_e70 = pppppppuStack_e38;
                    /* try { // try from 00152b10 to 00153004 has its CatchHandler @ 00155761 */
              hashbrown::rustc_entry::_<impl_hashbrown::map::HashMap<K,V,S,A>>::rustc_entry
                        (&local_e48,piVar24 + 0x136,&local_e98);
              if (local_e48 == (undefined8 *******)0x8000000000000000) {
                local_ee8 = (undefined8 *******)0x8000000000000000;
              }
              else {
                pppppppuStack_eb8 = pppppppuStack_e18;
                pcStack_eb0 = pcStack_e10;
                local_ec8 = local_e28;
                pcStack_ec0 = local_e20;
                local_ed0 = ppppppuStack_e30;
                local_ee8 = local_e48;
              }
              local_ed8 = pppppppuStack_e38;
              pppppppuStack_ee0 = pppppppuStack_e40;
              local_e48 = (undefined8 *******)&uStack_f9a;
              pppppppuStack_e40 = &local_538;
              pppppppuStack_e38 = &ppppppuStack_68;
              lVar13 = std::collections::hash::map::Entry<K,V>::or_insert_with
                                 (&local_ee8,&local_e48);
              local_f98 = (undefined8 *******)((double)local_f98 + (double)local_fb8);
              strategy_comm4_1::signal_trigger::SignalTrigger::update_score
                        (local_f98,pppppppuStack_f40,0,0,lVar13,0);
              *(undefined8 *)(lVar13 + 0x50) = uStack_58;
              *(undefined8 *)(lVar13 + 0x58) = uStack_50;
              *(undefined8 *******)(lVar13 + 0x40) = ppppppuStack_68;
              *(undefined8 *)(lVar13 + 0x48) = uStack_60;
                    /* WARNING: Switch is manually overridden */
              switch(uStack_f9a) {
              case 0:
                if (cVar8 == '\0') {
                  strategy_comm4_1::signal_trigger::SignalTrigger::point_signal_trigger_pv1_spread
                            (uStack_4d0,ppppppuStack_f00,&local_e48,lVar13);
                  break;
                }
                if (cVar8 == '\x03') {
                  strategy_comm4_1::signal_trigger::SignalTrigger::point_signal_trigger_pv4
                            (uStack_4d0,ppppppuStack_d10,ppppppuStack_f00,&local_e48,lVar13);
                  break;
                }
                dVar29 = *(double *)(lVar13 + 0x38);
                piVar24 = local_cc8;
                if (*(double *)(lVar13 + 0x40) <= dVar29) {
                  cVar8 = '\0';
                }
                else {
                  cVar8 = '\x03';
                  if ((dVar29 < *(double *)(lVar13 + 0x58)) &&
                     (cVar8 = '\x02', *(double *)(lVar13 + 0x50) < dVar29)) {
                    cVar8 = (*(double *)(lVar13 + 0x48) < dVar29) * '\x03' + '\x01';
                  }
                }
                goto LAB_00152d9e;
              case 1:
                strategy_comm4_1::signal_trigger::SignalTrigger::windows_mean_trigger
                          (local_4c8,&local_e48,lVar13);
                break;
              case 2:
                strategy_comm4_1::signal_trigger::SignalTrigger::windows_std_trigger
                          (local_4c8,&local_e48,lVar13);
                break;
              case 3:
                strategy_comm4_1::signal_trigger::SignalTrigger::windows_quantile_trigger
                          (uStack_4c0,local_4c8,&local_e48,lVar13);
                break;
              case 4:
                strategy_comm4_1::signal_trigger::SignalTrigger::windows_sharpe_trigger
                          (local_4c8,&local_e48,lVar13);
                break;
              case 5:
                strategy_comm4_1::signal_trigger::SignalTrigger::windows_rsi_trigger
                          (local_4c8,&local_e48,lVar13);
              }
              cVar8 = (char)local_e48;
              pppppppuVar14 = pppppppuStack_e40;
              if ((char)local_e48 != '\x05') {
LAB_00152d9e:
                cStack_f99 = cVar8;
                puVar25 = PTR_fmt_001f20d8;
                pppppppuStack_e40 =
                     (undefined8 *******)_<alloc::string::String_as_core::fmt::Display>::fmt;
                pppppppuStack_e38 = &pppppppuStack_f40;
                ppppppuStack_e30 = (undefined8 ******)PTR_fmt_001f20d8;
                local_e28 = &ppppppuStack_f00;
                local_e20 = (code *)PTR_fmt_001f20d8;
                pppppppuStack_e18 = &local_e60;
                pcStack_e10 = (code *)PTR_fmt_001f20d8;
                pdStack_e08 = (double *)&local_fc1;
                puStack_e00 = PTR_fmt_001f20e0;
                ppppppuStack_df8 = (undefined8 ******)&cStack_f99;
                pcStack_df0 = _<core::option::Option<T>as_core::fmt::Debug>::fmt;
                local_ee8 = (undefined8 *******)&UNK_001ec0f0;
                pppppppuStack_ee0 = (undefined8 *******)0x6;
                local_ec8 = (undefined8 *******)&UNK_001191b8;
                pcStack_ec0 = (code *)0x6;
                local_ed8 = &local_e48;
                local_ed0 = (undefined8 ******)0x6;
                local_e48 = &local_f78;
                (*(code *)PTR_format_inner_001f2008)(auStack_48,&local_ee8);
                future_backtest_sdk::context::StrategyContext::log_debug(local_fc0,auStack_48);
                uVar9 = (*(code *)PTR_margin_filter_001f20e8)(local_fc0,cStack_f99);
                pppppppuVar14 =
                     (undefined8 *******)
                     (*(code *)PTR_cancel_by_pending_ts_001f20f0)(local_3f0,local_fc0,1);
                if (pppppppuVar14 == (undefined8 *******)0x0) {
                  bVar10 = (*(code *)PTR_impact_block_check_001f20f8)
                                     (local_f98,local_f28,local_f88,local_fc0,uVar9);
                  if (((char)local_f58 == '\x01' && (byte)local_f18 == '\x01') &&
                     ((bVar10 & 5) == 0)) {
                    bVar10 = 4;
                  }
                  plVar20 = &local_b78;
                  if (local_b50 != 0) {
                    plVar20 = local_b58;
                  }
                  puVar22 = &UNK_001ec168;
                  if (local_b50 == 0) {
                    puVar22 = &UNK_001ec150;
                  }
                  (*(code *)PTR_clone_001f2020)(&local_ce8,plVar20,puVar22);
                  local_f98 = local_4b8;
                  uStack_f90 = 0;
                  local_fb8 = ppppppuStack_c10;
                  uStack_fb0 = 0;
                  local_bf8 = dStack_c08;
                  uStack_bf0 = 0;
                  bVar28 = (char)local_f58 == '\x02';
                  local_c78 = *(long *)(lVar13 + 0x40);
                  local_c80 = *(undefined8 *)(lVar13 + 0x48);
                  local_f58 = *(undefined8 ********)(lVar13 + 0x50);
                  local_c88 = *(undefined8 *)(lVar13 + 0x58);
                  if ((bVar10 != 4) && (local_3a7 != '\0')) {
                    /* try { // try from 00153097 to 0015334a has its CatchHandler @ 00155649 */
                    lVar13 = hashbrown::map::HashMap<K,V,S,A>::get_inner(piVar24 + 0x142,&local_f78)
                    ;
                    if (lVar13 != 0) {
                      if (((double)local_478 <= 0.0) ||
                         (((double)local_f48 - *(double *)(lVar13 + 0x28)) * _DAT_001164f8 <
                          (double)local_478)) goto override_jmp_0015311f_case_4;
                      hashbrown::map::HashMap<K,V,S,A>::remove
                                (&local_e48,piVar24 + 0x142,&local_f78);
                    }
                  }
                  bVar19 = bVar28 & (byte)local_f18;
                    /* WARNING: Switch is manually overridden */
                  switch(bVar10) {
                  case 0:
                    if ((_DAT_00116508 <= (double)local_f38) ||
                       (dStack_480 / _DAT_001164f8 <= dStack_ea0)) {
                      pppppppuVar31 = (undefined8 *******)0x0;
                      pppppppuVar14 = local_f38;
                      if ((double)local_f38 <= 0.0) {
                        pppppppuVar14 = pppppppuVar31;
                      }
                      dVar32 = (double)(~-(ulong)((double)local_c48 < 0.0) & (ulong)local_c48 |
                                       -(ulong)((double)local_c48 < 0.0) & _DAT_001163c0) -
                               (double)pppppppuVar14;
                      dVar35 = ((double)(~-(ulong)(dStack_c40 < 0.0) & (ulong)dStack_c40 |
                                        -(ulong)(dStack_c40 < 0.0) & _DAT_001163c0) /
                               (double)local_d28) / (double)local_f88 - (double)pppppppuVar14;
                      dVar29 = dVar35;
                      if (dVar32 <= dVar35) {
                        dVar29 = dVar32;
                      }
                      pppppppuVar33 =
                           (undefined8 *******)
                           (~-(ulong)NAN(dVar32) & (ulong)dVar29 |
                           -(ulong)NAN(dVar32) & (ulong)dVar35);
                      pppppppuVar34 =
                           (undefined8 *******)
                           (~-(ulong)(dStack_c38 < 0.0) & (ulong)dStack_c38 |
                           -(ulong)(dStack_c38 < 0.0) & _DAT_001163c0);
                      pppppppuVar14 =
                           (undefined8 *******)
                           (((double)(~-(ulong)(dStack_c30 < 0.0) & (ulong)dStack_c30 |
                                     -(ulong)(dStack_c30 < 0.0) & _DAT_001163c0) / (double)local_d28
                            ) / (double)local_f88);
                      if ((double)pppppppuVar14 <= (double)DAT_00116418) {
                        pppppppuVar14 = DAT_00116418;
                      }
                      if ((double)pppppppuVar14 <= (double)pppppppuVar34) {
                        pppppppuVar34 = pppppppuVar14;
                      }
                      pppppppuVar30 =
                           (undefined8 *******)
                           (~-(ulong)(dStack_450 < 0.0) & (ulong)dStack_450 |
                           -(ulong)(dStack_450 < 0.0) & _DAT_001163c0);
                      pppppppuVar14 =
                           (undefined8 *******)
                           (((double)(~-(ulong)(local_448 < 0.0) & (ulong)local_448 |
                                     _DAT_001163c0 & -(ulong)(local_448 < 0.0)) / (double)local_d28)
                           / (double)local_f88);
                      if ((double)pppppppuVar14 <= (double)DAT_00116418) {
                        pppppppuVar14 = DAT_00116418;
                      }
                      if ((double)pppppppuVar14 <= (double)pppppppuVar30) {
                        pppppppuVar30 = pppppppuVar14;
                      }
                      pppppppuVar14 = local_f38;
                      if (0.0 <= (double)local_f38) {
                        pppppppuVar14 = pppppppuVar31;
                      }
                      if ((double)pppppppuVar34 <= (double)pppppppuVar33) {
                        pppppppuVar33 = pppppppuVar34;
                      }
                      if ((double)((ulong)pppppppuVar14 ^ _s__001161f0) <= (double)pppppppuVar30) {
                        pppppppuVar30 = (undefined8 *******)((ulong)pppppppuVar14 ^ _s__001161f0);
                      }
                      pppppppuVar14 =
                           (undefined8 *******)((double)pppppppuVar30 + (double)pppppppuVar33);
                      if ((double)pppppppuVar30 + (double)pppppppuVar33 <= 0.0) {
                        pppppppuVar14 = pppppppuVar31;
                      }
                      local_f58 = (undefined8 *******)
                                  (*(code *)PTR_round_with_step_f64_001f2100)
                                            (pppppppuVar14,local_ef8,1);
                      if (bVar19 == 0) {
                        pppppppuVar14 =
                             (undefined8 *******)(*(code *)PTR_cancel_all_001f2108)(local_fc0);
                        if (pppppppuVar14 == (undefined8 *******)0x0) {
                          if ((cStack_bff == '\0') || (local_fc1 != '\0')) {
                            if ((DAT_00116400 < (double)((ulong)local_f98 & _DAT_00115b60)) &&
                               (DAT_00116400 < (double)(_DAT_00115b60 & (ulong)local_bb8))) {
                              dVar29 = (double)((ulong)((double)pppppppuStack_f40 /
                                                       (double)local_bb8) & _DAT_00115b60) +
                                       _s__001163a0;
                              if (dVar29 <= 0.0) {
                                dVar29 = 0.0;
                              }
                              dVar32 = (double)local_fb8 + (double)local_f98 * dVar29;
                              dVar29 = local_bf8;
                              if (dVar32 <= local_bf8) {
                                dVar29 = dVar32;
                              }
                              local_fb8 = (undefined8 ******)
                                          (-(ulong)NAN(dVar32) & (ulong)local_bf8 |
                                          ~-(ulong)NAN(dVar32) & (ulong)dVar29);
                              uStack_fb0 = uStack_bf0;
                            }
                          }
                          else {
                            local_fb8 = (undefined8 ******)
                                        strategy_comm4_1::high_taker_rate
                                                  (pppppppuStack_f40,local_bb8,ppppppuStack_f00,
                                                   local_f88,local_f28,uStack_c28,uStack_c20,
                                                   uStack_c18);
                            uStack_fb0 = extraout_XMM0_Qb_01;
                          }
                          local_fb8 = (undefined8 ******)
                                      (*(code *)PTR_round_with_step_f64_001f2100)
                                                (((double)local_fb8 + (double)DAT_00116418) *
                                                 (double)local_f88,local_d38,1);
                          pppppppuVar31 =
                               (undefined8 *******)
                               strategy_comm4_1::taker_fillable_cum(local_fb8,local_3a0,1);
                          pppppppuVar14 = pppppppuVar31;
                          if ((double)local_f58 <= (double)pppppppuVar31) {
                            pppppppuVar14 = local_f58;
                          }
                          local_f98 = (undefined8 *******)
                                      (*(code *)PTR_round_with_step_f64_001f2100)
                                                (~-(ulong)NAN((double)local_f58) &
                                                 (ulong)pppppppuVar14 |
                                                 -(ulong)NAN((double)local_f58) &
                                                 (ulong)pppppppuVar31,local_ef8,1);
                          local_f58 = _s__00116498;
                          uStack_f90 = extraout_XMM0_Qb_02;
                          goto LAB_001543be;
                        }
                      }
                      else {
                        dVar35 = local_3e0 * (double)local_d38 + (double)local_f28;
                        dVar32 = (double)local_f88 - (double)local_d38;
                        dVar29 = dVar32;
                        if (dVar35 <= dVar32) {
                          dVar29 = dVar35;
                        }
                        local_fb8 = (undefined8 ******)
                                    (*(code *)PTR_round_with_step_f64_001f2100)
                                              (~-(ulong)NAN(dVar35) & (ulong)dVar29 |
                                               -(ulong)NAN(dVar35) & (ulong)dVar32,1);
                        local_f18 = local_308;
                        local_e48 = (undefined8 *******)0x0;
                        pppppppuStack_e40 = (undefined8 *******)&DAT_00000008;
                        pppppppuStack_e38 = (undefined8 *******)0x0;
                    /* try { // try from 001533b0 to 001533fc has its CatchHandler @ 00155632 */
                        pppppppuVar14 =
                             (undefined8 *******)
                             strategy_comm4_1::cancel_order_use_range
                                       (local_fb8,local_fc0,local_f70,local_f68,1,&local_e48);
                        if (pppppppuVar14 == (undefined8 *******)0x0) {
                          lVar13 = strategy_comm4_1::live_pending_counts
                                             (local_fc0,local_f70,local_f68,pppppppuStack_e40,
                                              pppppppuStack_e38);
                          local_f98 = (undefined8 *******)0x0;
                          uStack_f90 = 0;
                          if (lVar13 == 0) {
                            pppppppuVar14 = (undefined8 *******)0x0;
                            dVar29 = (double)(-(ulong)(0.0 < (double)local_f18) &
                                             (ulong)DAT_00116418);
                            if (0.0 < (double)local_f18) {
                              dStack_300 = dStack_300 + 0.0;
                            }
                            else {
                              dStack_300 = 0.0;
                            }
                            dVar29 = (double)(-(ulong)(0.0 < dStack_2f8) &
                                              (ulong)(dVar29 + (double)DAT_00116418) |
                                             ~-(ulong)(0.0 < dStack_2f8) & (ulong)dVar29);
                            if (0.0 < dStack_2f8) {
                              dStack_300 = dStack_300 + dStack_2f0;
                            }
                            dVar29 = (double)(-(ulong)(0.0 < dStack_2e8) &
                                              (ulong)(dVar29 + (double)DAT_00116418) |
                                             ~-(ulong)(0.0 < dStack_2e8) & (ulong)dVar29);
                            if (0.0 < dStack_2e8) {
                              dStack_300 = dStack_300 + dStack_2e0;
                            }
                            if (0.0 < dVar29) {
                              pppppppuVar14 = (undefined8 *******)(dStack_300 / dVar29);
                            }
                            if (0.0 < (double)pppppppuStack_3e8) {
                              pppppppuVar31 = pppppppuStack_3e8;
                              if ((double)pppppppuVar14 <= (double)pppppppuStack_3e8) {
                                pppppppuVar31 = pppppppuVar14;
                              }
                              pppppppuVar14 =
                                   (undefined8 *******)
                                   (~-(ulong)NAN((double)pppppppuVar14) & (ulong)pppppppuVar31 |
                                   -(ulong)NAN((double)pppppppuVar14) & (ulong)pppppppuStack_3e8);
                            }
                            pppppppuVar31 = pppppppuVar14;
                            if ((double)local_f58 <= (double)pppppppuVar14) {
                              pppppppuVar31 = local_f58;
                            }
                    /* try { // try from 00154385 to 0015439e has its CatchHandler @ 00155632 */
                            local_f98 = (undefined8 *******)
                                        (*(code *)PTR_round_with_step_f64_001f2100)
                                                  (~-(ulong)NAN((double)local_f58) &
                                                   (ulong)pppppppuVar31 |
                                                   -(ulong)NAN((double)local_f58) &
                                                   (ulong)pppppppuVar14,local_ef8,1);
                            uStack_f90 = extraout_XMM0_Qb_03;
                          }
                          local_f58 = local_3f0;
                          core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>
                                    (&local_e48);
LAB_001543be:
                          if ((double)(_DAT_00115b60 & (ulong)local_f98) <= DAT_00116400) {
override_jmp_0015311f_case_4:
                            if (local_ce8 != (undefined8 *******)0x0) {
                              (*(code *)PTR___rust_dealloc_001f1ee8)(pppppppuStack_ce0,local_ce8,1);
                            }
                            if (local_d08 != (undefined8 *******)0x0) {
                              (*(code *)PTR___rust_dealloc_001f1ee8)(pppppppuStack_d00,local_d08,1);
                            }
                            if (local_380 != 0) {
                              (*(code *)PTR___rust_dealloc_001f1ee8)(local_378,local_380,1);
                            }
                            if (local_b78 != 0) {
                              (*(code *)PTR___rust_dealloc_001f1ee8)(local_b70,local_b78,1);
                            }
                            if (local_f78 != (undefined8 ******)0x0) {
                              (*(code *)PTR___rust_dealloc_001f1ee8)(local_f70,local_f78,1);
                            }
                            core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>
                                      (&local_b90);
                            core::ptr::drop_in_place<strategy_comm4_1::Comm4Params>(&local_878);
                            core::ptr::drop_in_place<future_backtest_sdk::types::StrategyPara>
                                      (&local_b60);
                            return (undefined8 *******)0x0;
                          }
                          local_f38 = pppppppuStack_f40;
                          local_f18 = local_488;
                          local_e58 = (undefined8 ******)0x1192d8;
                          if (local_fc1 != '\0') {
                            local_e58 = (undefined8 ******)0x1192d9;
                          }
                          uStack_e50 = 1;
                          local_e98 = (undefined8 *******)0x1192da;
                          if (bVar19 != 0) {
                            local_e98 = (undefined8 *******)0x1192db;
                          }
                          pppppppuStack_e90 = (undefined8 *******)0x1;
                          local_e48 = &ppppppuStack_f00;
                          pppppppuStack_e40 = (undefined8 *******)puVar25;
                          pppppppuStack_e38 = &ppppppuStack_d10;
                          ppppppuStack_e30 = (undefined8 ******)puVar25;
                          local_e28 = &local_e60;
                          local_e20 = (code *)puVar25;
                          pppppppuStack_e18 = &local_ce8;
                          pcStack_e10 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                          pdStack_e08 = &dStack_ea0;
                          puStack_e00 = puVar25;
                          ppppppuStack_df8 = &local_e58;
                          pcStack_df0 = _<&T_as_core::fmt::Display>::fmt;
                          pppppppuStack_de8 = &local_e98;
                          pcStack_de0 = _<&T_as_core::fmt::Display>::fmt;
                          pppppppuStack_dd8 = &local_d08;
                          pcStack_dd0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                          local_ee8 = (undefined8 *******)&DAT_001ec180;
                          pppppppuStack_ee0 = (undefined8 *******)&DAT_00000008;
                          local_ec8 = (undefined8 *******)0x0;
                          local_ed8 = &local_e48;
                          local_ed0 = (undefined8 ******)&DAT_00000008;
                    /* try { // try from 00154563 to 001546b2 has its CatchHandler @ 00155649 */
                          (*(code *)PTR_format_inner_001f2008)(&uStack_f8,&local_ee8);
                          uStack_150 = 0x700;
                          ppppppuStack_180 = local_fb8;
                          pppppppuStack_178 = local_f98;
                          pppppppuStack_170 = local_f88;
                          pppppppuStack_168 = local_f38;
                          lStack_160 = local_c78;
                          pppppppuStack_158 = local_f18;
                          uStack_198 = uStack_f8;
                          uStack_190 = uStack_f0;
                          uStack_188 = uStack_e8;
                          pppppppuVar14 =
                               (undefined8 *******)
                               strategy_comm4_1::place(local_f58,local_fc0,&uStack_198);
                          if (pppppppuVar14 == (undefined8 *******)0x0) {
                            if (local_3a7 == '\x01') {
                              (*(code *)PTR_clone_001f2020)
                                        (&local_e98,&local_f78,
                                         &PTR_s_strategies_comm_strategy_strateg_001ec200);
                              local_ee8 = local_f28;
                              pppppppuStack_ee0 = local_f88;
                              local_ed8 = local_f48;
                              hashbrown::map::HashMap<K,V,S,A>::insert
                                        (&local_e48,local_cc8 + 0x142,&local_e98,&local_ee8);
                            }
                            goto override_jmp_0015311f_case_4;
                          }
                        }
                        else {
LAB_00153be6:
                          core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>
                                    (&local_e48);
                        }
                      }
                    }
                    else {
LAB_0015393f:
                      pppppppuVar14 = (undefined8 *******)0x0;
                    }
                    break;
                  case 1:
                    if ((DAT_00116400 < (double)local_f38) &&
                       (dStack_ea0 < dStack_480 / _DAT_001164f8)) goto LAB_0015393f;
                    if ((double)local_f38 <= 0.0) goto override_jmp_0015311f_case_4;
                    uVar16 = -(ulong)(dStack_450 < (double)((ulong)dStack_450 ^ _s__001161f0));
                    dVar35 = (double)(uVar16 & _DAT_001163c8 |
                                     ~uVar16 & ((ulong)dStack_450 ^ _s__001161f0));
                    uVar16 = -(ulong)(local_448 < (double)((ulong)local_448 ^ _s__001161f0));
                    dVar32 = ((double)(uVar16 & _DAT_001163c8 |
                                      ~uVar16 & ((ulong)local_448 ^ _s__001161f0)) /
                             (double)local_d28) / (double)local_f28;
                    dVar29 = dVar32;
                    if (dVar32 <= dVar35) {
                      dVar29 = dVar35;
                    }
                    dVar29 = (double)(~-(ulong)NAN(dVar35) & (ulong)dVar29 |
                                     -(ulong)NAN(dVar35) & (ulong)dVar32);
                    pppppppuVar14 = local_f38;
                    if ((double)local_f38 <= 0.0) {
                      pppppppuVar14 = (undefined8 *******)0x0;
                    }
                    if (dVar29 <= (double)((ulong)pppppppuVar14 ^ _s__001161f0)) {
                      dVar29 = (double)((ulong)pppppppuVar14 ^ _s__001161f0);
                    }
                    /* try { // try from 0015377e to 00153815 has its CatchHandler @ 00155649 */
                    local_f58 = (undefined8 *******)
                                (*(code *)PTR_round_with_step_f64_001f2100)(dVar29,local_ef8,1);
                    local_f18 = (undefined8 *******)
                                CONCAT71(local_f18._1_7_,local_b28._0_1_ != '\0');
                    if (bVar19 == 0) {
                      pppppppuVar14 =
                           (undefined8 *******)(*(code *)PTR_cancel_all_001f2108)(local_fc0);
                      if (pppppppuVar14 != (undefined8 *******)0x0) break;
                      if ((cStack_bff == '\0') || (local_fc1 != '\0')) {
                        if ((DAT_00116400 < (double)((ulong)local_f98 & _DAT_00115b60)) &&
                           (DAT_00116400 < (double)(_DAT_00115b60 & (ulong)local_bd8))) {
                          dVar29 = (double)((ulong)((double)pppppppuStack_f40 / (double)local_bd8) &
                                           _DAT_00115b60) + _s__001163a0;
                          if (dVar29 <= 0.0) {
                            dVar29 = 0.0;
                          }
                          dVar32 = (double)local_fb8 + (double)local_f98 * dVar29;
                          dVar29 = local_bf8;
                          if (dVar32 <= local_bf8) {
                            dVar29 = dVar32;
                          }
                          local_fb8 = (undefined8 ******)
                                      (-(ulong)NAN(dVar32) & (ulong)local_bf8 |
                                      ~-(ulong)NAN(dVar32) & (ulong)dVar29);
                          uStack_fb0 = uStack_bf0;
                        }
                      }
                      else {
                        local_fb8 = (undefined8 ******)
                                    strategy_comm4_1::high_taker_rate
                                              (pppppppuStack_f40,local_bd8,ppppppuStack_f00,
                                               local_f88,local_f28,uStack_c28,uStack_c20,uStack_c18)
                        ;
                        uStack_fb0 = extraout_XMM0_Qb_07;
                      }
                      local_fb8 = (undefined8 ******)
                                  (*(code *)PTR_round_with_step_f64_001f2100)
                                            (((double)DAT_00116418 - (double)local_fb8) *
                                             (double)local_f28,local_d38,1);
                      uVar16 = strategy_comm4_1::taker_fillable_cum(local_fb8,local_3a0,0);
                      pppppppuVar31 = (undefined8 *******)(uVar16 ^ _s__001161f0);
                      pppppppuVar14 = pppppppuVar31;
                      if ((double)pppppppuVar31 <= (double)local_f58) {
                        pppppppuVar14 = local_f58;
                      }
                      local_f98 = (undefined8 *******)
                                  (*(code *)PTR_round_with_step_f64_001f2100)
                                            (~-(ulong)NAN((double)local_f58) & (ulong)pppppppuVar14
                                             | -(ulong)NAN((double)local_f58) & (ulong)pppppppuVar31
                                             ,local_ef8,1);
                      local_f58 = _s__00116498;
                      uStack_f90 = extraout_XMM0_Qb_08;
                    }
                    else {
                      dVar35 = (double)local_f88 - local_3e0 * (double)local_d38;
                      dVar32 = (double)local_d38 + (double)local_f28;
                      dVar29 = dVar32;
                      if (dVar32 <= dVar35) {
                        dVar29 = dVar35;
                      }
                      local_fb8 = (undefined8 ******)
                                  (*(code *)PTR_round_with_step_f64_001f2100)
                                            (~-(ulong)NAN(dVar35) & (ulong)dVar29 |
                                             -(ulong)NAN(dVar35) & (ulong)dVar32,1);
                      local_f38 = local_358;
                      local_e48 = (undefined8 *******)0x0;
                      pppppppuStack_e40 = (undefined8 *******)&DAT_00000008;
                      pppppppuStack_e38 = (undefined8 *******)0x0;
                    /* try { // try from 0015387e to 001538c7 has its CatchHandler @ 0015562c */
                      pppppppuVar14 =
                           (undefined8 *******)
                           strategy_comm4_1::cancel_order_use_range
                                     (local_fb8,local_fc0,local_f70,local_f68,0,&local_e48);
                      if (pppppppuVar14 != (undefined8 *******)0x0) goto LAB_00153be6;
                      strategy_comm4_1::live_pending_counts
                                (local_fc0,local_f70,local_f68,pppppppuStack_e40,pppppppuStack_e38);
                      local_f98 = (undefined8 *******)0x0;
                      uStack_f90 = 0;
                      if (extraout_RDX == 0) {
                        pppppppuVar14 = (undefined8 *******)0x0;
                        dVar29 = (double)(-(ulong)(0.0 < (double)local_f38) & (ulong)DAT_00116418);
                        if (0.0 < (double)local_f38) {
                          dStack_350 = dStack_350 + 0.0;
                        }
                        else {
                          dStack_350 = 0.0;
                        }
                        dVar29 = (double)(-(ulong)(0.0 < dStack_348) &
                                          (ulong)(dVar29 + (double)DAT_00116418) |
                                         ~-(ulong)(0.0 < dStack_348) & (ulong)dVar29);
                        if (0.0 < dStack_348) {
                          dStack_350 = dStack_350 + dStack_340;
                        }
                        dVar29 = (double)(-(ulong)(0.0 < dStack_338) &
                                          (ulong)(dVar29 + (double)DAT_00116418) |
                                         ~-(ulong)(0.0 < dStack_338) & (ulong)dVar29);
                        if (0.0 < dStack_338) {
                          dStack_350 = dStack_350 + dStack_330;
                        }
                        if (0.0 < dVar29) {
                          pppppppuVar14 = (undefined8 *******)(dStack_350 / dVar29);
                        }
                        if (0.0 < (double)pppppppuStack_3e8) {
                          pppppppuVar31 = pppppppuStack_3e8;
                          if ((double)pppppppuVar14 <= (double)pppppppuStack_3e8) {
                            pppppppuVar31 = pppppppuVar14;
                          }
                          pppppppuVar14 =
                               (undefined8 *******)
                               (~-(ulong)NAN((double)pppppppuVar14) & (ulong)pppppppuVar31 |
                               -(ulong)NAN((double)pppppppuVar14) & (ulong)pppppppuStack_3e8);
                        }
                        pppppppuVar14 = (undefined8 *******)((ulong)pppppppuVar14 ^ _s__001161f0);
                        pppppppuVar31 = pppppppuVar14;
                        if ((double)pppppppuVar14 <= (double)local_f58) {
                          pppppppuVar31 = local_f58;
                        }
                    /* try { // try from 001551ed to 00155206 has its CatchHandler @ 0015562c */
                        local_f98 = (undefined8 *******)
                                    (*(code *)PTR_round_with_step_f64_001f2100)
                                              (~-(ulong)NAN((double)local_f58) &
                                               (ulong)pppppppuVar31 |
                                               -(ulong)NAN((double)local_f58) & (ulong)pppppppuVar14
                                               ,local_ef8,1);
                        uStack_f90 = extraout_XMM0_Qb_10;
                      }
                      local_f58 = local_3f0;
                      core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&local_e48);
                    }
                    if ((double)(_DAT_00115b60 & (ulong)local_f98) <= DAT_00116400)
                    goto override_jmp_0015311f_case_4;
                    local_ef8 = pppppppuStack_f40;
                    local_f38 = local_488;
                    local_e58 = (undefined8 ******)0x1192d8;
                    if (local_fc1 != '\0') {
                      local_e58 = (undefined8 ******)0x1192d9;
                    }
                    uStack_e50 = 1;
                    local_e98 = (undefined8 *******)0x1192da;
                    if (bVar19 != 0) {
                      local_e98 = (undefined8 *******)0x1192db;
                    }
                    pppppppuStack_e90 = (undefined8 *******)0x1;
                    local_e48 = &ppppppuStack_f00;
                    pppppppuStack_e40 = (undefined8 *******)puVar25;
                    pppppppuStack_e38 = &ppppppuStack_d10;
                    ppppppuStack_e30 = (undefined8 ******)puVar25;
                    local_e28 = &local_e60;
                    local_e20 = (code *)puVar25;
                    pppppppuStack_e18 = &local_ce8;
                    pcStack_e10 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                    pdStack_e08 = &dStack_ea0;
                    puStack_e00 = puVar25;
                    ppppppuStack_df8 = &local_e58;
                    pcStack_df0 = _<&T_as_core::fmt::Display>::fmt;
                    pppppppuStack_de8 = &local_e98;
                    pcStack_de0 = _<&T_as_core::fmt::Display>::fmt;
                    pppppppuStack_dd8 = &local_d08;
                    pcStack_dd0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                    local_ee8 = (undefined8 *******)&DAT_001ec180;
                    pppppppuStack_ee0 = (undefined8 *******)&DAT_00000008;
                    local_ec8 = (undefined8 *******)0x0;
                    local_ed8 = &local_e48;
                    local_ed0 = (undefined8 ******)&DAT_00000008;
                    /* try { // try from 001553cb to 00155563 has its CatchHandler @ 00155649 */
                    (*(code *)PTR_format_inner_001f2008)(&uStack_c8,&local_ee8);
                    cStack_24f = (byte)local_f18 * '\x03' + '\x05';
                    uStack_250 = 1;
                    ppppppuStack_280 = local_fb8;
                    pppppppuStack_278 = local_f98;
                    pppppppuStack_270 = local_f28;
                    pppppppuStack_268 = local_ef8;
                    uStack_260 = local_c80;
                    pppppppuStack_258 = local_f38;
                    uStack_298 = uStack_c8;
                    uStack_290 = uStack_c0;
                    uStack_288 = uStack_b8;
                    pppppppuVar14 =
                         (undefined8 *******)
                         strategy_comm4_1::place(local_f58,local_fc0,&uStack_298);
                    if (pppppppuVar14 == (undefined8 *******)0x0) {
                      if (local_3a7 == '\x01') {
                        (*(code *)PTR_clone_001f2020)
                                  (&local_e98,&local_f78,
                                   &PTR_s_strategies_comm_strategy_strateg_001ec218);
                        local_ee8 = local_f28;
                        pppppppuStack_ee0 = local_f88;
                        local_ed8 = local_f48;
                        hashbrown::map::HashMap<K,V,S,A>::insert
                                  (&local_e48,local_cc8 + 0x142,&local_e98,&local_ee8);
                      }
                      goto override_jmp_0015311f_case_4;
                    }
                    break;
                  case 2:
                    if ((DAT_00116400 < (double)local_f38) &&
                       (dStack_ea0 < dStack_480 / _DAT_001164f8)) goto LAB_0015393f;
                    uVar16 = -(ulong)((double)local_c48 < (double)((ulong)local_c48 ^ _s__001161f0))
                    ;
                    pppppppuVar14 = local_f38;
                    if (0.0 <= (double)local_f38) {
                      pppppppuVar14 = (undefined8 *******)0x0;
                    }
                    dVar35 = (double)(uVar16 & _DAT_001163c8 |
                                     ~uVar16 & ((ulong)local_c48 ^ _s__001161f0)) -
                             (double)pppppppuVar14;
                    uVar16 = -(ulong)(dStack_c40 < (double)((ulong)dStack_c40 ^ _s__001161f0));
                    dVar32 = ((double)(uVar16 & _DAT_001163c8 |
                                      ~uVar16 & ((ulong)dStack_c40 ^ _s__001161f0)) /
                             (double)local_d28) / (double)local_f28 - (double)pppppppuVar14;
                    dVar29 = dVar32;
                    if (dVar32 <= dVar35) {
                      dVar29 = dVar35;
                    }
                    dVar29 = (double)(~-(ulong)NAN(dVar35) & (ulong)dVar29 |
                                     -(ulong)NAN(dVar35) & (ulong)dVar32);
                    pppppppuVar31 =
                         (undefined8 *******)
                         (~-(ulong)(dStack_c38 < 0.0) & (ulong)dStack_c38 |
                         -(ulong)(dStack_c38 < 0.0) & _DAT_001163c0);
                    pppppppuVar14 =
                         (undefined8 *******)
                         (((double)(~-(ulong)(dStack_c30 < 0.0) & (ulong)dStack_c30 |
                                   -(ulong)(dStack_c30 < 0.0) & _DAT_001163c0) / (double)local_d28)
                         / (double)local_f28);
                    if ((double)pppppppuVar14 <= (double)DAT_00116418) {
                      pppppppuVar14 = DAT_00116418;
                    }
                    if ((double)pppppppuVar14 <= (double)pppppppuVar31) {
                      pppppppuVar31 = pppppppuVar14;
                    }
                    pppppppuVar34 =
                         (undefined8 *******)
                         (~-(ulong)(dStack_450 < 0.0) & (ulong)dStack_450 |
                         -(ulong)(dStack_450 < 0.0) & _DAT_001163c0);
                    pppppppuVar14 =
                         (undefined8 *******)
                         (((double)(~-(ulong)(local_448 < 0.0) & (ulong)local_448 |
                                   _DAT_001163c0 & -(ulong)(local_448 < 0.0)) / (double)local_d28) /
                         (double)local_f28);
                    if ((double)pppppppuVar14 <= (double)DAT_00116418) {
                      pppppppuVar14 = DAT_00116418;
                    }
                    if ((double)pppppppuVar14 <= (double)pppppppuVar34) {
                      pppppppuVar34 = pppppppuVar14;
                    }
                    if (dVar29 <= (double)((ulong)pppppppuVar31 ^ _s__001161f0)) {
                      dVar29 = (double)((ulong)pppppppuVar31 ^ _s__001161f0);
                    }
                    pppppppuVar14 = local_f38;
                    if ((double)local_f38 <= 0.0) {
                      pppppppuVar14 = (undefined8 *******)0x0;
                    }
                    if ((double)pppppppuVar14 <= (double)pppppppuVar34) {
                      pppppppuVar34 = pppppppuVar14;
                    }
                    dVar29 = dVar29 - (double)pppppppuVar34;
                    if (0.0 <= dVar29) {
                      dVar29 = 0.0;
                    }
                    /* try { // try from 00153ad2 to 00153b57 has its CatchHandler @ 00155649 */
                    local_f18 = (undefined8 *******)
                                (*(code *)PTR_round_with_step_f64_001f2100)(dVar29,local_ef8,1);
                    if (bVar19 == 0) {
                    /* try { // try from 00153bf8 to 00153e78 has its CatchHandler @ 00155649 */
                      pppppppuVar14 =
                           (undefined8 *******)(*(code *)PTR_cancel_all_001f2108)(local_fc0);
                      if (pppppppuVar14 != (undefined8 *******)0x0) break;
                      if ((cStack_bff == '\0') || (local_fc1 != '\0')) {
                        if ((DAT_00116400 < (double)((ulong)local_f98 & _DAT_00115b60)) &&
                           (DAT_00116400 < (double)(_DAT_00115b60 & (ulong)local_bc8))) {
                          dVar29 = (double)((ulong)((double)pppppppuStack_f40 / (double)local_bc8) &
                                           _DAT_00115b60) + _s__001163a0;
                          if (dVar29 <= 0.0) {
                            dVar29 = 0.0;
                          }
                          dVar32 = (double)local_fb8 + (double)local_f98 * dVar29;
                          dVar29 = local_bf8;
                          if (dVar32 <= local_bf8) {
                            dVar29 = dVar32;
                          }
                          local_fb8 = (undefined8 ******)
                                      (-(ulong)NAN(dVar32) & (ulong)local_bf8 |
                                      ~-(ulong)NAN(dVar32) & (ulong)dVar29);
                          uStack_fb0 = uStack_bf0;
                        }
                      }
                      else {
                        local_fb8 = (undefined8 ******)
                                    strategy_comm4_1::high_taker_rate
                                              (pppppppuStack_f40,local_bc8,ppppppuStack_f00,
                                               local_f88,local_f28,uStack_c28,uStack_c20,uStack_c18)
                        ;
                        uStack_fb0 = extraout_XMM0_Qb;
                      }
                    /* try { // try from 0015401d to 00154191 has its CatchHandler @ 00155649 */
                      local_fb8 = (undefined8 ******)
                                  (*(code *)PTR_round_with_step_f64_001f2100)
                                            (((double)DAT_00116418 - (double)local_fb8) *
                                             (double)local_f28,local_d38,1);
                      uVar16 = strategy_comm4_1::taker_fillable_cum(local_fb8,local_3a0,0);
                      pppppppuVar31 = (undefined8 *******)(uVar16 ^ _s__001161f0);
                      pppppppuVar14 = pppppppuVar31;
                      if ((double)pppppppuVar31 <= (double)local_f18) {
                        pppppppuVar14 = local_f18;
                      }
                      local_f98 = (undefined8 *******)
                                  (*(code *)PTR_round_with_step_f64_001f2100)
                                            (~-(ulong)NAN((double)local_f18) & (ulong)pppppppuVar14
                                             | -(ulong)NAN((double)local_f18) & (ulong)pppppppuVar31
                                             ,local_ef8,1);
                      local_f18 = _s__00116498;
                      uStack_f90 = extraout_XMM0_Qb_00;
                    }
                    else {
                      dVar35 = (double)local_f88 - local_3e0 * (double)local_d38;
                      dVar32 = (double)local_d38 + (double)local_f28;
                      dVar29 = dVar32;
                      if (dVar32 <= dVar35) {
                        dVar29 = dVar35;
                      }
                      local_fb8 = (undefined8 ******)
                                  (*(code *)PTR_round_with_step_f64_001f2100)
                                            (~-(ulong)NAN(dVar35) & (ulong)dVar29 |
                                             -(ulong)NAN(dVar35) & (ulong)dVar32,1);
                      local_f38 = local_358;
                      local_e48 = (undefined8 *******)0x0;
                      pppppppuStack_e40 = (undefined8 *******)&DAT_00000008;
                      pppppppuStack_e38 = (undefined8 *******)0x0;
                    /* try { // try from 00153bc0 to 00153bd9 has its CatchHandler @ 00155630 */
                      pppppppuVar14 =
                           (undefined8 *******)
                           strategy_comm4_1::cancel_order_use_range
                                     (local_fb8,local_fc0,local_f70,local_f68,0,&local_e48);
                      if (pppppppuVar14 != (undefined8 *******)0x0) goto LAB_00153be6;
                    /* try { // try from 00153f5a to 00153f63 has its CatchHandler @ 00155630 */
                      strategy_comm4_1::live_pending_counts
                                (local_fc0,local_f70,local_f68,pppppppuStack_e40,pppppppuStack_e38);
                      local_f98 = (undefined8 *******)0x0;
                      uStack_f90 = 0;
                      if (extraout_RDX_00 == 0) {
                        pppppppuVar14 = (undefined8 *******)0x0;
                        dVar29 = (double)(-(ulong)(0.0 < (double)local_f38) & (ulong)DAT_00116418);
                        if (0.0 < (double)local_f38) {
                          dStack_350 = dStack_350 + 0.0;
                        }
                        else {
                          dStack_350 = 0.0;
                        }
                        dVar29 = (double)(-(ulong)(0.0 < dStack_348) &
                                          (ulong)(dVar29 + (double)DAT_00116418) |
                                         ~-(ulong)(0.0 < dStack_348) & (ulong)dVar29);
                        if (0.0 < dStack_348) {
                          dStack_350 = dStack_350 + dStack_340;
                        }
                        dVar29 = (double)(-(ulong)(0.0 < dStack_338) &
                                          (ulong)(dVar29 + (double)DAT_00116418) |
                                         ~-(ulong)(0.0 < dStack_338) & (ulong)dVar29);
                        if (0.0 < dStack_338) {
                          dStack_350 = dStack_350 + dStack_330;
                        }
                        if (0.0 < dVar29) {
                          pppppppuVar14 = (undefined8 *******)(dStack_350 / dVar29);
                        }
                        if (0.0 < (double)pppppppuStack_3e8) {
                          pppppppuVar31 = pppppppuStack_3e8;
                          if ((double)pppppppuVar14 <= (double)pppppppuStack_3e8) {
                            pppppppuVar31 = pppppppuVar14;
                          }
                          pppppppuVar14 =
                               (undefined8 *******)
                               (~-(ulong)NAN((double)pppppppuVar14) & (ulong)pppppppuVar31 |
                               -(ulong)NAN((double)pppppppuVar14) & (ulong)pppppppuStack_3e8);
                        }
                        pppppppuVar14 = (undefined8 *******)((ulong)pppppppuVar14 ^ _s__001161f0);
                        pppppppuVar31 = pppppppuVar14;
                        if ((double)pppppppuVar14 <= (double)local_f18) {
                          pppppppuVar31 = local_f18;
                        }
                    /* try { // try from 0015472d to 00154746 has its CatchHandler @ 00155630 */
                        local_f98 = (undefined8 *******)
                                    (*(code *)PTR_round_with_step_f64_001f2100)
                                              (~-(ulong)NAN((double)local_f18) &
                                               (ulong)pppppppuVar31 |
                                               -(ulong)NAN((double)local_f18) & (ulong)pppppppuVar14
                                               ,local_ef8,1);
                        uStack_f90 = extraout_XMM0_Qb_04;
                      }
                      local_f18 = local_3f0;
                      core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&local_e48);
                    }
                    if ((double)(_DAT_00115b60 & (ulong)local_f98) <= DAT_00116400)
                    goto override_jmp_0015311f_case_4;
                    local_ef8 = pppppppuStack_f40;
                    local_f38 = local_488;
                    local_e58 = (undefined8 ******)0x1192d8;
                    if (local_fc1 != '\0') {
                      local_e58 = (undefined8 ******)0x1192d9;
                    }
                    uStack_e50 = 1;
                    local_e98 = (undefined8 *******)0x1192da;
                    if (bVar19 != 0) {
                      local_e98 = (undefined8 *******)0x1192db;
                    }
                    pppppppuStack_e90 = (undefined8 *******)0x1;
                    local_e48 = &ppppppuStack_f00;
                    pppppppuStack_e40 = (undefined8 *******)puVar25;
                    pppppppuStack_e38 = &ppppppuStack_d10;
                    ppppppuStack_e30 = (undefined8 ******)puVar25;
                    local_e28 = &local_e60;
                    local_e20 = (code *)puVar25;
                    pppppppuStack_e18 = &local_ce8;
                    pcStack_e10 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                    pdStack_e08 = &dStack_ea0;
                    puStack_e00 = puVar25;
                    ppppppuStack_df8 = &local_e58;
                    pcStack_df0 = _<&T_as_core::fmt::Display>::fmt;
                    pppppppuStack_de8 = &local_e98;
                    pcStack_de0 = _<&T_as_core::fmt::Display>::fmt;
                    pppppppuStack_dd8 = &local_d08;
                    pcStack_dd0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                    local_ee8 = (undefined8 *******)&DAT_001ec180;
                    pppppppuStack_ee0 = (undefined8 *******)&DAT_00000008;
                    local_ec8 = (undefined8 *******)0x0;
                    local_ed8 = &local_e48;
                    local_ed0 = (undefined8 ******)&DAT_00000008;
                    /* try { // try from 0015490b to 00154c48 has its CatchHandler @ 00155649 */
                    (*(code *)PTR_format_inner_001f2008)(&uStack_e0,&local_ee8);
                    uStack_100 = 0x802;
                    ppppppuStack_130 = local_fb8;
                    pppppppuStack_128 = local_f98;
                    pppppppuStack_120 = local_f28;
                    pppppppuStack_118 = local_ef8;
                    pppppppuStack_110 = local_f58;
                    pppppppuStack_108 = local_f38;
                    uStack_148 = uStack_e0;
                    uStack_140 = uStack_d8;
                    uStack_138 = uStack_d0;
                    pppppppuVar14 =
                         (undefined8 *******)
                         strategy_comm4_1::place(local_f18,local_fc0,&uStack_148);
                    if (pppppppuVar14 == (undefined8 *******)0x0) {
                      if (local_3a7 == '\x01') {
                        (*(code *)PTR_clone_001f2020)
                                  (&local_e98,&local_f78,
                                   &PTR_s_strategies_comm_strategy_strateg_001ec230);
                        local_ee8 = local_f28;
                        pppppppuStack_ee0 = local_f88;
                        local_ed8 = local_f48;
                        hashbrown::map::HashMap<K,V,S,A>::insert
                                  (&local_e48,local_cc8 + 0x142,&local_e98,&local_ee8);
                      }
                      goto override_jmp_0015311f_case_4;
                    }
                    break;
                  case 3:
                    if (((double)local_f38 < _DAT_00116508) &&
                       (dStack_ea0 < dStack_480 / _DAT_001164f8)) goto LAB_0015393f;
                    if (0.0 <= (double)local_f38) goto override_jmp_0015311f_case_4;
                    dVar29 = (double)(~-(ulong)(dStack_450 < 0.0) & (ulong)dStack_450 |
                                     -(ulong)(dStack_450 < 0.0) & _DAT_001163c0);
                    dVar35 = ((double)(~-(ulong)(local_448 < 0.0) & (ulong)local_448 |
                                      _DAT_001163c0 & -(ulong)(local_448 < 0.0)) / (double)local_d28
                             ) / (double)local_f88;
                    dVar32 = dVar35;
                    if (dVar29 <= dVar35) {
                      dVar32 = dVar29;
                    }
                    dVar29 = (double)(~-(ulong)NAN(dVar29) & (ulong)dVar32 |
                                     -(ulong)NAN(dVar29) & (ulong)dVar35);
                    pppppppuVar14 = local_f38;
                    if (0.0 <= (double)local_f38) {
                      pppppppuVar14 = (undefined8 *******)0x0;
                    }
                    if ((double)((ulong)pppppppuVar14 ^ _s__001161f0) <= dVar29) {
                      dVar29 = (double)((ulong)pppppppuVar14 ^ _s__001161f0);
                    }
                    /* try { // try from 00153518 to 00153599 has its CatchHandler @ 00155649 */
                    local_f58 = (undefined8 *******)
                                (*(code *)PTR_round_with_step_f64_001f2100)(dVar29,local_ef8,1);
                    if (bVar19 == 0) {
                      pppppppuVar14 =
                           (undefined8 *******)(*(code *)PTR_cancel_all_001f2108)(local_fc0);
                      if (pppppppuVar14 != (undefined8 *******)0x0) break;
                      if ((cStack_bff == '\0') || (local_fc1 != '\0')) {
                        if ((DAT_00116400 < (double)((ulong)local_f98 & _DAT_00115b60)) &&
                           (DAT_00116400 < (double)(_DAT_00115b60 & (ulong)local_be8))) {
                          dVar29 = (double)((ulong)((double)pppppppuStack_f40 / (double)local_be8) &
                                           _DAT_00115b60) + _s__001163a0;
                          if (dVar29 <= 0.0) {
                            dVar29 = 0.0;
                          }
                          dVar32 = (double)local_fb8 + (double)local_f98 * dVar29;
                          dVar29 = local_bf8;
                          if (dVar32 <= local_bf8) {
                            dVar29 = dVar32;
                          }
                          local_fb8 = (undefined8 ******)
                                      (-(ulong)NAN(dVar32) & (ulong)local_bf8 |
                                      ~-(ulong)NAN(dVar32) & (ulong)dVar29);
                          uStack_fb0 = uStack_bf0;
                        }
                      }
                      else {
                        local_fb8 = (undefined8 ******)
                                    strategy_comm4_1::high_taker_rate
                                              (pppppppuStack_f40,local_be8,ppppppuStack_f00,
                                               local_f88,local_f28,uStack_c28,uStack_c20,uStack_c18)
                        ;
                        uStack_fb0 = extraout_XMM0_Qb_05;
                      }
                      local_fb8 = (undefined8 ******)
                                  (*(code *)PTR_round_with_step_f64_001f2100)
                                            (((double)local_fb8 + (double)DAT_00116418) *
                                             (double)local_f88,local_d38,1);
                      pppppppuVar31 =
                           (undefined8 *******)
                           strategy_comm4_1::taker_fillable_cum(local_fb8,local_3a0,1);
                      pppppppuVar14 = pppppppuVar31;
                      if ((double)local_f58 <= (double)pppppppuVar31) {
                        pppppppuVar14 = local_f58;
                      }
                      local_f98 = (undefined8 *******)
                                  (*(code *)PTR_round_with_step_f64_001f2100)
                                            (~-(ulong)NAN((double)local_f58) & (ulong)pppppppuVar14
                                             | -(ulong)NAN((double)local_f58) & (ulong)pppppppuVar31
                                             ,local_ef8,1);
                      local_f58 = _s__00116498;
                      uStack_f90 = extraout_XMM0_Qb_06;
                    }
                    else {
                      dVar35 = local_3e0 * (double)local_d38 + (double)local_f28;
                      dVar32 = (double)local_f88 - (double)local_d38;
                      dVar29 = dVar32;
                      if (dVar35 <= dVar32) {
                        dVar29 = dVar35;
                      }
                      local_fb8 = (undefined8 ******)
                                  (*(code *)PTR_round_with_step_f64_001f2100)
                                            (~-(ulong)NAN(dVar35) & (ulong)dVar29 |
                                             -(ulong)NAN(dVar35) & (ulong)dVar32,1);
                      local_f18 = local_308;
                      local_e48 = (undefined8 *******)0x0;
                      pppppppuStack_e40 = (undefined8 *******)&DAT_00000008;
                      pppppppuStack_e38 = (undefined8 *******)0x0;
                    /* try { // try from 001535ff to 0015364b has its CatchHandler @ 0015562e */
                      pppppppuVar14 =
                           (undefined8 *******)
                           strategy_comm4_1::cancel_order_use_range
                                     (local_fb8,local_fc0,local_f70,local_f68,1,&local_e48);
                      if (pppppppuVar14 != (undefined8 *******)0x0) goto LAB_00153be6;
                      lVar13 = strategy_comm4_1::live_pending_counts
                                         (local_fc0,local_f70,local_f68,pppppppuStack_e40,
                                          pppppppuStack_e38);
                      local_f98 = (undefined8 *******)0x0;
                      uStack_f90 = 0;
                      if (lVar13 == 0) {
                        pppppppuVar14 = (undefined8 *******)0x0;
                        dVar29 = (double)(-(ulong)(0.0 < (double)local_f18) & (ulong)DAT_00116418);
                        if (0.0 < (double)local_f18) {
                          dStack_300 = dStack_300 + 0.0;
                        }
                        else {
                          dStack_300 = 0.0;
                        }
                        dVar29 = (double)(-(ulong)(0.0 < dStack_2f8) &
                                          (ulong)(dVar29 + (double)DAT_00116418) |
                                         ~-(ulong)(0.0 < dStack_2f8) & (ulong)dVar29);
                        if (0.0 < dStack_2f8) {
                          dStack_300 = dStack_300 + dStack_2f0;
                        }
                        dVar29 = (double)(-(ulong)(0.0 < dStack_2e8) &
                                          (ulong)(dVar29 + (double)DAT_00116418) |
                                         ~-(ulong)(0.0 < dStack_2e8) & (ulong)dVar29);
                        if (0.0 < dStack_2e8) {
                          dStack_300 = dStack_300 + dStack_2e0;
                        }
                        if (0.0 < dVar29) {
                          pppppppuVar14 = (undefined8 *******)(dStack_300 / dVar29);
                        }
                        if (0.0 < (double)pppppppuStack_3e8) {
                          pppppppuVar31 = pppppppuStack_3e8;
                          if ((double)pppppppuVar14 <= (double)pppppppuStack_3e8) {
                            pppppppuVar31 = pppppppuVar14;
                          }
                          pppppppuVar14 =
                               (undefined8 *******)
                               (~-(ulong)NAN((double)pppppppuVar14) & (ulong)pppppppuVar31 |
                               -(ulong)NAN((double)pppppppuVar14) & (ulong)pppppppuStack_3e8);
                        }
                        pppppppuVar31 = pppppppuVar14;
                        if ((double)local_f58 <= (double)pppppppuVar14) {
                          pppppppuVar31 = local_f58;
                        }
                    /* try { // try from 00154e36 to 00154e4f has its CatchHandler @ 0015562e */
                        local_f98 = (undefined8 *******)
                                    (*(code *)PTR_round_with_step_f64_001f2100)
                                              (~-(ulong)NAN((double)local_f58) &
                                               (ulong)pppppppuVar31 |
                                               -(ulong)NAN((double)local_f58) & (ulong)pppppppuVar14
                                               ,local_ef8,1);
                        uStack_f90 = extraout_XMM0_Qb_09;
                      }
                      local_f58 = local_3f0;
                      core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&local_e48);
                    }
                    if ((double)(_DAT_00115b60 & (ulong)local_f98) <= DAT_00116400)
                    goto override_jmp_0015311f_case_4;
                    local_f38 = pppppppuStack_f40;
                    local_f18 = local_488;
                    local_e58 = (undefined8 ******)0x1192d8;
                    if (local_fc1 != '\0') {
                      local_e58 = (undefined8 ******)0x1192d9;
                    }
                    uStack_e50 = 1;
                    local_e98 = (undefined8 *******)0x1192da;
                    if (bVar19 != 0) {
                      local_e98 = (undefined8 *******)0x1192db;
                    }
                    pppppppuStack_e90 = (undefined8 *******)0x1;
                    local_e48 = &ppppppuStack_f00;
                    pppppppuStack_e40 = (undefined8 *******)puVar25;
                    pppppppuStack_e38 = &ppppppuStack_d10;
                    ppppppuStack_e30 = (undefined8 ******)puVar25;
                    local_e28 = &local_e60;
                    local_e20 = (code *)puVar25;
                    pppppppuStack_e18 = &local_ce8;
                    pcStack_e10 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                    pdStack_e08 = &dStack_ea0;
                    puStack_e00 = puVar25;
                    ppppppuStack_df8 = &local_e58;
                    pcStack_df0 = _<&T_as_core::fmt::Display>::fmt;
                    pppppppuStack_de8 = &local_e98;
                    pcStack_de0 = _<&T_as_core::fmt::Display>::fmt;
                    pppppppuStack_dd8 = &local_d08;
                    pcStack_dd0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                    local_ee8 = (undefined8 *******)&DAT_001ec180;
                    pppppppuStack_ee0 = (undefined8 *******)&DAT_00000008;
                    local_ec8 = (undefined8 *******)0x0;
                    local_ed8 = &local_e48;
                    local_ed0 = (undefined8 ******)&DAT_00000008;
                    /* try { // try from 00155014 to 00155172 has its CatchHandler @ 00155649 */
                    (*(code *)PTR_format_inner_001f2008)(&uStack_b0,&local_ee8);
                    bStack_1ff = local_b28._0_1_ | 6;
                    uStack_200 = 3;
                    ppppppuStack_230 = local_fb8;
                    pppppppuStack_228 = local_f98;
                    pppppppuStack_220 = local_f88;
                    pppppppuStack_218 = local_f38;
                    uStack_210 = local_c88;
                    pppppppuStack_208 = local_f18;
                    uStack_248 = uStack_b0;
                    uStack_240 = uStack_a8;
                    uStack_238 = uStack_a0;
                    pppppppuVar14 =
                         (undefined8 *******)
                         strategy_comm4_1::place(local_f58,local_fc0,&uStack_248);
                    if (pppppppuVar14 == (undefined8 *******)0x0) {
                      if (local_3a7 == '\x01') {
                        (*(code *)PTR_clone_001f2020)
                                  (&local_e98,&local_f78,
                                   &PTR_s_strategies_comm_strategy_strateg_001ec248);
                        local_ee8 = local_f28;
                        pppppppuStack_ee0 = local_f88;
                        local_ed8 = local_f48;
                        hashbrown::map::HashMap<K,V,S,A>::insert
                                  (&local_e48,local_cc8 + 0x142,&local_e98,&local_ee8);
                      }
                      goto override_jmp_0015311f_case_4;
                    }
                    break;
                  case 4:
                    goto override_jmp_0015311f_case_4;
                  }
                  if (local_ce8 != (undefined8 *******)0x0) {
                    (*(code *)PTR___rust_dealloc_001f1ee8)(pppppppuStack_ce0,local_ce8,1);
                  }
                }
              }
            }
            else {
              pppppppuVar14 = (undefined8 *******)0x0;
            }
            if (local_d08 != (undefined8 *******)0x0) {
              (*(code *)PTR___rust_dealloc_001f1ee8)(pppppppuStack_d00,local_d08,1);
            }
          }
LAB_00152f14:
          if (local_380 != 0) {
            (*(code *)PTR___rust_dealloc_001f1ee8)(local_378,local_380,1);
          }
        }
        if (local_b78 != 0) {
          (*(code *)PTR___rust_dealloc_001f1ee8)(local_b70,local_b78,1);
        }
        if (local_f78 != (undefined8 ******)0x0) {
          (*(code *)PTR___rust_dealloc_001f1ee8)(local_f70,local_f78,1);
        }
        local_f88 = local_b88;
        lVar13 = local_b80;
        goto LAB_00151d39;
      }
      break;
    }
  }
  pppppppuVar14 = (undefined8 *******)0x0;
LAB_00151d39:
  puVar25 = PTR___rust_dealloc_001f1ee8;
  if (lVar13 != 0) {
    pppppppuVar31 = local_f88 + 1;
    do {
      if (pppppppuVar31[-1] != (undefined8 ******)0x0) {
        (*(code *)puVar25)(*pppppppuVar31,pppppppuVar31[-1],1);
      }
      pppppppuVar31 = pppppppuVar31 + 3;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
LAB_00151d71:
  if (local_b90 != 0) {
    (*(code *)PTR___rust_dealloc_001f1ee8)(local_f88,local_b90 * 0x18,8);
  }
  goto LAB_00151cae;
}




// ELF address 0x000000000006d690; fb_strategy_sdk_abi_version

undefined8 fb_strategy_sdk_abi_version(void)

{
  return 4;
}




// ELF address 0x000000000006d6a0; fb_strategy_sdk_version_str

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
  (*(code *)PTR_memcpy_001f1f48)
            (param_1,
             "0.6.0[fb_plugin] on_begin error: \n[fb_plugin] on_signal error: [fb_plugin] on_depth error: [fb_plugin] on_finish error: "
             ,uVar2);
  if (param_2 != 0) {
    *(undefined1 *)(param_1 + uVar2) = 0;
  }
  return uVar2;
}


