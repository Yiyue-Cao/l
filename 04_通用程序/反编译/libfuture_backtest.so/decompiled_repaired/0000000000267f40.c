// ELF address 0x0000000000267f40; BrotliDecoderTakeOutput

void BrotliDecoderTakeOutput(long param_1)

{
                    /* try { // try from 00367f45 to 00367f49 has its CatchHandler @ 00367f4c */
  brotli_decompressor::decode::BrotliDecoderTakeOutput(param_1 + 0x18);
  return;
}


