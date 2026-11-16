// ELF address 0x0000000000063270; core::ptr::drop_in_place<strategy_sm4::signal_pairs_tree::RollingmsQueue<strategy_sm4::signal_pairs_tree::SignalPair>>

/* WARNING: Switch with 1 destination removed at 0x0016333e */
/* core::ptr::drop_in_place<strategy_sm4::signal_pairs_tree::RollingmsQueue<strategy_sm4::signal_pairs_tree::SignalPair>>
    */

void __rustcall
core::ptr::
drop_in_place<strategy_sm4::signal_pairs_tree::RollingmsQueue<strategy_sm4::signal_pairs_tree::SignalPair>>
          (ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  
  puVar5 = PTR___rust_dealloc_001e78c8;
  uVar1 = *param_1;
  uVar2 = param_1[3];
  if (uVar2 != 0) {
    uVar3 = param_1[1];
    uVar4 = param_1[2];
    uVar6 = uVar1;
    if (uVar4 < uVar1) {
      uVar6 = 0;
    }
    lVar8 = uVar4 - uVar6;
    uVar9 = uVar1 - lVar8;
    uVar10 = uVar2 - uVar9;
    if (uVar2 < uVar9) {
      uVar10 = 0;
    }
    uVar7 = lVar8 + uVar2;
    if (uVar2 >= uVar9 && uVar2 - uVar9 != 0) {
      uVar7 = uVar1;
    }
    lVar8 = uVar7 - lVar8;
    if (lVar8 != 0) {
      puVar11 = (undefined8 *)(uVar4 * 0x68 + uVar6 * -0x68 + uVar3 + 0x50);
      do {
        if (puVar11[-1] != 0) {
          (*(code *)puVar5)(*puVar11,puVar11[-1],1);
        }
        puVar11 = puVar11 + 0xd;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    puVar5 = PTR___rust_dealloc_001e78c8;
    if (uVar9 < uVar2) {
      puVar11 = (undefined8 *)(uVar3 + 0x50);
      do {
        if (puVar11[-1] != 0) {
          (*(code *)puVar5)(*puVar11,puVar11[-1],1);
        }
        puVar11 = puVar11 + 0xd;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
  }
  if (uVar1 == 0) {
    return;
  }
  (*(code *)PTR_free_001e83e8)(param_1[1],uVar1 * 0x68,8);
  return;
}


