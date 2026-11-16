// ELF address 0x00000000001a7750; fb_ctx_get_para

undefined8 fb_ctx_get_para(long param_1,undefined4 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  byte bVar4;
  undefined1 uVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  undefined *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong local_150;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  lVar6 = *(long *)(param_1 + 0xe8);
  bVar4 = *(byte *)(lVar6 + 0x2b8);
  local_150 = *(ulong *)(lVar6 + 0xbf0);
  if (local_150 == 0) {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_003f2658)();
    puVar11 = (undefined8 *)(*(code *)PTR___rust_alloc_003f2630)(0x10,8);
    if (puVar11 != (undefined8 *)0x0) {
      uVar2 = *(undefined8 *)(lVar6 + 0xd0);
      *puVar11 = *(undefined8 *)(lVar6 + 200);
      puVar11[1] = uVar2;
      puVar12 = puVar11 + 2;
      local_150 = 1;
      goto LAB_002a7943;
    }
                    /* try { // try from 002a7a69 to 002a7a8f has its CatchHandler @ 002a7a92 */
    (*(code *)PTR_handle_alloc_error_003f2828)(8,0x10);
  }
  else {
    lVar7 = *(long *)(lVar6 + 0xbe8);
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_003f2658)();
    puVar11 = (undefined8 *)(*(code *)PTR___rust_alloc_003f2630)(local_150 * 0x10,8);
    if (puVar11 != (undefined8 *)0x0) {
      if (local_150 == 1) {
        uVar15 = 0;
      }
      else {
        puVar12 = (undefined8 *)(lVar7 + 0x28);
        puVar14 = puVar11 + 3;
        uVar15 = 0;
        do {
          uVar2 = puVar12[-3];
          puVar14[-3] = puVar12[-4];
          puVar14[-2] = uVar2;
          uVar2 = *puVar12;
          puVar14[-1] = puVar12[-1];
          *puVar14 = uVar2;
          uVar15 = uVar15 + 2;
          puVar12 = puVar12 + 6;
          puVar14 = puVar14 + 4;
        } while ((local_150 & 0x7fffffffffffffe) != uVar15);
      }
      if ((local_150 & 1) != 0) {
        puVar12 = (undefined8 *)(lVar7 + 8 + uVar15 * 0x18);
        uVar2 = puVar12[1];
        puVar11[uVar15 * 2] = *puVar12;
        (puVar11 + uVar15 * 2)[1] = uVar2;
      }
      puVar12 = puVar11 + local_150 * 2;
LAB_002a7943:
      puVar10 = PTR_memcpy_003f2700;
      uStack_40 = 0;
      local_48 = 0;
      uStack_50 = 0;
      local_58 = 0;
      uStack_60 = 0;
      local_68 = 0;
      uStack_70 = 0;
      local_78 = 0;
      uStack_80 = 0;
      local_88 = 0;
      uStack_90 = 0;
      local_98 = 0;
      uStack_a0 = 0;
      local_a8 = 0;
      uStack_b0 = 0;
      local_b8 = 0;
      uStack_c0 = 0;
      local_c8 = 0;
      uStack_d0 = 0;
      local_d8 = 0;
      uStack_e0 = 0;
      local_e8 = 0;
      uStack_f0 = 0;
      local_f8 = 0;
      uStack_100 = 0;
      local_108 = 0;
      uStack_110 = 0;
      local_118 = 0;
      uStack_120 = 0;
      local_128 = 0;
      uStack_130 = 0;
      local_138 = 0;
      uVar15 = 0;
      puVar14 = puVar11;
      do {
        uVar13 = puVar14[1] + uVar15 + 1;
        if (0xff < uVar13) break;
        uVar1 = puVar14[1] + uVar15;
        if (uVar1 < uVar15) {
                    /* try { // try from 002a7a40 to 002a7a66 has its CatchHandler @ 002a7a98 */
          (*(code *)PTR_slice_index_order_fail_003f2a08)
                    (uVar15,uVar1,&PTR_s_future_backtest_src_ffi_rs_003e2940);
          goto LAB_002a7a90;
        }
        if (0x100 < uVar1) {
          (*(code *)PTR_slice_end_index_len_fail_003f28a8)
                    (uVar1,0x100,&PTR_s_future_backtest_src_ffi_rs_003e2940);
          goto LAB_002a7a90;
        }
        (*(code *)puVar10)((long)&local_138 + uVar15,*puVar14);
        *(undefined1 *)((long)&local_138 + uVar1) = 0;
        puVar14 = puVar14 + 2;
        uVar15 = uVar13;
      } while (puVar14 != puVar12);
      uVar5 = *(undefined1 *)(lVar6 + 0x680);
      uVar2 = *(undefined8 *)(lVar6 + 0x380);
      auVar3 = *(undefined1 (*) [16])(lVar6 + 0x370);
      *param_2 = *(undefined4 *)(lVar6 + 0x67c);
      *(undefined1 *)(param_2 + 1) = uVar5;
      auVar9._8_4_ = auVar3._0_4_;
      auVar9._0_8_ = auVar3._8_8_;
      auVar9._12_4_ = auVar3._4_4_;
      *(undefined1 (*) [16])(param_2 + 2) = auVar9;
      *(undefined8 *)(param_2 + 6) = uVar2;
      param_2[8] = (uint)(1 < bVar4);
      *(ulong *)(param_2 + 10) = uVar15;
      (*(code *)PTR_memcpy_003f2700)(param_2 + 0xc,&local_138,0x100);
      (*(code *)PTR___rust_dealloc_003f2638)(puVar11,local_150 << 4,8);
      return 0;
    }
    (*(code *)PTR_handle_error_003f2798)
              (8,local_150 * 0x10,anon_d0b8e27bea7bf57269a32e15b6abf5cf_102_llvm_1643563994444475245
              );
  }
LAB_002a7a90:
                    /* WARNING: Does not return */
  pcVar8 = (code *)invalidInstructionException();
  (*pcVar8)();
}


