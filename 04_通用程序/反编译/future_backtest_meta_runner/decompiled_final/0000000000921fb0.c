// ELF address 0x0000000000921fb0; future_backtest::RunnerCore::compute_capital

void _ZN15future_backtest10RunnerCore15compute_capital17ha1fafca291cf34c4E
               (undefined8 param_1,long param_2,long param_3,ulong param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  
  if (*(ulong *)(param_2 + 0x98) < param_4) {
    param_4 = *(ulong *)(param_2 + 0x98);
  }
  lVar5 = param_4 * 0x30;
  if (param_4 == 0) {
    lVar9 = 8;
  }
  else {
    lVar3 = *(long *)(param_2 + 0x90);
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc35___rust_no_alloc_shim_is_unstable_v2_019fbb40)();
    lVar9 = (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc12___rust_alloc_019fbb18)(lVar5,8);
    if (lVar9 == 0) {
      uVar11 = (*(code *)PTR__ZN5alloc7raw_vec12handle_error17h24b7b14ecfc8bc80E_019fc178)
                         (8,lVar5,anon_609a31ba814f1e4156e50677fc366a7f_99_llvm_5215769359700358943)
      ;
      if (param_4 != 0) {
        (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_019fbb20)();
      }
      func_0x01934970(uVar11);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    puVar13 = (undefined8 *)(param_3 + 0x380);
    puVar14 = (undefined4 *)(lVar3 + 0x48);
    puVar10 = (undefined1 *)(lVar9 + 0x2c);
    uVar12 = param_4;
    do {
      uVar2 = *puVar14;
      uVar1 = *(undefined1 *)((long)puVar13 + 0xf53);
      *(undefined8 *)(puVar10 + -0x2c) = *puVar13;
      uVar11 = puVar13[0x8b];
      *(undefined8 *)(puVar10 + -0x24) = puVar13[0x8a];
      *(undefined8 *)(puVar10 + -0x1c) = uVar11;
      uVar6 = *(undefined4 *)((long)puVar13 + 0x464);
      uVar7 = *(undefined4 *)(puVar13 + 0x8d);
      uVar8 = *(undefined4 *)((long)puVar13 + 0x46c);
      *(undefined4 *)(puVar10 + -0x14) = *(undefined4 *)(puVar13 + 0x8c);
      *(undefined4 *)(puVar10 + -0x10) = uVar6;
      *(undefined4 *)(puVar10 + -0xc) = uVar7;
      *(undefined4 *)(puVar10 + -8) = uVar8;
      *(undefined4 *)(puVar10 + -4) = uVar2;
      *puVar10 = uVar1;
      puVar13 = puVar13 + 0x2a5;
      puVar14 = puVar14 + 0x14;
      puVar10 = puVar10 + 0x30;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  (*(code *)
    PTR__ZN15future_backtest11MetaControl7capital11CapitalBook7compute17hea085d15191c555eE_019fd4b8)
            (param_1,param_2 + 0xa0,*(undefined8 *)(param_2 + 0x30),lVar9,param_4);
  if (param_4 == 0) {
    return;
  }
  (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_019fbb20)(lVar9,lVar5,8);
  return;
}


