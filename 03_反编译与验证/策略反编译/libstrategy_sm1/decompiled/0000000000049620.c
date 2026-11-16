// ELF address 0x0000000000049620; <strategy_sm1::StrategySM1 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth

/* _<strategy_sm1::StrategySM1 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth */

undefined8 __rustcall
_<strategy_sm1::StrategySM1_as_future_backtest_sdk::plugin::StrategyPlugin>::on_depth
          (long param_1,long param_2)

{
  double *pdVar1;
  ushort uVar2;
  undefined8 uVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  bool bVar13;
  long local_78;
  undefined1 local_50 [32];
  
  lVar11 = *(long *)(param_1 + 0x168);
  if (lVar11 != 0) {
    local_78 = *(long *)(param_1 + 0x170);
    uVar3 = *(undefined8 *)(param_2 + 0x28);
    uVar4 = *(ulong *)(param_2 + 0x30);
    while( true ) {
      uVar2 = *(ushort *)(lVar11 + 0x21a);
      uVar8 = 0xffffffffffffffff;
      lVar10 = 0;
      lVar6 = lVar11 + 8;
      do {
        uVar9 = (ulong)uVar2;
        if ((ulong)((uint)uVar2 * 8) * 3 == lVar10) goto LAB_00149705;
        uVar9 = *(ulong *)(lVar6 + 0x10);
        uVar7 = uVar9;
        if (uVar4 < uVar9) {
          uVar7 = uVar4;
        }
        iVar5 = (*(code *)PTR_memcmp_001d9768)(uVar3,*(undefined8 *)(lVar6 + 8),uVar7);
        lVar12 = uVar4 - uVar9;
        if (iVar5 != 0) {
          lVar12 = (long)iVar5;
        }
        lVar10 = lVar10 + 0x18;
        uVar8 = uVar8 + 1;
        lVar6 = lVar6 + 0x18;
      } while ((char)((0 < lVar12) - (lVar12 < 0)) == '\x01');
      uVar9 = uVar8;
      if (0 < lVar12 == lVar12 < 0) break;
LAB_00149705:
      bVar13 = local_78 == 0;
      local_78 = local_78 + -1;
      if (bVar13) {
        return 0;
      }
      lVar11 = *(long *)(lVar11 + 0x220 + uVar9 * 8);
    }
    pdVar1 = (double *)(lVar11 + 0xf8 + lVar10);
    if ((*(double *)(param_2 + 0x98) == *pdVar1) &&
       (!NAN(*(double *)(param_2 + 0x98)) && !NAN(*pdVar1))) {
      pdVar1 = (double *)(lVar11 + 0x100 + lVar10);
      if ((*(double *)(param_2 + 0x48) == *pdVar1) &&
         (!NAN(*(double *)(param_2 + 0x48)) && !NAN(*pdVar1))) {
        return 0;
      }
    }
    alloc::collections::btree::map::BTreeMap<K,V,A>::remove(local_50,param_1 + 0x168,param_2 + 0x20)
    ;
  }
  return 0;
}


