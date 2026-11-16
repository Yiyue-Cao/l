// ELF address 0x000000000003ebc0; strategy_sm4::default_pv1

/* strategy_sm4::default_pv1 */

undefined8 * __rustcall strategy_sm4::default_pv1(undefined8 *param_1)

{
  code *pcVar1;
  undefined2 *puVar2;
  undefined8 *puVar3;
  
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001e78e8)();
  puVar2 = (undefined2 *)(*(code *)PTR___rust_alloc_001e78c0)(3,1);
  if (puVar2 != (undefined2 *)0x0) {
    *(undefined1 *)(puVar2 + 1) = 0x31;
    *puVar2 = 0x5650;
    *param_1 = 3;
    param_1[1] = puVar2;
    param_1[2] = 3;
    return param_1;
  }
  (*(code *)PTR_handle_error_001e7970)
            (1,3,anon_d6c90fe0c8febcf3c104bcc2f0442008_10_llvm_8175779838802317276);
  pcVar1 = (code *)swi(3);
  puVar3 = (undefined8 *)(*pcVar1)();
  return puVar3;
}


