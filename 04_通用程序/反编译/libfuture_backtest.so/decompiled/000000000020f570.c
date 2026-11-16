// ELF address 0x000000000020f570; BrotliEncoderHasMoreOutput

bool BrotliEncoderHasMoreOutput(long param_1)

{
  return *(long *)(param_1 + 0x15b8) != 0;
}


