// ELF address 0x000000000003ba30; strategy_sm3::cancel_side

/* strategy_sm3::cancel_side */

long __rustcall
strategy_sm3::cancel_side
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
  (*(code *)PTR_pending_orders_001dc148)(&local_48,param_1,param_2,param_3);
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
LAB_0013bcc6:
    puVar4 = PTR___rust_dealloc_001dc090;
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
          (*(code *)PTR___rust_dealloc_001dc090)(lVar1,lVar11,1);
        }
        if (lVar2 != 0) {
          (*(code *)PTR___rust_dealloc_001dc090)(lVar14,lVar2,1);
        }
        local_40 = plVar13;
        if (plVar13 == local_a0) goto LAB_0013bc84;
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
             (iVar5 = (*(code *)PTR_bcmp_001dc150)(*(undefined8 *)(lVar3 + 8 + lVar8),lVar1),
             lVar14 = local_98, lVar6 = local_50, lVar7 = local_a8, iVar5 == 0)) {
            if (lVar11 != 0) {
              (*(code *)PTR___rust_dealloc_001dc090)(lVar1,lVar11,1);
            }
            goto LAB_0013bc5b;
          }
          lVar8 = lVar8 + 0x18;
        } while (lVar6 != lVar8);
      }
                    /* try { // try from 0013bbf0 to 0013bc0a has its CatchHandler @ 0013bd7c */
      lVar7 = (*(code *)PTR_cancel_order_001dc158)(local_68,local_60,local_58,lVar1,lVar7);
      if (lVar7 != 0) {
        local_88 = plVar13;
        if (lVar11 != 0) {
          (*(code *)PTR___rust_dealloc_001dc090)(lVar1,lVar11,1);
        }
        plVar10 = local_b0;
        lVar11 = local_b8;
        if (lVar2 != 0) {
          (*(code *)PTR___rust_dealloc_001dc090)(lVar14,lVar2,1);
          plVar10 = local_b0;
          lVar11 = local_b8;
        }
        goto LAB_0013bcc6;
      }
      lVar7 = local_c0[2];
      if (lVar7 == *local_c0) {
                    /* try { // try from 0013bc22 to 0013bc38 has its CatchHandler @ 0013bd7a */
        (*(code *)PTR_grow_one_001dc160)(local_c0,&PTR_s_strategies_index_strategy_strate_001d60d0);
      }
      lVar3 = local_c0[1];
      *(long *)(lVar3 + lVar7 * 0x18) = lVar11;
      *(long *)(lVar3 + 8 + lVar7 * 0x18) = lVar1;
      *(long *)(lVar3 + 0x10 + lVar7 * 0x18) = local_a8;
      local_c0[2] = lVar7 + 1;
LAB_0013bc5b:
      if (lVar2 != 0) {
        (*(code *)PTR___rust_dealloc_001dc090)(lVar14,lVar2,1);
      }
      plVar12 = plVar13;
      local_40 = plVar13;
    } while (plVar13 != local_a0);
LAB_0013bc84:
    lVar7 = 0;
    plVar10 = local_b0;
    lVar11 = local_b8;
    local_88 = plVar12;
  }
  if (lVar11 != 0) {
    (*(code *)PTR___rust_dealloc_001dc090)(plVar10,lVar11 * 0x58,8);
  }
  return lVar7;
}




// ELF address 0x000000000003b9d0; strategy_sm3::default_pv1

/* strategy_sm3::default_pv1 */

undefined8 * __rustcall strategy_sm3::default_pv1(undefined8 *param_1)

{
  code *pcVar1;
  undefined2 *puVar2;
  undefined8 *puVar3;
  
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001dc0b0)();
  puVar2 = (undefined2 *)(*(code *)PTR___rust_alloc_001dc088)(3,1);
  if (puVar2 != (undefined2 *)0x0) {
    *(undefined1 *)(puVar2 + 1) = 0x31;
    *puVar2 = 0x5650;
    *param_1 = 3;
    param_1[1] = puVar2;
    param_1[2] = 3;
    return param_1;
  }
  (*(code *)PTR_handle_error_001dc140)
            (1,3,anon_07c0eed8e65a4a48611bb33f166df0b2_2_llvm_13927337955214425223);
  pcVar1 = (code *)swi(3);
  puVar3 = (undefined8 *)(*pcVar1)();
  return puVar3;
}




// ELF address 0x000000000003c7b0; strategy_sm3::apply_book_vol_cap

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_sm3::apply_book_vol_cap */

void __rustcall
strategy_sm3::apply_book_vol_cap
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
    dVar6 = DAT_00117640;
    if (*(char *)(param_6 + 0x129) != '\0') {
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
    dVar5 = *(double *)(param_6 + 0x120);
    goto joined_r0x0013c9e4;
  }
  if (*(char *)(param_6 + 0x129) == '\0') {
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
    dVar4 = DAT_001176a0;
    if (*(double *)(param_5 + 0x10 + lVar3) <= 0.0) goto LAB_0013c809;
LAB_0013c991:
    dVar5 = dVar5 + *(double *)(param_5 + 0x18 + lVar3);
    dVar4 = dVar4 + DAT_001176a0;
    dVar1 = *(double *)(param_5 + 0x20 + lVar3);
  }
  else {
    dVar4 = 0.0;
    if (0.0 < *(double *)(param_5 + 0x10 + lVar3)) goto LAB_0013c991;
LAB_0013c809:
    dVar1 = *(double *)(param_5 + 0x20 + lVar3);
  }
  if (0.0 < dVar1) {
    dVar5 = dVar5 + *(double *)(param_5 + 0x28 + lVar3);
    dVar4 = dVar4 + DAT_001176a0;
  }
  if (0.0 < dVar4) {
    dVar6 = dVar5 / dVar4;
  }
  dVar5 = *(double *)(param_6 + 0x100);
joined_r0x0013c9e4:
  if (0.0 < dVar5) {
    dVar4 = dVar5;
    if (dVar6 <= dVar5) {
      dVar4 = dVar6;
    }
    dVar6 = (double)(~-(ulong)NAN(dVar6) & (ulong)dVar4 | -(ulong)NAN(dVar6) & (ulong)dVar5);
  }
  if ((dVar6 == DAT_00117640) && (!NAN(dVar6) && !NAN(DAT_00117640))) {
    return;
  }
  dVar4 = (double)((ulong)param_1 & _DAT_001177b0);
  dVar5 = dVar6;
  if (dVar4 <= dVar6) {
    dVar5 = dVar4;
  }
  (*(code *)PTR_round_with_step_f64_001dc170)
            ((double)(~-(ulong)NAN(dVar4) & (ulong)dVar5 | -(ulong)NAN(dVar4) & (ulong)dVar6) *
             (double)(~-(ulong)NAN(param_1) &
                      (_DAT_00117d10 & (ulong)param_1 | SUB168(_s__00117c30,0)) |
                     DAT_00117720 & -(ulong)NAN(param_1)),1);
  return;
}




// ELF address 0x000000000003c240; strategy_sm3::live_pending_counts

/* strategy_sm3::live_pending_counts */

undefined1  [16] __rustcall
strategy_sm3::live_pending_counts
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
  
  (*(code *)PTR_pending_orders_001dc148)(&local_48,param_1,param_2,param_3);
                    /* try { // try from 0013c277 to 0013c28a has its CatchHandler @ 0013c789 */
  (*(code *)PTR_cancel_pending_ids_001dc168)(&local_60,param_1,param_2,param_3);
  lVar7 = local_50;
  lVar17 = local_58;
  puVar8 = PTR___rust_dealloc_001dc090;
  plVar14 = local_40 + local_38 * 0xb;
  if (local_38 == 0) {
    local_c0 = 0;
    lVar12 = 0;
    plVar15 = local_40;
LAB_0013c5fa:
    puVar8 = PTR___rust_dealloc_001dc090;
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
LAB_0013c337:
      do {
        plVar15 = plVar10 + 0xb;
        lVar2 = *plVar10;
        if (lVar2 == -0x8000000000000000) goto LAB_0013c5fa;
        lVar3 = plVar10[1];
        lVar4 = plVar10[2];
        lVar5 = plVar10[3];
        lVar16 = plVar10[4];
        bVar1 = *(byte *)(plVar10 + 10);
        lVar13 = 0;
        do {
          plVar10 = plVar15;
          if ((*(long *)(param_4 + 0x10 + lVar13) == lVar4) &&
             (iVar9 = (*(code *)PTR_bcmp_001dc150)
                                (*(undefined8 *)(param_4 + 8 + lVar13),lVar3,lVar4), iVar9 == 0))
          goto LAB_0013c3f7;
          lVar13 = lVar13 + 0x18;
        } while (param_5 * 0x18 != lVar13);
        if (lVar7 != 0) {
          lVar13 = 0;
          do {
            if ((*(long *)(lVar17 + 0x10 + lVar13) == lVar4) &&
               (iVar9 = (*(code *)PTR_bcmp_001dc150)
                                  (*(undefined8 *)(lVar17 + 8 + lVar13),lVar3,lVar4), iVar9 == 0))
            goto LAB_0013c3f7;
            lVar13 = lVar13 + 0x18;
          } while (lVar6 != lVar13);
        }
        if (lVar2 != 0) {
          (*(code *)PTR___rust_dealloc_001dc090)(lVar3,lVar2,1);
        }
        if (lVar5 != 0) {
          (*(code *)PTR___rust_dealloc_001dc090)(lVar16,lVar5,1);
        }
        lVar12 = lVar12 + (ulong)bVar1;
        local_c0 = local_c0 + (ulong)(bVar1 ^ 1);
      } while (plVar15 != plVar14);
      goto LAB_0013c6f6;
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
LAB_0013c4f0:
      do {
        plVar15 = plVar10 + 0xb;
        lVar6 = *plVar10;
        if (lVar6 == -0x8000000000000000) goto LAB_0013c5fa;
        lVar2 = plVar10[1];
        lVar3 = plVar10[2];
        lVar4 = plVar10[3];
        lVar5 = plVar10[4];
        bVar1 = *(byte *)(plVar10 + 10);
        lVar16 = 0;
        do {
          plVar10 = plVar15;
          if ((*(long *)(lVar17 + 0x10 + lVar16) == lVar3) &&
             (iVar9 = (*(code *)PTR_bcmp_001dc150)(*(undefined8 *)(lVar17 + 8 + lVar16),lVar2,lVar3)
             , iVar9 == 0)) {
            if (lVar6 != 0) {
              (*(code *)PTR___rust_dealloc_001dc090)(lVar2,lVar6,1);
            }
            if (lVar4 != 0) {
              (*(code *)PTR___rust_dealloc_001dc090)(lVar5,lVar4,1);
            }
            if (plVar15 != plVar14) goto LAB_0013c4f0;
            goto LAB_0013c5fa;
          }
          lVar16 = lVar16 + 0x18;
        } while (lVar7 != lVar16);
        if (lVar6 != 0) {
          (*(code *)PTR___rust_dealloc_001dc090)(lVar2,lVar6,1);
        }
        if (lVar4 != 0) {
          (*(code *)PTR___rust_dealloc_001dc090)(lVar5,lVar4,1);
        }
        lVar12 = lVar12 + (ulong)bVar1;
        local_c0 = local_c0 + (ulong)(bVar1 ^ 1);
      } while (plVar15 != plVar14);
    }
  }
LAB_0013c6f6:
  if (local_48 != 0) {
    (*(code *)PTR___rust_dealloc_001dc090)(local_40,local_48 * 0x58,8);
  }
  puVar8 = PTR___rust_dealloc_001dc090;
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
    (*(code *)PTR___rust_dealloc_001dc090)(local_58,local_60 * 0x18,8);
  }
  auVar19._8_8_ = local_c0;
  auVar19._0_8_ = lVar12;
  return auVar19;
LAB_0013c3f7:
  if (lVar2 != 0) {
    (*(code *)PTR___rust_dealloc_001dc090)(lVar3,lVar2,1);
  }
  if (lVar5 != 0) {
    (*(code *)PTR___rust_dealloc_001dc090)(lVar16,lVar5,1);
  }
  if (plVar15 == plVar14) goto LAB_0013c5fa;
  goto LAB_0013c337;
}




// ELF address 0x000000000003bdd0; strategy_sm3::cancel_order_use_range

/* strategy_sm3::cancel_order_use_range */

long __rustcall
strategy_sm3::cancel_order_use_range
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
    (*(code *)PTR_pending_orders_001dc148)(&local_48,param_3,param_4,param_5);
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
LAB_0013c10a:
      puVar3 = PTR___rust_dealloc_001dc090;
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
            (*(code *)PTR___rust_dealloc_001dc090)(lVar2,lVar13,1);
          }
          if (lVar11 != 0) {
            (*(code *)PTR___rust_dealloc_001dc090)(local_e0,lVar11,1);
          }
          plVar7 = local_d8;
          local_40 = plVar12;
          if (plVar12 == plVar9) goto LAB_0013c0c5;
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
               (iVar4 = (*(code *)PTR_bcmp_001dc150)(*(undefined8 *)(lVar5 + 8 + lVar8),lVar2),
               lVar6 = local_50, plVar7 = local_d8, lVar11 = local_b0, iVar4 == 0))
            goto LAB_0013bff0;
            lVar8 = lVar8 + 0x18;
          } while (lVar6 != lVar8);
        }
        if ((bVar1 & 1) == 0) {
          if (local_a0 <= local_70) goto LAB_0013bff0;
LAB_0013c022:
                    /* try { // try from 0013c022 to 0013c045 has its CatchHandler @ 0013c1de */
          lVar5 = (*(code *)PTR_cancel_order_001dc158)(local_58,local_68,local_60,lVar2,plVar7);
          plVar7 = local_c8;
          plVar9 = local_d0;
          if (lVar5 != 0) {
            local_90 = plVar12;
            if (lVar13 != 0) {
              (*(code *)PTR___rust_dealloc_001dc090)(lVar2,lVar13,1);
            }
            lVar13 = local_c0;
            plVar7 = local_b8;
            if (lVar11 != 0) {
              (*(code *)PTR___rust_dealloc_001dc090)(local_e0,lVar11,1);
              lVar13 = local_c0;
              plVar7 = local_b8;
            }
            goto LAB_0013c10a;
          }
          lVar5 = local_c8[2];
          if (lVar5 == *local_c8) {
                    /* try { // try from 0013c063 to 0013c072 has its CatchHandler @ 0013c1dc */
            (*(code *)PTR_grow_one_001dc160)
                      (local_c8,&PTR_s_strategies_index_strategy_strate_001d60e8);
          }
          lVar6 = plVar7[1];
          *(long *)(lVar6 + lVar5 * 0x18) = lVar13;
          *(long *)(lVar6 + 8 + lVar5 * 0x18) = lVar2;
          *(long **)(lVar6 + 0x10 + lVar5 * 0x18) = local_d8;
          plVar7[2] = lVar5 + 1;
          plVar9 = local_d0;
        }
        else {
          if (local_a0 < local_a8) goto LAB_0013c022;
LAB_0013bff0:
          plVar9 = local_d0;
          if (lVar13 != 0) {
            (*(code *)PTR___rust_dealloc_001dc090)(lVar2,lVar13,1);
          }
        }
        if (lVar11 != 0) {
          (*(code *)PTR___rust_dealloc_001dc090)(local_e0,lVar11,1);
        }
        plVar7 = plVar12;
        local_40 = plVar12;
      } while (plVar12 != plVar9);
LAB_0013c0c5:
      lVar5 = 0;
      local_90 = plVar7;
      lVar13 = local_c0;
      plVar7 = local_b8;
    }
    if (lVar13 != 0) {
      (*(code *)PTR___rust_dealloc_001dc090)(plVar7,lVar13 * 0x58,8);
    }
  }
  return lVar5;
}




// ELF address 0x0000000000087da0; strategy_signal_maker_common::signal_trigger::SignalTrigger::update_score

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
  puVar6 = PTR_update_001dc6e8;
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
LAB_00187f82:
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
          goto LAB_00187f82;
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




// ELF address 0x0000000000087ff0; strategy_signal_maker_common::signal_trigger::SignalTrigger::point_signal_trigger_pv3_spread

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_signal_maker_common::signal_trigger::SignalTrigger::point_signal_trigger_pv3_spread */

void __rustcall
strategy_signal_maker_common::signal_trigger::SignalTrigger::point_signal_trigger_pv3_spread
          (double param_1,ulong param_2,double param_3,undefined1 *param_4,long param_5)

{
  undefined1 uVar1;
  double dVar2;
  
  param_1 = (double)(param_2 & _DAT_001177b0) * param_1;
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
    if (dVar2 < *(double *)(param_5 + 0x40)) goto LAB_0018806c;
  }
  else {
    dVar2 = dVar2 + *(double *)(param_5 + 0x88);
    if (dVar2 <= 0.0) {
      dVar2 = 0.0;
    }
    if (dVar2 < *(double *)(param_5 + 0x40)) {
LAB_0018806c:
      uVar1 = 3;
      if (((dVar2 < *(double *)(param_5 + 0x58)) && (uVar1 = 2, *(double *)(param_5 + 0x50) < dVar2)
          ) && (uVar1 = 4, dVar2 <= *(double *)(param_5 + 0x48))) {
        *param_4 = 1;
        *(undefined8 *)(param_4 + 8) = 0x3ff0000000000000;
        return;
      }
      goto LAB_00188044;
    }
  }
  uVar1 = 0;
LAB_00188044:
  *param_4 = uVar1;
  *(undefined8 *)(param_4 + 8) = 0x3ff0000000000000;
  return;
}




// ELF address 0x0000000000087cd0; strategy_signal_maker_common::signal_trigger::SignalTrigger::new

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
                    /* try { // try from 00187cf0 to 00187cfc has its CatchHandler @ 00187d72 */
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
    (*(code *)PTR___rust_dealloc_001dc090)(lVar1,*param_3 << 3,8);
  }
  return param_1;
}




// ELF address 0x00000000000880b0; strategy_signal_maker_common::signal_trigger::dynamic_threshold

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
     (_DAT_00117708 < (double)(_DAT_001177b0 & (ulong)param_4))) {
    dVar1 = param_3 - param_2;
    if (param_3 - param_2 <= DAT_00117690) {
      dVar1 = DAT_00117690;
    }
    dVar1 = (param_1 - param_2) / dVar1;
    if (DAT_001176a0 <= dVar1) {
      dVar1 = DAT_001176a0;
    }
    dVar4 = (double)((ulong)(param_4 * dVar1) & _DAT_001177b0);
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




// ELF address 0x0000000000087a70; strategy_signal_maker_common::signal_trigger::TsQuantileCalculator::update

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
    (*(code *)PTR_grow_001dc6f0)(param_3,&PTR_s_strategies_index_strategy_strate_001d8508);
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
  auVar10._12_4_ = _UNK_00117924;
  param_3[0xb] = (ulong)((dVar8 + param_2) /
                        ((auVar10._8_8_ - _UNK_001177d8) +
                        ((double)CONCAT44(_s__00117920,(int)uVar4) - _s__001177d0)));
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
          auVar11._12_4_ = _UNK_00117924;
          dVar9 = (dVar1 - dVar8) /
                  ((auVar11._8_8_ - _UNK_001177d8) +
                  ((double)CONCAT44(_s__00117920,(int)uVar4) - _s__001177d0));
        }
      }
      param_3[0xb] = (ulong)dVar9;
      dVar1 = _DAT_001176c8;
      param_3[0xc] = (ulong)((double)param_3[0xc] - dVar8 * dVar8);
      param_3[(ulong)(dVar8 <= dVar1) + 0xe] =
           (ulong)((double)param_3[(ulong)(dVar8 <= dVar1) + 0xe] - dVar8);
      uVar4 = param_3[3];
    } while (uVar4 != 0);
  }
  return;
}




// ELF address 0x0000000000088150; strategy_signal_maker_common::signal_trigger::dynamic_pending_ts_ms

/* strategy_signal_maker_common::signal_trigger::dynamic_pending_ts_ms */

double __rustcall
strategy_signal_maker_common::signal_trigger::dynamic_pending_ts_ms
          (double param_1,double param_2,double param_3,double param_4,double param_5)

{
  double dVar1;
  
  if (((param_2 <= param_1) && (0.0 <= param_2)) && (0.0 <= param_3)) {
    dVar1 = param_3 - param_2;
    if (param_3 - param_2 <= DAT_00117690) {
      dVar1 = DAT_00117690;
    }
    dVar1 = (param_1 - param_2) / dVar1;
    if (DAT_001176a0 <= dVar1) {
      dVar1 = DAT_001176a0;
    }
    param_4 = param_4 + param_5 * dVar1;
  }
  return param_4;
}




// ELF address 0x0000000000084d30; strategy_signal_maker_common::get_quote_price::get_quote_vol

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




// ELF address 0x0000000000084dc0; strategy_signal_maker_common::get_quote_price::get_quote_price_one_shot

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* strategy_signal_maker_common::get_quote_price::get_quote_price_one_shot */

