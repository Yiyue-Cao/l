// ELF address 0x000000000007a830; core::ptr::drop_in_place<future_backtest_sdk::context::StrategyContext>

/* WARNING: Switch with 1 destination removed at 0x0017a96a */
/* core::ptr::drop_in_place<future_backtest_sdk::context::StrategyContext> */

long __rustcall
core::ptr::drop_in_place<future_backtest_sdk::context::StrategyContext>(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  
  puVar3 = PTR___rust_dealloc_00203c78;
  plVar1 = (long *)param_1[7];
  if (plVar1 != (long *)0x0) {
    lVar7 = plVar1[2];
    if (lVar7 != 0) {
      puVar5 = (undefined8 *)(plVar1[1] + 8);
      do {
        if (puVar5[-1] != 0) {
          (*(code *)puVar3)(*puVar5,puVar5[-1],1);
        }
        puVar5 = puVar5 + 3;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    if (*plVar1 != 0) {
      (*(code *)PTR___rust_dealloc_00203c78)(plVar1[1],*plVar1 * 0x18,8);
    }
    (*(code *)PTR___rust_dealloc_00203c78)(plVar1,0x38,8);
  }
  puVar3 = PTR___rust_dealloc_00203c78;
  lVar7 = *param_1;
  lVar4 = -lVar7;
  lVar2 = param_1[1];
  lVar6 = param_1[2];
  if (lVar6 != 0) {
    puVar5 = (undefined8 *)(lVar2 + 8);
    do {
      if (puVar5[-1] != 0) {
        lVar4 = (*(code *)puVar3)(*puVar5,puVar5[-1],1);
      }
      puVar5 = puVar5 + 3;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  if (lVar7 != 0) {
    lVar4 = (*(code *)PTR___rust_dealloc_00203c78)(lVar2,lVar7 * 0x18,8);
  }
  lVar7 = param_1[3];
  if ((lVar7 != -0x8000000000000000) && (lVar7 != 0)) {
    lVar7 = (*(code *)PTR_free_002047f8)(param_1[4],lVar7,1);
    return lVar7;
  }
  return lVar4;
}


