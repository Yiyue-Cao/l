// ELF address 0x000000000020f810; BrotliEncoderMallocU8

void BrotliEncoderMallocU8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_RAX;
  
  if ((code *)*param_1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0030f81e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*param_1)(param_1[2],param_2,param_3,in_RAX);
    return;
  }
                    /* try { // try from 0030f820 to 0030f827 has its CatchHandler @ 0030f82a */
  brotli_decompressor::ffi::alloc_util::alloc_stdlib(param_2);
  return;
}