double * __rustcall
strategy_signal_maker_common::get_quote_price::get_quote_price_one_shot
          (double param_1,double param_2,double param_3,double param_4,double param_5,double param_6
          ,double unaff_XMM6_Qa,double *param_8,undefined1 param_9,double *param_10,uint param_11)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  undefined1 *puVar22;
  ulong uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dd;
  undefined4 uVar26;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar32;
  undefined8 in_XMM2_Qb;
  ulong in_XMM3_Qb;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 local_4f4 [4];
  undefined7 local_4f0;
  undefined1 uStack_4e9;
  undefined7 uStack_4e8;
  undefined1 uStack_4e1;
  undefined7 uStack_4e0;
  undefined1 uStack_4d9;
  undefined7 local_4d8;
  undefined1 uStack_4d1;
  undefined1 *local_4d0;
  undefined *local_4c8;
  undefined **local_4c0;
  undefined *local_4b8;
  undefined7 *local_4b0;
  undefined8 local_4a8;
  undefined8 local_4a0;
  double local_490;
  undefined1 local_488 [16];
  double local_470;
  undefined1 local_468 [16];
  undefined8 local_458;
  ulong uStack_450;
  double local_440;
  double local_438;
  double local_430;
  double local_428;
  double local_420;
  double local_418;
  double local_410;
  double local_408;
  double local_3f8;
  undefined1 local_3e0 [16];
  undefined8 local_3d0;
  undefined1 local_3c8 [16];
  undefined8 local_3b8;
  undefined1 local_3b0 [16];
  undefined8 local_3a0;
  undefined1 local_398 [16];
  undefined8 local_388;
  undefined1 local_380 [16];
  undefined8 local_370;
  undefined1 local_368 [16];
  undefined8 local_358;
  undefined1 local_350 [16];
  undefined8 local_340;
  undefined1 local_338 [16];
  undefined8 local_328;
  undefined1 local_320 [16];
  undefined8 local_310;
  undefined1 local_308 [16];
  undefined8 local_2f8;
  undefined1 local_2f0 [16];
  undefined8 local_2e0;
  undefined1 local_2d8 [16];
  undefined8 local_2c8;
  undefined1 local_2c0 [16];
  undefined8 local_2b0;
  undefined1 local_2a8 [16];
  undefined8 local_298;
  undefined1 local_290 [16];
  undefined8 local_280;
  undefined1 local_278 [16];
  undefined8 local_268;
  undefined1 local_260 [16];
  undefined8 local_250;
  undefined1 local_248 [16];
  undefined8 local_238;
  undefined1 local_230 [16];
  undefined8 local_220;
  undefined1 local_218 [16];
  undefined8 local_208;
  undefined1 local_200 [16];
  undefined8 local_1f0;
  undefined1 local_1e8 [16];
  undefined8 local_1d8;
  undefined1 local_1d0 [16];
  undefined8 local_1c0;
  undefined1 local_1b8 [16];
  undefined8 local_1a8;
  undefined1 local_1a0 [16];
  undefined8 local_190;
  undefined1 local_188 [16];
  undefined8 local_178;
  undefined1 local_170 [16];
  undefined8 local_160;
  undefined1 local_158 [16];
  undefined8 local_148;
  undefined1 local_140 [24];
  undefined1 local_128 [24];
  undefined1 local_110 [24];
  undefined1 local_f8 [24];
  undefined1 local_e0 [24];
  undefined1 local_c8 [24];
  undefined1 local_b0 [24];
  undefined1 local_98 [24];
  undefined1 local_80 [24];
  undefined1 local_68 [24];
  undefined1 local_50 [24];
  undefined1 local_38 [24];
  
  local_488._8_8_ = local_488._0_8_;
  local_470 = (param_3 + param_4) * DAT_001176f8;
  local_468._8_8_ = in_XMM2_Qb;
  local_468._0_8_ = param_3;
  local_4f4 = (undefined1  [4])param_11;
  local_458 = param_4;
  uStack_450 = in_XMM3_Qb;
  local_420 = param_5;
  local_418 = param_1;
  local_410 = param_2;
  local_408 = unaff_XMM6_Qa;
  local_3f8 = param_6;
  local_490 = (double)(*(code *)PTR_round_001dc278)
                                (SUB84(((param_3 - param_4) / local_470) * DAT_001176f8 *
                                       _DAT_001176c0 * DAT_001176e8,0));
  local_490 = local_490 / DAT_001176e8;
  local_488._0_8_ = local_490;
                    /* WARNING: Switch is manually overridden */
  switch(param_9) {
  case 0:
    local_440 = (double)(*(code *)PTR_round_001dc278)
                                  (SUB84((local_410 - *param_10) * _DAT_001176f0,0));
    local_440 = local_440 / _DAT_001176f0;
    uStack_4e1 = (undefined1)((ulong)PTR_fmt_001dc280 >> 0x38);
    uStack_4e8 = SUB87(PTR_fmt_001dc280,0);
    local_4d8 = uStack_4e8;
    uStack_4d1 = uStack_4e1;
    if (local_440 <= (double)local_488._0_8_) {
      if (local_440 <= 0.0) {
        if (param_11 == 0) {
          dVar27 = local_458 + DAT_001176b0;
          dVar32 = (double)local_468._0_8_ + _DAT_00117668;
          dVar21 = dVar32;
          if (dVar27 <= dVar32) {
            dVar21 = dVar27;
          }
          auVar44._0_8_ = ~-(ulong)NAN(dVar27) & (ulong)dVar21;
          auVar44._8_8_ = ~uStack_450 & local_468._8_8_;
          auVar16._8_4_ = (int)(uStack_450 & local_468._8_8_);
          auVar16._0_8_ = -(ulong)NAN(dVar27) & (ulong)dVar32;
          auVar16._12_4_ = (int)((uStack_450 & local_468._8_8_) >> 0x20);
          local_488 = auVar44 | auVar16;
          local_4f0 = SUB87(&local_490,0);
          uStack_4e9 = (undefined1)((ulong)&local_490 >> 0x38);
          uStack_4e0 = SUB87(&local_440,0);
          uStack_4d9 = (undefined1)((ulong)&local_440 >> 0x38);
          local_4d0 = local_4f4;
          local_4c8 = PTR_fmt_001dc6a8;
          local_4c0 = &PTR_s_maker__e__001d8458;
          local_4b8 = (undefined *)0x3;
          local_4a0 = 0;
          local_4b0 = &local_4f0;
          local_4a8 = 3;
          (*(code *)PTR_format_inner_001dc188)(local_368,&local_4c0);
          uStack_4e9 = (undefined1)local_368._0_8_;
          uStack_4e8 = SUB87(local_368._0_8_,1);
          uStack_4e1 = (undefined1)local_368._8_8_;
          uStack_4e0 = SUB87(local_368._8_8_,1);
          local_1c0 = local_358;
        }
        else {
          if (param_11 == 1) {
            dVar21 = (double)((ulong)local_440 & _DAT_001177b0);
            dVar32 = local_408 * _DAT_001176c0;
            dVar27 = dVar32;
            if (dVar21 <= dVar32) {
              dVar27 = dVar21;
            }
            local_470 = local_470 *
                        ((double)(~-(ulong)NAN(dVar21) & (ulong)dVar27 |
                                 -(ulong)NAN(dVar21) & (ulong)dVar32) * _DAT_00117780 + DAT_001176a0
                        );
            local_4f0 = SUB87(&local_490,0);
            uStack_4e9 = (undefined1)((ulong)&local_490 >> 0x38);
            uStack_4e0 = SUB87(&local_440,0);
            uStack_4d9 = (undefined1)((ulong)&local_440 >> 0x38);
            local_4d0 = local_4f4;
            local_4c8 = PTR_fmt_001dc6a8;
            local_4c0 = &PTR_s_maker__e__001d8458;
            local_4b8 = (undefined *)0x3;
            local_4a0 = 0;
            local_4b0 = &local_4f0;
            local_4a8 = 3;
            (*(code *)PTR_format_inner_001dc188)(local_380,&local_4c0);
            uStack_4e9 = (undefined1)local_380._0_8_;
            uStack_4e8 = SUB87(local_380._0_8_,1);
            uStack_4e1 = (undefined1)local_380._8_8_;
            uStack_4e0 = SUB87(local_380._8_8_,1);
            local_178 = local_370;
            goto LAB_0018660a;
          }
          if (param_11 != 0xffffffff) {
            local_4b8 = PTR_fmt_001dc6a8;
            uStack_4e0 = SUB87(&local_4c0,0);
            uStack_4d9 = (undefined1)((ulong)&local_4c0 >> 0x38);
            puVar22 = local_110;
            goto LAB_00186df3;
          }
          dVar27 = local_458 + DAT_001176b0;
          dVar32 = (double)local_468._0_8_ + _DAT_00117668;
          dVar21 = dVar32;
          if (dVar27 <= dVar32) {
            dVar21 = dVar27;
          }
          auVar47._0_8_ = ~-(ulong)NAN(dVar27) & (ulong)dVar21;
          auVar47._8_8_ = ~uStack_450 & local_468._8_8_;
          auVar15._8_4_ = (int)(uStack_450 & local_468._8_8_);
          auVar15._0_8_ = -(ulong)NAN(dVar27) & (ulong)dVar32;
          auVar15._12_4_ = (int)((uStack_450 & local_468._8_8_) >> 0x20);
          local_488 = auVar47 | auVar15;
          local_4f0 = SUB87(&local_490,0);
          uStack_4e9 = (undefined1)((ulong)&local_490 >> 0x38);
          uStack_4e0 = SUB87(&local_440,0);
          uStack_4d9 = (undefined1)((ulong)&local_440 >> 0x38);
          local_4d0 = local_4f4;
          local_4c8 = PTR_fmt_001dc6a8;
          local_4c0 = &PTR_s_maker__e__001d8458;
          local_4b8 = (undefined *)0x3;
          local_4a0 = 0;
          local_4b0 = &local_4f0;
          local_4a8 = 3;
          (*(code *)PTR_format_inner_001dc188)(local_350,&local_4c0);
          uStack_4e9 = (undefined1)local_350._0_8_;
          uStack_4e8 = SUB87(local_350._0_8_,1);
          uStack_4e1 = (undefined1)local_350._8_8_;
          uStack_4e0 = SUB87(local_350._8_8_,1);
          local_1c0 = local_340;
        }
      }
      else {
        if (param_11 < 2) {
          local_4f0 = SUB87(&local_490,0);
          uStack_4e9 = (undefined1)((ulong)&local_490 >> 0x38);
          uStack_4e0 = SUB87(&local_440,0);
          uStack_4d9 = (undefined1)((ulong)&local_440 >> 0x38);
          local_4d0 = local_4f4;
          local_4c8 = PTR_fmt_001dc6a8;
          local_4c0 = &PTR_DAT_001d84a8;
          local_4b8 = (undefined *)0x3;
          local_4a0 = 0;
          local_4b0 = &local_4f0;
          local_4a8 = 3;
          (*(code *)PTR_format_inner_001dc188)(local_3b0,&local_4c0);
          uStack_4e9 = (undefined1)local_3b0._0_8_;
          uStack_4e8 = SUB87(local_3b0._0_8_,1);
          uStack_4e1 = (undefined1)local_3b0._8_8_;
          uStack_4e0 = SUB87(local_3b0._8_8_,1);
          local_1a8 = local_3a0;
LAB_001856ec:
          uStack_4d9 = (undefined1)local_1a8;
          local_4d8 = (undefined7)((ulong)local_1a8 >> 8);
          *param_8 = local_470;
          *(undefined1 *)(param_8 + 1) = 2;
          goto LAB_001869dd;
        }
        if (param_11 != 0xffffffff) {
          local_4b8 = PTR_fmt_001dc6a8;
          uStack_4e0 = SUB87(&local_4c0,0);
          uStack_4d9 = (undefined1)((ulong)&local_4c0 >> 0x38);
          puVar22 = local_128;
          goto LAB_00186df3;
        }
        dVar27 = local_458 + DAT_001176b0;
        dVar32 = (double)local_468._0_8_ + _DAT_00117668;
        dVar21 = dVar32;
        if (dVar27 <= dVar32) {
          dVar21 = dVar27;
        }
        auVar41._0_8_ = ~-(ulong)NAN(dVar27) & (ulong)dVar21;
        auVar41._8_8_ = ~uStack_450 & local_468._8_8_;
        auVar14._8_4_ = (int)(uStack_450 & local_468._8_8_);
        auVar14._0_8_ = -(ulong)NAN(dVar27) & (ulong)dVar32;
        auVar14._12_4_ = (int)((uStack_450 & local_468._8_8_) >> 0x20);
        local_488 = auVar41 | auVar14;
        local_4f0 = SUB87(&local_490,0);
        uStack_4e9 = (undefined1)((ulong)&local_490 >> 0x38);
        uStack_4e0 = SUB87(&local_440,0);
        uStack_4d9 = (undefined1)((ulong)&local_440 >> 0x38);
        local_4d0 = local_4f4;
        local_4c8 = PTR_fmt_001dc6a8;
        local_4c0 = &PTR_s_maker__e__001d8458;
        local_4b8 = (undefined *)0x3;
        local_4a0 = 0;
        local_4b0 = &local_4f0;
        local_4a8 = 3;
        (*(code *)PTR_format_inner_001dc188)(local_398,&local_4c0);
        uStack_4e9 = (undefined1)local_398._0_8_;
        uStack_4e8 = SUB87(local_398._0_8_,1);
        uStack_4e1 = (undefined1)local_398._8_8_;
        uStack_4e0 = SUB87(local_398._8_8_,1);
        local_1c0 = local_388;
      }
    }
    else {
      if (param_11 < 2) {
        dVar21 = (local_440 - (double)local_488._0_8_) * _DAT_00117788;
        dVar27 = dVar21;
        if (local_420 <= dVar21) {
          dVar27 = local_420;
        }
        auVar28._0_8_ = ~-(ulong)NAN(local_420) & (ulong)dVar27;
        auVar28._12_4_ = extraout_XMM0_Dd;
        auVar28._8_4_ = extraout_XMM0_Dc;
        auVar20._8_8_ = 0;
        auVar20._0_8_ = -(ulong)NAN(local_420) & (ulong)dVar21;
        auVar28 = auVar28 | auVar20;
        uVar24 = SUB84(local_3f8,0);
        uVar25 = (undefined4)((ulong)local_3f8 >> 0x20);
        if (local_3f8 <= auVar28._0_8_) {
          uVar24 = auVar28._0_4_;
          uVar25 = auVar28._4_4_;
        }
        uVar23 = -(ulong)NAN(auVar28._0_8_);
        uVar26 = local_468._12_4_;
        local_468._8_4_ = local_468._8_4_;
        local_468._0_8_ =
             (double)local_468._0_8_ *
             ((double)(uVar23 & (ulong)local_3f8 | ~uVar23 & CONCAT44(uVar25,uVar24)) + DAT_001176a0
             );
        local_468._12_4_ = uVar26;
        local_4f0 = SUB87(&local_490,0);
        uStack_4e9 = (undefined1)((ulong)&local_490 >> 0x38);
        uStack_4e0 = SUB87(&local_440,0);
        uStack_4d9 = (undefined1)((ulong)&local_440 >> 0x38);
        local_4d0 = local_4f4;
        local_4c8 = PTR_fmt_001dc6a8;
        local_4c0 = &PTR_s_taker__s__001d84d8;
        local_4b8 = (undefined *)0x3;
        local_4a0 = 0;
        local_4b0 = &local_4f0;
        local_4a8 = 3;
        (*(code *)PTR_format_inner_001dc188)(local_3e0,&local_4c0);
        uStack_4e9 = (undefined1)local_3e0._0_8_;
        uStack_4e8 = SUB87(local_3e0._0_8_,1);
        uStack_4e1 = (undefined1)local_3e0._8_8_;
        uStack_4e0 = SUB87(local_3e0._8_8_,1);
        local_1d8 = local_3d0;
LAB_00185293:
        uStack_4d9 = (undefined1)local_1d8;
        local_4d8 = (undefined7)((ulong)local_1d8 >> 8);
LAB_0018540e:
        *param_8 = (double)CONCAT44(local_468._4_4_,local_468._0_4_);
        *(undefined1 *)(param_8 + 1) = 0;
        goto LAB_001869dd;
      }
      if (param_11 != 0xffffffff) {
        local_4b8 = PTR_fmt_001dc6a8;
        uStack_4e0 = SUB87(&local_4c0,0);
        uStack_4d9 = (undefined1)((ulong)&local_4c0 >> 0x38);
        puVar22 = local_140;
LAB_00186df3:
        local_4c0 = (undefined **)local_4f4;
        local_4d0 = (undefined1 *)0x0;
        uStack_4d1 = 0;
        local_4d8 = 1;
        uStack_4e1 = 0;
        uStack_4e8 = 2;
        uStack_4e9 = 0;
        local_4f0 = 0x1d8488;
        PTR_fmt_001dc6a8 = local_4b8;
        (*(code *)PTR_format_inner_001dc188)(puVar22,&local_4f0);
        dVar21 = (double)anyhow::error::_<impl_anyhow::Error>::msg(puVar22);
        *param_8 = dVar21;
        param_8[2] = -0.0;
        return param_8;
      }
      dVar27 = local_458 + DAT_001176b0;
      dVar32 = (double)local_468._0_8_ + _DAT_00117668;
      dVar21 = dVar32;
      if (dVar27 <= dVar32) {
        dVar21 = dVar27;
      }
      auVar36._0_8_ = ~-(ulong)NAN(dVar27) & (ulong)dVar21;
      auVar36._8_8_ = ~uStack_450 & local_468._8_8_;
      auVar13._8_4_ = (int)(uStack_450 & local_468._8_8_);
      auVar13._0_8_ = -(ulong)NAN(dVar27) & (ulong)dVar32;
      auVar13._12_4_ = (int)((uStack_450 & local_468._8_8_) >> 0x20);
      local_488 = auVar36 | auVar13;
      local_4f0 = SUB87(&local_490,0);
      uStack_4e9 = (undefined1)((ulong)&local_490 >> 0x38);
      uStack_4e0 = SUB87(&local_440,0);
      uStack_4d9 = (undefined1)((ulong)&local_440 >> 0x38);
      local_4d0 = local_4f4;
      local_4c8 = PTR_fmt_001dc6a8;
      local_4c0 = &PTR_s_maker__e__001d8458;
      local_4b8 = (undefined *)0x3;
      local_4a0 = 0;
      local_4b0 = &local_4f0;
      local_4a8 = 3;
      (*(code *)PTR_format_inner_001dc188)(local_3c8,&local_4c0);
      uStack_4e9 = (undefined1)local_3c8._0_8_;
      uStack_4e8 = SUB87(local_3c8._0_8_,1);
      uStack_4e1 = (undefined1)local_3c8._8_8_;
      uStack_4e0 = SUB87(local_3c8._8_8_,1);
      local_1c0 = local_3b8;
    }
    break;
  case 1:
    local_438 = (double)(*(code *)PTR_round_001dc278)
                                  (SUB84((param_10[1] - local_418) * _DAT_001176f0,0));
    local_438 = local_438 / _DAT_001176f0;
    uStack_4e1 = (undefined1)((ulong)PTR_fmt_001dc280 >> 0x38);
    uStack_4e8 = SUB87(PTR_fmt_001dc280,0);
    local_4d8 = uStack_4e8;
    uStack_4d1 = uStack_4e1;
    if (local_438 <= (double)local_488._0_8_) {
      if (local_438 <= 0.0) {
        if (param_11 == 0xffffffff) {
          dVar21 = (double)((ulong)local_438 & _DAT_001177b0);
          dVar32 = local_408 * _DAT_001176c0;
          dVar27 = dVar32;
          if (dVar21 <= dVar32) {
            dVar27 = dVar21;
          }
          local_470 = local_470 *
                      ((double)(~-(ulong)NAN(dVar21) & (ulong)dVar27 |
                               -(ulong)NAN(dVar21) & (ulong)dVar32) * _DAT_00117788 + DAT_001176a0);
          local_4f0 = SUB87(&local_490,0);
          uStack_4e9 = (undefined1)((ulong)&local_490 >> 0x38);
          uStack_4e0 = SUB87(&local_438,0);
          uStack_4d9 = (undefined1)((ulong)&local_438 >> 0x38);
          local_4d0 = local_4f4;
          local_4c8 = PTR_fmt_001dc6a8;
          local_4c0 = &PTR_s_maker__e__001d8458;
          local_4b8 = (undefined *)0x3;
          local_4a0 = 0;
          local_4b0 = &local_4f0;
          local_4a8 = 3;
          (*(code *)PTR_format_inner_001dc188)(local_2d8,&local_4c0);
          uStack_4e9 = (undefined1)local_2d8._0_8_;
          uStack_4e8 = SUB87(local_2d8._0_8_,1);
          uStack_4e1 = (undefined1)local_2d8._8_8_;
          uStack_4e0 = SUB87(local_2d8._8_8_,1);
          local_178 = local_2c8;
LAB_0018660a:
          uStack_4d9 = (undefined1)local_178;
          local_4d8 = (undefined7)((ulong)local_178 >> 8);
          *param_8 = local_470;
          *(undefined1 *)(param_8 + 1) = 3;
          goto LAB_001869dd;
        }
        if (param_11 == 0) {
          dVar32 = (double)local_468._0_8_ + _DAT_00117668;
          dVar27 = local_458 + DAT_001176b0;
          dVar21 = dVar27;
          if (dVar27 <= dVar32) {
            dVar21 = dVar32;
          }
          auVar38._0_8_ = ~-(ulong)NAN(dVar32) & (ulong)dVar21;
          auVar38._8_8_ = ~local_468._8_8_ & uStack_450;
          auVar11._8_4_ = (int)(local_468._8_8_ & uStack_450);
          auVar11._0_8_ = -(ulong)NAN(dVar32) & (ulong)dVar27;
          auVar11._12_4_ = (int)((local_468._8_8_ & uStack_450) >> 0x20);
          local_488 = auVar38 | auVar11;
          local_4f0 = SUB87(&local_490,0);
          uStack_4e9 = (undefined1)((ulong)&local_490 >> 0x38);
          uStack_4e0 = SUB87(&local_438,0);
          uStack_4d9 = (undefined1)((ulong)&local_438 >> 0x38);
          local_4d0 = local_4f4;
          local_4c8 = PTR_fmt_001dc6a8;
          local_4c0 = &PTR_s_maker__e__001d8458;
          local_4b8 = (undefined *)0x3;
          local_4a0 = 0;
          local_4b0 = &local_4f0;
          local_4a8 = 3;
          (*(code *)PTR_format_inner_001dc188)(local_2c0,&local_4c0);
          uStack_4e9 = (undefined1)local_2c0._0_8_;
          uStack_4e8 = SUB87(local_2c0._0_8_,1);
          uStack_4e1 = (undefined1)local_2c0._8_8_;
          uStack_4e0 = SUB87(local_2c0._8_8_,1);
          local_1c0 = local_2b0;
        }
        else {
          if (param_11 != 1) {
            local_4b8 = PTR_fmt_001dc6a8;
            uStack_4e0 = SUB87(&local_4c0,0);
            uStack_4d9 = (undefined1)((ulong)&local_4c0 >> 0x38);
            puVar22 = local_c8;
            goto LAB_00186df3;
          }
          dVar32 = (double)local_468._0_8_ + _DAT_00117668;
          dVar27 = local_458 + DAT_001176b0;
          dVar21 = dVar27;
          if (dVar27 <= dVar32) {
            dVar21 = dVar32;
          }
          auVar48._0_8_ = ~-(ulong)NAN(dVar32) & (ulong)dVar21;
          auVar48._8_8_ = ~local_468._8_8_ & uStack_450;
          auVar12._8_4_ = (int)(local_468._8_8_ & uStack_450);
          auVar12._0_8_ = -(ulong)NAN(dVar32) & (ulong)dVar27;
          auVar12._12_4_ = (int)((local_468._8_8_ & uStack_450) >> 0x20);
          local_488 = auVar48 | auVar12;
          local_4f0 = SUB87(&local_490,0);
          uStack_4e9 = (undefined1)((ulong)&local_490 >> 0x38);
          uStack_4e0 = SUB87(&local_438,0);
          uStack_4d9 = (undefined1)((ulong)&local_438 >> 0x38);
          local_4d0 = local_4f4;
          local_4c8 = PTR_fmt_001dc6a8;
          local_4c0 = &PTR_s_maker__e__001d8458;
          local_4b8 = (undefined *)0x3;
          local_4a0 = 0;
          local_4b0 = &local_4f0;
          local_4a8 = 3;
          (*(code *)PTR_format_inner_001dc188)(local_2a8,&local_4c0);
          uStack_4e9 = (undefined1)local_2a8._0_8_;
          uStack_4e8 = SUB87(local_2a8._0_8_,1);
          uStack_4e1 = (undefined1)local_2a8._8_8_;
          uStack_4e0 = SUB87(local_2a8._8_8_,1);
          local_1c0 = local_298;
        }
      }
      else {
        if (param_11 + 1 < 2) {
          local_4f0 = SUB87(&local_490,0);
          uStack_4e9 = (undefined1)((ulong)&local_490 >> 0x38);
          uStack_4e0 = SUB87(&local_438,0);
          uStack_4d9 = (undefined1)((ulong)&local_438 >> 0x38);
          local_4d0 = local_4f4;
          local_4c8 = PTR_fmt_001dc6a8;
          local_4c0 = &PTR_DAT_001d84a8;
          local_4b8 = (undefined *)0x3;
          local_4a0 = 0;
          local_4b0 = &local_4f0;
          local_4a8 = 3;
          (*(code *)PTR_format_inner_001dc188)(local_308,&local_4c0);
          uStack_4e9 = (undefined1)local_308._0_8_;
          uStack_4e8 = SUB87(local_308._0_8_,1);
          uStack_4e1 = (undefined1)local_308._8_8_;
          uStack_4e0 = SUB87(local_308._8_8_,1);
          local_1a8 = local_2f8;
          goto LAB_001856ec;
        }
        if (param_11 != 1) {
          local_4b8 = PTR_fmt_001dc6a8;
          uStack_4e0 = SUB87(&local_4c0,0);
          uStack_4d9 = (undefined1)((ulong)&local_4c0 >> 0x38);
          puVar22 = local_e0;
          goto LAB_00186df3;
        }
        dVar32 = (double)local_468._0_8_ + _DAT_00117668;
        dVar27 = local_458 + DAT_001176b0;
        dVar21 = dVar27;
        if (dVar27 <= dVar32) {
          dVar21 = dVar32;
        }
        auVar42._0_8_ = ~-(ulong)NAN(dVar32) & (ulong)dVar21;
        auVar42._8_8_ = ~local_468._8_8_ & uStack_450;
        auVar10._8_4_ = (int)(local_468._8_8_ & uStack_450);
        auVar10._0_8_ = -(ulong)NAN(dVar32) & (ulong)dVar27;
        auVar10._12_4_ = (int)((local_468._8_8_ & uStack_450) >> 0x20);
        local_488 = auVar42 | auVar10;
        local_4f0 = SUB87(&local_490,0);
        uStack_4e9 = (undefined1)((ulong)&local_490 >> 0x38);
        uStack_4e0 = SUB87(&local_438,0);
        uStack_4d9 = (undefined1)((ulong)&local_438 >> 0x38);
        local_4d0 = local_4f4;
        local_4c8 = PTR_fmt_001dc6a8;
        local_4c0 = &PTR_s_maker__e__001d8458;
        local_4b8 = (undefined *)0x3;
        local_4a0 = 0;
        local_4b0 = &local_4f0;
        local_4a8 = 3;
        (*(code *)PTR_format_inner_001dc188)(local_2f0,&local_4c0);
        uStack_4e9 = (undefined1)local_2f0._0_8_;
        uStack_4e8 = SUB87(local_2f0._0_8_,1);
        uStack_4e1 = (undefined1)local_2f0._8_8_;
        uStack_4e0 = SUB87(local_2f0._8_8_,1);
        local_1c0 = local_2e0;
      }
    }
    else {
      if (param_11 + 1 < 2) {
        dVar21 = (local_438 - (double)local_488._0_8_) * _DAT_00117788;
        dVar27 = dVar21;
        if (local_420 <= dVar21) {
          dVar27 = local_420;
        }
        auVar31._0_8_ = ~-(ulong)NAN(local_420) & (ulong)dVar27;
        auVar31._12_4_ = extraout_XMM0_Dd_02;
        auVar31._8_4_ = extraout_XMM0_Dc_02;
        auVar19._8_8_ = 0;
        auVar19._0_8_ = -(ulong)NAN(local_420) & (ulong)dVar21;
        auVar31 = auVar31 | auVar19;
        uVar24 = SUB84(local_3f8,0);
        uVar25 = (undefined4)((ulong)local_3f8 >> 0x20);
        if (local_3f8 <= auVar31._0_8_) {
          uVar24 = auVar31._0_4_;
          uVar25 = auVar31._4_4_;
        }
        uVar23 = -(ulong)NAN(auVar31._0_8_);
        local_458 = local_458 *
                    (DAT_001176a0 -
                    (double)(uVar23 & (ulong)local_3f8 | ~uVar23 & CONCAT44(uVar25,uVar24)));
        local_4f0 = SUB87(&local_490,0);
        uStack_4e9 = (undefined1)((ulong)&local_490 >> 0x38);
        uStack_4e0 = SUB87(&local_438,0);
        uStack_4d9 = (undefined1)((ulong)&local_438 >> 0x38);
        local_4d0 = local_4f4;
        local_4c8 = PTR_fmt_001dc6a8;
        local_4c0 = &PTR_s_taker__s__001d84d8;
        local_4b8 = (undefined *)0x3;
        local_4a0 = 0;
        local_4b0 = &local_4f0;
        local_4a8 = 3;
        (*(code *)PTR_format_inner_001dc188)(local_338,&local_4c0);
        uStack_4e9 = (undefined1)local_338._0_8_;
        uStack_4e8 = SUB87(local_338._0_8_,1);
        uStack_4e1 = (undefined1)local_338._8_8_;
        uStack_4e0 = SUB87(local_338._8_8_,1);
        local_280 = local_328;
LAB_00185401:
        uStack_4d9 = (undefined1)local_280;
        local_4d8 = (undefined7)((ulong)local_280 >> 8);
        local_468._0_4_ = (undefined4)local_458;
        local_468._4_4_ = local_458._4_4_;
        goto LAB_0018540e;
      }
      if (param_11 != 1) {
        local_4b8 = PTR_fmt_001dc6a8;
        uStack_4e0 = SUB87(&local_4c0,0);
        uStack_4d9 = (undefined1)((ulong)&local_4c0 >> 0x38);
        puVar22 = local_f8;
        goto LAB_00186df3;
      }
      dVar32 = (double)local_468._0_8_ + _DAT_00117668;
      dVar27 = local_458 + DAT_001176b0;
      dVar21 = dVar27;
      if (dVar27 <= dVar32) {
        dVar21 = dVar32;
      }
      auVar37._0_8_ = ~-(ulong)NAN(dVar32) & (ulong)dVar21;
      auVar37._8_8_ = ~local_468._8_8_ & uStack_450;
      auVar9._8_4_ = (int)(local_468._8_8_ & uStack_450);
      auVar9._0_8_ = -(ulong)NAN(dVar32) & (ulong)dVar27;
      auVar9._12_4_ = (int)((local_468._8_8_ & uStack_450) >> 0x20);
      local_488 = auVar37 | auVar9;
      local_4f0 = SUB87(&local_490,0);
      uStack_4e9 = (undefined1)((ulong)&local_490 >> 0x38);
      uStack_4e0 = SUB87(&local_438,0);
      uStack_4d9 = (undefined1)((ulong)&local_438 >> 0x38);
      local_4d0 = local_4f4;
      local_4c8 = PTR_fmt_001dc6a8;
      local_4c0 = &PTR_s_maker__e__001d8458;
      local_4b8 = (undefined *)0x3;
      local_4a0 = 0;
      local_4b0 = &local_4f0;
      local_4a8 = 3;
      (*(code *)PTR_format_inner_001dc188)(local_320,&local_4c0);
      uStack_4e9 = (undefined1)local_320._0_8_;
      uStack_4e8 = SUB87(local_320._0_8_,1);
      uStack_4e1 = (undefined1)local_320._8_8_;
      uStack_4e0 = SUB87(local_320._8_8_,1);
      local_1c0 = local_310;
    }
    break;
  case 2:
    local_430 = (double)(*(code *)PTR_round_001dc278)
                                  (SUB84((param_10[2] - local_418) * _DAT_001176f0,0));
    local_430 = local_430 / _DAT_001176f0;
    uStack_4e1 = (undefined1)((ulong)PTR_fmt_001dc280 >> 0x38);
    uStack_4e8 = SUB87(PTR_fmt_001dc280,0);
    local_4d8 = uStack_4e8;
    uStack_4d1 = uStack_4e1;
    if (local_430 <= (double)local_488._0_8_) {
      if (local_430 <= 0.0) {
        if (param_11 == 0xffffffff) {
          dVar21 = (double)((ulong)local_430 & _DAT_001177b0);
          dVar32 = local_408 * _DAT_001176c0;
          dVar27 = dVar32;
          if (dVar21 <= dVar32) {
            dVar27 = dVar21;
          }
          local_470 = local_470 *
                      ((double)(~-(ulong)NAN(dVar21) & (ulong)dVar27 |
                               -(ulong)NAN(dVar21) & (ulong)dVar32) * _DAT_00117788 + DAT_001176a0);
          local_4f0 = SUB87(&local_490,0);
          uStack_4e9 = (undefined1)((ulong)&local_490 >> 0x38);
          uStack_4e0 = SUB87(&local_430,0);
          uStack_4d9 = (undefined1)((ulong)&local_430 >> 0x38);
          local_4d0 = local_4f4;
          local_4c8 = PTR_fmt_001dc6a8;
          local_4c0 = &PTR_s_maker__e__001d8458;
          local_4b8 = (undefined *)0x3;
          local_4a0 = 0;
          local_4b0 = &local_4f0;
          local_4a8 = 3;
          (*(code *)PTR_format_inner_001dc188)(local_230,&local_4c0);
          uStack_4e9 = (undefined1)local_230._0_8_;
          uStack_4e8 = SUB87(local_230._0_8_,1);
          uStack_4e1 = (undefined1)local_230._8_8_;
          uStack_4e0 = SUB87(local_230._8_8_,1);
          local_178 = local_220;
          goto LAB_0018660a;
        }
        if (param_11 == 0) {
          dVar32 = (double)local_468._0_8_ + _DAT_00117668;
          dVar27 = local_458 + DAT_001176b0;
          dVar21 = dVar27;
          if (dVar27 <= dVar32) {
            dVar21 = dVar32;
          }
          auVar34._0_8_ = ~-(ulong)NAN(dVar32) & (ulong)dVar21;
          auVar34._8_8_ = ~local_468._8_8_ & uStack_450;
          auVar7._8_4_ = (int)(local_468._8_8_ & uStack_450);
          auVar7._0_8_ = -(ulong)NAN(dVar32) & (ulong)dVar27;
          auVar7._12_4_ = (int)((local_468._8_8_ & uStack_450) >> 0x20);
          local_488 = auVar34 | auVar7;
          local_4f0 = SUB87(&local_490,0);
          uStack_4e9 = (undefined1)((ulong)&local_490 >> 0x38);
          uStack_4e0 = SUB87(&local_430,0);
          uStack_4d9 = (undefined1)((ulong)&local_430 >> 0x38);
          local_4d0 = local_4f4;
          local_4c8 = PTR_fmt_001dc6a8;
          local_4c0 = &PTR_s_maker__e__001d8458;
          local_4b8 = (undefined *)0x3;
          local_4a0 = 0;
          local_4b0 = &local_4f0;
          local_4a8 = 3;
          (*(code *)PTR_format_inner_001dc188)(local_218,&local_4c0);
          uStack_4e9 = (undefined1)local_218._0_8_;
          uStack_4e8 = SUB87(local_218._0_8_,1);
          uStack_4e1 = (undefined1)local_218._8_8_;
          uStack_4e0 = SUB87(local_218._8_8_,1);
          local_1c0 = local_208;
        }
        else {
          if (param_11 != 1) {
            local_4b8 = PTR_fmt_001dc6a8;
            uStack_4e0 = SUB87(&local_4c0,0);
            uStack_4d9 = (undefined1)((ulong)&local_4c0 >> 0x38);
            puVar22 = local_80;
            goto LAB_00186df3;
          }
          dVar32 = (double)local_468._0_8_ + _DAT_00117668;
          dVar27 = local_458 + DAT_001176b0;
          dVar21 = dVar27;
          if (dVar27 <= dVar32) {
            dVar21 = dVar32;
          }
          auVar45._0_8_ = ~-(ulong)NAN(dVar32) & (ulong)dVar21;
          auVar45._8_8_ = ~local_468._8_8_ & uStack_450;
          auVar8._8_4_ = (int)(local_468._8_8_ & uStack_450);
          auVar8._0_8_ = -(ulong)NAN(dVar32) & (ulong)dVar27;
          auVar8._12_4_ = (int)((local_468._8_8_ & uStack_450) >> 0x20);
          local_488 = auVar45 | auVar8;
          local_4f0 = SUB87(&local_490,0);
          uStack_4e9 = (undefined1)((ulong)&local_490 >> 0x38);
          uStack_4e0 = SUB87(&local_430,0);
          uStack_4d9 = (undefined1)((ulong)&local_430 >> 0x38);
          local_4d0 = local_4f4;
          local_4c8 = PTR_fmt_001dc6a8;
          local_4c0 = &PTR_s_maker__e__001d8458;
          local_4b8 = (undefined *)0x3;
          local_4a0 = 0;
          local_4b0 = &local_4f0;
          local_4a8 = 3;
          (*(code *)PTR_format_inner_001dc188)(local_200,&local_4c0);
          uStack_4e9 = (undefined1)local_200._0_8_;
          uStack_4e8 = SUB87(local_200._0_8_,1);
          uStack_4e1 = (undefined1)local_200._8_8_;
          uStack_4e0 = SUB87(local_200._8_8_,1);
          local_1c0 = local_1f0;
        }
      }
      else {
        if (param_11 + 1 < 2) {
          local_4f0 = SUB87(&local_490,0);
          uStack_4e9 = (undefined1)((ulong)&local_490 >> 0x38);
          uStack_4e0 = SUB87(&local_430,0);
          uStack_4d9 = (undefined1)((ulong)&local_430 >> 0x38);
          local_4d0 = local_4f4;
          local_4c8 = PTR_fmt_001dc6a8;
          local_4c0 = &PTR_DAT_001d84a8;
          local_4b8 = (undefined *)0x3;
          local_4a0 = 0;
          local_4b0 = &local_4f0;
          local_4a8 = 3;
          (*(code *)PTR_format_inner_001dc188)(local_260,&local_4c0);
          uStack_4e9 = (undefined1)local_260._0_8_;
          uStack_4e8 = SUB87(local_260._0_8_,1);
          uStack_4e1 = (undefined1)local_260._8_8_;
          uStack_4e0 = SUB87(local_260._8_8_,1);
          local_1a8 = local_250;
          goto LAB_001856ec;
        }
        if (param_11 != 1) {
          local_4b8 = PTR_fmt_001dc6a8;
          uStack_4e0 = SUB87(&local_4c0,0);
          uStack_4d9 = (undefined1)((ulong)&local_4c0 >> 0x38);
          puVar22 = local_98;
          goto LAB_00186df3;
        }
        dVar32 = (double)local_468._0_8_ + _DAT_00117668;
        dVar27 = local_458 + DAT_001176b0;
        dVar21 = dVar27;
        if (dVar27 <= dVar32) {
          dVar21 = dVar32;
        }
        auVar39._0_8_ = ~-(ulong)NAN(dVar32) & (ulong)dVar21;
        auVar39._8_8_ = ~local_468._8_8_ & uStack_450;
        auVar6._8_4_ = (int)(local_468._8_8_ & uStack_450);
        auVar6._0_8_ = -(ulong)NAN(dVar32) & (ulong)dVar27;
        auVar6._12_4_ = (int)((local_468._8_8_ & uStack_450) >> 0x20);
        local_488 = auVar39 | auVar6;
        local_4f0 = SUB87(&local_490,0);
        uStack_4e9 = (undefined1)((ulong)&local_490 >> 0x38);
        uStack_4e0 = SUB87(&local_430,0);
        uStack_4d9 = (undefined1)((ulong)&local_430 >> 0x38);
        local_4d0 = local_4f4;
        local_4c8 = PTR_fmt_001dc6a8;
        local_4c0 = &PTR_s_maker__e__001d8458;
        local_4b8 = (undefined *)0x3;
        local_4a0 = 0;
        local_4b0 = &local_4f0;
        local_4a8 = 3;
        (*(code *)PTR_format_inner_001dc188)(local_248,&local_4c0);
        uStack_4e9 = (undefined1)local_248._0_8_;
        uStack_4e8 = SUB87(local_248._0_8_,1);
        uStack_4e1 = (undefined1)local_248._8_8_;
        uStack_4e0 = SUB87(local_248._8_8_,1);
        local_1c0 = local_238;
      }
    }
    else {
      if (param_11 + 1 < 2) {
        dVar21 = (local_430 - (double)local_488._0_8_) * _DAT_00117788;
        dVar27 = dVar21;
        if (local_420 <= dVar21) {
          dVar27 = local_420;
        }
        auVar29._0_8_ = ~-(ulong)NAN(local_420) & (ulong)dVar27;
        auVar29._12_4_ = extraout_XMM0_Dd_00;
        auVar29._8_4_ = extraout_XMM0_Dc_00;
        auVar18._8_8_ = 0;
        auVar18._0_8_ = -(ulong)NAN(local_420) & (ulong)dVar21;
        auVar29 = auVar29 | auVar18;
        uVar24 = SUB84(local_3f8,0);
        uVar25 = (undefined4)((ulong)local_3f8 >> 0x20);
        if (local_3f8 <= auVar29._0_8_) {
          uVar24 = auVar29._0_4_;
          uVar25 = auVar29._4_4_;
        }
        uVar23 = -(ulong)NAN(auVar29._0_8_);
        local_458 = local_458 *
                    (DAT_001176a0 -
                    (double)(uVar23 & (ulong)local_3f8 | ~uVar23 & CONCAT44(uVar25,uVar24)));
        local_4f0 = SUB87(&local_490,0);
        uStack_4e9 = (undefined1)((ulong)&local_490 >> 0x38);
        uStack_4e0 = SUB87(&local_430,0);
        uStack_4d9 = (undefined1)((ulong)&local_430 >> 0x38);
        local_4d0 = local_4f4;
        local_4c8 = PTR_fmt_001dc6a8;
        local_4c0 = &PTR_s_taker__s__001d84d8;
        local_4b8 = (undefined *)0x3;
        local_4a0 = 0;
        local_4b0 = &local_4f0;
        local_4a8 = 3;
        (*(code *)PTR_format_inner_001dc188)(local_290,&local_4c0);
        uStack_4e9 = (undefined1)local_290._0_8_;
        uStack_4e8 = SUB87(local_290._0_8_,1);
        uStack_4e1 = (undefined1)local_290._8_8_;
        uStack_4e0 = SUB87(local_290._8_8_,1);
        goto LAB_00185401;
      }
      if (param_11 != 1) {
        local_4b8 = PTR_fmt_001dc6a8;
        uStack_4e0 = SUB87(&local_4c0,0);
        uStack_4d9 = (undefined1)((ulong)&local_4c0 >> 0x38);
        puVar22 = local_b0;
        goto LAB_00186df3;
      }
      dVar32 = (double)local_468._0_8_ + _DAT_00117668;
      dVar27 = local_458 + DAT_001176b0;
      dVar21 = dVar27;
      if (dVar27 <= dVar32) {
        dVar21 = dVar32;
      }
      auVar33._0_8_ = ~-(ulong)NAN(dVar32) & (ulong)dVar21;
      auVar33._8_8_ = ~local_468._8_8_ & uStack_450;
      auVar5._8_4_ = (int)(local_468._8_8_ & uStack_450);
      auVar5._0_8_ = -(ulong)NAN(dVar32) & (ulong)dVar27;
      auVar5._12_4_ = (int)((local_468._8_8_ & uStack_450) >> 0x20);
      local_488 = auVar33 | auVar5;
      local_4f0 = SUB87(&local_490,0);
      uStack_4e9 = (undefined1)((ulong)&local_490 >> 0x38);
      uStack_4e0 = SUB87(&local_430,0);
      uStack_4d9 = (undefined1)((ulong)&local_430 >> 0x38);
      local_4d0 = local_4f4;
      local_4c8 = PTR_fmt_001dc6a8;
      local_4c0 = &PTR_s_maker__e__001d8458;
      local_4b8 = (undefined *)0x3;
      local_4a0 = 0;
      local_4b0 = &local_4f0;
      local_4a8 = 3;
      (*(code *)PTR_format_inner_001dc188)(local_278,&local_4c0);
      uStack_4e9 = (undefined1)local_278._0_8_;
      uStack_4e8 = SUB87(local_278._0_8_,1);
      uStack_4e1 = (undefined1)local_278._8_8_;
      uStack_4e0 = SUB87(local_278._8_8_,1);
      local_1c0 = local_268;
    }
    break;
  case 3:
    local_428 = (double)(*(code *)PTR_round_001dc278)
                                  (SUB84((local_410 - param_10[3]) * _DAT_001176f0,0));
    local_428 = local_428 / _DAT_001176f0;
    uStack_4e1 = (undefined1)((ulong)PTR_fmt_001dc280 >> 0x38);
    uStack_4e8 = SUB87(PTR_fmt_001dc280,0);
    local_4d8 = uStack_4e8;
    uStack_4d1 = uStack_4e1;
    if (local_428 <= (double)local_488._0_8_) {
      if (local_428 <= 0.0) {
        if (param_11 == 0) {
          dVar27 = local_458 + DAT_001176b0;
          dVar32 = (double)local_468._0_8_ + _DAT_00117668;
          dVar21 = dVar32;
          if (dVar27 <= dVar32) {
            dVar21 = dVar27;
          }
          auVar43._0_8_ = ~-(ulong)NAN(dVar27) & (ulong)dVar21;
          auVar43._8_8_ = ~uStack_450 & local_468._8_8_;
          auVar4._8_4_ = (int)(uStack_450 & local_468._8_8_);
          auVar4._0_8_ = -(ulong)NAN(dVar27) & (ulong)dVar32;
          auVar4._12_4_ = (int)((uStack_450 & local_468._8_8_) >> 0x20);
          local_488 = auVar43 | auVar4;
          local_4f0 = SUB87(&local_490,0);
          uStack_4e9 = (undefined1)((ulong)&local_490 >> 0x38);
          uStack_4e0 = SUB87(&local_428,0);
          uStack_4d9 = (undefined1)((ulong)&local_428 >> 0x38);
          local_4d0 = local_4f4;
          local_4c8 = PTR_fmt_001dc6a8;
          local_4c0 = &PTR_s_maker__e__001d8458;
          local_4b8 = (undefined *)0x3;
          local_4a0 = 0;
          local_4b0 = &local_4f0;
          local_4a8 = 3;
          (*(code *)PTR_format_inner_001dc188)(local_170,&local_4c0);
          uStack_4e9 = (undefined1)local_170._0_8_;
          uStack_4e8 = SUB87(local_170._0_8_,1);
          uStack_4e1 = (undefined1)local_170._8_8_;
          uStack_4e0 = SUB87(local_170._8_8_,1);
          local_1c0 = local_160;
        }
        else {
          if (param_11 == 1) {
            dVar21 = (double)((ulong)local_428 & _DAT_001177b0);
            dVar32 = local_408 * _DAT_001176c0;
            dVar27 = dVar32;
            if (dVar21 <= dVar32) {
              dVar27 = dVar21;
            }
            local_470 = local_470 *
                        ((double)(~-(ulong)NAN(dVar21) & (ulong)dVar27 |
                                 -(ulong)NAN(dVar21) & (ulong)dVar32) * _DAT_00117780 + DAT_001176a0
                        );
            local_4f0 = SUB87(&local_490,0);
            uStack_4e9 = (undefined1)((ulong)&local_490 >> 0x38);
            uStack_4e0 = SUB87(&local_428,0);
            uStack_4d9 = (undefined1)((ulong)&local_428 >> 0x38);
            local_4d0 = local_4f4;
            local_4c8 = PTR_fmt_001dc6a8;
            local_4c0 = &PTR_s_maker__e__001d8458;
            local_4b8 = (undefined *)0x3;
            local_4a0 = 0;
            local_4b0 = &local_4f0;
            local_4a8 = 3;
            (*(code *)PTR_format_inner_001dc188)(local_188,&local_4c0);
            uStack_4e9 = (undefined1)local_188._0_8_;
            uStack_4e8 = SUB87(local_188._0_8_,1);
            uStack_4e1 = (undefined1)local_188._8_8_;
            uStack_4e0 = SUB87(local_188._8_8_,1);
            goto LAB_0018660a;
          }
          if (param_11 != 0xffffffff) {
            local_4b8 = PTR_fmt_001dc6a8;
            uStack_4e0 = SUB87(&local_4c0,0);
            uStack_4d9 = (undefined1)((ulong)&local_4c0 >> 0x38);
            puVar22 = local_38;
            goto LAB_00186df3;
          }
          dVar27 = local_458 + DAT_001176b0;
          dVar32 = (double)local_468._0_8_ + _DAT_00117668;
          dVar21 = dVar32;
          if (dVar27 <= dVar32) {
            dVar21 = dVar27;
          }
          auVar46._0_8_ = ~-(ulong)NAN(dVar27) & (ulong)dVar21;
          auVar46._8_8_ = ~uStack_450 & local_468._8_8_;
          auVar3._8_4_ = (int)(uStack_450 & local_468._8_8_);
          auVar3._0_8_ = -(ulong)NAN(dVar27) & (ulong)dVar32;
          auVar3._12_4_ = (int)((uStack_450 & local_468._8_8_) >> 0x20);
          local_488 = auVar46 | auVar3;
          local_4f0 = SUB87(&local_490,0);
          uStack_4e9 = (undefined1)((ulong)&local_490 >> 0x38);
          uStack_4e0 = SUB87(&local_428,0);
          uStack_4d9 = (undefined1)((ulong)&local_428 >> 0x38);
          local_4d0 = local_4f4;
          local_4c8 = PTR_fmt_001dc6a8;
          local_4c0 = &PTR_s_maker__e__001d8458;
          local_4b8 = (undefined *)0x3;
          local_4a0 = 0;
          local_4b0 = &local_4f0;
          local_4a8 = 3;
          (*(code *)PTR_format_inner_001dc188)(local_158,&local_4c0);
          uStack_4e9 = (undefined1)local_158._0_8_;
          uStack_4e8 = SUB87(local_158._0_8_,1);
          uStack_4e1 = (undefined1)local_158._8_8_;
          uStack_4e0 = SUB87(local_158._8_8_,1);
          local_1c0 = local_148;
        }
      }
      else {
        if (param_11 < 2) {
          local_4f0 = SUB87(&local_490,0);
          uStack_4e9 = (undefined1)((ulong)&local_490 >> 0x38);
          uStack_4e0 = SUB87(&local_428,0);
          uStack_4d9 = (undefined1)((ulong)&local_428 >> 0x38);
          local_4d0 = local_4f4;
          local_4c8 = PTR_fmt_001dc6a8;
          local_4c0 = &PTR_DAT_001d84a8;
          local_4b8 = (undefined *)0x3;
          local_4a0 = 0;
          local_4b0 = &local_4f0;
          local_4a8 = 3;
          (*(code *)PTR_format_inner_001dc188)(local_1b8,&local_4c0);
          uStack_4e9 = (undefined1)local_1b8._0_8_;
          uStack_4e8 = SUB87(local_1b8._0_8_,1);
          uStack_4e1 = (undefined1)local_1b8._8_8_;
          uStack_4e0 = SUB87(local_1b8._8_8_,1);
          goto LAB_001856ec;
        }
        if (param_11 != 0xffffffff) {
          local_4b8 = PTR_fmt_001dc6a8;
          uStack_4e0 = SUB87(&local_4c0,0);
          uStack_4d9 = (undefined1)((ulong)&local_4c0 >> 0x38);
          puVar22 = local_50;
          goto LAB_00186df3;
        }
        dVar27 = local_458 + DAT_001176b0;
        dVar32 = (double)local_468._0_8_ + _DAT_00117668;
        dVar21 = dVar32;
        if (dVar27 <= dVar32) {
          dVar21 = dVar27;
        }
        auVar40._0_8_ = ~-(ulong)NAN(dVar27) & (ulong)dVar21;
        auVar40._8_8_ = ~uStack_450 & local_468._8_8_;
        auVar2._8_4_ = (int)(uStack_450 & local_468._8_8_);
        auVar2._0_8_ = -(ulong)NAN(dVar27) & (ulong)dVar32;
        auVar2._12_4_ = (int)((uStack_450 & local_468._8_8_) >> 0x20);
        local_488 = auVar40 | auVar2;
        local_4f0 = SUB87(&local_490,0);
        uStack_4e9 = (undefined1)((ulong)&local_490 >> 0x38);
        uStack_4e0 = SUB87(&local_428,0);
        uStack_4d9 = (undefined1)((ulong)&local_428 >> 0x38);
        local_4d0 = local_4f4;
        local_4c8 = PTR_fmt_001dc6a8;
        local_4c0 = &PTR_s_maker__e__001d8458;
        local_4b8 = (undefined *)0x3;
        local_4a0 = 0;
        local_4b0 = &local_4f0;
        local_4a8 = 3;
        (*(code *)PTR_format_inner_001dc188)(local_1a0,&local_4c0);
        uStack_4e9 = (undefined1)local_1a0._0_8_;
        uStack_4e8 = SUB87(local_1a0._0_8_,1);
        uStack_4e1 = (undefined1)local_1a0._8_8_;
        uStack_4e0 = SUB87(local_1a0._8_8_,1);
        local_1c0 = local_190;
      }
    }
    else {
      if (param_11 < 2) {
        dVar21 = (local_428 - (double)local_488._0_8_) * _DAT_00117788;
        dVar27 = dVar21;
        if (local_420 <= dVar21) {
          dVar27 = local_420;
        }
        auVar30._0_8_ = ~-(ulong)NAN(local_420) & (ulong)dVar27;
        auVar30._12_4_ = extraout_XMM0_Dd_01;
        auVar30._8_4_ = extraout_XMM0_Dc_01;
        auVar17._8_8_ = 0;
        auVar17._0_8_ = -(ulong)NAN(local_420) & (ulong)dVar21;
        auVar30 = auVar30 | auVar17;
        uVar24 = SUB84(local_3f8,0);
        uVar25 = (undefined4)((ulong)local_3f8 >> 0x20);
        if (local_3f8 <= auVar30._0_8_) {
          uVar24 = auVar30._0_4_;
          uVar25 = auVar30._4_4_;
        }
        uVar23 = -(ulong)NAN(auVar30._0_8_);
        uVar26 = local_468._12_4_;
        local_468._8_4_ = local_468._8_4_;
        local_468._0_8_ =
             (double)local_468._0_8_ *
             ((double)(uVar23 & (ulong)local_3f8 | ~uVar23 & CONCAT44(uVar25,uVar24)) + DAT_001176a0
             );
        local_468._12_4_ = uVar26;
        local_4f0 = SUB87(&local_490,0);
        uStack_4e9 = (undefined1)((ulong)&local_490 >> 0x38);
        uStack_4e0 = SUB87(&local_428,0);
        uStack_4d9 = (undefined1)((ulong)&local_428 >> 0x38);
        local_4d0 = local_4f4;
        local_4c8 = PTR_fmt_001dc6a8;
        local_4c0 = &PTR_s_taker__s__001d84d8;
        local_4b8 = (undefined *)0x3;
        local_4a0 = 0;
        local_4b0 = &local_4f0;
        local_4a8 = 3;
        (*(code *)PTR_format_inner_001dc188)(local_1e8,&local_4c0);
        uStack_4e9 = (undefined1)local_1e8._0_8_;
        uStack_4e8 = SUB87(local_1e8._0_8_,1);
        uStack_4e1 = (undefined1)local_1e8._8_8_;
        uStack_4e0 = SUB87(local_1e8._8_8_,1);
        goto LAB_00185293;
      }
      if (param_11 != 0xffffffff) {
        local_4b8 = PTR_fmt_001dc6a8;
        uStack_4e0 = SUB87(&local_4c0,0);
        uStack_4d9 = (undefined1)((ulong)&local_4c0 >> 0x38);
        puVar22 = local_68;
        goto LAB_00186df3;
      }
      dVar27 = local_458 + DAT_001176b0;
      dVar32 = (double)local_468._0_8_ + _DAT_00117668;
      dVar21 = dVar32;
      if (dVar27 <= dVar32) {
        dVar21 = dVar27;
      }
      auVar35._0_8_ = ~-(ulong)NAN(dVar27) & (ulong)dVar21;
      auVar35._8_8_ = ~uStack_450 & local_468._8_8_;
      auVar1._8_4_ = (int)(uStack_450 & local_468._8_8_);
      auVar1._0_8_ = -(ulong)NAN(dVar27) & (ulong)dVar32;
      auVar1._12_4_ = (int)((uStack_450 & local_468._8_8_) >> 0x20);
      local_488 = auVar35 | auVar1;
      local_4f0 = SUB87(&local_490,0);
      uStack_4e9 = (undefined1)((ulong)&local_490 >> 0x38);
      uStack_4e0 = SUB87(&local_428,0);
      uStack_4d9 = (undefined1)((ulong)&local_428 >> 0x38);
      local_4d0 = local_4f4;
      local_4c8 = PTR_fmt_001dc6a8;
      local_4c0 = &PTR_s_maker__e__001d8458;
      local_4b8 = (undefined *)0x3;
      local_4a0 = 0;
      local_4b0 = &local_4f0;
      local_4a8 = 3;
      (*(code *)PTR_format_inner_001dc188)(local_1d0,&local_4c0);
      uStack_4e9 = (undefined1)local_1d0._0_8_;
      uStack_4e8 = SUB87(local_1d0._0_8_,1);
      uStack_4e1 = (undefined1)local_1d0._8_8_;
      uStack_4e0 = SUB87(local_1d0._8_8_,1);
    }
  }
  uStack_4d9 = (undefined1)local_1c0;
  local_4d8 = (undefined7)((ulong)local_1c0 >> 8);
  *param_8 = (double)local_488._0_8_;
  *(undefined1 *)(param_8 + 1) = 1;
