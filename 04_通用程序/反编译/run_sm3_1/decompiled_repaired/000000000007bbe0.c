// ELF address 0x000000000007bbe0; run_sm3_1::read_bool_vec

/* run_sm3_1::read_bool_vec */

void __rustcall
run_sm3_1::read_bool_vec(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  int iVar2;
  long *plVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 auVar9 [16];
  long local_c8;
  long local_c0;
  long lStack_b8;
  long local_b0;
  long *local_a8;
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
    lVar6 = *(long *)(piVar4 + 0xc);
    if (lVar6 == 0) {
      lVar5 = 1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002bae48)();
      lVar5 = (*(code *)PTR___rust_alloc_002bae20)(lVar6,1);
      if (lVar5 == 0) {
        uVar7 = (*(code *)PTR_handle_error_002baf50)
                          (1,lVar6,&
                                   PTR_anon_df931bbde01712d2905f6c34c9a6570a_9_llvm_2077284003314744442_002adfc8
                          );
                    /* catch() { ... } // from try @ 0017bd6d with catch @ 0017be4b */
                    /* catch() { ... } // from try @ 0017bcfe with catch @ 0017be4d */
        if (*(long *)(piVar4 + 2) != 0) {
          (*(code *)PTR___rust_dealloc_002bae28)
                    (lVar6,*(long *)(piVar4 + 2),*(undefined8 *)(local_c8 + 0x10));
        }
        if (local_c0 != 0) {
          (*(code *)PTR___rust_dealloc_002bae28)(lStack_b8,local_c0,1);
        }
                    /* WARNING: Subroutine does not return */
        _Unwind_Resume(uVar7);
      }
    }
    local_b0 = 0;
    local_c0 = lVar6;
    lStack_b8 = lVar5;
                    /* try { // try from 0017bc86 to 0017bc8e has its CatchHandler @ 0017be6e */
    auVar9 = (*(code *)PTR_iter_002bb048)(piVar4 + 2);
    puVar8 = auVar9._8_8_;
    uVar7 = auVar9._0_8_;
    pcVar1 = (code *)puVar8[3];
    local_a8 = param_1;
                    /* try { // try from 0017bcc1 to 0017bcef has its CatchHandler @ 0017be73 */
    while (piVar4 = (int *)(*pcVar1)(uVar7), lVar6 = local_b0, piVar4 != (int *)0x0) {
      local_90 = piVar4;
      if (*piVar4 != 5) {
                    /* try { // try from 0017bd3c to 0017bd4a has its CatchHandler @ 0017be6c */
        lVar6 = read_bool_vec::___closure__(&local_a0,&local_90);
        local_a8[1] = lVar6;
        *local_a8 = -0x7fffffffffffffff;
        if ((code *)*puVar8 != (code *)0x0) {
                    /* try { // try from 0017bd6d to 0017bd71 has its CatchHandler @ 0017be4b */
          (*(code *)*puVar8)(uVar7);
        }
        if (puVar8[1] != 0) {
          (*(code *)PTR___rust_dealloc_002bae28)(uVar7,puVar8[1],puVar8[2]);
        }
        if (local_c0 == 0) {
          return;
        }
        goto LAB_0017be21;
      }
      iVar2 = piVar4[0x14];
      if (local_b0 == local_c0) {
        alloc::raw_vec::RawVec<T,A>::grow_one
                  (&local_c0,
                   &PTR_anon_df931bbde01712d2905f6c34c9a6570a_9_llvm_2077284003314744442_002adfe0);
      }
      *(char *)(lStack_b8 + lVar6) = (char)iVar2;
      local_b0 = lVar6 + 1;
    }
    if ((code *)*puVar8 != (code *)0x0) {
                    /* try { // try from 0017bcfe to 0017bd02 has its CatchHandler @ 0017be4d */
      (*(code *)*puVar8)(uVar7);
    }
    plVar3 = local_a8;
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
                    /* try { // try from 0017bde2 to 0017be01 has its CatchHandler @ 0017be6e */
      (*(code *)PTR_format_inner_002bae90)(local_48,&local_78);
      lVar6 = anyhow::error::_<impl_anyhow::Error>::msg(local_48);
      plVar3[1] = lVar6;
      *plVar3 = -0x7fffffffffffffff;
      if (local_c0 != 0) {
LAB_0017be21:
        (*(code *)PTR___rust_dealloc_002bae28)(lStack_b8,local_c0,1);
      }
    }
    else {
      plVar3[2] = local_b0;
      *plVar3 = local_c0;
      plVar3[1] = lStack_b8;
    }
  }
  return;
}


