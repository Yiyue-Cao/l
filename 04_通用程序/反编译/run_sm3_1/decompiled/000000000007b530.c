// ELF address 0x000000000007b530; run_sm3_1::parse_f64_array

/* run_sm3_1::parse_f64_array */

void __rustcall
run_sm3_1::parse_f64_array(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined1 auVar6 [16];
  long local_c8;
  long lStack_c0;
  long local_b8;
  long *local_b0;
  double local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  long *local_90;
  undefined8 *local_88;
  code *local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined8 **local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_48 [24];
  
  lVar4 = *(long *)(param_2 + 0x28);
  local_a0 = param_3;
  local_98 = param_4;
  if (lVar4 != 0) {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002bae48)();
    lStack_c0 = (*(code *)PTR___rust_alloc_002bae20)(lVar4 * 8,8);
    if (lStack_c0 != 0) goto LAB_0017b595;
    (*(code *)PTR_handle_error_002baf50)
              (8,lVar4 * 8,
               &PTR_anon_df931bbde01712d2905f6c34c9a6570a_9_llvm_2077284003314744442_002adf08);
  }
  lStack_c0 = 8;
LAB_0017b595:
  local_b8 = 0;
  local_c8 = lVar4;
                    /* try { // try from 0017b5a7 to 0017b5af has its CatchHandler @ 0017b7b2 */
  auVar6 = (*(code *)PTR_iter_002bb048)(param_2);
  puVar5 = auVar6._8_8_;
  uVar2 = auVar6._0_8_;
  pcVar1 = (code *)puVar5[3];
  local_b0 = param_1;
  do {
                    /* try { // try from 0017b5e8 to 0017b649 has its CatchHandler @ 0017b7b7 */
    plVar3 = (long *)(*pcVar1)(uVar2);
    lVar4 = local_b8;
    if (plVar3 == (long *)0x0) {
      if ((code *)*puVar5 != (code *)0x0) {
                    /* try { // try from 0017b654 to 0017b658 has its CatchHandler @ 0017b797 */
        (*(code *)*puVar5)(uVar2);
      }
      plVar3 = local_b0;
      if (puVar5[1] != 0) {
        (*(code *)PTR___rust_dealloc_002bae28)(uVar2,puVar5[1],puVar5[2]);
      }
      if (local_b8 == 0) {
        local_88 = &local_a0;
        local_80 = _<&T_as_core::fmt::Display>::fmt;
        local_78 = &DAT_002adf20;
        local_70 = 2;
        local_58 = 0;
        local_68 = &local_88;
        local_60 = 1;
                    /* try { // try from 0017b750 to 0017b76f has its CatchHandler @ 0017b7b2 */
        (*(code *)PTR_format_inner_002bae90)(local_48,&local_78);
        lVar4 = anyhow::error::_<impl_anyhow::Error>::msg(local_48);
        plVar3[1] = lVar4;
        *plVar3 = -0x8000000000000000;
joined_r0x0017b788:
        if (local_c8 != 0) {
          (*(code *)PTR___rust_dealloc_002bae28)(lStack_c0,local_c8 << 3,8);
        }
      }
      else {
        plVar3[2] = local_b8;
        *plVar3 = local_c8;
        plVar3[1] = lStack_c0;
      }
      return;
    }
    local_90 = plVar3;
    if (*plVar3 == 4) {
      local_a8 = (double)plVar3[10];
    }
    else {
      if ((int)*plVar3 != 3) {
                    /* try { // try from 0017b692 to 0017b6a0 has its CatchHandler @ 0017b795 */
        lVar4 = parse_f64_array::___closure__(&local_a0,&local_90);
        local_b0[1] = lVar4;
        *local_b0 = -0x8000000000000000;
        if ((code *)*puVar5 != (code *)0x0) {
                    /* try { // try from 0017b6bf to 0017b6c3 has its CatchHandler @ 0017b793 */
          (*(code *)*puVar5)(uVar2);
        }
        if (puVar5[1] != 0) {
          (*(code *)PTR___rust_dealloc_002bae28)(uVar2,puVar5[1],puVar5[2]);
        }
        goto joined_r0x0017b788;
      }
      local_a8 = (double)plVar3[10];
    }
    if (local_b8 == local_c8) {
      alloc::raw_vec::RawVec<T,A>::grow_one
                (&local_c8,
                 &PTR_anon_df931bbde01712d2905f6c34c9a6570a_9_llvm_2077284003314744442_002adf40);
    }
    *(double *)(lStack_c0 + lVar4 * 8) = local_a8;
    local_b8 = lVar4 + 1;
  } while( true );
}


