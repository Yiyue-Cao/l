// ELF address 0x0000000000054aa0; strategy_tm6::signal_trigger::SignalTrigger::new

/* strategy_tm6::signal_trigger::SignalTrigger::new */

undefined8 * __rustcall
strategy_tm6::signal_trigger::SignalTrigger::new
          (undefined8 *param_1,undefined4 *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 (*pauVar10) [16];
  undefined4 local_68 [8];
  undefined1 local_48 [16];
  
  lVar1 = param_3[1];
  lVar2 = param_3[2];
  pauVar10 = (undefined1 (*) [16])__tls_get_addr(&PTR_001d94f8);
  if (pauVar10[1][0] == '\x01') {
    local_48 = *pauVar10;
  }
  else {
                    /* try { // try from 00154b96 to 00154b9b has its CatchHandler @ 00154bae */
    local_48 = (*(code *)PTR_hashmap_random_keys_001d9508)();
    *pauVar10 = local_48;
    pauVar10[1][0] = 1;
  }
  *(long *)*pauVar10 = local_48._0_8_ + 1;
  local_68[4] = anon_1716677ce335e42ffcebf7b090067291_1_llvm_9466522774482311751._16_4_;
  local_68[5] = anon_1716677ce335e42ffcebf7b090067291_1_llvm_9466522774482311751._20_4_;
  local_68[6] = anon_1716677ce335e42ffcebf7b090067291_1_llvm_9466522774482311751._24_4_;
  local_68[7] = anon_1716677ce335e42ffcebf7b090067291_1_llvm_9466522774482311751._28_4_;
  local_68[0] = anon_1716677ce335e42ffcebf7b090067291_1_llvm_9466522774482311751._0_4_;
  local_68[1] = anon_1716677ce335e42ffcebf7b090067291_1_llvm_9466522774482311751._4_4_;
  local_68[2] = anon_1716677ce335e42ffcebf7b090067291_1_llvm_9466522774482311751._8_4_;
  local_68[3] = anon_1716677ce335e42ffcebf7b090067291_1_llvm_9466522774482311751._12_4_;
                    /* try { // try from 00154b11 to 00154b1e has its CatchHandler @ 00154bb3 */
  _<hashbrown::map::HashMap<K,V,S,A>as_core::iter::traits::collect::Extend<(K,V)>>::extend
            (local_68,lVar1,lVar1 + lVar2 * 8);
  *(undefined1 (*) [16])(param_1 + 4) = local_48;
  param_1[2] = local_68._16_8_;
  param_1[3] = local_68._24_8_;
  *param_1 = CONCAT44(local_68[1],local_68[0]);
  param_1[1] = CONCAT44(local_68[3],local_68[2]);
  param_1[6] = 0;
  param_1[7] = 0;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  uVar6 = param_2[4];
  uVar7 = param_2[5];
  uVar8 = param_2[6];
  uVar9 = param_2[7];
  *(undefined4 *)(param_1 + 8) = *param_2;
  *(undefined4 *)((long)param_1 + 0x44) = uVar3;
  *(undefined4 *)(param_1 + 9) = uVar4;
  *(undefined4 *)((long)param_1 + 0x4c) = uVar5;
  *(undefined4 *)(param_1 + 10) = uVar6;
  *(undefined4 *)((long)param_1 + 0x54) = uVar7;
  *(undefined4 *)(param_1 + 0xb) = uVar8;
  *(undefined4 *)((long)param_1 + 0x5c) = uVar9;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  if (*param_3 != 0) {
    (*(code *)PTR___rust_dealloc_001d9238)(lVar1,*param_3 << 3,8);
  }
  return param_1;
}


