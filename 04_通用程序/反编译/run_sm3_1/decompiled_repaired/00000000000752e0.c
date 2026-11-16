// ELF address 0x00000000000752e0; run_sm3_1::build_tag

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* run_sm3_1::build_tag */

void __rustcall
run_sm3_1::build_tag(long *param_1,undefined ****param_2,undefined1 param_3,undefined4 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined ****ppppuVar5;
  long lVar6;
  undefined ***pppuVar7;
  long lVar8;
  double dVar9;
  long local_308;
  long lStack_300;
  long local_2f8;
  undefined ***local_2f0;
  code *local_2e8;
  ulong local_2e0;
  undefined ***local_2d8;
  undefined8 local_2d0;
  ulong local_2c8;
  undefined ***local_2c0;
  undefined8 local_2b8;
  ulong local_2b0;
  undefined ***local_2a8;
  code *local_2a0;
  undefined ****local_298;
  code *local_290;
  undefined8 local_288;
  undefined8 local_278;
  undefined8 local_270;
  ulong local_268;
  uint local_260;
  undefined4 uStack_25c;
  undefined8 local_258;
  double local_248;
  long local_240;
  undefined8 local_238;
  ulong local_230;
  undefined ***local_228;
  code *local_220;
  undefined ****local_218;
  code *local_210;
  undefined ****local_208;
  code *local_200;
  undefined ***local_1f8;
  code *local_1f0;
  undefined ***local_1e8;
  code *local_1e0;
  undefined ****local_1d8;
  code *local_1d0;
  undefined ***local_1c8;
  undefined *local_1c0;
  long *local_1b8;
  code *local_1b0;
  long *local_1a8;
  undefined *local_1a0;
  long *local_198;
  code *local_190;
  long *local_188;
  code *local_180;
  undefined8 *local_178;
  code *local_170;
  uint *local_168;
  code *local_160;
  long *local_158;
  undefined *local_150;
  long *local_148;
  undefined *local_140;
  undefined ***local_138;
  code *local_130;
  long *local_128;
  undefined *local_120;
  undefined ***local_118;
  code *local_110;
  undefined ****local_108;
  code *local_100;
  undefined **local_f8;
  undefined ***local_f0;
  undefined8 local_e8;
  undefined **local_d8;
  undefined8 local_d0;
  undefined ***local_c0;
  undefined ***local_b8;
  undefined ***local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  undefined8 local_80;
  long local_70;
  undefined8 local_68;
  undefined **local_58;
  undefined8 local_50;
  long local_48;
  long lStack_40;
  long local_38;
  
  local_f8 = (undefined **)param_2[0x1f];
  if (((double)local_f8 == _s__00117048) && (!NAN((double)local_f8) && !NAN(_s__00117048))) {
    local_f8 = (undefined **)
               (*(code *)PTR_pv1_alpha_002baed0)(*(undefined4 *)(param_2 + 0x15),param_3);
  }
  pppuVar7 = param_2[0x17];
  local_248 = (double)(*(code *)PTR_round_002bb018)
                                (SUB84(((double)param_2[0x18] + (double)pppuVar7) * _s__001172e8,0))
  ;
  puVar1 = PTR_fmt_num_002bb020;
  local_248 = local_248 / _s__001172e8;
  local_58 = (undefined **)&DAT_0011b690;
  if ((char)param_4 != '\0') {
    local_58 = (undefined **)&DAT_0011b790;
  }
  local_50 = 4;
  (*(code *)PTR_fmt_num_002bb020)((int)pppuVar7,&local_f0);
                    /* try { // try from 001753a2 to 001753b4 has its CatchHandler @ 001768dc */
  (*(code *)puVar1)(SUB84(local_248,0),&local_d8);
  dVar9 = (double)param_2[0x1a] * DAT_00117360;
  local_c0 = (undefined ***)(long)dVar9;
  if (DAT_00117070 < dVar9) {
    local_c0 = (undefined ***)0x7fffffffffffffff;
  }
  pppuVar7 = (undefined ***)0x0;
  if (NAN(dVar9)) {
    local_c0 = pppuVar7;
  }
  dVar9 = (double)param_2[0x19] * DAT_00117360;
  local_b8 = (undefined ***)(long)dVar9;
  if (DAT_00117070 < dVar9) {
    local_b8 = (undefined ***)0x7fffffffffffffff;
  }
  if (NAN(dVar9)) {
    local_b8 = pppuVar7;
  }
  dVar9 = DAT_00117360 * (double)param_2[0x1b];
  local_b0 = (undefined ***)(long)dVar9;
  if (DAT_00117070 < dVar9) {
    local_b0 = (undefined ***)0x7fffffffffffffff;
  }
  if (NAN(dVar9)) {
    local_b0 = pppuVar7;
  }
                    /* try { // try from 00175454 to 00175464 has its CatchHandler @ 001768a0 */
  (*(code *)PTR_fmt_num_002bb020)((int)param_2[0x1c],&local_88);
  pppuVar7 = param_2[0x1d];
  lVar6 = (long)(double)pppuVar7;
  if (DAT_00117070 < (double)pppuVar7) {
    lVar6 = 0x7fffffffffffffff;
  }
  local_a8 = 0;
  if (!NAN((double)pppuVar7)) {
    local_a8 = lVar6;
  }
                    /* try { // try from 0017549a to 001754aa has its CatchHandler @ 00176879 */
  (*(code *)PTR_fmt_num_002bb020)((int)param_2[0x20],&local_70);
                    /* try { // try from 001754b4 to 001754c4 has its CatchHandler @ 00176852 */
  (*(code *)PTR_fmt_num_002bb020)((int)param_2[0x21],&local_240);
                    /* try { // try from 001754ce to 001754db has its CatchHandler @ 0017682b */
  (*(code *)PTR_fmt_num_002bb020)((int)param_2[0x1e],&local_260);
                    /* try { // try from 001754dc to 001754fa has its CatchHandler @ 00176804 */
  local_248 = (double)CONCAT44(local_248._4_4_,param_4);
  (*(code *)PTR_fmt_num_002bb020)((int)local_f8,&local_278);
  dVar9 = (double)param_2[0x22] / _DAT_001172b8;
  local_a0 = (long)dVar9;
  if (DAT_00117070 < dVar9) {
    local_a0 = 0x7fffffffffffffff;
  }
  if (NAN(dVar9)) {
    local_a0 = 0;
  }
  dVar9 = (double)param_2[0x23] / _DAT_001172b8;
  local_98 = (long)dVar9;
  if (DAT_00117070 < dVar9) {
    local_98 = 0x7fffffffffffffff;
  }
  if (NAN(dVar9)) {
    local_98 = 0;
  }
                    /* try { // try from 00175574 to 0017557e has its CatchHandler @ 001767dd */
  (*(code *)PTR_fmt_num_002bb020)((int)param_2[0x24],&local_2c0);
  dVar9 = (double)param_2[0x25] / _DAT_001172b8;
  lVar6 = (long)dVar9;
  if (DAT_00117070 < dVar9) {
    lVar6 = 0x7fffffffffffffff;
  }
  local_90 = 0;
  if (!NAN(dVar9)) {
    local_90 = lVar6;
  }
                    /* try { // try from 001755c1 to 001755ce has its CatchHandler @ 001767bc */
  (*(code *)PTR_fmt_num_002bb020)((int)param_2[0x26],&local_2d8);
                    /* try { // try from 001755d8 to 001755e5 has its CatchHandler @ 0017679b */
  (*(code *)PTR_fmt_num_002bb020)((int)param_2[0x27],&local_2f0);
  local_218 = param_2 + 0x16;
  local_228 = &local_58;
  local_220 = _<&T_as_core::fmt::Display>::fmt;
  local_210 = (code *)PTR_fmt_002bb028;
  local_208 = &local_f0;
  local_200 = _<alloc::string::String_as_core::fmt::Display>::fmt;
  local_1f8 = &local_d8;
  local_1f0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
  local_1e8 = (undefined ***)&local_c0;
  local_1e0 = (code *)PTR_fmt_002bb028;
  local_1d8 = &local_b8;
  local_1d0 = (code *)PTR_fmt_002bb028;
  local_1c8 = (undefined ***)&local_b0;
  local_1c0 = PTR_fmt_002bb028;
  local_1b0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
  local_1a8 = &local_a8;
  local_1a0 = PTR_fmt_002bb028;
  local_190 = _<alloc::string::String_as_core::fmt::Display>::fmt;
  local_180 = _<alloc::string::String_as_core::fmt::Display>::fmt;
  local_178 = (undefined8 *)&local_260;
  local_170 = _<alloc::string::String_as_core::fmt::Display>::fmt;
  local_168 = (uint *)&local_278;
  local_160 = _<alloc::string::String_as_core::fmt::Display>::fmt;
  local_158 = &local_a0;
  local_150 = PTR_fmt_002bb028;
  local_148 = &local_98;
  local_140 = PTR_fmt_002bb028;
  local_138 = (undefined ***)&local_2c0;
  local_130 = _<alloc::string::String_as_core::fmt::Display>::fmt;
  local_128 = &local_90;
  local_120 = PTR_fmt_002bb028;
  local_110 = _<alloc::string::String_as_core::fmt::Display>::fmt;
  local_100 = _<alloc::string::String_as_core::fmt::Display>::fmt;
  local_2a8 = (undefined ***)&DAT_002ada70;
  local_2a0 = (code *)0x13;
  local_288 = 0;
  local_298 = &local_228;
  local_290 = (code *)0x13;
                    /* try { // try from 001757d4 to 001757e6 has its CatchHandler @ 0017677a */
  local_1b8 = &local_88;
  local_198 = &local_70;
  local_188 = &local_240;
  local_118 = (undefined ***)&local_2d8;
  local_108 = &local_2f0;
  (*(code *)PTR_format_inner_002bae90)(&local_48,&local_2a8);
  if ((undefined ****)local_2f0 != (undefined ****)0x0) {
    (*(code *)PTR___rust_dealloc_002bae28)(local_2e8,local_2f0,1);
  }
  if (local_2d8 != (undefined ***)0x0) {
    (*(code *)PTR___rust_dealloc_002bae28)(local_2d0,local_2d8,1);
  }
  if (local_2c0 != (undefined ***)0x0) {
    (*(code *)PTR___rust_dealloc_002bae28)(local_2b8,local_2c0,1);
  }
  if (CONCAT44(local_278._4_4_,(uint)local_278) != 0) {
    (*(code *)PTR___rust_dealloc_002bae28)(local_270,CONCAT44(local_278._4_4_,(uint)local_278),1);
  }
  if (CONCAT44(uStack_25c,local_260) != 0) {
    (*(code *)PTR___rust_dealloc_002bae28)(local_258,CONCAT44(uStack_25c,local_260),1);
  }
  if (local_240 != 0) {
    (*(code *)PTR___rust_dealloc_002bae28)(local_238,local_240,1);
  }
  if (local_70 != 0) {
    (*(code *)PTR___rust_dealloc_002bae28)(local_68,local_70,1);
  }
  if (local_88 != 0) {
    (*(code *)PTR___rust_dealloc_002bae28)(local_80,local_88,1);
  }
  if ((undefined ***)local_d8 != (undefined ***)0x0) {
    (*(code *)PTR___rust_dealloc_002bae28)(local_d0,local_d8,1);
  }
  if (local_f0 != (undefined ***)0x0) {
    (*(code *)PTR___rust_dealloc_002bae28)(local_e8,local_f0,1);
  }
  local_308 = local_48;
  lStack_300 = lStack_40;
  local_2f8 = local_38;
  if ((param_2[2] != (undefined ***)0x3) ||
     (*(char *)((long)param_2[1] + 2) != 'f' || *(short *)param_2[1] != 0x666f)) {
                    /* try { // try from 0017595e to 0017596b has its CatchHandler @ 001768f0 */
    (*(code *)PTR_fmt_num_002bb020)((int)param_2[0x28],&local_2f0);
    local_2a0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_290 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_228 = (undefined ***)&PTR_DAT_002adba0;
    local_220 = (code *)0x2;
    local_208 = (undefined ****)0x0;
    local_218 = &local_2a8;
    local_210 = (code *)0x2;
                    /* try { // try from 001759cd to 001759df has its CatchHandler @ 00176752 */
    local_2a8 = (undefined ***)param_2;
    local_298 = &local_2f0;
    (*(code *)PTR_format_inner_002bae90)(&local_2d8,&local_228);
    if ((undefined ****)local_2f0 != (undefined ****)0x0) {
      (*(code *)PTR___rust_dealloc_002bae28)(local_2e8,local_2f0,1);
    }
    uVar3 = local_2d0;
    pppuVar7 = local_2d8;
    if ((ulong)(local_308 - local_2f8) < local_2c8) {
                    /* try { // try from 00176461 to 0017647b has its CatchHandler @ 001765c5 */
      alloc::raw_vec::RawVecInner<A>::reserve::do_reserve_and_handle
                (&local_308,local_2f8,local_2c8,1,1);
    }
    lVar8 = local_2f8;
    lVar6 = lStack_300;
    (*(code *)PTR_memcpy_002baea8)(local_2f8 + lStack_300,uVar3,local_2c8);
    lVar8 = lVar8 + local_2c8;
    local_2f8 = lVar8;
    if (pppuVar7 != (undefined ***)0x0) {
      (*(code *)PTR___rust_dealloc_002bae28)(uVar3,pppuVar7,1);
    }
    if ((param_2[5] != (undefined ***)0x9) ||
       (*(char *)(param_2[4] + 1) != 'd' || *param_2[4] != (undefined **)0x696d5f72656b6174)) {
      local_2f0 = (undefined ***)(param_2 + 3);
      local_2e8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_228 = (undefined ***)&PTR_s__tvs__002adbc0;
      local_220 = (code *)0x1;
      local_208 = (undefined ****)0x0;
      local_218 = &local_2f0;
      local_210 = (code *)&DAT_00000001;
                    /* try { // try from 00175ad0 to 00175ae2 has its CatchHandler @ 001768f0 */
      (*(code *)PTR_format_inner_002bae90)(&local_2a8,&local_228);
      ppppuVar5 = local_298;
      pcVar2 = local_2a0;
      pppuVar7 = local_2a8;
      if ((undefined ****)(local_308 - lVar8) < local_298) {
                    /* try { // try from 001764ab to 001764c5 has its CatchHandler @ 00176595 */
        alloc::raw_vec::RawVecInner<A>::reserve::do_reserve_and_handle
                  (&local_308,lVar8,local_298,1,1);
        lVar6 = lStack_300;
        lVar8 = local_2f8;
      }
      (*(code *)PTR_memcpy_002baea8)(lVar6 + lVar8,pcVar2,ppppuVar5);
      local_2f8 = lVar8 + (long)ppppuVar5;
      if ((undefined ****)pppuVar7 != (undefined ****)0x0) {
        (*(code *)PTR___rust_dealloc_002bae28)(pcVar2,pppuVar7,1);
      }
    }
  }
  if (0.0 < (double)param_2[0x29]) {
                    /* try { // try from 00175b4d to 00175b5a has its CatchHandler @ 001768f0 */
    (*(code *)PTR_fmt_num_002bb020)(&local_2d8);
                    /* try { // try from 00175b64 to 00175b71 has its CatchHandler @ 00176715 */
    (*(code *)PTR_fmt_num_002bb020)((int)param_2[0x2a],&local_2f0);
    local_2a0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_290 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_228 = (undefined ***)&PTR_DAT_002adbd0;
    local_220 = (code *)0x2;
    local_208 = (undefined ****)0x0;
    local_218 = &local_2a8;
    local_210 = (code *)0x2;
                    /* try { // try from 00175bd3 to 00175be5 has its CatchHandler @ 00176713 */
    local_2a8 = (undefined ***)&local_2d8;
    local_298 = &local_2f0;
    (*(code *)PTR_format_inner_002bae90)(&local_2c0,&local_228);
    if ((undefined ****)local_2f0 != (undefined ****)0x0) {
      (*(code *)PTR___rust_dealloc_002bae28)(local_2e8,local_2f0,1);
    }
    if (local_2d8 != (undefined ***)0x0) {
      (*(code *)PTR___rust_dealloc_002bae28)(local_2d0,local_2d8,1);
    }
    uVar4 = local_2b0;
    uVar3 = local_2b8;
    pppuVar7 = local_2c0;
    if ((ulong)(local_308 - local_2f8) < local_2b0) {
                    /* try { // try from 001764ff to 00176519 has its CatchHandler @ 0017654d */
      alloc::raw_vec::RawVecInner<A>::reserve::do_reserve_and_handle
                (&local_308,local_2f8,local_2b0,1,1);
    }
    lVar6 = local_2f8;
    (*(code *)PTR_memcpy_002baea8)(lStack_300 + local_2f8,uVar3,uVar4);
    local_2f8 = lVar6 + uVar4;
    if (pppuVar7 != (undefined ***)0x0) {
      (*(code *)PTR___rust_dealloc_002bae28)(uVar3,pppuVar7,1);
    }
  }
  if ((param_2[8] != (undefined ***)0x3) ||
     (*(char *)((long)param_2[7] + 2) != 'f' || *(short *)param_2[7] != 0x666f)) {
                    /* try { // try from 00175c9e to 00175cab has its CatchHandler @ 001768f0 */
    (*(code *)PTR_fmt_num_002bb020)((int)param_2[0x2c],&local_2d8);
                    /* try { // try from 00175cb5 to 00175cc2 has its CatchHandler @ 00176738 */
    (*(code *)PTR_fmt_num_002bb020)((int)param_2[0x2b],&local_2f0);
    local_228 = (undefined ***)(param_2 + 6);
    local_220 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_210 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_200 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_2a8 = (undefined ***)&PTR_DAT_002adbf0;
    local_2a0 = (code *)0x3;
    local_288 = 0;
    local_298 = &local_228;
    local_290 = (code *)0x3;
                    /* try { // try from 00175d3b to 00175d4a has its CatchHandler @ 00176717 */
    local_218 = &local_2d8;
    local_208 = &local_2f0;
    (*(code *)PTR_format_inner_002bae90)(&local_2c0,&local_2a8);
    if ((undefined ****)local_2f0 != (undefined ****)0x0) {
      (*(code *)PTR___rust_dealloc_002bae28)(local_2e8,local_2f0,1);
    }
    if (local_2d8 != (undefined ***)0x0) {
      (*(code *)PTR___rust_dealloc_002bae28)(local_2d0,local_2d8,1);
    }
    uVar3 = local_2b8;
    pppuVar7 = local_2c0;
    if ((ulong)(local_308 - local_2f8) < local_2b0) {
                    /* try { // try from 00176486 to 001764a0 has its CatchHandler @ 001765ad */
      alloc::raw_vec::RawVecInner<A>::reserve::do_reserve_and_handle
                (&local_308,local_2f8,local_2b0,1,1);
    }
    lVar8 = local_2f8;
    lVar6 = lStack_300;
    (*(code *)PTR_memcpy_002baea8)(lStack_300 + local_2f8,uVar3,local_2b0);
    lVar8 = lVar8 + local_2b0;
    local_2f8 = lVar8;
    if (pppuVar7 != (undefined ***)0x0) {
      (*(code *)PTR___rust_dealloc_002bae28)(uVar3,pppuVar7,1);
    }
    if ((param_2[0xb] != (undefined ***)0xa) ||
       (*(short *)(param_2[10] + 1) != 0x796c || *param_2[10] != (undefined **)0x6e6f5f72656b616d))
    {
      local_2f0 = (undefined ***)(param_2 + 9);
      local_2e8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_228 = (undefined ***)&PTR_s__mks__002adc20;
      local_220 = (code *)0x1;
      local_208 = (undefined ****)0x0;
      local_218 = &local_2f0;
      local_210 = (code *)&DAT_00000001;
                    /* try { // try from 00175e57 to 00175e69 has its CatchHandler @ 001768f0 */
      (*(code *)PTR_format_inner_002bae90)(&local_2a8,&local_228);
      ppppuVar5 = local_298;
      pcVar2 = local_2a0;
      pppuVar7 = local_2a8;
      if ((undefined ****)(local_308 - lVar8) < local_298) {
                    /* try { // try from 001764d5 to 001764ef has its CatchHandler @ 00176571 */
        alloc::raw_vec::RawVecInner<A>::reserve::do_reserve_and_handle
                  (&local_308,lVar8,local_298,1,1);
        lVar8 = local_2f8;
        lVar6 = lStack_300;
      }
      (*(code *)PTR_memcpy_002baea8)(lVar6 + lVar8,pcVar2,ppppuVar5);
      local_2f8 = lVar8 + (long)ppppuVar5;
      if ((undefined ****)pppuVar7 != (undefined ****)0x0) {
        (*(code *)PTR___rust_dealloc_002bae28)(pcVar2,pppuVar7,1);
      }
    }
  }
  if ((param_2[0xe] != (undefined ***)0x3) ||
     (*(char *)((long)param_2[0xd] + 2) != 'f' || *(short *)param_2[0xd] != 0x666f)) {
    if (local_248._0_1_ == '\0') {
                    /* try { // try from 00176108 to 00176115 has its CatchHandler @ 001768f0 */
      (*(code *)PTR_fmt_num_002bb020)((int)param_2[0x2e],&local_2c0);
                    /* try { // try from 0017611f to 0017612c has its CatchHandler @ 001766d9 */
      (*(code *)PTR_fmt_num_002bb020)((int)param_2[0x2f],&local_2d8);
                    /* try { // try from 00176136 to 00176143 has its CatchHandler @ 00176691 */
      (*(code *)PTR_fmt_num_002bb020)((int)param_2[0x33],&local_2f0);
      local_220 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_210 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_200 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_2a8 = (undefined ***)&PTR_DAT_002adc30;
      local_2a0 = (code *)0x3;
      local_288 = 0;
      local_298 = &local_228;
      local_290 = (code *)0x3;
                    /* try { // try from 001761b8 to 001761ca has its CatchHandler @ 0017664f */
      local_228 = (undefined ***)&local_2c0;
      local_218 = &local_2d8;
      local_208 = &local_2f0;
      (*(code *)PTR_format_inner_002bae90)(&local_278,&local_2a8);
      if ((undefined ****)local_2f0 != (undefined ****)0x0) {
        (*(code *)PTR___rust_dealloc_002bae28)(local_2e8,local_2f0,1);
      }
      if (local_2d8 != (undefined ***)0x0) {
        (*(code *)PTR___rust_dealloc_002bae28)(local_2d0,local_2d8,1);
      }
      if (local_2c0 != (undefined ***)0x0) {
        (*(code *)PTR___rust_dealloc_002bae28)(local_2b8,local_2c0,1);
      }
      lVar6 = CONCAT44(local_278._4_4_,(uint)local_278);
      local_270 = local_270;
      local_268 = local_268;
      if ((ulong)(local_308 - local_2f8) < local_268) {
                    /* try { // try from 00176524 to 0017653e has its CatchHandler @ 0017654b */
        alloc::raw_vec::RawVecInner<A>::reserve::do_reserve_and_handle
                  (&local_308,local_2f8,local_268,1,1);
      }
    }
    else {
                    /* try { // try from 00175ef8 to 00175f08 has its CatchHandler @ 001768f0 */
      (*(code *)PTR_fmt_num_002bb020)((int)param_2[0x2d],&local_260);
                    /* try { // try from 00175f12 to 00175f22 has its CatchHandler @ 001766f3 */
      (*(code *)PTR_fmt_num_002bb020)((int)param_2[0x2e],&local_278);
                    /* try { // try from 00175f2c to 00175f39 has its CatchHandler @ 001766b2 */
      (*(code *)PTR_fmt_num_002bb020)((int)param_2[0x2f],&local_2c0);
                    /* try { // try from 00175f43 to 00175f50 has its CatchHandler @ 00176670 */
      (*(code *)PTR_fmt_num_002bb020)((int)param_2[0x30],&local_2d8);
                    /* try { // try from 00175f5a to 00175f67 has its CatchHandler @ 0017662e */
      (*(code *)PTR_fmt_num_002bb020)((int)param_2[0x31],&local_2f0);
      local_228 = (undefined ***)(param_2 + 0xf);
      local_220 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_210 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_200 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_1f0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_1e0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_1d0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_2a8 = (undefined ***)&PTR_s__c2src__bth__rest__002adc60;
      local_2a0 = (code *)0x6;
      local_288 = 0;
      local_298 = &local_228;
      local_290 = (code *)0x6;
                    /* try { // try from 00176010 to 00176022 has its CatchHandler @ 0017660d */
      local_218 = (undefined ****)&local_260;
      local_208 = (undefined ****)&local_278;
      local_1f8 = (undefined ***)&local_2c0;
      local_1e8 = (undefined ***)&local_2d8;
      local_1d8 = &local_2f0;
      (*(code *)PTR_format_inner_002bae90)(&local_240,&local_2a8);
      if ((undefined ****)local_2f0 != (undefined ****)0x0) {
        (*(code *)PTR___rust_dealloc_002bae28)(local_2e8,local_2f0,1);
      }
      if (local_2d8 != (undefined ***)0x0) {
        (*(code *)PTR___rust_dealloc_002bae28)(local_2d0,local_2d8,1);
      }
      if (local_2c0 != (undefined ***)0x0) {
        (*(code *)PTR___rust_dealloc_002bae28)(local_2b8,local_2c0,1);
      }
      if (CONCAT44(local_278._4_4_,(uint)local_278) != 0) {
        (*(code *)PTR___rust_dealloc_002bae28)
                  (local_270,CONCAT44(local_278._4_4_,(uint)local_278),1);
      }
      if (CONCAT44(uStack_25c,local_260) != 0) {
        (*(code *)PTR___rust_dealloc_002bae28)(local_258,CONCAT44(uStack_25c,local_260),1);
      }
      local_270 = local_238;
      local_268 = local_230;
      lVar6 = local_240;
      if ((ulong)(local_308 - local_2f8) < local_230) {
                    /* try { // try from 001760df to 001760f9 has its CatchHandler @ 00176549 */
        alloc::raw_vec::RawVecInner<A>::reserve::do_reserve_and_handle
                  (&local_308,local_2f8,local_230,1,1);
      }
    }
    lVar8 = local_2f8;
    (*(code *)PTR_memcpy_002baea8)(lStack_300 + local_2f8,local_270,local_268);
    local_2f8 = lVar8 + local_268;
    if (lVar6 != 0) {
      (*(code *)PTR___rust_dealloc_002bae28)(local_270,lVar6,1);
    }
  }
  pppuVar7 = param_2[0x32];
  local_2c0 = (undefined ***)(long)(double)pppuVar7;
  if (DAT_00117070 < (double)pppuVar7) {
    local_2c0 = (undefined ***)0x7fffffffffffffff;
  }
  if (NAN((double)pppuVar7)) {
    local_2c0 = (undefined ***)0x0;
  }
  pppuVar7 = param_2[0x33];
  local_2d8 = (undefined ***)(long)(double)pppuVar7;
  if (DAT_00117070 < (double)pppuVar7) {
    local_2d8 = (undefined ***)0x7fffffffffffffff;
  }
  local_228 = (undefined ***)(param_2 + 0x12);
  if (NAN((double)pppuVar7)) {
    local_2d8 = (undefined ***)0x0;
  }
  local_260 = (uint)*(byte *)(param_2 + 0x34);
  local_278._0_4_ = (uint)*(byte *)((long)param_2 + 0x1a1);
  local_220 = _<alloc::string::String_as_core::fmt::Display>::fmt;
  local_218 = &local_2c0;
  local_210 = (code *)PTR_fmt_002bb028;
  local_208 = &local_2d8;
  local_200 = (code *)PTR_fmt_002bb028;
  local_1f8 = (undefined ***)&local_260;
  local_1f0 = (code *)PTR_fmt_002bb030;
  local_1e8 = (undefined ***)&local_278;
  local_1e0 = (code *)PTR_fmt_002bb030;
  local_2a8 = (undefined ***)&PTR_s__wait__stale__bvc__002adcc0;
  local_2a0 = (code *)0x5;
  local_288 = 0;
  local_298 = &local_228;
  local_290 = (code *)0x5;
                    /* try { // try from 001763b4 to 001763c3 has its CatchHandler @ 001768f0 */
  (*(code *)PTR_format_inner_002bae90)(&local_2f0,&local_2a8);
  pcVar2 = local_2e8;
  pppuVar7 = local_2f0;
  if ((ulong)(local_308 - local_2f8) < local_2e0) {
                    /* try { // try from 0017643f to 00176459 has its CatchHandler @ 001765e9 */
    alloc::raw_vec::RawVecInner<A>::reserve::do_reserve_and_handle
              (&local_308,local_2f8,local_2e0,1,1);
  }
  lVar6 = local_2f8;
  (*(code *)PTR_memcpy_002baea8)(lStack_300 + local_2f8,pcVar2,local_2e0);
  local_2f8 = lVar6 + local_2e0;
  if ((undefined ****)pppuVar7 != (undefined ****)0x0) {
    (*(code *)PTR___rust_dealloc_002bae28)(pcVar2,pppuVar7,1);
  }
  param_1[2] = local_2f8;
  *param_1 = local_308;
  param_1[1] = lStack_300;
  return;
}


