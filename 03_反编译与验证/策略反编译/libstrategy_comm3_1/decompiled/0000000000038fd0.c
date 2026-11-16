// ELF address 0x0000000000038fd0; strategy_comm3_1::cancel_order_use_range

/* strategy_comm3_1::cancel_order_use_range */

long __rustcall
strategy_comm3_1::cancel_order_use_range
          (double param_1,double param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
          byte param_6,long *param_7)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  double dVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  byte local_10a;
  byte local_109;
  long local_108;
  long local_100;
  long *local_f8;
  long *local_f0;
  long *local_e8;
  long *local_e0;
  long local_d8;
  long *local_d0;
  long *local_c8;
  long *local_c0;
  long local_b8;
  long *local_b0;
  byte *local_a8;
  double local_a0;
  long local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  double local_78;
  double local_70;
  double local_68;
  long local_60;
  long *local_58;
  long local_50;
  long local_48;
  long *local_40;
  long local_38;
  
  local_109 = param_6 ^ 1;
  local_10a = param_6;
  local_a0 = param_2;
  local_90 = param_3;
  local_88 = param_4;
  local_80 = param_5;
  local_78 = param_1;
  (*(code *)PTR_pending_orders_001de1b0)(&local_48,param_3,param_4,param_5);
  local_e8 = local_40 + local_38 * 0xb;
  local_c8 = local_40;
  local_c0 = local_40;
  local_b8 = local_48;
  local_a8 = &local_109;
  local_f0 = param_7;
  plVar8 = local_c0;
  local_b0 = local_e8;
  if (local_38 != 0) {
    local_d8 = local_48;
    plVar9 = local_40 + local_38 * 0xb + -0xb;
    local_e0 = local_40;
    plVar8 = local_40;
    local_d0 = plVar9;
LAB_001390a0:
    uVar14 = (long)plVar9 - (long)plVar8;
    plVar12 = plVar8;
    do {
      lVar2 = *plVar12;
      lVar7 = plVar12[1];
      lVar13 = plVar12[3];
      local_108 = plVar12[4];
      if (*(byte *)(plVar12 + 10) == local_109) {
        if (lVar2 != -0x8000000000000000) goto LAB_00139130;
      }
      else {
        if (lVar2 != 0) {
          (*(code *)PTR___rust_dealloc_001de0f0)(lVar7,lVar2,1);
        }
        if (lVar13 != 0) {
          (*(code *)PTR___rust_dealloc_001de0f0)(local_108,lVar13,1);
        }
      }
      plVar12 = plVar12 + 0xb;
      uVar14 = uVar14 - 0x58;
      local_48 = local_d8;
      local_40 = local_e0;
      if (plVar12 == local_e8) break;
    } while( true );
  }
LAB_00139298:
  local_c0 = plVar8;
  plVar8 = local_f0;
  if (local_48 != 0) {
    (*(code *)PTR___rust_dealloc_001de0f0)(local_40,local_48 * 0x58,8);
  }
  (*(code *)PTR_pending_orders_001de1b0)(&local_60,local_90,local_88,local_80);
  local_f8 = local_58 + local_50 * 0xb;
  local_c8 = local_58;
  local_c0 = local_58;
  local_b8 = local_60;
  local_a8 = &local_10a;
  plVar9 = local_c0;
  local_b0 = local_f8;
  if (local_50 != 0) {
    local_d8 = local_60;
    local_68 = local_78 + local_a0;
    local_78 = local_78 - local_a0;
    local_d0 = local_58 + local_50 * 0xb + -0xb;
    local_e0 = local_58;
    plVar9 = local_58;
LAB_0013936a:
    uVar14 = (long)local_d0 - (long)plVar9;
    plVar12 = plVar9;
    do {
      lVar2 = *plVar12;
      lVar7 = plVar12[1];
      local_108 = plVar12[3];
      local_e8 = (long *)plVar12[4];
      bVar1 = *(byte *)(plVar12 + 10);
      if (bVar1 == local_10a) {
        if (lVar2 != -0x8000000000000000) goto LAB_00139400;
      }
      else {
        if (lVar2 != 0) {
          (*(code *)PTR___rust_dealloc_001de0f0)(lVar7,lVar2,1);
        }
        if (local_108 != 0) {
          (*(code *)PTR___rust_dealloc_001de0f0)(local_e8,local_108,1);
        }
      }
      plVar12 = plVar12 + 0xb;
      uVar14 = uVar14 - 0x58;
      local_60 = local_d8;
      local_58 = local_e0;
      if (plVar12 == local_f8) break;
    } while( true );
  }
