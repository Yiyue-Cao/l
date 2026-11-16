// ELF address 0x0000000000074030; run_sos::build_sos_tag

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* run_sos::build_sos_tag */

void __rustcall
run_sos::build_sos_tag
          (undefined8 param_1,undefined4 *param_2,int **param_3,long param_4,double *param_5,
          ulong param_6)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined *puVar4;
  ulong uVar5;
  int ***pppiVar6;
  long lVar7;
  int ****ppppiVar8;
  ulong unaff_R14;
  double dVar9;
  undefined8 local_298;
  undefined8 uStack_290;
  ulong local_288;
  undefined4 local_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  ulong local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  ulong local_258;
  int ***local_248;
  code *local_240;
  int ****local_238;
  code *local_230;
  undefined8 local_228;
  undefined4 *local_218;
  undefined8 ****local_210;
  code *local_208;
  undefined8 ***local_1f8;
  long lStack_1f0;
  int **local_1e0;
  long local_1d8;
  double local_1d0;
  long local_1c8;
  undefined8 **local_1c0;
  undefined8 local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  long local_180;
  int ***local_178;
  code *local_170;
  int ****local_168;
  code *local_160;
  undefined **local_158;
  code *local_150;
  undefined **local_148;
  code *local_140;
  long *local_138;
  undefined *local_130;
  double *local_128;
  undefined *local_120;
  long *local_118;
  code *local_110;
  long *local_108;
  code *local_100;
  int ****local_f8;
  code *local_f0;
  int ***local_e8;
  code *local_e0;
  int ***local_d8;
  code *local_d0;
  undefined1 *local_c8;
  code *local_c0;
  undefined8 *local_b8;
  code *local_b0;
  long local_a8;
  undefined8 local_a0;
  long local_90;
  undefined8 local_88;
  int ***local_78;
  undefined8 local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined8 ***local_48;
  long lStack_40;
  ulong local_38;
  
  puVar4 = PTR_fmt_num_002b3228;
  if (param_6 == 0) {
    (*(code *)PTR_panic_bounds_check_002b3168)
              (0,0,&PTR_anon_d3ffc9d39707f9e32d9f5a4a1db7ba2a_12_llvm_4860304101299258416_002a6348);
LAB_00174a06:
    (*(code *)PTR_panic_bounds_check_002b3168)
              (1,1,&PTR_anon_d3ffc9d39707f9e32d9f5a4a1db7ba2a_12_llvm_4860304101299258416_002a6360);
LAB_00174a1d:
    (*(code *)PTR_panic_bounds_check_002b3168)
              (10,unaff_R14,
               &PTR_anon_d3ffc9d39707f9e32d9f5a4a1db7ba2a_12_llvm_4860304101299258416_002a6378);
LAB_00174a32:
    (*(code *)PTR_panic_bounds_check_002b3168)
              (0xb,0xb,&
                       PTR_anon_d3ffc9d39707f9e32d9f5a4a1db7ba2a_12_llvm_4860304101299258416_002a6390
              );
LAB_00174a49:
    (*(code *)PTR_panic_bounds_check_002b3168)
              (0x23,unaff_R14,
               &PTR_anon_d3ffc9d39707f9e32d9f5a4a1db7ba2a_12_llvm_4860304101299258416_002a63a8);
LAB_00174a5e:
    (*(code *)PTR_panic_bounds_check_002b3168)
              (0x24,0x24,
               &PTR_anon_d3ffc9d39707f9e32d9f5a4a1db7ba2a_12_llvm_4860304101299258416_002a63c0);
    pppiVar6 = local_268;
    lVar7 = uStack_260;
  }
  else {
    unaff_R14 = param_6;
    if (param_6 == 1) goto LAB_00174a06;
    local_188 = param_5[1];
    if (param_6 < 0xb) goto LAB_00174a1d;
    if (param_6 == 0xb) goto LAB_00174a32;
    if (param_6 < 0x24) goto LAB_00174a49;
    local_218 = param_2;
    if (param_6 == 0x24) goto LAB_00174a5e;
    local_198 = param_5[10];
    local_1a8 = param_5[0x23];
    local_1b0 = param_5[0x24];
    local_1a0 = param_5[0xb] + local_198;
    local_78 = (int ***)&DAT_00129847;
    local_70 = 7;
    local_68 = &DAT_0012984e;
    local_60 = 3;
    local_58 = &DAT_00129851;
    local_50 = 3;
    local_1e0 = param_3;
    local_1d8 = param_4;
    local_1c8 = param_4;
    local_1c0 = (undefined8 **)param_3;
    local_1b8 = param_1;
    local_190 = *param_5;
    if (param_4 == 4) {
      local_1e0 = (int **)"SoS4";
      if ((((*(int *)param_3 == 0x34534f53) || (*(int *)param_3 == 0x34536f53)) ||
          (local_1e0 = (int **)&DAT_001295b8, *(int *)param_3 == 0x35534f53)) ||
         (*(int *)param_3 == 0x35536f53)) {
LAB_001741c7:
        iVar1 = *(int *)param_3;
      }
      else {
        if (*(int *)param_3 != 0x36534f53) {
          local_1e0 = (int **)&DAT_00129548;
          if (*(int *)param_3 != 0x36536f53) {
            local_1e0 = param_3;
          }
          goto LAB_001741c7;
        }
        local_1e0 = (int **)&DAT_00129548;
        iVar1 = *(int *)param_3;
      }
      if ((iVar1 != 0x36534f53) && (local_1d8 = 4, *(int *)param_3 != 0x36536f53))
      goto LAB_001742a4;
      local_1d8 = 4;
      (*(code *)PTR_fmt_num_002b3228)(&local_248);
      uStack_290 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_178 = (int ***)&PTR_DAT_002a63f8;
      local_170 = (code *)0x1;
      local_158 = (undefined **)0x0;
      local_160 = (code *)0x1;
                    /* try { // try from 00174250 to 00174262 has its CatchHandler @ 00174ad7 */
      local_298 = &local_248;
      local_168 = (int ****)&local_298;
      (*(code *)PTR_format_inner_002b30c8)(&local_280,&local_178);
      if ((undefined8 ****)local_248 != (undefined8 ****)0x0) {
        (*(code *)PTR___rust_dealloc_002b3038)(local_240,local_248,1);
      }
      local_1f8 = (undefined8 ***)CONCAT44(uStack_27c,local_280);
      lStack_1f0 = CONCAT44(uStack_274,uStack_278);
    }
    else {
LAB_001742a4:
      local_1d0 = param_5[0x22] + local_1a0;
      (*(code *)PTR_fmt_num_002b3228)(SUB84(param_5[0x21] + local_198,0),&local_298);
      dVar9 = (double)(*(code *)PTR_round_002b3230)(SUB84(local_1d0 * _DAT_001251c0,0));
                    /* try { // try from 001742e0 to 001742ea has its CatchHandler @ 00174b32 */
      (*(code *)puVar4)(SUB84(dVar9 / _DAT_001251c0,0),&local_280);
      local_240 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_230 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_178 = (int ***)&PTR_DAT_002a63d8;
      local_170 = (code *)0x2;
      local_158 = (undefined **)0x0;
      local_168 = &local_248;
      local_160 = (code *)0x2;
                    /* try { // try from 00174346 to 00174358 has its CatchHandler @ 00174b13 */
      local_248 = (int ***)&local_298;
      local_238 = (int ****)&local_280;
      (*(code *)PTR_format_inner_002b30c8)(&local_268,&local_178);
      if (CONCAT44(uStack_27c,local_280) != 0) {
        (*(code *)PTR___rust_dealloc_002b3038)
                  (CONCAT44(uStack_274,uStack_278),CONCAT44(uStack_27c,local_280),1);
      }
      if (local_298 != (int ****)0x0) {
        (*(code *)PTR___rust_dealloc_002b3038)(uStack_290,local_298,1);
      }
      local_1f8 = (undefined8 ***)local_268;
      lStack_1f0 = uStack_260;
    }
    dVar9 = local_190 / DAT_00125198;
    lVar7 = (long)dVar9;
    if (DAT_00124f48 < dVar9) {
      lVar7 = 0x7fffffffffffffff;
    }
    local_180 = 0;
    if (!NAN(dVar9)) {
      local_180 = lVar7;
    }
                    /* try { // try from 001743e4 to 001743fd has its CatchHandler @ 00174c17 */
    (*(code *)PTR_fmt_num_002b3228)(SUB84(local_198,0),&local_a8);
    dVar9 = (double)(*(code *)PTR_round_002b3230)(SUB84(local_1a0 * _DAT_001251c0,0));
                    /* try { // try from 0017441d to 0017442d has its CatchHandler @ 00174bf2 */
    (*(code *)PTR_fmt_num_002b3228)(SUB84(dVar9 / _DAT_001251c0,0),&local_90);
                    /* try { // try from 0017442e to 00174444 has its CatchHandler @ 00174bcd */
    (*(code *)PTR_fmt_num_002b3228)(SUB84(local_1a8,0),&local_210);
                    /* try { // try from 00174445 to 00174458 has its CatchHandler @ 00174ba8 */
    (*(code *)PTR_fmt_num_002b3228)(SUB84(local_1b0,0),&local_268);
                    /* try { // try from 00174462 to 0017446d has its CatchHandler @ 00174b89 */
    (*(code *)PTR_fmt_num_002b3228)(SUB84(param_5[0x1c],0),&local_298);
                    /* try { // try from 0017446e to 00174484 has its CatchHandler @ 00174b6b */
    (*(code *)PTR_fmt_num_002b3228)((int)local_1b8,&local_280);
    local_178 = &local_1e0;
    local_170 = _<&T_as_core::fmt::Display>::fmt;
    local_168 = &local_78;
    local_160 = _<&T_as_core::fmt::Display>::fmt;
    local_158 = &local_68;
    local_150 = _<&T_as_core::fmt::Display>::fmt;
    local_148 = &local_58;
    local_140 = _<&T_as_core::fmt::Display>::fmt;
    local_138 = &local_180;
    local_130 = PTR_fmt_002b3238;
    local_128 = &local_188;
    local_120 = PTR_fmt_002b3240;
    local_110 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_100 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_f8 = (int ****)&local_210;
    local_f0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_e0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_d8 = (int ***)&local_1f8;
    local_d0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_c0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_b0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_248 = (int ***)&DAT_002a6408;
    local_240 = (code *)0xd;
    local_228 = 0;
    local_238 = &local_178;
    local_230 = (code *)&DAT_0000000d;
                    /* try { // try from 001745ea to 001745ff has its CatchHandler @ 00174b4c */
    local_118 = &local_a8;
    local_108 = &local_90;
    local_e8 = (int ***)&local_268;
    local_c8 = (undefined1 *)&local_298;
    local_b8 = (undefined8 *)&local_280;
    (*(code *)PTR_format_inner_002b30c8)(&local_48,&local_248);
    if (CONCAT44(uStack_27c,local_280) != 0) {
      (*(code *)PTR___rust_dealloc_002b3038)
                (CONCAT44(uStack_274,uStack_278),CONCAT44(uStack_27c,local_280),1);
    }
    if (local_298 != (int ****)0x0) {
      (*(code *)PTR___rust_dealloc_002b3038)(uStack_290,local_298,1);
    }
    if (local_268 != (int ***)0x0) {
      (*(code *)PTR___rust_dealloc_002b3038)(uStack_260,local_268,1);
    }
    if ((int ****)local_210 != (int ****)0x0) {
      (*(code *)PTR___rust_dealloc_002b3038)(local_208,local_210,1);
    }
    if (local_90 != 0) {
      (*(code *)PTR___rust_dealloc_002b3038)(local_88,local_90,1);
    }
    if (local_a8 != 0) {
      (*(code *)PTR___rust_dealloc_002b3038)(local_a0,local_a8,1);
    }
    local_268 = (int ***)local_48;
    pppiVar6 = local_268;
    uStack_260 = lStack_40;
    lVar7 = uStack_260;
    local_258 = local_38;
    if ((local_1c8 == 4) && ((*(int *)local_1c0 == 0x36534f53 || (*(int *)local_1c0 == 0x36536f53)))
       ) {
      dVar9 = (double)(*(code *)PTR_round_002b3230)(SUB84(param_5[0xd] / _s__001254f0,0));
      ppppiVar8 = (int ****)(long)dVar9;
      if (DAT_00124f48 < dVar9) {
        ppppiVar8 = (int ****)0x7fffffffffffffff;
      }
      local_210 = (undefined8 ****)(int ****)0x0;
      if (!NAN(dVar9) && !NAN(dVar9)) {
        local_210 = (undefined8 ****)ppppiVar8;
      }
      local_240 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_238 = (int ****)&local_210;
      local_230 = (code *)PTR_fmt_002b3238;
      local_178 = (int ***)&DAT_002a64f0;
      local_170 = (code *)0x2;
      local_158 = (undefined **)0x0;
      local_160 = (code *)0x2;
                    /* try { // try from 001747e5 to 001747f7 has its CatchHandler @ 00174acf */
      local_248 = (int ***)&local_268;
      local_168 = &local_248;
      (*(code *)PTR_format_inner_002b30c8)(&local_280,&local_178);
      local_298 = (int ****)CONCAT44(uStack_27c,local_280);
      uStack_290 = (code *)CONCAT44(uStack_274,uStack_278);
      local_288 = local_270;
      if (param_6 < 0x26) {
        (*(code *)PTR_panic_bounds_check_002b3168)
                  (0x25,0x25,
                   &PTR_anon_d3ffc9d39707f9e32d9f5a4a1db7ba2a_12_llvm_4860304101299258416_002a64d8);
        goto LAB_00174aab;
      }
      bVar3 = true;
      if (param_5[0x25] < DAT_00125150) goto LAB_00174835;
      *(ulong *)(local_218 + 4) = local_270;
      *local_218 = local_280;
      local_218[1] = uStack_27c;
      local_218[2] = uStack_278;
      local_218[3] = uStack_274;
joined_r0x001749a2:
      if (local_268 != (int ***)0x0) {
        (*(code *)PTR___rust_dealloc_002b3038)(uStack_260,local_268,1);
      }
LAB_00174950:
      if ((int ***)local_1f8 != (int ***)0x0) {
        (*(code *)PTR___rust_dealloc_002b3038)(lStack_1f0,local_1f8,1);
      }
      return;
    }
    local_288 = local_38;
    local_268._0_4_ = SUB84(local_48,0);
    local_268._4_4_ = (undefined4)((ulong)local_48 >> 0x20);
    uStack_260._0_4_ = (undefined4)lStack_40;
    uStack_260._4_4_ = (undefined4)((ulong)lStack_40 >> 0x20);
    local_298 = (int ****)local_48;
    uStack_290 = (code *)lStack_40;
    if (0x25 < param_6) {
      local_268 = pppiVar6;
      uStack_260 = lVar7;
      if (DAT_00125150 <= param_5[0x25]) {
        *(ulong *)(local_218 + 4) = local_38;
        *local_218 = (undefined4)local_268;
        local_218[1] = local_268._4_4_;
        local_218[2] = (undefined4)uStack_260;
        local_218[3] = uStack_260._4_4_;
        goto LAB_00174950;
      }
      bVar3 = false;
LAB_00174835:
                    /* try { // try from 00174835 to 00174842 has its CatchHandler @ 00174c1c */
      (*(code *)PTR_fmt_num_002b3228)(&local_248);
      local_208 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_178 = (int ***)&PTR_DAT_002a6510;
      local_170 = (code *)0x1;
      local_158 = (undefined **)0x0;
      local_168 = (int ****)&local_210;
      local_160 = (code *)0x1;
                    /* try { // try from 00174896 to 001748a8 has its CatchHandler @ 00174aed */
      local_210 = (undefined8 ****)&local_248;
      (*(code *)PTR_format_inner_002b30c8)(&local_280,&local_178);
      if ((undefined8 ****)local_248 != (undefined8 ****)0x0) {
        (*(code *)PTR___rust_dealloc_002b3038)(local_240,local_248,1);
      }
      if ((long)local_298 - local_288 < local_270) {
                    /* try { // try from 001749d2 to 001749ea has its CatchHandler @ 00174aad */
        alloc::raw_vec::RawVecInner<A>::reserve::do_reserve_and_handle
                  (&local_298,local_288,local_270,1,1);
      }
      uVar5 = local_288;
      (*(code *)PTR_memcpy_002b30b8)
                ((long)uStack_290 + local_288,CONCAT44(uStack_274,uStack_278),local_270);
      local_288 = uVar5 + local_270;
      if (CONCAT44(uStack_27c,local_280) != 0) {
        (*(code *)PTR___rust_dealloc_002b3038)
                  (CONCAT44(uStack_274,uStack_278),CONCAT44(uStack_27c,local_280),1);
      }
      *(ulong *)(local_218 + 4) = local_288;
      *local_218 = (undefined4)local_298;
      local_218[1] = local_298._4_4_;
      local_218[2] = (undefined4)uStack_290;
      local_218[3] = uStack_290._4_4_;
      if (!bVar3) goto LAB_00174950;
      goto joined_r0x001749a2;
    }
  }
  uStack_260 = lVar7;
  local_268 = pppiVar6;
                    /* try { // try from 00174a78 to 00174aaa has its CatchHandler @ 00174c1c */
  (*(code *)PTR_panic_bounds_check_002b3168)
            (0x25,0x25,
             &PTR_anon_d3ffc9d39707f9e32d9f5a4a1db7ba2a_12_llvm_4860304101299258416_002a64d8);
LAB_00174aab:
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}


