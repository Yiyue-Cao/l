// ELF address 0x000000000020f640; BrotliEncoderCompress

void BrotliEncoderCompress
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,
               undefined8 param_5,long *param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined1 local_49;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  if (param_4 == 0) {
    param_5 = 1;
  }
  uVar1 = 1;
  if (*param_6 != 0) {
    uVar1 = param_7;
  }
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
                    /* try { // try from 0030f690 to 0030f6b1 has its CatchHandler @ 0030f6ba */
  brotli::enc::encode::BrotliEncoderCompress
            (&local_28,&local_48,param_1,param_2,param_3,param_4,param_5,param_4,param_6,uVar1,
             *param_6,&local_49);
  return;
}