LAB_001395ca:
  local_c0 = plVar9;
  if (local_60 != 0) {
    (*(code *)PTR___rust_dealloc_001de0f0)(local_58,local_60 * 0x58,8);
  }
  return 0;
LAB_00139130:
  plVar8 = (long *)plVar12[2];
  local_100 = lVar13;
  local_f8 = plVar8;
  if (local_f0[2] != 0) {
    lVar5 = local_f0[1];
    lVar4 = local_f0[2] * 0x18;
    lVar10 = 0;
    local_98 = lVar4;
    do {
      if (((long *)*(long *)(lVar5 + 0x10 + lVar10) == plVar8) &&
         (iVar3 = (*(code *)PTR_bcmp_001de1a8)(*(undefined8 *)(lVar5 + 8 + lVar10),lVar7),
         lVar13 = local_100, lVar4 = local_98, plVar8 = local_f8, iVar3 == 0)) {
        if (lVar2 != 0) {
          (*(code *)PTR___rust_dealloc_001de0f0)(lVar7,lVar2,1);
        }
        goto LAB_0013924e;
      }
      lVar10 = lVar10 + 0x18;
    } while (lVar4 != lVar10);
  }
                    /* try { // try from 001391e0 to 00139203 has its CatchHandler @ 001397cf */
  lVar5 = (*(code *)PTR_cancel_order_001de1b8)(local_90,local_88,local_80,lVar7,plVar8);
  plVar8 = local_f0;
  if (lVar5 != 0) {
    plVar8 = plVar12 + 0xb;
    local_f8 = (long *)lVar5;
    local_c0 = plVar8;
    if (lVar2 != 0) {
      (*(code *)PTR___rust_dealloc_001de0f0)(lVar7,lVar2,1);
    }
    if (lVar13 != 0) {
      (*(code *)PTR___rust_dealloc_001de0f0)(local_108,lVar13,1);
    }
    if (plVar8 != local_e8) {
      plVar12 = plVar12 + 0xf;
      uVar14 = uVar14 / 0x58;
      do {
        if (plVar12[-4] != 0) {
          (*(code *)PTR___rust_dealloc_001de0f0)(plVar12[-3],plVar12[-4],1);
        }
        if (plVar12[-1] != 0) {
          (*(code *)PTR___rust_dealloc_001de0f0)(*plVar12,plVar12[-1],1);
        }
        plVar12 = plVar12 + 0xb;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    if (local_d8 == 0) {
      return (long)local_f8;
    }
    (*(code *)PTR___rust_dealloc_001de0f0)(local_e0,local_d8 * 0x58,8);
    return (long)local_f8;
  }
  lVar5 = local_f0[2];
  if (lVar5 == *local_f0) {
                    /* try { // try from 0013921c to 0013922b has its CatchHandler @ 0013977a */
    (*(code *)PTR_grow_one_001de1c0)(local_f0,&PTR_s_strategies_comm_strategy_strateg_001d8210);
  }
  lVar4 = plVar8[1];
  *(long *)(lVar4 + lVar5 * 0x18) = lVar2;
  *(long *)(lVar4 + 8 + lVar5 * 0x18) = lVar7;
  *(long **)(lVar4 + 0x10 + lVar5 * 0x18) = local_f8;
  plVar8[2] = lVar5 + 1;
LAB_0013924e:
  plVar9 = local_d0;
  if (lVar13 != 0) {
    (*(code *)PTR___rust_dealloc_001de0f0)(local_108,lVar13,1);
  }
  plVar8 = plVar12 + 0xb;
  if (plVar8 == local_e8) goto code_r0x0013927d;
  goto LAB_001390a0;
code_r0x0013927d:
  local_48 = local_d8;
  local_40 = local_e0;
  plVar8 = plVar12 + 0xb;
  goto LAB_00139298;
LAB_00139400:
  lVar13 = plVar12[2];
  local_70 = (double)plVar12[6];
  local_100 = lVar7;
  if (plVar8[2] != 0) {
    lVar5 = local_f0[1];
    dVar6 = (double)(plVar8[2] * 0x18);
    dVar11 = 0.0;
    local_a0 = dVar6;
    local_98 = lVar5;
    do {
      if ((*(long *)(lVar5 + 0x10 + (long)dVar11) == lVar13) &&
         (iVar3 = (*(code *)PTR_bcmp_001de1a8)
                            (*(undefined8 *)(lVar5 + 8 + (long)dVar11),lVar7,lVar13),
         dVar6 = local_a0, lVar5 = local_98, lVar7 = local_100, iVar3 == 0)) {
        plVar8 = local_f0;
        if (lVar2 != 0) {
          (*(code *)PTR___rust_dealloc_001de0f0)(local_100,lVar2,1);
          plVar8 = local_f0;
        }
        goto joined_r0x001394a7;
      }
      dVar11 = (double)((long)dVar11 + 0x18);
    } while (dVar6 != dVar11);
  }
  plVar8 = local_f0;
  if ((bVar1 & 1) == 0) {
    if (local_68 < local_70) goto LAB_0013951a;
  }
  else if (local_70 < local_78) {
LAB_0013951a:
                    /* try { // try from 0013951a to 0013953d has its CatchHandler @ 0013977c */
    lVar7 = (*(code *)PTR_cancel_order_001de1b8)(local_90,local_88,local_80,lVar7,lVar13);
    if (lVar7 != 0) {
      plVar8 = plVar12 + 0xb;
      local_c0 = plVar8;
      if (lVar2 != 0) {
        (*(code *)PTR___rust_dealloc_001de0f0)(local_100,lVar2,1);
      }
      if (local_108 != 0) {
        (*(code *)PTR___rust_dealloc_001de0f0)(local_e8,local_108,1);
      }
      if (plVar8 != local_f8) {
        plVar12 = plVar12 + 0xf;
        uVar14 = uVar14 / 0x58;
        do {
          if (plVar12[-4] != 0) {
            (*(code *)PTR___rust_dealloc_001de0f0)(plVar12[-3],plVar12[-4],1);
          }
          if (plVar12[-1] != 0) {
            (*(code *)PTR___rust_dealloc_001de0f0)(*plVar12,plVar12[-1],1);
          }
          plVar12 = plVar12 + 0xb;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
      if (local_d8 == 0) {
        return lVar7;
      }
      (*(code *)PTR___rust_dealloc_001de0f0)(local_e0,local_d8 * 0x58,8);
      return lVar7;
    }
    lVar7 = plVar8[2];
    if (lVar7 == *plVar8) {
                    /* try { // try from 00139551 to 00139560 has its CatchHandler @ 00139778 */
      (*(code *)PTR_grow_one_001de1c0)(plVar8,&PTR_s_strategies_comm_strategy_strateg_001d8228);
    }
    lVar5 = plVar8[1];
    *(long *)(lVar5 + lVar7 * 0x18) = lVar2;
    *(long *)(lVar5 + 8 + lVar7 * 0x18) = local_100;
    *(long *)(lVar5 + 0x10 + lVar7 * 0x18) = lVar13;
    plVar8[2] = lVar7 + 1;
    goto joined_r0x001394a7;
  }
  if (lVar2 != 0) {
    (*(code *)PTR___rust_dealloc_001de0f0)(lVar7,lVar2,1);
  }
joined_r0x001394a7:
  if (local_108 != 0) {
    (*(code *)PTR___rust_dealloc_001de0f0)(local_e8,local_108,1);
  }
  plVar9 = plVar12 + 0xb;
  if (plVar9 == local_f8) goto code_r0x001395b4;
  goto LAB_0013936a;
code_r0x001395b4:
  local_60 = local_d8;
  local_58 = local_e0;
  plVar9 = plVar12 + 0xb;
  goto LAB_001395ca;
}


