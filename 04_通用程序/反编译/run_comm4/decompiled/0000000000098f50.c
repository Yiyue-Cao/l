// ELF address 0x0000000000098f50; fb_sweeps::set

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
                    /* try { // try from 00198fb9 to 00198fd1 has its CatchHandler @ 0019a46e */
  local_318 = param_3;
  local_310 = param_2;
  local_308 = param_3;
  local_2f8 = param_3;
  local_d8 = param_2;
  local_d0 = param_3;
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (&local_1c0,&local_320,
             &PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_0029a940);
  if (local_1b0 == 0) {
    local_320 = &PTR_DAT_0029a9f8;
    local_318 = 1;
    local_310 = (undefined8 **)&DAT_00000008;
    local_308 = 0;
    uStack_300 = 0;
                    /* try { // try from 0019a2b6 to 0019a2f7 has its CatchHandler @ 0019a473 */
    uVar4 = anyhow::__private::format_err(&local_320);
  }
  else {
    local_1a0 = local_1b8 + (local_1b0 + -1) * 2;
    local_e0 = local_1a0;
    if (local_1b0 != 1) {
      lVar5 = local_1b0 * 0x10 + -0x10;
      puVar6 = local_1b8;
      pcVar7 = (code *)PTR_index_002a5a08;
      do {
        local_348[0] = puVar6;
                    /* try { // try from 0019903c to 0019906f has its CatchHandler @ 0019a478 */
        lVar3 = (*pcVar7)(*puVar6,puVar6[1],param_1);
        if (lVar3 == 0) {
          if ((int)*param_1 != 10) {
            local_198 = local_348;
            local_190 = _<&T_as_core::fmt::Display>::fmt;
            local_320 = &PTR_DAT_0029aa48;
            local_318 = 2;
            uStack_300 = 0;
            local_310 = &local_198;
            local_308 = 1;
            (*(code *)PTR_format_inner_002a53d8)(local_60,&local_320);
            uVar4 = anyhow::error::_<impl_anyhow::Error>::msg(local_60);
            goto LAB_0019933a;
          }
          uVar4 = *local_348[0];
          uVar1 = local_348[0][1];
          (*(code *)PTR_new_002a5a10)(&local_198);
          (*(code *)PTR_memcpy_002a53c8)(&local_318,&local_198,0xa8);
          pcVar7 = (code *)PTR_index_002a5a08;
          local_320 = (undefined **)0xa;
                    /* try { // try from 00199096 to 001990e4 has its CatchHandler @ 0019a478 */
          (*(code *)PTR_insert_002a5a18)(&local_198,param_1 + 1,uVar4,uVar1,&local_320);
          if ((int)local_198 != 0xc) {
            core::ptr::drop_in_place<toml_edit::item::Item>(&local_198);
          }
        }
        param_1 = (long *)(*(code *)PTR_index_mut_002a5a20)(*local_348[0],local_348[0][1],param_1);
        if (param_1 == (long *)0x0) {
          uVar4 = set::___closure__(local_348);
          goto LAB_0019933a;
        }
        puVar6 = puVar6 + 2;
        lVar5 = lVar5 + -0x10;
      } while (lVar5 != 0);
    }
    if (*param_1 == 10) {
      uVar4 = *local_1a0;
      uVar1 = local_1a0[1];
      (*(code *)PTR_memcpy_002a53c8)(&local_320,param_4,0xb0);
                    /* try { // try from 0019913c to 00199339 has its CatchHandler @ 0019a473 */
      (*(code *)PTR_insert_002a5a18)(&local_198,param_1 + 1,uVar4,uVar1,&local_320);
      if ((int)local_198 != 0xc) {
        core::ptr::drop_in_place<toml_edit::item::Item>(&local_198);
      }
      if (local_1c0 != 0) {
        (*(code *)PTR___rust_dealloc_002a5338)(local_1b8,local_1c0 << 4,8);
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
                    /* WARNING: Could not emulate address calculation at 0x00199273 */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (*(code *)(&DAT_0012ad48 + *(int *)(&DAT_0012ad48 + lVar5 * 4)))();
        return uVar4;
      }
      local_320 = &PTR_DAT_0029aa08;
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
      local_320 = &PTR_DAT_0029aa18;
      local_318 = 3;
      uStack_300 = 0;
      local_310 = &local_198;
      local_308 = 2;
      (*(code *)PTR_format_inner_002a53d8)(local_48,&local_320);
      uVar4 = anyhow::error::_<impl_anyhow::Error>::msg(local_48);
    }
  }
LAB_0019933a:
  if (local_1c0 != 0) {
    (*(code *)PTR___rust_dealloc_002a5338)(local_1b8,local_1c0 << 4,8);
  }
  core::ptr::drop_in_place<toml_edit::item::Item>(param_4);
  return uVar4;
}