LAB_001869dd:
  *(ulong *)((long)param_8 + 9) = CONCAT17(uStack_4e9,local_4f0);
  *(ulong *)((long)param_8 + 0x11) = CONCAT17(uStack_4e1,uStack_4e8);
  param_8[3] = (double)CONCAT71(uStack_4e0,uStack_4e1);
  param_8[4] = (double)CONCAT71(local_4d8,uStack_4d9);
  return param_8;
}




// ELF address 0x000000000003ca80; <strategy_sm3::StrategySM3 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin

/* WARNING: Removing unreachable block (ram,0x0013caf6) */
/* WARNING: Removing unreachable block (ram,0x0013cb51) */
/* WARNING: Removing unreachable block (ram,0x0013cb55) */
/* WARNING: Removing unreachable block (ram,0x0013cb57) */
/* WARNING: Removing unreachable block (ram,0x0013cd6d) */
/* WARNING: Removing unreachable block (ram,0x0013cb61) */
/* WARNING: Removing unreachable block (ram,0x0013cbfb) */
/* WARNING: Removing unreachable block (ram,0x0013cc0e) */
/* WARNING: Removing unreachable block (ram,0x0013cc1b) */
/* WARNING: Removing unreachable block (ram,0x0013cc20) */
/* WARNING: Removing unreachable block (ram,0x0013cc33) */
/* WARNING: Removing unreachable block (ram,0x0013cc4c) */
/* WARNING: Removing unreachable block (ram,0x0013cc6d) */
/* WARNING: Removing unreachable block (ram,0x0013cc76) */
/* WARNING: Removing unreachable block (ram,0x0013cc60) */
/* WARNING: Removing unreachable block (ram,0x0013cd1d) */
/* WARNING: Removing unreachable block (ram,0x0013cd2a) */
/* _<strategy_sm3::StrategySM3 as future_backtest_sdk::plugin::StrategyPlugin>::on_begin */

