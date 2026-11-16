// ELF address 0x0000000000042fa0; fill_prob_probe::__fb_plugin_impl::on_depth

undefined8
_ZN15fill_prob_probe16__fb_plugin_impl8on_depth17hd76628d656afe9b9E
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_1a0;
  long *plStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 **ppuStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 auStack_158 [3];
  undefined8 uStack_140;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 auStack_118 [32];
  long lStack_f8;
  undefined8 uStack_f0;
  
  (*(code *)
    PTR__ZN19future_backtest_sdk3abi5types12CMarketDepth8to_depth17h0095f76faa98ec56E_001ca490)
            (auStack_118);
  uStack_120 = 0;
  auStack_158[0] = 0x8000000000000000;
  uStack_140 = 0x8000000000000000;
  uStack_128 = param_3;
  lVar1 = _ZN94__LT_fill_prob_probe__ProbeStrategy_u20_as_u20_future_backtest_sdk__plugin__StrategyPlugin_GT_8on_depth17hbe200c9aab339345E
                    (param_1,auStack_118,auStack_158);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    plStack_198 = &lStack_1a0;
    puStack_190 = 
    PTR__ZN6anyhow5error62__LT_impl_u20_core__fmt__Display_u20_for_u20_anyhow__Error_GT_3fmt17ha943c52743f4e46dE_001ca2f8
    ;
    puStack_188 = &UNK_001c4468;
    uStack_180 = 2;
    uStack_168 = 0;
    ppuStack_178 = &plStack_198;
    uStack_170 = 1;
    lStack_1a0 = lVar1;
    (*(code *)PTR__ZN3std2io5stdio7_eprint17h1abaa574271c840dE_001ca360)(&puStack_188);
    (*(code *)
      PTR__ZN6anyhow5error65__LT_impl_u20_core__ops__drop__Drop_u20_for_u20_anyhow__Error_GT_4drop17h412df20aa64642a3E_001ca2e0
    )(&lStack_1a0);
    uVar2 = 0xffffffff;
  }
  _ZN4core3ptr66drop_in_place_LT_future_backtest_sdk__context__StrategyContext_GT_17h386b6af85f905c3eE
            (auStack_158);
  if (lStack_f8 != 0) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_001ca178)(uStack_f0,lStack_f8,1);
  }
  return uVar2;
}


