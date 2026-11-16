// ELF address 0x000000000020f490; BrotliEncoderDestroyInstance

void BrotliEncoderDestroyInstance(long *param_1)

{
  code *pcVar1;
  undefined1 auStack_1608 [24];
  undefined1 local_15f0 [1504];
  undefined8 local_1010;
  
  local_1010 = 0;
  if (param_1 != (long *)0x0) {
                    /* try { // try from 0030f4b5 to 0030f4bc has its CatchHandler @ 0030f540 */
    brotli::enc::encode::BrotliEncoderCleanupState(param_1 + 3);
    if (*param_1 == 0) {
                    /* try { // try from 0030f4fc to 0030f503 has its CatchHandler @ 0030f521 */
      core::ptr::
      drop_in_place<brotli::enc::encode::BrotliEncoderStateStruct<brotli::ffi::alloc_util::BrotliSubclassableAllocator>>
                (param_1 + 3);
      (*(code *)PTR___rust_dealloc_003f2638)(param_1,0x15f8,8);
      return;
    }
    pcVar1 = (code *)param_1[1];
    if (pcVar1 != (code *)0x0) {
      (*(code *)PTR_memcpy_003f2700)(auStack_1608,param_1,0x15f8);
      (*pcVar1)(param_1[2],param_1);
                    /* try { // try from 0030f4ec to 0030f4f0 has its CatchHandler @ 0030f53a */
      core::ptr::
      drop_in_place<brotli::enc::encode::BrotliEncoderStateStruct<brotli::ffi::alloc_util::BrotliSubclassableAllocator>>
                (local_15f0);
    }
  }
  return;
}


