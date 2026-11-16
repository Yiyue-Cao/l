// ELF address 0x00000000000431d0; fill_prob_probe::__fb_plugin_impl::on_order

undefined8
_ZN15fill_prob_probe16__fb_plugin_impl8on_order17h8addf39d6933b4cfE
          (undefined8 param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lStack_90;
  ulong uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar4 = *(long *)(param_2 + 0x18);
  uStack_38 = param_3;
  if (lVar4 == 0) {
    lVar4 = 0;
    lVar3 = 1;
  }
  else {
    lVar3 = (*(code *)PTR_strlen_001ca498)(lVar4);
    (*(code *)PTR__ZN4core3ffi5c_str4CStr6to_str17h355b93d7272304b4E_001ca4a0)
              (&uStack_78,lVar4,lVar3 + 1);
    lVar4 = lStack_68;
    uVar8 = uStack_70;
    uVar2 = uStack_78;
    lVar9 = 0;
    lVar6 = lStack_68;
    if ((byte)uStack_78 != '\0') {
      lVar6 = lVar9;
    }
    if (lVar6 < 0) {
LAB_00143231:
      (*(code *)PTR__ZN5alloc7raw_vec12handle_error17h24b7b14ecfc8bc80E_001ca320)
                (lVar9,lVar6,anon_7616f667d4b1eaadf1788b5b502249de_14_llvm_17936036662276821647);
      goto LAB_00143362;
    }
    if (lVar6 == 0) {
      lVar4 = 0;
      lVar3 = 1;
    }
    else {
      (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc35___rust_no_alloc_shim_is_unstable_v2_001ca198)();
      lVar9 = 1;
      lVar3 = (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc12___rust_alloc_001ca170)(lVar6,1);
      if (lVar3 == 0) goto LAB_00143231;
    }
    if ((uVar2 & 1) != 0) {
      uVar8 = 1;
    }
    (*(code *)PTR_memcpy_001ca220)(lVar3,uVar8,lVar6);
  }
  lStack_90 = 1;
  lVar6 = *(long *)(param_2 + 0x20);
  if (lVar6 == 0) {
    lVar9 = 0;
    lVar6 = *(long *)(param_2 + 0x28);
  }
  else {
    lVar9 = (*(code *)PTR_strlen_001ca498)(lVar6);
    (*(code *)PTR__ZN4core3ffi5c_str4CStr6to_str17h355b93d7272304b4E_001ca4a0)
              (&uStack_78,lVar6,lVar9 + 1);
    lVar9 = lStack_68;
    uVar8 = uStack_70;
    uVar2 = uStack_78;
    lVar10 = 0;
    lVar6 = lStack_68;
    if ((byte)uStack_78 != 0) {
      lVar6 = lVar10;
    }
    if (lVar6 < 0) {
LAB_001432f4:
      (*(code *)PTR__ZN5alloc7raw_vec12handle_error17h24b7b14ecfc8bc80E_001ca320)
                (lVar10,lVar6,anon_7616f667d4b1eaadf1788b5b502249de_14_llvm_17936036662276821647);
      goto LAB_00143362;
    }
    if (lVar6 == 0) {
      lVar9 = 0;
      lStack_90 = 1;
    }
    else {
      (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc35___rust_no_alloc_shim_is_unstable_v2_001ca198)();
      lVar10 = 1;
      lStack_90 = (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc12___rust_alloc_001ca170)(lVar6,1);
      if (lStack_90 == 0) goto LAB_001432f4;
    }
    if ((uVar2 & 1) != 0) {
      uVar8 = 1;
    }
    (*(code *)PTR_memcpy_001ca220)(lStack_90,uVar8,lVar6);
    lVar6 = *(long *)(param_2 + 0x28);
  }
  if (lVar6 == 0) {
    lVar10 = 1;
    lVar6 = 0;
    goto LAB_00143433;
  }
  lVar10 = (*(code *)PTR_strlen_001ca498)(lVar6);
  (*(code *)PTR__ZN4core3ffi5c_str4CStr6to_str17h355b93d7272304b4E_001ca4a0)
            (&uStack_78,lVar6,lVar10 + 1);
  lVar7 = 0;
  lVar5 = lStack_68;
  if ((byte)uStack_78 != 0) {
    lVar5 = lVar7;
  }
  if (lVar5 < 0) {
LAB_0014334f:
    (*(code *)PTR__ZN5alloc7raw_vec12handle_error17h24b7b14ecfc8bc80E_001ca320)
              (lVar7,lVar5,anon_7616f667d4b1eaadf1788b5b502249de_14_llvm_17936036662276821647);
LAB_00143362:
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (lVar5 == 0) {
    lVar10 = 1;
    lVar6 = 0;
  }
  else {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc35___rust_no_alloc_shim_is_unstable_v2_001ca198)();
    lVar7 = 1;
    lVar10 = (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc12___rust_alloc_001ca170)(lVar5,1);
    lVar6 = lStack_68;
    if (lVar10 == 0) goto LAB_0014334f;
  }
  if (((byte)uStack_78 & 1) != 0) {
    uStack_70 = 1;
  }
  (*(code *)PTR_memcpy_001ca220)(lVar10,uStack_70,lVar5);
LAB_00143433:
  uStack_48 = uStack_38;
  uStack_40 = 0;
  uStack_78 = 0x8000000000000000;
  uStack_60 = 0x8000000000000000;
  _ZN4core3ptr66drop_in_place_LT_future_backtest_sdk__context__StrategyContext_GT_17h386b6af85f905c3eE
            (&uStack_78);
  if (lVar4 != 0) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_001ca178)(lVar3,lVar4,1);
  }
  if (lVar9 != 0) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_001ca178)(lStack_90,lVar9,1);
  }
  if (lVar6 != 0) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_001ca178)(lVar10,lVar6,1);
  }
  return 0;
}


