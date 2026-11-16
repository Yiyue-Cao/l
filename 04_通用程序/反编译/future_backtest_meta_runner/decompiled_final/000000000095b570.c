// ELF address 0x000000000095b570; future_backtest::MetaControl::controller::MetaController::slot_state

undefined8
_ZN15future_backtest11MetaControl10controller14MetaController10slot_state17h080a20c9d3c83284E
          (long *param_1,long param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  bool bVar10;
  
  lVar4 = param_1[3];
  uVar2 = 1;
  if (lVar4 == 0) {
    return 1;
  }
  lVar6 = param_1[4];
  while( true ) {
    lVar9 = 0;
    uVar5 = 0xffffffffffffffff;
    do {
      uVar7 = (ulong)*(ushort *)(lVar4 + 0x13e);
      if ((ulong)((uint)*(ushort *)(lVar4 + 0x13e) * 8) * 3 == lVar9) goto LAB_00a5b5e3;
      iVar1 = *(int *)(lVar4 + 0x114 + uVar5 * 4);
      uVar7 = uVar5 + 1;
      lVar9 = lVar9 + 0x18;
      uVar5 = uVar7;
    } while ((char)((iVar1 < param_3) - (param_3 < iVar1)) == '\x01');
    if (iVar1 < param_3 == param_3 < iVar1) break;
LAB_00a5b5e3:
    bVar10 = lVar6 == 0;
    lVar6 = lVar6 + -1;
    if (bVar10) {
      return 1;
    }
    lVar4 = *(long *)(lVar4 + 0x140 + uVar7 * 8);
  }
  lVar6 = *(long *)(lVar4 + -8 + lVar9);
  uVar5 = *(ulong *)(lVar4 + lVar9);
  uVar8 = uVar5 & 0xfffffffffffffff8;
  uVar3 = (uint)uVar5 & 7;
  uVar7 = 0;
  while (uVar8 != uVar7) {
    if (((((*(long *)(lVar6 + uVar7 * 8) == param_2) ||
          (*(long *)(lVar6 + 8 + uVar7 * 8) == param_2)) ||
         (*(long *)(lVar6 + 0x10 + uVar7 * 8) == param_2)) ||
        ((*(long *)(lVar6 + 0x18 + uVar7 * 8) == param_2 ||
         (*(long *)(lVar6 + 0x20 + uVar7 * 8) == param_2)))) ||
       ((*(long *)(lVar6 + 0x28 + uVar7 * 8) == param_2 ||
        ((*(long *)(lVar6 + 0x30 + uVar7 * 8) == param_2 ||
         (lVar4 = uVar7 * 8, uVar7 = uVar7 + 8, *(long *)(lVar6 + 0x38 + lVar4) == param_2))))))
    goto LAB_00a5b660;
  }
  if ((uVar5 & 7) == 0) {
    return 1;
  }
  if (*(long *)(lVar6 + uVar8 * 8) != param_2) {
    if (uVar3 == 1) {
      return 1;
    }
    if (*(long *)(lVar6 + 8 + uVar8 * 8) != param_2) {
      if (uVar3 == 2) {
        return 1;
      }
      if (*(long *)(lVar6 + 0x10 + uVar8 * 8) != param_2) {
        if (uVar3 == 3) {
          return 1;
        }
        if (*(long *)(lVar6 + 0x18 + uVar8 * 8) != param_2) {
          if (uVar3 == 4) {
            return 1;
          }
          if (*(long *)(lVar6 + 0x20 + uVar8 * 8) != param_2) {
            if (uVar3 == 5) {
              return 1;
            }
            if (*(long *)(lVar6 + 0x28 + uVar8 * 8) != param_2) {
              if (uVar3 == 6) {
                return 1;
              }
              if ((*(long *)(lVar6 + 0x30 + uVar8 * 8) != param_2) && (uVar3 == 7)) {
                return 1;
              }
            }
          }
        }
      }
    }
  }
LAB_00a5b660:
  lVar4 = *param_1;
  if (lVar4 != 0) {
    lVar6 = param_1[1];
    while( true ) {
      lVar9 = (ulong)*(ushort *)(lVar4 + 0x36) << 2;
      uVar5 = 0xffffffffffffffff;
      do {
        uVar7 = (ulong)*(ushort *)(lVar4 + 0x36);
        if (lVar9 == 0) goto LAB_00a5b6b3;
        iVar1 = *(int *)(lVar4 + 0xc + uVar5 * 4);
        uVar7 = uVar5 + 1;
        lVar9 = lVar9 + -4;
        uVar5 = uVar7;
      } while ((char)((iVar1 < param_3) - (param_3 < iVar1)) == '\x01');
      if (iVar1 < param_3 == param_3 < iVar1) break;
LAB_00a5b6b3:
      bVar10 = lVar6 == 0;
      lVar6 = lVar6 + -1;
      if (bVar10) {
        return 1;
      }
      lVar4 = *(long *)(lVar4 + 0x38 + uVar7 * 8);
    }
    uVar2 = 0;
  }
  return uVar2;
}


