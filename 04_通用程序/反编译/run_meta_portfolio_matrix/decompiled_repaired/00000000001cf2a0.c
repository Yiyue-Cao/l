// ELF address 0x00000000001cf2a0; run_meta_portfolio_matrix::write_task_audit

undefined8
_ZN25run_meta_portfolio_matrix16write_task_audit17h88a61bab93ca1001E
          (undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  code *pcVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  code *pcStack_a0;
  int iStack_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puStack_80 = (undefined *)CONCAT35(puStack_80._5_3_,0x1000001ff);
  lVar4 = (*(code *)PTR__ZN3std2fs10DirBuilder7_create17h365b085b963e6ebdE_005ef0b8)
                    (&puStack_80,param_1,param_2);
  if (lVar4 != 0) {
    uVar5 = _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17h45439aab84723232E
                      (lVar4);
    return uVar5;
  }
  (*(code *)PTR__ZN3std4path4Path5_join17h1bf89d721f07885bE_005ef0a8)
            (&puStack_80,param_1,param_2,&DAT_00199e3e,0x13);
  uVar5 = uStack_78;
  lStack_b8 = 0x1b600000000;
  uStack_b0 = (code *)((ulong)uStack_b0._6_2_ << 0x30);
  uStack_b0 = (code *)CONCAT35(uStack_b0._5_3_,0x100000000);
  uStack_b0 = (code *)CONCAT44(uStack_b0._4_4_,0x1000100);
                    /* try { // try from 002cf339 to 002cf34b has its CatchHandler @ 002cf6f2 */
  (*(code *)PTR__ZN3std2fs11OpenOptions5_open17hfc3856d850d454daE_005ef240)
            (&iStack_98,&lStack_b8,uStack_78,plStack_70);
  if (puStack_80 != (undefined *)0x0) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_005eefd8)(uVar5,puStack_80,1);
  }
  if (iStack_98 == 1) {
    uVar5 = _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17h45439aab84723232E
                      (uStack_90);
  }
  else {
    uStack_c0 = uStack_94;
                    /* try { // try from 002cf377 to 002cf394 has its CatchHandler @ 002cf736 */
    (*(code *)PTR__ZN3std4path4Path5_join17h1bf89d721f07885bE_005ef0a8)
              (&puStack_80,param_1,param_2,&DAT_00199e51,0x11);
    uVar5 = uStack_78;
    lStack_b8 = 0x1b600000000;
    uStack_b0._5_3_ = (uint3)((ulong)uStack_b0 >> 0x28) & 0xffff00;
    uStack_b0 = (code *)CONCAT35(uStack_b0._5_3_,0x100000000);
    uStack_b0 = (code *)CONCAT44(uStack_b0._4_4_,0x1000100);
                    /* try { // try from 002cf3c2 to 002cf3d7 has its CatchHandler @ 002cf6c5 */
    (*(code *)PTR__ZN3std2fs11OpenOptions5_open17hfc3856d850d454daE_005ef240)
              (&iStack_98,&lStack_b8,uStack_78,plStack_70);
    if (puStack_80 != (undefined *)0x0) {
      (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_005eefd8)(uVar5,puStack_80,1);
    }
    if (iStack_98 == 1) {
                    /* try { // try from 002cf3f7 to 002cf400 has its CatchHandler @ 002cf736 */
      uVar5 = _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17h45439aab84723232E
                        (uStack_90);
    }
    else {
      uStack_bc = uStack_94;
                    /* try { // try from 002cf40e to 002cf44b has its CatchHandler @ 002cf715 */
      lVar4 = _ZN3std2io5Write9write_all17hfc05c8b5345abde3E(&uStack_c0,&DAT_00199e62,0x13);
      if ((lVar4 == 0) &&
         (lVar4 = _ZN3std2io5Write9write_all17hfc05c8b5345abde3E(&uStack_bc,&DAT_00199e62,0x13),
         lVar4 == 0)) {
        uStack_40 = param_1;
        if (param_4 != 0) {
          param_4 = param_4 * 0xd0;
          uStack_48 = param_2;
          do {
            puVar1 = PTR__ZN3std4path4Path5_join17h1bf89d721f07885bE_005ef0a8;
            lStack_38 = param_4;
                    /* try { // try from 002cf4c0 to 002cf4d0 has its CatchHandler @ 002cf717 */
            (*(code *)PTR__ZN3std4path4Path5_join17h1bf89d721f07885bE_005ef0a8)
                      (&puStack_80,uStack_40,uStack_48,*(undefined8 *)(param_3 + 8),
                       *(undefined8 *)(param_3 + 0x10));
                    /* try { // try from 002cf4e9 to 002cf4f3 has its CatchHandler @ 002cf6a6 */
            uStack_50 = uStack_78;
            (*(code *)puVar1)(&lStack_b8,uStack_78,plStack_70,*(undefined8 *)(param_3 + 0xc0),
                              *(undefined8 *)(param_3 + 200));
            pcVar2 = uStack_b0;
                    /* try { // try from 002cf504 to 002cf51b has its CatchHandler @ 002cf66c */
            (*(code *)puVar1)(&iStack_98,uStack_b0,lStack_a8,&DAT_0019927c,4);
            uVar5 = uStack_90;
                    /* try { // try from 002cf526 to 002cf52e has its CatchHandler @ 002cf671 */
            cVar3 = (*(code *)PTR__ZN3std4path4Path7is_file17h9e900301ff03d31cE_005ef2a0)
                              (uStack_90,uStack_88);
            if (CONCAT44(uStack_94,iStack_98) != 0) {
              (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_005eefd8)
                        (uVar5,CONCAT44(uStack_94,iStack_98),1);
            }
            if (lStack_b8 != 0) {
              (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_005eefd8)
                        (pcVar2,lStack_b8,1);
            }
            if (puStack_80 != (undefined *)0x0) {
              (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_005eefd8)
                        (uStack_50,puStack_80,1);
            }
            puVar6 = &uStack_c0;
            if (cVar3 == '\0') {
              puVar6 = &uStack_bc;
            }
            lStack_a8 = param_3 + 0xb8;
            uStack_b0 = 
            _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE
            ;
            pcStack_a0 = 
            _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE
            ;
            puStack_80 = &DAT_005d2e00;
            uStack_78 = 3;
            uStack_68 = 2;
            uStack_60 = 0;
            lStack_b8 = param_3;
            plStack_70 = &lStack_b8;
                    /* try { // try from 002cf5dc to 002cf5e6 has its CatchHandler @ 002cf717 */
            lVar4 = _ZN3std2io17default_write_fmt17h64f08914ed51244dE(puVar6,&puStack_80);
            if (lVar4 != 0) {
                    /* try { // try from 002cf65f to 002cf666 has its CatchHandler @ 002cf715 */
              uVar5 = _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17h45439aab84723232E
                                (lVar4);
              goto LAB_002cf44c;
            }
            param_3 = param_3 + 0xd0;
            param_4 = lStack_38 + -0xd0;
          } while (param_4 != 0);
        }
        puVar1 = PTR_close_005ef140;
        (*(code *)PTR_close_005ef140)(uStack_bc);
        (*(code *)puVar1)(uStack_c0);
        return 0;
      }
      uVar5 = _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17h45439aab84723232E
                        (lVar4);
LAB_002cf44c:
      (*(code *)PTR_close_005ef140)(uStack_bc);
    }
    (*(code *)PTR_close_005ef140)(uStack_c0);
  }
  return uVar5;
}


