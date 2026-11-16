// ELF address 0x000000000020f2f0; BrotliEncoderCreateInstance

long BrotliEncoderCreateInstance(code *param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  code *local_2c10;
  long local_2c08;
  undefined8 local_2c00;
  undefined1 local_2bf8 [3032];
  undefined8 local_2020;
  code *local_1618;
  long local_1610;
  undefined8 local_1608;
  undefined8 local_1020;
  
  local_1020 = 0;
  local_2020 = 0;
                    /* try { // try from 0030f342 to 0030f351 has its CatchHandler @ 0030f400 */
  local_1618 = param_1;
  local_1610 = param_2;
  local_1608 = param_3;
  brotli::enc::encode::BrotliEncoderCreateInstance(local_2bf8,&local_1618);
  local_2c10 = param_1;
  local_2c08 = param_2;
  local_2c00 = param_3;
  if (param_1 == (code *)0x0) {
    (*(code *)PTR_memcpy_003f2700)(&local_1618,&local_2c10,0x15f8);
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_003f2658)();
    lVar2 = (*(code *)PTR___rust_alloc_003f2630)(0x15f8,8);
    if (lVar2 == 0) {
                    /* try { // try from 0030f3ee to 0030f3fd has its CatchHandler @ 0030f405 */
      (*(code *)PTR_handle_alloc_error_003f2828)(8,0x15f8);
      goto LAB_0030f3fe;
    }
  }
  else {
    if (param_2 == 0) {
                    /* try { // try from 0030f3d3 to 0030f3eb has its CatchHandler @ 0030f41d */
      (*(code *)PTR_begin_panic_003f2f48)
                ("either both alloc and free must exist or neitherInternal Error \nleaking memory block of length  element size: \n"
                 ,0x30,&PTR_s__home_lyt__cargo_registry_src_rs_003e74b8);
LAB_0030f3fe:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar2 = (*param_1)(param_3,0x15f8);
  }
  (*(code *)PTR_memcpy_003f2700)(lVar2,&local_2c10,0x15f8);
  return lVar2;
}


