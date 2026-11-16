// ELF address 0x0000000000913ff0; future_backtest::Exchange::matched::matching_depth_position_ioc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN15future_backtest8Exchange7matched27matching_depth_position_ioc17hb22b126a6c018cc0E
               (double param_1,double param_2,double *param_3,double *param_4,char param_5)

{
  bool bVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  dVar3 = 0.0;
  if ((param_2 == 0.0) && (!NAN(param_2))) {
    *(undefined1 *)(param_3 + 2) = 2;
    return;
  }
  param_2 = (double)((ulong)param_2 & _DAT_00354750);
  bVar2 = false;
  if (param_5 == '\0') {
    if (param_2 <= _DAT_00353b80) {
      *param_3 = 0.0;
      param_3[1] = 0.0;
      *(undefined1 *)(param_3 + 2) = 0;
      return;
    }
    dVar8 = 0.0;
    if (param_4[10] <= param_1) {
      dVar3 = param_4[0xb];
      dVar8 = param_2;
      if (dVar3 <= param_2) {
        dVar8 = dVar3;
      }
      dVar7 = (double)(~-(ulong)NAN(dVar3) & (ulong)dVar8 | -(ulong)NAN(dVar3) & (ulong)param_2);
      dVar8 = 0.0;
      dVar3 = dVar7 + 0.0;
      if ((dVar7 != 0.0) || (NAN(dVar7))) {
        dVar8 = (param_4[10] * dVar7 + 0.0) / dVar3;
      }
      bVar2 = _DAT_00353b80 < dVar7;
      if ((param_4[0xc] <= param_1) && (param_2 = param_2 - dVar7, _DAT_00353b80 < param_2)) {
        dVar7 = param_4[0xd];
        dVar4 = param_2;
        if (dVar7 <= param_2) {
          dVar4 = dVar7;
        }
        dVar10 = (double)(~-(ulong)NAN(dVar7) & (ulong)dVar4 | -(ulong)NAN(dVar7) & (ulong)param_2);
        dVar4 = dVar3 + dVar10;
        dVar7 = 0.0;
        if ((dVar4 != 0.0) || (NAN(dVar4))) {
          dVar7 = (dVar3 * dVar8 + param_4[0xc] * dVar10) / dVar4;
        }
        bVar2 = _DAT_00353b80 < dVar10 || bVar2;
        if ((param_4[0xe] <= param_1) && (param_2 = param_2 - dVar10, _DAT_00353b80 < param_2)) {
          dVar3 = param_4[0xf];
          dVar8 = param_2;
          if (dVar3 <= param_2) {
            dVar8 = dVar3;
          }
          dVar10 = (double)(~-(ulong)NAN(dVar3) & (ulong)dVar8 | -(ulong)NAN(dVar3) & (ulong)param_2
                           );
          dVar3 = dVar4 + dVar10;
          dVar8 = 0.0;
          if ((dVar3 != 0.0) || (NAN(dVar3))) {
            dVar8 = (dVar4 * dVar7 + param_4[0xe] * dVar10) / dVar3;
          }
          bVar2 = _DAT_00353b80 < dVar10 || bVar2;
          if ((param_1 < param_4[0x10]) || (param_2 = param_2 - dVar10, param_2 <= _DAT_00353b80))
          goto LAB_00a14538;
          dVar7 = param_4[0x11];
          dVar4 = param_2;
          if (dVar7 <= param_2) {
            dVar4 = dVar7;
          }
          dVar10 = (double)(~-(ulong)NAN(dVar7) & (ulong)dVar4 | -(ulong)NAN(dVar7) & (ulong)param_2
                           );
          dVar4 = dVar3 + dVar10;
          dVar7 = 0.0;
          if ((dVar4 != 0.0) || (NAN(dVar4))) {
            dVar7 = (dVar3 * dVar8 + param_4[0x10] * dVar10) / dVar4;
          }
          bVar2 = _DAT_00353b80 < dVar10 || bVar2;
          if ((param_4[0x12] <= param_1) && (param_2 = param_2 - dVar10, _DAT_00353b80 < param_2)) {
            dVar3 = param_4[0x13];
            dVar8 = param_2;
            if (dVar3 <= param_2) {
              dVar8 = dVar3;
            }
            dVar8 = (double)(~-(ulong)NAN(dVar3) & (ulong)dVar8 |
                            -(ulong)NAN(dVar3) & (ulong)param_2);
            dVar10 = dVar4 + dVar8;
            dVar3 = 0.0;
            if ((dVar10 != 0.0) || (NAN(dVar10))) {
              dVar3 = (dVar4 * dVar7 + param_4[0x12] * dVar8) / dVar10;
            }
LAB_00a14514:
            bVar1 = true;
            if (dVar8 <= _DAT_00353b80) {
              bVar1 = bVar2;
            }
            *param_3 = dVar3;
            param_3[1] = dVar10;
            *(bool *)(param_3 + 2) = bVar1;
            return;
          }
        }
        *param_3 = dVar7;
        param_3[1] = dVar4;
        *(bool *)(param_3 + 2) = bVar2;
        return;
      }
    }
  }
  else if (param_2 <= _DAT_00353b80) {
    dVar8 = 0.0;
  }
  else {
    dVar8 = 0.0;
    bVar2 = false;
    if (param_1 <= *param_4) {
      dVar3 = param_4[1];
      dVar8 = param_2;
      if (dVar3 <= param_2) {
        dVar8 = dVar3;
      }
      dVar7 = (double)(~-(ulong)NAN(dVar3) & (ulong)dVar8 | -(ulong)NAN(dVar3) & (ulong)param_2);
      dVar8 = 0.0;
      dVar3 = 0.0 - dVar7;
      if ((dVar3 != 0.0) || (NAN(dVar3))) {
        dVar8 = (0.0 - *param_4 * dVar7) / dVar3;
      }
      bVar2 = _DAT_00353b80 < dVar7;
      if ((param_1 <= param_4[2]) && (dVar7 = dVar7 - param_2, dVar7 < _DAT_00352718)) {
        dVar4 = param_4[3];
        dVar9 = (double)(_DAT_00354750 & (ulong)dVar7);
        dVar10 = dVar9;
        if (dVar4 <= dVar9) {
          dVar10 = dVar4;
        }
        dVar10 = (double)(~-(ulong)NAN(dVar4) & (ulong)dVar10 | -(ulong)NAN(dVar4) & (ulong)dVar9);
        dVar9 = dVar3 - dVar10;
        dVar4 = 0.0;
        if ((dVar9 != 0.0) || (NAN(dVar9))) {
          dVar4 = (dVar3 * dVar8 - param_4[2] * dVar10) / dVar9;
        }
        bVar2 = _DAT_00353b80 < dVar10 || bVar2;
        if ((param_1 <= param_4[4]) && (dVar7 = dVar7 + dVar10, dVar7 < _DAT_00352718)) {
          dVar3 = param_4[5];
          dVar8 = (double)(_DAT_00354750 & (ulong)dVar7);
          uVar5 = SUB84(dVar8,0);
          uVar6 = (undefined4)((ulong)dVar8 >> 0x20);
          if (dVar3 <= dVar8) {
            uVar5 = SUB84(dVar3,0);
            uVar6 = (undefined4)((ulong)dVar3 >> 0x20);
          }
          dVar10 = (double)(~-(ulong)NAN(dVar3) & CONCAT44(uVar6,uVar5) |
                           -(ulong)NAN(dVar3) & (ulong)dVar8);
          dVar3 = dVar9 - dVar10;
          dVar8 = 0.0;
          if ((dVar3 != 0.0) || (NAN(dVar3))) {
            dVar8 = (dVar9 * dVar4 - param_4[4] * dVar10) / dVar3;
          }
          bVar2 = _DAT_00353b80 < dVar10 || bVar2;
          if ((param_4[6] < param_1) || (dVar7 = dVar7 + dVar10, _DAT_00352718 <= dVar7))
          goto LAB_00a14538;
          dVar4 = param_4[7];
          dVar9 = (double)(_DAT_00354750 & (ulong)dVar7);
          dVar10 = dVar9;
          if (dVar4 <= dVar9) {
            dVar10 = dVar4;
          }
          dVar10 = (double)(~-(ulong)NAN(dVar4) & (ulong)dVar10 | -(ulong)NAN(dVar4) & (ulong)dVar9)
          ;
          dVar9 = dVar3 - dVar10;
          dVar4 = 0.0;
          if ((dVar9 != 0.0) || (NAN(dVar9))) {
            dVar4 = (dVar3 * dVar8 - param_4[6] * dVar10) / dVar9;
          }
          bVar2 = _DAT_00353b80 < dVar10 || bVar2;
          if ((param_1 <= param_4[8]) && (dVar7 + dVar10 < _DAT_00352718)) {
            dVar3 = param_4[9];
            dVar7 = (double)((ulong)(dVar7 + dVar10) & _DAT_00354750);
            dVar8 = dVar7;
            if (dVar3 <= dVar7) {
              dVar8 = dVar3;
            }
            dVar8 = (double)(~-(ulong)NAN(dVar3) & (ulong)dVar8 | -(ulong)NAN(dVar3) & (ulong)dVar7)
            ;
            dVar10 = dVar9 - dVar8;
            dVar3 = 0.0;
            if ((dVar10 != 0.0) || (NAN(dVar10))) {
              dVar3 = (dVar9 * dVar4 - param_4[8] * dVar8) / dVar10;
            }
            goto LAB_00a14514;
          }
        }
        *param_3 = dVar4;
        param_3[1] = dVar9;
        *(bool *)(param_3 + 2) = bVar2;
        return;
      }
    }
  }
LAB_00a14538:
  *param_3 = dVar8;
  param_3[1] = dVar3;
  *(bool *)(param_3 + 2) = bVar2;
  return;
}


