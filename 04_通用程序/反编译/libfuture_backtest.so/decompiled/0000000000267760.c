// ELF address 0x0000000000267760; BrotliDecoderDecompress

bool BrotliDecoderDecompress(long param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  long local_118 [33];
  int local_c;
  
  if (param_1 == 0) {
    param_2 = 1;
  }
  if (*param_3 == 0) {
    param_4 = 1;
  }
                    /* try { // try from 00367784 to 0036778c has its CatchHandler @ 003677aa */
  (*(code *)PTR_brotli_decode_003f3398)(local_118,param_2,param_1,param_4);
  *param_3 = local_118[0];
  return local_c == 1;
}


