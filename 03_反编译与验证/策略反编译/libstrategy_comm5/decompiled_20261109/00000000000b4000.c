// ELF address 0x00000000000b4000; future_backtest_sdk::context::StrategyContext::get_published

/* future_backtest_sdk::context::StrategyContext::get_published */

bool __rustcall
future_backtest_sdk::context::StrategyContext::get_published
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 local_40;
  undefined8 local_38;
  
  puVar1 = PTR_to_cstring_00203da0;
  auVar6 = (*(code *)PTR_to_cstring_00203da0)(param_2,param_3);
  puVar3 = auVar6._0_8_;
                    /* try { // try from 001b4034 to 001b403c has its CatchHandler @ 001b4119 */
  auVar7 = (*(code *)puVar1)(param_4,param_5);
  puVar4 = auVar7._0_8_;
                    /* try { // try from 001b4048 to 001b4050 has its CatchHandler @ 001b40f9 */
  auVar8 = (*(code *)PTR_to_cstring_00203da0)(param_6,param_7);
  puVar5 = auVar8._0_8_;
  local_40 = 0;
  iVar2 = (*(code *)PTR_fb_ctx_get_published_00204438)
                    (*(undefined8 *)(param_1 + 0x30),puVar3,puVar4,puVar5,&local_40);
  local_38 = local_40;
  *puVar5 = 0;
  if (auVar8._8_8_ != 0) {
    (*(code *)PTR___rust_dealloc_00203c78)(puVar5,auVar8._8_8_,1);
  }
  *puVar4 = 0;
  if (auVar7._8_8_ != 0) {
    (*(code *)PTR___rust_dealloc_00203c78)(puVar4,auVar7._8_8_,1);
  }
  *puVar3 = 0;
  if (auVar6._8_8_ != 0) {
    (*(code *)PTR___rust_dealloc_00203c78)(puVar3,auVar6._8_8_,1);
  }
  return iVar2 == 1;
}


