// ELF address 0x0000000000042f90; strategy_sm3_1::default_wait_mode

/* strategy_sm3_1::default_wait_mode */

undefined8 * __rustcall strategy_sm3_1::default_wait_mode(undefined8 *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001ef6c0)();
  puVar2 = (undefined4 *)(*(code *)PTR___rust_alloc_001ef698)(7,1);
  if (puVar2 != (undefined4 *)0x0) {
    *(undefined4 *)((long)puVar2 + 3) = 0x72656972;
    *puVar2 = 0x72726162;
    *param_1 = 7;
    param_1[1] = puVar2;
    param_1[2] = 7;
    return param_1;
  }
  (*(code *)PTR_handle_error_001ef768)
            (1,7,anon_ac6670d00a082a7ef9e2727059f64e7b_12_llvm_1358435023758527573);
  pcVar1 = (code *)swi(3);
  puVar3 = (undefined8 *)(*pcVar1)();
  return puVar3;
}


