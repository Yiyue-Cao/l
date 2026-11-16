// ELF address 0x00000000000883f0; run_config_matrix::audit_row

/* run_config_matrix::audit_row */

void __rustcall
run_config_matrix::audit_row
          (undefined8 *param_1,long param_2,undefined8 param_3,long param_4,undefined8 *param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
                    /* try { // try from 0018840d to 0018841e has its CatchHandler @ 001885ab */
  (*(code *)PTR_clone_0030c898)
            (&local_48,param_2,
             &PTR_anon_31d3382fdd57cc9e09073bf4d56a1a76_77_llvm_16042128466566773669_002ff2b8);
  local_80 = 1;
                    /* try { // try from 00188441 to 00188456 has its CatchHandler @ 001885a6 */
  (*(code *)PTR_clone_0030c898)
            (&local_70,param_2 + 0x48,
             &PTR_anon_72ec0eaf56816cc735a4c13db30d3d0f_2_llvm_4582502909560217861_002ff2d0);
  uVar5 = local_60;
  uVar4 = local_68;
  uVar3 = local_70;
  if (*(long *)(param_2 + 0x60) == -0x8000000000000000) {
    local_88 = 0;
    uVar7 = 0;
    uVar2 = local_50;
  }
  else {
                    /* try { // try from 001884aa to 001884c2 has its CatchHandler @ 0018859c */
    (*(code *)PTR_clone_0030c898)
              (&local_70,param_2 + 0x60,
               &PTR_anon_72ec0eaf56816cc735a4c13db30d3d0f_2_llvm_4582502909560217861_002ff2d0);
    local_88 = local_70;
    local_80 = local_68;
    uVar7 = local_60;
    uVar2 = local_50;
  }
  local_50 = uVar7;
  if (-1 < param_4) {
    if (param_4 == 0) {
      lVar6 = 1;
    }
    else {
      local_58 = param_3;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_0030c830)();
      uVar7 = 1;
      lVar6 = (*(code *)PTR___rust_alloc_0030c808)(param_4,1);
      param_3 = local_58;
      if (lVar6 == 0) goto LAB_00188495;
    }
    (*(code *)PTR_memcpy_0030c8b8)(lVar6,param_3,param_4);
    uVar2 = param_5[1];
    param_1[0xc] = *param_5;
    param_1[0xd] = uVar2;
    param_1[0xe] = param_5[2];
    *param_1 = local_48;
    param_1[1] = uStack_40;
    param_1[2] = local_38;
    param_1[3] = uVar3;
    param_1[4] = uVar4;
    param_1[5] = uVar5;
    param_1[6] = local_88;
    param_1[7] = local_80;
    param_1[8] = local_50;
    param_1[9] = param_4;
    param_1[10] = lVar6;
    param_1[0xb] = param_4;
    return;
  }
  uVar7 = 0;
  local_50 = uVar2;
LAB_00188495:
                    /* try { // try from 00188495 to 001884a7 has its CatchHandler @ 001885b0 */
  (*(code *)PTR_handle_error_0030c8e8)
            (uVar7,param_4,
             &PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_9_llvm_7155622891745679880_002fe310);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


