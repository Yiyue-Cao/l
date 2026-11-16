// ELF address 0x0000000000078ce0; probe_features::ProbeFeatures::to_row

undefined8 *
_ZN14probe_features13ProbeFeatures6to_row17h5d219ae66b79558eE
          (undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc35___rust_no_alloc_shim_is_unstable_v2_001ca198)();
  puVar4 = (undefined8 *)(*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc12___rust_alloc_001ca170)(0x58,8);
  if (puVar4 != (undefined8 *)0x0) {
    uVar1 = param_2[10];
    uVar3 = param_2[1];
    *puVar4 = *param_2;
    puVar4[1] = uVar3;
    uVar3 = param_2[3];
    puVar4[2] = param_2[2];
    puVar4[3] = uVar3;
    uVar3 = param_2[5];
    puVar4[4] = param_2[4];
    puVar4[5] = uVar3;
    uVar3 = param_2[7];
    puVar4[6] = param_2[6];
    puVar4[7] = uVar3;
    uVar3 = param_2[9];
    puVar4[8] = param_2[8];
    puVar4[9] = uVar3;
    puVar4[10] = uVar1;
    *param_1 = 0xb;
    param_1[1] = puVar4;
    param_1[2] = 0xb;
    return param_1;
  }
  (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17hf07a1aab219f1466E_001ca288)(8,0x58);
  pcVar2 = (code *)swi(3);
  puVar4 = (undefined8 *)(*pcVar2)();
  return puVar4;
}


