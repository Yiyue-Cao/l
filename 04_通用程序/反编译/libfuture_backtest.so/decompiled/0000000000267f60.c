// ELF address 0x0000000000267f60; BrotliDecoderIsUsed

bool BrotliDecoderIsUsed(long param_1)

{
  if (*(char *)(param_1 + 0x972) != '\0') {
    return *(int *)(param_1 + 0x770) != 0x40;
  }
  return false;
}


