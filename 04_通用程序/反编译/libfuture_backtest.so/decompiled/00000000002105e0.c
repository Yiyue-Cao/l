// ELF address 0x00000000002105e0; BrotliEncoderDestroyWorkPool

void BrotliEncoderDestroyWorkPool(long *param_1)

{
  code *pcVar1;
  undefined1 auStack_1b8 [416];
  
  if (*param_1 != 0) {
    pcVar1 = (code *)param_1[1];
    if (pcVar1 != (code *)0x0) {
      (*(code *)PTR_memcpy_003f2700)(auStack_1b8,param_1,0x1a0);
      (*pcVar1)(param_1[2],param_1);
                    /* try { // try from 0031061c to 00310623 has its CatchHandler @ 00310670 */
      core::ptr::drop_in_place<brotli::ffi::multicompress::BrotliEncoderWorkPool>(auStack_1b8);
    }
    return;
  }
                    /* try { // try from 00310631 to 00310638 has its CatchHandler @ 00310658 */
  core::ptr::drop_in_place<brotli::ffi::multicompress::BrotliEncoderWorkPool>(param_1);
  (*(code *)PTR___rust_dealloc_003f2638)(param_1,0x1a0,8);
  return;
}


