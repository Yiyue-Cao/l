// ELF address 0x000000000007bf30; run_sm3_1::read_str_vec

/* run_sm3_1::read_str_vec */

void __rustcall
run_sm3_1::read_str_vec(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  int *piVar4;
  long lVar5;
  int *piVar6;
  undefined8 uVar7;
  int *unaff_R13;
  undefined8 *puVar8;
  long lVar9;
  undefined1 auVar10 [16];
  long local_c0;
  long lStack_b8;
  long local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  int *local_90;
  undefined8 *local_88;
  code *local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined8 **local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_48 [24];
  
  local_a0 = param_3;
  local_98 = param_4;
  piVar4 = (int *)(*(code *)PTR_get_002baf08)(param_2,param_3,param_4);
  if ((piVar4 == (int *)0x0) || (*piVar4 != 7)) {
    *param_1 = -0x8000000000000000;
  }
  else {
    lVar9 = *(long *)(piVar4 + 0xc);
    if (lVar9 == 0) {
      lVar5 = 8;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002bae48)();
      lVar5 = (*(code *)PTR___rust_alloc_002bae20)(lVar9 * 0x18,8);
      if (lVar5 == 0) {
        (*(code *)PTR_handle_error_002baf50)
                  (8,lVar9 * 0x18,
                   &PTR_anon_df931bbde01712d2905f6c34c9a6570a_9_llvm_2077284003314744442_002ae018);
LAB_0017c0b2:
                    /* try { // try from 0017c0b2 to 0017c0c8 has its CatchHandler @ 0017c2df */
        (*(code *)PTR_handle_error_002baf50)
                  (lVar9,piVar4,
                   &PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_9_llvm_7155622891745679880_002ad628);
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
    }
    local_b0 = 0;
    local_c0 = lVar9;
    lStack_b8 = lVar5;
                    /* try { // try from 0017bfe2 to 0017bfea has its CatchHandler @ 0017c2c1 */
    auVar10 = (*(code *)PTR_iter_002bb048)(piVar4 + 2);
    puVar8 = auVar10._8_8_;
    pcVar1 = (code *)puVar8[3];
    uVar7 = auVar10._0_8_;
                    /* try { // try from 0017bff6 to 0017bffb has its CatchHandler @ 0017c2d6 */
    while (piVar6 = (int *)(*pcVar1)(uVar7), piVar6 != (int *)0x0) {
      local_90 = piVar6;
      if (*piVar6 != 2) {
                    /* try { // try from 0017c110 to 0017c122 has its CatchHandler @ 0017c2df */
        lVar9 = read_str_vec::___closure__(&local_a0,&local_90);
        param_1[1] = lVar9;
        *param_1 = -0x7fffffffffffffff;
        if ((code *)*puVar8 != (code *)0x0) {
                    /* try { // try from 0017c13c to 0017c140 has its CatchHandler @ 0017c26c */
          (*(code *)*puVar8)(uVar7);
        }
        if (puVar8[1] != 0) {
          (*(code *)PTR___rust_dealloc_002bae28)(uVar7,puVar8[1],puVar8[2]);
        }
        goto LAB_0017c1d5;
      }
      piVar4 = *(int **)(piVar6 + 6);
      if ((long)piVar4 < 0) {
        lVar9 = 0;
        piVar4 = unaff_R13;
        goto LAB_0017c0b2;
      }
      uVar2 = *(undefined8 *)(piVar6 + 4);
      local_a8 = uVar7;
      if (piVar4 == (int *)0x0) {
        unaff_R13 = (int *)&DAT_00000001;
      }
      else {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002bae48)();
        lVar9 = 1;
        unaff_R13 = (int *)(*(code *)PTR___rust_alloc_002bae20)(piVar4,1);
        if (unaff_R13 == (int *)0x0) goto LAB_0017c0b2;
      }
      (*(code *)PTR_memcpy_002baea8)(unaff_R13,uVar2,piVar4);
      lVar9 = local_b0;
      if (local_b0 == local_c0) {
                    /* try { // try from 0017c074 to 0017c085 has its CatchHandler @ 0017c29d */
        (*(code *)PTR_grow_one_002bb050)
                  (&local_c0,
                   &PTR_anon_df931bbde01712d2905f6c34c9a6570a_9_llvm_2077284003314744442_002ae030);
      }
      *(int **)(lStack_b8 + lVar9 * 0x18) = piVar4;
      *(int **)(lStack_b8 + 8 + lVar9 * 0x18) = unaff_R13;
      *(int **)(lStack_b8 + 0x10 + lVar9 * 0x18) = piVar4;
      local_b0 = lVar9 + 1;
      uVar7 = local_a8;
    }
    if ((code *)*puVar8 != (code *)0x0) {
                    /* try { // try from 0017c0d7 to 0017c0db has its CatchHandler @ 0017c26e */
      (*(code *)*puVar8)(uVar7);
    }
    if (puVar8[1] != 0) {
      (*(code *)PTR___rust_dealloc_002bae28)(uVar7,puVar8[1],puVar8[2]);
    }
    if (local_b0 == 0) {
      local_88 = &local_a0;
      local_80 = _<&T_as_core::fmt::Display>::fmt;
      local_78 = &DAT_002adf20;
      local_70 = 2;
      local_58 = 0;
      local_68 = &local_88;
      local_60 = 1;
                    /* try { // try from 0017c1a4 to 0017c1c3 has its CatchHandler @ 0017c2c1 */
      (*(code *)PTR_format_inner_002bae90)(local_48,&local_78);
      lVar9 = anyhow::error::_<impl_anyhow::Error>::msg(local_48);
      param_1[1] = lVar9;
      *param_1 = -0x7fffffffffffffff;
LAB_0017c1d5:
      puVar3 = PTR___rust_dealloc_002bae28;
      if (local_b0 != 0) {
        puVar8 = (undefined8 *)(lStack_b8 + 8);
        lVar9 = local_b0;
        do {
          if (puVar8[-1] != 0) {
            (*(code *)puVar3)(*puVar8,puVar8[-1],1);
          }
          puVar8 = puVar8 + 3;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      if (local_c0 != 0) {
        (*(code *)PTR___rust_dealloc_002bae28)(lStack_b8,local_c0 * 0x18,8);
      }
    }
    else {
      param_1[2] = local_b0;
      *param_1 = local_c0;
      param_1[1] = lStack_b8;
    }
  }
  return;
}


