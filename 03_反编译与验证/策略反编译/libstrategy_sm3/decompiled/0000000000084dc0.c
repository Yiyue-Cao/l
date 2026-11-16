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
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
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


