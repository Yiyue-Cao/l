// ELF address 0x000000000007b870; run_sm3_1::read_i64_vec

/* run_sm3_1::read_i64_vec */

void __rustcall
run_sm3_1::read_i64_vec(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long *plVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined1 auVar10 [16];
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
  piVar5 = (int *)(*(code *)PTR_get_002baf08)(param_2,param_3,param_4);
  if ((piVar5 == (int *)0x0) || (*piVar5 != 7)) {
    *param_1 = -0x8000000000000000;
  }
  else {
    lVar7 = *(long *)(piVar5 + 0xc);
    if (lVar7 == 0) {
      lVar6 = 8;
    }
    else {
      lVar1 = lVar7 * 8;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002bae48)();
      lVar6 = (*(code *)PTR___rust_alloc_002bae20)(lVar1,8);
      if (lVar6 == 0) {
        uVar8 = (*(code *)PTR_handle_error_002baf50)
                          (8,lVar1,&
                                   PTR_anon_df931bbde01712d2905f6c34c9a6570a_9_llvm_2077284003314744442_002adf78
                          );
                    /* catch() { ... } // from try @ 0017ba0d with catch @ 0017baef */
                    /* catch() { ... } // from try @ 0017b99e with catch @ 0017baf1 */
        if (*(long *)(lVar7 + 8) != 0) {
          (*(code *)PTR___rust_dealloc_002bae28)
                    (lVar1,*(long *)(lVar7 + 8),*(undefined8 *)(local_c8 + 0x10));
        }
        if (local_c0 != 0) {
          (*(code *)PTR___rust_dealloc_002bae28)(lStack_b8,local_c0 << 3,8);
        }
                    /* WARNING: Subroutine does not return */
        _Unwind_Resume(uVar8);
      }
    }
    local_b0 = 0;
    local_c0 = lVar7;
    lStack_b8 = lVar6;
                    /* try { // try from 0017b91e to 0017b926 has its CatchHandler @ 0017bb12 */
    auVar10 = (*(code *)PTR_iter_002bb048)(piVar5 + 2);
    puVar9 = auVar10._8_8_;
    uVar8 = auVar10._0_8_;
    pcVar2 = (code *)puVar9[3];
    local_a8 = param_1;
                    /* try { // try from 0017b961 to 0017b98f has its CatchHandler @ 0017bb17 */
    while (piVar5 = (int *)(*pcVar2)(uVar8), lVar7 = local_b0, piVar5 != (int *)0x0) {
      local_90 = piVar5;
      if (*piVar5 != 3) {
                    /* try { // try from 0017b9dc to 0017b9ea has its CatchHandler @ 0017bb10 */
        lVar7 = read_i64_vec::___closure__(&local_a0,&local_90);
        local_a8[1] = lVar7;
        *local_a8 = -0x7fffffffffffffff;
        if ((code *)*puVar9 != (code *)0x0) {
                    /* try { // try from 0017ba0d to 0017ba11 has its CatchHandler @ 0017baef */
          (*(code *)*puVar9)(uVar8);
        }
        if (puVar9[1] != 0) {
          (*(code *)PTR___rust_dealloc_002bae28)(uVar8,puVar9[1],puVar9[2]);
        }
        if (local_c0 == 0) {
          return;
        }
        goto LAB_0017bac1;
      }
      uVar3 = *(undefined8 *)(piVar5 + 0x14);
      if (local_b0 == local_c0) {
        alloc::raw_vec::RawVec<T,A>::grow_one
                  (&local_c0,
                   &PTR_anon_df931bbde01712d2905f6c34c9a6570a_9_llvm_2077284003314744442_002adf90);
      }
      *(undefined8 *)(lStack_b8 + lVar7 * 8) = uVar3;
      local_b0 = lVar7 + 1;
    }
    if ((code *)*puVar9 != (code *)0x0) {
                    /* try { // try from 0017b99e to 0017b9a2 has its CatchHandler @ 0017baf1 */
      (*(code *)*puVar9)(uVar8);
    }
    plVar4 = local_a8;
    if (puVar9[1] != 0) {
      (*(code *)PTR___rust_dealloc_002bae28)(uVar8,puVar9[1],puVar9[2]);
    }
    if (local_b0 == 0) {
      local_88 = &local_a0;
      local_80 = _<&T_as_core::fmt::Display>::fmt;
      local_78 = &DAT_002adf20;
      local_70 = 2;
      local_58 = 0;
      local_68 = &local_88;
      local_60 = 1;
                    /* try { // try from 0017ba82 to 0017baa1 has its CatchHandler @ 0017bb12 */
      (*(code *)PTR_format_inner_002bae90)(local_48,&local_78);
      lVar7 = anyhow::error::_<impl_anyhow::Error>::msg(local_48);
      plVar4[1] = lVar7;
      *plVar4 = -0x7fffffffffffffff;
      if (local_c0 != 0) {
LAB_0017bac1:
        (*(code *)PTR___rust_dealloc_002bae28)(lStack_b8,local_c0 << 3,8);
      }
    }
    else {
      plVar4[2] = local_b0;
      *plVar4 = local_c0;
      plVar4[1] = lStack_b8;
    }
  }
  return;
}


