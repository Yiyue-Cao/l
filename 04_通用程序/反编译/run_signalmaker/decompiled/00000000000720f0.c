// ELF address 0x00000000000720f0; run_signalmaker::build_param_combos

/* run_signalmaker::build_param_combos */

void __rustcall
run_signalmaker::build_param_combos(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined8 *puVar20;
  long lVar21;
  long *plVar22;
  long *plVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  long local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  long *local_c8;
  long local_c0;
  long local_b8;
  long *local_b0;
  long local_a8;
  long *local_a0;
  long local_98;
  long local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  double local_78;
  undefined8 local_70;
  long local_68;
  undefined **local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  puVar19 = PTR_memcpy_002b2990;
  puVar18 = PTR___rust_alloc_002b2900;
  local_e8 = 0;
  local_e0 = 8;
  local_d8 = 0;
  local_c8 = param_1;
  if (*(long *)(param_2 + 0x10) != 0) {
    local_a0 = *(long **)(param_2 + 8);
    local_b0 = local_a0 + *(long *)(param_2 + 0x10);
    plVar22 = local_a0 + 1;
    local_b8 = *(long *)(param_2 + 0x30);
    local_c0 = *(long *)(param_2 + 0x38);
    if (param_4 == 0) {
      if (local_b8 != 0) {
        do {
          plVar23 = plVar22;
          lVar1 = *local_a0;
          lVar21 = local_c0;
          lVar27 = local_b8;
          while( true ) {
            uVar25 = (ulong)*(ushort *)(lVar27 + 0x16a);
            lVar26 = (ulong)*(ushort *)(lVar27 + 0x16a) << 3;
            uVar24 = 0xffffffffffffffff;
            do {
              if (lVar26 == 0) {
                if (lVar21 != 0) goto LAB_00172509;
                goto LAB_00172490;
              }
              lVar2 = *(long *)(lVar27 + 0x10 + uVar24 * 8);
              uVar24 = uVar24 + 1;
              lVar26 = lVar26 + -8;
            } while ((char)((lVar2 < lVar1) - (lVar1 < lVar2)) == '\x01');
            if ((lVar2 < lVar1 == lVar1 < lVar2) || (uVar25 = uVar24, lVar21 == 0)) break;
LAB_00172509:
            lVar21 = lVar21 + -1;
            lVar27 = *(long *)(lVar27 + 0x170 + uVar25 * 8);
          }
LAB_00172490:
          plVar22 = plVar23 + (plVar23 != local_b0);
          local_a0 = plVar23;
        } while (plVar23 != local_b0);
      }
    }
    else {
      local_a8 = param_2 + 0x18;
      local_98 = param_3 + 0x18;
      local_90 = param_4 * -0x18 + 0x18;
      local_d0 = param_3;
      do {
        lVar1 = *local_a0;
        lVar27 = local_b8;
        lVar21 = local_c0;
        if (local_b8 != 0) {
          while( true ) {
            uVar25 = (ulong)*(ushort *)(lVar27 + 0x16a);
            uVar24 = 0xffffffffffffffff;
            lVar26 = 0;
            do {
              if ((ulong)((uint)*(ushort *)(lVar27 + 0x16a) * 8) * 3 + lVar26 == 0) {
                if (lVar21 != 0) goto LAB_00172259;
                goto LAB_00172280;
              }
              lVar2 = *(long *)(lVar27 + 0x10 + uVar24 * 8);
              uVar24 = uVar24 + 1;
              lVar26 = lVar26 + -0x18;
            } while ((char)((lVar2 < lVar1) - (lVar1 < lVar2)) == '\x01');
            if (lVar2 < lVar1 == lVar1 < lVar2) {
              lVar27 = (lVar27 - lVar26) + 0x48;
              goto LAB_00172282;
            }
            uVar25 = uVar24;
            if (lVar21 == 0) break;
LAB_00172259:
            lVar27 = *(long *)(lVar27 + 0x170 + uVar25 * 8);
            lVar21 = lVar21 + -1;
          }
        }
LAB_00172280:
        lVar27 = 0;
LAB_00172282:
        if (lVar27 == 0) {
          lVar27 = local_a8;
        }
        local_a0 = plVar22;
        if (*(long *)(lVar27 + 0x10) != 0) {
          local_80 = *(undefined8 **)(lVar27 + 8);
          local_88 = local_80 + *(long *)(lVar27 + 0x10);
          puVar20 = local_80 + 1;
          local_78 = (double)lVar1;
          do {
            local_70 = *local_80;
            lVar1 = local_98;
            lVar27 = local_90;
            lVar21 = local_d0;
            local_80 = puVar20;
            do {
              lVar26 = lVar1;
              local_68 = *(long *)(lVar21 + 0x10);
              if (local_68 != 0x26) {
                local_60 = &PTR_s_run_signalmaker_common_grid_widt_002a5bd0;
                local_58 = 1;
                local_50 = 8;
                local_48 = 0;
                uStack_40 = 0;
                    /* try { // try from 0017242f to 00172529 has its CatchHandler @ 00172544 */
                (*(code *)PTR_assert_failed_002b2b00)
                          (0,&local_68,&DAT_00116398,&local_60,
                           &
                           PTR_anon_52b3106212fa17b89ed124d311d91c84_8_llvm_18028058375776711367_002a5be0
                          );
LAB_0017252a:
                    /* WARNING: Does not return */
                pcVar4 = (code *)invalidInstructionException();
                (*pcVar4)();
              }
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002b2928)();
              puVar20 = (undefined8 *)(*(code *)puVar18)(0x140,8);
              if (puVar20 == (undefined8 *)0x0) {
                (*(code *)PTR_handle_error_002b2a30)
                          (8,0x140,&
                                   PTR_anon_52b3106212fa17b89ed124d311d91c84_8_llvm_18028058375776711367_002a5ba0
                          );
                goto LAB_0017252a;
              }
              puVar3 = *(undefined8 **)(lVar21 + 8);
              uVar17 = puVar3[1];
              *puVar20 = *puVar3;
              puVar20[1] = uVar17;
              puVar20[2] = local_78;
              uVar17 = puVar3[3];
              uVar5 = *(undefined4 *)(puVar3 + 4);
              uVar6 = *(undefined4 *)((long)puVar3 + 0x24);
              uVar7 = *(undefined4 *)(puVar3 + 5);
              uVar8 = *(undefined4 *)((long)puVar3 + 0x2c);
              uVar9 = *(undefined4 *)(puVar3 + 6);
              uVar10 = *(undefined4 *)((long)puVar3 + 0x34);
              uVar11 = *(undefined4 *)(puVar3 + 7);
              uVar12 = *(undefined4 *)((long)puVar3 + 0x3c);
              uVar13 = *(undefined4 *)(puVar3 + 8);
              uVar14 = *(undefined4 *)((long)puVar3 + 0x44);
              uVar15 = *(undefined4 *)(puVar3 + 9);
              uVar16 = *(undefined4 *)((long)puVar3 + 0x4c);
              puVar20[3] = puVar3[2];
              puVar20[4] = uVar17;
              *(undefined4 *)(puVar20 + 5) = uVar5;
              *(undefined4 *)((long)puVar20 + 0x2c) = uVar6;
              *(undefined4 *)(puVar20 + 6) = uVar7;
              *(undefined4 *)((long)puVar20 + 0x34) = uVar8;
              *(undefined4 *)(puVar20 + 7) = uVar9;
              *(undefined4 *)((long)puVar20 + 0x3c) = uVar10;
              *(undefined4 *)(puVar20 + 8) = uVar11;
              *(undefined4 *)((long)puVar20 + 0x44) = uVar12;
              *(undefined4 *)(puVar20 + 9) = uVar13;
              *(undefined4 *)((long)puVar20 + 0x4c) = uVar14;
              *(undefined4 *)(puVar20 + 10) = uVar15;
              *(undefined4 *)((long)puVar20 + 0x54) = uVar16;
              uVar17 = puVar3[0xb];
              puVar20[0xb] = puVar3[10];
              puVar20[0xc] = uVar17;
              uVar17 = puVar3[0xd];
              puVar20[0xd] = puVar3[0xc];
              puVar20[0xe] = uVar17;
              puVar20[0xf] = local_70;
              (*(code *)puVar19)(puVar20 + 0x10,puVar3 + 0xe,0xc0);
              lVar1 = local_d8;
              if (local_d8 == local_e8) {
                    /* try { // try from 001723e9 to 001723f7 has its CatchHandler @ 0017252c */
                alloc::raw_vec::RawVec<T,A>::grow_one
                          (&local_e8,
                           &
                           PTR_anon_52b3106212fa17b89ed124d311d91c84_8_llvm_18028058375776711367_002a5bb8
                          );
              }
              *(undefined8 *)(local_e0 + lVar1 * 0x18) = 0x28;
              *(undefined8 **)(local_e0 + 8 + lVar1 * 0x18) = puVar20;
              *(undefined8 *)(local_e0 + 0x10 + lVar1 * 0x18) = 0x28;
              local_d8 = lVar1 + 1;
              lVar27 = lVar27 + 0x18;
              lVar1 = lVar26 + 0x18;
              lVar21 = lVar26;
            } while (lVar27 != 0x18);
            puVar20 = local_80 + (local_80 != local_88);
          } while (local_80 != local_88);
        }
        plVar22 = local_a0 + (local_a0 != local_b0);
      } while (local_a0 != local_b0);
    }
  }
  local_c8[2] = local_d8;
  *local_c8 = local_e8;
  local_c8[1] = local_e0;
  return;
}


