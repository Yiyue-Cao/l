// ELF address 0x000000000004f0e0; strategy_comm4::next_phase

/* strategy_comm4::next_phase */

bool __rustcall strategy_comm4::next_phase(double param_1,char param_2,long param_3)

{
  double dVar1;
  bool bVar2;
  
  if (*(char *)(param_3 + 0x4cc) == '\0') {
    if (param_2 == '\0') {
      return *(double *)(param_3 + 0x4a8) <= param_1;
    }
    if (param_2 == '\x01') {
      if (*(double *)(param_3 + 0x4b8) <= param_1) {
        return (bool)2;
      }
      return *(double *)(param_3 + 0x4b0) <= param_1;
    }
    dVar1 = *(double *)(param_3 + 0x4c0);
    bVar2 = dVar1 < param_1;
  }
  else {
    if (param_2 == '\0') {
      return param_1 <= *(double *)(param_3 + 0x4b0);
    }
    if (param_2 == '\x01') {
      if (param_1 <= *(double *)(param_3 + 0x4c0)) {
        return (bool)2;
      }
      return param_1 < *(double *)(param_3 + 0x4a8) || param_1 == *(double *)(param_3 + 0x4a8);
    }
    dVar1 = *(double *)(param_3 + 0x4b8);
    bVar2 = param_1 < *(double *)(param_3 + 0x4b8);
  }
  return (bool)('\x02' - (!bVar2 && param_1 != dVar1));
}




// ELF address 0x000000000004ed50; strategy_comm4::Comm4Params::signal_mode

/* strategy_comm4::Comm4Params::signal_mode */

ulong __rustcall strategy_comm4::Comm4Params::signal_mode(ushort *param_1,long param_2)

{
  if (param_2 != 3) {
    return 0;
  }
  if ((char)param_1[1] != '2' || (short)(*param_1 ^ 0x5650) != 0) {
    return (ulong)((uint)((char)param_1[1] == '4' && *param_1 == 0x5650) * 3);
  }
  return CONCAT71((uint7)(uint3)((*param_1 ^ 0x5650) >> 8),1);
}




// ELF address 0x000000000004ed90; strategy_comm4::Comm4Params::signal_trigger_mode

/* strategy_comm4::Comm4Params::signal_trigger_mode */

short __rustcall strategy_comm4::Comm4Params::signal_trigger_mode(long *param_1,long param_2)

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
              (ushort)(SUB161(auVar9 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar9[0xf] >> 7) << 0xf;
      return CONCAT11((char)(uVar2 >> 8),uVar2 == 0xffff);
    case 3:
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
              (ushort)(SUB161(auVar8 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar8[0xf] >> 7) << 0xf;
      return CONCAT11((char)(uVar2 >> 8),(uVar2 == 0xffff) << 2);
    case 5:
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




// ELF address 0x000000000004eea0; strategy_comm4::Comm4Params::effective

/* WARNING: Removing unreachable block (ram,0x0014eeba) */
/* WARNING: Removing unreachable block (ram,0x0014eece) */
/* strategy_comm4::Comm4Params::effective */

void __rustcall
strategy_comm4::Comm4Params::effective(undefined8 *param_1,long param_2,ulong param_3)

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
    cVar15 = (char)*(undefined4 *)(param_2 + 0x4c8);
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




// ELF address 0x0000000000071d90; strategy_comm4::signal_trigger::SignalTrigger::update_score

/* strategy_comm4::signal_trigger::SignalTrigger::update_score */

void __rustcall
strategy_comm4::signal_trigger::SignalTrigger::update_score
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
LAB_00171f62:
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
          goto LAB_00171f62;
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




// ELF address 0x0000000000072c20; strategy_comm4::signal_trigger::SignalTrigger::windows_rsi_trigger

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm4::signal_trigger::SignalTrigger::windows_rsi_trigger */

undefined1 * __rustcall
strategy_comm4::signal_trigger::SignalTrigger::windows_rsi_trigger
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
      dVar13 = (double)(*(ulong *)((long)pauVar10 + lVar6 + -0x18) & _DAT_00115ad0);
      uVar12 = -(ulong)(DAT_001162e8 < dVar13);
      dVar13 = (double)(~uVar12 & _s__001163b0 |
                       (ulong)(DAT_00116358 -
                              DAT_00116358 /
                              (*(double *)((long)pauVar10 + lVar6 + -0x20) / dVar13 + DAT_00116300))
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
                    /* try { // try from 00172dc3 to 00172dd3 has its CatchHandler @ 00172e25 */
        alloc::raw_vec::RawVec<T,A>::grow_one
                  (&local_90,anon_164def0971809d4a288268dfe8614f5d_14_llvm_12030102277605901293);
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




// ELF address 0x0000000000072200; strategy_comm4::signal_trigger::SignalTrigger::windows_std_trigger

/* strategy_comm4::signal_trigger::SignalTrigger::windows_std_trigger */

undefined1 * __rustcall
strategy_comm4::signal_trigger::SignalTrigger::windows_std_trigger
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
                    /* try { // try from 0017225c to 00172271 has its CatchHandler @ 001722e7 */
  local_80 = param_1;
  local_20 = param_3;
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (&local_78,&local_48,anon_da0c210b3c3fd6bae7d6780de08b6430_5_llvm_9941058852045034333);
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
      (*(code *)PTR___rust_dealloc_001f10f8)(local_70,local_78,1);
    }
    *(long *)(param_2 + 8) = lVar2;
    uVar3 = 5;
  }
  *param_2 = uVar3;
  return param_2;
}




// ELF address 0x00000000000720f0; strategy_comm4::signal_trigger::SignalTrigger::windows_mean_trigger

/* strategy_comm4::signal_trigger::SignalTrigger::windows_mean_trigger */

undefined1 * __rustcall
strategy_comm4::signal_trigger::SignalTrigger::windows_mean_trigger
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
                    /* try { // try from 0017214c to 00172161 has its CatchHandler @ 001721d7 */
  local_80 = param_1;
  local_20 = param_3;
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (&local_78,&local_48,anon_da0c210b3c3fd6bae7d6780de08b6430_5_llvm_9941058852045034333);
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
      (*(code *)PTR___rust_dealloc_001f10f8)(local_70,local_78,1);
    }
    *(long *)(param_2 + 8) = lVar2;
    uVar3 = 5;
  }
  *param_2 = uVar3;
  return param_2;
}




// ELF address 0x00000000000729d0; strategy_comm4::signal_trigger::SignalTrigger::windows_sharpe_trigger

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm4::signal_trigger::SignalTrigger::windows_sharpe_trigger */

undefined1 * __rustcall
strategy_comm4::signal_trigger::SignalTrigger::windows_sharpe_trigger
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
      auVar14._12_4_ = _UNK_00115c14;
      dVar1 = *(double *)((long)pauVar11 + lVar6 + -0x38);
      dVar15 = *(double *)((long)pauVar11 + lVar6 + -0x30) /
               ((auVar14._8_8_ - _UNK_00115ac8) +
               ((double)CONCAT44(_DAT_00115c10,(int)lVar7) - _DAT_00115ac0)) - dVar1 * dVar1;
      dVar13 = 0.0;
      if (dVar15 <= 0.0) {
        dVar15 = dVar13;
      }
      dVar15 = SQRT(dVar15);
      *(double *)((long)pauVar11 + lVar6 + -0x28) = dVar15;
      if (DAT_001162e8 < (double)((ulong)dVar15 & _DAT_00115ad0)) {
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
                    /* try { // try from 00172b93 to 00172ba3 has its CatchHandler @ 00172bf5 */
        alloc::raw_vec::RawVec<T,A>::grow_one
                  (&local_90,anon_164def0971809d4a288268dfe8614f5d_13_llvm_12030102277605901293);
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




// ELF address 0x0000000000072060; strategy_comm4::signal_trigger::SignalTrigger::point_signal_trigger_pv4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm4::signal_trigger::SignalTrigger::point_signal_trigger_pv4 */

void __rustcall
strategy_comm4::signal_trigger::SignalTrigger::point_signal_trigger_pv4
          (double param_1,double param_2,ulong param_3,undefined1 *param_4,long param_5)

{
  undefined1 uVar1;
  double dVar2;
  
  dVar2 = *(double *)(param_5 + 0x38);
  param_1 = ((double)(param_3 & _DAT_00115ad0) + param_2) * param_1;
  if (dVar2 <= 0.0) {
    dVar2 = param_1 + dVar2;
    if (0.0 <= dVar2) {
      dVar2 = 0.0;
    }
    if (dVar2 < *(double *)(param_5 + 0x40)) goto LAB_001720b7;
  }
  else {
    dVar2 = dVar2 - param_1;
    if (dVar2 <= 0.0) {
      dVar2 = 0.0;
    }
    if (dVar2 < *(double *)(param_5 + 0x40)) {
LAB_001720b7:
      uVar1 = 3;
      if (((dVar2 < *(double *)(param_5 + 0x58)) && (uVar1 = 2, *(double *)(param_5 + 0x50) < dVar2)
          ) && (uVar1 = 4, dVar2 <= *(double *)(param_5 + 0x48))) {
        *param_4 = 1;
        *(undefined8 *)(param_4 + 8) = 0x3ff0000000000000;
        return;
      }
      goto LAB_00172097;
    }
  }
  uVar1 = 0;
LAB_00172097:
  *param_4 = uVar1;
  *(undefined8 *)(param_4 + 8) = 0x3ff0000000000000;
  return;
}




// ELF address 0x0000000000072310; strategy_comm4::signal_trigger::SignalTrigger::windows_quantile_trigger

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm4::signal_trigger::SignalTrigger::windows_quantile_trigger */

undefined1 * __rustcall
strategy_comm4::signal_trigger::SignalTrigger::windows_quantile_trigger
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
  if ((param_1 < 0.0) || (DAT_00116300 < param_1)) {
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
LAB_0017291f:
                    /* try { // try from 0017291f to 0017292f has its CatchHandler @ 0017299a */
      uVar12 = anyhow::error::_<impl_anyhow::Error>::msg(&DAT_00119dfe,0x12);
      *(undefined8 *)(param_3 + 8) = uVar12;
      *param_3 = 5;
      if (local_f0 == 0) {
        return param_3;
      }
      (*(code *)PTR___rust_dealloc_001f10f8)(local_e8,local_f0,1);
      return param_3;
    }
  }
  else {
    uVar19 = ~(uint)uVar1;
    dVar23 = DAT_00116300 - param_1;
    local_48 = param_1;
    if ((dVar23 < 0.0) || (DAT_00116300 < dVar23)) {
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
          auVar22._12_4_ = _UNK_00115c14;
          param_1 = param_1 * ((auVar22._8_8_ - _UNK_00115ac8) +
                              ((double)CONCAT44(_DAT_00115c10,(int)uVar15) - _DAT_00115ac0));
          uVar8 = 0;
          if (0.0 <= param_1) {
            uVar8 = (long)(param_1 - _DAT_00116328) & (long)param_1 >> 0x3f | (long)param_1;
          }
          uVar11 = 0xffffffffffffffff;
          if (param_1 <= _DAT_00116268) {
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
                    /* try { // try from 00172900 to 00172907 has its CatchHandler @ 0017299c */
              lVar9 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                      ::next(&uStack_d8);
              if (lVar9 == 0) goto LAB_0017291f;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
                    /* try { // try from 00172912 to 0017291b has its CatchHandler @ 00172996 */
          _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>::
          next(&uStack_d8);
        }
        goto LAB_0017291f;
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
          if (uVar15 == 0) goto LAB_0017291f;
          auVar20._8_4_ = (int)(uVar15 >> 0x20);
          auVar20._0_8_ = uVar15;
          auVar20._12_4_ = _UNK_00115c14;
          dVar23 = ((auVar20._8_8_ - _UNK_00115ac8) +
                   ((double)CONCAT44(_DAT_00115c10,(int)uVar15) - _DAT_00115ac0)) * local_48;
          uVar8 = (long)(dVar23 - _DAT_00116328) & (long)dVar23 >> 0x3f | (long)dVar23;
          if (dVar23 < DAT_00116320) {
            uVar8 = 0;
          }
          if (_DAT_00116268 < dVar23) {
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
                    /* try { // try from 00172520 to 00172529 has its CatchHandler @ 001729a0 */
              lVar9 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                      ::next(&uStack_d8);
              if (lVar9 == 0) goto LAB_0017291f;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
                    /* try { // try from 00172538 to 00172541 has its CatchHandler @ 00172998 */
          pdVar10 = (double *)
                    _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                    ::next(&uStack_d8);
          if ((pdVar10 == (double *)0x0) ||
             (uVar15 = *(ulong *)((long)pauVar16 + lVar18 + -0x60), uVar15 == 0)) goto LAB_0017291f;
          auVar21._8_4_ = (int)(uVar15 >> 0x20);
          auVar21._0_8_ = uVar15;
          auVar21._12_4_ = _UNK_00115c14;
          dVar23 = ((auVar21._8_8_ - _UNK_00115ac8) +
                   ((double)CONCAT44(_DAT_00115c10,(int)uVar15) - _DAT_00115ac0)) * local_58;
          uVar8 = 0;
          if (DAT_00116320 <= dVar23) {
            uVar8 = (long)(dVar23 - _DAT_00116328) & (long)dVar23 >> 0x3f | (long)dVar23;
          }
          if (_DAT_00116268 < dVar23) {
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
                    /* try { // try from 00172630 to 00172639 has its CatchHandler @ 0017299e */
              lVar9 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                      ::next(&uStack_d8);
              if (lVar9 == 0) goto LAB_0017291f;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
                    /* try { // try from 00172648 to 0017275d has its CatchHandler @ 00172998 */
          pdVar10 = (double *)
                    _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                    ::next(&uStack_d8);
          uVar15 = local_e0;
          if (pdVar10 == (double *)0x0) goto LAB_0017291f;
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
                       PTR_anon_164def0971809d4a288268dfe8614f5d_9_llvm_12030102277605901293_001ebe08
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




// ELF address 0x0000000000071fd0; strategy_comm4::signal_trigger::SignalTrigger::point_signal_trigger_pv1_spread

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm4::signal_trigger::SignalTrigger::point_signal_trigger_pv1_spread */

void __rustcall
strategy_comm4::signal_trigger::SignalTrigger::point_signal_trigger_pv1_spread
          (double param_1,ulong param_2,undefined1 *param_3,long param_4)

{
  undefined1 uVar1;
  double dVar2;
  
  dVar2 = *(double *)(param_4 + 0x38);
  param_1 = (double)(param_2 & _DAT_00115ad0) * param_1;
  if (dVar2 <= 0.0) {
    dVar2 = param_1 + dVar2;
    if (0.0 <= dVar2) {
      dVar2 = 0.0;
    }
    if (dVar2 < *(double *)(param_4 + 0x40)) goto LAB_00172023;
  }
  else {
    dVar2 = dVar2 - param_1;
    if (dVar2 <= 0.0) {
      dVar2 = 0.0;
    }
    if (dVar2 < *(double *)(param_4 + 0x40)) {
LAB_00172023:
      uVar1 = 3;
      if (((dVar2 < *(double *)(param_4 + 0x58)) && (uVar1 = 2, *(double *)(param_4 + 0x50) < dVar2)
          ) && (uVar1 = 4, dVar2 <= *(double *)(param_4 + 0x48))) {
        *param_3 = 1;
        *(undefined8 *)(param_3 + 8) = 0x3ff0000000000000;
        return;
      }
      goto LAB_00172003;
    }
  }
  uVar1 = 0;
LAB_00172003:
  *param_3 = uVar1;
  *(undefined8 *)(param_3 + 8) = 0x3ff0000000000000;
  return;
}




// ELF address 0x00000000000733c0; strategy_comm4::signal_trigger::dynamic_threshold

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm4::signal_trigger::dynamic_threshold */

void __rustcall
strategy_comm4::signal_trigger::dynamic_threshold
          (double param_1,double param_2,double param_3,double param_4,double *param_5,
          double *param_6)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  
  if ((((0.0 <= param_2) && (0.0 <= param_3)) && (param_2 <= param_1)) &&
     (DAT_00116368 < (double)(_DAT_00115ad0 & (ulong)param_4))) {
    dVar1 = param_3 - param_2;
    if (param_3 - param_2 <= DAT_001162e8) {
      dVar1 = DAT_001162e8;
    }
    dVar1 = (param_1 - param_2) / dVar1;
    if (DAT_00116300 <= dVar1) {
      dVar1 = DAT_00116300;
    }
    dVar4 = (double)((ulong)(param_4 * dVar1) & _DAT_00115ad0);
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




// ELF address 0x0000000000072e50; _ZN14strategy_comm414signal_trigger17enum_rate_counter17h8905a6d63e128319E.llvm.12030102277605901293

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm4::signal_trigger::enum_rate_counter */

ulong __rustcall strategy_comm4::signal_trigger::enum_rate_counter(double param_1,long *param_2)

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
      (*(code *)PTR___rust_dealloc_001f10f8)(param_2[1],*param_2,1);
    }
    goto LAB_0017334c;
  }
  local_98 = param_1;
  uStack_90 = in_XMM0_Qb;
  pauVar9 = (undefined1 (*) [16])__tls_get_addr(&PTR_001f1408);
  if (pauVar9[1][0] == '\x01') {
    local_a8 = *pauVar9;
  }
  else {
                    /* try { // try from 00173360 to 00173365 has its CatchHandler @ 00173377 */
    local_a8 = (*(code *)PTR_hashmap_random_keys_001f1418)();
    *pauVar9 = local_a8;
    pauVar9[1][0] = 1;
  }
  *(long *)*pauVar9 = local_a8._0_8_ + 1;
  local_b8 = _DAT_001ebe60;
  lStack_b0 = _UNK_001ebe68;
  local_c8 = (undefined1 (*) [16])
             PTR_anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263_001ebe50;
  uStack_c0 = _UNK_001ebe58;
  pcVar25 = (char *)param_2[1];
  pcVar1 = pcVar25 + lVar3;
  local_68 = pcVar25;
  do {
    cVar14 = *pcVar25;
    local_60 = CONCAT71(local_60._1_7_,cVar14);
                    /* try { // try from 0017300b to 00173085 has its CatchHandler @ 0017337c */
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
          goto joined_r0x00172f74;
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
joined_r0x00172f74:
  } while (pcVar25 != pcVar1);
  if (uStack_c0 == 0) {
    uVar13 = 0;
    if (lStack_b0 != 0) goto LAB_001730fb;
LAB_00173286:
    dVar34 = 0.0;
    dVar33 = 0.0;
    uVar16 = 4;
    if (uVar17 != 0 && uStack_c0 != 0) {
      (*(code *)PTR___rust_dealloc_001f10f8)();
      dVar34 = 0.0;
      dVar33 = 0.0;
    }
  }
  else {
    uVar17 = uStack_c0 * 0x11 + 0x21;
    pauVar9 = local_c8 + (-1 - uStack_c0);
    uVar13 = 0x10;
    if (lStack_b0 == 0) goto LAB_00173286;
LAB_001730fb:
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
      (*(code *)PTR___rust_dealloc_001f10f8)(pauVar9,uVar17,uVar13);
    }
    auVar29._8_4_ = (int)(uVar21 >> 0x20);
    auVar29._0_8_ = uVar21;
    auVar29._12_4_ = _UNK_00115c14;
    dVar33 = auVar29._8_8_ - _UNK_00115ac8;
    dVar34 = dVar33 + ((double)CONCAT44(_DAT_00115c10,(int)uVar21) - _DAT_00115ac0);
  }
  dVar34 = dVar34 / (double)lVar3;
  uVar17 = 4;
  if (local_98 < dVar34) {
    uVar17 = uVar16 & 0xff;
  }
  local_98 = (double)(-(ulong)(local_98 < dVar34) & (ulong)dVar34);
  uStack_90 = uStack_90 & (ulong)dVar33;
  if (*param_2 != 0) {
    (*(code *)PTR___rust_dealloc_001f10f8)(local_68,*param_2,1);
  }
LAB_0017334c:
  return uVar17 & 0xffffffff;
}




// ELF address 0x00000000000719a0; strategy_comm4::signal_trigger::TsQuantileCalculator::update

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm4::signal_trigger::TsQuantileCalculator::update */

void __rustcall
strategy_comm4::signal_trigger::TsQuantileCalculator::update
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
    param_4 = &PTR_anon_164def0971809d4a288268dfe8614f5d_9_llvm_12030102277605901293_001ebdf0;
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
        if (lVar7 == 0) goto LAB_00171ab3;
        dVar17 = *pdVar6;
        dVar18 = pdVar6[1];
        param_4 = ppuVar13;
        if (param_2 <= dVar17) {
          if (param_2 < dVar17) goto LAB_00171ab3;
LAB_00171a56:
          cVar10 = ((ulong)dVar16 >= (ulong)dVar18 && dVar16 != dVar18) -
                   ((ulong)dVar16 < (ulong)dVar18);
        }
        else {
          cVar10 = '\x01';
          if (param_2 < dVar17) goto LAB_00171a56;
        }
        pdVar6 = pdVar6 + 2;
        lVar7 = lVar7 + -0x10;
        ppuVar13 = (undefined **)((long)ppuVar13 + 1);
      } while (cVar10 == '\x01');
      if (cVar10 == '\0') goto LAB_00171b06;
