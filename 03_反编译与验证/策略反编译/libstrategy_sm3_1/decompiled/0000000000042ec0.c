// ELF address 0x0000000000042ec0; strategy_sm3_1::default_taker_veto_scope

/* strategy_sm3_1::default_taker_veto_scope */

undefined8 * __rustcall strategy_sm3_1::default_taker_veto_scope(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001ef6c0)();
  puVar2 = (undefined8 *)(*(code *)PTR___rust_alloc_001ef698)(9,1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0x696d5f72656b6174;
    *(undefined1 *)(puVar2 + 1) = 100;
    *param_1 = 9;
    param_1[1] = puVar2;
    param_1[2] = 9;
    return param_1;
  }
  (*(code *)PTR_handle_error_001ef768)
            (1,9,anon_ac6670d00a082a7ef9e2727059f64e7b_12_llvm_1358435023758527573);
  pcVar1 = (code *)swi(3);
  puVar2 = (undefined8 *)(*pcVar1)();
  return puVar2;
}


