// ELF address 0x000000000020fa40; BrotliEncoderMaxCompressedSizeMulti

long BrotliEncoderMaxCompressedSizeMulti(ulong param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = (param_1 + (param_1 >> 0xe) * 4 + 1) -
          (ulong)((char *)(param_1 + (param_1 >> 0xe) * -0x1000000) < "ELF");
  lVar2 = 0;
  if (param_1 <= lVar1 + 6U) {
    lVar2 = lVar1 + 0x16;
  }
  lVar1 = 0x11;
  if (param_1 != 0) {
    lVar1 = lVar2;
  }
  return lVar1 + param_2 * 8;
}