LAB_00171ab3:
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
LAB_00171b06:
  param_3[8] = param_3[8] + 1;
  dVar16 = (double)param_3[9] + param_2;
  param_3[9] = (ulong)dVar16;
  uVar9 = param_3[10] + 1;
  param_3[10] = uVar9;
  auVar20._8_4_ = (int)(uVar9 >> 0x20);
  auVar20._0_8_ = uVar9;
  auVar20._12_4_ = _UNK_00115c14;
  param_3[0xb] = (ulong)(dVar16 / ((auVar20._8_8_ - _UNK_00115ac8) +
                                  ((double)CONCAT44(_DAT_00115c10,(int)uVar9) - _DAT_00115ac0)));
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
            if (lVar7 == 0) goto joined_r0x00171ce8;
            dVar1 = *pdVar5;
            dVar4 = pdVar5[1];
            if (dVar17 <= dVar1) {
              uVar12 = uVar8;
              if (dVar17 < dVar1) goto joined_r0x00171ce8;
LAB_00171c76:
              cVar10 = ((ulong)dVar18 >= (ulong)dVar4 && dVar18 != dVar4) -
                       ((ulong)dVar18 < (ulong)dVar4);
            }
            else {
              cVar10 = '\x01';
              if (dVar17 < dVar1) goto LAB_00171c76;
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
joined_r0x00171ce8:
          if (local_78 == 0.0) break;
          local_78 = (double)((long)local_78 - 1);
          local_80 = (double *)local_80[uVar12 + 0x18];
        } while( true );
      }
      dVar16 = dVar16 - dVar17;
      param_3[9] = (ulong)dVar16;
      dVar18 = 0.0;
      if (uVar9 == 0) {
LAB_00171b90:
        uVar9 = 0;
      }
      else {
        uVar9 = uVar9 - 1;
        param_3[10] = uVar9;
        if (uVar9 == 0) goto LAB_00171b90;
        auVar19._8_4_ = (int)(uVar9 >> 0x20);
        auVar19._0_8_ = uVar9;
        auVar19._12_4_ = _UNK_00115c14;
        dVar18 = dVar16 / ((auVar19._8_8_ - _UNK_00115ac8) +
                          ((double)CONCAT44(_DAT_00115c10,(int)uVar9) - _DAT_00115ac0));
      }
      param_3[0xb] = (ulong)dVar18;
      dVar18 = DAT_00116320;
      param_3[0xc] = (ulong)((double)param_3[0xc] - dVar17 * dVar17);
      param_3[(ulong)(dVar17 <= dVar18) + 0xe] =
           (ulong)((double)param_3[(ulong)(dVar17 <= dVar18) + 0xe] - dVar17);
      uVar8 = param_3[3];
    } while (uVar8 != 0);
  }
  return;
}




// ELF address 0x000000000004ff50; strategy_comm4::high_taker_rate

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm4::high_taker_rate */

double __rustcall
strategy_comm4::high_taker_rate
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
    if (((0.0 < param_3) && (DAT_00116300 < param_6)) &&
       (dVar3 = (double)(param_2 & _DAT_00115ad0), DAT_00116368 <= dVar3)) {
      dVar1 = (double)(param_1 & _DAT_00115ad0);
      dVar2 = dVar1 / dVar3 + _s__00116288;
      if (dVar2 <= 0.0) {
        dVar2 = 0.0;
      }
      dVar2 = (double)(*(code *)PTR_tanh_001f1200)(dVar2 * DAT_00116350);
      dVar2 = (param_6 + _s__00116288) * dVar2 + DAT_00116300;
      param_3 = ((dVar1 - dVar3) * unaff_XMM6_Qa) / param_3;
      dVar3 = param_3;
      if (dVar2 <= param_3) {
        dVar3 = dVar2;
      }
      dVar3 = (double)(-(ulong)NAN(dVar2) & (ulong)param_3 | ~-(ulong)NAN(dVar2) & (ulong)dVar3);
      if (dVar3 <= DAT_00116320) {
        dVar3 = DAT_00116320;
      }
      return dVar4 * dVar3;
    }
  }
  return dVar4;
}




// ELF address 0x0000000000076a30; strategy_comm4::vol_spread_ratio::VolSpreadRatio::update

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm4::vol_spread_ratio::VolSpreadRatio::update */

ulong __rustcall
strategy_comm4::vol_spread_ratio::VolSpreadRatio::update
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
  
  dVar11 = DAT_00116350 * (param_2 + param_3);
  dVar9 = (double)(*(code *)PTR_round_001f1560)
                            (((param_3 - param_2) / (param_2 + param_3)) * _DAT_00116370);
  uVar4 = *param_4;
  uVar1 = param_4[3];
  if (uVar1 == uVar4) {
    alloc::collections::vec_deque::VecDeque<T,A>::grow
              (param_4,anon_2807b79ab7a61e8c107cfc84e1a1f036_28_llvm_6213256756779885114);
    uVar4 = *param_4;
    uVar1 = param_4[3];
  }
  dVar9 = dVar9 / DAT_00116340;
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
    if ((double)param_4[0x29] * DAT_00116350 <= param_1 - *(double *)(uVar4 + lVar2)) {
      dVar9 = *(double *)(lVar2 + uVar4 + 8);
      if (dVar9 <= 0.0) {
        return 0;
      }
      dVar9 = (double)(*(code *)PTR_round_001f1560)
                                ((*(double *)(uVar4 + 8 + (uVar5 - uVar6) * 0x10) / dVar9 +
                                 _s__00116288) * _DAT_00116370);
      signal_trigger::TsQuantileCalculator::update(param_1,dVar9 / DAT_00116340,param_4 + 5);
      uVar4 = param_4[0xf];
      uVar1 = 1;
      if (1 < uVar4) {
        uVar1 = uVar4;
      }
      auVar10._8_4_ = (int)(uVar1 >> 0x20);
      auVar10._0_8_ = uVar1;
      auVar10._12_4_ = _UNK_00115c14;
      dVar9 = (double)param_4[0x11] /
              ((auVar10._8_8_ - _UNK_00115ac8) +
              ((double)CONCAT44(_DAT_00115c10,(int)uVar1) - _DAT_00115ac0)) -
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




// ELF address 0x000000000004f9e0; strategy_comm4::live_pending_counts

/* strategy_comm4::live_pending_counts */

undefined1  [16] __rustcall
strategy_comm4::live_pending_counts
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
  
  (*(code *)PTR_pending_orders_001f11e0)(&local_48,param_1,param_2,param_3);
                    /* try { // try from 0014fa17 to 0014fa2a has its CatchHandler @ 0014ff29 */
  (*(code *)PTR_cancel_pending_ids_001f11f8)(&local_60,param_1,param_2,param_3);
  lVar7 = local_50;
  lVar17 = local_58;
  puVar8 = PTR___rust_dealloc_001f10f8;
  plVar14 = local_40 + local_38 * 0xb;
  if (local_38 == 0) {
    local_c0 = 0;
    lVar12 = 0;
    plVar15 = local_40;
LAB_0014fd9a:
    puVar8 = PTR___rust_dealloc_001f10f8;
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
LAB_0014fad7:
      do {
        plVar15 = plVar10 + 0xb;
        lVar2 = *plVar10;
        if (lVar2 == -0x8000000000000000) goto LAB_0014fd9a;
        lVar3 = plVar10[1];
        lVar4 = plVar10[2];
        lVar5 = plVar10[3];
        lVar16 = plVar10[4];
        bVar1 = *(byte *)(plVar10 + 10);
        lVar13 = 0;
        do {
          plVar10 = plVar15;
          if ((*(long *)(param_4 + 0x10 + lVar13) == lVar4) &&
             (iVar9 = (*(code *)PTR_bcmp_001f11d8)
                                (*(undefined8 *)(param_4 + 8 + lVar13),lVar3,lVar4), iVar9 == 0))
          goto LAB_0014fb97;
          lVar13 = lVar13 + 0x18;
        } while (param_5 * 0x18 != lVar13);
        if (lVar7 != 0) {
          lVar13 = 0;
          do {
            if ((*(long *)(lVar17 + 0x10 + lVar13) == lVar4) &&
               (iVar9 = (*(code *)PTR_bcmp_001f11d8)
                                  (*(undefined8 *)(lVar17 + 8 + lVar13),lVar3,lVar4), iVar9 == 0))
            goto LAB_0014fb97;
            lVar13 = lVar13 + 0x18;
          } while (lVar6 != lVar13);
        }
        if (lVar2 != 0) {
          (*(code *)PTR___rust_dealloc_001f10f8)(lVar3,lVar2,1);
        }
        if (lVar5 != 0) {
          (*(code *)PTR___rust_dealloc_001f10f8)(lVar16,lVar5,1);
        }
        lVar12 = lVar12 + (ulong)bVar1;
        local_c0 = local_c0 + (ulong)(bVar1 ^ 1);
      } while (plVar15 != plVar14);
      goto LAB_0014fe96;
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
LAB_0014fc90:
      do {
        plVar15 = plVar10 + 0xb;
        lVar6 = *plVar10;
        if (lVar6 == -0x8000000000000000) goto LAB_0014fd9a;
        lVar2 = plVar10[1];
        lVar3 = plVar10[2];
        lVar4 = plVar10[3];
        lVar5 = plVar10[4];
        bVar1 = *(byte *)(plVar10 + 10);
        lVar16 = 0;
        do {
          plVar10 = plVar15;
          if ((*(long *)(lVar17 + 0x10 + lVar16) == lVar3) &&
             (iVar9 = (*(code *)PTR_bcmp_001f11d8)(*(undefined8 *)(lVar17 + 8 + lVar16),lVar2,lVar3)
             , iVar9 == 0)) {
            if (lVar6 != 0) {
              (*(code *)PTR___rust_dealloc_001f10f8)(lVar2,lVar6,1);
            }
            if (lVar4 != 0) {
              (*(code *)PTR___rust_dealloc_001f10f8)(lVar5,lVar4,1);
            }
            if (plVar15 != plVar14) goto LAB_0014fc90;
            goto LAB_0014fd9a;
          }
          lVar16 = lVar16 + 0x18;
        } while (lVar7 != lVar16);
        if (lVar6 != 0) {
          (*(code *)PTR___rust_dealloc_001f10f8)(lVar2,lVar6,1);
        }
        if (lVar4 != 0) {
          (*(code *)PTR___rust_dealloc_001f10f8)(lVar5,lVar4,1);
        }
        lVar12 = lVar12 + (ulong)bVar1;
        local_c0 = local_c0 + (ulong)(bVar1 ^ 1);
      } while (plVar15 != plVar14);
    }
  }
LAB_0014fe96:
  if (local_48 != 0) {
    (*(code *)PTR___rust_dealloc_001f10f8)(local_40,local_48 * 0x58,8);
  }
  puVar8 = PTR___rust_dealloc_001f10f8;
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
    (*(code *)PTR___rust_dealloc_001f10f8)(local_58,local_60 * 0x18,8);
  }
  auVar19._8_8_ = local_c0;
  auVar19._0_8_ = lVar12;
  return auVar19;
LAB_0014fb97:
  if (lVar2 != 0) {
    (*(code *)PTR___rust_dealloc_001f10f8)(lVar3,lVar2,1);
  }
  if (lVar5 != 0) {
    (*(code *)PTR___rust_dealloc_001f10f8)(lVar16,lVar5,1);
  }
  if (plVar15 == plVar14) goto LAB_0014fd9a;
  goto LAB_0014fad7;
}




// ELF address 0x000000000004f180; strategy_comm4::cancel_order_use_range

/* strategy_comm4::cancel_order_use_range */

long __rustcall
strategy_comm4::cancel_order_use_range
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
  (*(code *)PTR_pending_orders_001f11e0)(&local_48,param_3,param_4,param_5);
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
LAB_0014f250:
    uVar14 = (long)plVar9 - (long)plVar8;
    plVar12 = plVar8;
    do {
      lVar2 = *plVar12;
      lVar7 = plVar12[1];
      lVar13 = plVar12[3];
      local_108 = plVar12[4];
      if (*(byte *)(plVar12 + 10) == local_109) {
        if (lVar2 != -0x8000000000000000) goto LAB_0014f2e0;
      }
      else {
        if (lVar2 != 0) {
          (*(code *)PTR___rust_dealloc_001f10f8)(lVar7,lVar2,1);
        }
        if (lVar13 != 0) {
          (*(code *)PTR___rust_dealloc_001f10f8)(local_108,lVar13,1);
        }
      }
      plVar12 = plVar12 + 0xb;
      uVar14 = uVar14 - 0x58;
      local_48 = local_d8;
      local_40 = local_e0;
      if (plVar12 == local_e8) break;
    } while( true );
  }
LAB_0014f448:
  local_c0 = plVar8;
  plVar8 = local_f0;
  if (local_48 != 0) {
    (*(code *)PTR___rust_dealloc_001f10f8)(local_40,local_48 * 0x58,8);
  }
  (*(code *)PTR_pending_orders_001f11e0)(&local_60,local_90,local_88,local_80);
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
LAB_0014f51a:
    uVar14 = (long)local_d0 - (long)plVar9;
    plVar12 = plVar9;
    do {
      lVar2 = *plVar12;
      lVar7 = plVar12[1];
      local_108 = plVar12[3];
      local_e8 = (long *)plVar12[4];
      bVar1 = *(byte *)(plVar12 + 10);
      if (bVar1 == local_10a) {
        if (lVar2 != -0x8000000000000000) goto LAB_0014f5b0;
      }
      else {
        if (lVar2 != 0) {
          (*(code *)PTR___rust_dealloc_001f10f8)(lVar7,lVar2,1);
        }
        if (local_108 != 0) {
          (*(code *)PTR___rust_dealloc_001f10f8)(local_e8,local_108,1);
        }
      }
      plVar12 = plVar12 + 0xb;
      uVar14 = uVar14 - 0x58;
      local_60 = local_d8;
      local_58 = local_e0;
      if (plVar12 == local_f8) break;
    } while( true );
  }
LAB_0014f77a:
  local_c0 = plVar9;
  if (local_60 != 0) {
    (*(code *)PTR___rust_dealloc_001f10f8)(local_58,local_60 * 0x58,8);
  }
  return 0;
