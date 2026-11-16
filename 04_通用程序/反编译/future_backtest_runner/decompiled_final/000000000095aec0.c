// ELF address 0x000000000095aec0; future_backtest::MetaControl::capital::CapitalBook::gate_view

ulong * _ZN15future_backtest11MetaControl7capital11CapitalBook9gate_view17h15d1ce0d1892c558E
                  (ulong *param_1,long param_2,int param_3)

{
  int iVar1;
  double dVar2;
  double dVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  bool bVar9;
  double dVar10;
  int iStack_1c;
  
  lVar5 = param_2;
  if ((ulong)*(byte *)(param_2 + 0x58) == 1) {
    lVar5 = *(long *)(param_2 + 0x40);
    if (lVar5 != 0) {
      lVar6 = *(long *)(param_2 + 0x48);
      do {
        lVar8 = 0;
        uVar4 = 0xffffffffffffffff;
        do {
          uVar7 = (ulong)*(ushort *)(lVar5 + 0x2f6);
          if ((ulong)*(ushort *)(lVar5 + 0x2f6) * 0x40 + lVar8 == 0) goto LAB_00a5af53;
          iVar1 = *(int *)(lVar5 + 0x2cc + uVar4 * 4);
          uVar7 = uVar4 + 1;
          lVar8 = lVar8 + -0x40;
          uVar4 = uVar7;
        } while ((char)((iVar1 < param_3) - (param_3 < iVar1)) == '\x01');
        if (iVar1 < param_3 == param_3 < iVar1) {
          lVar5 = (lVar5 - lVar8) + -0x40;
          goto LAB_00a5af6a;
        }
LAB_00a5af53:
        bVar9 = lVar6 == 0;
        lVar6 = lVar6 + -1;
        if (bVar9) break;
        lVar5 = *(long *)(lVar5 + 0x2f8 + uVar7 * 8);
      } while( true );
    }
    iStack_1c = param_3;
    uVar4 = _ZN15future_backtest11MetaControl7capital11CapitalBook9gate_view28__u7b__u7b_closure_u7d__u7d_17hf8bc498dfe8a878eE_llvm_15565010581497186374
                      (&iStack_1c);
    param_1[1] = uVar4;
    *param_1 = 2;
  }
  else {
LAB_00a5af6a:
    dVar2 = *(double *)(lVar5 + 0x38);
    dVar3 = *(double *)(param_2 + 0x38);
    dVar10 = dVar3;
    if (dVar2 <= dVar3) {
      dVar10 = dVar2;
    }
    *param_1 = (ulong)*(byte *)(param_2 + 0x58);
    param_1[1] = (ulong)dVar2;
    param_1[2] = ~-(ulong)NAN(dVar2) & (ulong)dVar10 | -(ulong)NAN(dVar2) & (ulong)dVar3;
    param_1[3] = (ulong)dVar3;
  }
  return param_1;
}


