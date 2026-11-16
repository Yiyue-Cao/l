// ELF address 0x00000000001cf050; run_meta_portfolio_matrix::read_toml

/* WARNING: Removing unreachable block (ram,0x002cf1ca) */

void _ZN25run_meta_portfolio_matrix9read_toml17h0f6d1189455a7b3eE
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 *puStack_188;
  undefined8 uStack_180;
  undefined8 **ppuStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  int aiStack_f0 [2];
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  (*(code *)PTR__ZN3std2fs14read_to_string5inner17h8aa1bf64105e0e99E_005ef290)(&lStack_1a0);
                    /* try { // try from 002cf08f to 002cf09f has its CatchHandler @ 002cf279 */
  (*(code *)
    PTR__ZN79__LT_toml_edit__document__DocumentMut_u20_as_u20_core__str__traits__FromStr_GT_8from_str17hab358f751264746eE_005ef298
  )(aiStack_f0,uStack_198,uStack_190);
  if (aiStack_f0[0] == 0xc) {
    uStack_108 = uStack_98;
    uStack_100 = uStack_90;
    uStack_118 = uStack_a8;
    uStack_110 = uStack_a0;
    uStack_128 = uStack_b8;
    uStack_124 = uStack_b4;
    uStack_120 = uStack_b0;
    uStack_11c = uStack_ac;
    uStack_138 = uStack_c8;
    uStack_134 = uStack_c4;
    uStack_130 = uStack_c0;
    uStack_12c = uStack_bc;
    uStack_148 = uStack_d8;
    uStack_144 = uStack_d4;
    uStack_140 = uStack_d0;
    uStack_13c = uStack_cc;
    uStack_158 = uStack_e8;
    uStack_154 = uStack_e4;
    uStack_150 = uStack_e0;
    uStack_14c = uStack_dc;
    puStack_1c0 = &uStack_1b0;
    puStack_1b8 = 
    PTR__ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17h0c7391c9cbeee29aE_005ef208
    ;
    puStack_188 = anon_a435872a7ef654a536fda4d3bbebe7b6_72_llvm_9283143109645135574;
    uStack_180 = 1;
    uStack_168 = 0;
    ppuStack_178 = &puStack_1c0;
    uStack_170 = 1;
                    /* try { // try from 002cf15c to 002cf16b has its CatchHandler @ 002cf251 */
    uStack_1b0 = param_2;
    uStack_1a8 = param_3;
    (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_005ef0d8)
              (&lStack_1a0,&puStack_188);
                    /* try { // try from 002cf16c to 002cf17a has its CatchHandler @ 002cf279 */
    uVar1 = _ZN52__LT_E_u20_as_u20_anyhow__context__ext__StdError_GT_11ext_context17h8843756e046a5f72E_llvm_9283143109645135574
                      (&uStack_158,&lStack_1a0);
    param_1[1] = uVar1;
    *param_1 = 0xc;
  }
  else {
    (*(code *)PTR_memcpy_005ef048)(param_1,aiStack_f0,200);
  }
  if (lStack_1a0 != 0) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_005eefd8)(uStack_198,lStack_1a0,1);
  }
  return;
}