LAB_0014f2e0:
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
         (iVar3 = (*(code *)PTR_bcmp_001f11d8)(*(undefined8 *)(lVar5 + 8 + lVar10),lVar7),
         lVar13 = local_100, lVar4 = local_98, plVar8 = local_f8, iVar3 == 0)) {
        if (lVar2 != 0) {
          (*(code *)PTR___rust_dealloc_001f10f8)(lVar7,lVar2,1);
        }
        goto LAB_0014f3fe;
      }
      lVar10 = lVar10 + 0x18;
    } while (lVar4 != lVar10);
  }
                    /* try { // try from 0014f390 to 0014f3b3 has its CatchHandler @ 0014f97f */
  lVar5 = (*(code *)PTR_cancel_order_001f11e8)(local_90,local_88,local_80,lVar7,plVar8);
  plVar8 = local_f0;
  if (lVar5 != 0) {
    plVar8 = plVar12 + 0xb;
    local_f8 = (long *)lVar5;
    local_c0 = plVar8;
    if (lVar2 != 0) {
      (*(code *)PTR___rust_dealloc_001f10f8)(lVar7,lVar2,1);
    }
    if (lVar13 != 0) {
      (*(code *)PTR___rust_dealloc_001f10f8)(local_108,lVar13,1);
    }
    if (plVar8 != local_e8) {
      plVar12 = plVar12 + 0xf;
      uVar14 = uVar14 / 0x58;
      do {
        if (plVar12[-4] != 0) {
          (*(code *)PTR___rust_dealloc_001f10f8)(plVar12[-3],plVar12[-4],1);
        }
        if (plVar12[-1] != 0) {
          (*(code *)PTR___rust_dealloc_001f10f8)(*plVar12,plVar12[-1],1);
        }
        plVar12 = plVar12 + 0xb;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    if (local_d8 == 0) {
      return (long)local_f8;
    }
    (*(code *)PTR___rust_dealloc_001f10f8)(local_e0,local_d8 * 0x58,8);
    return (long)local_f8;
  }
  lVar5 = local_f0[2];
  if (lVar5 == *local_f0) {
                    /* try { // try from 0014f3cc to 0014f3db has its CatchHandler @ 0014f92a */
    (*(code *)PTR_grow_one_001f11f0)(local_f0,&PTR_s_strategies_comm_strategy_strateg_001eae30);
  }
  lVar4 = plVar8[1];
  *(long *)(lVar4 + lVar5 * 0x18) = lVar2;
  *(long *)(lVar4 + 8 + lVar5 * 0x18) = lVar7;
  *(long **)(lVar4 + 0x10 + lVar5 * 0x18) = local_f8;
  plVar8[2] = lVar5 + 1;
LAB_0014f3fe:
  plVar9 = local_d0;
  if (lVar13 != 0) {
    (*(code *)PTR___rust_dealloc_001f10f8)(local_108,lVar13,1);
  }
  plVar8 = plVar12 + 0xb;
  if (plVar8 == local_e8) goto code_r0x0014f42d;
  goto LAB_0014f250;
code_r0x0014f42d:
  local_48 = local_d8;
  local_40 = local_e0;
  plVar8 = plVar12 + 0xb;
  goto LAB_0014f448;
LAB_0014f5b0:
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
         (iVar3 = (*(code *)PTR_bcmp_001f11d8)
                            (*(undefined8 *)(lVar5 + 8 + (long)dVar11),lVar7,lVar13),
         dVar6 = local_a0, lVar5 = local_98, lVar7 = local_100, iVar3 == 0)) {
        plVar8 = local_f0;
        if (lVar2 != 0) {
          (*(code *)PTR___rust_dealloc_001f10f8)(local_100,lVar2,1);
          plVar8 = local_f0;
        }
        goto joined_r0x0014f657;
      }
      dVar11 = (double)((long)dVar11 + 0x18);
    } while (dVar6 != dVar11);
  }
  plVar8 = local_f0;
  if ((bVar1 & 1) == 0) {
    if (local_68 < local_70) goto LAB_0014f6ca;
  }
  else if (local_70 < local_78) {
LAB_0014f6ca:
                    /* try { // try from 0014f6ca to 0014f6ed has its CatchHandler @ 0014f92c */
    lVar7 = (*(code *)PTR_cancel_order_001f11e8)(local_90,local_88,local_80,lVar7,lVar13);
    if (lVar7 != 0) {
      plVar8 = plVar12 + 0xb;
      local_c0 = plVar8;
      if (lVar2 != 0) {
        (*(code *)PTR___rust_dealloc_001f10f8)(local_100,lVar2,1);
      }
      if (local_108 != 0) {
        (*(code *)PTR___rust_dealloc_001f10f8)(local_e8,local_108,1);
      }
      if (plVar8 != local_f8) {
        plVar12 = plVar12 + 0xf;
        uVar14 = uVar14 / 0x58;
        do {
          if (plVar12[-4] != 0) {
            (*(code *)PTR___rust_dealloc_001f10f8)(plVar12[-3],plVar12[-4],1);
          }
          if (plVar12[-1] != 0) {
            (*(code *)PTR___rust_dealloc_001f10f8)(*plVar12,plVar12[-1],1);
          }
          plVar12 = plVar12 + 0xb;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
      if (local_d8 == 0) {
        return lVar7;
      }
      (*(code *)PTR___rust_dealloc_001f10f8)(local_e0,local_d8 * 0x58,8);
      return lVar7;
    }
    lVar7 = plVar8[2];
    if (lVar7 == *plVar8) {
                    /* try { // try from 0014f701 to 0014f710 has its CatchHandler @ 0014f928 */
      (*(code *)PTR_grow_one_001f11f0)(plVar8,&PTR_s_strategies_comm_strategy_strateg_001eae48);
    }
    lVar5 = plVar8[1];
    *(long *)(lVar5 + lVar7 * 0x18) = lVar2;
    *(long *)(lVar5 + 8 + lVar7 * 0x18) = local_100;
    *(long *)(lVar5 + 0x10 + lVar7 * 0x18) = lVar13;
    plVar8[2] = lVar7 + 1;
    goto joined_r0x0014f657;
  }
  if (lVar2 != 0) {
    (*(code *)PTR___rust_dealloc_001f10f8)(lVar7,lVar2,1);
  }
joined_r0x0014f657:
  if (local_108 != 0) {
    (*(code *)PTR___rust_dealloc_001f10f8)(local_e8,local_108,1);
  }
  plVar9 = plVar12 + 0xb;
  if (plVar9 == local_f8) goto code_r0x0014f764;
  goto LAB_0014f51a;
code_r0x0014f764:
  local_60 = local_d8;
  local_58 = local_e0;
  plVar9 = plVar12 + 0xb;
  goto LAB_0014f77a;
}




// ELF address 0x0000000000055080; strategy_comm4::place

/* strategy_comm4::place */

void __rustcall strategy_comm4::place(double param_1,undefined8 param_2,undefined8 param_3)

{
  if (0.0 < param_1) {
    (*(code *)PTR_place_order_iap_with_target_001f1328)(param_2,param_3,1);
    return;
  }
  (*(code *)PTR_place_order_iap_001f1330)();
  return;
}




// ELF address 0x0000000000050090; <strategy_comm4::StrategyComm4 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin

/* _<strategy_comm4::StrategyComm4 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin */

undefined8 __rustcall
_<strategy_comm4::StrategyComm4_as_future_backtest_sdk::plugin::StrategyPlugin>::on_begin
          (long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long local_a58;
  long local_a50;
  ulong local_a48;
  long local_a40;
  ulong local_a38;
  undefined4 *local_a30;
  undefined *local_a28;
  long *local_a20;
  code *local_a18;
  undefined **local_a10;
  undefined8 local_a08;
  undefined4 **local_a00;
  undefined8 local_9f8;
  undefined8 local_9f0;
  undefined1 local_9e0 [24];
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
  undefined4 local_998;
  undefined4 uStack_994;
  undefined4 uStack_990;
  undefined4 uStack_98c;
  long local_988;
  long lStack_980;
  undefined8 local_978;
  undefined8 uStack_970;
  long local_500;
  undefined4 local_4f8;
  undefined4 uStack_4f4;
  undefined4 uStack_4f0;
  undefined4 uStack_4ec;
  undefined4 local_4e8;
  undefined4 uStack_4e4;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  undefined4 local_4d8;
  undefined4 uStack_4d4;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined4 local_4c8;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  long local_4b8;
  long lStack_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  
  (*(code *)PTR_custom_config_001f1208)(&local_a58);
                    /* try { // try from 001500b9 to 001500e7 has its CatchHandler @ 0015033d */
  _<toml::de::Deserializer_as_serde_core::de::Deserializer>::deserialize_struct
            (&local_500,local_a50,local_a48,"Comm4Params",0xb,
             &PTR_s_signal_modepv1_alphacost_alphasi_001eae60,0x37);
  if (local_500 == 2) {
    local_978 = local_4a8;
    uStack_970 = uStack_4a0;
    local_988 = local_4b8;
    lStack_980 = lStack_4b0;
    local_998 = local_4c8;
    uStack_994 = uStack_4c4;
    uStack_990 = uStack_4c0;
    uStack_98c = uStack_4bc;
    local_9a8 = local_4d8;
    uStack_9a4 = uStack_4d4;
    uStack_9a0 = uStack_4d0;
    uStack_99c = uStack_4cc;
    local_9b8 = local_4e8;
    uStack_9b4 = uStack_4e4;
    uStack_9b0 = uStack_4e0;
    uStack_9ac = uStack_4dc;
    local_9c8 = local_4f8;
    uStack_9c4 = uStack_4f4;
    uStack_9c0 = uStack_4f0;
    uStack_9bc = uStack_4ec;
    local_a38 = 200;
    if (local_a48 < 200) {
      local_a38 = local_a48;
    }
    if ((200 < local_a48) && (*(char *)(local_a50 + local_a38) < -0x40)) {
                    /* try { // try from 00150326 to 0015033a has its CatchHandler @ 00150342 */
      (*(code *)PTR_slice_error_fail_001f1220)
                (local_a50,local_a48,0,local_a38,&PTR_s_strategies_comm_strategy_strateg_001eb1d0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    local_a40 = local_a50;
    local_a30 = &local_9c8;
    local_a28 = PTR_fmt_001f1210;
    local_a20 = &local_a40;
    local_a18 = _<&T_as_core::fmt::Display>::fmt;
    local_a10 = &PTR_s__custom__parse_error____Raw__001eb1e8;
    local_a08 = 2;
    local_9f0 = 0;
    local_a00 = &local_a30;
    local_9f8 = 2;
                    /* try { // try from 001501cf to 001501ee has its CatchHandler @ 00150342 */
    (*(code *)PTR_format_inner_001f1218)(local_9e0,&local_a10);
    uVar4 = anyhow::error::_<impl_anyhow::Error>::msg(local_9e0);
    if (CONCAT44(uStack_9ac,uStack_9b0) != 0) {
      (*(code *)PTR___rust_dealloc_001f10f8)
                (CONCAT44(uStack_9a4,local_9a8),CONCAT44(uStack_9ac,uStack_9b0),1);
    }
    if (lStack_980 != 0) {
      (*(code *)PTR___rust_dealloc_001f10f8)(local_978,lStack_980,1);
    }
    puVar3 = PTR___rust_dealloc_001f10f8;
    lVar2 = CONCAT44(uStack_98c,uStack_990);
    if (local_988 != 0) {
      puVar6 = (undefined8 *)(lVar2 + 8);
      lVar5 = local_988;
      do {
        if (puVar6[-1] != 0) {
          (*(code *)puVar3)(*puVar6,puVar6[-1],1);
        }
        puVar6 = puVar6 + 3;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    if (CONCAT44(uStack_994,local_998) != 0) {
      (*(code *)PTR___rust_dealloc_001f10f8)(lVar2,CONCAT44(uStack_994,local_998) * 0x18,8);
    }
  }
  else {
    (*(code *)PTR_memcpy_001f1158)(&local_9c8,&uStack_4f0,0x4c0);
    if ((int)*param_1 != 2) {
      core::ptr::drop_in_place<strategy_comm4::Comm4Params>(param_1);
    }
    *param_1 = local_500;
    param_1[1] = CONCAT44(uStack_4f4,local_4f8);
    (*(code *)PTR_memcpy_001f1158)(param_1 + 2,&local_9c8,0x4c0);
    uVar4 = 0;
  }
  if (local_a58 != 0) {
    (*(code *)PTR___rust_dealloc_001f10f8)(local_a50,local_a58,1);
  }
  return uVar4;
}




// ELF address 0x0000000000054d80; <strategy_comm4::StrategyComm4 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth

/* _<strategy_comm4::StrategyComm4 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth */

undefined8 __rustcall
_<strategy_comm4::StrategyComm4_as_future_backtest_sdk::plugin::StrategyPlugin>::on_depth
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
  
  if (*(long *)(param_1 + 0x518) != 0) {
    uVar11 = core::hash::BuildHasher::hash_one(param_1 + 0x520);
    puVar8 = PTR_bcmp_001f11d8;
    lVar3 = *(long *)(param_1 + 0x500);
    uVar4 = *(ulong *)(param_1 + 0x508);
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
          uVar12 = core::hash::BuildHasher::hash_one(param_1 + 0x520,param_2 + 0x20);
          hashbrown::raw::RawTable<T,A>::remove_entry
                    (&lStack_60,param_1 + 0x500,uVar12,param_2 + 0x20);
          if (lStack_60 == 0) {
            return 0;
          }
          (*(code *)PTR___rust_dealloc_001f10f8)(uStack_58,lStack_60,1);
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




// ELF address 0x0000000000054f60; <strategy_comm4::StrategyComm4 as future_backtest_sdk::plugin::StrategyPlugin>::on_finish

/* _<strategy_comm4::StrategyComm4 as future_backtest_sdk::plugin::StrategyPlugin>::on_finish */

undefined8 __rustcall
_<strategy_comm4::StrategyComm4_as_future_backtest_sdk::plugin::StrategyPlugin>::on_finish
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
  
  lVar6 = (*(code *)PTR_para_001f1228)(param_2);
  uVar2 = *(undefined2 *)(lVar6 + 0x34);
  uVar7 = *(undefined8 *)(lVar6 + 0x28);
  local_48 = *(undefined4 *)(lVar6 + 0x18);
  uStack_44 = *(undefined4 *)(lVar6 + 0x1c);
  uStack_40 = *(undefined4 *)(lVar6 + 0x20);
  uStack_3c = *(undefined4 *)(lVar6 + 0x24);
  uVar3 = *(undefined4 *)(lVar6 + 0x30);
  uVar1 = *(undefined1 *)(lVar6 + 0x30);
  _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone
            (&local_80,lVar6,anon_e4cc13efa894b25b7a246eff3efa584e_86_llvm_10741173174604688595);
  local_68 = CONCAT44(uStack_44,local_48);
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_58 = uVar7;
  local_50 = uVar3;
  local_4c = uVar2;
                    /* try { // try from 00154fce to 00154fe6 has its CatchHandler @ 00155063 */
  uVar5 = (*(code *)PTR_is_night_001f1320)(param_2);
  uVar7 = (*(code *)PTR_all_in_001f1268)(param_2,uVar5,uVar1);
  puVar4 = PTR___rust_dealloc_001f10f8;
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
    (*(code *)PTR___rust_dealloc_001f10f8)(local_78,local_80 * 0x18,8);
  }
  return uVar7;
}




// ELF address 0x0000000000050380; <strategy_comm4::StrategyComm4 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _<strategy_comm4::StrategyComm4 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal */

undefined8 ******* __rustcall
_<strategy_comm4::StrategyComm4_as_future_backtest_sdk::plugin::StrategyPlugin>::on_signal
          (int *param_1,long param_2,undefined8 param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  uint uVar6;
  undefined8 *******pppppppuVar7;
  undefined8 *******pppppppuVar8;
  char cVar9;
  char cVar10;
  undefined1 uVar11;
  byte bVar12;
  int iVar13;
  uint uVar14;
  long lVar15;
  undefined8 *******pppppppuVar16;
  ulong uVar17;
  double *pdVar18;
  byte *pbVar19;
  byte bVar20;
  undefined8 *puVar21;
  undefined *puVar22;
  long extraout_RDX;
  long extraout_RDX_00;
  long lVar23;
  undefined8 *******pppppppuVar24;
  int *piVar25;
  undefined *puVar26;
  undefined8 uVar27;
  long lVar28;
  long *plVar29;
  long lVar30;
  bool bVar31;
  double extraout_XMM0_Qa;
  int *extraout_XMM0_Qa_00;
  undefined8 ******extraout_XMM0_Qa_01;
  double dVar32;
  undefined8 ******ppppppuVar33;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  double extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  undefined8 extraout_XMM0_Qb_04;
  undefined8 extraout_XMM0_Qb_05;
  undefined8 extraout_XMM0_Qb_06;
  undefined8 ******extraout_XMM1_Qa;
  undefined8 ******ppppppuVar34;
  undefined8 extraout_XMM1_Qb;
  double dVar35;
  undefined8 ******ppppppuVar36;
  undefined8 ******ppppppuVar37;
  double dVar38;
  undefined8 ******ppppppuVar39;
  undefined1 auVar40 [12];
  char local_fb1;
  undefined8 local_fb0;
  double local_fa8;
  undefined8 uStack_fa0;
  undefined1 uStack_f8a;
  char cStack_f89;
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
  undefined8 ******local_f58;
  undefined8 uStack_f50;
  int *local_f48;
  undefined8 uStack_f40;
  undefined8 ******ppppppuStack_f30;
  undefined8 ******local_f28;
  double dStack_f20;
  undefined8 ******local_f18;
  undefined8 uStack_f10;
  undefined8 *******local_f00;
  undefined8 *******local_ef8;
  undefined8 uStack_ef0;
  undefined8 ******ppppppuStack_ee0;
  undefined8 *******local_ed8;
  undefined8 *******pppppppuStack_ed0;
  undefined8 *******local_ec8;
  code *local_ec0;
  undefined8 *******local_eb8;
  code *pcStack_eb0;
  undefined8 *******pppppppuStack_ea8;
  code *pcStack_ea0;
  double dStack_e98;
  long local_e90;
  undefined8 ******local_e88;
  undefined8 uStack_e80;
  undefined8 *******local_e78;
  undefined8 *******pppppppuStack_e70;
  undefined8 *******local_e68;
  undefined8 *******pppppppuStack_e60;
  undefined8 *******pppppppuStack_e58;
  undefined8 *******pppppppuStack_e50;
  undefined8 ******local_e40;
  undefined8 ******local_e38;
  undefined8 uStack_e30;
  undefined8 *******local_e28;
  undefined8 *******pppppppuStack_e20;
  undefined8 *******pppppppuStack_e18;
  code *pcStack_e10;
  undefined8 *******local_e08;
  code *local_e00;
  undefined8 *******pppppppuStack_df8;
  code *pcStack_df0;
  double *pdStack_de8;
  undefined *puStack_de0;
  undefined8 ******ppppppuStack_dd8;
  code *pcStack_dd0;
  undefined8 *******pppppppuStack_dc8;
  code *pcStack_dc0;
  undefined8 *******pppppppuStack_db8;
  code *pcStack_db0;
  undefined8 ******ppppppuStack_d20;
  undefined8 *******local_d18;
  undefined8 *******pppppppuStack_d10;
  undefined8 local_d08;
  double local_cf8;
  undefined8 ******ppppppuStack_cf0;
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
  code *pcStack_c90;
  undefined8 local_c80;
  undefined8 local_c78;
  undefined4 local_c6c;
  undefined8 *******local_c68;
  undefined8 *******pppppppuStack_c60;
  undefined8 *******local_c58;
  code *pcStack_c50;
  undefined8 *******local_c48;
  double dStack_c40;
  double dStack_c38;
  double dStack_c30;
  undefined8 uStack_c28;
  undefined8 uStack_c20;
  undefined8 uStack_c18;
  double dStack_c10;
  double dStack_c08;
  undefined1 local_c00;
  char cStack_bff;
  double local_bf8;
  undefined8 uStack_bf0;
  double local_be8;
  double dStack_be0;
  code *local_bd8;
  undefined8 uStack_bd0;
  undefined8 *******local_bc8;
  undefined8 uStack_bc0;
  undefined8 *******local_bb8;
  undefined8 uStack_bb0;
  undefined8 *******local_ba8;
  undefined8 uStack_ba0;
  undefined8 *******local_b90;
  undefined8 *******local_b88;
  long local_b80;
  undefined8 *******local_b78;
  long local_b70;
  long local_b68;
  undefined8 local_b60;
  long local_b50;
  long *local_b48;
  long local_b40;
  double local_b38;
  undefined8 uStack_b30;
  double local_b28;
  undefined4 local_b20;
  undefined2 local_b1c;
  undefined8 ******local_b18;
  double dStack_b10;
  undefined8 local_b08;
  undefined8 uStack_b00;
  undefined8 *******local_af8;
  undefined8 *******local_af0;
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
  undefined8 local_888;
  ulong local_880;
  double local_878;
  double local_870;
  undefined8 local_868;
  undefined8 *******local_860;
  undefined8 *******local_858;
  undefined8 *******local_850;
  code *local_848;
  double local_840;
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
  undefined8 local_768;
  undefined8 local_760;
  undefined8 *******local_758;
  undefined8 *******local_750;
  undefined8 *******local_748;
  undefined1 local_740;
  undefined4 uStack_73f;
  undefined3 uStack_73b;
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
  undefined8 local_678;
  undefined8 local_670;
  undefined8 *******local_668;
  undefined8 *******local_660;
  undefined8 *******local_658;
  undefined1 local_650;
  undefined4 uStack_64f;
  undefined3 uStack_64b;
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
  undefined8 local_588;
  undefined8 local_580;
  undefined8 *******local_578;
  undefined8 *******local_570;
  undefined8 *******pppppppuStack_568;
  undefined1 local_560;
  undefined8 *******local_558;
  undefined8 *******pppppppuStack_550;
  undefined8 *******local_548;
  undefined8 *******local_540;
  undefined8 *******pppppppuStack_538;
  undefined8 *******local_530;
  undefined8 *******local_528;
  undefined8 *******local_520;
  undefined8 *******local_518;
  undefined8 *******local_510;
  undefined8 *******pppppppuStack_508;
  undefined8 *******local_500;
  undefined8 *******local_4f8;
  undefined8 *******pppppppuStack_4f0;
  undefined8 *******local_4e8;
  double dStack_4d8;
  undefined8 local_4d0;
  double local_4c8;
  undefined8 uStack_4c0;
  undefined8 *******local_4b8;
  undefined8 uStack_4b0;
  int *local_4a8;
  undefined8 uStack_4a0;
  int *local_498;
  undefined8 uStack_490;
  undefined8 ******local_488;
  undefined8 uStack_480;
  undefined8 ******local_478;
  double dStack_470;
  undefined8 ******local_468;
  undefined8 uStack_460;
  undefined8 ******local_458;
  undefined8 uStack_450;
  double local_448;
  double dStack_440;
  double local_438;
  undefined8 ******ppppppuStack_430;
  undefined8 ******local_428;
  double dStack_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  double local_3e8;
  int *local_3e0;
  undefined8 ******ppppppuStack_3d8;
  double local_3d0;
  ulong local_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined1 local_3a0;
  char local_39f;
  char local_39e;
  byte local_39d;
  undefined1 local_39c;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  double dStack_380;
  undefined8 ******ppppppuStack_378;
  undefined8 *******pppppppuStack_370;
  undefined8 ******ppppppuStack_368;
  undefined8 uStack_360;
  undefined8 ******ppppppuStack_358;
  undefined1 uStack_350;
  char cStack_34f;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  double dStack_330;
  undefined8 ******ppppppuStack_328;
  undefined8 *******pppppppuStack_320;
  undefined8 ******ppppppuStack_318;
  undefined8 uStack_310;
  undefined8 ******ppppppuStack_308;
  undefined1 uStack_300;
  byte bStack_2ff;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  int *local_2d8;
  undefined8 ******ppppppuStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  double dStack_290;
  undefined8 ******ppppppuStack_288;
  undefined8 *******pppppppuStack_280;
  undefined8 ******ppppppuStack_278;
  undefined8 uStack_270;
  undefined8 ******ppppppuStack_268;
  undefined2 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  double dStack_240;
  undefined8 ******ppppppuStack_238;
  undefined8 *******pppppppuStack_230;
  undefined8 ******ppppppuStack_228;
  undefined8 ******ppppppuStack_220;
  undefined8 ******ppppppuStack_218;
  undefined2 uStack_210;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 *******local_1a0;
  undefined8 *******pppppppuStack_198;
  undefined8 *******local_190;
  undefined8 *******local_188;
  undefined8 *******pppppppuStack_180;
  undefined8 *******local_178;
  undefined8 ******ppppppuStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  int local_150 [2];
  double dStack_148;
  byte local_140;
  undefined7 uStack_13f;
  double dStack_138;
  long local_130;
  undefined8 local_128;
  double local_110;
  undefined8 *******local_108 [10];
  undefined8 *******local_b8 [14];
  undefined1 auStack_48 [24];
  
  local_fb0 = param_3;
  lVar15 = (*(code *)PTR_para_001f1228)(param_3);
  uVar1 = *(undefined2 *)(lVar15 + 0x34);
  local_fa8 = *(double *)(lVar15 + 0x28);
  local_f88 = *(undefined8 ********)(lVar15 + 0x18);
  uStack_f80 = *(undefined8 *)(lVar15 + 0x20);
  uVar2 = *(undefined4 *)(lVar15 + 0x30);
  _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone
            (&local_b50,lVar15,anon_e4cc13efa894b25b7a246eff3efa584e_86_llvm_10741173174604688595);
  local_b38 = (double)local_f88;
  uStack_b30 = uStack_f80;
  local_b28 = local_fa8;
  local_b20 = uVar2;
  local_b1c = uVar1;
  if (*param_1 == 2) {
                    /* try { // try from 001519c4 to 001519dc has its CatchHandler @ 00154d0a */
    (*(code *)PTR_expect_failed_001f1278)
              ("on_begin must be called first",0x1d,&PTR_s_strategies_comm_strategy_strateg_001eb220
              );
    goto LAB_001519dd;
  }
                    /* try { // try from 00150416 to 0015042a has its CatchHandler @ 00154d0a */
  (*(code *)PTR_clone_001f1230)
            (&local_ca8,param_1 + 0xc4,&PTR_s_strategies_comm_strategy_strateg_001eb470);
  local_fa8 = *(double *)(param_1 + 0xe8);
  uStack_fa0 = *(undefined8 *)(param_1 + 0xea);
                    /* try { // try from 0015043e to 00150452 has its CatchHandler @ 00154d05 */
  (*(code *)PTR_clone_001f1230)
            (&local_e78,param_1 + 0xca,&PTR_s_strategies_comm_strategy_strateg_001eb470);
  pppppppuVar16 = *(undefined8 ********)(param_1 + 0xd4);
  uVar17 = (long)pppppppuVar16 * 8;
  if (uVar17 < 0x7ffffffffffffff9 && (ulong)pppppppuVar16 >> 0x3d == 0) {
    local_ef8 = *(undefined8 ********)(param_1 + 0xec);
    uStack_ef0 = *(undefined8 *)(param_1 + 0xee);
    uVar3 = *(undefined8 *)(param_1 + 0xd2);
    local_e90 = param_2;
    if (uVar17 == 0) {
      local_f00 = (undefined8 *******)&DAT_00000008;
      local_f88 = (undefined8 *******)0x0;
      pppppppuVar24 = local_f88;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001f1118)();
      uVar27 = 8;
      local_f00 = (undefined8 *******)(*(code *)PTR___rust_alloc_001f10f0)(uVar17,8);
      pppppppuVar24 = pppppppuVar16;
      if (local_f00 == (undefined8 *******)0x0) goto LAB_00150487;
    }
    local_f88 = pppppppuVar24;
    (*(code *)PTR_memcpy_001f1158)(local_f00,uVar3,uVar17);
    local_cc8 = *(int **)(param_1 + 0xf0);
    uStack_cc0 = *(undefined8 *)(param_1 + 0xf2);
    iVar13 = param_1[0x132];
    local_f48 = *(int **)(param_1 + 0xf4);
    uStack_f40 = *(undefined8 *)(param_1 + 0xf6);
    local_f18 = *(undefined8 *******)(param_1 + 0xf8);
    uStack_f10 = *(undefined8 *)(param_1 + 0xfa);
    local_f28 = *(undefined8 *******)(param_1 + 0xfc);
    dStack_f20 = *(double *)(param_1 + 0xfe);
    cVar10 = *(char *)((long)param_1 + 0x4c9);
    local_f58 = *(undefined8 *******)(param_1 + 0x100);
    uStack_f50 = *(undefined8 *)(param_1 + 0x102);
    local_e88 = *(undefined8 *******)(param_1 + 0x104);
    uStack_e80 = *(undefined8 *)(param_1 + 0x106);
    local_be8 = *(double *)(param_1 + 0x108);
    dStack_be0 = *(double *)(param_1 + 0x10a);
    local_cf8 = *(double *)(param_1 + 0x10c);
    ppppppuStack_cf0 = *(undefined8 *******)(param_1 + 0x10e);
    local_b18 = *(undefined8 *******)(param_1 + 0x110);
    dStack_b10 = *(double *)(param_1 + 0x112);
    uVar27 = *(undefined8 *)param_1;
    local_ba8 = *(undefined8 ********)(param_1 + 2);
    local_bb8 = *(undefined8 ********)(param_1 + 4);
    local_bc8 = *(undefined8 ********)(param_1 + 6);
    local_bd8 = *(code **)(param_1 + 8);
    local_bf8 = *(double *)(param_1 + 10);
    local_c78 = *(undefined8 *)(param_1 + 0xc);
    local_c80 = *(undefined8 *)(param_1 + 0xe);
    local_b08 = *(undefined8 *)(param_1 + 0x114);
    uStack_b00 = *(undefined8 *)(param_1 + 0x116);
    local_2b8 = *(undefined8 *)(param_1 + 0x118);
    uStack_2b0 = *(undefined8 *)(param_1 + 0x11a);
    local_f59 = *(char *)((long)param_1 + 0x4ca);
    local_2c8 = *(undefined8 *)(param_1 + 0x11c);
    uStack_2c0 = *(undefined8 *)(param_1 + 0x11e);
    local_870 = *(double *)(param_1 + 0x120);
                    /* try { // try from 00150650 to 00150664 has its CatchHandler @ 00154cdc */
    (*(code *)PTR_clone_001f1230)
              (&local_ed8,param_1 + 0xd6,&PTR_s_strategies_comm_strategy_strateg_001eb470);
    local_2d8 = *(int **)(param_1 + 0x122);
    ppppppuStack_2d0 = *(undefined8 *******)(param_1 + 0x124);
    local_878 = *(double *)(param_1 + 0x126);
    local_880 = *(ulong *)(param_1 + 0x128);
    local_f5a = *(byte *)((long)param_1 + 0x4cb);
    local_f5b = (undefined1)param_1[0x133];
                    /* try { // try from 001506b1 to 001506c5 has its CatchHandler @ 00154cb7 */
    (*(code *)PTR_clone_001f1230)
              (&local_c68,param_1 + 0xdc,&PTR_s_strategies_comm_strategy_strateg_001eb470);
                    /* try { // try from 001506cd to 001506e1 has its CatchHandler @ 00154c92 */
    (*(code *)PTR_clone_001f1230)
              (local_150,param_1 + 0xe2,&PTR_s_strategies_comm_strategy_strateg_001eb470);
    local_2e8 = *(undefined8 *)(param_1 + 0x12a);
    uStack_2e0 = *(undefined8 *)(param_1 + 300);
    local_2f8 = *(undefined8 *)(param_1 + 0x12e);
    uStack_2f0 = *(undefined8 *)(param_1 + 0x130);
    local_888 = *(undefined8 *)(param_1 + 0x10);
    local_890 = *(undefined8 *)(param_1 + 0x12);
    local_898 = *(undefined8 *)(param_1 + 0x14);
    local_8a0 = *(undefined8 *)(param_1 + 0x16);
    local_8a8 = *(undefined8 *)(param_1 + 0x18);
    local_8b0 = *(undefined8 *)(param_1 + 0x1a);
    local_8b8 = *(undefined8 *)(param_1 + 0x1c);
    local_8c0 = *(undefined8 *)(param_1 + 0x1e);
    local_8c8 = *(undefined8 *)(param_1 + 0x20);
    local_8d0 = *(undefined8 *)(param_1 + 0x22);
    local_8d8 = *(undefined8 *)(param_1 + 0x24);
    local_8e0 = *(undefined8 *)(param_1 + 0x26);
    local_8e8 = *(undefined8 *)(param_1 + 0x28);
    local_8f0 = *(undefined8 *)(param_1 + 0x2a);
    local_8f8 = *(undefined8 *)(param_1 + 0x2c);
    local_900 = *(undefined8 *)(param_1 + 0x2e);
    local_f5c = (undefined1)param_1[0x4a];
    local_908 = *(undefined8 *)(param_1 + 0x30);
    local_910 = *(undefined8 *)(param_1 + 0x32);
    local_918 = *(undefined8 *)(param_1 + 0x34);
    local_920 = *(undefined8 *)(param_1 + 0x36);
    local_928 = *(undefined8 *)(param_1 + 0x38);
    local_930 = *(undefined8 *)(param_1 + 0x3a);
    local_938 = *(undefined8 *)(param_1 + 0x3c);
    local_940 = *(undefined8 *)(param_1 + 0x3e);
    local_948 = *(undefined8 *)(param_1 + 0x40);
    local_950 = *(undefined8 *)(param_1 + 0x42);
    if (*(long *)(param_1 + 0x44) == -0x8000000000000000) {
      local_cb0 = (undefined8 *******)0x8000000000000000;
    }
    else {
                    /* try { // try from 001508a6 to 001508c1 has its CatchHandler @ 00154c6d */
      (*(code *)PTR_clone_001f1230)
                (&local_e28,param_1 + 0x44,&PTR_s__home_lyt__rustup_toolchains_nig_001eb578);
      local_cb0 = local_e28;
      local_b88 = pppppppuStack_e20;
      local_af0 = pppppppuStack_e18;
    }
    local_958 = *(undefined8 *)(param_1 + 0x4c);
    local_960 = *(undefined8 *)(param_1 + 0x4e);
    local_968 = *(undefined8 *)(param_1 + 0x50);
    local_970 = *(undefined8 *)(param_1 + 0x52);
    local_978 = *(undefined8 *)(param_1 + 0x54);
    local_980 = *(undefined8 *)(param_1 + 0x56);
    local_988 = *(undefined8 *)(param_1 + 0x58);
    local_990 = *(undefined8 *)(param_1 + 0x5a);
    local_998 = *(undefined8 *)(param_1 + 0x5c);
    local_9a0 = *(undefined8 *)(param_1 + 0x5e);
    local_9a8 = *(undefined8 *)(param_1 + 0x60);
    local_9b0 = *(undefined8 *)(param_1 + 0x62);
    local_9b8 = *(undefined8 *)(param_1 + 100);
    local_9c0 = *(undefined8 *)(param_1 + 0x66);
    local_9c8 = *(undefined8 *)(param_1 + 0x68);
    local_9d0 = *(undefined8 *)(param_1 + 0x6a);
    local_f5d = (undefined1)param_1[0x86];
    local_9d8 = *(undefined8 *)(param_1 + 0x6c);
    local_9e0 = *(undefined8 *)(param_1 + 0x6e);
    local_9e8 = *(undefined8 *)(param_1 + 0x70);
    local_9f0 = *(undefined8 *)(param_1 + 0x72);
    local_9f8 = *(undefined8 *)(param_1 + 0x74);
    local_a00 = *(undefined8 *)(param_1 + 0x76);
    local_a08 = *(undefined8 *)(param_1 + 0x78);
    local_a10 = *(undefined8 *)(param_1 + 0x7a);
    local_a18 = *(undefined8 *)(param_1 + 0x7c);
    local_a20 = *(undefined8 *)(param_1 + 0x7e);
    if (*(long *)(param_1 + 0x80) == -0x8000000000000000) {
      local_cb8 = (undefined8 *******)0x8000000000000000;
    }
    else {
                    /* try { // try from 00150ab0 to 00150acb has its CatchHandler @ 00154c38 */
      (*(code *)PTR_clone_001f1230)
                (&local_e28,param_1 + 0x80,&PTR_s__home_lyt__rustup_toolchains_nig_001eb578);
      local_cb8 = local_e28;
      local_b90 = pppppppuStack_e20;
      local_af8 = pppppppuStack_e18;
    }
    local_a28 = *(undefined8 *)(param_1 + 0x88);
    local_a30 = *(undefined8 *)(param_1 + 0x8a);
    local_a38 = *(undefined8 *)(param_1 + 0x8c);
    local_a40 = *(undefined8 *)(param_1 + 0x8e);
    local_a48 = *(undefined8 *)(param_1 + 0x90);
    local_a50 = *(undefined8 *)(param_1 + 0x92);
    local_a58 = *(undefined8 *)(param_1 + 0x94);
    local_a60 = *(undefined8 *)(param_1 + 0x96);
    local_a68 = *(undefined8 *)(param_1 + 0x98);
    local_a70 = *(undefined8 *)(param_1 + 0x9a);
    local_a78 = *(undefined8 *)(param_1 + 0x9c);
    local_a80 = *(undefined8 *)(param_1 + 0x9e);
    local_a88 = *(undefined8 *)(param_1 + 0xa0);
    local_a90 = *(undefined8 *)(param_1 + 0xa2);
    local_a98 = *(undefined8 *)(param_1 + 0xa4);
    local_aa0 = *(undefined8 *)(param_1 + 0xa6);
    local_f5e = (undefined1)param_1[0xc2];
    local_aa8 = *(undefined8 *)(param_1 + 0xa8);
    local_ab0 = *(undefined8 *)(param_1 + 0xaa);
    local_ab8 = *(undefined8 *)(param_1 + 0xac);
    local_ac0 = *(undefined8 *)(param_1 + 0xae);
    local_ac8 = *(undefined8 *)(param_1 + 0xb0);
    local_ad0 = *(undefined8 *)(param_1 + 0xb2);
    uVar3 = *(undefined8 *)(param_1 + 0xb4);
    local_ad8 = *(undefined8 *)(param_1 + 0xb6);
    local_ae0 = *(undefined8 *)(param_1 + 0xb8);
    local_ae8 = *(undefined8 *)(param_1 + 0xba);
    local_578 = (undefined8 *******)0x8000000000000000;
    if (*(long *)(param_1 + 0xbc) != -0x8000000000000000) {
                    /* try { // try from 00150cae to 00150cc9 has its CatchHandler @ 00154c03 */
      (*(code *)PTR_clone_001f1230)
                (&local_e28,param_1 + 0xbc,&PTR_s__home_lyt__rustup_toolchains_nig_001eb578);
      local_ce8 = pppppppuStack_e20;
      pppppppuStack_ce0 = pppppppuStack_e18;
      local_578 = local_e28;
    }
    plVar29 = local_b48;
    puVar26 = PTR_bcmp_001f11d8;
    local_558 = local_ca8;
    pppppppuStack_550 = pppppppuStack_ca0;
    local_548 = local_c98;
    local_4c8 = local_fa8;
    uStack_4c0 = uStack_fa0;
    local_540 = local_e78;
    pppppppuStack_538 = pppppppuStack_e70;
    local_530 = local_e68;
    local_4b8 = local_ef8;
    uStack_4b0 = uStack_ef0;
    local_528 = local_f88;
    local_520 = local_f00;
    local_4a8 = local_cc8;
    uStack_4a0 = uStack_cc0;
    local_498 = local_f48;
    uStack_490 = uStack_f40;
    local_488 = local_f18;
    uStack_480 = uStack_f10;
    local_478 = local_f28;
    dStack_470 = dStack_f20;
    local_468 = local_f58;
    uStack_460 = uStack_f50;
    local_458 = local_e88;
    uStack_450 = uStack_e80;
    local_448 = local_be8;
    dStack_440 = dStack_be0;
    local_438 = local_cf8;
    ppppppuStack_430 = ppppppuStack_cf0;
    local_428 = local_b18;
    dStack_420 = dStack_b10;
    local_860 = local_ba8;
    local_858 = local_bb8;
    local_850 = local_bc8;
    local_848 = local_bd8;
    local_840 = local_bf8;
    local_838 = local_c78;
    local_830 = local_c80;
    local_418 = local_b08;
    uStack_410 = uStack_b00;
    local_408 = local_2b8;
    uStack_400 = uStack_2b0;
    local_39e = local_f59;
    local_3f8 = local_2c8;
    uStack_3f0 = uStack_2c0;
    local_3e8 = local_870;
    local_510 = local_ed8;
    pppppppuStack_508 = pppppppuStack_ed0;
    local_500 = local_ec8;
    local_3e0 = local_2d8;
    ppppppuStack_3d8 = ppppppuStack_2d0;
    local_3d0 = local_878;
    local_3c8 = local_880;
    local_39d = local_f5a;
    local_39c = local_f5b;
    local_4f8 = local_c68;
    pppppppuStack_4f0 = pppppppuStack_c60;
    local_4e8 = local_c58;
    dStack_4d8 = dStack_148;
    local_4d0 = CONCAT71(uStack_13f,local_140);
    local_3c0 = local_2e8;
    uStack_3b8 = uStack_2e0;
    local_3b0 = local_2f8;
    uStack_3a8 = uStack_2f0;
    local_828 = local_888;
    local_820 = local_890;
    local_818 = local_898;
    local_810 = local_8a0;
    local_808 = local_8a8;
    local_800 = local_8b0;
    local_7f8 = local_8b8;
    local_7f0 = local_8c0;
    local_7e8 = local_8c8;
    local_7e0 = local_8d0;
    local_7d8 = local_8d8;
    local_7d0 = local_8e0;
    local_7c8 = local_8e8;
    local_7c0 = local_8f0;
    local_7b8 = local_8f8;
    local_7b0 = local_900;
    local_7a8 = local_908;
    local_7a0 = local_910;
    local_798 = local_918;
    local_790 = local_920;
    local_788 = local_928;
    local_780 = local_930;
    local_778 = local_938;
    local_770 = local_940;
    local_768 = local_948;
    local_760 = local_950;
    local_758 = local_cb0;
    local_750 = local_b88;
    local_748 = local_af0;
    local_740 = local_f5c;
    uStack_73b = (undefined3)((ulong)local_d18 >> 0x20);
    uStack_73f = local_d18._0_4_;
    local_738 = local_958;
    local_730 = local_960;
    local_728 = local_968;
    local_720 = local_970;
    local_718 = local_978;
    local_710 = local_980;
    local_708 = local_988;
    local_700 = local_990;
    local_6f8 = local_998;
    local_6f0 = local_9a0;
    local_6e8 = local_9a8;
    local_6e0 = local_9b0;
    local_6d8 = local_9b8;
    local_6d0 = local_9c0;
    local_6c8 = local_9c8;
    local_6c0 = local_9d0;
    local_6b8 = local_9d8;
    local_6b0 = local_9e0;
    local_6a8 = local_9e8;
    local_6a0 = local_9f0;
    local_698 = local_9f8;
    local_690 = local_a00;
    local_688 = local_a08;
    local_680 = local_a10;
    local_678 = local_a18;
    local_670 = local_a20;
    local_668 = local_cb8;
    local_660 = local_b90;
    local_658 = local_af8;
    local_650 = local_f5d;
    uStack_64b = (undefined3)((ulong)local_e28 >> 0x20);
    uStack_64f = (int)local_e28;
    local_648 = local_a28;
    local_640 = local_a30;
    local_638 = local_a38;
    local_630 = local_a40;
    local_628 = local_a48;
    local_620 = local_a50;
    local_618 = local_a58;
    local_610 = local_a60;
    local_608 = local_a68;
    local_600 = local_a70;
    local_5f8 = local_a78;
    local_5f0 = local_a80;
    local_5e8 = local_a88;
    local_5e0 = local_a90;
    local_5d8 = local_a98;
    local_5d0 = local_aa0;
    local_5c8 = local_aa8;
    local_5c0 = local_ab0;
    local_5b8 = local_ab8;
    local_5b0 = local_ac0;
    local_5a8 = local_ac8;
    local_5a0 = local_ad0;
    local_590 = local_ad8;
    local_588 = local_ae0;
    local_580 = local_ae8;
    local_570 = local_ce8;
    pppppppuStack_568 = pppppppuStack_ce0;
    local_560 = local_f5e;
    local_868 = uVar27;
    local_598 = uVar3;
    local_518 = pppppppuVar16;
    local_3a0 = (char)iVar13;
    local_39f = cVar10;
    if (local_b40 != 0) {
      local_ef8 = (undefined8 *******)(local_e90 + 0x48);
      local_fa8 = *(double *)(local_e90 + 0x50);
      lVar15 = *(long *)(local_e90 + 0x58);
      lVar30 = local_b40 * 0x18;
      lVar28 = 0;
      do {
        if ((*(long *)((long)plVar29 + lVar28 + 0x10) == lVar15) &&
           (iVar13 = (*(code *)puVar26)(*(undefined8 *)((long)plVar29 + lVar28 + 8),local_fa8,lVar15
                                       ), iVar13 == 0)) {
                    /* try { // try from 00151618 to 0015162a has its CatchHandler @ 00154bde */
          (*(code *)PTR_trade_codes_001f1238)(&local_b80,local_fb0);
          lVar30 = local_b70;
          local_f88 = local_b78;
          if (local_b70 == 0) {
            pppppppuVar16 = (undefined8 *******)0x0;
            goto LAB_00151851;
          }
          local_f00 = *(undefined8 ********)(local_e90 + 8);
          lVar28 = *(long *)(local_e90 + 0x10);
          lVar5 = local_b70 * 0x18;
          lVar23 = 0;
          local_cc8 = param_1;
          goto LAB_0015168d;
        }
        lVar28 = lVar28 + 0x18;
      } while (lVar30 != lVar28);
    }
    pppppppuVar16 = (undefined8 *******)0x0;
LAB_0015178d:
    core::ptr::drop_in_place<strategy_comm4::Comm4Params>(&local_868);
    puVar26 = PTR___rust_dealloc_001f10f8;
    if (local_b40 != 0) {
      plVar29 = local_b48 + 1;
      lVar15 = local_b40;
      do {
        if (plVar29[-1] != 0) {
          (*(code *)puVar26)(*plVar29,plVar29[-1],1);
        }
        plVar29 = plVar29 + 3;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
    }
    if (local_b50 != 0) {
      (*(code *)PTR___rust_dealloc_001f10f8)(local_b48,local_b50 * 0x18,8);
    }
    return pppppppuVar16;
  }
  uVar27 = 0;
LAB_00150487:
                    /* try { // try from 00150487 to 00150499 has its CatchHandler @ 00154d22 */
  (*(code *)PTR_handle_error_001f11b0)
            (uVar27,uVar17,anon_73739a5cac12f1921af40bedd8edd74c_9_llvm_2902486534491772817);
LAB_001519dd:
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
  while (lVar23 = lVar23 + 0x18, lVar5 != lVar23) {
LAB_0015168d:
    if ((*(long *)((long)local_f88 + lVar23 + 0x10) == lVar28) &&
       (iVar13 = (*(code *)puVar26)(*(undefined8 *)((long)local_f88 + lVar23 + 8),local_f00,lVar28),
       iVar13 == 0)) {
      cVar10 = *(char *)(local_e90 + 0x94);
      uVar11 = (undefined1)local_b20;
                    /* try { // try from 001516ce to 0015173b has its CatchHandler @ 00154bcc */
      (*(code *)PTR_inst_start_time_sec_001f1240)(local_fb0);
      piVar25 = local_cc8;
      cVar9 = (*(code *)PTR_is_trade_start_001f1248)(local_fb0,cVar10);
      if (cVar9 != '\0') {
        cVar9 = (*(code *)PTR_is_trade_end_001f1250)(local_fb0,cVar10);
        if (cVar9 != '\0') {
          if (cVar10 == '\0') {
            if ((char)local_b1c != '\0') goto LAB_0015191d;
          }
          else if (local_b20._3_1_ == '\x01') {
LAB_0015191d:
                    /* try { // try from 0015191d to 0015192d has its CatchHandler @ 00154bcc */
            pppppppuVar16 =
                 (undefined8 *******)(*(code *)PTR_all_in_001f1268)(local_fb0,cVar10,uVar11);
            goto LAB_00151819;
          }
        }
        (*(code *)PTR_clone_001f1230)
                  (&local_f78,local_e90,&PTR_s_strategies_comm_strategy_strateg_001eb238);
                    /* try { // try from 0015173c to 00151758 has its CatchHandler @ 00154b48 */
        (*(code *)PTR_clone_001f1230)
                  (&local_b68,local_ef8,&PTR_s_strategies_comm_strategy_strateg_001eb250);
                    /* try { // try from 00151763 to 00151775 has its CatchHandler @ 00154b43 */
        (*(code *)PTR_depth_001f1258)(&local_e28,local_fb0,local_f70);
        if ((int)local_e28 == 2) {
          pppppppuVar16 = (undefined8 *******)0x0;
        }
        else {
          (*(code *)PTR_memcpy_001f1158)(local_150,&local_e28,0x108);
          pppppppuVar16 = (undefined8 *******)0x0;
          local_f88 = local_108[0];
          if ((0.0 < (double)local_108[0]) && (local_ef8 = local_b8[0], 0.0 < (double)local_b8[0]))
          {
                    /* try { // try from 001518d8 to 001518eb has its CatchHandler @ 00154b3e */
            local_f00 = (undefined8 *******)(*(code *)PTR_time_sec_001f1260)(local_fb0);
            if ((double)DAT_00116300 < (double)local_f00 - local_110) {
              pppppppuVar16 = (undefined8 *******)0x0;
              goto LAB_001528e7;
            }
                    /* try { // try from 00151936 to 00151995 has its CatchHandler @ 00154b3e */
            auVar40 = (*(code *)PTR_signal_parameter_id_001f1270)(local_fa8,lVar15);
            local_c6c = 0;
            if ((auVar40 & (undefined1  [12])0x1) != (undefined1  [12])0x0) {
              local_c6c = auVar40._8_4_;
            }
            if (local_39e == '\x01') {
              (*(code *)PTR_clone_001f1230)
                        (&local_ed8,&local_f78,&PTR_s_strategies_comm_strategy_strateg_001eb268);
              hashbrown::rustc_entry::_<impl_hashbrown::map::HashMap<K,V,S,A>>::rustc_entry
                        (&local_e28,piVar25 + 0x14c,&local_ed8);
              if (local_e28 == (undefined8 *******)0x8000000000000000) {
                local_c68 = (undefined8 *******)0x8000000000000000;
              }
              else {
                local_c48 = local_e08;
                pcStack_c50 = pcStack_e10;
                local_c68 = local_e28;
              }
              local_c58 = pppppppuStack_e18;
              pppppppuStack_c60 = pppppppuStack_e20;
              uVar27 = std::collections::hash::map::Entry<K,V>::or_insert_with
                                 (local_3f8,uStack_3f0,&local_c68);
                    /* try { // try from 00151a41 to 00151b0a has its CatchHandler @ 00154b3e */
              uVar17 = strategy_comm4::vol_spread_ratio::VolSpreadRatio::update
                                 ((double)local_f00 * _DAT_001163d8,local_ef8,local_f88,uVar27);
              puVar26 = PTR_K1_MAP_G1_LOW_001f1280;
              if (((uVar17 & 1) == 0) || (local_3e8 < extraout_XMM0_Qa)) goto LAB_00151a92;
              cVar10 = '\x01';
              if (*(long *)(PTR_K1_MAP_G1_LOW_001f1280 + 0x30) != 2) {
                once_cell::imp::OnceCell<T>::initialize
                          (PTR_K1_MAP_G1_LOW_001f1280,PTR_K1_MAP_G1_LOW_001f1280);
              }
            }
            else {
LAB_00151a92:
              puVar26 = PTR_K1_MAP_G2_HIGH_001f1288;
              if (*(long *)(PTR_K1_MAP_G2_HIGH_001f1288 + 0x30) != 2) {
                    /* try { // try from 00154a4e to 00154a58 has its CatchHandler @ 00154b3e */
                once_cell::imp::OnceCell<T>::initialize
                          (PTR_K1_MAP_G2_HIGH_001f1288,PTR_K1_MAP_G2_HIGH_001f1288);
              }
              cVar10 = '\0';
            }
            lVar15 = hashbrown::map::HashMap<K,V,S,A>::get_inner(puVar26,&local_c6c);
            pdVar18 = (double *)&DAT_00116300;
            if (lVar15 != 0) {
              pdVar18 = (double *)(lVar15 + 8);
            }
            local_e40 = (undefined8 ******)*pdVar18;
            local_fb1 = cVar10;
            if (local_39d == 0) {
              local_fa8 = 0.0;
              uVar17 = 0;
              uVar14 = 0;
            }
            else {
              uVar27 = core::str::_<impl_str>::trim_end_matches(local_f70,local_f68);
              _<T_as_alloc::slice::<impl[T]>::to_vec_in::ConvertVec>::to_vec(&local_e28,uVar27);
              local_ec8 = pppppppuStack_e18;
              local_ed8 = local_e28;
              pppppppuStack_ed0 = pppppppuStack_e20;
              local_f58 = (undefined8 ******)(piVar25 + 0x158);
                    /* try { // try from 00151b34 to 00151bf9 has its CatchHandler @ 00154b24 */
              lVar15 = hashbrown::map::HashMap<K,V,S,A>::get_inner(local_f58,&local_ed8);
              dVar32 = dStack_4d8;
              pppppppuVar24 = local_4e8;
              pppppppuVar16 = pppppppuStack_4f0;
              pbVar19 = &DAT_0011720e;
              if (lVar15 != 0) {
                pbVar19 = (byte *)(lVar15 + 0x18);
              }
              local_f18 = (undefined8 ******)CONCAT44(local_f18._4_4_,(uint)*pbVar19);
              local_fa8 = (double)local_4d0;
              pppppppuStack_e70 =
                   (undefined8 *******)_<alloc::string::String_as_core::fmt::Display>::fmt;
              local_e28 = (undefined8 *******)&PTR_s_pnl__001eb280;
              pppppppuStack_e20 = (undefined8 *******)0x1;
              local_e08 = (undefined8 *******)0x0;
              pppppppuStack_e18 = &local_e78;
              pcStack_e10 = (code *)0x1;
              local_e78 = &local_ed8;
              (*(code *)PTR_format_inner_001f1218)(&local_c68,&local_e28);
              pppppppuVar8 = pppppppuStack_c60;
              pppppppuVar7 = local_c68;
                    /* try { // try from 00151c12 to 00151c3f has its CatchHandler @ 00154ae4 */
              local_fa8 = (double)(*(code *)PTR_get_published_001f1290)
                                            (local_fb0,pppppppuVar16,pppppppuVar24,dVar32,local_fa8,
                                             pppppppuStack_c60,local_c58);
              local_f48 = extraout_XMM0_Qa_00;
              if (pppppppuVar7 != (undefined8 *******)0x0) {
                (*(code *)PTR___rust_dealloc_001f10f8)(pppppppuVar8,pppppppuVar7,1);
              }
              dVar32 = dStack_4d8;
              pppppppuVar8 = local_4e8;
              pppppppuVar7 = pppppppuStack_4f0;
              local_f28 = (undefined8 ******)local_4d0;
              local_e78 = &local_ed8;
              pppppppuStack_e70 =
                   (undefined8 *******)_<alloc::string::String_as_core::fmt::Display>::fmt;
              local_e28 = (undefined8 *******)&PTR_s_amt__001eb290;
              pppppppuStack_e20 = (undefined8 *******)0x1;
              local_e08 = (undefined8 *******)0x0;
              pppppppuStack_e18 = &local_e78;
              pcStack_e10 = (code *)0x1;
                    /* try { // try from 00151ce0 to 00151cf5 has its CatchHandler @ 00154b24 */
              (*(code *)PTR_format_inner_001f1218)(&local_c68,&local_e28);
              pppppppuVar24 = pppppppuStack_c60;
              pppppppuVar16 = local_c68;
                    /* try { // try from 00151d0e to 00151d39 has its CatchHandler @ 00154ae2 */
              uVar17 = (*(code *)PTR_get_published_001f1290)
                                 (local_fb0,pppppppuVar7,pppppppuVar8,dVar32,local_f28,
                                  pppppppuStack_c60,local_c58);
              ppppppuVar39 = local_f18;
              uVar6 = (uint)local_f18;
              local_f28 = extraout_XMM0_Qa_01;
              if (pppppppuVar16 != (undefined8 *******)0x0) {
                (*(code *)PTR___rust_dealloc_001f10f8)(pppppppuVar24,pppppppuVar16,1);
              }
              if ((((ulong)local_fa8 & 1) == 0) ||
                 (uVar14 = strategy_comm4::next_phase(local_f48,uVar6 & 0xff,&local_868),
                 (char)uVar14 == (char)ppppppuVar39)) {
                uVar14 = uVar6;
                if (local_ed8 != (undefined8 *******)0x0) {
                  (*(code *)PTR___rust_dealloc_001f10f8)(pppppppuStack_ed0,local_ed8,1);
                }
              }
              else {
                pppppppuStack_e18 = local_ec8;
                local_e28 = local_ed8;
                pppppppuStack_e20 = pppppppuStack_ed0;
                    /* try { // try from 00151de3 to 00151df8 has its CatchHandler @ 00154a79 */
                hashbrown::map::HashMap<K,V,S,A>::insert(local_f58,&local_e28,uVar14 & 0xff);
              }
            }
            bVar12 = local_39d;
            strategy_comm4::Comm4Params::effective(&local_c68,&local_868,uVar14 & 0xff);
            if ((bVar12 & 1) == 0) {
              local_d18 = (undefined8 *******)0x0;
              pppppppuStack_d10 = (undefined8 *******)0x1;
              local_d08 = 0;
              lVar15 = local_e90;
            }
            else {
              local_e38 = (undefined8 ******)CONCAT44(local_e38._4_4_,(uVar14 & 0xff) + 0x31);
              if (((ulong)local_fa8 & 1) == 0) {
                _<T_as_alloc::slice::<impl[T]>::to_vec_in::ConvertVec>::to_vec
                          (&local_e28,"NA-pon_signal code= score= vol_alpha=",2);
                local_c98 = pppppppuStack_e18;
                local_1a0 = local_e28;
                pppppppuStack_198 = pppppppuStack_e20;
              }
              else {
                lVar15 = 0x7fffffffffffffff;
                if ((double)local_f48 <= DAT_00116298) {
                  lVar15 = (long)(double)local_f48;
                }
                lVar30 = 0;
                if (!NAN((double)local_f48)) {
                  lVar30 = lVar15;
                }
                    /* try { // try from 00151e71 to 00151ee2 has its CatchHandler @ 00154b3e */
                _<i64_as_alloc::string::SpecToString>::spec_to_string(&local_1a0,lVar30);
                local_c98 = local_190;
              }
              local_ca8 = local_1a0;
              pppppppuStack_ca0 = pppppppuStack_198;
              if ((uVar17 & 1) == 0) {
                _<T_as_alloc::slice::<impl[T]>::to_vec_in::ConvertVec>::to_vec
                          (&local_e28,"NA-pon_signal code= score= vol_alpha=",2);
                local_e68 = pppppppuStack_e18;
                local_188 = local_e28;
                pppppppuStack_180 = pppppppuStack_e20;
              }
              else {
                lVar15 = 0x7fffffffffffffff;
                if ((double)local_f28 <= DAT_00116298) {
                  lVar15 = (long)(double)local_f28;
                }
                lVar30 = 0;
                if (!NAN((double)local_f28)) {
                  lVar30 = lVar15;
                }
                    /* try { // try from 00151f39 to 00151f81 has its CatchHandler @ 00154ac1 */
                _<i64_as_alloc::string::SpecToString>::spec_to_string(&local_188,lVar30);
                local_e68 = local_178;
              }
              lVar15 = local_e90;
              local_e28 = &local_e38;
              pppppppuStack_e20 = (undefined8 *******)PTR_fmt_001f1298;
              pppppppuStack_e18 = &local_ca8;
              pcStack_e10 = _<alloc::string::String_as_core::fmt::Display>::fmt;
              local_e08 = &local_e78;
              local_e00 = _<alloc::string::String_as_core::fmt::Display>::fmt;
              local_ed8 = (undefined8 *******)&DAT_001eb2a0;
              pppppppuStack_ed0 = (undefined8 *******)0x3;
              local_eb8 = (undefined8 *******)0x0;
              local_ec0 = (code *)0x3;
                    /* try { // try from 0015203d to 00152052 has its CatchHandler @ 00154a9c */
              local_ec8 = &local_e28;
              local_e78 = local_188;
              pppppppuStack_e70 = pppppppuStack_180;
              (*(code *)PTR_format_inner_001f1218)(&local_ce8,&local_ed8);
              if (local_e78 != (undefined8 *******)0x0) {
                (*(code *)PTR___rust_dealloc_001f10f8)(pppppppuStack_e70,local_e78,1);
              }
              if (local_ca8 != (undefined8 *******)0x0) {
                (*(code *)PTR___rust_dealloc_001f10f8)(pppppppuStack_ca0,local_ca8,1);
              }
              local_d18 = local_ce8;
              pppppppuStack_d10 = pppppppuStack_ce0;
              local_d08 = local_cd8;
            }
            local_f18 = (undefined8 ******)CONCAT71(local_f18._1_7_,local_c00);
            local_f28 = (undefined8 ******)CONCAT71(local_f28._1_7_,local_fb1);
            cVar10 = strategy_comm4::Comm4Params::signal_mode(pppppppuStack_550,local_548);
                    /* WARNING: Switch is manually overridden */
            switch(cVar10) {
            case '\0':
              ppppppuStack_f30 = (undefined8 ******)(*(double *)(lVar15 + 0x70) * local_4c8);
              break;
            case '\x01':
              ppppppuStack_f30 = *(undefined8 *******)(lVar15 + 0x78);
              break;
            case '\x02':
              ppppppuStack_f30 = *(undefined8 *******)(lVar15 + 0x70);
              break;
            case '\x03':
              dVar32 = *(double *)(lVar15 + 0x70);
              local_fa8 = (double)(~-(ulong)NAN(dVar32) &
                                   (_s__00116160 & (ulong)dVar32 | ram0x00116050) |
                                  DAT_00116390 & -(ulong)NAN(dVar32));
              uStack_fa0 = _UNK_00116058;
              dVar32 = (double)(*(code *)PTR_pow_001f12a0)
                                         ((ulong)dVar32 & _DAT_00115ad0,
                                          (double)DAT_00116300 / (double)local_e40);
              ppppppuStack_f30 = (undefined8 ******)(dVar32 * local_fa8);
            }
            if (((local_150[0] != 1) || ((local_140 & 1) == 0)) ||
               ((double)((ulong)((dStack_148 - dStack_138) / (dStack_148 + dStack_138)) &
                        _DAT_00115ad0) <= DAT_00116338)) {
                    /* try { // try from 001521e7 to 00152473 has its CatchHandler @ 00154b4d */
              local_f48 = (int *)(*(code *)PTR_time_sec_001f1260)(local_fb0);
              local_fa8 = local_b38;
              ppppppuStack_ee0 =
                   (undefined8 ******)
                   (*(code *)PTR_spread_bp_001f12a8)(local_fb0,local_f70,local_f68);
              ppppppuStack_d20 =
                   (undefined8 ******)(*(code *)PTR_fee_bp_001f12b0)(local_fb0,local_f70,local_f68);
              local_be8 = (double)(*(code *)PTR_contract_mult_001f12b8)
                                            (local_fb0,local_f70,local_f68);
              local_cf8 = (double)(*(code *)PTR_price_step_001f12c0)(local_fb0,local_f70,local_f68);
              local_e88 = (undefined8 ******)
                          (*(code *)PTR_vol_step_001f12c8)(local_fb0,local_f70,local_f68);
              (*(code *)PTR_position_001f12d0)(local_fb0,local_f70,local_f68);
              local_f58 = extraout_XMM1_Qa;
              uStack_f50 = extraout_XMM1_Qb;
              dStack_e98 = (double)(*(code *)PTR_position_holding_secs_001f12d8)
                                             (local_fb0,local_f70,local_f68);
              local_fa8 = local_fa8 / _DAT_001163d8;
              dStack_e98 = dStack_e98 + local_fa8;
              uVar11 = (*(code *)PTR_is_should_lock_001f12e0)(local_fb0,local_f70,local_f68);
              local_b18 = (undefined8 ******)CONCAT71(local_b18._1_7_,uVar11);
              local_ca8 = local_c68;
              pcStack_c90 = pcStack_c50;
              if (local_fb1 != '\0') {
                pppppppuVar16 = &ppppppuStack_430;
                if ((char)local_868 != '\0') {
                  pppppppuVar16 = &local_860;
                }
                pppppppuStack_c60 = &local_428;
                if ((char)local_858 != '\0') {
                  pppppppuStack_c60 = &local_850;
                }
                pppppppuStack_c60 = (undefined8 *******)*pppppppuStack_c60;
                pdVar18 = &dStack_420;
                if ((char)local_848 != '\0') {
                  pdVar18 = &local_840;
                }
                local_c58 = (undefined8 *******)*pdVar18;
                puVar21 = &local_418;
                if ((char)local_838 != '\0') {
                  puVar21 = &local_830;
                }
                local_ca8 = (undefined8 *******)*pppppppuVar16;
                pcStack_c90 = (code *)*puVar21;
              }
              uStack_ba0 = 0;
              uStack_bc0 = 0;
              uStack_bb0 = 0;
              uStack_bd0 = 0;
              pppppppuStack_ca0 = pppppppuStack_c60;
              local_c98 = local_c58;
              local_bd8 = pcStack_c90;
              local_bc8 = pppppppuStack_c60;
              local_bb8 = local_c58;
              local_ba8 = local_ca8;
              strategy_comm4::signal_trigger::dynamic_threshold
                        (dStack_e98,uStack_410,local_408,uStack_400,&ppppppuStack_170,&local_ca8);
              uStack_f8a = strategy_comm4::Comm4Params::signal_trigger_mode
                                     (pppppppuStack_538,local_530);
              (*(code *)PTR_clone_001f1230)
                        (&local_ed8,&local_f78,&PTR_s_strategies_comm_strategy_strateg_001eb2d0);
                    /* try { // try from 00152474 to 00152493 has its CatchHandler @ 00154aff */
              (*(code *)PTR_clone_001f1230)
                        (&local_e28,&local_b68,&PTR_s_strategies_comm_strategy_strateg_001eb2e8);
              local_e68 = local_ec8;
              local_e78 = local_ed8;
              pppppppuStack_e70 = pppppppuStack_ed0;
              pppppppuStack_e60 = local_e28;
              pppppppuStack_e58 = pppppppuStack_e20;
              pppppppuStack_e50 = pppppppuStack_e18;
                    /* try { // try from 001524dd to 001529da has its CatchHandler @ 00154b4d */
              hashbrown::rustc_entry::_<impl_hashbrown::map::HashMap<K,V,S,A>>::rustc_entry
                        (&local_e28,piVar25 + 0x134,&local_e78);
              if (local_e28 == (undefined8 *******)0x8000000000000000) {
                local_ed8 = (undefined8 *******)0x8000000000000000;
              }
              else {
                pppppppuStack_ea8 = pppppppuStack_df8;
                pcStack_ea0 = pcStack_df0;
                local_eb8 = local_e08;
                pcStack_eb0 = local_e00;
                local_ec0 = pcStack_e10;
                local_ed8 = local_e28;
              }
              local_ec8 = pppppppuStack_e18;
              pppppppuStack_ed0 = pppppppuStack_e20;
              local_e28 = (undefined8 *******)&uStack_f8a;
              pppppppuStack_e20 = &local_528;
              pppppppuStack_e18 = &ppppppuStack_170;
              lVar15 = std::collections::hash::map::Entry<K,V>::or_insert_with
                                 (&local_ed8,&local_e28);
              local_f48 = (int *)((double)local_f48 + local_fa8);
              strategy_comm4::signal_trigger::SignalTrigger::update_score
                        (local_f48,ppppppuStack_f30,0,0,lVar15,0);
              *(undefined8 *)(lVar15 + 0x50) = uStack_160;
              *(undefined8 *)(lVar15 + 0x58) = uStack_158;
              *(undefined8 *******)(lVar15 + 0x40) = ppppppuStack_170;
              *(undefined8 *)(lVar15 + 0x48) = uStack_168;
                    /* WARNING: Switch is manually overridden */
              switch(uStack_f8a) {
              case 0:
                if (cVar10 == '\0') {
                  strategy_comm4::signal_trigger::SignalTrigger::point_signal_trigger_pv1_spread
                            (uStack_4c0,ppppppuStack_ee0,&local_e28,lVar15);
                  break;
                }
                if (cVar10 == '\x03') {
                  strategy_comm4::signal_trigger::SignalTrigger::point_signal_trigger_pv4
                            (uStack_4c0,ppppppuStack_d20,ppppppuStack_ee0,&local_e28,lVar15);
                  break;
                }
                dVar32 = *(double *)(lVar15 + 0x38);
                piVar25 = local_cc8;
                if (*(double *)(lVar15 + 0x40) <= dVar32) {
                  cVar10 = '\0';
                }
                else {
                  cVar10 = '\x03';
                  if ((dVar32 < *(double *)(lVar15 + 0x58)) &&
                     (cVar10 = '\x02', *(double *)(lVar15 + 0x50) < dVar32)) {
                    cVar10 = (*(double *)(lVar15 + 0x48) < dVar32) * '\x03' + '\x01';
                  }
                }
                goto LAB_00152771;
              case 1:
                strategy_comm4::signal_trigger::SignalTrigger::windows_mean_trigger
                          (local_4b8,&local_e28,lVar15);
                break;
              case 2:
                strategy_comm4::signal_trigger::SignalTrigger::windows_std_trigger
                          (local_4b8,&local_e28,lVar15);
                break;
              case 3:
                strategy_comm4::signal_trigger::SignalTrigger::windows_quantile_trigger
                          (uStack_4b0,local_4b8,&local_e28,lVar15);
                break;
              case 4:
                strategy_comm4::signal_trigger::SignalTrigger::windows_sharpe_trigger
                          (local_4b8,&local_e28,lVar15);
                break;
              case 5:
                strategy_comm4::signal_trigger::SignalTrigger::windows_rsi_trigger
                          (local_4b8,&local_e28,lVar15);
              }
              cVar10 = (char)local_e28;
              pppppppuVar16 = pppppppuStack_e20;
              if ((char)local_e28 != '\x05') {
LAB_00152771:
                cStack_f89 = cVar10;
                puVar26 = PTR_fmt_001f12e8;
                pppppppuStack_e20 =
                     (undefined8 *******)_<alloc::string::String_as_core::fmt::Display>::fmt;
                pppppppuStack_e18 = &ppppppuStack_f30;
                pcStack_e10 = (code *)PTR_fmt_001f12e8;
                local_e08 = &ppppppuStack_ee0;
                local_e00 = (code *)PTR_fmt_001f12e8;
                pppppppuStack_df8 = &local_e40;
                pcStack_df0 = (code *)PTR_fmt_001f12e8;
                pdStack_de8 = (double *)&local_fb1;
                puStack_de0 = PTR_fmt_001f12f0;
                ppppppuStack_dd8 = (undefined8 ******)&cStack_f89;
                pcStack_dd0 = _<core::option::Option<T>as_core::fmt::Debug>::fmt;
                local_ed8 = (undefined8 *******)&UNK_001eb300;
                pppppppuStack_ed0 = (undefined8 *******)0x6;
                local_eb8 = (undefined8 *******)&UNK_001190e0;
                pcStack_eb0 = (code *)0x6;
                local_ec8 = &local_e28;
                local_ec0 = (code *)0x6;
                local_e28 = &local_f78;
                (*(code *)PTR_format_inner_001f1218)(auStack_48,&local_ed8);
                future_backtest_sdk::context::StrategyContext::log_debug(local_fb0,auStack_48);
                uVar11 = (*(code *)PTR_margin_filter_001f12f8)(local_fb0,cStack_f89);
                pppppppuVar16 =
                     (undefined8 *******)
                     (*(code *)PTR_cancel_by_pending_ts_001f1300)(local_3e0,local_fb0,1);
                if (pppppppuVar16 == (undefined8 *******)0x0) {
                  bVar12 = (*(code *)PTR_impact_block_check_001f1308)
                                     (local_f48,local_ef8,local_f88,local_fb0,uVar11);
                  if (((char)local_f18 == '\x01' && (byte)local_f28 == '\x01') &&
                     ((bVar12 & 5) == 0)) {
                    bVar12 = 4;
                  }
                  plVar29 = &local_b68;
                  if (local_b40 != 0) {
                    plVar29 = local_b48;
                  }
                  puVar22 = &UNK_001eb378;
                  if (local_b40 == 0) {
                    puVar22 = &UNK_001eb360;
                  }
                  (*(code *)PTR_clone_001f1230)(&local_ce8,plVar29,puVar22);
                  local_f48 = local_4a8;
                  uStack_f40 = 0;
                  local_fa8 = dStack_c10;
                  uStack_fa0 = 0;
                  local_bf8 = dStack_c08;
                  uStack_bf0 = 0;
                  bVar31 = (char)local_f18 == '\x02';
                  local_c78 = *(undefined8 *)(lVar15 + 0x40);
                  local_c80 = *(undefined8 *)(lVar15 + 0x48);
                  local_f18 = *(undefined8 *******)(lVar15 + 0x50);
                  local_b08 = *(undefined8 *)(lVar15 + 0x58);
                  if ((bVar12 != 4) && (local_39f != '\0')) {
                    /* try { // try from 00152a70 to 00152d1d has its CatchHandler @ 00154a7e */
                    lVar15 = hashbrown::map::HashMap<K,V,S,A>::get_inner(piVar25 + 0x140,&local_f78)
                    ;
                    if (lVar15 != 0) {
                      if (((double)local_468 <= 0.0) ||
                         (((double)local_f00 - *(double *)(lVar15 + 0x28)) * _DAT_001163d8 <
                          (double)local_468)) goto override_jmp_00152af8_case_4;
                      hashbrown::map::HashMap<K,V,S,A>::remove
                                (&local_e28,piVar25 + 0x140,&local_f78);
                    }
                  }
                  bVar20 = bVar31 & (byte)local_f28;
                    /* WARNING: Switch is manually overridden */
                  switch(bVar12) {
                  case 0:
                    if ((_DAT_001163e8 <= (double)local_f58) ||
                       (dStack_470 / _DAT_001163d8 <= dStack_e98)) {
                      ppppppuVar34 = (undefined8 ******)0x0;
                      ppppppuVar39 = local_f58;
                      if ((double)local_f58 <= 0.0) {
                        ppppppuVar39 = ppppppuVar34;
                      }
                      dVar35 = (double)(~-(ulong)((double)local_c48 < 0.0) & (ulong)local_c48 |
                                       -(ulong)((double)local_c48 < 0.0) & _DAT_001162a8) -
                               (double)ppppppuVar39;
                      dVar38 = ((double)(~-(ulong)(dStack_c40 < 0.0) & (ulong)dStack_c40 |
                                        -(ulong)(dStack_c40 < 0.0) & _DAT_001162a8) / local_be8) /
                               (double)local_f88 - (double)ppppppuVar39;
                      dVar32 = dVar38;
                      if (dVar35 <= dVar38) {
                        dVar32 = dVar35;
                      }
                      ppppppuVar36 = (undefined8 ******)
                                     (~-(ulong)NAN(dVar35) & (ulong)dVar32 |
                                     -(ulong)NAN(dVar35) & (ulong)dVar38);
                      ppppppuVar37 = (undefined8 ******)
                                     (~-(ulong)(dStack_c38 < 0.0) & (ulong)dStack_c38 |
                                     -(ulong)(dStack_c38 < 0.0) & _DAT_001162a8);
                      ppppppuVar39 = (undefined8 ******)
                                     (((double)(~-(ulong)(dStack_c30 < 0.0) & (ulong)dStack_c30 |
                                               -(ulong)(dStack_c30 < 0.0) & _DAT_001162a8) /
                                      local_be8) / (double)local_f88);
                      if ((double)ppppppuVar39 <= (double)DAT_00116300) {
                        ppppppuVar39 = DAT_00116300;
                      }
                      if ((double)ppppppuVar39 <= (double)ppppppuVar37) {
                        ppppppuVar37 = ppppppuVar39;
                      }
                      ppppppuVar33 = (undefined8 ******)
                                     (~-(ulong)(dStack_440 < 0.0) & (ulong)dStack_440 |
                                     -(ulong)(dStack_440 < 0.0) & _DAT_001162a8);
                      ppppppuVar39 = (undefined8 ******)
                                     (((double)(~-(ulong)(local_438 < 0.0) & (ulong)local_438 |
                                               _DAT_001162a8 & -(ulong)(local_438 < 0.0)) /
                                      local_be8) / (double)local_f88);
                      if ((double)ppppppuVar39 <= (double)DAT_00116300) {
                        ppppppuVar39 = DAT_00116300;
                      }
                      if ((double)ppppppuVar39 <= (double)ppppppuVar33) {
                        ppppppuVar33 = ppppppuVar39;
                      }
                      ppppppuVar39 = local_f58;
                      if (0.0 <= (double)local_f58) {
                        ppppppuVar39 = ppppppuVar34;
                      }
                      if ((double)ppppppuVar37 <= (double)ppppppuVar36) {
                        ppppppuVar36 = ppppppuVar37;
                      }
                      if ((double)((ulong)ppppppuVar39 ^ _s__00116160) <= (double)ppppppuVar33) {
                        ppppppuVar33 = (undefined8 ******)((ulong)ppppppuVar39 ^ _s__00116160);
                      }
                      ppppppuVar39 = (undefined8 ******)
                                     ((double)ppppppuVar33 + (double)ppppppuVar36);
                      if ((double)ppppppuVar33 + (double)ppppppuVar36 <= 0.0) {
                        ppppppuVar39 = ppppppuVar34;
                      }
                      local_f18 = (undefined8 ******)
                                  (*(code *)PTR_round_with_step_f64_001f1310)
                                            (ppppppuVar39,local_e88,1);
                      uStack_f10 = extraout_XMM0_Qb;
                      if (bVar20 == 0) {
                        pppppppuVar16 =
                             (undefined8 *******)(*(code *)PTR_cancel_all_001f1318)(local_fb0);
                        if (pppppppuVar16 == (undefined8 *******)0x0) {
                          if ((cStack_bff == '\0') || (local_fb1 != '\0')) {
                            if ((DAT_001162e8 < (double)((ulong)local_f48 & _DAT_00115ad0)) &&
                               (DAT_001162e8 < (double)(_DAT_00115ad0 & (ulong)local_ba8))) {
                              dVar32 = (double)((ulong)((double)ppppppuStack_f30 / (double)local_ba8
                                                       ) & _DAT_00115ad0) + _s__00116288;
                              if (dVar32 <= 0.0) {
                                dVar32 = 0.0;
                              }
                              local_fa8 = local_fa8 + (double)local_f48 * dVar32;
                              dVar32 = local_bf8;
                              if (local_fa8 <= local_bf8) {
                                dVar32 = local_fa8;
                              }
                              local_fa8 = (double)(-(ulong)NAN(local_fa8) & (ulong)local_bf8 |
                                                  ~-(ulong)NAN(local_fa8) & (ulong)dVar32);
                              uStack_fa0 = uStack_bf0;
                            }
                          }
                          else {
                            local_fa8 = (double)strategy_comm4::high_taker_rate
                                                          (ppppppuStack_f30,local_ba8,
                                                           ppppppuStack_ee0,local_f88,local_ef8,
                                                           uStack_c28,uStack_c20,uStack_c18);
                            uStack_fa0 = extraout_XMM0_Qb_04;
                          }
                          local_fa8 = (double)(*(code *)PTR_round_with_step_f64_001f1310)
                                                        ((local_fa8 + (double)DAT_00116300) *
                                                         (double)local_f88,local_cf8,1);
                          local_f48 = _s__00116380;
                          goto LAB_00153f09;
                        }
                      }
                      else {
                        dVar38 = local_3d0 * local_cf8 + (double)local_ef8;
                        dVar35 = (double)local_f88 - local_cf8;
                        dVar32 = dVar35;
                        if (dVar38 <= dVar35) {
                          dVar32 = dVar38;
                        }
                        local_fa8 = (double)(*(code *)PTR_round_with_step_f64_001f1310)
                                                      (~-(ulong)NAN(dVar38) & (ulong)dVar32 |
                                                       -(ulong)NAN(dVar38) & (ulong)dVar35,1);
                        uVar17 = 4;
                        if (local_3c8 < 4) {
                          uVar17 = local_3c8;
                        }
                        iVar13 = (int)uVar17;
                        if ((long)local_3c8 < 1) {
                          iVar13 = 1;
                        }
                        local_e28 = (undefined8 *******)0x0;
                        pppppppuStack_e20 = (undefined8 *******)&DAT_00000008;
                        pppppppuStack_e18 = (undefined8 *******)0x0;
                    /* try { // try from 00152d7a to 00152e3c has its CatchHandler @ 00154a67 */
                        pppppppuVar16 =
                             (undefined8 *******)
                             strategy_comm4::cancel_order_use_range
                                       (local_fa8,
                                        (double)local_b8[0] -
                                        *(double *)((long)local_b8 + (ulong)(uint)(iVar13 << 4)),
                                        local_fb0,local_f70,local_f68,1,&local_e28);
                        if (pppppppuVar16 == (undefined8 *******)0x0) {
                          lVar15 = strategy_comm4::live_pending_counts
                                             (local_fb0,local_f70,local_f68,pppppppuStack_e20,
                                              pppppppuStack_e18);
                          local_f28 = (undefined8 ******)0x0;
                          if ((lVar15 == 0) &&
                             (local_f28 = local_f18, 0.0 < (double)ppppppuStack_3d8)) {
                            ppppppuVar39 = ppppppuStack_3d8;
                            if ((double)local_f18 <= (double)ppppppuStack_3d8) {
                              ppppppuVar39 = local_f18;
                            }
                            local_f28 = (undefined8 ******)
                                        (*(code *)PTR_round_with_step_f64_001f1310)
                                                  (~-(ulong)NAN((double)local_f18) &
                                                   (ulong)ppppppuVar39 |
                                                   -(ulong)NAN((double)local_f18) &
                                                   (ulong)ppppppuStack_3d8,local_e88,1);
                          }
                          local_f48 = local_3e0;
                          core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>
                                    (&local_e28);
                          local_f18 = local_f28;
                          uStack_f10 = 0;
LAB_00153f09:
                          if ((double)(_DAT_00115ad0 & (ulong)local_f18) <= DAT_001162e8) {
override_jmp_00152af8_case_4:
                            if (local_ce8 != (undefined8 *******)0x0) {
                              (*(code *)PTR___rust_dealloc_001f10f8)(pppppppuStack_ce0,local_ce8,1);
                            }
                            if (local_d18 != (undefined8 *******)0x0) {
                              (*(code *)PTR___rust_dealloc_001f10f8)(pppppppuStack_d10,local_d18,1);
                            }
                            if (local_130 != 0) {
                              (*(code *)PTR___rust_dealloc_001f10f8)(local_128,local_130,1);
                            }
                            if (local_b68 != 0) {
                              (*(code *)PTR___rust_dealloc_001f10f8)(local_b60,local_b68,1);
                            }
                            if (local_f78 != (undefined8 ******)0x0) {
                              (*(code *)PTR___rust_dealloc_001f10f8)(local_f70,local_f78,1);
                            }
                            core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>
                                      (&local_b80);
                            core::ptr::drop_in_place<strategy_comm4::Comm4Params>(&local_868);
                            core::ptr::drop_in_place<future_backtest_sdk::types::StrategyPara>
                                      (&local_b50);
                            return (undefined8 *******)0x0;
                          }
                          local_f58 = ppppppuStack_f30;
                          local_f28 = local_478;
                          local_e38 = (undefined8 ******)0x119200;
                          if (local_fb1 != '\0') {
                            local_e38 = (undefined8 ******)0x119201;
                          }
                          uStack_e30 = 1;
                          local_e78 = (undefined8 *******)0x119202;
                          if (bVar20 != 0) {
                            local_e78 = (undefined8 *******)0x119203;
                          }
                          pppppppuStack_e70 = (undefined8 *******)0x1;
                          local_e28 = &ppppppuStack_ee0;
                          pppppppuStack_e20 = (undefined8 *******)puVar26;
                          pppppppuStack_e18 = &ppppppuStack_d20;
                          pcStack_e10 = (code *)puVar26;
                          local_e08 = &local_e40;
                          local_e00 = (code *)puVar26;
                          pppppppuStack_df8 = &local_ce8;
                          pcStack_df0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                          pdStack_de8 = &dStack_e98;
                          puStack_de0 = puVar26;
                          ppppppuStack_dd8 = &local_e38;
                          pcStack_dd0 = _<&T_as_core::fmt::Display>::fmt;
                          pppppppuStack_dc8 = &local_e78;
                          pcStack_dc0 = _<&T_as_core::fmt::Display>::fmt;
                          pppppppuStack_db8 = &local_d18;
                          pcStack_db0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                          local_ed8 = (undefined8 *******)&DAT_001eb390;
                          pppppppuStack_ed0 = (undefined8 *******)&DAT_00000008;
                          local_eb8 = (undefined8 *******)0x0;
                          local_ec8 = &local_e28;
                          local_ec0 = (code *)&DAT_00000008;
                          (*(code *)PTR_format_inner_001f1218)(&uStack_200,&local_ed8);
                          uStack_260 = 0x700;
                          dStack_290 = local_fa8;
                          ppppppuStack_288 = local_f18;
                          pppppppuStack_280 = local_f88;
                          ppppppuStack_278 = local_f58;
                          uStack_270 = local_c78;
                          ppppppuStack_268 = local_f28;
                          uStack_2a8 = uStack_200;
                          uStack_2a0 = uStack_1f8;
                          uStack_298 = uStack_1f0;
                          pppppppuVar16 =
                               (undefined8 *******)
                               strategy_comm4::place(local_f48,local_fb0,&uStack_2a8);
                          if (pppppppuVar16 == (undefined8 *******)0x0) {
                            if (local_39f == '\x01') {
                              (*(code *)PTR_clone_001f1230)
                                        (&local_e78,&local_f78,
                                         &PTR_s_strategies_comm_strategy_strateg_001eb410);
                              local_ed8 = local_ef8;
                              pppppppuStack_ed0 = local_f88;
                              local_ec8 = local_f00;
                              hashbrown::map::HashMap<K,V,S,A>::insert
                                        (&local_e28,local_cc8 + 0x140,&local_e78,&local_ed8);
                            }
                            goto override_jmp_00152af8_case_4;
                          }
                        }
                        else {
LAB_0015369a:
                          core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>
                                    (&local_e28);
                        }
                      }
                    }
                    else {
LAB_00153403:
                      pppppppuVar16 = (undefined8 *******)0x0;
                    }
                    break;
                  case 1:
                    if ((DAT_001162e8 < (double)local_f58) &&
                       (dStack_e98 < dStack_470 / _DAT_001163d8)) goto LAB_00153403;
                    if ((double)local_f58 <= 0.0) goto override_jmp_00152af8_case_4;
                    uVar17 = -(ulong)(dStack_440 < (double)((ulong)dStack_440 ^ _s__00116160));
                    dVar38 = (double)(uVar17 & _DAT_001162b0 |
                                     ~uVar17 & ((ulong)dStack_440 ^ _s__00116160));
                    uVar17 = -(ulong)(local_438 < (double)((ulong)local_438 ^ _s__00116160));
                    dVar35 = ((double)(uVar17 & _DAT_001162b0 |
                                      ~uVar17 & ((ulong)local_438 ^ _s__00116160)) / local_be8) /
                             (double)local_ef8;
                    dVar32 = dVar35;
                    if (dVar35 <= dVar38) {
                      dVar32 = dVar38;
                    }
                    dVar32 = (double)(~-(ulong)NAN(dVar38) & (ulong)dVar32 |
                                     -(ulong)NAN(dVar38) & (ulong)dVar35);
                    ppppppuVar39 = local_f58;
                    if ((double)local_f58 <= 0.0) {
                      ppppppuVar39 = (undefined8 ******)0x0;
                    }
                    if (dVar32 <= (double)((ulong)ppppppuVar39 ^ _s__00116160)) {
                      dVar32 = (double)((ulong)ppppppuVar39 ^ _s__00116160);
                    }
                    /* try { // try from 001531f3 to 0015328a has its CatchHandler @ 00154a7e */
                    local_f18 = (undefined8 ******)
                                (*(code *)PTR_round_with_step_f64_001f1310)(dVar32,local_e88,1);
                    local_f28 = (undefined8 ******)CONCAT71(local_f28._1_7_,(byte)local_b18 != '\0')
                    ;
                    uStack_f10 = extraout_XMM0_Qb_01;
                    if (bVar20 == 0) {
                      pppppppuVar16 =
                           (undefined8 *******)(*(code *)PTR_cancel_all_001f1318)(local_fb0);
                      if (pppppppuVar16 != (undefined8 *******)0x0) break;
                      if ((cStack_bff == '\0') || (local_fb1 != '\0')) {
                        if ((DAT_001162e8 < (double)((ulong)local_f48 & _DAT_00115ad0)) &&
                           (DAT_001162e8 < (double)(_DAT_00115ad0 & (ulong)local_bc8))) {
                          dVar32 = (double)((ulong)((double)ppppppuStack_f30 / (double)local_bc8) &
                                           _DAT_00115ad0) + _s__00116288;
                          if (dVar32 <= 0.0) {
                            dVar32 = 0.0;
                          }
                          local_fa8 = local_fa8 + (double)local_f48 * dVar32;
                          dVar32 = local_bf8;
                          if (local_fa8 <= local_bf8) {
                            dVar32 = local_fa8;
                          }
                          local_fa8 = (double)(-(ulong)NAN(local_fa8) & (ulong)local_bf8 |
                                              ~-(ulong)NAN(local_fa8) & (ulong)dVar32);
                          uStack_fa0 = uStack_bf0;
                        }
                      }
                      else {
                        local_fa8 = (double)strategy_comm4::high_taker_rate
                                                      (ppppppuStack_f30,local_bc8,ppppppuStack_ee0,
                                                       local_f88,local_ef8,uStack_c28,uStack_c20,
                                                       uStack_c18);
                        uStack_fa0 = extraout_XMM0_Qb_06;
                      }
                      local_fa8 = (double)(*(code *)PTR_round_with_step_f64_001f1310)
                                                    (((double)DAT_00116300 - local_fa8) *
                                                     (double)local_ef8,local_cf8,1);
                      local_f48 = _s__00116380;
                    }
                    else {
                      dVar38 = (double)local_f88 - local_3d0 * local_cf8;
                      dVar35 = local_cf8 + (double)local_ef8;
                      dVar32 = dVar35;
                      if (dVar35 <= dVar38) {
                        dVar32 = dVar38;
                      }
                      local_fa8 = (double)(*(code *)PTR_round_with_step_f64_001f1310)
                                                    (~-(ulong)NAN(dVar38) & (ulong)dVar32 |
                                                     -(ulong)NAN(dVar38) & (ulong)dVar35,1);
                      uVar17 = 4;
                      if (local_3c8 < 4) {
                        uVar17 = local_3c8;
                      }
                      iVar13 = (int)uVar17;
                      if ((long)local_3c8 < 1) {
                        iVar13 = 1;
                      }
                      local_e28 = (undefined8 *******)0x0;
                      pppppppuStack_e20 = (undefined8 *******)&DAT_00000008;
                      pppppppuStack_e18 = (undefined8 *******)0x0;
                    /* try { // try from 001532e6 to 001533a4 has its CatchHandler @ 00154a61 */
                      pppppppuVar16 =
                           (undefined8 *******)
                           strategy_comm4::cancel_order_use_range
                                     (local_fa8,
                                      *(double *)((long)local_108 + (ulong)(uint)(iVar13 << 4)) -
                                      (double)local_108[0],local_fb0,local_f70,local_f68,0,
                                      &local_e28);
                      if (pppppppuVar16 != (undefined8 *******)0x0) goto LAB_0015369a;
                      strategy_comm4::live_pending_counts
                                (local_fb0,local_f70,local_f68,pppppppuStack_e20,pppppppuStack_e18);
                      local_f58 = (undefined8 ******)0x0;
                      if ((extraout_RDX == 0) &&
                         (local_f58 = local_f18, 0.0 < (double)ppppppuStack_3d8)) {
                        ppppppuVar34 = (undefined8 ******)((ulong)ppppppuStack_3d8 ^ _s__00116160);
                        ppppppuVar39 = ppppppuVar34;
                        if ((double)ppppppuVar34 <= (double)local_f18) {
                          ppppppuVar39 = local_f18;
                        }
                        local_f58 = (undefined8 ******)
                                    (*(code *)PTR_round_with_step_f64_001f1310)
                                              (~-(ulong)NAN((double)local_f18) & (ulong)ppppppuVar39
                                               | -(ulong)NAN((double)local_f18) &
                                                 (ulong)ppppppuVar34,local_e88,1);
                      }
                      local_f48 = local_3e0;
                      core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&local_e28);
                      local_f18 = local_f58;
                      uStack_f10 = 0;
                    }
                    if ((double)(_DAT_00115ad0 & (ulong)local_f18) <= DAT_001162e8)
                    goto override_jmp_00152af8_case_4;
                    local_e88 = ppppppuStack_f30;
                    local_f58 = local_478;
                    local_e38 = (undefined8 ******)0x119200;
                    if (local_fb1 != '\0') {
                      local_e38 = (undefined8 ******)0x119201;
                    }
                    uStack_e30 = 1;
                    local_e78 = (undefined8 *******)0x119202;
                    if (bVar20 != 0) {
                      local_e78 = (undefined8 *******)0x119203;
                    }
                    pppppppuStack_e70 = (undefined8 *******)0x1;
                    local_e28 = &ppppppuStack_ee0;
                    pppppppuStack_e20 = (undefined8 *******)puVar26;
                    pppppppuStack_e18 = &ppppppuStack_d20;
                    pcStack_e10 = (code *)puVar26;
                    local_e08 = &local_e40;
                    local_e00 = (code *)puVar26;
                    pppppppuStack_df8 = &local_ce8;
                    pcStack_df0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                    pdStack_de8 = &dStack_e98;
                    puStack_de0 = puVar26;
                    ppppppuStack_dd8 = &local_e38;
                    pcStack_dd0 = _<&T_as_core::fmt::Display>::fmt;
                    pppppppuStack_dc8 = &local_e78;
                    pcStack_dc0 = _<&T_as_core::fmt::Display>::fmt;
                    pppppppuStack_db8 = &local_d18;
                    pcStack_db0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                    local_ed8 = (undefined8 *******)&DAT_001eb390;
                    pppppppuStack_ed0 = (undefined8 *******)&DAT_00000008;
                    local_eb8 = (undefined8 *******)0x0;
                    local_ec8 = &local_e28;
                    local_ec0 = (code *)&DAT_00000008;
                    (*(code *)PTR_format_inner_001f1218)(&uStack_1d0,&local_ed8);
                    cStack_34f = (byte)local_f28 * '\x03' + '\x05';
                    uStack_350 = 1;
                    dStack_380 = local_fa8;
                    ppppppuStack_378 = local_f18;
                    pppppppuStack_370 = local_ef8;
                    ppppppuStack_368 = local_e88;
                    uStack_360 = local_c80;
                    ppppppuStack_358 = local_f58;
                    uStack_398 = uStack_1d0;
                    uStack_390 = uStack_1c8;
                    uStack_388 = uStack_1c0;
                    pppppppuVar16 =
                         (undefined8 *******)strategy_comm4::place(local_f48,local_fb0,&uStack_398);
                    if (pppppppuVar16 == (undefined8 *******)0x0) {
                      if (local_39f == '\x01') {
                        (*(code *)PTR_clone_001f1230)
                                  (&local_e78,&local_f78,
                                   &PTR_s_strategies_comm_strategy_strateg_001eb428);
                        local_ed8 = local_ef8;
                        pppppppuStack_ed0 = local_f88;
                        local_ec8 = local_f00;
                        hashbrown::map::HashMap<K,V,S,A>::insert
                                  (&local_e28,local_cc8 + 0x140,&local_e78,&local_ed8);
                      }
                      goto override_jmp_00152af8_case_4;
                    }
                    break;
                  case 2:
                    if ((DAT_001162e8 < (double)local_f58) &&
                       (dStack_e98 < dStack_470 / _DAT_001163d8)) goto LAB_00153403;
                    uVar17 = -(ulong)((double)local_c48 < (double)((ulong)local_c48 ^ _s__00116160))
                    ;
                    ppppppuVar39 = local_f58;
                    if (0.0 <= (double)local_f58) {
                      ppppppuVar39 = (undefined8 ******)0x0;
                    }
                    dVar38 = (double)(uVar17 & _DAT_001162b0 |
                                     ~uVar17 & ((ulong)local_c48 ^ _s__00116160)) -
                             (double)ppppppuVar39;
                    uVar17 = -(ulong)(dStack_c40 < (double)((ulong)dStack_c40 ^ _s__00116160));
                    dVar35 = ((double)(uVar17 & _DAT_001162b0 |
                                      ~uVar17 & ((ulong)dStack_c40 ^ _s__00116160)) / local_be8) /
                             (double)local_ef8 - (double)ppppppuVar39;
                    dVar32 = dVar35;
                    if (dVar35 <= dVar38) {
                      dVar32 = dVar38;
                    }
                    dVar32 = (double)(~-(ulong)NAN(dVar38) & (ulong)dVar32 |
                                     -(ulong)NAN(dVar38) & (ulong)dVar35);
                    ppppppuVar34 = (undefined8 ******)
                                   (~-(ulong)(dStack_c38 < 0.0) & (ulong)dStack_c38 |
                                   -(ulong)(dStack_c38 < 0.0) & _DAT_001162a8);
                    ppppppuVar39 = (undefined8 ******)
                                   (((double)(~-(ulong)(dStack_c30 < 0.0) & (ulong)dStack_c30 |
                                             -(ulong)(dStack_c30 < 0.0) & _DAT_001162a8) / local_be8
                                    ) / (double)local_ef8);
                    if ((double)ppppppuVar39 <= (double)DAT_00116300) {
                      ppppppuVar39 = DAT_00116300;
                    }
                    if ((double)ppppppuVar39 <= (double)ppppppuVar34) {
                      ppppppuVar34 = ppppppuVar39;
                    }
                    ppppppuVar37 = (undefined8 ******)
                                   (~-(ulong)(dStack_440 < 0.0) & (ulong)dStack_440 |
                                   -(ulong)(dStack_440 < 0.0) & _DAT_001162a8);
                    ppppppuVar39 = (undefined8 ******)
                                   (((double)(~-(ulong)(local_438 < 0.0) & (ulong)local_438 |
                                             _DAT_001162a8 & -(ulong)(local_438 < 0.0)) / local_be8)
                                   / (double)local_ef8);
                    if ((double)ppppppuVar39 <= (double)DAT_00116300) {
                      ppppppuVar39 = DAT_00116300;
                    }
                    if ((double)ppppppuVar39 <= (double)ppppppuVar37) {
                      ppppppuVar37 = ppppppuVar39;
                    }
                    if (dVar32 <= (double)((ulong)ppppppuVar34 ^ _s__00116160)) {
                      dVar32 = (double)((ulong)ppppppuVar34 ^ _s__00116160);
                    }
                    ppppppuVar39 = local_f58;
                    if ((double)local_f58 <= 0.0) {
                      ppppppuVar39 = (undefined8 ******)0x0;
                    }
                    if ((double)ppppppuVar39 <= (double)ppppppuVar37) {
                      ppppppuVar37 = ppppppuVar39;
                    }
                    dVar32 = dVar32 - (double)ppppppuVar37;
                    if (0.0 <= dVar32) {
                      dVar32 = 0.0;
                    }
                    /* try { // try from 00153593 to 00153618 has its CatchHandler @ 00154a7e */
                    local_f28 = (undefined8 ******)
                                (*(code *)PTR_round_with_step_f64_001f1310)(dVar32,local_e88,1);
                    dStack_f20 = extraout_XMM0_Qb_02;
                    if (bVar20 == 0) {
                    /* try { // try from 001536ac to 0015393e has its CatchHandler @ 00154a7e */
                      pppppppuVar16 =
                           (undefined8 *******)(*(code *)PTR_cancel_all_001f1318)(local_fb0);
                      if (pppppppuVar16 != (undefined8 *******)0x0) break;
                      if ((cStack_bff == '\0') || (local_fb1 != '\0')) {
                        if ((DAT_001162e8 < (double)((ulong)local_f48 & _DAT_00115ad0)) &&
                           (DAT_001162e8 < (double)(_DAT_00115ad0 & (ulong)local_bb8))) {
                          dVar32 = (double)((ulong)((double)ppppppuStack_f30 / (double)local_bb8) &
                                           _DAT_00115ad0) + _s__00116288;
                          if (dVar32 <= 0.0) {
                            dVar32 = 0.0;
                          }
                          local_fa8 = local_fa8 + (double)local_f48 * dVar32;
                          dVar32 = local_bf8;
                          if (local_fa8 <= local_bf8) {
                            dVar32 = local_fa8;
                          }
                          local_fa8 = (double)(-(ulong)NAN(local_fa8) & (ulong)local_bf8 |
                                              ~-(ulong)NAN(local_fa8) & (ulong)dVar32);
                          uStack_fa0 = uStack_bf0;
                        }
                      }
                      else {
                        local_fa8 = (double)strategy_comm4::high_taker_rate
                                                      (ppppppuStack_f30,local_bb8,ppppppuStack_ee0,
                                                       local_f88,local_ef8,uStack_c28,uStack_c20,
                                                       uStack_c18);
                        uStack_fa0 = extraout_XMM0_Qb_03;
                      }
                    /* try { // try from 00153b48 to 0015497e has its CatchHandler @ 00154a7e */
                      local_fa8 = (double)(*(code *)PTR_round_with_step_f64_001f1310)
                                                    (((double)DAT_00116300 - local_fa8) *
                                                     (double)local_ef8,local_cf8,1);
                      local_f48 = _s__00116380;
                    }
                    else {
                      dVar38 = (double)local_f88 - local_3d0 * local_cf8;
                      dVar35 = local_cf8 + (double)local_ef8;
                      dVar32 = dVar35;
                      if (dVar35 <= dVar38) {
                        dVar32 = dVar38;
                      }
                      local_fa8 = (double)(*(code *)PTR_round_with_step_f64_001f1310)
                                                    (~-(ulong)NAN(dVar38) & (ulong)dVar32 |
                                                     -(ulong)NAN(dVar38) & (ulong)dVar35,1);
                      uVar17 = 4;
                      if (local_3c8 < 4) {
                        uVar17 = local_3c8;
                      }
                      iVar13 = (int)uVar17;
                      if ((long)local_3c8 < 1) {
                        iVar13 = 1;
                      }
                      local_e28 = (undefined8 *******)0x0;
                      pppppppuStack_e20 = (undefined8 *******)&DAT_00000008;
                      pppppppuStack_e18 = (undefined8 *******)0x0;
                    /* try { // try from 00153674 to 0015368d has its CatchHandler @ 00154a65 */
                      pppppppuVar16 =
                           (undefined8 *******)
                           strategy_comm4::cancel_order_use_range
                                     (local_fa8,
                                      *(double *)((long)local_108 + (ulong)(uint)(iVar13 << 4)) -
                                      (double)local_108[0],local_fb0,local_f70,local_f68,0,
                                      &local_e28);
                      if (pppppppuVar16 != (undefined8 *******)0x0) goto LAB_0015369a;
                    /* try { // try from 00153a26 to 00153aa4 has its CatchHandler @ 00154a65 */
                      strategy_comm4::live_pending_counts
                                (local_fb0,local_f70,local_f68,pppppppuStack_e20,pppppppuStack_e18);
                      local_f58 = (undefined8 ******)0x0;
                      if ((extraout_RDX_00 == 0) &&
                         (local_f58 = local_f28, 0.0 < (double)ppppppuStack_3d8)) {
                        ppppppuVar34 = (undefined8 ******)((ulong)ppppppuStack_3d8 ^ _s__00116160);
                        ppppppuVar39 = ppppppuVar34;
                        if ((double)ppppppuVar34 <= (double)local_f28) {
                          ppppppuVar39 = local_f28;
                        }
                        local_f58 = (undefined8 ******)
                                    (*(code *)PTR_round_with_step_f64_001f1310)
                                              (~-(ulong)NAN((double)local_f28) & (ulong)ppppppuVar39
                                               | -(ulong)NAN((double)local_f28) &
                                                 (ulong)ppppppuVar34,local_e88,1);
                      }
                      local_f48 = local_3e0;
                      core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&local_e28);
                      local_f28 = local_f58;
                      dStack_f20 = 0.0;
                    }
                    if ((double)(_DAT_00115ad0 & (ulong)local_f28) <= DAT_001162e8)
                    goto override_jmp_00152af8_case_4;
                    local_e88 = ppppppuStack_f30;
                    local_f58 = local_478;
                    local_e38 = (undefined8 ******)0x119200;
                    if (local_fb1 != '\0') {
                      local_e38 = (undefined8 ******)0x119201;
                    }
                    uStack_e30 = 1;
                    local_e78 = (undefined8 *******)0x119202;
                    if (bVar20 != 0) {
                      local_e78 = (undefined8 *******)0x119203;
                    }
                    pppppppuStack_e70 = (undefined8 *******)0x1;
                    local_e28 = &ppppppuStack_ee0;
                    pppppppuStack_e20 = (undefined8 *******)puVar26;
                    pppppppuStack_e18 = &ppppppuStack_d20;
                    pcStack_e10 = (code *)puVar26;
                    local_e08 = &local_e40;
                    local_e00 = (code *)puVar26;
                    pppppppuStack_df8 = &local_ce8;
                    pcStack_df0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                    pdStack_de8 = &dStack_e98;
                    puStack_de0 = puVar26;
                    ppppppuStack_dd8 = &local_e38;
                    pcStack_dd0 = _<&T_as_core::fmt::Display>::fmt;
                    pppppppuStack_dc8 = &local_e78;
                    pcStack_dc0 = _<&T_as_core::fmt::Display>::fmt;
                    pppppppuStack_db8 = &local_d18;
                    pcStack_db0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                    local_ed8 = (undefined8 *******)&DAT_001eb390;
                    pppppppuStack_ed0 = (undefined8 *******)&DAT_00000008;
                    local_eb8 = (undefined8 *******)0x0;
                    local_ec8 = &local_e28;
                    local_ec0 = (code *)&DAT_00000008;
                    (*(code *)PTR_format_inner_001f1218)(&uStack_1e8,&local_ed8);
                    uStack_210 = 0x802;
                    dStack_240 = local_fa8;
                    ppppppuStack_238 = local_f28;
                    pppppppuStack_230 = local_ef8;
                    ppppppuStack_228 = local_e88;
                    ppppppuStack_220 = local_f18;
                    ppppppuStack_218 = local_f58;
                    uStack_258 = uStack_1e8;
                    uStack_250 = uStack_1e0;
                    uStack_248 = uStack_1d8;
                    pppppppuVar16 =
                         (undefined8 *******)strategy_comm4::place(local_f48,local_fb0,&uStack_258);
                    if (pppppppuVar16 == (undefined8 *******)0x0) {
                      if (local_39f == '\x01') {
                        (*(code *)PTR_clone_001f1230)
                                  (&local_e78,&local_f78,
                                   &PTR_s_strategies_comm_strategy_strateg_001eb440);
                        local_ed8 = local_ef8;
                        pppppppuStack_ed0 = local_f88;
                        local_ec8 = local_f00;
                        hashbrown::map::HashMap<K,V,S,A>::insert
                                  (&local_e28,local_cc8 + 0x140,&local_e78,&local_ed8);
                      }
                      goto override_jmp_00152af8_case_4;
                    }
                    break;
                  case 3:
                    if (((double)local_f58 < _DAT_001163e8) &&
                       (dStack_e98 < dStack_470 / _DAT_001163d8)) goto LAB_00153403;
                    if (0.0 <= (double)local_f58) goto override_jmp_00152af8_case_4;
                    dVar32 = (double)(~-(ulong)(dStack_440 < 0.0) & (ulong)dStack_440 |
                                     -(ulong)(dStack_440 < 0.0) & _DAT_001162a8);
                    dVar38 = ((double)(~-(ulong)(local_438 < 0.0) & (ulong)local_438 |
                                      _DAT_001162a8 & -(ulong)(local_438 < 0.0)) / local_be8) /
                             (double)local_f88;
                    dVar35 = dVar38;
                    if (dVar32 <= dVar38) {
                      dVar35 = dVar32;
                    }
                    dVar32 = (double)(~-(ulong)NAN(dVar32) & (ulong)dVar35 |
                                     -(ulong)NAN(dVar32) & (ulong)dVar38);
                    ppppppuVar39 = local_f58;
                    if (0.0 <= (double)local_f58) {
                      ppppppuVar39 = (undefined8 ******)0x0;
                    }
                    if ((double)((ulong)ppppppuVar39 ^ _s__00116160) <= dVar32) {
                      dVar32 = (double)((ulong)ppppppuVar39 ^ _s__00116160);
                    }
                    /* try { // try from 00152f3c to 00152fbd has its CatchHandler @ 00154a7e */
                    local_f18 = (undefined8 ******)
                                (*(code *)PTR_round_with_step_f64_001f1310)(dVar32,local_e88,1);
                    uStack_f10 = extraout_XMM0_Qb_00;
                    if (bVar20 == 0) {
                      pppppppuVar16 =
                           (undefined8 *******)(*(code *)PTR_cancel_all_001f1318)(local_fb0);
                      if (pppppppuVar16 != (undefined8 *******)0x0) break;
                      if ((cStack_bff == '\0') || (local_fb1 != '\0')) {
                        if ((DAT_001162e8 < (double)((ulong)local_f48 & _DAT_00115ad0)) &&
                           (DAT_001162e8 < (double)(_DAT_00115ad0 & (ulong)local_bd8))) {
                          dVar32 = (double)((ulong)((double)ppppppuStack_f30 / (double)local_bd8) &
                                           _DAT_00115ad0) + _s__00116288;
                          if (dVar32 <= 0.0) {
                            dVar32 = 0.0;
                          }
                          local_fa8 = local_fa8 + (double)local_f48 * dVar32;
                          dVar32 = local_bf8;
                          if (local_fa8 <= local_bf8) {
                            dVar32 = local_fa8;
                          }
                          local_fa8 = (double)(-(ulong)NAN(local_fa8) & (ulong)local_bf8 |
                                              ~-(ulong)NAN(local_fa8) & (ulong)dVar32);
                          uStack_fa0 = uStack_bf0;
                        }
                      }
                      else {
                        local_fa8 = (double)strategy_comm4::high_taker_rate
                                                      (ppppppuStack_f30,local_bd8,ppppppuStack_ee0,
                                                       local_f88,local_ef8,uStack_c28,uStack_c20,
                                                       uStack_c18);
                        uStack_fa0 = extraout_XMM0_Qb_05;
                      }
                      local_fa8 = (double)(*(code *)PTR_round_with_step_f64_001f1310)
                                                    ((local_fa8 + (double)DAT_00116300) *
                                                     (double)local_f88,local_cf8,1);
                      local_f48 = _s__00116380;
                    }
                    else {
                      dVar38 = local_3d0 * local_cf8 + (double)local_ef8;
                      dVar35 = (double)local_f88 - local_cf8;
                      dVar32 = dVar35;
                      if (dVar38 <= dVar35) {
                        dVar32 = dVar38;
                      }
                      local_fa8 = (double)(*(code *)PTR_round_with_step_f64_001f1310)
                                                    (~-(ulong)NAN(dVar38) & (ulong)dVar32 |
                                                     -(ulong)NAN(dVar38) & (ulong)dVar35,1);
                      uVar17 = 4;
                      if (local_3c8 < 4) {
                        uVar17 = local_3c8;
                      }
                      iVar13 = (int)uVar17;
                      if ((long)local_3c8 < 1) {
                        iVar13 = 1;
                      }
                      local_e28 = (undefined8 *******)0x0;
                      pppppppuStack_e20 = (undefined8 *******)&DAT_00000008;
                      pppppppuStack_e18 = (undefined8 *******)0x0;
                    /* try { // try from 0015301a to 001530dc has its CatchHandler @ 00154a63 */
                      pppppppuVar16 =
                           (undefined8 *******)
                           strategy_comm4::cancel_order_use_range
                                     (local_fa8,
                                      (double)local_b8[0] -
                                      *(double *)((long)local_b8 + (ulong)(uint)(iVar13 << 4)),
                                      local_fb0,local_f70,local_f68,1,&local_e28);
                      if (pppppppuVar16 != (undefined8 *******)0x0) goto LAB_0015369a;
                      lVar15 = strategy_comm4::live_pending_counts
                                         (local_fb0,local_f70,local_f68,pppppppuStack_e20,
                                          pppppppuStack_e18);
                      local_f28 = (undefined8 ******)0x0;
                      if ((lVar15 == 0) && (local_f28 = local_f18, 0.0 < (double)ppppppuStack_3d8))
                      {
                        ppppppuVar39 = ppppppuStack_3d8;
                        if ((double)local_f18 <= (double)ppppppuStack_3d8) {
                          ppppppuVar39 = local_f18;
                        }
                        local_f28 = (undefined8 ******)
                                    (*(code *)PTR_round_with_step_f64_001f1310)
                                              (~-(ulong)NAN((double)local_f18) & (ulong)ppppppuVar39
                                               | -(ulong)NAN((double)local_f18) &
                                                 (ulong)ppppppuStack_3d8,local_e88,1);
                      }
                      local_f48 = local_3e0;
                      core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&local_e28);
                      local_f18 = local_f28;
                      uStack_f10 = 0;
                    }
                    if ((double)(_DAT_00115ad0 & (ulong)local_f18) <= DAT_001162e8)
                    goto override_jmp_00152af8_case_4;
                    local_f58 = ppppppuStack_f30;
                    local_f28 = local_478;
                    local_e38 = (undefined8 ******)0x119200;
                    if (local_fb1 != '\0') {
                      local_e38 = (undefined8 ******)0x119201;
                    }
                    uStack_e30 = 1;
                    local_e78 = (undefined8 *******)0x119202;
                    if (bVar20 != 0) {
                      local_e78 = (undefined8 *******)0x119203;
                    }
                    pppppppuStack_e70 = (undefined8 *******)0x1;
                    local_e28 = &ppppppuStack_ee0;
                    pppppppuStack_e20 = (undefined8 *******)puVar26;
                    pppppppuStack_e18 = &ppppppuStack_d20;
                    pcStack_e10 = (code *)puVar26;
                    local_e08 = &local_e40;
                    local_e00 = (code *)puVar26;
                    pppppppuStack_df8 = &local_ce8;
                    pcStack_df0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                    pdStack_de8 = &dStack_e98;
                    puStack_de0 = puVar26;
                    ppppppuStack_dd8 = &local_e38;
                    pcStack_dd0 = _<&T_as_core::fmt::Display>::fmt;
                    pppppppuStack_dc8 = &local_e78;
                    pcStack_dc0 = _<&T_as_core::fmt::Display>::fmt;
                    pppppppuStack_db8 = &local_d18;
                    pcStack_db0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                    local_ed8 = (undefined8 *******)&DAT_001eb390;
                    pppppppuStack_ed0 = (undefined8 *******)&DAT_00000008;
                    local_eb8 = (undefined8 *******)0x0;
                    local_ec8 = &local_e28;
                    local_ec0 = (code *)&DAT_00000008;
                    (*(code *)PTR_format_inner_001f1218)(&uStack_1b8,&local_ed8);
                    bStack_2ff = (byte)local_b18 | 6;
                    uStack_300 = 3;
                    dStack_330 = local_fa8;
                    ppppppuStack_328 = local_f18;
                    pppppppuStack_320 = local_f88;
                    ppppppuStack_318 = local_f58;
                    uStack_310 = local_b08;
                    ppppppuStack_308 = local_f28;
                    uStack_348 = uStack_1b8;
                    uStack_340 = uStack_1b0;
                    uStack_338 = uStack_1a8;
                    pppppppuVar16 =
                         (undefined8 *******)strategy_comm4::place(local_f48,local_fb0,&uStack_348);
                    if (pppppppuVar16 == (undefined8 *******)0x0) {
                      if (local_39f == '\x01') {
                        (*(code *)PTR_clone_001f1230)
                                  (&local_e78,&local_f78,
                                   &PTR_s_strategies_comm_strategy_strateg_001eb458);
                        local_ed8 = local_ef8;
                        pppppppuStack_ed0 = local_f88;
                        local_ec8 = local_f00;
                        hashbrown::map::HashMap<K,V,S,A>::insert
                                  (&local_e28,local_cc8 + 0x140,&local_e78,&local_ed8);
                      }
                      goto override_jmp_00152af8_case_4;
                    }
                    break;
                  case 4:
                    goto override_jmp_00152af8_case_4;
                  }
                  if (local_ce8 != (undefined8 *******)0x0) {
                    (*(code *)PTR___rust_dealloc_001f10f8)(pppppppuStack_ce0,local_ce8,1);
                  }
                }
              }
            }
            else {
              pppppppuVar16 = (undefined8 *******)0x0;
            }
            if (local_d18 != (undefined8 *******)0x0) {
              (*(code *)PTR___rust_dealloc_001f10f8)(pppppppuStack_d10,local_d18,1);
            }
          }
LAB_001528e7:
          if (local_130 != 0) {
            (*(code *)PTR___rust_dealloc_001f10f8)(local_128,local_130,1);
          }
        }
        if (local_b68 != 0) {
          (*(code *)PTR___rust_dealloc_001f10f8)(local_b60,local_b68,1);
        }
        if (local_f78 != (undefined8 ******)0x0) {
          (*(code *)PTR___rust_dealloc_001f10f8)(local_f70,local_f78,1);
        }
        local_f88 = local_b78;
        lVar30 = local_b70;
        goto LAB_00151819;
      }
      break;
    }
  }
  pppppppuVar16 = (undefined8 *******)0x0;
LAB_00151819:
  puVar26 = PTR___rust_dealloc_001f10f8;
  if (lVar30 != 0) {
    pppppppuVar24 = local_f88 + 1;
    do {
      if (pppppppuVar24[-1] != (undefined8 ******)0x0) {
        (*(code *)puVar26)(*pppppppuVar24,pppppppuVar24[-1],1);
      }
      pppppppuVar24 = pppppppuVar24 + 3;
      lVar30 = lVar30 + -1;
    } while (lVar30 != 0);
  }
LAB_00151851:
  if (local_b80 != 0) {
    (*(code *)PTR___rust_dealloc_001f10f8)(local_f88,local_b80 * 0x18,8);
  }
  goto LAB_0015178d;
}




// ELF address 0x000000000006c8c0; fb_strategy_sdk_abi_version

undefined8 fb_strategy_sdk_abi_version(void)

{
  return 4;
}




// ELF address 0x000000000006c8d0; fb_strategy_sdk_version_str

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
  (*(code *)PTR_memcpy_001f1158)
            (param_1,
             "0.6.0[fb_plugin] on_begin error: \n[fb_plugin] on_signal error: [fb_plugin] on_depth error: [fb_plugin] on_finish error: "
             ,uVar2);
  if (param_2 != 0) {
    *(undefined1 *)(param_1 + uVar2) = 0;
  }
  return uVar2;
}


