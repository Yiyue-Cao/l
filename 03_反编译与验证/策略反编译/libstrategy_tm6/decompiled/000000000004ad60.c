// ELF address 0x000000000004ad60; <strategy_tm6::StrategyTM6 as future_backtest_sdk::plugin::StrategyPlugin>::on_finish

/* _<strategy_tm6::StrategyTM6 as future_backtest_sdk::plugin::StrategyPlugin>::on_finish */

undefined8 __rustcall
_<strategy_tm6::StrategyTM6_as_future_backtest_sdk::plugin::StrategyPlugin>::on_finish
          (undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined1 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long local_80;
  long local_78;
  long local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined2 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  lVar6 = (*(code *)PTR_para_001d9370)(param_2);
  uVar2 = *(undefined2 *)(lVar6 + 0x34);
  uVar7 = *(undefined8 *)(lVar6 + 0x28);
  local_48 = *(undefined4 *)(lVar6 + 0x18);
  uStack_44 = *(undefined4 *)(lVar6 + 0x1c);
  uStack_40 = *(undefined4 *)(lVar6 + 0x20);
  uStack_3c = *(undefined4 *)(lVar6 + 0x24);
  uVar3 = *(undefined4 *)(lVar6 + 0x30);
  uVar1 = *(undefined1 *)(lVar6 + 0x30);
  _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone
            (&local_80,lVar6,anon_0e1e86d6043c3efacbbe1614cd0fd3e7_56_llvm_4029722044198193507);
  local_68 = CONCAT44(uStack_44,local_48);
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_58 = uVar7;
  local_50 = uVar3;
  local_4c = uVar2;
                    /* try { // try from 0014adce to 0014ade6 has its CatchHandler @ 0014ae63 */
  uVar5 = (*(code *)PTR_is_night_001d9450)(param_2);
  uVar7 = (*(code *)PTR_all_in_001d93f8)(param_2,uVar5,uVar1);
  puVar4 = PTR___rust_dealloc_001d9238;
  if (local_70 != 0) {
    puVar8 = (undefined8 *)(local_78 + 8);
    lVar6 = local_70;
    do {
      if (puVar8[-1] != 0) {
        (*(code *)puVar4)(*puVar8,puVar8[-1],1);
      }
      puVar8 = puVar8 + 3;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  if (local_80 != 0) {
    (*(code *)PTR___rust_dealloc_001d9238)(local_78,local_80 * 0x18,8);
  }
  return uVar7;
}


