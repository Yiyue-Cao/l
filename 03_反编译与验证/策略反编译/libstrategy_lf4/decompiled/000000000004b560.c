// ELF address 0x000000000004b560; strategy_lf4::signal_trigger::SignalTrigger::new

/* strategy_lf4::signal_trigger::SignalTrigger::new */

undefined8 * __rustcall
strategy_lf4::signal_trigger::SignalTrigger::new
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
  long *plVar10;
  undefined4 local_58 [8];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  lVar1 = param_3[1];
  lVar2 = param_3[2];
                    /* try { // try from 0014b57e to 0014b584 has its CatchHandler @ 0014b64a */
  plVar10 = (long *)core::ops::function::FnOnce::call_once(0);
  local_38 = (undefined4)*plVar10;
  uStack_34 = *(undefined4 *)((long)plVar10 + 4);
  uStack_30 = (undefined4)plVar10[1];
  uStack_2c = *(undefined4 *)((long)plVar10 + 0xc);
  *plVar10 = *plVar10 + 1;
  local_58[4] = anon_79cc597b7a9898e8a7f217c5c1a11c23_7_llvm_12062500720872914688._16_4_;
  local_58[5] = anon_79cc597b7a9898e8a7f217c5c1a11c23_7_llvm_12062500720872914688._20_4_;
  local_58[6] = anon_79cc597b7a9898e8a7f217c5c1a11c23_7_llvm_12062500720872914688._24_4_;
  local_58[7] = anon_79cc597b7a9898e8a7f217c5c1a11c23_7_llvm_12062500720872914688._28_4_;
  local_58[0] = anon_79cc597b7a9898e8a7f217c5c1a11c23_7_llvm_12062500720872914688._0_4_;
  local_58[1] = anon_79cc597b7a9898e8a7f217c5c1a11c23_7_llvm_12062500720872914688._4_4_;
  local_58[2] = anon_79cc597b7a9898e8a7f217c5c1a11c23_7_llvm_12062500720872914688._8_4_;
  local_58[3] = anon_79cc597b7a9898e8a7f217c5c1a11c23_7_llvm_12062500720872914688._12_4_;
  if (lVar2 != 0) {
    hashbrown::raw::RawTable<T,A>::reserve_rehash(local_58,lVar2,&local_38);
  }
                    /* try { // try from 0014b5b0 to 0014b644 has its CatchHandler @ 0014b64f */
  _<core::iter::adapters::map::Map<I,F>as_core::iter::traits::iterator::Iterator>::fold
            (lVar1,lVar1 + lVar2 * 8,local_58);
  param_1[4] = CONCAT44(uStack_34,local_38);
  param_1[5] = CONCAT44(uStack_2c,uStack_30);
  param_1[2] = local_58._16_8_;
  param_1[3] = local_58._24_8_;
  *param_1 = CONCAT44(local_58[1],local_58[0]);
  param_1[1] = CONCAT44(local_58[3],local_58[2]);
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
    (*(code *)PTR___rust_dealloc_001cca48)(lVar1,*param_3 << 3,8);
  }
  return param_1;
}


