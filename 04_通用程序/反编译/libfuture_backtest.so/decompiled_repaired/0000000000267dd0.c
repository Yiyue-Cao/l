// ELF address 0x0000000000267dd0; BrotliDecoderFreeU8

void BrotliDecoderFreeU8(long param_1,undefined8 param_2,long param_3)

{
  if (*(code **)(param_1 + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00367ddd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
    return;
  }
  if (param_3 != 0) {
    (*(code *)PTR___rust_dealloc_003f2638)(param_2,param_3,1);
    return;
  }
  return;
}


