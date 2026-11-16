// ELF address 0x0000000000041eb0; probe_features::compute

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN14probe_features7compute17h0250887ab820da95E
               (double param_1,double param_2,double *param_3,char param_4,long *param_5,
               long param_6)

{
  double dVar1;
  long lVar2;
  double dVar3;
  undefined1 auVar4 [16];
  long lVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  
  dVar18 = _UNK_00118818;
  if (_DAT_001158f0 < param_2) {
    lVar2 = *param_5;
    dVar14 = *(double *)(lVar2 + 0x48);
    dVar19 = *(double *)(lVar2 + 0x98);
    auVar16._4_4_ = -(uint)(dVar14 <= _UNK_00115ac8);
    auVar16._0_4_ = -(uint)(dVar19 <= _DAT_00115ac0);
    auVar16._8_4_ = -(uint)(*(double *)(lVar2 + 0xa0) <= _DAT_00115ac0);
    auVar16._12_4_ = -(uint)(*(double *)(lVar2 + 0x50) <= _UNK_00115ac8);
    iVar6 = movmskps((int)param_3,auVar16);
    if ((iVar6 == 0) && (dVar3 = dVar14 - dVar19, _DAT_001158f0 < dVar3)) {
      lVar5 = lVar2 + 0x98;
      lVar7 = lVar2 + 0x48;
      dVar19 = param_1 - dVar19;
      if (param_4 == '\0') {
        dVar13 = (param_1 - dVar14) / param_2;
        dVar17 = 0.0;
        dVar18 = 0.0;
        uVar10 = 0;
        while (uVar10 < 5) {
          dVar14 = *(double *)(lVar5 + uVar10 * 0x10);
          if (dVar14 <= _DAT_001158f0) {
LAB_001421c0:
            if (uVar10 == 4) break;
            uVar9 = uVar10 + 2;
            lVar8 = (uVar10 + 1) * 0x10;
            dVar14 = *(double *)(lVar5 + lVar8);
            if (_DAT_001158f0 < dVar14) {
              dVar1 = *(double *)(lVar2 + 0xa0 + lVar8);
              uVar11 = SUB84(dVar1,0);
              uVar12 = (undefined4)((ulong)dVar1 >> 0x20);
              if (_DAT_001158f0 < dVar1) goto LAB_00142163;
            }
            if (2 < uVar10) break;
            dVar14 = *(double *)(lVar5 + uVar9 * 0x10);
            if (_DAT_001158f0 < dVar14) {
              dVar1 = *(double *)(lVar2 + 0xa0 + uVar9 * 0x10);
              uVar11 = SUB84(dVar1,0);
              uVar12 = (undefined4)((ulong)dVar1 >> 0x20);
              uVar9 = uVar10 + 3;
              if (_DAT_001158f0 < dVar1) goto LAB_00142163;
            }
            if (uVar10 == 2) break;
            uVar9 = uVar10 | 4;
            lVar8 = (uVar10 + 3) * 0x10;
            dVar14 = *(double *)(lVar5 + lVar8);
            if (_DAT_001158f0 < dVar14) {
              dVar1 = *(double *)(lVar2 + 0xa0 + lVar8);
              uVar11 = SUB84(dVar1,0);
              uVar12 = (undefined4)((ulong)dVar1 >> 0x20);
              if (_DAT_001158f0 < dVar1) goto LAB_00142163;
            }
            if ((uVar10 != 0) ||
               (dVar14 = *(double *)(lVar5 + uVar9 * 0x10), dVar14 <= _DAT_001158f0)) break;
            dVar1 = *(double *)(lVar2 + 0xe0);
            uVar11 = SUB84(dVar1,0);
            uVar12 = (undefined4)((ulong)dVar1 >> 0x20);
            uVar9 = 5;
            if (dVar1 <= _DAT_001158f0) break;
          }
          else {
            dVar1 = *(double *)(lVar2 + 0xa0 + uVar10 * 0x10);
            uVar11 = SUB84(dVar1,0);
            uVar12 = (undefined4)((ulong)dVar1 >> 0x20);
            uVar9 = uVar10 + 1;
            if (dVar1 <= _DAT_001158f0) goto LAB_001421c0;
          }
LAB_00142163:
          dVar17 = dVar17 + (double)CONCAT44(uVar12,uVar11);
          uVar10 = -(ulong)(_DAT_00115928 + param_1 <= dVar14);
          dVar18 = (double)(~uVar10 & (ulong)dVar18 |
                           (ulong)((double)CONCAT44(uVar12,uVar11) + dVar18) & uVar10);
          uVar10 = uVar9;
        }
        dVar1 = dVar13;
        if (dVar13 <= 0.0) {
          dVar1 = 0.0;
        }
        auVar15._8_8_ = _DAT_00115d60 ^ (ulong)dVar19;
        auVar15._0_8_ = dVar19;
      }
      else {
        dVar13 = (double)((ulong)dVar19 ^ _DAT_00115d60) / param_2;
        dVar17 = 0.0;
        dVar1 = dVar13;
        if (dVar13 <= 0.0) {
          dVar1 = 0.0;
        }
        dVar18 = 0.0;
        uVar10 = 0;
        while (uVar10 < 5) {
          dVar19 = *(double *)(lVar7 + uVar10 * 0x10);
          if ((dVar19 <= _DAT_001158f0) ||
             (dVar20 = *(double *)(lVar2 + 0x50 + uVar10 * 0x10), uVar9 = uVar10 + 1,
             dVar20 <= _DAT_001158f0)) {
            if (uVar10 == 4) break;
            uVar9 = uVar10 + 2;
            lVar8 = (uVar10 + 1) * 0x10;
            dVar19 = *(double *)(lVar7 + lVar8);
            if ((dVar19 <= _DAT_001158f0) ||
               (dVar20 = *(double *)(lVar2 + 0x50 + lVar8), dVar20 <= _DAT_001158f0)) {
              if (2 < uVar10) break;
              dVar19 = *(double *)(lVar7 + uVar9 * 0x10);
              if ((dVar19 <= _DAT_001158f0) ||
                 (dVar20 = *(double *)(lVar2 + 0x50 + uVar9 * 0x10), uVar9 = uVar10 + 3,
                 dVar20 <= _DAT_001158f0)) {
                if (uVar10 == 2) break;
                uVar9 = uVar10 | 4;
                lVar8 = (uVar10 + 3) * 0x10;
                dVar19 = *(double *)(lVar7 + lVar8);
                if ((dVar19 <= _DAT_001158f0) ||
                   (dVar20 = *(double *)(lVar2 + 0x50 + lVar8), dVar20 <= _DAT_001158f0)) {
                  if ((uVar10 != 0) ||
                     (dVar19 = *(double *)(lVar7 + uVar9 * 0x10), dVar19 <= _DAT_001158f0)) break;
                  dVar20 = *(double *)(lVar2 + 0x90);
                  uVar9 = 5;
                  if (dVar20 <= _DAT_001158f0) break;
                }
              }
            }
          }
          dVar17 = dVar17 + dVar20;
          uVar10 = -(ulong)(dVar19 <= _DAT_001158f0 + param_1);
          dVar18 = (double)(~uVar10 & (ulong)dVar18 | (ulong)(dVar20 + dVar18) & uVar10);
          uVar10 = uVar9;
        }
        auVar15._0_8_ = dVar14 - param_1;
        auVar15._8_8_ = param_1 - dVar14;
      }
      uVar12 = 0;
      uVar11 = 0;
      dVar14 = (double)(_DAT_001158c0 & -(ulong)(0.0 < dVar13));
      if (_DAT_001158f0 < dVar17) {
        dVar18 = dVar18 / (dVar17 * _DAT_001158e0);
        if (_DAT_001158d8 <= dVar18) {
          dVar18 = _DAT_001158d8;
        }
        if (dVar18 <= 0.0) {
          dVar18 = 0.0;
        }
        uVar11 = SUB84(dVar18,0);
        uVar12 = (undefined4)((ulong)dVar18 >> 0x20);
      }
      if (param_4 != '\0') {
        lVar7 = lVar5;
      }
      dVar18 = 0.0;
      if (param_4 == '\0') {
        lVar5 = 0;
        dVar19 = 0.0;
        uVar10 = 0;
        while (uVar10 < 5) {
          uVar9 = uVar10 + 1;
          dVar17 = *(double *)(lVar2 + 0x50 + uVar10 * 0x10);
          if ((dVar17 <= _DAT_001158f0) ||
             (dVar20 = *(double *)(lVar7 + uVar10 * 0x10), dVar20 <= _DAT_001158f0)) {
            if (uVar10 == 4) break;
            dVar17 = *(double *)(lVar2 + 0x50 + uVar9 * 0x10);
            if ((dVar17 <= _DAT_001158f0) ||
               (dVar20 = *(double *)(lVar7 + uVar9 * 0x10), uVar9 = uVar10 + 2,
               dVar20 <= _DAT_001158f0)) {
              if (2 < uVar10) break;
              uVar9 = uVar10 + 3;
              lVar8 = (uVar10 + 2) * 0x10;
              dVar17 = *(double *)(lVar2 + 0x50 + lVar8);
              if ((dVar17 <= _DAT_001158f0) ||
                 (dVar20 = *(double *)(lVar7 + lVar8), dVar20 <= _DAT_001158f0)) {
                if (uVar10 == 2) break;
                dVar17 = *(double *)(lVar2 + 0x50 + uVar9 * 0x10);
                if ((dVar17 <= _DAT_001158f0) ||
                   (dVar20 = *(double *)(lVar7 + uVar9 * 0x10), uVar9 = uVar10 | 4,
                   dVar20 <= _DAT_001158f0)) {
                  if ((uVar10 != 0) || (dVar17 = *(double *)(lVar2 + 0x90), dVar17 <= _DAT_001158f0)
                     ) break;
                  dVar20 = *(double *)(lVar7 + (uVar10 | 4) * 0x10);
                  uVar9 = 5;
                  if (dVar20 <= _DAT_001158f0) break;
                }
              }
            }
          }
          lVar5 = (lVar5 + 1) - (ulong)(_DAT_001158f0 + param_1 < dVar20);
          if (dVar20 <= _DAT_001158f0 + param_1) {
            dVar19 = dVar19 + dVar17;
          }
          dVar18 = dVar18 + dVar17;
          uVar10 = uVar9;
        }
      }
      else {
        lVar5 = 0;
        dVar19 = 0.0;
        uVar10 = 0;
        while (uVar10 < 5) {
          uVar9 = uVar10 + 1;
          dVar17 = *(double *)(lVar2 + 0xa0 + uVar10 * 0x10);
          if ((dVar17 <= _DAT_001158f0) ||
             (dVar20 = *(double *)(lVar7 + uVar10 * 0x10), dVar20 <= _DAT_001158f0)) {
            if (uVar10 == 4) break;
            dVar17 = *(double *)(lVar2 + 0xa0 + uVar9 * 0x10);
            if ((dVar17 <= _DAT_001158f0) ||
               (dVar20 = *(double *)(lVar7 + uVar9 * 0x10), uVar9 = uVar10 + 2,
               dVar20 <= _DAT_001158f0)) {
              if (2 < uVar10) break;
              uVar9 = uVar10 + 3;
              lVar8 = (uVar10 + 2) * 0x10;
              dVar17 = *(double *)(lVar2 + 0xa0 + lVar8);
              if ((dVar17 <= _DAT_001158f0) ||
                 (dVar20 = *(double *)(lVar7 + lVar8), dVar20 <= _DAT_001158f0)) {
                if (uVar10 == 2) break;
                dVar17 = *(double *)(lVar2 + 0xa0 + uVar9 * 0x10);
                if ((dVar17 <= _DAT_001158f0) ||
                   (dVar20 = *(double *)(lVar7 + uVar9 * 0x10), uVar9 = uVar10 | 4,
                   dVar20 <= _DAT_001158f0)) {
                  if ((uVar10 != 0) || (dVar17 = *(double *)(lVar2 + 0xe0), dVar17 <= _DAT_001158f0)
                     ) break;
                  dVar20 = *(double *)(lVar7 + (uVar10 | 4) * 0x10);
                  uVar9 = 5;
                  if (dVar20 <= _DAT_001158f0) break;
                }
              }
            }
          }
          lVar5 = (lVar5 + 1) - (ulong)(dVar20 < param_1 + _DAT_00115928);
          if (param_1 + _DAT_00115928 <= dVar20) {
            dVar19 = dVar19 + dVar17;
          }
          dVar18 = dVar18 + dVar17;
          uVar10 = uVar9;
        }
      }
      auVar4._8_8_ = param_2;
      auVar4._0_8_ = dVar3;
      auVar16 = divpd(auVar15,auVar4);
      dVar17 = 0.0;
      if (_DAT_001158f0 < dVar18) {
        dVar17 = dVar19 / (dVar18 * _DAT_001158e0);
        if (_DAT_001158d8 <= dVar17) {
          dVar17 = _DAT_001158d8;
        }
        if (dVar17 <= 0.0) {
          dVar17 = 0.0;
        }
      }
      *param_3 = dVar13;
      param_3[1] = dVar14;
      param_3[2] = 0.0;
      *(undefined1 (*) [16])(param_3 + 3) = auVar16;
      param_3[5] = (double)CONCAT44(uVar12,uVar11);
      param_3[6] = dVar1;
      param_3[7] = dVar17;
      param_3[8] = (double)lVar5;
      param_3[9] = dVar3 / param_2;
      param_3[10] = (double)param_6;
      return;
    }
  }
  param_3[8] = _DAT_00118810;
  param_3[9] = dVar18;
  dVar18 = _UNK_00118808;
  param_3[6] = _DAT_00118800;
  param_3[7] = dVar18;
  dVar18 = _UNK_001187f8;
  param_3[4] = _DAT_001187f0;
  param_3[5] = dVar18;
  dVar18 = _UNK_001187e8;
  param_3[2] = _DAT_001187e0;
  param_3[3] = dVar18;
  dVar18 = _UNK_001187d8;
  *param_3 = _DAT_001187d0;
  param_3[1] = dVar18;
  param_3[10] = (double)param_6;
  return;
}


