// ELF address 0x000000000020f5d0; BrotliEncoderTakeOutput

void BrotliEncoderTakeOutput(long param_1)

{
                    /* try { // try from 0030f5d5 to 0030f5d9 has its CatchHandler @ 0030f5dc */
  brotli::enc::encode::BrotliEncoderTakeOutput(param_1 + 0x18);
  return;
}


