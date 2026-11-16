// ELF address 0x0000000000733cf0; future_backtest::Customer::customer::Account::update_pnl_que

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
_ZN15future_backtest8Customer8customer7Account14update_pnl_que17ha1a5bc9c42e7db71E
          (double param_1,long param_2)

{
  undefined1 auVar1 [16];
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 (*pauVar10) [16];
  undefined1 (*pauVar11) [16];
  long lVar12;
  long lVar13;
  double *pdVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  double dVar23;
  double dVar24;
  long lStack_40;
  
  lStack_40 = *(long *)(param_2 + 0x780);
  if (lStack_40 == 0) {
    return 0;
  }
  param_1 = param_1 * _DAT_003541f0;
  pauVar10 = *(undefined1 (**) [16])(param_2 + 0x768);
  pauVar11 = pauVar10 + 1;
  auVar1 = *pauVar10;
  uVar5 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
LAB_00833d4b:
  if ((short)uVar5 == 0) {
    do {
      auVar1 = *pauVar11;
      pauVar10 = pauVar10 + -0x290;
      pauVar11 = pauVar11 + 1;
      uVar5 = (uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
    } while (uVar5 == 0xffff);
    uVar5 = ~uVar5;
  }
  uVar3 = 0;
  for (uVar4 = uVar5; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
    uVar3 = uVar3 + 1;
  }
  uVar6 = (ulong)uVar3;
  uVar17 = *(ulong *)pauVar10[uVar6 * -0x29 + -0x1a];
  dVar23 = 0.0;
  dVar24 = 0.0;
  if (uVar17 != 0) {
    uVar19 = *(ulong *)(pauVar10[uVar6 * -0x29 + -0x1c] + 8);
    lVar2 = *(long *)pauVar10[uVar6 * -0x29 + -0x1b];
    dVar24 = *(double *)(pauVar10[uVar6 * -0x29 + -0x1a] + 8);
    uVar22 = *(ulong *)(pauVar10[uVar6 * -0x29 + -0x1b] + 8);
    lVar21 = uVar17 - uVar19;
    lVar12 = -uVar17;
    uVar18 = uVar17 & 0xffffffff;
    uVar7 = uVar17;
LAB_00833dfa:
    uVar7 = uVar7 - 1;
    uVar8 = uVar19;
    if (uVar22 < uVar19) {
      uVar8 = 0;
    }
    lVar13 = uVar22 - uVar8;
    lVar15 = lVar13 * 0x10;
    if (dVar24 < param_1 - *(double *)(lVar2 + lVar15)) goto code_r0x00833e2f;
    uVar7 = uVar19 - lVar13;
    uVar9 = lVar13 - lVar12;
    if (uVar7 < (ulong)-lVar12) {
      uVar9 = uVar19;
    }
    uVar19 = uVar7;
    if (uVar17 < uVar7) {
      uVar19 = uVar17;
    }
    dVar24 = 0.0;
    uVar9 = uVar9 - lVar13;
    if (uVar9 != 0) {
      if (uVar9 - 1 < 3) {
        uVar20 = 0;
      }
      else {
        uVar16 = uVar7;
        if (uVar17 < uVar7) {
          uVar16 = uVar17;
        }
        pdVar14 = (double *)(lVar2 + lVar15 + 0x38);
        uVar20 = 0;
        do {
          dVar24 = dVar24 + pdVar14[-6] + pdVar14[-4] + pdVar14[-2] + *pdVar14;
          uVar20 = uVar20 + 4;
          pdVar14 = pdVar14 + 8;
        } while ((uVar16 & 0xfffffffffffffffc) != uVar20);
      }
      if ((uVar9 & 3) != 0) {
        uVar9 = uVar7;
        if (uVar17 < uVar7) {
          uVar9 = uVar17;
        }
        uVar16 = 0;
        do {
          dVar24 = dVar24 + *(double *)(lVar15 + uVar20 * 0x10 + lVar2 + 8 + uVar16);
          uVar16 = uVar16 + 0x10;
        } while (((uint)uVar9 & 3) << 4 != uVar16);
      }
    }
    if (uVar7 < (ulong)-lVar12) {
      if ((uVar8 - uVar22) - lVar21 < 0xfffffffffffffffd) {
        pdVar14 = (double *)(lVar2 + 0x38);
        uVar22 = uVar17 - uVar7;
        if (uVar17 < uVar7) {
          uVar22 = 0;
        }
        uVar8 = 0;
        do {
          dVar24 = dVar24 + pdVar14[-6] + pdVar14[-4] + pdVar14[-2] + *pdVar14;
          uVar8 = uVar8 + 4;
          pdVar14 = pdVar14 + 8;
        } while ((uVar22 & 0xfffffffffffffffc) != uVar8);
      }
      else {
        uVar8 = 0;
      }
      if ((-(uVar19 + lVar12) & 3) != 0) {
        if (uVar17 < uVar7) {
          uVar7 = uVar17;
        }
        uVar17 = 0;
        do {
          dVar24 = dVar24 + *(double *)(uVar8 * 0x10 + lVar2 + 8 + uVar17);
          uVar17 = uVar17 + 0x10;
        } while (((byte)((char)uVar18 - (char)uVar7) & 3) << 4 != uVar17);
      }
    }
  }
  goto LAB_00833fe0;
code_r0x00833e2f:
  uVar8 = uVar19;
  if (uVar22 + 1 < uVar19) {
    uVar8 = 0;
  }
  uVar22 = (uVar22 + 1) - uVar8;
  *(ulong *)(pauVar10[uVar6 * -0x29 + -0x1b] + 8) = uVar22;
  uVar17 = uVar17 - 1;
  *(ulong *)pauVar10[uVar6 * -0x29 + -0x1a] = uVar7;
  lVar21 = lVar21 + -1;
  uVar18 = (ulong)(byte)((char)uVar18 + 3);
  lVar12 = lVar12 + 1;
  if (lVar12 == 0) goto LAB_00833e90;
  goto LAB_00833dfa;
LAB_00833e90:
  dVar24 = 0.0;
LAB_00833fe0:
  *(double *)(pauVar10[uVar6 * -0x29 + -9] + 8) = dVar24;
  uVar17 = *(ulong *)pauVar10[uVar6 * -0x29 + -0x17];
  if (uVar17 != 0) {
    uVar19 = *(ulong *)(pauVar10[uVar6 * -0x29 + -0x19] + 8);
    lVar2 = *(long *)pauVar10[uVar6 * -0x29 + -0x18];
    dVar24 = *(double *)(pauVar10[uVar6 * -0x29 + -0x17] + 8);
    uVar22 = *(ulong *)(pauVar10[uVar6 * -0x29 + -0x18] + 8);
    lVar21 = uVar17 - uVar19;
    lVar12 = -uVar17;
    uVar18 = uVar17 & 0xffffffff;
    uVar7 = uVar17;
LAB_0083405a:
    uVar7 = uVar7 - 1;
    uVar8 = uVar19;
    if (uVar22 < uVar19) {
      uVar8 = 0;
    }
    lVar13 = uVar22 - uVar8;
    lVar15 = lVar13 * 0x10;
    if (dVar24 < param_1 - *(double *)(lVar2 + lVar15)) goto code_r0x0083408f;
    uVar7 = uVar19 - lVar13;
    uVar9 = lVar13 - lVar12;
    if (uVar7 < (ulong)-lVar12) {
      uVar9 = uVar19;
    }
    uVar19 = uVar7;
    if (uVar17 < uVar7) {
      uVar19 = uVar17;
    }
    dVar23 = 0.0;
    uVar9 = uVar9 - lVar13;
    if (uVar9 != 0) {
      if (uVar9 - 1 < 3) {
        uVar20 = 0;
      }
      else {
        uVar16 = uVar7;
        if (uVar17 < uVar7) {
          uVar16 = uVar17;
        }
        pdVar14 = (double *)(lVar2 + lVar15 + 0x38);
        uVar20 = 0;
        do {
          dVar23 = dVar23 + pdVar14[-6] + pdVar14[-4] + pdVar14[-2] + *pdVar14;
          uVar20 = uVar20 + 4;
          pdVar14 = pdVar14 + 8;
        } while ((uVar16 & 0xfffffffffffffffc) != uVar20);
      }
      if ((uVar9 & 3) != 0) {
        uVar9 = uVar7;
        if (uVar17 < uVar7) {
          uVar9 = uVar17;
        }
        uVar16 = 0;
        do {
          dVar23 = dVar23 + *(double *)(lVar15 + uVar20 * 0x10 + lVar2 + 8 + uVar16);
          uVar16 = uVar16 + 0x10;
        } while (((uint)uVar9 & 3) << 4 != uVar16);
      }
    }
    if (uVar7 < (ulong)-lVar12) {
      if ((uVar8 - uVar22) - lVar21 < 0xfffffffffffffffd) {
        pdVar14 = (double *)(lVar2 + 0x38);
        uVar22 = uVar17 - uVar7;
        if (uVar17 < uVar7) {
          uVar22 = 0;
        }
        uVar8 = 0;
        do {
          dVar23 = dVar23 + pdVar14[-6] + pdVar14[-4] + pdVar14[-2] + *pdVar14;
          uVar8 = uVar8 + 4;
          pdVar14 = pdVar14 + 8;
        } while ((uVar22 & 0xfffffffffffffffc) != uVar8);
      }
      else {
        uVar8 = 0;
      }
      if ((-(uVar19 + lVar12) & 3) != 0) {
        if (uVar17 < uVar7) {
          uVar7 = uVar17;
        }
        uVar17 = 0;
        do {
          dVar23 = dVar23 + *(double *)(uVar8 * 0x10 + lVar2 + 8 + uVar17);
          uVar17 = uVar17 + 0x10;
        } while (((byte)((char)uVar18 - (char)uVar7) & 3) << 4 != uVar17);
      }
    }
  }
LAB_00834230:
  *(double *)pauVar10[uVar6 * -0x29 + -8] = dVar23;
  uVar17 = *(ulong *)pauVar10[uVar6 * -0x29 + -0x14];
  dVar23 = 0.0;
  if (uVar17 != 0) {
    uVar19 = *(ulong *)(pauVar10[uVar6 * -0x29 + -0x16] + 8);
    lVar2 = *(long *)pauVar10[uVar6 * -0x29 + -0x15];
    dVar24 = *(double *)(pauVar10[uVar6 * -0x29 + -0x14] + 8);
    uVar22 = *(ulong *)(pauVar10[uVar6 * -0x29 + -0x15] + 8);
    lVar21 = uVar17 - uVar19;
    lVar12 = -uVar17;
    uVar18 = uVar17 & 0xffffffff;
    uVar7 = uVar17;
LAB_008342aa:
    uVar7 = uVar7 - 1;
    uVar8 = uVar19;
    if (uVar22 < uVar19) {
      uVar8 = 0;
    }
    lVar13 = uVar22 - uVar8;
    lVar15 = lVar13 * 0x10;
    if (dVar24 < param_1 - *(double *)(lVar2 + lVar15)) goto code_r0x008342df;
    uVar9 = uVar19 - lVar13;
    uVar7 = lVar13 - lVar12;
    if (uVar9 < (ulong)-lVar12) {
      uVar7 = uVar19;
    }
    uVar19 = uVar9;
    if (uVar17 < uVar9) {
      uVar19 = uVar17;
    }
    dVar23 = 0.0;
    uVar7 = uVar7 - lVar13;
    if (uVar7 != 0) {
      if (uVar7 - 1 < 3) {
        uVar20 = 0;
      }
      else {
        uVar16 = uVar9;
        if (uVar17 < uVar9) {
          uVar16 = uVar17;
        }
        pdVar14 = (double *)(lVar2 + lVar15 + 0x38);
        uVar20 = 0;
        do {
          dVar23 = dVar23 + pdVar14[-6] + pdVar14[-4] + pdVar14[-2] + *pdVar14;
          uVar20 = uVar20 + 4;
          pdVar14 = pdVar14 + 8;
        } while ((uVar16 & 0xfffffffffffffffc) != uVar20);
      }
      if ((uVar7 & 3) != 0) {
        uVar7 = uVar9;
        if (uVar17 < uVar9) {
          uVar7 = uVar17;
        }
        uVar16 = 0;
        do {
          dVar23 = dVar23 + *(double *)(lVar15 + uVar20 * 0x10 + lVar2 + 8 + uVar16);
          uVar16 = uVar16 + 0x10;
        } while (((uint)uVar7 & 3) << 4 != uVar16);
      }
    }
    if (uVar9 < (ulong)-lVar12) {
      if ((uVar8 - uVar22) - lVar21 < 0xfffffffffffffffd) {
        pdVar14 = (double *)(lVar2 + 0x38);
        uVar22 = uVar17 - uVar9;
        if (uVar17 < uVar9) {
          uVar22 = 0;
        }
        uVar7 = 0;
        do {
          dVar23 = dVar23 + pdVar14[-6] + pdVar14[-4] + pdVar14[-2] + *pdVar14;
          uVar7 = uVar7 + 4;
          pdVar14 = pdVar14 + 8;
        } while ((uVar22 & 0xfffffffffffffffc) != uVar7);
      }
      else {
        uVar7 = 0;
      }
      if ((-(uVar19 + lVar12) & 3) != 0) {
        if (uVar17 < uVar9) {
          uVar9 = uVar17;
        }
        uVar17 = 0;
        do {
          dVar23 = dVar23 + *(double *)(uVar7 * 0x10 + lVar2 + 8 + uVar17);
          uVar17 = uVar17 + 0x10;
        } while (((byte)((char)uVar18 - (char)uVar9) & 3) << 4 != uVar17);
      }
    }
  }
LAB_00833d30:
  uVar5 = uVar5 - 1 & uVar5;
  *(double *)(pauVar10[uVar6 * -0x29 + -8] + 8) = dVar23;
  lStack_40 = lStack_40 + -1;
  if (lStack_40 == 0) {
    return 0;
  }
  goto LAB_00833d4b;
code_r0x0083408f:
  uVar8 = uVar19;
  if (uVar22 + 1 < uVar19) {
    uVar8 = 0;
  }
  uVar22 = (uVar22 + 1) - uVar8;
  *(ulong *)(pauVar10[uVar6 * -0x29 + -0x18] + 8) = uVar22;
  uVar17 = uVar17 - 1;
  *(ulong *)pauVar10[uVar6 * -0x29 + -0x17] = uVar7;
  lVar21 = lVar21 + -1;
  uVar18 = (ulong)(byte)((char)uVar18 + 3);
  lVar12 = lVar12 + 1;
  if (lVar12 == 0) goto LAB_00834230;
  goto LAB_0083405a;
code_r0x008342df:
  uVar8 = uVar19;
  if (uVar22 + 1 < uVar19) {
    uVar8 = 0;
  }
  uVar22 = (uVar22 + 1) - uVar8;
  *(ulong *)(pauVar10[uVar6 * -0x29 + -0x15] + 8) = uVar22;
  uVar17 = uVar17 - 1;
  *(ulong *)pauVar10[uVar6 * -0x29 + -0x14] = uVar7;
  lVar21 = lVar21 + -1;
  uVar18 = (ulong)(byte)((char)uVar18 + 3);
  lVar12 = lVar12 + 1;
  if (lVar12 == 0) goto LAB_00833d30;
  goto LAB_008342aa;
}


