// ELF address 0x00000000008d5cd0; future_backtest::MetaControl::config::MetaManifest::load

/* WARNING: Removing unreachable block (ram,0x009d5e64) */

undefined8 *
_ZN15future_backtest11MetaControl6config12MetaManifest4load17h3825e397c6ca7458E
          (undefined8 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  long *plStack_168;
  undefined *puStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [16];
  undefined8 uStack_120;
  undefined1 *puStack_118;
  undefined8 uStack_110;
  long **pplStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_e8;
  undefined8 uStack_e0;
  
  (*(code *)PTR__ZN3std2fs14read_to_string5inner17h8aa1bf64105e0e99E_01aa6c48)(&lStack_158);
  uVar3 = uStack_148;
  uVar2 = uStack_150;
  lVar1 = lStack_158;
  auVar4 = (*(code *)PTR__ZN3std4path4Path6parent17hd39c1e1568b15612E_01aa7c78)(param_2,param_3);
  if (auVar4._0_8_ == 0) {
    auVar4._8_8_ = 1;
    auVar4._0_8_ = &anon_fe1b35fd190af3ec62b163d2072132da_117_llvm_6880758764856161;
  }
  (*(code *)
    PTR__ZN15future_backtest11MetaControl6config12MetaManifest5parse17h71f314d71ed0e6cfE_01aa7c80)
            (&lStack_e8,uStack_150,uVar3,auVar4._0_8_,auVar4._8_8_);
  if (lStack_e8 == -0x8000000000000000) {
    uStack_138 = uStack_e0;
    puStack_160 = 
    PTR__ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17h0c7391c9cbeee29aE_01aa7c70
    ;
    puStack_118 = anon_9c839d8261a2d9b6655a6b7286b1e655_146_llvm_5528135186037708526;
    uStack_110 = 1;
    uStack_f8 = 0;
    pplStack_108 = &plStack_168;
    uStack_100 = 1;
    plStack_168 = &lStack_158;
    lStack_158 = param_2;
    uStack_150 = param_3;
    (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_01aa6d80)
              (auStack_130,&puStack_118);
    uStack_148 = uStack_120;
    uStack_140 = uStack_e0;
    puStack_118 = (undefined1 *)0x3;
    uVar3 = _ZN6anyhow5error31__LT_impl_u20_anyhow__Error_GT_9construct17h7f09618e76bc1475E_llvm_2664273085281908480
                      (&lStack_158,&puStack_118);
    param_1[1] = uVar3;
    *param_1 = 0x8000000000000000;
  }
  else {
    (*(code *)PTR_memcpy_01aa6b48)(param_1,&lStack_e8,0xb8);
  }
  if (lVar1 != 0) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20)(uVar2,lVar1,1);
  }
  return param_1;
}


