// ELF address 0x00000000009c5f70; future_backtest::RunnerCore::exit_with

void _ZN15future_backtest10RunnerCore9exit_with17h148862deab0dacb4E(long param_1)

{
  code *pcVar1;
  long lStack_50;
  long *plStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 **ppuStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_1 == 0) {
    param_1 = 0;
    (*(code *)PTR__ZN3std7process4exit17hc7b501d4b6bb020fE_01aa8468)();
  }
  plStack_48 = &lStack_50;
  puStack_40 = 
  PTR__ZN6anyhow5error60__LT_impl_u20_core__fmt__Debug_u20_for_u20_anyhow__Error_GT_3fmt17h734697877cb378c7E_01aa6f58
  ;
  puStack_38 = &UNK_019fb898;
  uStack_30 = 2;
  uStack_18 = 0;
  ppuStack_28 = &plStack_48;
  uStack_20 = 1;
  lStack_50 = param_1;
  (*(code *)PTR__ZN3std2io5stdio7_eprint17h1abaa574271c840dE_01aa72f0)(&puStack_38);
  (*(code *)PTR__ZN3std7process4exit17hc7b501d4b6bb020fE_01aa8468)(1);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


