// ELF address 0x0000000000042e00; strategy_sm3_1::default_pv1

/* strategy_sm3_1::default_pv1 */

undefined8 * __rustcall strategy_sm3_1::default_pv1(undefined8 *param_1)

{
  code *pcVar1;
  undefined2 *puVar2;
  undefined8 *puVar3;
  
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001ef6c0)();
  puVar2 = (undefined2 *)(*(code *)PTR___rust_alloc_001ef698)(3,1);
  if (puVar2 != (undefined2 *)0x0) {
    *(undefined1 *)(puVar2 + 1) = 0x31;
    *puVar2 = 0x5650;
    *param_1 = 3;
    param_1[1] = puVar2;
    param_1[2] = 3;
    return param_1;
  }
  (*(code *)PTR_handle_error_001ef768)
            (1,3,anon_ac6670d00a082a7ef9e2727059f64e7b_12_llvm_1358435023758527573);
  pcVar1 = (code *)swi(3);
  puVar3 = (undefined8 *)(*pcVar1)();
  return puVar3;
}


