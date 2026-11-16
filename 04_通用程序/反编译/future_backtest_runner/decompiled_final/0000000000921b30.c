// ELF address 0x0000000000921b30; future_backtest::RunnerCore::MetaRunState::record_portfolio

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN15future_backtest10RunnerCore12MetaRunState16record_portfolio17h5867fdbe671c86b1E
               (double param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  ulong uVar6;
  int *piVar7;
  int *piVar8;
  byte bVar9;
  char cVar10;
  undefined *puVar11;
  int *piVar12;
  long lVar13;
  undefined8 *puVar14;
  bool bVar15;
  int *piStack_148;
  long lStack_140;
  int *piStack_138;
  int *piStack_130;
  int *piStack_128;
  long lStack_120;
  double dStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if ((*param_3 == 1) &&
     (param_1 - *(double *)(param_3 + 2) < *(double *)(param_3 + 0x2e) + _DAT_003568f8)) {
    return;
  }
  param_3[0] = 1;
  param_3[1] = 0;
  *(double *)(param_3 + 2) = param_1;
  piStack_138 = *(int **)(param_3 + 0x66);
  piStack_130 = *(int **)(param_3 + 0x68);
  piStack_148 = (int *)(ulong)(piStack_138 != (int *)0x0);
  lStack_108 = (long)piStack_138;
  if (piStack_138 != (int *)0x0) {
    lStack_108 = *(long *)(param_3 + 0x6a);
  }
  lStack_140 = 0;
  lStack_120 = 0;
  piStack_128 = piStack_148;
  dStack_118 = (double)piStack_138;
  uStack_110 = piStack_130;
  _ZN98__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__GT_9from_iter17hd84f195e58f25620E
            (&lStack_a0,&piStack_148,
             anon_609a31ba814f1e4156e50677fc366a7f_99_llvm_5215769359700358943);
  _ZN5alloc3str17join_generic_copy17hceda5c6248367efeE
            (&piStack_148,lStack_98,lStack_90,&UNK_0037db78,1);
  piVar8 = piStack_138;
  lVar4 = lStack_140;
  piVar7 = piStack_148;
  puVar11 = PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_019fbb20;
  if (lStack_90 != 0) {
    puVar14 = (undefined8 *)(lStack_98 + 8);
    lVar13 = lStack_90;
    do {
      if (puVar14[-1] != 0) {
        (*(code *)puVar11)(*puVar14,puVar14[-1],1);
      }
      puVar14 = puVar14 + 3;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  if (lStack_a0 != 0) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_019fbb20)
              (lStack_98,lStack_a0 * 0x18,8);
  }
  lVar13 = *(long *)(param_3 + 100);
  piVar12 = (int *)(lVar13 + 0x10);
  LOCK();
  bVar15 = *(int *)(lVar13 + 0x10) == 0;
  if (bVar15) {
    *(int *)(lVar13 + 0x10) = 1;
  }
  UNLOCK();
  if (!bVar15) {
    (*(code *)PTR__ZN3std3sys4sync5mutex5futex5Mutex14lock_contended17hf4abae4324ccd30bE_019fbf28)
              (piVar12);
  }
  puVar11 = PTR__ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17hb56828317201e862E_019fbf18;
  if ((*(ulong *)PTR__ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17hb56828317201e862E_019fbf18
      & 0x7fffffffffffffff) == 0) {
    bVar9 = 0;
    cVar10 = *(char *)(lVar13 + 0x14);
  }
  else {
    bVar9 = (*(code *)
              PTR__ZN3std9panicking11panic_count17is_zero_slow_path17he8487498e187edf3E_019fbf30)();
    bVar9 = bVar9 ^ 1;
    cVar10 = *(char *)(lVar13 + 0x14);
  }
  if (cVar10 == '\0') {
    uStack_48 = *(undefined8 *)(lVar13 + 0x18);
    uStack_40 = *(undefined8 *)(lVar13 + 0x20);
    uVar2 = *(undefined8 *)(lVar13 + 0x28);
    uVar3 = *(undefined8 *)(lVar13 + 0x30);
    if (((bVar9 == 0) && ((*(ulong *)puVar11 & 0x7fffffffffffffff) != 0)) &&
       (cVar10 = (*(code *)
                   PTR__ZN3std9panicking11panic_count17is_zero_slow_path17he8487498e187edf3E_019fbf30
                 )(), cVar10 == '\0')) {
      *(undefined1 *)(lVar13 + 0x14) = 1;
    }
    LOCK();
    iVar1 = *piVar12;
    *piVar12 = 0;
    UNLOCK();
    if (iVar1 == 2) {
      (*(code *)PTR__ZN3std3sys4sync5mutex5futex5Mutex4wake17h3a72f5bbf6a3e454E_019fbf20)(piVar12);
    }
    uStack_58 = *(undefined8 *)(param_3 + 0x4c);
    uStack_50 = *(undefined8 *)(param_3 + 0x4e);
    uStack_68 = *(undefined8 *)(param_3 + 0x50);
    uStack_60 = *(undefined8 *)(param_3 + 0x52);
    uStack_78 = *(undefined8 *)(param_3 + 0x54);
    uStack_70 = *(undefined8 *)(param_3 + 0x56);
    iStack_88 = param_3[0x58];
    iStack_84 = param_3[0x59];
    iStack_80 = param_3[0x5a];
    iStack_7c = param_3[0x5b];
    bVar9 = *(byte *)(param_3 + 0x3c);
    piVar12 = (int *)((ulong)bVar9 * 5 + 0xe);
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc35___rust_no_alloc_shim_is_unstable_v2_019fbb40)();
    lVar13 = (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc12___rust_alloc_019fbb18)(piVar12,1);
    if (lVar13 != 0) {
      puVar11 = &UNK_0037db79;
      if (bVar9 != 0) {
        puVar11 = &UNK_0037db87;
      }
      (*(code *)PTR_memcpy_019fbef8)(lVar13,puVar11,piVar12);
      piStack_130 = piVar7;
      piStack_128 = (int *)lVar4;
      lStack_120 = (long)piVar8;
      lStack_108 = *(long *)(param_3 + 0x6a);
      uStack_100 = uStack_58;
      uStack_f8 = uStack_50;
      uStack_f0 = uStack_68;
      uStack_e8 = uStack_60;
      uStack_e0 = uStack_78;
      uStack_d8 = uStack_70;
      uStack_d0 = CONCAT44(iStack_84,iStack_88);
      uStack_c8 = CONCAT44(iStack_7c,iStack_80);
      uStack_c0 = uStack_48;
      uStack_b8 = uStack_40;
      lVar4 = *(long *)(param_3 + 0xe);
      piStack_148 = piVar12;
      lStack_140 = lVar13;
      piStack_138 = piVar12;
      dStack_118 = param_1;
      uStack_110 = param_2;
      uStack_b0 = uVar2;
      uStack_a8 = uVar3;
      if (lVar4 == *(long *)(param_3 + 10)) {
        (*(code *)PTR__ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h6b8aca2c8542714aE_019fcae0)
                  (param_3 + 10,&UNK_01950e08);
      }
      (*(code *)PTR_memcpy_019fbef8)(lVar4 * 0xa8 + *(long *)(param_3 + 0xc),&piStack_148,0xa8);
      *(long *)(param_3 + 0xe) = lVar4 + 1;
      return;
    }
    (*(code *)PTR__ZN5alloc7raw_vec12handle_error17h24b7b14ecfc8bc80E_019fc178)
              (1,piVar12,anon_609a31ba814f1e4156e50677fc366a7f_248_llvm_5215769359700358943);
  }
  else {
    uVar6 = (ulong)lStack_140 >> 8;
    lStack_140 = CONCAT71((int7)uVar6,bVar9);
    piStack_148 = piVar12;
    (*(code *)PTR__ZN4core6result13unwrap_failed17h4ec7fe765c2ad66eE_019fc1b0)
              (&UNK_0037db5d,0x1b,&piStack_148,&UNK_0194ea38,&UNK_01950df0);
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}


