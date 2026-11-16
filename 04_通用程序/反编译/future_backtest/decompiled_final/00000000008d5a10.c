// ELF address 0x00000000008d5a10; future_backtest::MetaControl::config::MetaManifest::load

/* WARNING: Removing unreachable block (ram,0x009d5a56) */

undefined8 *
_ZN15future_backtest11MetaControl6config12MetaManifest4load17h33d06686973db3b9E
          (undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  long *plStack_168;
  undefined *puStack_160;
  long lStack_158;
  long lStack_150;
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
  
  lVar1 = param_2[1];
  lVar2 = param_2[2];
  (*(code *)PTR__ZN3std2fs14read_to_string5inner17h8aa1bf64105e0e99E_01aa6c48)
            (&lStack_158,lVar1,lVar2);
  uVar5 = uStack_148;
  lVar4 = lStack_150;
  lVar3 = lStack_158;
  auVar6 = (*(code *)PTR__ZN3std4path4Path6parent17hd39c1e1568b15612E_01aa7c78)(lVar1,lVar2);
  if (auVar6._0_8_ == 0) {
    auVar6._8_8_ = 1;
    auVar6._0_8_ = &anon_fe1b35fd190af3ec62b163d2072132da_117_llvm_6880758764856161;
  }
  (*(code *)
    PTR__ZN15future_backtest11MetaControl6config12MetaManifest5parse17h71f314d71ed0e6cfE_01aa7c80)
            (&lStack_e8,lStack_150,uVar5,auVar6._0_8_,auVar6._8_8_);
  if (lStack_e8 == -0x8000000000000000) {
    uStack_138 = uStack_e0;
    plStack_168 = &lStack_158;
    puStack_160 = 
    PTR__ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17h0c7391c9cbeee29aE_01aa7c70
    ;
    puStack_118 = anon_9c839d8261a2d9b6655a6b7286b1e655_146_llvm_5528135186037708526;
    uStack_110 = 1;
    uStack_f8 = 0;
    pplStack_108 = &plStack_168;
    uStack_100 = 1;
    lStack_158 = lVar1;
    lStack_150 = lVar2;
    (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_01aa6d80)
              (auStack_130,&puStack_118);
    uStack_148 = uStack_120;
    uStack_140 = uStack_e0;
    puStack_118 = (undefined1 *)0x3;
    uVar5 = _ZN6anyhow5error31__LT_impl_u20_anyhow__Error_GT_9construct17h7f09618e76bc1475E_llvm_2664273085281908480
                      (&lStack_158,&puStack_118);
    param_1[1] = uVar5;
    *param_1 = 0x8000000000000000;
  }
  else {
    (*(code *)PTR_memcpy_01aa6b48)(param_1,&lStack_e8,0xb8);
  }
  if (lVar3 != 0) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20)(lVar4,lVar3,1);
  }
  if (*param_2 != 0) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20)(lVar1,*param_2,1);
  }
  return param_1;
}


