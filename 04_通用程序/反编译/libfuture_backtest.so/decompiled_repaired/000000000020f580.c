// ELF address 0x000000000020f580; BrotliEncoderSetCustomDictionary

void BrotliEncoderSetCustomDictionary(long param_1,long param_2,undefined8 param_3)

{
  undefined8 local_78 [15];
  
  if (param_2 == 0) {
    param_3 = 1;
  }
  local_78[0] = 0;
                    /* try { // try from 0030f59c to 0030f5a6 has its CatchHandler @ 0030f5ac */
  brotli::enc::encode::BrotliEncoderSetCustomDictionaryWithOptionalPrecomputedHasher
            (param_1 + 0x18,param_2,param_3,param_2,local_78);
  return;
}


