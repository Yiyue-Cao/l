// ELF address 0x00000000000434c0; strategy_sm3_1::cancel_order_use_range

/* strategy_sm3_1::cancel_order_use_range */

long __rustcall
strategy_sm3_1::cancel_order_use_range
          (double param_1,double param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
          byte param_6,long *param_7)

{
  byte bVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  byte local_e1;
  double local_e0;
  long *local_d8;
  long *local_d0;
  long *local_c8;
  long local_c0;
  long *local_b8;
  long local_b0;
  double local_a8;
  double local_a0;
  long *local_98;
  long *local_90;
  long local_88;
  long *local_80;
  byte *local_78;
  double local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  long local_48;
  long *local_40;
  long local_38;
  
  local_e1 = param_6;
  local_e0 = param_2;
  local_a8 = param_1;
  lVar5 = cancel_side();
  if (lVar5 == 0) {
    local_58 = param_3;
    (*(code *)PTR_pending_orders_001ef770)(&local_48,param_3,param_4,param_5);
    plVar9 = local_40 + local_38 * 0xb;
    local_98 = local_40;
    local_90 = local_40;
    local_88 = local_48;
    local_78 = &local_e1;
    local_80 = plVar9;
    if (local_38 == 0) {
      lVar5 = 0;
      plVar12 = local_40;
      lVar13 = local_48;
      plVar7 = local_40;
LAB_001437fa:
      puVar3 = PTR___rust_dealloc_001ef6a0;
      if (plVar9 != plVar12) {
        uVar10 = (ulong)((long)plVar9 - (long)plVar12) / 0x58;
        plVar12 = plVar12 + 4;
        do {
          if (plVar12[-4] != 0) {
            (*(code *)puVar3)(plVar12[-3],plVar12[-4],1);
          }
          if (plVar12[-1] != 0) {
            (*(code *)puVar3)(*plVar12,plVar12[-1],1);
          }
          plVar12 = plVar12 + 0xb;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
    }
    else {
      local_c0 = local_48;
      local_70 = local_a8 + local_e0;
      local_a8 = local_a8 - local_e0;
      local_b8 = local_40;
      plVar7 = local_40;
      local_c8 = param_7;
      local_68 = param_4;
      local_60 = param_5;
      do {
        while( true ) {
          local_d8 = plVar7;
          plVar12 = local_40 + 0xb;
          lVar13 = *local_40;
          lVar2 = local_40[1];
          lVar11 = local_40[3];
          local_e0 = (double)local_40[4];
          bVar1 = *(byte *)(local_40 + 10);
          if (bVar1 == local_e1) break;
          if (lVar13 != 0) {
            (*(code *)PTR___rust_dealloc_001ef6a0)(lVar2,lVar13,1);
          }
          if (lVar11 != 0) {
            (*(code *)PTR___rust_dealloc_001ef6a0)(local_e0,lVar11,1);
          }
          plVar7 = local_d8;
          local_40 = plVar12;
          if (plVar12 == plVar9) goto LAB_001437b5;
        }
        plVar7 = (long *)local_40[2];
        local_a0 = (double)local_40[6];
        local_d8 = plVar7;
        local_d0 = plVar9;
        local_b0 = lVar11;
        if (local_c8[2] != 0) {
          lVar5 = local_c8[1];
          lVar6 = local_c8[2] * 0x18;
          lVar8 = 0;
          local_50 = lVar6;
          do {
            if ((*(long **)(lVar5 + 0x10 + lVar8) == plVar7) &&
               (iVar4 = (*(code *)PTR_bcmp_001ef778)(*(undefined8 *)(lVar5 + 8 + lVar8),lVar2),
               lVar6 = local_50, plVar7 = local_d8, lVar11 = local_b0, iVar4 == 0))
            goto LAB_001436e0;
            lVar8 = lVar8 + 0x18;
          } while (lVar6 != lVar8);
        }
        if ((bVar1 & 1) == 0) {
          if (local_a0 <= local_70) goto LAB_001436e0;
LAB_00143712:
                    /* try { // try from 00143712 to 00143735 has its CatchHandler @ 001438ce */
          lVar5 = (*(code *)PTR_cancel_order_001ef780)(local_58,local_68,local_60,lVar2,plVar7);
          plVar7 = local_c8;
          plVar9 = local_d0;
          if (lVar5 != 0) {
            local_90 = plVar12;
            if (lVar13 != 0) {
              (*(code *)PTR___rust_dealloc_001ef6a0)(lVar2,lVar13,1);
            }
            lVar13 = local_c0;
            plVar7 = local_b8;
            if (lVar11 != 0) {
              (*(code *)PTR___rust_dealloc_001ef6a0)(local_e0,lVar11,1);
              lVar13 = local_c0;
              plVar7 = local_b8;
            }
            goto LAB_001437fa;
          }
          lVar5 = local_c8[2];
          if (lVar5 == *local_c8) {
                    /* try { // try from 00143753 to 00143762 has its CatchHandler @ 001438cc */
            (*(code *)PTR_grow_one_001ef788)
                      (local_c8,&PTR_s_strategies_index_strategy_strate_001e9308);
          }
          lVar6 = plVar7[1];
          *(long *)(lVar6 + lVar5 * 0x18) = lVar13;
          *(long *)(lVar6 + 8 + lVar5 * 0x18) = lVar2;
          *(long **)(lVar6 + 0x10 + lVar5 * 0x18) = local_d8;
          plVar7[2] = lVar5 + 1;
          plVar9 = local_d0;
        }
        else {
          if (local_a0 < local_a8) goto LAB_00143712;
LAB_001436e0:
          plVar9 = local_d0;
          if (lVar13 != 0) {
            (*(code *)PTR___rust_dealloc_001ef6a0)(lVar2,lVar13,1);
          }
        }
        if (lVar11 != 0) {
          (*(code *)PTR___rust_dealloc_001ef6a0)(local_e0,lVar11,1);
        }
        plVar7 = plVar12;
        local_40 = plVar12;
      } while (plVar12 != plVar9);
LAB_001437b5:
      lVar5 = 0;
      local_90 = plVar7;
      lVar13 = local_c0;
      plVar7 = local_b8;
    }
    if (lVar13 != 0) {
      (*(code *)PTR___rust_dealloc_001ef6a0)(plVar7,lVar13 * 0x58,8);
    }
  }
  return lVar5;
}


