// ELF address 0x0000000000039e00; fill_prob_probe::write_buf_hdfs

undefined8
_ZN15fill_prob_probe14write_buf_hdfs17hd50111fec6bf1ffcE
          (undefined *param_1,undefined *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_R13;
  bool bVar8;
  undefined1 auVar9 [16];
  ulong uStack_c8;
  undefined1 uStack_c0;
  undefined1 uStack_bf;
  undefined1 uStack_be;
  undefined1 uStack_bd;
  undefined1 uStack_bc;
  undefined1 uStack_bb;
  undefined2 uStack_ba;
  undefined8 uStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined1 **ppuStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long *plStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long **pplStack_58;
  undefined1 **ppuStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  puStack_70 = param_1;
  puStack_68 = param_2;
  if (_ZN15fill_prob_probe11HDFS_CLIENT17hf615303c778fb9fbE._8_4_ != 0) {
    auVar9 = (*(code *)PTR__ZN4hdrs6client6Client15connect_as_user17h0b2833bf7a6a52c9E_001ca348)
                       (&UNK_001181da,0x13,&UNK_001181ed,3);
    lVar6 = auVar9._8_8_;
    if ((auVar9 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
      plStack_78 = &lStack_80;
      puStack_70 = 
      PTR__ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17hfc32ea0aac99eb83E_001ca238
      ;
      puStack_68 = &UNK_001c3d30;
      puStack_60 = (undefined *)0x1;
      uStack_48 = 0;
      pplStack_58 = &plStack_78;
      ppuStack_50 = (undefined1 **)0x1;
      uStack_90 = 0x137947;
      lStack_80 = lVar6;
      (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_001ca230)
                (auStack_38,&puStack_68);
      uStack_90 = 0x137951;
      uVar7 = _ZN6anyhow5error31__LT_impl_u20_anyhow__Error_GT_3msg17h0d79170d10c5d28bE(auStack_38);
      if (((uint)lStack_80 & 3) == 1) {
        lVar6 = lStack_80 + -1;
        uVar1 = *(undefined8 *)(lStack_80 + -1);
        puVar2 = *(undefined8 **)(lStack_80 + 7);
        if ((code *)*puVar2 != (code *)0x0) {
          uStack_90 = 0x13797d;
          (*(code *)*puVar2)(uVar1);
        }
        if (puVar2[1] != 0) {
          uStack_90 = 0x137995;
          (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_001ca178)
                    (uVar1,puVar2[1],puVar2[2]);
        }
        uStack_90 = 0x1379a8;
        (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_001ca178)(lVar6,0x18,8);
      }
      return uVar7;
    }
    puStack_60 = (undefined *)0x1;
    pplStack_58 = (long **)lVar6;
    if (_ZN15fill_prob_probe11HDFS_CLIENT17hf615303c778fb9fbE._8_4_ == 0) {
      bVar8 = false;
    }
    else {
      _ZN3std4sync9once_lock17OnceLock_LT_T_GT_10initialize17hd1b1e9d293cfdb9eE
                (_ZN15fill_prob_probe11HDFS_CLIENT17hf615303c778fb9fbE,&puStack_60);
      bVar8 = _ZN15fill_prob_probe11HDFS_CLIENT17hf615303c778fb9fbE._8_4_ != 0;
    }
    if (bVar8) {
      uVar7 = (*(code *)PTR__ZN4core6option13unwrap_failed17h4154e01d14eb4879E_001ca378)
                        (&UNK_001c3d18);
      if (*(long *)(unaff_R13 + 8) != 0) {
        (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_001ca178)
                  (uStack_88,*(long *)(unaff_R13 + 8),*(undefined8 *)(unaff_R13 + 0x10));
      }
      (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_001ca178)(plStack_78,0x18,8);
      if ((uStack_c8 & 0x7fffffffffffffff) != 0) {
        (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_001ca178)
                  (CONCAT26(uStack_ba,
                            CONCAT15(uStack_bb,
                                     CONCAT14(uStack_bc,
                                              CONCAT13(uStack_bd,
                                                       CONCAT12(uStack_be,
                                                                CONCAT11(uStack_bf,uStack_c0)))))),
                   uStack_c8,1);
        uVar7 = func_0x001c2af0(uVar7);
        _ZN4core3ptr37drop_in_place_LT_hdrs__file__File_GT_17h76cac6729dd1ec78E(&puStack_b0);
      }
      func_0x001c2af0(uVar7);
      (*(code *)PTR__ZN4core9panicking16panic_in_cleanup17h06986ff9364fd114E_001ca240)();
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return uVar7;
    }
  }
  puVar5 = puStack_68;
  puVar4 = puStack_70;
  lVar6 = (*(code *)PTR__ZN3std4path4Path6parent17hd39c1e1568b15612E_001ca328)
                    (puStack_70,puStack_68);
  if (lVar6 != 0) {
    (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h5a01077e39ea51b9E_001ca350)
              (&uStack_c8,lVar6);
    lVar6 = (*(code *)PTR__ZN4hdrs6client6Client10create_dir17h864d0b66b0a927b8E_001ca358)
                      (_ZN15fill_prob_probe11HDFS_CLIENT17hf615303c778fb9fbE,
                       CONCAT26(uStack_ba,
                                CONCAT15(uStack_bb,
                                         CONCAT14(uStack_bc,
                                                  CONCAT13(uStack_bd,
                                                           CONCAT12(uStack_be,
                                                                    CONCAT11(uStack_bf,uStack_c0))))
                                        )),uStack_b8);
    if (lVar6 != 0) {
      pcStack_a8 = 
      _ZN77__LT_anyhow__wrapper__MessageError_LT_M_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h3200af1a1bc564acE
      ;
      ppuStack_a0 = (undefined1 **)&lStack_80;
      puStack_98 = 
      PTR__ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17hfc32ea0aac99eb83E_001ca238
      ;
      puStack_60 = &UNK_001c4100;
      pplStack_58 = (long **)0x3;
      uStack_40 = 0;
      ppuStack_50 = &puStack_b0;
      uStack_48 = 2;
      puStack_b0 = (undefined1 *)&uStack_c8;
      lStack_80 = lVar6;
      (*(code *)PTR__ZN3std2io5stdio7_eprint17h1abaa574271c840dE_001ca360)(&puStack_60);
      if (((uint)lStack_80 & 3) == 1) {
        plStack_78 = (long *)(lStack_80 + -1);
        uStack_88 = *(undefined8 *)(lStack_80 + -1);
        puVar2 = *(undefined8 **)(lStack_80 + 7);
        if ((code *)*puVar2 != (code *)0x0) {
          (*(code *)*puVar2)(uStack_88);
        }
        if (puVar2[1] != 0) {
          (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_001ca178)
                    (uStack_88,puVar2[1],puVar2[2]);
        }
        (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_001ca178)(plStack_78,0x18,8);
      }
    }
    if ((uStack_c8 != 0x8000000000000000) && (uStack_c8 != 0)) {
      (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_001ca178)
                (CONCAT26(uStack_ba,
                          CONCAT15(uStack_bb,
                                   CONCAT14(uStack_bc,
                                            CONCAT13(uStack_bd,
                                                     CONCAT12(uStack_be,
                                                              CONCAT11(uStack_bf,uStack_c0)))))),
                 uStack_c8,1);
    }
  }
  uStack_c8 = _ZN15fill_prob_probe11HDFS_CLIENT17hf615303c778fb9fbE._0_8_;
  uStack_c0 = 0;
  uStack_be = 0;
  uStack_bb = 0;
  uStack_bf = 1;
  uStack_bc = 1;
  uStack_bd = 1;
  (*(code *)PTR__ZN4hdrs12open_options11OpenOptions4open17h30cc6d34765f90e8E_001ca368)
            (&puStack_60,&uStack_c8,puVar4,puVar5);
  if (puStack_60 == (undefined *)0x8000000000000000) {
    uVar7 = _ZN15fill_prob_probe14write_buf_hdfs28__u7b__u7b_closure_u7d__u7d_17h3a7b0c370555bfd3E
                      (&puStack_70);
  }
  else {
    uStack_90 = uStack_40;
    ppuStack_a0 = ppuStack_50;
    puStack_98 = (undefined *)uStack_48;
    puStack_b0 = puStack_60;
    pcStack_a8 = (code *)pplStack_58;
    lVar6 = _ZN3std2io5Write9write_all17h6dba43e877c1e1aeE(&puStack_b0,param_3,param_4);
    if ((lVar6 == 0) &&
       (lVar6 = (*(code *)
                  PTR__ZN51__LT_hdrs__file__File_u20_as_u20_std__io__Write_GT_5flush17h3b20c23b54bb91e4E_001ca370
                )(&puStack_b0), lVar6 == 0)) {
      (*(code *)
        PTR__ZN58__LT_hdrs__file__File_u20_as_u20_core__ops__drop__Drop_GT_4drop17h6e3aed570c5a3d6aE_001ca210
      )(&puStack_b0);
      if (puStack_b0 != (undefined *)0x0) {
        (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_001ca178)
                  (pcStack_a8,puStack_b0,1);
      }
      uVar7 = 0;
    }
    else {
      uVar7 = _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17hcbbf75afd90376ddE
                        (lVar6);
      (*(code *)
        PTR__ZN58__LT_hdrs__file__File_u20_as_u20_core__ops__drop__Drop_GT_4drop17h6e3aed570c5a3d6aE_001ca210
      )(&puStack_b0);
      if (puStack_b0 != (undefined *)0x0) {
        (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_001ca178)
                  (pcStack_a8,puStack_b0,1);
      }
    }
  }
  return uVar7;
}


