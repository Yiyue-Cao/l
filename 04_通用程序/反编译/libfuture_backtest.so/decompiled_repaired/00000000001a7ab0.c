// ELF address 0x00000000001a7ab0; fb_ctx_dynamic_taker_rate

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double fb_ctx_dynamic_taker_rate
                 (ulong param_1,ulong param_2,double param_3,double param_4,double param_5)

{
  code *pcVar1;
  double dVar2;
  
  if (param_4 <= param_5) {
    dVar2 = (double)(param_1 & _DAT_001c2eb0) - (double)(param_2 & _DAT_001c2eb0);
    if (dVar2 <= 0.0) {
      dVar2 = 0.0;
    }
    dVar2 = (double)(*(code *)PTR_exp_003f2a10)
                              (param_3 * (dVar2 / (double)(param_2 & _DAT_001c2eb0)));
    if (param_4 <= dVar2 * param_4) {
      param_4 = dVar2 * param_4;
    }
    if (param_4 <= param_5) {
      param_5 = param_4;
    }
    return param_5;
  }
                    /* try { // try from 002a7b11 to 002a7b25 has its CatchHandler @ 002a7b28 */
  (*(code *)PTR_runtime_003f2a18)
            (param_4,param_5,anon_3a6d2b86dc1bb50257a917c3dcf9a912_182_llvm_12364612859142937606);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


