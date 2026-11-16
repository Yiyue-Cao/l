// ELF address 0x0000000000072bc0; run_signalmaker::parse_f64_array

/* run_signalmaker::parse_f64_array */

void __rustcall
run_signalmaker::parse_f64_array(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined1 auVar6 [16];
  long local_d8;
  long lStack_d0;
  long local_c8;
  long *local_c0;
  undefined8 *local_b8;
  code *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  double local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 **local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_60 [24];
  undefined1 local_48 [24];
  
  lVar4 = *(long *)(param_2 + 0x28);
  local_a8 = param_3;
  local_a0 = param_4;
  if (lVar4 != 0) {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b2928)();
    lStack_d0 = (*(code *)PTR___rust_alloc_002b2900)(lVar4 * 8,8);
    if (lStack_d0 != 0) goto LAB_00172c25;
    (*(code *)PTR_handle_error_002b2a30)
              (8,lVar4 * 8,
               &PTR_anon_52b3106212fa17b89ed124d311d91c84_8_llvm_18028058375776711367_002a5ce0);
  }
  lStack_d0 = 8;
LAB_00172c25:
  local_c8 = 0;
  local_d8 = lVar4;
                    /* try { // try from 00172c38 to 00172c40 has its CatchHandler @ 00172ed4 */
  auVar6 = (*(code *)PTR_iter_002b2ae8)(param_2);
  puVar5 = auVar6._8_8_;
  uVar2 = auVar6._0_8_;
  pcVar1 = (code *)puVar5[3];
  local_c0 = param_1;
  do {
                    /* try { // try from 00172c89 to 00172cef has its CatchHandler @ 00172ed9 */
    plVar3 = (long *)(*pcVar1)(uVar2);
    lVar4 = local_c8;
    if (plVar3 == (long *)0x0) {
      if ((code *)*puVar5 != (code *)0x0) {
                    /* try { // try from 00172d02 to 00172d06 has its CatchHandler @ 00172eb0 */
        (*(code *)*puVar5)(uVar2);
      }
      plVar3 = local_c0;
      if (puVar5[1] != 0) {
        (*(code *)PTR___rust_dealloc_002b2908)(uVar2,puVar5[1],puVar5[2]);
      }
      if (local_c8 == 0) {
        local_b8 = &local_a8;
        local_b0 = _<&T_as_core::fmt::Display>::fmt;
        local_90 = &DAT_002a5cf8;
        local_88 = 2;
        local_70 = 0;
        local_80 = &local_b8;
        local_78 = 1;
                    /* try { // try from 00172e6c to 00172e8b has its CatchHandler @ 00172ed4 */
        (*(code *)PTR_format_inner_002b2978)(local_48,&local_90);
        lVar4 = anyhow::error::_<impl_anyhow::Error>::msg(local_48);
        plVar3[1] = lVar4;
        *plVar3 = -0x8000000000000000;
        if (local_d8 != 0) {
LAB_00172dff:
          (*(code *)PTR___rust_dealloc_002b2908)(lStack_d0,local_d8 << 3,8);
        }
      }
      else {
        plVar3[2] = local_c8;
        *plVar3 = local_d8;
        plVar3[1] = lStack_d0;
      }
      return;
    }
    if (*plVar3 != 4) {
      if ((int)*plVar3 == 3) {
        local_98 = (double)plVar3[10];
        goto LAB_00172cc2;
      }
      lVar4 = parse_f64_array::___closure__(&local_a8);
LAB_00172db7:
      local_c0[1] = lVar4;
      *local_c0 = -0x8000000000000000;
      if ((code *)*puVar5 != (code *)0x0) {
                    /* try { // try from 00172dda to 00172dde has its CatchHandler @ 00172eb2 */
        (*(code *)*puVar5)(uVar2);
      }
      if (puVar5[1] != 0) {
        (*(code *)PTR___rust_dealloc_002b2908)(uVar2,puVar5[1],puVar5[2]);
      }
      if (local_d8 == 0) {
        return;
      }
      goto LAB_00172dff;
    }
    local_98 = (double)plVar3[10];
LAB_00172cc2:
    if (0x7fefffffffffffff < (ulong)ABS(local_98)) {
      local_b8 = &local_a8;
      local_b0 = _<&T_as_core::fmt::Display>::fmt;
      local_90 = &DAT_002a5d18;
      local_88 = 2;
      local_70 = 0;
      local_80 = &local_b8;
      local_78 = 1;
                    /* try { // try from 00172d8b to 00172db6 has its CatchHandler @ 00172ed2 */
      (*(code *)PTR_format_inner_002b2978)(local_60,&local_90);
      lVar4 = anyhow::error::_<impl_anyhow::Error>::msg(local_60);
      goto LAB_00172db7;
    }
    if (local_c8 == local_d8) {
      alloc::raw_vec::RawVec<T,A>::grow_one
                (&local_d8,
                 &PTR_anon_52b3106212fa17b89ed124d311d91c84_8_llvm_18028058375776711367_002a5d38);
    }
    *(double *)(lStack_d0 + lVar4 * 8) = local_98;
    local_c8 = lVar4 + 1;
  } while( true );
}


