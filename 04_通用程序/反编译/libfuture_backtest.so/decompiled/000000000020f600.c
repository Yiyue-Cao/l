// ELF address 0x000000000020f600; BrotliEncoderMaxCompressedSize

long BrotliEncoderMaxCompressedSize(ulong param_1)

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
  return lVar1;
}


