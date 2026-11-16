// ELF address 0x000000000006fca0; run_takermaker::build_tag

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* run_takermaker::build_tag */

void __rustcall
run_takermaker::build_tag
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,long *param_4,long param_5,
          double *param_6,ulong param_7,undefined8 param_8,undefined8 param_9)

{
  double dVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong unaff_R14;
  undefined4 uVar6;
  double dVar7;
  double dVar8;
  undefined4 local_578;
  undefined4 uStack_574;
  undefined4 uStack_570;
  undefined4 uStack_56c;
  long local_568;
  long local_558;
  undefined8 local_550;
  ulong local_548;
  undefined **local_540;
  code *local_538;
  double local_528;
  undefined *local_520;
  undefined8 local_518;
  undefined ***local_510;
  undefined8 local_508;
  undefined8 local_500;
  undefined8 *local_4f0;
  undefined8 local_4e8;
  long *local_4d8;
  long local_4d0;
  double local_4c8;
  double local_4c0;
  double local_4b8;
  double local_4b0;
  double local_4a8;
  double local_4a0;
  double local_498;
  double local_490;
  double local_488;
  double local_480;
  double local_478;
  double local_470;
  double local_468;
  double local_460;
  undefined8 local_458;
  double local_450;
  double local_448;
  double local_440;
  double local_438;
  double local_430;
  undefined8 *local_428;
  double local_420;
  undefined8 local_418;
  long local_410;
  long local_408;
  long local_400;
  long local_3f8;
  long local_3f0;
  long local_3e8;
  long local_3e0;
  long local_3d8;
  undefined8 local_3d0;
  long local_3c0;
  undefined8 local_3b8;
  long local_3a8;
  undefined8 local_3a0;
  long local_390;
  undefined8 local_388;
  long local_378;
  long local_370;
  undefined8 local_368;
  long local_358;
  long local_350;
  undefined8 local_348;
  long local_338;
  undefined8 local_330;
  long local_320;
  long local_318;
  undefined8 local_310;
  long local_300;
  undefined8 local_2f8;
  long local_2e8;
  undefined8 local_2e0;
  long local_2d0;
  undefined8 local_2c8;
  long local_2b8;
  undefined8 local_2b0;
  long local_2a0;
  undefined8 local_298;
  long local_288;
  undefined8 local_280;
  undefined8 local_270;
  undefined8 local_268;
  undefined *local_260;
  undefined8 local_258;
  undefined8 *local_250;
  undefined8 local_248;
  long **local_240;
  code *local_238;
  undefined8 **local_230;
  code *local_228;
  undefined8 **local_220;
  code *local_218;
  long *local_210;
  code *local_208;
  long *local_200;
  undefined *local_1f8;
  long *local_1f0;
  undefined *local_1e8;
  long *local_1e0;
  undefined *local_1d8;
  long *local_1d0;
  undefined *local_1c8;
  long *local_1c0;
  code *local_1b8;
  long *local_1b0;
  undefined *local_1a8;
  long *local_1a0;
  code *local_198;
  long *local_190;
  code *local_188;
  long *local_180;
  code *local_178;
  long *local_170;
  code *local_168;
  long *local_160;
  undefined *local_158;
  long *local_150;
  code *local_148;
  long *local_140;
  undefined *local_138;
  undefined8 *local_130;
  code *local_128;
  long *local_120;
  code *local_118;
  long *local_110;
  code *local_108;
  long *local_100;
  undefined *local_f8;
  long *local_f0;
  code *local_e8;
  long *local_e0;
  code *local_d8;
  long *local_d0;
  code *local_c8;
  long *local_c0;
  code *local_b8;
  long *local_b0;
  code *local_a8;
  long *local_a0;
  code *local_98;
  long *local_90;
  code *local_88;
  undefined8 **local_80;
  code *local_78;
  long *local_70;
  code *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  long local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  long local_38;
  
  puVar3 = PTR_fmt_num_002ad120;
  local_268 = param_9;
  local_4d8 = param_4;
  local_4d0 = param_5;
  local_428 = param_3;
  local_418 = param_2;
  local_270 = param_8;
  if (param_7 == 0) {
    (*(code *)PTR_panic_bounds_check_002ad050)
              (0,0,&PTR_anon_e72f4f423d7fecd9957c9f6ea32f7a74_12_llvm_1849792018781213756_002a04b0);
LAB_00170ba0:
    (*(code *)PTR_panic_bounds_check_002ad050)
              (1,1,&PTR_anon_e72f4f423d7fecd9957c9f6ea32f7a74_12_llvm_1849792018781213756_002a04c8);
LAB_00170bb7:
    (*(code *)PTR_panic_bounds_check_002ad050)
              (3,unaff_R14,
               &PTR_anon_e72f4f423d7fecd9957c9f6ea32f7a74_12_llvm_1849792018781213756_002a04e0);
LAB_00170bcc:
    (*(code *)PTR_panic_bounds_check_002ad050)
              (4,4,&PTR_anon_e72f4f423d7fecd9957c9f6ea32f7a74_12_llvm_1849792018781213756_002a04f8);
LAB_00170be3:
    (*(code *)PTR_panic_bounds_check_002ad050)
              (6,unaff_R14,
               &PTR_anon_e72f4f423d7fecd9957c9f6ea32f7a74_12_llvm_1849792018781213756_002a0510);
LAB_00170bf8:
    (*(code *)PTR_panic_bounds_check_002ad050)
              (7,7,&PTR_anon_e72f4f423d7fecd9957c9f6ea32f7a74_12_llvm_1849792018781213756_002a0528);
LAB_00170c0f:
    (*(code *)PTR_panic_bounds_check_002ad050)
              (8,8,&PTR_anon_e72f4f423d7fecd9957c9f6ea32f7a74_12_llvm_1849792018781213756_002a0540);
LAB_00170c26:
    (*(code *)PTR_panic_bounds_check_002ad050)
              (9,9,&PTR_anon_e72f4f423d7fecd9957c9f6ea32f7a74_12_llvm_1849792018781213756_002a0558);
LAB_00170c3d:
    (*(code *)PTR_panic_bounds_check_002ad050)
              (10,10,&PTR_anon_e72f4f423d7fecd9957c9f6ea32f7a74_12_llvm_1849792018781213756_002a0570
              );
LAB_00170c54:
    (*(code *)PTR_panic_bounds_check_002ad050)
              (0xb,0xb,&
                       PTR_anon_e72f4f423d7fecd9957c9f6ea32f7a74_12_llvm_1849792018781213756_002a0588
              );
LAB_00170c6b:
    (*(code *)PTR_panic_bounds_check_002ad050)
              (0xc,0xc,&
                       PTR_anon_e72f4f423d7fecd9957c9f6ea32f7a74_12_llvm_1849792018781213756_002a05a0
              );
LAB_00170c82:
    (*(code *)PTR_panic_bounds_check_002ad050)
              (0xd,0xd,&
                       PTR_anon_e72f4f423d7fecd9957c9f6ea32f7a74_12_llvm_1849792018781213756_002a05b8
              );
LAB_00170c99:
    (*(code *)PTR_panic_bounds_check_002ad050)
              (0xe,0xe,&
                       PTR_anon_e72f4f423d7fecd9957c9f6ea32f7a74_12_llvm_1849792018781213756_002a05d0
              );
LAB_00170cb0:
    (*(code *)PTR_panic_bounds_check_002ad050)
              (0xf,0xf,&
                       PTR_anon_e72f4f423d7fecd9957c9f6ea32f7a74_12_llvm_1849792018781213756_002a05e8
              );
LAB_00170cc7:
    uVar6 = (*(code *)PTR_panic_bounds_check_002ad050)
                      (0x10,0x10,
                       &
                       PTR_anon_e72f4f423d7fecd9957c9f6ea32f7a74_12_llvm_1849792018781213756_002a0600
                      );
LAB_00170cde:
    (*(code *)PTR_panic_bounds_check_002ad050)
              (uVar6,0x11,0x11,
               &PTR_anon_e72f4f423d7fecd9957c9f6ea32f7a74_12_llvm_1849792018781213756_002a0618);
LAB_00170cf5:
    (*(code *)PTR_panic_bounds_check_002ad050)
              (0x13,unaff_R14,
               &PTR_anon_e72f4f423d7fecd9957c9f6ea32f7a74_12_llvm_1849792018781213756_002a0630);
LAB_00170d0a:
    (*(code *)PTR_panic_bounds_check_002ad050)
              (0x14,0x14,
               &PTR_anon_e72f4f423d7fecd9957c9f6ea32f7a74_12_llvm_1849792018781213756_002a0648);
LAB_00170d21:
    (*(code *)PTR_panic_bounds_check_002ad050)
              (0x16,unaff_R14,
               &PTR_anon_e72f4f423d7fecd9957c9f6ea32f7a74_12_llvm_1849792018781213756_002a0660);
LAB_00170d36:
    (*(code *)PTR_panic_bounds_check_002ad050)
              (0x17,0x17,
               &PTR_anon_e72f4f423d7fecd9957c9f6ea32f7a74_12_llvm_1849792018781213756_002a0678);
LAB_00170d4d:
    (*(code *)PTR_panic_bounds_check_002ad050)
              (0x18,0x18,
               &PTR_anon_e72f4f423d7fecd9957c9f6ea32f7a74_12_llvm_1849792018781213756_002a0690);
LAB_00170d64:
    (*(code *)PTR_panic_bounds_check_002ad050)
              (0x19,0x19,
               &PTR_anon_e72f4f423d7fecd9957c9f6ea32f7a74_12_llvm_1849792018781213756_002a06a8);
LAB_00170d7b:
    (*(code *)PTR_panic_bounds_check_002ad050)
              (0x1a,0x1a,
               &PTR_anon_e72f4f423d7fecd9957c9f6ea32f7a74_12_llvm_1849792018781213756_002a06c0);
LAB_00170d92:
    (*(code *)PTR_panic_bounds_check_002ad050)
              (0x1b,0x1b,
               &PTR_anon_e72f4f423d7fecd9957c9f6ea32f7a74_12_llvm_1849792018781213756_002a06d8);
LAB_00170da9:
    (*(code *)PTR_panic_bounds_check_002ad050)
              (0x1c,0x1c,
               &PTR_anon_e72f4f423d7fecd9957c9f6ea32f7a74_12_llvm_1849792018781213756_002a06f0);
LAB_00170dc0:
    (*(code *)PTR_panic_bounds_check_002ad050)
              (0x1d,0x1d,
               &PTR_anon_e72f4f423d7fecd9957c9f6ea32f7a74_12_llvm_1849792018781213756_002a0708);
LAB_00170dd7:
    (*(code *)PTR_panic_bounds_check_002ad050)
              (0x1f,unaff_R14,
               &PTR_anon_e72f4f423d7fecd9957c9f6ea32f7a74_12_llvm_1849792018781213756_002a0720);
LAB_00170dec:
    (*(code *)PTR_panic_bounds_check_002ad050)
              (0x20,0x20,
               &PTR_anon_e72f4f423d7fecd9957c9f6ea32f7a74_12_llvm_1849792018781213756_002a0738);
  }
  else {
    unaff_R14 = param_7;
    if (param_7 == 1) goto LAB_00170ba0;
    if (param_7 < 4) goto LAB_00170bb7;
    if (param_7 == 4) goto LAB_00170bcc;
    if (param_7 < 7) goto LAB_00170be3;
    if (param_7 == 7) goto LAB_00170bf8;
    if (param_7 < 9) goto LAB_00170c0f;
    if (param_7 == 9) goto LAB_00170c26;
    if (param_7 < 0xb) goto LAB_00170c3d;
    if (param_7 == 0xb) goto LAB_00170c54;
    if (param_7 < 0xd) goto LAB_00170c6b;
    if (param_7 == 0xd) goto LAB_00170c82;
    if (param_7 < 0xf) goto LAB_00170c99;
    if (param_7 == 0xf) goto LAB_00170cb0;
    if (param_7 < 0x11) goto LAB_00170cc7;
    dVar7 = param_6[1];
    dVar1 = param_6[3];
    uVar6 = SUB84(param_6[7],0);
    local_528 = param_6[0xb];
    local_420 = param_6[0xc];
    local_4b8 = param_6[0xd];
    dVar8 = param_6[0x10];
    lVar5 = (long)dVar8;
    if (DAT_00115d58 < dVar8) {
      lVar5 = 0x7fffffffffffffff;
    }
    local_410 = 0;
    if (!NAN(dVar8)) {
      local_410 = lVar5;
    }
    if (param_7 == 0x11) goto LAB_00170cde;
    if (param_7 < 0x14) goto LAB_00170cf5;
    if (param_7 == 0x14) goto LAB_00170d0a;
    if (param_7 < 0x17) goto LAB_00170d21;
    if (param_7 == 0x17) goto LAB_00170d36;
    if (param_7 < 0x19) goto LAB_00170d4d;
    if (param_7 == 0x19) goto LAB_00170d64;
    if (param_7 < 0x1b) goto LAB_00170d7b;
    if (param_7 == 0x1b) goto LAB_00170d92;
    if (param_7 < 0x1d) goto LAB_00170da9;
    if (param_7 == 0x1d) goto LAB_00170dc0;
    if (param_7 < 0x20) goto LAB_00170dd7;
    if (param_7 == 0x20) goto LAB_00170dec;
    local_4c8 = param_6[0xe];
    local_4c0 = param_6[0xf];
    local_458 = param_1;
    local_440 = param_6[10];
    local_438 = param_6[8];
    local_430 = param_6[9];
    if (0x21 < param_7) {
      dVar8 = *param_6 / DAT_00115f90;
      local_408 = (long)dVar8;
      local_260 = &DAT_0011ac47;
      if (DAT_00115d58 < dVar8) {
        local_408 = 0x7fffffffffffffff;
      }
      local_250 = (undefined8 *)&DAT_0011ac4e;
      lVar5 = 0;
      local_450 = param_6[0x11];
      if (NAN(dVar8)) {
        local_408 = lVar5;
      }
      local_400 = (long)dVar7;
      local_448 = param_6[0x13];
      if (DAT_00115d58 < dVar7) {
        local_400 = 0x7fffffffffffffff;
      }
      local_468 = param_6[0x14];
      local_460 = param_6[0x16];
      local_478 = param_6[0x18];
      if (NAN(dVar7)) {
        local_400 = lVar5;
      }
      local_3f8 = (long)dVar1;
      local_470 = param_6[0x19];
      if (DAT_00115d58 < dVar1) {
        local_3f8 = 0x7fffffffffffffff;
      }
      local_480 = param_6[0x1a];
      local_488 = param_6[0x1b];
      if (NAN(dVar1)) {
        local_3f8 = lVar5;
      }
      dVar7 = param_6[4] / DAT_00115f90;
      local_3f0 = (long)dVar7;
      local_490 = param_6[0x1c];
      if (DAT_00115d58 < dVar7) {
        local_3f0 = 0x7fffffffffffffff;
      }
      local_4b0 = param_6[0x1d];
      local_498 = param_6[0x1f];
      if (NAN(dVar7)) {
        local_3f0 = lVar5;
      }
      dVar7 = param_6[6] / DAT_00115f90;
      local_3e8 = (long)dVar7;
      local_4a0 = param_6[0x20];
      if (DAT_00115d58 < dVar7) {
        local_3e8 = 0x7fffffffffffffff;
      }
      local_4a8 = param_6[0x21];
      local_258 = 7;
      local_248 = 3;
      if (NAN(dVar7)) {
        local_3e8 = lVar5;
      }
      (*(code *)PTR_fmt_num_002ad120)(&local_2a0);
      dVar7 = local_438 / DAT_00115f90;
      local_3e0 = (long)dVar7;
      if (DAT_00115d58 < dVar7) {
        local_3e0 = 0x7fffffffffffffff;
      }
      if (NAN(dVar7)) {
        local_3e0 = lVar5;
      }
                    /* try { // try from 001700fc to 0017010f has its CatchHandler @ 00171159 */
      (*(code *)puVar3)(SUB84(local_430,0),&local_3d8);
                    /* try { // try from 00170110 to 00170126 has its CatchHandler @ 00171140 */
      (*(code *)PTR_fmt_num_002ad120)(SUB84(local_440,0),&local_3c0);
                    /* try { // try from 00170127 to 0017013a has its CatchHandler @ 00171138 */
      (*(code *)PTR_fmt_num_002ad120)(SUB84(local_528,0),&local_3a8);
      dVar7 = (double)(*(code *)PTR_round_002ad128)(SUB84((local_528 + local_420) * _s__00115fb0,0))
      ;
                    /* try { // try from 00170160 to 0017016d has its CatchHandler @ 0017111f */
      (*(code *)PTR_fmt_num_002ad120)(SUB84(dVar7 / _s__00115fb0,0),&local_390);
      dVar7 = local_450 * _DAT_00116028;
      lVar5 = (long)dVar7;
      if (DAT_00115d58 < dVar7) {
        lVar5 = 0x7fffffffffffffff;
      }
      local_378 = 0;
      if (!NAN(dVar7)) {
        local_378 = lVar5;
      }
                    /* try { // try from 001701a2 to 001701b8 has its CatchHandler @ 00171117 */
      (*(code *)PTR_fmt_num_002ad120)(SUB84(local_448,0),&local_370);
      dVar7 = local_468 * _DAT_00116028;
      lVar5 = (long)dVar7;
      if (DAT_00115d58 < dVar7) {
        lVar5 = 0x7fffffffffffffff;
      }
      local_358 = 0;
      if (!NAN(dVar7)) {
        local_358 = lVar5;
      }
                    /* try { // try from 001701ed to 00170203 has its CatchHandler @ 001710fe */
      (*(code *)PTR_fmt_num_002ad120)(SUB84(local_460,0),&local_350);
                    /* try { // try from 00170204 to 0017021a has its CatchHandler @ 001710f6 */
      (*(code *)PTR_fmt_num_002ad120)((int)local_458,&local_338);
      lVar5 = (long)local_478;
      if (DAT_00115d58 < local_478) {
        lVar5 = 0x7fffffffffffffff;
      }
      local_320 = 0;
      if (!NAN(local_478)) {
        local_320 = lVar5;
      }
                    /* try { // try from 00170247 to 0017025d has its CatchHandler @ 001710dd */
      (*(code *)PTR_fmt_num_002ad120)(SUB84(local_470,0),&local_318);
                    /* try { // try from 0017025e to 00170274 has its CatchHandler @ 00170faf */
      (*(code *)PTR_fmt_num_002ad120)(SUB84(local_480,0),&local_300);
                    /* try { // try from 00170275 to 0017028b has its CatchHandler @ 00170f8a */
      (*(code *)PTR_fmt_num_002ad120)(SUB84(local_488,0),&local_2e8);
                    /* try { // try from 0017028c to 001702a2 has its CatchHandler @ 00170f65 */
      (*(code *)PTR_fmt_num_002ad120)(SUB84(local_490,0),&local_2d0);
                    /* try { // try from 001702a3 to 001702b9 has its CatchHandler @ 00170f40 */
      (*(code *)PTR_fmt_num_002ad120)(SUB84(local_498,0),&local_2b8);
                    /* try { // try from 001702ba to 001702d3 has its CatchHandler @ 00170f1b */
      (*(code *)PTR_fmt_num_002ad120)(SUB84(local_4a0,0),&local_288);
                    /* try { // try from 001702d4 to 001702ea has its CatchHandler @ 00170ef6 */
      (*(code *)PTR_fmt_num_002ad120)(SUB84(local_4a8,0),&local_4f0);
                    /* try { // try from 001702eb to 001702fe has its CatchHandler @ 00170ed1 */
      (*(code *)PTR_fmt_num_002ad120)(SUB84(local_4b0,0),&local_540);
                    /* try { // try from 001702ff to 00170318 has its CatchHandler @ 00170eb2 */
      (*(code *)PTR_fmt_num_002ad120)((int)local_418,&local_558);
      puVar3 = PTR_fmt_002ad130;
      local_240 = &local_4d8;
      local_238 = _<&T_as_core::fmt::Display>::fmt;
      local_230 = (undefined8 **)&local_260;
      local_228 = _<&T_as_core::fmt::Display>::fmt;
      local_220 = &local_250;
      local_218 = _<&T_as_core::fmt::Display>::fmt;
      local_210 = &local_408;
      local_208 = (code *)PTR_fmt_002ad130;
      local_200 = &local_400;
      local_1f8 = PTR_fmt_002ad130;
      local_1f0 = &local_3f8;
      local_1e8 = PTR_fmt_002ad130;
      local_1e0 = &local_3f0;
      local_1d8 = PTR_fmt_002ad130;
      local_1d0 = &local_3e8;
      local_1c8 = PTR_fmt_002ad130;
      local_1b8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_1b0 = &local_3e0;
      local_1a8 = PTR_fmt_002ad130;
      local_1a0 = &local_3d8;
      local_198 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_190 = &local_3c0;
      local_188 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_180 = &local_3a8;
      local_178 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_170 = &local_390;
      local_168 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_160 = &local_378;
      local_158 = PTR_fmt_002ad130;
      local_150 = &local_370;
      local_148 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_140 = &local_358;
      local_138 = PTR_fmt_002ad130;
      local_130 = &local_270;
      local_128 = _<&T_as_core::fmt::Display>::fmt;
      local_120 = &local_350;
      local_118 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_110 = &local_338;
      local_108 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_100 = &local_320;
      local_f8 = PTR_fmt_002ad130;
      local_f0 = &local_318;
      local_e8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_e0 = &local_300;
      local_d8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_d0 = &local_2e8;
      local_c8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_c0 = &local_2d0;
      local_b8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_b0 = &local_2b8;
      local_a8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_98 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_90 = (long *)&local_4f0;
      local_88 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_80 = &local_540;
      local_78 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_68 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_520 = &DAT_002a0768;
      local_518 = 0x1e;
      local_500 = 0;
      local_510 = (undefined ***)&local_240;
      local_508 = 0x1e;
                    /* try { // try from 00170617 to 00170629 has its CatchHandler @ 00170e93 */
      local_1c0 = &local_2a0;
      local_a0 = &local_288;
      local_70 = &local_558;
      (*(code *)PTR_format_inner_002acfb8)(&local_60,&local_520);
      if (local_558 != 0) {
        (*(code *)PTR___rust_dealloc_002acf38)(local_550,local_558,1);
      }
      if (local_540 != (undefined **)0x0) {
        (*(code *)PTR___rust_dealloc_002acf38)(local_538,local_540,1);
      }
      if ((undefined **)local_4f0 != (undefined **)0x0) {
        (*(code *)PTR___rust_dealloc_002acf38)(local_4e8,local_4f0,1);
      }
      if (local_288 != 0) {
        (*(code *)PTR___rust_dealloc_002acf38)(local_280,local_288,1);
      }
      if (local_2b8 != 0) {
        (*(code *)PTR___rust_dealloc_002acf38)(local_2b0,local_2b8,1);
      }
      if (local_2d0 != 0) {
        (*(code *)PTR___rust_dealloc_002acf38)(local_2c8,local_2d0,1);
      }
      if (local_2e8 != 0) {
        (*(code *)PTR___rust_dealloc_002acf38)(local_2e0,local_2e8,1);
      }
      if (local_300 != 0) {
        (*(code *)PTR___rust_dealloc_002acf38)(local_2f8,local_300,1);
      }
      if (local_318 != 0) {
        (*(code *)PTR___rust_dealloc_002acf38)(local_310,local_318,1);
      }
      if (local_338 != 0) {
        (*(code *)PTR___rust_dealloc_002acf38)(local_330,local_338,1);
      }
      if (local_350 != 0) {
        (*(code *)PTR___rust_dealloc_002acf38)(local_348,local_350,1);
      }
      if (local_370 != 0) {
        (*(code *)PTR___rust_dealloc_002acf38)(local_368,local_370,1);
      }
      if (local_390 != 0) {
        (*(code *)PTR___rust_dealloc_002acf38)(local_388,local_390,1);
      }
      if (local_3a8 != 0) {
        (*(code *)PTR___rust_dealloc_002acf38)(local_3a0,local_3a8,1);
      }
      if (local_3c0 != 0) {
        (*(code *)PTR___rust_dealloc_002acf38)(local_3b8,local_3c0,1);
      }
      if (local_3d8 != 0) {
        (*(code *)PTR___rust_dealloc_002acf38)(local_3d0,local_3d8,1);
      }
      if (local_2a0 != 0) {
        (*(code *)PTR___rust_dealloc_002acf38)(local_298,local_2a0,1);
      }
      puVar4 = PTR_round_002ad128;
      local_578 = local_60;
      uStack_574 = uStack_5c;
      uStack_570 = uStack_58;
      uStack_56c = uStack_54;
      local_568 = local_50;
      if (local_4d0 == 5) {
        if (*(char *)((long)local_4d8 + 4) == '6' && (int)*local_4d8 == 0x2d314d54)
        goto LAB_001708b5;
      }
      else if ((local_4d0 == 0xb) &&
              (*(long *)((long)local_4d8 + 3) == 0x3672656b614d7265 &&
               *local_4d8 == 0x6b614d72656b6154)) {
LAB_001708b5:
        dVar7 = (double)(*(code *)PTR_round_002ad128)(SUB84(local_4b8 / _s__001162b8,0));
        local_4f0 = (undefined8 *)(long)dVar7;
        if (DAT_00115d58 < dVar7) {
          local_4f0 = (undefined **)0x7fffffffffffffff;
        }
        if (NAN(dVar7)) {
          local_4f0 = (undefined **)0x0;
        }
        dVar7 = (double)(*(code *)puVar4)(SUB84(local_4c8 / _s__001162b8,0));
        local_540 = (undefined **)(long)dVar7;
        if (DAT_00115d58 < dVar7) {
          local_540 = (undefined **)0x7fffffffffffffff;
        }
        if (NAN(dVar7)) {
          local_540 = (undefined **)0x0;
        }
                    /* try { // try from 00170935 to 0017094b has its CatchHandler @ 00171161 */
        (*(code *)PTR_fmt_num_002ad120)(SUB84(local_4c0,0),&local_558);
        local_238 = _<alloc::string::String_as_core::fmt::Display>::fmt;
        local_230 = &local_4f0;
        local_228 = (code *)puVar3;
        local_220 = &local_540;
        local_218 = (code *)puVar3;
        local_208 = _<alloc::string::String_as_core::fmt::Display>::fmt;
        local_200 = &local_410;
        local_1f8 = puVar3;
        local_520 = &DAT_002a0948;
        local_518 = 5;
        local_500 = 0;
        local_510 = (undefined ***)&local_240;
        local_508 = 5;
                    /* try { // try from 001709e8 to 001709fa has its CatchHandler @ 00170e55 */
        local_240 = (long **)&local_578;
        local_210 = &local_558;
        (*(code *)PTR_format_inner_002acfb8)(&local_48,&local_520);
        if (local_558 != 0) {
          (*(code *)PTR___rust_dealloc_002acf38)(local_550,local_558,1);
        }
        if (CONCAT44(uStack_574,local_578) != 0) {
          (*(code *)PTR___rust_dealloc_002acf38)
                    (CONCAT44(uStack_56c,uStack_570),CONCAT44(uStack_574,local_578),1);
        }
        local_568 = local_38;
        local_578 = local_48;
        uStack_574 = uStack_44;
        uStack_570 = uStack_40;
        uStack_56c = uStack_3c;
      }
      if (param_7 != 0x22) {
        if (param_6[0x22] < DAT_00115f48) {
                    /* try { // try from 00170a6e to 00170a7b has its CatchHandler @ 00171161 */
          (*(code *)PTR_fmt_num_002ad120)(&local_520);
          local_538 = _<alloc::string::String_as_core::fmt::Display>::fmt;
          local_240 = (long **)&PTR_DAT_002a09b0;
          local_238 = (code *)0x1;
          local_220 = (undefined8 **)0x0;
          local_230 = &local_540;
          local_228 = (code *)0x1;
                    /* try { // try from 00170ac6 to 00170ad8 has its CatchHandler @ 00170e6d */
          local_540 = &local_520;
          (*(code *)PTR_format_inner_002acfb8)(&local_558,&local_240);
          if (local_520 != (undefined *)0x0) {
            (*(code *)PTR___rust_dealloc_002acf38)(local_518,local_520,1);
          }
          if ((ulong)(CONCAT44(uStack_574,local_578) - local_568) < local_548) {
                    /* try { // try from 00170b6f to 00170b87 has its CatchHandler @ 00170e33 */
            alloc::raw_vec::RawVecInner<A>::reserve::do_reserve_and_handle
                      (&local_578,local_568,local_548,1,1);
          }
          lVar5 = local_568;
          (*(code *)PTR_memcpy_002acfa0)
                    (CONCAT44(uStack_56c,uStack_570) + local_568,local_550,local_548);
          local_568 = lVar5 + local_548;
          if (local_558 != 0) {
            (*(code *)PTR___rust_dealloc_002acf38)(local_550,local_558,1);
          }
        }
        local_428[2] = local_568;
        *local_428 = CONCAT44(uStack_574,local_578);
        local_428[1] = CONCAT44(uStack_56c,uStack_570);
        return;
      }
      goto LAB_00170e1a;
    }
  }
  (*(code *)PTR_panic_bounds_check_002ad050)
            (0x21,0x21,
             &PTR_anon_e72f4f423d7fecd9957c9f6ea32f7a74_12_llvm_1849792018781213756_002a0750);
LAB_00170e1a:
                    /* try { // try from 00170e1a to 00170e30 has its CatchHandler @ 00171161 */
  (*(code *)PTR_panic_bounds_check_002ad050)
            (0x22,0x22,
             &PTR_anon_e72f4f423d7fecd9957c9f6ea32f7a74_12_llvm_1849792018781213756_002a0998);
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}


