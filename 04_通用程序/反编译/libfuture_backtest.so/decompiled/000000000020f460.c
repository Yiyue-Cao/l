// ELF address 0x000000000020f460; BrotliEncoderSetParameter

undefined8 BrotliEncoderSetParameter(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(char *)(param_1 + 0x15eb) == '\0') {
                    /* try { // try from 0030f473 to 0030f478 has its CatchHandler @ 0030f47b */
    uVar1 = (*(code *)PTR_set_parameter_003f31d0)(param_1 + 0x98);
  }
  return uVar1;
}


