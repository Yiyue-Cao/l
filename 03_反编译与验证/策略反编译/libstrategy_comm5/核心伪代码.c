// ELF address 0x000000000003b520; strategy_comm5::next_phase

/* strategy_comm5::next_phase */

uint __rustcall strategy_comm5::next_phase(double param_1,double param_2,char param_3,long param_4)

{
  double dVar1;
  
  dVar1 = *(double *)(param_4 + 0x4f8);
  if (*(char *)(param_4 + 0x564) == '\0') {
    if (param_3 == '\0') {
      return -(uint)(dVar1 <= param_2 && *(double *)(param_4 + 0x4d8) <= param_1) & 0xffffff01;
    }
    if (param_3 != '\x01') {
      return (uint)(byte)(2 - (param_1 < *(double *)(param_4 + 0x4f0)));
    }
    if ((param_2 < dVar1) || (param_1 < *(double *)(param_4 + 0x4e8))) {
      return (uint)(*(double *)(param_4 + 0x4e0) <= param_1);
    }
  }
  else {
    if (param_3 == '\0') {
      return -(uint)(dVar1 <= param_2 && param_1 <= *(double *)(param_4 + 0x4e0)) & 0xffffff01;
    }
    if (param_3 != '\x01') {
      return (uint)(byte)(2 - (*(double *)(param_4 + 0x4e8) <= param_1 &&
                              param_1 != *(double *)(param_4 + 0x4e8)));
    }
    if ((param_2 < dVar1) || (*(double *)(param_4 + 0x4f0) < param_1)) {
      return (uint)(param_1 < *(double *)(param_4 + 0x4d8) ||
                   param_1 == *(double *)(param_4 + 0x4d8));
    }
  }
  return 2;
}




// ELF address 0x000000000003b390; strategy_comm5::xs_inst_of

/* strategy_comm5::xs_inst_of */

void __rustcall strategy_comm5::xs_inst_of(long param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  
  lVar4 = param_2 + param_1;
  do {
    while( true ) {
      lVar3 = lVar4;
      if (param_1 == lVar3) {
        lVar3 = 0;
        goto LAB_0013b42b;
      }
      uVar5 = (uint)*(char *)(lVar3 + -1);
      if (-1 < (int)uVar5) break;
      bVar1 = *(byte *)(lVar3 + -2);
      if ((char)bVar1 < -0x40) {
        bVar2 = *(byte *)(lVar3 + -3);
        if ((char)bVar2 < -0x40) {
          lVar4 = lVar3 + -4;
          uVar6 = bVar2 & 0x3f | (*(byte *)(lVar3 + -4) & 7) << 6;
        }
        else {
          lVar4 = lVar3 + -3;
          uVar6 = bVar2 & 0xf;
        }
        uVar6 = bVar1 & 0x3f | uVar6 << 6;
      }
      else {
        lVar4 = lVar3 + -2;
        uVar6 = bVar1 & 0x1f;
      }
      if ((uVar5 & 0x3f | uVar6 << 6) - 0x3a < 0xfffffff6) goto LAB_0013b416;
    }
    lVar4 = lVar3 + -1;
  } while (0xfffffff5 < uVar5 - 0x3a);
LAB_0013b416:
  lVar3 = lVar3 - param_1;
LAB_0013b42b:
  do {
    if (lVar3 == 0) {
      return;
    }
    lVar3 = param_1 + lVar3;
    uVar5 = (uint)*(char *)(lVar3 + -1);
    if ((int)uVar5 < 0) {
      bVar1 = *(byte *)(lVar3 + -2);
      if ((char)bVar1 < -0x40) {
        bVar2 = *(byte *)(lVar3 + -3);
        if ((char)bVar2 < -0x40) {
          lVar4 = lVar3 + -4;
          uVar6 = bVar2 & 0x3f | (*(byte *)(lVar3 + -4) & 7) << 6;
        }
        else {
          lVar4 = lVar3 + -3;
          uVar6 = bVar2 & 0xf;
        }
        uVar6 = bVar1 & 0x3f | uVar6 << 6;
      }
      else {
        lVar4 = lVar3 + -2;
        uVar6 = bVar1 & 0x1f;
      }
      uVar5 = uVar5 & 0x3f | uVar6 << 6;
      lVar3 = lVar4 - param_1;
    }
    else {
      lVar3 = (lVar3 + -1) - param_1;
    }
  } while (uVar5 == 0x5f);
  return;
}




// ELF address 0x000000000003b000; strategy_comm5::Comm5Params::signal_mode

/* strategy_comm5::Comm5Params::signal_mode */

ulong __rustcall strategy_comm5::Comm5Params::signal_mode(ushort *param_1,long param_2)

{
  if (param_2 != 3) {
    return 0;
  }
  if ((char)param_1[1] != '2' || (short)(*param_1 ^ 0x5650) != 0) {
    return (ulong)((uint)((char)param_1[1] == '4' && *param_1 == 0x5650) * 3);
  }
  return CONCAT71((uint7)(uint3)((*param_1 ^ 0x5650) >> 8),1);
}




// ELF address 0x000000000003b040; strategy_comm5::Comm5Params::signal_trigger_mode

/* strategy_comm5::Comm5Params::signal_trigger_mode */

short __rustcall strategy_comm5::Comm5Params::signal_trigger_mode(long *param_1,long param_2)

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
      auVar3[0] = -((char)*param_1 == s_WindowsStdTrigge_00116b70[0]);
      auVar3[1] = -(*(char *)((long)param_1 + 1) == s_WindowsStdTrigge_00116b70[1]);
      auVar3[2] = -(*(char *)((long)param_1 + 2) == s_WindowsStdTrigge_00116b70[2]);
      auVar3[3] = -(*(char *)((long)param_1 + 3) == s_WindowsStdTrigge_00116b70[3]);
      auVar3[4] = -(*(char *)((long)param_1 + 4) == s_WindowsStdTrigge_00116b70[4]);
      auVar3[5] = -(*(char *)((long)param_1 + 5) == s_WindowsStdTrigge_00116b70[5]);
      auVar3[6] = -(*(char *)((long)param_1 + 6) == s_WindowsStdTrigge_00116b70[6]);
      auVar3[7] = -(*(char *)((long)param_1 + 7) == s_WindowsStdTrigge_00116b70[7]);
      auVar3[8] = -((char)param_1[1] == s_WindowsStdTrigge_00116b70[8]);
      auVar3[9] = -(*(char *)((long)param_1 + 9) == s_WindowsStdTrigge_00116b70[9]);
      auVar3[10] = -(*(char *)((long)param_1 + 10) == s_WindowsStdTrigge_00116b70[10]);
      auVar3[0xb] = -(*(char *)((long)param_1 + 0xb) == s_WindowsStdTrigge_00116b70[0xb]);
      auVar3[0xc] = -(*(char *)((long)param_1 + 0xc) == s_WindowsStdTrigge_00116b70[0xc]);
      auVar3[0xd] = -(*(char *)((long)param_1 + 0xd) == s_WindowsStdTrigge_00116b70[0xd]);
      auVar3[0xe] = -(*(char *)((long)param_1 + 0xe) == s_WindowsStdTrigge_00116b70[0xe]);
      auVar3[0xf] = -(*(char *)((long)param_1 + 0xf) == s_WindowsStdTrigge_00116b70[0xf]);
      auVar7[0] = -((char)param_1[2] == s_r_001168d0[0]);
      auVar7[1] = -(s_r_001168d0[1] == '\0');
      auVar7[2] = -(s_r_001168d0[2] == '\0');
      auVar7[3] = -(s_r_001168d0[3] == '\0');
      auVar7[4] = -(UNK_001168d4 == '\0');
      auVar7[5] = -(UNK_001168d5 == '\0');
      auVar7[6] = -(UNK_001168d6 == '\0');
      auVar7[7] = -(UNK_001168d7 == '\0');
      auVar7[8] = -(UNK_001168d8 == '\0');
      auVar7[9] = -(UNK_001168d9 == '\0');
      auVar7[10] = -(UNK_001168da == '\0');
      auVar7[0xb] = -(UNK_001168db == '\0');
      auVar7[0xc] = -(UNK_001168dc == '\0');
      auVar7[0xd] = -(UNK_001168dd == '\0');
      auVar7[0xe] = -(UNK_001168de == '\0');
      auVar7[0xf] = -(UNK_001168df == '\0');
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
      auVar5[0] = -((char)*param_1 == s_WindowsMeanTrigg_00116790[0]);
      auVar5[1] = -(*(char *)((long)param_1 + 1) == s_WindowsMeanTrigg_00116790[1]);
      auVar5[2] = -(*(char *)((long)param_1 + 2) == s_WindowsMeanTrigg_00116790[2]);
      auVar5[3] = -(*(char *)((long)param_1 + 3) == s_WindowsMeanTrigg_00116790[3]);
      auVar5[4] = -(*(char *)((long)param_1 + 4) == s_WindowsMeanTrigg_00116790[4]);
      auVar5[5] = -(*(char *)((long)param_1 + 5) == s_WindowsMeanTrigg_00116790[5]);
      auVar5[6] = -(*(char *)((long)param_1 + 6) == s_WindowsMeanTrigg_00116790[6]);
      auVar5[7] = -(*(char *)((long)param_1 + 7) == s_WindowsMeanTrigg_00116790[7]);
      auVar5[8] = -((char)param_1[1] == s_WindowsMeanTrigg_00116790[8]);
      auVar5[9] = -(*(char *)((long)param_1 + 9) == s_WindowsMeanTrigg_00116790[9]);
      auVar5[10] = -(*(char *)((long)param_1 + 10) == s_WindowsMeanTrigg_00116790[10]);
      auVar5[0xb] = -(*(char *)((long)param_1 + 0xb) == s_WindowsMeanTrigg_00116790[0xb]);
      auVar5[0xc] = -(*(char *)((long)param_1 + 0xc) == s_WindowsMeanTrigg_00116790[0xc]);
      auVar5[0xd] = -(*(char *)((long)param_1 + 0xd) == s_WindowsMeanTrigg_00116790[0xd]);
      auVar5[0xe] = -(*(char *)((long)param_1 + 0xe) == s_WindowsMeanTrigg_00116790[0xe]);
      auVar5[0xf] = -(*(char *)((long)param_1 + 0xf) == s_WindowsMeanTrigg_00116790[0xf]);
      auVar9[0] = -((char)(short)param_1[2] == DAT_00116730);
      auVar9[1] = -((char)((ushort)(short)param_1[2] >> 8) == UNK_00116731);
      auVar9[2] = -(UNK_00116732 == '\0');
      auVar9[3] = -(UNK_00116733 == '\0');
      auVar9[4] = -(UNK_00116734 == '\0');
      auVar9[5] = -(UNK_00116735 == '\0');
      auVar9[6] = -(UNK_00116736 == '\0');
      auVar9[7] = -(UNK_00116737 == '\0');
      auVar9[8] = -(UNK_00116738 == '\0');
      auVar9[9] = -(UNK_00116739 == '\0');
      auVar9[10] = -(UNK_0011673a == '\0');
      auVar9[0xb] = -(UNK_0011673b == '\0');
      auVar9[0xc] = -(UNK_0011673c == '\0');
      auVar9[0xd] = -(UNK_0011673d == '\0');
      auVar9[0xe] = -(UNK_0011673e == '\0');
      auVar9[0xf] = -(UNK_0011673f == '\0');
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
      auVar4[0] = -((char)uVar1 == s_gger_001168b0[0]);
      auVar4[1] = -((char)((uint)uVar1 >> 8) == s_gger_001168b0[1]);
      auVar4[2] = -((char)((uint)uVar1 >> 0x10) == s_gger_001168b0[2]);
      auVar4[3] = -((char)((uint)uVar1 >> 0x18) == s_gger_001168b0[3]);
      auVar4[4] = -(s_gger_001168b0[4] == '\0');
      auVar4[5] = -(s_gger_001168b0[5] == '\0');
      auVar4[6] = -(s_gger_001168b0[6] == '\0');
      auVar4[7] = -(s_gger_001168b0[7] == '\0');
      auVar4[8] = -(UNK_001168b8 == '\0');
      auVar4[9] = -(UNK_001168b9 == '\0');
      auVar4[10] = -(UNK_001168ba == '\0');
      auVar4[0xb] = -(UNK_001168bb == '\0');
      auVar4[0xc] = -(UNK_001168bc == '\0');
      auVar4[0xd] = -(UNK_001168bd == '\0');
      auVar4[0xe] = -(UNK_001168be == '\0');
      auVar4[0xf] = -(UNK_001168bf == '\0');
      auVar8[0] = -((char)*param_1 == s_WindowsSharpeTri_001168c0[0]);
      auVar8[1] = -(*(char *)((long)param_1 + 1) == s_WindowsSharpeTri_001168c0[1]);
      auVar8[2] = -(*(char *)((long)param_1 + 2) == s_WindowsSharpeTri_001168c0[2]);
      auVar8[3] = -(*(char *)((long)param_1 + 3) == s_WindowsSharpeTri_001168c0[3]);
      auVar8[4] = -(*(char *)((long)param_1 + 4) == s_WindowsSharpeTri_001168c0[4]);
      auVar8[5] = -(*(char *)((long)param_1 + 5) == s_WindowsSharpeTri_001168c0[5]);
      auVar8[6] = -(*(char *)((long)param_1 + 6) == s_WindowsSharpeTri_001168c0[6]);
      auVar8[7] = -(*(char *)((long)param_1 + 7) == s_WindowsSharpeTri_001168c0[7]);
      auVar8[8] = -((char)param_1[1] == s_WindowsSharpeTri_001168c0[8]);
      auVar8[9] = -(*(char *)((long)param_1 + 9) == s_WindowsSharpeTri_001168c0[9]);
      auVar8[10] = -(*(char *)((long)param_1 + 10) == s_WindowsSharpeTri_001168c0[10]);
      auVar8[0xb] = -(*(char *)((long)param_1 + 0xb) == s_WindowsSharpeTri_001168c0[0xb]);
      auVar8[0xc] = -(*(char *)((long)param_1 + 0xc) == s_WindowsSharpeTri_001168c0[0xc]);
      auVar8[0xd] = -(*(char *)((long)param_1 + 0xd) == s_WindowsSharpeTri_001168c0[0xd]);
      auVar8[0xe] = -(*(char *)((long)param_1 + 0xe) == s_WindowsSharpeTri_001168c0[0xe]);
      auVar8[0xf] = -(*(char *)((long)param_1 + 0xf) == s_WindowsSharpeTri_001168c0[0xf]);
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
      auVar10[0] = -(*(char *)((long)param_1 + 6) == DAT_00116be0);
      auVar10[1] = -(*(char *)((long)param_1 + 7) == UNK_00116be1);
      auVar10[2] = -((char)param_1[1] == UNK_00116be2);
      auVar10[3] = -(*(char *)((long)param_1 + 9) == UNK_00116be3);
      auVar10[4] = -(*(char *)((long)param_1 + 10) == UNK_00116be4);
      auVar10[5] = -(*(char *)((long)param_1 + 0xb) == UNK_00116be5);
      auVar10[6] = -(*(char *)((long)param_1 + 0xc) == UNK_00116be6);
      auVar10[7] = -(*(char *)((long)param_1 + 0xd) == UNK_00116be7);
      auVar10[8] = -(*(char *)((long)param_1 + 0xe) == UNK_00116be8);
      auVar10[9] = -(*(char *)((long)param_1 + 0xf) == UNK_00116be9);
      auVar10[10] = -((char)param_1[2] == UNK_00116bea);
      auVar10[0xb] = -(*(char *)((long)param_1 + 0x11) == UNK_00116beb);
      auVar10[0xc] = -(*(char *)((long)param_1 + 0x12) == UNK_00116bec);
      auVar10[0xd] = -(*(char *)((long)param_1 + 0x13) == UNK_00116bed);
      auVar10[0xe] = -(*(char *)((long)param_1 + 0x14) == UNK_00116bee);
      auVar10[0xf] = -(*(char *)((long)param_1 + 0x15) == UNK_00116bef);
      auVar6[0] = -((char)*param_1 == DAT_001167c0);
      auVar6[1] = -(*(char *)((long)param_1 + 1) == UNK_001167c1);
      auVar6[2] = -(*(char *)((long)param_1 + 2) == UNK_001167c2);
      auVar6[3] = -(*(char *)((long)param_1 + 3) == UNK_001167c3);
      auVar6[4] = -(*(char *)((long)param_1 + 4) == UNK_001167c4);
      auVar6[5] = -(*(char *)((long)param_1 + 5) == UNK_001167c5);
      auVar6[6] = -(*(char *)((long)param_1 + 6) == UNK_001167c6);
      auVar6[7] = -(*(char *)((long)param_1 + 7) == UNK_001167c7);
      auVar6[8] = -((char)param_1[1] == UNK_001167c8);
      auVar6[9] = -(*(char *)((long)param_1 + 9) == UNK_001167c9);
      auVar6[10] = -(*(char *)((long)param_1 + 10) == UNK_001167ca);
      auVar6[0xb] = -(*(char *)((long)param_1 + 0xb) == UNK_001167cb);
      auVar6[0xc] = -(*(char *)((long)param_1 + 0xc) == UNK_001167cc);
      auVar6[0xd] = -(*(char *)((long)param_1 + 0xd) == UNK_001167cd);
      auVar6[0xe] = -(*(char *)((long)param_1 + 0xe) == UNK_001167ce);
      auVar6[0xf] = -(*(char *)((long)param_1 + 0xf) == UNK_001167cf);
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




// ELF address 0x000000000003b150; strategy_comm5::Comm5Params::effective

/* WARNING: Removing unreachable block (ram,0x0013b16a) */
/* WARNING: Removing unreachable block (ram,0x0013b17e) */
/* strategy_comm5::Comm5Params::effective */

void __rustcall
strategy_comm5::Comm5Params::effective(undefined8 *param_1,long param_2,ulong param_3)

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
  puVar17 = (undefined8 *)(param_2 + 0x468);
  if (*(char *)(lVar1 + 0x40) != '\0') {
    puVar17 = (undefined8 *)(lVar1 + 0x48);
  }
  puVar16 = (undefined8 *)(param_2 + 0x470);
  if (*(char *)(lVar1 + 0x50) != '\0') {
    puVar16 = (undefined8 *)(lVar1 + 0x58);
  }
  uVar2 = *puVar16;
  puVar16 = (undefined8 *)(param_2 + 0x478);
  if (*(char *)(lVar1 + 0x60) != '\0') {
    puVar16 = (undefined8 *)(lVar1 + 0x68);
  }
  puVar18 = (undefined8 *)(param_2 + 0x480);
  if (*(char *)(lVar1 + 0x70) != '\0') {
    puVar18 = (undefined8 *)(lVar1 + 0x78);
  }
  uVar3 = *puVar16;
  uVar4 = *puVar18;
  puVar16 = (undefined8 *)(param_2 + 0x448);
  if (*(char *)(lVar1 + 0x80) != '\0') {
    puVar16 = (undefined8 *)(lVar1 + 0x88);
  }
  uVar5 = *puVar16;
  puVar16 = (undefined8 *)(param_2 + 0x450);
  if (*(char *)(lVar1 + 0x90) != '\0') {
    puVar16 = (undefined8 *)(lVar1 + 0x98);
  }
  uVar6 = *puVar16;
  puVar16 = (undefined8 *)(param_2 + 0x438);
  if (*(char *)(lVar1 + 0xa0) != '\0') {
    puVar16 = (undefined8 *)(lVar1 + 0xa8);
  }
  puVar18 = (undefined8 *)(param_2 + 0x440);
  if (*(char *)(lVar1 + 0xb0) != '\0') {
    puVar18 = (undefined8 *)(lVar1 + 0xb8);
  }
  uVar7 = *puVar16;
  uVar8 = *puVar18;
  cVar15 = (char)*(undefined4 *)(lVar1 + 0x128);
  if (cVar15 == '\x02') {
    cVar15 = (char)*(undefined4 *)(param_2 + 0x560);
  }
  puVar16 = (undefined8 *)(param_2 + 0x408);
  if (*(char *)(lVar1 + 0xc0) != '\0') {
    puVar16 = (undefined8 *)(lVar1 + 200);
  }
  uVar9 = *puVar16;
  puVar16 = (undefined8 *)(param_2 + 0x410);
  if (*(char *)(lVar1 + 0xd0) != '\0') {
    puVar16 = (undefined8 *)(lVar1 + 0xd8);
  }
  uVar10 = *puVar16;
  puVar16 = (undefined8 *)(param_2 + 0x418);
  if (*(char *)(lVar1 + 0xe0) != '\0') {
    puVar16 = (undefined8 *)(lVar1 + 0xe8);
  }
  puVar18 = (undefined8 *)(param_2 + 0x3f8);
  if (*(char *)(lVar1 + 0xf0) != '\0') {
    puVar18 = (undefined8 *)(lVar1 + 0xf8);
  }
  uVar11 = *puVar16;
  uVar12 = *puVar18;
  puVar16 = (undefined8 *)(param_2 + 0x400);
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




// ELF address 0x000000000003c600; strategy_comm5::StrategyComm5::xs_mult

/* strategy_comm5::StrategyComm5::xs_mult */

void __rustcall
strategy_comm5::StrategyComm5::xs_mult(long param_1,ulong param_2,long param_3,long param_4)

