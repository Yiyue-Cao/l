// ELF address 0x0000000000042de0; fill_prob_probe::__fb_plugin_impl::on_begin

undefined8
_ZN15fill_prob_probe16__fb_plugin_impl8on_begin17ha150a8af80a783b3E
          (undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_90;
  long *plStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 **ppuStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 auStack_48 [3];
  undefined8 uStack_30;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  uStack_10 = 0;
  auStack_48[0] = 0x8000000000000000;
  uStack_30 = 0x8000000000000000;
  uStack_18 = param_2;
  lVar1 = _ZN94__LT_fill_prob_probe__ProbeStrategy_u20_as_u20_future_backtest_sdk__plugin__StrategyPlugin_GT_8on_begin17he3f8ca0b30583363E
                    (param_1,auStack_48);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    plStack_88 = &lStack_90;
    puStack_80 = 
    PTR__ZN6anyhow5error62__LT_impl_u20_core__fmt__Display_u20_for_u20_anyhow__Error_GT_3fmt17ha943c52743f4e46dE_001ca2f8
    ;
    puStack_78 = &UNK_001c4448;
    uStack_70 = 2;
    uStack_58 = 0;
    ppuStack_68 = &plStack_88;
    uStack_60 = 1;
    lStack_90 = lVar1;
    (*(code *)PTR__ZN3std2io5stdio7_eprint17h1abaa574271c840dE_001ca360)(&puStack_78);
    (*(code *)
      PTR__ZN6anyhow5error65__LT_impl_u20_core__ops__drop__Drop_u20_for_u20_anyhow__Error_GT_4drop17h412df20aa64642a3E_001ca2e0
    )(&lStack_90);
    uVar2 = 0xffffffff;
  }
  _ZN4core3ptr66drop_in_place_LT_future_backtest_sdk__context__StrategyContext_GT_17h386b6af85f905c3eE
            (auStack_48);
  return uVar2;
}


