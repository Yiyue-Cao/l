// ELF address 0x000000000020f550; BrotliEncoderIsFinished

undefined8 BrotliEncoderIsFinished(long param_1)

{
  if ((*(int *)(param_1 + 0x15e0) == 2) && (*(long *)(param_1 + 0x15b8) == 0)) {
    return 1;
  }
  return 0;
}


