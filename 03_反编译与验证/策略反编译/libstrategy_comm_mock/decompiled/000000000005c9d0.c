// ELF address 0x000000000005c9d0; strategy_comm_mock::__fb_plugin_impl::on_order

/* strategy_comm_mock::__fb_plugin_impl::on_order */

undefined8 __rustcall
strategy_comm_mock::__fb_plugin_impl::on_order
          (undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  code *pcVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong local_1b8;
  ulong local_1b0;
  long local_1a8;
  long local_1a0;
  long local_198;
  undefined8 local_190;
  ulong local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  ulong local_168;
  long local_160;
  ulong local_158;
  ulong local_150;
  long local_148;
  ulong local_140;
  ulong local_138;
  long local_130;
  ulong local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined1 local_cc;
  undefined1 local_cb;
  undefined1 local_ca;
  long *local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined **local_a0;
  undefined8 local_98;
  long **local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_70 [3];
  undefined8 local_58;
  undefined8 local_40;
  undefined8 local_38;
  
  local_b8 = *param_2;
  uStack_b0 = param_2[1];
  local_180 = param_2[2];
  lVar4 = param_2[3];
  local_178 = param_3;
  local_170 = param_1;
  if (lVar4 == 0) {
    local_1b0 = 0;
    uVar7 = 0;
    lVar4 = param_2[4];
    local_1a8 = 1;
    if (lVar4 == 0) goto LAB_0015cb8b;
LAB_0015ca8b:
    lVar3 = (*(code *)PTR_strlen_001e06a8)(lVar4);
                    /* try { // try from 0015ca98 to 0015cad5 has its CatchHandler @ 0015cf3a */
    (*(code *)PTR_to_str_001e06b0)(&local_168,lVar4,lVar3 + 1);
    lVar4 = local_160;
    uVar8 = local_168;
    uVar5 = 0;
    local_1b8 = local_158;
    uVar9 = local_158;
    if ((byte)local_168 != 0) {
      uVar9 = uVar5;
    }
    if ((long)uVar9 < 0) {
LAB_0015cac3:
      (*(code *)PTR_handle_error_001e0330)
                (uVar5,uVar9,anon_2f99fdb6c6ea4837581494ade133b282_21_llvm_2385902288926793999);
      goto LAB_0015cbf7;
    }
    if (uVar9 == 0) {
      local_1b8 = 0;
      lVar3 = 1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001e02b8)();
      uVar5 = 1;
      lVar3 = (*(code *)PTR___rust_alloc_001e0290)(uVar9,1);
      if (lVar3 == 0) goto LAB_0015cac3;
    }
    if ((uVar8 & 1) != 0) {
      lVar4 = 1;
    }
    (*(code *)PTR_memcpy_001e02f8)(lVar3,lVar4,uVar9);
    lVar4 = param_2[5];
    local_148 = lVar3;
  }
  else {
    lVar3 = (*(code *)PTR_strlen_001e06a8)(lVar4);
                    /* try { // try from 0015ca20 to 0015ca62 has its CatchHandler @ 0015cf4f */
    (*(code *)PTR_to_str_001e06b0)(&local_168,lVar4,lVar3 + 1);
    lVar4 = local_160;
    uVar9 = local_168;
    uVar8 = 0;
    local_1b0 = local_158;
    uVar7 = local_158;
    if ((byte)local_168 != '\0') {
      uVar7 = uVar8;
    }
    if ((long)uVar7 < 0) {
LAB_0015ca50:
      (*(code *)PTR_handle_error_001e0330)
                (uVar8,uVar7,anon_2f99fdb6c6ea4837581494ade133b282_21_llvm_2385902288926793999);
      goto LAB_0015cbf7;
    }
    if (uVar7 == 0) {
      local_1b0 = 0;
      local_1a8 = 1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001e02b8)();
      uVar8 = 1;
      local_1a8 = (*(code *)PTR___rust_alloc_001e0290)(uVar7,1);
      if (local_1a8 == 0) goto LAB_0015ca50;
    }
    if ((uVar9 & 1) != 0) {
      lVar4 = 1;
    }
    (*(code *)PTR_memcpy_001e02f8)(local_1a8,lVar4,uVar7);
    lVar4 = param_2[4];
    if (lVar4 != 0) goto LAB_0015ca8b;
