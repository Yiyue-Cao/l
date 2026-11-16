// ELF address 0x00000000000458b0; strategy_sm1::cancel_side

/* strategy_sm1::cancel_side */

long __rustcall
strategy_sm1::cancel_side
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4,long *param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  char local_c1;
  long *local_c0;
  long local_b8;
  long *local_b0;
  long local_a8;
  long *local_a0;
  long local_98;
  long *local_90;
  long *local_88;
  long local_80;
  long *local_78;
  char *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  long local_48;
  long *local_40;
  long local_38;
  
  local_c1 = param_4;
  (*(code *)PTR_pending_orders_001d97d0)(&local_48,param_1,param_2,param_3);
  local_a0 = local_40 + local_38 * 0xb;
  local_90 = local_40;
  local_88 = local_40;
  local_80 = local_48;
  local_70 = &local_c1;
  local_78 = local_a0;
  if (local_38 == 0) {
    lVar7 = 0;
    plVar10 = local_40;
    lVar11 = local_48;
    plVar13 = local_40;
LAB_00145b46:
    puVar4 = PTR___rust_dealloc_001d96d0;
    if (local_a0 != plVar13) {
      uVar9 = (ulong)((long)local_a0 - (long)plVar13) / 0x58;
      plVar13 = plVar13 + 4;
      do {
        if (plVar13[-4] != 0) {
          (*(code *)puVar4)(plVar13[-3],plVar13[-4],1);
        }
        if (plVar13[-1] != 0) {
          (*(code *)puVar4)(*plVar13,plVar13[-1],1);
        }
        plVar13 = plVar13 + 0xb;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
  }
  else {
    local_b8 = local_48;
    local_b0 = local_40;
    local_c0 = param_5;
    local_68 = param_1;
    local_60 = param_2;
    local_58 = param_3;
    plVar12 = local_40;
    do {
      while( true ) {
        plVar13 = local_40 + 0xb;
        lVar11 = *local_40;
        lVar1 = local_40[1];
        lVar2 = local_40[3];
        lVar14 = local_40[4];
        if ((char)local_40[10] == local_c1) break;
        if (lVar11 != 0) {
          (*(code *)PTR___rust_dealloc_001d96d0)(lVar1,lVar11,1);
        }
        if (lVar2 != 0) {
          (*(code *)PTR___rust_dealloc_001d96d0)(lVar14,lVar2,1);
        }
        local_40 = plVar13;
        if (plVar13 == local_a0) goto LAB_00145b04;
      }
      lVar7 = local_40[2];
      local_a8 = lVar7;
      local_98 = lVar14;
      if (local_c0[2] != 0) {
        lVar3 = local_c0[1];
        lVar6 = local_c0[2] * 0x18;
        lVar8 = 0;
        local_50 = lVar6;
        do {
          if ((*(long *)(lVar3 + 0x10 + lVar8) == lVar7) &&
             (iVar5 = (*(code *)PTR_bcmp_001d97d8)(*(undefined8 *)(lVar3 + 8 + lVar8),lVar1),
             lVar14 = local_98, lVar6 = local_50, lVar7 = local_a8, iVar5 == 0)) {
            if (lVar11 != 0) {
              (*(code *)PTR___rust_dealloc_001d96d0)(lVar1,lVar11,1);
            }
            goto LAB_00145adb;
          }
          lVar8 = lVar8 + 0x18;
        } while (lVar6 != lVar8);
      }
                    /* try { // try from 00145a70 to 00145a8a has its CatchHandler @ 00145bfc */
      lVar7 = (*(code *)PTR_cancel_order_001d97e0)(local_68,local_60,local_58,lVar1,lVar7);
      if (lVar7 != 0) {
        local_88 = plVar13;
        if (lVar11 != 0) {
          (*(code *)PTR___rust_dealloc_001d96d0)(lVar1,lVar11,1);
        }
        plVar10 = local_b0;
        lVar11 = local_b8;
        if (lVar2 != 0) {
          (*(code *)PTR___rust_dealloc_001d96d0)(lVar14,lVar2,1);
          plVar10 = local_b0;
          lVar11 = local_b8;
        }
        goto LAB_00145b46;
      }
      lVar7 = local_c0[2];
      if (lVar7 == *local_c0) {
                    /* try { // try from 00145aa2 to 00145ab8 has its CatchHandler @ 00145bfa */
        (*(code *)PTR_grow_one_001d97e8)(local_c0,&PTR_s_strategies_index_strategy_strate_001d3890);
      }
      lVar3 = local_c0[1];
      *(long *)(lVar3 + lVar7 * 0x18) = lVar11;
      *(long *)(lVar3 + 8 + lVar7 * 0x18) = lVar1;
      *(long *)(lVar3 + 0x10 + lVar7 * 0x18) = local_a8;
      local_c0[2] = lVar7 + 1;
LAB_00145adb:
      if (lVar2 != 0) {
        (*(code *)PTR___rust_dealloc_001d96d0)(lVar14,lVar2,1);
      }
      plVar12 = plVar13;
      local_40 = plVar13;
    } while (plVar13 != local_a0);
LAB_00145b04:
    lVar7 = 0;
    plVar10 = local_b0;
    lVar11 = local_b8;
    local_88 = plVar12;
  }
  if (lVar11 != 0) {
    (*(code *)PTR___rust_dealloc_001d96d0)(plVar10,lVar11 * 0x58,8);
  }
  return lVar7;
}




// ELF address 0x00000000000457e0; strategy_sm1::default_pv1

/* strategy_sm1::default_pv1 */

undefined8 * __rustcall strategy_sm1::default_pv1(undefined8 *param_1)

{
  code *pcVar1;
  undefined2 *puVar2;
  undefined8 *puVar3;
  
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001d96f0)();
  puVar2 = (undefined2 *)(*(code *)PTR___rust_alloc_001d96c8)(3,1);
  if (puVar2 != (undefined2 *)0x0) {
    *(undefined1 *)(puVar2 + 1) = 0x31;
    *puVar2 = 0x5650;
    *param_1 = 3;
    param_1[1] = puVar2;
    param_1[2] = 3;
    return param_1;
  }
  (*(code *)PTR_handle_error_001d97c8)
            (1,3,anon_4c2171217e856843177caef2a996e723_2_llvm_251289040105417128);
  pcVar1 = (code *)swi(3);
  puVar3 = (undefined8 *)(*pcVar1)();
  return puVar3;
}




// ELF address 0x0000000000046630; strategy_sm1::apply_book_vol_cap

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_sm1::apply_book_vol_cap */

void __rustcall
strategy_sm1::apply_book_vol_cap
          (double param_1,double param_2,byte param_3,char param_4,long param_5,long param_6)

