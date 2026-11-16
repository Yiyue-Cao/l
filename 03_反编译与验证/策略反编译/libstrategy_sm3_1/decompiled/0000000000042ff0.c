// ELF address 0x0000000000042ff0; strategy_sm3_1::DecisionTelemetry::inc

/* strategy_sm3_1::DecisionTelemetry::inc */

void __rustcall
strategy_sm3_1::DecisionTelemetry::inc
          (undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  long local_b0;
  long local_a8;
  long local_a0;
  undefined8 local_98;
  long local_90;
  undefined8 local_88;
  undefined1 local_80 [80];
  
  uVar7 = param_3 == 0;
  uVar4 = param_4;
  uVar6 = param_5;
  if (-1 < param_3) goto LAB_0014301e;
  uVar5 = 0;
  uVar7 = true;
  while( true ) {
    (*(code *)PTR_handle_error_001ef768)
              (uVar5,param_3,anon_ac6670d00a082a7ef9e2727059f64e7b_12_llvm_1358435023758527573);
    uVar4 = param_4;
    param_1 = uVar5;
    uVar6 = param_5;
LAB_0014301e:
    if ((bool)uVar7) break;
    param_4 = uVar4;
    param_5 = uVar6;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001ef6c0)();
    uVar5 = 1;
    lVar2 = (*(code *)PTR___rust_alloc_001ef698)(param_3,1);
    uVar7 = lVar2 == 0;
    if (!(bool)uVar7) {
LAB_0014305a:
      (*(code *)PTR_memcpy_001ef700)(lVar2);
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001ef6c0)();
      local_90 = (*(code *)PTR___rust_alloc_001ef698)(uVar6,1);
      if (local_90 == 0) {
                    /* try { // try from 001430e1 to 001430f5 has its CatchHandler @ 001430f8 */
        (*(code *)PTR_handle_error_001ef768)
                  (1,uVar6,anon_ac6670d00a082a7ef9e2727059f64e7b_12_llvm_1358435023758527573);
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      (*(code *)PTR_memcpy_001ef700)(local_90,uVar4,uVar6);
      local_b0 = param_3;
      local_a8 = lVar2;
      local_a0 = param_3;
      local_98 = uVar6;
      local_88 = uVar6;
      alloc::collections::btree::map::BTreeMap<K,V,A>::entry(local_80,param_1,&local_b0);
      plVar3 = (long *)alloc::collections::btree::map::entry::Entry<K,V,A>::or_default(local_80);
      *plVar3 = *plVar3 + 1;
      return;
    }
  }
  lVar2 = 1;
  goto LAB_0014305a;
}


