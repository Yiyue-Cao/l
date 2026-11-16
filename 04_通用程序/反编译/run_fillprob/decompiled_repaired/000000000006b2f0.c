// ELF address 0x000000000006b2f0; run_fillprob::apply_overrides::{{closure}}

/* run_fillprob::apply_overrides::_{{closure}} */

void __rustcall run_fillprob::apply_overrides::___closure__(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  int *piVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  
  auVar9 = (*(code *)PTR_iter_002991d8)(param_2);
  puVar7 = auVar9._8_8_;
  uVar4 = auVar9._0_8_;
                    /* try { // try from 0016b30d to 0016b33b has its CatchHandler @ 0016b40f */
  piVar5 = (int *)(*(code *)puVar7[3])(uVar4);
  if ((piVar5 == (int *)0x0) || (*piVar5 != 2)) {
    *param_1 = -0x8000000000000000;
    pcVar3 = (code *)*puVar7;
  }
  else {
    lVar1 = *(long *)(piVar5 + 6);
    if (lVar1 < 0) {
      uVar8 = 0;
LAB_0016b329:
      (*(code *)PTR_handle_error_00299150)
                (uVar8,lVar1,
                 &PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_9_llvm_7155622891745679880_0028c190);
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uVar2 = *(undefined8 *)(piVar5 + 4);
    if (lVar1 == 0) {
      lVar6 = 1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00299070)();
      uVar8 = 1;
      lVar6 = (*(code *)PTR___rust_alloc_00299048)(lVar1,1);
      if (lVar6 == 0) goto LAB_0016b329;
    }
    (*(code *)PTR_memcpy_002990d0)(lVar6,uVar2,lVar1);
    *param_1 = lVar1;
    param_1[1] = lVar6;
    param_1[2] = lVar1;
    pcVar3 = (code *)*puVar7;
  }
  if (pcVar3 != (code *)0x0) {
                    /* try { // try from 0016b353 to 0016b357 has its CatchHandler @ 0016b3ee */
    (*pcVar3)(uVar4);
  }
  if (puVar7[1] != 0) {
    (*(code *)PTR___rust_dealloc_00299050)(uVar4,puVar7[1],puVar7[2]);
    return;
  }
  return;
}


