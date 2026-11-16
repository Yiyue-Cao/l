// ELF address 0x0000000000042ed0; fill_prob_probe::__fb_plugin_impl::on_signal

undefined8
_ZN15fill_prob_probe16__fb_plugin_impl9on_signal17he67be4546952193aE
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 auStack_e0 [3];
  undefined8 uStack_c8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_88;
  undefined8 uStack_80;
  long lStack_70;
  undefined8 uStack_68;
  long lStack_58;
  undefined8 uStack_50;
  
  (*(code *)PTR__ZN19future_backtest_sdk3abi5types7CSignal9to_signal17h407aff7d648693dcE_001ca488)
            (&lStack_a0);
  uStack_a8 = 0;
  auStack_e0[0] = 0x8000000000000000;
  uStack_c8 = 0x8000000000000000;
  uStack_b0 = param_3;
  _ZN4core3ptr66drop_in_place_LT_future_backtest_sdk__context__StrategyContext_GT_17h386b6af85f905c3eE
            (auStack_e0);
  if (lStack_a0 != 0) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_001ca178)(uStack_98,lStack_a0,1);
  }
  if (lStack_88 != 0) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_001ca178)(uStack_80,lStack_88,1);
  }
  if (lStack_70 != 0) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_001ca178)(uStack_68,lStack_70,1);
  }
  if (lStack_58 != 0) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_001ca178)(uStack_50,lStack_58,1);
  }
  return 0;
}