undefined8 __rustcall
_<strategy_sm3::StrategySM3_as_future_backtest_sdk::plugin::StrategyPlugin>::on_begin(long *param_1)

{
  long lVar1;
  long local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined1 local_288 [296];
  long local_160;
  long local_158;
  undefined1 auStack_150 [288];
  
  (*(code *)PTR_custom_config_001dc178)(&local_318);
                    /* try { // try from 0013caa9 to 0013cad7 has its CatchHandler @ 0013cd84 */
  _<toml::de::Deserializer_as_serde_core::de::Deserializer>::deserialize_struct
            (&local_160,local_310,local_308,&DAT_00117e5b,9,&PTR_DAT_001d6100,0x21);
  (*(code *)PTR_memcpy_001dc0f0)(local_288,auStack_150,0x120);
  lVar1 = *param_1;
  if (lVar1 != -0x8000000000000000) {
    if (lVar1 != 0) {
      (*(code *)PTR___rust_dealloc_001dc090)(param_1[1],lVar1,1);
    }
    lVar1 = param_1[6];
    if ((lVar1 != -0x8000000000000000) && (lVar1 != 0)) {
      (*(code *)PTR___rust_dealloc_001dc090)(param_1[7],lVar1,1);
    }
    if (param_1[3] != 0) {
      (*(code *)PTR___rust_dealloc_001dc090)(param_1[4],param_1[3],1);
    }
  }
  *param_1 = local_160;
  param_1[1] = local_158;
  (*(code *)PTR_memcpy_001dc0f0)(param_1 + 2,local_288,0x120);
  if (local_318 != 0) {
    (*(code *)PTR___rust_dealloc_001dc090)(local_310,local_318,1);
  }
  return 0;
}




// ELF address 0x0000000000040260; <strategy_sm3::StrategySM3 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth

/* _<strategy_sm3::StrategySM3 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth */

