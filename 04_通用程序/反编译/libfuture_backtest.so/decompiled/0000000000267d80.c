// ELF address 0x0000000000267d80; BrotliDecoderDecompressStreaming

void BrotliDecoderDecompressStreaming
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 local_10;
  undefined8 local_8;
  
  local_10 = param_3;
  local_8 = param_5;
  (*(code *)PTR_BrotliDecoderDecompressStream_003f26b8)
            (param_1,param_2,&local_10,param_4,&local_8,0);
  return;
}


