// ELF address 0x0000000000096ed0; fb_sweeps::parse_day_range

/* fb_sweeps::parse_day_range */

long * __rustcall fb_sweeps::parse_day_range(long *param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  ulong uVar6;
  ulong *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  undefined1 local_109;
  long local_108;
  long lStack_100;
  long local_f8;
  undefined **local_f0;
  ulong local_e8;
  long local_e0;
  ulong local_d8;
  char *pcStack_d0;
  ulong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  ushort local_b0;
  undefined4 local_a8;
  uint local_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  ulong local_80;
  long local_78;
  ulong local_70;
  long local_68;
  ulong local_60;
  long local_58;
  long local_50;
  undefined8 *local_48;
  undefined **local_40;
  undefined8 local_38;
  
  local_78 = param_2;
  local_70 = param_3;
  if (param_3 < 0x10) {
    if (param_3 != 0) {
      uVar6 = 0;
      do {
        if (*(char *)(param_2 + uVar6) == ',') goto LAB_00196f38;
        uVar6 = uVar6 + 1;
      } while (param_3 != uVar6);
    }
  }
  else {
    lVar8 = (*(code *)PTR_memchr_aligned_002a0d98)(0x2c,param_2,param_3);
    if (lVar8 == 1) {
LAB_00196f38:
      local_f0 = (undefined **)0x0;
      pcStack_d0 = (char *)0x0;
      local_c0 = 0x2c0000002c;
      local_b8 = CONCAT71(local_b8._1_7_,1);
      local_b0 = 1;
      local_e8 = param_3;
      local_e0 = param_2;
      local_d8 = param_3;
      local_c8 = param_3;
      _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                (param_1,&local_f0,
                 &PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_00296060);
      return param_1;
    }
  }
  puVar11 = PTR_memchr_aligned_002a0d98;
  uVar6 = 0;
  do {
    if (param_3 - uVar6 < 0x10) {
      if (param_3 == uVar6) break;
      uVar9 = 0;
      while (*(char *)(param_2 + uVar6 + uVar9) != '-') {
        uVar9 = uVar9 + 1;
        if (param_3 - uVar6 == uVar9) goto LAB_001970d8;
      }
    }
    else {
      auVar13 = (*(code *)puVar11)(0x2d);
      uVar9 = auVar13._8_8_;
      if ((auVar13 & (undefined1  [16])0x1) == (undefined1  [16])0x0) break;
    }
    uVar12 = uVar9 + uVar6;
    uVar6 = uVar6 + uVar9 + 1;
    if ((uVar12 < param_3) && (*(char *)(param_2 + uVar12) == '-')) {
      local_68 = param_2;
      local_60 = uVar12;
      local_58 = uVar6 + param_2;
      local_50 = param_3 - uVar6;
      uVar9 = (*(code *)PTR_parse_from_str_002a1180)(param_2,uVar12,"%Y%m%d",6);
      if ((uVar9 & 1) != 0) {
        lVar8 = parse_day_range::___closure__(&local_68,uVar9 >> 8 & 0xffffffff);
        goto LAB_001973a8;
      }
      puVar11 = (undefined *)0x8000000000000000;
      uVar6 = (*(code *)PTR_parse_from_str_002a1180)(uVar6 + param_2,param_3 - uVar6,"%Y%m%d",6);
      if ((uVar6 & 1) == 0) {
        uVar12 = uVar9 >> 0x20;
        local_80 = uVar6 >> 0x20;
        if ((int)(uVar9 >> 0x20) <= (int)(uVar6 >> 0x20)) {
          local_108 = 0;
          lStack_100 = 8;
          local_f8 = 0;
          while( true ) {
            uVar5 = (uint)uVar12;
            local_a8 = 0;
            local_f0 = (undefined **)0x8000000000000000;
            pcStack_d0 = "%Y%m%d";
            local_c8 = 6;
            local_c0 = 8;
            local_b8 = 0;
            local_b0 = local_b0 & 0xff00;
            local_98 = 0;
            local_90 = 1;
            local_88 = 0;
            local_38 = 0xe0000020;
            local_48 = &local_98;
            local_40 = &PTR_drop_in_place<alloc_string_String>_00296018;
                    /* try { // try from 001971e4 to 001971f5 has its CatchHandler @ 001974cc */
            local_9c = uVar5;
            cVar4 = _<chrono::format::formatting::DelayedFormat<I>as_core::fmt::Display>::fmt
                              (&local_f0,&local_48);
            uVar3 = local_88;
            uVar2 = local_90;
            uVar10 = local_98;
            lVar8 = local_f8;
            if (cVar4 != '\0') break;
            if (local_f8 == local_108) {
                    /* try { // try from 00197222 to 00197233 has its CatchHandler @ 001974a2 */
              (*(code *)PTR_grow_one_002a1188)(&local_108,&PTR_s_sweeps_src_lib_rs_002962a0);
            }
            *(undefined8 *)(lStack_100 + lVar8 * 0x18) = uVar10;
            *(undefined8 *)(lStack_100 + 8 + lVar8 * 0x18) = uVar2;
            *(undefined8 *)(lStack_100 + 0x10 + lVar8 * 0x18) = uVar3;
            local_f8 = lVar8 + 1;
            if ((local_f0 != (undefined **)0x8000000000000000) && (local_f0 != (undefined **)0x0)) {
              (*(code *)PTR___rust_dealloc_002a0a58)(local_e8,local_f0,1);
            }
            uVar6 = local_80;
            if ((uVar5 & 0x1ff8) < 0x16d1) {
              uVar5 = uVar5 & 0xffffe007 | (uVar5 & 0x1ff8) + 0x10;
            }
            else {
                    /* try { // try from 0019729b to 001972a8 has its CatchHandler @ 001974b7 */
              uVar5 = (*(code *)PTR_from_yo_opt_002a1190)(((int)uVar5 >> 0xd) + 1,1);
              if (uVar5 == 0) {
                local_f0 = &PTR_s_date_overflow_002962b8;
                local_e8 = 1;
                local_e0 = 8;
                local_d8 = 0;
                pcStack_d0 = (char *)0x0;
                    /* try { // try from 001972da to 001972e3 has its CatchHandler @ 001974a0 */
                lVar8 = anyhow::__private::format_err(&local_f0);
                param_1[1] = lVar8;
                *param_1 = -0x8000000000000000;
                    /* try { // try from 001972ef to 001972f8 has its CatchHandler @ 00197478 */
                _<alloc::vec::Vec<T,A>as_core::ops::drop::Drop>::drop(&local_108);
                if (local_108 == 0) {
                  return param_1;
                }
                (*(code *)PTR___rust_dealloc_002a0a58)(lStack_100,local_108 * 0x18,8);
                return param_1;
              }
            }
            uVar12 = (ulong)uVar5;
            if ((int)uVar6 < (int)uVar5) {
              param_1[2] = local_f8;
              *param_1 = local_108;
              param_1[1] = lStack_100;
              return param_1;
            }
          }
                    /* try { // try from 0019740f to 00197433 has its CatchHandler @ 001974ce */
          (*(code *)PTR_unwrap_failed_002a0b98)
                    (&DAT_0011c4ec,0x37,&local_109,&DAT_00296078,
                     &PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_2_llvm_7155622891745679880_00296048)
          ;
          goto LAB_00197434;
        }
        goto LAB_00197446;
      }
      lVar8 = parse_day_range::___closure__(&local_58,uVar6 >> 8 & 0xffffffff);
      goto LAB_001973ff;
    }
  } while (uVar6 <= param_3);
LAB_001970d8:
  uVar6 = (*(code *)PTR_parse_from_str_002a1180)(param_2,param_3,"%Y%m%d",6);
  if ((uVar6 & 1) != 0) {
    lVar8 = parse_day_range::___closure__(&local_78,uVar6 >> 8 & 0xffffffff);
LAB_001973a8:
    param_1[1] = lVar8;
    *param_1 = -0x8000000000000000;
    return param_1;
  }
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a0a78)();
  puVar7 = (ulong *)(*(code *)PTR___rust_alloc_002a0a50)(0x18,8);
  if (puVar7 == (ulong *)0x0) {
    (*(code *)PTR_handle_alloc_error_002a0bb8)(8,0x18);
LAB_00197446:
    local_f0 = &PTR_s_end_<_start_002962c8;
    local_e8 = 1;
    local_e0 = 8;
    local_d8 = 0;
    pcStack_d0 = (char *)0x0;
    lVar8 = anyhow::__private::format_err(&local_f0);
LAB_001973ff:
    param_1[1] = lVar8;
    *param_1 = (long)puVar11;
    return param_1;
  }
  if (-1 < (long)param_3) {
    if (param_3 == 0) {
      uVar6 = 1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002a0a78)();
      uVar10 = 1;
      uVar6 = (*(code *)PTR___rust_alloc_002a0a50)(param_3,1);
      if (uVar6 == 0) goto LAB_00197125;
    }
    (*(code *)PTR_memcpy_002a0ac0)(uVar6,param_2,param_3);
    *puVar7 = param_3;
    puVar7[1] = uVar6;
    puVar7[2] = param_3;
    *param_1 = 1;
    param_1[1] = (long)puVar7;
    param_1[2] = 1;
    return param_1;
  }
  uVar10 = 0;
LAB_00197125:
                    /* try { // try from 00197125 to 00197137 has its CatchHandler @ 00197525 */
  (*(code *)PTR_handle_error_002a0ba8)
            (uVar10,param_3,
             &PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_9_llvm_7155622891745679880_00296100);
LAB_00197434:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


