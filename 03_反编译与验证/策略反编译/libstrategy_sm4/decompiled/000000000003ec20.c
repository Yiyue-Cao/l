// ELF address 0x000000000003ec20; strategy_sm4::default_point_trigger

/* strategy_sm4::default_point_trigger */

undefined8 * __rustcall strategy_sm4::default_point_trigger(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001e78e8)();
  puVar2 = (undefined8 *)(*(code *)PTR___rust_alloc_001e78c0)(0xc,1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0x697254746e696f50;
    *(undefined4 *)(puVar2 + 1) = 0x72656767;
    *param_1 = 0xc;
    param_1[1] = puVar2;
    param_1[2] = 0xc;
    return param_1;
  }
  (*(code *)PTR_handle_error_001e7970)
            (1,0xc,anon_d6c90fe0c8febcf3c104bcc2f0442008_10_llvm_8175779838802317276);
  pcVar1 = (code *)swi(3);
  puVar2 = (undefined8 *)(*pcVar1)();
  return puVar2;
}


