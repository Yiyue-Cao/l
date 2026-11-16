// ELF address 0x0000000000267e60; BrotliDecoderDestroyInstance

void BrotliDecoderDestroyInstance(long *param_1)

{
  code *pcVar1;
  undefined1 auStack_a98 [2688];
  
  if (*param_1 != 0) {
    pcVar1 = (code *)param_1[1];
    if (pcVar1 != (code *)0x0) {
      (*(code *)PTR_memcpy_003f2700)(auStack_a98,param_1,0xa80);
      (*pcVar1)(param_1[2],param_1);
                    /* try { // try from 00367e9c to 00367ea3 has its CatchHandler @ 00367ef1 */
      core::ptr::drop_in_place<brotli_decompressor::ffi::BrotliDecoderState>(auStack_a98);
    }
    return;
  }
                    /* try { // try from 00367eb1 to 00367eb8 has its CatchHandler @ 00367ed8 */
  core::ptr::drop_in_place<brotli_decompressor::ffi::BrotliDecoderState>(param_1);
  (*(code *)PTR___rust_dealloc_003f2638)(param_1,0xa80,8);
  return;
}


