// ELF address 0x00000000000761f0; run_comm5::parse_signals

/* run_comm5::parse_signals */

void __rustcall run_comm5::parse_signals(long *param_1,long param_2,ulong param_3)

{
  ulong *puVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 *puVar10;
  undefined1 auVar11 [16];
  long local_d0;
  long lStack_c8;
  long local_c0;
  long *local_b8;
  undefined8 local_b0;
  ulong local_a8;
  undefined8 **local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 *local_80;
  code *local_78;
  undefined1 local_70 [16];
  undefined1 local_60 [24];
  undefined1 local_48 [24];
  
  local_d0 = 0;
  lStack_c8 = 8;
  local_c0 = 0;
  bVar2 = false;
  uVar7 = 0;
  uVar9 = 0;
  local_b8 = param_1;
  do {
    do {
      uVar8 = uVar9;
      if (bVar2) {
        if (local_c0 == 0) {
          local_b0 = &PTR_DAT_002a49b0;
          local_a8 = 1;
          local_a0 = (undefined8 **)&DAT_00000008;
          local_98 = 0;
          uStack_90 = 0;
          lVar4 = anyhow::__private::format_err(&local_b0);
LAB_00176456:
          local_b8[1] = lVar4;
          *local_b8 = -0x8000000000000000;
          if (local_d0 != 0) {
            (*(code *)PTR___rust_dealloc_002b1518)(lStack_c8,local_d0 << 3,8);
          }
        }
        else {
          local_b8[2] = local_c0;
          *local_b8 = local_d0;
          local_b8[1] = lStack_c8;
        }
        return;
      }
      do {
        uVar9 = uVar8;
        if (param_3 < uVar8) {
LAB_001762b6:
          bVar2 = true;
          uVar8 = uVar7;
          uVar3 = param_3;
          break;
        }
        uVar3 = param_3 - uVar8;
        uVar9 = param_3;
        if (uVar3 < 0x10) {
          if (param_3 == uVar8) goto LAB_001762b6;
          uVar5 = 0;
          while (*(char *)(param_2 + uVar8 + uVar5) != ',') {
            uVar5 = uVar5 + 1;
            if (uVar3 == uVar5) goto LAB_001762b6;
          }
        }
        else {
                    /* try { // try from 00176270 to 0017627d has its CatchHandler @ 00176569 */
          auVar11 = (*(code *)PTR_memchr_aligned_002b15d0)(0x2c,param_2 + uVar8,uVar3);
          uVar5 = auVar11._8_8_;
          if ((auVar11 & (undefined1  [16])0x1) == (undefined1  [16])0x0) goto LAB_001762b6;
        }
        uVar3 = uVar5 + uVar8;
        uVar8 = uVar8 + uVar5 + 1;
      } while ((param_3 <= uVar3) || (uVar9 = uVar8, *(char *)(param_2 + uVar3) != ','));
                    /* try { // try from 001762c5 to 001762cc has its CatchHandler @ 0017656b */
      auVar11 = core::str::_<impl_str>::trim_matches(uVar7 + param_2,uVar3 - uVar7);
      uVar7 = uVar8;
    } while (auVar11._0_8_ == 0 || auVar11._8_8_ == 0);
                    /* try { // try from 001762f0 to 001763d7 has its CatchHandler @ 00176567 */
    local_70 = auVar11;
    (*(code *)PTR_from_str_002b15f8)(&local_b0,auVar11._0_8_);
    uVar8 = local_a8;
    lVar4 = local_c0;
    if ((char)local_b0 == '\x01') {
      lVar4 = parse_signals::___closure__(local_70,local_b0._1_1_);
      goto LAB_00176456;
    }
    uVar3 = local_a8 & 0x7fffffffffffffff;
    if ((uint)(uVar3 + 0xfff0000000000000 >> 0x35) < 0x3ff && (long)local_a8 < 0 ||
        ((uVar3 == 0x7ff0000000000000 || (uVar3 == 0 || 0x7fefffffffffffff < uVar3)) ||
        uVar3 - 1 < 0xfffffffffffff && (long)local_a8 < 0)) {
      local_80 = (undefined8 *)local_70;
      local_78 = _<&T_as_core::fmt::Debug>::fmt;
      local_b0 = &PTR_DAT_002a49e8;
      local_a8 = 1;
      uStack_90 = 0;
      local_a0 = &local_80;
      local_98 = 1;
      puVar10 = local_60;
      (*(code *)PTR_format_inner_002b15c8)(puVar10,&local_b0);
LAB_0017644e:
      lVar4 = anyhow::error::_<impl_anyhow::Error>::msg(puVar10);
      goto LAB_00176456;
    }
    lVar6 = 0;
    while (local_c0 * 8 - lVar6 != 0) {
      puVar1 = (ulong *)(lStack_c8 + lVar6);
      lVar6 = lVar6 + 8;
      if (*puVar1 == local_a8) {
        local_80 = (undefined8 *)local_70;
        local_78 = _<&T_as_core::fmt::Debug>::fmt;
        local_b0 = &PTR_DAT_002a49d8;
        local_a8 = 1;
        uStack_90 = 0;
        local_a0 = &local_80;
        local_98 = 1;
                    /* try { // try from 00176438 to 0017655f has its CatchHandler @ 00176565 */
        puVar10 = local_48;
        (*(code *)PTR_format_inner_002b15c8)(puVar10,&local_b0);
        goto LAB_0017644e;
      }
    }
    if (local_c0 == local_d0) {
      alloc::raw_vec::RawVec<T,A>::grow_one
                (&local_d0,
                 &PTR_anon_8462b3e743075987c6708a11b1cca9e1_26_llvm_10697678318288695058_002a49c0);
    }
    *(ulong *)(lStack_c8 + lVar4 * 8) = uVar8;
    local_c0 = lVar4 + 1;
  } while( true );
}


