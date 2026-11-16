// ELF address 0x00000000000a69f0; fb_sweeps::set

/* WARNING: Type propagation algorithm not settling */
/* fb_sweeps::set */

undefined8 __rustcall
fb_sweeps::set(long *******param_1,long *******param_2,long *******param_3,ulong *param_4)

{
  undefined1 uVar1;
  long ******pppppplVar2;
  long ******pppppplVar3;
  long *******ppppppplVar4;
  long *******ppppppplVar5;
  long *******ppppppplVar6;
  long *******ppppppplVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *******ppppppplVar13;
  ulong uVar14;
  long *******ppppppplVar15;
  long *******unaff_RBP;
  undefined7 uVar16;
  long lVar17;
  long *******ppppppplVar18;
  long *******ppppppplVar19;
  code *pcVar20;
  long *******ppppppplVar21;
  long *******ppppppplVar22;
  long *******ppppppplStack_350;
  long *******local_348;
  long *******ppppppplStack_340;
  undefined4 uStack_338;
  undefined4 uStack_334;
  long *******ppppppplStack_328;
  long *******local_320;
  long *******local_318;
  long *******local_310;
  long *******local_308;
  long *******ppppppplStack_300;
  long *******local_2f8;
  long *******local_2f0;
  undefined1 local_2e8;
  undefined7 uStack_2e7;
  undefined2 local_2e0;
  undefined6 uStack_2de;
  ulong uStack_270;
  long *******ppppppplStack_268;
  long *******ppppppplStack_260;
  long *******ppppppplStack_258;
  long *******ppppppplStack_250;
  long *******ppppppplStack_248;
  long *******ppppppplStack_240;
  long *******ppppppplStack_238;
  long *******ppppppplStack_230;
  long *******ppppppplStack_228;
  long *******ppppppplStack_220;
  long *******ppppppplStack_218;
  long *******ppppppplStack_210;
  long *******ppppppplStack_208;
  long *******ppppppplStack_200;
  long *******ppppppplStack_1f8;
  long *******ppppppplStack_1f0;
  long *******ppppppplStack_1e8;
  long *******ppppppplStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 uStack_1c8;
  undefined1 uStack_1c7;
  long local_1c0;
  long *******local_1b8;
  long local_1b0;
  long *******ppppppplStack_1a8;
  long *******local_1a0;
  long *******local_198;
  long *******local_190;
  long *******local_188;
  long *******local_180;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  long *******local_e8;
  long *******local_e0;
  long *******local_d8;
  long *******local_d0;
  long *******ppppppplStack_c8;
  long *******ppppppplStack_c0;
  long *******ppppppplStack_b8;
  long *******ppppppplStack_b0;
  long *******ppppppplStack_a8;
  long *******ppppppplStack_a0;
  long *******ppppppplStack_98;
  long *******ppppppplStack_90;
  long *******ppppppplStack_88;
  long *******ppppppplStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 local_60 [24];
  undefined1 local_48 [24];
  
  local_320 = (long *******)0x0;
  ppppppplStack_300 = (long *******)0x0;
  local_2f0 = (long *******)0x2e0000002e;
  local_2e8 = 1;
  local_2e0 = 1;
                    /* try { // try from 001a6a59 to 001a6a71 has its CatchHandler @ 001a7f0e */
  local_318 = param_3;
  local_310 = param_2;
  local_308 = param_3;
  local_2f8 = param_3;
  local_d8 = param_2;
  local_d0 = param_3;
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (&local_1c0,&local_320,
             &PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_002a8650);
  if (local_1b0 == 0) {
    local_320 = (long *******)&PTR_DAT_002a8708;
    local_318 = (long *******)&DAT_00000001;
    local_310 = (long *******)&DAT_00000008;
    local_308 = (long *******)0x0;
    ppppppplStack_300 = (long *******)0x0;
                    /* try { // try from 001a7d56 to 001a7d97 has its CatchHandler @ 001a7f13 */
    uVar9 = anyhow::__private::format_err(&local_320);
  }
  else {
    local_1a0 = local_1b8 + (local_1b0 + -1) * 2;
    ppppppplVar15 = local_1b8;
    local_e0 = local_1a0;
    if (local_1b0 != 1) {
      lVar17 = local_1b0 * 0x10 + -0x10;
      pcVar20 = (code *)PTR_index_002b3758;
      do {
        local_348 = ppppppplVar15;
                    /* try { // try from 001a6adc to 001a6b0f has its CatchHandler @ 001a7f18 */
        lVar8 = (*pcVar20)(*ppppppplVar15,ppppppplVar15[1],param_1);
        if (lVar8 == 0) {
          if (*(int *)param_1 != 10) {
            local_198 = (long *******)&local_348;
            local_190 = (long *******)_<&T_as_core::fmt::Display>::fmt;
            local_320 = (long *******)&PTR_DAT_002a8758;
            local_318 = (long *******)0x2;
            ppppppplStack_300 = (long *******)0x0;
            local_310 = (long *******)&local_198;
            local_308 = (long *******)&DAT_00000001;
            (*(code *)PTR_format_inner_002b30c8)(local_60,&local_320);
            uVar9 = anyhow::error::_<impl_anyhow::Error>::msg(local_60);
            goto LAB_001a6dda;
          }
          unaff_RBP = (long *******)*local_348;
          pppppplVar2 = local_348[1];
          (*(code *)PTR_new_002b3760)(&local_198);
          (*(code *)PTR_memcpy_002b30b8)(&local_318,&local_198,0xa8);
          pcVar20 = (code *)PTR_index_002b3758;
          local_320 = (long *******)0xa;
                    /* try { // try from 001a6b36 to 001a6b84 has its CatchHandler @ 001a7f18 */
          (*(code *)PTR_insert_002b3768)(&local_198,param_1 + 1,unaff_RBP,pppppplVar2,&local_320);
          if ((int)local_198 != 0xc) {
            core::ptr::drop_in_place<toml_edit::item::Item>(&local_198);
          }
        }
        param_1 = (long *******)(*(code *)PTR_index_mut_002b3770)(*local_348,local_348[1],param_1);
        if (param_1 == (long *******)0x0) {
          uVar9 = set::___closure__(&local_348);
          goto LAB_001a6dda;
        }
        ppppppplVar15 = ppppppplVar15 + 2;
        lVar17 = lVar17 + -0x10;
      } while (lVar17 != 0);
    }
    if (*param_1 == (long ******)0xa) {
      pppppplVar2 = *local_1a0;
      pppppplVar3 = local_1a0[1];
      (*(code *)PTR_memcpy_002b30b8)(&local_320,param_4,0xb0);
                    /* try { // try from 001a6bdc to 001a6dd9 has its CatchHandler @ 001a7f13 */
      (*(code *)PTR_insert_002b3768)(&local_198,param_1 + 1,pppppplVar2,pppppplVar3,&local_320);
      if ((int)local_198 != 0xc) {
        core::ptr::drop_in_place<toml_edit::item::Item>(&local_198);
      }
      if (local_1c0 != 0) {
        (*(code *)PTR___rust_dealloc_002b3038)(local_1b8,local_1c0 << 4,8);
      }
      return 0;
    }
    if ((uint)*param_1 < 2) {
      uVar10 = *param_4;
      if (uVar10 < 8) {
        lVar17 = 6;
        if (1 < uVar10) {
          lVar17 = uVar10 - 2;
        }
        uVar16 = (undefined7)((ulong)unaff_RBP >> 8);
        local_e8 = param_1;
                    /* WARNING: Switch is manually overridden */
        switch(lVar17) {
        case 0:
          ppppppplVar18 = (long *******)CONCAT71(uVar16,1);
          (*(code *)PTR_clone_002b3188)
                    (&local_348,param_4 + 1,
                     &PTR_anon_65c4214f9335fd6aafdae012730c1da5_101_llvm_491205758369420658_002a86c0
                    );
          ppppppplVar22 = (long *******)0x8000000000000003;
          uVar10 = param_4[4];
          if (uVar10 == 0x8000000000000003) {
            ppppppplVar21 = (long *******)0x8000000000000003;
          }
          else {
            uVar14 = 1;
            if ((long)uVar10 < 0) {
              uVar14 = uVar10 ^ 0x8000000000000000;
            }
            ppppppplVar21 = (long *******)0x8000000000000000;
            if (uVar14 != 0) {
              if (uVar14 == 1) {
                    /* try { // try from 001a70c7 to 001a70dc has its CatchHandler @ 001a7ddf */
                (*(code *)PTR_clone_002b3188)
                          (&local_320,param_4 + 4,&PTR_s__home_lyt__cargo_registry_src_rs_002a86d8);
                ppppppplVar21 = local_320;
              }
              else {
                local_318 = (long *******)param_4[5];
                local_310 = (long *******)param_4[6];
                ppppppplVar21 = (long *******)0x8000000000000002;
              }
            }
            ppppppplStack_350 = local_318;
            param_1 = local_310;
          }
          uVar10 = param_4[7];
          if (uVar10 == 0x8000000000000003) {
            ppppppplStack_238 = (long *******)0x8000000000000003;
          }
          else {
            ppppppplStack_238 = (long *******)0x8000000000000000;
            uVar14 = 1;
            if ((long)uVar10 < 0) {
              uVar14 = uVar10 ^ 0x8000000000000000;
            }
            if (uVar14 != 0) {
              if (uVar14 == 1) {
                    /* try { // try from 001a7b91 to 001a7ba9 has its CatchHandler @ 001a7dbd */
                (*(code *)PTR_clone_002b3188)
                          (&local_198,param_4 + 7,&PTR_s__home_lyt__cargo_registry_src_rs_002a86d8);
                ppppppplVar18 = local_190;
                ppppppplStack_238 = local_198;
                ppppppplVar15 = local_188;
              }
              else {
                ppppppplVar18 = (long *******)param_4[8];
                ppppppplVar15 = (long *******)param_4[9];
                ppppppplStack_238 = (long *******)0x8000000000000002;
              }
            }
          }
          uVar10 = param_4[10];
          if (uVar10 != 0x8000000000000003) {
            uVar14 = 1;
            if ((long)uVar10 < 0) {
              uVar14 = uVar10 ^ 0x8000000000000000;
            }
            ppppppplVar22 = (long *******)0x8000000000000000;
            if (uVar14 != 0) {
              if (uVar14 == 1) {
                    /* try { // try from 001a7c00 to 001a7c15 has its CatchHandler @ 001a7d9d */
                (*(code *)PTR_clone_002b3188)
                          (&local_320,param_4 + 10,&PTR_s__home_lyt__cargo_registry_src_rs_002a86d8)
                ;
                ppppppplVar22 = local_320;
              }
              else {
                local_318 = (long *******)param_4[0xb];
                local_310 = (long *******)param_4[0xc];
                ppppppplVar22 = (long *******)0x8000000000000002;
              }
            }
            ppppppplStack_c8 = local_318;
            ppppppplStack_c0 = local_310;
          }
          ppppppplStack_268 = local_348;
          ppppppplStack_260 = ppppppplStack_340;
          ppppppplStack_258 = (long *******)CONCAT44(uStack_334,uStack_338);
          ppppppplStack_248 = ppppppplStack_350;
          ppppppplStack_218 = ppppppplStack_c8;
          ppppppplStack_210 = ppppppplStack_c0;
          uStack_270 = 2;
          ppppppplStack_250 = ppppppplVar21;
          ppppppplStack_240 = param_1;
          ppppppplStack_230 = ppppppplVar18;
          ppppppplStack_228 = ppppppplVar15;
          ppppppplStack_220 = ppppppplVar22;
          break;
        case 1:
          ppppppplVar18 = (long *******)0x8000000000000003;
          uVar10 = param_4[1];
          ppppppplVar15 = (long *******)param_4[10];
          if (uVar10 == 0x8000000000000003) {
            ppppppplVar22 = (long *******)0x8000000000000003;
          }
          else {
            uVar14 = 1;
            if ((long)uVar10 < 0) {
              uVar14 = uVar10 ^ 0x8000000000000000;
            }
            ppppppplVar22 = (long *******)0x8000000000000000;
            if (uVar14 != 0) {
              if (uVar14 == 1) {
                unaff_RBP = (long *******)CONCAT71(uVar16,1);
                (*(code *)PTR_clone_002b3188)
                          (&local_348,param_4 + 1,&PTR_s__home_lyt__cargo_registry_src_rs_002a86d8);
                ppppppplVar22 = local_348;
              }
              else {
                ppppppplStack_340 = (long *******)param_4[2];
                uStack_338 = (undefined4)param_4[3];
                uStack_334 = *(undefined4 *)((long)param_4 + 0x1c);
                ppppppplVar22 = (long *******)0x8000000000000002;
              }
            }
            ppppppplStack_350 = ppppppplStack_340;
            ppppppplStack_328 = (long *******)CONCAT44(uStack_334,uStack_338);
          }
          uVar10 = param_4[4];
          if (uVar10 == 0x8000000000000003) {
            ppppppplStack_250 = (long *******)0x8000000000000003;
          }
          else {
            ppppppplStack_250 = (long *******)0x8000000000000000;
            uVar14 = 1;
            if ((long)uVar10 < 0) {
              uVar14 = uVar10 ^ 0x8000000000000000;
            }
            if (uVar14 != 0) {
              if (uVar14 == 1) {
                    /* try { // try from 001a741e to 001a7436 has its CatchHandler @ 001a7eaa */
                (*(code *)PTR_clone_002b3188)
                          (&local_198,param_4 + 4,&PTR_s__home_lyt__cargo_registry_src_rs_002a86d8);
                unaff_RBP = local_190;
                param_1 = local_188;
                ppppppplStack_250 = local_198;
              }
              else {
                unaff_RBP = (long *******)param_4[5];
                param_1 = (long *******)param_4[6];
                ppppppplStack_250 = (long *******)0x8000000000000002;
              }
            }
          }
          uVar10 = param_4[7];
          if (uVar10 != 0x8000000000000003) {
            uVar14 = 1;
            if ((long)uVar10 < 0) {
              uVar14 = uVar10 ^ 0x8000000000000000;
            }
            ppppppplVar18 = (long *******)0x8000000000000000;
            if (uVar14 != 0) {
              if (uVar14 == 1) {
                    /* try { // try from 001a75d2 to 001a75e7 has its CatchHandler @ 001a7e5c */
                (*(code *)PTR_clone_002b3188)
                          (&local_320,param_4 + 7,&PTR_s__home_lyt__cargo_registry_src_rs_002a86d8);
                ppppppplVar18 = local_320;
              }
              else {
                local_318 = (long *******)param_4[8];
                local_310 = (long *******)param_4[9];
                ppppppplVar18 = (long *******)0x8000000000000002;
              }
            }
            ppppppplStack_b8 = local_318;
            ppppppplStack_b0 = local_310;
          }
          ppppppplStack_260 = ppppppplStack_350;
          ppppppplStack_258 = ppppppplStack_328;
          ppppppplStack_230 = ppppppplStack_b8;
          ppppppplStack_228 = ppppppplStack_b0;
          uStack_270 = 3;
          ppppppplStack_268 = ppppppplVar22;
          ppppppplStack_248 = unaff_RBP;
          ppppppplStack_240 = param_1;
          ppppppplStack_238 = ppppppplVar18;
          ppppppplStack_220 = ppppppplVar15;
          break;
        case 2:
          ppppppplVar22 = (long *******)0x8000000000000003;
          ppppppplVar18 = (long *******)param_4[10];
          uVar10 = param_4[1];
          if (uVar10 == 0x8000000000000003) {
            ppppppplVar21 = (long *******)0x8000000000000003;
          }
          else {
            uVar14 = 1;
            if ((long)uVar10 < 0) {
              uVar14 = uVar10 ^ 0x8000000000000000;
            }
            ppppppplVar21 = (long *******)0x8000000000000000;
            if (uVar14 != 0) {
              if (uVar14 == 1) {
                unaff_RBP = (long *******)CONCAT71(uVar16,1);
                (*(code *)PTR_clone_002b3188)
                          (&local_348,param_4 + 1,&PTR_s__home_lyt__cargo_registry_src_rs_002a86d8);
                ppppppplVar21 = local_348;
              }
              else {
                ppppppplStack_340 = (long *******)param_4[2];
                uStack_338 = (undefined4)param_4[3];
                uStack_334 = *(undefined4 *)((long)param_4 + 0x1c);
                ppppppplVar21 = (long *******)0x8000000000000002;
              }
            }
            ppppppplStack_328 = ppppppplStack_340;
            ppppppplVar15 = (long *******)CONCAT44(uStack_334,uStack_338);
          }
          uVar10 = param_4[4];
          if (uVar10 == 0x8000000000000003) {
            ppppppplStack_250 = (long *******)0x8000000000000003;
          }
          else {
            ppppppplStack_250 = (long *******)0x8000000000000000;
            uVar14 = 1;
            if ((long)uVar10 < 0) {
              uVar14 = uVar10 ^ 0x8000000000000000;
            }
            if (uVar14 != 0) {
              if (uVar14 == 1) {
                    /* try { // try from 001a72f8 to 001a7310 has its CatchHandler @ 001a7eae */
                (*(code *)PTR_clone_002b3188)
                          (&local_198,param_4 + 4,&PTR_s__home_lyt__cargo_registry_src_rs_002a86d8);
                unaff_RBP = local_190;
                param_1 = local_188;
                ppppppplStack_250 = local_198;
              }
              else {
                unaff_RBP = (long *******)param_4[5];
                param_1 = (long *******)param_4[6];
                ppppppplStack_250 = (long *******)0x8000000000000002;
              }
            }
          }
          uVar10 = param_4[7];
          if (uVar10 != 0x8000000000000003) {
            uVar14 = 1;
            if ((long)uVar10 < 0) {
              uVar14 = uVar10 ^ 0x8000000000000000;
            }
            ppppppplVar22 = (long *******)0x8000000000000000;
            if (uVar14 != 0) {
              if (uVar14 == 1) {
                    /* try { // try from 001a750e to 001a7523 has its CatchHandler @ 001a7e60 */
                (*(code *)PTR_clone_002b3188)
                          (&local_320,param_4 + 7,&PTR_s__home_lyt__cargo_registry_src_rs_002a86d8);
                ppppppplVar22 = local_320;
              }
              else {
                local_318 = (long *******)param_4[8];
                local_310 = (long *******)param_4[9];
                ppppppplVar22 = (long *******)0x8000000000000002;
              }
            }
            ppppppplStack_a8 = local_318;
            ppppppplStack_a0 = local_310;
          }
          ppppppplStack_260 = ppppppplStack_328;
          ppppppplStack_230 = ppppppplStack_a8;
          ppppppplStack_228 = ppppppplStack_a0;
          uStack_270 = 4;
          ppppppplStack_268 = ppppppplVar21;
          ppppppplStack_258 = ppppppplVar15;
          ppppppplStack_248 = unaff_RBP;
          ppppppplStack_240 = param_1;
          ppppppplStack_238 = ppppppplVar22;
          ppppppplStack_220 = ppppppplVar18;
          break;
        case 3:
          ppppppplVar15 = (long *******)0x8000000000000003;
          uVar14 = param_4[10];
          uVar10 = param_4[1];
          if (uVar10 == 0x8000000000000003) {
            ppppppplVar18 = (long *******)0x8000000000000003;
          }
          else {
            uVar11 = 1;
            if ((long)uVar10 < 0) {
              uVar11 = uVar10 ^ 0x8000000000000000;
            }
            ppppppplVar18 = (long *******)0x8000000000000000;
            if (uVar11 != 0) {
              if (uVar11 == 1) {
                unaff_RBP = (long *******)CONCAT71(uVar16,1);
                (*(code *)PTR_clone_002b3188)
                          (&local_348,param_4 + 1,&PTR_s__home_lyt__cargo_registry_src_rs_002a86d8);
                ppppppplVar18 = local_348;
              }
              else {
                ppppppplStack_340 = (long *******)param_4[2];
                uStack_338 = (undefined4)param_4[3];
                uStack_334 = *(undefined4 *)((long)param_4 + 0x1c);
                ppppppplVar18 = (long *******)0x8000000000000002;
              }
            }
            ppppppplStack_350 = ppppppplStack_340;
            ppppppplStack_328 = (long *******)CONCAT44(uStack_334,uStack_338);
          }
          uVar10 = param_4[4];
          if (uVar10 == 0x8000000000000003) {
            ppppppplStack_250 = (long *******)0x8000000000000003;
          }
          else {
            ppppppplStack_250 = (long *******)0x8000000000000000;
            uVar11 = 1;
            if ((long)uVar10 < 0) {
              uVar11 = uVar10 ^ 0x8000000000000000;
            }
            if (uVar11 != 0) {
              if (uVar11 == 1) {
                    /* try { // try from 001a738d to 001a73a5 has its CatchHandler @ 001a7eac */
                (*(code *)PTR_clone_002b3188)
                          (&local_198,param_4 + 4,&PTR_s__home_lyt__cargo_registry_src_rs_002a86d8);
                unaff_RBP = local_190;
                param_1 = local_188;
                ppppppplStack_250 = local_198;
              }
              else {
                unaff_RBP = (long *******)param_4[5];
                param_1 = (long *******)param_4[6];
                ppppppplStack_250 = (long *******)0x8000000000000002;
              }
            }
          }
          uVar10 = param_4[7];
          if (uVar10 != 0x8000000000000003) {
            uVar11 = 1;
            if ((long)uVar10 < 0) {
              uVar11 = uVar10 ^ 0x8000000000000000;
            }
            ppppppplVar15 = (long *******)0x8000000000000000;
            if (uVar11 != 0) {
              if (uVar11 == 1) {
                    /* try { // try from 001a7570 to 001a7585 has its CatchHandler @ 001a7e5e */
                (*(code *)PTR_clone_002b3188)
                          (&local_320,param_4 + 7,&PTR_s__home_lyt__cargo_registry_src_rs_002a86d8);
                ppppppplVar15 = local_320;
              }
              else {
                local_318 = (long *******)param_4[8];
                local_310 = (long *******)param_4[9];
                ppppppplVar15 = (long *******)0x8000000000000002;
              }
            }
            ppppppplStack_98 = local_318;
            ppppppplStack_90 = local_310;
          }
          ppppppplStack_260 = ppppppplStack_350;
          ppppppplStack_258 = ppppppplStack_328;
          ppppppplStack_230 = ppppppplStack_98;
          ppppppplStack_228 = ppppppplStack_90;
          ppppppplStack_220 = (long *******)CONCAT71(ppppppplStack_220._1_7_,(char)uVar14);
          uStack_270 = 5;
          ppppppplStack_268 = ppppppplVar18;
          ppppppplStack_248 = unaff_RBP;
          ppppppplStack_240 = param_1;
          ppppppplStack_238 = ppppppplVar15;
          break;
        case 4:
          ppppppplVar18 = (long *******)0x8000000000000003;
          uVar10 = param_4[1];
          if (uVar10 == 0x8000000000000003) {
            ppppppplVar22 = (long *******)0x8000000000000003;
          }
          else {
            uVar14 = 1;
            if ((long)uVar10 < 0) {
              uVar14 = uVar10 ^ 0x8000000000000000;
            }
            ppppppplVar22 = (long *******)0x8000000000000000;
            if (uVar14 != 0) {
              if (uVar14 == 1) {
                unaff_RBP = (long *******)CONCAT71(uVar16,1);
                (*(code *)PTR_clone_002b3188)
                          (&local_348,param_4 + 1,&PTR_s__home_lyt__cargo_registry_src_rs_002a86d8);
                ppppppplVar22 = local_348;
              }
              else {
                ppppppplStack_340 = (long *******)param_4[2];
                uStack_338 = (undefined4)param_4[3];
                uStack_334 = *(undefined4 *)((long)param_4 + 0x1c);
                ppppppplVar22 = (long *******)0x8000000000000002;
              }
            }
            ppppppplStack_350 = ppppppplStack_340;
            param_1 = (long *******)CONCAT44(uStack_334,uStack_338);
          }
          uVar10 = param_4[4];
          if (uVar10 == 0x8000000000000003) {
            ppppppplStack_250 = (long *******)0x8000000000000003;
          }
          else {
            ppppppplStack_250 = (long *******)0x8000000000000000;
            uVar14 = 1;
            if ((long)uVar10 < 0) {
              uVar14 = uVar10 ^ 0x8000000000000000;
            }
            if (uVar14 != 0) {
              if (uVar14 == 1) {
                    /* try { // try from 001a7268 to 001a7280 has its CatchHandler @ 001a7eca */
                (*(code *)PTR_clone_002b3188)
                          (&local_198,param_4 + 4,&PTR_s__home_lyt__cargo_registry_src_rs_002a86d8);
                unaff_RBP = local_190;
                ppppppplStack_250 = local_198;
                ppppppplVar15 = local_188;
              }
              else {
                unaff_RBP = (long *******)param_4[5];
                ppppppplVar15 = (long *******)param_4[6];
                ppppppplStack_250 = (long *******)0x8000000000000002;
              }
            }
          }
          uVar10 = param_4[7];
          if (uVar10 != 0x8000000000000003) {
            uVar14 = 1;
            if ((long)uVar10 < 0) {
              uVar14 = uVar10 ^ 0x8000000000000000;
            }
            ppppppplVar18 = (long *******)0x8000000000000000;
            if (uVar14 != 0) {
              if (uVar14 == 1) {
                    /* try { // try from 001a74a8 to 001a74bd has its CatchHandler @ 001a7e80 */
                (*(code *)PTR_clone_002b3188)
                          (&local_320,param_4 + 7,&PTR_s__home_lyt__cargo_registry_src_rs_002a86d8);
                ppppppplVar18 = local_320;
              }
              else {
                local_318 = (long *******)param_4[8];
                local_310 = (long *******)param_4[9];
                ppppppplVar18 = (long *******)0x8000000000000002;
              }
            }
            ppppppplStack_88 = local_318;
            ppppppplStack_80 = local_310;
          }
          ppppppplStack_218 = (long *******)param_4[0xb];
          ppppppplStack_210 = (long *******)param_4[0xc];
          ppppppplStack_260 = ppppppplStack_350;
          uStack_270 = 6;
          ppppppplStack_268 = ppppppplVar22;
          ppppppplStack_258 = param_1;
          ppppppplStack_248 = unaff_RBP;
          ppppppplStack_240 = ppppppplVar15;
          ppppppplStack_238 = ppppppplVar18;
          ppppppplStack_230 = ppppppplStack_88;
          ppppppplStack_228 = ppppppplStack_80;
          ppppppplStack_220 = (long *******)param_4[10];
          break;
        case 5:
          ppppppplVar18 = (long *******)0x8000000000000003;
          uVar10 = 1;
          if ((long)param_4[7] < 0) {
            uVar10 = param_4[7] ^ 0x8000000000000000;
          }
          ppppppplVar22 = (long *******)0x8000000000000000;
          if (uVar10 != 0) {
            if (uVar10 == 1) {
                    /* try { // try from 001a6ee0 to 001a708f has its CatchHandler @ 001a7f13 */
              (*(code *)PTR_clone_002b3188)
                        (&local_320,param_4 + 7,&PTR_s__home_lyt__cargo_registry_src_rs_002a86d8);
              ppppppplVar22 = local_320;
            }
            else {
              local_318 = (long *******)param_4[8];
              local_310 = (long *******)param_4[9];
              ppppppplVar22 = (long *******)0x8000000000000002;
            }
          }
          ppppppplVar7 = local_310;
          ppppppplVar21 = local_318;
          uVar14 = param_4[0x10];
          uVar10 = param_4[10];
          if (uVar10 == 0x8000000000000003) {
            ppppppplVar13 = (long *******)0x8000000000000003;
            ppppppplVar19 = (long *******)0x8000000000000003;
          }
          else {
            ppppppplVar19 = (long *******)0x8000000000000000;
            uVar11 = 1;
            if ((long)uVar10 < 0) {
              uVar11 = uVar10 ^ 0x8000000000000000;
            }
            if (uVar11 == 0) {
              ppppppplVar13 = (long *******)0x0;
            }
            else if (uVar11 == 1) {
                    /* try { // try from 001a7148 to 001a7160 has its CatchHandler @ 001a7ea5 */
              (*(code *)PTR_clone_002b3188)
                        (&local_198,param_4 + 10,&PTR_s__home_lyt__cargo_registry_src_rs_002a86d8);
              ppppppplVar13 = local_190;
              ppppppplVar19 = local_198;
              ppppppplVar15 = local_188;
            }
            else {
              ppppppplVar13 = (long *******)param_4[0xb];
              ppppppplVar15 = (long *******)param_4[0xc];
              ppppppplVar19 = (long *******)0x8000000000000002;
            }
          }
          uVar10 = param_4[0xd];
          if (uVar10 != 0x8000000000000003) {
            uVar11 = 1;
            if ((long)uVar10 < 0) {
              uVar11 = uVar10 ^ 0x8000000000000000;
            }
            ppppppplVar18 = (long *******)0x8000000000000000;
            ppppppplStack_328 = ppppppplVar13;
            if (uVar11 != 0) {
              if (uVar11 == 1) {
                    /* try { // try from 001a7878 to 001a788d has its CatchHandler @ 001a7e2f */
                (*(code *)PTR_clone_002b3188)
                          (&local_320,param_4 + 0xd,&PTR_s__home_lyt__cargo_registry_src_rs_002a86d8
                          );
                ppppppplVar18 = local_320;
              }
              else {
                local_318 = (long *******)param_4[0xe];
                local_310 = (long *******)param_4[0xf];
                ppppppplVar18 = (long *******)0x8000000000000002;
              }
            }
            local_348 = local_318;
            ppppppplStack_340 = local_310;
            ppppppplVar13 = ppppppplStack_328;
          }
          ppppppplStack_300 = local_348;
          local_2f8 = ppppppplStack_340;
          ppppppplVar4 = (long *******)param_4[1];
          ppppppplVar5 = (long *******)param_4[2];
          ppppppplVar6 = (long *******)param_4[3];
                    /* try { // try from 001a7965 to 001a7978 has its CatchHandler @ 001a7ee4 */
          local_320 = ppppppplVar19;
          local_318 = ppppppplVar13;
          local_310 = ppppppplVar15;
          local_308 = ppppppplVar18;
          _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone
                    (&local_198,param_4 + 4,
                     &PTR_anon_555fd764e0137228883c01217253e0bf_17_llvm_6592636714606075094_002a8688
                    );
          ppppppplStack_230 = ppppppplVar21;
          ppppppplStack_228 = ppppppplVar7;
          ppppppplStack_220 = local_320;
          ppppppplStack_218 = local_318;
          ppppppplStack_210 = local_310;
          ppppppplStack_208 = local_308;
          ppppppplStack_200 = ppppppplStack_300;
          ppppppplStack_1f8 = local_2f8;
          ppppppplStack_250 = local_198;
          ppppppplStack_248 = local_190;
          ppppppplStack_240 = local_188;
          ppppppplStack_1f0 = (long *******)CONCAT71(ppppppplStack_1f0._1_7_,(char)uVar14);
          uStack_270 = 7;
          ppppppplStack_268 = ppppppplVar4;
          ppppppplStack_260 = ppppppplVar5;
          ppppppplStack_258 = ppppppplVar6;
          ppppppplStack_238 = ppppppplVar22;
          break;
        case 6:
          ppppppplVar18 = (long *******)0x8000000000000003;
          uVar14 = 1;
          if ((long)param_4[0xc] < 0) {
            uVar14 = param_4[0xc] ^ 0x8000000000000000;
          }
          ppppppplVar22 = (long *******)0x8000000000000000;
          if (uVar14 != 0) {
            if (uVar14 == 1) {
              (*(code *)PTR_clone_002b3188)
                        (&local_320,param_4 + 0xc,&PTR_s__home_lyt__cargo_registry_src_rs_002a86d8);
              ppppppplVar22 = local_320;
            }
            else {
              local_318 = (long *******)param_4[0xd];
              local_310 = (long *******)param_4[0xe];
              ppppppplVar22 = (long *******)0x8000000000000002;
            }
          }
          ppppppplVar21 = local_318;
          uVar11 = param_4[0x15];
          uVar14 = param_4[0xf];
          ppppppplStack_328 = local_310;
          if (uVar14 == 0x8000000000000003) {
            local_190 = (long *******)0x8000000000000003;
            local_198 = (long *******)0x8000000000000003;
          }
          else {
            local_198 = (long *******)0x8000000000000000;
            uVar12 = 1;
            if ((long)uVar14 < 0) {
              uVar12 = uVar14 ^ 0x8000000000000000;
            }
            if (uVar12 == 0) {
              local_190 = (long *******)0x0;
            }
            else if (uVar12 == 1) {
                    /* try { // try from 001a71e4 to 001a71f9 has its CatchHandler @ 001a7ea0 */
              (*(code *)PTR_clone_002b3188)
                        (&local_348,param_4 + 0xf,&PTR_s__home_lyt__cargo_registry_src_rs_002a86d8);
              ppppppplVar15 = (long *******)CONCAT44(uStack_334,uStack_338);
              local_190 = ppppppplStack_340;
              local_198 = local_348;
            }
            else {
              local_190 = (long *******)param_4[0x10];
              ppppppplVar15 = (long *******)param_4[0x11];
              local_198 = (long *******)0x8000000000000002;
            }
          }
          uVar14 = param_4[0x12];
          if (uVar14 != 0x8000000000000003) {
            uVar12 = 1;
            if ((long)uVar14 < 0) {
              uVar12 = uVar14 ^ 0x8000000000000000;
            }
            ppppppplVar18 = (long *******)0x8000000000000000;
            ppppppplStack_1a8 = local_190;
            if (uVar12 != 0) {
              if (uVar12 == 1) {
                    /* try { // try from 001a78ef to 001a7907 has its CatchHandler @ 001a7e08 */
                (*(code *)PTR_clone_002b3188)
                          (&local_320,param_4 + 0x12,
                           &PTR_s__home_lyt__cargo_registry_src_rs_002a86d8);
                ppppppplVar18 = local_320;
              }
              else {
                local_318 = (long *******)param_4[0x13];
                local_310 = (long *******)param_4[0x14];
                ppppppplVar18 = (long *******)0x8000000000000002;
              }
            }
            uStack_78 = local_318;
            uStack_70 = local_310;
            local_190 = ppppppplStack_1a8;
          }
          uStack_178 = (undefined4)uStack_78;
          uStack_174 = uStack_78._4_4_;
          uStack_170 = (undefined4)uStack_70;
          uStack_16c = uStack_70._4_4_;
          ppppppplVar7 = (long *******)param_4[1];
          ppppppplVar19 = (long *******)param_4[2];
          uVar1 = *(undefined1 *)((long)param_4 + 0xa9);
                    /* try { // try from 001a7a7c to 001a7a85 has its CatchHandler @ 001a7ed7 */
          local_188 = ppppppplVar15;
          local_180 = ppppppplVar18;
          _<indexmap::map::IndexMap<K,V,S>as_core::clone::Clone>::clone(&local_320,param_4 + 3);
          ppppppplStack_208 = ppppppplVar21;
          ppppppplStack_200 = ppppppplStack_328;
          uStack_1d8 = CONCAT44(uStack_174,uStack_178);
          uStack_1d0 = CONCAT44(uStack_16c,uStack_170);
          ppppppplStack_1f8 = local_198;
          ppppppplStack_1f0 = local_190;
          ppppppplStack_1e8 = local_188;
          ppppppplStack_1e0 = local_180;
          ppppppplStack_248 = local_310;
          ppppppplStack_240 = local_308;
          ppppppplStack_238 = ppppppplStack_300;
          ppppppplStack_230 = local_2f8;
          ppppppplStack_228 = local_2f0;
          ppppppplStack_218 = (long *******)CONCAT62(uStack_2de,local_2e0);
          uStack_270 = uVar10;
          ppppppplStack_268 = ppppppplVar7;
          ppppppplStack_260 = ppppppplVar19;
          ppppppplStack_258 = local_320;
          ppppppplStack_250 = local_318;
          ppppppplStack_220 = (long *******)CONCAT71(uStack_2e7,local_2e8);
          ppppppplStack_210 = ppppppplVar22;
          uStack_1c8 = (char)uVar11;
          uStack_1c7 = uVar1;
        }
                    /* try { // try from 001a7cc1 to 001a7ceb has its CatchHandler @ 001a7f13 */
        toml_edit::inline_table::InlineTable::insert
                  (&local_320,local_e8,*local_1a0,local_1a0[1],&uStack_270);
        if ((int)local_320 != 8) {
          core::ptr::drop_in_place<toml_edit::value::Value>(&local_320);
        }
        if (local_1c0 != 0) {
          (*(code *)PTR___rust_dealloc_002b3038)(local_1b8,local_1c0 << 4,8);
        }
        core::ptr::drop_in_place<toml_edit::item::Item>(param_4);
        return 0;
      }
      local_320 = (long *******)&PTR_DAT_002a8718;
      local_318 = (long *******)&DAT_00000001;
      local_310 = (long *******)&DAT_00000008;
      local_308 = (long *******)0x0;
      ppppppplStack_300 = (long *******)0x0;
      uVar9 = anyhow::__private::format_err(&local_320);
    }
    else {
      local_198 = (long *******)&local_e0;
      local_190 = (long *******)_<&T_as_core::fmt::Display>::fmt;
      local_188 = (long *******)&local_d8;
      local_180 = (long *******)_<&T_as_core::fmt::Display>::fmt;
      local_320 = (long *******)&PTR_DAT_002a8728;
      local_318 = (long *******)0x3;
      ppppppplStack_300 = (long *******)0x0;
      local_310 = (long *******)&local_198;
      local_308 = (long *******)0x2;
      (*(code *)PTR_format_inner_002b30c8)(local_48,&local_320);
      uVar9 = anyhow::error::_<impl_anyhow::Error>::msg(local_48);
    }
  }
LAB_001a6dda:
  if (local_1c0 != 0) {
    (*(code *)PTR___rust_dealloc_002b3038)(local_1b8,local_1c0 << 4,8);
  }
  core::ptr::drop_in_place<toml_edit::item::Item>(param_4);
  return uVar9;
}


