// ELF address 0x00000000000813b0; run_config_matrix::select_case_shard

/* run_config_matrix::select_case_shard */

void __rustcall
run_config_matrix::select_case_shard
          (undefined8 param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  long local_20;
  undefined8 local_18;
  undefined1 *local_10;
  undefined8 *local_8;
  
  local_10 = (undefined1 *)&local_38;
  local_20 = param_3 * 0x90 + param_2;
  local_18 = 0;
  local_8 = &local_30;
  local_38 = param_4;
  local_30 = param_5;
  local_28 = param_2;
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (param_1,&local_28,
             &PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_002fe220);
  return;
}


