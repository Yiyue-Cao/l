// ELF address 0x0000000000043530; create_strategy

void create_strategy(void)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  plVar2 = (long *)_ZN4core3ops8function6FnOnce9call_once17h09e505c79dfec46dE_llvm_11018517925037509689
                             (0);
  if (plVar2 == (long *)0x0) {
    (*(code *)PTR__ZN3std6thread5local18panic_access_error17h3f2bda216c15f413E_001ca4a8)
              (anon_c80768ae94de1e99c0f2496e6d6d4261_6_llvm_3760118253902920452);
  }
  else {
    uStack_98 = 0x8000000000000000;
    uStack_20 = (undefined4)*plVar2;
    uStack_1c = *(undefined4 *)((long)plVar2 + 4);
    uStack_18 = (undefined4)plVar2[1];
    uStack_14 = *(undefined4 *)((long)plVar2 + 0xc);
    *plVar2 = *plVar2 + 1;
    uStack_b8 = 0;
    uStack_c8 = 0;
    uStack_c0 = 8;
    uStack_40 = anon_b2f48b7ec27be9d46dd24d6626e61ab1_12_llvm_11018517925037509689._0_8_;
    uStack_38 = anon_b2f48b7ec27be9d46dd24d6626e61ab1_12_llvm_11018517925037509689._8_8_;
    uStack_30 = anon_b2f48b7ec27be9d46dd24d6626e61ab1_12_llvm_11018517925037509689._16_4_;
    uStack_2c = anon_b2f48b7ec27be9d46dd24d6626e61ab1_12_llvm_11018517925037509689._20_4_;
    uStack_28 = anon_b2f48b7ec27be9d46dd24d6626e61ab1_12_llvm_11018517925037509689._24_4_;
    uStack_24 = anon_b2f48b7ec27be9d46dd24d6626e61ab1_12_llvm_11018517925037509689._28_4_;
    uStack_b0 = 0;
    uStack_a8 = 8;
    uStack_a0 = 0;
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc35___rust_no_alloc_shim_is_unstable_v2_001ca198)();
    lVar3 = (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc12___rust_alloc_001ca170)(0xb8,8);
    if (lVar3 == 0) {
      (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17hf07a1aab219f1466E_001ca288)(8,0xb8);
    }
    else {
      (*(code *)PTR_memcpy_001ca220)(lVar3,&uStack_c8,0xb8);
      (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc35___rust_no_alloc_shim_is_unstable_v2_001ca198)();
      plVar2 = (long *)(*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc12___rust_alloc_001ca170)(0x38,8);
      if (plVar2 != (long *)0x0) {
        *plVar2 = lVar3;
        plVar2[1] = (long)_ZN15fill_prob_probe16__fb_plugin_impl8on_begin17ha150a8af80a783b3E;
        plVar2[2] = (long)_ZN15fill_prob_probe16__fb_plugin_impl9on_signal17he67be4546952193aE;
        plVar2[3] = (long)_ZN15fill_prob_probe16__fb_plugin_impl8on_depth17hd76628d656afe9b9E;
        plVar2[4] = (long)_ZN15fill_prob_probe16__fb_plugin_impl9on_finish17h70e31d46703f2b50E;
        plVar2[5] = (long)_ZN15fill_prob_probe16__fb_plugin_impl8on_order17h8addf39d6933b4cfE;
        plVar2[6] = (long)_ZN15fill_prob_probe16__fb_plugin_impl7destroy17hc04b03490df40645E;
        return;
      }
      (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17hf07a1aab219f1466E_001ca288)(8,0x38);
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