undefined8 __rustcall
_<strategy_sm3::StrategySM3_as_future_backtest_sdk::plugin::StrategyPlugin>::on_depth
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
  
  lVar11 = *(long *)(param_1 + 0x158);
  if (lVar11 != 0) {
    local_78 = *(long *)(param_1 + 0x160);
    uVar3 = *(undefined8 *)(param_2 + 0x28);
    uVar4 = *(ulong *)(param_2 + 0x30);
    while( true ) {
      uVar2 = *(ushort *)(lVar11 + 0x21a);
      uVar8 = 0xffffffffffffffff;
      lVar10 = 0;
      lVar6 = lVar11 + 8;
      do {
        uVar9 = (ulong)uVar2;
        if ((ulong)((uint)uVar2 * 8) * 3 == lVar10) goto LAB_00140345;
        uVar9 = *(ulong *)(lVar6 + 0x10);
        uVar7 = uVar9;
        if (uVar4 < uVar9) {
          uVar7 = uVar4;
        }
        iVar5 = (*(code *)PTR_memcmp_001dc128)(uVar3,*(undefined8 *)(lVar6 + 8),uVar7);
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
LAB_00140345:
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
    alloc::collections::btree::map::BTreeMap<K,V,A>::remove(local_50,param_1 + 0x158,param_2 + 0x20)
    ;
  }
  return 0;
}




// ELF address 0x000000000003cdc0; <strategy_sm3::StrategySM3 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal

/* WARNING: Removing unreachable block (ram,0x0013e8ab) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _<strategy_sm3::StrategySM3 as future_backtest_sdk::plugin::StrategyPlugin>::on_signal */

long ******* __rustcall
_<strategy_sm3::StrategySM3_as_future_backtest_sdk::plugin::StrategyPlugin>::on_signal
          (long *******param_1,long param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined2 uVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  byte bVar7;
  char cVar8;
  byte bVar9;
  undefined1 uVar10;
  int iVar11;
  long lVar12;
  long *******ppppppplVar13;
  ulong uVar14;
  long *******ppppppplVar15;
  undefined8 uVar16;
  long ******pppppplVar17;
  long *******ppppppplVar18;
  ulong uVar19;
  long ******pppppplVar20;
  ulong uVar21;
  ulong uVar22;
  long ******pppppplVar23;
  long *******ppppppplVar24;
  long extraout_RDX;
  long extraout_RDX_00;
  uint uVar25;
  undefined8 *puVar26;
  undefined4 uVar27;
  long *******ppppppplVar28;
  long *******ppppppplVar29;
  long lVar30;
  ulong uVar31;
  long lVar32;
  uint uVar33;
  ushort uVar34;
  long *******unaff_R12;
  long *******ppppppplVar35;
  long lVar36;
  long lVar37;
  bool bVar38;
  char cVar39;
  double dVar40;
  undefined8 extraout_XMM0_Qa;
  double dVar41;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar42;
  undefined8 extraout_XMM0_Qa_01;
  double dVar43;
  undefined8 extraout_XMM0_Qa_02;
  char cVar45;
  char cVar46;
  undefined1 auVar44 [16];
  long ******extraout_XMM0_Qb;
  long ******extraout_XMM0_Qb_00;
  long ******extraout_XMM0_Qb_01;
  long ******extraout_XMM0_Qb_02;
  double extraout_XMM1_Qa;
  undefined1 auVar47 [16];
  double dVar48;
  undefined1 auVar49 [16];
  double dVar50;
  double dVar51;
  double dVar52;
  undefined1 auVar53 [12];
  long *******local_778;
  long lStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 *******local_750;
  long local_748;
  undefined8 uStack_740;
  long *******local_738;
  long ******pppppplStack_730;
  long *******local_728;
  long ******pppppplStack_720;
  long *******local_718;
  long *******local_710;
  long *******local_708;
  undefined8 uStack_700;
  long *******ppppppplStack_6f8;
  long ******pppppplStack_6f0;
  long *******local_6e8;
  long ******pppppplStack_6e0;
  long *******local_6d0;
  undefined8 *******local_6c8;
  long *******ppppppplStack_6c0;
  long *******ppppppplStack_6b8;
  undefined *puStack_6b0;
  undefined8 uStack_6a8;
  long *******ppppppplStack_6a0;
  undefined8 uStack_698;
  long *******ppppppplStack_690;
  long *******local_688;
  long ******pppppplStack_680;
  long *******local_678;
  long *******ppppppplStack_670;
  long ******pppppplStack_660;
  long *******local_658;
  long ******pppppplStack_650;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  long *******local_628;
  long ******pppppplStack_620;
  long *******local_618;
  long ******pppppplStack_610;
  double dStack_608;
  double dStack_5f0;
  undefined8 uStack_5e8;
  long *******local_5e0;
  long *******local_5d8;
  long ******pppppplStack_5d0;
  long *******local_5c8;
  long *******ppppppplStack_5c0;
  long *******local_5b8;
  undefined1 local_5b0 [8];
  long *******ppppppplStack_5a8;
  long ******pppppplStack_5a0;
  long *******ppppppplStack_598;
  long ******pppppplStack_590;
  undefined8 *******pppppppuStack_588;
  long *******ppppppplStack_580;
  long *******ppppppplStack_578;
  undefined *puStack_570;
  long *******ppppppplStack_568;
  long ******pppppplStack_560;
  long *******ppppppplStack_558;
  undefined8 uStack_550;
  long lStack_548;
  undefined8 uStack_540;
  long ******local_4b8;
  long ******pppppplStack_4b0;
  long *******local_4a8;
  long ******pppppplStack_4a0;
  long lStack_490;
  undefined8 uStack_488;
  long local_478;
  long *******ppppppplStack_470;
  long local_468;
  long *******local_460;
  long *******ppppppplStack_458;
  long *******local_450;
  long *******local_448;
  long *******local_440;
  long *******local_438;
  long *******local_430;
  long ******pppppplStack_428;
  long *******local_420;
  long ******pppppplStack_418;
  long *******local_410;
  long ******pppppplStack_408;
  long *******local_400;
  long ******pppppplStack_3f8;
  long *******local_3f0;
  long ******pppppplStack_3e8;
  long ******local_3e0;
  long ******pppppplStack_3d8;
  long *******local_3d0;
  long *******ppppppplStack_3c8;
  long *******local_3c0;
  long ******pppppplStack_3b8;
  long *******local_3b0;
  long ******pppppplStack_3a8;
  long *******local_3a0;
  long ******pppppplStack_398;
  long ******local_390;
  long ******pppppplStack_388;
  long *******local_380;
  long ******pppppplStack_378;
  undefined8 *******local_370;
  long *******local_368;
  long ******local_360;
  long ******pppppplStack_358;
  short local_350;
  long lStack_348;
  long lStack_340;
  long lStack_338;
  undefined1 auStack_330 [24];
  long local_318;
  long lStack_310;
  long lStack_308;
  long *******local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined4 local_2e8;
  undefined2 local_2e4;
  byte local_2e0;
  undefined7 uStack_2df;
  long *******ppppppplStack_2d8;
  byte local_2d0;
  undefined7 uStack_2cf;
  double dStack_2c8;
  long lStack_2c0;
  undefined8 uStack_2b8;
  long *******ppppppplStack_298;
  double dStack_268;
  undefined8 *******pppppppuStack_248;
  double dStack_218;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  long *******ppppppplStack_1b8;
  undefined8 *******pppppppuStack_1b0;
  long *******ppppppplStack_1a8;
  long *******ppppppplStack_1a0;
  long *******ppppppplStack_198;
  undefined1 uStack_190;
  char cStack_18f;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  long *******ppppppplStack_168;
  long *******ppppppplStack_160;
  long *******ppppppplStack_158;
  undefined *puStack_150;
  long *******ppppppplStack_148;
  undefined1 uStack_140;
  byte bStack_13f;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  long *******ppppppplStack_118;
  long *******ppppppplStack_110;
  long *******ppppppplStack_108;
  undefined8 *******pppppppuStack_100;
  long *******ppppppplStack_f8;
  undefined2 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  long *******ppppppplStack_c8;
  undefined8 *******pppppppuStack_c0;
  long *******ppppppplStack_b8;
  long *******ppppppplStack_b0;
  long *******ppppppplStack_a8;
  undefined2 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  local_748 = param_2;
  lVar12 = (*(code *)PTR_para_001dc198)(param_3);
  uVar2 = *(undefined2 *)(lVar12 + 0x34);
  local_728 = *(long ********)(lVar12 + 0x28);
  local_738 = *(long ********)(lVar12 + 0x18);
  pppppplStack_730 = *(long *******)(lVar12 + 0x20);
  uVar27 = *(undefined4 *)(lVar12 + 0x30);
  _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone
            (&local_318,lVar12,&PTR_s__hdd1_lyt_d_FutureCommodity_Mult_001d6348);
  local_300 = local_738;
  uStack_2f8 = pppppplStack_730;
  local_2f0 = local_728;
                    /* try { // try from 0013ce4e to 0013ce6d has its CatchHandler @ 0014023c */
  local_6d0 = param_1;
  local_2e8 = uVar27;
  local_2e4 = uVar2;
  (*(code *)PTR_clone_001dc1a0)(&local_2e0,param_1,&PTR_s_strategies_index_strategy_strate_001d6570)
  ;
  ppppppplVar13 = local_6d0;
  local_728 = (long *******)local_6d0[9];
  pppppplStack_720 = local_6d0[10];
  local_738 = (long *******)local_6d0[0xb];
  pppppplStack_730 = local_6d0[0xc];
  local_628 = (long *******)local_6d0[0xd];
  pppppplStack_620 = local_6d0[0xe];
  local_5d8 = (long *******)local_6d0[0xf];
  pppppplStack_5d0 = local_6d0[0x10];
  local_6e8 = (long *******)local_6d0[0x11];
  pppppplStack_6e0 = local_6d0[0x12];
  pppppplVar20 = local_6d0[0x13];
  pppppplVar17 = local_6d0[0x14];
  local_678 = (long *******)local_6d0[0x15];
  ppppppplStack_670 = (long *******)local_6d0[0x16];
  local_658 = (long *******)local_6d0[0x17];
  pppppplStack_650 = local_6d0[0x18];
  local_618 = (long *******)local_6d0[0x19];
  pppppplStack_610 = local_6d0[0x1a];
  local_4a8 = (long *******)local_6d0[0x1b];
  pppppplStack_4a0 = local_6d0[0x1c];
  local_4b8 = local_6d0[0x1d];
  pppppplStack_4b0 = local_6d0[0x1e];
  local_688 = (long *******)local_6d0[0x1f];
  pppppplStack_680 = local_6d0[0x20];
  local_750 = (undefined8 *******)local_6d0[0x21];
  if (local_6d0[6] == (long ******)0x8000000000000000) {
    local_448 = (long *******)0x8000000000000000;
  }
  else {
                    /* try { // try from 0013cf45 to 0013cf5d has its CatchHandler @ 00140156 */
    (*(code *)PTR_clone_001dc1a0)
              (&local_5c8,local_6d0 + 6,&PTR_s__home_lyt__rustup_toolchains_nig_001d6378);
    local_448 = local_5c8;
    unaff_R12 = ppppppplStack_5c0;
    param_1 = local_5b8;
  }
  local_5e0 = (long *******)ppppppplVar13[0x22];
                    /* try { // try from 0013cf8c to 0013cfa0 has its CatchHandler @ 0014015b */
  (*(code *)PTR_clone_001dc1a0)
            (&local_5c8,ppppppplVar13 + 3,&PTR_s_strategies_index_strategy_strate_001d6570);
  local_350 = *(short *)(ppppppplVar13 + 0x25);
  local_478 = CONCAT71(uStack_2df,local_2e0);
  ppppppplStack_470 = ppppppplStack_2d8;
  local_468 = CONCAT71(uStack_2cf,local_2d0);
  local_430 = local_728;
  pppppplStack_428 = pppppplStack_720;
  local_420 = local_738;
  pppppplStack_418 = pppppplStack_730;
  local_410 = local_628;
  pppppplStack_408 = pppppplStack_620;
  local_400 = local_5d8;
  pppppplStack_3f8 = pppppplStack_5d0;
  local_3f0 = local_6e8;
  pppppplStack_3e8 = pppppplStack_6e0;
  local_3d0 = local_678;
  ppppppplStack_3c8 = ppppppplStack_670;
  local_3c0 = local_658;
  pppppplStack_3b8 = pppppplStack_650;
  local_3b0 = local_618;
  pppppplStack_3a8 = pppppplStack_610;
  local_3a0 = local_4a8;
  pppppplStack_398 = pppppplStack_4a0;
  local_390 = local_4b8;
  pppppplStack_388 = pppppplStack_4b0;
  local_380 = local_688;
  pppppplStack_378 = pppppplStack_680;
  local_370 = local_750;
  local_368 = local_5e0;
  local_450 = local_5b8;
  local_460 = local_5c8;
  ppppppplStack_458 = ppppppplStack_5c0;
  local_360 = ppppppplVar13[0x23];
  pppppplStack_358 = ppppppplVar13[0x24];
  local_440 = unaff_R12;
  local_438 = param_1;
  local_3e0 = pppppplVar20;
  pppppplStack_3d8 = pppppplVar17;
                    /* try { // try from 0013d0f8 to 0013d114 has its CatchHandler @ 00140217 */
  if ((local_448 == (long *******)0x8000000000000000) ||
     ((*(code *)PTR_clone_001dc1a0)
                (&local_5c8,&local_448,&PTR_s__home_lyt__rustup_toolchains_nig_001d6378),
     local_5c8 == (long *******)0x8000000000000000)) {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001dc0b0)();
    ppppppplVar13 = (long *******)(*(code *)PTR___rust_alloc_001dc088)(7,1);
    if (ppppppplVar13 == (long *******)0x0) {
                    /* try { // try from 0013ffbe to 0013ffd4 has its CatchHandler @ 00140217 */
      (*(code *)PTR_handle_error_001dc140)
                (1,7,anon_07c0eed8e65a4a48611bb33f166df0b2_2_llvm_13927337955214425223);
      goto LAB_0014006e;
    }
    *(undefined4 *)((long)ppppppplVar13 + 3) = 0x7974696c;
    *(undefined4 *)ppppppplVar13 = 0x6c697475;
    local_5d8 = (long *******)&DAT_00000007;
    ppppppplVar18 = (long *******)&DAT_00000007;
  }
  else {
    local_5d8 = local_5c8;
    ppppppplVar18 = local_5b8;
    ppppppplVar13 = ppppppplStack_5c0;
  }
  local_6e8 = (long *******)(local_748 + 0x48);
  pppppplVar20 = *(long *******)(local_748 + 0x50);
  ppppppplVar28 = *(long ********)(local_748 + 0x58);
  local_728 = ppppppplVar13;
  if ((ppppppplVar28 == ppppppplVar18) &&
     (iVar11 = (*(code *)PTR_bcmp_001dc150)(pppppplVar20,ppppppplVar13,ppppppplVar18), iVar11 == 0))
  {
                    /* try { // try from 0013d1bb to 0013d1d4 has its CatchHandler @ 0014014e */
    (*(code *)PTR_clone_001dc1a0)
              (&local_6c8,local_748,&PTR_s_strategies_index_strategy_strate_001d6390);
                    /* try { // try from 0013d1d5 to 0013d1ee has its CatchHandler @ 00140146 */
    (*(code *)PTR_clone_001dc1a0)
              (&local_718,local_6e8,&PTR_s_strategies_index_strategy_strate_001d63a8);
    if (local_468 == 3) {
      if (*(char *)((long)ppppppplStack_470 + 2) != '2' || *(short *)ppppppplStack_470 != 0x5650) {
        if ((*(char *)((long)ppppppplStack_470 + 2) == '3' && *(short *)ppppppplStack_470 == 0x5650)
           || (*(char *)((long)ppppppplStack_470 + 2) == '4' &&
               *(short *)ppppppplStack_470 == 0x5650)) {
          local_5c8 = (long *******)&PTR_DAT_001d6548;
          ppppppplStack_5c0 = (long *******)0x1;
          local_5b8 = (long *******)&DAT_00000008;
          _local_5b0 = (undefined1  [16])0x0;
                    /* try { // try from 0014000e to 00140022 has its CatchHandler @ 001401b5 */
          (*(code *)PTR_panic_fmt_001dc120)
                    (&local_5c8,&PTR_s_strategies_index_strategy_strate_001d6558);
          goto LAB_0014006e;
        }
        goto LAB_0013d24d;
      }
      local_618 = *(long ********)(local_748 + 0x78);
    }
    else {
LAB_0013d24d:
                    /* try { // try from 0013d25a to 0013d801 has its CatchHandler @ 001401b5 */
      auVar53 = (*(code *)PTR_signal_parameter_id_001dc1a8)(local_710,local_708);
      puVar6 = PTR_K1_MAP_001dc1b0;
      uVar25 = 0;
      if ((auVar53 & (undefined1  [12])0x1) != (undefined1  [12])0x0) {
        uVar25 = auVar53._8_4_;
      }
      if (*(long *)(PTR_K1_MAP_001dc1b0 + 0x30) != 2) {
                    /* try { // try from 0013ec91 to 0013ec9f has its CatchHandler @ 001401b5 */
        once_cell::imp::OnceCell<T>::initialize(PTR_K1_MAP_001dc1b0,PTR_K1_MAP_001dc1b0);
      }
      dVar43 = DAT_001176a0;
      if (*(long *)(puVar6 + 0x18) != 0) {
        uVar19 = *(ulong *)(puVar6 + 0x28) ^ 0x646f72616e646f6d;
        uVar21 = *(ulong *)(puVar6 + 0x28) ^ 0x7065646279746573;
        uVar22 = uVar21 ^ uVar25;
        uVar31 = (*(ulong *)(puVar6 + 0x20) ^ 0x736f6d6570736575) + uVar19;
        uVar14 = (*(ulong *)(puVar6 + 0x20) ^ 0x6c7967656e657261) + uVar22;
        uVar19 = (uVar19 << 0xd | uVar19 >> 0x33) ^ uVar31;
        uVar21 = (uVar22 << 0x10 | uVar21 >> 0x30) ^ uVar14;
        uVar14 = uVar14 + uVar19;
        uVar22 = (uVar31 << 0x20 | uVar31 >> 0x20) + uVar21;
        uVar19 = (uVar19 << 0x11 | uVar19 >> 0x2f) ^ uVar14;
        uVar21 = (uVar21 << 0x15 | uVar21 >> 0x2b) ^ uVar22;
        uVar22 = (uVar22 ^ ((ulong)uVar25 | 0x400000000000000)) + uVar19;
        uVar14 = ((uVar14 << 0x20 | uVar14 >> 0x20) ^ 0xff) + uVar21;
        uVar19 = (uVar19 << 0xd | uVar19 >> 0x33) ^ uVar22;
        uVar21 = (uVar21 << 0x10 | uVar21 >> 0x30) ^ uVar14;
        uVar14 = uVar14 + uVar19;
        uVar22 = (uVar22 << 0x20 | uVar22 >> 0x20) + uVar21;
        uVar19 = (uVar19 << 0x11 | uVar19 >> 0x2f) ^ uVar14;
        uVar21 = (uVar21 << 0x15 | uVar21 >> 0x2b) ^ uVar22;
        uVar22 = uVar22 + uVar19;
        uVar14 = (uVar14 << 0x20 | uVar14 >> 0x20) + uVar21;
        uVar19 = (uVar19 << 0xd | uVar19 >> 0x33) ^ uVar22;
        uVar21 = (uVar21 << 0x10 | uVar21 >> 0x30) ^ uVar14;
        uVar14 = uVar14 + uVar19;
        uVar22 = (uVar22 << 0x20 | uVar22 >> 0x20) + uVar21;
        uVar19 = (uVar19 << 0x11 | uVar19 >> 0x2f) ^ uVar14;
        uVar21 = (uVar21 << 0x15 | uVar21 >> 0x2b) ^ uVar22;
        uVar14 = (uVar14 << 0x20 | uVar14 >> 0x20) + uVar21;
        uVar19 = (uVar19 << 0xd | uVar19 >> 0x33) ^ uVar22 + uVar19;
        uVar21 = (uVar21 << 0x10 | uVar21 >> 0x30) ^ uVar14;
        uVar14 = uVar14 + uVar19;
        uVar14 = (uVar14 << 0x20 | uVar14 >> 0x20) ^ (uVar19 << 0x11 | uVar19 >> 0x2f) ^
                 (uVar21 << 0x15 | uVar21 >> 0x2b) ^ uVar14;
        lVar12 = *(long *)puVar6;
        bVar9 = (byte)(uVar14 >> 0x39);
        auVar44 = ZEXT216(CONCAT11(bVar9,bVar9));
        auVar44 = pshuflw(auVar44,auVar44,0);
        lVar32 = 0;
        while( true ) {
          uVar14 = uVar14 & *(ulong *)(puVar6 + 8);
          auVar1 = *(undefined1 (*) [16])(lVar12 + uVar14);
          cVar39 = auVar44[0];
          auVar49[0] = -(auVar1[0] == cVar39);
          cVar8 = auVar44[1];
          auVar49[1] = -(auVar1[1] == cVar8);
          cVar45 = auVar44[2];
          auVar49[2] = -(auVar1[2] == cVar45);
          cVar46 = auVar44[3];
          auVar49[3] = -(auVar1[3] == cVar46);
          auVar49[4] = -(auVar1[4] == cVar39);
          auVar49[5] = -(auVar1[5] == cVar8);
          auVar49[6] = -(auVar1[6] == cVar45);
          auVar49[7] = -(auVar1[7] == cVar46);
          auVar49[8] = -(auVar1[8] == cVar39);
          auVar49[9] = -(auVar1[9] == cVar8);
          auVar49[10] = -(auVar1[10] == cVar45);
          auVar49[0xb] = -(auVar1[0xb] == cVar46);
          auVar49[0xc] = -(auVar1[0xc] == cVar39);
          auVar49[0xd] = -(auVar1[0xd] == cVar8);
          cVar39 = auVar1[0xf];
          auVar49[0xe] = -(auVar1[0xe] == cVar45);
          auVar49[0xf] = -(cVar39 == cVar46);
          uVar34 = (ushort)(SUB161(auVar49 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar49 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar49 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar49 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar49 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar49 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar49 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar49 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar49 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar49 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar49 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar49 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar49 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar49 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar49 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar49[0xf] >> 7) << 0xf;
          uVar33 = (uint)uVar34;
          while (uVar34 != 0) {
            uVar4 = 0;
            for (uVar5 = uVar33; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
              uVar4 = uVar4 + 1;
            }
            uVar19 = uVar4 + uVar14 & *(ulong *)(puVar6 + 8);
            if (uVar25 == *(uint *)(lVar12 + -0x10 + uVar19 * -0x10)) {
              dVar43 = *(double *)(lVar12 + -8 + uVar19 * -0x10);
              goto LAB_0013d43d;
            }
            uVar34 = (ushort)(uVar33 - 1) & (ushort)uVar33;
            uVar33 = CONCAT22((short)(uVar33 - 1 >> 0x10),uVar34);
          }
          auVar47[0] = -(auVar1[0] == -1);
          auVar47[1] = -(auVar1[1] == -1);
          auVar47[2] = -(auVar1[2] == -1);
          auVar47[3] = -(auVar1[3] == -1);
          auVar47[4] = -(auVar1[4] == -1);
          auVar47[5] = -(auVar1[5] == -1);
          auVar47[6] = -(auVar1[6] == -1);
          auVar47[7] = -(auVar1[7] == -1);
          auVar47[8] = -(auVar1[8] == -1);
          auVar47[9] = -(auVar1[9] == -1);
          auVar47[10] = -(auVar1[10] == -1);
          auVar47[0xb] = -(auVar1[0xb] == -1);
          auVar47[0xc] = -(auVar1[0xc] == -1);
          auVar47[0xd] = -(auVar1[0xd] == -1);
          auVar47[0xe] = -(auVar1[0xe] == -1);
          auVar47[0xf] = -(cVar39 == -1);
          if ((((((((((((((((auVar47 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                           (auVar47 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                          (auVar47 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                         (auVar47 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar47 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar47 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar47 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar47 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar47 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar47 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar47 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar47 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar47 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar47 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar47 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || cVar39 == -1)
          break;
          uVar14 = uVar14 + lVar32 + 0x10;
          lVar32 = lVar32 + 0x10;
        }
      }
LAB_0013d43d:
      local_618 = (long *******)(dVar43 * *(double *)(local_748 + 0x70));
    }
    (*(code *)PTR_clone_001dc1a0)
              (&local_2e0,&local_6c8,&PTR_s_strategies_index_strategy_strate_001d63c0);
    ppppppplVar29 = ppppppplStack_2d8;
    ppppppplVar24 = local_6d0 + 0x26;
    ppppppplVar15 = (long *******)*ppppppplVar24;
    local_658 = ppppppplVar24;
    local_628 = ppppppplVar18;
    local_4b8 = pppppplVar20;
    local_4a8 = ppppppplVar28;
    if (ppppppplVar15 != (long *******)0x0) {
      local_778 = (long *******)local_6d0[0x27];
      pppppplVar20 = (long ******)CONCAT71(uStack_2cf,local_2d0);
      do {
        local_678 = (long *******)(ulong)*(ushort *)((long)ppppppplVar15 + 0x21a);
        lVar12 = (ulong)((uint)*(ushort *)((long)ppppppplVar15 + 0x21a) * 8) * 3;
        ppppppplVar28 = (long *******)0xffffffffffffffff;
        ppppppplVar18 = ppppppplVar15 + 1;
        local_738 = ppppppplVar15;
        do {
          ppppppplVar15 = local_678;
          if (lVar12 == 0) goto LAB_0013d547;
          pppppplVar17 = ppppppplVar18[2];
          pppppplVar23 = pppppplVar17;
          if (pppppplVar20 < pppppplVar17) {
            pppppplVar23 = pppppplVar20;
          }
          iVar11 = (*(code *)PTR_memcmp_001dc128)(ppppppplVar29,ppppppplVar18[1],pppppplVar23);
          ppppppplVar24 = local_658;
          ppppppplVar13 = local_728;
          lVar32 = (long)pppppplVar20 - (long)pppppplVar17;
          if (iVar11 != 0) {
            lVar32 = (long)iVar11;
          }
          lVar12 = lVar12 + -0x18;
          ppppppplVar28 = (long *******)((long)ppppppplVar28 + 1);
          ppppppplVar18 = ppppppplVar18 + 3;
        } while ((char)((0 < lVar32) - (lVar32 < 0)) == '\x01');
        ppppppplVar15 = ppppppplVar28;
        if (0 < lVar32 == lVar32 < 0) {
          ppppppplStack_5c0 = local_738;
          local_5b8 = local_778;
          ppppppplStack_5a8 = local_658;
          local_5c8 = (long *******)0x8000000000000000;
          local_5b0 = (undefined1  [8])ppppppplVar28;
          if (CONCAT71(uStack_2df,local_2e0) != 0) {
            (*(code *)PTR___rust_dealloc_001dc090)(ppppppplVar29,CONCAT71(uStack_2df,local_2e0),1);
          }
          goto LAB_0013d611;
        }
LAB_0013d547:
        bVar38 = local_778 == (long *******)0x0;
        local_778 = (long *******)((long)local_778 + -1);
        if (bVar38) goto LAB_0013dddd;
        ppppppplVar15 = (long *******)local_738[(long)((long)ppppppplVar15 + 0x44)];
      } while( true );
    }
    local_5b8 = (long *******)CONCAT71(uStack_2cf,local_2d0);
    local_5c8 = (long *******)CONCAT71(uStack_2df,local_2e0);
    ppppppplStack_5c0 = ppppppplStack_2d8;
    ppppppplStack_5a8 = (long *******)0x0;
    local_5b0 = (undefined1  [8])ppppppplVar24;
    goto LAB_0013d611;
  }
  goto LAB_0013daac;
LAB_0013dddd:
  pppppplStack_5a0 = (long ******)0x0;
  local_5c8 = (long *******)CONCAT71(uStack_2df,local_2e0);
  ppppppplStack_5c0 = ppppppplStack_2d8;
  local_5b8 = (long *******)CONCAT71(uStack_2cf,local_2d0);
  local_5b0 = (undefined1  [8])local_658;
  ppppppplStack_5a8 = local_738;
  ppppppplVar24 = local_658;
  ppppppplVar13 = local_728;
  ppppppplStack_598 = ppppppplVar15;
LAB_0013d611:
  ppppppplVar15 =
       (long *******)alloc::collections::btree::map::entry::Entry<K,V,A>::or_insert_with(&local_5c8)
  ;
  (*(code *)PTR_clone_001dc1a0)
            (&local_2e0,&local_718,&PTR_s_strategies_index_strategy_strate_001d63d8);
  ppppppplVar28 = ppppppplStack_2d8;
  ppppppplVar18 = (long *******)*ppppppplVar15;
  if (ppppppplVar18 != (long *******)0x0) {
    local_778 = (long *******)ppppppplVar15[1];
    pppppplVar20 = (long ******)CONCAT71(uStack_2cf,local_2d0);
    local_688 = ppppppplVar15;
    do {
      local_678 = (long *******)(ulong)*(ushort *)((long)ppppppplVar18 + 0x742);
      lVar12 = (ulong)((uint)*(ushort *)((long)ppppppplVar18 + 0x742) * 8) * 3;
      ppppppplVar29 = (long *******)0xffffffffffffffff;
      ppppppplVar15 = ppppppplVar18 + 199;
      local_738 = ppppppplVar18;
      do {
        ppppppplVar18 = local_678;
        if (lVar12 == 0) goto LAB_0013d6f7;
        pppppplVar17 = ppppppplVar15[2];
        pppppplVar23 = pppppplVar17;
        if (pppppplVar20 < pppppplVar17) {
          pppppplVar23 = pppppplVar20;
        }
        iVar11 = (*(code *)PTR_memcmp_001dc128)(ppppppplVar28,ppppppplVar15[1],pppppplVar23);
        ppppppplVar24 = local_658;
        ppppppplVar13 = local_728;
        lVar32 = (long)pppppplVar20 - (long)pppppplVar17;
        if (iVar11 != 0) {
          lVar32 = (long)iVar11;
        }
        lVar12 = lVar12 + -0x18;
        ppppppplVar29 = (long *******)((long)ppppppplVar29 + 1);
        ppppppplVar15 = ppppppplVar15 + 3;
      } while ((char)((0 < lVar32) - (lVar32 < 0)) == '\x01');
      ppppppplVar18 = ppppppplVar29;
      if (0 < lVar32 == lVar32 < 0) {
        ppppppplStack_5c0 = local_738;
        local_5b8 = local_778;
        ppppppplStack_5a8 = local_688;
        local_5b0 = (undefined1  [8])ppppppplVar29;
        local_5c8 = (long *******)0x8000000000000000;
        if (CONCAT71(uStack_2df,local_2e0) != 0) {
          (*(code *)PTR___rust_dealloc_001dc090)(ppppppplVar28,CONCAT71(uStack_2df,local_2e0),1);
        }
        goto LAB_0013d7c6;
      }
LAB_0013d6f7:
      bVar38 = local_778 == (long *******)0x0;
      local_778 = (long *******)((long)local_778 + -1);
      if (bVar38) goto LAB_0013de30;
      ppppppplVar18 = (long *******)local_738[(long)ppppppplVar18 + 0xe9];
    } while( true );
  }
  local_5b8 = (long *******)CONCAT71(uStack_2cf,local_2d0);
  local_5c8 = (long *******)CONCAT71(uStack_2df,local_2e0);
  ppppppplStack_5c0 = ppppppplStack_2d8;
  ppppppplStack_5a8 = (long *******)0x0;
  local_5b0 = (undefined1  [8])ppppppplVar15;
  goto LAB_0013d7c6;
LAB_0013de30:
  pppppplStack_5a0 = (long ******)0x0;
  local_5c8 = (long *******)CONCAT71(uStack_2df,local_2e0);
  ppppppplStack_5c0 = ppppppplStack_2d8;
  local_5b8 = (long *******)CONCAT71(uStack_2cf,local_2d0);
  ppppppplStack_5a8 = local_738;
  local_5b0 = (undefined1  [8])local_688;
  ppppppplVar24 = local_658;
  ppppppplVar13 = local_728;
  ppppppplStack_598 = ppppppplVar18;
LAB_0013d7c6:
  uVar16 = alloc::collections::btree::map::entry::Entry<K,V,A>::or_insert_with(&local_5c8);
  local_688 = *(long ********)(local_748 + 0x68);
  (*(code *)PTR_update_score_001dc1b8)(local_688,local_618,0,0,uVar16,0);
  ppppppplVar18 = ppppppplStack_6b8;
  pppppplVar20 = *ppppppplVar24;
  if (pppppplVar20 != (long ******)0x0) {
    local_738 = ppppppplStack_6c0;
    local_678 = (long *******)local_6d0[0x27];
    while( true ) {
      uVar34 = *(ushort *)((long)pppppplVar20 + 0x21a);
      local_658 = (long *******)(ulong)uVar34;
      ppppppplVar28 = (long *******)0xffffffffffffffff;
      pppppplVar17 = pppppplVar20 + 1;
      lVar12 = 0;
      do {
        lVar32 = lVar12;
        ppppppplVar24 = local_658;
        if ((ulong)((uint)uVar34 * 8) * 3 == lVar32) goto LAB_0013d8ce;
        ppppppplVar13 = (long *******)pppppplVar17[2];
        ppppppplVar24 = ppppppplVar13;
        if (ppppppplVar18 < ppppppplVar13) {
          ppppppplVar24 = ppppppplVar18;
        }
        iVar11 = (*(code *)PTR_memcmp_001dc128)(local_738,pppppplVar17[1],ppppppplVar24);
        lVar30 = (long)ppppppplVar18 - (long)ppppppplVar13;
        if (iVar11 != 0) {
          lVar30 = (long)iVar11;
        }
        ppppppplVar28 = (long *******)((long)ppppppplVar28 + 1);
        pppppplVar17 = pppppplVar17 + 3;
        lVar12 = lVar32 + 0x18;
        ppppppplVar13 = local_728;
      } while ((char)((0 < lVar30) - (lVar30 < 0)) == '\x01');
      ppppppplVar24 = ppppppplVar28;
      if (0 < lVar30 == lVar30 < 0) break;
LAB_0013d8ce:
      if (local_678 == (long *******)0x0) goto LAB_0013da62;
      pppppplVar20 = (long ******)pppppplVar20[(long)((long)ppppppplVar24 + 0x44)];
      local_678 = (long *******)((long)local_678 + -1);
    }
    lVar12 = *(long *)((long)pppppplVar20 + lVar32 + 0x110);
    if (lVar12 != 0) {
      local_738 = *(long ********)((long)pppppplVar20 + lVar32 + 0x118);
      goto LAB_0013d91d;
    }
  }
LAB_0013da62:
  if (local_718 != (long *******)0x0) {
    (*(code *)PTR___rust_dealloc_001dc090)(local_710,local_718,1);
  }
  ppppppplVar28 = local_4a8;
  pppppplVar20 = local_4b8;
  if (local_6c8 != (undefined8 *******)0x0) {
    (*(code *)PTR___rust_dealloc_001dc090)(ppppppplStack_6c0,local_6c8,1);
  }
LAB_0013daac:
  if ((local_450 == (long *******)0x0 || ppppppplVar28 != local_450) ||
     (iVar11 = (*(code *)PTR_bcmp_001dc150)(pppppplVar20,ppppppplStack_458,ppppppplVar28),
     iVar11 != 0)) {
    ppppppplVar18 = (long *******)0x0;
    goto LAB_0013dae3;
  }
                    /* try { // try from 0013dbe9 to 0013dbfa has its CatchHandler @ 0014014e */
  (*(code *)PTR_trade_codes_001dc1c0)(&lStack_348,param_3);
  lVar32 = lStack_338;
  lVar12 = lStack_340;
  if (lStack_338 != 0) {
    uVar16 = *(undefined8 *)(local_748 + 8);
    lVar30 = *(long *)(local_748 + 0x10);
    lVar37 = lStack_338 * 0x18;
    lVar36 = 0;
    do {
      if ((*(long *)(lVar12 + 0x10 + lVar36) == lVar30) &&
         (iVar11 = (*(code *)PTR_bcmp_001dc150)(*(undefined8 *)(lVar12 + 8 + lVar36),uVar16,lVar30),
         ppppppplVar13 = local_728, iVar11 == 0)) {
        cVar39 = *(char *)(local_748 + 0x94);
        uVar10 = (undefined1)local_2e8;
                    /* try { // try from 0013dc7e to 0013dcb0 has its CatchHandler @ 00140131 */
        (*(code *)PTR_inst_start_time_sec_001dc1c8)(param_3);
        cVar8 = (*(code *)PTR_is_trade_start_001dc1d0)(param_3,cVar39);
        if (cVar8 != '\0') {
          cVar8 = (*(code *)PTR_is_trade_end_001dc1d8)(param_3,cVar39);
          if (cVar8 != '\0') {
            if (cVar39 == '\0') {
              if ((char)local_2e4 != '\0') goto LAB_0013de9e;
            }
            else if (local_2e8._3_1_ == '\x01') {
LAB_0013de9e:
                    /* try { // try from 0013de9e to 0013df0d has its CatchHandler @ 00140131 */
              ppppppplVar18 = (long *******)(*(code *)PTR_all_in_001dc1e0)(param_3,cVar39,uVar10);
              lStack_340 = lVar12;
              lStack_338 = lVar32;
              goto LAB_0013dd41;
            }
          }
          if (local_468 == 3) {
            if (*(char *)((long)ppppppplStack_470 + 2) == '2' &&
                *(short *)ppppppplStack_470 == 0x5650) {
              local_678 = *(long ********)(local_748 + 0x78);
            }
            else {
              if ((*(char *)((long)ppppppplStack_470 + 2) == '3' &&
                   *(short *)ppppppplStack_470 == 0x5650) ||
                 (*(char *)((long)ppppppplStack_470 + 2) != '4' ||
                  *(short *)ppppppplStack_470 != 0x5650)) goto LAB_0013dd26;
              local_678 = *(long ********)(local_748 + 0x70);
            }
          }
          else {
LAB_0013dd26:
            local_678 = (long *******)(*(double *)(local_748 + 0x70) * (double)local_430);
          }
          local_628 = (long *******)(*(code *)PTR_time_sec_001dc1e8)(param_3);
          local_738 = local_300;
          (*(code *)PTR_clone_001dc1a0)
                    (&lStack_768,local_748,&PTR_s_strategies_index_strategy_strate_001d63f0);
                    /* try { // try from 0013df0e to 0013df2a has its CatchHandler @ 0014007f */
          (*(code *)PTR_clone_001dc1a0)
                    (&lStack_490,local_6e8,&PTR_s_strategies_index_strategy_strate_001d6408);
                    /* try { // try from 0013df35 to 0013df46 has its CatchHandler @ 0014007a */
          (*(code *)PTR_depth_001dc1f0)(&local_5c8,param_3,uStack_760,uStack_758);
          if ((int)local_5c8 == 2) {
            ppppppplVar18 = (long *******)0x0;
            goto LAB_0013fbe2;
          }
          (*(code *)PTR_memcpy_001dc0f0)(&local_2e0,&local_5c8,0x108);
          if ((((local_2e0 & 1) != 0) && ((local_2d0 & 1) != 0)) &&
             (DAT_001176d8 <
              (double)((ulong)(((double)ppppppplStack_2d8 - dStack_2c8) /
                              ((double)ppppppplStack_2d8 + dStack_2c8)) & _DAT_001177b0))) {
            ppppppplVar18 = (long *******)0x0;
            goto LAB_0013fbc2;
          }
                    /* try { // try from 0013dfce to 0013e598 has its CatchHandler @ 001400d2 */
          local_4a8 = (long *******)(*(code *)PTR_spread_bp_001dc1f8)(param_3,uStack_760,uStack_758)
          ;
          local_688 = ppppppplStack_298;
          local_750 = pppppppuStack_248;
          uStack_5e8 = (*(code *)PTR_price_step_001dc200)(param_3,uStack_760,uStack_758);
          uStack_6a8 = (*(code *)PTR_vol_step_001dc208)(param_3,uStack_760,uStack_758);
          dStack_5f0 = (double)(*(code *)PTR_contract_mult_001dc210)(param_3,uStack_760,uStack_758);
          (*(code *)PTR_position_001dc218)(param_3,uStack_760,uStack_758);
          dStack_608 = extraout_XMM1_Qa;
          local_4b8 = (long ******)
                      (*(code *)PTR_position_holding_secs_001dc220)(param_3,uStack_760,uStack_758);
          bVar9 = (*(code *)PTR_is_should_lock_001dc228)(param_3,uStack_760,uStack_758);
          (*(code *)PTR_clone_001dc1a0)
                    (&local_718,&lStack_768,&PTR_s_strategies_index_strategy_strate_001d6420);
          ppppppplVar15 = local_708;
          ppppppplVar24 = local_710;
          ppppppplVar28 = local_6d0 + 0x26;
          ppppppplVar18 = (long *******)*ppppppplVar28;
          local_618 = ppppppplVar28;
          if (ppppppplVar18 == (long *******)0x0) {
            local_5b8 = local_708;
            local_5c8 = local_718;
            ppppppplStack_5c0 = local_710;
            ppppppplStack_5a8 = (long *******)0x0;
            local_5b0 = (undefined1  [8])ppppppplVar28;
            goto LAB_0013e24a;
          }
          local_778 = (long *******)local_6d0[0x27];
          goto LAB_0013e0ff;
        }
        break;
      }
      lVar36 = lVar36 + 0x18;
    } while (lVar37 != lVar36);
    ppppppplVar18 = (long *******)0x0;
    lStack_340 = lVar12;
    lStack_338 = lVar32;
    goto LAB_0013dd41;
  }
  ppppppplVar18 = (long *******)0x0;
  if (lStack_348 == 0) goto LAB_0013dae3;
  goto LAB_0013ddaa;
LAB_0013d91d:
  uVar34 = *(ushort *)(lVar12 + 0x742);
  uVar14 = (ulong)uVar34;
  uVar19 = 0xffffffffffffffff;
  lVar30 = 0;
  lVar32 = lVar12 + 0x638;
  do {
    if ((ulong)uVar34 * 0x90 == lVar30) goto LAB_0013d9a1;
    ppppppplVar13 = *(long ********)(lVar32 + 0x10);
    lVar37 = (long)local_628 - (long)ppppppplVar13;
    if (local_628 < ppppppplVar13) {
      ppppppplVar13 = local_628;
    }
    iVar11 = (*(code *)PTR_memcmp_001dc128)(local_728,*(undefined8 *)(lVar32 + 8),ppppppplVar13);
    if (iVar11 != 0) {
      lVar37 = (long)iVar11;
    }
    lVar30 = lVar30 + 0x90;
    uVar19 = uVar19 + 1;
    lVar32 = lVar32 + 0x18;
  } while ((char)((0 < lVar37) - (lVar37 < 0)) == '\x01');
  uVar14 = uVar19;
  if (0 < lVar37 == lVar37 < 0) {
    dVar43 = *(double *)(lVar12 + -0x58 + lVar30);
    dVar40 = (double)((ulong)dVar43 & _DAT_001177b0) - (double)local_368;
    if (dVar40 <= 0.0) {
      dVar40 = 0.0;
    }
    dVar40 = dVar40 * (double)(DAT_00117720 & -(ulong)NAN(dVar43) |
                              ~-(ulong)NAN(dVar43) & (_DAT_00117d10 & (ulong)dVar43 | _s__00117c30))
    ;
    iVar11 = 1;
    if (dVar40 <= _DAT_00117730) {
      iVar11 = -(uint)(dVar40 < DAT_00117620);
    }
    local_6d0[0x29] = (long ******)local_688;
    *(int *)(local_6d0 + 0x2a) = iVar11;
    ppppppplVar13 = local_728;
    goto LAB_0013da62;
  }
LAB_0013d9a1:
  ppppppplVar13 = local_728;
  if (local_738 == (long *******)0x0) goto LAB_0013da62;
  lVar12 = *(long *)(lVar12 + 0x748 + uVar14 * 8);
  local_738 = (long *******)((long)local_738 + -1);
  goto LAB_0013d91d;
LAB_0013e0ff:
  local_658 = (long *******)(ulong)*(ushort *)((long)ppppppplVar18 + 0x21a);
  lVar12 = (ulong)((uint)*(ushort *)((long)ppppppplVar18 + 0x21a) * 8) * 3;
  ppppppplVar35 = (long *******)0xffffffffffffffff;
  ppppppplVar29 = ppppppplVar18 + 1;
  local_6e8 = ppppppplVar18;
  do {
    ppppppplVar18 = local_658;
    if (lVar12 == 0) goto LAB_0013e183;
    ppppppplVar18 = (long *******)ppppppplVar29[2];
    ppppppplVar13 = ppppppplVar18;
    if (ppppppplVar15 < ppppppplVar18) {
      ppppppplVar13 = ppppppplVar15;
    }
    iVar11 = (*(code *)PTR_memcmp_001dc128)(ppppppplVar24,ppppppplVar29[1],ppppppplVar13);
    ppppppplVar28 = local_618;
    ppppppplVar13 = local_728;
    lVar32 = (long)ppppppplVar15 - (long)ppppppplVar18;
    if (iVar11 != 0) {
      lVar32 = (long)iVar11;
    }
    lVar12 = lVar12 + -0x18;
    ppppppplVar35 = (long *******)((long)ppppppplVar35 + 1);
    ppppppplVar29 = ppppppplVar29 + 3;
  } while ((char)((0 < lVar32) - (lVar32 < 0)) == '\x01');
  ppppppplVar18 = ppppppplVar35;
  if (0 < lVar32 == lVar32 < 0) {
    ppppppplStack_5c0 = local_6e8;
    local_5b8 = local_778;
    ppppppplStack_5a8 = local_618;
    local_5c8 = (long *******)0x8000000000000000;
    local_5b0 = (undefined1  [8])ppppppplVar35;
    if (local_718 != (long *******)0x0) {
      (*(code *)PTR___rust_dealloc_001dc090)(ppppppplVar24,local_718,1);
    }
    goto LAB_0013e24a;
  }
LAB_0013e183:
  bVar38 = local_778 == (long *******)0x0;
  local_778 = (long *******)((long)local_778 + -1);
  if (bVar38) goto LAB_0013e8c9;
  ppppppplVar18 = (long *******)local_6e8[(long)((long)ppppppplVar18 + 0x44)];
  goto LAB_0013e0ff;
LAB_0013e919:
  pppppplStack_5a0 = (long ******)0x0;
  local_5c8 = local_718;
  ppppppplStack_5c0 = local_710;
  local_5b8 = local_708;
  local_5b0 = (undefined1  [8])local_5e0;
  ppppppplStack_5a8 = local_6e8;
  ppppppplVar28 = local_618;
  ppppppplVar13 = local_728;
  ppppppplStack_598 = ppppppplVar18;
  goto LAB_0013e3f4;
LAB_0013e8c9:
  pppppplStack_5a0 = (long ******)0x0;
  local_5c8 = local_718;
  ppppppplStack_5c0 = local_710;
  local_5b8 = local_708;
  local_5b0 = (undefined1  [8])local_618;
  ppppppplStack_5a8 = local_6e8;
  ppppppplVar28 = local_618;
  ppppppplVar13 = local_728;
  ppppppplStack_598 = ppppppplVar18;
LAB_0013e24a:
  ppppppplVar29 =
       (long *******)alloc::collections::btree::map::entry::Entry<K,V,A>::or_insert_with(&local_5c8)
  ;
  (*(code *)PTR_clone_001dc1a0)
            (&local_718,&lStack_490,&PTR_s_strategies_index_strategy_strate_001d6438);
  ppppppplVar15 = local_708;
  ppppppplVar24 = local_710;
  ppppppplVar18 = (long *******)*ppppppplVar29;
  if (ppppppplVar18 != (long *******)0x0) {
    local_778 = (long *******)ppppppplVar29[1];
    local_5e0 = ppppppplVar29;
    do {
      local_658 = (long *******)(ulong)*(ushort *)((long)ppppppplVar18 + 0x742);
      lVar12 = (ulong)((uint)*(ushort *)((long)ppppppplVar18 + 0x742) * 8) * 3;
      ppppppplVar35 = (long *******)0xffffffffffffffff;
      ppppppplVar29 = ppppppplVar18 + 199;
      local_6e8 = ppppppplVar18;
      do {
        ppppppplVar18 = local_658;
        if (lVar12 == 0) goto LAB_0013e325;
        ppppppplVar18 = (long *******)ppppppplVar29[2];
        ppppppplVar13 = ppppppplVar18;
        if (ppppppplVar15 < ppppppplVar18) {
          ppppppplVar13 = ppppppplVar15;
        }
        iVar11 = (*(code *)PTR_memcmp_001dc128)(ppppppplVar24,ppppppplVar29[1],ppppppplVar13);
        ppppppplVar28 = local_618;
        ppppppplVar13 = local_728;
        lVar32 = (long)ppppppplVar15 - (long)ppppppplVar18;
        if (iVar11 != 0) {
          lVar32 = (long)iVar11;
        }
        lVar12 = lVar12 + -0x18;
        ppppppplVar35 = (long *******)((long)ppppppplVar35 + 1);
        ppppppplVar29 = ppppppplVar29 + 3;
      } while ((char)((0 < lVar32) - (lVar32 < 0)) == '\x01');
      ppppppplVar18 = ppppppplVar35;
      if (0 < lVar32 == lVar32 < 0) {
        ppppppplStack_5c0 = local_6e8;
        local_5b8 = local_778;
        ppppppplStack_5a8 = local_5e0;
        local_5c8 = (long *******)0x8000000000000000;
        local_5b0 = (undefined1  [8])ppppppplVar35;
        if (local_718 != (long *******)0x0) {
          (*(code *)PTR___rust_dealloc_001dc090)(ppppppplVar24,local_718,1);
        }
        goto LAB_0013e3f4;
      }
LAB_0013e325:
      bVar38 = local_778 == (long *******)0x0;
      local_778 = (long *******)((long)local_778 + -1);
      if (bVar38) goto LAB_0013e919;
      ppppppplVar18 = (long *******)local_6e8[(long)ppppppplVar18 + 0xe9];
    } while( true );
  }
  local_5b8 = local_708;
  local_5c8 = local_718;
  ppppppplStack_5c0 = local_710;
  ppppppplStack_5a8 = (long *******)0x0;
  local_5b0 = (undefined1  [8])ppppppplVar29;
LAB_0013e3f4:
  lVar12 = alloc::collections::btree::map::entry::Entry<K,V,A>::or_insert_with
                     (&local_5c8,&local_478);
  local_738 = (long *******)((double)local_738 / _DAT_00117760);
  local_628 = (long *******)((double)local_628 + (double)local_738);
  uVar27 = 0;
  (*(code *)PTR_update_score_001dc1b8)(local_628,local_678,0,0,lVar12,0);
  local_738 = (long *******)((double)local_738 + (double)local_4b8);
  if (*(double *)(local_748 + 0x68) - (double)local_6d0[0x29] <= DAT_00117688) {
    uVar27 = *(undefined4 *)(local_6d0 + 0x2a);
  }
  local_5c8 = local_3d0;
  ppppppplStack_5c0 = ppppppplStack_3c8;
  local_5b8 = local_3c0;
  local_5b0 = (undefined1  [8])pppppplStack_3b8;
  (*(code *)PTR_dynamic_threshold_001dc230)
            (local_738,local_3b0,pppppplStack_3a8,local_3a0,&local_718,&local_5c8);
  *(long ********)(lVar12 + 0x50) = local_708;
  *(undefined8 *)(lVar12 + 0x58) = uStack_700;
  *(long ********)(lVar12 + 0x40) = local_718;
  *(long ********)(lVar12 + 0x48) = local_710;
  (*(code *)PTR_point_signal_trigger_pv3_spread_001dc238)
            (pppppplStack_428,local_4a8,(double)local_370 * _DAT_001176c0,&local_5c8,lVar12);
  ppppppplVar18 = ppppppplStack_5c0;
  if ((char)local_5c8 != '\x05') {
    uVar10 = (*(code *)PTR_margin_filter_001dc240)(param_3,(ulong)local_5c8 & 0xff);
    (*(code *)PTR_dynamic_pending_ts_ms_001dc248)
              (local_738,pppppplStack_398,local_390,local_380,pppppplStack_388);
    ppppppplVar18 = (long *******)(*(code *)PTR_cancel_by_pending_ts_001dc250)(param_3,1);
    if (ppppppplVar18 != (long *******)0x0) goto LAB_0013fbc2;
    uStack_640 = 0;
    uStack_638 = 8;
    uStack_630 = 0;
                    /* try { // try from 0013e5c9 to 0013e6fc has its CatchHandler @ 00140075 */
    cVar8 = (*(code *)PTR_impact_block_check_001dc258)(local_628,local_750,local_688,param_3,uVar10)
    ;
    cVar39 = cVar8;
    if ((cVar8 != '\x04') && ((char)local_350 != '\0')) {
      ppppppplVar18 = local_6d0 + 0x2b;
      lVar12 = alloc::collections::btree::map::BTreeMap<K,V,A>::get(ppppppplVar18,&lStack_768);
      if ((lVar12 != 0) &&
         ((cVar39 = '\x04', 0.0 < (double)local_360 &&
          ((double)local_360 <= ((double)local_628 - *(double *)(lVar12 + 0x10)) * _DAT_00117760))))
      {
        alloc::collections::btree::map::BTreeMap<K,V,A>::remove
                  (&local_5c8,ppppppplVar18,&lStack_768);
        cVar39 = cVar8;
      }
    }
    lVar12 = alloc::collections::btree::map::BTreeMap<K,V,A>::get(ppppppplVar28,&lStack_768);
    if ((lVar12 == 0) ||
       (lVar12 = alloc::collections::btree::map::BTreeMap<K,V,A>::get(lVar12,&lStack_490),
       lVar12 == 0)) {
                    /* try { // try from 00140061 to 0014006d has its CatchHandler @ 00140075 */
      (*(code *)PTR_unwrap_failed_001dc110)(&PTR_s_strategies_index_strategy_strate_001d6450);
LAB_0014006e:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    local_658 = *(long ********)(lVar12 + 0x30);
    pppppplStack_650 = *(long *******)(lVar12 + 0x38);
    local_6c8 = *(undefined8 ********)(lVar12 + 0x40);
    ppppppplStack_6c0 = *(long ********)(lVar12 + 0x48);
    ppppppplStack_6b8 = *(long ********)(lVar12 + 0x50);
    puStack_6b0 = *(undefined **)(lVar12 + 0x58);
    local_6e8 = *(long ********)(lVar12 + 0x60);
    pppppplStack_6e0 = *(long *******)(lVar12 + 0x68);
    local_778 = *(long ********)(lVar12 + 0x70);
    uVar16 = *(undefined8 *)(lVar12 + 0x78);
    local_748 = *(long *)(lVar12 + 0x80);
    uStack_740 = *(undefined8 *)(lVar12 + 0x88);
    local_618 = *(long ********)(lVar12 + 0x20);
    pppppplStack_610 = *(long *******)(lVar12 + 0x28);
    _<hashbrown::raw::RawTable<T,A>as_core::clone::Clone>::clone(&local_718,lVar12);
    ppppppplStack_6f8 = local_618;
    pppppplStack_6f0 = pppppplStack_610;
    local_5c8 = local_718;
    ppppppplStack_5c0 = local_710;
    local_5b8 = local_708;
    ppppppplStack_5a8 = local_618;
    local_5b0 = (undefined1  [8])uStack_700;
    pppppplStack_5a0 = pppppplStack_610;
    ppppppplStack_598 = local_658;
    pppppplStack_590 = pppppplStack_650;
    pppppppuStack_588 = local_6c8;
    ppppppplStack_580 = ppppppplStack_6c0;
    ppppppplStack_578 = ppppppplStack_6b8;
    puStack_570 = puStack_6b0;
    ppppppplStack_568 = local_6e8;
    pppppplStack_560 = pppppplStack_6e0;
    lStack_548 = local_748;
    uStack_540 = uStack_740;
    ppppppplStack_558 = local_778;
    uStack_550 = uVar16;
                    /* WARNING: Switch is manually overridden */
    switch(cVar39) {
    case '\0':
      if ((dStack_608 < DAT_00117768) &&
         ((double)local_738 < (double)pppppplStack_408 / _DAT_00117760)) break;
                    /* try { // try from 0013e809 to 0013e82a has its CatchHandler @ 00140070 */
      (*(code *)PTR_get_quote_price_one_shot_001dc260)
                (local_748,uStack_740,local_688,local_750,pppppplStack_418,local_420,local_370,
                 &local_718,0,&pppppppuStack_588,uVar27);
      ppppppplVar18 = local_718;
      if (local_708 != (long *******)0x8000000000000000) {
        bVar9 = (byte)local_710;
        uVar14 = (ulong)local_710 & 0xff;
        uStack_698 = uStack_700;
        ppppppplStack_690 = ppppppplStack_6f8;
        ppppppplStack_6a0 = local_708;
                    /* try { // try from 0013e86a to 0013e883 has its CatchHandler @ 0014008b */
        local_748 = (*(code *)PTR_round_with_step_f64_001dc170)(local_718,uStack_5e8,1);
        uVar16 = 1;
        if (bVar9 - 1 < 2) {
          local_778 = local_380;
        }
        else if (bVar9 == 0) {
          local_778 = DAT_00117648;
        }
        else {
          uVar16 = 0;
        }
        dVar43 = dStack_608;
        if (dStack_608 <= 0.0) {
          dVar43 = 0.0;
        }
        dVar48 = (double)(~-(ulong)((double)local_3f0 < 0.0) & (ulong)local_3f0 |
                         -(ulong)((double)local_3f0 < 0.0) & DAT_00117640) - dVar43;
        dVar43 = ((double)(~-(ulong)((double)pppppplStack_3e8 < 0.0) & (ulong)pppppplStack_3e8 |
                          -(ulong)((double)pppppplStack_3e8 < 0.0) & DAT_00117640) / dStack_5f0) /
                 (double)local_688 - dVar43;
        dVar40 = (double)(~-(ulong)((double)local_400 < 0.0) & (ulong)local_400 |
                         -(ulong)((double)local_400 < 0.0) & DAT_00117640);
        dVar51 = ((double)(~-(ulong)((double)pppppplStack_3f8 < 0.0) & (ulong)pppppplStack_3f8 |
                          -(ulong)((double)pppppplStack_3f8 < 0.0) & DAT_00117640) / dStack_5f0) /
                 (double)local_688;
        if (dVar51 <= DAT_001176a0) {
          dVar51 = DAT_001176a0;
        }
        dVar41 = (double)(~-(ulong)((double)local_3e0 < 0.0) & (ulong)local_3e0 |
                         -(ulong)((double)local_3e0 < 0.0) & DAT_00117640);
        dVar52 = ((double)(~-(ulong)((double)pppppplStack_3d8 < 0.0) & (ulong)pppppplStack_3d8 |
                          DAT_00117640 & -(ulong)((double)pppppplStack_3d8 < 0.0)) / dStack_5f0) /
                 (double)local_688;
        if (dVar52 <= DAT_001176a0) {
          dVar52 = DAT_001176a0;
        }
        dVar50 = dVar43;
        if (dVar48 <= dVar43) {
          dVar50 = dVar48;
        }
        dVar43 = (double)(~-(ulong)NAN(dVar48) & (ulong)dVar50 | -(ulong)NAN(dVar48) & (ulong)dVar43
                         );
        if (dVar51 <= dVar40) {
          dVar40 = dVar51;
        }
        if (dVar40 <= dVar43) {
          dVar43 = dVar40;
        }
        if (dVar52 <= dVar41) {
          dVar41 = dVar52;
        }
        dVar40 = dStack_608;
        if (0.0 <= dStack_608) {
          dVar40 = 0.0;
        }
        if ((double)((ulong)dVar40 ^ _DAT_00117d10) <= dVar41) {
          dVar41 = (double)((ulong)dVar40 ^ _DAT_00117d10);
        }
        dVar41 = dVar41 + dVar43;
        if (dVar41 <= 0.0) {
          dVar41 = 0.0;
        }
                    /* try { // try from 0013f33e to 0013f409 has its CatchHandler @ 0014008b */
        uVar14 = (*(code *)PTR_get_quote_vol_001dc270)(dVar41,pppppplStack_378,uVar14,1);
        if ((uVar14 & 1) == 0) {
                    /* try { // try from 00140025 to 00140031 has its CatchHandler @ 0014008b */
          (*(code *)PTR_unwrap_failed_001dc110)(&PTR_s_strategies_index_strategy_strate_001d6468);
          goto LAB_0014006e;
        }
        uVar42 = (*(code *)PTR_round_with_step_f64_001dc170)(extraout_XMM0_Qa_00,uStack_6a8,1);
        local_6e8 = (long *******)
                    strategy_sm3::apply_book_vol_cap
                              (uVar42,local_748,uStack_6a8,bVar9,1,&local_2e0,&local_478);
        pppppplStack_6e0 = extraout_XMM0_Qb_00;
        ppppppplVar18 =
             (long *******)
             strategy_sm3::cancel_order_use_range
                       (local_748,(double)local_750 - dStack_218,param_3,uStack_760,uStack_758,1,
                        &uStack_640);
        if ((ppppppplVar18 == (long *******)0x0) &&
           ((bVar9 != 0 ||
            (ppppppplVar18 =
                  (long *******)
                  strategy_sm3::cancel_side(param_3,uStack_760,uStack_758,1,&uStack_640),
            ppppppplVar18 == (long *******)0x0)))) {
          lVar12 = strategy_sm3::live_pending_counts
                             (param_3,uStack_760,uStack_758,uStack_638,uStack_630);
          if ((DAT_00117690 < (double)(_DAT_001177b0 & (ulong)local_6e8)) && (lVar12 == 0)) {
            pppppplStack_660 = (long ******)(*(code *)PTR_round_001dc278)(local_738);
            local_6c8 = &ppppppplStack_6a0;
            ppppppplStack_6c0 = (long *******)_<alloc::string::String_as_core::fmt::Display>::fmt;
            ppppppplStack_6b8 = &pppppplStack_660;
            puStack_6b0 = PTR_fmt_001dc280;
            local_718 = (long *******)&DAT_001d6480;
            local_710 = (long *******)0x2;
            ppppppplStack_6f8 = (long *******)0x0;
            local_708 = (long *******)&local_6c8;
            uStack_700 = 2;
                    /* try { // try from 0013f4c2 to 0013f636 has its CatchHandler @ 0014008b */
            (*(code *)PTR_format_inner_001dc188)(&uStack_90,&local_718);
            uStack_f0 = 0x700;
            lStack_120 = local_748;
            ppppppplStack_118 = local_6e8;
            ppppppplStack_110 = local_688;
            ppppppplStack_108 = local_678;
            pppppppuStack_100 = pppppppuStack_588;
            ppppppplStack_f8 = local_410;
            uStack_138 = uStack_90;
            uStack_130 = uStack_88;
            uStack_128 = uStack_80;
            ppppppplVar18 =
                 (long *******)
                 (*(code *)PTR_place_order_iap_with_target_001dc288)
                           (local_778,param_3,&uStack_138,uVar16);
            if (ppppppplVar18 != (long *******)0x0) goto LAB_0013fb88;
            if ((char)local_350 != '\0') {
              (*(code *)PTR_clone_001dc1a0)
                        (auStack_330,&lStack_768,&PTR_s_strategies_index_strategy_strate_001d64a0);
              local_6c8 = local_750;
              ppppppplStack_6c0 = local_688;
              ppppppplStack_6b8 = local_628;
              alloc::collections::btree::map::BTreeMap<K,V,A>::insert
                        (&local_718,local_6d0 + 0x2b,auStack_330,&local_6c8);
            }
          }
LAB_0013fe7c:
          ppppppplVar13 = local_728;
          if (ppppppplStack_6a0 != (long *******)0x0) {
            (*(code *)PTR___rust_dealloc_001dc090)(uStack_698,ppppppplStack_6a0,1);
            ppppppplVar13 = local_728;
          }
switchD_0013e7b4_caseD_4:
                    /* try { // try from 0013fea1 to 0013fead has its CatchHandler @ 00140075 */
          _<hashbrown::raw::RawTable<T,A>as_core::ops::drop::Drop>::drop(&local_5c8);
          core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&uStack_640);
          if (lStack_2c0 != 0) {
            (*(code *)PTR___rust_dealloc_001dc090)(uStack_2b8,lStack_2c0,1);
          }
          if (lStack_490 != 0) {
            (*(code *)PTR___rust_dealloc_001dc090)(uStack_488,lStack_490,1);
          }
          if (lStack_768 != 0) {
            (*(code *)PTR___rust_dealloc_001dc090)(uStack_760,lStack_768,1);
          }
          core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&lStack_348);
          if (local_5d8 != (long *******)0x0) {
            (*(code *)PTR___rust_dealloc_001dc090)(ppppppplVar13,local_5d8,1);
          }
          core::ptr::drop_in_place<strategy_sm3::SM3Params>(&local_478);
          core::ptr::drop_in_place<future_backtest_sdk::types::StrategyPara>(&local_318);
          return (long *******)0x0;
        }
LAB_0013fb88:
        if (ppppppplStack_6a0 != (long *******)0x0) {
          (*(code *)PTR___rust_dealloc_001dc090)(uStack_698,ppppppplStack_6a0,1);
        }
      }
      goto LAB_0013fba8;
    case '\x01':
      if ((dStack_608 <= DAT_00117690) ||
         ((double)pppppplStack_408 / _DAT_00117760 <= (double)local_738)) {
        if (dStack_608 <= 0.0) goto switchD_0013e7b4_caseD_4;
                    /* try { // try from 0013eaee to 0013eb12 has its CatchHandler @ 00140070 */
        (*(code *)PTR_get_quote_price_one_shot_001dc260)
                  (local_748,uStack_740,local_688,local_750,pppppplStack_418,local_420,local_370,
                   &local_718,1,&pppppppuStack_588,uVar27);
        ppppppplVar18 = local_718;
        if (local_708 == (long *******)0x8000000000000000) goto LAB_0013fba8;
        bVar7 = (byte)local_710;
        uVar14 = (ulong)local_710 & 0xff;
        uStack_698 = uStack_700;
        ppppppplStack_690 = ppppppplStack_6f8;
        ppppppplStack_6a0 = local_708;
                    /* try { // try from 0013eb52 to 0013eb6b has its CatchHandler @ 00140087 */
        local_748 = (*(code *)PTR_round_with_step_f64_001dc170)(local_718,uStack_5e8,1);
        uVar16 = 1;
        if (bVar7 - 1 < 2) {
          local_778 = local_380;
        }
        else if (bVar7 == 0) {
          local_778 = DAT_00117648;
        }
        else {
          uVar16 = 0;
        }
        uVar19 = -(ulong)((double)local_3e0 < (double)((ulong)local_3e0 ^ _DAT_00117d10));
        dVar51 = (double)(uVar19 & DAT_00117650 | ~uVar19 & ((ulong)local_3e0 ^ _DAT_00117d10));
        uVar19 = -(ulong)((double)pppppplStack_3d8 <
                         (double)((ulong)pppppplStack_3d8 ^ _DAT_00117d10));
        dVar40 = ((double)(uVar19 & DAT_00117650 |
                          ~uVar19 & ((ulong)pppppplStack_3d8 ^ _DAT_00117d10)) / dStack_5f0) /
                 (double)local_750;
        dVar43 = dVar40;
        if (dVar40 <= dVar51) {
          dVar43 = dVar51;
        }
        dVar43 = (double)(~-(ulong)NAN(dVar51) & (ulong)dVar43 | -(ulong)NAN(dVar51) & (ulong)dVar40
                         );
        dVar40 = dStack_608;
        if (dStack_608 <= 0.0) {
          dVar40 = 0.0;
        }
        if (dVar43 <= (double)((ulong)dVar40 ^ _DAT_00117d10)) {
          dVar43 = (double)((ulong)dVar40 ^ _DAT_00117d10);
        }
                    /* try { // try from 0013fac3 to 0013fb7b has its CatchHandler @ 00140087 */
        uVar42 = (*(code *)PTR_round_with_step_f64_001dc170)(dVar43,uStack_6a8,1);
        uVar14 = (*(code *)PTR_get_quote_vol_001dc270)(uVar42,pppppplStack_378,uVar14,1);
        if ((uVar14 & 1) == 0) {
                    /* try { // try from 00140052 to 0014005e has its CatchHandler @ 00140087 */
          (*(code *)PTR_unwrap_failed_001dc110)(&PTR_s_strategies_index_strategy_strate_001d64b8);
          goto LAB_0014006e;
        }
        uVar42 = (*(code *)PTR_round_with_step_f64_001dc170)(extraout_XMM0_Qa_02,uStack_6a8,1);
        local_6e8 = (long *******)
                    strategy_sm3::apply_book_vol_cap
                              (uVar42,local_748,uStack_6a8,bVar7,0,&local_2e0,&local_478);
        pppppplStack_6e0 = extraout_XMM0_Qb_02;
        ppppppplVar18 =
             (long *******)
             strategy_sm3::cancel_order_use_range
                       (local_748,dStack_268 - (double)local_688,param_3,uStack_760,uStack_758,0,
                        &uStack_640);
                    /* try { // try from 0013ff9a to 0013ffac has its CatchHandler @ 00140087 */
        if ((ppppppplVar18 == (long *******)0x0) &&
           ((bVar7 != 0 ||
            (ppppppplVar18 =
                  (long *******)
                  strategy_sm3::cancel_side(param_3,uStack_760,uStack_758,0,&uStack_640),
            ppppppplVar18 == (long *******)0x0)))) {
                    /* try { // try from 0013fc54 to 0013fc5c has its CatchHandler @ 00140087 */
          strategy_sm3::live_pending_counts(param_3,uStack_760,uStack_758,uStack_638,uStack_630);
          if ((DAT_00117690 < (double)(_DAT_001177b0 & (ulong)local_6e8)) && (extraout_RDX_00 == 0))
          {
            dVar43 = (double)(*(code *)PTR_round_001dc278)((double)local_738 * _DAT_001176f0);
            pppppplStack_660 = (long ******)(dVar43 / _DAT_001176f0);
            local_6c8 = &ppppppplStack_6a0;
            ppppppplStack_6c0 = (long *******)_<alloc::string::String_as_core::fmt::Display>::fmt;
            ppppppplStack_6b8 = &pppppplStack_660;
            puStack_6b0 = PTR_fmt_001dc280;
            local_718 = (long *******)&DAT_001d6480;
            local_710 = (long *******)0x2;
            ppppppplStack_6f8 = (long *******)0x0;
            local_708 = (long *******)&local_6c8;
            uStack_700 = 2;
                    /* try { // try from 0013fd25 to 0013fe7b has its CatchHandler @ 00140087 */
            (*(code *)PTR_format_inner_001dc188)(&uStack_60,&local_718);
            cStack_18f = (bVar9 != 0) * '\x03' + '\x05';
            uStack_190 = 1;
            lStack_1c0 = local_748;
            ppppppplStack_1b8 = local_6e8;
            pppppppuStack_1b0 = local_750;
            ppppppplStack_1a8 = local_678;
            ppppppplStack_1a0 = ppppppplStack_580;
            ppppppplStack_198 = local_410;
            uStack_1d8 = uStack_60;
            uStack_1d0 = uStack_58;
            uStack_1c8 = uStack_50;
            ppppppplVar18 =
                 (long *******)
                 (*(code *)PTR_place_order_iap_with_target_001dc288)
                           (local_778,param_3,&uStack_1d8,uVar16);
            if (ppppppplVar18 != (long *******)0x0) goto LAB_0013fb88;
            if ((char)local_350 != '\0') {
              (*(code *)PTR_clone_001dc1a0)
                        (auStack_330,&lStack_768,&PTR_s_strategies_index_strategy_strate_001d64d0);
              local_6c8 = local_750;
              ppppppplStack_6c0 = local_688;
              ppppppplStack_6b8 = local_628;
              alloc::collections::btree::map::BTreeMap<K,V,A>::insert
                        (&local_718,local_6d0 + 0x2b,auStack_330,&local_6c8);
            }
          }
          goto LAB_0013fe7c;
        }
        goto LAB_0013fb88;
      }
      break;
    case '\x02':
      if ((dStack_608 <= DAT_00117690) ||
         ((double)pppppplStack_408 / _DAT_00117760 <= (double)local_738)) {
                    /* try { // try from 0013ebea to 0013ec0e has its CatchHandler @ 00140070 */
        (*(code *)PTR_get_quote_price_one_shot_001dc260)
                  (local_748,uStack_740,local_688,local_750,pppppplStack_418,local_420,local_370,
                   &local_718,2,&pppppppuStack_588,uVar27);
        ppppppplVar18 = local_718;
        if (local_708 == (long *******)0x8000000000000000) goto LAB_0013fba8;
        bVar9 = (byte)local_710;
        uVar14 = (ulong)local_710 & 0xff;
        uStack_698 = uStack_700;
        ppppppplStack_690 = ppppppplStack_6f8;
        ppppppplStack_6a0 = local_708;
                    /* try { // try from 0013ec54 to 0013ec6d has its CatchHandler @ 0014008d */
        local_748 = (*(code *)PTR_round_with_step_f64_001dc170)(local_718,uStack_5e8,1);
        uVar16 = 1;
        if (bVar9 - 1 < 2) {
          local_778 = local_380;
        }
        else if (bVar9 == 0) {
          local_778 = DAT_00117648;
        }
        else {
          uVar16 = 0;
        }
        uVar19 = -(ulong)((double)local_3f0 < (double)((ulong)local_3f0 ^ _DAT_00117d10));
        dVar43 = dStack_608;
        if (0.0 <= dStack_608) {
          dVar43 = 0.0;
        }
        dVar48 = (double)(uVar19 & DAT_00117650 | ~uVar19 & ((ulong)local_3f0 ^ _DAT_00117d10)) -
                 dVar43;
        uVar19 = -(ulong)((double)pppppplStack_3e8 <
                         (double)((ulong)pppppplStack_3e8 ^ _DAT_00117d10));
        dVar43 = ((double)(uVar19 & DAT_00117650 |
                          ~uVar19 & ((ulong)pppppplStack_3e8 ^ _DAT_00117d10)) / dStack_5f0) /
                 (double)local_750 - dVar43;
        dVar51 = (double)(~-(ulong)((double)local_400 < 0.0) & (ulong)local_400 |
                         -(ulong)((double)local_400 < 0.0) & DAT_00117640);
        dVar40 = ((double)(~-(ulong)((double)pppppplStack_3f8 < 0.0) & (ulong)pppppplStack_3f8 |
                          -(ulong)((double)pppppplStack_3f8 < 0.0) & DAT_00117640) / dStack_5f0) /
                 (double)local_750;
        if (dVar40 <= DAT_001176a0) {
          dVar40 = DAT_001176a0;
        }
        dVar41 = (double)(~-(ulong)((double)local_3e0 < 0.0) & (ulong)local_3e0 |
                         -(ulong)((double)local_3e0 < 0.0) & DAT_00117640);
        dVar52 = ((double)(~-(ulong)((double)pppppplStack_3d8 < 0.0) & (ulong)pppppplStack_3d8 |
                          DAT_00117640 & -(ulong)((double)pppppplStack_3d8 < 0.0)) / dStack_5f0) /
                 (double)local_750;
        if (dVar52 <= DAT_001176a0) {
          dVar52 = DAT_001176a0;
        }
        dVar50 = dVar43;
        if (dVar43 <= dVar48) {
          dVar50 = dVar48;
        }
        dVar43 = (double)(~-(ulong)NAN(dVar48) & (ulong)dVar50 | -(ulong)NAN(dVar48) & (ulong)dVar43
                         );
        if (dVar40 <= dVar51) {
          dVar51 = dVar40;
        }
        if (dVar43 <= (double)((ulong)dVar51 ^ _DAT_00117d10)) {
          dVar43 = (double)((ulong)dVar51 ^ _DAT_00117d10);
        }
        if (dVar52 <= dVar41) {
          dVar41 = dVar52;
        }
        dVar40 = dStack_608;
        if (dStack_608 <= 0.0) {
          dVar40 = 0.0;
        }
        if (dVar40 <= dVar41) {
          dVar41 = dVar40;
        }
        dVar43 = dVar43 - dVar41;
        if (0.0 <= dVar43) {
          dVar43 = 0.0;
        }
                    /* try { // try from 0013eeaf to 0013ef94 has its CatchHandler @ 0014008d */
        uVar42 = (*(code *)PTR_round_with_step_f64_001dc170)(dVar43,uStack_6a8,1);
        uVar14 = (*(code *)PTR_get_quote_vol_001dc270)(uVar42,pppppplStack_378,uVar14,1);
        if ((uVar14 & 1) == 0) {
                    /* try { // try from 00140034 to 00140040 has its CatchHandler @ 0014008d */
          (*(code *)PTR_unwrap_failed_001dc110)(&PTR_s_strategies_index_strategy_strate_001d64e8);
          goto LAB_0014006e;
        }
        uVar42 = (*(code *)PTR_round_with_step_f64_001dc170)(extraout_XMM0_Qa,uStack_6a8,1);
        local_6e8 = (long *******)
                    strategy_sm3::apply_book_vol_cap
                              (uVar42,local_748,uStack_6a8,bVar9,0,&local_2e0,&local_478);
        pppppplStack_6e0 = extraout_XMM0_Qb;
        ppppppplVar18 =
             (long *******)
             strategy_sm3::cancel_order_use_range
                       (local_748,dStack_268 - (double)local_688,param_3,uStack_760,uStack_758,0,
                        &uStack_640);
                    /* try { // try from 0013f652 to 0013f664 has its CatchHandler @ 0014008d */
        if ((ppppppplVar18 == (long *******)0x0) &&
           ((bVar9 != 0 ||
            (ppppppplVar18 =
                  (long *******)
                  strategy_sm3::cancel_side(param_3,uStack_760,uStack_758,0,&uStack_640),
            ppppppplVar18 == (long *******)0x0)))) {
          strategy_sm3::live_pending_counts(param_3,uStack_760,uStack_758,uStack_638,uStack_630);
          if ((DAT_00117690 < (double)(_DAT_001177b0 & (ulong)local_6e8)) && (extraout_RDX == 0)) {
            dVar43 = (double)(*(code *)PTR_round_001dc278)((double)local_738 * _DAT_001176f0);
            pppppplStack_660 = (long ******)(dVar43 / _DAT_001176f0);
            local_6c8 = &ppppppplStack_6a0;
            ppppppplStack_6c0 = (long *******)_<alloc::string::String_as_core::fmt::Display>::fmt;
            ppppppplStack_6b8 = &pppppplStack_660;
            puStack_6b0 = PTR_fmt_001dc280;
            local_718 = (long *******)&DAT_001d6480;
            local_710 = (long *******)0x2;
            ppppppplStack_6f8 = (long *******)0x0;
            local_708 = (long *******)&local_6c8;
            uStack_700 = 2;
                    /* try { // try from 0013f05d to 0013f1a9 has its CatchHandler @ 0014008d */
            (*(code *)PTR_format_inner_001dc188)(&uStack_78,&local_718);
            uStack_a0 = 0x802;
            lStack_d0 = local_748;
            ppppppplStack_c8 = local_6e8;
            pppppppuStack_c0 = local_750;
            ppppppplStack_b8 = local_678;
            ppppppplStack_b0 = ppppppplStack_578;
            ppppppplStack_a8 = local_410;
            uStack_e8 = uStack_78;
            uStack_e0 = uStack_70;
            uStack_d8 = uStack_68;
            ppppppplVar18 =
                 (long *******)
                 (*(code *)PTR_place_order_iap_with_target_001dc288)
                           (local_778,param_3,&uStack_e8,uVar16);
            if (ppppppplVar18 != (long *******)0x0) goto LAB_0013fb88;
            if ((char)local_350 != '\0') {
              (*(code *)PTR_clone_001dc1a0)
                        (auStack_330,&lStack_768,&PTR_s_strategies_index_strategy_strate_001d6500);
              local_6c8 = local_750;
              ppppppplStack_6c0 = local_688;
              ppppppplStack_6b8 = local_628;
              alloc::collections::btree::map::BTreeMap<K,V,A>::insert
                        (&local_718,local_6d0 + 0x2b,auStack_330,&local_6c8);
            }
          }
          goto LAB_0013fe7c;
        }
        goto LAB_0013fb88;
      }
      break;
    case '\x03':
      if ((DAT_00117768 <= dStack_608) ||
         ((double)pppppplStack_408 / _DAT_00117760 <= (double)local_738)) {
        if (0.0 <= dStack_608) goto switchD_0013e7b4_caseD_4;
                    /* try { // try from 0013e9db to 0013e9ff has its CatchHandler @ 00140070 */
        (*(code *)PTR_get_quote_price_one_shot_001dc260)
                  (local_748,uStack_740,local_688,local_750,pppppplStack_418,local_420,local_370,
                   &local_718,3,&pppppppuStack_588,uVar27);
        ppppppplVar18 = local_718;
        if (local_708 == (long *******)0x8000000000000000) goto LAB_0013fba8;
        bVar7 = (byte)local_710;
        uVar14 = (ulong)local_710 & 0xff;
        uStack_698 = uStack_700;
        ppppppplStack_690 = ppppppplStack_6f8;
        ppppppplStack_6a0 = local_708;
                    /* try { // try from 0013ea3f to 0013ea58 has its CatchHandler @ 00140089 */
        local_748 = (*(code *)PTR_round_with_step_f64_001dc170)(local_718,uStack_5e8,1);
        uVar16 = 1;
        if (bVar7 - 1 < 2) {
          local_778 = local_380;
        }
        else if (bVar7 == 0) {
          local_778 = DAT_00117648;
        }
        else {
          uVar16 = 0;
        }
        dVar43 = (double)(~-(ulong)((double)local_3e0 < 0.0) & (ulong)local_3e0 |
                         -(ulong)((double)local_3e0 < 0.0) & DAT_00117640);
        dVar51 = ((double)(~-(ulong)((double)pppppplStack_3d8 < 0.0) & (ulong)pppppplStack_3d8 |
                          DAT_00117640 & -(ulong)((double)pppppplStack_3d8 < 0.0)) / dStack_5f0) /
                 (double)local_688;
        dVar40 = dVar51;
        if (dVar43 <= dVar51) {
          dVar40 = dVar43;
        }
        dVar43 = (double)(~-(ulong)NAN(dVar43) & (ulong)dVar40 | -(ulong)NAN(dVar43) & (ulong)dVar51
                         );
        dVar40 = dStack_608;
        if (0.0 <= dStack_608) {
          dVar40 = 0.0;
        }
        if ((double)((ulong)dVar40 ^ _DAT_00117d10) <= dVar43) {
          dVar43 = (double)((ulong)dVar40 ^ _DAT_00117d10);
        }
                    /* try { // try from 0013f70d to 0013f7f5 has its CatchHandler @ 00140089 */
        uVar42 = (*(code *)PTR_round_with_step_f64_001dc170)(dVar43,uStack_6a8,1);
        uVar14 = (*(code *)PTR_get_quote_vol_001dc270)(uVar42,pppppplStack_378,uVar14,1);
        if ((uVar14 & 1) == 0) {
                    /* try { // try from 00140043 to 0014004f has its CatchHandler @ 00140089 */
          (*(code *)PTR_unwrap_failed_001dc110)(&PTR_s_strategies_index_strategy_strate_001d6518);
          goto LAB_0014006e;
        }
        uVar42 = (*(code *)PTR_round_with_step_f64_001dc170)(extraout_XMM0_Qa_01,uStack_6a8,1);
        local_6e8 = (long *******)
                    strategy_sm3::apply_book_vol_cap
                              (uVar42,local_748,uStack_6a8,bVar7,1,&local_2e0,&local_478);
        pppppplStack_6e0 = extraout_XMM0_Qb_01;
        ppppppplVar18 =
             (long *******)
             strategy_sm3::cancel_order_use_range
                       (local_748,(double)local_750 - dStack_218,param_3,uStack_760,uStack_758,1,
                        &uStack_640);
                    /* try { // try from 0013ff69 to 0013ff7e has its CatchHandler @ 00140089 */
        if ((ppppppplVar18 == (long *******)0x0) &&
           ((bVar7 != 0 ||
            (ppppppplVar18 =
                  (long *******)
                  strategy_sm3::cancel_side(param_3,uStack_760,uStack_758,1,&uStack_640),
            ppppppplVar18 == (long *******)0x0)))) {
          lVar12 = strategy_sm3::live_pending_counts
                             (param_3,uStack_760,uStack_758,uStack_638,uStack_630);
          if ((DAT_00117690 < (double)(_DAT_001177b0 & (ulong)local_6e8)) && (lVar12 == 0)) {
            dVar43 = (double)(*(code *)PTR_round_001dc278)((double)local_738 * _DAT_001176f0);
            pppppplStack_660 = (long ******)(dVar43 / _DAT_001176f0);
            local_6c8 = &ppppppplStack_6a0;
            ppppppplStack_6c0 = (long *******)_<alloc::string::String_as_core::fmt::Display>::fmt;
            ppppppplStack_6b8 = &pppppplStack_660;
            puStack_6b0 = PTR_fmt_001dc280;
            local_718 = (long *******)&DAT_001d6480;
            local_710 = (long *******)0x2;
            ppppppplStack_6f8 = (long *******)0x0;
            local_708 = (long *******)&local_6c8;
            uStack_700 = 2;
                    /* try { // try from 0013f8be to 0013fa19 has its CatchHandler @ 00140089 */
            (*(code *)PTR_format_inner_001dc188)(&uStack_48,&local_718);
            bStack_13f = bVar9 | 6;
            uStack_140 = 3;
            lStack_170 = local_748;
            ppppppplStack_168 = local_6e8;
            ppppppplStack_160 = local_688;
            ppppppplStack_158 = local_678;
            puStack_150 = puStack_570;
            ppppppplStack_148 = local_410;
            uStack_188 = uStack_48;
            uStack_180 = uStack_40;
            uStack_178 = uStack_38;
            ppppppplVar18 =
                 (long *******)
                 (*(code *)PTR_place_order_iap_with_target_001dc288)
                           (local_778,param_3,&uStack_188,uVar16);
            if (ppppppplVar18 != (long *******)0x0) goto LAB_0013fb88;
            if ((char)local_350 != '\0') {
              (*(code *)PTR_clone_001dc1a0)
                        (auStack_330,&lStack_768,&PTR_s_strategies_index_strategy_strate_001d6530);
              local_6c8 = local_750;
              ppppppplStack_6c0 = local_688;
              ppppppplStack_6b8 = local_628;
              alloc::collections::btree::map::BTreeMap<K,V,A>::insert
                        (&local_718,local_6d0 + 0x2b,auStack_330,&local_6c8);
            }
          }
          goto LAB_0013fe7c;
        }
        goto LAB_0013fb88;
      }
      break;
    case '\x04':
      goto switchD_0013e7b4_caseD_4;
    }
    ppppppplVar18 = (long *******)0x0;
LAB_0013fba8:
                    /* try { // try from 0013fba8 to 0013fbb4 has its CatchHandler @ 00140075 */
    _<hashbrown::raw::RawTable<T,A>as_core::ops::drop::Drop>::drop(&local_5c8);
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&uStack_640);
  }
LAB_0013fbc2:
  if (lStack_2c0 != 0) {
    (*(code *)PTR___rust_dealloc_001dc090)(uStack_2b8,lStack_2c0,1);
  }
LAB_0013fbe2:
  if (lStack_490 != 0) {
    (*(code *)PTR___rust_dealloc_001dc090)(uStack_488,lStack_490,1);
  }
  if (lStack_768 != 0) {
    (*(code *)PTR___rust_dealloc_001dc090)(uStack_760,lStack_768,1);
  }
LAB_0013dd41:
  puVar6 = PTR___rust_dealloc_001dc090;
  if (lStack_338 != 0) {
    puVar26 = (undefined8 *)(lStack_340 + 8);
    lVar12 = lStack_338;
    do {
      if (puVar26[-1] != 0) {
        (*(code *)puVar6)(*puVar26,puVar26[-1],1);
      }
      puVar26 = puVar26 + 3;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  ppppppplVar13 = local_728;
  if (lStack_348 != 0) {
LAB_0013ddaa:
    (*(code *)PTR___rust_dealloc_001dc090)(lStack_340,lStack_348 * 0x18,8);
  }
LAB_0013dae3:
  if (local_5d8 != (long *******)0x0) {
    (*(code *)PTR___rust_dealloc_001dc090)(ppppppplVar13,local_5d8,1);
  }
  if (local_478 != 0) {
    (*(code *)PTR___rust_dealloc_001dc090)(ppppppplStack_470,local_478,1);
  }
  if ((local_448 != (long *******)0x8000000000000000) && (local_448 != (long *******)0x0)) {
    (*(code *)PTR___rust_dealloc_001dc090)(local_440,local_448,1);
  }
  if (local_460 != (long *******)0x0) {
    (*(code *)PTR___rust_dealloc_001dc090)(ppppppplStack_458,local_460,1);
  }
  puVar6 = PTR___rust_dealloc_001dc090;
  if (lStack_308 != 0) {
    puVar26 = (undefined8 *)(lStack_310 + 8);
    lVar12 = lStack_308;
    do {
      if (puVar26[-1] != 0) {
        (*(code *)puVar6)(*puVar26,puVar26[-1],1);
      }
      puVar26 = puVar26 + 3;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  if (local_318 == 0) {
    return ppppppplVar18;
  }
  (*(code *)PTR___rust_dealloc_001dc090)(lStack_310,local_318 * 0x18,8);
  return ppppppplVar18;
}




// ELF address 0x0000000000057a90; fb_strategy_sdk_abi_version

undefined8 fb_strategy_sdk_abi_version(void)

{
  return 4;
}




// ELF address 0x0000000000057aa0; fb_strategy_sdk_version_str

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
  (*(code *)PTR_memcpy_001dc0f0)
            (param_1,
             "0.6.0[fb_plugin] on_begin error: \n[fb_plugin] on_signal error: [fb_plugin] on_depth error: "
             ,uVar2);
  if (param_2 != 0) {
    *(undefined1 *)(param_1 + uVar2) = 0;
  }
  return uVar2;
}


