// ELF address 0x00000000001d3600; run_meta_portfolio_matrix::merged_library_path

void _ZN25run_meta_portfolio_matrix19merged_library_path17he04cafd122ca2537E
               (undefined4 *param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  long lStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc35___rust_no_alloc_shim_is_unstable_v2_005eeff8)();
  lStack_58 = (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc12___rust_alloc_005eefd0)(0x48,8);
  if (lStack_58 != 0) {
    uStack_48 = 3;
    uStack_68 = &lStack_38;
    lStack_38 = 0;
    uStack_60 = 0;
                    /* try { // try from 002d366d to 002d3679 has its CatchHandler @ 002d3843 */
    uStack_40 = lStack_58;
    _ZN102__LT_core__iter__adapters__map__Map_LT_I_C_F_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4fold17h12759fc4eb50ee74E
              (param_2,param_2 + 0x30,&uStack_68);
    uStack_88 = (undefined4)uStack_48;
    uStack_84 = uStack_48._4_4_;
    uStack_80 = (undefined4)uStack_40;
    uStack_7c = uStack_40._4_4_;
    lStack_78 = lStack_38;
                    /* try { // try from 002d368d to 002d369d has its CatchHandler @ 002d385e */
    (*(code *)PTR__ZN3std3env4_var17hc27f2c2120a47479E_005ef328)(&uStack_68,param_3,param_4);
    lVar4 = lStack_58;
    lVar3 = uStack_60;
    lVar6 = lStack_78;
    if ((uStack_68 == (long *)0x0) && (lStack_50 != 0)) {
      if (lStack_78 == CONCAT44(uStack_84,uStack_88)) {
                    /* try { // try from 002d36eb to 002d36fa has its CatchHandler @ 002d37f6 */
        (*(code *)PTR__ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h9436e280d5f2e6e5E_005ef330)
                  (&uStack_88,&DAT_005d31a0);
      }
      lVar1 = CONCAT44(uStack_7c,uStack_80);
      *(long *)(lVar1 + lVar6 * 0x18) = lVar3;
      *(long *)(lVar1 + 8 + lVar6 * 0x18) = lVar4;
      *(long *)(lVar1 + 0x10 + lVar6 * 0x18) = lStack_50;
      lStack_78 = lVar6 + 1;
    }
    else if (uStack_60 != 0) {
      (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_005eefd8)(lStack_58,uStack_60,1);
    }
                    /* try { // try from 002d3743 to 002d3759 has its CatchHandler @ 002d385e */
    _ZN5alloc3str17join_generic_copy17hf38c065bea098f1aE
              (&uStack_68,CONCAT44(uStack_7c,uStack_80),lStack_78,&DAT_0019a3aa,1);
    *(long *)(param_1 + 4) = lStack_58;
    *param_1 = (undefined4)uStack_68;
    param_1[1] = uStack_68._4_4_;
    param_1[2] = (undefined4)uStack_60;
    param_1[3] = uStack_60._4_4_;
    puVar2 = PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_005eefd8;
    if (lStack_78 != 0) {
      puVar7 = (undefined8 *)(CONCAT44(uStack_7c,uStack_80) + 8);
      lVar6 = lStack_78;
      do {
        if (puVar7[-1] != 0) {
          (*(code *)puVar2)(*puVar7,puVar7[-1],1);
        }
        puVar7 = puVar7 + 3;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    if (CONCAT44(uStack_84,uStack_88) != 0) {
      (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_005eefd8)
                (CONCAT44(uStack_7c,uStack_80),CONCAT44(uStack_84,uStack_88) * 0x18,8);
    }
    return;
  }
  uVar5 = (*(code *)PTR__ZN5alloc7raw_vec12handle_error17h24b7b14ecfc8bc80E_005ef0e0)
                    (8,0x48,&DAT_005d2378);
                    /* catch() { ... } // from try @ 002d36eb with catch @ 002d37f6 */
  if ((param_4 != 0) &&
     ((*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_005eefd8)(param_3,param_4,1),
     param_2 != 0)) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_005eefd8)(param_3,param_4,1);
    _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h763eb292dab4d97bE
              (&uStack_88);
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume(uVar5);
  }
  _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h763eb292dab4d97bE
            (&uStack_88);
                    /* WARNING: Subroutine does not return */
  _Unwind_Resume(uVar5);
}


