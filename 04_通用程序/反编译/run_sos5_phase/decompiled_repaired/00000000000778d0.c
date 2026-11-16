// ELF address 0x00000000000778d0; run_sos5_phase::load_signal_configs

/* run_sos5_phase::load_signal_configs */

void __rustcall
run_sos5_phase::load_signal_configs
          (undefined8 *param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
          long param_6,long param_7,undefined4 param_8,undefined4 param_9)

{
  long lVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long *plVar6;
  long local_440;
  undefined8 local_438;
  long local_428;
  long lStack_420;
  undefined8 local_418;
  undefined8 *local_410;
  long local_408;
  long local_400;
  undefined8 local_3f8;
  undefined8 local_3f0;
  undefined4 local_3e8 [2];
  undefined4 uStack_3e0;
  long local_3d8;
  undefined8 local_3d0;
  long local_3c8;
  undefined8 local_3c0;
  undefined8 local_3b8;
  undefined *local_3b0;
  undefined8 local_3a8;
  undefined8 **local_3a0;
  undefined8 local_398;
  undefined8 local_390;
  long *local_2e8;
  code *local_2e0;
  long *local_2d8;
  undefined *local_2d0;
  long local_238;
  undefined8 local_230;
  undefined1 local_220 [24];
  undefined1 local_208 [24];
  undefined1 local_1f0 [24];
  undefined1 local_1d8 [24];
  undefined *local_1c0;
  undefined8 local_1b8;
  undefined1 local_1b0 [184];
  undefined *local_f8;
  undefined8 local_f0;
  undefined1 local_e8 [184];
  
  local_3e8[0] = param_8;
  uStack_3e0 = param_9;
  if (param_2 == 0) {
    if (param_4 != 0) {
      local_400 = 0;
      local_3f0 = 0;
      local_410 = param_1;
      if (param_7 != 0) {
        param_7 = param_7 * 0x18;
        local_3d8 = param_4;
        local_3d0 = param_5;
        do {
          local_2e8 = &local_408;
          local_2e0 = _<&T_as_core::fmt::Display>::fmt;
          local_3b0 = &DAT_002a92f0;
          local_3a8 = 2;
          local_390 = 0;
          local_398 = 1;
                    /* try { // try from 00177a5a to 00177a6f has its CatchHandler @ 00177fa7 */
          local_408 = param_6;
          local_3a0 = &local_2e8;
          (*(code *)PTR_format_inner_002b63b8)(&local_3c8,&local_3b0);
          uVar4 = local_3c0;
                    /* try { // try from 00177a80 to 00177a97 has its CatchHandler @ 00177f9a */
          (*(code *)PTR__join_002b63c0)(&local_428,local_3d8,local_3d0,local_3c0,local_3b8);
          if (local_3c8 != 0) {
            (*(code *)PTR___rust_dealloc_002b62f0)(uVar4,local_3c8,1);
          }
          uVar4 = local_418;
          lVar1 = lStack_420;
                    /* try { // try from 00177abd to 00177ae7 has its CatchHandler @ 00177fac */
          cVar3 = (*(code *)PTR_is_file_002b64c0)(lStack_420,local_418);
          if (cVar3 == '\0') {
            local_440 = lVar1;
            local_438 = uVar4;
            local_2e8 = (long *)local_3e8;
            local_2e0 = _<&T_as_core::fmt::Display>::fmt;
            local_2d8 = &local_440;
            local_2d0 = PTR_fmt_002b63a0;
            local_3b0 = &DAT_002a9310;
            local_3a8 = 2;
            local_390 = 0;
            local_398 = 2;
                    /* try { // try from 00177cfd to 00177d1f has its CatchHandler @ 00177f31 */
            local_3a0 = &local_2e8;
            (*(code *)PTR_format_inner_002b63b8)(local_220,&local_3b0);
            uVar4 = anyhow::error::_<impl_anyhow::Error>::msg(local_220);
            local_410[1] = uVar4;
            *local_410 = 1;
LAB_00177d5c:
            if (local_428 != 0) {
              (*(code *)PTR___rust_dealloc_002b62f0)(lVar1,local_428,1);
            }
            plVar6 = &local_400;
            goto LAB_00177d79;
          }
          (*(code *)PTR_clone_002b63d8)
                    (&local_440,local_408,&PTR_s_sweeps_src_bin_run_sos5_phase_rs_002a9330);
                    /* try { // try from 00177ae8 to 00177afa has its CatchHandler @ 00177f7b */
          load_toml(&local_3b0,lVar1,uVar4);
          uVar4 = local_3a8;
          puVar2 = local_3b0;
          if (local_3b0 == (undefined *)0xc) {
            local_410[1] = local_3a8;
            *local_410 = 1;
            if (local_440 != 0) {
              (*(code *)PTR___rust_dealloc_002b62f0)(local_438,local_440,1);
            }
            goto LAB_00177d5c;
          }
          (*(code *)PTR_memcpy_002b6358)(local_e8,&local_3a0,0xb8);
          local_f8 = puVar2;
          local_f0 = uVar4;
                    /* try { // try from 00177b40 to 00177b59 has its CatchHandler @ 00177fac */
          alloc::collections::btree::map::BTreeMap<K,V,A>::insert
                    (&local_2e8,&local_400,&local_440,&local_f8);
          if ((int)local_2e8 != 0xc) {
                    /* try { // try from 00177b64 to 00177b6b has its CatchHandler @ 00177f61 */
            core::ptr::drop_in_place<toml_edit::item::Item>(&local_2e8);
            if ((-1 < local_238) && (local_238 != 0)) {
              (*(code *)PTR___rust_dealloc_002b62f0)(local_230,local_238,1);
            }
          }
          if (local_428 != 0) {
            (*(code *)PTR___rust_dealloc_002b62f0)(lVar1,local_428,1);
          }
          param_6 = param_6 + 0x18;
          param_7 = param_7 + -0x18;
        } while (param_7 != 0);
      }
      local_410[3] = local_3f0;
      local_410[1] = local_400;
      local_410[2] = local_3f8;
      *local_410 = 0;
      return;
    }
    local_3b0 = &DAT_002a92d0;
    local_3a8 = 2;
    local_398 = 1;
    puVar5 = local_1f0;
  }
  else if (param_4 == 0) {
    if (param_7 == 1) {
      local_428 = 0;
      local_418 = 0;
                    /* try { // try from 00177930 to 00177944 has its CatchHandler @ 00177f52 */
      (*(code *)PTR_clone_002b63d8)
                (&local_440,param_6,&PTR_s_sweeps_src_bin_run_sos5_phase_rs_002a9348);
                    /* try { // try from 00177945 to 00177957 has its CatchHandler @ 00177f33 */
      load_toml(&local_3b0,param_2,param_3);
      if (local_3b0 != (undefined *)0xc) {
        (*(code *)PTR_memcpy_002b6358)(local_1b0,&local_3a0,0xb8);
        local_1c0 = local_3b0;
        local_1b8 = local_3a8;
                    /* try { // try from 00177bdc to 00177bfa has its CatchHandler @ 00177f52 */
        alloc::collections::btree::map::BTreeMap<K,V,A>::insert
                  (&local_2e8,&local_428,&local_440,&local_1c0);
        if ((int)local_2e8 != 0xc) {
                    /* try { // try from 00177c05 to 00177c11 has its CatchHandler @ 00177f17 */
          core::ptr::drop_in_place<toml_edit::item::Item>(&local_2e8);
          if ((-1 < local_238) && (local_238 != 0)) {
            (*(code *)PTR___rust_dealloc_002b62f0)(local_230,local_238,1);
          }
        }
        param_1[3] = local_418;
        param_1[1] = local_428;
        param_1[2] = lStack_420;
        *param_1 = 0;
        return;
      }
      param_1[1] = local_3a8;
      *param_1 = 1;
      if (local_440 != 0) {
        (*(code *)PTR___rust_dealloc_002b62f0)(local_438,local_440,1);
      }
      plVar6 = &local_428;
LAB_00177d79:
      _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop(plVar6);
      return;
    }
    local_440 = param_7;
    local_2d8 = &local_440;
    local_2d0 = PTR_fmt_002b64b0;
    local_3b0 = &DAT_002a9360;
    local_3a8 = 3;
    local_398 = 2;
    puVar5 = local_1d8;
  }
  else {
    local_3b0 = &DAT_002a9390;
    local_3a8 = 2;
    local_398 = 1;
    puVar5 = local_208;
  }
  local_2e8 = (long *)local_3e8;
  local_3a0 = &local_2e8;
  local_2e0 = _<&T_as_core::fmt::Display>::fmt;
  local_390 = 0;
  (*(code *)PTR_format_inner_002b63b8)(puVar5,&local_3b0);
  uVar4 = anyhow::error::_<impl_anyhow::Error>::msg(puVar5);
  param_1[1] = uVar4;
  *param_1 = 1;
  return;
}


