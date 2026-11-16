// ELF address 0x0000000000085660; run_config_matrix::load_member

/* WARNING: Removing unreachable block (ram,0x00186576) */
/* WARNING: Removing unreachable block (ram,0x00186594) */
/* WARNING: Removing unreachable block (ram,0x001865ac) */
/* WARNING: Removing unreachable block (ram,0x001865c1) */
/* WARNING: Removing unreachable block (ram,0x001865d9) */
/* WARNING: Removing unreachable block (ram,0x001865e0) */
/* WARNING: Removing unreachable block (ram,0x001865f7) */
/* WARNING: Removing unreachable block (ram,0x00186617) */
/* WARNING: Removing unreachable block (ram,0x001856d2) */
/* WARNING: Removing unreachable block (ram,0x00185767) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* run_config_matrix::load_member */

void __rustcall
run_config_matrix::load_member
          (ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4,ulong param_5,
          short ******param_6,long *param_7,long *param_8,ulong *param_9,ulong *param_10)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  bool bVar5;
  bool bVar6;
  ulong *puVar7;
  undefined *puVar8;
  short *******pppppppsVar9;
  ulong *puVar10;
  int iVar11;
  ulong uVar12;
  int *piVar13;
  short *******pppppppsVar14;
  long lVar15;
  short *******pppppppsVar16;
  short *******pppppppsVar17;
  ulong uVar18;
  short *****pppppsVar19;
  short ******ppppppsVar20;
  short ******local_648;
  ulong uStack_640;
  ulong local_638;
  short *******local_630;
  short ******local_628;
  ulong uStack_620;
  ulong *local_618;
  short *******local_610;
  short *******local_608;
  short *******local_600;
  short *******pppppppsStack_5f8;
  short *******local_5f0;
  code *local_5e8;
  short *******local_5e0;
  short *******local_5d8;
  short *******local_5d0;
  ulong local_548;
  ulong *local_540;
  ulong local_538;
  ulong local_530;
  ulong *local_528;
  short *******local_520;
  short *******local_518;
  short *******local_510;
  short *******local_508;
  short *******local_500;
  short *******local_4f8;
  short *******local_4f0;
  short *******local_4e8;
  short *******local_4e0;
  short *******pppppppsStack_4d8;
  code *local_4d0;
  undefined8 local_4c8;
  short ******local_420;
  short *******local_418;
  short *******pppppppsStack_410;
  short *******pppppppsStack_408;
  undefined8 local_400;
  undefined8 local_3f8;
  ulong local_3e8;
  short *******local_3e0;
  long local_3d8;
  short ******local_3d0;
  short ******local_3c8;
  undefined *local_3c0;
  short *****local_3b0;
  ulong local_3a8;
  short *******local_398 [2];
  undefined1 local_388 [160];
  long local_2e8;
  undefined8 local_2e0;
  short *******local_2d0;
  short *******local_2c8;
  undefined1 local_2c0 [160];
  short *****local_220;
  ulong local_218;
  undefined1 local_1f0 [24];
  undefined1 local_1d8 [24];
  short *****local_1c0;
  ulong local_1b8;
  ulong *local_1b0;
  short *****local_108 [3];
  short *****local_f0 [3];
  short *****local_d8 [3];
  short *****local_c0 [3];
  short *****local_a8 [3];
  short *****local_90 [3];
  short *****local_78 [3];
  short *****local_60 [3];
  short *****local_48 [3];
  
  local_538 = *param_9;
  uVar1 = *param_10;
  local_3e0 = (short *******)param_7[1];
  pppppppsVar17 = (short *******)param_7[2];
  local_618 = param_3;
  local_540 = param_4;
  local_528 = param_2;
  local_420 = param_6;
  local_3e8 = param_5;
  (*(code *)PTR_canonicalize_0030c9a8)(&local_1c0,local_3e0,pppppppsVar17);
  uVar12 = local_1b8;
  pppppsVar19 = local_1c0;
  if (local_1c0 == (short *****)0x8000000000000000) {
    local_418 = local_3e0;
    local_500 = (short *******)&local_418;
    local_4f8 = (short *******)PTR_fmt_0030c9a0;
    local_4e8 = (short *******)anon_a85c86dceebc40abfd7301bfa39d5ef7_47_llvm_7186392037480701417;
    local_4e0 = (short *******)&DAT_00000001;
    local_4c8 = 0;
    pppppppsStack_4d8 = (short *******)&local_500;
    local_4d0 = (code *)0x1;
                    /* try { // try from 00185838 to 0018584d has its CatchHandler @ 00187201 */
    pppppppsStack_410 = pppppppsVar17;
    (*(code *)PTR_format_inner_0030c888)(local_398,&local_4e8);
                    /* try { // try from 0018584e to 00185862 has its CatchHandler @ 00187217 */
    uVar12 = _<E_as_anyhow::context::ext::StdError>::ext_context(local_1b8,local_398);
    param_1[1] = uVar12;
    *param_1 = 2;
LAB_00185cc1:
    bVar6 = true;
    bVar5 = true;
  }
  else {
                    /* try { // try from 0018587c to 00185888 has its CatchHandler @ 001871e3 */
    read_doc(&local_610,local_1b8,local_1b0);
    pppppppsVar16 = local_608;
    pppppppsVar17 = local_610;
    if (local_610 == (short *******)0xc) {
      param_1[1] = (ulong)local_608;
      *param_1 = 2;
      local_220 = pppppsVar19;
      local_218 = uVar12;
joined_r0x001858a8:
      if (local_220 != (short *****)0x0) {
        (*(code *)PTR___rust_dealloc_0030c810)(local_218,local_220,1);
      }
      goto LAB_00185cc1;
    }
    (*(code *)PTR_memcpy_0030c8b8)(local_2c0,&local_600,0xb8);
    local_2d0 = pppppppsVar17;
    local_2c8 = pppppppsVar16;
    if (pppppsVar19 != (short *****)0x0) {
      (*(code *)PTR___rust_dealloc_0030c810)(uVar12,pppppsVar19,1);
    }
    pppppppsVar17 = (short *******)0xc;
    ppppppsVar20 = local_420;
    if (local_538 != 0x8000000000000000) {
      pppppsVar19 = (short *****)param_9[1];
      uVar12 = param_9[2];
                    /* try { // try from 00185ab6 to 00185ac9 has its CatchHandler @ 00187186 */
      (*(code *)PTR_canonicalize_0030c9a8)(&local_520,pppppsVar19,uVar12);
      pppppppsVar14 = local_518;
      pppppppsVar16 = local_520;
      if (local_520 == (short *******)0x8000000000000000) {
        local_3c8 = &local_3b0;
        local_3c0 = PTR_fmt_0030c9a0;
        local_418 = (short *******)anon_a85c86dceebc40abfd7301bfa39d5ef7_47_llvm_7186392037480701417
        ;
        pppppppsStack_410 = (short *******)&DAT_00000001;
        local_3f8 = 0;
        pppppppsStack_408 = &local_3c8;
        local_400 = 1;
                    /* try { // try from 00185b58 to 00185b6d has its CatchHandler @ 0018714b */
        local_3b0 = pppppsVar19;
        local_3a8 = uVar12;
        (*(code *)PTR_format_inner_0030c888)(&local_500,&local_418);
                    /* try { // try from 00185b6e to 00185b7d has its CatchHandler @ 00187186 */
        pppppppsVar14 =
             (short *******)
             _<E_as_anyhow::context::ext::StdError>::ext_context(pppppppsVar14,&local_500);
      }
      else {
                    /* try { // try from 00185b9d to 00185ba9 has its CatchHandler @ 00187126 */
        read_doc(&local_610,local_518,local_510);
        ppppppsVar20 = local_420;
        if (pppppppsVar16 != (short *******)0x0) {
          (*(code *)PTR___rust_dealloc_0030c810)(pppppppsVar14,pppppppsVar16,1);
        }
        pppppppsVar14 = local_608;
        pppppppsVar16 = local_610;
        (*(code *)PTR_memcpy_0030c8b8)(&local_4e8,&local_600,0xb8);
        if (pppppppsVar16 != (short *******)0xc) {
          if (pppppppsVar16 != (short *******)&DAT_0000000d) {
            (*(code *)PTR_memcpy_0030c8b8)(&local_1c0,&local_4e8,0xb8);
            pppppppsVar17 = pppppppsVar16;
          }
          goto LAB_00185918;
        }
      }
      param_1[1] = (ulong)pppppppsVar14;
      *param_1 = 2;
LAB_00185c92:
                    /* try { // try from 00185c92 to 00185c9e has its CatchHandler @ 0018718e */
      core::ptr::drop_in_place<toml_edit::item::Item>(&local_2d0);
      if ((long)local_220 < 0) goto LAB_00185cc1;
      goto joined_r0x001858a8;
    }
LAB_00185918:
    (*(code *)PTR_memcpy_0030c8b8)(local_388,&local_1c0,0xb8);
    local_628 = (short ******)local_618[1];
    uStack_620 = local_618[2];
    local_648 = (short ******)local_540[1];
    uStack_640 = local_540[2];
    local_610 = (short *******)0x130525;
    local_608 = (short *******)&DAT_00000009;
                    /* try { // try from 0018597b to 00185a87 has its CatchHandler @ 001871b6 */
    local_398[0] = pppppppsVar17;
    piVar13 = (int *)(*(code *)PTR_get_0030ca28)(&local_2d0,"commodity",9);
    if ((piVar13 == (int *)0x0) || (*piVar13 != 5)) {
                    /* try { // try from 00185b86 to 00185b8f has its CatchHandler @ 001871b6 */
      pppppppsVar16 = (short *******)config_bool::___closure__(&local_610);
LAB_00185c4d:
      param_1[1] = (ulong)pppppppsVar16;
      *param_1 = 2;
LAB_00185c59:
      if ((int)local_398[0] != 0xc) {
                    /* try { // try from 00185c63 to 00185c6f has its CatchHandler @ 0018715e */
        core::ptr::drop_in_place<toml_edit::item::Item>(local_398);
        if ((-1 < local_2e8) && (local_2e8 != 0)) {
          (*(code *)PTR___rust_dealloc_0030c810)(local_2e0,local_2e8,1);
        }
      }
      goto LAB_00185c92;
    }
    if ((char)piVar13[0x14] != '\0') {
      local_4e8 = &local_628;
      local_4e0 = (short *******)_<&T_as_core::fmt::Display>::fmt;
      pppppppsStack_4d8 = &local_648;
      local_4d0 = _<&T_as_core::fmt::Display>::fmt;
      local_610 = (short *******)&DAT_002ff188;
      local_608 = (short *******)0x3;
      local_5f0 = (short *******)0x0;
      local_600 = (short *******)&local_4e8;
      pppppppsStack_5f8 = (short *******)0x2;
                    /* try { // try from 0018655b to 00186570 has its CatchHandler @ 001871b6 */
      ppppppsVar20 = local_108;
      (*(code *)PTR_format_inner_0030c888)(ppppppsVar20,&local_610);
      goto LAB_00185fbd;
    }
    local_610 = (short *******)0x13052e;
    local_608 = (short *******)&DAT_00000007;
    piVar13 = (int *)(*(code *)PTR_get_0030ca28)(&local_2d0,"is_mock",7);
    if ((piVar13 == (int *)0x0) || (*piVar13 != 5)) {
                    /* try { // try from 00185c2b to 00185c4c has its CatchHandler @ 001871b6 */
      pppppppsVar16 = (short *******)config_bool::___closure__(&local_610);
      goto LAB_00185c4d;
    }
    if ((char)piVar13[0x14] != '\0') {
      local_4e8 = &local_628;
      local_4e0 = (short *******)_<&T_as_core::fmt::Display>::fmt;
      pppppppsStack_4d8 = &local_648;
      local_4d0 = _<&T_as_core::fmt::Display>::fmt;
      local_610 = (short *******)&DAT_002ff158;
      local_608 = (short *******)0x3;
      local_5f0 = (short *******)0x0;
      local_600 = (short *******)&local_4e8;
      pppppppsStack_5f8 = (short *******)0x2;
      ppppppsVar20 = local_f0;
      (*(code *)PTR_format_inner_0030c888)(ppppppsVar20,&local_610);
      goto LAB_00185fbd;
    }
    local_610 = (short *******)0x130535;
    local_608 = (short *******)0x15;
    piVar13 = (int *)(*(code *)PTR_get_0030ca28)
                               (&local_2d0,
                                "liquidity_consumption body liquidity_consumption must be true",0x15
                               );
    if ((piVar13 == (int *)0x0) || (*piVar13 != 5)) {
      pppppppsVar16 = (short *******)config_bool::___closure__(&local_610);
      goto LAB_00185c4d;
    }
    if ((char)piVar13[0x14] == '\0') {
      local_4e8 = &local_628;
      local_4e0 = (short *******)_<&T_as_core::fmt::Display>::fmt;
      pppppppsStack_4d8 = &local_648;
      local_4d0 = _<&T_as_core::fmt::Display>::fmt;
      local_610 = (short *******)&DAT_002feec8;
      local_608 = (short *******)0x3;
      local_5f0 = (short *******)0x0;
      local_600 = (short *******)&local_4e8;
      pppppppsStack_5f8 = (short *******)0x2;
                    /* try { // try from 00186951 to 00186efb has its CatchHandler @ 001871b6 */
      ppppppsVar20 = local_d8;
      (*(code *)PTR_format_inner_0030c888)(ppppppsVar20,&local_610);
      goto LAB_00185fbd;
    }
    local_610 = (short *******)0x130572;
    local_608 = (short *******)0x16;
    piVar13 = (int *)(*(code *)PTR_get_0030ca28)(&local_2d0,"logger_config.log_open",0x16);
    if ((piVar13 == (int *)0x0) || (*piVar13 != 5)) {
      pppppppsVar16 = (short *******)config_bool::___closure__(&local_610);
      goto LAB_00185c4d;
    }
    if ((char)piVar13[0x14] != '\0') {
      local_4e8 = &local_628;
      local_4e0 = (short *******)_<&T_as_core::fmt::Display>::fmt;
      pppppppsStack_4d8 = &local_648;
      local_4d0 = _<&T_as_core::fmt::Display>::fmt;
      local_610 = (short *******)&DAT_002ff128;
      local_608 = (short *******)0x3;
      local_5f0 = (short *******)0x0;
      local_600 = (short *******)&local_4e8;
      pppppppsStack_5f8 = (short *******)0x2;
      ppppppsVar20 = local_c0;
      (*(code *)PTR_format_inner_0030c888)(ppppppsVar20,&local_610);
      goto LAB_00185fbd;
    }
    config_signals(&local_610,&local_2d0);
    pppppppsVar16 = local_608;
    if (((ulong)local_610 & 1) != 0) goto LAB_00185a98;
    local_4e0 = local_600;
    pppppppsStack_4d8 = pppppppsStack_5f8;
    local_4e8 = local_608;
                    /* try { // try from 00185dee to 00185dfa has its CatchHandler @ 0018710b */
    lVar15 = alloc::collections::btree::map::BTreeMap<K,V,A>::get(&local_4e8,local_648,uStack_640);
                    /* try { // try from 00185dfb to 0018600a has its CatchHandler @ 001871b6 */
    _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop(&local_4e8);
    if (lVar15 == 0) {
      local_4e8 = &local_628;
      local_4e0 = (short *******)_<&T_as_core::fmt::Display>::fmt;
      pppppppsStack_4d8 = &local_648;
      local_4d0 = _<&T_as_core::fmt::Display>::fmt;
      local_610 = (short *******)&DAT_002ff0f8;
      local_608 = (short *******)0x3;
      local_5f0 = (short *******)0x0;
      local_600 = (short *******)&local_4e8;
      pppppppsStack_5f8 = (short *******)0x2;
      ppppppsVar20 = local_a8;
      (*(code *)PTR_format_inner_0030c888)(ppppppsVar20,&local_610);
LAB_00185fbd:
      pppppppsVar16 = (short *******)anyhow::error::_<impl_anyhow::Error>::msg(ppppppsVar20);
      goto LAB_00185c4d;
    }
    lVar15 = (*(code *)PTR_get_0030ca28)(&local_2d0,"mock_crushion_rate",0x12);
    if ((lVar15 != 0) ||
       (lVar15 = (*(code *)PTR_get_0030ca28)
                           (&local_2d0,"mock_crushion contains a forbidden mock crushion field",0xd)
       , lVar15 != 0)) {
      local_4e8 = &local_628;
      local_4e0 = (short *******)_<&T_as_core::fmt::Display>::fmt;
      pppppppsStack_4d8 = &local_648;
      local_4d0 = _<&T_as_core::fmt::Display>::fmt;
      local_610 = (short *******)&DAT_002feef8;
      local_608 = (short *******)0x3;
      local_5f0 = (short *******)0x0;
      local_600 = (short *******)&local_4e8;
      pppppppsStack_5f8 = (short *******)0x2;
      ppppppsVar20 = local_90;
      (*(code *)PTR_format_inner_0030c888)(ppppppsVar20,&local_610);
      goto LAB_00185fbd;
    }
    if ((local_3e8 & 1) != 0) {
      local_3d0 = ppppppsVar20;
      config_number(&local_610,&local_2d0,"init_cash",9);
      pppppppsVar16 = local_608;
      if (((ulong)local_610 & 1) == 0) {
        local_520 = local_608;
        if (_s__0012b9d0 <
            (double)((ulong)((double)local_608 - (double)(long)ppppppsVar20) & _DAT_0012b120)) {
          local_610 = &local_628;
          local_608 = (short *******)_<&T_as_core::fmt::Display>::fmt;
          local_600 = &local_648;
          pppppppsStack_5f8 = (short *******)_<&T_as_core::fmt::Display>::fmt;
          local_5f0 = (short *******)&local_520;
          local_5e8 = (code *)PTR_fmt_0030ca38;
          local_5e0 = &local_3d0;
          local_5d8 = (short *******)PTR_fmt_0030ca20;
          local_4e8 = (short *******)&DAT_002fef58;
          local_4e0 = (short *******)&DAT_00000004;
          local_4c8 = 0;
          local_4d0 = (code *)0x4;
          pppppppsStack_4d8 = (short *******)&local_610;
          (*(code *)PTR_format_inner_0030c888)(local_1f0,&local_4e8);
          pppppppsVar16 = (short *******)anyhow::error::_<impl_anyhow::Error>::msg(local_1f0);
        }
        else {
          config_number(&local_610,&local_2d0,
                        "margin_cushion_leverage_rate margin_cushion_leverage_rate must be 1.0, found  init_cash= differs from manifest capital= has a watcher but is not an SOS case watcher must be mock"
                        ,0x1c);
          pppppppsVar16 = local_608;
          if (((ulong)local_610 & 1) == 0) {
            local_500 = local_608;
            if ((double)((ulong)((double)local_608 + _s__0012b928) & _DAT_0012b120) <= _DAT_0012b998
               ) goto LAB_00185f2c;
            local_610 = &local_628;
            local_608 = (short *******)_<&T_as_core::fmt::Display>::fmt;
            local_600 = &local_648;
            pppppppsStack_5f8 = (short *******)_<&T_as_core::fmt::Display>::fmt;
            local_5f0 = (short *******)&local_500;
            local_5e8 = (code *)PTR_fmt_0030ca38;
            local_4e8 = (short *******)&DAT_002fef28;
            local_4e0 = (short *******)0x3;
            local_4c8 = 0;
            local_4d0 = (code *)0x3;
            pppppppsStack_4d8 = (short *******)&local_610;
            (*(code *)PTR_format_inner_0030c888)(local_1d8,&local_4e8);
            pppppppsVar16 = (short *******)anyhow::error::_<impl_anyhow::Error>::msg(local_1d8);
          }
        }
      }
      goto LAB_00185a98;
    }
LAB_00185f2c:
    if (uStack_620 < 3) {
      if (pppppppsVar17 != (short *******)0xc) {
LAB_00185f42:
        local_4e8 = &local_628;
        local_4e0 = (short *******)_<&T_as_core::fmt::Display>::fmt;
        pppppppsStack_4d8 = &local_648;
        local_4d0 = _<&T_as_core::fmt::Display>::fmt;
        local_610 = (short *******)&DAT_002fefc8;
        local_608 = (short *******)0x3;
        local_5f0 = (short *******)0x0;
        local_600 = (short *******)&local_4e8;
        pppppppsStack_5f8 = (short *******)0x2;
        ppppppsVar20 = local_78;
        (*(code *)PTR_format_inner_0030c888)(ppppppsVar20,&local_610);
        goto LAB_00185fbd;
      }
    }
    else {
      bVar5 = *(char *)((long)local_628 + 2) != 's';
      if (pppppppsVar17 != (short *******)0xc) {
        if (bVar5 || *(short *)local_628 != 0x6f73) goto LAB_00185f42;
        config_bool(&local_610,local_398,"is_mock",7);
        pppppppsVar16 = local_608;
        if ((char)local_610 == '\0') {
          if (((ulong)local_610 & 0x100) == 0) {
            local_4e8 = &local_628;
            local_4e0 = (short *******)_<&T_as_core::fmt::Display>::fmt;
            pppppppsStack_4d8 = &local_648;
            local_4d0 = _<&T_as_core::fmt::Display>::fmt;
            local_610 = (short *******)&DAT_002feff8;
            local_608 = (short *******)0x3;
            local_5f0 = (short *******)0x0;
            local_600 = (short *******)&local_4e8;
            pppppppsStack_5f8 = (short *******)0x2;
            ppppppsVar20 = local_60;
            (*(code *)PTR_format_inner_0030c888)(ppppppsVar20,&local_610);
            goto LAB_00185fbd;
          }
          config_bool(&local_610,local_398,
                      "liquidity_consumption body liquidity_consumption must be true",0x15);
          pppppppsVar16 = local_608;
          if ((char)local_610 == '\0') {
            if (((ulong)local_610 & 0x100) != 0) {
              local_4e8 = &local_628;
              local_4e0 = (short *******)_<&T_as_core::fmt::Display>::fmt;
              pppppppsStack_4d8 = &local_648;
              local_4d0 = _<&T_as_core::fmt::Display>::fmt;
              local_610 = (short *******)&DAT_002ff0c8;
              local_608 = (short *******)0x3;
              local_5f0 = (short *******)0x0;
              local_600 = (short *******)&local_4e8;
              pppppppsStack_5f8 = (short *******)0x2;
              ppppppsVar20 = local_48;
              (*(code *)PTR_format_inner_0030c888)(ppppppsVar20,&local_610);
              goto LAB_00185fbd;
            }
            config_bool(&local_610,local_398,"logger_config.log_open",0x16);
            pppppppsVar16 = local_608;
            if ((char)local_610 == '\0') {
              if (((ulong)local_610 & 0x100) != 0) {
                local_4e8 = &local_628;
                local_4e0 = (short *******)_<&T_as_core::fmt::Display>::fmt;
                pppppppsStack_4d8 = &local_648;
                local_4d0 = _<&T_as_core::fmt::Display>::fmt;
                local_610 = (short *******)&DAT_002ff098;
                local_608 = (short *******)0x3;
                local_5f0 = (short *******)0x0;
                local_600 = (short *******)&local_4e8;
                pppppppsStack_5f8 = (short *******)0x2;
                ppppppsVar20 = (short ******)&local_3c8;
                (*(code *)PTR_format_inner_0030c888)(ppppppsVar20,&local_610);
                goto LAB_00185fbd;
              }
                    /* try { // try from 0018663c to 0018664d has its CatchHandler @ 001871b6 */
              config_signals(&local_610,local_398);
              pppppppsVar16 = local_608;
              if (((ulong)local_610 & 1) == 0) {
                local_4e0 = local_600;
                pppppppsStack_4d8 = pppppppsStack_5f8;
                local_4e8 = local_608;
                    /* try { // try from 0018667f to 0018668b has its CatchHandler @ 00186f55 */
                lVar15 = alloc::collections::btree::map::BTreeMap<K,V,A>::get
                                   (&local_4e8,local_648,uStack_640);
                    /* try { // try from 0018668c to 0018675b has its CatchHandler @ 001871b6 */
                _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop
                          (&local_4e8);
                if (lVar15 == 0) {
                  local_4e8 = &local_628;
                  local_4e0 = (short *******)_<&T_as_core::fmt::Display>::fmt;
                  pppppppsStack_4d8 = &local_648;
                  local_4d0 = _<&T_as_core::fmt::Display>::fmt;
                  local_610 = (short *******)&DAT_002ff068;
                  local_608 = (short *******)0x3;
                  local_5f0 = (short *******)0x0;
                  pppppppsStack_5f8 = (short *******)0x2;
                  ppppppsVar20 = &local_3b0;
                  local_600 = (short *******)&local_4e8;
                  (*(code *)PTR_format_inner_0030c888)(ppppppsVar20,&local_610);
                  goto LAB_00185fbd;
                }
                config_string(&local_610,&local_2d0,
                              "custom.watcher_account_name watcher account mismatch: body expects , watcher has  watcher signals does not contain its abtype watcher liquidity_consumption must be false body signals does not contain its abtype body logger must be disabled body must be real must be a stock-index config"
                              ,0x1b);
                pppppppsVar14 = local_600;
                pppppppsVar17 = local_608;
                pppppppsVar16 = local_608;
                if (local_610 != (short *******)0x8000000000000000) {
                  local_520 = local_610;
                  local_518 = local_608;
                  local_510 = local_600;
                    /* try { // try from 00186781 to 0018679e has its CatchHandler @ 00186f26 */
                  config_string(&local_610,local_398,
                                "account_name repeats account_name  output_subdir must be ",0xc);
                  pppppppsVar16 = local_608;
                  pppppppsVar9 = local_610;
                  if (local_610 != (short *******)0x8000000000000000) {
                    local_500 = local_610;
                    local_4f8 = local_608;
                    local_4f0 = local_600;
                    if ((pppppppsVar14 == local_600) &&
                       (iVar11 = (*(code *)PTR_bcmp_0030ca18)(pppppppsVar17,local_608,pppppppsVar14)
                       , iVar11 == 0)) {
                      if (pppppppsVar9 != (short *******)0x0) {
                        (*(code *)PTR___rust_dealloc_0030c810)(pppppppsVar16,pppppppsVar9,1);
                      }
                      if (local_520 != (short *******)0x0) {
                        (*(code *)PTR___rust_dealloc_0030c810)(local_518,local_520,1);
                      }
                      goto LAB_00185ff9;
                    }
                    local_610 = &local_628;
                    local_608 = (short *******)_<&T_as_core::fmt::Display>::fmt;
                    local_600 = &local_648;
                    pppppppsStack_5f8 = (short *******)_<&T_as_core::fmt::Display>::fmt;
                    local_5f0 = (short *******)&local_520;
                    local_5e8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                    local_5e0 = (short *******)&local_500;
                    local_5d8 = (short *******)_<alloc::string::String_as_core::fmt::Display>::fmt;
                    local_4e8 = (short *******)&DAT_002ff028;
                    local_4e0 = (short *******)&DAT_00000004;
                    local_4c8 = 0;
                    pppppppsStack_4d8 = (short *******)&local_610;
                    local_4d0 = (code *)0x4;
                    /* try { // try from 0018687e to 001868a0 has its CatchHandler @ 00186f01 */
                    (*(code *)PTR_format_inner_0030c888)(&local_418,&local_4e8);
                    pppppppsVar16 =
                         (short *******)anyhow::error::_<impl_anyhow::Error>::msg(&local_418);
                    if (local_500 != (short *******)0x0) {
                      (*(code *)PTR___rust_dealloc_0030c810)(local_4f8,local_500,1);
                    }
                  }
                  if (local_520 != (short *******)0x0) {
                    (*(code *)PTR___rust_dealloc_0030c810)(local_518,local_520,1);
                  }
                }
              }
LAB_00185a98:
              if (pppppppsVar16 == (short *******)0x0) goto LAB_00185ff9;
            }
          }
        }
        goto LAB_00185c4d;
      }
      if (!bVar5 && *(short *)local_628 == 0x6f73) {
        local_4e8 = &local_628;
        local_4e0 = (short *******)_<&T_as_core::fmt::Display>::fmt;
        pppppppsStack_4d8 = &local_648;
        local_4d0 = _<&T_as_core::fmt::Display>::fmt;
        local_610 = (short *******)&DAT_002fef98;
        local_608 = (short *******)0x3;
        local_5f0 = (short *******)0x0;
        local_600 = (short *******)&local_4e8;
        pppppppsStack_5f8 = (short *******)0x2;
        ppppppsVar20 = &local_1c0;
        (*(code *)PTR_format_inner_0030c888)(ppppppsVar20,&local_610);
        goto LAB_00185fbd;
      }
    }
LAB_00185ff9:
    config_signals(&local_610,&local_2d0);
    pppppppsVar16 = local_608;
    if ((int)local_610 == 1) goto LAB_00185c4d;
    pppppppsStack_410 = local_600;
    pppppppsStack_408 = pppppppsStack_5f8;
    local_418 = local_608;
    if ((int)local_398[0] != 0xc) {
                    /* try { // try from 00186040 to 00186051 has its CatchHandler @ 001870f3 */
      config_signals(&local_610,local_398);
      pppppppsVar16 = local_600;
      pppppppsVar17 = local_608;
      if ((int)local_610 != 1) {
        local_5d0 = local_608;
        if (local_608 != (short *******)0x0) {
          local_5d0 = pppppppsStack_5f8;
        }
        local_610 = (short *******)(ulong)(local_608 != (short *******)0x0);
        local_608 = (short *******)0x0;
        local_600 = pppppppsVar17;
        pppppppsStack_5f8 = pppppppsVar16;
        local_5e8 = (code *)0x0;
        local_5e0 = pppppppsVar17;
        local_5d8 = pppppppsVar16;
                    /* try { // try from 00186170 to 00186181 has its CatchHandler @ 001870f3 */
        local_5f0 = local_610;
        core::iter::traits::iterator::Iterator::fold(&local_610,&local_418);
        goto LAB_00186182;
      }
      param_1[1] = (ulong)local_608;
      *param_1 = 2;
                    /* try { // try from 0018606e to 00186105 has its CatchHandler @ 001871b6 */
      _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop(&local_418);
      goto LAB_00185c59;
    }
LAB_00186182:
    uVar12 = *local_528;
    uVar2 = local_528[1];
    uVar3 = local_528[2];
    uVar18 = *local_618;
    local_548 = local_618[1];
    uVar4 = local_618[2];
    (*(code *)PTR_memcpy_0030c8b8)(&local_4e8,&local_2d0,200);
    local_3d8 = param_8[1];
                    /* try { // try from 001861dc to 001861ed has its CatchHandler @ 0018709f */
    resolve_existing(&local_610,local_3d8,param_8[2]);
    pppppppsVar17 = local_600;
    local_630 = local_610;
    local_530 = uVar2;
    if (local_610 != (short *******)0x8000000000000000) {
      local_508 = local_608;
      local_638 = uVar18;
      (*(code *)PTR_memcpy_0030c8b8)(&local_610,local_398,200);
      pppppsVar19 = (short *****)0x8000000000000000;
                    /* try { // try from 001862d3 to 001862df has its CatchHandler @ 00186fef */
      if ((uVar1 != 0x8000000000000000) &&
         (resolve_existing(&local_1c0,param_10[1],param_10[2]), uVar18 = local_1b8,
         local_1c0 != (short *****)0x8000000000000001)) {
        local_618 = local_1b0;
        pppppsVar19 = local_1c0;
      }
      param_1[0x42] = (ulong)pppppppsStack_408;
      param_1[0x40] = (ulong)local_418;
      param_1[0x41] = (ulong)pppppppsStack_410;
      param_1[0x34] = uVar12;
      param_1[0x35] = local_530;
      param_1[0x36] = uVar3;
      param_1[0x37] = local_638;
      param_1[0x38] = local_548;
      param_1[0x39] = uVar4;
      puVar8 = PTR_memcpy_0030c8b8;
      (*(code *)PTR_memcpy_0030c8b8)(param_1 + 2,&local_4e8,200);
      param_1[0x3a] = (ulong)local_630;
      param_1[0x3b] = (ulong)local_508;
      param_1[0x3c] = (ulong)pppppppsVar17;
      (*(code *)puVar8)(param_1 + 0x1b,&local_610,200);
      *param_1 = local_3e8;
      param_1[1] = (ulong)local_420;
      param_1[0x3d] = (ulong)pppppsVar19;
      param_1[0x3e] = uVar18;
      param_1[0x3f] = (ulong)local_618;
      if ((uVar1 & 0x7fffffffffffffff) == 0) {
        if ((local_538 & 0x7fffffffffffffff) != 0) goto LAB_001864be;
LAB_00186422:
        lVar15 = *param_8;
      }
      else {
        (*(code *)PTR___rust_dealloc_0030c810)(param_10[1],uVar1,1);
        if ((local_538 & 0x7fffffffffffffff) == 0) goto LAB_00186422;
LAB_001864be:
        (*(code *)PTR___rust_dealloc_0030c810)(param_9[1],local_538,1);
        lVar15 = *param_8;
      }
      if (lVar15 != 0) {
        (*(code *)PTR___rust_dealloc_0030c810)(local_3d8,lVar15,1);
      }
      if (*param_7 != 0) {
        (*(code *)PTR___rust_dealloc_0030c810)(local_3e0,*param_7,1);
      }
      uVar1 = *local_540;
      puVar7 = local_540;
      goto joined_r0x00185da2;
    }
    param_1[1] = (ulong)local_608;
    *param_1 = 2;
                    /* try { // try from 0018621a to 00186226 has its CatchHandler @ 00187030 */
    core::ptr::drop_in_place<toml_edit::document::DocumentMut>(&local_4e8);
    if (uVar18 != 0) {
      (*(code *)PTR___rust_dealloc_0030c810)(local_548,uVar18,1);
    }
    if (uVar12 != 0) {
      (*(code *)PTR___rust_dealloc_0030c810)(local_530,uVar12,1);
    }
                    /* try { // try from 00186260 to 0018626c has its CatchHandler @ 0018702b */
    _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop(&local_418);
                    /* try { // try from 00186270 to 00186281 has its CatchHandler @ 00187217 */
    core::ptr::drop_in_place<core::option::Option<toml_edit::document::DocumentMut>>(local_398);
    bVar6 = false;
    bVar5 = false;
  }
  if ((uVar1 != 0x8000000000000000) && (bVar5 = bVar6, uVar1 != 0)) {
    (*(code *)PTR___rust_dealloc_0030c810)(param_10[1],uVar1,1);
  }
  if ((local_538 != 0x8000000000000000) && (local_538 != 0)) {
    (*(code *)PTR___rust_dealloc_0030c810)(param_9[1],local_538,1);
  }
  puVar10 = local_540;
  puVar7 = local_618;
  if (*param_8 != 0) {
    (*(code *)PTR___rust_dealloc_0030c810)(param_8[1],*param_8,1);
  }
  if (*param_7 != 0) {
    (*(code *)PTR___rust_dealloc_0030c810)(param_7[1],*param_7,1);
  }
  uVar1 = *puVar10;
  if (uVar1 != 0) {
    (*(code *)PTR___rust_dealloc_0030c810)(puVar10[1],uVar1,1);
  }
  if (!bVar5) {
    return;
  }
  uVar1 = *puVar7;
  if (uVar1 != 0) {
    (*(code *)PTR___rust_dealloc_0030c810)(puVar7[1],uVar1,1);
  }
  uVar1 = *local_528;
  puVar7 = local_528;
joined_r0x00185da2:
  if (uVar1 != 0) {
    (*(code *)PTR___rust_dealloc_0030c810)(puVar7[1],uVar1,1);
  }
  return;
}


