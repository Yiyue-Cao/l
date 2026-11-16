// ELF address 0x00000000000a5040; fb_sweeps::set

/* fb_sweeps::set */

undefined8 __rustcall
fb_sweeps::set(long *param_1,undefined8 ***param_2,undefined8 param_3,ulong *param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  code *pcVar7;
  undefined8 *local_348 [5];
  undefined **local_320;
  undefined8 local_318;
  undefined8 **local_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined1 local_2e8;
  undefined2 local_2e0;
  long local_1c0;
  undefined8 *local_1b8;
  long local_1b0;
  undefined8 *local_1a0;
  undefined8 **local_198;
  code *local_190;
  undefined8 **local_188;
  code *local_180;
  long *local_e8;
  undefined8 *local_e0;
  undefined8 **local_d8;
  undefined8 local_d0;
  undefined1 local_60 [24];
  undefined1 local_48 [24];
  
  local_320 = (undefined **)0x0;
  uStack_300 = 0;
  local_2f0 = 0x2e0000002e;
  local_2e8 = 1;
  local_2e0 = 1;
                    /* try { // try from 001a50a9 to 001a50c1 has its CatchHandler @ 001a655e */
  local_318 = param_3;
  local_310 = param_2;
  local_308 = param_3;
  local_2f8 = param_3;
  local_d8 = param_2;
  local_d0 = param_3;
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (&local_1c0,&local_320,
             &PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_002a6b28);
  if (local_1b0 == 0) {
    local_320 = &PTR_DAT_002a6be0;
    local_318 = 1;
    local_310 = (undefined8 **)&DAT_00000008;
    local_308 = 0;
    uStack_300 = 0;
                    /* try { // try from 001a63a6 to 001a63e7 has its CatchHandler @ 001a6563 */
    uVar4 = anyhow::__private::format_err(&local_320);
  }
  else {
    local_1a0 = local_1b8 + (local_1b0 + -1) * 2;
    local_e0 = local_1a0;
    if (local_1b0 != 1) {
      lVar5 = local_1b0 * 0x10 + -0x10;
      puVar6 = local_1b8;
      pcVar7 = (code *)PTR_index_002b1c08;
      do {
        local_348[0] = puVar6;
                    /* try { // try from 001a512c to 001a515f has its CatchHandler @ 001a6568 */
        lVar3 = (*pcVar7)(*puVar6,puVar6[1],param_1);
        if (lVar3 == 0) {
          if ((int)*param_1 != 10) {
            local_198 = local_348;
            local_190 = _<&T_as_core::fmt::Display>::fmt;
            local_320 = &PTR_DAT_002a6c30;
            local_318 = 2;
            uStack_300 = 0;
            local_310 = &local_198;
            local_308 = 1;
            (*(code *)PTR_format_inner_002b15c8)(local_60,&local_320);
            uVar4 = anyhow::error::_<impl_anyhow::Error>::msg(local_60);
            goto LAB_001a542a;
          }
          uVar4 = *local_348[0];
          uVar1 = local_348[0][1];
          (*(code *)PTR_new_002b1c10)(&local_198);
          (*(code *)PTR_memcpy_002b15b8)(&local_318,&local_198,0xa8);
          pcVar7 = (code *)PTR_index_002b1c08;
          local_320 = (undefined **)0xa;
                    /* try { // try from 001a5186 to 001a51d4 has its CatchHandler @ 001a6568 */
          (*(code *)PTR_insert_002b1c18)(&local_198,param_1 + 1,uVar4,uVar1,&local_320);
          if ((int)local_198 != 0xc) {
            core::ptr::drop_in_place<toml_edit::item::Item>(&local_198);
          }
        }
        param_1 = (long *)(*(code *)PTR_index_mut_002b1c20)(*local_348[0],local_348[0][1],param_1);
        if (param_1 == (long *)0x0) {
          uVar4 = set::___closure__(local_348);
          goto LAB_001a542a;
        }
        puVar6 = puVar6 + 2;
        lVar5 = lVar5 + -0x10;
      } while (lVar5 != 0);
    }
    if (*param_1 == 10) {
      uVar4 = *local_1a0;
      uVar1 = local_1a0[1];
      (*(code *)PTR_memcpy_002b15b8)(&local_320,param_4,0xb0);
                    /* try { // try from 001a522c to 001a5429 has its CatchHandler @ 001a6563 */
      (*(code *)PTR_insert_002b1c18)(&local_198,param_1 + 1,uVar4,uVar1,&local_320);
      if ((int)local_198 != 0xc) {
        core::ptr::drop_in_place<toml_edit::item::Item>(&local_198);
      }
      if (local_1c0 != 0) {
        (*(code *)PTR___rust_dealloc_002b1518)(local_1b8,local_1c0 << 4,8);
      }
      return 0;
    }
    if ((uint)*param_1 < 2) {
      uVar2 = *param_4;
      if (uVar2 < 8) {
        lVar5 = 6;
        if (1 < uVar2) {
          lVar5 = uVar2 - 2;
        }
        local_e8 = param_1;
                    /* WARNING: Could not emulate address calculation at 0x001a5363 */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (*(code *)(&DAT_0011d820 + *(int *)(&DAT_0011d820 + lVar5 * 4)))();
        return uVar4;
      }
      local_320 = &PTR_DAT_002a6bf0;
      local_318 = 1;
      local_310 = (undefined8 **)&DAT_00000008;
      local_308 = 0;
      uStack_300 = 0;
      uVar4 = anyhow::__private::format_err(&local_320);
    }
    else {
      local_198 = &local_e0;
      local_190 = _<&T_as_core::fmt::Display>::fmt;
      local_188 = &local_d8;
      local_180 = _<&T_as_core::fmt::Display>::fmt;
      local_320 = &PTR_DAT_002a6c00;
      local_318 = 3;
      uStack_300 = 0;
      local_310 = &local_198;
      local_308 = 2;
      (*(code *)PTR_format_inner_002b15c8)(local_48,&local_320);
      uVar4 = anyhow::error::_<impl_anyhow::Error>::msg(local_48);
    }
  }
LAB_001a542a:
  if (local_1c0 != 0) {
    (*(code *)PTR___rust_dealloc_002b1518)(local_1b8,local_1c0 << 4,8);
  }
  core::ptr::drop_in_place<toml_edit::item::Item>(param_4);
  return uVar4;
}


