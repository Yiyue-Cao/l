// ELF address 0x00000000000a2ed0; fb_sweeps::get

/* fb_sweeps::get */

long __rustcall fb_sweeps::get(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long local_88;
  undefined8 *local_80;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined2 local_30;
  
  local_70 = 0;
  local_50 = 0;
  local_40 = 0x2e0000002e;
  local_38 = 1;
  local_30 = 1;
  local_68 = param_3;
  local_60 = param_2;
  local_58 = param_3;
  local_48 = param_3;
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (&local_88,&local_70,
             &PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_002a3da0);
  puVar1 = PTR_index_002aefa0;
  local_78 = local_78 << 4;
  puVar2 = local_80;
  do {
    if (local_78 == 0) goto LAB_001a2f82;
                    /* try { // try from 001a2f6d to 001a2f72 has its CatchHandler @ 001a2fb0 */
    param_1 = (*(code *)puVar1)(*puVar2,puVar2[1],param_1);
    puVar2 = puVar2 + 2;
    local_78 = local_78 + -0x10;
  } while (param_1 != 0);
  param_1 = 0;
LAB_001a2f82:
  if (local_88 != 0) {
    (*(code *)PTR___rust_dealloc_002ae838)(local_80,local_88 << 4,8);
  }
  return param_1;
}


