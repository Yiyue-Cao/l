// ELF address 0x0000000000267db0; BrotliDecoderMallocU8

void BrotliDecoderMallocU8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_RAX;
  
  if ((code *)*param_1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00367dbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*param_1)(param_1[2],param_2,param_3,in_RAX);
    return;
  }
                    /* try { // try from 00367dc0 to 00367dc7 has its CatchHandler @ 00367dca */
  brotli_decompressor::ffi::alloc_util::alloc_stdlib(param_2);
  return;
}


