// ELF address 0x00000000000477d0; strategy_sos6::default_pnl_key

/* strategy_sos6::default_pnl_key */

undefined8 * __rustcall strategy_sos6::default_pnl_key(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001dd050)();
  puVar2 = (undefined8 *)(*(code *)PTR___rust_alloc_001dd028)(0xb,1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0x5f676e696c6c6f72;
    *(undefined4 *)((long)puVar2 + 7) = 0x6c6e705f;
    *param_1 = 0xb;
    param_1[1] = puVar2;
    param_1[2] = 0xb;
    return param_1;
  }
  (*(code *)PTR_handle_error_001dd128)
            (1,0xb,anon_0719eaee59d8514c1af4b19597e39d48_9_llvm_11511453132000002585);
  pcVar1 = (code *)swi(3);
  puVar2 = (undefined8 *)(*pcVar1)();
  return puVar2;
}


