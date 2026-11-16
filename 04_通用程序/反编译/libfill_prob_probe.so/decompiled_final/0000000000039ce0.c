// ELF address 0x0000000000039ce0; fill_prob_probe::write_buf_local

undefined8
_ZN15fill_prob_probe15write_buf_local17heb766f9cf16242c2E
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 unaff_RBX;
  undefined8 unaff_R12;
  long lStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_50 = 0x139cfd;
  lVar2 = (*(code *)PTR__ZN3std4path4Path6parent17hd39c1e1568b15612E_001ca328)();
  if (lVar2 != 0) {
    uStack_40 = CONCAT35(uStack_40._5_3_,0x1000001ff);
    uStack_50 = 0x139d1d;
    lStack_70 = (*(code *)PTR__ZN3std2fs10DirBuilder7_create17h365b085b963e6ebdE_001ca330)
                          (&uStack_40,lVar2);
    if (lStack_70 != 0) {
      lVar2 = (*(code *)PTR__ZN6anyhow7nightly21request_ref_backtrace17hbea295235811927fE_001ca5e0)
                        (&lStack_70,
                         anon_59aedeeb1aa7c38cc7e2d3dfb5f2aaf6_15_llvm_12185043879288970130);
      if (lVar2 == 0) {
        (*(code *)PTR__ZN3std9backtrace9Backtrace7capture17hd1766be109779efcE_001ca5d8)(&uStack_68);
        uStack_38 = CONCAT44(uStack_5c,uStack_60);
        uStack_30 = CONCAT44(uStack_54,uStack_58);
        unaff_RBX = CONCAT44(uStack_44,uStack_48);
        uStack_28 = uStack_50;
      }
      else {
        uStack_68 = 3;
        uStack_40 = unaff_R12;
      }
      uStack_48 = (undefined4)unaff_RBX;
      uStack_44 = (undefined4)((ulong)unaff_RBX >> 0x20);
      uStack_60 = (undefined4)uStack_38;
      uStack_5c = uStack_38._4_4_;
      uStack_58 = (undefined4)uStack_30;
      uStack_54 = uStack_30._4_4_;
      uStack_50 = uStack_28;
      uVar3 = _ZN6anyhow5error31__LT_impl_u20_anyhow__Error_GT_9construct17h49fdd29241541a89E_llvm_12185043879288970130
                        (lStack_70,&uStack_68);
      return uVar3;
    }
  }
  uStack_40 = 0x1b600000000;
  uVar1 = (ulong)uStack_38 >> 0x28;
  uStack_38 = CONCAT35((uint3)uVar1 & 0xffff00,0x100000000);
  uStack_38 = CONCAT44(uStack_38._4_4_,0x1000100);
  uStack_50 = 0x139d69;
  (*(code *)PTR__ZN3std2fs11OpenOptions5_open17hfc3856d850d454daE_001ca338)
            (&uStack_30,&uStack_40,param_1,param_2);
  if ((uStack_30 & 1) == 0) {
    uStack_44 = uStack_30._4_4_;
    uStack_50 = 0x139d88;
    lVar2 = _ZN3std2io5Write9write_all17hf6cb798b22fe66c3E(&uStack_44,param_3,param_4);
    if (lVar2 == 0) {
      uStack_50 = 0x139db1;
      (*(code *)PTR_close_001ca340)(uStack_44);
      uVar3 = 0;
    }
    else {
      uStack_50 = 0x139d95;
      uVar3 = _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17hcbbf75afd90376ddE
                        (lVar2);
      uStack_50 = 0x139da2;
      (*(code *)PTR_close_001ca340)(uStack_44);
    }
  }
  else {
    uStack_50 = 0x139dc9;
    uVar3 = _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17hcbbf75afd90376ddE
                      (uStack_28);
  }
  return uVar3;
}


