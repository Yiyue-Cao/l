// ELF address 0x0000000000267f80; BrotliDecoderIsFinished

bool BrotliDecoderIsFinished(long param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if (((*(char *)(param_1 + 0x972) == '\x18') && (bVar1 = true, -1 < *(int *)(param_1 + 0x954))) &&
     (*(long *)(param_1 + 0x710) != 0)) {
    bVar1 = (long)*(int *)(param_1 + 0x8e8) * *(long *)(param_1 + 0x7e0) +
            (long)*(int *)(param_1 + 0x8d8) == *(long *)(param_1 + 0x7e8);
  }
  return bVar1;
}


