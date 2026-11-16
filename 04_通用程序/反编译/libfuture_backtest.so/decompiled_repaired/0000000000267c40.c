// ELF address 0x0000000000267c40; BrotliDecoderDecompressStream

/* WARNING: Type propagation algorithm not settling */

void BrotliDecoderDecompressStream
               (long param_1,long *param_2,long *param_3,long *param_4,long *param_5,long *param_6)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long local_40;
  long local_38 [2];
  
  local_40 = 0;
  local_38[0] = 0;
  local_38[1] = 0;
  lVar2 = 1;
  lVar1 = 1;
  if (*param_2 != 0) {
    lVar1 = *param_3;
  }
  if (*param_4 != 0) {
    lVar2 = *param_5;
  }
  plVar3 = local_38 + 1;
  if (param_6 != (long *)0x0) {
    plVar3 = param_6;
  }
                    /* try { // try from 00367ca8 to 00367cc5 has its CatchHandler @ 00367ce4 */
  brotli_decompressor::decode::BrotliDecompressStream
            (param_2,&local_40,lVar1,*param_2,param_4,local_38,lVar2,*param_4,plVar3,param_1 + 0x18)
  ;
  *param_3 = *param_3 + local_40;
  *param_5 = *param_5 + local_38[0];
  return;
}


