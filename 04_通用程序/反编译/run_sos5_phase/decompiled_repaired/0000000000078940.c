// ELF address 0x0000000000078940; <run_sos5_phase::Args as clap_builder::derive::FromArgMatches>::from_arg_matches_mut

/* WARNING: Removing unreachable block (ram,0x00178b4f) */
/* WARNING: Removing unreachable block (ram,0x00178b7e) */
/* WARNING: Removing unreachable block (ram,0x00178b8e) */
/* WARNING: Removing unreachable block (ram,0x00178bad) */
/* WARNING: Type propagation algorithm not settling */
/* _<run_sos5_phase::Args as clap_builder::derive::FromArgMatches>::from_arg_matches_mut */

void __rustcall
_<run_sos5_phase::Args_as_clap_builder::derive::FromArgMatches>::from_arg_matches_mut
          (long *param_1,undefined8 param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  char cVar32;
  char cVar33;
  char cVar34;
  char cVar35;
  long lVar36;
  ulong uVar37;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined1 auVar38 [16];
  int local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  char *local_140;
  undefined8 local_138;
  undefined1 *local_130;
  undefined8 local_128;
  char ***local_120;
  undefined8 local_118;
  undefined8 local_110;
  long local_100;
  int local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  char **local_d0;
  code *local_c8;
  int *local_c0;
  undefined *local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  
  clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
            (&local_168,param_2,"base_config",0xb);
  local_140 = "base_config";
  local_138 = 0xb;
  if (local_168 == 2) {
    uVar2 = CONCAT44(uStack_15c,uStack_160);
    lVar12 = CONCAT44(uStack_154,local_158);
    lVar36 = CONCAT44(uStack_14c,uStack_150);
                    /* try { // try from 001789b2 to 001789d0 has its CatchHandler @ 0017adf7 */
    clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
              (&local_168,param_2,"base_config_dir",0xf);
    local_140 = "base_config_dir";
    local_138 = 0xf;
    if (local_168 == 2) {
      uVar3 = CONCAT44(uStack_15c,uStack_160);
      lVar13 = CONCAT44(uStack_154,local_158);
      local_38 = CONCAT44(uStack_14c,uStack_150);
                    /* try { // try from 00178a18 to 00178a36 has its CatchHandler @ 0017add2 */
      clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
                (&local_168,param_2,"watcher_base_config",0x13);
      local_140 = "watcher_base_config";
      local_138 = 0x13;
      if (local_168 == 2) {
        uVar4 = CONCAT44(uStack_15c,uStack_160);
        lVar14 = CONCAT44(uStack_154,local_158);
        local_40 = CONCAT44(uStack_14c,uStack_150);
                    /* try { // try from 00178a83 to 00178aa1 has its CatchHandler @ 0017ad7b */
        clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
                  (&local_168,param_2,"watcher_base_config_dir",0x17);
        local_140 = "watcher_base_config_dir";
        local_138 = 0x17;
        if (local_168 != 2) {
          local_d8 = local_148;
          local_e8 = local_158;
          uStack_e4 = uStack_154;
          uStack_e0 = uStack_150;
          uStack_dc = uStack_14c;
          local_f8 = local_168;
          uStack_f4 = uStack_164;
          uStack_f0 = uStack_160;
          uStack_ec = uStack_15c;
          local_d0 = &local_140;
          local_c8 = _<&T_as_core::fmt::Display>::fmt;
          local_c0 = &local_f8;
          local_b8 = PTR_fmt_002b64f0;
          local_130 = anon_cba334083caa6ccf313e21528b0a449a_2_llvm_8800261252037858348;
          local_128 = 2;
          local_110 = 0;
          local_120 = &local_d0;
          local_118 = 2;
                    /* try { // try from 0017998a to 0017999e has its CatchHandler @ 0017ad7b */
          (*(code *)PTR_panic_fmt_002b64f8)
                    (&local_130,anon_cba334083caa6ccf313e21528b0a449a_4_llvm_8800261252037858348);
          goto LAB_0017a3ff;
        }
        uVar5 = CONCAT44(uStack_15c,uStack_160);
        lVar15 = CONCAT44(uStack_154,local_158);
        lVar22 = CONCAT44(uStack_14c,uStack_150);
                    /* try { // try from 00178af2 to 00178b64 has its CatchHandler @ 0017ad80 */
        clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
                  (&local_168,param_2,"runner",6);
        local_140 = "runner";
        local_138 = 6;
        if (local_168 != 2) {
          local_d8 = local_148;
          local_e8 = local_158;
          uStack_e4 = uStack_154;
          uStack_e0 = uStack_150;
          uStack_dc = uStack_14c;
          local_f8 = local_168;
          uStack_f4 = uStack_164;
          uStack_f0 = uStack_160;
          uStack_ec = uStack_15c;
          local_d0 = &local_140;
          local_c8 = _<&T_as_core::fmt::Display>::fmt;
          local_c0 = &local_f8;
          local_b8 = PTR_fmt_002b64f0;
          local_130 = anon_cba334083caa6ccf313e21528b0a449a_2_llvm_8800261252037858348;
          local_128 = 2;
          local_110 = 0;
          local_120 = &local_d0;
          local_118 = 2;
                    /* try { // try from 00179a55 to 00179a69 has its CatchHandler @ 0017ad80 */
          (*(code *)PTR_panic_fmt_002b64f8)
                    (&local_130,anon_cba334083caa6ccf313e21528b0a449a_4_llvm_8800261252037858348);
          goto LAB_0017a3ff;
        }
        lVar6 = CONCAT44(uStack_15c,uStack_160);
                    /* try { // try from 00178bbc to 00178c47 has its CatchHandler @ 0017aca8 */
        lVar16 = CONCAT44(uStack_154,local_158);
        local_48 = CONCAT44(uStack_14c,uStack_150);
        clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
                  (&local_168,param_2,"dylib",5);
        local_140 = "dylib";
        local_138 = 5;
        if (local_168 != 2) {
          local_d8 = local_148;
          local_e8 = local_158;
          uStack_e4 = uStack_154;
          uStack_e0 = uStack_150;
          uStack_dc = uStack_14c;
          local_f8 = local_168;
          uStack_f4 = uStack_164;
          uStack_f0 = uStack_160;
          uStack_ec = uStack_15c;
          local_d0 = &local_140;
          local_c8 = _<&T_as_core::fmt::Display>::fmt;
          local_c0 = &local_f8;
          local_b8 = PTR_fmt_002b64f0;
          local_130 = anon_cba334083caa6ccf313e21528b0a449a_2_llvm_8800261252037858348;
          local_128 = 2;
          local_110 = 0;
          local_120 = &local_d0;
          local_118 = 2;
                    /* try { // try from 00179b3b to 00179b4f has its CatchHandler @ 0017aca8 */
          (*(code *)PTR_panic_fmt_002b64f8)
                    (&local_130,anon_cba334083caa6ccf313e21528b0a449a_4_llvm_8800261252037858348);
          goto LAB_0017a3ff;
        }
        lVar7 = CONCAT44(uStack_15c,uStack_160);
        if (lVar7 == -0x8000000000000000) {
          lVar36 = clap_builder::error::Error<F>::raw
                             (9,"the following required argument was not provided: dylib",0x37);
          param_1[1] = lVar36;
          *param_1 = -0x8000000000000000;
          if (lVar6 != 0) {
            (*(code *)PTR___rust_dealloc_002b62f0)(lVar16,lVar6,1);
          }
        }
        else {
                    /* try { // try from 00178c9f to 00178d27 has its CatchHandler @ 0017ac1f */
          lVar17 = CONCAT44(uStack_154,local_158);
          local_50 = CONCAT44(uStack_14c,uStack_150);
          clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
                    (&local_168,param_2,"watcher_dylib",0xd);
          local_140 = "watcher_dylib";
          local_138 = 0xd;
          if (local_168 != 2) {
            local_d8 = local_148;
            local_e8 = local_158;
            uStack_e4 = uStack_154;
            uStack_e0 = uStack_150;
            uStack_dc = uStack_14c;
            local_f8 = local_168;
            uStack_f4 = uStack_164;
            uStack_f0 = uStack_160;
            uStack_ec = uStack_15c;
            local_d0 = &local_140;
            local_c8 = _<&T_as_core::fmt::Display>::fmt;
            local_c0 = &local_f8;
            local_b8 = PTR_fmt_002b64f0;
            local_130 = anon_cba334083caa6ccf313e21528b0a449a_2_llvm_8800261252037858348;
            local_128 = 2;
            local_110 = 0;
            local_120 = &local_d0;
            local_118 = 2;
                    /* try { // try from 00179c8e to 00179ca2 has its CatchHandler @ 0017ac1f */
            (*(code *)PTR_panic_fmt_002b64f8)
                      (&local_130,anon_cba334083caa6ccf313e21528b0a449a_4_llvm_8800261252037858348);
            goto LAB_0017a3ff;
          }
          lVar8 = CONCAT44(uStack_15c,uStack_160);
          if (lVar8 == -0x8000000000000000) {
            lVar36 = clap_builder::error::Error<F>::raw
                               (9,"the following required argument was not provided: watcher_dylib",
                                0x3f);
            param_1[1] = lVar36;
            *param_1 = -0x8000000000000000;
            if (lVar7 != 0) {
              (*(code *)PTR___rust_dealloc_002b62f0)(lVar17,lVar7,1);
            }
          }
          else {
                    /* try { // try from 00178d7f to 00178e0b has its CatchHandler @ 0017ab07 */
            lVar18 = CONCAT44(uStack_154,local_158);
            local_58 = CONCAT44(uStack_14c,uStack_150);
            clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
                      (&local_168,param_2,"strategy",8);
            local_140 = "strategy";
            local_138 = 8;
            if (local_168 != 2) {
              local_d8 = local_148;
              local_e8 = local_158;
              uStack_e4 = uStack_154;
              uStack_e0 = uStack_150;
              uStack_dc = uStack_14c;
              local_f8 = local_168;
              uStack_f4 = uStack_164;
              uStack_f0 = uStack_160;
              uStack_ec = uStack_15c;
              local_d0 = &local_140;
              local_c8 = _<&T_as_core::fmt::Display>::fmt;
              local_c0 = &local_f8;
              local_b8 = PTR_fmt_002b64f0;
              local_130 = anon_cba334083caa6ccf313e21528b0a449a_2_llvm_8800261252037858348;
              local_128 = 2;
              local_110 = 0;
              local_120 = &local_d0;
              local_118 = 2;
                    /* try { // try from 00179ee4 to 00179ef8 has its CatchHandler @ 0017ab07 */
              (*(code *)PTR_panic_fmt_002b64f8)
                        (&local_130,anon_cba334083caa6ccf313e21528b0a449a_4_llvm_8800261252037858348
                        );
              goto LAB_0017a3ff;
            }
            lVar9 = CONCAT44(uStack_15c,uStack_160);
            if (lVar9 == -0x8000000000000000) {
              lVar36 = clap_builder::error::Error<F>::raw
                                 (9,"the following required argument was not provided: strategy",
                                  0x3a);
              param_1[1] = lVar36;
              *param_1 = -0x8000000000000000;
              if (lVar8 != 0) {
                (*(code *)PTR___rust_dealloc_002b62f0)(lVar18,lVar8,1);
              }
            }
            else {
                    /* try { // try from 00178f4c to 00178fd8 has its CatchHandler @ 0017aad2 */
              lVar19 = CONCAT44(uStack_154,local_158);
              local_60 = CONCAT44(uStack_14c,uStack_150);
              clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
                        (&local_168,param_2,"watcher",7);
              local_140 = "watcher";
              local_138 = 7;
              if (local_168 != 2) {
                local_d8 = local_148;
                local_e8 = local_158;
                uStack_e4 = uStack_154;
                uStack_e0 = uStack_150;
                uStack_dc = uStack_14c;
                local_f8 = local_168;
                uStack_f4 = uStack_164;
                uStack_f0 = uStack_160;
                uStack_ec = uStack_15c;
                local_d0 = &local_140;
                local_c8 = _<&T_as_core::fmt::Display>::fmt;
                local_c0 = &local_f8;
                local_b8 = PTR_fmt_002b64f0;
                local_130 = anon_cba334083caa6ccf313e21528b0a449a_2_llvm_8800261252037858348;
                local_128 = 2;
                local_110 = 0;
                local_120 = &local_d0;
                local_118 = 2;
                    /* try { // try from 0017a0d3 to 0017a0e7 has its CatchHandler @ 0017aad2 */
                (*(code *)PTR_panic_fmt_002b64f8)
                          (&local_130,
                           anon_cba334083caa6ccf313e21528b0a449a_4_llvm_8800261252037858348);
                goto LAB_0017a3ff;
              }
              lVar10 = CONCAT44(uStack_15c,uStack_160);
              if (lVar10 == -0x8000000000000000) {
                lVar36 = clap_builder::error::Error<F>::raw
                                   (9,"the following required argument was not provided: watcher",
                                    0x39);
                param_1[1] = lVar36;
                *param_1 = -0x8000000000000000;
                if (lVar9 != 0) {
                  (*(code *)PTR___rust_dealloc_002b62f0)(lVar19,lVar9,1);
                }
              }
              else {
                    /* try { // try from 00179045 to 001790d1 has its CatchHandler @ 0017aa9d */
                lVar20 = CONCAT44(uStack_154,local_158);
                local_68 = CONCAT44(uStack_14c,uStack_150);
                clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
                          (&local_168,param_2,"signals",7);
                local_140 = "signals";
                local_138 = 7;
                if (local_168 != 2) {
                  local_d8 = local_148;
                  local_e8 = local_158;
                  uStack_e4 = uStack_154;
                  uStack_e0 = uStack_150;
                  uStack_dc = uStack_14c;
                  local_f8 = local_168;
                  uStack_f4 = uStack_164;
                  uStack_f0 = uStack_160;
                  uStack_ec = uStack_15c;
                  local_d0 = &local_140;
                  local_c8 = _<&T_as_core::fmt::Display>::fmt;
                  local_c0 = &local_f8;
                  local_b8 = PTR_fmt_002b64f0;
                  local_130 = anon_cba334083caa6ccf313e21528b0a449a_2_llvm_8800261252037858348;
                  local_128 = 2;
                  local_110 = 0;
                  local_120 = &local_d0;
                  local_118 = 2;
                    /* try { // try from 0017a3ea to 0017a3fe has its CatchHandler @ 0017aa9d */
                  (*(code *)PTR_panic_fmt_002b64f8)
                            (&local_130,
                             anon_cba334083caa6ccf313e21528b0a449a_4_llvm_8800261252037858348);
                  goto LAB_0017a3ff;
                }
                lVar11 = CONCAT44(uStack_15c,uStack_160);
                if (lVar11 == -0x8000000000000000) {
                  lVar36 = clap_builder::error::Error<F>::raw
                                     (9,"the following required argument was not provided: signals",
                                      0x39);
                  param_1[1] = lVar36;
                  *param_1 = -0x8000000000000000;
                  if (lVar10 != 0) {
                    (*(code *)PTR___rust_dealloc_002b62f0)(lVar20,lVar10,1);
                  }
                }
                else {
                    /* try { // try from 0017913e to 001791b9 has its CatchHandler @ 0017aa68 */
                  lVar21 = CONCAT44(uStack_154,local_158);
                  clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
                            (&local_130,param_2,"days",4);
                  clap_builder::parser::error::MatchesError::unwrap(&local_f8,"days",4,&local_130);
                  lVar23 = CONCAT44(uStack_f4,local_f8);
                  if (lVar23 == -0x8000000000000000) {
                    lVar36 = clap_builder::error::Error<F>::raw
                                       (9,"the following required argument was not provided: days",
                                        0x36);
                    param_1[1] = lVar36;
                    *param_1 = -0x8000000000000000;
                    if (lVar11 != 0) {
                      (*(code *)PTR___rust_dealloc_002b62f0)(lVar21,lVar11,1);
                    }
                  }
                  else {
                    lVar28 = CONCAT44(uStack_ec,uStack_f0);
                    local_70 = CONCAT44(uStack_e4,local_e8);
                    /* try { // try from 0017924b to 001792ae has its CatchHandler @ 0017aa33 */
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
                              (&local_130,param_2,"phase_threshold_recipes",0x17);
                    clap_builder::parser::error::MatchesError::unwrap
                              (&local_f8,"phase_threshold_recipes",0x17,&local_130);
                    lVar24 = CONCAT44(uStack_f4,local_f8);
                    if (lVar24 == -0x8000000000000000) {
                      lVar36 = clap_builder::error::Error<F>::raw
                                         (9,
                                          "the following required argument was not provided: phase_threshold_recipes"
                                          ,0x49);
                      param_1[1] = lVar36;
                      *param_1 = -0x8000000000000000;
                      if (lVar23 != 0) {
                        (*(code *)PTR___rust_dealloc_002b62f0)(lVar28,lVar23,1);
                      }
                    }
                    else {
                      lVar29 = CONCAT44(uStack_ec,uStack_f0);
                      local_78 = CONCAT44(uStack_e4,local_e8);
                    /* try { // try from 00179340 to 001793a3 has its CatchHandler @ 0017a9fe */
                      clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
                                (&local_130,param_2,"init_cash_values_cny",0x14);
                      clap_builder::parser::error::MatchesError::unwrap
                                (&local_f8,"init_cash_values_cny",0x14,&local_130);
                      lVar25 = CONCAT44(uStack_f4,local_f8);
                      if (lVar25 == -0x8000000000000000) {
                        lVar36 = clap_builder::error::Error<F>::raw
                                           (9,
                                            "the following required argument was not provided: init_cash_values_cny"
                                            ,0x46);
                        param_1[1] = lVar36;
                        *param_1 = -0x8000000000000000;
                        if (lVar24 != 0) {
                          (*(code *)PTR___rust_dealloc_002b62f0)(lVar29,lVar24,1);
                        }
                      }
                      else {
                        lVar30 = CONCAT44(uStack_ec,uStack_f0);
                        local_80 = CONCAT44(uStack_e4,local_e8);
                    /* try { // try from 00179438 to 0017949b has its CatchHandler @ 0017a9c3 */
                        clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
                                  (&local_130,param_2,"phase_high_multipliers",0x16);
                        clap_builder::parser::error::MatchesError::unwrap
                                  (&local_f8,"phase_high_multipliers",0x16,&local_130);
                        lVar26 = CONCAT44(uStack_f4,local_f8);
                        if (lVar26 == -0x8000000000000000) {
                          lVar36 = clap_builder::error::Error<F>::raw
                                             (9,
                                              "the following required argument was not provided: phase_high_multipliers"
                                              ,0x48);
                          param_1[1] = lVar36;
                          *param_1 = -0x8000000000000000;
                          if (lVar25 != 0) {
                            (*(code *)PTR___rust_dealloc_002b62f0)(lVar30,lVar25,1);
                          }
                        }
                        else {
                          lVar31 = CONCAT44(uStack_ec,uStack_f0);
                          local_88 = CONCAT44(uStack_e4,local_e8);
                    /* try { // try from 00179533 to 00179570 has its CatchHandler @ 0017a985 */
                          clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
                                    (&local_130,param_2,&DAT_00129808,0x20);
                          uVar37 = clap_builder::parser::error::MatchesError::unwrap
                                             (&DAT_00129808,0x20,&local_130);
                          local_90 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
                          if ((uVar37 & 1) == 0) {
                    /* try { // try from 00179a6f to 00179a84 has its CatchHandler @ 0017a985 */
                            lVar36 = clap_builder::error::Error<F>::raw
                                               (9,
                                                "the following required argument was not provided: phase_default_reference_notional"
                                                ,0x52);
                          }
                          else {
                    /* try { // try from 00179579 to 001795b6 has its CatchHandler @ 0017a971 */
                            clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
                                      (&local_130,param_2,"phase_mid_jump_reject_rate",0x1a);
                            uVar37 = clap_builder::parser::error::MatchesError::unwrap
                                               ("phase_mid_jump_reject_rate",0x1a,&local_130);
                            local_98 = CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00);
                            if ((uVar37 & 1) != 0) {
                    /* try { // try from 001795bf to 001795fc has its CatchHandler @ 0017a95d */
                              clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_one
                                        (&local_130,param_2,"phase_max_spread_bp",0x13);
                              uVar37 = clap_builder::parser::error::MatchesError::unwrap
                                                 ("phase_max_spread_bp",0x13,&local_130);
                              local_a0 = CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01);
                              if ((uVar37 & 1) == 0) {
                    /* try { // try from 00179ca8 to 00179cbd has its CatchHandler @ 0017a95d */
                                lVar36 = clap_builder::error::Error<F>::raw
                                                   (9,
                                                  "the following required argument was not provided: phase_max_spread_bp"
                                                  ,0x45);
                                param_1[1] = lVar36;
                                *param_1 = -0x8000000000000000;
                                if (lVar26 != 0) {
                                  (*(code *)PTR___rust_dealloc_002b62f0)(lVar31,lVar26,1);
                                }
                                if (lVar25 != 0) {
                                  (*(code *)PTR___rust_dealloc_002b62f0)(lVar30,lVar25,1);
                                }
                                if (lVar24 != 0) {
                                  (*(code *)PTR___rust_dealloc_002b62f0)(lVar29,lVar24,1);
                                }
                                if (lVar23 != 0) {
                                  (*(code *)PTR___rust_dealloc_002b62f0)(lVar28,lVar23,1);
                                }
                                if (lVar11 != 0) {
                                  (*(code *)PTR___rust_dealloc_002b62f0)(lVar21,lVar11,1);
                                }
                                if (lVar10 != 0) {
                                  (*(code *)PTR___rust_dealloc_002b62f0)(lVar20,lVar10,1);
                                }
                                if (lVar9 != 0) {
                                  (*(code *)PTR___rust_dealloc_002b62f0)(lVar19,lVar9,1);
                                }
                                if (lVar8 != 0) {
                                  (*(code *)PTR___rust_dealloc_002b62f0)(lVar18,lVar8,1);
                                }
                                if (lVar7 != 0) {
                                  (*(code *)PTR___rust_dealloc_002b62f0)(lVar17,lVar7,1);
                                }
                                if (lVar6 != 0) {
                                  (*(code *)PTR___rust_dealloc_002b62f0)(lVar16,lVar6,1);
                                }
                                if ((uVar5 & 0x7fffffffffffffff) != 0) {
                                  (*(code *)PTR___rust_dealloc_002b62f0)(lVar15,uVar5,1);
                                }
                                if ((uVar4 & 0x7fffffffffffffff) != 0) {
                                  (*(code *)PTR___rust_dealloc_002b62f0)(lVar14,uVar4,1);
                                }
                              }
                              else {
                    /* try { // try from 00179605 to 00179670 has its CatchHandler @ 0017a949 */
                                clap_builder::parser::matches::arg_matches::ArgMatches::
                                try_remove_one(&local_130,param_2,"output",6);
                                clap_builder::parser::error::MatchesError::unwrap
                                          (&local_f8,"output",6,&local_130);
                                lVar27 = CONCAT44(uStack_f4,local_f8);
                                if (lVar27 == -0x8000000000000000) {
                                  lVar36 = clap_builder::error::Error<F>::raw
                                                     (9,
                                                  "the following required argument was not provided: output"
                                                  ,0x38);
                                  param_1[1] = lVar36;
                                  *param_1 = -0x8000000000000000;
                                }
                                else {
                                  local_100 = CONCAT44(uStack_ec,uStack_f0);
                                  local_a8 = CONCAT44(uStack_e4,local_e8);
                    /* try { // try from 00179f1e to 00179f5a has its CatchHandler @ 0017a831 */
                                  clap_builder::parser::matches::arg_matches::ArgMatches::
                                  try_remove_one(&local_130,param_2,&DAT_0012a50c,4);
                                  auVar38 = clap_builder::parser::error::MatchesError::unwrap
                                                      (&DAT_0012a50c,4,&local_130);
                                  local_b0 = auVar38._8_8_;
                                  if ((auVar38 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                    /* try { // try from 0017a0ed to 0017a102 has its CatchHandler @ 0017a831 */
                                    lVar36 = clap_builder::error::Error<F>::raw
                                                       (9,
                                                  "the following required argument was not provided: jobs"
                                                  ,0x36);
                                  }
                                  else {
                    /* try { // try from 00179f63 to 00179fc2 has its CatchHandler @ 0017a82f */
                                    clap_builder::parser::matches::arg_matches::ArgMatches::
                                    try_remove_one(&local_130,param_2,"resume",6);
                                    cVar32 = clap_builder::parser::error::MatchesError::unwrap
                                                       ("resume",6,&local_130);
                                    if (cVar32 == '\x02') {
                                      lVar36 = clap_builder::error::Error<F>::raw
                                                         (9,
                                                  "the following required argument was not provided: resume"
                                                  ,0x38);
                                    }
                                    else {
                    /* try { // try from 0017a401 to 0017a45c has its CatchHandler @ 0017a82d */
                                      clap_builder::parser::matches::arg_matches::ArgMatches::
                                      try_remove_one(&local_130,param_2,"dry_run",7);
                                      cVar33 = clap_builder::parser::error::MatchesError::unwrap
                                                         ("dry_run",7,&local_130);
                                      if (cVar33 == '\x02') {
                                        lVar36 = clap_builder::error::Error<F>::raw
                                                           (9,
                                                  "the following required argument was not provided: dry_run"
                                                  ,0x39);
                                      }
                                      else {
                    /* try { // try from 0017a462 to 0017a4bd has its CatchHandler @ 0017a82b */
                                        clap_builder::parser::matches::arg_matches::ArgMatches::
                                        try_remove_one(&local_130,param_2,"phase_trace",0xb);
                                        cVar34 = clap_builder::parser::error::MatchesError::unwrap
                                                           ("phase_trace",0xb,&local_130);
                                        if (cVar34 == '\x02') {
                                          lVar36 = clap_builder::error::Error<F>::raw
                                                             (9,
                                                  "the following required argument was not provided: phase_trace"
                                                  ,0x3d);
                                        }
                                        else {
                    /* try { // try from 0017a4c3 to 0017a51e has its CatchHandler @ 0017a829 */
                                          clap_builder::parser::matches::arg_matches::ArgMatches::
                                          try_remove_one(&local_130,param_2,&DAT_00129c08,8);
                                          cVar35 = clap_builder::parser::error::MatchesError::unwrap
                                                             (&DAT_00129c08,8,&local_130);
                                          if (cVar35 != '\x02') {
                    /* try { // try from 0017a524 to 0017a560 has its CatchHandler @ 0017a827 */
                                            clap_builder::parser::matches::arg_matches::ArgMatches::
                                            try_remove_one(&local_130,param_2,&DAT_00129e70,0x10);
                                            clap_builder::parser::error::MatchesError::unwrap
                                                      (&local_f8,&DAT_00129e70,0x10,&local_130);
                                            param_1[0x2f] = CONCAT44(uStack_e4,local_e8);
                                            param_1[0x2d] = CONCAT44(uStack_f4,local_f8);
                                            param_1[0x2e] = CONCAT44(uStack_ec,uStack_f0);
                                            *param_1 = lVar6;
                                            param_1[1] = lVar16;
                                            param_1[2] = local_48;
                                            param_1[3] = lVar7;
                                            param_1[4] = lVar17;
                                            param_1[5] = local_50;
                                            param_1[6] = lVar8;
                                            param_1[7] = lVar18;
                                            param_1[8] = local_58;
                                            param_1[9] = lVar9;
                                            param_1[10] = lVar19;
                                            param_1[0xb] = local_60;
                                            param_1[0xc] = lVar10;
                                            param_1[0xd] = lVar20;
                                            param_1[0xe] = local_68;
                                            param_1[0xf] = lVar11;
                                            param_1[0x10] = lVar21;
                                            param_1[0x11] = CONCAT44(uStack_14c,uStack_150);
                                            param_1[0x12] = lVar23;
                                            param_1[0x13] = lVar28;
                                            param_1[0x14] = local_70;
                                            param_1[0x15] = lVar24;
                                            param_1[0x16] = lVar29;
                                            param_1[0x17] = local_78;
                                            param_1[0x18] = lVar25;
                                            param_1[0x19] = lVar30;
                                            param_1[0x1a] = local_80;
                                            param_1[0x1b] = lVar26;
                                            param_1[0x1c] = lVar31;
                                            param_1[0x1d] = local_88;
                                            param_1[0x1e] = lVar27;
                                            param_1[0x1f] = local_100;
                                            param_1[0x20] = local_a8;
                                            param_1[0x21] = uVar2;
                                            param_1[0x22] = lVar12;
                                            param_1[0x23] = lVar36;
                                            param_1[0x24] = uVar3;
                                            param_1[0x25] = lVar13;
                                            param_1[0x26] = local_38;
                                            param_1[0x27] = uVar4;
                                            param_1[0x28] = lVar14;
                                            param_1[0x29] = local_40;
                                            param_1[0x2a] = uVar5;
                                            param_1[0x2b] = lVar15;
                                            param_1[0x2c] = lVar22;
                                            param_1[0x30] = local_90;
                                            param_1[0x31] = local_98;
                                            param_1[0x32] = local_a0;
                                            param_1[0x33] = local_b0;
                                            *(char *)(param_1 + 0x34) = cVar32;
                                            *(char *)((long)param_1 + 0x1a1) = cVar33;
                                            *(char *)((long)param_1 + 0x1a2) = cVar34;
                                            *(char *)((long)param_1 + 0x1a3) = cVar35;
                                            return;
                                          }
                                          lVar36 = clap_builder::error::Error<F>::raw
                                                             (9,
                                                  "the following required argument was not provided: use_hdfs"
                                                  ,0x3a);
                                        }
                                      }
                                    }
                                  }
                                  param_1[1] = lVar36;
                                  *param_1 = -0x8000000000000000;
                                  if (lVar27 != 0) {
                                    (*(code *)PTR___rust_dealloc_002b62f0)(local_100,lVar27,1);
                                  }
                                }
                                if (lVar26 != 0) {
                                  (*(code *)PTR___rust_dealloc_002b62f0)(lVar31,lVar26,1);
                                }
                                if (lVar25 != 0) {
                                  (*(code *)PTR___rust_dealloc_002b62f0)(lVar30,lVar25,1);
                                }
                                if (lVar24 != 0) {
                                  (*(code *)PTR___rust_dealloc_002b62f0)(lVar29,lVar24,1);
                                }
                                if (lVar23 != 0) {
                                  (*(code *)PTR___rust_dealloc_002b62f0)(lVar28,lVar23,1);
                                }
                                if (lVar11 != 0) {
                                  (*(code *)PTR___rust_dealloc_002b62f0)(lVar21,lVar11,1);
                                }
                                if (lVar10 != 0) {
                                  (*(code *)PTR___rust_dealloc_002b62f0)(lVar20,lVar10,1);
                                }
                                if (lVar9 != 0) {
                                  (*(code *)PTR___rust_dealloc_002b62f0)(lVar19,lVar9,1);
                                }
                                if (lVar8 != 0) {
                                  (*(code *)PTR___rust_dealloc_002b62f0)(lVar18,lVar8,1);
                                }
                                if (lVar7 != 0) {
                                  (*(code *)PTR___rust_dealloc_002b62f0)(lVar17,lVar7,1);
                                }
                                if (lVar6 != 0) {
                                  (*(code *)PTR___rust_dealloc_002b62f0)(lVar16,lVar6,1);
                                }
                                if ((uVar5 & 0x7fffffffffffffff) != 0) {
                                  (*(code *)PTR___rust_dealloc_002b62f0)(lVar15,uVar5,1);
                                }
                                if ((uVar4 & 0x7fffffffffffffff) != 0) {
                                  (*(code *)PTR___rust_dealloc_002b62f0)(lVar14,uVar4,1);
                                }
                              }
                              if ((uVar3 & 0x7fffffffffffffff) != 0) {
                                (*(code *)PTR___rust_dealloc_002b62f0)(lVar13,uVar3,1);
                              }
                              goto joined_r0x00178eb2;
                            }
                    /* try { // try from 00179b55 to 00179b6a has its CatchHandler @ 0017a971 */
                            lVar36 = clap_builder::error::Error<F>::raw
                                               (9,
                                                "the following required argument was not provided: phase_mid_jump_reject_rate"
                                                ,0x4c);
                          }
                          param_1[1] = lVar36;
                          *param_1 = -0x8000000000000000;
                          if (lVar26 != 0) {
                            (*(code *)PTR___rust_dealloc_002b62f0)(lVar31,lVar26,1);
                          }
                          if (lVar25 != 0) {
                            (*(code *)PTR___rust_dealloc_002b62f0)(lVar30,lVar25,1);
                          }
                        }
                        if (lVar24 != 0) {
                          (*(code *)PTR___rust_dealloc_002b62f0)(lVar29,lVar24,1);
                        }
                      }
                      if (lVar23 != 0) {
                        (*(code *)PTR___rust_dealloc_002b62f0)(lVar28,lVar23,1);
                      }
                    }
                    if (lVar11 != 0) {
                      (*(code *)PTR___rust_dealloc_002b62f0)(lVar21,lVar11,1);
                    }
                  }
                  if (lVar10 != 0) {
                    (*(code *)PTR___rust_dealloc_002b62f0)(lVar20,lVar10,1);
                  }
                }
                if (lVar9 != 0) {
                  (*(code *)PTR___rust_dealloc_002b62f0)(lVar19,lVar9,1);
                }
              }
              if (lVar8 != 0) {
                (*(code *)PTR___rust_dealloc_002b62f0)(lVar18,lVar8,1);
              }
            }
            if (lVar7 != 0) {
              (*(code *)PTR___rust_dealloc_002b62f0)(lVar17,lVar7,1);
            }
          }
          if (lVar6 != 0) {
            (*(code *)PTR___rust_dealloc_002b62f0)(lVar16,lVar6,1);
          }
        }
        if ((uVar5 & 0x7fffffffffffffff) != 0) {
          (*(code *)PTR___rust_dealloc_002b62f0)(lVar15,uVar5,1);
        }
        if ((uVar4 & 0x7fffffffffffffff) != 0) {
          (*(code *)PTR___rust_dealloc_002b62f0)(lVar14,uVar4,1);
        }
        if ((uVar3 & 0x7fffffffffffffff) != 0) {
          (*(code *)PTR___rust_dealloc_002b62f0)(lVar13,uVar3,1);
        }
joined_r0x00178eb2:
        if ((uVar2 & 0x7fffffffffffffff) == 0) {
          return;
        }
        (*(code *)PTR___rust_dealloc_002b62f0)(lVar12,uVar2,1);
        return;
      }
      local_d8 = local_148;
      local_e8 = local_158;
      uStack_e4 = uStack_154;
      uStack_e0 = uStack_150;
      uStack_dc = uStack_14c;
      local_f8 = local_168;
      uStack_f4 = uStack_164;
      uStack_f0 = uStack_160;
      uStack_ec = uStack_15c;
      local_d0 = &local_140;
      local_c8 = _<&T_as_core::fmt::Display>::fmt;
      local_c0 = &local_f8;
      local_b8 = PTR_fmt_002b64f0;
      local_130 = anon_cba334083caa6ccf313e21528b0a449a_2_llvm_8800261252037858348;
      local_128 = 2;
      local_110 = 0;
      local_120 = &local_d0;
      local_118 = 2;
                    /* try { // try from 001798bf to 001798d3 has its CatchHandler @ 0017add2 */
      (*(code *)PTR_panic_fmt_002b64f8)
                (&local_130,anon_cba334083caa6ccf313e21528b0a449a_4_llvm_8800261252037858348);
      goto LAB_0017a3ff;
    }
  }
  else {
    local_d8 = local_148;
    local_e8 = local_158;
    uStack_e4 = uStack_154;
    uStack_e0 = uStack_150;
    uStack_dc = uStack_14c;
    local_f8 = local_168;
    uStack_f4 = uStack_164;
    uStack_f0 = uStack_160;
    uStack_ec = uStack_15c;
    local_d0 = &local_140;
    local_c8 = _<&T_as_core::fmt::Display>::fmt;
    local_c0 = &local_f8;
    local_b8 = PTR_fmt_002b64f0;
    local_130 = anon_cba334083caa6ccf313e21528b0a449a_2_llvm_8800261252037858348;
    local_128 = 2;
    local_110 = 0;
    local_120 = &local_d0;
    local_118 = 2;
    (*(code *)PTR_panic_fmt_002b64f8)
              (&local_130,anon_cba334083caa6ccf313e21528b0a449a_4_llvm_8800261252037858348);
  }
  local_d8 = local_148;
  local_e8 = local_158;
  uStack_e4 = uStack_154;
  uStack_e0 = uStack_150;
  uStack_dc = uStack_14c;
  local_f8 = local_168;
  uStack_f4 = uStack_164;
  uStack_f0 = uStack_160;
  uStack_ec = uStack_15c;
  local_d0 = &local_140;
  local_c8 = _<&T_as_core::fmt::Display>::fmt;
  local_c0 = &local_f8;
  local_b8 = PTR_fmt_002b64f0;
  local_130 = anon_cba334083caa6ccf313e21528b0a449a_2_llvm_8800261252037858348;
  local_128 = 2;
  local_110 = 0;
  local_120 = &local_d0;
  local_118 = 2;
                    /* try { // try from 001797f4 to 00179808 has its CatchHandler @ 0017adf7 */
  (*(code *)PTR_panic_fmt_002b64f8)
            (&local_130,anon_cba334083caa6ccf313e21528b0a449a_4_llvm_8800261252037858348);
LAB_0017a3ff:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


