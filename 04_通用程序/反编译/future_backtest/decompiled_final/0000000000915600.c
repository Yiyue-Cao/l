// ELF address 0x0000000000915600; future_backtest::Exchange::matched::matching_depth_position_foc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN15future_backtest8Exchange7matched27matching_depth_position_foc17hfdb9c67ae9b32e84E
               (double param_1,double param_2,double *param_3,double *param_4,char param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  if ((param_2 == 0.0) && (!NAN(param_2))) {
    *(undefined1 *)(param_3 + 2) = 2;
    return;
  }
  param_2 = (double)((ulong)param_2 & _DAT_00354750);
  bVar2 = false;
  dVar9 = 0.0;
  if (param_5 == '\0') {
    if (param_2 <= _DAT_00353b80) goto LAB_00a15b61;
    dVar12 = 0.0;
    if (param_4[10] <= param_1) {
      dVar9 = param_4[0xb];
      dVar12 = param_2;
      if (dVar9 <= param_2) {
        dVar12 = dVar9;
      }
      dVar9 = (double)(~-(ulong)NAN(dVar9) & (ulong)dVar12 | -(ulong)NAN(dVar9) & (ulong)param_2);
      dVar10 = 0.0;
      dVar5 = dVar9 + 0.0;
      if ((dVar9 != 0.0) || (NAN(dVar9))) {
        dVar10 = (param_4[10] * dVar9 + 0.0) / dVar5;
      }
      param_2 = param_2 - dVar9;
      bVar2 = param_2 < _DAT_00353b80;
      dVar9 = dVar5;
      dVar12 = dVar10;
      if ((param_4[0xc] <= param_1) && (_DAT_00353b80 < param_2)) {
        dVar9 = param_4[0xd];
        dVar12 = param_2;
        if (dVar9 <= param_2) {
          dVar12 = dVar9;
        }
        dVar11 = (double)(~-(ulong)NAN(dVar9) & (ulong)dVar12 | -(ulong)NAN(dVar9) & (ulong)param_2)
        ;
        dVar9 = dVar5 + dVar11;
        dVar12 = 0.0;
        if ((dVar9 != 0.0) || (NAN(dVar9))) {
          dVar12 = (dVar5 * dVar10 + param_4[0xc] * dVar11) / dVar9;
        }
        param_2 = param_2 - dVar11;
        bVar4 = param_2 < _DAT_00353b80 || bVar2;
        bVar2 = param_2 < _DAT_00353b80 || bVar2;
        if ((param_4[0xe] <= param_1) && (_DAT_00353b80 < param_2)) {
          dVar10 = param_4[0xf];
          dVar5 = param_2;
          if (dVar10 <= param_2) {
            dVar5 = dVar10;
          }
          dVar11 = (double)(~-(ulong)NAN(dVar10) & (ulong)dVar5 |
                           -(ulong)NAN(dVar10) & (ulong)param_2);
          dVar5 = dVar9 + dVar11;
          dVar10 = 0.0;
          if ((dVar5 != 0.0) || (NAN(dVar5))) {
            dVar10 = (dVar9 * dVar12 + param_4[0xe] * dVar11) / dVar5;
          }
          param_2 = param_2 - dVar11;
          bVar2 = param_2 < _DAT_00353b80 || bVar4;
          dVar9 = dVar5;
          dVar12 = dVar10;
          if ((param_4[0x10] <= param_1) && (_DAT_00353b80 < param_2)) {
            dVar9 = param_4[0x11];
            dVar12 = param_2;
            if (dVar9 <= param_2) {
              dVar12 = dVar9;
            }
            dVar11 = (double)(~-(ulong)NAN(dVar9) & (ulong)dVar12 |
                             -(ulong)NAN(dVar9) & (ulong)param_2);
            dVar9 = dVar5 + dVar11;
            dVar12 = 0.0;
            if ((dVar9 != 0.0) || (NAN(dVar9))) {
              dVar12 = (dVar5 * dVar10 + param_4[0x10] * dVar11) / dVar9;
            }
            param_2 = param_2 - dVar11;
            bVar2 = param_2 < _DAT_00353b80 || bVar2;
            if ((param_4[0x12] <= param_1) && (_DAT_00353b80 < param_2)) {
              dVar10 = param_4[0x13];
              dVar5 = param_2;
              if (dVar10 <= param_2) {
                dVar5 = dVar10;
              }
              dVar5 = (double)(~-(ulong)NAN(dVar10) & (ulong)dVar5 |
                              -(ulong)NAN(dVar10) & (ulong)param_2);
              dVar11 = dVar9 + dVar5;
              dVar10 = 0.0;
              if ((dVar11 != 0.0) || (NAN(dVar11))) {
                dVar10 = (dVar9 * dVar12 + param_4[0x12] * dVar5) / dVar11;
              }
              bVar4 = _DAT_00353b80 == param_2 - dVar5;
              bVar3 = _DAT_00353b80 < param_2 - dVar5;
              goto LAB_00a15b49;
            }
          }
        }
      }
    }
  }
  else {
    if (param_2 <= _DAT_00353b80) {
LAB_00a15b61:
      *param_3 = 0.0;
      param_3[1] = 0.0;
      *(undefined1 *)(param_3 + 2) = 0;
      return;
    }
    bVar2 = false;
    dVar12 = 0.0;
    if (param_1 <= *param_4) {
      dVar9 = param_4[1];
      dVar12 = param_2;
      if (dVar9 <= param_2) {
        dVar12 = dVar9;
      }
      dVar8 = (double)(~-(ulong)NAN(dVar9) & (ulong)dVar12 | -(ulong)NAN(dVar9) & (ulong)param_2);
      dVar10 = 0.0;
      dVar5 = 0.0 - dVar8;
      if ((dVar5 != 0.0) || (NAN(dVar5))) {
        dVar10 = (0.0 - *param_4 * dVar8) / dVar5;
      }
      dVar8 = dVar8 - param_2;
      bVar2 = _DAT_00352718 < dVar8;
      dVar9 = dVar5;
      dVar12 = dVar10;
      if ((param_1 <= param_4[2]) && (dVar8 < _DAT_00352718)) {
        dVar9 = param_4[3];
        dVar11 = (double)(_DAT_00354750 & (ulong)dVar8);
        dVar12 = dVar11;
        if (dVar9 <= dVar11) {
          dVar12 = dVar9;
        }
        dVar11 = (double)(~-(ulong)NAN(dVar9) & (ulong)dVar12 | -(ulong)NAN(dVar9) & (ulong)dVar11);
        dVar9 = dVar5 - dVar11;
        dVar12 = 0.0;
        if ((dVar9 != 0.0) || (NAN(dVar9))) {
          dVar12 = (dVar5 * dVar10 - param_4[2] * dVar11) / dVar9;
        }
        dVar8 = dVar8 + dVar11;
        bVar2 = _DAT_00352718 < dVar8 || bVar2;
        if ((param_1 <= param_4[4]) && (dVar8 < _DAT_00352718)) {
          dVar10 = param_4[5];
          dVar5 = (double)(_DAT_00354750 & (ulong)dVar8);
          uVar6 = SUB84(dVar5,0);
          uVar7 = (undefined4)((ulong)dVar5 >> 0x20);
          if (dVar10 <= dVar5) {
            uVar6 = SUB84(dVar10,0);
            uVar7 = (undefined4)((ulong)dVar10 >> 0x20);
          }
          dVar11 = (double)(~-(ulong)NAN(dVar10) & CONCAT44(uVar7,uVar6) |
                           -(ulong)NAN(dVar10) & (ulong)dVar5);
          dVar5 = dVar9 - dVar11;
          dVar10 = 0.0;
          if ((dVar5 != 0.0) || (NAN(dVar5))) {
            dVar10 = (dVar9 * dVar12 - param_4[4] * dVar11) / dVar5;
          }
          dVar8 = dVar8 + dVar11;
          bVar4 = _DAT_00352718 < dVar8 || bVar2;
          bVar2 = _DAT_00352718 < dVar8 || bVar2;
          dVar9 = dVar5;
          dVar12 = dVar10;
          if ((param_1 <= param_4[6]) && (dVar8 < _DAT_00352718)) {
            dVar9 = param_4[7];
            dVar11 = (double)(_DAT_00354750 & (ulong)dVar8);
            dVar12 = dVar11;
            if (dVar9 <= dVar11) {
              dVar12 = dVar9;
            }
            dVar11 = (double)(~-(ulong)NAN(dVar9) & (ulong)dVar12 |
                             -(ulong)NAN(dVar9) & (ulong)dVar11);
            dVar9 = dVar5 - dVar11;
            dVar12 = 0.0;
            if ((dVar9 != 0.0) || (NAN(dVar9))) {
              dVar12 = (dVar5 * dVar10 - param_4[6] * dVar11) / dVar9;
            }
            dVar8 = dVar8 + dVar11;
            bVar2 = _DAT_00352718 < dVar8 || bVar4;
            if ((param_1 <= param_4[8]) && (dVar8 < _DAT_00352718)) {
              dVar10 = param_4[9];
              dVar11 = (double)(_DAT_00354750 & (ulong)dVar8);
              dVar5 = dVar11;
              if (dVar10 <= dVar11) {
                dVar5 = dVar10;
              }
              dVar5 = (double)(~-(ulong)NAN(dVar10) & (ulong)dVar5 |
                              -(ulong)NAN(dVar10) & (ulong)dVar11);
              dVar11 = dVar9 - dVar5;
              dVar10 = 0.0;
              if ((dVar11 != 0.0) || (NAN(dVar11))) {
                dVar10 = (dVar9 * dVar12 - param_4[8] * dVar5) / dVar11;
              }
              bVar4 = dVar8 + dVar5 == _DAT_00352718;
              bVar3 = dVar8 + dVar5 < _DAT_00352718;
LAB_00a15b49:
              bVar1 = true;
              if (bVar3 || bVar4) {
                bVar1 = bVar2;
              }
              *param_3 = dVar10;
              param_3[1] = dVar11;
              *(bool *)(param_3 + 2) = bVar1;
              return;
            }
          }
        }
      }
    }
  }
  *param_3 = dVar12;
  param_3[1] = dVar9;
  *(bool *)(param_3 + 2) = bVar2;
  return;
}


