// ELF address 0x0000000000267f00; BrotliDecoderHasMoreOutput

bool BrotliDecoderHasMoreOutput(long param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if ((-1 < *(int *)(param_1 + 0x954)) && (*(long *)(param_1 + 0x710) != 0)) {
    bVar1 = (long)*(int *)(param_1 + 0x8e8) * *(long *)(param_1 + 0x7e0) +
            (long)*(int *)(param_1 + 0x8d8) != *(long *)(param_1 + 0x7e8);
  }
  return bVar1;
}


