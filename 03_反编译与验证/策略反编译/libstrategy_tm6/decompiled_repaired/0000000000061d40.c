// ELF address 0x0000000000061d40; strategy_tm6::__fb_plugin_impl::on_order

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_tm6::__fb_plugin_impl::on_order */

undefined8 __rustcall
strategy_tm6::__fb_plugin_impl::on_order(long param_1,undefined8 *param_2,undefined8 param_3)

{
  double dVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  bool bVar15;
  ulong local_160;
  ulong local_158;
  long local_150;
  ulong local_118;
  long lStack_110;
  ulong local_108;
  ulong local_100;
  long local_f8;
  ulong local_f0;
  ulong local_e8;
  long local_e0;
  ulong local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  ulong local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined1 local_7c;
  undefined1 local_7b;
  undefined1 local_7a;
  ulong local_70;
  long lStack_68;
  ulong local_60;
  undefined8 local_58;
  undefined8 local_40;
  undefined8 local_38;
  
  dVar1 = (double)param_2[1];
  uVar6 = *param_2;
  uVar7 = param_2[1];
  uVar2 = param_2[2];
  lVar9 = param_2[3];
  local_150 = 1;
  if (lVar9 == 0) {
    uVar12 = 0;
    lVar9 = 1;
    uVar10 = 0;
  }
  else {
    lVar8 = (*(code *)PTR_strlen_001d9638)(lVar9);
                    /* try { // try from 00161d9c to 00161dd8 has its CatchHandler @ 00162319 */
    (*(code *)PTR_to_str_001d9640)(&local_118,lVar9,lVar8 + 1);
    uVar12 = local_108;
    lVar8 = lStack_110;
    uVar14 = local_118;
    uVar13 = 0;
    uVar10 = local_108;
    if ((byte)local_118 != '\0') {
      uVar10 = uVar13;
    }
    if ((long)uVar10 < 0) {
LAB_00161dc6:
      (*(code *)PTR_handle_error_001d94e0)
                (uVar13,uVar10,
                 &PTR_anon_bf65de67c24155f465f4e3f0b4be96c2_2_llvm_4550705873496731735_001d4578);
      goto LAB_00161f19;
    }
    if (uVar10 == 0) {
      uVar12 = 0;
      lVar9 = 1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001d9258)();
      uVar13 = 1;
      lVar9 = (*(code *)PTR___rust_alloc_001d9230)(uVar10,1);
      if (lVar9 == 0) goto LAB_00161dc6;
    }
    if ((uVar14 & 1) != 0) {
      lVar8 = 1;
    }
    (*(code *)PTR_memcpy_001d9298)(lVar9,lVar8,uVar10);
  }
  lVar8 = param_2[4];
  local_70 = uVar12;
  lStack_68 = lVar9;
  local_60 = uVar10;
  if (lVar8 == 0) {
    local_160 = 0;
    uVar12 = 0;
    lVar9 = param_2[5];
  }
  else {
    lVar9 = (*(code *)PTR_strlen_001d9638)(lVar8);
                    /* try { // try from 00161e73 to 00161eaf has its CatchHandler @ 00162306 */
    (*(code *)PTR_to_str_001d9640)(&local_118,lVar8,lVar9 + 1);
    lVar9 = lStack_110;
    uVar10 = local_118;
    uVar14 = 0;
    local_160 = local_108;
    uVar12 = local_108;
    if ((byte)local_118 != 0) {
      uVar12 = uVar14;
    }
    if ((long)uVar12 < 0) {
LAB_00161e9d:
      (*(code *)PTR_handle_error_001d94e0)
                (uVar14,uVar12,
                 &PTR_anon_bf65de67c24155f465f4e3f0b4be96c2_2_llvm_4550705873496731735_001d4578);
      goto LAB_00161f19;
    }
    if (uVar12 == 0) {
      local_160 = 0;
      local_150 = 1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001d9258)();
      uVar14 = 1;
      local_150 = (*(code *)PTR___rust_alloc_001d9230)(uVar12,1);
      if (local_150 == 0) goto LAB_00161e9d;
    }
    if ((uVar10 & 1) != 0) {
      lVar9 = 1;
    }
    (*(code *)PTR_memcpy_001d9298)(local_150,lVar9,uVar12);
    lVar9 = param_2[5];
  }
  if (lVar9 == 0) {
    lVar9 = 1;
    local_158 = 0;
    uVar10 = 0;
    goto LAB_00161ff3;
  }
  lVar8 = (*(code *)PTR_strlen_001d9638)(lVar9);
                    /* try { // try from 00161edb to 00161f18 has its CatchHandler @ 001622d9 */
  (*(code *)PTR_to_str_001d9640)(&local_118,lVar9,lVar8 + 1);
  uVar14 = 0;
  local_158 = local_108;
  uVar10 = local_108;
  if ((byte)local_118 != 0) {
    uVar10 = uVar14;
  }
  if ((long)uVar10 < 0) {
LAB_00161f06:
    (*(code *)PTR_handle_error_001d94e0)
              (uVar14,uVar10,
               &PTR_anon_bf65de67c24155f465f4e3f0b4be96c2_2_llvm_4550705873496731735_001d4578);
LAB_00161f19:
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  if (uVar10 == 0) {
    local_158 = 0;
    lVar9 = 1;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001d9258)();
    uVar14 = 1;
    lVar9 = (*(code *)PTR___rust_alloc_001d9230)(uVar10,1);
    if (lVar9 == 0) goto LAB_00161f06;
  }
  if (((byte)local_118 & 1) != 0) {
    lStack_110 = 1;
  }
  (*(code *)PTR_memcpy_001d9298)(lVar9,lStack_110,uVar10);
