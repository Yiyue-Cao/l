// ELF address 0x00000000000b5330; future_backtest_sdk::abi::types::CStrategyPara::to_rust

/* future_backtest_sdk::abi::types::CStrategyPara::to_rust */

long * __rustcall
future_backtest_sdk::abi::types::CStrategyPara::to_rust(long *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long *local_58;
  undefined4 *local_50;
  int local_48 [2];
  undefined8 local_40;
  long local_38;
  
  local_70 = 0;
  local_68 = 8;
  local_60 = 0;
  uVar9 = *(ulong *)(param_2 + 10);
  if (uVar9 != 0) {
    if (0x100 < uVar9) {
      (*(code *)PTR_slice_end_index_len_fail_00203d30)
                (uVar9,0x100,&PTR_s_future_backtest_sdk_src_abi_type_00200980);
LAB_001b554a:
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    lVar7 = (long)param_2 + uVar9 + 0x30;
    puVar11 = param_2 + 0xc;
    local_50 = param_2;
    do {
      uVar8 = 0;
      do {
        cVar1 = *(char *)((long)puVar11 + uVar8);
        if (cVar1 == '\0') {
          uVar12 = ~uVar8 + uVar9;
          puVar10 = (undefined4 *)((long)puVar11 + uVar8 + 1);
          uVar9 = uVar8;
          if (uVar8 == 0) goto LAB_001b54ae;
          break;
        }
        lVar5 = uVar8 + 1;
        uVar8 = uVar8 + 1;
        puVar10 = puVar11;
        uVar12 = uVar9;
      } while ((long)puVar11 + lVar5 != lVar7);
                    /* try { // try from 001b53e9 to 001b53f1 has its CatchHandler @ 001b557e */
      (*(code *)PTR_from_utf8_00204208)(local_48,puVar11,uVar9);
      lVar7 = local_38;
      uVar6 = local_40;
      if (local_48[0] != 1) {
        if (local_38 < 0) {
          uVar13 = 0;
          lVar7 = local_78;
LAB_001b5522:
                    /* try { // try from 001b5522 to 001b5549 has its CatchHandler @ 001b5580 */
          local_78 = lVar7;
          (*(code *)PTR_handle_error_00203cd8)
                    (uVar13,local_78,
                     &PTR_anon_bf65de67c24155f465f4e3f0b4be96c2_2_llvm_4550705873496731735_00200968)
          ;
          goto LAB_001b554a;
        }
        local_58 = param_1;
        if (local_38 == 0) {
          local_78 = 1;
        }
        else {
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00203c98)();
          uVar13 = 1;
          local_78 = (*(code *)PTR___rust_alloc_00203c70)(lVar7,1);
          if (local_78 == 0) goto LAB_001b5522;
        }
        (*(code *)PTR_memcpy_00203cc8)(local_78,uVar6,lVar7);
        lVar5 = local_60;
        if (local_60 == local_70) {
                    /* try { // try from 001b5468 to 001b5479 has its CatchHandler @ 001b5552 */
          (*(code *)PTR_grow_one_00203d48)
                    (&local_70,&PTR_s_future_backtest_sdk_src_abi_type_00200998);
        }
        *(long *)(local_68 + lVar5 * 0x18) = lVar7;
        *(long *)(local_68 + 8 + lVar5 * 0x18) = local_78;
        *(long *)(local_68 + 0x10 + lVar5 * 0x18) = lVar7;
        local_60 = lVar5 + 1;
        param_2 = local_50;
        param_1 = local_58;
      }
      if (cVar1 != '\0') break;
LAB_001b54ae:
      uVar9 = uVar12;
      lVar7 = (long)puVar10 + uVar9;
      puVar11 = puVar10;
    } while (uVar9 != 0);
  }
  iVar3 = param_2[8];
  uVar2 = *(undefined1 *)(param_2 + 1);
  lVar7 = *(long *)(param_2 + 6);
  param_1[2] = local_60;
  *param_1 = local_70;
  param_1[1] = local_68;
  *(undefined4 *)(param_1 + 6) = *param_2;
  *(undefined1 *)((long)param_1 + 0x34) = uVar2;
  lVar5 = *(long *)(param_2 + 4);
  param_1[3] = *(long *)(param_2 + 2);
  param_1[4] = lVar5;
  param_1[5] = lVar7;
  *(bool *)((long)param_1 + 0x35) = iVar3 == 1;
  return param_1;
}


