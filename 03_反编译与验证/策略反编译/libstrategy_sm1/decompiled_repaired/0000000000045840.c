// ELF address 0x0000000000045840; strategy_sm1::default_point_trigger

/* strategy_sm1::default_point_trigger */

undefined8 * __rustcall strategy_sm1::default_point_trigger(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001d96f0)();
  puVar2 = (undefined8 *)(*(code *)PTR___rust_alloc_001d96c8)(0xc,1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0x697254746e696f50;
    *(undefined4 *)(puVar2 + 1) = 0x72656767;
    *param_1 = 0xc;
    param_1[1] = puVar2;
    param_1[2] = 0xc;
    return param_1;
  }
  (*(code *)PTR_handle_error_001d97c8)
            (1,0xc,anon_4c2171217e856843177caef2a996e723_2_llvm_251289040105417128);
  pcVar1 = (code *)swi(3);
  puVar2 = (undefined8 *)(*pcVar1)();
  return puVar2;
}


