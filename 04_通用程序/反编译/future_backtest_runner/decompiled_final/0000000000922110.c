// ELF address 0x0000000000922110; future_backtest::RunnerCore::make_ffi_ctx

void _ZN15future_backtest10RunnerCore12make_ffi_ctx17hea280ef96cd49ffaE
               (undefined8 *param_1,long param_2,ulong param_3,long param_4,undefined1 param_5)

{
  undefined4 *puVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  byte bVar6;
  int iVar7;
  long *plVar8;
  code *pcVar9;
  byte bVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  bool bVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined8 uStack_118;
  undefined8 uStack_f0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  double dStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((param_4 == 0) || (*(char *)(param_2 + 0x12d3) != '\0')) {
    *param_1 = 2;
    param_1[0x1a] = 0;
    param_1[0x1b] = 1;
    param_1[0x1c] = 0;
    param_1[0x1d] = param_2;
    *(undefined1 *)(param_1 + 0x1e) = param_5;
  }
  else {
    if (*(ulong *)(param_4 + 0xd8) <= param_3) {
      (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h490175c52f7428ffE_019fc050)
                (param_3,*(ulong *)(param_4 + 0xd8),&UNK_01950c88);
LAB_00a225a5:
                    /* WARNING: Does not return */
      pcVar9 = (code *)invalidInstructionException();
      (*pcVar9)();
    }
    lVar17 = param_3 * 0x50 + *(long *)(param_4 + 0xd0);
    dVar3 = *(double *)(param_2 + 0x7f0);
    bVar6 = *(byte *)(param_4 + 0x188);
    if ((ulong)bVar6 == 0) {
      uStack_118 = 0;
      puVar12 = (undefined8 *)(param_4 + 0x130);
LAB_00a22346:
      dVar4 = (double)puVar12[7];
      dVar5 = *(double *)(param_4 + 0x168);
      uVar20 = SUB84(dVar5,0);
      uVar21 = (undefined4)((ulong)dVar5 >> 0x20);
      if (dVar4 <= dVar5) {
        uVar20 = SUB84(dVar4,0);
        uVar21 = (undefined4)((ulong)dVar4 >> 0x20);
      }
      dStack_b8 = (double)(~-(ulong)NAN(dVar4) & CONCAT44(uVar21,uVar20) |
                          -(ulong)NAN(dVar4) & (ulong)dVar5);
      if (*(char *)(param_4 + 0xf1) != '\0') {
        uVar20 = SUB84(dVar3,0);
        uVar21 = (undefined4)((ulong)dVar3 >> 0x20);
        if (dStack_b8 <= dVar3) {
          uVar20 = SUB84(dStack_b8,0);
          uVar21 = (undefined4)((ulong)dStack_b8 >> 0x20);
        }
        dStack_b8 = (double)(-(ulong)NAN(dStack_b8) & (ulong)dVar3 |
                            ~-(ulong)NAN(dStack_b8) & CONCAT44(uVar21,uVar20));
      }
      uStack_b0 = 0;
      (*(code *)
        PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17he3b8c48364a1d3a4E_019fc038
      )(&uStack_d0,lVar17,&UNK_01950ca0);
      uVar20 = *(undefined4 *)(lVar17 + 0x48);
      bVar10 = (*(code *)
                 PTR__ZN15future_backtest11MetaControl10controller14MetaController10slot_state17h080a20c9d3c83284E_019fd4c0
               )(param_4 + 0x198,param_3,uVar20);
      uStack_a8 = *(undefined8 *)(param_4 + 0x130);
      uStack_a0 = *(undefined8 *)(param_4 + 0x138);
      uStack_98 = *(undefined8 *)(param_4 + 0x140);
      uStack_90 = *(undefined8 *)(param_4 + 0x148);
      uStack_88 = *(undefined8 *)(param_4 + 0x150);
      uStack_80 = *(undefined8 *)(param_4 + 0x158);
      uStack_78 = *(undefined8 *)(param_4 + 0x160);
      uStack_70 = *(undefined8 *)(param_4 + 0x168);
      plVar8 = *(long **)(param_4 + 400);
      LOCK();
      lVar17 = *plVar8;
      *plVar8 = *plVar8 + 1;
      UNLOCK();
      if (*plVar8 == 0 || SCARRY8(lVar17,1) != *plVar8 < 0) goto LAB_00a225a5;
      param_1[0xf] = uStack_c0;
      param_1[0xd] = uStack_d0;
      param_1[0xe] = uStack_c8;
      param_1[0x11] = uStack_a8;
      param_1[0x12] = uStack_a0;
      param_1[0x13] = uStack_98;
      param_1[0x14] = uStack_90;
      param_1[0x15] = uStack_88;
      param_1[0x16] = uStack_80;
      param_1[0x17] = uStack_78;
      param_1[0x18] = uStack_70;
      param_1[2] = CONCAT44(uStack_64,uStack_68);
      param_1[3] = CONCAT44(uStack_5c,uStack_60);
      param_1[4] = uStack_58;
      param_1[5] = uStack_50;
      param_1[6] = uStack_48;
      param_1[7] = uStack_40;
      param_1[8] = uStack_38;
      *param_1 = uStack_118;
      param_1[1] = uStack_f0;
      param_1[9] = (ulong)bVar6;
      param_1[10] = dVar4;
      param_1[0xb] = dStack_b8;
      param_1[0xc] = dVar5;
      param_1[0x10] = plVar8;
      *(undefined4 *)(param_1 + 0x19) = uVar20;
      *(byte *)((long)param_1 + 0xcc) = bVar10 ^ 1;
      param_1[0x1a] = 0;
      param_1[0x1b] = 1;
      param_1[0x1c] = 0;
      param_1[0x1d] = param_2;
      *(undefined1 *)(param_1 + 0x1e) = param_5;
    }
    else {
      lVar11 = *(long *)(param_4 + 0x170);
      if (lVar11 == 0) {
        uStack_118 = 0;
      }
      else {
        lVar14 = *(long *)(param_4 + 0x178);
        iVar7 = *(int *)(lVar17 + 0x48);
        uStack_118 = 0;
        while( true ) {
          lVar18 = 0;
          uVar15 = 0xffffffffffffffff;
          do {
            uVar16 = (ulong)*(ushort *)(lVar11 + 0x2f6);
            if ((ulong)*(ushort *)(lVar11 + 0x2f6) << 4 == lVar18) goto LAB_00a22231;
            iVar2 = *(int *)(lVar11 + 0x2cc + uVar15 * 4);
            uVar16 = uVar15 + 1;
            lVar18 = lVar18 + 0x10;
            uVar15 = uVar16;
          } while ((char)((iVar2 < iVar7) - (iVar7 < iVar2)) == '\x01');
          if (iVar2 < iVar7 == iVar7 < iVar2) break;
LAB_00a22231:
          bVar19 = lVar14 == 0;
          lVar14 = lVar14 + -1;
          if (bVar19) goto LAB_00a222ae;
          lVar11 = *(long *)(lVar11 + 0x2f8 + uVar16 * 8);
        }
        uStack_f0 = *(undefined8 *)(lVar11 + -0x40 + lVar18 * 4);
        uStack_38 = *(undefined8 *)(lVar11 + -8 + lVar18 * 4);
        puVar12 = (undefined8 *)(lVar11 + -0x18 + lVar18 * 4);
        uStack_48 = *puVar12;
        uStack_40 = puVar12[1];
        puVar12 = (undefined8 *)(lVar11 + -0x28 + lVar18 * 4);
        uStack_58 = *puVar12;
        uStack_50 = puVar12[1];
        puVar1 = (undefined4 *)(lVar11 + -0x38 + lVar18 * 4);
        uStack_68 = *puVar1;
        uStack_64 = puVar1[1];
        uStack_60 = puVar1[2];
        uStack_5c = puVar1[3];
        uStack_118 = 1;
      }
LAB_00a222ae:
      iVar7 = *(int *)(lVar17 + 0x48);
      uStack_a8 = CONCAT44(uStack_a8._4_4_,iVar7);
      lVar11 = *(long *)(param_4 + 0x170);
      if (lVar11 != 0) {
        lVar14 = *(long *)(param_4 + 0x178);
        do {
          lVar18 = 0;
          uVar15 = 0xffffffffffffffff;
          do {
            uVar16 = (ulong)*(ushort *)(lVar11 + 0x2f6);
            if ((ulong)*(ushort *)(lVar11 + 0x2f6) * 0x40 + lVar18 == 0) goto LAB_00a22326;
            iVar2 = *(int *)(lVar11 + 0x2cc + uVar15 * 4);
            uVar16 = uVar15 + 1;
            lVar18 = lVar18 + -0x40;
            uVar15 = uVar16;
          } while ((char)((iVar2 < iVar7) - (iVar7 < iVar2)) == '\x01');
          if (iVar2 < iVar7 == iVar7 < iVar2) {
            puVar12 = (undefined8 *)((lVar11 - lVar18) + -0x40);
            goto LAB_00a22346;
          }
LAB_00a22326:
          bVar19 = lVar14 == 0;
          lVar14 = lVar14 + -1;
          if (bVar19) break;
          lVar11 = *(long *)(lVar11 + 0x2f8 + uVar16 * 8);
        } while( true );
      }
      uVar13 = _ZN15future_backtest11MetaControl7capital11CapitalBook9gate_view28__u7b__u7b_closure_u7d__u7d_17hf8bc498dfe8a878eE_llvm_15565010581497186374
                         (&uStack_a8);
      param_1[1] = uVar13;
      *param_1 = 3;
    }
  }
  return;
}