{
  undefined1 auVar1 [16];
  byte bVar2;
  ulong uVar3;
  uint uVar4;
  undefined *puVar5;
  ushort uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  byte bVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  char cVar19;
  char cVar20;
  char cVar21;
  undefined1 auVar22 [16];
  char cVar18;
  
  if ((param_2 & 1) != 0) {
    lVar12 = param_4 + param_3;
    do {
      while( true ) {
        lVar8 = lVar12;
        if (param_3 == lVar8) {
          lVar12 = 0;
          goto LAB_0013c6cb;
        }
        uVar13 = (uint)*(char *)(lVar8 + -1);
        if (-1 < (int)uVar13) break;
        bVar15 = *(byte *)(lVar8 + -2);
        if ((char)bVar15 < -0x40) {
          bVar2 = *(byte *)(lVar8 + -3);
          if ((char)bVar2 < -0x40) {
            lVar12 = lVar8 + -4;
            uVar14 = bVar2 & 0x3f | (*(byte *)(lVar8 + -4) & 7) << 6;
          }
          else {
            lVar12 = lVar8 + -3;
            uVar14 = bVar2 & 0xf;
          }
          uVar14 = bVar15 & 0x3f | uVar14 << 6;
        }
        else {
          lVar12 = lVar8 + -2;
          uVar14 = bVar15 & 0x1f;
        }
        if ((uVar13 & 0x3f | uVar14 << 6) - 0x3a < 0xfffffff6) goto LAB_0013c69b;
      }
      lVar12 = lVar8 + -1;
    } while (0xfffffff5 < uVar13 - 0x3a);
LAB_0013c69b:
    lVar12 = lVar8 - param_3;
LAB_0013c6cb:
    do {
      lVar8 = lVar12;
      if (lVar8 == 0) break;
      lVar12 = param_3 + lVar8;
      uVar13 = (uint)*(char *)(lVar12 + -1);
      if (-1 < (int)uVar13) {
        lVar12 = (lVar12 + -1) - param_3;
        if (uVar13 != 0x5f) break;
        goto LAB_0013c6cb;
      }
      bVar15 = *(byte *)(lVar12 + -2);
      if ((char)bVar15 < -0x40) {
        bVar2 = *(byte *)(lVar12 + -3);
        if ((char)bVar2 < -0x40) {
          lVar9 = lVar12 + -4;
          uVar14 = bVar2 & 0x3f | (*(byte *)(lVar12 + -4) & 7) << 6;
        }
        else {
          lVar9 = lVar12 + -3;
          uVar14 = bVar2 & 0xf;
        }
        uVar14 = bVar15 & 0x3f | uVar14 << 6;
      }
      else {
        lVar9 = lVar12 + -2;
        uVar14 = bVar15 & 0x1f;
      }
      lVar12 = lVar9 - param_3;
    } while ((uVar13 & 0x3f | uVar14 << 6) == 0x5f);
    if (*(long *)(param_1 + 0x640) != 0) {
      uVar10 = core::hash::BuildHasher::hash_one(param_1 + 0x648,param_3,lVar8);
      puVar5 = PTR_bcmp_00203d28;
      lVar12 = *(long *)(param_1 + 0x628);
      uVar3 = *(ulong *)(param_1 + 0x630);
      bVar15 = (byte)(uVar10 >> 0x39);
      auVar16 = ZEXT216(CONCAT11(bVar15,bVar15));
      auVar16 = pshuflw(auVar16,auVar16,0);
      lVar9 = 0;
      while( true ) {
        uVar10 = uVar10 & uVar3;
        auVar1 = *(undefined1 (*) [16])(lVar12 + uVar10);
        cVar18 = auVar16[0];
        auVar17[0] = -(auVar1[0] == cVar18);
        cVar19 = auVar16[1];
        auVar17[1] = -(auVar1[1] == cVar19);
        cVar20 = auVar16[2];
        auVar17[2] = -(auVar1[2] == cVar20);
        cVar21 = auVar16[3];
        auVar17[3] = -(auVar1[3] == cVar21);
        auVar17[4] = -(auVar1[4] == cVar18);
        auVar17[5] = -(auVar1[5] == cVar19);
        auVar17[6] = -(auVar1[6] == cVar20);
        auVar17[7] = -(auVar1[7] == cVar21);
        auVar17[8] = -(auVar1[8] == cVar18);
        auVar17[9] = -(auVar1[9] == cVar19);
        auVar17[10] = -(auVar1[10] == cVar20);
        auVar17[0xb] = -(auVar1[0xb] == cVar21);
        auVar17[0xc] = -(auVar1[0xc] == cVar18);
        auVar17[0xd] = -(auVar1[0xd] == cVar19);
        cVar18 = auVar1[0xf];
        auVar17[0xe] = -(auVar1[0xe] == cVar20);
        auVar17[0xf] = -(cVar18 == cVar21);
        uVar6 = (ushort)(SUB161(auVar17 >> 7,0) & 1) | (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
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
                (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe | (ushort)(auVar17[0xf] >> 7) << 0xf;
        uVar13 = (uint)uVar6;
        while (uVar6 != 0) {
          uVar14 = 0;
          for (uVar4 = uVar13; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
            uVar14 = uVar14 + 1;
          }
          lVar11 = lVar12 + -0x20 + (uVar14 + uVar10 & uVar3) * -0x20;
          if ((lVar8 == *(long *)(lVar11 + 0x10)) &&
             (iVar7 = (*(code *)puVar5)(param_3,*(undefined8 *)(lVar11 + 8),lVar8), iVar7 == 0)) {
            return;
          }
          uVar6 = (ushort)(uVar13 - 1) & (ushort)uVar13;
          uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar6);
        }
        auVar22[0] = -(auVar1[0] == -1);
        auVar22[1] = -(auVar1[1] == -1);
        auVar22[2] = -(auVar1[2] == -1);
        auVar22[3] = -(auVar1[3] == -1);
        auVar22[4] = -(auVar1[4] == -1);
        auVar22[5] = -(auVar1[5] == -1);
        auVar22[6] = -(auVar1[6] == -1);
        auVar22[7] = -(auVar1[7] == -1);
        auVar22[8] = -(auVar1[8] == -1);
        auVar22[9] = -(auVar1[9] == -1);
        auVar22[10] = -(auVar1[10] == -1);
        auVar22[0xb] = -(auVar1[0xb] == -1);
        auVar22[0xc] = -(auVar1[0xc] == -1);
        auVar22[0xd] = -(auVar1[0xd] == -1);
        auVar22[0xe] = -(auVar1[0xe] == -1);
        auVar22[0xf] = -(cVar18 == -1);
        if ((((((((((((((((auVar22 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                         (auVar22 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar22 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar22 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar22 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar22 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar22 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar22 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar22 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar22 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar22 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar22 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar22 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar22 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar22 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || cVar18 == -1)
        break;
        uVar10 = uVar10 + lVar9 + 0x10;
        lVar9 = lVar9 + 0x10;
      }
    }
  }
  return;
}




// ELF address 0x0000000000082900; strategy_comm5::signal_trigger::SignalTrigger::update_score

/* strategy_comm5::signal_trigger::SignalTrigger::update_score */

void __rustcall
strategy_comm5::signal_trigger::SignalTrigger::update_score
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
LAB_00182ad2:
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
          goto LAB_00182ad2;
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




// ELF address 0x0000000000083790; strategy_comm5::signal_trigger::SignalTrigger::windows_rsi_trigger

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm5::signal_trigger::SignalTrigger::windows_rsi_trigger */

undefined1 * __rustcall
strategy_comm5::signal_trigger::SignalTrigger::windows_rsi_trigger
          (undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined1 auVar1 [16];
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined1 uVar5;
  long lVar6;
  long lVar7;
  undefined1 (*pauVar8) [16];
  long lVar9;
  undefined1 (*pauVar10) [16];
  uint uVar11;
  char cVar12;
  ulong uVar13;
  double dVar14;
  undefined8 extraout_XMM0_Qa;
  long local_78;
  long local_70;
  long local_68;
  undefined8 local_60;
  undefined1 *local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  
  local_78 = 0;
  local_70 = 1;
  local_68 = 0;
  lVar9 = param_3[3];
  local_60 = param_1;
  local_58 = param_2;
  if (lVar9 != 0) {
    pauVar10 = (undefined1 (*) [16])*param_3;
    pauVar8 = pauVar10 + 1;
    auVar1 = *pauVar10;
    uVar11 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
    local_38 = (double)param_3[8];
    local_40 = (double)param_3[0xb];
    local_48 = (double)param_3[10];
    local_50 = (double)param_3[9];
    lVar6 = 1;
    do {
      lVar4 = local_68;
      if ((short)uVar11 == 0) {
        do {
          auVar1 = *pauVar8;
          pauVar10 = pauVar10 + -0x98;
          pauVar8 = pauVar8 + 1;
          uVar11 = (uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
        } while (uVar11 == 0xffff);
        uVar11 = ~uVar11;
      }
      uVar2 = 0;
      for (uVar3 = uVar11; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
        uVar2 = uVar2 + 1;
      }
      lVar7 = (ulong)uVar2 * -0x98;
      dVar14 = (double)(*(ulong *)((long)pauVar10 + lVar7 + -0x18) & _DAT_001164c0);
      uVar13 = -(ulong)(DAT_00116348 < dVar14);
      dVar14 = (double)(~uVar13 & _s__00116440 |
                       (ulong)(DAT_001163c8 -
                              DAT_001163c8 /
                              (*(double *)((long)pauVar10 + lVar7 + -0x20) / dVar14 + DAT_00116368))
                       & uVar13);
      *(double *)((long)pauVar10 + lVar7 + -0x10) = dVar14;
      if (local_38 <= dVar14) {
        cVar12 = '\0';
      }
      else {
        cVar12 = '\x03';
        if (dVar14 < local_40) {
          cVar12 = '\x02';
          if (local_48 < dVar14) {
            cVar12 = (local_50 < dVar14) * '\x03' + '\x01';
          }
        }
      }
      if (local_68 == local_78) {
                    /* try { // try from 0018392d to 0018393b has its CatchHandler @ 0018396d */
        alloc::raw_vec::RawVec<T,A>::grow_one
                  (&local_78,anon_50e25bb1355b8971fc58210c29d1b4b6_12_llvm_1301231569978033549);
        lVar6 = local_70;
      }
      uVar11 = uVar11 - 1 & uVar11;
      lVar9 = lVar9 + -1;
      *(char *)(lVar6 + lVar4) = cVar12;
      local_68 = lVar4 + 1;
    } while (lVar9 != 0);
  }
  uVar5 = enum_rate_counter(local_60,&local_78);
  *local_58 = uVar5;
  *(undefined8 *)(local_58 + 8) = extraout_XMM0_Qa;
  return local_58;
}




// ELF address 0x0000000000082d70; strategy_comm5::signal_trigger::SignalTrigger::windows_std_trigger

/* strategy_comm5::signal_trigger::SignalTrigger::windows_std_trigger */

undefined1 * __rustcall
strategy_comm5::signal_trigger::SignalTrigger::windows_std_trigger
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
                    /* try { // try from 00182dcc to 00182de1 has its CatchHandler @ 00182e57 */
  local_80 = param_1;
  local_20 = param_3;
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (&local_78,&local_48,anon_f8fdc7844e54bdce0bd72b118f1760df_5_llvm_12406105305166711053);
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
      (*(code *)PTR___rust_dealloc_00203c78)(local_70,local_78,1);
    }
    *(long *)(param_2 + 8) = lVar2;
    uVar3 = 5;
  }
  *param_2 = uVar3;
  return param_2;
}




// ELF address 0x0000000000082c60; strategy_comm5::signal_trigger::SignalTrigger::windows_mean_trigger

/* strategy_comm5::signal_trigger::SignalTrigger::windows_mean_trigger */

undefined1 * __rustcall
strategy_comm5::signal_trigger::SignalTrigger::windows_mean_trigger
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
                    /* try { // try from 00182cbc to 00182cd1 has its CatchHandler @ 00182d47 */
  local_80 = param_1;
  local_20 = param_3;
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (&local_78,&local_48,anon_f8fdc7844e54bdce0bd72b118f1760df_5_llvm_12406105305166711053);
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
      (*(code *)PTR___rust_dealloc_00203c78)(local_70,local_78,1);
    }
    *(long *)(param_2 + 8) = lVar2;
    uVar3 = 5;
  }
  *param_2 = uVar3;
  return param_2;
}




// ELF address 0x0000000000083550; strategy_comm5::signal_trigger::SignalTrigger::windows_sharpe_trigger

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm5::signal_trigger::SignalTrigger::windows_sharpe_trigger */

undefined1 * __rustcall
strategy_comm5::signal_trigger::SignalTrigger::windows_sharpe_trigger
          (undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  double dVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined1 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 (*pauVar9) [16];
  long lVar10;
  undefined1 (*pauVar11) [16];
  uint uVar12;
  char cVar13;
  double dVar14;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar15 [16];
  double dVar16;
  long local_78;
  long local_70;
  long local_68;
  undefined8 local_60;
  undefined1 *local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  
  local_78 = 0;
  local_70 = 1;
  local_68 = 0;
  lVar10 = param_3[3];
  local_60 = param_1;
  local_58 = param_2;
  if (lVar10 != 0) {
    pauVar11 = (undefined1 (*) [16])*param_3;
    pauVar9 = pauVar11 + 1;
    auVar15 = *pauVar11;
    uVar12 = ~(uint)(ushort)((ushort)(SUB161(auVar15 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar15 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar15 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar15 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar15 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar15 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar15 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar15 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar15 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar15 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar15 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar15 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar15 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar15 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar15[0xf] >> 7) << 0xf);
    local_38 = (double)param_3[8];
    local_40 = (double)param_3[0xb];
    local_48 = (double)param_3[10];
    local_50 = (double)param_3[9];
    lVar6 = 1;
    do {
      lVar4 = local_68;
      if ((short)uVar12 == 0) {
        do {
          auVar15 = *pauVar9;
          pauVar11 = pauVar11 + -0x98;
          pauVar9 = pauVar9 + 1;
          uVar12 = (uint)(ushort)((ushort)(SUB161(auVar15 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1 |
                                  (ushort)(SUB161(auVar15 >> 0x17,0) & 1) << 2 |
                                  (ushort)(SUB161(auVar15 >> 0x1f,0) & 1) << 3 |
                                  (ushort)(SUB161(auVar15 >> 0x27,0) & 1) << 4 |
                                  (ushort)(SUB161(auVar15 >> 0x2f,0) & 1) << 5 |
                                  (ushort)(SUB161(auVar15 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar15 >> 0x3f,0) & 1) << 7 |
                                  (ushort)(SUB161(auVar15 >> 0x47,0) & 1) << 8 |
                                  (ushort)(SUB161(auVar15 >> 0x4f,0) & 1) << 9 |
                                  (ushort)(SUB161(auVar15 >> 0x57,0) & 1) << 10 |
                                  (ushort)(SUB161(auVar15 >> 0x5f,0) & 1) << 0xb |
                                  (ushort)(SUB161(auVar15 >> 0x67,0) & 1) << 0xc |
                                  (ushort)(SUB161(auVar15 >> 0x6f,0) & 1) << 0xd |
                                  (ushort)(SUB161(auVar15 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar15[0xf] >> 7) << 0xf);
        } while (uVar12 == 0xffff);
        uVar12 = ~uVar12;
      }
      uVar2 = 0;
      for (uVar3 = uVar12; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
        uVar2 = uVar2 + 1;
      }
      lVar7 = (ulong)uVar2 * -0x98;
      lVar8 = *(long *)((long)pauVar11 + lVar7 + -0x40);
      lVar8 = lVar8 + (ulong)(lVar8 == 0);
      auVar15._8_4_ = (int)((ulong)lVar8 >> 0x20);
      auVar15._0_8_ = lVar8;
      auVar15._12_4_ = _UNK_00116644;
      dVar1 = *(double *)((long)pauVar11 + lVar7 + -0x38);
      dVar16 = *(double *)((long)pauVar11 + lVar7 + -0x30) /
               ((auVar15._8_8_ - _UNK_00116508) +
               ((double)CONCAT44(_s__00116640,(int)lVar8) - _s__00116500)) - dVar1 * dVar1;
      dVar14 = 0.0;
      if (dVar16 <= 0.0) {
        dVar16 = dVar14;
      }
      dVar16 = SQRT(dVar16);
      *(double *)((long)pauVar11 + lVar7 + -0x28) = dVar16;
      if (DAT_00116348 < (double)((ulong)dVar16 & _DAT_001164c0)) {
        dVar14 = dVar1 / dVar16;
      }
      *(double *)((long)pauVar11 + lVar7 + -8) = dVar14;
      if (local_38 <= dVar14) {
        cVar13 = '\0';
      }
      else {
        cVar13 = '\x03';
        if (dVar14 < local_40) {
          cVar13 = '\x02';
          if (local_48 < dVar14) {
            cVar13 = (local_50 < dVar14) * '\x03' + '\x01';
          }
        }
      }
      if (local_68 == local_78) {
                    /* try { // try from 0018371d to 0018372b has its CatchHandler @ 0018375d */
        alloc::raw_vec::RawVec<T,A>::grow_one
                  (&local_78,anon_50e25bb1355b8971fc58210c29d1b4b6_11_llvm_1301231569978033549);
        lVar6 = local_70;
      }
      uVar12 = uVar12 - 1 & uVar12;
      lVar10 = lVar10 + -1;
      *(char *)(lVar6 + lVar4) = cVar13;
      local_68 = lVar4 + 1;
    } while (lVar10 != 0);
  }
  uVar5 = enum_rate_counter(local_60,&local_78);
  *local_58 = uVar5;
  *(undefined8 *)(local_58 + 8) = extraout_XMM0_Qa;
  return local_58;
}




// ELF address 0x0000000000082bd0; strategy_comm5::signal_trigger::SignalTrigger::point_signal_trigger_pv4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm5::signal_trigger::SignalTrigger::point_signal_trigger_pv4 */

void __rustcall
strategy_comm5::signal_trigger::SignalTrigger::point_signal_trigger_pv4
          (double param_1,double param_2,ulong param_3,undefined1 *param_4,long param_5)

{
  undefined1 uVar1;
  double dVar2;
  
  dVar2 = *(double *)(param_5 + 0x38);
  param_1 = ((double)(param_3 & _DAT_001164c0) + param_2) * param_1;
  if (dVar2 <= 0.0) {
    dVar2 = param_1 + dVar2;
    if (0.0 <= dVar2) {
      dVar2 = 0.0;
    }
    if (dVar2 < *(double *)(param_5 + 0x40)) goto LAB_00182c27;
  }
  else {
    dVar2 = dVar2 - param_1;
    if (dVar2 <= 0.0) {
      dVar2 = 0.0;
    }
    if (dVar2 < *(double *)(param_5 + 0x40)) {
LAB_00182c27:
      uVar1 = 3;
      if (((dVar2 < *(double *)(param_5 + 0x58)) && (uVar1 = 2, *(double *)(param_5 + 0x50) < dVar2)
          ) && (uVar1 = 4, dVar2 <= *(double *)(param_5 + 0x48))) {
        *param_4 = 1;
        *(undefined8 *)(param_4 + 8) = 0x3ff0000000000000;
        return;
      }
      goto LAB_00182c07;
    }
  }
  uVar1 = 0;
LAB_00182c07:
  *param_4 = uVar1;
  *(undefined8 *)(param_4 + 8) = 0x3ff0000000000000;
  return;
}




// ELF address 0x0000000000082e80; strategy_comm5::signal_trigger::SignalTrigger::windows_quantile_trigger

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm5::signal_trigger::SignalTrigger::windows_quantile_trigger */

undefined1 * __rustcall
strategy_comm5::signal_trigger::SignalTrigger::windows_quantile_trigger
          (double param_1,undefined8 param_2,undefined1 *param_3,undefined8 *param_4)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  char cVar7;
  undefined1 uVar8;
  ulong uVar9;
  long lVar10;
  double *pdVar11;
  ulong uVar12;
  undefined8 uVar13;
  char cVar14;
  undefined1 (*pauVar15) [16];
  uint uVar16;
  undefined1 (*pauVar17) [16];
  char cVar18;
  long lVar19;
  ulong uVar20;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar24;
  long local_f0;
  long local_e8;
  long local_e0;
  ulong auStack_d8 [3];
  undefined8 uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  double local_90;
  double local_88;
  double local_80;
  long local_78;
  double local_70;
  double dStack_68;
  long local_60;
  double local_58;
  undefined8 local_50;
  double local_48;
  
  local_f0 = 0;
  local_e8 = 1;
  local_e0 = 0;
  pauVar17 = (undefined1 (*) [16])*param_4;
  lVar10 = param_4[3];
  auVar23 = *pauVar17;
  uVar1 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
          (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
          (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
          (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
          (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
          (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
          (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
          (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
          (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
          (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
          (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
          (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
          (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar23[0xf] >> 7) << 0xf;
  pauVar15 = pauVar17 + 1;
  local_50 = param_2;
  if ((param_1 < 0.0) || (DAT_00116368 < param_1)) {
    if (lVar10 != 0) {
      while (uVar1 == 0xffff) {
        auVar23 = *pauVar15;
        pauVar15 = pauVar15 + 1;
        uVar1 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar23[0xf] >> 7) << 0xf;
      }
LAB_001834af:
                    /* try { // try from 001834af to 001834bf has its CatchHandler @ 00183516 */
      uVar13 = anyhow::error::_<impl_anyhow::Error>::msg("quantile not found",0x12);
      *(undefined8 *)(param_3 + 8) = uVar13;
      *param_3 = 5;
      if (local_f0 == 0) {
        return param_3;
      }
      (*(code *)PTR___rust_dealloc_00203c78)(local_e8,local_f0,1);
      return param_3;
    }
  }
  else {
    uVar16 = ~(uint)uVar1;
    dVar24 = DAT_00116368 - param_1;
    local_48 = param_1;
    if ((dVar24 < 0.0) || (DAT_00116368 < dVar24)) {
      if (lVar10 != 0) {
        if (uVar1 == 0xffff) {
          do {
            auVar23 = *pauVar15;
            pauVar17 = pauVar17 + -0x98;
            pauVar15 = pauVar15 + 1;
            uVar16 = (uint)(ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar23[0xf] >> 7) << 0xf);
          } while (uVar16 == 0xffff);
          uVar16 = ~uVar16;
        }
        uVar2 = 0;
        for (; (uVar16 & 1) == 0; uVar16 = uVar16 >> 1 | 0x80000000) {
          uVar2 = uVar2 + 1;
        }
        lVar10 = (ulong)uVar2 * -0x98;
        uVar20 = *(ulong *)((long)pauVar17 + lVar10 + -0x60);
        if (uVar20 != 0) {
          auVar23._8_4_ = (int)(uVar20 >> 0x20);
          auVar23._0_8_ = uVar20;
          auVar23._12_4_ = _UNK_00116644;
          param_1 = param_1 * ((auVar23._8_8_ - _UNK_00116508) +
                              ((double)CONCAT44(_s__00116640,(int)uVar20) - _s__00116500));
          uVar9 = 0;
          if (0.0 <= param_1) {
            uVar9 = (long)(param_1 - _DAT_00116390) & (long)param_1 >> 0x3f | (long)param_1;
          }
          uVar12 = 0xffffffffffffffff;
          if (param_1 <= _DAT_001162b8) {
            uVar12 = uVar9;
          }
          auStack_d8[2] = *(long *)((long)pauVar17 + lVar10 + -0x70);
          uStack_c0 = *(undefined8 *)((long)pauVar17 + lVar10 + -0x68);
          auStack_d8[0] = (ulong)(auStack_d8[2] != 0);
          uStack_98 = uVar20;
          if (auStack_d8[2] == 0) {
            uStack_98 = 0;
          }
          auStack_d8[1] = 0;
          uStack_b0 = 0;
          uStack_b8 = auStack_d8[0];
          lStack_a8 = auStack_d8[2];
          uStack_a0 = uStack_c0;
          if (uVar12 != 0) {
            if (uVar12 < uVar20) {
              uVar20 = uVar12;
            }
            do {
                    /* try { // try from 00183490 to 00183497 has its CatchHandler @ 00183518 */
              lVar10 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                       ::next(auStack_d8);
              if (lVar10 == 0) goto LAB_001834af;
              uVar20 = uVar20 - 1;
            } while (uVar20 != 0);
          }
                    /* try { // try from 001834a2 to 001834ab has its CatchHandler @ 00183512 */
          _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>::
          next(auStack_d8);
        }
        goto LAB_001834af;
      }
    }
    else {
      local_58 = dVar24;
      if (lVar10 != 0) {
        local_70 = (double)param_4[8];
        local_80 = (double)param_4[0xb];
        local_88 = (double)param_4[10];
        local_90 = (double)param_4[9];
        local_78 = 1;
        do {
          lVar6 = local_e0;
          if ((short)uVar16 == 0) {
            do {
              auVar23 = *pauVar15;
              pauVar17 = pauVar17 + -0x98;
              pauVar15 = pauVar15 + 1;
              uVar16 = (uint)(ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) |
                                      (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
                                      (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
                                      (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
                                      (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
                                      (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
                                      (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
                                      (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
                                      (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
                                      (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
                                      (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
                                      (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
                                      (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
                                      (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
                                      (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe |
                                     (ushort)(byte)(auVar23[0xf] >> 7) << 0xf);
            } while (uVar16 == 0xffff);
            uVar16 = ~uVar16;
          }
          uVar2 = 0;
          for (uVar3 = uVar16; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
            uVar2 = uVar2 + 1;
          }
          lVar19 = (ulong)uVar2 * -0x98;
          uVar20 = *(ulong *)((long)pauVar17 + lVar19 + -0x60);
          local_60 = lVar10;
          if (uVar20 == 0) goto LAB_001834af;
          auVar21._8_4_ = (int)(uVar20 >> 0x20);
          auVar21._0_8_ = uVar20;
          auVar21._12_4_ = _UNK_00116644;
          dVar24 = ((auVar21._8_8_ - _UNK_00116508) +
                   ((double)CONCAT44(_s__00116640,(int)uVar20) - _s__00116500)) * local_48;
          uVar9 = 0;
          if (DAT_00116388 <= dVar24) {
            uVar9 = (long)(dVar24 - _DAT_00116390) & (long)dVar24 >> 0x3f | (long)dVar24;
          }
          if (_DAT_001162b8 < dVar24) {
            uVar9 = 0xffffffffffffffff;
          }
          auStack_d8[2] = *(long *)((long)pauVar17 + lVar19 + -0x70);
          uStack_c0 = *(undefined8 *)((long)pauVar17 + lVar19 + -0x68);
          auStack_d8[0] = (ulong)(auStack_d8[2] != 0);
          uStack_98 = uVar20;
          if (auStack_d8[2] == 0) {
            uStack_98 = 0;
          }
          auStack_d8[1] = 0;
          uStack_b0 = 0;
          uStack_b8 = auStack_d8[0];
          lStack_a8 = auStack_d8[2];
          uStack_a0 = uStack_c0;
          if (uVar9 != 0) {
            if (uVar9 < uVar20) {
              uVar20 = uVar9;
            }
            do {
                    /* try { // try from 001830a0 to 001830a9 has its CatchHandler @ 0018351c */
              lVar10 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                       ::next(auStack_d8);
              if (lVar10 == 0) goto LAB_001834af;
              uVar20 = uVar20 - 1;
            } while (uVar20 != 0);
          }
                    /* try { // try from 001830b8 to 001830c1 has its CatchHandler @ 00183514 */
          pdVar11 = (double *)
                    _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                    ::next(auStack_d8);
          if ((pdVar11 == (double *)0x0) ||
             (uVar20 = *(ulong *)((long)pauVar17 + lVar19 + -0x60), uVar20 == 0)) goto LAB_001834af;
          auVar22._8_4_ = (int)(uVar20 >> 0x20);
          auVar22._0_8_ = uVar20;
          auVar22._12_4_ = _UNK_00116644;
          dVar24 = ((auVar22._8_8_ - _UNK_00116508) +
                   ((double)CONCAT44(_s__00116640,(int)uVar20) - _s__00116500)) * local_58;
          uVar9 = 0;
          if (DAT_00116388 <= dVar24) {
            uVar9 = (long)(dVar24 - _DAT_00116390) & (long)dVar24 >> 0x3f | (long)dVar24;
          }
          if (_DAT_001162b8 < dVar24) {
            uVar9 = 0xffffffffffffffff;
          }
          dStack_68 = *pdVar11;
          auStack_d8[2] = *(long *)((long)pauVar17 + lVar19 + -0x70);
          uStack_c0 = *(undefined8 *)((long)pauVar17 + lVar19 + -0x68);
          auStack_d8[0] = (ulong)(auStack_d8[2] != 0);
          uStack_98 = uVar20;
          if (auStack_d8[2] == 0) {
            uStack_98 = 0;
          }
          auStack_d8[1] = 0;
          uStack_b0 = 0;
          uStack_b8 = auStack_d8[0];
          lStack_a8 = auStack_d8[2];
          uStack_a0 = uStack_c0;
          if (uVar9 != 0) {
            if (uVar9 < uVar20) {
              uVar20 = uVar9;
            }
            do {
                    /* try { // try from 001831b0 to 001831b9 has its CatchHandler @ 0018351a */
              lVar10 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                       ::next(auStack_d8);
              if (lVar10 == 0) goto LAB_001834af;
              uVar20 = uVar20 - 1;
            } while (uVar20 != 0);
          }
                    /* try { // try from 001831c8 to 001832d6 has its CatchHandler @ 00183514 */
          pdVar11 = (double *)
                    _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                    ::next(auStack_d8);
          if (pdVar11 == (double *)0x0) goto LAB_001834af;
          bVar5 = true;
          if (local_70 <= dStack_68) {
            bVar4 = true;
            cVar14 = '\0';
          }
          else {
            cVar14 = '\x03';
            bVar4 = true;
            if ((dStack_68 < local_80) && (cVar14 = '\x02', local_88 < dStack_68)) {
              bVar4 = local_90 >= dStack_68;
              cVar14 = (local_90 < dStack_68) * '\x03' + '\x01';
            }
          }
          dVar24 = *pdVar11;
          if (local_70 <= dVar24) {
            cVar7 = '\0';
          }
          else {
            cVar7 = '\x03';
            if ((dVar24 < local_80) && (cVar7 = '\x02', local_88 < dVar24)) {
              bVar5 = local_90 >= dVar24;
              cVar7 = (local_90 < dVar24) * '\x03' + '\x01';
            }
          }
          cVar18 = '\x04';
          if (bVar4) {
            if (!bVar5) {
              cVar18 = '\x04' - (cVar14 == '\x03');
              if (cVar14 == '\0') {
                cVar18 = '\0';
              }
            }
          }
          else if ((bVar5) && (cVar18 = (cVar7 != '\x02') * '\x02' + '\x02', cVar7 == '\x01')) {
            cVar18 = '\x01';
          }
          if (lVar6 == local_f0) {
            alloc::raw_vec::RawVec<T,A>::grow_one
                      (&local_f0,
                       &
                       PTR_anon_50e25bb1355b8971fc58210c29d1b4b6_7_llvm_1301231569978033549_001feb40
                      );
            local_78 = local_e8;
          }
          uVar16 = uVar16 - 1 & uVar16;
          lVar10 = local_60 + -1;
          *(char *)(local_78 + lVar6) = cVar18;
          local_e0 = lVar6 + 1;
        } while (lVar10 != 0);
      }
    }
  }
  uVar8 = enum_rate_counter(local_50,&local_f0);
  *param_3 = uVar8;
  *(undefined8 *)(param_3 + 8) = extraout_XMM0_Qa;
  return param_3;
}




// ELF address 0x0000000000082b40; strategy_comm5::signal_trigger::SignalTrigger::point_signal_trigger_pv1_spread

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm5::signal_trigger::SignalTrigger::point_signal_trigger_pv1_spread */

void __rustcall
strategy_comm5::signal_trigger::SignalTrigger::point_signal_trigger_pv1_spread
          (double param_1,ulong param_2,undefined1 *param_3,long param_4)

{
  undefined1 uVar1;
  double dVar2;
  
  dVar2 = *(double *)(param_4 + 0x38);
  param_1 = (double)(param_2 & _DAT_001164c0) * param_1;
  if (dVar2 <= 0.0) {
    dVar2 = param_1 + dVar2;
    if (0.0 <= dVar2) {
      dVar2 = 0.0;
    }
    if (dVar2 < *(double *)(param_4 + 0x40)) goto LAB_00182b93;
  }
  else {
    dVar2 = dVar2 - param_1;
    if (dVar2 <= 0.0) {
      dVar2 = 0.0;
    }
    if (dVar2 < *(double *)(param_4 + 0x40)) {
LAB_00182b93:
      uVar1 = 3;
      if (((dVar2 < *(double *)(param_4 + 0x58)) && (uVar1 = 2, *(double *)(param_4 + 0x50) < dVar2)
          ) && (uVar1 = 4, dVar2 <= *(double *)(param_4 + 0x48))) {
        *param_3 = 1;
        *(undefined8 *)(param_3 + 8) = 0x3ff0000000000000;
        return;
      }
      goto LAB_00182b73;
    }
  }
  uVar1 = 0;
LAB_00182b73:
  *param_3 = uVar1;
  *(undefined8 *)(param_3 + 8) = 0x3ff0000000000000;
  return;
}




// ELF address 0x00000000000827b0; strategy_comm5::signal_trigger::SignalTrigger::new

/* strategy_comm5::signal_trigger::SignalTrigger::new */

undefined8 * __rustcall
strategy_comm5::signal_trigger::SignalTrigger::new
          (undefined8 *param_1,undefined4 *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 (*pauVar10) [16];
  undefined4 local_68 [8];
  undefined1 local_48 [16];
  
  lVar1 = param_3[1];
  lVar2 = param_3[2];
  pauVar10 = (undefined1 (*) [16])__tls_get_addr(&PTR_00203cf0);
  if (pauVar10[1][0] == '\x01') {
    local_48 = *pauVar10;
  }
  else {
                    /* try { // try from 001828a6 to 001828ab has its CatchHandler @ 001828be */
    local_48 = (*(code *)PTR_hashmap_random_keys_00203de8)();
    *pauVar10 = local_48;
    pauVar10[1][0] = 1;
  }
  *(long *)*pauVar10 = local_48._0_8_ + 1;
  local_68[4] = anon_50e25bb1355b8971fc58210c29d1b4b6_3_llvm_1301231569978033549._16_4_;
  local_68[5] = anon_50e25bb1355b8971fc58210c29d1b4b6_3_llvm_1301231569978033549._20_4_;
  local_68[6] = anon_50e25bb1355b8971fc58210c29d1b4b6_3_llvm_1301231569978033549._24_4_;
  local_68[7] = anon_50e25bb1355b8971fc58210c29d1b4b6_3_llvm_1301231569978033549._28_4_;
  local_68[0] = anon_50e25bb1355b8971fc58210c29d1b4b6_3_llvm_1301231569978033549._0_4_;
  local_68[1] = anon_50e25bb1355b8971fc58210c29d1b4b6_3_llvm_1301231569978033549._4_4_;
  local_68[2] = anon_50e25bb1355b8971fc58210c29d1b4b6_3_llvm_1301231569978033549._8_4_;
  local_68[3] = anon_50e25bb1355b8971fc58210c29d1b4b6_3_llvm_1301231569978033549._12_4_;
                    /* try { // try from 00182821 to 0018282e has its CatchHandler @ 001828c3 */
  _<hashbrown::map::HashMap<K,V,S,A>as_core::iter::traits::collect::Extend<(K,V)>>::extend
            (local_68,lVar1,lVar1 + lVar2 * 8);
  *(undefined1 (*) [16])(param_1 + 4) = local_48;
  param_1[2] = local_68._16_8_;
  param_1[3] = local_68._24_8_;
  *param_1 = CONCAT44(local_68[1],local_68[0]);
  param_1[1] = CONCAT44(local_68[3],local_68[2]);
  param_1[6] = 0;
  param_1[7] = 0;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  uVar6 = param_2[4];
  uVar7 = param_2[5];
  uVar8 = param_2[6];
  uVar9 = param_2[7];
  *(undefined4 *)(param_1 + 8) = *param_2;
  *(undefined4 *)((long)param_1 + 0x44) = uVar3;
  *(undefined4 *)(param_1 + 9) = uVar4;
  *(undefined4 *)((long)param_1 + 0x4c) = uVar5;
  *(undefined4 *)(param_1 + 10) = uVar6;
  *(undefined4 *)((long)param_1 + 0x54) = uVar7;
  *(undefined4 *)(param_1 + 0xb) = uVar8;
  *(undefined4 *)((long)param_1 + 0x5c) = uVar9;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  if (*param_3 != 0) {
    (*(code *)PTR___rust_dealloc_00203c78)(lVar1,*param_3 << 3,8);
  }
  return param_1;
}




// ELF address 0x0000000000083f00; strategy_comm5::signal_trigger::dynamic_threshold

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm5::signal_trigger::dynamic_threshold */

void __rustcall
strategy_comm5::signal_trigger::dynamic_threshold
          (double param_1,double param_2,double param_3,double param_4,double *param_5,
          double *param_6)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  
  if ((((0.0 <= param_2) && (0.0 <= param_3)) && (param_2 <= param_1)) &&
     (_DAT_001163e0 < (double)(_DAT_001164c0 & (ulong)param_4))) {
    dVar1 = param_3 - param_2;
    if (param_3 - param_2 <= DAT_00116348) {
      dVar1 = DAT_00116348;
    }
    dVar1 = (param_1 - param_2) / dVar1;
    if (DAT_00116368 <= dVar1) {
      dVar1 = DAT_00116368;
    }
    dVar4 = (double)((ulong)(param_4 * dVar1) & _DAT_001164c0);
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




// ELF address 0x00000000000839a0; _ZN14strategy_comm514signal_trigger17enum_rate_counter17hb51fcb9e7a9a6c40E.llvm.1301231569978033549

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm5::signal_trigger::enum_rate_counter */

ulong __rustcall strategy_comm5::signal_trigger::enum_rate_counter(double param_1,long *param_2)

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
  undefined8 unaff_RBP;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined1 *puVar18;
  long lVar19;
  ushort uVar20;
  ulong uVar21;
  undefined1 (*pauVar22) [16];
  ulong uVar23;
  char *pcVar24;
  byte bVar25;
  uint uVar26;
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
      (*(code *)PTR___rust_dealloc_00203c78)(param_2[1],*param_2,1);
    }
    goto LAB_00183e8e;
  }
  local_98 = param_1;
  uStack_90 = in_XMM0_Qb;
  pauVar9 = (undefined1 (*) [16])__tls_get_addr(&PTR_00203cf0);
  if (pauVar9[1][0] == '\x01') {
    local_a8 = *pauVar9;
  }
  else {
                    /* try { // try from 00183ea2 to 00183ea7 has its CatchHandler @ 00183eb9 */
    local_a8 = (*(code *)PTR_hashmap_random_keys_00203de8)();
    *pauVar9 = local_a8;
    pauVar9[1][0] = 1;
  }
  *(long *)*pauVar9 = local_a8._0_8_ + 1;
  local_b8 = anon_50e25bb1355b8971fc58210c29d1b4b6_3_llvm_1301231569978033549._16_8_;
  lStack_b0 = anon_50e25bb1355b8971fc58210c29d1b4b6_3_llvm_1301231569978033549._24_8_;
  local_c8 = (undefined1 (*) [16])
             anon_50e25bb1355b8971fc58210c29d1b4b6_3_llvm_1301231569978033549._0_8_;
  uStack_c0 = anon_50e25bb1355b8971fc58210c29d1b4b6_3_llvm_1301231569978033549._8_8_;
  pcVar24 = (char *)param_2[1];
  pcVar1 = pcVar24 + lVar3;
  local_68 = pcVar24;
  do {
    cVar14 = *pcVar24;
    local_60 = CONCAT71(local_60._1_7_,cVar14);
                    /* try { // try from 00183b5b to 00183bd5 has its CatchHandler @ 00183ebe */
    puVar10 = (undefined1 *)core::hash::BuildHasher::hash_one(local_a8);
    pcVar24 = pcVar24 + 1;
    bVar25 = (byte)((ulong)puVar10 >> 0x38);
    bVar28 = bVar25 >> 1;
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
        uVar26 = 0;
        for (uVar6 = uVar12; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar26 = uVar26 + 1;
        }
        uVar21 = (ulong)(*pauVar9 + uVar26) & uStack_c0;
        if (cVar14 == local_c8[-1 - uVar21][0]) {
          *(long *)(local_c8[-1 - uVar21] + 8) = *(long *)(local_c8[-1 - uVar21] + 8) + 1;
          goto joined_r0x00183ac4;
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
    uVar26 = 0;
    for (; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
      uVar26 = uVar26 + 1;
    }
    uVar21 = uVar26 + uVar17 & uStack_c0;
    bVar28 = (*local_c8)[uVar21];
    if (-1 < (char)bVar28) {
      auVar29 = *local_c8;
      uVar12 = 0;
      for (uVar26 = (uint)(ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) |
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
                                  (ushort)(byte)(auVar29[0xf] >> 7) << 0xf); (uVar26 & 1) == 0;
          uVar26 = uVar26 >> 1 | 0x80000000) {
        uVar12 = uVar12 + 1;
      }
      uVar21 = (ulong)uVar12;
      bVar28 = (*local_c8)[uVar21];
    }
    pauVar9 = (undefined1 (*) [16])(uVar21 - 0x10 & uStack_c0);
    bVar25 = bVar25 >> 1;
    (*local_c8)[uVar21] = bVar25;
    (*pauVar9)[(long)local_c8[1]] = bVar25;
    uVar17 = (ulong)bVar28 & 0xffffffffffffff01;
    local_b8 = local_b8 - uVar17;
    local_c8[-1 - uVar21][0] = cVar14;
    *(undefined8 *)(local_c8[-1 - uVar21] + 8) = 0;
    lStack_b0 = lStack_b0 + 1;
    *(long *)(local_c8[-1 - uVar21] + 8) = *(long *)(local_c8[-1 - uVar21] + 8) + 1;
joined_r0x00183ac4:
  } while (pcVar24 != pcVar1);
  if (uStack_c0 == 0) {
    uVar13 = 0;
    if (lStack_b0 != 0) goto LAB_00183c4b;
LAB_00183dc6:
    dVar34 = 0.0;
    dVar33 = 0.0;
    uVar16 = 4;
    if (uVar17 != 0 && uStack_c0 != 0) {
      (*(code *)PTR___rust_dealloc_00203c78)();
      dVar34 = 0.0;
      dVar33 = 0.0;
    }
  }
  else {
    uVar17 = uStack_c0 * 0x11 + 0x21;
    pauVar9 = local_c8 + (-1 - uStack_c0);
    uVar13 = 0x10;
    if (lStack_b0 == 0) goto LAB_00183dc6;
LAB_00183c4b:
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
    uVar26 = ~(uint)uVar20;
    for (uVar12 = uVar26; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
      iVar5 = iVar5 + 1;
    }
    uVar16 = (ulong)*(byte *)((long)pauVar11 + (-0x10 - (ulong)(uint)(iVar5 << 4)));
    uVar21 = *(ulong *)((long)pauVar11 + (-8 - (ulong)(uint)(iVar5 << 4)));
    lVar19 = lStack_b0 + -1;
    if (lVar19 != 0) {
      uVar26 = uVar26 & -(uint)uVar20 - 2;
      uVar23 = uVar21;
      uVar15 = uVar16;
      do {
        local_60 = uVar23;
        if ((short)uVar26 == 0) {
          do {
            auVar29 = *pauVar22;
            pauVar11 = pauVar11 + -0x10;
            pauVar22 = pauVar22 + 1;
            uVar26 = (uint)(ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) |
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
          } while (uVar26 == 0xffff);
          uVar26 = ~uVar26;
        }
        iVar5 = 0;
        for (uVar12 = uVar26; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
          iVar5 = iVar5 + 1;
        }
        uVar26 = uVar26 - 1 & uVar26;
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
      (*(code *)PTR___rust_dealloc_00203c78)(pauVar9,uVar17,uVar13);
    }
    auVar29._8_4_ = (int)(uVar21 >> 0x20);
    auVar29._0_8_ = uVar21;
    auVar29._12_4_ = _UNK_00116644;
    dVar33 = auVar29._8_8_ - _UNK_00116508;
    dVar34 = dVar33 + ((double)CONCAT44(_s__00116640,(int)uVar21) - _s__00116500);
  }
  dVar34 = dVar34 / (double)lVar3;
  uVar17 = 4;
  if (local_98 < dVar34) {
    uVar17 = uVar16 & 0xff;
  }
  local_98 = (double)(-(ulong)(local_98 < dVar34) & (ulong)dVar34);
  uStack_90 = uStack_90 & (ulong)dVar33;
  if (*param_2 != 0) {
    (*(code *)PTR___rust_dealloc_00203c78)(local_68,*param_2,1);
  }
LAB_00183e8e:
  return uVar17 & 0xffffffff;
}




// ELF address 0x00000000000823c0; strategy_comm5::signal_trigger::TsQuantileCalculator::update

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm5::signal_trigger::TsQuantileCalculator::update */

void __rustcall
strategy_comm5::signal_trigger::TsQuantileCalculator::update
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
    param_4 = &PTR_anon_50e25bb1355b8971fc58210c29d1b4b6_7_llvm_1301231569978033549_001feb28;
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
        if (lVar7 == 0) goto LAB_001824d3;
        dVar17 = *pdVar6;
        dVar18 = pdVar6[1];
        param_4 = ppuVar13;
        if (param_2 <= dVar17) {
          if (param_2 < dVar17) goto LAB_001824d3;
LAB_00182476:
          cVar10 = ((ulong)dVar16 >= (ulong)dVar18 && dVar16 != dVar18) -
                   ((ulong)dVar16 < (ulong)dVar18);
        }
        else {
          cVar10 = '\x01';
          if (param_2 < dVar17) goto LAB_00182476;
        }
        pdVar6 = pdVar6 + 2;
        lVar7 = lVar7 + -0x10;
        ppuVar13 = (undefined **)((long)ppuVar13 + 1);
      } while (cVar10 == '\x01');
      if (cVar10 == '\0') goto LAB_00182526;
LAB_001824d3:
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
LAB_00182526:
  param_3[8] = param_3[8] + 1;
  dVar16 = (double)param_3[9] + param_2;
  param_3[9] = (ulong)dVar16;
  uVar9 = param_3[10] + 1;
  param_3[10] = uVar9;
  auVar20._8_4_ = (int)(uVar9 >> 0x20);
  auVar20._0_8_ = uVar9;
  auVar20._12_4_ = _UNK_00116644;
  param_3[0xb] = (ulong)(dVar16 / ((auVar20._8_8_ - _UNK_00116508) +
                                  ((double)CONCAT44(_s__00116640,(int)uVar9) - _s__00116500)));
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
            if (lVar7 == 0) goto joined_r0x00182708;
            dVar1 = *pdVar5;
            dVar4 = pdVar5[1];
            if (dVar17 <= dVar1) {
              uVar12 = uVar8;
              if (dVar17 < dVar1) goto joined_r0x00182708;
LAB_00182696:
              cVar10 = ((ulong)dVar18 >= (ulong)dVar4 && dVar18 != dVar4) -
                       ((ulong)dVar18 < (ulong)dVar4);
            }
            else {
              cVar10 = '\x01';
              if (dVar17 < dVar1) goto LAB_00182696;
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
joined_r0x00182708:
          if (local_78 == 0.0) break;
          local_78 = (double)((long)local_78 - 1);
          local_80 = (double *)local_80[uVar12 + 0x18];
        } while( true );
      }
      dVar16 = dVar16 - dVar17;
      param_3[9] = (ulong)dVar16;
      dVar18 = 0.0;
      if (uVar9 == 0) {
LAB_001825b0:
        uVar9 = 0;
      }
      else {
        uVar9 = uVar9 - 1;
        param_3[10] = uVar9;
        if (uVar9 == 0) goto LAB_001825b0;
        auVar19._8_4_ = (int)(uVar9 >> 0x20);
        auVar19._0_8_ = uVar9;
        auVar19._12_4_ = _UNK_00116644;
        dVar18 = dVar16 / ((auVar19._8_8_ - _UNK_00116508) +
                          ((double)CONCAT44(_s__00116640,(int)uVar9) - _s__00116500));
      }
      param_3[0xb] = (ulong)dVar18;
      dVar18 = DAT_00116388;
      param_3[0xc] = (ulong)((double)param_3[0xc] - dVar17 * dVar17);
      param_3[(ulong)(dVar17 <= dVar18) + 0xe] =
           (ulong)((double)param_3[(ulong)(dVar17 <= dVar18) + 0xe] - dVar17);
      uVar8 = param_3[3];
    } while (uVar8 != 0);
  }
  return;
}




// ELF address 0x000000000003c3c0; strategy_comm5::high_taker_rate

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm5::high_taker_rate */

double __rustcall
strategy_comm5::high_taker_rate
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
    if (((0.0 < param_3) && (DAT_00116368 < param_6)) &&
       (dVar3 = (double)(param_2 & _DAT_001164c0), _DAT_001163e0 <= dVar3)) {
      dVar1 = (double)(param_1 & _DAT_001164c0);
      dVar2 = dVar1 / dVar3 + _s__001162d8;
      if (dVar2 <= 0.0) {
        dVar2 = 0.0;
      }
      dVar2 = (double)(*(code *)PTR_tanh_00203d60)(dVar2 * DAT_001163c0);
      dVar2 = (param_6 + _s__001162d8) * dVar2 + DAT_00116368;
      param_3 = ((dVar1 - dVar3) * unaff_XMM6_Qa) / param_3;
      dVar3 = param_3;
      if (dVar2 <= param_3) {
        dVar3 = dVar2;
      }
      dVar3 = (double)(-(ulong)NAN(dVar2) & (ulong)param_3 | ~-(ulong)NAN(dVar2) & (ulong)dVar3);
      if (dVar3 <= DAT_00116388) {
        dVar3 = DAT_00116388;
      }
      return dVar4 * dVar3;
    }
  }
  return dVar4;
}




// ELF address 0x0000000000081770; strategy_comm5::vol_spread_ratio::VolSpreadRatio::update

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_comm5::vol_spread_ratio::VolSpreadRatio::update */

ulong __rustcall
strategy_comm5::vol_spread_ratio::VolSpreadRatio::update
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
  
  dVar11 = DAT_001163c0 * (param_2 + param_3);
  dVar9 = (double)(*(code *)PTR_round_002040f0)
                            (((param_3 - param_2) / (param_2 + param_3)) * _DAT_001163f8);
  uVar4 = *param_4;
  uVar1 = param_4[3];
  if (uVar1 == uVar4) {
    alloc::collections::vec_deque::VecDeque<T,A>::grow
              (param_4,anon_215e5a04abb1900b96ee677731a32036_29_llvm_5469470877335241632);
    uVar4 = *param_4;
    uVar1 = param_4[3];
  }
  dVar9 = dVar9 / DAT_001163b0;
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
    if ((double)param_4[0x29] * DAT_001163c0 <= param_1 - *(double *)(uVar4 + lVar2)) {
      dVar9 = *(double *)(lVar2 + uVar4 + 8);
      if (dVar9 <= 0.0) {
        return 0;
      }
      dVar9 = (double)(*(code *)PTR_round_002040f0)
                                ((*(double *)(uVar4 + 8 + (uVar5 - uVar6) * 0x10) / dVar9 +
                                 _s__001162d8) * _DAT_001163f8);
      signal_trigger::TsQuantileCalculator::update(param_1,dVar9 / DAT_001163b0,param_4 + 5);
      uVar4 = param_4[0xf];
      uVar1 = 1;
      if (1 < uVar4) {
        uVar1 = uVar4;
      }
      auVar10._8_4_ = (int)(uVar1 >> 0x20);
      auVar10._0_8_ = uVar1;
      auVar10._12_4_ = _UNK_00116644;
      dVar9 = (double)param_4[0x11] /
              ((auVar10._8_8_ - _UNK_00116508) +
              ((double)CONCAT44(_s__00116640,(int)uVar1) - _s__00116500)) -
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




// ELF address 0x000000000003c500; strategy_comm5::taker_fillable_cum

/* strategy_comm5::taker_fillable_cum */

double __rustcall strategy_comm5::taker_fillable_cum(double param_1,long param_2,int param_3)

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




// ELF address 0x000000000003be50; strategy_comm5::live_pending_counts

/* strategy_comm5::live_pending_counts */

undefined1  [16] __rustcall
strategy_comm5::live_pending_counts
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
  
  (*(code *)PTR_pending_orders_00203d38)(&local_48,param_1,param_2,param_3);
                    /* try { // try from 0013be87 to 0013be9a has its CatchHandler @ 0013c399 */
  (*(code *)PTR_cancel_pending_ids_00203d58)(&local_60,param_1,param_2,param_3);
  lVar7 = local_50;
  lVar17 = local_58;
  puVar8 = PTR___rust_dealloc_00203c78;
  plVar14 = local_40 + local_38 * 0xb;
  if (local_38 == 0) {
    local_c0 = 0;
    lVar12 = 0;
    plVar15 = local_40;
LAB_0013c20a:
    puVar8 = PTR___rust_dealloc_00203c78;
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
LAB_0013bf47:
      do {
        plVar15 = plVar10 + 0xb;
        lVar2 = *plVar10;
        if (lVar2 == -0x8000000000000000) goto LAB_0013c20a;
        lVar3 = plVar10[1];
        lVar4 = plVar10[2];
        lVar5 = plVar10[3];
        lVar16 = plVar10[4];
        bVar1 = *(byte *)(plVar10 + 10);
        lVar13 = 0;
        do {
          plVar10 = plVar15;
          if ((*(long *)(param_4 + 0x10 + lVar13) == lVar4) &&
             (iVar9 = (*(code *)PTR_bcmp_00203d28)
                                (*(undefined8 *)(param_4 + 8 + lVar13),lVar3,lVar4), iVar9 == 0))
          goto LAB_0013c007;
          lVar13 = lVar13 + 0x18;
        } while (param_5 * 0x18 != lVar13);
        if (lVar7 != 0) {
          lVar13 = 0;
          do {
            if ((*(long *)(lVar17 + 0x10 + lVar13) == lVar4) &&
               (iVar9 = (*(code *)PTR_bcmp_00203d28)
                                  (*(undefined8 *)(lVar17 + 8 + lVar13),lVar3,lVar4), iVar9 == 0))
            goto LAB_0013c007;
            lVar13 = lVar13 + 0x18;
          } while (lVar6 != lVar13);
        }
        if (lVar2 != 0) {
          (*(code *)PTR___rust_dealloc_00203c78)(lVar3,lVar2,1);
        }
        if (lVar5 != 0) {
          (*(code *)PTR___rust_dealloc_00203c78)(lVar16,lVar5,1);
        }
        lVar12 = lVar12 + (ulong)bVar1;
        local_c0 = local_c0 + (ulong)(bVar1 ^ 1);
      } while (plVar15 != plVar14);
      goto LAB_0013c306;
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
LAB_0013c100:
      do {
        plVar15 = plVar10 + 0xb;
        lVar6 = *plVar10;
        if (lVar6 == -0x8000000000000000) goto LAB_0013c20a;
        lVar2 = plVar10[1];
        lVar3 = plVar10[2];
        lVar4 = plVar10[3];
        lVar5 = plVar10[4];
        bVar1 = *(byte *)(plVar10 + 10);
        lVar16 = 0;
        do {
          plVar10 = plVar15;
          if ((*(long *)(lVar17 + 0x10 + lVar16) == lVar3) &&
             (iVar9 = (*(code *)PTR_bcmp_00203d28)(*(undefined8 *)(lVar17 + 8 + lVar16),lVar2,lVar3)
             , iVar9 == 0)) {
            if (lVar6 != 0) {
              (*(code *)PTR___rust_dealloc_00203c78)(lVar2,lVar6,1);
            }
            if (lVar4 != 0) {
              (*(code *)PTR___rust_dealloc_00203c78)(lVar5,lVar4,1);
            }
            if (plVar15 != plVar14) goto LAB_0013c100;
            goto LAB_0013c20a;
          }
          lVar16 = lVar16 + 0x18;
        } while (lVar7 != lVar16);
        if (lVar6 != 0) {
          (*(code *)PTR___rust_dealloc_00203c78)(lVar2,lVar6,1);
        }
        if (lVar4 != 0) {
          (*(code *)PTR___rust_dealloc_00203c78)(lVar5,lVar4,1);
        }
        lVar12 = lVar12 + (ulong)bVar1;
        local_c0 = local_c0 + (ulong)(bVar1 ^ 1);
      } while (plVar15 != plVar14);
    }
  }
LAB_0013c306:
  if (local_48 != 0) {
    (*(code *)PTR___rust_dealloc_00203c78)(local_40,local_48 * 0x58,8);
  }
  puVar8 = PTR___rust_dealloc_00203c78;
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
    (*(code *)PTR___rust_dealloc_00203c78)(local_58,local_60 * 0x18,8);
  }
  auVar19._8_8_ = local_c0;
  auVar19._0_8_ = lVar12;
  return auVar19;
LAB_0013c007:
  if (lVar2 != 0) {
    (*(code *)PTR___rust_dealloc_00203c78)(lVar3,lVar2,1);
  }
  if (lVar5 != 0) {
    (*(code *)PTR___rust_dealloc_00203c78)(lVar16,lVar5,1);
  }
  if (plVar15 == plVar14) goto LAB_0013c20a;
  goto LAB_0013bf47;
}




// ELF address 0x000000000003b5f0; strategy_comm5::cancel_order_use_range

/* strategy_comm5::cancel_order_use_range */

long __rustcall
strategy_comm5::cancel_order_use_range
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
  (*(code *)PTR_pending_orders_00203d38)(&local_48,param_3,param_4,param_5);
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
LAB_0013b6c0:
    uVar14 = (long)plVar9 - (long)plVar8;
    plVar12 = plVar8;
    do {
      lVar2 = *plVar12;
      lVar7 = plVar12[1];
      lVar13 = plVar12[3];
      local_108 = plVar12[4];
      if (*(byte *)(plVar12 + 10) == local_109) {
        if (lVar2 != -0x8000000000000000) goto LAB_0013b750;
      }
      else {
        if (lVar2 != 0) {
          (*(code *)PTR___rust_dealloc_00203c78)(lVar7,lVar2,1);
        }
        if (lVar13 != 0) {
          (*(code *)PTR___rust_dealloc_00203c78)(local_108,lVar13,1);
        }
      }
      plVar12 = plVar12 + 0xb;
      uVar14 = uVar14 - 0x58;
      local_48 = local_d8;
      local_40 = local_e0;
      if (plVar12 == local_e8) break;
    } while( true );
  }
LAB_0013b8b8:
  local_c0 = plVar8;
  plVar8 = local_f0;
  if (local_48 != 0) {
    (*(code *)PTR___rust_dealloc_00203c78)(local_40,local_48 * 0x58,8);
  }
  (*(code *)PTR_pending_orders_00203d38)(&local_60,local_90,local_88,local_80);
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
LAB_0013b98a:
    uVar14 = (long)local_d0 - (long)plVar9;
    plVar12 = plVar9;
    do {
      lVar2 = *plVar12;
      lVar7 = plVar12[1];
      local_108 = plVar12[3];
      local_e8 = (long *)plVar12[4];
      bVar1 = *(byte *)(plVar12 + 10);
      if (bVar1 == local_10a) {
        if (lVar2 != -0x8000000000000000) goto LAB_0013ba20;
      }
      else {
        if (lVar2 != 0) {
          (*(code *)PTR___rust_dealloc_00203c78)(lVar7,lVar2,1);
        }
        if (local_108 != 0) {
          (*(code *)PTR___rust_dealloc_00203c78)(local_e8,local_108,1);
        }
      }
      plVar12 = plVar12 + 0xb;
      uVar14 = uVar14 - 0x58;
      local_60 = local_d8;
      local_58 = local_e0;
      if (plVar12 == local_f8) break;
    } while( true );
  }
LAB_0013bbea:
  local_c0 = plVar9;
  if (local_60 != 0) {
    (*(code *)PTR___rust_dealloc_00203c78)(local_58,local_60 * 0x58,8);
  }
  return 0;
LAB_0013b750:
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
         (iVar3 = (*(code *)PTR_bcmp_00203d28)(*(undefined8 *)(lVar5 + 8 + lVar10),lVar7),
         lVar13 = local_100, lVar4 = local_98, plVar8 = local_f8, iVar3 == 0)) {
        if (lVar2 != 0) {
          (*(code *)PTR___rust_dealloc_00203c78)(lVar7,lVar2,1);
        }
        goto LAB_0013b86e;
      }
      lVar10 = lVar10 + 0x18;
    } while (lVar4 != lVar10);
  }
                    /* try { // try from 0013b800 to 0013b823 has its CatchHandler @ 0013bdef */
  lVar5 = (*(code *)PTR_cancel_order_00203d40)(local_90,local_88,local_80,lVar7,plVar8);
  plVar8 = local_f0;
  if (lVar5 != 0) {
    plVar8 = plVar12 + 0xb;
    local_f8 = (long *)lVar5;
    local_c0 = plVar8;
    if (lVar2 != 0) {
      (*(code *)PTR___rust_dealloc_00203c78)(lVar7,lVar2,1);
    }
    if (lVar13 != 0) {
      (*(code *)PTR___rust_dealloc_00203c78)(local_108,lVar13,1);
    }
    if (plVar8 != local_e8) {
      plVar12 = plVar12 + 0xf;
      uVar14 = uVar14 / 0x58;
      do {
        if (plVar12[-4] != 0) {
          (*(code *)PTR___rust_dealloc_00203c78)(plVar12[-3],plVar12[-4],1);
        }
        if (plVar12[-1] != 0) {
          (*(code *)PTR___rust_dealloc_00203c78)(*plVar12,plVar12[-1],1);
        }
        plVar12 = plVar12 + 0xb;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    if (local_d8 == 0) {
      return (long)local_f8;
    }
    (*(code *)PTR___rust_dealloc_00203c78)(local_e0,local_d8 * 0x58,8);
    return (long)local_f8;
  }
  lVar5 = local_f0[2];
  if (lVar5 == *local_f0) {
                    /* try { // try from 0013b83c to 0013b84b has its CatchHandler @ 0013bd9a */
    (*(code *)PTR_grow_one_00203d48)(local_f0,&PTR_s_strategies_comm_strategy_strateg_001fd6c0);
  }
  lVar4 = plVar8[1];
  *(long *)(lVar4 + lVar5 * 0x18) = lVar2;
  *(long *)(lVar4 + 8 + lVar5 * 0x18) = lVar7;
  *(long **)(lVar4 + 0x10 + lVar5 * 0x18) = local_f8;
  plVar8[2] = lVar5 + 1;
LAB_0013b86e:
  plVar9 = local_d0;
  if (lVar13 != 0) {
    (*(code *)PTR___rust_dealloc_00203c78)(local_108,lVar13,1);
  }
  plVar8 = plVar12 + 0xb;
  if (plVar8 == local_e8) goto code_r0x0013b89d;
  goto LAB_0013b6c0;
code_r0x0013b89d:
  local_48 = local_d8;
  local_40 = local_e0;
  plVar8 = plVar12 + 0xb;
  goto LAB_0013b8b8;
LAB_0013ba20:
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
         (iVar3 = (*(code *)PTR_bcmp_00203d28)
                            (*(undefined8 *)(lVar5 + 8 + (long)dVar11),lVar7,lVar13),
         dVar6 = local_a0, lVar5 = local_98, lVar7 = local_100, iVar3 == 0)) {
        plVar8 = local_f0;
        if (lVar2 != 0) {
          (*(code *)PTR___rust_dealloc_00203c78)(local_100,lVar2,1);
          plVar8 = local_f0;
        }
        goto joined_r0x0013bac7;
      }
      dVar11 = (double)((long)dVar11 + 0x18);
    } while (dVar6 != dVar11);
  }
  plVar8 = local_f0;
  if ((bVar1 & 1) == 0) {
    if (local_68 < local_70) goto LAB_0013bb3a;
  }
  else if (local_70 < local_78) {
LAB_0013bb3a:
                    /* try { // try from 0013bb3a to 0013bb5d has its CatchHandler @ 0013bd9c */
    lVar7 = (*(code *)PTR_cancel_order_00203d40)(local_90,local_88,local_80,lVar7,lVar13);
    if (lVar7 != 0) {
      plVar8 = plVar12 + 0xb;
      local_c0 = plVar8;
      if (lVar2 != 0) {
        (*(code *)PTR___rust_dealloc_00203c78)(local_100,lVar2,1);
      }
      if (local_108 != 0) {
        (*(code *)PTR___rust_dealloc_00203c78)(local_e8,local_108,1);
      }
      if (plVar8 != local_f8) {
        plVar12 = plVar12 + 0xf;
        uVar14 = uVar14 / 0x58;
        do {
          if (plVar12[-4] != 0) {
            (*(code *)PTR___rust_dealloc_00203c78)(plVar12[-3],plVar12[-4],1);
          }
          if (plVar12[-1] != 0) {
            (*(code *)PTR___rust_dealloc_00203c78)(*plVar12,plVar12[-1],1);
          }
          plVar12 = plVar12 + 0xb;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
      if (local_d8 == 0) {
        return lVar7;
      }
      (*(code *)PTR___rust_dealloc_00203c78)(local_e0,local_d8 * 0x58,8);
      return lVar7;
    }
    lVar7 = plVar8[2];
    if (lVar7 == *plVar8) {
                    /* try { // try from 0013bb71 to 0013bb80 has its CatchHandler @ 0013bd98 */
      (*(code *)PTR_grow_one_00203d48)(plVar8,&PTR_s_strategies_comm_strategy_strateg_001fd6d8);
    }
    lVar5 = plVar8[1];
    *(long *)(lVar5 + lVar7 * 0x18) = lVar2;
    *(long *)(lVar5 + 8 + lVar7 * 0x18) = local_100;
    *(long *)(lVar5 + 0x10 + lVar7 * 0x18) = lVar13;
    plVar8[2] = lVar7 + 1;
    goto joined_r0x0013bac7;
  }
  if (lVar2 != 0) {
    (*(code *)PTR___rust_dealloc_00203c78)(lVar7,lVar2,1);
  }
joined_r0x0013bac7:
  if (local_108 != 0) {
    (*(code *)PTR___rust_dealloc_00203c78)(local_e8,local_108,1);
  }
  plVar9 = plVar12 + 0xb;
  if (plVar9 == local_f8) goto code_r0x0013bbd4;
  goto LAB_0013b98a;
code_r0x0013bbd4:
  local_60 = local_d8;
  local_58 = local_e0;
  plVar9 = plVar12 + 0xb;
  goto LAB_0013bbea;
}




// ELF address 0x0000000000044b80; strategy_comm5::place

/* strategy_comm5::place */

void __rustcall strategy_comm5::place(double param_1,undefined8 param_2,undefined8 param_3)

{
  if (0.0 < param_1) {
    (*(code *)PTR_place_order_iap_with_target_00203ee0)(param_2,param_3,1);
    return;
  }
  (*(code *)PTR_place_order_iap_00203ee8)();
  return;
}




// ELF address 0x000000000003b4a0; strategy_comm5::eff_amts

/* strategy_comm5::eff_amts */

ulong __rustcall
strategy_comm5::eff_amts(double param_1,undefined8 param_2,double param_3,long param_4,char param_5)

{
  double dVar1;
  
  if (param_5 == '\x02') {
    dVar1 = *(double *)(param_4 + 0x558);
  }
  else {
    if (param_5 != '\x01') goto LAB_0013b4e7;
    dVar1 = *(double *)(param_4 + 0x550);
  }
  if ((0.0 < dVar1) && (param_1 = *(double *)(param_4 + 0x450), 0.0 <= param_1)) {
    param_1 = param_1 * dVar1;
  }
LAB_0013b4e7:
  return ~-(ulong)(param_1 < 0.0) & (ulong)(param_3 * param_1) |
         (ulong)param_1 & -(ulong)(param_1 < 0.0);
}




// ELF address 0x000000000003c8a0; <strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin

/* WARNING: Removing unreachable block (ram,0x0013dac0) */
/* WARNING: Removing unreachable block (ram,0x0013d939) */
/* WARNING: Removing unreachable block (ram,0x0013ce83) */
/* WARNING: Removing unreachable block (ram,0x0013cf47) */
/* WARNING: Removing unreachable block (ram,0x0013cf58) */
/* WARNING: Removing unreachable block (ram,0x0013cf75) */
/* WARNING: Removing unreachable block (ram,0x0013cf86) */
/* WARNING: Removing unreachable block (ram,0x0013cf98) */
/* WARNING: Removing unreachable block (ram,0x0013cfac) */
/* WARNING: Removing unreachable block (ram,0x0013cfb1) */
/* WARNING: Removing unreachable block (ram,0x0013cfba) */
/* WARNING: Removing unreachable block (ram,0x0013cfc7) */
/* WARNING: Removing unreachable block (ram,0x0013cfda) */
/* WARNING: Removing unreachable block (ram,0x0013cff3) */
/* WARNING: Removing unreachable block (ram,0x0013d00d) */
/* WARNING: Removing unreachable block (ram,0x0013d016) */
/* WARNING: Removing unreachable block (ram,0x0013d000) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin */

undefined8 __rustcall
_<strategy_comm5::StrategyComm5_as_future_backtest_sdk::plugin::StrategyPlugin>::on_begin
          (int *param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  double dVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined1 (*pauVar12) [16];
  undefined1 (*pauVar13) [16];
  double dVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined1 auVar17 [8];
  uint uVar18;
  undefined *puVar19;
  code *pcVar20;
  long lVar21;
  long lVar22;
  undefined *puVar23;
  undefined1 (*pauVar24) [16];
  undefined1 (*pauVar25) [16];
  undefined1 *puVar26;
  undefined *puVar27;
  ulong uVar28;
  long lVar29;
  undefined1 (**ppauVar30) [16];
  long lVar31;
  undefined *puVar32;
  byte bVar33;
  undefined4 uVar34;
  double dVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  double local_e90;
  undefined1 (*local_e88) [16];
  undefined1 (*local_e80) [16];
  undefined1 local_e78 [8];
  undefined8 local_e70;
  undefined8 local_e68;
  undefined1 (*local_e60) [16];
  undefined8 local_e58;
  undefined1 local_e50;
  undefined2 local_e48;
  undefined1 (*local_e40) [16];
  undefined1 local_e38 [16];
  undefined1 (*local_e20) [16];
  undefined1 (*local_e18) [16];
  undefined1 (*local_e10) [16];
  undefined1 local_e08 [16];
  undefined *local_df0;
  long local_de8;
  undefined1 (*local_de0) [16];
  undefined1 (*pauStack_dd8) [16];
  undefined1 (*local_dd0) [16];
  undefined1 (*local_dc8) [16];
  undefined8 uStack_dc0;
  undefined1 (*local_db8) [16];
  ulong local_db0;
  long local_da8;
  ulong local_da0;
  undefined1 (*local_d98) [16];
  undefined1 (*pauStack_d90) [16];
  undefined1 (*local_d88) [16];
  undefined1 (*pauStack_d80) [16];
  undefined1 local_d78 [16];
  undefined8 local_d68;
  undefined1 local_d60;
  undefined2 local_d58;
  long local_d48;
  undefined1 (*pauStack_d40) [16];
  undefined1 (*local_d38) [16];
  ulong local_d28;
  long local_d20;
  long local_d18;
  ulong local_d10;
  undefined1 local_d08 [16];
  undefined1 local_cf8 [16];
  ulong local_ce8;
  undefined1 (*local_ce0) [16];
  undefined1 (*local_cd8) [16];
  int *local_cd0;
  long local_cc8;
  undefined1 (*local_cc0) [16];
  ulong local_cb8;
  undefined *local_cb0;
  undefined1 (*local_ca8) [16];
  undefined1 (*local_ca0) [16];
  code *local_c98;
  undefined1 (*local_c90) [16];
  undefined *local_c88;
  undefined1 (*pauStack_c80) [16];
  undefined1 (*local_c78) [16];
  undefined1 (*pauStack_c70) [16];
  undefined1 local_c68 [16];
  undefined1 (*local_c58) [16];
  long local_c50;
  undefined1 local_c48 [8];
  undefined *local_c40;
  undefined1 (*pauStack_c38) [16];
  long local_c30;
  long local_c28;
  ulong local_c20;
  undefined1 local_c18 [16];
  undefined1 local_c08 [16];
  long lStack_bf8;
  long lStack_bf0;
  long local_be8;
  ulong local_be0;
  long lStack_bb8;
  undefined8 uStack_bb0;
  undefined8 uStack_ba8;
  long lStack_ba0;
  undefined8 uStack_b98;
  undefined8 uStack_b90;
  undefined1 local_b88 [16];
  undefined1 auStack_b78 [16];
  long local_b68;
  undefined1 (*pauStack_b60) [16];
  undefined1 (*local_b58) [16];
  long local_b50;
  undefined1 (*pauStack_b48) [16];
  undefined1 (*local_b40) [16];
  undefined1 (*local_b38) [16];
  undefined1 (*pauStack_b30) [16];
  undefined1 (*pauStack_b28) [16];
  code *local_b20;
  undefined1 (*pauStack_b18) [16];
  undefined1 (*local_b10) [16];
  undefined1 (*pauStack_b08) [16];
  undefined1 local_b00 [16];
  undefined1 (**local_af0) [16];
  undefined **ppuStack_ae8;
  undefined *local_ae0;
  undefined **ppuStack_ad8;
  undefined *puStack_ad0;
  undefined1 (**ppauStack_ac8) [16];
  undefined *puStack_ac0;
  long *plStack_ab8;
  undefined *puStack_ab0;
  undefined1 (**ppauStack_aa8) [16];
  code *pcStack_aa0;
  undefined1 local_5c8 [24];
  undefined1 local_5b0 [24];
  undefined1 (*local_598) [16];
  undefined1 (*pauStack_590) [16];
  code *local_588;
  undefined1 (*pauStack_580) [16];
  undefined1 (*local_578) [16];
  undefined1 (*pauStack_570) [16];
  code *local_568;
  undefined1 (*pauStack_560) [16];
  undefined1 (**local_558) [16];
  undefined **ppuStack_550;
  undefined *local_548;
  undefined **ppuStack_540;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined1 local_1e0 [16];
  long local_1d0;
  double local_148;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  undefined1 (*local_70) [16];
  undefined8 local_68;
  undefined8 local_60;
  ulong local_58;
  double local_50;
  double local_48;
  double local_40;
  char local_35;
  char local_33;
  undefined1 auVar43 [16];
  
  local_de8 = param_2;
  local_cd0 = param_1;
  (*(code *)PTR_custom_config_00203d68)(&local_c30);
  lVar21 = local_c28;
                    /* try { // try from 0013c8df to 0013c90d has its CatchHandler @ 0013f209 */
  _<toml::de::Deserializer_as_serde_core::de::Deserializer>::deserialize_struct
            (&local_b38,local_c28,local_c20,"Comm5Params",0xb,
             &PTR_s_signal_modepv1_alphacost_alphasi_001fd8d8,0x47);
  pauVar25 = pauStack_b30;
  pauVar24 = local_b38;
  if (local_b38 == (undefined1 (*) [16])0x2) {
    local_548 = local_ae0;
    ppuStack_540 = ppuStack_ad8;
    local_558 = local_af0;
    ppuStack_550 = ppuStack_ae8;
    local_568 = (code *)local_b00._0_8_;
    pauStack_560 = (undefined1 (*) [16])local_b00._8_8_;
    local_578 = local_b10;
    pauStack_570 = pauStack_b08;
    local_588 = local_b20;
    pauStack_580 = pauStack_b18;
    local_598 = pauStack_b30;
    pauStack_590 = pauStack_b28;
    local_be0 = 200;
    if (local_c20 < 200) {
      local_be0 = local_c20;
    }
    if ((200 < local_c20) && (*(char *)(lVar21 + local_be0) < -0x40)) {
                    /* try { // try from 0013ef73 to 0013ef87 has its CatchHandler @ 0013f21b */
      (*(code *)PTR_slice_error_fail_00203df0)
                (lVar21,local_c20,0,local_be0,&PTR_s_strategies_comm_strategy_strateg_001fdd68);
LAB_0013efc3:
                    /* WARNING: Does not return */
      pcVar20 = (code *)invalidInstructionException();
      (*pcVar20)();
    }
    local_be8 = lVar21;
    local_d98 = (undefined1 (*) [16])&local_598;
    pauStack_d90 = (undefined1 (*) [16])PTR_fmt_00203d70;
    local_d88 = (undefined1 (*) [16])&local_be8;
    pauStack_d80 = (undefined1 (*) [16])_<&T_as_core::fmt::Display>::fmt;
    local_e88 = (undefined1 (*) [16])&PTR_s__custom__parse_error____Raw__001fdd80;
    local_e80 = (undefined1 (*) [16])0x2;
    local_e68 = 0;
    local_e78 = (undefined1  [8])&local_d98;
    local_e70 = (undefined *)0x2;
                    /* try { // try from 0013ca15 to 0013ca34 has its CatchHandler @ 0013f21b */
    (*(code *)PTR_format_inner_00203d18)(&local_c88,&local_e88);
    uVar8 = anyhow::error::_<impl_anyhow::Error>::msg(&local_c88);
    if (pauStack_580 != (undefined1 (*) [16])0x0) {
      (*(code *)PTR___rust_dealloc_00203c78)(local_578,pauStack_580,1);
    }
    if (ppuStack_550 != (undefined **)0x0) {
      (*(code *)PTR___rust_dealloc_00203c78)(local_548,ppuStack_550,1);
    }
    pauVar24 = pauStack_560;
    puVar19 = PTR___rust_dealloc_00203c78;
    if (local_558 != (undefined1 (**) [16])0x0) {
      puVar10 = (undefined8 *)(*pauStack_560 + 8);
      ppauVar30 = local_558;
      do {
        if (puVar10[-1] != 0) {
          (*(code *)puVar19)(*puVar10,puVar10[-1],1);
        }
        puVar10 = puVar10 + 3;
        ppauVar30 = (undefined1 (**) [16])((long)ppauVar30 + -1);
      } while (ppauVar30 != (undefined1 (**) [16])0x0);
    }
    if (local_568 != (code *)0x0) {
      (*(code *)PTR___rust_dealloc_00203c78)(pauVar24,(long)local_568 * 0x18,8);
    }
    goto LAB_0013ee2c;
  }
  (*(code *)PTR_memcpy_00203cc8)(&local_588,&pauStack_b28,0x558);
  local_598 = pauVar24;
  pauStack_590 = pauVar25;
  if (((local_35 != '\0') && (0.0 < local_40 || 0.0 < local_48)) && (local_148 < 0.0)) {
                    /* try { // try from 0013cb51 to 0013cb69 has its CatchHandler @ 0013f194 */
    future_backtest_sdk::context::StrategyContext::log_warn
              (local_de8,
               "[comm5] P2/P3 notional UNLIMITED: phaseN_size_mult>0 with global max_single_net_amt=-1 (unlimited is never scaled; [custom.phaseN].max_single_net_amt is IGNORED in mult mode). Set a finite global max_single_net_amt, or set phaseN_size_mult=0 for the comm4_1 absolute fallback."
               ,0x114);
  }
  dVar14 = local_98;
  if (local_33 == '\0') {
LAB_0013ede2:
    (*(code *)PTR_memcpy_00203cc8)(&local_b38,&local_598,0x568);
    if (*local_cd0 != 2) {
      core::ptr::drop_in_place<strategy_comm5::Comm5Params>();
    }
    (*(code *)PTR_memcpy_00203cc8)(local_cd0,&local_b38,0x568);
    uVar8 = 0;
    goto LAB_0013ee2c;
  }
  dVar9 = ABS(local_98);
  dVar35 = (double)(*(code *)PTR_trunc_00203d78)();
  if (((dVar14 != dVar35) || (dVar14 < (double)DAT_00116368)) || (0x7fefffffffffffff < (ulong)dVar9)
     ) {
    local_e88 = (undefined1 (*) [16])&local_98;
    local_e80 = (undefined1 (*) [16])PTR_fmt_00203d80;
    local_b38 = (undefined1 (*) [16])&PTR_s__comm5__XS__ew_lags_must_be_a_po_001fdd58;
    pauStack_b30 = (undefined1 (*) [16])0x1;
    pauStack_b18 = (undefined1 (*) [16])0x0;
    pauStack_b28 = (undefined1 (*) [16])&local_e88;
    local_b20 = (code *)0x1;
    puVar11 = local_5c8;
    (*(code *)PTR_format_inner_00203d18)(puVar11,&local_b38);
LAB_0013cd6b:
    uVar8 = anyhow::error::_<impl_anyhow::Error>::msg(puVar11);
  }
  else {
    dVar14 = ABS(local_90);
    if ((uint)((long)dVar14 + 0xfff0000000000000U >> 0x35) < 0x3ff && (long)local_90 < 0 ||
        ((dVar14 == INFINITY || (dVar14 == 0.0 || 0x7fefffffffffffff < (ulong)dVar14)) ||
        (long)dVar14 - 1U < 0xfffffffffffff && (long)local_90 < 0)) {
      local_e80 = (undefined1 (*) [16])PTR_fmt_00203d80;
      local_b38 = (undefined1 (*) [16])&PTR_s__comm5__XS__ew_half_life_days_mu_001fdd48;
      pauStack_b30 = (undefined1 (*) [16])0x1;
      pauStack_b18 = (undefined1 (*) [16])0x0;
      pauStack_b28 = (undefined1 (*) [16])&local_e88;
      local_b20 = (code *)0x1;
                    /* try { // try from 0013ccaf to 0013cdac has its CatchHandler @ 0013f194 */
      puVar11 = local_5b0;
      local_e88 = (undefined1 (*) [16])&local_90;
      (*(code *)PTR_format_inner_00203d18)(puVar11,&local_b38);
      goto LAB_0013cd6b;
    }
    if (local_1d0 != 0) {
      (*(code *)PTR_trade_codes_00203d88)(&local_b38,local_de8);
      pauVar25 = pauStack_b28;
      pauVar24 = pauStack_b30;
                    /* try { // try from 0013cdc5 to 0013cddb has its CatchHandler @ 0013f110 */
      _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                (&local_cc8,pauStack_b30,
                 (undefined1 *)((long)pauStack_b30 + (long)pauStack_b28 * 0x18),
                 &PTR_anon_f8fdc7844e54bdce0bd72b118f1760df_4_llvm_12406105305166711053_001fd618);
      puVar19 = PTR___rust_dealloc_00203c78;
      if (pauVar25 != (undefined1 (*) [16])0x0) {
        puVar10 = (undefined8 *)(*pauVar24 + 8);
        do {
          if (puVar10[-1] != 0) {
            (*(code *)puVar19)(*puVar10,puVar10[-1],1);
          }
          puVar10 = puVar10 + 3;
          pauVar25 = (undefined1 (*) [16])(pauVar25[-1] + 0xf);
        } while (pauVar25 != (undefined1 (*) [16])0x0);
      }
      if (local_b38 != (undefined1 (*) [16])0x0) {
        (*(code *)PTR___rust_dealloc_00203c78)(pauVar24,(long)local_b38 * 0x18,8);
      }
      if (1 < local_cb8) {
        if (local_cb8 < 0x15) {
                    /* try { // try from 0013eeb9 to 0013eec7 has its CatchHandler @ 0013f120 */
          core::slice::sort::shared::smallsort::insertion_sort_shift_left
                    (local_cc0,local_cb8,1,&local_e88);
        }
        else {
                    /* try { // try from 0013efc5 to 0013efce has its CatchHandler @ 0013f120 */
          core::slice::sort::stable::driftsort_main(local_cc0,local_cb8,&local_e88);
        }
      }
                    /* try { // try from 0013ce44 to 0013ce6e has its CatchHandler @ 0013f120 */
      alloc::vec::Vec<T,A>::dedup_by(&local_cc8);
      (*(code *)PTR_inner_00203d90)(&local_d98,local_1f0,local_1e8);
      local_c58 = (undefined1 (*) [16])__tls_get_addr(&PTR_00203cf0);
      local_ce0 = local_d98;
      local_cd8 = pauStack_d90;
      if (local_c58[1][0] == '\x01') {
        local_c68 = *local_c58;
      }
      else {
                    /* try { // try from 0013eecd to 0013eed5 has its CatchHandler @ 0013f108 */
        local_c68 = (*(code *)PTR_hashmap_random_keys_00203de8)();
        *local_c58 = local_c68;
        local_c58[1][0] = 1;
      }
      *(long *)*local_c58 = local_c68._0_8_ + 1;
      local_c78 = _DAT_001fd6b0;
      pauStack_c70 = _UNK_001fd6b8;
      local_c88 = PTR_anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263_001fd6a0;
      pauStack_c80 = _UNK_001fd6a8;
      local_ca0 = (undefined1 (*) [16])0x0;
      local_c90 = (undefined1 (*) [16])0x0;
      local_c50 = 0;
      local_d98 = (undefined1 (*) [16])0x0;
      pauStack_d90 = local_d88;
      pauStack_d80 = local_d88;
      local_d78._0_8_ = 0;
      local_d78._8_8_ = local_d88;
      local_d68 = 0xa0000000a;
      local_d60 = 1;
      local_d58 = 0;
      bVar2 = true;
      local_d88 = local_cd8;
      while( true ) {
        pauVar24 = local_d88;
        if (local_d58._1_1_ != '\0') break;
                    /* try { // try from 0013d166 to 0013d220 has its CatchHandler @ 0013f204 */
        _<core::str::pattern::CharSearcher_as_core::str::pattern::Searcher>::next_match
                  (&local_b38,&local_d88);
        if ((int)local_b38 == 1) {
          lVar21 = (long)pauStack_b28 - (long)local_d98;
          puVar11 = *local_d98 + (long)*pauVar24;
          local_d98 = pauStack_b28;
        }
        else {
          if (local_d58._1_1_ != '\0') break;
          local_d58 = CONCAT11(1,(byte)local_d58);
          lVar21 = (long)pauStack_d90 - (long)local_d98;
          if ((lVar21 != 0 | (byte)local_d58) != 1) break;
          puVar11 = *local_d88 + (long)*local_d98;
        }
        lVar29 = lVar21;
        if ((lVar21 != 0) && (puVar11[lVar21 + -1] == '\n')) {
          lVar29 = lVar21 + -1;
          if (lVar29 == 0) {
            lVar29 = 0;
          }
          else if (puVar11[lVar21 + -2] == '\r') {
            lVar29 = lVar21 + -2;
          }
        }
        if (puVar11 == (undefined1 *)0x0) break;
        auVar48 = core::str::_<impl_str>::trim_matches(puVar11,lVar29);
        pauVar24 = auVar48._8_8_;
        if (pauVar24 != (undefined1 (*) [16])0x0) {
          local_e88 = (undefined1 (*) [16])0x0;
          local_e68 = 0;
          local_e58 = 0x2c0000002c;
          local_e50 = 1;
          local_e48 = 1;
          local_e80 = pauVar24;
          local_e60 = pauVar24;
          _local_e78 = auVar48;
                    /* try { // try from 0013d26e to 0013d3ca has its CatchHandler @ 0013f0a4 */
          _<core::str::pattern::CharSearcher_as_core::str::pattern::Searcher>::next_match
                    (&local_b38,local_e78);
          auVar17 = local_e78;
          if ((int)local_b38 == 1) {
            local_e08._0_8_ = (long)pauStack_b30 - (long)local_e88;
            puVar11 = *local_e88 + auVar48._0_8_;
            local_e88 = pauStack_b28;
LAB_0013d2c1:
            bVar33 = local_e48._1_1_;
            if ((local_e48 & 0x100) == 0) {
              _<core::str::pattern::CharSearcher_as_core::str::pattern::Searcher>::next_match
                        (&local_b38,local_e78);
              if ((int)local_b38 != 1) {
                bVar33 = local_e48._1_1_;
                if (local_e48._1_1_ == 0) {
                  local_e48 = CONCAT11(1,(byte)local_e48);
                  bVar33 = 1;
                  dVar14 = (double)((long)local_e80 - (long)local_e88);
                  if (((long)local_e80 - (long)local_e88 != 0 | (byte)local_e48) == 1)
                  goto LAB_0013d6da;
                }
                goto LAB_0013d2c6;
              }
              local_e90 = (double)((long)pauStack_b30 - (long)local_e88);
              puVar26 = *local_e88 + (long)auVar17;
              local_e88 = pauStack_b28;
              dVar14 = local_e90;
              if ((local_e48 & 0x100) != 0) goto LAB_0013d6da;
            }
            else {
LAB_0013d2c6:
              puVar26 = (undefined1 *)0x0;
              dVar14 = local_e90;
              if ((bVar33 & 1) != 0) goto LAB_0013d6da;
            }
            auVar17 = local_e78;
            _<core::str::pattern::CharSearcher_as_core::str::pattern::Searcher>::next_match
                      (&local_b38,local_e78);
            pauVar24 = local_e88;
            dVar14 = local_e90;
            if ((int)local_b38 != 1) {
              if (local_e48._1_1_ == '\0') {
                local_e48 = CONCAT11(1,(byte)local_e48);
                if ((((long)local_e80 - (long)local_e88 != 0 | (byte)local_e48) == 1) &&
                   (local_e38._0_8_ = (long)local_e80 - (long)local_e88, auVar17 = local_e78,
                   puVar11 != (undefined1 *)0x0)) goto LAB_0013d374;
              }
              goto LAB_0013d6da;
            }
            local_e38._0_8_ = (long)pauStack_b30 - (long)local_e88;
            local_e88 = pauStack_b28;
            if (puVar11 == (undefined1 *)0x0) goto LAB_0013d6da;
LAB_0013d374:
            if (puVar26 == (undefined1 *)0x0) goto LAB_0013d6da;
            auVar48 = core::str::_<impl_str>::trim_matches(puVar11,local_e08._0_8_);
            pauVar25 = auVar48._8_8_;
            local_e08._0_8_ = auVar48._0_8_;
            auVar48 = core::str::_<impl_str>::trim_matches(puVar26,local_e90);
            pauVar12 = auVar48._8_8_;
            local_e90 = auVar48._0_8_;
            uVar8 = core::str::_<impl_str>::trim_matches(*pauVar24 + (long)auVar17,local_e38._0_8_);
            (*(code *)PTR_from_str_00203db0)(&local_e20,uVar8);
            dVar14 = local_e90;
            if (((((char)local_e20 != '\0') || (pauVar25 == (undefined1 (*) [16])0x0)) ||
                (pauVar12 == (undefined1 (*) [16])0x0)) ||
               (0x7fefffffffffffff < ((ulong)local_e18 & 0x7fffffffffffffff))) goto LAB_0013d6da;
            local_cf8._0_8_ = local_e18;
            alloc::raw_vec::RawVecInner<A>::try_allocate_in(&local_b38,pauVar25,0,1,1);
            puVar19 = PTR_memcpy_00203cc8;
            local_e38._0_8_ = pauStack_b30;
            if ((int)local_b38 == 1) {
                    /* try { // try from 0013ef92 to 0013efa3 has its CatchHandler @ 0013f148 */
              (*(code *)PTR_handle_error_00203cd8)
                        (pauStack_b30,pauStack_b28,
                         &
                         PTR_anon_bf65de67c24155f465f4e3f0b4be96c2_2_llvm_4550705873496731735_001fd688
                        );
              goto LAB_0013efc3;
            }
            local_dc8 = pauStack_b28;
            (*(code *)PTR_memcpy_00203cc8)(pauStack_b28,local_e08._0_8_,pauVar25);
            alloc::raw_vec::RawVecInner<A>::try_allocate_in(&local_b38,pauVar12,0,1,1);
            local_e08._0_8_ = pauStack_b30;
            if ((int)local_b38 == 1) {
                    /* try { // try from 0013efae to 0013efc2 has its CatchHandler @ 0013f128 */
              (*(code *)PTR_handle_error_00203cd8)
                        (pauStack_b30,pauStack_b28,
                         &
                         PTR_anon_bf65de67c24155f465f4e3f0b4be96c2_2_llvm_4550705873496731735_001fd688
                        );
              goto LAB_0013efc3;
            }
            local_db8 = pauStack_b28;
            (*(code *)puVar19)(pauStack_b28,local_e90,pauVar12);
            if ((undefined1 (*) [16])local_e38._0_8_ == (undefined1 (*) [16])0x8000000000000000)
            goto LAB_0013d6da;
            local_de0 = (undefined1 (*) [16])local_e38._0_8_;
            pauStack_dd8 = local_dc8;
                    /* try { // try from 0013d4f9 to 0013d520 has its CatchHandler @ 0013f010 */
            local_dd0 = pauVar25;
            (*(code *)PTR_clone_00203db8)
                      (&local_b38,&local_de0,&PTR_s_strategies_comm_strategy_strateg_001fd890);
            alloc::collections::btree::map::BTreeMap<K,V,A>::insert(&local_ca0,&local_b38);
            local_e20 = (undefined1 (*) [16])local_e08._0_8_;
            local_e18 = local_db8;
                    /* try { // try from 0013d549 to 0013d560 has its CatchHandler @ 0013f00b */
            local_e10 = pauVar12;
            hashbrown::rustc_entry::_<impl_hashbrown::map::HashMap<K,V,S,A>>::rustc_entry
                      (&local_b38,&local_c88,&local_e20);
            pcVar20 = local_b20;
            pauVar12 = pauStack_b28;
            pauVar25 = pauStack_b30;
            pauVar24 = local_b38;
            if (local_b38 != (undefined1 (*) [16])0x8000000000000000) {
              local_e08._0_8_ = pauStack_b18;
                    /* try { // try from 0013d5a9 to 0013d5b4 has its CatchHandler @ 0013eff1 */
              auVar48 = std::thread::local::LocalKey<T>::with(&PTR_call_once_001fd668);
              local_b10 = _DAT_001fd6b0;
              pauStack_b08 = _UNK_001fd6b8;
              local_b20 = (code *)
                          PTR_anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263_001fd6a0
              ;
              pauStack_b18 = _UNK_001fd6a8;
              local_b38 = pauVar24;
              pauStack_b30 = pauVar25;
              pauStack_b28 = pauVar12;
              local_b00 = auVar48;
              pauStack_b30 = (undefined1 (*) [16])
                             hashbrown::raw::RawTable<T,A>::insert_no_grow
                                       (pcVar20,local_e08._0_8_,&local_b38);
            }
            pauVar24 = pauStack_b30 + -3;
            pauStack_b28 = local_dd0;
            local_b38 = local_de0;
            pauStack_b30 = pauStack_dd8;
                    /* try { // try from 0013d638 to 0013d64b has its CatchHandler @ 0013f006 */
            hashbrown::map::HashMap<K,V,S,A>::insert(local_cf8._0_8_,pauVar24,&local_b38);
          }
          else {
            if (local_e48._1_1_ != 0) {
              puVar11 = (undefined1 *)0x0;
              goto LAB_0013d2c1;
            }
            local_e48 = CONCAT11(1,(byte)local_e48);
            dVar14 = local_e90;
LAB_0013d6da:
            local_e90 = dVar14;
            if (!bVar2) {
              local_c50 = local_c50 + 1;
            }
          }
          bVar2 = false;
        }
      }
      if (local_98 <= 0.0) {
        local_98 = 0.0;
      }
      uVar28 = 0;
      if (0.0 <= local_98) {
        uVar28 = (long)(local_98 - _DAT_00116390) & (long)local_98 >> 0x3f | (long)local_98;
      }
      uVar16 = 0xffffffffffffffff;
      if (local_98 <= _DAT_001162b8) {
        uVar16 = uVar28;
      }
      local_b00._8_8_ = local_ca0;
      if (local_ca0 != (undefined1 (*) [16])0x0) {
        local_b00._8_8_ = local_c90;
      }
      local_b38 = (undefined1 (*) [16])(ulong)(local_ca0 != (undefined1 (*) [16])0x0);
      pauStack_b30 = (undefined1 (*) [16])0x0;
      pauStack_b28 = local_ca0;
      local_b20 = local_c98;
      local_b10 = (undefined1 (*) [16])0x0;
      pauStack_b08 = local_ca0;
      local_b00._0_8_ = local_c98;
      local_af0 = &local_598;
                    /* try { // try from 0013d7d5 to 0013d7f0 has its CatchHandler @ 0013f148 */
      pauStack_b18 = local_b38;
      _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                (&local_d20,&local_b38,
                 &PTR_anon_f8fdc7844e54bdce0bd72b118f1760df_4_llvm_12406105305166711053_001fd618);
      if (1 < local_d10) {
        uVar28 = local_d10 >> 1;
        puVar15 = (undefined8 *)(local_d18 + local_d10 * 0x18 + -8);
        puVar10 = (undefined8 *)(local_d18 + 0x10);
        do {
          uVar8 = puVar10[-2];
          puVar10[-2] = puVar15[-2];
          puVar15[-2] = uVar8;
          uVar8 = puVar10[-1];
          puVar10[-1] = puVar15[-1];
          puVar15[-1] = uVar8;
          uVar8 = *puVar10;
          *puVar10 = *puVar15;
          *puVar15 = uVar8;
          puVar10 = puVar10 + 3;
          puVar15 = puVar15 + -3;
          uVar28 = uVar28 - 1;
        } while (uVar28 != 0);
      }
      puVar19 = PTR___rust_dealloc_00203c78;
      lVar21 = local_d10 - uVar16;
      if ((uVar16 <= local_d10) && (local_d10 = uVar16, lVar21 != 0)) {
        puVar10 = (undefined8 *)(local_d18 + uVar16 * 0x18 + 8);
        do {
          if (puVar10[-1] != 0) {
            (*(code *)puVar19)(*puVar10,puVar10[-1],1);
          }
          puVar10 = puVar10 + 3;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
      }
      local_c48 = (undefined1  [8])(*(code *)PTR_exp2_00203dc0)(_s__001162d8 / local_90);
      local_db0 = 0;
      local_da8 = 8;
      local_da0 = 0;
      local_db8 = (undefined1 (*) [16])((long)local_cc0 + local_cb8 * 0x18);
      local_ce8 = local_cb8;
      local_d08._0_8_ = local_cc0;
      if ((local_cb8 != 0) && (pauStack_c70 != (undefined1 (*) [16])0x0)) {
        local_c08._8_8_ = 0;
        local_c08._0_8_ = local_58;
        local_b88._0_8_ = _s__00116b80 ^ local_58;
        local_b88._8_8_ = _UNK_00116b88;
        pauVar24 = local_cc0;
        do {
                    /* try { // try from 0013d951 to 0013d960 has its CatchHandler @ 0013f16f */
          uVar28 = core::hash::BuildHasher::hash_one(local_c68,pauVar24);
          pauVar25 = pauStack_c80;
          puVar19 = local_c88;
          bVar33 = (byte)(uVar28 >> 0x39);
          auVar48 = ZEXT216(CONCAT11(bVar33,bVar33));
          auVar48 = pshuflw(auVar48,auVar48,0);
          uVar34 = auVar48._0_4_;
          auVar48._4_4_ = uVar34;
          auVar48._0_4_ = uVar34;
          auVar48._8_4_ = uVar34;
          auVar48._12_4_ = uVar34;
          lVar21 = 0;
          local_e40 = pauVar24;
          while( true ) {
            uVar28 = uVar28 & (ulong)pauVar25;
            auVar44 = *(undefined1 (*) [16])(puVar19 + uVar28);
            auVar36[0] = -(auVar44[0] == auVar48[0]);
            auVar36[1] = -(auVar44[1] == auVar48[1]);
            auVar36[2] = -(auVar44[2] == auVar48[2]);
            auVar36[3] = -(auVar44[3] == auVar48[3]);
            auVar36[4] = -(auVar44[4] == auVar48[4]);
            auVar36[5] = -(auVar44[5] == auVar48[5]);
            auVar36[6] = -(auVar44[6] == auVar48[6]);
            auVar36[7] = -(auVar44[7] == auVar48[7]);
            auVar36[8] = -(auVar44[8] == auVar48[8]);
            auVar36[9] = -(auVar44[9] == auVar48[9]);
            auVar36[10] = -(auVar44[10] == auVar48[10]);
            auVar36[0xb] = -(auVar44[0xb] == auVar48[0xb]);
            auVar36[0xc] = -(auVar44[0xc] == auVar48[0xc]);
            auVar36[0xd] = -(auVar44[0xd] == auVar48[0xd]);
            auVar36[0xe] = -(auVar44[0xe] == auVar48[0xe]);
            auVar36[0xf] = -(auVar44[0xf] == auVar48[0xf]);
            uVar5 = (ushort)(SUB161(auVar36 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
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
                    (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar36[0xf] >> 7) << 0xf;
            uVar18 = (uint)uVar5;
            if (uVar5 != 0) {
              lVar29 = *(long *)local_e40[1];
              local_e38 = auVar44;
              local_e08 = auVar48;
              do {
                uVar3 = 0;
                for (uVar4 = uVar18; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
                  uVar3 = uVar3 + 1;
                }
                uVar16 = uVar3 + uVar28 & (ulong)pauVar25;
                if (lVar29 == *(long *)(puVar19 + uVar16 * -0x48 + -0x38)) {
                  iVar7 = (*(code *)PTR_bcmp_00203d28)
                                    (*(undefined8 *)(*local_e40 + 8),
                                     *(undefined8 *)(puVar19 + uVar16 * -0x48 + -0x40),lVar29);
                  if (iVar7 == 0) {
                    pauVar24 = local_e40;
                    if ((local_d10 == 0) ||
                       (puVar19 = puVar19 + uVar16 * -0x48, *(long *)(puVar19 + -0x18) == 0))
                    goto LAB_0013dd80;
                    local_e08._0_8_ = local_d18 + local_d10 * 0x18;
                    local_cf8._0_8_ = puVar19 + -0x10;
                    iVar7 = 0;
                    auVar44._8_8_ = 0;
                    auVar44._0_8_ = local_e38._8_8_;
                    local_e38 = auVar44 << 0x40;
                    local_e90 = 0.0;
                    lVar21 = local_d18;
                    local_df0 = puVar19;
                    goto LAB_0013dae0;
                  }
                }
                uVar5 = (ushort)(uVar18 - 1) & (ushort)uVar18;
                uVar18 = CONCAT22((short)(uVar18 - 1 >> 0x10),uVar5);
                auVar48 = local_e08;
                auVar44 = local_e38;
              } while (uVar5 != 0);
            }
            auVar43[0] = -(auVar44[0] ==
                          anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0]);
            auVar43[1] = -(auVar44[1] ==
                          anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[1]);
            auVar43[2] = -(auVar44[2] ==
                          anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[2]);
            auVar43[3] = -(auVar44[3] ==
                          anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[3]);
            auVar43[4] = -(auVar44[4] ==
                          anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[4]);
            auVar43[5] = -(auVar44[5] ==
                          anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[5]);
            auVar43[6] = -(auVar44[6] ==
                          anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[6]);
            auVar43[7] = -(auVar44[7] ==
                          anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[7]);
            auVar43[8] = -(auVar44[8] ==
                          anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[8]);
            auVar43[9] = -(auVar44[9] ==
                          anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[9]);
            auVar43[10] = -(auVar44[10] ==
                           anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[10]);
            auVar43[0xb] = -(auVar44[0xb] ==
                            anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0xb]);
            auVar43[0xc] = -(auVar44[0xc] ==
                            anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0xc]);
            auVar43[0xd] = -(auVar44[0xd] ==
                            anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0xd]);
            auVar43[0xe] = -(auVar44[0xe] ==
                            anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0xe]);
            bVar2 = auVar44[0xf] ==
                    anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0xf];
            auVar43[0xf] = -bVar2;
            pauVar24 = local_e40;
            if ((((((((((((((((auVar43 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                             (auVar43 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                            (auVar43 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                           (auVar43 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                          (auVar43 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                         (auVar43 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar43 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar43 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar43 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar43 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar43 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar43 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar43 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar43 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar43 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar2) break;
            uVar28 = uVar28 + lVar21 + 0x10;
            lVar21 = lVar21 + 0x10;
          }
LAB_0013dd80:
          do {
            lVar21 = local_da8;
            pauVar24 = (undefined1 (*) [16])(pauVar24[1] + 8);
            if (pauVar24 == local_db8) {
              local_b38 = (undefined1 (*) [16])&local_e88;
              if (1 < local_da0) {
                if (local_da0 < 0x15) {
                  lVar29 = local_da0 << 5;
                  lVar31 = 0x20;
                  do {
                    core::slice::sort::shared::smallsort::insert_tail(lVar21,lVar21 + lVar31);
                    lVar31 = lVar31 + 0x20;
                  } while (lVar29 != lVar31);
                }
                else {
                    /* try { // try from 0013efd4 to 0013efe6 has its CatchHandler @ 0013efec */
                  core::slice::sort::stable::driftsort_main(local_da8,local_da0,&local_b38);
                }
              }
              goto LAB_0013ddb9;
            }
          } while (pauStack_c70 == (undefined1 (*) [16])0x0);
        } while( true );
      }
LAB_0013ddb9:
      if (local_c58[1][0] == '\x01') {
        local_d78 = *local_c58;
      }
      else {
                    /* try { // try from 0013ef23 to 0013ef28 has its CatchHandler @ 0013efec */
        local_d78 = (*(code *)PTR_hashmap_random_keys_00203de8)();
        *local_c58 = local_d78;
        local_c58[1][0] = 1;
      }
      *(long *)*local_c58 = local_d78._0_8_ + 1;
      local_d88 = _DAT_001fd6b0;
      pauStack_d80 = _UNK_001fd6b8;
      local_d98 = (undefined1 (*) [16])
                  PTR_anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263_001fd6a0;
      pauStack_d90 = _UNK_001fd6a8;
      if (local_da0 == 0) {
        uVar28 = 0;
      }
      else {
        lVar31 = local_da0 * 0x20 + local_da8;
        lVar29 = 1;
        lVar21 = local_da8;
        do {
                    /* try { // try from 0013de40 to 0013de68 has its CatchHandler @ 0013f216 */
          (*(code *)PTR_clone_00203db8)
                    (&local_b38,lVar21,&PTR_s_strategies_comm_strategy_strateg_001fd848);
          hashbrown::map::HashMap<K,V,S,A>::insert
                    (*(undefined8 *)(lVar21 + 0x18),&local_e88,&local_d98,&local_b38,lVar29);
          lVar29 = lVar29 + 1;
          lVar21 = lVar21 + 0x20;
          uVar28 = local_da0;
        } while (lVar21 != lVar31);
      }
      puVar19 = PTR_ceil_00203dd0;
      dVar9 = (double)(long)uVar28;
      local_d28 = uVar28;
      dVar14 = (double)(*(code *)PTR_ceil_00203dd0)(local_88 * dVar9);
      puVar27 = (undefined *)(long)dVar14;
      if (DAT_001162e8 < dVar14) {
        puVar27 = (undefined *)0x7fffffffffffffff;
      }
      puVar32 = (undefined *)0x0;
      if (NAN(dVar14)) {
        puVar27 = puVar32;
      }
      local_c40 = puVar27;
      dVar14 = (double)(*(code *)puVar19)(local_80 * dVar9);
      puVar23 = (undefined *)(long)dVar14;
      if (DAT_001162e8 < dVar14) {
        puVar23 = (undefined *)0x7fffffffffffffff;
      }
      if (NAN(dVar14)) {
        puVar23 = puVar32;
      }
      if ((long)puVar23 <= (long)puVar27) {
        puVar23 = puVar27;
      }
      local_cb0 = puVar23;
      dVar14 = (double)(*(code *)puVar19)(local_78 * dVar9);
      local_df0 = (undefined *)(long)dVar14;
      if (DAT_001162e8 < dVar14) {
        local_df0 = (undefined *)0x7fffffffffffffff;
      }
      if (NAN(dVar14)) {
        local_df0 = puVar32;
      }
      if (local_50 <= dVar9) {
        pauVar24 = (undefined1 (*) [16])local_d08._0_8_;
        if ((long)puVar23 < (long)(uVar28 - (long)local_df0)) {
          local_d48 = -0x8000000000000000;
        }
        else {
          local_e88 = (undefined1 (*) [16])&local_cb0;
          local_e80 = (undefined1 (*) [16])PTR_fmt_00203dd8;
          local_e78 = (undefined1  [8])&local_e20;
          local_e70 = PTR_fmt_00203dd8;
          local_b38 = (undefined1 (*) [16])&PTR_DAT_001fd700;
          pauStack_b30 = (undefined1 (*) [16])0x2;
          pauStack_b18 = (undefined1 (*) [16])0x0;
          pauStack_b28 = (undefined1 (*) [16])&local_e88;
          local_b20 = (code *)0x2;
                    /* try { // try from 0013e0f6 to 0013e10b has its CatchHandler @ 0013f0a9 */
          local_e20 = (undefined1 (*) [16])(uVar28 - (long)local_df0);
          (*(code *)PTR_format_inner_00203d18)(&local_b50,&local_b38);
          local_d48 = local_b50;
          pauStack_d40 = pauStack_b48;
          local_d38 = local_b40;
        }
      }
      else {
        local_e78 = (undefined1  [8])&local_50;
        local_e80 = (undefined1 (*) [16])PTR_fmt_00203dd8;
        local_e70 = PTR_fmt_00203d80;
        local_b38 = (undefined1 (*) [16])&PTR_DAT_001fd720;
        pauStack_b30 = (undefined1 (*) [16])0x2;
        pauStack_b18 = (undefined1 (*) [16])0x0;
        pauStack_b28 = (undefined1 (*) [16])&local_e88;
        local_b20 = (code *)0x2;
                    /* try { // try from 0013dfd0 to 0013dfe5 has its CatchHandler @ 0013f0a9 */
        local_e88 = (undefined1 (*) [16])&local_d28;
        (*(code *)PTR_format_inner_00203d18)(&local_b68,&local_b38);
        local_d48 = local_b68;
        pauStack_d40 = pauStack_b60;
        pauVar24 = (undefined1 (*) [16])local_d08._0_8_;
        local_d38 = local_b58;
      }
      if (local_ce8 != 0) {
        local_e40 = local_70;
        local_c08._0_8_ = local_68;
        local_c18._0_8_ = local_60;
        local_e08._0_8_ = local_cd0 + 0x18a;
        do {
          pauVar25 = pauVar24 + 1;
          pauVar12 = DAT_00116368;
          local_ca8 = pauVar24;
          if (pauStack_d80 != (undefined1 (*) [16])0x0) {
                    /* try { // try from 0013e1d2 to 0013e3c4 has its CatchHandler @ 0013f230 */
            puVar11 = (undefined1 *)core::hash::BuildHasher::hash_one(local_d78,pauVar24);
            pauVar12 = pauStack_d90;
            pauVar13 = local_d98;
            local_d08._0_8_ = pauVar24;
            bVar33 = (byte)((ulong)puVar11 >> 0x39);
            auVar48 = ZEXT216(CONCAT11(bVar33,bVar33));
            auVar48 = pshuflw(auVar48,auVar48,0);
            uVar34 = auVar48._0_4_;
            auVar41._4_4_ = uVar34;
            auVar41._0_4_ = uVar34;
            auVar41._8_4_ = uVar34;
            auVar41._12_4_ = uVar34;
            pauVar24 = (undefined1 (*) [16])0x0;
            while( true ) {
              uVar28 = (ulong)puVar11 & (ulong)pauVar12;
              auVar48 = *(undefined1 (*) [16])(*pauVar13 + uVar28);
              auVar38[0] = -(auVar48[0] == auVar41[0]);
              auVar38[1] = -(auVar48[1] == auVar41[1]);
              auVar38[2] = -(auVar48[2] == auVar41[2]);
              auVar38[3] = -(auVar48[3] == auVar41[3]);
              auVar38[4] = -(auVar48[4] == auVar41[4]);
              auVar38[5] = -(auVar48[5] == auVar41[5]);
              auVar38[6] = -(auVar48[6] == auVar41[6]);
              auVar38[7] = -(auVar48[7] == auVar41[7]);
              auVar38[8] = -(auVar48[8] == auVar41[8]);
              auVar38[9] = -(auVar48[9] == auVar41[9]);
              auVar38[10] = -(auVar48[10] == auVar41[10]);
              auVar38[0xb] = -(auVar48[0xb] == auVar41[0xb]);
              auVar38[0xc] = -(auVar48[0xc] == auVar41[0xc]);
              auVar38[0xd] = -(auVar48[0xd] == auVar41[0xd]);
              auVar38[0xe] = -(auVar48[0xe] == auVar41[0xe]);
              auVar38[0xf] = -(auVar48[0xf] == auVar41[0xf]);
              uVar5 = (ushort)(SUB161(auVar38 >> 7,0) & 1) |
                      (ushort)(SUB161(auVar38 >> 0xf,0) & 1) << 1 |
                      (ushort)(SUB161(auVar38 >> 0x17,0) & 1) << 2 |
                      (ushort)(SUB161(auVar38 >> 0x1f,0) & 1) << 3 |
                      (ushort)(SUB161(auVar38 >> 0x27,0) & 1) << 4 |
                      (ushort)(SUB161(auVar38 >> 0x2f,0) & 1) << 5 |
                      (ushort)(SUB161(auVar38 >> 0x37,0) & 1) << 6 |
                      (ushort)(SUB161(auVar38 >> 0x3f,0) & 1) << 7 |
                      (ushort)(SUB161(auVar38 >> 0x47,0) & 1) << 8 |
                      (ushort)(SUB161(auVar38 >> 0x4f,0) & 1) << 9 |
                      (ushort)(SUB161(auVar38 >> 0x57,0) & 1) << 10 |
                      (ushort)(SUB161(auVar38 >> 0x5f,0) & 1) << 0xb |
                      (ushort)(SUB161(auVar38 >> 0x67,0) & 1) << 0xc |
                      (ushort)(SUB161(auVar38 >> 0x6f,0) & 1) << 0xd |
                      (ushort)(SUB161(auVar38 >> 0x77,0) & 1) << 0xe |
                      (ushort)(auVar38[0xf] >> 7) << 0xf;
              uVar18 = (uint)uVar5;
              if (uVar5 != 0) {
                lVar21 = *(long *)(local_d08._0_8_ + 0x10);
                local_e38 = auVar41;
                local_dc8 = pauVar24;
                local_cf8 = auVar48;
                do {
                  uVar3 = 0;
                  for (uVar4 = uVar18; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
                    uVar3 = uVar3 + 1;
                  }
                  uVar16 = uVar3 + uVar28 & (ulong)pauVar12;
                  if (lVar21 == *(long *)((long)pauVar13 + uVar16 * -0x28 + -0x18)) {
                    iVar7 = (*(code *)PTR_bcmp_00203d28)
                                      (*(undefined8 *)(local_d08._0_8_ + 8),
                                       *(undefined8 *)((long)pauVar13 + uVar16 * -0x28 + -0x20),
                                       lVar21);
                    if (iVar7 == 0) {
                      pauVar12 = DAT_00116368;
                      if ((((local_d48 != -0x8000000000000000) ||
                           (lVar21 = *(long *)((long)pauVar13 + uVar16 * -0x28 + -8),
                           pauVar12 = local_e40, lVar21 <= (long)local_c40)) ||
                          (pauVar12 = (undefined1 (*) [16])local_c08._0_8_,
                          lVar21 <= (long)local_cb0)) ||
                         (pauVar12 = (undefined1 (*) [16])local_c18._0_8_,
                         (long)(local_d28 - (long)local_df0) < lVar21)) goto LAB_0013e35a;
                      goto LAB_0013e352;
                    }
                  }
                  uVar5 = (ushort)(uVar18 - 1) & (ushort)uVar18;
                  uVar18 = CONCAT22((short)(uVar18 - 1 >> 0x10),uVar5);
                  pauVar24 = local_dc8;
                  auVar41 = local_e38;
                  auVar48 = local_cf8;
                } while (uVar5 != 0);
              }
              auVar46[0] = -(auVar48[0] ==
                            anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0]);
              auVar46[1] = -(auVar48[1] ==
                            anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[1]);
              auVar46[2] = -(auVar48[2] ==
                            anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[2]);
              auVar46[3] = -(auVar48[3] ==
                            anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[3]);
              auVar46[4] = -(auVar48[4] ==
                            anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[4]);
              auVar46[5] = -(auVar48[5] ==
                            anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[5]);
              auVar46[6] = -(auVar48[6] ==
                            anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[6]);
              auVar46[7] = -(auVar48[7] ==
                            anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[7]);
              auVar46[8] = -(auVar48[8] ==
                            anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[8]);
              auVar46[9] = -(auVar48[9] ==
                            anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[9]);
              auVar46[10] = -(auVar48[10] ==
                             anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[10]);
              auVar46[0xb] = -(auVar48[0xb] ==
                              anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0xb]
                              );
              auVar46[0xc] = -(auVar48[0xc] ==
                              anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0xc]
                              );
              auVar46[0xd] = -(auVar48[0xd] ==
                              anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0xd]
                              );
              auVar46[0xe] = -(auVar48[0xe] ==
                              anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0xe]
                              );
              bVar2 = auVar48[0xf] ==
                      anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0xf];
              auVar46[0xf] = -bVar2;
              if ((((((((((((((((auVar46 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                               (auVar46 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                              (auVar46 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                             (auVar46 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                            (auVar46 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                           (auVar46 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                          (auVar46 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                         (auVar46 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar46 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar46 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar46 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar46 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar46 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar46 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar46 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar2)
              break;
              puVar11 = pauVar24[1] + uVar28;
              pauVar24 = pauVar24 + 1;
            }
LAB_0013e352:
            pauVar12 = DAT_00116368;
          }
LAB_0013e35a:
          pauStack_c38 = pauVar12;
          (*(code *)PTR_clone_00203db8)
                    (&local_b38,local_ca8,&PTR_s_strategies_comm_strategy_strateg_001fd7f0);
          hashbrown::map::HashMap<K,V,S,A>::insert(pauStack_c38,local_e08._0_8_,&local_b38);
          pauVar24 = local_ca8;
          if (pauStack_d80 != (undefined1 (*) [16])0x0) {
            uVar28 = core::hash::BuildHasher::hash_one(local_d78,local_ca8);
            pauVar12 = local_d98;
            bVar33 = (byte)(uVar28 >> 0x39);
            auVar48 = ZEXT216(CONCAT11(bVar33,bVar33));
            auVar48 = pshuflw(auVar48,auVar48,0);
            uVar34 = auVar48._0_4_;
            auVar42._4_4_ = uVar34;
            auVar42._0_4_ = uVar34;
            auVar42._8_4_ = uVar34;
            auVar42._12_4_ = uVar34;
            lVar21 = 0;
            pauVar13 = pauStack_d90;
            while( true ) {
              uVar28 = uVar28 & (ulong)pauVar13;
              auVar48 = *(undefined1 (*) [16])(*pauVar12 + uVar28);
              auVar39[0] = -(auVar48[0] == auVar42[0]);
              auVar39[1] = -(auVar48[1] == auVar42[1]);
              auVar39[2] = -(auVar48[2] == auVar42[2]);
              auVar39[3] = -(auVar48[3] == auVar42[3]);
              auVar39[4] = -(auVar48[4] == auVar42[4]);
              auVar39[5] = -(auVar48[5] == auVar42[5]);
              auVar39[6] = -(auVar48[6] == auVar42[6]);
              auVar39[7] = -(auVar48[7] == auVar42[7]);
              auVar39[8] = -(auVar48[8] == auVar42[8]);
              auVar39[9] = -(auVar48[9] == auVar42[9]);
              auVar39[10] = -(auVar48[10] == auVar42[10]);
              auVar39[0xb] = -(auVar48[0xb] == auVar42[0xb]);
              auVar39[0xc] = -(auVar48[0xc] == auVar42[0xc]);
              auVar39[0xd] = -(auVar48[0xd] == auVar42[0xd]);
              auVar39[0xe] = -(auVar48[0xe] == auVar42[0xe]);
              auVar39[0xf] = -(auVar48[0xf] == auVar42[0xf]);
              uVar5 = (ushort)(SUB161(auVar39 >> 7,0) & 1) |
                      (ushort)(SUB161(auVar39 >> 0xf,0) & 1) << 1 |
                      (ushort)(SUB161(auVar39 >> 0x17,0) & 1) << 2 |
                      (ushort)(SUB161(auVar39 >> 0x1f,0) & 1) << 3 |
                      (ushort)(SUB161(auVar39 >> 0x27,0) & 1) << 4 |
                      (ushort)(SUB161(auVar39 >> 0x2f,0) & 1) << 5 |
                      (ushort)(SUB161(auVar39 >> 0x37,0) & 1) << 6 |
                      (ushort)(SUB161(auVar39 >> 0x3f,0) & 1) << 7 |
                      (ushort)(SUB161(auVar39 >> 0x47,0) & 1) << 8 |
                      (ushort)(SUB161(auVar39 >> 0x4f,0) & 1) << 9 |
                      (ushort)(SUB161(auVar39 >> 0x57,0) & 1) << 10 |
                      (ushort)(SUB161(auVar39 >> 0x5f,0) & 1) << 0xb |
                      (ushort)(SUB161(auVar39 >> 0x67,0) & 1) << 0xc |
                      (ushort)(SUB161(auVar39 >> 0x6f,0) & 1) << 0xd |
                      (ushort)(SUB161(auVar39 >> 0x77,0) & 1) << 0xe |
                      (ushort)(auVar39[0xf] >> 7) << 0xf;
              uVar18 = (uint)uVar5;
              if (uVar5 != 0) {
                lVar29 = *(long *)pauVar24[1];
                local_cf8._0_8_ = lVar21;
                local_e38 = auVar42;
                local_dc8 = pauVar13;
                local_d08 = auVar48;
                do {
                  uVar3 = 0;
                  for (uVar4 = uVar18; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
                    uVar3 = uVar3 + 1;
                  }
                  uVar16 = uVar3 + uVar28 & (ulong)local_dc8;
                  if (lVar29 == *(long *)((long)pauVar12 + uVar16 * -0x28 + -0x18)) {
                    iVar7 = (*(code *)PTR_bcmp_00203d28)
                                      (*(undefined8 *)(*pauVar24 + 8),
                                       *(undefined8 *)((long)pauVar12 + uVar16 * -0x28 + -0x20),
                                       lVar29);
                    if (iVar7 == 0) {
                      local_de0 = *(undefined1 (**) [16])((long)pauVar12 + uVar16 * -0x28 + -0x10);
                      uVar8 = *(undefined8 *)((long)pauVar12 + uVar16 * -0x28 + -8);
                      local_e20 = (undefined1 (*) [16])&local_de0;
                      local_e18 = (undefined1 (*) [16])PTR_fmt_00203d80;
                      local_b38 = &anon_2bc08f40ad58cb635718c2f09dbb11ab_6_llvm_4096812584824358744;
                      pauStack_b30 = (undefined1 (*) [16])0x1;
                      pauStack_b18 = (undefined1 (*) [16])&DAT_00119088;
                      local_b10 = (undefined1 (*) [16])0x1;
                      pauStack_b28 = (undefined1 (*) [16])&local_e20;
                      local_b20 = (code *)0x1;
                    /* try { // try from 0013e5c6 to 0013e5d8 has its CatchHandler @ 0013f230 */
                      (*(code *)PTR_format_inner_00203d18)(&local_e88,&local_b38);
                      pauVar12 = local_e80;
                      pauVar24 = local_e88;
                      auVar17 = local_e78;
                    /* try { // try from 0013e5e8 to 0013e5f7 has its CatchHandler @ 0013f14d */
                      _<i64_as_alloc::string::SpecToString>::spec_to_string(&local_b38,uVar8);
                      local_e18 = pauStack_b30;
                      pcVar20 = (code *)PTR___rust_dealloc_00203c78;
                      goto LAB_0013e617;
                    }
                  }
                  uVar5 = (ushort)(uVar18 - 1) & (ushort)uVar18;
                  uVar18 = CONCAT22((short)(uVar18 - 1 >> 0x10),uVar5);
                  pauVar13 = local_dc8;
                  lVar21 = local_cf8._0_8_;
                  auVar42 = local_e38;
                  auVar48 = local_d08;
                } while (uVar5 != 0);
              }
              auVar47[0] = -(auVar48[0] ==
                            anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0]);
              auVar47[1] = -(auVar48[1] ==
                            anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[1]);
              auVar47[2] = -(auVar48[2] ==
                            anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[2]);
              auVar47[3] = -(auVar48[3] ==
                            anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[3]);
              auVar47[4] = -(auVar48[4] ==
                            anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[4]);
              auVar47[5] = -(auVar48[5] ==
                            anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[5]);
              auVar47[6] = -(auVar48[6] ==
                            anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[6]);
              auVar47[7] = -(auVar48[7] ==
                            anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[7]);
              auVar47[8] = -(auVar48[8] ==
                            anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[8]);
              auVar47[9] = -(auVar48[9] ==
                            anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[9]);
              auVar47[10] = -(auVar48[10] ==
                             anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[10]);
              auVar47[0xb] = -(auVar48[0xb] ==
                              anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0xb]
                              );
              auVar47[0xc] = -(auVar48[0xc] ==
                              anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0xc]
                              );
              auVar47[0xd] = -(auVar48[0xd] ==
                              anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0xd]
                              );
              auVar47[0xe] = -(auVar48[0xe] ==
                              anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0xe]
                              );
              bVar2 = auVar48[0xf] ==
                      anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0xf];
              auVar47[0xf] = -bVar2;
              if ((((((((((((((((auVar47 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                               (auVar47 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                              (auVar47 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                             (auVar47 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                            (auVar47 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                           (auVar47 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                          (auVar47 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                         (auVar47 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar47 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar47 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar47 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar47 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar47 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar47 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar47 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar2)
              break;
              uVar28 = uVar28 + lVar21 + 0x10;
              lVar21 = lVar21 + 0x10;
            }
          }
          puVar27 = PTR___rust_no_alloc_shim_is_unstable_v2_00203c98;
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00203c98)();
          puVar19 = PTR___rust_alloc_00203c70;
          pauVar12 = (undefined1 (*) [16])(*(code *)PTR___rust_alloc_00203c70)(1,1);
          if (pauVar12 == (undefined1 (*) [16])0x0) {
                    /* try { // try from 0013ef41 to 0013ef57 has its CatchHandler @ 0013f18f */
            (*(code *)PTR_handle_error_00203cd8)
                      (1,1,&
                           PTR_anon_bf65de67c24155f465f4e3f0b4be96c2_2_llvm_4550705873496731735_001fd688
                      );
            goto LAB_0013efc3;
          }
          (*pauVar12)[0] = 0x2d;
          (*(code *)puVar27)();
          pauVar13 = (undefined1 (*) [16])(*(code *)puVar19)(1,1);
          pcVar20 = (code *)PTR___rust_dealloc_00203c78;
          if (pauVar13 == (undefined1 (*) [16])0x0) {
                    /* try { // try from 0013ef5a to 0013ef70 has its CatchHandler @ 0013f174 */
            (*(code *)PTR_handle_error_00203cd8)
                      (1,1,&
                           PTR_anon_bf65de67c24155f465f4e3f0b4be96c2_2_llvm_4550705873496731735_001fd688
                      );
            goto LAB_0013efc3;
          }
          (*pauVar13)[0] = 0x2d;
          pauVar24 = (undefined1 (*) [16])0x1;
          auVar17 = (undefined1  [8])0x1;
          local_b38 = (undefined1 (*) [16])0x1;
          pauStack_b28 = (undefined1 (*) [16])0x1;
          local_e18 = pauVar13;
LAB_0013e617:
          pauStack_b30 = (undefined1 (*) [16])_<&T_as_core::fmt::Display>::fmt;
          local_b20 = _<alloc::string::String_as_core::fmt::Display>::fmt;
          pauStack_b18 = (undefined1 (*) [16])&local_e20;
          local_b10 = (undefined1 (*) [16])_<alloc::string::String_as_core::fmt::Display>::fmt;
          pauStack_b08 = (undefined1 (*) [16])&pauStack_c38;
          local_b00._0_8_ = PTR_fmt_00203d80;
          local_e88 = (undefined1 (*) [16])&PTR_DAT_001fd808;
          local_e80 = (undefined1 (*) [16])0x4;
          local_e68 = 0;
          local_e78 = (undefined1  [8])&local_b38;
          local_e70 = (undefined *)0x4;
                    /* try { // try from 0013e6f0 to 0013e702 has its CatchHandler @ 0013f19c */
          local_e20 = local_b38;
          local_e10 = pauStack_b28;
          local_de0 = pauVar24;
          pauStack_dd8 = pauVar12;
          local_dd0 = (undefined1 (*) [16])auVar17;
          local_b38 = (undefined1 (*) [16])&local_ca8;
          pauStack_b28 = (undefined1 (*) [16])&local_de0;
          (*(code *)PTR_format_inner_00203d18)(&lStack_bb8,&local_e88);
          uVar8 = uStack_bb0;
          lVar21 = lStack_bb8;
                    /* try { // try from 0013e71b to 0013e723 has its CatchHandler @ 0013f1a1 */
          auVar48 = (*(code *)PTR_to_cstring_00203da0)(uStack_bb0,uStack_ba8);
          puVar11 = auVar48._0_8_;
          if (lVar21 != 0) {
            (*pcVar20)(uVar8,lVar21,1);
          }
          (*(code *)PTR_fb_ctx_log_info_00203da8)(*(undefined8 *)(local_de8 + 0x30),puVar11);
          *puVar11 = 0;
          if (auVar48._8_8_ != 0) {
            (*pcVar20)(puVar11,auVar48._8_8_,1);
          }
          if (local_e20 != (undefined1 (*) [16])0x0) {
            (*pcVar20)(local_e18,local_e20,1);
          }
          if (local_de0 != (undefined1 (*) [16])0x0) {
            (*pcVar20)(pauStack_dd8,local_de0,1);
          }
          pauVar24 = (undefined1 (*) [16])(*pauVar25 + 8);
        } while ((undefined1 (*) [16])(*pauVar25 + 8) != local_db8);
      }
      pauStack_b18 = (undefined1 (*) [16])&local_90;
      local_de0 = (undefined1 (*) [16])(local_d28 - (long)local_df0);
      local_e20 = (undefined1 (*) [16])&DAT_00118ff0;
      if (local_d48 != -0x8000000000000000) {
        local_e20 = pauStack_d40;
      }
      local_e18 = (undefined1 (*) [16])0x2;
      if (local_d48 != -0x8000000000000000) {
        local_e18 = local_d38;
      }
      local_b38 = &local_1e0;
      pauStack_b30 = (undefined1 (*) [16])_<alloc::string::String_as_core::fmt::Display>::fmt;
      pauStack_b28 = (undefined1 (*) [16])&local_d20;
      local_b20 = _<alloc::vec::Vec<T,A>as_core::fmt::Debug>::fmt;
      local_b10 = (undefined1 (*) [16])PTR_fmt_00203d80;
      pauStack_b08 = (undefined1 (*) [16])local_c48;
      local_b00._0_8_ = PTR_fmt_00203d80;
      local_b00._8_8_ = &local_d28;
      local_af0 = (undefined1 (**) [16])PTR_fmt_00203dd8;
      ppuStack_ae8 = &local_c40;
      local_ae0 = PTR_fmt_00203dd8;
      ppuStack_ad8 = &local_cb0;
      puStack_ad0 = PTR_fmt_00203dd8;
      ppauStack_ac8 = &local_de0;
      puStack_ac0 = PTR_fmt_00203dd8;
      plStack_ab8 = &local_c50;
      puStack_ab0 = PTR_fmt_00203de0;
      ppauStack_aa8 = &local_e20;
      pcStack_aa0 = _<&T_as_core::fmt::Display>::fmt;
      local_e88 = (undefined1 (*) [16])&PTR_DAT_001fd740;
      local_e80 = (undefined1 (*) [16])0xa;
      local_e68 = 0;
      local_e78 = (undefined1  [8])&local_b38;
      local_e70 = (undefined *)0xa;
                    /* try { // try from 0013e94e to 0013e963 has its CatchHandler @ 0013f18f */
      (*(code *)PTR_format_inner_00203d18)(&lStack_ba0,(undefined1 (*) [16])&local_e88);
                    /* try { // try from 0013e97c to 0013e984 has its CatchHandler @ 0013f0b6 */
      auVar48 = (*(code *)PTR_to_cstring_00203da0)(uStack_b98,uStack_b90);
      puVar11 = auVar48._0_8_;
      if (lStack_ba0 != 0) {
        (*(code *)PTR___rust_dealloc_00203c78)(uStack_b98,lStack_ba0,1);
      }
      (*(code *)PTR_fb_ctx_log_info_00203da8)(*(undefined8 *)(local_de8 + 0x30),puVar11);
      *puVar11 = 0;
      if (auVar48._8_8_ != 0) {
        (*(code *)PTR___rust_dealloc_00203c78)(puVar11,auVar48._8_8_,1);
      }
      if (local_d48 != -0x8000000000000000) {
        local_e20 = (undefined1 (*) [16])&local_d48;
        local_e88 = (undefined1 (*) [16])&local_e20;
        local_e80 = (undefined1 (*) [16])_<&T_as_core::fmt::Display>::fmt;
        local_b38 = (undefined1 (*) [16])&PTR_DAT_001fd7e0;
        pauStack_b30 = (undefined1 (*) [16])0x1;
        pauStack_b18 = (undefined1 (*) [16])0x0;
        local_b20 = (code *)0x1;
                    /* try { // try from 0013ea4c to 0013ea76 has its CatchHandler @ 0013f18f */
        pauStack_b28 = (undefined1 (*) [16])&local_e88;
        (*(code *)PTR_format_inner_00203d18)(&local_be8,&local_b38);
        future_backtest_sdk::context::StrategyContext::log_info(local_de8,&local_be8);
        if ((local_d48 != -0x8000000000000000) && (local_d48 != 0)) {
          (*(code *)PTR___rust_dealloc_00203c78)(pauStack_d40,local_d48,1);
        }
      }
      pauVar24 = pauStack_d90;
      puVar19 = PTR___rust_dealloc_00203c78;
      if (pauStack_d90 != (undefined1 (*) [16])0x0) {
        if (pauStack_d80 != (undefined1 (*) [16])0x0) {
          auVar48 = *local_d98;
          uVar18 = ~(uint)(ushort)((ushort)(SUB161(auVar48 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar48 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar48 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar48 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar48 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar48 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar48 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar48 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar48 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar48 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar48 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar48 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar48 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar48 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar48 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(byte)(auVar48[0xf] >> 7) << 0xf);
          pauVar25 = local_d98 + 1;
          pauVar12 = pauStack_d80;
          pauVar13 = local_d98;
          do {
            if ((short)uVar18 == 0) {
              do {
                auVar48 = *pauVar25;
                pauVar13 = pauVar13 + -0x28;
                pauVar25 = pauVar25 + 1;
                uVar18 = (uint)(ushort)((ushort)(SUB161(auVar48 >> 7,0) & 1) |
                                        (ushort)(SUB161(auVar48 >> 0xf,0) & 1) << 1 |
                                        (ushort)(SUB161(auVar48 >> 0x17,0) & 1) << 2 |
                                        (ushort)(SUB161(auVar48 >> 0x1f,0) & 1) << 3 |
                                        (ushort)(SUB161(auVar48 >> 0x27,0) & 1) << 4 |
                                        (ushort)(SUB161(auVar48 >> 0x2f,0) & 1) << 5 |
                                        (ushort)(SUB161(auVar48 >> 0x37,0) & 1) << 6 |
                                        (ushort)(SUB161(auVar48 >> 0x3f,0) & 1) << 7 |
                                        (ushort)(SUB161(auVar48 >> 0x47,0) & 1) << 8 |
                                        (ushort)(SUB161(auVar48 >> 0x4f,0) & 1) << 9 |
                                        (ushort)(SUB161(auVar48 >> 0x57,0) & 1) << 10 |
                                        (ushort)(SUB161(auVar48 >> 0x5f,0) & 1) << 0xb |
                                        (ushort)(SUB161(auVar48 >> 0x67,0) & 1) << 0xc |
                                        (ushort)(SUB161(auVar48 >> 0x6f,0) & 1) << 0xd |
                                        (ushort)(SUB161(auVar48 >> 0x77,0) & 1) << 0xe |
                                       (ushort)(byte)(auVar48[0xf] >> 7) << 0xf);
              } while (uVar18 == 0xffff);
              uVar18 = ~uVar18;
            }
            uVar3 = 0;
            for (uVar4 = uVar18; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
              uVar3 = uVar3 + 1;
            }
            lVar21 = *(long *)((long)pauVar13 + (ulong)uVar3 * -0x28 + -0x28);
            if (lVar21 != 0) {
              (*(code *)puVar19)(*(undefined8 *)((long)pauVar13 + (ulong)uVar3 * -0x28 + -0x20),
                                 lVar21,1);
            }
            pauVar12 = (undefined1 (*) [16])(pauVar12[-1] + 0xf);
            uVar18 = uVar18 - 1 & uVar18;
          } while (pauVar12 != (undefined1 (*) [16])0x0);
        }
        uVar28 = (long)pauVar24 * 0x28 + 0x37U & 0xfffffffffffffff0;
        puVar11 = pauVar24[1] + uVar28 + 1;
        if (puVar11 != (undefined1 *)0x0) {
          (*(code *)PTR___rust_dealloc_00203c78)((long)local_d98 - uVar28,puVar11,0x10);
        }
      }
      puVar19 = PTR___rust_dealloc_00203c78;
      if (local_da0 != 0) {
        puVar10 = (undefined8 *)(local_da8 + 8);
        uVar28 = local_da0;
        do {
          if (puVar10[-1] != 0) {
            (*(code *)puVar19)(*puVar10,puVar10[-1],1);
          }
          puVar10 = puVar10 + 4;
          uVar28 = uVar28 - 1;
        } while (uVar28 != 0);
      }
      if (local_db0 != 0) {
        (*(code *)PTR___rust_dealloc_00203c78)(local_da8,local_db0 << 5,8);
      }
      puVar19 = PTR___rust_dealloc_00203c78;
      if (local_d10 != 0) {
        puVar10 = (undefined8 *)(local_d18 + 8);
        uVar28 = local_d10;
        do {
          if (puVar10[-1] != 0) {
            (*(code *)puVar19)(*puVar10,puVar10[-1],1);
          }
          puVar10 = puVar10 + 3;
          uVar28 = uVar28 - 1;
        } while (uVar28 != 0);
      }
      if (local_d20 != 0) {
        (*(code *)PTR___rust_dealloc_00203c78)(local_d18,local_d20 * 0x18,8);
      }
      if (local_ca0 == (undefined1 (*) [16])0x0) {
        local_b00._8_8_ = (undefined1 (*) [16])0x0;
      }
      else {
        pauStack_b30 = (undefined1 (*) [16])0x0;
        pauStack_b28 = local_ca0;
        local_b20 = local_c98;
        local_b10 = (undefined1 (*) [16])0x0;
        pauStack_b08 = local_ca0;
        local_b00._0_8_ = local_c98;
        local_b00._8_8_ = local_c90;
      }
      local_b38 = (undefined1 (*) [16])(ulong)(local_ca0 != (undefined1 (*) [16])0x0);
                    /* try { // try from 0013ecdf to 0013ecf0 has its CatchHandler @ 0013f0ae */
      pauStack_b18 = local_b38;
      alloc::collections::btree::map::IntoIter<K,V,A>::dying_next(&local_e88,&local_b38);
      puVar19 = PTR___rust_dealloc_00203c78;
      if (local_e88 != (undefined1 (*) [16])0x0) {
        do {
          lVar21 = *(long *)((long)local_e88 + (long)local_e78 * 0x18 + 8);
          if (lVar21 != 0) {
            (*(code *)puVar19)(*(undefined8 *)((long)local_e88 + (long)local_e78 * 0x18 + 0x10),
                               lVar21,1);
          }
                    /* try { // try from 0013ed37 to 0013ed41 has its CatchHandler @ 0013f1fc */
          alloc::collections::btree::map::IntoIter<K,V,A>::dying_next(&local_e88,&local_b38);
        } while (local_e88 != (undefined1 (*) [16])0x0);
      }
                    /* try { // try from 0013ed4c to 0013ed58 has its CatchHandler @ 0013f108 */
      _<hashbrown::raw::RawTable<T,A>as_core::ops::drop::Drop>::drop(&local_c88);
      if (local_ce0 != (undefined1 (*) [16])0x0) {
        (*(code *)PTR___rust_dealloc_00203c78)(local_cd8,local_ce0,1);
      }
      puVar19 = PTR___rust_dealloc_00203c78;
      if (local_cb8 != 0) {
        puVar10 = (undefined8 *)(*local_cc0 + 8);
        uVar28 = local_cb8;
        do {
          if (puVar10[-1] != 0) {
            (*(code *)puVar19)(*puVar10,puVar10[-1],1);
          }
          puVar10 = puVar10 + 3;
          uVar28 = uVar28 - 1;
        } while (uVar28 != 0);
      }
      if (local_cc8 != 0) {
        (*(code *)PTR___rust_dealloc_00203c78)(local_cc0,local_cc8 * 0x18,8);
      }
      goto LAB_0013ede2;
    }
    local_b38 = (undefined1 (*) [16])&PTR_DAT_001fd6f0;
    pauStack_b30 = (undefined1 (*) [16])0x1;
    pauStack_b28 = (undefined1 (*) [16])&DAT_00000008;
    local_b20 = (code *)0x0;
    pauStack_b18 = (undefined1 (*) [16])0x0;
                    /* try { // try from 0013ee95 to 0013eea1 has its CatchHandler @ 0013f194 */
    uVar8 = anyhow::__private::format_err(&local_b38);
  }
  core::ptr::drop_in_place<strategy_comm5::Comm5Params>(&local_598);
LAB_0013ee2c:
  if (local_c30 != 0) {
    (*(code *)PTR___rust_dealloc_00203c78)(local_c28,local_c30,1);
  }
  return uVar8;
LAB_0013dae0:
                    /* try { // try from 0013dae0 to 0013daef has its CatchHandler @ 0013f211 */
  uVar28 = core::hash::BuildHasher::hash_one(local_cf8._0_8_);
  lVar31 = *(long *)(puVar19 + -0x30);
  pauVar24 = *(undefined1 (**) [16])(puVar19 + -0x28);
  bVar33 = (byte)(uVar28 >> 0x39);
  auVar48 = ZEXT216(CONCAT11(bVar33,bVar33));
  auVar48 = pshuflw(auVar48,auVar48,0);
  uVar34 = auVar48._0_4_;
  auVar40._4_4_ = uVar34;
  auVar40._0_4_ = uVar34;
  auVar40._8_4_ = uVar34;
  auVar40._12_4_ = uVar34;
  lVar29 = lVar31 + -0x20;
  lVar22 = 0;
  while( true ) {
    uVar28 = uVar28 & (ulong)pauVar24;
    auVar48 = *(undefined1 (*) [16])(lVar31 + uVar28);
    auVar37[0] = -(auVar48[0] == auVar40[0]);
    auVar37[1] = -(auVar48[1] == auVar40[1]);
    auVar37[2] = -(auVar48[2] == auVar40[2]);
    auVar37[3] = -(auVar48[3] == auVar40[3]);
    auVar37[4] = -(auVar48[4] == auVar40[4]);
    auVar37[5] = -(auVar48[5] == auVar40[5]);
    auVar37[6] = -(auVar48[6] == auVar40[6]);
    auVar37[7] = -(auVar48[7] == auVar40[7]);
    auVar37[8] = -(auVar48[8] == auVar40[8]);
    auVar37[9] = -(auVar48[9] == auVar40[9]);
    auVar37[10] = -(auVar48[10] == auVar40[10]);
    auVar37[0xb] = -(auVar48[0xb] == auVar40[0xb]);
    auVar37[0xc] = -(auVar48[0xc] == auVar40[0xc]);
    auVar37[0xd] = -(auVar48[0xd] == auVar40[0xd]);
    auVar37[0xe] = -(auVar48[0xe] == auVar40[0xe]);
    auVar37[0xf] = -(auVar48[0xf] == auVar40[0xf]);
    uVar5 = (ushort)(SUB161(auVar37 >> 7,0) & 1) | (ushort)(SUB161(auVar37 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar37 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar37 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar37 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar37 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar37 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar37 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar37 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar37 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar37 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar37 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar37 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar37 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar37 >> 0x77,0) & 1) << 0xe | (ushort)(auVar37[0xf] >> 7) << 0xf;
    uVar18 = (uint)uVar5;
    if (uVar5 != 0) {
      lVar1 = *(long *)(lVar21 + 0x10);
      local_dc8 = pauVar24;
      local_c18 = auVar40;
      lStack_bf8 = lVar22;
      lStack_bf0 = lVar29;
      auStack_b78 = auVar48;
      do {
        uVar3 = 0;
        for (uVar4 = uVar18; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        uVar16 = uVar3 + uVar28 & (ulong)local_dc8;
        lVar29 = lStack_bf0 + uVar16 * -0x20;
        if (lVar1 == *(long *)(lVar29 + 0x10)) {
          iVar6 = (*(code *)PTR_bcmp_00203d28)
                            (*(undefined8 *)(lVar21 + 8),*(undefined8 *)(lVar29 + 8),lVar1);
          puVar19 = local_df0;
          if (iVar6 == 0) {
            local_dc8 = *(undefined1 (**) [16])(lVar31 + -8 + uVar16 * -0x20);
            if ((double)local_c08._0_8_ <= DAT_00116388) {
              uStack_dc0 = 0;
            }
            else {
              pauVar24 = (undefined1 (*) [16])local_b88._0_8_;
              if ((double)local_b88._0_8_ <= (double)local_dc8) {
                pauVar24 = local_dc8;
              }
              local_dc8 = (undefined1 (*) [16])local_c08._0_8_;
              if ((double)pauVar24 <= (double)local_c08._0_8_) {
                local_dc8 = pauVar24;
              }
              uStack_dc0 = local_c08._8_8_;
            }
            dVar14 = (double)(*(code *)PTR___powidf2_00203dc8)(local_c48,iVar7);
            local_e38._0_8_ = (double)local_e38._0_8_ + (double)local_dc8 * dVar14;
            local_e90 = local_e90 + dVar14;
            goto LAB_0013dcb5;
          }
        }
        uVar5 = (ushort)(uVar18 - 1) & (ushort)uVar18;
        uVar18 = CONCAT22((short)(uVar18 - 1 >> 0x10),uVar5);
        pauVar24 = local_dc8;
        lVar29 = lStack_bf0;
        puVar19 = local_df0;
        lVar22 = lStack_bf8;
        auVar40 = local_c18;
        auVar48 = auStack_b78;
      } while (uVar5 != 0);
    }
    auVar45[0] = -(auVar48[0] ==
                  anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0]);
    auVar45[1] = -(auVar48[1] ==
                  anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[1]);
    auVar45[2] = -(auVar48[2] ==
                  anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[2]);
    auVar45[3] = -(auVar48[3] ==
                  anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[3]);
    auVar45[4] = -(auVar48[4] ==
                  anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[4]);
    auVar45[5] = -(auVar48[5] ==
                  anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[5]);
    auVar45[6] = -(auVar48[6] ==
                  anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[6]);
    auVar45[7] = -(auVar48[7] ==
                  anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[7]);
    auVar45[8] = -(auVar48[8] ==
                  anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[8]);
    auVar45[9] = -(auVar48[9] ==
                  anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[9]);
    auVar45[10] = -(auVar48[10] ==
                   anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[10]);
    auVar45[0xb] = -(auVar48[0xb] ==
                    anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0xb]);
    auVar45[0xc] = -(auVar48[0xc] ==
                    anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0xc]);
    auVar45[0xd] = -(auVar48[0xd] ==
                    anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0xd]);
    auVar45[0xe] = -(auVar48[0xe] ==
                    anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0xe]);
    bVar2 = auVar48[0xf] == anon_ebc0ce7ab763930e5bb6bd006ac8038c_7_llvm_14651297825786541263[0xf];
    auVar45[0xf] = -bVar2;
    if ((((((((((((((((auVar45 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                     (auVar45 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar45 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar45 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar45 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar45 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar45 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar45 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar45 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar45 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar45 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar45 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar45 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
         (auVar45 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
        (auVar45 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar2) break;
    uVar28 = uVar28 + lVar22 + 0x10;
    lVar22 = lVar22 + 0x10;
  }
LAB_0013dcb5:
  do {
    lVar21 = lVar21 + 0x18;
    if (lVar21 == local_e08._0_8_) {
      pauVar24 = local_e40;
      if (DAT_00116388 < local_e90) {
                    /* try { // try from 0013dce0 to 0013dcf7 has its CatchHandler @ 0013f16f */
        (*(code *)PTR_clone_00203db8)
                  (&local_b38,local_e40,&PTR_s_strategies_comm_strategy_strateg_001fd860);
        pauVar12 = pauStack_b28;
        pauVar25 = pauStack_b30;
        pauVar24 = local_b38;
        uVar28 = local_da0;
        if (local_da0 == local_db0) {
                    /* try { // try from 0013dd22 to 0013dd35 has its CatchHandler @ 0013f082 */
          alloc::raw_vec::RawVec<T,A>::grow_one
                    (&local_db0,&PTR_s_strategies_comm_strategy_strateg_001fd878);
        }
        lVar21 = uVar28 * 0x20;
        *(undefined1 (**) [16])(local_da8 + lVar21) = pauVar24;
        *(undefined1 (**) [16])(local_da8 + 8 + lVar21) = pauVar25;
        *(undefined1 (**) [16])(local_da8 + 0x10 + lVar21) = pauVar12;
        *(double *)(local_da8 + 0x18 + lVar21) = (double)local_e38._0_8_ / local_e90;
        local_da0 = uVar28 + 1;
        pauVar24 = local_e40;
      }
      goto LAB_0013dd80;
    }
    iVar7 = iVar7 + 1;
  } while (*(long *)(puVar19 + -0x18) == 0);
  goto LAB_0013dae0;
}




// ELF address 0x0000000000044880; <strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth

/* _<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth */

undefined8 __rustcall
_<strategy_comm5::StrategyComm5_as_future_backtest_sdk::plugin::StrategyPlugin>::on_depth
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
  
  if (*(long *)(param_1 + 0x5b0) != 0) {
    uVar11 = core::hash::BuildHasher::hash_one(param_1 + 0x5b8);
    puVar8 = PTR_bcmp_00203d28;
    lVar3 = *(long *)(param_1 + 0x598);
    uVar4 = *(ulong *)(param_1 + 0x5a0);
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
          uVar12 = core::hash::BuildHasher::hash_one(param_1 + 0x5b8,param_2 + 0x20);
          hashbrown::raw::RawTable<T,A>::remove_entry
                    (&lStack_60,param_1 + 0x598,uVar12,param_2 + 0x20);
          if (lStack_60 == 0) {
            return 0;
          }
          (*(code *)PTR___rust_dealloc_00203c78)(uStack_58,lStack_60,1);
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




// ELF address 0x0000000000044a60; <strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_finish

/* _<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_finish */

undefined8 __rustcall
_<strategy_comm5::StrategyComm5_as_future_backtest_sdk::plugin::StrategyPlugin>::on_finish
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
  
  lVar6 = (*(code *)PTR_para_00203df8)(param_2);
  uVar2 = *(undefined2 *)(lVar6 + 0x34);
  uVar7 = *(undefined8 *)(lVar6 + 0x28);
  local_48 = *(undefined4 *)(lVar6 + 0x18);
  uStack_44 = *(undefined4 *)(lVar6 + 0x1c);
  uStack_40 = *(undefined4 *)(lVar6 + 0x20);
  uStack_3c = *(undefined4 *)(lVar6 + 0x24);
  uVar3 = *(undefined4 *)(lVar6 + 0x30);
  uVar1 = *(undefined1 *)(lVar6 + 0x30);
  _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone
            (&local_80,lVar6,anon_8868ba55c3fc5525a110cabbb60004d5_152_llvm_6579149275953927878);
  local_68 = CONCAT44(uStack_44,local_48);
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_58 = uVar7;
  local_50 = uVar3;
  local_4c = uVar2;
                    /* try { // try from 00144ace to 00144ae6 has its CatchHandler @ 00144b63 */
  uVar5 = (*(code *)PTR_is_night_00203ed8)(param_2);
  uVar7 = (*(code *)PTR_all_in_00203e28)(param_2,uVar5,uVar1);
  puVar4 = PTR___rust_dealloc_00203c78;
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
    (*(code *)PTR___rust_dealloc_00203c78)(local_78,local_80 * 0x18,8);
  }
  return uVar7;
}




// ELF address 0x000000000003f310; <strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _<strategy_comm5::StrategyComm5 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal */

int ******* __rustcall
_<strategy_comm5::StrategyComm5_as_future_backtest_sdk::plugin::StrategyPlugin>::on_signal
          (int *******param_1,int ******param_2,undefined8 param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int *****pppppiVar3;
  int *****pppppiVar4;
  code *pcVar5;
  uint uVar6;
  int *******pppppppiVar7;
  int *******pppppppiVar8;
  int *******pppppppiVar9;
  int *******pppppppiVar10;
  char cVar11;
  char cVar12;
  undefined1 uVar13;
  byte bVar14;
  int iVar15;
  uint uVar16;
  long lVar17;
  int *******pppppppiVar18;
  ulong uVar19;
  double *pdVar20;
  byte *pbVar21;
  undefined *puVar22;
  long extraout_RDX;
  long extraout_RDX_00;
  byte bVar23;
  long lVar24;
  int *******pppppppiVar25;
  undefined *puVar26;
  undefined8 uVar27;
  undefined4 *puVar28;
  long lVar29;
  undefined8 *puVar30;
  bool bVar31;
  double extraout_XMM0_Qa;
  int *******extraout_XMM0_Qa_00;
  int ******extraout_XMM0_Qa_01;
  int ******extraout_XMM0_Qa_02;
  double dVar32;
  int ******ppppppiVar33;
  int ******ppppppiVar34;
  int ******extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  int ******extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  int ******extraout_XMM0_Qb_03;
  undefined8 extraout_XMM0_Qb_04;
  int ******extraout_XMM0_Qb_05;
  undefined8 extraout_XMM0_Qb_06;
  undefined8 extraout_XMM0_Qb_07;
  undefined8 extraout_XMM0_Qb_08;
  undefined8 extraout_XMM0_Qb_09;
  undefined8 extraout_XMM0_Qb_10;
  int ******ppppppiVar35;
  int ******extraout_XMM1_Qa;
  int ******extraout_XMM1_Qb;
  double dVar36;
  int ******ppppppiVar37;
  double dVar38;
  undefined1 auVar39 [12];
  char local_1091;
  undefined8 local_1090;
  int *******local_1088;
  int ******ppppppiStack_1080;
  undefined1 uStack_106a;
  char cStack_1069;
  int ******local_1068;
  undefined8 uStack_1060;
  int ******local_1050;
  undefined8 local_1048;
  undefined8 local_1040;
  int ******local_1038;
  int ******ppppppiStack_1030;
  int *******local_1028;
  undefined8 uStack_1020;
  int *******local_1018;
  undefined1 local_100e;
  undefined1 local_100d;
  undefined1 local_100c;
  undefined1 local_100b;
  byte local_100a;
  char local_1009;
  int *******local_1008;
  int *******pppppppiStack_1000;
  int *******local_ff8;
  int ******ppppppiStack_ff0;
  int ******ppppppiStack_fe0;
  int *******local_fd8;
  int ******ppppppiStack_fd0;
  int *******local_fc8;
  int *******pppppppiStack_fc0;
  int *******local_fb8;
  int ******local_fb0;
  int *******local_fa8;
  code *pcStack_fa0;
  int ******ppppppiStack_f98;
  code *pcStack_f90;
  int *******local_f88;
  int ******ppppppiStack_f80;
  double dStack_f70;
  int ******local_f68;
  int ******ppppppiStack_f60;
  int *******local_f58;
  int *******pppppppiStack_f50;
  int *******local_f48;
  int *******pppppppiStack_f40;
  int *******pppppppiStack_f38;
  int *******pppppppiStack_f30;
  int ******local_f28;
  int ******ppppppiStack_f20;
  int *******local_f18;
  int *******pppppppiStack_f10;
  int *******local_f08;
  int ******ppppppiStack_f00;
  int *******local_ef8;
  code *local_ef0;
  int ******ppppppiStack_ee8;
  code *pcStack_ee0;
  double *pdStack_ed8;
  undefined *puStack_ed0;
  char **ppcStack_ec8;
  code *pcStack_ec0;
  int *******pppppppiStack_eb8;
  code *pcStack_eb0;
  int *****pppppiStack_ea8;
  code *pcStack_ea0;
  int *******pppppppiStack_e98;
  code *pcStack_e90;
  int ******local_e10;
  int *******local_e08;
  int *******pppppppiStack_e00;
  int *******local_df8;
  int *****local_df0;
  undefined8 uStack_de8;
  undefined8 local_de0;
  int *******local_dd8;
  int ******ppppppiStack_dd0;
  int ******ppppppiStack_dc0;
  char *pcStack_db8;
  undefined8 uStack_db0;
  int *****local_da8;
  undefined8 uStack_da0;
  undefined8 local_d98;
  int ******local_d88;
  int ******ppppppiStack_d80;
  int *******local_d78;
  int *******local_d70;
  int *******local_d68;
  int *******pppppppiStack_d60;
  int *******local_d58;
  int ******ppppppiStack_d50;
  int ******local_d40;
  int ******local_d38;
  undefined4 local_d2c;
  int *******local_d28;
  int *******pppppppiStack_d20;
  int *******local_d18;
  int ******ppppppiStack_d10;
  int *******local_d08;
  undefined8 uStack_d00;
  double dStack_cf8;
  double dStack_cf0;
  undefined8 uStack_ce8;
  int ******ppppppiStack_cd0;
  int ******ppppppiStack_cc8;
  undefined1 local_cc0;
  char cStack_cbf;
  int ******local_cb8;
  int ******ppppppiStack_cb0;
  int ******local_ca8;
  int ******ppppppiStack_ca0;
  undefined4 local_c90;
  undefined4 uStack_c8c;
  undefined8 local_c88;
  int ******local_c78;
  undefined8 uStack_c70;
  int *******local_c68;
  undefined8 uStack_c60;
  int *******local_c58;
  undefined8 uStack_c50;
  int *******local_c48;
  undefined8 uStack_c40;
  int *******local_c38;
  int *******local_c30;
  int *******local_c28;
  int ******local_c20;
  long local_c18;
  int *******local_c10;
  long local_c08;
  long local_c00;
  undefined4 *local_bf8;
  long local_bf0;
  double local_be8;
  undefined8 uStack_be0;
  int ******local_bd8;
  undefined4 local_bd0;
  undefined2 local_bcc;
  int ******local_bc8;
  int ******ppppppiStack_bc0;
  int ******local_bb8;
  int ******ppppppiStack_bb0;
  int *******local_ba0;
  int *******local_b98;
  int *******local_b90;
  int ******local_b88;
  int ******local_b80;
  int ******local_b78;
  int ******local_b70;
  int ******local_b68;
  int ******local_b60;
  int ******local_b58;
  int ******local_b50;
  int ******local_b48;
  int ******local_b40;
  int ******local_b38;
  int ******local_b30;
  int ******local_b28;
  int ******local_b20;
  int ******local_b18;
  int ******local_b10;
  int ******local_b08;
  int ******local_b00;
  int ******local_af8;
  int ******local_af0;
  int ******local_ae8;
  int ******local_ae0;
  int ******local_ad8;
  int ******local_ad0;
  int ******local_ac8;
  int ******local_ac0;
  int ******local_ab8;
  int ******local_ab0;
  int ******local_aa8;
  int ******local_aa0;
  int ******local_a98;
  int ******local_a90;
  int ******local_a88;
  int ******local_a80;
  int ******local_a78;
  int ******local_a70;
  int ******local_a68;
  int ******local_a60;
  int ******local_a58;
  int ******local_a50;
  int ******local_a48;
  int ******local_a40;
  int ******local_a38;
  int ******local_a30;
  int ******local_a28;
  int ******local_a20;
  int ******local_a18;
  int ******local_a10;
  int ******local_a08;
  int ******local_a00;
  int ******local_9f8;
  int ******local_9f0;
  int ******local_9e8;
  int ******local_9e0;
  int ******local_9d8;
  int ******local_9d0;
  int ******local_9c8;
  int ******local_9c0;
  int ******local_9b8;
  int ******local_9b0;
  int ******local_9a8;
  int ******local_9a0;
  int ******local_998;
  int ******local_990;
  int ******local_988;
  int ******local_980;
  int ******local_978;
  int ******local_970;
  int ******local_968;
  int ******local_960;
  int ******local_958;
  int ******local_950;
  int ******local_948;
  int ******local_940;
  int ******local_938;
  int ******local_930;
  int ******local_928;
  int ******local_920;
  int ******local_918;
  int ******local_910;
  int ******local_908;
  int ******local_900;
  int local_8f8 [2];
  double dStack_8f0;
  byte local_8e8;
  double dStack_8e0;
  long local_8d8;
  undefined8 local_8d0;
  double local_8b8;
  int *******local_8b0;
  double dStack_8a8;
  double dStack_8a0;
  double dStack_898;
  double dStack_890;
  double dStack_888;
  int *******local_860;
  double dStack_858;
  double dStack_850;
  double dStack_848;
  double dStack_840;
  double dStack_838;
  int ******local_7f0;
  int *******local_7e8;
  int *******local_7e0;
  int *******local_7d8;
  int ******local_7d0;
  int ******local_7c8;
  int ******local_7c0;
  int ******local_7b8;
  int ******local_7b0;
  int ******local_7a8;
  int ******local_7a0;
  int ******local_798;
  int ******local_790;
  int ******local_788;
  int ******local_780;
  int ******local_778;
  int ******local_770;
  int ******local_768;
  int ******local_760;
  int ******local_758;
  int ******local_750;
  int ******local_748;
  int ******local_740;
  int ******local_738;
  int ******local_730;
  int ******local_728;
  int ******local_720;
  int ******local_718;
  int ******local_710;
  int ******local_708;
  int ******local_700;
  int ******local_6f8;
  int ******local_6f0;
  int ******local_6e8;
  int *******local_6e0;
  int *******local_6d8;
  int *******local_6d0;
  undefined1 local_6c8;
  undefined4 uStack_6c7;
  undefined3 uStack_6c3;
  int ******local_6c0;
  int ******local_6b8;
  int ******local_6b0;
  int ******local_6a8;
  int ******local_6a0;
  int ******local_698;
  int ******local_690;
  int ******local_688;
  int ******local_680;
  int ******local_678;
  int ******local_670;
  int ******local_668;
  int ******local_660;
  int ******local_658;
  int ******local_650;
  int ******local_648;
  int ******local_640;
  int ******local_638;
  int ******local_630;
  int ******local_628;
  int ******local_620;
  int ******local_618;
  int ******local_610;
  int ******local_608;
  int ******local_600;
  int ******local_5f8;
  int *******local_5f0;
  int *******local_5e8;
  int *******local_5e0;
  undefined1 local_5d8;
  undefined4 uStack_5d7;
  undefined3 uStack_5d3;
  int ******local_5d0;
  int ******local_5c8;
  int ******local_5c0;
  int ******local_5b8;
  int ******local_5b0;
  int ******local_5a8;
  int ******local_5a0;
  int ******local_598;
  int ******local_590;
  int ******local_588;
  int ******local_580;
  int ******local_578;
  int ******local_570;
  int ******local_568;
  int ******local_560;
  int ******local_558;
  int ******local_550;
  int ******local_548;
  int ******local_540;
  int ******local_538;
  int ******local_530;
  int ******local_528;
  int ******local_520;
  int ******local_518;
  int ******local_510;
  int ******local_508;
  int *******local_500;
  int *******local_4f8;
  int *******local_4f0;
  undefined1 local_4e8;
  undefined4 uStack_4e7;
  undefined3 uStack_4e3;
  int *****local_4e0;
  undefined8 uStack_4d8;
  undefined8 local_4d0;
  int *******local_4c8;
  int *******pppppppiStack_4c0;
  int *******local_4b8;
  int *******local_4b0;
  int *******local_4a8;
  int *******local_4a0;
  int *******local_498;
  int *******pppppppiStack_490;
  int *******local_488;
  int *******local_480;
  int *******pppppppiStack_478;
  int *******local_470;
  int *******local_468;
  int *******pppppppiStack_460;
  int *******local_458;
  double dStack_448;
  int *******local_438;
  int *******pppppppiStack_430;
  int *******local_428;
  int ******local_420;
  int ******ppppppiStack_418;
  int *******local_410;
  int ******ppppppiStack_408;
  int ******local_400;
  int ******ppppppiStack_3f8;
  int *******local_3f0;
  int ******ppppppiStack_3e8;
  int *******local_3e0;
  int ******ppppppiStack_3d8;
  int *******local_3d0;
  int ******ppppppiStack_3c8;
  int ******local_3c0;
  int ******ppppppiStack_3b8;
  int ******local_3b0;
  int ******ppppppiStack_3a8;
  int ******local_3a0;
  int ******ppppppiStack_398;
  int ******local_390;
  int ******ppppppiStack_388;
  int ******local_380;
  int ******ppppppiStack_378;
  int ******local_370;
  int ******ppppppiStack_368;
  int ******local_360;
  int ******ppppppiStack_358;
  int ******local_350;
  int ******ppppppiStack_348;
  int ******local_340;
  int ******local_338;
  int ******ppppppiStack_330;
  int ******local_328;
  int ******local_320;
  int ******local_318;
  int ******ppppppiStack_310;
  int ******local_308;
  int ******ppppppiStack_300;
  int ******local_2f8;
  int ******local_2f0;
  int ******ppppppiStack_2e8;
  int ******local_2e0;
  int ******ppppppiStack_2d8;
  int ******local_2d0;
  int ******ppppppiStack_2c8;
  int ******local_2c0;
  int ******ppppppiStack_2b8;
  int ******local_2b0;
  int ******ppppppiStack_2a8;
  int ******local_2a0;
  int ******ppppppiStack_298;
  undefined1 local_290;
  char local_28f;
  char local_28e;
  byte local_28d;
  undefined1 local_28c;
  byte local_28b;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  int ******ppppppiStack_270;
  int ******ppppppiStack_268;
  int *******pppppppiStack_260;
  int *******pppppppiStack_258;
  int ******ppppppiStack_250;
  int *******pppppppiStack_248;
  undefined1 uStack_240;
  char cStack_23f;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  int ******ppppppiStack_220;
  int ******ppppppiStack_218;
  int *******pppppppiStack_210;
  int *******pppppppiStack_208;
  int ******ppppppiStack_200;
  int *******pppppppiStack_1f8;
  undefined1 uStack_1f0;
  byte bStack_1ef;
  int ******local_1e8;
  int ******ppppppiStack_1e0;
  int ******local_1d8;
  int ******ppppppiStack_1d0;
  int ******local_1c8;
  int ******ppppppiStack_1c0;
  int ******local_1b8;
  int ******ppppppiStack_1b0;
  int ******local_1a8;
  int ******ppppppiStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  int ******ppppppiStack_180;
  int ******ppppppiStack_178;
  int *******pppppppiStack_170;
  int *******pppppppiStack_168;
  int ******ppppppiStack_160;
  int *******pppppppiStack_158;
  undefined2 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  int ******ppppppiStack_130;
  int ******ppppppiStack_128;
  int *******pppppppiStack_120;
  int *******pppppppiStack_118;
  int *******pppppppiStack_110;
  int *******pppppppiStack_108;
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
  int *******local_98;
  int *******pppppppiStack_90;
  int *******local_88;
  int *******local_80;
  int *******pppppppiStack_78;
  int *******local_70;
  int ******ppppppiStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  ppppppiStack_1030 = (int ******)0x0;
  local_1090 = param_3;
  local_1068 = param_2;
  lVar17 = (*(code *)PTR_para_00203df8)(param_3);
  uVar1 = *(undefined2 *)(lVar17 + 0x34);
  local_1088 = *(int ********)(lVar17 + 0x28);
  local_1028 = *(int ********)(lVar17 + 0x18);
  uStack_1020 = *(undefined8 *)(lVar17 + 0x20);
  uVar2 = *(undefined4 *)(lVar17 + 0x30);
  _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone
            (&local_c00,lVar17,anon_8868ba55c3fc5525a110cabbb60004d5_152_llvm_6579149275953927878);
  local_be8 = (double)local_1028;
  uStack_be0 = uStack_1020;
  local_bd8 = (int ******)local_1088;
  local_bd0 = uVar2;
  local_bcc = uVar1;
  if (*(int *)param_1 == 2) {
                    /* try { // try from 00140afe to 00140b16 has its CatchHandler @ 00144804 */
    (*(code *)PTR_expect_failed_00203e38)
              ("on_begin must be called first",0x1d,&PTR_s_strategies_comm_strategy_strateg_001fddb8
              );
    goto LAB_00140b17;
  }
                    /* try { // try from 0013f3ba to 0013f3ce has its CatchHandler @ 00144804 */
  (*(code *)PTR_clone_00203db8)
            (&local_df0,param_1 + 0x62,&PTR_s_strategies_comm_strategy_strateg_001fe038);
  local_1088 = (int *******)param_1[0x7a];
  ppppppiStack_1080 = param_1[0x7b];
                    /* try { // try from 0013f3e2 to 0013f3f6 has its CatchHandler @ 001447ff */
  (*(code *)PTR_clone_00203db8)
            (&local_d68,param_1 + 0x65,&PTR_s_strategies_comm_strategy_strateg_001fe038);
  pppppppiVar25 = (int *******)param_1[0x6a];
  uVar19 = (long)pppppppiVar25 * 8;
  if (uVar19 < 0x7ffffffffffffff9 && (ulong)pppppppiVar25 >> 0x3d == 0) {
    local_ff8 = (int *******)param_1[0x7c];
    ppppppiStack_ff0 = param_1[0x7d];
    ppppppiVar34 = param_1[0x69];
    if (uVar19 == 0) {
      local_1008 = (int *******)&DAT_00000008;
      local_1028 = (int *******)0x0;
      pppppppiVar18 = local_1028;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00203c98)();
      uVar27 = 8;
      local_1008 = (int *******)(*(code *)PTR___rust_alloc_00203c70)(uVar19,8);
      pppppppiVar18 = pppppppiVar25;
      if (local_1008 == (int *******)0x0) goto LAB_0013f42b;
    }
    local_1028 = pppppppiVar18;
    (*(code *)PTR_memcpy_00203cc8)(local_1008,ppppppiVar34,uVar19);
    local_1038 = param_1[0x7e];
    ppppppiStack_1030 = param_1[0x7f];
    uVar13 = *(undefined1 *)(param_1 + 0xac);
    local_fd8 = (int *******)param_1[0x80];
    ppppppiStack_fd0 = param_1[0x81];
    local_f88 = (int *******)param_1[0x82];
    ppppppiStack_f80 = param_1[0x83];
    local_dd8 = (int *******)param_1[0x84];
    ppppppiStack_dd0 = param_1[0x85];
    cVar12 = *(char *)((long)param_1 + 0x561);
    local_f28 = param_1[0x86];
    ppppppiStack_f20 = param_1[0x87];
    local_f68 = param_1[0x88];
    ppppppiStack_f60 = param_1[0x89];
    local_ca8 = param_1[0x8a];
    ppppppiStack_ca0 = param_1[0x8b];
    local_d88 = param_1[0x8c];
    ppppppiStack_d80 = param_1[0x8d];
    local_bc8 = param_1[0x8e];
    ppppppiStack_bc0 = param_1[0x8f];
    ppppppiVar34 = *param_1;
    local_c48 = (int *******)param_1[1];
    local_c58 = (int *******)param_1[2];
    local_c68 = (int *******)param_1[3];
    local_c78 = param_1[4];
    local_cb8 = param_1[5];
    local_d38 = param_1[6];
    local_d40 = param_1[7];
    local_bb8 = param_1[0x90];
    ppppppiStack_bb0 = param_1[0x91];
    local_1a8 = param_1[0x92];
    ppppppiStack_1a0 = param_1[0x93];
    local_1009 = *(char *)((long)param_1 + 0x562);
    local_1b8 = param_1[0x94];
    ppppppiStack_1b0 = param_1[0x95];
    local_900 = param_1[0x96];
                    /* try { // try from 0013f5f5 to 0013f609 has its CatchHandler @ 001447d0 */
    (*(code *)PTR_clone_00203db8)
              (&local_f58,param_1 + 0x6b,&PTR_s_strategies_comm_strategy_strateg_001fe038);
    local_1c8 = param_1[0x97];
    ppppppiStack_1c0 = param_1[0x98];
    local_908 = param_1[0x99];
    local_910 = param_1[0x9a];
    local_100a = *(byte *)((long)param_1 + 0x563);
    local_100b = *(undefined1 *)((long)param_1 + 0x564);
                    /* try { // try from 0013f65c to 0013f670 has its CatchHandler @ 001447ab */
    (*(code *)PTR_clone_00203db8)
              (&local_fc8,param_1 + 0x6e,&PTR_s_strategies_comm_strategy_strateg_001fe038);
                    /* try { // try from 0013f678 to 0013f68c has its CatchHandler @ 00144786 */
    (*(code *)PTR_clone_00203db8)
              (&local_d28,param_1 + 0x71,&PTR_s_strategies_comm_strategy_strateg_001fe038);
    local_1d8 = param_1[0x9b];
    ppppppiStack_1d0 = param_1[0x9c];
    local_1e8 = param_1[0x9d];
    ppppppiStack_1e0 = param_1[0x9e];
    local_918 = param_1[0x9f];
    local_920 = param_1[8];
    local_928 = param_1[9];
    local_930 = param_1[10];
    local_938 = param_1[0xb];
    local_940 = param_1[0xc];
    local_948 = param_1[0xd];
    local_950 = param_1[0xe];
    local_958 = param_1[0xf];
    local_960 = param_1[0x10];
    local_968 = param_1[0x11];
    local_970 = param_1[0x12];
    local_978 = param_1[0x13];
    local_980 = param_1[0x14];
    local_988 = param_1[0x15];
    local_990 = param_1[0x16];
    local_998 = param_1[0x17];
    local_100c = *(undefined1 *)(param_1 + 0x25);
    local_9a0 = param_1[0x18];
    local_9a8 = param_1[0x19];
    local_9b0 = param_1[0x1a];
    local_9b8 = param_1[0x1b];
    local_9c0 = param_1[0x1c];
    local_9c8 = param_1[0x1d];
    local_9d0 = param_1[0x1e];
    local_9d8 = param_1[0x1f];
    local_9e0 = param_1[0x20];
    local_9e8 = param_1[0x21];
    if (param_1[0x22] == (int ******)0x8000000000000000) {
      local_1018 = (int *******)0x8000000000000000;
    }
    else {
                    /* try { // try from 0013f865 to 0013f880 has its CatchHandler @ 001446a4 */
      (*(code *)PTR_clone_00203db8)
                (&local_f18,param_1 + 0x22,
                 &PTR_anon_50e25bb1355b8971fc58210c29d1b4b6_0_llvm_1301231569978033549_001fe140);
      local_1018 = local_f18;
      local_c28 = pppppppiStack_f10;
      local_b90 = local_f08;
    }
    local_9f0 = param_1[0x26];
    local_9f8 = param_1[0x27];
    local_a00 = param_1[0x28];
    local_a08 = param_1[0x29];
    local_a10 = param_1[0x2a];
    local_a18 = param_1[0x2b];
    local_a20 = param_1[0x2c];
    local_a28 = param_1[0x2d];
    local_a30 = param_1[0x2e];
    local_a38 = param_1[0x2f];
    local_a40 = param_1[0x30];
    local_a48 = param_1[0x31];
    local_a50 = param_1[0x32];
    local_a58 = param_1[0x33];
    local_a60 = param_1[0x34];
    local_a68 = param_1[0x35];
    local_100d = *(undefined1 *)(param_1 + 0x43);
    local_a70 = param_1[0x36];
    local_a78 = param_1[0x37];
    local_a80 = param_1[0x38];
    local_a88 = param_1[0x39];
    local_a90 = param_1[0x3a];
    local_a98 = param_1[0x3b];
    local_aa0 = param_1[0x3c];
    local_aa8 = param_1[0x3d];
    local_ab0 = param_1[0x3e];
    local_ab8 = param_1[0x3f];
    if (param_1[0x40] == (int ******)0x8000000000000000) {
      local_d70 = (int *******)0x8000000000000000;
    }
    else {
                    /* try { // try from 0013fa72 to 0013fa8d has its CatchHandler @ 0014469c */
      (*(code *)PTR_clone_00203db8)
                (&local_f18,param_1 + 0x40,
                 &PTR_anon_50e25bb1355b8971fc58210c29d1b4b6_0_llvm_1301231569978033549_001fe140);
      local_d70 = local_f18;
      local_c30 = pppppppiStack_f10;
      local_b98 = local_f08;
    }
    local_ac0 = param_1[0x44];
    local_ac8 = param_1[0x45];
    local_ad0 = param_1[0x46];
    local_ad8 = param_1[0x47];
    local_ae0 = param_1[0x48];
    local_ae8 = param_1[0x49];
    local_af0 = param_1[0x4a];
    local_af8 = param_1[0x4b];
    local_b00 = param_1[0x4c];
    local_b08 = param_1[0x4d];
    local_b10 = param_1[0x4e];
    local_b18 = param_1[0x4f];
    local_b20 = param_1[0x50];
    local_b28 = param_1[0x51];
    local_b30 = param_1[0x52];
    local_b38 = param_1[0x53];
    local_100e = *(undefined1 *)(param_1 + 0x61);
    local_b40 = param_1[0x54];
    local_b48 = param_1[0x55];
    local_b50 = param_1[0x56];
    local_b58 = param_1[0x57];
    local_b60 = param_1[0x58];
    local_b68 = param_1[0x59];
    local_b70 = param_1[0x5a];
    local_b78 = param_1[0x5b];
    local_b80 = param_1[0x5c];
    local_b88 = param_1[0x5d];
    if (param_1[0x5e] == (int ******)0x8000000000000000) {
      local_d78 = (int *******)0x8000000000000000;
    }
    else {
                    /* try { // try from 0013fc7f to 0013fc9a has its CatchHandler @ 00144697 */
      (*(code *)PTR_clone_00203db8)
                (&local_f18,param_1 + 0x5e,
                 &PTR_anon_50e25bb1355b8971fc58210c29d1b4b6_0_llvm_1301231569978033549_001fe140);
      local_d78 = local_f18;
      local_c38 = pppppppiStack_f10;
      local_ba0 = local_f08;
    }
    bVar14 = *(byte *)((long)param_1 + 0x565);
                    /* try { // try from 0013fcd9 to 0013fced has its CatchHandler @ 001446d1 */
    (*(code *)PTR_clone_00203db8)
              (local_8f8,param_1 + 0x74,&PTR_s_strategies_comm_strategy_strateg_001fe038);
                    /* try { // try from 0013fcf5 to 0013fd09 has its CatchHandler @ 001446ac */
    (*(code *)PTR_clone_00203db8)
              (&local_f18,param_1 + 0x77,&PTR_s_strategies_comm_strategy_strateg_001fe038);
    puVar28 = local_bf8;
    ppppppiVar37 = local_1068;
    puVar26 = PTR_bcmp_00203d28;
    local_4e0 = local_df0;
    uStack_4d8 = uStack_de8;
    local_4d0 = local_de0;
    local_420 = (int ******)local_1088;
    ppppppiStack_418 = ppppppiStack_1080;
    local_4c8 = local_d68;
    pppppppiStack_4c0 = pppppppiStack_d60;
    local_4b8 = local_d58;
    local_410 = local_ff8;
    ppppppiStack_408 = ppppppiStack_ff0;
    local_4b0 = local_1028;
    local_4a8 = local_1008;
    local_400 = local_1038;
    ppppppiStack_3f8 = ppppppiStack_1030;
    local_3f0 = local_fd8;
    ppppppiStack_3e8 = ppppppiStack_fd0;
    local_3e0 = local_f88;
    ppppppiStack_3d8 = ppppppiStack_f80;
    local_3d0 = local_dd8;
    ppppppiStack_3c8 = ppppppiStack_dd0;
    local_3c0 = local_f28;
    ppppppiStack_3b8 = ppppppiStack_f20;
    local_3b0 = local_f68;
    ppppppiStack_3a8 = ppppppiStack_f60;
    local_3a0 = local_ca8;
    ppppppiStack_398 = ppppppiStack_ca0;
    local_390 = local_d88;
    ppppppiStack_388 = ppppppiStack_d80;
    local_380 = local_bc8;
    ppppppiStack_378 = ppppppiStack_bc0;
    local_7e8 = local_c48;
    local_7e0 = local_c58;
    local_7d8 = local_c68;
    local_7d0 = local_c78;
    local_7c8 = local_cb8;
    local_7c0 = local_d38;
    local_7b8 = local_d40;
    local_370 = local_bb8;
    ppppppiStack_368 = ppppppiStack_bb0;
    local_360 = local_1a8;
    ppppppiStack_358 = ppppppiStack_1a0;
    local_28e = local_1009;
    local_350 = local_1b8;
    ppppppiStack_348 = ppppppiStack_1b0;
    local_340 = local_900;
    local_498 = local_f58;
    pppppppiStack_490 = pppppppiStack_f50;
    local_488 = local_f48;
    local_338 = local_1c8;
    ppppppiStack_330 = ppppppiStack_1c0;
    local_328 = local_908;
    local_320 = local_910;
    local_28d = local_100a;
    local_28c = local_100b;
    local_480 = local_fc8;
    pppppppiStack_478 = pppppppiStack_fc0;
    local_470 = local_fb8;
    local_468 = local_d28;
    pppppppiStack_460 = pppppppiStack_d20;
    local_458 = local_d18;
    local_318 = local_1d8;
    ppppppiStack_310 = ppppppiStack_1d0;
    local_308 = local_1e8;
    ppppppiStack_300 = ppppppiStack_1e0;
    local_2f8 = local_918;
    local_7b0 = local_920;
    local_7a8 = local_928;
    local_7a0 = local_930;
    local_798 = local_938;
    local_790 = local_940;
    local_788 = local_948;
    local_780 = local_950;
    local_778 = local_958;
    local_770 = local_960;
    local_768 = local_968;
    local_760 = local_970;
    local_758 = local_978;
    local_750 = local_980;
    local_748 = local_988;
    local_740 = local_990;
    local_738 = local_998;
    local_730 = local_9a0;
    local_728 = local_9a8;
    local_720 = local_9b0;
    local_718 = local_9b8;
    local_710 = local_9c0;
    local_708 = local_9c8;
    local_700 = local_9d0;
    local_6f8 = local_9d8;
    local_6f0 = local_9e0;
    local_6e8 = local_9e8;
    local_6e0 = local_1018;
    local_6d8 = local_c28;
    local_6d0 = local_b90;
    local_6c8 = local_100c;
    uStack_6c3 = (undefined3)uStack_c8c;
    uStack_6c7 = local_c90;
    local_6c0 = local_9f0;
    local_6b8 = local_9f8;
    local_6b0 = local_a00;
    local_6a8 = local_a08;
    local_6a0 = local_a10;
    local_698 = local_a18;
    local_690 = local_a20;
    local_688 = local_a28;
    local_680 = local_a30;
    local_678 = local_a38;
    local_670 = local_a40;
    local_668 = local_a48;
    local_660 = local_a50;
    local_658 = local_a58;
    local_650 = local_a60;
    local_648 = local_a68;
    local_640 = local_a70;
    local_638 = local_a78;
    local_630 = local_a80;
    local_628 = local_a88;
    local_620 = local_a90;
    local_618 = local_a98;
    local_610 = local_aa0;
    local_608 = local_aa8;
    local_600 = local_ab0;
    local_5f8 = local_ab8;
    local_5f0 = local_d70;
    local_5e8 = local_c30;
    local_5e0 = local_b98;
    local_5d8 = local_100d;
    uStack_5d3 = (undefined3)((ulong)local_da8 >> 0x20);
    uStack_5d7 = local_da8._0_4_;
    local_5d0 = local_ac0;
    local_5c8 = local_ac8;
    local_5c0 = local_ad0;
    local_5b8 = local_ad8;
    local_5b0 = local_ae0;
    local_5a8 = local_ae8;
    local_5a0 = local_af0;
    local_598 = local_af8;
    local_590 = local_b00;
    local_588 = local_b08;
    local_580 = local_b10;
    local_578 = local_b18;
    local_570 = local_b20;
    local_568 = local_b28;
    local_560 = local_b30;
    local_558 = local_b38;
    local_550 = local_b40;
    local_548 = local_b48;
    local_540 = local_b50;
    local_538 = local_b58;
    local_530 = local_b60;
    local_528 = local_b68;
    local_520 = local_b70;
    local_518 = local_b78;
    local_510 = local_b80;
    local_508 = local_b88;
    local_500 = local_d78;
    local_4f8 = local_c38;
    local_4f0 = local_ba0;
    local_4e8 = local_100e;
    uStack_4e3 = (undefined3)((ulong)local_e08 >> 0x20);
    uStack_4e7 = local_e08._0_4_;
    dStack_448 = dStack_8f0;
    local_438 = local_f18;
    pppppppiStack_430 = pppppppiStack_f10;
    local_428 = local_f08;
    local_2f0 = param_1[0xa0];
    ppppppiStack_2e8 = param_1[0xa1];
    local_2e0 = param_1[0xa2];
    ppppppiStack_2d8 = param_1[0xa3];
    local_2d0 = param_1[0xa4];
    ppppppiStack_2c8 = param_1[0xa5];
    local_2c0 = param_1[0xa6];
    ppppppiStack_2b8 = param_1[0xa7];
    local_2b0 = param_1[0xa8];
    ppppppiStack_2a8 = param_1[0xa9];
    local_2a0 = param_1[0xaa];
    ppppppiStack_298 = param_1[0xab];
    local_7f0 = ppppppiVar34;
    local_4a0 = pppppppiVar25;
    local_290 = uVar13;
    local_28f = cVar12;
    local_28b = bVar14;
    if (local_bf0 != 0) {
      local_ff8 = (int *******)(local_1068 + 9);
      local_1088 = (int *******)local_1068[10];
      pppppiVar3 = local_1068[0xb];
      lVar17 = local_bf0 * 0x18;
      lVar24 = 0;
      local_1018 = param_1;
      do {
        if ((*(int ******)((long)puVar28 + lVar24 + 0x10) == pppppiVar3) &&
           (iVar15 = (*(code *)puVar26)(*(undefined8 *)((long)puVar28 + lVar24 + 8),local_1088,
                                        pppppiVar3), iVar15 == 0)) {
                    /* try { // try from 00140748 to 0014075a has its CatchHandler @ 00144672 */
          (*(code *)PTR_trade_codes_00203d88)(&local_c18,local_1090);
          lVar17 = local_c08;
          local_1028 = local_c10;
          if (local_c08 == 0) {
            pppppppiVar18 = (int *******)0x0;
            goto LAB_00140981;
          }
          local_1008 = (int *******)ppppppiVar37[1];
          pppppiVar4 = ppppppiVar37[2];
          lVar24 = local_c08 * 0x18;
          lVar29 = 0;
          goto LAB_001407ad;
        }
        lVar24 = lVar24 + 0x18;
      } while (lVar17 != lVar24);
    }
    pppppppiVar18 = (int *******)0x0;
LAB_001408b1:
    core::ptr::drop_in_place<strategy_comm5::Comm5Params>(&local_7f0);
    puVar26 = PTR___rust_dealloc_00203c78;
    if (local_bf0 != 0) {
      puVar30 = (undefined8 *)(local_bf8 + 2);
      lVar17 = local_bf0;
      do {
        if (puVar30[-1] != 0) {
          (*(code *)puVar26)(*puVar30,puVar30[-1],1);
        }
        puVar30 = puVar30 + 3;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
    }
    if (local_c00 != 0) {
      (*(code *)PTR___rust_dealloc_00203c78)(local_bf8,local_c00 * 0x18,8);
    }
    return pppppppiVar18;
  }
  uVar27 = 0;
LAB_0013f42b:
                    /* try { // try from 0013f42b to 0013f43d has its CatchHandler @ 0014481c */
  (*(code *)PTR_handle_error_00203cd8)
            (uVar27,uVar19,anon_cc43c968d9f5ea60f379101257a7fe81_20_llvm_6761866898376787025);
LAB_00140b17:
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
  while (lVar29 = lVar29 + 0x18, lVar24 != lVar29) {
LAB_001407ad:
    if ((*(int ******)((long)local_1028 + lVar29 + 0x10) == pppppiVar4) &&
       (iVar15 = (*(code *)puVar26)(*(undefined8 *)((long)local_1028 + lVar29 + 8),local_1008,
                                    pppppiVar4), ppppppiVar34 = local_1068, iVar15 == 0)) {
      cVar12 = *(char *)((long)local_1068 + 0x94);
      local_1008 = (int *******)CONCAT71(local_1008._1_7_,(undefined1)local_bd0);
                    /* try { // try from 001407f7 to 0014085f has its CatchHandler @ 00144660 */
      (*(code *)PTR_inst_start_time_sec_00203e00)(local_1090);
      pppppppiVar25 = local_1018;
      cVar11 = (*(code *)PTR_is_trade_start_00203e08)(local_1090,cVar12);
      if (cVar11 != '\0') {
        cVar11 = (*(code *)PTR_is_trade_end_00203e10)(local_1090,cVar12);
        if (cVar11 != '\0') {
          if (cVar12 == '\0') {
            if ((char)local_bcc != '\0') goto LAB_00140a53;
          }
          else if (local_bd0._3_1_ == '\x01') {
LAB_00140a53:
                    /* try { // try from 00140a53 to 00140a67 has its CatchHandler @ 00144660 */
            pppppppiVar18 =
                 (int *******)
                 (*(code *)PTR_all_in_00203e28)(local_1090,cVar12,(ulong)local_1008 & 0xff);
            goto LAB_00140939;
          }
        }
        (*(code *)PTR_clone_00203db8)
                  (&local_1050,ppppppiVar34,&PTR_s_strategies_comm_strategy_strateg_001fddd0);
                    /* try { // try from 00140860 to 0014087c has its CatchHandler @ 001445b9 */
        (*(code *)PTR_clone_00203db8)
                  (&local_c90,local_ff8,&PTR_s_strategies_comm_strategy_strateg_001fdde8);
                    /* try { // try from 00140887 to 00140899 has its CatchHandler @ 001445b4 */
        (*(code *)PTR_depth_00203e18)(&local_f18,local_1090,local_1048);
        if ((int)local_f18 == 2) {
          pppppppiVar18 = (int *******)0x0;
        }
        else {
          (*(code *)PTR_memcpy_00203cc8)(local_8f8,&local_f18,0x108);
          pppppppiVar18 = (int *******)0x0;
          local_1028 = local_8b0;
          if ((0.0 < (double)local_8b0) && (local_ff8 = local_860, 0.0 < (double)local_860)) {
                    /* try { // try from 00140a0e to 00140a21 has its CatchHandler @ 001445af */
            local_1008 = (int *******)(*(code *)PTR_time_sec_00203e20)(local_1090);
            if ((double)DAT_00116368 < (double)local_1008 - local_8b8) {
              pppppppiVar18 = (int *******)0x0;
              goto LAB_00141c3d;
            }
                    /* try { // try from 00140a70 to 00140acf has its CatchHandler @ 001445af */
            auVar39 = (*(code *)PTR_signal_parameter_id_00203e30)(local_1088,pppppiVar3);
            local_d2c = 0;
            if ((auVar39 & (undefined1  [12])0x1) != (undefined1  [12])0x0) {
              local_d2c = auVar39._8_4_;
            }
            if (local_28e == '\x01') {
              (*(code *)PTR_clone_00203db8)
                        (&local_fc8,&local_1050,&PTR_s_strategies_comm_strategy_strateg_001fde00);
              hashbrown::rustc_entry::_<impl_hashbrown::map::HashMap<K,V,S,A>>::rustc_entry
                        (&local_f18,pppppppiVar25 + 0xb9,&local_fc8);
              if (local_f18 == (int *******)0x8000000000000000) {
                local_d28 = (int *******)0x8000000000000000;
              }
              else {
                local_d08 = local_ef8;
                ppppppiStack_d10 = ppppppiStack_f00;
                local_d28 = local_f18;
              }
              local_d18 = local_f08;
              pppppppiStack_d20 = pppppppiStack_f10;
              uVar27 = std::collections::hash::map::Entry<K,V>::or_insert_with
                                 (local_350,ppppppiStack_348,&local_d28);
                    /* try { // try from 00140b7b to 00140c4b has its CatchHandler @ 001445af */
              uVar19 = strategy_comm5::vol_spread_ratio::VolSpreadRatio::update
                                 ((double)local_1008 * _DAT_00116470,local_ff8,local_1028,uVar27);
              puVar26 = PTR_K1_MAP_G1_LOW_00203e40;
              if (((uVar19 & 1) == 0) || ((double)local_340 < extraout_XMM0_Qa)) goto LAB_00140bd4;
              cVar12 = '\x01';
              if (*(long *)(PTR_K1_MAP_G1_LOW_00203e40 + 0x30) != 2) {
                once_cell::imp::OnceCell<T>::initialize
                          (PTR_K1_MAP_G1_LOW_00203e40,PTR_K1_MAP_G1_LOW_00203e40);
                ppppppiVar34 = local_1068;
              }
            }
            else {
LAB_00140bd4:
              puVar26 = PTR_K1_MAP_G2_HIGH_00203e48;
              if (*(long *)(PTR_K1_MAP_G2_HIGH_00203e48 + 0x30) != 2) {
                    /* try { // try from 00144471 to 00144483 has its CatchHandler @ 001445af */
                once_cell::imp::OnceCell<T>::initialize
                          (PTR_K1_MAP_G2_HIGH_00203e48,PTR_K1_MAP_G2_HIGH_00203e48);
                ppppppiVar34 = local_1068;
              }
              cVar12 = '\0';
            }
            lVar17 = hashbrown::map::HashMap<K,V,S,A>::get_inner(puVar26,&local_d2c);
            pdVar20 = (double *)&DAT_00116368;
            if (lVar17 != 0) {
              pdVar20 = (double *)(lVar17 + 8);
            }
            local_e10 = (int ******)*pdVar20;
            local_1091 = cVar12;
            if (local_28d == 0) {
              local_1088 = (int *******)0x0;
              local_fd8 = (int *******)0x0;
              uVar16 = 0;
            }
            else {
              uVar27 = core::str::_<impl_str>::trim_end_matches(local_1048,local_1040);
              _<T_as_alloc::slice::<impl[T]>::to_vec_in::ConvertVec>::to_vec(&local_f18,uVar27);
              local_fb8 = local_f08;
              local_fc8 = local_f18;
              pppppppiStack_fc0 = pppppppiStack_f10;
              local_dd8 = pppppppiVar25 + 0xbf;
                    /* try { // try from 00140c75 to 00140d3a has its CatchHandler @ 00144595 */
              lVar17 = hashbrown::map::HashMap<K,V,S,A>::get_inner(local_dd8,&local_fc8);
              pppppppiVar9 = pppppppiStack_460;
              pppppppiVar18 = local_470;
              pppppppiVar25 = pppppppiStack_478;
              pbVar21 = &DAT_001173a1;
              if (lVar17 != 0) {
                pbVar21 = (byte *)(lVar17 + 0x18);
              }
              local_1038 = (int ******)CONCAT44(local_1038._4_4_,(uint)*pbVar21);
              local_1088 = local_458;
              pppppppiStack_f50 = (int *******)_<alloc::string::String_as_core::fmt::Display>::fmt;
              local_f18 = (int *******)&PTR_s_pnl__001fde18;
              pppppppiStack_f10 = (int *******)0x1;
              local_ef8 = (int *******)0x0;
              ppppppiStack_f00 = (int ******)0x1;
              local_f58 = (int *******)&local_fc8;
              local_f08 = (int *******)&local_f58;
              (*(code *)PTR_format_inner_00203d18)(&local_d28,&local_f18);
              pppppppiVar8 = pppppppiStack_d20;
              pppppppiVar7 = local_d28;
                    /* try { // try from 00140d53 to 00140d80 has its CatchHandler @ 00144555 */
              local_1088 = (int *******)
                           (*(code *)PTR_get_published_00203e50)
                                     (local_1090,pppppppiVar25,pppppppiVar18,pppppppiVar9,local_1088
                                      ,pppppppiStack_d20,local_d18);
              local_f88 = extraout_XMM0_Qa_00;
              if (pppppppiVar7 != (int *******)0x0) {
                (*(code *)PTR___rust_dealloc_00203c78)(pppppppiVar8,pppppppiVar7,1);
              }
              pppppppiVar8 = pppppppiStack_460;
              pppppppiVar7 = local_470;
              pppppppiVar9 = pppppppiStack_478;
              local_fd8 = local_458;
              local_f58 = (int *******)&local_fc8;
              pppppppiStack_f50 = (int *******)_<alloc::string::String_as_core::fmt::Display>::fmt;
              local_f18 = (int *******)&PTR_s_amt__001fde28;
              pppppppiStack_f10 = (int *******)0x1;
              local_ef8 = (int *******)0x0;
              ppppppiStack_f00 = (int ******)0x1;
                    /* try { // try from 00140e19 to 00140e2e has its CatchHandler @ 00144595 */
              local_f08 = (int *******)&local_f58;
              (*(code *)PTR_format_inner_00203d18)(&local_d28,&local_f18);
              pppppppiVar18 = pppppppiStack_d20;
              pppppppiVar25 = local_d28;
                    /* try { // try from 00140e47 to 00140e72 has its CatchHandler @ 0014453a */
              local_fd8 = (int *******)
                          (*(code *)PTR_get_published_00203e50)
                                    (local_1090,pppppppiVar9,pppppppiVar7,pppppppiVar8,local_fd8,
                                     pppppppiStack_d20,local_d18);
              local_f28 = extraout_XMM0_Qa_01;
              if (pppppppiVar25 != (int *******)0x0) {
                (*(code *)PTR___rust_dealloc_00203c78)(pppppppiVar18,pppppppiVar25,1);
              }
              pppppppiVar10 = local_458;
              pppppppiVar8 = pppppppiStack_460;
              pppppppiVar7 = local_470;
              pppppppiVar9 = pppppppiStack_478;
              local_f58 = (int *******)&local_fc8;
              pppppppiStack_f50 = (int *******)_<alloc::string::String_as_core::fmt::Display>::fmt;
              local_f18 = (int *******)&PTR_DAT_001fde38;
              pppppppiStack_f10 = (int *******)0x1;
              local_ef8 = (int *******)0x0;
              ppppppiStack_f00 = (int ******)0x1;
                    /* try { // try from 00140f0b to 00140f20 has its CatchHandler @ 00144595 */
              local_f08 = (int *******)&local_f58;
              (*(code *)PTR_format_inner_00203d18)(&local_d28,&local_f18);
              pppppppiVar18 = pppppppiStack_d20;
              pppppppiVar25 = local_d28;
                    /* try { // try from 00140f39 to 00140f56 has its CatchHandler @ 001444c7 */
              uVar19 = (*(code *)PTR_get_published_00203e50)
                                 (local_1090,pppppppiVar9,pppppppiVar7,pppppppiVar8,pppppppiVar10,
                                  pppppppiStack_d20,local_d18);
              ppppppiVar37 = local_1038;
              ppppppiVar34 = local_1068;
              uVar6 = (uint)local_1038;
              ppppppiVar35 = extraout_XMM0_Qa_02;
              if ((uVar19 & 1) == 0) {
                ppppppiVar35 = (int ******)0x0;
              }
              if (pppppppiVar25 != (int *******)0x0) {
                local_f68 = ppppppiVar35;
                (*(code *)PTR___rust_dealloc_00203c78)(pppppppiVar18,pppppppiVar25,1);
              }
              if ((((ulong)local_1088 & 1) == 0) ||
                 (uVar16 = strategy_comm5::next_phase(local_f88,uVar6 & 0xff,&local_7f0),
                 ppppppiVar34 = local_1068, (char)uVar16 == (char)ppppppiVar37)) {
                uVar16 = uVar6;
                if (local_fc8 != (int *******)0x0) {
                  (*(code *)PTR___rust_dealloc_00203c78)(pppppppiStack_fc0,local_fc8,1);
                }
              }
              else {
                local_f08 = local_fb8;
                local_f18 = local_fc8;
                pppppppiStack_f10 = pppppppiStack_fc0;
                    /* try { // try from 0014102b to 00141043 has its CatchHandler @ 001444a1 */
                hashbrown::map::HashMap<K,V,S,A>::insert(local_dd8,&local_f18,uVar16 & 0xff);
              }
            }
            bVar14 = local_28d;
            pppppppiVar25 = (int *******)(ulong)(uVar16 & 0xff);
            strategy_comm5::Comm5Params::effective(&local_d28,&local_7f0,pppppppiVar25);
            bVar23 = local_28b;
            local_c20 = (int ******)
                        strategy_comm5::StrategyComm5::xs_mult
                                  (local_1018,local_28b,local_1048,local_1040);
            if ((bVar14 & 1) == 0) {
              local_da8 = (int *****)0x0;
              uStack_da0 = 1;
              local_d98 = 0;
            }
            else {
              local_e08 = (int *******)CONCAT44(local_e08._4_4_,(uVar16 & 0xff) + 0x31);
              if (((ulong)local_1088 & 1) == 0) {
                _<T_as_alloc::slice::<impl[T]>::to_vec_in::ConvertVec>::to_vec
                          (&local_f18,"NA-p-xson_signal code= score= vol_alpha=",2);
                local_d58 = local_f08;
                local_98 = local_f18;
                pppppppiStack_90 = pppppppiStack_f10;
              }
              else {
                lVar17 = 0x7fffffffffffffff;
                if ((double)local_f88 <= DAT_001162e8) {
                  lVar17 = (long)(double)local_f88;
                }
                lVar24 = 0;
                if (!NAN((double)local_f88)) {
                  lVar24 = lVar17;
                }
                    /* try { // try from 001410dd to 00141145 has its CatchHandler @ 001445af */
                _<i64_as_alloc::string::SpecToString>::spec_to_string(&local_98,lVar24);
                local_d58 = local_88;
              }
              local_d68 = local_98;
              pppppppiStack_d60 = pppppppiStack_90;
              if (((ulong)local_fd8 & 1) == 0) {
                _<T_as_alloc::slice::<impl[T]>::to_vec_in::ConvertVec>::to_vec
                          (&local_f18,"NA-p-xson_signal code= score= vol_alpha=",2);
                local_f48 = local_f08;
                local_80 = local_f18;
                pppppppiStack_78 = pppppppiStack_f10;
              }
              else {
                lVar17 = 0x7fffffffffffffff;
                if ((double)local_f28 <= DAT_001162e8) {
                  lVar17 = (long)(double)local_f28;
                }
                lVar24 = 0;
                if (!NAN((double)local_f28)) {
                  lVar24 = lVar17;
                }
                    /* try { // try from 001411a6 to 001411e6 has its CatchHandler @ 00144519 */
                _<i64_as_alloc::string::SpecToString>::spec_to_string(&local_80,lVar24);
                local_f48 = local_70;
              }
              local_f18 = (int *******)&local_e08;
              pppppppiStack_f10 = (int *******)PTR_fmt_00203e58;
              local_f08 = (int *******)&local_d68;
              ppppppiStack_f00 = (int ******)_<alloc::string::String_as_core::fmt::Display>::fmt;
              local_ef0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
              local_fc8 = (int *******)&DAT_001fde48;
              pppppppiStack_fc0 = (int *******)0x3;
              local_fa8 = (int *******)0x0;
              local_fb0 = (int ******)0x3;
                    /* try { // try from 00141292 to 001412a7 has its CatchHandler @ 001444ec */
              local_fb8 = (int *******)&local_f18;
              local_f58 = local_80;
              pppppppiStack_f50 = pppppppiStack_78;
              local_ef8 = (int *******)&local_f58;
              (*(code *)PTR_format_inner_00203d18)(&local_df0,&local_fc8);
              if (local_f58 != (int *******)0x0) {
                (*(code *)PTR___rust_dealloc_00203c78)(pppppppiStack_f50,local_f58,1);
              }
              if (local_d68 != (int *******)0x0) {
                (*(code *)PTR___rust_dealloc_00203c78)(pppppppiStack_d60,local_d68,1);
              }
              local_da8 = local_df0;
              uStack_da0 = uStack_de8;
              local_d98 = local_de0;
              bVar23 = local_28b;
            }
            local_1038 = (int ******)CONCAT44(local_1038._4_4_,uVar16);
            local_dd8 = pppppppiVar25;
            if ((bVar23 & 1) == 0) {
              local_e08 = (int *******)0x0;
              pppppppiStack_e00 = (int *******)0x1;
              local_df8 = (int *******)0x0;
            }
            else {
              local_f58 = &local_c20;
              pppppppiStack_f50 = (int *******)PTR_fmt_00203d80;
              local_f18 = (int *******)&DAT_001fde78;
              pppppppiStack_f10 = (int *******)0x1;
              local_ef8 = (int *******)0x0;
              local_f08 = (int *******)&local_f58;
              ppppppiStack_f00 = (int ******)0x1;
                    /* try { // try from 0014138a to 0014139f has its CatchHandler @ 00144511 */
              (*(code *)PTR_format_inner_00203d18)(&local_fc8,&local_f18);
              local_e08 = local_fc8;
              pppppppiStack_e00 = pppppppiStack_fc0;
              local_df8 = local_fb8;
            }
            pppppppiVar25 = local_1018;
            local_fd8 = (int *******)CONCAT71(local_fd8._1_7_,local_cc0);
            local_f88 = (int *******)CONCAT71(local_f88._1_7_,local_1091);
            cVar12 = strategy_comm5::Comm5Params::signal_mode(uStack_4d8,local_4d0);
                    /* WARNING: Switch is manually overridden */
            switch(cVar12) {
            case '\0':
              pppppppiStack_1000 = (int *******)((double)ppppppiVar34[0xe] * (double)local_420);
              break;
            case '\x01':
              pppppppiStack_1000 = (int *******)ppppppiVar34[0xf];
              break;
            case '\x02':
              pppppppiStack_1000 = (int *******)ppppppiVar34[0xe];
              break;
            case '\x03':
              pppppiVar3 = ppppppiVar34[0xe];
              local_1088 = (int *******)
                           (~-(ulong)NAN((double)pppppiVar3) &
                            (_s__00116b80 & (ulong)pppppiVar3 | ram0x00116a70) |
                           DAT_00116420 & -(ulong)NAN((double)pppppiVar3));
              ppppppiStack_1080 = _UNK_00116a78;
              dVar32 = (double)(*(code *)PTR_pow_00203e60)
                                         ((ulong)pppppiVar3 & _DAT_001164c0,
                                          (double)DAT_00116368 / (double)local_e10);
              pppppppiStack_1000 = (int *******)(dVar32 * (double)local_1088);
            }
            if (((local_8f8[0] != 1) || ((local_8e8 & 1) == 0)) ||
               ((double)((ulong)((dStack_8f0 - dStack_8e0) / (dStack_8f0 + dStack_8e0)) &
                        _DAT_001164c0) <= DAT_001163a0)) {
                    /* try { // try from 0014152a to 001417b6 has its CatchHandler @ 001445c1 */
              local_1068 = (int ******)(*(code *)PTR_time_sec_00203e20)(local_1090);
              local_1088 = (int *******)local_be8;
              ppppppiStack_fe0 =
                   (int ******)(*(code *)PTR_spread_bp_00203e68)(local_1090,local_1048,local_1040);
              ppppppiStack_dc0 =
                   (int ******)(*(code *)PTR_fee_bp_00203e70)(local_1090,local_1048,local_1040);
              local_ca8 = (int ******)
                          (*(code *)PTR_contract_mult_00203e78)(local_1090,local_1048,local_1040);
              local_d88 = (int ******)
                          (*(code *)PTR_price_step_00203e80)(local_1090,local_1048,local_1040);
              local_f68 = (int ******)
                          (*(code *)PTR_vol_step_00203e88)(local_1090,local_1048,local_1040);
              (*(code *)PTR_position_00203e90)(local_1090,local_1048,local_1040);
              local_f28 = extraout_XMM1_Qa;
              ppppppiStack_f20 = extraout_XMM1_Qb;
              dStack_f70 = (double)(*(code *)PTR_position_holding_secs_00203e98)
                                             (local_1090,local_1048,local_1040);
              local_1088 = (int *******)((double)local_1088 / _DAT_00116470);
              dStack_f70 = dStack_f70 + (double)local_1088;
              uVar13 = (*(code *)PTR_is_should_lock_00203ea0)(local_1090,local_1048,local_1040);
              local_bc8 = (int ******)CONCAT71(local_bc8._1_7_,uVar13);
              local_d68 = local_d28;
              ppppppiStack_d50 = ppppppiStack_d10;
              if (local_1091 != '\0') {
                pppppppiVar18 = &ppppppiStack_388;
                if ((char)local_7f0 != '\0') {
                  pppppppiVar18 = (int *******)&local_7e8;
                }
                pppppppiStack_d20 = &local_380;
                if ((char)local_7e0 != '\0') {
                  pppppppiStack_d20 = (int *******)&local_7d8;
                }
                pppppppiStack_d20 = (int *******)*pppppppiStack_d20;
                ppppppiVar34 = (int ******)&ppppppiStack_378;
                if ((char)local_7d0 != '\0') {
                  ppppppiVar34 = (int ******)&local_7c8;
                }
                local_d18 = (int *******)*ppppppiVar34;
                ppppppiVar34 = (int ******)&local_370;
                if ((char)local_7c0 != '\0') {
                  ppppppiVar34 = (int ******)&local_7b8;
                }
                local_d68 = (int *******)*pppppppiVar18;
                ppppppiStack_d50 = (int ******)*ppppppiVar34;
              }
              uStack_c40 = 0;
              uStack_c60 = 0;
              uStack_c50 = 0;
              uStack_c70 = 0;
              pppppppiStack_d60 = pppppppiStack_d20;
              local_d58 = local_d18;
              local_c78 = ppppppiStack_d50;
              local_c68 = pppppppiStack_d20;
              local_c58 = local_d18;
              local_c48 = local_d68;
              strategy_comm5::signal_trigger::dynamic_threshold
                        (dStack_f70,ppppppiStack_368,local_360,ppppppiStack_358,&ppppppiStack_68,
                         &local_d68);
              uStack_106a = strategy_comm5::Comm5Params::signal_trigger_mode
                                      (pppppppiStack_4c0,local_4b8);
              (*(code *)PTR_clone_00203db8)
                        (&local_fc8,&local_1050,&PTR_s_strategies_comm_strategy_strateg_001fde88);
                    /* try { // try from 001417b7 to 001417d6 has its CatchHandler @ 00144570 */
              (*(code *)PTR_clone_00203db8)
                        (&local_f18,&local_c90,&PTR_s_strategies_comm_strategy_strateg_001fdea0);
              local_f48 = local_fb8;
              local_f58 = local_fc8;
              pppppppiStack_f50 = pppppppiStack_fc0;
              pppppppiStack_f40 = local_f18;
              pppppppiStack_f38 = pppppppiStack_f10;
              pppppppiStack_f30 = local_f08;
                    /* try { // try from 00141820 to 00141d33 has its CatchHandler @ 001445c1 */
              hashbrown::rustc_entry::_<impl_hashbrown::map::HashMap<K,V,S,A>>::rustc_entry
                        (&local_f18,pppppppiVar25 + 0xad,&local_f58);
              if (local_f18 == (int *******)0x8000000000000000) {
                local_fc8 = (int *******)0x8000000000000000;
              }
              else {
                ppppppiStack_f98 = ppppppiStack_ee8;
                pcStack_f90 = pcStack_ee0;
                local_fa8 = local_ef8;
                pcStack_fa0 = local_ef0;
                local_fb0 = ppppppiStack_f00;
                local_fc8 = local_f18;
              }
              local_fb8 = local_f08;
              pppppppiStack_fc0 = pppppppiStack_f10;
              local_f18 = (int *******)&uStack_106a;
              pppppppiStack_f10 = (int *******)&local_4b0;
              local_f08 = &ppppppiStack_68;
              lVar17 = std::collections::hash::map::Entry<K,V>::or_insert_with
                                 (&local_fc8,&local_f18);
              local_1068 = (int ******)((double)local_1068 + (double)local_1088);
              strategy_comm5::signal_trigger::SignalTrigger::update_score
                        (local_1068,pppppppiStack_1000,0,0,lVar17,0);
              *(undefined8 *)(lVar17 + 0x50) = uStack_58;
              *(undefined8 *)(lVar17 + 0x58) = uStack_50;
              *(int *******)(lVar17 + 0x40) = ppppppiStack_68;
              *(undefined8 *)(lVar17 + 0x48) = uStack_60;
                    /* WARNING: Switch is manually overridden */
              switch(uStack_106a) {
              case 0:
                if (cVar12 == '\0') {
                  strategy_comm5::signal_trigger::SignalTrigger::point_signal_trigger_pv1_spread
                            (ppppppiStack_418,ppppppiStack_fe0,&local_f18,lVar17);
                  break;
                }
                if (cVar12 == '\x03') {
                  strategy_comm5::signal_trigger::SignalTrigger::point_signal_trigger_pv4
                            (ppppppiStack_418,ppppppiStack_dc0,ppppppiStack_fe0,&local_f18,lVar17);
                  break;
                }
                dVar32 = *(double *)(lVar17 + 0x38);
                pppppppiVar25 = local_1018;
                if (*(double *)(lVar17 + 0x40) <= dVar32) {
                  cVar12 = '\0';
                }
                else {
                  cVar12 = '\x03';
                  if ((dVar32 < *(double *)(lVar17 + 0x58)) &&
                     (cVar12 = '\x02', *(double *)(lVar17 + 0x50) < dVar32)) {
                    cVar12 = (*(double *)(lVar17 + 0x48) < dVar32) * '\x03' + '\x01';
                  }
                }
                goto LAB_00141aa7;
              case 1:
                strategy_comm5::signal_trigger::SignalTrigger::windows_mean_trigger
                          (local_410,&local_f18,lVar17);
                break;
              case 2:
                strategy_comm5::signal_trigger::SignalTrigger::windows_std_trigger
                          (local_410,&local_f18,lVar17);
                break;
              case 3:
                strategy_comm5::signal_trigger::SignalTrigger::windows_quantile_trigger
                          (ppppppiStack_408,local_410,&local_f18,lVar17);
                break;
              case 4:
                strategy_comm5::signal_trigger::SignalTrigger::windows_sharpe_trigger
                          (local_410,&local_f18,lVar17);
                break;
              case 5:
                strategy_comm5::signal_trigger::SignalTrigger::windows_rsi_trigger
                          (local_410,&local_f18,lVar17);
              }
              cVar12 = (char)local_f18;
              pppppppiVar18 = pppppppiStack_f10;
              if ((char)local_f18 != '\x05') {
LAB_00141aa7:
                cStack_1069 = cVar12;
                puVar26 = PTR_fmt_00203d80;
                pppppppiStack_f10 = (int *******)_<alloc::string::String_as_core::fmt::Display>::fmt
                ;
                local_f08 = (int *******)&pppppppiStack_1000;
                ppppppiStack_f00 = (int ******)PTR_fmt_00203d80;
                local_ef8 = &ppppppiStack_fe0;
                local_ef0 = (code *)PTR_fmt_00203d80;
                ppppppiStack_ee8 = (int ******)&local_e10;
                pcStack_ee0 = (code *)PTR_fmt_00203d80;
                pdStack_ed8 = (double *)&local_1091;
                puStack_ed0 = PTR_fmt_00203ea8;
                ppcStack_ec8 = (char **)&cStack_1069;
                pcStack_ec0 = _<core::option::Option<T>as_core::fmt::Debug>::fmt;
                local_fc8 = (int *******)&UNK_001fdeb8;
                pppppppiStack_fc0 = (int *******)0x6;
                local_fa8 = (int *******)&UNK_00119768;
                pcStack_fa0 = (code *)0x6;
                local_fb8 = (int *******)&local_f18;
                local_fb0 = (int ******)0x6;
                local_f18 = &local_1050;
                (*(code *)PTR_format_inner_00203d18)(auStack_48,&local_fc8);
                future_backtest_sdk::context::StrategyContext::log_debug(local_1090,auStack_48);
                uVar13 = (*(code *)PTR_margin_filter_00203eb0)(local_1090,cStack_1069);
                pppppppiVar18 =
                     (int *******)
                     (*(code *)PTR_cancel_by_pending_ts_00203eb8)(local_338,local_1090,1);
                if (pppppppiVar18 == (int *******)0x0) {
                  bVar14 = (*(code *)PTR_impact_block_check_00203ec0)
                                     (local_1068,local_ff8,local_1028,local_1090,uVar13);
                  if (((char)local_fd8 == '\x01' && (byte)local_f88 == '\x01') &&
                     ((bVar14 & 5) == 0)) {
                    bVar14 = 4;
                  }
                  puVar28 = &local_c90;
                  if (local_bf0 != 0) {
                    puVar28 = local_bf8;
                  }
                  puVar22 = &UNK_001fdf30;
                  if (local_bf0 == 0) {
                    puVar22 = &UNK_001fdf18;
                  }
                  (*(code *)PTR_clone_00203db8)(&local_df0,puVar28,puVar22);
                  local_1068 = local_400;
                  uStack_1060 = 0;
                  local_1088 = (int *******)ppppppiStack_cd0;
                  ppppppiStack_1080 = (int ******)0x0;
                  local_cb8 = ppppppiStack_cc8;
                  ppppppiStack_cb0 = (int ******)0x0;
                  bVar31 = (char)local_fd8 == '\x02';
                  local_d38 = *(int *******)(lVar17 + 0x40);
                  local_d40 = *(int *******)(lVar17 + 0x48);
                  local_fd8 = *(int ********)(lVar17 + 0x50);
                  local_bb8 = *(int *******)(lVar17 + 0x58);
                  bVar23 = bVar14;
                  if ((bVar14 != 4) && (local_28f != '\0')) {
                    /* try { // try from 00141dc3 to 0014212f has its CatchHandler @ 001444a6 */
                    lVar17 = hashbrown::map::HashMap<K,V,S,A>::get_inner
                                       (pppppppiVar25 + 0xb3,&local_1050);
                    if ((lVar17 != 0) &&
                       ((bVar23 = 4, 0.0 < (double)local_3c0 &&
                        ((double)local_3c0 <=
                         ((double)local_1008 - *(double *)(lVar17 + 0x28)) * _DAT_00116470)))) {
                      hashbrown::map::HashMap<K,V,S,A>::remove
                                (&local_f18,pppppppiVar25 + 0xb3,&local_1050);
                      bVar23 = bVar14;
                    }
                  }
                  ppppppiVar34 = ppppppiStack_298;
                  if ((((char)local_1038 != '\x02') &&
                      (ppppppiVar34 = local_2a0, (int)local_dd8 != 1)) ||
                     ((double)ppppppiVar34 <= 0.0)) {
                    ppppppiVar34 = DAT_00116368;
                  }
                  bVar14 = bVar31 & (byte)local_f88;
                  ppppppiVar34 = (int ******)
                                 (-(ulong)((double)local_390 < 0.0) & (ulong)local_390 |
                                 ~-(ulong)((double)local_390 < 0.0) &
                                 (ulong)((double)(~-(ulong)(_DAT_001163e0 < (double)local_c20) &
                                                  (ulong)DAT_00116368 |
                                                 -(ulong)(_DAT_001163e0 < (double)local_c20) &
                                                 (ulong)local_c20) * (double)ppppppiVar34 *
                                        (double)local_390));
                    /* WARNING: Switch is manually overridden */
                  switch(bVar23) {
                  case 0:
                    ppppppiStack_1030 = (int ******)0x0;
                    if ((((double)local_c20 <= _DAT_001163e0) &&
                        (local_1038 = ppppppiVar34, local_28b != 0)) ||
                       (((double)local_f28 < _DAT_00116478 &&
                        (local_1038 = ppppppiVar34,
                        dStack_f70 < (double)ppppppiStack_3c8 / _DAT_00116470)))) {
LAB_00142700:
                      pppppppiVar18 = (int *******)0x0;
                    }
                    else {
                      local_1038 = ppppppiVar34;
                      dVar32 = (double)strategy_comm5::eff_amts(uStack_d00,&local_7f0,local_dd8);
                      ppppppiVar34 = local_f28;
                      if ((double)local_f28 <= 0.0) {
                        ppppppiVar34 = (int ******)0x0;
                      }
                      dVar36 = (double)(~-(ulong)((double)local_d08 < 0.0) & (ulong)local_d08 |
                                       -(ulong)((double)local_d08 < 0.0) & _DAT_00116300) -
                               (double)ppppppiVar34;
                      dVar38 = ((double)(-(ulong)(dVar32 < 0.0) & _DAT_00116300 |
                                        ~-(ulong)(dVar32 < 0.0) & (ulong)dVar32) / (double)local_ca8
                               ) / (double)local_1028 - (double)ppppppiVar34;
                      dVar32 = dVar38;
                      if (dVar36 <= dVar38) {
                        dVar32 = dVar36;
                      }
                      ppppppiVar35 = (int ******)
                                     (~-(ulong)NAN(dVar36) & (ulong)dVar32 |
                                     -(ulong)NAN(dVar36) & (ulong)dVar38);
                      ppppppiVar34 = (int ******)
                                     (~-(ulong)(dStack_cf8 < 0.0) & (ulong)dStack_cf8 |
                                     -(ulong)(dStack_cf8 < 0.0) & _DAT_00116300);
                      ppppppiVar37 = (int ******)
                                     (((double)(-(ulong)(dStack_cf0 < 0.0) & _DAT_00116300 |
                                               ~-(ulong)(dStack_cf0 < 0.0) & (ulong)dStack_cf0) /
                                      (double)local_ca8) / (double)local_1028);
                      if ((double)ppppppiVar37 <= (double)DAT_00116368) {
                        ppppppiVar37 = DAT_00116368;
                      }
                      if ((double)ppppppiVar37 <= (double)ppppppiVar34) {
                        ppppppiVar34 = ppppppiVar37;
                      }
                      ppppppiVar33 = (int ******)
                                     (~-(ulong)((double)ppppppiStack_398 < 0.0) &
                                      (ulong)ppppppiStack_398 |
                                     -(ulong)((double)ppppppiStack_398 < 0.0) & _DAT_00116300);
                      ppppppiVar37 = (int ******)
                                     (((double)(~-(ulong)((double)local_1038 < 0.0) &
                                                (ulong)local_1038 |
                                               _DAT_00116300 & -(ulong)((double)local_1038 < 0.0)) /
                                      (double)local_ca8) / (double)local_1028);
                      if ((double)ppppppiVar37 <= (double)DAT_00116368) {
                        ppppppiVar37 = DAT_00116368;
                      }
                      if ((double)ppppppiVar37 <= (double)ppppppiVar33) {
                        ppppppiVar33 = ppppppiVar37;
                      }
                      ppppppiVar37 = local_f28;
                      if (0.0 <= (double)local_f28) {
                        ppppppiVar37 = (int ******)0x0;
                      }
                      if ((double)ppppppiVar34 <= (double)ppppppiVar35) {
                        ppppppiVar35 = ppppppiVar34;
                      }
                      if ((double)((ulong)ppppppiVar37 ^ _s__00116b80) <= (double)ppppppiVar33) {
                        ppppppiVar33 = (int ******)((ulong)ppppppiVar37 ^ _s__00116b80);
                      }
                      dVar32 = (double)ppppppiVar33 + (double)ppppppiVar35;
                      if (dVar32 <= 0.0) {
                        dVar32 = 0.0;
                      }
                      local_1038 = (int ******)
                                   (*(code *)PTR_round_with_step_f64_00203ec8)(dVar32,local_f68,1);
                      if (bVar14 == 0) {
                        pppppppiVar18 = (int *******)(*(code *)PTR_cancel_all_00203ed0)(local_1090);
                        if (pppppppiVar18 == (int *******)0x0) {
                          if ((cStack_cbf == '\0') || (local_1091 != '\0')) {
                            if ((DAT_00116348 < (double)((ulong)local_1068 & _DAT_001164c0)) &&
                               (DAT_00116348 < (double)(_DAT_001164c0 & (ulong)local_c48))) {
                              dVar32 = (double)((ulong)((double)pppppppiStack_1000 /
                                                       (double)local_c48) & _DAT_001164c0) +
                                       _s__001162d8;
                              if (dVar32 <= 0.0) {
                                dVar32 = 0.0;
                              }
                              ppppppiVar37 = (int ******)
                                             ((double)local_1088 + (double)local_1068 * dVar32);
                              ppppppiVar34 = local_cb8;
                              if ((double)ppppppiVar37 <= (double)local_cb8) {
                                ppppppiVar34 = ppppppiVar37;
                              }
                              local_1088 = (int *******)
                                           (-(ulong)NAN((double)ppppppiVar37) & (ulong)local_cb8 |
                                           ~-(ulong)NAN((double)ppppppiVar37) & (ulong)ppppppiVar34)
                              ;
                              ppppppiStack_1080 = ppppppiStack_cb0;
                            }
                          }
                          else {
                            local_1088 = (int *******)
                                         strategy_comm5::high_taker_rate
                                                   (pppppppiStack_1000,local_c48,ppppppiStack_fe0,
                                                    local_1028,local_ff8,uStack_ce8);
                            ppppppiStack_1080 = extraout_XMM0_Qb_05;
                          }
                          local_1088 = (int *******)
                                       (*(code *)PTR_round_with_step_f64_00203ec8)
                                                 (((double)local_1088 + (double)DAT_00116368) *
                                                  (double)local_1028,local_d88,1);
                          ppppppiVar37 = (int ******)
                                         strategy_comm5::taker_fillable_cum(local_1088,local_8f8,1);
                          ppppppiVar34 = ppppppiVar37;
                          if ((double)local_1038 <= (double)ppppppiVar37) {
                            ppppppiVar34 = local_1038;
                          }
                          local_1068 = (int ******)
                                       (*(code *)PTR_round_with_step_f64_00203ec8)
                                                 (~-(ulong)NAN((double)local_1038) &
                                                  (ulong)ppppppiVar34 |
                                                  -(ulong)NAN((double)local_1038) &
                                                  (ulong)ppppppiVar37,local_f68,1);
                          local_1038 = _s__00116410;
                          uStack_1060 = extraout_XMM0_Qb_06;
                          goto LAB_0014403d;
                        }
                      }
                      else {
                        dVar38 = (double)local_328 * (double)local_d88 + (double)local_ff8;
                        dVar36 = (double)local_1028 - (double)local_d88;
                        dVar32 = dVar36;
                        if (dVar38 <= dVar36) {
                          dVar32 = dVar38;
                        }
                        local_1088 = (int *******)
                                     (*(code *)PTR_round_with_step_f64_00203ec8)
                                               (~-(ulong)NAN(dVar38) & (ulong)dVar32 |
                                                -(ulong)NAN(dVar38) & (ulong)dVar36,1);
                        local_fd8 = local_860;
                        local_f18 = (int *******)0x0;
                        pppppppiStack_f10 = (int *******)&DAT_00000008;
                        local_f08 = (int *******)0x0;
                    /* try { // try from 00142195 to 001421e1 has its CatchHandler @ 00144489 */
                        pppppppiVar18 =
                             (int *******)
                             strategy_comm5::cancel_order_use_range
                                       (local_1088,local_1090,local_1048,local_1040,1,&local_f18);
                        if (pppppppiVar18 == (int *******)0x0) {
                          lVar17 = strategy_comm5::live_pending_counts
                                             (local_1090,local_1048,local_1040,pppppppiStack_f10,
                                              local_f08);
                          local_1068 = (int ******)0x0;
                          uStack_1060 = 0;
                          if (lVar17 == 0) {
                            ppppppiVar34 = (int ******)0x0;
                            dVar32 = (double)(-(ulong)(0.0 < (double)local_fd8) &
                                             (ulong)DAT_00116368);
                            if (0.0 < (double)local_fd8) {
                              dStack_858 = dStack_858 + 0.0;
                            }
                            else {
                              dStack_858 = 0.0;
                            }
                            dVar32 = (double)(-(ulong)(0.0 < dStack_850) &
                                              (ulong)(dVar32 + (double)DAT_00116368) |
                                             ~-(ulong)(0.0 < dStack_850) & (ulong)dVar32);
                            if (0.0 < dStack_850) {
                              dStack_858 = dStack_858 + dStack_848;
                            }
                            dVar32 = (double)(-(ulong)(0.0 < dStack_840) &
                                              (ulong)(dVar32 + (double)DAT_00116368) |
                                             ~-(ulong)(0.0 < dStack_840) & (ulong)dVar32);
                            if (0.0 < dStack_840) {
                              dStack_858 = dStack_858 + dStack_838;
                            }
                            if (0.0 < dVar32) {
                              ppppppiVar34 = (int ******)(dStack_858 / dVar32);
                            }
                            if (0.0 < (double)ppppppiStack_330) {
                              ppppppiVar37 = ppppppiStack_330;
                              if ((double)ppppppiVar34 <= (double)ppppppiStack_330) {
                                ppppppiVar37 = ppppppiVar34;
                              }
                              ppppppiVar34 = (int ******)
                                             (~-(ulong)NAN((double)ppppppiVar34) &
                                              (ulong)ppppppiVar37 |
                                             -(ulong)NAN((double)ppppppiVar34) &
                                             (ulong)ppppppiStack_330);
                            }
                            ppppppiVar37 = ppppppiVar34;
                            if ((double)local_1038 <= (double)ppppppiVar34) {
                              ppppppiVar37 = local_1038;
                            }
                    /* try { // try from 00144007 to 00144020 has its CatchHandler @ 00144489 */
                            local_1068 = (int ******)
                                         (*(code *)PTR_round_with_step_f64_00203ec8)
                                                   (~-(ulong)NAN((double)local_1038) &
                                                    (ulong)ppppppiVar37 |
                                                    -(ulong)NAN((double)local_1038) &
                                                    (ulong)ppppppiVar34,local_f68,1);
                            uStack_1060 = extraout_XMM0_Qb_10;
                          }
                          local_1038 = local_338;
                          core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>
                                    (&local_f18);
LAB_0014403d:
                          if ((double)(_DAT_001164c0 & (ulong)local_1068) <= DAT_00116348) {
override_jmp_00141ed5_case_4:
                            if (local_df0 != (int *****)0x0) {
                              (*(code *)PTR___rust_dealloc_00203c78)(uStack_de8,local_df0,1);
                            }
                            if (local_e08 != (int *******)0x0) {
                              (*(code *)PTR___rust_dealloc_00203c78)(pppppppiStack_e00,local_e08,1);
                            }
                            if (local_da8 != (int *****)0x0) {
                              (*(code *)PTR___rust_dealloc_00203c78)(uStack_da0,local_da8,1);
                            }
                            if (local_8d8 != 0) {
                              (*(code *)PTR___rust_dealloc_00203c78)(local_8d0,local_8d8,1);
                            }
                            if (CONCAT44(uStack_c8c,local_c90) != 0) {
                              (*(code *)PTR___rust_dealloc_00203c78)
                                        (local_c88,CONCAT44(uStack_c8c,local_c90),1);
                            }
                            if (local_1050 != (int ******)0x0) {
                              (*(code *)PTR___rust_dealloc_00203c78)(local_1048,local_1050,1);
                            }
                            core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>
                                      (&local_c18);
                            core::ptr::drop_in_place<strategy_comm5::Comm5Params>(&local_7f0);
                            core::ptr::drop_in_place<future_backtest_sdk::types::StrategyPara>
                                      (&local_c00);
                            return (int *******)0x0;
                          }
                          local_fd8 = pppppppiStack_1000;
                          pcStack_db8 = "H";
                          if (local_1091 != '\0') {
                            pcStack_db8 = "L";
                          }
                          local_f88 = local_3d0;
                          uStack_db0 = 1;
                          local_f58 = (int *******)0x11988a;
                          if (bVar14 != 0) {
                            local_f58 = (int *******)0x11988b;
                          }
                          pppppppiStack_f50 = (int *******)0x1;
                          local_f18 = &ppppppiStack_fe0;
                          pppppppiStack_f10 = (int *******)puVar26;
                          local_f08 = &ppppppiStack_dc0;
                          ppppppiStack_f00 = (int ******)puVar26;
                          local_ef8 = &local_e10;
                          local_ef0 = (code *)puVar26;
                          ppppppiStack_ee8 = &local_df0;
                          pcStack_ee0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                          pdStack_ed8 = &dStack_f70;
                          puStack_ed0 = puVar26;
                          ppcStack_ec8 = &pcStack_db8;
                          pcStack_ec0 = _<&T_as_core::fmt::Display>::fmt;
                          pppppppiStack_eb8 = (int *******)&local_f58;
                          pcStack_eb0 = _<&T_as_core::fmt::Display>::fmt;
                          pppppiStack_ea8 = (int *****)&local_da8;
                          pcStack_ea0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                          pppppppiStack_e98 = (int *******)&local_e08;
                          pcStack_e90 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                          local_fc8 = (int *******)&DAT_001fdf48;
                          pppppppiStack_fc0 = (int *******)&DAT_00000009;
                          local_fa8 = (int *******)0x0;
                          local_fb8 = (int *******)&local_f18;
                          local_fb0 = (int ******)&DAT_00000009;
                    /* try { // try from 001441fa to 00144381 has its CatchHandler @ 001444a6 */
                          (*(code *)PTR_format_inner_00203d18)(&uStack_f8,&local_fc8);
                          uStack_150 = 0x700;
                          ppppppiStack_180 = (int ******)local_1088;
                          ppppppiStack_178 = local_1068;
                          pppppppiStack_170 = local_1028;
                          pppppppiStack_168 = local_fd8;
                          ppppppiStack_160 = local_d38;
                          pppppppiStack_158 = local_f88;
                          uStack_198 = uStack_f8;
                          uStack_190 = uStack_f0;
                          uStack_188 = uStack_e8;
                          pppppppiVar18 =
                               (int *******)strategy_comm5::place(local_1038,local_1090,&uStack_198)
                          ;
                          if (pppppppiVar18 == (int *******)0x0) {
                            if (local_28f == '\x01') {
                              (*(code *)PTR_clone_00203db8)
                                        (&local_f58,&local_1050,
                                         &PTR_s_strategies_comm_strategy_strateg_001fdfd8);
                              local_fc8 = local_ff8;
                              pppppppiStack_fc0 = local_1028;
                              local_fb8 = local_1008;
                              hashbrown::map::HashMap<K,V,S,A>::insert
                                        (&local_f18,local_1018 + 0xb3,&local_f58,&local_fc8);
                            }
                            goto override_jmp_00141ed5_case_4;
                          }
                        }
                        else {
LAB_001429e9:
                          core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>
                                    (&local_f18);
                        }
                      }
                    }
                    break;
                  case 1:
                    if ((DAT_00116348 < (double)local_f28) &&
                       (dStack_f70 < (double)ppppppiStack_3c8 / _DAT_00116470)) goto LAB_00142700;
                    if ((double)local_f28 <= 0.0) goto override_jmp_00141ed5_case_4;
                    uVar19 = -(ulong)((double)ppppppiStack_398 <
                                     (double)((ulong)ppppppiStack_398 ^ _s__00116b80));
                    dVar36 = (double)(uVar19 & _DAT_00116310 |
                                     ~uVar19 & ((ulong)ppppppiStack_398 ^ _s__00116b80));
                    uVar19 = -(ulong)((double)ppppppiVar34 <
                                     (double)((ulong)ppppppiVar34 ^ _s__00116b80));
                    dVar38 = ((double)(uVar19 & _DAT_00116310 |
                                      ~uVar19 & ((ulong)ppppppiVar34 ^ _s__00116b80)) /
                             (double)local_ca8) / (double)local_ff8;
                    dVar32 = dVar38;
                    if (dVar38 <= dVar36) {
                      dVar32 = dVar36;
                    }
                    dVar32 = (double)(~-(ulong)NAN(dVar36) & (ulong)dVar32 |
                                     -(ulong)NAN(dVar36) & (ulong)dVar38);
                    ppppppiVar34 = local_f28;
                    if ((double)local_f28 <= 0.0) {
                      ppppppiVar34 = (int ******)0x0;
                    }
                    if (dVar32 <= (double)((ulong)ppppppiVar34 ^ _s__00116b80)) {
                      dVar32 = (double)((ulong)ppppppiVar34 ^ _s__00116b80);
                    }
                    /* try { // try from 00142558 to 001425ef has its CatchHandler @ 001444a6 */
                    local_1038 = (int ******)
                                 (*(code *)PTR_round_with_step_f64_00203ec8)(dVar32,local_f68,1);
                    local_fd8 = (int *******)CONCAT71(local_fd8._1_7_,(byte)local_bc8 != '\0');
                    if (bVar14 == 0) {
                      pppppppiVar18 = (int *******)(*(code *)PTR_cancel_all_00203ed0)(local_1090);
                      if (pppppppiVar18 != (int *******)0x0) break;
                      if ((cStack_cbf == '\0') || (local_1091 != '\0')) {
                        if ((DAT_00116348 < (double)((ulong)local_1068 & _DAT_001164c0)) &&
                           (DAT_00116348 < (double)(_DAT_001164c0 & (ulong)local_c68))) {
                          dVar32 = (double)((ulong)((double)pppppppiStack_1000 / (double)local_c68)
                                           & _DAT_001164c0) + _s__001162d8;
                          if (dVar32 <= 0.0) {
                            dVar32 = 0.0;
                          }
                          ppppppiVar37 = (int ******)
                                         ((double)local_1088 + (double)local_1068 * dVar32);
                          ppppppiVar34 = local_cb8;
                          if ((double)ppppppiVar37 <= (double)local_cb8) {
                            ppppppiVar34 = ppppppiVar37;
                          }
                          local_1088 = (int *******)
                                       (-(ulong)NAN((double)ppppppiVar37) & (ulong)local_cb8 |
                                       ~-(ulong)NAN((double)ppppppiVar37) & (ulong)ppppppiVar34);
                          ppppppiStack_1080 = ppppppiStack_cb0;
                        }
                      }
                      else {
                        local_1088 = (int *******)
                                     strategy_comm5::high_taker_rate
                                               (pppppppiStack_1000,local_c68,ppppppiStack_fe0,
                                                local_1028,local_ff8,uStack_ce8);
                        ppppppiStack_1080 = extraout_XMM0_Qb_01;
                      }
                      local_1088 = (int *******)
                                   (*(code *)PTR_round_with_step_f64_00203ec8)
                                             (((double)DAT_00116368 - (double)local_1088) *
                                              (double)local_ff8,local_d88,1);
                      uVar19 = strategy_comm5::taker_fillable_cum(local_1088,local_8f8,0);
                      ppppppiVar37 = (int ******)(uVar19 ^ _s__00116b80);
                      ppppppiVar34 = ppppppiVar37;
                      if ((double)ppppppiVar37 <= (double)local_1038) {
                        ppppppiVar34 = local_1038;
                      }
                      local_1068 = (int ******)
                                   (*(code *)PTR_round_with_step_f64_00203ec8)
                                             (~-(ulong)NAN((double)local_1038) & (ulong)ppppppiVar34
                                              | -(ulong)NAN((double)local_1038) &
                                                (ulong)ppppppiVar37,local_f68,1);
                      local_1038 = _s__00116410;
                      uStack_1060 = extraout_XMM0_Qb_02;
                    }
                    else {
                      dVar38 = (double)local_1028 - (double)local_328 * (double)local_d88;
                      dVar36 = (double)local_d88 + (double)local_ff8;
                      dVar32 = dVar36;
                      if (dVar36 <= dVar38) {
                        dVar32 = dVar38;
                      }
                      local_1088 = (int *******)
                                   (*(code *)PTR_round_with_step_f64_00203ec8)
                                             (~-(ulong)NAN(dVar38) & (ulong)dVar32 |
                                              -(ulong)NAN(dVar38) & (ulong)dVar36,1);
                      local_f88 = local_8b0;
                      local_f18 = (int *******)0x0;
                      pppppppiStack_f10 = (int *******)&DAT_00000008;
                      local_f08 = (int *******)0x0;
                    /* try { // try from 00142658 to 001426a1 has its CatchHandler @ 0014448d */
                      pppppppiVar18 =
                           (int *******)
                           strategy_comm5::cancel_order_use_range
                                     (local_1088,local_1090,local_1048,local_1040,0,&local_f18);
                      if (pppppppiVar18 != (int *******)0x0) goto LAB_001429e9;
                      strategy_comm5::live_pending_counts
                                (local_1090,local_1048,local_1040,pppppppiStack_f10,local_f08);
                      local_1068 = (int ******)0x0;
                      uStack_1060 = 0;
                      if (extraout_RDX == 0) {
                        ppppppiVar34 = (int ******)0x0;
                        dVar32 = (double)(-(ulong)(0.0 < (double)local_f88) & (ulong)DAT_00116368);
                        if (0.0 < (double)local_f88) {
                          dStack_8a8 = dStack_8a8 + 0.0;
                        }
                        else {
                          dStack_8a8 = 0.0;
                        }
                        dVar32 = (double)(-(ulong)(0.0 < dStack_8a0) &
                                          (ulong)(dVar32 + (double)DAT_00116368) |
                                         ~-(ulong)(0.0 < dStack_8a0) & (ulong)dVar32);
                        if (0.0 < dStack_8a0) {
                          dStack_8a8 = dStack_8a8 + dStack_898;
                        }
                        dVar32 = (double)(-(ulong)(0.0 < dStack_890) &
                                          (ulong)(dVar32 + (double)DAT_00116368) |
                                         ~-(ulong)(0.0 < dStack_890) & (ulong)dVar32);
                        if (0.0 < dStack_890) {
                          dStack_8a8 = dStack_8a8 + dStack_888;
                        }
                        if (0.0 < dVar32) {
                          ppppppiVar34 = (int ******)(dStack_8a8 / dVar32);
                        }
                        if (0.0 < (double)ppppppiStack_330) {
                          ppppppiVar37 = ppppppiStack_330;
                          if ((double)ppppppiVar34 <= (double)ppppppiStack_330) {
                            ppppppiVar37 = ppppppiVar34;
                          }
                          ppppppiVar34 = (int ******)
                                         (~-(ulong)NAN((double)ppppppiVar34) & (ulong)ppppppiVar37 |
                                         -(ulong)NAN((double)ppppppiVar34) & (ulong)ppppppiStack_330
                                         );
                        }
                        ppppppiVar34 = (int ******)((ulong)ppppppiVar34 ^ _s__00116b80);
                        ppppppiVar37 = ppppppiVar34;
                        if ((double)ppppppiVar34 <= (double)local_1038) {
                          ppppppiVar37 = local_1038;
                        }
                    /* try { // try from 001437df to 001437f8 has its CatchHandler @ 0014448d */
                        local_1068 = (int ******)
                                     (*(code *)PTR_round_with_step_f64_00203ec8)
                                               (~-(ulong)NAN((double)local_1038) &
                                                (ulong)ppppppiVar37 |
                                                -(ulong)NAN((double)local_1038) &
                                                (ulong)ppppppiVar34,local_f68,1);
                        uStack_1060 = extraout_XMM0_Qb_08;
                      }
                      local_1038 = local_338;
                      core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&local_f18);
                    }
                    if ((double)(_DAT_001164c0 & (ulong)local_1068) <= DAT_00116348)
                    goto override_jmp_00141ed5_case_4;
                    local_f88 = pppppppiStack_1000;
                    pcStack_db8 = "H";
                    if (local_1091 != '\0') {
                      pcStack_db8 = "L";
                    }
                    local_dd8 = local_3d0;
                    uStack_db0 = 1;
                    local_f58 = (int *******)0x11988a;
                    if (bVar14 != 0) {
                      local_f58 = (int *******)0x11988b;
                    }
                    pppppppiStack_f50 = (int *******)0x1;
                    local_f18 = &ppppppiStack_fe0;
                    pppppppiStack_f10 = (int *******)puVar26;
                    local_f08 = &ppppppiStack_dc0;
                    ppppppiStack_f00 = (int ******)puVar26;
                    local_ef8 = &local_e10;
                    local_ef0 = (code *)puVar26;
                    ppppppiStack_ee8 = &local_df0;
                    pcStack_ee0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                    pdStack_ed8 = &dStack_f70;
                    puStack_ed0 = puVar26;
                    ppcStack_ec8 = &pcStack_db8;
                    pcStack_ec0 = _<&T_as_core::fmt::Display>::fmt;
                    pppppppiStack_eb8 = (int *******)&local_f58;
                    pcStack_eb0 = _<&T_as_core::fmt::Display>::fmt;
                    pppppiStack_ea8 = (int *****)&local_da8;
                    pcStack_ea0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                    pppppppiStack_e98 = (int *******)&local_e08;
                    pcStack_e90 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                    local_fc8 = (int *******)&DAT_001fdf48;
                    pppppppiStack_fc0 = (int *******)&DAT_00000009;
                    local_fa8 = (int *******)0x0;
                    local_fb8 = (int *******)&local_f18;
                    local_fb0 = (int ******)&DAT_00000009;
                    /* try { // try from 001439d2 to 00143b35 has its CatchHandler @ 001444a6 */
                    (*(code *)PTR_format_inner_00203d18)(&uStack_c8,&local_fc8);
                    cStack_23f = (char)local_fd8 * '\x03' + '\x05';
                    uStack_240 = 1;
                    ppppppiStack_270 = (int ******)local_1088;
                    ppppppiStack_268 = local_1068;
                    pppppppiStack_260 = local_ff8;
                    pppppppiStack_258 = local_f88;
                    ppppppiStack_250 = local_d40;
                    pppppppiStack_248 = local_dd8;
                    uStack_288 = uStack_c8;
                    uStack_280 = uStack_c0;
                    uStack_278 = uStack_b8;
                    pppppppiVar18 =
                         (int *******)strategy_comm5::place(local_1038,local_1090,&uStack_288);
                    if (pppppppiVar18 == (int *******)0x0) {
                      if (local_28f == '\x01') {
                        (*(code *)PTR_clone_00203db8)
                                  (&local_f58,&local_1050,
                                   &PTR_s_strategies_comm_strategy_strateg_001fdff0);
                        local_fc8 = local_ff8;
                        pppppppiStack_fc0 = local_1028;
                        local_fb8 = local_1008;
                        hashbrown::map::HashMap<K,V,S,A>::insert
                                  (&local_f18,local_1018 + 0xb3,&local_f58,&local_fc8);
                      }
                      goto override_jmp_00141ed5_case_4;
                    }
                    break;
                  case 2:
                    ppppppiStack_1030 = (int ******)0x0;
                    if ((((double)local_c20 <= _DAT_001163e0) &&
                        (local_1038 = ppppppiVar34, local_28b != 0)) ||
                       ((DAT_00116348 < (double)local_f28 &&
                        (local_1038 = ppppppiVar34,
                        dStack_f70 < (double)ppppppiStack_3c8 / _DAT_00116470)))) goto LAB_00142700;
                    local_1038 = ppppppiVar34;
                    dVar32 = (double)strategy_comm5::eff_amts(uStack_d00,&local_7f0,local_dd8);
                    uVar19 = -(ulong)((double)local_d08 < (double)((ulong)local_d08 ^ _s__00116b80))
                    ;
                    ppppppiVar34 = local_f28;
                    if (0.0 <= (double)local_f28) {
                      ppppppiVar34 = (int ******)0x0;
                    }
                    dVar38 = (double)(uVar19 & _DAT_00116310 |
                                     ~uVar19 & ((ulong)local_d08 ^ _s__00116b80)) -
                             (double)ppppppiVar34;
                    uVar19 = -(ulong)(dVar32 < (double)((ulong)dVar32 ^ _s__00116b80));
                    dVar36 = ((double)(~uVar19 & ((ulong)dVar32 ^ _s__00116b80) |
                                      _DAT_00116310 & uVar19) / (double)local_ca8) /
                             (double)local_ff8 - (double)ppppppiVar34;
                    dVar32 = dVar36;
                    if (dVar36 <= dVar38) {
                      dVar32 = dVar38;
                    }
                    dVar32 = (double)(~-(ulong)NAN(dVar38) & (ulong)dVar32 |
                                     -(ulong)NAN(dVar38) & (ulong)dVar36);
                    ppppppiVar37 = (int ******)
                                   (~-(ulong)(dStack_cf8 < 0.0) & (ulong)dStack_cf8 |
                                   -(ulong)(dStack_cf8 < 0.0) & _DAT_00116300);
                    ppppppiVar34 = (int ******)
                                   (((double)(-(ulong)(dStack_cf0 < 0.0) & _DAT_00116300 |
                                             ~-(ulong)(dStack_cf0 < 0.0) & (ulong)dStack_cf0) /
                                    (double)local_ca8) / (double)local_ff8);
                    if ((double)ppppppiVar34 <= (double)DAT_00116368) {
                      ppppppiVar34 = DAT_00116368;
                    }
                    if ((double)ppppppiVar34 <= (double)ppppppiVar37) {
                      ppppppiVar37 = ppppppiVar34;
                    }
                    ppppppiVar35 = (int ******)
                                   (~-(ulong)((double)ppppppiStack_398 < 0.0) &
                                    (ulong)ppppppiStack_398 |
                                   -(ulong)((double)ppppppiStack_398 < 0.0) & _DAT_00116300);
                    ppppppiVar34 = (int ******)
                                   (((double)(~-(ulong)((double)local_1038 < 0.0) &
                                              (ulong)local_1038 |
                                             _DAT_00116300 & -(ulong)((double)local_1038 < 0.0)) /
                                    (double)local_ca8) / (double)local_ff8);
                    if ((double)ppppppiVar34 <= (double)DAT_00116368) {
                      ppppppiVar34 = DAT_00116368;
                    }
                    if ((double)ppppppiVar34 <= (double)ppppppiVar35) {
                      ppppppiVar35 = ppppppiVar34;
                    }
                    if (dVar32 <= (double)((ulong)ppppppiVar37 ^ _s__00116b80)) {
                      dVar32 = (double)((ulong)ppppppiVar37 ^ _s__00116b80);
                    }
                    ppppppiVar34 = local_f28;
                    if ((double)local_f28 <= 0.0) {
                      ppppppiVar34 = (int ******)0x0;
                    }
                    if ((double)ppppppiVar34 <= (double)ppppppiVar35) {
                      ppppppiVar35 = ppppppiVar34;
                    }
                    dVar32 = dVar32 - (double)ppppppiVar35;
                    if (0.0 <= dVar32) {
                      dVar32 = 0.0;
                    }
                    /* try { // try from 001428d5 to 0014295a has its CatchHandler @ 001444a6 */
                    local_1038 = (int ******)
                                 (*(code *)PTR_round_with_step_f64_00203ec8)(dVar32,local_f68,1);
                    if (bVar14 == 0) {
                      pppppppiVar18 = (int *******)(*(code *)PTR_cancel_all_00203ed0)(local_1090);
                      if (pppppppiVar18 != (int *******)0x0) break;
                      if ((cStack_cbf == '\0') || (local_1091 != '\0')) {
                        if ((DAT_00116348 < (double)((ulong)local_1068 & _DAT_001164c0)) &&
                           (DAT_00116348 < (double)(_DAT_001164c0 & (ulong)local_c58))) {
                          dVar32 = (double)((ulong)((double)pppppppiStack_1000 / (double)local_c58)
                                           & _DAT_001164c0) + _s__001162d8;
                          if (dVar32 <= 0.0) {
                            dVar32 = 0.0;
                          }
                          ppppppiVar37 = (int ******)
                                         ((double)local_1088 + (double)local_1068 * dVar32);
                          ppppppiVar34 = local_cb8;
                          if ((double)ppppppiVar37 <= (double)local_cb8) {
                            ppppppiVar34 = ppppppiVar37;
                          }
                          local_1088 = (int *******)
                                       (-(ulong)NAN((double)ppppppiVar37) & (ulong)local_cb8 |
                                       ~-(ulong)NAN((double)ppppppiVar37) & (ulong)ppppppiVar34);
                          ppppppiStack_1080 = ppppppiStack_cb0;
                        }
                      }
                      else {
                        local_1088 = (int *******)
                                     strategy_comm5::high_taker_rate
                                               (pppppppiStack_1000,local_c58,ppppppiStack_fe0,
                                                local_1028,local_ff8,uStack_ce8);
                        ppppppiStack_1080 = extraout_XMM0_Qb_03;
                      }
                      local_1088 = (int *******)
                                   (*(code *)PTR_round_with_step_f64_00203ec8)
                                             (((double)DAT_00116368 - (double)local_1088) *
                                              (double)local_ff8,local_d88,1);
                      uVar19 = strategy_comm5::taker_fillable_cum(local_1088,local_8f8,0);
                      ppppppiVar37 = (int ******)(uVar19 ^ _s__00116b80);
                      ppppppiVar34 = ppppppiVar37;
                      if ((double)ppppppiVar37 <= (double)local_1038) {
                        ppppppiVar34 = local_1038;
                      }
                      local_1068 = (int ******)
                                   (*(code *)PTR_round_with_step_f64_00203ec8)
                                             (~-(ulong)NAN((double)local_1038) & (ulong)ppppppiVar34
                                              | -(ulong)NAN((double)local_1038) &
                                                (ulong)ppppppiVar37,local_f68,1);
                      local_1038 = _s__00116410;
                      uStack_1060 = extraout_XMM0_Qb_04;
                    }
                    else {
                      dVar38 = (double)local_1028 - (double)local_328 * (double)local_d88;
                      dVar36 = (double)local_d88 + (double)local_ff8;
                      dVar32 = dVar36;
                      if (dVar36 <= dVar38) {
                        dVar32 = dVar38;
                      }
                      local_1088 = (int *******)
                                   (*(code *)PTR_round_with_step_f64_00203ec8)
                                             (~-(ulong)NAN(dVar38) & (ulong)dVar32 |
                                              -(ulong)NAN(dVar38) & (ulong)dVar36,1);
                      local_f88 = local_8b0;
                      local_f18 = (int *******)0x0;
                      pppppppiStack_f10 = (int *******)&DAT_00000008;
                      local_f08 = (int *******)0x0;
                    /* try { // try from 001429c3 to 001429dc has its CatchHandler @ 0014448b */
                      pppppppiVar18 =
                           (int *******)
                           strategy_comm5::cancel_order_use_range
                                     (local_1088,local_1090,local_1048,local_1040,0,&local_f18);
                      if (pppppppiVar18 != (int *******)0x0) goto LAB_001429e9;
                    /* try { // try from 00142d5d to 00142d66 has its CatchHandler @ 0014448b */
                      strategy_comm5::live_pending_counts
                                (local_1090,local_1048,local_1040,pppppppiStack_f10,local_f08);
                      local_1068 = (int ******)0x0;
                      uStack_1060 = 0;
                      if (extraout_RDX_00 == 0) {
                        ppppppiVar34 = (int ******)0x0;
                        dVar32 = (double)(-(ulong)(0.0 < (double)local_f88) & (ulong)DAT_00116368);
                        if (0.0 < (double)local_f88) {
                          dStack_8a8 = dStack_8a8 + 0.0;
                        }
                        else {
                          dStack_8a8 = 0.0;
                        }
                        dVar32 = (double)(-(ulong)(0.0 < dStack_8a0) &
                                          (ulong)(dVar32 + (double)DAT_00116368) |
                                         ~-(ulong)(0.0 < dStack_8a0) & (ulong)dVar32);
                        if (0.0 < dStack_8a0) {
                          dStack_8a8 = dStack_8a8 + dStack_898;
                        }
                        dVar32 = (double)(-(ulong)(0.0 < dStack_890) &
                                          (ulong)(dVar32 + (double)DAT_00116368) |
                                         ~-(ulong)(0.0 < dStack_890) & (ulong)dVar32);
                        if (0.0 < dStack_890) {
                          dStack_8a8 = dStack_8a8 + dStack_888;
                        }
                        if (0.0 < dVar32) {
                          ppppppiVar34 = (int ******)(dStack_8a8 / dVar32);
                        }
                        if (0.0 < (double)ppppppiStack_330) {
                          ppppppiVar37 = ppppppiStack_330;
                          if ((double)ppppppiVar34 <= (double)ppppppiStack_330) {
                            ppppppiVar37 = ppppppiVar34;
                          }
                          ppppppiVar34 = (int ******)
                                         (~-(ulong)NAN((double)ppppppiVar34) & (ulong)ppppppiVar37 |
                                         -(ulong)NAN((double)ppppppiVar34) & (ulong)ppppppiStack_330
                                         );
                        }
                        ppppppiVar34 = (int ******)((ulong)ppppppiVar34 ^ _s__00116b80);
                        ppppppiVar37 = ppppppiVar34;
                        if ((double)ppppppiVar34 <= (double)local_1038) {
                          ppppppiVar37 = local_1038;
                        }
                    /* try { // try from 00143bad to 00143bc6 has its CatchHandler @ 0014448b */
                        local_1068 = (int ******)
                                     (*(code *)PTR_round_with_step_f64_00203ec8)
                                               (~-(ulong)NAN((double)local_1038) &
                                                (ulong)ppppppiVar37 |
                                                -(ulong)NAN((double)local_1038) &
                                                (ulong)ppppppiVar34,local_f68,1);
                        uStack_1060 = extraout_XMM0_Qb_09;
                      }
                      local_1038 = local_338;
                      core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&local_f18);
                    }
                    if ((double)(_DAT_001164c0 & (ulong)local_1068) <= DAT_00116348)
                    goto override_jmp_00141ed5_case_4;
                    local_f88 = pppppppiStack_1000;
                    pcStack_db8 = "H";
                    if (local_1091 != '\0') {
                      pcStack_db8 = "L";
                    }
                    local_dd8 = local_3d0;
                    uStack_db0 = 1;
                    local_f58 = (int *******)0x11988a;
                    if (bVar14 != 0) {
                      local_f58 = (int *******)0x11988b;
                    }
                    pppppppiStack_f50 = (int *******)0x1;
                    local_f18 = &ppppppiStack_fe0;
                    pppppppiStack_f10 = (int *******)puVar26;
                    local_f08 = &ppppppiStack_dc0;
                    ppppppiStack_f00 = (int ******)puVar26;
                    local_ef8 = &local_e10;
                    local_ef0 = (code *)puVar26;
                    ppppppiStack_ee8 = &local_df0;
                    pcStack_ee0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                    pdStack_ed8 = &dStack_f70;
                    puStack_ed0 = puVar26;
                    ppcStack_ec8 = &pcStack_db8;
                    pcStack_ec0 = _<&T_as_core::fmt::Display>::fmt;
                    pppppppiStack_eb8 = (int *******)&local_f58;
                    pcStack_eb0 = _<&T_as_core::fmt::Display>::fmt;
                    pppppiStack_ea8 = (int *****)&local_da8;
                    pcStack_ea0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                    pppppppiStack_e98 = (int *******)&local_e08;
                    pcStack_e90 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                    local_fc8 = (int *******)&DAT_001fdf48;
                    pppppppiStack_fc0 = (int *******)&DAT_00000009;
                    local_fa8 = (int *******)0x0;
                    local_fb8 = (int *******)&local_f18;
                    local_fb0 = (int ******)&DAT_00000009;
                    /* try { // try from 00143da0 to 00143ef2 has its CatchHandler @ 001444a6 */
                    (*(code *)PTR_format_inner_00203d18)(&uStack_e0,&local_fc8);
                    uStack_100 = 0x802;
                    ppppppiStack_130 = (int ******)local_1088;
                    ppppppiStack_128 = local_1068;
                    pppppppiStack_120 = local_ff8;
                    pppppppiStack_118 = local_f88;
                    pppppppiStack_110 = local_fd8;
                    pppppppiStack_108 = local_dd8;
                    uStack_148 = uStack_e0;
                    uStack_140 = uStack_d8;
                    uStack_138 = uStack_d0;
                    pppppppiVar18 =
                         (int *******)strategy_comm5::place(local_1038,local_1090,&uStack_148);
                    if (pppppppiVar18 == (int *******)0x0) {
                      if (local_28f == '\x01') {
                        (*(code *)PTR_clone_00203db8)
                                  (&local_f58,&local_1050,
                                   &PTR_s_strategies_comm_strategy_strateg_001fe008);
                        local_fc8 = local_ff8;
                        pppppppiStack_fc0 = local_1028;
                        local_fb8 = local_1008;
                        hashbrown::map::HashMap<K,V,S,A>::insert
                                  (&local_f18,local_1018 + 0xb3,&local_f58,&local_fc8);
                      }
                      goto override_jmp_00141ed5_case_4;
                    }
                    break;
                  case 3:
                    if (((double)local_f28 < _DAT_00116478) &&
                       (dStack_f70 < (double)ppppppiStack_3c8 / _DAT_00116470)) goto LAB_00142700;
                    if (0.0 <= (double)local_f28) goto override_jmp_00141ed5_case_4;
                    dVar32 = (double)(~-(ulong)((double)ppppppiStack_398 < 0.0) &
                                      (ulong)ppppppiStack_398 |
                                     -(ulong)((double)ppppppiStack_398 < 0.0) & _DAT_00116300);
                    dVar38 = ((double)(~-(ulong)((double)ppppppiVar34 < 0.0) & (ulong)ppppppiVar34 |
                                      _DAT_00116300 & -(ulong)((double)ppppppiVar34 < 0.0)) /
                             (double)local_ca8) / (double)local_1028;
                    dVar36 = dVar38;
                    if (dVar32 <= dVar38) {
                      dVar36 = dVar32;
                    }
                    dVar32 = (double)(~-(ulong)NAN(dVar32) & (ulong)dVar36 |
                                     -(ulong)NAN(dVar32) & (ulong)dVar38);
                    ppppppiVar34 = local_f28;
                    if (0.0 <= (double)local_f28) {
                      ppppppiVar34 = (int ******)0x0;
                    }
                    if ((double)((ulong)ppppppiVar34 ^ _s__00116b80) <= dVar32) {
                      dVar32 = (double)((ulong)ppppppiVar34 ^ _s__00116b80);
                    }
                    /* try { // try from 001422f7 to 00142378 has its CatchHandler @ 001444a6 */
                    local_1038 = (int ******)
                                 (*(code *)PTR_round_with_step_f64_00203ec8)(dVar32,local_f68,1);
                    if (bVar14 == 0) {
                    /* try { // try from 001429fb to 00142c7b has its CatchHandler @ 001444a6 */
                      pppppppiVar18 = (int *******)(*(code *)PTR_cancel_all_00203ed0)(local_1090);
                      if (pppppppiVar18 != (int *******)0x0) break;
                      if ((cStack_cbf == '\0') || (local_1091 != '\0')) {
                        if ((DAT_00116348 < (double)((ulong)local_1068 & _DAT_001164c0)) &&
                           (DAT_00116348 < (double)(_DAT_001164c0 & (ulong)local_c78))) {
                          dVar32 = (double)((ulong)((double)pppppppiStack_1000 / (double)local_c78)
                                           & _DAT_001164c0) + _s__001162d8;
                          if (dVar32 <= 0.0) {
                            dVar32 = 0.0;
                          }
                          ppppppiVar37 = (int ******)
                                         ((double)local_1088 + (double)local_1068 * dVar32);
                          ppppppiVar34 = local_cb8;
                          if ((double)ppppppiVar37 <= (double)local_cb8) {
                            ppppppiVar34 = ppppppiVar37;
                          }
                          local_1088 = (int *******)
                                       (-(ulong)NAN((double)ppppppiVar37) & (ulong)local_cb8 |
                                       ~-(ulong)NAN((double)ppppppiVar37) & (ulong)ppppppiVar34);
                          ppppppiStack_1080 = ppppppiStack_cb0;
                        }
                      }
                      else {
                        local_1088 = (int *******)
                                     strategy_comm5::high_taker_rate
                                               (pppppppiStack_1000,local_c78,ppppppiStack_fe0,
                                                local_1028,local_ff8,uStack_ce8);
                        ppppppiStack_1080 = extraout_XMM0_Qb;
                      }
                    /* try { // try from 00142e23 to 0014318d has its CatchHandler @ 001444a6 */
                      local_1088 = (int *******)
                                   (*(code *)PTR_round_with_step_f64_00203ec8)
                                             (((double)local_1088 + (double)DAT_00116368) *
                                              (double)local_1028,local_d88,1);
                      ppppppiVar37 = (int ******)
                                     strategy_comm5::taker_fillable_cum(local_1088,local_8f8,1);
                      ppppppiVar34 = ppppppiVar37;
                      if ((double)local_1038 <= (double)ppppppiVar37) {
                        ppppppiVar34 = local_1038;
                      }
                      local_1068 = (int ******)
                                   (*(code *)PTR_round_with_step_f64_00203ec8)
                                             (~-(ulong)NAN((double)local_1038) & (ulong)ppppppiVar34
                                              | -(ulong)NAN((double)local_1038) &
                                                (ulong)ppppppiVar37,local_f68,1);
                      local_1038 = _s__00116410;
                      uStack_1060 = extraout_XMM0_Qb_00;
                    }
                    else {
                      dVar38 = (double)local_328 * (double)local_d88 + (double)local_ff8;
                      dVar36 = (double)local_1028 - (double)local_d88;
                      dVar32 = dVar36;
                      if (dVar38 <= dVar36) {
                        dVar32 = dVar38;
                      }
                      local_1088 = (int *******)
                                   (*(code *)PTR_round_with_step_f64_00203ec8)
                                             (~-(ulong)NAN(dVar38) & (ulong)dVar32 |
                                              -(ulong)NAN(dVar38) & (ulong)dVar36,1);
                      local_fd8 = local_860;
                      local_f18 = (int *******)0x0;
                      pppppppiStack_f10 = (int *******)&DAT_00000008;
                      local_f08 = (int *******)0x0;
                    /* try { // try from 001423de to 0014242a has its CatchHandler @ 0014448f */
                      pppppppiVar18 =
                           (int *******)
                           strategy_comm5::cancel_order_use_range
                                     (local_1088,local_1090,local_1048,local_1040,1,&local_f18);
                      if (pppppppiVar18 != (int *******)0x0) goto LAB_001429e9;
                      lVar17 = strategy_comm5::live_pending_counts
                                         (local_1090,local_1048,local_1040,pppppppiStack_f10,
                                          local_f08);
                      local_1068 = (int ******)0x0;
                      uStack_1060 = 0;
                      if (lVar17 == 0) {
                        ppppppiVar34 = (int ******)0x0;
                        dVar32 = (double)(-(ulong)(0.0 < (double)local_fd8) & (ulong)DAT_00116368);
                        if (0.0 < (double)local_fd8) {
                          dStack_858 = dStack_858 + 0.0;
                        }
                        else {
                          dStack_858 = 0.0;
                        }
                        dVar32 = (double)(-(ulong)(0.0 < dStack_850) &
                                          (ulong)(dVar32 + (double)DAT_00116368) |
                                         ~-(ulong)(0.0 < dStack_850) & (ulong)dVar32);
                        if (0.0 < dStack_850) {
                          dStack_858 = dStack_858 + dStack_848;
                        }
                        dVar32 = (double)(-(ulong)(0.0 < dStack_840) &
                                          (ulong)(dVar32 + (double)DAT_00116368) |
                                         ~-(ulong)(0.0 < dStack_840) & (ulong)dVar32);
                        if (0.0 < dStack_840) {
                          dStack_858 = dStack_858 + dStack_838;
                        }
                        if (0.0 < dVar32) {
                          ppppppiVar34 = (int ******)(dStack_858 / dVar32);
                        }
                        if (0.0 < (double)ppppppiStack_330) {
                          ppppppiVar37 = ppppppiStack_330;
                          if ((double)ppppppiVar34 <= (double)ppppppiStack_330) {
                            ppppppiVar37 = ppppppiVar34;
                          }
                          ppppppiVar34 = (int ******)
                                         (~-(ulong)NAN((double)ppppppiVar34) & (ulong)ppppppiVar37 |
                                         -(ulong)NAN((double)ppppppiVar34) & (ulong)ppppppiStack_330
                                         );
                        }
                        ppppppiVar37 = ppppppiVar34;
                        if ((double)local_1038 <= (double)ppppppiVar34) {
                          ppppppiVar37 = local_1038;
                        }
                    /* try { // try from 00143413 to 0014342c has its CatchHandler @ 0014448f */
                        local_1068 = (int ******)
                                     (*(code *)PTR_round_with_step_f64_00203ec8)
                                               (~-(ulong)NAN((double)local_1038) &
                                                (ulong)ppppppiVar37 |
                                                -(ulong)NAN((double)local_1038) &
                                                (ulong)ppppppiVar34,local_f68,1);
                        uStack_1060 = extraout_XMM0_Qb_07;
                      }
                      local_1038 = local_338;
                      core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&local_f18);
                    }
                    if ((double)(_DAT_001164c0 & (ulong)local_1068) <= DAT_00116348)
                    goto override_jmp_00141ed5_case_4;
                    local_fd8 = pppppppiStack_1000;
                    pcStack_db8 = "H";
                    if (local_1091 != '\0') {
                      pcStack_db8 = "L";
                    }
                    local_f88 = local_3d0;
                    uStack_db0 = 1;
                    local_f58 = (int *******)0x11988a;
                    if (bVar14 != 0) {
                      local_f58 = (int *******)0x11988b;
                    }
                    pppppppiStack_f50 = (int *******)0x1;
                    local_f18 = &ppppppiStack_fe0;
                    pppppppiStack_f10 = (int *******)puVar26;
                    local_f08 = &ppppppiStack_dc0;
                    ppppppiStack_f00 = (int ******)puVar26;
                    local_ef8 = &local_e10;
                    local_ef0 = (code *)puVar26;
                    ppppppiStack_ee8 = &local_df0;
                    pcStack_ee0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                    pdStack_ed8 = &dStack_f70;
                    puStack_ed0 = puVar26;
                    ppcStack_ec8 = &pcStack_db8;
                    pcStack_ec0 = _<&T_as_core::fmt::Display>::fmt;
                    pppppppiStack_eb8 = (int *******)&local_f58;
                    pcStack_eb0 = _<&T_as_core::fmt::Display>::fmt;
                    pppppiStack_ea8 = (int *****)&local_da8;
                    pcStack_ea0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                    pppppppiStack_e98 = (int *******)&local_e08;
                    pcStack_e90 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                    local_fc8 = (int *******)&DAT_001fdf48;
                    pppppppiStack_fc0 = (int *******)&DAT_00000009;
                    local_fa8 = (int *******)0x0;
                    local_fb8 = (int *******)&local_f18;
                    local_fb0 = (int ******)&DAT_00000009;
                    /* try { // try from 00143606 to 00143767 has its CatchHandler @ 001444a6 */
                    (*(code *)PTR_format_inner_00203d18)(&uStack_b0,&local_fc8);
                    bStack_1ef = (byte)local_bc8 | 6;
                    uStack_1f0 = 3;
                    ppppppiStack_220 = (int ******)local_1088;
                    ppppppiStack_218 = local_1068;
                    pppppppiStack_210 = local_1028;
                    pppppppiStack_208 = local_fd8;
                    ppppppiStack_200 = local_bb8;
                    pppppppiStack_1f8 = local_f88;
                    uStack_238 = uStack_b0;
                    uStack_230 = uStack_a8;
                    uStack_228 = uStack_a0;
                    pppppppiVar18 =
                         (int *******)strategy_comm5::place(local_1038,local_1090,&uStack_238);
                    if (pppppppiVar18 == (int *******)0x0) {
                      if (local_28f == '\x01') {
                        (*(code *)PTR_clone_00203db8)
                                  (&local_f58,&local_1050,
                                   &PTR_s_strategies_comm_strategy_strateg_001fe020);
                        local_fc8 = local_ff8;
                        pppppppiStack_fc0 = local_1028;
                        local_fb8 = local_1008;
                        hashbrown::map::HashMap<K,V,S,A>::insert
                                  (&local_f18,local_1018 + 0xb3,&local_f58,&local_fc8);
                      }
                      goto override_jmp_00141ed5_case_4;
                    }
                    break;
                  case 4:
                    goto override_jmp_00141ed5_case_4;
                  }
                  if (local_df0 != (int *****)0x0) {
                    (*(code *)PTR___rust_dealloc_00203c78)(uStack_de8,local_df0,1);
                  }
                }
              }
            }
            else {
              pppppppiVar18 = (int *******)0x0;
            }
            if (local_e08 != (int *******)0x0) {
              (*(code *)PTR___rust_dealloc_00203c78)(pppppppiStack_e00,local_e08,1);
            }
            if (local_da8 != (int *****)0x0) {
              (*(code *)PTR___rust_dealloc_00203c78)(uStack_da0,local_da8,1);
            }
          }
LAB_00141c3d:
          if (local_8d8 != 0) {
            (*(code *)PTR___rust_dealloc_00203c78)(local_8d0,local_8d8,1);
          }
        }
        if (CONCAT44(uStack_c8c,local_c90) != 0) {
          (*(code *)PTR___rust_dealloc_00203c78)(local_c88,CONCAT44(uStack_c8c,local_c90),1);
        }
        if (local_1050 != (int ******)0x0) {
          (*(code *)PTR___rust_dealloc_00203c78)(local_1048,local_1050,1);
        }
        local_1028 = local_c10;
        lVar17 = local_c08;
        goto LAB_00140939;
      }
      break;
    }
  }
  pppppppiVar18 = (int *******)0x0;
LAB_00140939:
  puVar26 = PTR___rust_dealloc_00203c78;
  if (lVar17 != 0) {
    pppppppiVar25 = local_1028 + 1;
    do {
      if (pppppppiVar25[-1] != (int ******)0x0) {
        (*(code *)puVar26)(*pppppppiVar25,pppppppiVar25[-1],1);
      }
      pppppppiVar25 = pppppppiVar25 + 3;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
LAB_00140981:
  if (local_c18 != 0) {
    (*(code *)PTR___rust_dealloc_00203c78)(local_1028,local_c18 * 0x18,8);
  }
  goto LAB_001408b1;
}




// ELF address 0x000000000007b620; fb_strategy_sdk_abi_version

undefined8 fb_strategy_sdk_abi_version(void)

{
  return 4;
}




// ELF address 0x000000000007b630; fb_strategy_sdk_version_str

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
  (*(code *)PTR_memcpy_00203cc8)
            (param_1,
             "0.6.0[fb_plugin] on_begin error: \n[fb_plugin] on_signal error: [fb_plugin] on_depth error: [fb_plugin] on_finish error: "
             ,uVar2);
  if (param_2 != 0) {
    *(undefined1 *)(param_1 + uVar2) = 0;
  }
  return uVar2;
}


