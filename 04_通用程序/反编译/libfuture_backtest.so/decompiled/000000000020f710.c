// ELF address 0x000000000020f710; BrotliEncoderCompressStream

void BrotliEncoderCompressStream
               (long param_1,undefined1 param_2,long *param_3,long *param_4,long *param_5,
               long *param_6,undefined8 *param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 local_51;
  long local_50;
  long local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_50 = 0;
  local_48 = 0;
  lVar1 = *param_3;
  lVar4 = 1;
  lVar3 = 1;
  if (lVar1 != 0) {
    lVar3 = *param_4;
  }
  lVar2 = *param_5;
  if (lVar2 != 0) {
    lVar4 = *param_6;
  }
  local_40 = 1;
  local_38 = 0;
                    /* try { // try from 0030f770 to 0030f79d has its CatchHandler @ 0030f7e4 */
  brotli::enc::encode::BrotliEncoderCompressStream
            (param_1 + 0x18,param_2,param_3,lVar3,lVar1,&local_50,param_5,lVar4,lVar2,&local_48,
             &local_40,&local_51);
  if (param_7 != (undefined8 *)0x0) {
    if ((char)local_40 == '\0') {
      local_38 = 0;
    }
    *param_7 = local_38;
  }
  if (lVar1 != 0) {
    *param_4 = *param_4 + local_50;
  }
  if (lVar2 != 0) {
    *param_6 = *param_6 + local_48;
  }
  return;
}


