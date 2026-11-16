// ELF address 0x0000000000267720; BrotliDecoderDecompressWithReturnInfo

undefined8
BrotliDecoderDecompressWithReturnInfo
          (undefined8 param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    param_3 = 1;
  }
  uVar1 = 1;
  if (param_4 != 0) {
    uVar1 = param_5;
  }
                    /* try { // try from 0036773d to 0036774b has its CatchHandler @ 00367751 */
  (*(code *)PTR_brotli_decode_003f3398)(param_1,param_3,param_2,uVar1,param_4);
  return param_1;
}


