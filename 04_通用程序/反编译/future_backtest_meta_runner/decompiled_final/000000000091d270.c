// ELF address 0x000000000091d270; future_backtest::RunnerCore::standard_main

void _ZN15future_backtest10RunnerCore13standard_main17h90a595587bf0a209E(void)

{
  code *pcVar1;
  undefined8 uVar2;
  
  uVar2 = _ZN15future_backtest10RunnerCore16run_standard_cli17h9f3cd53253295e6dE();
  _ZN15future_backtest10RunnerCore9exit_with17h148862deab0dacb4E(uVar2);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


