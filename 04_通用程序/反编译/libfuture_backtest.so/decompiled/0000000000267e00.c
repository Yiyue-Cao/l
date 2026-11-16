// ELF address 0x0000000000267e00; BrotliDecoderMallocUsize

void BrotliDecoderMallocUsize(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 in_RAX;
  
  if ((code *)*param_1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00367e12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*param_1)(param_1[2],param_2 << 3,param_3,in_RAX);
    return;
  }
                    /* try { // try from 00367e14 to 00367e1b has its CatchHandler @ 00367e1e */
  brotli_decompressor::ffi::alloc_util::alloc_stdlib(param_2);
  return;
}