{
  double dVar1;
  bool bVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  if (1 < param_3 - 1) {
    if (param_3 != 0) {
      return;
    }
    dVar6 = DAT_00117978;
    if (*(char *)(param_6 + 0x149) != '\0') {
      lVar3 = 0x98;
      if (param_4 != '\0') {
        lVar3 = 0x48;
      }
      dVar6 = 0.0;
      if (0.0 < *(double *)(param_5 + lVar3)) {
        dVar6 = *(double *)(param_5 + 8 + lVar3) + 0.0;
        dVar5 = *(double *)(param_5 + 0x10 + lVar3);
        if (0.0 < dVar5) {
          bVar2 = param_2 <= dVar5;
          if (param_4 != '\0') {
            bVar2 = dVar5 <= param_2;
          }
          if (bVar2) {
            dVar6 = dVar6 + *(double *)(param_5 + 0x18 + lVar3);
            dVar5 = *(double *)(param_5 + 0x20 + lVar3);
            if (0.0 < dVar5) {
              bVar2 = param_2 <= dVar5;
              if (param_4 != '\0') {
                bVar2 = dVar5 <= param_2;
              }
              if (bVar2) {
                dVar6 = dVar6 + *(double *)(param_5 + 0x28 + lVar3);
                dVar5 = *(double *)(param_5 + 0x30 + lVar3);
                if (0.0 < dVar5) {
                  bVar2 = param_2 <= dVar5;
                  if (param_4 != '\0') {
                    bVar2 = dVar5 <= param_2;
                  }
                  if (bVar2) {
                    dVar6 = dVar6 + *(double *)(param_5 + 0x38 + lVar3);
                    dVar5 = *(double *)(param_5 + 0x40 + lVar3);
                    if (0.0 < dVar5) {
                      bVar2 = param_2 <= dVar5;
                      if (param_4 != '\0') {
                        bVar2 = dVar5 <= param_2;
                      }
                      if (bVar2) {
                        dVar6 = dVar6 + *(double *)(param_5 + 0x48 + lVar3);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    dVar5 = *(double *)(param_6 + 0x140);
    goto joined_r0x00146864;
  }
  if (*(char *)(param_6 + 0x149) == '\0') {
    return;
  }
  lVar3 = 0x48;
  if (param_4 != '\0') {
    lVar3 = 0x98;
  }
  dVar6 = 0.0;
  dVar5 = 0.0;
  if (0.0 < *(double *)(param_5 + lVar3)) {
    dVar5 = *(double *)(param_5 + 8 + lVar3) + 0.0;
    dVar4 = DAT_001179b8;
    if (*(double *)(param_5 + 0x10 + lVar3) <= 0.0) goto LAB_00146689;
LAB_00146811:
    dVar5 = dVar5 + *(double *)(param_5 + 0x18 + lVar3);
    dVar4 = dVar4 + DAT_001179b8;
    dVar1 = *(double *)(param_5 + 0x20 + lVar3);
  }
  else {
    dVar4 = 0.0;
    if (0.0 < *(double *)(param_5 + 0x10 + lVar3)) goto LAB_00146811;
LAB_00146689:
    dVar1 = *(double *)(param_5 + 0x20 + lVar3);
  }
  if (0.0 < dVar1) {
    dVar5 = dVar5 + *(double *)(param_5 + 0x28 + lVar3);
    dVar4 = dVar4 + DAT_001179b8;
  }
  if (0.0 < dVar4) {
    dVar6 = dVar5 / dVar4;
  }
  dVar5 = *(double *)(param_6 + 0x128);
joined_r0x00146864:
  if (0.0 < dVar5) {
    dVar4 = dVar5;
    if (dVar6 <= dVar5) {
      dVar4 = dVar6;
    }
    dVar6 = (double)(~-(ulong)NAN(dVar6) & (ulong)dVar4 | -(ulong)NAN(dVar6) & (ulong)dVar5);
  }
  if ((dVar6 == DAT_00117978) && (!NAN(dVar6) && !NAN(DAT_00117978))) {
    return;
  }
  dVar4 = (double)((ulong)param_1 & _DAT_001172d0);
  dVar5 = dVar6;
  if (dVar4 <= dVar6) {
    dVar5 = dVar4;
  }
  (*(code *)PTR_round_with_step_f64_001d97f8)
            ((double)(~-(ulong)NAN(dVar4) & (ulong)dVar5 | -(ulong)NAN(dVar4) & (ulong)dVar6) *
             (double)(~-(ulong)NAN(param_1) &
                      (_DAT_00117870 & (ulong)param_1 | SUB168(_s__00117790,0)) |
                     _s__00117a18 & -(ulong)NAN(param_1)),1);
  return;
}




// ELF address 0x00000000000460c0; strategy_sm1::live_pending_counts

/* strategy_sm1::live_pending_counts */

undefined1  [16] __rustcall
strategy_sm1::live_pending_counts
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  int iVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined1 auVar19 [16];
  long local_c0;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long *local_40;
  long local_38;
  
  (*(code *)PTR_pending_orders_001d97d0)(&local_48,param_1,param_2,param_3);
                    /* try { // try from 001460f7 to 0014610a has its CatchHandler @ 00146609 */
  (*(code *)PTR_cancel_pending_ids_001d97f0)(&local_60,param_1,param_2,param_3);
  lVar7 = local_50;
  lVar17 = local_58;
  puVar8 = PTR___rust_dealloc_001d96d0;
  plVar14 = local_40 + local_38 * 0xb;
  if (local_38 == 0) {
    local_c0 = 0;
    lVar12 = 0;
    plVar15 = local_40;
LAB_0014647a:
    puVar8 = PTR___rust_dealloc_001d96d0;
    if (plVar14 != plVar15) {
      uVar11 = (ulong)((long)plVar14 - (long)plVar15) / 0x58;
      plVar15 = plVar15 + 4;
      do {
        if (plVar15[-4] != 0) {
          (*(code *)puVar8)(plVar15[-3],plVar15[-4],1);
        }
        if (plVar15[-1] != 0) {
          (*(code *)puVar8)(*plVar15,plVar15[-1],1);
        }
        plVar15 = plVar15 + 0xb;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
  }
  else {
    if (param_5 != 0) {
      lVar6 = local_50 * 0x18;
      lVar12 = 0;
      local_c0 = 0;
      plVar10 = local_40;
LAB_001461b7:
      do {
        plVar15 = plVar10 + 0xb;
        lVar2 = *plVar10;
        if (lVar2 == -0x8000000000000000) goto LAB_0014647a;
        lVar3 = plVar10[1];
        lVar4 = plVar10[2];
        lVar5 = plVar10[3];
        lVar16 = plVar10[4];
        bVar1 = *(byte *)(plVar10 + 10);
        lVar13 = 0;
        do {
          plVar10 = plVar15;
          if ((*(long *)(param_4 + 0x10 + lVar13) == lVar4) &&
             (iVar9 = (*(code *)PTR_bcmp_001d97d8)
                                (*(undefined8 *)(param_4 + 8 + lVar13),lVar3,lVar4), iVar9 == 0))
          goto LAB_00146277;
          lVar13 = lVar13 + 0x18;
        } while (param_5 * 0x18 != lVar13);
        if (lVar7 != 0) {
          lVar13 = 0;
          do {
            if ((*(long *)(lVar17 + 0x10 + lVar13) == lVar4) &&
               (iVar9 = (*(code *)PTR_bcmp_001d97d8)
                                  (*(undefined8 *)(lVar17 + 8 + lVar13),lVar3,lVar4), iVar9 == 0))
            goto LAB_00146277;
            lVar13 = lVar13 + 0x18;
          } while (lVar6 != lVar13);
        }
        if (lVar2 != 0) {
          (*(code *)PTR___rust_dealloc_001d96d0)(lVar3,lVar2,1);
        }
        if (lVar5 != 0) {
          (*(code *)PTR___rust_dealloc_001d96d0)(lVar16,lVar5,1);
        }
        lVar12 = lVar12 + (ulong)bVar1;
        local_c0 = local_c0 + (ulong)(bVar1 ^ 1);
      } while (plVar15 != plVar14);
      goto LAB_00146576;
    }
    if (local_50 == 0) {
      lVar12 = 0;
      local_c0 = 0;
      plVar15 = local_40;
      do {
        plVar10 = plVar15 + 0xb;
        lVar17 = plVar15[3];
        lVar7 = plVar15[4];
        bVar1 = *(byte *)(plVar15 + 10);
        if (*plVar15 != 0) {
          (*(code *)puVar8)(plVar15[1],*plVar15,1);
        }
        if (lVar17 != 0) {
          (*(code *)puVar8)(lVar7,lVar17,1);
        }
        lVar12 = lVar12 + (ulong)bVar1;
        local_c0 = local_c0 + (ulong)(bVar1 ^ 1);
        plVar15 = plVar10;
      } while (plVar10 != plVar14);
    }
    else {
      lVar7 = local_50 * 0x18;
      lVar12 = 0;
      local_c0 = 0;
      plVar10 = local_40;
LAB_00146370:
      do {
        plVar15 = plVar10 + 0xb;
        lVar6 = *plVar10;
        if (lVar6 == -0x8000000000000000) goto LAB_0014647a;
        lVar2 = plVar10[1];
        lVar3 = plVar10[2];
        lVar4 = plVar10[3];
        lVar5 = plVar10[4];
        bVar1 = *(byte *)(plVar10 + 10);
        lVar16 = 0;
        do {
          plVar10 = plVar15;
          if ((*(long *)(lVar17 + 0x10 + lVar16) == lVar3) &&
             (iVar9 = (*(code *)PTR_bcmp_001d97d8)(*(undefined8 *)(lVar17 + 8 + lVar16),lVar2,lVar3)
             , iVar9 == 0)) {
            if (lVar6 != 0) {
              (*(code *)PTR___rust_dealloc_001d96d0)(lVar2,lVar6,1);
            }
            if (lVar4 != 0) {
              (*(code *)PTR___rust_dealloc_001d96d0)(lVar5,lVar4,1);
            }
            if (plVar15 != plVar14) goto LAB_00146370;
            goto LAB_0014647a;
          }
          lVar16 = lVar16 + 0x18;
        } while (lVar7 != lVar16);
        if (lVar6 != 0) {
          (*(code *)PTR___rust_dealloc_001d96d0)(lVar2,lVar6,1);
        }
        if (lVar4 != 0) {
          (*(code *)PTR___rust_dealloc_001d96d0)(lVar5,lVar4,1);
        }
        lVar12 = lVar12 + (ulong)bVar1;
        local_c0 = local_c0 + (ulong)(bVar1 ^ 1);
      } while (plVar15 != plVar14);
    }
  }
LAB_00146576:
  if (local_48 != 0) {
    (*(code *)PTR___rust_dealloc_001d96d0)(local_40,local_48 * 0x58,8);
  }
  puVar8 = PTR___rust_dealloc_001d96d0;
  if (local_50 != 0) {
    puVar18 = (undefined8 *)(local_58 + 8);
    lVar17 = local_50;
    do {
      if (puVar18[-1] != 0) {
        (*(code *)puVar8)(*puVar18,puVar18[-1],1);
      }
      puVar18 = puVar18 + 3;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
  if (local_60 != 0) {
    (*(code *)PTR___rust_dealloc_001d96d0)(local_58,local_60 * 0x18,8);
  }
  auVar19._8_8_ = local_c0;
  auVar19._0_8_ = lVar12;
  return auVar19;
LAB_00146277:
  if (lVar2 != 0) {
    (*(code *)PTR___rust_dealloc_001d96d0)(lVar3,lVar2,1);
  }
  if (lVar5 != 0) {
    (*(code *)PTR___rust_dealloc_001d96d0)(lVar16,lVar5,1);
  }
  if (plVar15 == plVar14) goto LAB_0014647a;
  goto LAB_001461b7;
}




// ELF address 0x0000000000045840; strategy_sm1::default_point_trigger

/* strategy_sm1::default_point_trigger */

undefined8 * __rustcall strategy_sm1::default_point_trigger(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001d96f0)();
  puVar2 = (undefined8 *)(*(code *)PTR___rust_alloc_001d96c8)(0xc,1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0x697254746e696f50;
    *(undefined4 *)(puVar2 + 1) = 0x72656767;
    *param_1 = 0xc;
    param_1[1] = puVar2;
    param_1[2] = 0xc;
    return param_1;
  }
  (*(code *)PTR_handle_error_001d97c8)
            (1,0xc,anon_4c2171217e856843177caef2a996e723_2_llvm_251289040105417128);
  pcVar1 = (code *)swi(3);
  puVar2 = (undefined8 *)(*pcVar1)();
  return puVar2;
}




// ELF address 0x0000000000045c50; strategy_sm1::cancel_order_use_range

/* strategy_sm1::cancel_order_use_range */

long __rustcall
strategy_sm1::cancel_order_use_range
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
    (*(code *)PTR_pending_orders_001d97d0)(&local_48,param_3,param_4,param_5);
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
LAB_00145f8a:
      puVar3 = PTR___rust_dealloc_001d96d0;
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
            (*(code *)PTR___rust_dealloc_001d96d0)(lVar2,lVar13,1);
          }
          if (lVar11 != 0) {
            (*(code *)PTR___rust_dealloc_001d96d0)(local_e0,lVar11,1);
          }
          plVar7 = local_d8;
          local_40 = plVar12;
          if (plVar12 == plVar9) goto LAB_00145f45;
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
               (iVar4 = (*(code *)PTR_bcmp_001d97d8)(*(undefined8 *)(lVar5 + 8 + lVar8),lVar2),
               lVar6 = local_50, plVar7 = local_d8, lVar11 = local_b0, iVar4 == 0))
            goto LAB_00145e70;
            lVar8 = lVar8 + 0x18;
          } while (lVar6 != lVar8);
        }
        if ((bVar1 & 1) == 0) {
          if (local_a0 <= local_70) goto LAB_00145e70;
LAB_00145ea2:
                    /* try { // try from 00145ea2 to 00145ec5 has its CatchHandler @ 0014605e */
          lVar5 = (*(code *)PTR_cancel_order_001d97e0)(local_58,local_68,local_60,lVar2,plVar7);
          plVar7 = local_c8;
          plVar9 = local_d0;
          if (lVar5 != 0) {
            local_90 = plVar12;
            if (lVar13 != 0) {
              (*(code *)PTR___rust_dealloc_001d96d0)(lVar2,lVar13,1);
            }
            lVar13 = local_c0;
            plVar7 = local_b8;
            if (lVar11 != 0) {
              (*(code *)PTR___rust_dealloc_001d96d0)(local_e0,lVar11,1);
              lVar13 = local_c0;
              plVar7 = local_b8;
            }
            goto LAB_00145f8a;
          }
          lVar5 = local_c8[2];
          if (lVar5 == *local_c8) {
                    /* try { // try from 00145ee3 to 00145ef2 has its CatchHandler @ 0014605c */
            (*(code *)PTR_grow_one_001d97e8)
                      (local_c8,&PTR_s_strategies_index_strategy_strate_001d38a8);
          }
          lVar6 = plVar7[1];
          *(long *)(lVar6 + lVar5 * 0x18) = lVar13;
          *(long *)(lVar6 + 8 + lVar5 * 0x18) = lVar2;
          *(long **)(lVar6 + 0x10 + lVar5 * 0x18) = local_d8;
          plVar7[2] = lVar5 + 1;
          plVar9 = local_d0;
        }
        else {
          if (local_a0 < local_a8) goto LAB_00145ea2;
LAB_00145e70:
          plVar9 = local_d0;
          if (lVar13 != 0) {
            (*(code *)PTR___rust_dealloc_001d96d0)(lVar2,lVar13,1);
          }
        }
        if (lVar11 != 0) {
          (*(code *)PTR___rust_dealloc_001d96d0)(local_e0,lVar11,1);
        }
        plVar7 = plVar12;
        local_40 = plVar12;
      } while (plVar12 != plVar9);
LAB_00145f45:
      lVar5 = 0;
      local_90 = plVar7;
      lVar13 = local_c0;
      plVar7 = local_b8;
    }
    if (lVar13 != 0) {
      (*(code *)PTR___rust_dealloc_001d96d0)(plVar7,lVar13 * 0x58,8);
    }
  }
  return lVar5;
}




// ELF address 0x00000000000841d0; strategy_signal_maker_common::signal_trigger::SignalTrigger::update_score

/* strategy_signal_maker_common::signal_trigger::SignalTrigger::update_score */

void __rustcall
strategy_signal_maker_common::signal_trigger::SignalTrigger::update_score
          (long param_1,long param_2,double param_3,double param_4,long *param_5,ulong param_6,
          long param_7)

{
  char *pcVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  char cVar5;
  undefined *puVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  undefined1 (*pauVar10) [16];
  long lVar11;
  ushort uVar12;
  long lVar13;
  long lVar14;
  undefined1 (*pauVar15) [16];
  byte bVar16;
  char cVar17;
  char cVar19;
  char cVar20;
  char cVar21;
  undefined1 auVar18 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  long lStack_38;
  
  param_5[6] = param_1;
  param_5[7] = param_2;
  puVar6 = PTR_update_001d9d08;
  lVar14 = param_5[3];
  if (lVar14 != 0) {
    pauVar15 = (undefined1 (*) [16])*param_5;
    pauVar10 = pauVar15 + 1;
    auVar18 = *pauVar15;
    uVar7 = ~(uint)(ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar18[0xf] >> 7) << 0xf);
    do {
      if ((short)uVar7 == 0) {
        do {
          auVar18 = *pauVar10;
          pauVar15 = pauVar15 + -0x98;
          pauVar10 = pauVar10 + 1;
          uVar7 = (uint)(ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar18[0xf] >> 7) << 0xf);
        } while (uVar7 == 0xffff);
        uVar7 = ~uVar7;
      }
      uVar9 = 0;
      for (uVar4 = uVar7; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
        uVar9 = uVar9 + 1;
      }
      uVar7 = uVar7 - 1 & uVar7;
      (*(code *)puVar6)(param_1,param_2,(long)pauVar15 + (ulong)uVar9 * -0x98 + -0x90);
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  if ((param_6 & 1) == 0) {
    if (param_5[3] != 0) {
      pauVar10 = (undefined1 (*) [16])*param_5;
      auVar18 = *pauVar10;
      uVar12 = (ushort)(SUB161(auVar18 >> 7,0) & 1) | (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
               (ushort)(byte)(auVar18[0xf] >> 7) << 0xf;
      pauVar15 = pauVar10;
      while (uVar12 == 0xffff) {
        pauVar15 = pauVar15 + 1;
        auVar18 = *pauVar15;
        pauVar10 = pauVar10 + -0x98;
        uVar12 = (ushort)(SUB161(auVar18 >> 7,0) & 1) | (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
                 (ushort)(byte)(auVar18[0xf] >> 7) << 0xf;
      }
      uVar7 = 0;
      for (uVar9 = ~(uint)uVar12; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
        uVar7 = uVar7 + 1;
      }
      lVar14 = (ulong)uVar7 * -0x98 + (long)pauVar10;
LAB_001843b2:
      dVar2 = *(double *)(lVar14 + -0x38);
      param_5[0xc] = (long)dVar2;
      dVar3 = *(double *)(lVar14 + -0x28);
      param_5[0xd] = (long)dVar3;
      param_5[0x10] = (long)(param_3 * dVar3 + (double)param_5[7]);
      param_5[0x11] = (long)((double)param_5[7] - param_4 * dVar3);
      param_5[0xe] = (long)(dVar2 + param_3 * dVar3);
      param_5[0xf] = (long)(dVar2 - param_4 * dVar3);
    }
  }
  else if (param_5[3] != 0) {
    lStack_38 = param_7;
    uVar8 = core::hash::BuildHasher::hash_one(param_5 + 4,&lStack_38);
    lVar14 = *param_5;
    bVar16 = (byte)(uVar8 >> 0x39);
    auVar18 = ZEXT216(CONCAT11(bVar16,bVar16));
    auVar18 = pshuflw(auVar18,auVar18,0);
    lVar11 = 0;
    while( true ) {
      uVar8 = uVar8 & param_5[1];
      pcVar1 = (char *)(lVar14 + uVar8);
      cVar5 = pcVar1[0xf];
      cVar17 = auVar18[0];
      auVar23[0] = -(*pcVar1 == cVar17);
      cVar19 = auVar18[1];
      auVar23[1] = -(pcVar1[1] == cVar19);
      cVar20 = auVar18[2];
      auVar23[2] = -(pcVar1[2] == cVar20);
      cVar21 = auVar18[3];
      auVar23[3] = -(pcVar1[3] == cVar21);
      auVar23[4] = -(pcVar1[4] == cVar17);
      auVar23[5] = -(pcVar1[5] == cVar19);
      auVar23[6] = -(pcVar1[6] == cVar20);
      auVar23[7] = -(pcVar1[7] == cVar21);
      auVar23[8] = -(pcVar1[8] == cVar17);
      auVar23[9] = -(pcVar1[9] == cVar19);
      auVar23[10] = -(pcVar1[10] == cVar20);
      auVar23[0xb] = -(pcVar1[0xb] == cVar21);
      auVar23[0xc] = -(pcVar1[0xc] == cVar17);
      auVar23[0xd] = -(pcVar1[0xd] == cVar19);
      auVar23[0xe] = -(pcVar1[0xe] == cVar20);
      auVar23[0xf] = -(cVar5 == cVar21);
      uVar12 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe | (ushort)(auVar23[0xf] >> 7) << 0xf;
      uVar7 = (uint)uVar12;
      while (uVar12 != 0) {
        uVar9 = 0;
        for (uVar4 = uVar7; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar9 = uVar9 + 1;
        }
        lVar13 = (uVar9 + uVar8 & param_5[1]) * -0x98;
        if (param_7 == *(long *)(lVar14 + -0x98 + lVar13)) {
          lVar14 = lVar14 + lVar13;
          goto LAB_001843b2;
        }
        uVar12 = (ushort)(uVar7 - 1) & (ushort)uVar7;
        uVar7 = CONCAT22((short)(uVar7 - 1 >> 0x10),uVar12);
      }
      auVar22[0] = -(*pcVar1 == -1);
      auVar22[1] = -(pcVar1[1] == -1);
      auVar22[2] = -(pcVar1[2] == -1);
      auVar22[3] = -(pcVar1[3] == -1);
      auVar22[4] = -(pcVar1[4] == -1);
      auVar22[5] = -(pcVar1[5] == -1);
      auVar22[6] = -(pcVar1[6] == -1);
      auVar22[7] = -(pcVar1[7] == -1);
      auVar22[8] = -(pcVar1[8] == -1);
      auVar22[9] = -(pcVar1[9] == -1);
      auVar22[10] = -(pcVar1[10] == -1);
      auVar22[0xb] = -(pcVar1[0xb] == -1);
      auVar22[0xc] = -(pcVar1[0xc] == -1);
      auVar22[0xd] = -(pcVar1[0xd] == -1);
      auVar22[0xe] = -(pcVar1[0xe] == -1);
      auVar22[0xf] = -(cVar5 == -1);
      if ((((((((((((((((auVar22 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                       (auVar22 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar22 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar22 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar22 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar22 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar22 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar22 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar22 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar22 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar22 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar22 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar22 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar22 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar22 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || cVar5 == -1) break;
      uVar8 = uVar8 + lVar11 + 0x10;
      lVar11 = lVar11 + 0x10;
    }
  }
  return;
}




// ELF address 0x0000000000085000; strategy_signal_maker_common::signal_trigger::SignalTrigger::windows_rsi_trigger

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_signal_maker_common::signal_trigger::SignalTrigger::windows_rsi_trigger */

undefined1 * __rustcall
strategy_signal_maker_common::signal_trigger::SignalTrigger::windows_rsi_trigger
          (undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined1 auVar1 [16];
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined1 uVar5;
  long lVar6;
  char cVar7;
  undefined1 (*pauVar8) [16];
  long lVar9;
  undefined1 (*pauVar10) [16];
  uint uVar11;
  ulong uVar12;
  double dVar13;
  undefined8 extraout_XMM0_Qa;
  long local_90;
  long local_88;
  long local_80;
  undefined8 local_78;
  undefined1 *local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  local_90 = 0;
  local_88 = 1;
  local_80 = 0;
  lVar9 = param_3[3];
  local_78 = param_1;
  local_70 = param_2;
  if (lVar9 != 0) {
    pauVar10 = (undefined1 (*) [16])*param_3;
    pauVar8 = pauVar10 + 1;
    auVar1 = *pauVar10;
    uVar11 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
    local_50 = (double)param_3[8];
    local_58 = (double)param_3[0xb];
    local_60 = (double)param_3[10];
    local_68 = (double)param_3[9];
    do {
      lVar4 = local_80;
      if ((short)uVar11 == 0) {
        do {
          auVar1 = *pauVar8;
          pauVar10 = pauVar10 + -0x98;
          pauVar8 = pauVar8 + 1;
          uVar11 = (uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                                  (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                                  (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                                  (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                                  (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                                  (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                                  (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                                  (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                                  (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                                  (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                                  (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                                  (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                                  (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
        } while (uVar11 == 0xffff);
        uVar11 = ~uVar11;
      }
      uVar2 = 0;
      for (uVar3 = uVar11; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
        uVar2 = uVar2 + 1;
      }
      lVar6 = (ulong)uVar2 * -0x98;
      dVar13 = (double)(*(ulong *)((long)pauVar10 + lVar6 + -0x18) & _DAT_001172d0);
      uVar12 = -(ulong)(DAT_001179b0 < dVar13);
      dVar13 = (double)(~uVar12 & _s__00117a38 |
                       (ulong)(DAT_001179f8 -
                              DAT_001179f8 /
                              (*(double *)((long)pauVar10 + lVar6 + -0x20) / dVar13 + DAT_001179b8))
                       & uVar12);
      *(double *)((long)pauVar10 + lVar6 + -0x10) = dVar13;
      if (local_50 <= dVar13) {
        cVar7 = '\0';
      }
      else {
        cVar7 = '\x03';
        if (dVar13 < local_58) {
          cVar7 = '\x02';
          if (local_60 < dVar13) {
            cVar7 = (local_68 < dVar13) * '\x03' + '\x01';
          }
        }
      }
      if (local_80 == local_90) {
                    /* try { // try from 001851a2 to 001851b3 has its CatchHandler @ 00185206 */
        (*(code *)PTR_grow_one_001d9d20)(&local_90,&PTR_s_strategies_index_strategy_strate_001d5c00)
        ;
      }
      uVar11 = uVar11 - 1 & uVar11;
      lVar9 = lVar9 + -1;
      *(char *)(local_88 + lVar4) = cVar7;
      local_80 = lVar4 + 1;
    } while (lVar9 != 0);
  }
  lStack_38 = local_80;
  lStack_48 = local_90;
  lStack_40 = local_88;
  uVar5 = (*(code *)PTR_enum_rate_counter_001d9d18)(local_78,&lStack_48);
  *local_70 = uVar5;
  *(undefined8 *)(local_70 + 8) = extraout_XMM0_Qa;
  return local_70;
}




// ELF address 0x00000000000845f0; strategy_signal_maker_common::signal_trigger::SignalTrigger::windows_std_trigger

/* strategy_signal_maker_common::signal_trigger::SignalTrigger::windows_std_trigger */

undefined1 * __rustcall
strategy_signal_maker_common::signal_trigger::SignalTrigger::windows_std_trigger
          (undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined1 auVar1 [16];
  long lVar2;
  undefined1 uVar3;
  undefined8 extraout_XMM0_Qa;
  long local_88;
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 (*local_48) [16];
  undefined1 (*local_40) [16];
  undefined1 *local_38;
  ushort local_30;
  undefined8 local_28;
  undefined8 *local_20;
  undefined1 *local_18;
  
  local_18 = (undefined1 *)&local_88;
  local_48 = (undefined1 (*) [16])*param_3;
  local_38 = *local_48 + param_3[1] + 1;
  auVar1 = *local_48;
  local_30 = ~((ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
  local_28 = param_3[3];
  local_88 = 0;
  local_40 = local_48 + 1;
                    /* try { // try from 0018464c to 00184661 has its CatchHandler @ 001846d8 */
  local_80 = param_1;
  local_20 = param_3;
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (&local_78,&local_48,anon_783cd9a4f7724ec660c77fda0343f220_3_llvm_17731430809145393098);
  lVar2 = local_88;
  if (local_88 == 0) {
    local_60 = local_78;
    local_58 = local_70;
    local_50 = local_68;
    uVar3 = (*(code *)PTR_enum_rate_counter_001d9d18)(local_80,&local_60);
    *(undefined8 *)(param_2 + 8) = extraout_XMM0_Qa;
  }
  else {
    if (local_78 != 0) {
      (*(code *)PTR___rust_dealloc_001d96d0)(local_70,local_78,1);
    }
    *(long *)(param_2 + 8) = lVar2;
    uVar3 = 5;
  }
  *param_2 = uVar3;
  return param_2;
}




// ELF address 0x00000000000844e0; strategy_signal_maker_common::signal_trigger::SignalTrigger::windows_mean_trigger

/* strategy_signal_maker_common::signal_trigger::SignalTrigger::windows_mean_trigger */

undefined1 * __rustcall
strategy_signal_maker_common::signal_trigger::SignalTrigger::windows_mean_trigger
          (undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined1 auVar1 [16];
  long lVar2;
  undefined1 uVar3;
  undefined8 extraout_XMM0_Qa;
  long local_88;
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 (*local_48) [16];
  undefined1 (*local_40) [16];
  undefined1 *local_38;
  ushort local_30;
  undefined8 local_28;
  undefined8 *local_20;
  undefined1 *local_18;
  
  local_18 = (undefined1 *)&local_88;
  local_48 = (undefined1 (*) [16])*param_3;
  local_38 = *local_48 + param_3[1] + 1;
  auVar1 = *local_48;
  local_30 = ~((ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
  local_28 = param_3[3];
  local_88 = 0;
  local_40 = local_48 + 1;
                    /* try { // try from 0018453c to 00184551 has its CatchHandler @ 001845c8 */
  local_80 = param_1;
  local_20 = param_3;
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (&local_78,&local_48,anon_783cd9a4f7724ec660c77fda0343f220_3_llvm_17731430809145393098);
  lVar2 = local_88;
  if (local_88 == 0) {
    local_60 = local_78;
    local_58 = local_70;
    local_50 = local_68;
    uVar3 = (*(code *)PTR_enum_rate_counter_001d9d18)(local_80,&local_60);
    *(undefined8 *)(param_2 + 8) = extraout_XMM0_Qa;
  }
  else {
    if (local_78 != 0) {
      (*(code *)PTR___rust_dealloc_001d96d0)(local_70,local_78,1);
    }
    *(long *)(param_2 + 8) = lVar2;
    uVar3 = 5;
  }
  *param_2 = uVar3;
  return param_2;
}




// ELF address 0x0000000000084db0; strategy_signal_maker_common::signal_trigger::SignalTrigger::windows_sharpe_trigger

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_signal_maker_common::signal_trigger::SignalTrigger::windows_sharpe_trigger */

undefined1 * __rustcall
strategy_signal_maker_common::signal_trigger::SignalTrigger::windows_sharpe_trigger
          (undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  double dVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined1 uVar5;
  long lVar6;
  long lVar7;
  char cVar8;
  undefined1 (*pauVar9) [16];
  long lVar10;
  undefined1 (*pauVar11) [16];
  uint uVar12;
  double dVar13;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar14 [16];
  double dVar15;
  long local_90;
  long local_88;
  long local_80;
  undefined8 local_78;
  undefined1 *local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  local_90 = 0;
  local_88 = 1;
  local_80 = 0;
  lVar10 = param_3[3];
  local_78 = param_1;
  local_70 = param_2;
  if (lVar10 != 0) {
    pauVar11 = (undefined1 (*) [16])*param_3;
    pauVar9 = pauVar11 + 1;
    auVar14 = *pauVar11;
    uVar12 = ~(uint)(ushort)((ushort)(SUB161(auVar14 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar14 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar14 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar14 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar14 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar14 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar14 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar14 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar14 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar14 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar14 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar14 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar14 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar14 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar14[0xf] >> 7) << 0xf);
    local_50 = (double)param_3[8];
    local_58 = (double)param_3[0xb];
    local_60 = (double)param_3[10];
    local_68 = (double)param_3[9];
    do {
      lVar4 = local_80;
      if ((short)uVar12 == 0) {
        do {
          auVar14 = *pauVar9;
          pauVar11 = pauVar11 + -0x98;
          pauVar9 = pauVar9 + 1;
          uVar12 = (uint)(ushort)((ushort)(SUB161(auVar14 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1 |
                                  (ushort)(SUB161(auVar14 >> 0x17,0) & 1) << 2 |
                                  (ushort)(SUB161(auVar14 >> 0x1f,0) & 1) << 3 |
                                  (ushort)(SUB161(auVar14 >> 0x27,0) & 1) << 4 |
                                  (ushort)(SUB161(auVar14 >> 0x2f,0) & 1) << 5 |
                                  (ushort)(SUB161(auVar14 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar14 >> 0x3f,0) & 1) << 7 |
                                  (ushort)(SUB161(auVar14 >> 0x47,0) & 1) << 8 |
                                  (ushort)(SUB161(auVar14 >> 0x4f,0) & 1) << 9 |
                                  (ushort)(SUB161(auVar14 >> 0x57,0) & 1) << 10 |
                                  (ushort)(SUB161(auVar14 >> 0x5f,0) & 1) << 0xb |
                                  (ushort)(SUB161(auVar14 >> 0x67,0) & 1) << 0xc |
                                  (ushort)(SUB161(auVar14 >> 0x6f,0) & 1) << 0xd |
                                  (ushort)(SUB161(auVar14 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar14[0xf] >> 7) << 0xf);
        } while (uVar12 == 0xffff);
        uVar12 = ~uVar12;
      }
      uVar2 = 0;
      for (uVar3 = uVar12; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
        uVar2 = uVar2 + 1;
      }
      lVar6 = (ulong)uVar2 * -0x98;
      lVar7 = *(long *)((long)pauVar11 + lVar6 + -0x40);
      lVar7 = lVar7 + (ulong)(lVar7 == 0);
      auVar14._8_4_ = (int)((ulong)lVar7 >> 0x20);
      auVar14._0_8_ = lVar7;
      auVar14._12_4_ = _UNK_001173f4;
      dVar1 = *(double *)((long)pauVar11 + lVar6 + -0x38);
      dVar15 = *(double *)((long)pauVar11 + lVar6 + -0x30) /
               ((auVar14._8_8_ - _UNK_001172c8) +
               ((double)CONCAT44(_DAT_001173f0,(int)lVar7) - _DAT_001172c0)) - dVar1 * dVar1;
      dVar13 = 0.0;
      if (dVar15 <= 0.0) {
        dVar15 = dVar13;
      }
      dVar15 = SQRT(dVar15);
      *(double *)((long)pauVar11 + lVar6 + -0x28) = dVar15;
      if (DAT_001179b0 < (double)((ulong)dVar15 & _DAT_001172d0)) {
        dVar13 = dVar1 / dVar15;
      }
      *(double *)((long)pauVar11 + lVar6 + -8) = dVar13;
      if (local_50 <= dVar13) {
        cVar8 = '\0';
      }
      else {
        cVar8 = '\x03';
        if (dVar13 < local_58) {
          cVar8 = '\x02';
          if (local_60 < dVar13) {
            cVar8 = (local_68 < dVar13) * '\x03' + '\x01';
          }
        }
      }
      if (local_80 == local_90) {
                    /* try { // try from 00184f72 to 00184f83 has its CatchHandler @ 00184fd6 */
        (*(code *)PTR_grow_one_001d9d20)(&local_90,&PTR_s_strategies_index_strategy_strate_001d5be8)
        ;
      }
      uVar12 = uVar12 - 1 & uVar12;
      lVar10 = lVar10 + -1;
      *(char *)(local_88 + lVar4) = cVar8;
      local_80 = lVar4 + 1;
    } while (lVar10 != 0);
  }
  lStack_38 = local_80;
  lStack_48 = local_90;
  lStack_40 = local_88;
  uVar5 = (*(code *)PTR_enum_rate_counter_001d9d18)(local_78,&lStack_48);
  *local_70 = uVar5;
  *(undefined8 *)(local_70 + 8) = extraout_XMM0_Qa;
  return local_70;
}




// ELF address 0x0000000000084700; strategy_signal_maker_common::signal_trigger::SignalTrigger::windows_quantile_trigger

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_signal_maker_common::signal_trigger::SignalTrigger::windows_quantile_trigger */

undefined1 * __rustcall
strategy_signal_maker_common::signal_trigger::SignalTrigger::windows_quantile_trigger
          (double param_1,undefined8 param_2,undefined1 *param_3,undefined8 *param_4)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  undefined1 uVar7;
  ulong uVar8;
  long lVar9;
  double *pdVar10;
  ulong uVar11;
  undefined8 uVar12;
  char cVar13;
  undefined1 (*pauVar14) [16];
  uint uVar15;
  undefined1 (*pauVar16) [16];
  char cVar17;
  long lVar18;
  ulong uVar19;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar23;
  ulong local_f0;
  long local_e8;
  ulong local_e0;
  ulong uStack_d8;
  long lStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double dStack_68;
  long local_60;
  double local_58;
  undefined8 local_50;
  double local_48;
  
  local_f0 = 0;
  local_e8 = 1;
  local_e0 = 0;
  pauVar16 = (undefined1 (*) [16])*param_4;
  lVar9 = param_4[3];
  auVar22 = *pauVar16;
  uVar1 = (ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
          (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
          (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
          (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
          (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
          (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
          (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
          (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
          (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
          (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
          (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
          (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
          (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar22[0xf] >> 7) << 0xf;
  pauVar14 = pauVar16 + 1;
  local_50 = param_2;
  if ((param_1 < 0.0) || (DAT_001179b8 < param_1)) {
    if (lVar9 != 0) {
      while (uVar1 == 0xffff) {
        auVar22 = *pauVar14;
        pauVar14 = pauVar14 + 1;
        uVar1 = (ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar22[0xf] >> 7) << 0xf;
      }
LAB_00184cff:
                    /* try { // try from 00184cff to 00184d0f has its CatchHandler @ 00184d7b */
      uVar12 = anyhow::error::_<impl_anyhow::Error>::msg("quantile not found",0x12);
      *(undefined8 *)(param_3 + 8) = uVar12;
      *param_3 = 5;
      if (local_f0 == 0) {
        return param_3;
      }
      (*(code *)PTR___rust_dealloc_001d96d0)(local_e8,local_f0,1);
      return param_3;
    }
  }
  else {
    uVar15 = ~(uint)uVar1;
    dVar23 = DAT_001179b8 - param_1;
    local_48 = param_1;
    if ((dVar23 < 0.0) || (DAT_001179b8 < dVar23)) {
      if (lVar9 != 0) {
        if (uVar1 == 0xffff) {
          do {
            auVar22 = *pauVar14;
            pauVar16 = pauVar16 + -0x98;
            pauVar14 = pauVar14 + 1;
            uVar15 = (uint)(ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar22[0xf] >> 7) << 0xf);
          } while (uVar15 == 0xffff);
          uVar15 = ~uVar15;
        }
        uVar2 = 0;
        for (; (uVar15 & 1) == 0; uVar15 = uVar15 >> 1 | 0x80000000) {
          uVar2 = uVar2 + 1;
        }
        lVar9 = (ulong)uVar2 * -0x98;
        uVar19 = *(ulong *)((long)pauVar16 + lVar9 + -0x60);
        if (uVar19 != 0) {
          auVar22._8_4_ = (int)(uVar19 >> 0x20);
          auVar22._0_8_ = uVar19;
          auVar22._12_4_ = _UNK_001173f4;
          param_1 = param_1 * ((auVar22._8_8_ - _UNK_001172c8) +
                              ((double)CONCAT44(_DAT_001173f0,(int)uVar19) - _DAT_001172c0));
          uVar8 = 0;
          if (0.0 <= param_1) {
            uVar8 = (long)(param_1 - _DAT_001179d8) & (long)param_1 >> 0x3f | (long)param_1;
          }
          uVar11 = 0xffffffffffffffff;
          if (param_1 <= _DAT_00117948) {
            uVar11 = uVar8;
          }
          uStack_c8 = *(long *)((long)pauVar16 + lVar9 + -0x70);
          uStack_c0 = *(undefined8 *)((long)pauVar16 + lVar9 + -0x68);
          uStack_d8 = (ulong)(uStack_c8 != 0);
          uStack_98 = uVar19;
          if (uStack_c8 == 0) {
            uStack_98 = 0;
          }
          lStack_d0 = 0;
          uStack_b0 = 0;
          uStack_b8 = uStack_d8;
          lStack_a8 = uStack_c8;
          uStack_a0 = uStack_c0;
          if (uVar11 != 0) {
            if (uVar11 < uVar19) {
              uVar19 = uVar11;
            }
            do {
                    /* try { // try from 00184ce0 to 00184ce7 has its CatchHandler @ 00184d7d */
              lVar9 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                      ::next(&uStack_d8);
              if (lVar9 == 0) goto LAB_00184cff;
              uVar19 = uVar19 - 1;
            } while (uVar19 != 0);
          }
                    /* try { // try from 00184cf2 to 00184cfb has its CatchHandler @ 00184d77 */
          _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>::
          next(&uStack_d8);
        }
        goto LAB_00184cff;
      }
    }
    else {
      local_58 = dVar23;
      if (lVar9 != 0) {
        local_70 = (double)param_4[8];
        local_78 = (double)param_4[0xb];
        local_80 = (double)param_4[10];
        local_88 = (double)param_4[9];
        do {
          if ((short)uVar15 == 0) {
            do {
              auVar22 = *pauVar14;
              pauVar16 = pauVar16 + -0x98;
              pauVar14 = pauVar14 + 1;
              uVar15 = (uint)(ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
                                      (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                                      (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                                      (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                                      (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                                      (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                                      (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                                      (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                                      (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                                      (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                                      (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                                      (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                                      (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                                      (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                                      (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                                     (ushort)(byte)(auVar22[0xf] >> 7) << 0xf);
            } while (uVar15 == 0xffff);
            uVar15 = ~uVar15;
          }
          uVar2 = 0;
          for (uVar3 = uVar15; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
            uVar2 = uVar2 + 1;
          }
          lVar18 = (ulong)uVar2 * -0x98;
          uVar19 = *(ulong *)((long)pauVar16 + lVar18 + -0x60);
          local_60 = lVar9;
          if (uVar19 == 0) goto LAB_00184cff;
          auVar20._8_4_ = (int)(uVar19 >> 0x20);
          auVar20._0_8_ = uVar19;
          auVar20._12_4_ = _UNK_001173f4;
          dVar23 = ((auVar20._8_8_ - _UNK_001172c8) +
                   ((double)CONCAT44(_DAT_001173f0,(int)uVar19) - _DAT_001172c0)) * local_48;
          uVar8 = (long)(dVar23 - _DAT_001179d8) & (long)dVar23 >> 0x3f | (long)dVar23;
          if (dVar23 < _DAT_001179d0) {
            uVar8 = 0;
          }
          if (_DAT_00117948 < dVar23) {
            uVar8 = 0xffffffffffffffff;
          }
          uStack_c8 = *(long *)((long)pauVar16 + lVar18 + -0x70);
          uStack_c0 = *(undefined8 *)((long)pauVar16 + lVar18 + -0x68);
          uStack_d8 = (ulong)(uStack_c8 != 0);
          uStack_98 = uVar19;
          if (uStack_c8 == 0) {
            uStack_98 = 0;
          }
          lStack_d0 = 0;
          uStack_b0 = 0;
          uStack_b8 = uStack_d8;
          lStack_a8 = uStack_c8;
          uStack_a0 = uStack_c0;
          if (uVar8 != 0) {
            if (uVar8 < uVar19) {
              uVar19 = uVar8;
            }
            do {
                    /* try { // try from 00184900 to 00184909 has its CatchHandler @ 00184d81 */
              lVar9 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                      ::next(&uStack_d8);
              if (lVar9 == 0) goto LAB_00184cff;
              uVar19 = uVar19 - 1;
            } while (uVar19 != 0);
          }
                    /* try { // try from 00184918 to 00184921 has its CatchHandler @ 00184d79 */
          pdVar10 = (double *)
                    _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                    ::next(&uStack_d8);
          if ((pdVar10 == (double *)0x0) ||
             (uVar19 = *(ulong *)((long)pauVar16 + lVar18 + -0x60), uVar19 == 0)) goto LAB_00184cff;
          auVar21._8_4_ = (int)(uVar19 >> 0x20);
          auVar21._0_8_ = uVar19;
          auVar21._12_4_ = _UNK_001173f4;
          dVar23 = ((auVar21._8_8_ - _UNK_001172c8) +
                   ((double)CONCAT44(_DAT_001173f0,(int)uVar19) - _DAT_001172c0)) * local_58;
          uVar8 = 0;
          if (_DAT_001179d0 <= dVar23) {
            uVar8 = (long)(dVar23 - _DAT_001179d8) & (long)dVar23 >> 0x3f | (long)dVar23;
          }
          if (_DAT_00117948 < dVar23) {
            uVar8 = 0xffffffffffffffff;
          }
          dStack_68 = *pdVar10;
          uStack_c8 = *(long *)((long)pauVar16 + lVar18 + -0x70);
          uStack_c0 = *(undefined8 *)((long)pauVar16 + lVar18 + -0x68);
          uStack_d8 = (ulong)(uStack_c8 != 0);
          uStack_98 = uVar19;
          if (uStack_c8 == 0) {
            uStack_98 = 0;
          }
          lStack_d0 = 0;
          uStack_b0 = 0;
          uStack_b8 = uStack_d8;
          lStack_a8 = uStack_c8;
          uStack_a0 = uStack_c0;
          if (uVar8 != 0) {
            if (uVar8 < uVar19) {
              uVar19 = uVar8;
            }
            do {
                    /* try { // try from 00184a10 to 00184a19 has its CatchHandler @ 00184d7f */
              lVar9 = _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                      ::next(&uStack_d8);
              if (lVar9 == 0) goto LAB_00184cff;
              uVar19 = uVar19 - 1;
            } while (uVar19 != 0);
          }
                    /* try { // try from 00184a28 to 00184b3e has its CatchHandler @ 00184d79 */
          pdVar10 = (double *)
                    _<alloc::collections::btree::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>
                    ::next(&uStack_d8);
          uVar19 = local_e0;
          if (pdVar10 == (double *)0x0) goto LAB_00184cff;
          bVar5 = true;
          if (local_70 <= dStack_68) {
            bVar4 = true;
            cVar13 = '\0';
          }
          else {
            cVar13 = '\x03';
            bVar4 = true;
            if ((dStack_68 < local_78) && (cVar13 = '\x02', local_80 < dStack_68)) {
              bVar4 = local_88 >= dStack_68;
              cVar13 = (local_88 < dStack_68) * '\x03' + '\x01';
            }
          }
          dVar23 = *pdVar10;
          if (local_70 <= dVar23) {
            cVar6 = '\0';
          }
          else {
            cVar6 = '\x03';
            if ((dVar23 < local_78) && (cVar6 = '\x02', local_80 < dVar23)) {
              bVar5 = local_88 >= dVar23;
              cVar6 = (local_88 < dVar23) * '\x03' + '\x01';
            }
          }
          cVar17 = '\x04';
          if (bVar4) {
            if (!bVar5) {
              cVar17 = '\x04' - (cVar13 == '\x03');
              if (cVar13 == '\0') {
                cVar17 = '\0';
              }
            }
          }
          else if ((bVar5) && (cVar17 = (cVar6 != '\x02') * '\x02' + '\x02', cVar6 == '\x01')) {
            cVar17 = '\x01';
          }
          if (local_e0 == local_f0) {
            (*(code *)PTR_grow_one_001d9d20)
                      (&local_f0,&PTR_s_strategies_index_strategy_strate_001d5bd0);
          }
          uVar15 = uVar15 - 1 & uVar15;
          lVar9 = local_60 + -1;
          *(char *)(local_e8 + uVar19) = cVar17;
          local_e0 = uVar19 + 1;
        } while (lVar9 != 0);
      }
    }
  }
  uStack_c8 = local_e0;
  uStack_d8 = local_f0;
  lStack_d0 = local_e8;
  uVar7 = (*(code *)PTR_enum_rate_counter_001d9d18)(local_50,&uStack_d8);
  *param_3 = uVar7;
  *(undefined8 *)(param_3 + 8) = extraout_XMM0_Qa;
  return param_3;
}




// ELF address 0x0000000000084420; strategy_signal_maker_common::signal_trigger::SignalTrigger::point_signal_trigger_pv3_spread

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_signal_maker_common::signal_trigger::SignalTrigger::point_signal_trigger_pv3_spread */

void __rustcall
strategy_signal_maker_common::signal_trigger::SignalTrigger::point_signal_trigger_pv3_spread
          (double param_1,ulong param_2,double param_3,undefined1 *param_4,long param_5)

{
  undefined1 uVar1;
  double dVar2;
  
  param_1 = (double)(param_2 & _DAT_001172d0) * param_1;
  dVar2 = param_1;
  if (param_3 <= param_1) {
    dVar2 = param_3;
  }
  dVar2 = (double)(~-(ulong)NAN(param_3) & (ulong)dVar2 | -(ulong)NAN(param_3) & (ulong)param_1);
  if (*(double *)(param_5 + 0x38) <= 0.0) {
    dVar2 = *(double *)(param_5 + 0x80) - dVar2;
    if (0.0 <= dVar2) {
      dVar2 = 0.0;
    }
    if (dVar2 < *(double *)(param_5 + 0x40)) goto LAB_0018449c;
  }
  else {
    dVar2 = dVar2 + *(double *)(param_5 + 0x88);
    if (dVar2 <= 0.0) {
      dVar2 = 0.0;
    }
    if (dVar2 < *(double *)(param_5 + 0x40)) {
LAB_0018449c:
      uVar1 = 3;
      if (((dVar2 < *(double *)(param_5 + 0x58)) && (uVar1 = 2, *(double *)(param_5 + 0x50) < dVar2)
          ) && (uVar1 = 4, dVar2 <= *(double *)(param_5 + 0x48))) {
        *param_4 = 1;
        *(undefined8 *)(param_4 + 8) = 0x3ff0000000000000;
        return;
      }
      goto LAB_00184474;
    }
  }
  uVar1 = 0;
LAB_00184474:
  *param_4 = uVar1;
  *(undefined8 *)(param_4 + 8) = 0x3ff0000000000000;
  return;
}




// ELF address 0x0000000000084100; strategy_signal_maker_common::signal_trigger::SignalTrigger::new

/* strategy_signal_maker_common::signal_trigger::SignalTrigger::new */

undefined4 * __rustcall
strategy_signal_maker_common::signal_trigger::SignalTrigger::new
          (undefined4 *param_1,undefined8 *param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  lVar1 = param_3[1];
                    /* try { // try from 00184120 to 0018412c has its CatchHandler @ 001841a2 */
  _<std::collections::hash::map::HashMap<K,V,S>as_core::iter::traits::collect::FromIterator<(K,V)>>
  ::from_iter(&local_50,lVar1,lVar1 + param_3[2] * 8);
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *(undefined8 *)(param_1 + 0x10) = *param_2;
  *(undefined8 *)(param_1 + 0x12) = uVar2;
  *(undefined8 *)(param_1 + 0x14) = uVar3;
  *(undefined8 *)(param_1 + 0x16) = uVar4;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  param_1[8] = local_30;
  param_1[9] = uStack_2c;
  param_1[10] = uStack_28;
  param_1[0xb] = uStack_24;
  param_1[4] = local_40;
  param_1[5] = uStack_3c;
  param_1[6] = uStack_38;
  param_1[7] = uStack_34;
  *param_1 = local_50;
  param_1[1] = uStack_4c;
  param_1[2] = uStack_48;
  param_1[3] = uStack_44;
  if (*param_3 != 0) {
    (*(code *)PTR___rust_dealloc_001d96d0)(lVar1,*param_3 << 3,8);
  }
  return param_1;
}




// ELF address 0x00000000000857b0; strategy_signal_maker_common::signal_trigger::dynamic_threshold

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_signal_maker_common::signal_trigger::dynamic_threshold */

void __rustcall
strategy_signal_maker_common::signal_trigger::dynamic_threshold
          (double param_1,double param_2,double param_3,double param_4,double *param_5,
          double *param_6)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  
  if ((((0.0 <= param_2) && (0.0 <= param_3)) && (param_2 <= param_1)) &&
     (_DAT_00117a08 < (double)(_DAT_001172d0 & (ulong)param_4))) {
    dVar1 = param_3 - param_2;
    if (param_3 - param_2 <= DAT_001179b0) {
      dVar1 = DAT_001179b0;
    }
    dVar1 = (param_1 - param_2) / dVar1;
    if (DAT_001179b8 <= dVar1) {
      dVar1 = DAT_001179b8;
    }
    dVar4 = (double)((ulong)(param_4 * dVar1) & _DAT_001172d0);
    dVar1 = param_6[3];
    *param_5 = *param_6 - dVar4;
    auVar2._8_4_ = SUB84(dVar4 + param_6[2],0);
    auVar2._0_8_ = dVar4 + param_6[1];
    auVar2._12_4_ = (int)((ulong)(dVar4 + param_6[2]) >> 0x20);
    *(undefined1 (*) [16])(param_5 + 1) = auVar2;
    param_5[3] = dVar1 - dVar4;
    return;
  }
  dVar1 = *param_6;
  dVar4 = param_6[1];
  dVar3 = param_6[3];
  param_5[2] = param_6[2];
  param_5[3] = dVar3;
  *param_5 = dVar1;
  param_5[1] = dVar4;
  return;
}




// ELF address 0x0000000000085230; strategy_signal_maker_common::signal_trigger::enum_rate_counter

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_signal_maker_common::signal_trigger::enum_rate_counter */

ulong __rustcall
strategy_signal_maker_common::signal_trigger::enum_rate_counter(double param_1,long *param_2)

{
  char *pcVar1;
  char *pcVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  char cVar7;
  undefined4 *puVar8;
  undefined1 (*pauVar9) [16];
  undefined1 *puVar10;
  undefined1 (*pauVar11) [16];
  uint uVar12;
  undefined8 uVar13;
  char cVar14;
  ulong uVar15;
  undefined8 unaff_RBP;
  ulong uVar16;
  undefined1 *puVar17;
  long lVar18;
  ushort uVar19;
  ulong uVar20;
  undefined1 (*pauVar21) [16];
  ulong uVar22;
  uint uVar23;
  char *pcVar24;
  byte bVar25;
  ulong uVar26;
  char cVar27;
  byte bVar28;
  char cVar30;
  char cVar31;
  char cVar32;
  ulong in_XMM0_Qb;
  undefined1 auVar29 [16];
  double dVar33;
  double dVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined4 uStack_d8;
  undefined3 uStack_d4;
  undefined1 (*local_c8) [16];
  ulong uStack_c0;
  long local_b8;
  long lStack_b0;
  undefined1 local_a8 [16];
  double local_98;
  ulong uStack_90;
  undefined1 (*pauStack_80) [16];
  undefined8 uStack_78;
  ulong uStack_70;
  char *local_68;
  ulong local_60;
  undefined1 uStack_58;
  undefined4 uStack_57;
  undefined3 uStack_53;
  undefined4 auStack_3f [3];
  
  lVar3 = param_2[2];
  if (lVar3 == 0) {
    uVar16 = CONCAT71((int7)((ulong)unaff_RBP >> 8),4);
    if (*param_2 != 0) {
      (*(code *)PTR___rust_dealloc_001d96d0)(param_2[1],*param_2,1);
    }
    goto LAB_0018573c;
  }
  local_98 = param_1;
  uStack_90 = in_XMM0_Qb;
  pauVar9 = (undefined1 (*) [16])__tls_get_addr(&PTR_001d9bf0);
  if (pauVar9[1][0] == '\x01') {
    local_a8 = *pauVar9;
  }
  else {
                    /* try { // try from 00185750 to 00185755 has its CatchHandler @ 00185767 */
    local_a8 = (*(code *)PTR_hashmap_random_keys_001d9c00)();
    *pauVar9 = local_a8;
    pauVar9[1][0] = 1;
  }
  *(long *)*pauVar9 = local_a8._0_8_ + 1;
  local_b8 = _DAT_001d5c28;
  lStack_b0 = _UNK_001d5c30;
  local_c8 = (undefined1 (*) [16])
             PTR_anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971_001d5c18;
  uStack_c0 = _UNK_001d5c20;
  pcVar24 = (char *)param_2[1];
  pcVar1 = pcVar24 + lVar3;
  local_68 = pcVar24;
  do {
    cVar14 = *pcVar24;
    local_60 = CONCAT71(local_60._1_7_,cVar14);
                    /* try { // try from 001853eb to 0018546b has its CatchHandler @ 0018576c */
    puVar10 = (undefined1 *)core::hash::BuildHasher::hash_one(local_a8);
    pcVar24 = pcVar24 + 1;
    bVar25 = (byte)((ulong)puVar10 >> 0x38);
    bVar28 = bVar25 >> 1;
    auVar29 = ZEXT216(CONCAT11(bVar28,bVar28));
    auVar29 = pshuflw(auVar29,auVar29,0);
    uVar16 = 0;
    puVar17 = puVar10;
    while( true ) {
      pauVar9 = (undefined1 (*) [16])((ulong)puVar17 & uStack_c0);
      pcVar2 = *pauVar9 + (long)*local_c8;
      cVar7 = pcVar2[0xf];
      cVar27 = auVar29[0];
      auVar36[0] = -(*pcVar2 == cVar27);
      cVar30 = auVar29[1];
      auVar36[1] = -(pcVar2[1] == cVar30);
      cVar31 = auVar29[2];
      auVar36[2] = -(pcVar2[2] == cVar31);
      cVar32 = auVar29[3];
      auVar36[3] = -(pcVar2[3] == cVar32);
      auVar36[4] = -(pcVar2[4] == cVar27);
      auVar36[5] = -(pcVar2[5] == cVar30);
      auVar36[6] = -(pcVar2[6] == cVar31);
      auVar36[7] = -(pcVar2[7] == cVar32);
      auVar36[8] = -(pcVar2[8] == cVar27);
      auVar36[9] = -(pcVar2[9] == cVar30);
      auVar36[10] = -(pcVar2[10] == cVar31);
      auVar36[0xb] = -(pcVar2[0xb] == cVar32);
      auVar36[0xc] = -(pcVar2[0xc] == cVar27);
      auVar36[0xd] = -(pcVar2[0xd] == cVar30);
      auVar36[0xe] = -(pcVar2[0xe] == cVar31);
      auVar36[0xf] = -(cVar7 == cVar32);
      uVar19 = (ushort)(SUB161(auVar36 >> 7,0) & 1) | (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar36 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar36 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar36 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar36 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar36 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar36 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar36 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar36 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe | (ushort)(auVar36[0xf] >> 7) << 0xf;
      uVar12 = (uint)uVar19;
      while (uVar19 != 0) {
        uVar23 = 0;
        for (uVar6 = uVar12; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar23 = uVar23 + 1;
        }
        uVar20 = (ulong)(*pauVar9 + uVar23) & uStack_c0;
        if (cVar14 == local_c8[-1 - uVar20][0]) {
          *(long *)(local_c8[-1 - uVar20] + 8) = *(long *)(local_c8[-1 - uVar20] + 8) + 1;
          goto joined_r0x00185354;
        }
        uVar19 = (ushort)(uVar12 - 1) & (ushort)uVar12;
        uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar19);
      }
      auVar35[0] = -(*pcVar2 == anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[0])
      ;
      auVar35[1] = -(pcVar2[1] ==
                    anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[1]);
      auVar35[2] = -(pcVar2[2] ==
                    anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[2]);
      auVar35[3] = -(pcVar2[3] ==
                    anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[3]);
      auVar35[4] = -(pcVar2[4] ==
                    anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[4]);
      auVar35[5] = -(pcVar2[5] ==
                    anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[5]);
      auVar35[6] = -(pcVar2[6] ==
                    anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[6]);
      auVar35[7] = -(pcVar2[7] ==
                    anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[7]);
      auVar35[8] = -(pcVar2[8] ==
                    anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[8]);
      auVar35[9] = -(pcVar2[9] ==
                    anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[9]);
      auVar35[10] = -(pcVar2[10] ==
                     anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[10]);
      auVar35[0xb] = -(pcVar2[0xb] ==
                      anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[0xb]);
      auVar35[0xc] = -(pcVar2[0xc] ==
                      anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[0xc]);
      auVar35[0xd] = -(pcVar2[0xd] ==
                      anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[0xd]);
      auVar35[0xe] = -(pcVar2[0xe] ==
                      anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[0xe]);
      auVar35[0xf] = -(cVar7 == anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971
                                [0xf]);
      if ((((((((((((((((auVar35 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                       (auVar35 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar35 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar35 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar35 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar35 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar35 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar35 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar35 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar35 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar35 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar35 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar35 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar35 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar35 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          cVar7 == anon_6dca787fc37e48e710a1dbd955c10c13_0_llvm_6582718418885566971[0xf]) break;
      puVar17 = pauVar9[1] + uVar16;
      uVar16 = uVar16 + 0x10;
    }
    if (local_b8 == 0) {
      (*(code *)PTR_reserve_rehash_001d9cf8)(&local_c8,1,local_a8,1);
      cVar14 = (char)local_60;
    }
    uVar16 = (ulong)puVar10 & uStack_c0;
    auVar29 = *(undefined1 (*) [16])(*local_c8 + uVar16);
    uVar19 = (ushort)(SUB161(auVar29 >> 7,0) & 1) | (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
             (ushort)(byte)(auVar29[0xf] >> 7) << 0xf;
    uVar12 = (uint)uVar19;
    if (uVar19 == 0) {
      lVar18 = 0x10;
      do {
        uVar16 = uVar16 + lVar18 & uStack_c0;
        auVar29 = *(undefined1 (*) [16])(*local_c8 + uVar16);
        lVar18 = lVar18 + 0x10;
        uVar12 = (uint)(ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar29[0xf] >> 7) << 0xf);
      } while (uVar12 == 0);
    }
    uVar23 = 0;
    for (; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
      uVar23 = uVar23 + 1;
    }
    uVar20 = uVar23 + uVar16 & uStack_c0;
    bVar28 = (*local_c8)[uVar20];
    if (-1 < (char)bVar28) {
      auVar29 = *local_c8;
      uVar12 = 0;
      for (uVar23 = (uint)(ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(byte)(auVar29[0xf] >> 7) << 0xf); (uVar23 & 1) == 0;
          uVar23 = uVar23 >> 1 | 0x80000000) {
        uVar12 = uVar12 + 1;
      }
      uVar20 = (ulong)uVar12;
      bVar28 = (*local_c8)[uVar20];
    }
    pauVar9 = (undefined1 (*) [16])(uVar20 - 0x10 & uStack_c0);
    bVar25 = bVar25 >> 1;
    (*local_c8)[uVar20] = bVar25;
    (*pauVar9)[(long)local_c8[1]] = bVar25;
    uVar16 = (ulong)bVar28 & 0xffffffffffffff01;
    local_b8 = local_b8 - uVar16;
    local_c8[-1 - uVar20][0] = cVar14;
    *(undefined8 *)(local_c8[-1 - uVar20] + 8) = 0;
    lStack_b0 = lStack_b0 + 1;
    *(long *)(local_c8[-1 - uVar20] + 8) = *(long *)(local_c8[-1 - uVar20] + 8) + 1;
joined_r0x00185354:
  } while (pcVar24 != pcVar1);
  if (uStack_c0 == 0) {
    uVar13 = 0;
    if (lStack_b0 == 0) goto LAB_00185676;
LAB_001854e1:
    auVar29 = *local_c8;
    uVar19 = (ushort)(SUB161(auVar29 >> 7,0) & 1) | (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
             (ushort)(byte)(auVar29[0xf] >> 7) << 0xf;
    pauVar11 = local_c8;
    pauVar21 = local_c8;
    while (pauVar21 = pauVar21 + 1, uVar19 == 0xffff) {
      auVar29 = *pauVar21;
      pauVar11 = pauVar11 + -0x10;
      uVar19 = (ushort)(SUB161(auVar29 >> 7,0) & 1) | (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
               (ushort)(byte)(auVar29[0xf] >> 7) << 0xf;
    }
    iVar5 = 0;
    uVar23 = ~(uint)uVar19;
    for (uVar12 = uVar23; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
      iVar5 = iVar5 + 1;
    }
    uVar20 = (ulong)*(byte *)((long)pauVar11 + (-0x10 - (ulong)(uint)(iVar5 << 4)));
    uVar26 = *(ulong *)((long)pauVar11 + (-8 - (ulong)(uint)(iVar5 << 4)));
    lVar18 = lStack_b0 + -1;
    if (lVar18 != 0) {
      uVar23 = uVar23 & -(uint)uVar19 - 2;
      uVar15 = uVar20;
      uVar22 = uVar26;
      do {
        local_60 = uVar22;
        if ((short)uVar23 == 0) {
          do {
            auVar29 = *pauVar21;
            pauVar11 = pauVar11 + -0x10;
            pauVar21 = pauVar21 + 1;
            uVar23 = (uint)(ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar29[0xf] >> 7) << 0xf);
          } while (uVar23 == 0xffff);
          uVar23 = ~uVar23;
        }
        iVar5 = 0;
        for (uVar12 = uVar23; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
          iVar5 = iVar5 + 1;
        }
        uVar23 = uVar23 - 1 & uVar23;
        uVar4 = *(ulong *)((long)pauVar11 + (-8 - (ulong)(uint)(iVar5 << 4)));
        uVar22 = local_60;
        if (local_60 < uVar4) {
          uVar22 = uVar4;
        }
        uVar20 = uVar15 & 0xff;
        puVar8 = &uStack_57;
        if (local_60 <= uVar4) {
          uVar26 = uVar4;
          uVar20 = (ulong)*(uint *)((long)pauVar11 + (-0x10 - (ulong)(uint)(iVar5 << 4)));
          puVar8 = auStack_3f;
        }
        uStack_58 = (undefined1)uVar15;
        uStack_53 = uStack_d4;
        uStack_57 = uStack_d8;
        uStack_d8 = *puVar8;
        uStack_d4 = (undefined3)((uint)*(undefined4 *)((long)puVar8 + 3) >> 8);
        lVar18 = lVar18 + -1;
        uVar15 = uVar20;
      } while (lVar18 != 0);
    }
    pauStack_80 = pauVar9;
    uStack_78 = uVar13;
    uStack_70 = uStack_c0;
    if (uVar16 != 0 && uStack_c0 != 0) {
      (*(code *)PTR___rust_dealloc_001d96d0)(pauVar9,uVar16,uVar13);
    }
    auVar29._8_4_ = (int)(uVar26 >> 0x20);
    auVar29._0_8_ = uVar26;
    auVar29._12_4_ = _UNK_001173f4;
    dVar33 = auVar29._8_8_ - _UNK_001172c8;
    dVar34 = dVar33 + ((double)CONCAT44(_DAT_001173f0,(int)uVar26) - _DAT_001172c0);
  }
  else {
    uVar16 = uStack_c0 * 0x11 + 0x21;
    pauVar9 = local_c8 + (-1 - uStack_c0);
    uVar13 = 0x10;
    if (lStack_b0 != 0) goto LAB_001854e1;
LAB_00185676:
    dVar34 = 0.0;
    dVar33 = 0.0;
    uVar20 = 4;
    if (uVar16 != 0 && uStack_c0 != 0) {
      (*(code *)PTR___rust_dealloc_001d96d0)();
      dVar34 = 0.0;
      dVar33 = 0.0;
    }
  }
  dVar34 = dVar34 / (double)lVar3;
  uVar16 = 4;
  if (local_98 < dVar34) {
    uVar16 = uVar20 & 0xff;
  }
  local_98 = (double)(-(ulong)(local_98 < dVar34) & (ulong)dVar34);
  uStack_90 = uStack_90 & (ulong)dVar33;
  if (*param_2 != 0) {
    (*(code *)PTR___rust_dealloc_001d96d0)(local_68,*param_2,1);
  }
LAB_0018573c:
  return uVar16 & 0xffffffff;
}




// ELF address 0x0000000000083ea0; strategy_signal_maker_common::signal_trigger::TsQuantileCalculator::update

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_signal_maker_common::signal_trigger::TsQuantileCalculator::update */

void __rustcall
strategy_signal_maker_common::signal_trigger::TsQuantileCalculator::update
          (double param_1,double param_2,ulong *param_3)

{
  double dVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double local_30;
  undefined8 local_28;
  
  uVar4 = param_3[8];
  uVar5 = *param_3;
  uVar2 = param_3[3];
  if (uVar2 == uVar5) {
    (*(code *)PTR_grow_001d9d10)(param_3,&PTR_s_strategies_index_strategy_strate_001d5bb8);
    uVar5 = *param_3;
    uVar2 = param_3[3];
  }
  uVar6 = 0;
  if (uVar5 <= uVar2 + param_3[2]) {
    uVar6 = uVar5;
  }
  lVar3 = (uVar2 + param_3[2]) - uVar6;
  uVar5 = param_3[1];
  *(double *)(uVar5 + lVar3 * 0x18) = param_1;
  *(double *)(uVar5 + 8 + lVar3 * 0x18) = param_2;
  *(ulong *)(uVar5 + 0x10 + lVar3 * 0x18) = uVar4;
  param_3[3] = param_3[3] + 1;
  alloc::collections::btree::map::BTreeMap<K,V,A>::insert(param_3 + 4,uVar4);
  param_3[8] = param_3[8] + 1;
  dVar8 = (double)param_3[9];
  param_3[9] = (ulong)(dVar8 + param_2);
  uVar4 = param_3[10] + 1;
  param_3[10] = uVar4;
  auVar10._8_4_ = (int)(uVar4 >> 0x20);
  auVar10._0_8_ = uVar4;
  auVar10._12_4_ = _UNK_001173f4;
  param_3[0xb] = (ulong)((dVar8 + param_2) /
                        ((auVar10._8_8_ - _UNK_001172c8) +
                        ((double)CONCAT44(_DAT_001173f0,(int)uVar4) - _DAT_001172c0)));
  param_3[0xc] = (ulong)(param_2 * param_2 + (double)param_3[0xc]);
  param_3[(ulong)(param_2 <= 0.0) + 0xe] =
       (ulong)(param_2 + (double)param_3[(ulong)(param_2 <= 0.0) + 0xe]);
  uVar4 = param_3[3];
  if (uVar4 != 0) {
    do {
      uVar5 = param_3[2];
      uVar2 = *param_3;
      uVar6 = param_3[1];
      uVar7 = uVar2;
      if (uVar5 < uVar2) {
        uVar7 = 0;
      }
      dVar8 = param_1 - *(double *)(uVar6 + (uVar5 - uVar7) * 0x18);
      if (dVar8 < (double)param_3[7] || dVar8 == (double)param_3[7]) {
        return;
      }
      uVar7 = 0;
      if (uVar2 <= uVar5 + 1) {
        uVar7 = uVar2;
      }
      param_3[2] = (uVar5 - uVar7) + 1;
      param_3[3] = uVar4 - 1;
      dVar8 = *(double *)(uVar6 + 8 + uVar5 * 0x18);
      local_28 = *(undefined8 *)(uVar6 + 0x10 + uVar5 * 0x18);
      local_30 = dVar8;
      alloc::collections::btree::map::BTreeMap<K,V,A>::remove(param_3 + 4,&local_30);
      dVar1 = (double)param_3[9];
      param_3[9] = (ulong)(dVar1 - dVar8);
      dVar9 = 0.0;
      if (param_3[10] != 0) {
        uVar4 = param_3[10] - 1;
        param_3[10] = uVar4;
        if (uVar4 != 0) {
          auVar11._8_4_ = (int)(uVar4 >> 0x20);
          auVar11._0_8_ = uVar4;
          auVar11._12_4_ = _UNK_001173f4;
          dVar9 = (dVar1 - dVar8) /
                  ((auVar11._8_8_ - _UNK_001172c8) +
                  ((double)CONCAT44(_DAT_001173f0,(int)uVar4) - _DAT_001172c0));
        }
      }
      param_3[0xb] = (ulong)dVar9;
      dVar1 = _DAT_001179d0;
      param_3[0xc] = (ulong)((double)param_3[0xc] - dVar8 * dVar8);
      param_3[(ulong)(dVar8 <= dVar1) + 0xe] =
           (ulong)((double)param_3[(ulong)(dVar8 <= dVar1) + 0xe] - dVar8);
      uVar4 = param_3[3];
    } while (uVar4 != 0);
  }
  return;
}




// ELF address 0x0000000000085850; strategy_signal_maker_common::signal_trigger::dynamic_pending_ts_ms

/* strategy_signal_maker_common::signal_trigger::dynamic_pending_ts_ms */

double __rustcall
strategy_signal_maker_common::signal_trigger::dynamic_pending_ts_ms
          (double param_1,double param_2,double param_3,double param_4,double param_5)

{
  double dVar1;
  
  if (((param_2 <= param_1) && (0.0 <= param_2)) && (0.0 <= param_3)) {
    dVar1 = param_3 - param_2;
    if (param_3 - param_2 <= DAT_001179b0) {
      dVar1 = DAT_001179b0;
    }
    dVar1 = (param_1 - param_2) / dVar1;
    if (DAT_001179b8 <= dVar1) {
      dVar1 = DAT_001179b8;
    }
    param_4 = param_4 + param_5 * dVar1;
  }
  return param_4;
}




// ELF address 0x0000000000082290; strategy_signal_maker_common::get_quote_price::get_quote_vol

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_signal_maker_common::get_quote_price::get_quote_vol */

undefined8 __rustcall
strategy_signal_maker_common::get_quote_price::get_quote_vol(undefined1 param_1,byte param_2)

{
                    /* WARNING: Switch is manually overridden */
  switch(param_1) {
  case 0:
    break;
  default:
    if ((param_2 & 1) != 0) {
      return 1;
    }
    break;
  case 3:
  }
  return 1;
}




// ELF address 0x0000000000082320; strategy_signal_maker_common::get_quote_price::get_quote_price

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_signal_maker_common::get_quote_price::get_quote_price */

undefined8 * __rustcall
strategy_signal_maker_common::get_quote_price::get_quote_price
          (double param_1,double param_2,double param_3,double param_4,double param_5,double param_6
          ,undefined8 *param_7,undefined1 param_8,double *param_9)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 uVar9;
  ulong uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dd;
  undefined4 uVar13;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar19;
  double dVar20;
  undefined8 in_XMM2_Qb;
  ulong in_XMM3_Qb;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double *local_f0;
  undefined *local_e8;
  double *local_e0;
  undefined *local_d8;
  double local_d0;
  undefined **local_c8;
  undefined8 local_c0;
  double **local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined8 local_78;
  ulong uStack_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  
  local_98._0_8_ = (param_3 + param_4) * DAT_00117a00;
  local_88._8_8_ = in_XMM2_Qb;
  local_88._0_8_ = param_3;
  local_98._8_8_ = in_XMM2_Qb;
  local_78 = param_4;
  uStack_70 = in_XMM3_Qb;
  local_68 = param_5;
  local_38 = param_1;
  local_30 = param_2;
  local_28 = param_6;
  local_d0 = (double)(*(code *)PTR_round_001d9918)
                               (SUB84(((param_3 - param_4) / (double)local_98._0_8_) * DAT_00117a00
                                      * _DAT_001179c8 * DAT_001179f0,0));
  local_d0 = local_d0 / DAT_001179f0;
  local_60 = local_d0;
                    /* WARNING: Switch is manually overridden */
  switch(param_8) {
  case 0:
    local_58 = (double)(*(code *)PTR_round_001d9918)(SUB84((local_30 - *param_9) * DAT_001179f8,0));
    local_58 = local_58 / DAT_001179f8;
    if (local_60 < local_58) {
      dVar20 = (local_58 - local_60) * _DAT_00117a60;
      dVar14 = dVar20;
      if (local_68 <= dVar20) {
        dVar14 = local_68;
      }
      auVar15._0_8_ = ~-(ulong)NAN(local_68) & (ulong)dVar14;
      auVar15._12_4_ = extraout_XMM0_Dd;
      auVar15._8_4_ = extraout_XMM0_Dc;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = -(ulong)NAN(local_68) & (ulong)dVar20;
      auVar15 = auVar15 | auVar8;
      uVar11 = SUB84(local_28,0);
      uVar12 = (undefined4)((ulong)local_28 >> 0x20);
      if (local_28 <= auVar15._0_8_) {
        uVar11 = auVar15._0_4_;
        uVar12 = auVar15._4_4_;
      }
      uVar10 = -(ulong)NAN(auVar15._0_8_);
      uVar13 = local_88._12_4_;
      local_88._8_4_ = local_88._8_4_;
      local_88._0_8_ =
           (double)local_88._0_8_ *
           ((double)(uVar10 & (ulong)local_28 | ~uVar10 & CONCAT44(uVar12,uVar11)) + DAT_001179b8);
      local_88._12_4_ = uVar13;
      local_e0 = &local_58;
LAB_00182650:
      local_f0 = &local_d0;
      local_d8 = PTR_fmt_001d9920;
      local_c8 = &PTR_s_taker__001d5b98;
      local_c0 = 2;
      local_a8 = 0;
      local_b8 = &local_f0;
      local_b0 = 2;
      local_e8 = PTR_fmt_001d9920;
      (*(code *)PTR_format_inner_001d9810)(param_7 + 2,&local_c8);
      uVar9 = 0;
      goto LAB_00182ac4;
    }
    if (local_58 <= 0.0) {
      dVar14 = local_78 + _DAT_001179c0;
      dVar19 = (double)local_88._0_8_ + _DAT_00117998;
      dVar20 = dVar19;
      if (dVar14 <= dVar19) {
        dVar20 = dVar14;
      }
      auVar23._0_8_ = ~-(ulong)NAN(dVar14) & (ulong)dVar20;
      auVar23._8_8_ = ~uStack_70 & local_88._8_8_;
      auVar4._8_4_ = (int)(uStack_70 & local_88._8_8_);
      auVar4._0_8_ = -(ulong)NAN(dVar14) & (ulong)dVar19;
      auVar4._12_4_ = (int)((uStack_70 & local_88._8_8_) >> 0x20);
      local_98 = auVar23 | auVar4;
      local_e8 = PTR_fmt_001d9920;
      local_e0 = &local_58;
LAB_00182a73:
      local_f0 = &local_d0;
      local_c8 = &PTR_s_maker__e__001d5b58;
      local_c0 = 2;
      local_a8 = 0;
      local_b8 = &local_f0;
      local_b0 = 2;
      PTR_fmt_001d9920 = local_e8;
      local_d8 = local_e8;
      (*(code *)PTR_format_inner_001d9810)(param_7 + 2,&local_c8);
      uVar9 = 1;
      local_88._0_4_ = local_98._0_4_;
      local_88._4_4_ = local_98._4_4_;
      goto LAB_00182ac4;
    }
    local_e8 = PTR_fmt_001d9920;
    local_e0 = &local_58;
    break;
  case 1:
    local_50 = (double)(*(code *)PTR_round_001d9918)
                                 (SUB84((param_9[1] - local_38) * DAT_001179f8,0));
    local_50 = local_50 / DAT_001179f8;
    if (local_60 < local_50) {
      dVar20 = (local_50 - local_60) * _DAT_00117a60;
      dVar14 = dVar20;
      if (local_68 <= dVar20) {
        dVar14 = local_68;
      }
      auVar18._0_8_ = ~-(ulong)NAN(local_68) & (ulong)dVar14;
      auVar18._12_4_ = extraout_XMM0_Dd_02;
      auVar18._8_4_ = extraout_XMM0_Dc_02;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = -(ulong)NAN(local_68) & (ulong)dVar20;
      auVar18 = auVar18 | auVar7;
      uVar11 = SUB84(local_28,0);
      uVar12 = (undefined4)((ulong)local_28 >> 0x20);
      if (local_28 <= auVar18._0_8_) {
        uVar11 = auVar18._0_4_;
        uVar12 = auVar18._4_4_;
      }
      uVar10 = -(ulong)NAN(auVar18._0_8_);
      local_78 = local_78 *
                 (DAT_001179b8 -
                 (double)(uVar10 & (ulong)local_28 | ~uVar10 & CONCAT44(uVar12,uVar11)));
      local_e0 = &local_50;
LAB_0018277f:
      local_f0 = &local_d0;
      local_d8 = PTR_fmt_001d9920;
      local_c8 = &PTR_s_taker__001d5b98;
      local_c0 = 2;
      local_a8 = 0;
      local_b8 = &local_f0;
      local_b0 = 2;
      local_e8 = PTR_fmt_001d9920;
      (*(code *)PTR_format_inner_001d9810)(param_7 + 2,&local_c8);
      uVar9 = 0;
      local_88._0_4_ = (undefined4)local_78;
      local_88._4_4_ = local_78._4_4_;
      goto LAB_00182ac4;
    }
    if (local_50 <= 0.0) {
      dVar19 = (double)local_88._0_8_ + _DAT_00117998;
      dVar14 = local_78 + _DAT_001179c0;
      dVar20 = dVar14;
      if (dVar19 <= dVar14) {
        dVar20 = dVar19;
      }
      auVar24._0_8_ = ~-(ulong)NAN(dVar19) & (ulong)dVar20;
      auVar24._8_8_ = ~local_88._8_8_ & uStack_70;
      auVar3._8_4_ = (int)(local_88._8_8_ & uStack_70);
      auVar3._0_8_ = -(ulong)NAN(dVar19) & (ulong)dVar14;
      auVar3._12_4_ = (int)((local_88._8_8_ & uStack_70) >> 0x20);
      local_98 = auVar24 | auVar3;
      local_e8 = PTR_fmt_001d9920;
      local_e0 = &local_50;
      goto LAB_00182a73;
    }
    local_e8 = PTR_fmt_001d9920;
    local_e0 = &local_50;
    break;
  case 2:
    local_48 = (double)(*(code *)PTR_round_001d9918)
                                 (SUB84((param_9[2] - local_38) * DAT_001179f8,0));
    local_48 = local_48 / DAT_001179f8;
    if (local_60 < local_48) {
      dVar20 = (local_48 - local_60) * _DAT_00117a60;
      dVar14 = dVar20;
      if (local_68 <= dVar20) {
        dVar14 = local_68;
      }
      auVar16._0_8_ = ~-(ulong)NAN(local_68) & (ulong)dVar14;
      auVar16._12_4_ = extraout_XMM0_Dd_00;
      auVar16._8_4_ = extraout_XMM0_Dc_00;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = -(ulong)NAN(local_68) & (ulong)dVar20;
      auVar16 = auVar16 | auVar6;
      uVar11 = SUB84(local_28,0);
      uVar12 = (undefined4)((ulong)local_28 >> 0x20);
      if (local_28 <= auVar16._0_8_) {
        uVar11 = auVar16._0_4_;
        uVar12 = auVar16._4_4_;
      }
      uVar10 = -(ulong)NAN(auVar16._0_8_);
      local_78 = local_78 *
                 (DAT_001179b8 -
                 (double)(uVar10 & (ulong)local_28 | ~uVar10 & CONCAT44(uVar12,uVar11)));
      local_e0 = &local_48;
      goto LAB_0018277f;
    }
    if (local_48 <= 0.0) {
      dVar19 = (double)local_88._0_8_ + _DAT_00117998;
      dVar14 = local_78 + _DAT_001179c0;
      dVar20 = dVar14;
      if (dVar19 <= dVar14) {
        dVar20 = dVar19;
      }
      auVar21._0_8_ = ~-(ulong)NAN(dVar19) & (ulong)dVar20;
      auVar21._8_8_ = ~local_88._8_8_ & uStack_70;
      auVar2._8_4_ = (int)(local_88._8_8_ & uStack_70);
      auVar2._0_8_ = -(ulong)NAN(dVar19) & (ulong)dVar14;
      auVar2._12_4_ = (int)((local_88._8_8_ & uStack_70) >> 0x20);
      local_98 = auVar21 | auVar2;
      local_e8 = PTR_fmt_001d9920;
      local_e0 = &local_48;
      goto LAB_00182a73;
    }
    local_e8 = PTR_fmt_001d9920;
    local_e0 = &local_48;
    break;
  case 3:
    local_40 = (double)(*(code *)PTR_round_001d9918)
                                 (SUB84((local_30 - param_9[3]) * DAT_001179f8,0));
    local_40 = local_40 / DAT_001179f8;
    if (local_60 < local_40) {
      dVar20 = (local_40 - local_60) * _DAT_00117a60;
      dVar14 = dVar20;
      if (local_68 <= dVar20) {
        dVar14 = local_68;
      }
      auVar17._0_8_ = ~-(ulong)NAN(local_68) & (ulong)dVar14;
      auVar17._12_4_ = extraout_XMM0_Dd_01;
      auVar17._8_4_ = extraout_XMM0_Dc_01;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = -(ulong)NAN(local_68) & (ulong)dVar20;
      auVar17 = auVar17 | auVar5;
      uVar11 = SUB84(local_28,0);
      uVar12 = (undefined4)((ulong)local_28 >> 0x20);
      if (local_28 <= auVar17._0_8_) {
        uVar11 = auVar17._0_4_;
        uVar12 = auVar17._4_4_;
      }
      uVar10 = -(ulong)NAN(auVar17._0_8_);
      uVar13 = local_88._12_4_;
      local_88._8_4_ = local_88._8_4_;
      local_88._0_8_ =
           (double)local_88._0_8_ *
           ((double)(uVar10 & (ulong)local_28 | ~uVar10 & CONCAT44(uVar12,uVar11)) + DAT_001179b8);
      local_88._12_4_ = uVar13;
      local_e0 = &local_40;
      goto LAB_00182650;
    }
    if (local_40 <= 0.0) {
      dVar14 = local_78 + _DAT_001179c0;
      dVar19 = (double)local_88._0_8_ + _DAT_00117998;
      dVar20 = dVar19;
      if (dVar14 <= dVar19) {
        dVar20 = dVar14;
      }
      auVar22._0_8_ = ~-(ulong)NAN(dVar14) & (ulong)dVar20;
      auVar22._8_8_ = ~uStack_70 & local_88._8_8_;
      auVar1._8_4_ = (int)(uStack_70 & local_88._8_8_);
      auVar1._0_8_ = -(ulong)NAN(dVar14) & (ulong)dVar19;
      auVar1._12_4_ = (int)((uStack_70 & local_88._8_8_) >> 0x20);
      local_98 = auVar22 | auVar1;
      local_e8 = PTR_fmt_001d9920;
      local_e0 = &local_40;
      goto LAB_00182a73;
    }
    local_e8 = PTR_fmt_001d9920;
    local_e0 = &local_40;
  }
  local_f0 = &local_d0;
  local_c8 = &PTR_DAT_001d5b78;
  local_c0 = 2;
  local_a8 = 0;
  local_b8 = &local_f0;
  local_b0 = 2;
  PTR_fmt_001d9920 = local_e8;
  local_d8 = local_e8;
  (*(code *)PTR_format_inner_001d9810)(param_7 + 2,&local_c8);
  uVar9 = 2;
  local_88._0_4_ = local_98._0_4_;
  local_88._4_4_ = local_98._4_4_;
LAB_00182ac4:
  *param_7 = CONCAT44(local_88._4_4_,local_88._0_4_);
  *(undefined1 *)(param_7 + 1) = uVar9;
  return param_7;
}




// ELF address 0x0000000000046900; <strategy_sm1::StrategySM1 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin

/* WARNING: Removing unreachable block (ram,0x00146976) */
/* WARNING: Removing unreachable block (ram,0x001469d1) */
/* WARNING: Removing unreachable block (ram,0x001469d5) */
/* WARNING: Removing unreachable block (ram,0x001469d7) */
/* WARNING: Removing unreachable block (ram,0x00146c04) */
/* WARNING: Removing unreachable block (ram,0x001469e1) */
/* WARNING: Removing unreachable block (ram,0x00146a7b) */
/* WARNING: Removing unreachable block (ram,0x00146a8e) */
/* WARNING: Removing unreachable block (ram,0x00146a9b) */
/* WARNING: Removing unreachable block (ram,0x00146aa0) */
/* WARNING: Removing unreachable block (ram,0x00146ab3) */
/* WARNING: Removing unreachable block (ram,0x00146acc) */
/* WARNING: Removing unreachable block (ram,0x00146aed) */
/* WARNING: Removing unreachable block (ram,0x00146af6) */
/* WARNING: Removing unreachable block (ram,0x00146ae0) */
/* WARNING: Removing unreachable block (ram,0x00146bb4) */
/* WARNING: Removing unreachable block (ram,0x00146bc1) */
/* _<strategy_sm1::StrategySM1 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin */

undefined8 __rustcall
_<strategy_sm1::StrategySM1_as_future_backtest_sdk::plugin::StrategyPlugin>::on_begin(long *param_1)

{
  long lVar1;
  long local_358;
  undefined8 local_350;
  undefined8 local_348;
  undefined1 local_2c8 [328];
  long local_180;
  long local_178;
  undefined1 auStack_170 [320];
  
  (*(code *)PTR_custom_config_001d9800)(&local_358);
                    /* try { // try from 00146929 to 00146957 has its CatchHandler @ 00146c1b */
  _<toml::de::Deserializer_as_serde_core::de::Deserializer>::deserialize_struct
            (&local_180,local_350,local_348,&DAT_00117f33,9,&PTR_DAT_001d38c0,0x23);
  (*(code *)PTR_memcpy_001d9728)(local_2c8,auStack_170,0x140);
  lVar1 = *param_1;
  if (lVar1 != -0x8000000000000000) {
    if (lVar1 != 0) {
      (*(code *)PTR___rust_dealloc_001d96d0)(param_1[1],lVar1,1);
    }
    if (param_1[3] != 0) {
      (*(code *)PTR___rust_dealloc_001d96d0)(param_1[4],param_1[3],1);
    }
    if (param_1[6] != 0) {
      (*(code *)PTR___rust_dealloc_001d96d0)(param_1[7],param_1[6] << 3,8);
    }
    if (param_1[9] != 0) {
      (*(code *)PTR___rust_dealloc_001d96d0)(param_1[10],param_1[9],1);
    }
  }
  *param_1 = local_180;
  param_1[1] = local_178;
  (*(code *)PTR_memcpy_001d9728)(param_1 + 2,local_2c8,0x140);
  if (local_358 != 0) {
    (*(code *)PTR___rust_dealloc_001d96d0)(local_350,local_358,1);
  }
  return 0;
}




// ELF address 0x0000000000049620; <strategy_sm1::StrategySM1 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth

/* _<strategy_sm1::StrategySM1 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth */

undefined8 __rustcall
_<strategy_sm1::StrategySM1_as_future_backtest_sdk::plugin::StrategyPlugin>::on_depth
          (long param_1,long param_2)

{
  double *pdVar1;
  ushort uVar2;
  undefined8 uVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  bool bVar13;
  long local_78;
  undefined1 local_50 [32];
  
  lVar11 = *(long *)(param_1 + 0x168);
  if (lVar11 != 0) {
    local_78 = *(long *)(param_1 + 0x170);
    uVar3 = *(undefined8 *)(param_2 + 0x28);
    uVar4 = *(ulong *)(param_2 + 0x30);
    while( true ) {
      uVar2 = *(ushort *)(lVar11 + 0x21a);
      uVar8 = 0xffffffffffffffff;
      lVar10 = 0;
      lVar6 = lVar11 + 8;
      do {
        uVar9 = (ulong)uVar2;
        if ((ulong)((uint)uVar2 * 8) * 3 == lVar10) goto LAB_00149705;
        uVar9 = *(ulong *)(lVar6 + 0x10);
        uVar7 = uVar9;
        if (uVar4 < uVar9) {
          uVar7 = uVar4;
        }
        iVar5 = (*(code *)PTR_memcmp_001d9768)(uVar3,*(undefined8 *)(lVar6 + 8),uVar7);
        lVar12 = uVar4 - uVar9;
        if (iVar5 != 0) {
          lVar12 = (long)iVar5;
        }
        lVar10 = lVar10 + 0x18;
        uVar8 = uVar8 + 1;
        lVar6 = lVar6 + 0x18;
      } while ((char)((0 < lVar12) - (lVar12 < 0)) == '\x01');
      uVar9 = uVar8;
      if (0 < lVar12 == lVar12 < 0) break;
LAB_00149705:
      bVar13 = local_78 == 0;
      local_78 = local_78 + -1;
      if (bVar13) {
        return 0;
      }
      lVar11 = *(long *)(lVar11 + 0x220 + uVar9 * 8);
    }
    pdVar1 = (double *)(lVar11 + 0xf8 + lVar10);
    if ((*(double *)(param_2 + 0x98) == *pdVar1) &&
       (!NAN(*(double *)(param_2 + 0x98)) && !NAN(*pdVar1))) {
      pdVar1 = (double *)(lVar11 + 0x100 + lVar10);
      if ((*(double *)(param_2 + 0x48) == *pdVar1) &&
         (!NAN(*(double *)(param_2 + 0x48)) && !NAN(*pdVar1))) {
        return 0;
      }
    }
    alloc::collections::btree::map::BTreeMap<K,V,A>::remove(local_50,param_1 + 0x168,param_2 + 0x20)
    ;
  }
  return 0;
}




// ELF address 0x0000000000046c50; <strategy_sm1::StrategySM1 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _<strategy_sm1::StrategySM1 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal */

double * __rustcall
_<strategy_sm1::StrategySM1_as_future_backtest_sdk::plugin::StrategyPlugin>::on_signal
          (long *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined *puVar6;
  byte bVar7;
  long lVar8;
  char cVar9;
  byte bVar10;
  char cVar11;
  undefined1 uVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  double *pdVar16;
  ulong uVar17;
  long extraout_RDX;
  long extraout_RDX_00;
  undefined8 uVar18;
  ulong uVar19;
  undefined8 *puVar20;
  ulong uVar21;
  undefined8 extraout_XMM0_Qa;
  double dVar22;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar23;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double extraout_XMM0_Qb;
  double extraout_XMM0_Qb_00;
  double extraout_XMM0_Qb_01;
  double extraout_XMM0_Qb_02;
  double extraout_XMM1_Qa;
  double extraout_XMM1_Qb;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  char local_7a1;
  long local_7a0;
  undefined8 local_798;
  undefined8 local_790;
  double local_788;
  long lStack_780;
  double local_778;
  double dStack_770;
  undefined8 *******pppppppuStack_768;
  undefined8 ******ppppppuStack_760;
  double *pdStack_758;
  undefined8 ******local_748;
  double *pdStack_740;
  undefined8 *******local_738;
  undefined8 ******ppppppuStack_730;
  double *pdStack_728;
  undefined8 *******local_720;
  undefined8 *******local_710;
  undefined8 ******local_708;
  double *pdStack_700;
  undefined8 ******local_6f8;
  double dStack_6f0;
  double *local_6e8;
  double dStack_6e0;
  undefined8 ******local_6d8;
  double *pdStack_6d0;
  undefined8 *******local_6c8;
  undefined8 ******ppppppuStack_6c0;
  double *pdStack_6b8;
  undefined8 *******pppppppuStack_6b0;
  long *local_6a8;
  double dStack_6a0;
  double local_698;
  undefined8 uStack_690;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  double local_668;
  double dStack_660;
  undefined8 local_658;
  long lStack_650;
  undefined8 *****local_640;
  double local_638;
  long lStack_630;
  undefined8 ******ppppppuStack_628;
  double *pdStack_620;
  undefined8 *******pppppppuStack_618;
  undefined8 uStack_610;
  undefined8 ******local_608;
  long lStack_600;
  undefined8 *******local_5f8;
  undefined8 ******ppppppuStack_5f0;
  long local_5e8;
  long local_5e0;
  undefined8 local_5d8;
  undefined8 ******local_5c8;
  double *pdStack_5c0;
  undefined8 *******local_5b8;
  long local_5b0;
  long *plStack_5a8;
  long local_5a0;
  ulong local_598;
  long local_590;
  ulong local_588;
  undefined8 ******local_580;
  double *pdStack_578;
  undefined8 *******local_570;
  double local_568;
  long lStack_560;
  double local_558;
  long lStack_550;
  double local_548;
  long lStack_540;
  double *local_538;
  double dStack_530;
  undefined8 ******local_528;
  double dStack_520;
  double local_518;
  double dStack_510;
  double local_508;
  double dStack_500;
  undefined8 ******local_4f8;
  double *pdStack_4f0;
  undefined8 *******local_4e8;
  undefined8 ******ppppppuStack_4e0;
  undefined8 ******local_4d8;
  long lStack_4d0;
  long local_4c8;
  long lStack_4c0;
  long local_4b8;
  long lStack_4b0;
  undefined8 ******local_4a8;
  long lStack_4a0;
  double local_498;
  double local_490;
  long lStack_488;
  undefined2 local_480;
  long local_478;
  long lStack_470;
  long local_468;
  long lStack_460;
  double local_458;
  long local_450;
  double local_448;
  long local_440;
  undefined8 ******local_438;
  double *pdStack_430;
  undefined8 *******local_428;
  undefined8 ******ppppppuStack_420;
  double *pdStack_418;
  undefined8 *******pppppppuStack_410;
  long lStack_408;
  long lStack_400;
  undefined8 ******ppppppuStack_3f8;
  double *pdStack_3f0;
  undefined8 *******pppppppuStack_3e8;
  undefined8 uStack_3e0;
  undefined8 ******ppppppuStack_3d8;
  long lStack_3d0;
  long lStack_3c8;
  long lStack_3c0;
  double dStack_3b8;
  long lStack_3b0;
  long local_330;
  long local_328;
  long local_320;
  double local_318;
  undefined8 uStack_310;
  double local_308;
  undefined4 local_300;
  undefined1 local_2fc;
  undefined1 local_2fb;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  double dStack_2e0;
  double dStack_2d8;
  undefined8 ******ppppppuStack_2d0;
  double dStack_2c8;
  double *pdStack_2c0;
  double *pdStack_2b8;
  undefined1 uStack_2b0;
  char cStack_2af;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  double dStack_290;
  double dStack_288;
  double *pdStack_280;
  double dStack_278;
  undefined8 uStack_270;
  double *pdStack_268;
  undefined1 uStack_260;
  byte bStack_25f;
  undefined8 ******local_258;
  long lStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  double dStack_230;
  double dStack_228;
  double *pdStack_220;
  double dStack_218;
  undefined8 ******ppppppuStack_210;
  double *pdStack_208;
  undefined2 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  double dStack_1e0;
  double dStack_1d8;
  undefined8 ******ppppppuStack_1d0;
  double dStack_1c8;
  undefined8 *******pppppppuStack_1c0;
  double *pdStack_1b8;
  undefined2 uStack_1b0;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  byte local_140;
  undefined7 uStack_13f;
  long *plStack_138;
  byte local_130;
  undefined7 uStack_12f;
  double local_128;
  long local_120;
  undefined8 local_118;
  double *local_f8;
  double dStack_c8;
  undefined8 ******local_a8;
  double dStack_78;
  
  lVar14 = (*(code *)PTR_para_001d9820)(param_3);
  uVar12 = *(undefined1 *)(lVar14 + 0x34);
  local_638 = *(double *)(lVar14 + 0x28);
  uVar3 = *(undefined1 *)(lVar14 + 0x35);
  local_698 = *(double *)(lVar14 + 0x18);
  uStack_690 = *(undefined8 *)(lVar14 + 0x20);
  dVar34 = *(double *)(lVar14 + 0x30);
  _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone
            (&local_330,lVar14,&PTR_s__hdd1_lyt_d_FutureCommodity_Mult_001d3b28);
  local_300 = SUB84(dVar34,0);
  local_318 = local_698;
  uStack_310 = uStack_690;
  local_308 = local_638;
  local_2fc = uVar12;
  local_2fb = uVar3;
  if (*param_1 == -0x8000000000000000) {
                    /* try { // try from 001473c6 to 001473de has its CatchHandler @ 001495aa */
    (*(code *)PTR_expect_failed_001d9858)
              (&DAT_001181ef,0xe,&PTR_s_strategies_index_strategy_strate_001d3b40);
  }
  else {
                    /* try { // try from 00146d03 to 00146d17 has its CatchHandler @ 001495aa */
    (*(code *)PTR_clone_001d9828)
              (&local_748,param_1,&PTR_s_strategies_index_strategy_strate_001d3d18);
    local_710 = (undefined8 *******)CONCAT71(local_710._1_7_,uVar12);
    local_638 = (double)param_1[0xc];
    lStack_630 = param_1[0xd];
                    /* try { // try from 00146d35 to 00146d49 has its CatchHandler @ 001495a5 */
    (*(code *)PTR_clone_001d9828)
              (&local_140,param_1 + 3,&PTR_s_strategies_index_strategy_strate_001d3d18);
    uVar21 = param_1[8];
    uVar17 = uVar21 * 8;
    if (uVar17 < 0x7ffffffffffffff9 && uVar21 >> 0x3d == 0) {
      local_788 = (double)param_1[0xe];
      lStack_780 = param_1[0xf];
      lVar14 = param_1[7];
      local_6a8 = param_1;
      local_5e8 = param_2;
      if (uVar17 == 0) {
        lVar15 = 8;
        uVar19 = 0;
LAB_00146ddd:
        (*(code *)PTR_memcpy_001d9728)(lVar15,lVar14,uVar17);
        plVar1 = local_6a8;
        local_658 = (double)local_6a8[0x10];
        lStack_650 = local_6a8[0x11];
        local_6e8 = (double *)local_6a8[0x12];
        dStack_6e0 = (double)local_6a8[0x13];
        local_6f8 = (undefined8 ******)local_6a8[0x14];
        dStack_6f0 = (double)local_6a8[0x15];
        local_778 = (double)local_6a8[0x16];
        dStack_770 = (double)local_6a8[0x17];
        local_668 = (double)local_6a8[0x18];
        dStack_660 = (double)local_6a8[0x19];
        local_708 = (undefined8 ******)local_6a8[0x1a];
        pdStack_700 = (double *)local_6a8[0x1b];
        local_5f8 = (undefined8 *******)local_6a8[0x1c];
        ppppppuStack_5f0 = (undefined8 ******)local_6a8[0x1d];
        local_608 = (undefined8 ******)local_6a8[0x1e];
        lStack_600 = local_6a8[0x1f];
        local_468 = local_6a8[0x20];
        lStack_460 = local_6a8[0x21];
        local_478 = local_6a8[0x22];
        lStack_470 = local_6a8[0x23];
        local_258 = (undefined8 ******)local_6a8[0x24];
        lStack_250 = local_6a8[0x25];
        local_458 = (double)local_6a8[0x26];
                    /* try { // try from 00146eab to 00146ebf has its CatchHandler @ 00149586 */
        (*(code *)PTR_clone_001d9828)
                  (&local_438,local_6a8 + 9,&PTR_s_strategies_index_strategy_strate_001d3d18);
        lVar14 = local_5e8;
        local_480 = (undefined2)plVar1[0x29];
        local_5c8 = local_748;
        pdStack_5c0 = pdStack_740;
        local_5b8 = local_738;
        local_568 = local_638;
        lStack_560 = lStack_630;
        local_5b0 = CONCAT71(uStack_13f,local_140);
        plStack_5a8 = plStack_138;
        local_5a0 = CONCAT71(uStack_12f,local_130);
        local_558 = local_788;
        lStack_550 = lStack_780;
        local_548 = local_658;
        lStack_540 = lStack_650;
        local_538 = local_6e8;
        dStack_530 = dStack_6e0;
        local_528 = local_6f8;
        dStack_520 = dStack_6f0;
        local_518 = local_778;
        dStack_510 = dStack_770;
        local_508 = local_668;
        dStack_500 = dStack_660;
        local_4f8 = local_708;
        pdStack_4f0 = pdStack_700;
        local_4e8 = local_5f8;
        ppppppuStack_4e0 = ppppppuStack_5f0;
        local_4d8 = local_608;
        lStack_4d0 = lStack_600;
        local_4c8 = local_468;
        lStack_4c0 = lStack_460;
        local_4b8 = local_478;
        lStack_4b0 = lStack_470;
        local_4a8 = local_258;
        lStack_4a0 = lStack_250;
        local_498 = local_458;
        local_570 = local_428;
        local_580 = local_438;
        pdStack_578 = pdStack_430;
        local_490 = (double)plVar1[0x27];
        lStack_488 = plVar1[0x28];
        local_598 = uVar19;
        local_590 = lVar15;
        local_588 = uVar21;
        if (((local_428 == (undefined8 *******)0x0) ||
            (*(undefined8 ********)(local_5e8 + 0x58) != local_428)) ||
           (iVar13 = (*(code *)PTR_bcmp_001d97d8)(*(undefined8 *)(local_5e8 + 0x50),pdStack_430),
           iVar13 != 0)) {
          pdVar16 = (double *)0x0;
        }
        else {
                    /* try { // try from 00147167 to 00147179 has its CatchHandler @ 001494d3 */
          (*(code *)PTR_trade_codes_001d9830)(&local_450,param_3);
          puVar6 = PTR_bcmp_001d97d8;
          local_638 = local_448;
          if (local_440 == 0) {
            pdVar16 = (double *)0x0;
          }
          else {
            lStack_650 = 0;
            local_788 = (double)(lVar14 + 0x48);
            uVar18 = *(undefined8 *)(lVar14 + 8);
            lVar14 = *(long *)(lVar14 + 0x10);
            lVar15 = 0;
            local_658 = dVar34;
            do {
              if ((*(long *)((long)local_638 + 0x10 + lVar15) == lVar14) &&
                 (iVar13 = (*(code *)puVar6)(*(undefined8 *)((long)local_638 + 8 + lVar15),uVar18,
                                             lVar14), lVar8 = local_5e8, iVar13 == 0)) {
                cVar11 = *(char *)(local_5e8 + 0x94);
                    /* try { // try from 00147226 to 00147258 has its CatchHandler @ 001494cb */
                (*(code *)PTR_inst_start_time_sec_001d9838)(param_3);
                cVar9 = (*(code *)PTR_is_trade_start_001d9840)(param_3,cVar11);
                if (cVar9 != '\0') {
                  cVar9 = (*(code *)PTR_is_trade_end_001d9848)(param_3,cVar11);
                  if (cVar9 != '\0') {
                    if (cVar11 == '\0') {
                      if ((char)local_710 != '\0') goto LAB_00147381;
                    }
                    else if ((local_658._2_2_ >> 8 & 1) != 0) {
LAB_00147381:
                    /* try { // try from 00147381 to 001473a1 has its CatchHandler @ 001494cb */
                      pdVar16 = (double *)
                                (*(code *)PTR_all_in_001d9850)
                                          (param_3,cVar11,SUB84(local_658,0) & 1);
                      goto LAB_001472fe;
                    }
                  }
                  if (local_5b8 == (undefined8 *******)0x3) {
                    if (*(char *)((long)pdStack_5c0 + 2) == '2' && *(short *)pdStack_5c0 == 0x5650)
                    {
                      local_658 = *(double *)(lVar8 + 0x78);
                      uVar12 = 1;
                    }
                    else {
                      if (*(char *)((long)pdStack_5c0 + 2) == '3' && *(short *)pdStack_5c0 == 0x5650
                         ) {
                        uVar12 = 2;
                        goto LAB_001472de;
                      }
                      if (*(char *)((long)pdStack_5c0 + 2) != '4' || *(short *)pdStack_5c0 != 0x5650
                         ) goto LAB_001472dc;
                      local_658 = *(double *)(lVar8 + 0x70);
                      uVar12 = 3;
                    }
                  }
                  else {
LAB_001472dc:
                    uVar12 = 0;
LAB_001472de:
                    local_658 = *(double *)(lVar8 + 0x70) * local_568;
                  }
                    /* try { // try from 001473f6 to 0014741e has its CatchHandler @ 001494cb */
                  local_710 = (undefined8 *******)(*(code *)PTR_time_sec_001d9860)(param_3);
                  (*(code *)PTR_clone_001d9828)
                            (&local_7a0,lVar8,&PTR_s_strategies_index_strategy_strate_001d3b58);
                    /* try { // try from 0014741f to 00147438 has its CatchHandler @ 0014948b */
                  (*(code *)PTR_clone_001d9828)
                            (&local_5e0,local_788,&PTR_s_strategies_index_strategy_strate_001d3b70);
                    /* try { // try from 00147443 to 00147455 has its CatchHandler @ 00149483 */
                  (*(code *)PTR_depth_001d9868)(&local_438,param_3,local_798,local_790);
                  if ((int)local_438 == 2) {
                    pdVar16 = (double *)0x0;
                  }
                  else {
                    (*(code *)PTR_memcpy_001d9728)(&local_140,&local_438,0x108);
                    if ((((local_140 & 1) == 0) || ((local_130 & 1) == 0)) ||
                       ((double)((ulong)(((double)plStack_138 - local_128) /
                                        ((double)plStack_138 + local_128)) & _DAT_001172d0) <=
                        DAT_001179e8)) {
                    /* try { // try from 001474dd to 001476f8 has its CatchHandler @ 001494db */
                      local_640 = (undefined8 *****)
                                  (*(code *)PTR_spread_bp_001d9870)(param_3,local_798,local_790);
                      local_6e8 = local_f8;
                      local_6f8 = local_a8;
                      local_708 = (undefined8 ******)
                                  (*(code *)PTR_price_step_001d9878)(param_3,local_798,local_790);
                      local_668 = (double)(*(code *)PTR_vol_step_001d9880)
                                                    (param_3,local_798,local_790);
                      local_5f8 = (undefined8 *******)
                                  (*(code *)PTR_contract_mult_001d9888)(param_3,local_798,local_790)
                      ;
                      (*(code *)PTR_position_001d9890)(param_3,local_798,local_790);
                      local_778 = extraout_XMM1_Qa;
                      dStack_770 = extraout_XMM1_Qb;
                      local_788 = (double)(*(code *)PTR_position_holding_secs_001d9898)
                                                    (param_3,local_798,local_790);
                      bVar10 = (*(code *)PTR_is_should_lock_001d98a0)(param_3,local_798,local_790);
                      if (local_5a0 - 0x11U < 6) {
                    /* WARNING: Switch is manually overridden */
                        switch(local_5a0 - 0x11U) {
                        case 0:
                          auVar24[0] = -((char)*plStack_5a8 == DAT_00117880);
                          auVar24[1] = -(*(char *)((long)plStack_5a8 + 1) == UNK_00117881);
                          auVar24[2] = -(*(char *)((long)plStack_5a8 + 2) == UNK_00117882);
                          auVar24[3] = -(*(char *)((long)plStack_5a8 + 3) == UNK_00117883);
                          auVar24[4] = -(*(char *)((long)plStack_5a8 + 4) == UNK_00117884);
                          auVar24[5] = -(*(char *)((long)plStack_5a8 + 5) == UNK_00117885);
                          auVar24[6] = -(*(char *)((long)plStack_5a8 + 6) == UNK_00117886);
                          auVar24[7] = -(*(char *)((long)plStack_5a8 + 7) == UNK_00117887);
                          auVar24[8] = -((char)plStack_5a8[1] == UNK_00117888);
                          auVar24[9] = -(*(char *)((long)plStack_5a8 + 9) == UNK_00117889);
                          auVar24[10] = -(*(char *)((long)plStack_5a8 + 10) == UNK_0011788a);
                          auVar24[0xb] = -(*(char *)((long)plStack_5a8 + 0xb) == UNK_0011788b);
                          auVar24[0xc] = -(*(char *)((long)plStack_5a8 + 0xc) == UNK_0011788c);
                          auVar24[0xd] = -(*(char *)((long)plStack_5a8 + 0xd) == UNK_0011788d);
                          auVar24[0xe] = -(*(char *)((long)plStack_5a8 + 0xe) == UNK_0011788e);
                          auVar24[0xf] = -(*(char *)((long)plStack_5a8 + 0xf) == UNK_0011788f);
                          auVar28[0] = -((char)plStack_5a8[2] == s_r_00117630[0]);
                          auVar28[1] = -(s_r_00117630[1] == '\0');
                          auVar28[2] = -(s_r_00117630[2] == '\0');
                          auVar28[3] = -(s_r_00117630[3] == '\0');
                          auVar28[4] = -(UNK_00117634 == '\0');
                          auVar28[5] = -(UNK_00117635 == '\0');
                          auVar28[6] = -(UNK_00117636 == '\0');
                          auVar28[7] = -(UNK_00117637 == '\0');
                          auVar28[8] = -(UNK_00117638 == '\0');
                          auVar28[9] = -(UNK_00117639 == '\0');
                          auVar28[10] = -(UNK_0011763a == '\0');
                          auVar28[0xb] = -(UNK_0011763b == '\0');
                          auVar28[0xc] = -(UNK_0011763c == '\0');
                          auVar28[0xd] = -(UNK_0011763d == '\0');
                          auVar28[0xe] = -(UNK_0011763e == '\0');
                          auVar28[0xf] = -(UNK_0011763f == '\0');
                          auVar28 = auVar28 & auVar24;
                          if ((ushort)((ushort)(SUB161(auVar28 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
                                       (ushort)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
                                       (ushort)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
                                       (ushort)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
                                       (ushort)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
                                       (ushort)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
                                       (ushort)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
                                       (ushort)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
                                       (ushort)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
                                       (ushort)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
                                       (ushort)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
                                       (ushort)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
                                       (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe |
                                      (ushort)(byte)(auVar28[0xf] >> 7) << 0xf) == 0xffff) {
                            local_7a1 = '\x02';
                          }
                          else {
                            local_7a1 = (((char)plStack_5a8[2] == 'r' &&
                                         *plStack_5a8 == 0x5273776f646e6957) &&
                                        plStack_5a8[1] == 0x6567676972546973) * '\x05';
                          }
                          break;
                        case 1:
                          auVar26[0] = -((char)*plStack_5a8 == s_WindowsMeanTrigg_00117530[0]);
                          auVar26[1] = -(*(char *)((long)plStack_5a8 + 1) ==
                                        s_WindowsMeanTrigg_00117530[1]);
                          auVar26[2] = -(*(char *)((long)plStack_5a8 + 2) ==
                                        s_WindowsMeanTrigg_00117530[2]);
                          auVar26[3] = -(*(char *)((long)plStack_5a8 + 3) ==
                                        s_WindowsMeanTrigg_00117530[3]);
                          auVar26[4] = -(*(char *)((long)plStack_5a8 + 4) ==
                                        s_WindowsMeanTrigg_00117530[4]);
                          auVar26[5] = -(*(char *)((long)plStack_5a8 + 5) ==
                                        s_WindowsMeanTrigg_00117530[5]);
                          auVar26[6] = -(*(char *)((long)plStack_5a8 + 6) ==
                                        s_WindowsMeanTrigg_00117530[6]);
                          auVar26[7] = -(*(char *)((long)plStack_5a8 + 7) ==
                                        s_WindowsMeanTrigg_00117530[7]);
                          auVar26[8] = -((char)plStack_5a8[1] == s_WindowsMeanTrigg_00117530[8]);
                          auVar26[9] = -(*(char *)((long)plStack_5a8 + 9) ==
                                        s_WindowsMeanTrigg_00117530[9]);
                          auVar26[10] = -(*(char *)((long)plStack_5a8 + 10) ==
                                         s_WindowsMeanTrigg_00117530[10]);
                          auVar26[0xb] = -(*(char *)((long)plStack_5a8 + 0xb) ==
                                          s_WindowsMeanTrigg_00117530[0xb]);
                          auVar26[0xc] = -(*(char *)((long)plStack_5a8 + 0xc) ==
                                          s_WindowsMeanTrigg_00117530[0xc]);
                          auVar26[0xd] = -(*(char *)((long)plStack_5a8 + 0xd) ==
                                          s_WindowsMeanTrigg_00117530[0xd]);
                          auVar26[0xe] = -(*(char *)((long)plStack_5a8 + 0xe) ==
                                          s_WindowsMeanTrigg_00117530[0xe]);
                          auVar26[0xf] = -(*(char *)((long)plStack_5a8 + 0xf) ==
                                          s_WindowsMeanTrigg_00117530[0xf]);
                          auVar30[0] = -((char)(short)plStack_5a8[2] == DAT_001174d0);
                          auVar30[1] = -((char)((ushort)(short)plStack_5a8[2] >> 8) == UNK_001174d1)
                          ;
                          auVar30[2] = -(UNK_001174d2 == '\0');
                          auVar30[3] = -(UNK_001174d3 == '\0');
                          auVar30[4] = -(UNK_001174d4 == '\0');
                          auVar30[5] = -(UNK_001174d5 == '\0');
                          auVar30[6] = -(UNK_001174d6 == '\0');
                          auVar30[7] = -(UNK_001174d7 == '\0');
                          auVar30[8] = -(UNK_001174d8 == '\0');
                          auVar30[9] = -(UNK_001174d9 == '\0');
                          auVar30[10] = -(UNK_001174da == '\0');
                          auVar30[0xb] = -(UNK_001174db == '\0');
                          auVar30[0xc] = -(UNK_001174dc == '\0');
                          auVar30[0xd] = -(UNK_001174dd == '\0');
                          auVar30[0xe] = -(UNK_001174de == '\0');
                          auVar30[0xf] = -(UNK_001174df == '\0');
                          auVar30 = auVar30 & auVar26;
                          local_7a1 = (ushort)((ushort)(SUB161(auVar30 >> 7,0) & 1) |
                                               (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
                                               (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
                                               (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
                                               (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
                                               (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
                                               (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
                                               (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
                                               (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
                                               (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
                                               (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
                                               (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
                                               (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
                                               (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
                                               (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe |
                                              (ushort)(byte)(auVar30[0xf] >> 7) << 0xf) == 0xffff;
                          break;
                        default:
                          goto switchD_001475e9_caseD_13;
                        case 3:
                          uVar4 = (undefined4)plStack_5a8[2];
                          auVar25[0] = -((char)uVar4 == s_gger_00117610[0]);
                          auVar25[1] = -((char)((uint)uVar4 >> 8) == s_gger_00117610[1]);
                          auVar25[2] = -((char)((uint)uVar4 >> 0x10) == s_gger_00117610[2]);
                          auVar25[3] = -((char)((uint)uVar4 >> 0x18) == s_gger_00117610[3]);
                          auVar25[4] = -(s_gger_00117610[4] == '\0');
                          auVar25[5] = -(s_gger_00117610[5] == '\0');
                          auVar25[6] = -(s_gger_00117610[6] == '\0');
                          auVar25[7] = -(s_gger_00117610[7] == '\0');
                          auVar25[8] = -(UNK_00117618 == '\0');
                          auVar25[9] = -(UNK_00117619 == '\0');
                          auVar25[10] = -(UNK_0011761a == '\0');
                          auVar25[0xb] = -(UNK_0011761b == '\0');
                          auVar25[0xc] = -(UNK_0011761c == '\0');
                          auVar25[0xd] = -(UNK_0011761d == '\0');
                          auVar25[0xe] = -(UNK_0011761e == '\0');
                          auVar25[0xf] = -(UNK_0011761f == '\0');
                          auVar29[0] = -((char)*plStack_5a8 == s_WindowsSharpeTri_00117620[0]);
                          auVar29[1] = -(*(char *)((long)plStack_5a8 + 1) ==
                                        s_WindowsSharpeTri_00117620[1]);
                          auVar29[2] = -(*(char *)((long)plStack_5a8 + 2) ==
                                        s_WindowsSharpeTri_00117620[2]);
                          auVar29[3] = -(*(char *)((long)plStack_5a8 + 3) ==
                                        s_WindowsSharpeTri_00117620[3]);
                          auVar29[4] = -(*(char *)((long)plStack_5a8 + 4) ==
                                        s_WindowsSharpeTri_00117620[4]);
                          auVar29[5] = -(*(char *)((long)plStack_5a8 + 5) ==
                                        s_WindowsSharpeTri_00117620[5]);
                          auVar29[6] = -(*(char *)((long)plStack_5a8 + 6) ==
                                        s_WindowsSharpeTri_00117620[6]);
                          auVar29[7] = -(*(char *)((long)plStack_5a8 + 7) ==
                                        s_WindowsSharpeTri_00117620[7]);
                          auVar29[8] = -((char)plStack_5a8[1] == s_WindowsSharpeTri_00117620[8]);
                          auVar29[9] = -(*(char *)((long)plStack_5a8 + 9) ==
                                        s_WindowsSharpeTri_00117620[9]);
                          auVar29[10] = -(*(char *)((long)plStack_5a8 + 10) ==
                                         s_WindowsSharpeTri_00117620[10]);
                          auVar29[0xb] = -(*(char *)((long)plStack_5a8 + 0xb) ==
                                          s_WindowsSharpeTri_00117620[0xb]);
                          auVar29[0xc] = -(*(char *)((long)plStack_5a8 + 0xc) ==
                                          s_WindowsSharpeTri_00117620[0xc]);
                          auVar29[0xd] = -(*(char *)((long)plStack_5a8 + 0xd) ==
                                          s_WindowsSharpeTri_00117620[0xd]);
                          auVar29[0xe] = -(*(char *)((long)plStack_5a8 + 0xe) ==
                                          s_WindowsSharpeTri_00117620[0xe]);
                          auVar29[0xf] = -(*(char *)((long)plStack_5a8 + 0xf) ==
                                          s_WindowsSharpeTri_00117620[0xf]);
                          auVar29 = auVar29 & auVar25;
                          local_7a1 = ((ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) |
                                                (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
                                                (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
                                                (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
                                                (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
                                                (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
                                                (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
                                                (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
                                                (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
                                                (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
                                                (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
                                                (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
                                                (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
                                                (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
                                                (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
                                               (ushort)(byte)(auVar29[0xf] >> 7) << 0xf) == 0xffff)
                                      << 2;
                          break;
                        case 5:
                          auVar31[0] = -(*(char *)((long)plStack_5a8 + 6) == DAT_001178d0);
                          auVar31[1] = -(*(char *)((long)plStack_5a8 + 7) == UNK_001178d1);
                          auVar31[2] = -((char)plStack_5a8[1] == UNK_001178d2);
                          auVar31[3] = -(*(char *)((long)plStack_5a8 + 9) == UNK_001178d3);
                          auVar31[4] = -(*(char *)((long)plStack_5a8 + 10) == UNK_001178d4);
                          auVar31[5] = -(*(char *)((long)plStack_5a8 + 0xb) == UNK_001178d5);
                          auVar31[6] = -(*(char *)((long)plStack_5a8 + 0xc) == UNK_001178d6);
                          auVar31[7] = -(*(char *)((long)plStack_5a8 + 0xd) == UNK_001178d7);
                          auVar31[8] = -(*(char *)((long)plStack_5a8 + 0xe) == UNK_001178d8);
                          auVar31[9] = -(*(char *)((long)plStack_5a8 + 0xf) == UNK_001178d9);
                          auVar31[10] = -((char)plStack_5a8[2] == UNK_001178da);
                          auVar31[0xb] = -(*(char *)((long)plStack_5a8 + 0x11) == UNK_001178db);
                          auVar31[0xc] = -(*(char *)((long)plStack_5a8 + 0x12) == UNK_001178dc);
                          auVar31[0xd] = -(*(char *)((long)plStack_5a8 + 0x13) == UNK_001178dd);
                          auVar31[0xe] = -(*(char *)((long)plStack_5a8 + 0x14) == UNK_001178de);
                          auVar31[0xf] = -(*(char *)((long)plStack_5a8 + 0x15) == UNK_001178df);
                          auVar27[0] = -((char)*plStack_5a8 == DAT_00117550);
                          auVar27[1] = -(*(char *)((long)plStack_5a8 + 1) == UNK_00117551);
                          auVar27[2] = -(*(char *)((long)plStack_5a8 + 2) == UNK_00117552);
                          auVar27[3] = -(*(char *)((long)plStack_5a8 + 3) == UNK_00117553);
                          auVar27[4] = -(*(char *)((long)plStack_5a8 + 4) == UNK_00117554);
                          auVar27[5] = -(*(char *)((long)plStack_5a8 + 5) == UNK_00117555);
                          auVar27[6] = -(*(char *)((long)plStack_5a8 + 6) == UNK_00117556);
                          auVar27[7] = -(*(char *)((long)plStack_5a8 + 7) == UNK_00117557);
                          auVar27[8] = -((char)plStack_5a8[1] == UNK_00117558);
                          auVar27[9] = -(*(char *)((long)plStack_5a8 + 9) == UNK_00117559);
                          auVar27[10] = -(*(char *)((long)plStack_5a8 + 10) == UNK_0011755a);
                          auVar27[0xb] = -(*(char *)((long)plStack_5a8 + 0xb) == UNK_0011755b);
                          auVar27[0xc] = -(*(char *)((long)plStack_5a8 + 0xc) == UNK_0011755c);
                          auVar27[0xd] = -(*(char *)((long)plStack_5a8 + 0xd) == UNK_0011755d);
                          auVar27[0xe] = -(*(char *)((long)plStack_5a8 + 0xe) == UNK_0011755e);
                          auVar27[0xf] = -(*(char *)((long)plStack_5a8 + 0xf) == UNK_0011755f);
                          auVar27 = auVar27 & auVar31;
                          if ((ushort)((ushort)(SUB161(auVar27 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
                                       (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
                                       (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
                                       (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
                                       (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
                                       (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
                                       (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
                                       (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
                                       (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
                                       (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
                                       (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
                                       (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
                                       (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
                                      (ushort)(byte)(auVar27[0xf] >> 7) << 0xf) != 0xffff)
                          goto switchD_001475e9_caseD_13;
                          local_7a1 = '\x03';
                        }
                      }
                      else {
switchD_001475e9_caseD_13:
                        local_7a1 = '\0';
                      }
                      (*(code *)PTR_clone_001d9828)
                                (&local_6d8,&local_7a0,
                                 &PTR_s_strategies_index_strategy_strate_001d3b88);
                    /* try { // try from 001476f9 to 00147715 has its CatchHandler @ 0014945a */
                      (*(code *)PTR_clone_001d9828)
                                (&local_438,&local_5e0,
                                 &PTR_s_strategies_index_strategy_strate_001d3ba0);
                      plVar1 = local_6a8 + 0x2a;
                      local_738 = local_6c8;
                      local_748 = local_6d8;
                      pdStack_740 = pdStack_6d0;
                      ppppppuStack_730 = local_438;
                      pdStack_728 = pdStack_430;
                      local_720 = local_428;
                    /* try { // try from 00147764 to 00147a16 has its CatchHandler @ 001494db */
                      alloc::collections::btree::map::BTreeMap<K,V,A>::entry
                                (&local_438,plVar1,&local_748);
                      lVar14 = alloc::collections::btree::map::entry::Entry<K,V,A>::or_insert_with
                                         (&local_438,&local_7a1,&local_5c8);
                      local_698 = local_698 / _s__00117a48;
                      local_710 = (undefined8 *******)((double)local_710 + local_698);
                      (*(code *)PTR_update_score_001d98a8)(local_710,local_658,0,0,lVar14,0);
                      local_698 = local_698 + local_788;
                      local_438 = local_4f8;
                      pdStack_430 = pdStack_4f0;
                      local_428 = local_4e8;
                      ppppppuStack_420 = ppppppuStack_4e0;
                      (*(code *)PTR_dynamic_threshold_001d98b0)
                                (local_698,local_4d8,lStack_4d0,local_4c8,&local_748,&local_438);
                      *(undefined8 ********)(lVar14 + 0x50) = local_738;
                      *(undefined8 *******)(lVar14 + 0x58) = ppppppuStack_730;
                      *(undefined8 *******)(lVar14 + 0x40) = local_748;
                      *(double **)(lVar14 + 0x48) = pdStack_740;
                    /* WARNING: Switch is manually overridden */
                      switch(local_7a1) {
                      case '\0':
                    /* WARNING: Switch is manually overridden */
                        switch(uVar12) {
                        default:
                          (*(code *)PTR_point_signal_trigger_pv3_spread_001d98b8)
                                    (lStack_560,local_640,local_498 * _DAT_001179c8,&local_438,
                                     lVar14);
                          goto LAB_0014795a;
                        case 1:
                          dVar34 = *(double *)(lVar14 + 0x38);
                          if (*(double *)(lVar14 + 0x40) <= dVar34) {
                            cVar11 = '\0';
                          }
                          else {
                            cVar11 = '\x03';
                            if ((dVar34 < *(double *)(lVar14 + 0x58)) &&
                               (cVar11 = '\x02', *(double *)(lVar14 + 0x50) < dVar34)) {
                              cVar11 = (*(double *)(lVar14 + 0x48) < dVar34) * '\x03' + '\x01';
                            }
                          }
                          goto LAB_001479c4;
                        case 3:
                          local_438 = (undefined8 ******)&UNK_001d3bb8;
                          pdStack_430 = (double *)0x1;
                          local_428 = (undefined8 *******)&DAT_00000008;
                          ppppppuStack_420 = (undefined8 ******)0x0;
                          pdStack_418 = (double *)0x0;
                    /* try { // try from 001493cb to 001493df has its CatchHandler @ 001494db */
                          (*(code *)PTR_panic_fmt_001d9760)
                                    (&local_438,&PTR_s_strategies_index_strategy_strate_001d3bc8);
                        }
                        goto LAB_0014941c;
                      case '\x01':
                        (*(code *)PTR_windows_mean_trigger_001d98d8)(local_558,&local_438,lVar14);
                        break;
                      case '\x02':
                        (*(code *)PTR_windows_std_trigger_001d98c8)(local_558,&local_438,lVar14);
                        break;
                      case '\x03':
                        (*(code *)PTR_windows_quantile_trigger_001d98d0)
                                  (lStack_550,local_558,&local_438,lVar14);
                        break;
                      case '\x04':
                        (*(code *)PTR_windows_sharpe_trigger_001d98c0)(local_558,&local_438,lVar14);
                        break;
                      case '\x05':
                        (*(code *)PTR_windows_rsi_trigger_001d98e0)(local_558,&local_438,lVar14);
                      }
LAB_0014795a:
                      pdVar16 = pdStack_430;
                      cVar11 = (char)local_438;
                      if ((char)local_438 == '\x05') goto LAB_00148f96;
LAB_001479c4:
                      uVar12 = (*(code *)PTR_margin_filter_001d98e8)(param_3,cVar11);
                      (*(code *)PTR_dynamic_pending_ts_ms_001d98f0)
                                (local_698,lStack_4c0,local_4b8,local_4a8,lStack_4b0);
                      pdVar16 = (double *)(*(code *)PTR_cancel_by_pending_ts_001d98f8)(param_3,1);
                      if (pdVar16 != (double *)0x0) goto LAB_00148f96;
                      uStack_680 = 0;
                      uStack_678 = 8;
                      uStack_670 = 0;
                    /* try { // try from 00147a47 to 00147b06 has its CatchHandler @ 00149452 */
                      cVar9 = (*(code *)PTR_impact_block_check_001d9900)
                                        (local_710,local_6f8,local_6e8,param_3,uVar12);
                      cVar11 = cVar9;
                      if ((cVar9 != '\x04') && ((char)local_480 != '\0')) {
                        plVar2 = local_6a8 + 0x2d;
                        lVar14 = alloc::collections::btree::map::BTreeMap<K,V,A>::get
                                           (plVar2,&local_7a0);
                        if ((lVar14 != 0) &&
                           ((cVar11 = '\x04', 0.0 < local_490 &&
                            (local_490 <=
                             ((double)local_710 - *(double *)(lVar14 + 0x10)) * _s__00117a48)))) {
                          alloc::collections::btree::map::BTreeMap<K,V,A>::remove
                                    (&local_438,plVar2,&local_7a0);
                          cVar11 = cVar9;
                        }
                      }
                      (*(code *)PTR_clone_001d9828)
                                (&ppppppuStack_628,&local_7a0,
                                 &PTR_s_strategies_index_strategy_strate_001d3be0);
                    /* try { // try from 00147b07 to 00147b20 has its CatchHandler @ 00149426 */
                      (*(code *)PTR_clone_001d9828)
                                (&local_748,&local_5e0,
                                 &PTR_s_strategies_index_strategy_strate_001d3bf8);
                      local_6c8 = pppppppuStack_618;
                      local_6d8 = ppppppuStack_628;
                      pdStack_6d0 = pdStack_620;
                      ppppppuStack_6c0 = local_748;
                      pdStack_6b8 = pdStack_740;
                      pppppppuStack_6b0 = local_738;
                    /* try { // try from 00147b60 to 00147bd1 has its CatchHandler @ 001494e0 */
                      lVar14 = alloc::collections::btree::map::BTreeMap<K,V,A>::get
                                         (plVar1,&local_6d8);
                      if (lVar14 == 0) {
                    /* try { // try from 00149385 to 00149391 has its CatchHandler @ 001494e0 */
                        (*(code *)PTR_unwrap_failed_001d9750)
                                  (&PTR_s_strategies_index_strategy_strate_001d3c10);
                        goto LAB_0014941c;
                      }
                      local_478 = *(long *)(lVar14 + 0x30);
                      lStack_470 = *(long *)(lVar14 + 0x38);
                      ppppppuStack_628 = *(undefined8 *******)(lVar14 + 0x40);
                      pdStack_620 = *(double **)(lVar14 + 0x48);
                      pppppppuStack_618 = *(undefined8 ********)(lVar14 + 0x50);
                      uStack_610 = *(undefined8 *)(lVar14 + 0x58);
                      local_608 = *(undefined8 *******)(lVar14 + 0x60);
                      lStack_600 = *(long *)(lVar14 + 0x68);
                      local_468 = *(long *)(lVar14 + 0x70);
                      lStack_460 = *(long *)(lVar14 + 0x78);
                      local_788 = *(double *)(lVar14 + 0x80);
                      lStack_780 = *(long *)(lVar14 + 0x88);
                      _<hashbrown::map::HashMap<K,V,S,A>as_core::clone::Clone>::clone
                                (&local_748,lVar14);
                      pdStack_418 = pdStack_728;
                      pppppppuStack_410 = local_720;
                      local_428 = local_738;
                      ppppppuStack_420 = ppppppuStack_730;
                      local_438 = local_748;
                      pdStack_430 = pdStack_740;
                      lStack_408 = local_478;
                      lStack_400 = lStack_470;
                      ppppppuStack_3f8 = ppppppuStack_628;
                      pdStack_3f0 = pdStack_620;
                      pppppppuStack_3e8 = pppppppuStack_618;
                      uStack_3e0 = uStack_610;
                      ppppppuStack_3d8 = local_608;
                      lStack_3d0 = lStack_600;
                      lStack_3c8 = local_468;
                      lStack_3c0 = lStack_460;
                      dStack_3b8 = local_788;
                      lStack_3b0 = lStack_780;
                      core::ptr::drop_in_place<(alloc::string::String,alloc::string::String)>
                                (&local_6d8);
                    /* WARNING: Switch is manually overridden */
                      switch(cVar11) {
                      case '\0':
                        if ((local_778 < _DAT_00117a58) && (local_698 < dStack_530 / _s__00117a48))
                        break;
                    /* try { // try from 00147cdb to 00147cff has its CatchHandler @ 0014941e */
                        (*(code *)PTR_get_quote_price_001d9908)
                                  (local_788,lStack_780,local_6e8,local_6f8,lStack_540,local_548,
                                   &local_748,0,&ppppppuStack_3f8);
                        bVar10 = (byte)pdStack_740;
                        uVar17 = (ulong)pdStack_740 & 0xff;
                        pdStack_758 = pdStack_728;
                        pppppppuStack_768 = local_738;
                        ppppppuStack_760 = ppppppuStack_730;
                    /* try { // try from 00147d26 to 00147d3f has its CatchHandler @ 00149497 */
                        local_788 = (double)(*(code *)PTR_round_with_step_f64_001d97f8)
                                                      (local_748,local_708,1);
                        uVar18 = 1;
                        if (bVar10 - 1 < 2) {
                          local_708 = local_4a8;
                        }
                        else if (bVar10 == 0) {
                          local_708 = DAT_00117980;
                        }
                        else {
                          uVar18 = 0;
                        }
                        dVar34 = local_778;
                        if (local_778 <= 0.0) {
                          dVar34 = 0.0;
                        }
                        dVar32 = (double)(~-(ulong)(local_518 < 0.0) & (ulong)local_518 |
                                         -(ulong)(local_518 < 0.0) & DAT_00117978) - dVar34;
                        dVar34 = ((double)(~-(ulong)(dStack_510 < 0.0) & (ulong)dStack_510 |
                                          -(ulong)(dStack_510 < 0.0) & DAT_00117978) /
                                 (double)local_5f8) / (double)local_6e8 - dVar34;
                        dVar36 = (double)(~-(ulong)((double)local_528 < 0.0) & (ulong)local_528 |
                                         -(ulong)((double)local_528 < 0.0) & DAT_00117978);
                        dVar35 = ((double)(~-(ulong)(dStack_520 < 0.0) & (ulong)dStack_520 |
                                          -(ulong)(dStack_520 < 0.0) & DAT_00117978) /
                                 (double)local_5f8) / (double)local_6e8;
                        if (dVar35 <= DAT_001179b8) {
                          dVar35 = DAT_001179b8;
                        }
                        dVar22 = (double)(~-(ulong)(local_508 < 0.0) & (ulong)local_508 |
                                         -(ulong)(local_508 < 0.0) & DAT_00117978);
                        dVar37 = ((double)(~-(ulong)(dStack_500 < 0.0) & (ulong)dStack_500 |
                                          DAT_00117978 & -(ulong)(dStack_500 < 0.0)) /
                                 (double)local_5f8) / (double)local_6e8;
                        if (dVar37 <= DAT_001179b8) {
                          dVar37 = DAT_001179b8;
                        }
                        dVar33 = dVar34;
                        if (dVar32 <= dVar34) {
                          dVar33 = dVar32;
                        }
                        dVar34 = (double)(~-(ulong)NAN(dVar32) & (ulong)dVar33 |
                                         -(ulong)NAN(dVar32) & (ulong)dVar34);
                        if (dVar35 <= dVar36) {
                          dVar36 = dVar35;
                        }
                        if (dVar36 <= dVar34) {
                          dVar34 = dVar36;
                        }
                        if (dVar37 <= dVar22) {
                          dVar22 = dVar37;
                        }
                        dVar36 = local_778;
                        if (0.0 <= local_778) {
                          dVar36 = 0.0;
                        }
                        if ((double)((ulong)dVar36 ^ _DAT_00117870) <= dVar22) {
                          dVar22 = (double)((ulong)dVar36 ^ _DAT_00117870);
                        }
                        dVar22 = dVar22 + dVar34;
                        if (dVar22 <= 0.0) {
                          dVar22 = 0.0;
                        }
                    /* try { // try from 001486e9 to 001487b6 has its CatchHandler @ 00149497 */
                        uVar17 = (*(code *)PTR_get_quote_vol_001d9910)(dVar22,lStack_4a0,uVar17,1);
                        if ((uVar17 & 1) != 0) {
                          uVar23 = (*(code *)PTR_round_with_step_f64_001d97f8)
                                             (extraout_XMM0_Qa_00,local_668,1);
                          local_778 = (double)strategy_sm1::apply_book_vol_cap
                                                        (uVar23,local_788,local_668,bVar10,1,
                                                         &local_140,&local_5c8);
                          dStack_770 = extraout_XMM0_Qb_00;
                          pdVar16 = (double *)
                                    strategy_sm1::cancel_order_use_range
                                              (local_788,(double)local_6f8 - dStack_78,param_3,
                                               local_798,local_790,1,&uStack_680);
                          if ((pdVar16 == (double *)0x0) &&
                             ((bVar10 != 0 ||
                              (pdVar16 = (double *)
                                         strategy_sm1::cancel_side
                                                   (param_3,local_798,local_790,1,&uStack_680),
                              pdVar16 == (double *)0x0)))) {
                            lVar14 = strategy_sm1::live_pending_counts
                                               (param_3,local_798,local_790,uStack_678,uStack_670);
                            if ((DAT_001179b0 < (double)(_DAT_001172d0 & (ulong)local_778)) &&
                               (lVar14 == 0)) {
                              dStack_6a0 = (double)(*(code *)PTR_round_001d9918)(local_698);
                              local_748 = &local_640;
                              pdStack_740 = (double *)PTR_fmt_001d9920;
                              local_738 = &pppppppuStack_768;
                              ppppppuStack_730 =
                                   (undefined8 ******)
                                   _<alloc::string::String_as_core::fmt::Display>::fmt;
                              pdStack_728 = &dStack_6a0;
                              local_720 = (undefined8 *******)PTR_fmt_001d9920;
                              local_6d8 = (undefined8 ******)&DAT_001d3c40;
                              pdStack_6d0 = (double *)0x3;
                              pdStack_6b8 = (double *)0x0;
                              ppppppuStack_6c0 = (undefined8 ******)0x3;
                    /* try { // try from 0014887c to 001489f8 has its CatchHandler @ 00149497 */
                              local_6c8 = &local_748;
                              (*(code *)PTR_format_inner_001d9810)(&uStack_1a0,&local_6d8);
                              uStack_200 = 0x700;
                              dStack_230 = local_788;
                              dStack_228 = local_778;
                              pdStack_220 = local_6e8;
                              dStack_218 = local_658;
                              ppppppuStack_210 = ppppppuStack_3f8;
                              pdStack_208 = local_538;
                              uStack_248 = uStack_1a0;
                              uStack_240 = uStack_198;
                              uStack_238 = uStack_190;
                              pdVar16 = (double *)
                                        (*(code *)PTR_place_order_iap_with_target_001d9928)
                                                  (local_708,param_3,&uStack_248,uVar18);
                              if (pdVar16 != (double *)0x0) goto LAB_00148f62;
                              if ((char)local_480 != '\0') {
                                (*(code *)PTR_clone_001d9828)
                                          (&ppppppuStack_628,&local_7a0,
                                           &PTR_s_strategies_index_strategy_strate_001d3c70);
                                local_6d8 = local_6f8;
                                pdStack_6d0 = local_6e8;
                                local_6c8 = local_710;
                                alloc::collections::btree::map::BTreeMap<K,V,A>::insert
                                          (&local_748,local_6a8 + 0x2d,&ppppppuStack_628,&local_6d8)
                                ;
                              }
                            }
LAB_00149267:
                            if (pppppppuStack_768 != (undefined8 *******)0x0) {
                              (*(code *)PTR___rust_dealloc_001d96d0)
                                        (ppppppuStack_760,pppppppuStack_768,1);
                            }
override_jmp_00147c89_case_4:
                    /* try { // try from 00149281 to 0014928d has its CatchHandler @ 00149452 */
                            _<hashbrown::raw::RawTable<T,A>as_core::ops::drop::Drop>::drop
                                      (&local_438);
                            core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>
                                      (&uStack_680);
                            if (local_120 != 0) {
                              (*(code *)PTR___rust_dealloc_001d96d0)(local_118,local_120,1);
                            }
                            if (local_5e0 != 0) {
                              (*(code *)PTR___rust_dealloc_001d96d0)(local_5d8,local_5e0,1);
                            }
                            if (local_7a0 != 0) {
                              (*(code *)PTR___rust_dealloc_001d96d0)(local_798,local_7a0,1);
                            }
                            core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>
                                      (&local_450);
                            core::ptr::drop_in_place<strategy_sm1::SM1Params>(&local_5c8);
                            core::ptr::drop_in_place<future_backtest_sdk::types::StrategyPara>
                                      (&local_330);
                            return (double *)0x0;
                          }
LAB_00148f62:
                          if (pppppppuStack_768 != (undefined8 *******)0x0) {
                            (*(code *)PTR___rust_dealloc_001d96d0)
                                      (ppppppuStack_760,pppppppuStack_768,1);
                          }
                          goto LAB_00148f7c;
                        }
                    /* try { // try from 001493e2 to 001493ee has its CatchHandler @ 00149497 */
                        (*(code *)PTR_unwrap_failed_001d9750)
                                  (&PTR_s_strategies_index_strategy_strate_001d3c28);
                        goto LAB_0014941c;
                      case '\x01':
                        if ((local_778 <= DAT_001179b0) || (dStack_530 / _s__00117a48 <= local_698))
                        {
                          if (local_778 <= 0.0) goto override_jmp_00147c89_case_4;
                    /* try { // try from 00147ebf to 00147ee3 has its CatchHandler @ 0014941e */
                          (*(code *)PTR_get_quote_price_001d9908)
                                    (local_788,lStack_780,local_6e8,local_6f8,lStack_540,local_548,
                                     &local_748,1,&ppppppuStack_3f8);
                          bVar7 = (byte)pdStack_740;
                          uVar17 = (ulong)pdStack_740 & 0xff;
                          pdStack_758 = pdStack_728;
                          pppppppuStack_768 = local_738;
                          ppppppuStack_760 = ppppppuStack_730;
                    /* try { // try from 00147f0a to 00147f23 has its CatchHandler @ 00149493 */
                          local_788 = (double)(*(code *)PTR_round_with_step_f64_001d97f8)
                                                        (local_748,local_708,1);
                          local_708 = (undefined8 ******)0x1;
                          if (bVar7 - 1 < 2) {
                            local_608 = local_4a8;
                          }
                          else if (bVar7 == 0) {
                            local_608 = DAT_00117980;
                          }
                          else {
                            local_708 = (undefined8 ******)0x0;
                          }
                          uVar21 = -(ulong)(local_508 < (double)((ulong)local_508 ^ _DAT_00117870));
                          dVar35 = (double)(uVar21 & DAT_00117988 |
                                           ~uVar21 & ((ulong)local_508 ^ _DAT_00117870));
                          uVar21 = -(ulong)(dStack_500 < (double)((ulong)dStack_500 ^ _DAT_00117870)
                                           );
                          dVar36 = ((double)(uVar21 & DAT_00117988 |
                                            ~uVar21 & ((ulong)dStack_500 ^ _DAT_00117870)) /
                                   (double)local_5f8) / (double)local_6f8;
                          dVar34 = dVar36;
                          if (dVar36 <= dVar35) {
                            dVar34 = dVar35;
                          }
                          dVar34 = (double)(~-(ulong)NAN(dVar35) & (ulong)dVar34 |
                                           -(ulong)NAN(dVar35) & (ulong)dVar36);
                          dVar36 = local_778;
                          if (local_778 <= 0.0) {
                            dVar36 = 0.0;
                          }
                          if (dVar34 <= (double)((ulong)dVar36 ^ _DAT_00117870)) {
                            dVar34 = (double)((ulong)dVar36 ^ _DAT_00117870);
                          }
                    /* try { // try from 00148ea0 to 00148f55 has its CatchHandler @ 00149493 */
                          uVar18 = (*(code *)PTR_round_with_step_f64_001d97f8)(dVar34,local_668,1);
                          uVar17 = (*(code *)PTR_get_quote_vol_001d9910)(uVar18,lStack_4a0,uVar17,1)
                          ;
                          if ((uVar17 & 1) != 0) {
                            uVar18 = (*(code *)PTR_round_with_step_f64_001d97f8)
                                               (extraout_XMM0_Qa_02,local_668,1);
                            local_778 = (double)strategy_sm1::apply_book_vol_cap
                                                          (uVar18,local_788,local_668,bVar7,0,
                                                           &local_140,&local_5c8);
                            dStack_770 = extraout_XMM0_Qb_02;
                            pdVar16 = (double *)
                                      strategy_sm1::cancel_order_use_range
                                                (local_788,dStack_c8 - (double)local_6e8,param_3,
                                                 local_798,local_790,0,&uStack_680);
                    /* try { // try from 00149360 to 00149373 has its CatchHandler @ 00149493 */
                            if ((pdVar16 == (double *)0x0) &&
                               ((bVar7 != 0 ||
                                (pdVar16 = (double *)
                                           strategy_sm1::cancel_side
                                                     (param_3,local_798,local_790,0,&uStack_680),
                                pdVar16 == (double *)0x0)))) {
                    /* try { // try from 0014901c to 00149025 has its CatchHandler @ 00149493 */
                              strategy_sm1::live_pending_counts
                                        (param_3,local_798,local_790,uStack_678,uStack_670);
                              if ((DAT_001179b0 < (double)(_DAT_001172d0 & (ulong)local_778)) &&
                                 (extraout_RDX_00 == 0)) {
                                dStack_6a0 = (double)(*(code *)PTR_round_001d9918)
                                                               (local_698 * DAT_001179f8);
                                dStack_6a0 = dStack_6a0 / DAT_001179f8;
                                local_748 = &local_640;
                                pdStack_740 = (double *)PTR_fmt_001d9920;
                                local_738 = &pppppppuStack_768;
                                ppppppuStack_730 =
                                     (undefined8 ******)
                                     _<alloc::string::String_as_core::fmt::Display>::fmt;
                                pdStack_728 = &dStack_6a0;
                                local_720 = (undefined8 *******)PTR_fmt_001d9920;
                                local_6d8 = (undefined8 ******)&DAT_001d3c40;
                                pdStack_6d0 = (double *)0x3;
                                pdStack_6b8 = (double *)0x0;
                                local_6c8 = &local_748;
                                ppppppuStack_6c0 = (undefined8 ******)0x3;
                    /* try { // try from 00149100 to 00149266 has its CatchHandler @ 00149493 */
                                (*(code *)PTR_format_inner_001d9810)(&uStack_170,&local_6d8);
                                cStack_2af = (bVar10 != 0) * '\x03' + '\x05';
                                uStack_2b0 = 1;
                                dStack_2e0 = local_788;
                                dStack_2d8 = local_778;
                                ppppppuStack_2d0 = local_6f8;
                                dStack_2c8 = local_658;
                                pdStack_2c0 = pdStack_3f0;
                                pdStack_2b8 = local_538;
                                uStack_2f8 = uStack_170;
                                uStack_2f0 = uStack_168;
                                uStack_2e8 = uStack_160;
                                pdVar16 = (double *)
                                          (*(code *)PTR_place_order_iap_with_target_001d9928)
                                                    (local_608,param_3,&uStack_2f8,local_708);
                                if (pdVar16 != (double *)0x0) goto LAB_00148f62;
                                if ((char)local_480 != '\0') {
                                  (*(code *)PTR_clone_001d9828)
                                            (&ppppppuStack_628,&local_7a0,
                                             &PTR_s_strategies_index_strategy_strate_001d3ca0);
                                  local_6d8 = local_6f8;
                                  pdStack_6d0 = local_6e8;
                                  local_6c8 = local_710;
                                  alloc::collections::btree::map::BTreeMap<K,V,A>::insert
                                            (&local_748,local_6a8 + 0x2d,&ppppppuStack_628,
                                             &local_6d8);
                                }
                              }
                              goto LAB_00149267;
                            }
                            goto LAB_00148f62;
                          }
                    /* try { // try from 0014940f to 0014941b has its CatchHandler @ 00149493 */
                          (*(code *)PTR_unwrap_failed_001d9750)
                                    (&PTR_s_strategies_index_strategy_strate_001d3c88);
                          goto LAB_0014941c;
                        }
                        break;
                      case '\x02':
                        if ((local_778 <= DAT_001179b0) || (dStack_530 / _s__00117a48 <= local_698))
                        {
                    /* try { // try from 00147fa9 to 00147fd0 has its CatchHandler @ 0014941e */
                          (*(code *)PTR_get_quote_price_001d9908)
                                    (local_788,lStack_780,local_6e8,local_6f8,lStack_540,local_548,
                                     &local_748,2,&ppppppuStack_3f8);
                          bVar10 = (byte)pdStack_740;
                          uVar17 = (ulong)pdStack_740 & 0xff;
                          pdStack_758 = pdStack_728;
                          pppppppuStack_768 = local_738;
                          ppppppuStack_760 = ppppppuStack_730;
                    /* try { // try from 00147ff7 to 0014832c has its CatchHandler @ 00149499 */
                          local_788 = (double)(*(code *)PTR_round_with_step_f64_001d97f8)
                                                        (local_748,local_708,1);
                          uVar18 = 1;
                          if (bVar10 - 1 < 2) {
                            local_708 = local_4a8;
                          }
                          else if (bVar10 == 0) {
                            local_708 = DAT_00117980;
                          }
                          else {
                            uVar18 = 0;
                          }
                          uVar21 = -(ulong)(local_518 < (double)((ulong)local_518 ^ _DAT_00117870));
                          dVar34 = local_778;
                          if (0.0 <= local_778) {
                            dVar34 = 0.0;
                          }
                          dVar32 = (double)(uVar21 & DAT_00117988 |
                                           ~uVar21 & ((ulong)local_518 ^ _DAT_00117870)) - dVar34;
                          uVar21 = -(ulong)(dStack_510 < (double)((ulong)dStack_510 ^ _DAT_00117870)
                                           );
                          dVar34 = ((double)(uVar21 & DAT_00117988 |
                                            ~uVar21 & ((ulong)dStack_510 ^ _DAT_00117870)) /
                                   (double)local_5f8) / (double)local_6f8 - dVar34;
                          dVar35 = (double)(~-(ulong)((double)local_528 < 0.0) & (ulong)local_528 |
                                           -(ulong)((double)local_528 < 0.0) & DAT_00117978);
                          dVar36 = ((double)(~-(ulong)(dStack_520 < 0.0) & (ulong)dStack_520 |
                                            -(ulong)(dStack_520 < 0.0) & DAT_00117978) /
                                   (double)local_5f8) / (double)local_6f8;
                          if (dVar36 <= DAT_001179b8) {
                            dVar36 = DAT_001179b8;
                          }
                          dVar22 = (double)(~-(ulong)(local_508 < 0.0) & (ulong)local_508 |
                                           -(ulong)(local_508 < 0.0) & DAT_00117978);
                          dVar37 = ((double)(~-(ulong)(dStack_500 < 0.0) & (ulong)dStack_500 |
                                            DAT_00117978 & -(ulong)(dStack_500 < 0.0)) /
                                   (double)local_5f8) / (double)local_6f8;
                          if (dVar37 <= DAT_001179b8) {
                            dVar37 = DAT_001179b8;
                          }
                          dVar33 = dVar34;
                          if (dVar34 <= dVar32) {
                            dVar33 = dVar32;
                          }
                          dVar34 = (double)(~-(ulong)NAN(dVar32) & (ulong)dVar33 |
                                           -(ulong)NAN(dVar32) & (ulong)dVar34);
                          if (dVar36 <= dVar35) {
                            dVar35 = dVar36;
                          }
                          if (dVar34 <= (double)((ulong)dVar35 ^ _DAT_00117870)) {
                            dVar34 = (double)((ulong)dVar35 ^ _DAT_00117870);
                          }
                          if (dVar37 <= dVar22) {
                            dVar22 = dVar37;
                          }
                          dVar36 = local_778;
                          if (local_778 <= 0.0) {
                            dVar36 = 0.0;
                          }
                          if (dVar36 <= dVar22) {
                            dVar22 = dVar36;
                          }
                          dVar34 = dVar34 - dVar22;
                          if (0.0 <= dVar34) {
                            dVar34 = 0.0;
                          }
                          uVar23 = (*(code *)PTR_round_with_step_f64_001d97f8)(dVar34,local_668,1);
                          uVar17 = (*(code *)PTR_get_quote_vol_001d9910)(uVar23,lStack_4a0,uVar17,1)
                          ;
                          if ((uVar17 & 1) != 0) {
                            uVar23 = (*(code *)PTR_round_with_step_f64_001d97f8)
                                               (extraout_XMM0_Qa,local_668,1);
                            local_778 = (double)strategy_sm1::apply_book_vol_cap
                                                          (uVar23,local_788,local_668,bVar10,0,
                                                           &local_140,&local_5c8);
                            dStack_770 = extraout_XMM0_Qb;
                            pdVar16 = (double *)
                                      strategy_sm1::cancel_order_use_range
                                                (local_788,dStack_c8 - (double)local_6e8,param_3,
                                                 local_798,local_790,0,&uStack_680);
                    /* try { // try from 00148a14 to 00148a27 has its CatchHandler @ 00149499 */
                            if ((pdVar16 == (double *)0x0) &&
                               ((bVar10 != 0 ||
                                (pdVar16 = (double *)
                                           strategy_sm1::cancel_side
                                                     (param_3,local_798,local_790,0,&uStack_680),
                                pdVar16 == (double *)0x0)))) {
                              strategy_sm1::live_pending_counts
                                        (param_3,local_798,local_790,uStack_678,uStack_670);
                              if ((DAT_001179b0 < (double)(_DAT_001172d0 & (ulong)local_778)) &&
                                 (extraout_RDX == 0)) {
                                dStack_6a0 = (double)(*(code *)PTR_round_001d9918)
                                                               (local_698 * DAT_001179f8);
                                dStack_6a0 = dStack_6a0 / DAT_001179f8;
                                local_748 = &local_640;
                                pdStack_740 = (double *)PTR_fmt_001d9920;
                                local_738 = &pppppppuStack_768;
                                ppppppuStack_730 =
                                     (undefined8 ******)
                                     _<alloc::string::String_as_core::fmt::Display>::fmt;
                                pdStack_728 = &dStack_6a0;
                                local_720 = (undefined8 *******)PTR_fmt_001d9920;
                                local_6d8 = (undefined8 ******)&DAT_001d3c40;
                                pdStack_6d0 = (double *)0x3;
                                pdStack_6b8 = (double *)0x0;
                                ppppppuStack_6c0 = (undefined8 ******)0x3;
                    /* try { // try from 00148402 to 00148558 has its CatchHandler @ 00149499 */
                                local_6c8 = &local_748;
                                (*(code *)PTR_format_inner_001d9810)(&uStack_188,&local_6d8);
                                uStack_1b0 = 0x802;
                                dStack_1e0 = local_788;
                                dStack_1d8 = local_778;
                                ppppppuStack_1d0 = local_6f8;
                                dStack_1c8 = local_658;
                                pppppppuStack_1c0 = pppppppuStack_3e8;
                                pdStack_1b8 = local_538;
                                uStack_1f8 = uStack_188;
                                uStack_1f0 = uStack_180;
                                uStack_1e8 = uStack_178;
                                pdVar16 = (double *)
                                          (*(code *)PTR_place_order_iap_with_target_001d9928)
                                                    (local_708,param_3,&uStack_1f8,uVar18);
                                if (pdVar16 != (double *)0x0) goto LAB_00148f62;
                                if ((char)local_480 != '\0') {
                                  (*(code *)PTR_clone_001d9828)
                                            (&ppppppuStack_628,&local_7a0,
                                             &PTR_s_strategies_index_strategy_strate_001d3cd0);
                                  local_6d8 = local_6f8;
                                  pdStack_6d0 = local_6e8;
                                  local_6c8 = local_710;
                                  alloc::collections::btree::map::BTreeMap<K,V,A>::insert
                                            (&local_748,local_6a8 + 0x2d,&ppppppuStack_628,
                                             &local_6d8);
                                }
                              }
                              goto LAB_00149267;
                            }
                            goto LAB_00148f62;
                          }
                    /* try { // try from 001493f1 to 001493fd has its CatchHandler @ 00149499 */
                          (*(code *)PTR_unwrap_failed_001d9750)
                                    (&PTR_s_strategies_index_strategy_strate_001d3cb8);
                          goto LAB_0014941c;
                        }
                        break;
                      case '\x03':
                        if ((_DAT_00117a58 <= local_778) || (dStack_530 / _s__00117a48 <= local_698)
                           ) {
                          if (0.0 <= local_778) goto override_jmp_00147c89_case_4;
                    /* try { // try from 00147dc9 to 00147df0 has its CatchHandler @ 0014941e */
                          (*(code *)PTR_get_quote_price_001d9908)
                                    (local_788,lStack_780,local_6e8,local_6f8,lStack_540,local_548,
                                     &local_748,3,&ppppppuStack_3f8);
                          bVar7 = (byte)pdStack_740;
                          uVar17 = (ulong)pdStack_740 & 0xff;
                          pdStack_758 = pdStack_728;
                          pppppppuStack_768 = local_738;
                          ppppppuStack_760 = ppppppuStack_730;
                    /* try { // try from 00147e17 to 00147e30 has its CatchHandler @ 00149495 */
                          local_788 = (double)(*(code *)PTR_round_with_step_f64_001d97f8)
                                                        (local_748,local_708,1);
                          uVar18 = 1;
                          if (bVar7 - 1 < 2) {
                            local_708 = local_4a8;
                          }
                          else if (bVar7 == 0) {
                            local_708 = DAT_00117980;
                          }
                          else {
                            uVar18 = 0;
                          }
                          dVar34 = (double)(~-(ulong)(local_508 < 0.0) & (ulong)local_508 |
                                           -(ulong)(local_508 < 0.0) & DAT_00117978);
                          dVar35 = ((double)(~-(ulong)(dStack_500 < 0.0) & (ulong)dStack_500 |
                                            DAT_00117978 & -(ulong)(dStack_500 < 0.0)) /
                                   (double)local_5f8) / (double)local_6e8;
                          dVar36 = dVar35;
                          if (dVar34 <= dVar35) {
                            dVar36 = dVar34;
                          }
                          dVar34 = (double)(~-(ulong)NAN(dVar34) & (ulong)dVar36 |
                                           -(ulong)NAN(dVar34) & (ulong)dVar35);
                          dVar36 = local_778;
                          if (0.0 <= local_778) {
                            dVar36 = 0.0;
                          }
                          if ((double)((ulong)dVar36 ^ _DAT_00117870) <= dVar34) {
                            dVar34 = (double)((ulong)dVar36 ^ _DAT_00117870);
                          }
                    /* try { // try from 00148acd to 00148bb7 has its CatchHandler @ 00149495 */
                          uVar23 = (*(code *)PTR_round_with_step_f64_001d97f8)(dVar34,local_668,1);
                          uVar17 = (*(code *)PTR_get_quote_vol_001d9910)(uVar23,lStack_4a0,uVar17,1)
                          ;
                          if ((uVar17 & 1) != 0) {
                            uVar23 = (*(code *)PTR_round_with_step_f64_001d97f8)
                                               (extraout_XMM0_Qa_01,local_668,1);
                            local_778 = (double)strategy_sm1::apply_book_vol_cap
                                                          (uVar23,local_788,local_668,bVar7,1,
                                                           &local_140,&local_5c8);
                            dStack_770 = extraout_XMM0_Qb_01;
                            pdVar16 = (double *)
                                      strategy_sm1::cancel_order_use_range
                                                (local_788,(double)local_6f8 - dStack_78,param_3,
                                                 local_798,local_790,1,&uStack_680);
                    /* try { // try from 0014932e to 00149344 has its CatchHandler @ 00149495 */
                            if ((pdVar16 == (double *)0x0) &&
                               ((bVar7 != 0 ||
                                (pdVar16 = (double *)
                                           strategy_sm1::cancel_side
                                                     (param_3,local_798,local_790,1,&uStack_680),
                                pdVar16 == (double *)0x0)))) {
                              lVar14 = strategy_sm1::live_pending_counts
                                                 (param_3,local_798,local_790,uStack_678,uStack_670)
                              ;
                              if ((DAT_001179b0 < (double)(_DAT_001172d0 & (ulong)local_778)) &&
                                 (lVar14 == 0)) {
                                dStack_6a0 = (double)(*(code *)PTR_round_001d9918)
                                                               (local_698 * DAT_001179f8);
                                dStack_6a0 = dStack_6a0 / DAT_001179f8;
                                local_748 = &local_640;
                                pdStack_740 = (double *)PTR_fmt_001d9920;
                                local_738 = &pppppppuStack_768;
                                ppppppuStack_730 =
                                     (undefined8 ******)
                                     _<alloc::string::String_as_core::fmt::Display>::fmt;
                                pdStack_728 = &dStack_6a0;
                                local_720 = (undefined8 *******)PTR_fmt_001d9920;
                                local_6d8 = (undefined8 ******)&DAT_001d3c40;
                                pdStack_6d0 = (double *)0x3;
                                pdStack_6b8 = (double *)0x0;
                                ppppppuStack_6c0 = (undefined8 ******)0x3;
                    /* try { // try from 00148c8d to 00148ded has its CatchHandler @ 00149495 */
                                local_6c8 = &local_748;
                                (*(code *)PTR_format_inner_001d9810)(&uStack_158,&local_6d8);
                                bStack_25f = bVar10 | 6;
                                uStack_260 = 3;
                                dStack_290 = local_788;
                                dStack_288 = local_778;
                                pdStack_280 = local_6e8;
                                dStack_278 = local_658;
                                uStack_270 = uStack_3e0;
                                pdStack_268 = local_538;
                                uStack_2a8 = uStack_158;
                                uStack_2a0 = uStack_150;
                                uStack_298 = uStack_148;
                                pdVar16 = (double *)
                                          (*(code *)PTR_place_order_iap_with_target_001d9928)
                                                    (local_708,param_3,&uStack_2a8,uVar18);
                                if (pdVar16 != (double *)0x0) goto LAB_00148f62;
                                if ((char)local_480 != '\0') {
                                  (*(code *)PTR_clone_001d9828)
                                            (&ppppppuStack_628,&local_7a0,
                                             &PTR_s_strategies_index_strategy_strate_001d3d00);
                                  local_6d8 = local_6f8;
                                  pdStack_6d0 = local_6e8;
                                  local_6c8 = local_710;
                                  alloc::collections::btree::map::BTreeMap<K,V,A>::insert
                                            (&local_748,local_6a8 + 0x2d,&ppppppuStack_628,
                                             &local_6d8);
                                }
                              }
                              goto LAB_00149267;
                            }
                            goto LAB_00148f62;
                          }
                    /* try { // try from 00149400 to 0014940c has its CatchHandler @ 00149495 */
                          (*(code *)PTR_unwrap_failed_001d9750)
                                    (&PTR_s_strategies_index_strategy_strate_001d3ce8);
                          goto LAB_0014941c;
                        }
                        break;
                      case '\x04':
                        goto override_jmp_00147c89_case_4;
                      }
                      pdVar16 = (double *)0x0;
LAB_00148f7c:
                    /* try { // try from 00148f7c to 00148f88 has its CatchHandler @ 00149452 */
                      _<hashbrown::raw::RawTable<T,A>as_core::ops::drop::Drop>::drop(&local_438);
                      core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&uStack_680);
                    }
                    else {
                      pdVar16 = (double *)0x0;
                    }
LAB_00148f96:
                    if (local_120 != 0) {
                      (*(code *)PTR___rust_dealloc_001d96d0)(local_118,local_120,1);
                    }
                  }
                  if (local_5e0 != 0) {
                    (*(code *)PTR___rust_dealloc_001d96d0)(local_5d8,local_5e0,1);
                  }
                  if (local_7a0 != 0) {
                    (*(code *)PTR___rust_dealloc_001d96d0)(local_798,local_7a0,1);
                  }
                  goto LAB_001472fe;
                }
                break;
              }
              lVar15 = lVar15 + 0x18;
            } while (local_440 * 0x18 != lVar15);
            pdVar16 = (double *)0x0;
LAB_001472fe:
            puVar6 = PTR___rust_dealloc_001d96d0;
            puVar20 = (undefined8 *)((long)local_638 + 8);
            lVar14 = local_440;
            do {
              if (puVar20[-1] != 0) {
                (*(code *)puVar6)(*puVar20,puVar20[-1],1);
              }
              puVar20 = puVar20 + 3;
              lVar14 = lVar14 + -1;
            } while (lVar14 != 0);
          }
          if (local_450 != 0) {
            (*(code *)PTR___rust_dealloc_001d96d0)(local_638,local_450 * 0x18,8);
          }
        }
        if (local_5c8 != (undefined8 ******)0x0) {
          (*(code *)PTR___rust_dealloc_001d96d0)(pdStack_5c0,local_5c8,1);
        }
        if (local_5b0 != 0) {
          (*(code *)PTR___rust_dealloc_001d96d0)(plStack_5a8,local_5b0,1);
        }
        if (local_598 != 0) {
          (*(code *)PTR___rust_dealloc_001d96d0)(local_590,local_598 << 3,8);
        }
        if (local_580 != (undefined8 ******)0x0) {
          (*(code *)PTR___rust_dealloc_001d96d0)(pdStack_578,local_580,1);
        }
        puVar6 = PTR___rust_dealloc_001d96d0;
        if (local_320 != 0) {
          puVar20 = (undefined8 *)(local_328 + 8);
          lVar14 = local_320;
          do {
            if (puVar20[-1] != 0) {
              (*(code *)puVar6)(*puVar20,puVar20[-1],1);
            }
            puVar20 = puVar20 + 3;
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
        }
        if (local_330 != 0) {
          (*(code *)PTR___rust_dealloc_001d96d0)(local_328,local_330 * 0x18,8);
        }
        return pdVar16;
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001d96f0)();
      uVar18 = 8;
      lVar15 = (*(code *)PTR___rust_alloc_001d96c8)(uVar17,8);
      uVar19 = uVar21;
      if (lVar15 != 0) goto LAB_00146ddd;
    }
    else {
      uVar18 = 0;
    }
                    /* try { // try from 00146d6e to 00146d80 has its CatchHandler @ 001495c2 */
    (*(code *)PTR_handle_error_001d97c8)
              (uVar18,uVar17,anon_2c52eaccaef91805a6c88bb59578b6b9_3_llvm_17683623546481905031);
  }
LAB_0014941c:
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}




// ELF address 0x00000000000518a0; fb_strategy_sdk_abi_version

undefined8 fb_strategy_sdk_abi_version(void)

{
  return 4;
}




// ELF address 0x00000000000518b0; fb_strategy_sdk_version_str

ulong fb_strategy_sdk_version_str(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = param_2 - 1;
  }
  uVar2 = 5;
  if (uVar1 < 5) {
    uVar2 = uVar1;
  }
  (*(code *)PTR_memcpy_001d9728)
            (param_1,
             "0.6.0[fb_plugin] on_begin error: \n[fb_plugin] on_signal error: [fb_plugin] on_depth error: "
             ,uVar2);
  if (param_2 != 0) {
    *(undefined1 *)(param_1 + uVar2) = 0;
  }
  return uVar2;
}


