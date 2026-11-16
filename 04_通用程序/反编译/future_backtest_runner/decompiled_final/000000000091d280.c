// ELF address 0x000000000091d280; future_backtest::RunnerCore::meta_main

void _ZN15future_backtest10RunnerCore9meta_main17h82846694ee7b88c2E(void)

{
  code *pcVar1;
  undefined8 uVar2;
  
  uVar2 = _ZN15future_backtest10RunnerCore12run_meta_cli17hed7700caef390571E();
  _ZN15future_backtest10RunnerCore9exit_with17h148862deab0dacb4E(uVar2);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