LAB_0015cb8b:
    local_148 = 1;
    local_1b8 = 0;
    uVar9 = 0;
    lVar4 = param_2[5];
  }
  if (lVar4 == 0) {
    local_130 = 1;
    local_138 = 0;
    uVar8 = 0;
    goto LAB_0015ccad;
  }
  local_198 = local_148;
  lVar3 = (*(code *)PTR_strlen_001e06a8)(lVar4);
                    /* try { // try from 0015cbb8 to 0015cbf6 has its CatchHandler @ 0015cf0c */
  (*(code *)PTR_to_str_001e06b0)(&local_168,lVar4,lVar3 + 1);
  uVar5 = 0;
  local_188 = local_158;
  uVar8 = local_158;
  if ((byte)local_168 != 0) {
    uVar8 = uVar5;
  }
  if ((long)uVar8 < 0) {
LAB_0015cbe4:
    (*(code *)PTR_handle_error_001e0330)
              (uVar5,uVar8,anon_2f99fdb6c6ea4837581494ade133b282_21_llvm_2385902288926793999);
LAB_0015cbf7:
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (uVar8 == 0) {
    local_130 = 1;
    local_138 = 0;
  }
  else {
    local_190 = local_160;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001e02b8)();
    uVar5 = 1;
    local_130 = (*(code *)PTR___rust_alloc_001e0290)(uVar8,1);
    local_138 = local_188;
    local_160 = local_190;
    if (local_130 == 0) goto LAB_0015cbe4;
  }
  if (((byte)local_168 & 1) != 0) {
    local_160 = 1;
  }
  (*(code *)PTR_memcpy_001e02f8)(local_130,local_160,uVar8);
  local_148 = local_198;
LAB_0015ccad:
  local_ca = 0;
  local_cc = (undefined1)*(uint *)(param_2 + 0xb);
  if (3 < *(uint *)(param_2 + 0xb)) {
    local_cc = 4;
  }
  uVar2 = 4;
  if (*(uint *)((long)param_2 + 0x5c) < 4) {
    uVar2 = *(uint *)((long)param_2 + 0x5c);
  }
  local_e8 = param_2[10];
  if (*(int *)(param_2 + 0xc) - 1U < 8) {
    local_ca = (undefined1)*(int *)(param_2 + 0xc);
  }
  local_d0 = *(undefined4 *)((long)param_2 + 100);
  local_120 = local_b8;
  uStack_118 = uStack_b0;
  local_110 = local_180;
  local_108 = param_2[6];
  uStack_100 = param_2[7];
  local_f8 = *(undefined4 *)(param_2 + 8);
  uStack_f4 = *(undefined4 *)((long)param_2 + 0x44);
  uStack_f0 = *(undefined4 *)(param_2 + 9);
  uStack_ec = *(undefined4 *)((long)param_2 + 0x4c);
  local_cb = (undefined1)uVar2;
  local_e0 = *(undefined4 *)(param_2 + 0xd);
  uStack_dc = *(undefined4 *)((long)param_2 + 0x6c);
  uStack_d8 = *(undefined4 *)(param_2 + 0xe);
  uStack_d4 = *(undefined4 *)((long)param_2 + 0x74);
  local_40 = local_178;
  local_38 = 0;
  local_70[0] = 0x8000000000000000;
  local_58 = 0x8000000000000000;
                    /* try { // try from 0015cdc1 to 0015cdd7 has its CatchHandler @ 0015ceef */
  local_168 = local_1b0;
  local_160 = local_1a8;
  local_158 = uVar7;
  local_150 = local_1b8;
  local_140 = uVar9;
  local_128 = uVar8;
  lVar4 = _<strategy_comm_mock::StrategyComm3_as_future_backtest_sdk::plugin::StrategyPlugin>::
          on_order(local_170,&local_168,local_70);
  if (lVar4 == 0) {
    uVar6 = 0;
  }
  else {
    local_c8 = &local_1a0;
    local_c0 = PTR_fmt_001e0680;
    local_a0 = &PTR_s__fb_plugin__on_order_error__001db138;
    local_98 = 2;
    local_80 = 0;
    local_90 = &local_c8;
    local_88 = 1;
                    /* try { // try from 0015ce45 to 0015ce52 has its CatchHandler @ 0015cedc */
    local_1a0 = lVar4;
    (*(code *)PTR__eprint_001e0688)(&local_a0);
                    /* try { // try from 0015ce53 to 0015ce5d has its CatchHandler @ 0015ceef */
    (*(code *)PTR_drop_001e0658)(&local_1a0);
    uVar6 = 0xffffffff;
  }
  core::ptr::drop_in_place<future_backtest_sdk::context::StrategyContext>(local_70);
  if (local_168 != 0) {
    (*(code *)PTR___rust_dealloc_001e0298)(local_160,local_168,1);
  }
  if (local_150 != 0) {
    (*(code *)PTR___rust_dealloc_001e0298)(local_148,local_150,1);
  }
  if (local_138 != 0) {
    (*(code *)PTR___rust_dealloc_001e0298)(local_130,local_138,1);
  }
  return uVar6;
}


