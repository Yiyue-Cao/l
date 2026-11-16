// ELF address 0x0000000000267400; BrotliDecoderCreateInstance

long BrotliDecoderCreateInstance(code *param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  code *local_1568;
  long lStack_1560;
  undefined8 local_1558;
  code *local_1548;
  long lStack_1540;
  undefined8 local_1538;
  code *local_1518;
  long local_1510;
  undefined8 local_1508;
  undefined1 local_1500 [1256];
  undefined8 local_1018;
  code *local_a98;
  long local_a90;
  undefined8 local_a88;
  
  local_1018 = 0;
  lStack_1540 = param_2;
  if (param_1 == (code *)0x0) {
    if (param_2 == 0) {
      local_1548 = (code *)0x0;
      lStack_1540 = 0;
    }
    else {
      local_1548 = (code *)0x0;
    }
  }
  else {
    local_1548 = param_1;
    if (param_2 == 0) {
      lStack_1540 = 0;
    }
  }
                    /* try { // try from 003674bf to 003674dc has its CatchHandler @ 00367589 */
  local_1568 = local_1548;
  lStack_1560 = lStack_1540;
  local_1558 = param_3;
  local_1538 = param_3;
  local_a98 = param_1;
  local_a90 = param_2;
  local_a88 = param_3;
  brotli_decompressor::state::BrotliState<AllocU8,AllocU32,AllocHC>::new_with_custom_dictionary
            (local_1500,&local_1548,&local_1568,&local_a98,1,0);
  local_1518 = param_1;
  local_1510 = param_2;
  local_1508 = param_3;
  if (param_1 == (code *)0x0) {
    (*(code *)PTR_memcpy_003f2700)(&local_a98,&local_1518,0xa80);
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_003f2658)();
    lVar2 = (*(code *)PTR___rust_alloc_003f2630)(0xa80,8);
    if (lVar2 == 0) {
                    /* try { // try from 00367577 to 00367586 has its CatchHandler @ 0036758e */
      (*(code *)PTR_handle_alloc_error_003f2828)(8,0xa80);
      goto LAB_00367587;
    }
  }
  else {
    if (param_2 == 0) {
                    /* try { // try from 0036755c to 00367574 has its CatchHandler @ 003675a6 */
      (*(code *)PTR_begin_panic_003f2f48)
                ("either both alloc and free must exist or neitherInternal Error \npanic: ",0x30,
                 &PTR_s__home_lyt__cargo_registry_src_rs_003ec9c8);
LAB_00367587:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar2 = (*param_1)(param_3,0xa80);
  }
  (*(code *)PTR_memcpy_003f2700)(lVar2,&local_1518,0xa80);
  return lVar2;
}


