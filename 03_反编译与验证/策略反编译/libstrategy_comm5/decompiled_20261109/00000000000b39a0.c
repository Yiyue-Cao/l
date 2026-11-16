// ELF address 0x00000000000b39a0; future_backtest_sdk::context::StrategyContext::pending_orders

/* future_backtest_sdk::context::StrategyContext::pending_orders */

undefined8 __rustcall
future_backtest_sdk::context::StrategyContext::pending_orders
          (undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  code *pcVar2;
  undefined *puVar3;
  long *plVar4;
  int iVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined1 *puVar15;
  undefined1 auVar16 [16];
  ulong local_1118;
  long local_1110;
  ulong local_1108;
  undefined8 local_1100;
  undefined1 *local_10f8;
  long local_10f0;
  long local_10e8;
  long local_10e0;
  long local_10d8;
  undefined8 local_10d0;
  long local_10c8;
  ulong *local_10c0;
  long *local_10b8;
  undefined8 *local_10b0;
  undefined8 *local_10a8;
  undefined1 *local_10a0;
  undefined1 *local_1098;
  undefined1 *local_1090;
  undefined8 local_1088;
  ulong local_1080;
  undefined8 local_1078;
  undefined8 uStack_1070;
  undefined8 local_1068;
  undefined8 uStack_1060;
  undefined8 local_1058;
  undefined8 uStack_1050;
  undefined8 local_1048;
  undefined8 uStack_1040;
  undefined8 local_1030 [64];
  undefined1 local_e30 [512];
  undefined1 local_c30 [512];
  undefined1 local_a30 [512];
  undefined1 local_830 [2048];
  
  local_1030[0] = 0;
  local_1100 = param_1;
  local_10d0 = param_3;
  local_10c8 = param_4;
  auVar16 = (*(code *)PTR_to_cstring_00203da0)(param_3,param_4);
  puVar3 = PTR_memset_00203f68;
  local_10f0 = auVar16._8_8_;
  local_1048 = 0;
  uStack_1040 = 0;
  local_1058 = 0;
  uStack_1050 = 0;
  local_1068 = 0;
  uStack_1060 = 0;
  local_1078 = 0;
  uStack_1070 = 0;
  (*(code *)PTR_memset_00203f68)(local_1030,0,0x200);
  (*(code *)puVar3)(local_e30,0,0x200);
  (*(code *)puVar3)(local_c30,0,0x200);
  (*(code *)puVar3)(local_a30,0,0x200);
  puVar12 = local_830;
  (*(code *)puVar3)(puVar12,0,0x800);
  local_10f8 = auVar16._0_8_;
  iVar5 = (*(code *)PTR_fb_ctx_pending_orders_00204428)
                    (*(undefined8 *)(param_2 + 0x30),auVar16._0_8_,&local_1078,local_1030,local_e30,
                     local_c30,local_a30,puVar12,0x800,0x40);
  local_1118 = 0;
  local_1110 = 8;
  local_1108 = 0;
  puVar6 = &stack0xffffffffffffffd0;
  uVar11 = 0x800;
  do {
    uVar9 = 0;
    do {
      cVar1 = puVar12[uVar9];
      if (cVar1 == '\0') {
        uVar10 = ~uVar9 + uVar11;
        uVar11 = uVar9;
        puVar15 = puVar12 + uVar9 + 1;
        if (uVar9 == 0) goto LAB_001b3c1c;
        break;
      }
      lVar7 = uVar9 + 1;
      uVar9 = uVar9 + 1;
      uVar10 = uVar11;
      puVar15 = puVar12;
    } while (puVar12 + lVar7 != puVar6);
                    /* try { // try from 001b3b39 to 001b3b46 has its CatchHandler @ 001b3e3f */
    (*(code *)PTR_from_utf8_00204208)(&local_10c0,puVar12,uVar11);
    puVar14 = local_10b0;
    plVar4 = local_10b8;
    if ((int)local_10c0 != 1) {
      if ((long)local_10b0 < 0) {
        uVar13 = 0;
        goto LAB_001b3c46;
      }
      if (local_10b0 == (undefined8 *)0x0) {
        lVar7 = 1;
      }
      else {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00203c98)();
        uVar13 = 1;
        lVar7 = (*(code *)PTR___rust_alloc_00203c70)(puVar14,1);
        if (lVar7 == 0) goto LAB_001b3c46;
      }
      (*(code *)PTR_memcpy_00203cc8)(lVar7,plVar4,puVar14);
      uVar11 = local_1108;
      if (local_1108 == local_1118) {
                    /* try { // try from 001b3bdc to 001b3bed has its CatchHandler @ 001b3e22 */
        (*(code *)PTR_grow_one_00203d48)
                  (&local_1118,&PTR_s_future_backtest_sdk_src_context__002006c0);
      }
      *(undefined8 **)(local_1110 + uVar11 * 0x18) = puVar14;
      *(long *)(local_1110 + 8 + uVar11 * 0x18) = lVar7;
      *(undefined8 **)(local_1110 + 0x10 + uVar11 * 0x18) = puVar14;
      local_1108 = uVar11 + 1;
    }
    if ((cVar1 != '\0') || ((ulong)(long)iVar5 <= local_1108)) break;
LAB_001b3c1c:
    puVar12 = puVar15;
    puVar6 = puVar12 + uVar10;
    uVar11 = uVar10;
  } while (uVar10 != 0);
  lVar7 = local_10c8;
  if (-1 < local_10c8) {
    if (local_10c8 == 0) {
      lVar8 = 1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00203c98)();
      uVar13 = 1;
      lVar8 = (*(code *)PTR___rust_alloc_00203c70)(lVar7,1);
      if (lVar8 == 0) goto LAB_001b3c46;
    }
    uVar13 = local_1100;
    (*(code *)PTR_memcpy_00203cc8)(lVar8,local_10d0,lVar7);
    local_10e8 = lVar7;
    local_10d8 = lVar7;
    local_10c0 = &local_1118;
    local_10b8 = &local_10e8;
    local_10b0 = &local_1078;
    local_10a8 = local_1030;
    local_10a0 = local_e30;
    local_1098 = local_c30;
    local_1090 = local_a30;
    local_1088 = 0;
                    /* try { // try from 001b3d2c to 001b3d3f has its CatchHandler @ 001b3e03 */
    local_10e0 = lVar8;
    local_1080 = (long)iVar5;
    _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
              (uVar13,&local_10c0,
               &PTR_anon_f8fdc7844e54bdce0bd72b118f1760df_4_llvm_12406105305166711053_00200538);
    if (local_10e8 != 0) {
      (*(code *)PTR___rust_dealloc_00203c78)(local_10e0,local_10e8,1);
    }
    puVar3 = PTR___rust_dealloc_00203c78;
    if (local_1108 != 0) {
      puVar14 = (undefined8 *)(local_1110 + 8);
      uVar11 = local_1108;
      do {
        if (puVar14[-1] != 0) {
          (*(code *)puVar3)(*puVar14,puVar14[-1],1);
        }
        puVar14 = puVar14 + 3;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    if (local_1118 != 0) {
      (*(code *)PTR___rust_dealloc_00203c78)(local_1110,local_1118 * 0x18,8);
    }
    *local_10f8 = 0;
    if (local_10f0 != 0) {
      (*(code *)PTR___rust_dealloc_00203c78)(local_10f8,local_10f0,1);
    }
    return uVar13;
  }
  uVar13 = 0;
LAB_001b3c46:
                    /* try { // try from 001b3c46 to 001b3c55 has its CatchHandler @ 001b3e41 */
  (*(code *)PTR_handle_error_00203cd8)(uVar13);
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}


