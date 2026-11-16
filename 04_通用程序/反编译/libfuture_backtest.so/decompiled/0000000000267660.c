// ELF address 0x0000000000267660; BrotliDecoderDecompressPrealloc

undefined8
BrotliDecoderDecompressPrealloc
          (undefined8 param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
          long param_6,undefined8 param_7,long param_8,undefined8 param_9,long param_10,
          undefined8 param_11)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    param_3 = 1;
  }
  if (param_4 == 0) {
    param_5 = 1;
  }
  if (param_6 == 0) {
    param_7 = 1;
  }
  if (param_8 == 0) {
    param_9 = 4;
  }
  uVar1 = 2;
  if (param_10 != 0) {
    uVar1 = param_11;
  }
                    /* try { // try from 003676b8 to 003676d7 has its CatchHandler @ 0036770e */
  (*(code *)PTR_brotli_decode_prealloc_003f3390)
            (param_1,param_3,param_2,param_5,param_4,param_7,param_6,param_9,param_8,uVar1,param_10)
  ;
  return param_1;
}