LAB_00161ff3:
  local_7c = (undefined1)*(uint *)(param_2 + 0xb);
  if (3 < *(uint *)(param_2 + 0xb)) {
    local_7c = 4;
  }
  uVar5 = 4;
  if (*(uint *)((long)param_2 + 0x5c) < 4) {
    uVar5 = *(uint *)((long)param_2 + 0x5c);
  }
  local_7a = 0;
  if (*(int *)(param_2 + 0xc) - 1U < 8) {
    local_7a = (char)*(int *)(param_2 + 0xc);
  }
  local_98 = param_2[10];
  local_80 = *(undefined4 *)((long)param_2 + 100);
  local_118 = local_70;
  lStack_110 = lStack_68;
  local_108 = local_60;
  local_b8 = param_2[6];
  uStack_b0 = param_2[7];
  uVar3 = param_2[9];
  local_a8 = param_2[8];
  uStack_a0 = param_2[9];
  local_7b = (undefined1)uVar5;
  local_90 = *(undefined4 *)(param_2 + 0xd);
  uStack_8c = *(undefined4 *)((long)param_2 + 0x6c);
  uStack_88 = *(undefined4 *)(param_2 + 0xe);
  uStack_84 = *(undefined4 *)((long)param_2 + 0x74);
  local_38 = 0;
  local_70 = 0x8000000000000000;
  local_58 = 0x8000000000000000;
  local_100 = local_160;
  local_f8 = local_150;
  local_f0 = uVar12;
  local_e8 = local_158;
  local_e0 = lVar9;
  local_d8 = uVar10;
  local_d0 = uVar6;
  uStack_c8 = uVar7;
  local_c0 = uVar2;
  local_40 = param_3;
  if (_DAT_00117638 < (double)(local_b8 & _DAT_00116f30)) {
    uVar12 = *(ulong *)(param_1 + 0x80);
    uVar10 = *(ulong *)(param_1 + 0x98);
    if (uVar10 == uVar12) {
                    /* try { // try from 00162159 to 0016216b has its CatchHandler @ 001622bc */
      alloc::collections::vec_deque::VecDeque<T,A>::grow
                (param_1 + 0x80,anon_0e1e86d6043c3efacbbe1614cd0fd3e7_75_llvm_4029722044198193507);
      uVar12 = *(ulong *)(param_1 + 0x80);
      uVar10 = *(ulong *)(param_1 + 0x98);
    }
    dVar1 = dVar1 * _s__00117658;
    uVar10 = uVar10 + *(long *)(param_1 + 0x90);
    uVar14 = 0;
    if (uVar12 <= uVar10) {
      uVar14 = uVar12;
    }
    lVar8 = *(long *)(param_1 + 0x88);
    lVar11 = (uVar10 - uVar14) * 0x10;
    *(double *)(lVar8 + lVar11) = dVar1;
    *(undefined8 *)(lVar8 + 8 + lVar11) = uVar3;
    lVar8 = *(long *)(param_1 + 0x98);
    *(long *)(param_1 + 0x98) = lVar8 + 1;
    if (lVar8 + 1 != 0) {
      uVar12 = *(ulong *)(param_1 + 0x80);
      uVar10 = *(ulong *)(param_1 + 0x90);
      do {
        uVar14 = uVar12;
        if (uVar10 < uVar12) {
          uVar14 = 0;
        }
        if (dVar1 - *(double *)(*(long *)(param_1 + 0x88) + (uVar10 - uVar14) * 0x10) <=
            *(double *)(param_1 + 0xa0)) break;
        uVar14 = uVar12;
        if (uVar10 + 1 < uVar12) {
          uVar14 = 0;
        }
        uVar10 = (uVar10 + 1) - uVar14;
        *(ulong *)(param_1 + 0x90) = uVar10;
        *(long *)(param_1 + 0x98) = lVar8;
        bVar15 = lVar8 != 0;
        lVar8 = lVar8 + -1;
      } while (bVar15);
    }
  }
  core::ptr::drop_in_place<future_backtest_sdk::context::StrategyContext>(&local_70);
  if (local_118 != 0) {
    (*(code *)PTR___rust_dealloc_001d9238)(lStack_110,local_118,1);
  }
  if (local_160 != 0) {
    (*(code *)PTR___rust_dealloc_001d9238)(local_150,local_160,1);
  }
  if (local_158 != 0) {
    (*(code *)PTR___rust_dealloc_001d9238)(lVar9,local_158,1);
  }
  return 0;
}


