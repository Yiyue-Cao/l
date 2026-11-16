// ELF address 0x00000000002104b0; BrotliEncoderCreateWorkPool

long BrotliEncoderCreateWorkPool(ulong param_1,code *param_2,long param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  code *local_358;
  long local_350;
  undefined8 local_348;
  undefined1 local_340 [392];
  undefined1 local_1b8 [416];
  
  uVar3 = 0x10;
  if (param_1 < 0x10) {
    uVar3 = param_1;
  }
                    /* try { // try from 003104d7 to 003104db has its CatchHandler @ 00310583 */
  brotli::enc::worker_pool::WorkerPool<ReturnValue,ExtraInput,Alloc,U>::new(local_340,uVar3);
  local_358 = param_2;
  local_350 = param_3;
  local_348 = param_4;
  if (param_2 == (code *)0x0) {
    (*(code *)PTR_memcpy_003f2700)(local_1b8,&local_358,0x1a0);
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_003f2658)();
    lVar2 = (*(code *)PTR___rust_alloc_003f2630)(0x1a0,8);
    if (lVar2 == 0) {
                    /* try { // try from 00310571 to 00310580 has its CatchHandler @ 00310588 */
      (*(code *)PTR_handle_alloc_error_003f2828)(8,0x1a0);
      goto LAB_00310581;
    }
  }
  else {
    if (param_3 == 0) {
                    /* try { // try from 00310556 to 0031056e has its CatchHandler @ 003105a0 */
      (*(code *)PTR_begin_panic_003f2f48)
                ("either both alloc and free must exist or neitherInternal Error \nleaking memory block of length  element size: \n"
                 ,0x30,&PTR_s__home_lyt__cargo_registry_src_rs_003e7508);
LAB_00310581:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar2 = (*param_2)(param_4,0x1a0);
  }
  (*(code *)PTR_memcpy_003f2700)(lVar2,&local_358,0x1a0);
  return lVar2;
}


