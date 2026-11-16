// ELF address 0x000000000004e170; core::ptr::drop_in_place<strategy_tm6::signal_pairs_tree::SignalPairStats>

/* core::ptr::drop_in_place<strategy_tm6::signal_pairs_tree::SignalPairStats> */

void __rustcall
core::ptr::drop_in_place<strategy_tm6::signal_pairs_tree::SignalPairStats>(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  
  puVar5 = PTR___rust_dealloc_001d9238;
  uVar1 = *param_1;
  uVar2 = param_1[3];
  if (uVar2 != 0) {
    uVar3 = param_1[1];
    uVar4 = param_1[2];
    uVar6 = uVar1;
    if (uVar4 < uVar1) {
      uVar6 = 0;
    }
    lVar7 = uVar4 - uVar6;
    uVar8 = uVar1 - lVar7;
    uVar9 = uVar2 - uVar8;
    if (uVar2 < uVar8) {
      uVar9 = 0;
    }
    uVar10 = lVar7 + uVar2;
    if (uVar2 >= uVar8 && uVar2 - uVar8 != 0) {
      uVar10 = uVar1;
    }
    lVar7 = uVar10 - lVar7;
    if (lVar7 != 0) {
      puVar11 = (undefined8 *)(uVar4 * 0x68 + uVar6 * -0x68 + uVar3 + 0x50);
      do {
        if (puVar11[-1] != 0) {
          (*(code *)puVar5)(*puVar11,puVar11[-1],1);
        }
        puVar11 = puVar11 + 0xd;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    puVar5 = PTR___rust_dealloc_001d9238;
    if (uVar8 < uVar2) {
      puVar11 = (undefined8 *)(uVar3 + 0x50);
      do {
        if (puVar11[-1] != 0) {
          (*(code *)puVar5)(*puVar11,puVar11[-1],1);
        }
        puVar11 = puVar11 + 0xd;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
  }
  if (uVar1 != 0) {
    (*(code *)PTR___rust_dealloc_001d9238)(param_1[1],uVar1 * 0x68,8);
  }
  _<hashbrown::raw::RawTable<T,A>as_core::ops::drop::Drop>::drop(param_1 + 5);
  return;
}


