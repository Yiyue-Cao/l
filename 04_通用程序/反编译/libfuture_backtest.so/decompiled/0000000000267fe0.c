// ELF address 0x0000000000267fe0; BrotliDecoderGetErrorString

undefined * BrotliDecoderGetErrorString(long param_1)

{
  if ((param_1 != 0) && (*(char *)(param_1 + 0x977) != '\0')) {
    return (undefined *)(param_1 + 0x978);
  }
  return (&PTR_s_NO_ERROR_003ecb18)[*(int *)(param_1 + 0x954)];
}


