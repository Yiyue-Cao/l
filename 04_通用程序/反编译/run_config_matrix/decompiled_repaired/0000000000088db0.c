// ELF address 0x0000000000088db0; run_config_matrix::CsvAppender::append

/* WARNING: Removing unreachable block (ram,0x001891fd) */
/* WARNING: Removing unreachable block (ram,0x00189250) */
/* WARNING: Removing unreachable block (ram,0x0018935d) */
/* WARNING: Removing unreachable block (ram,0x00189382) */
/* WARNING: Removing unreachable block (ram,0x00189387) */
/* WARNING: Removing unreachable block (ram,0x00189396) */
/* WARNING: Type propagation algorithm not settling */
/* run_config_matrix::CsvAppender::append */

undefined8 __rustcall
run_config_matrix::CsvAppender::append
          (long *param_1,undefined *******param_2,undefined8 param_3,undefined *******param_4,
          undefined8 param_5,undefined ********param_6,code *param_7)

{
  byte bVar1;
  byte bVar2;
  ulong uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined *******pppppppuVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long extraout_RDX;
  code *pcVar11;
  uint uVar12;
  long lVar13;
  undefined ********ppppppppuVar14;
  undefined1 auVar15 [16];
  undefined ********local_168;
  code *pcStack_160;
  undefined ********local_158;
  code *local_150;
  undefined ********local_148;
  code *local_140;
  undefined8 local_130;
  long local_128;
  long local_120;
  undefined ********local_118;
  code *pcStack_110;
  undefined ********local_108;
  undefined ********local_100;
  code *local_f8;
  undefined *******local_f0;
  code *local_e8;
  undefined8 *local_e0;
  code *local_d8;
  long local_d0;
  undefined ********local_c8;
  code *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined *******local_98;
  undefined8 local_90;
  undefined *******local_88;
  undefined8 local_80;
  undefined *******local_78;
  undefined ********local_70;
  code *local_68;
  undefined1 local_60 [24];
  undefined1 local_48 [24];
  
  local_168 = (undefined ********)0x1b600000000;
  uVar3 = (ulong)pcStack_160 >> 8;
  pcStack_160 = (code *)CONCAT71((uint7)uVar3 & 0xffff0000000000,1);
  local_98 = param_2;
  local_90 = param_3;
  local_88 = param_4;
  local_80 = param_5;
  (*(code *)PTR__open_0030ca70)(&local_130,&local_168,param_6,param_7);
  if ((int)local_130 == 1) {
    local_c0 = param_7;
    local_118 = (undefined ********)&local_c8;
    pcStack_110 = (code *)PTR_fmt_0030c9a0;
    local_168 = (undefined ********)
                anon_a85c86dceebc40abfd7301bfa39d5ef7_55_llvm_7186392037480701417;
    pcStack_160 = (code *)0x1;
    local_148 = (undefined ********)0x0;
    local_158 = (undefined ********)&local_118;
    local_150 = (code *)0x1;
                    /* try { // try from 0018915b to 00189168 has its CatchHandler @ 0018956c */
    local_c8 = param_6;
    (*(code *)PTR_format_inner_0030c888)(&local_100,&local_168);
    uVar8 = _<E_as_anyhow::context::ext::StdError>::ext_context(local_128,&local_100);
    return uVar8;
  }
  uVar4 = local_130._4_4_;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_0030c830)();
  pppppppuVar7 = (undefined *******)(*(code *)PTR___rust_alloc_0030c808)(0x2000,1);
  if (pppppppuVar7 == (undefined *******)0x0) {
                    /* try { // try from 0018917e to 00189194 has its CatchHandler @ 0018957f */
    (*(code *)PTR_handle_error_0030c8e8)
              (1,0x2000,anon_d209d26ed1c6d77eb81862810959c541_38_llvm_14933503498357101740);
LAB_00189195:
                    /* WARNING: Does not return */
    pcVar11 = (code *)invalidInstructionException();
    (*pcVar11)();
  }
  local_c0 = (code *)0x2000;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = uVar4;
  local_130 = 0;
  local_128 = 1;
  local_120 = 0;
                    /* try { // try from 00188ea3 to 001890f7 has its CatchHandler @ 001895c5 */
  local_c8 = (undefined ********)pppppppuVar7;
  auVar15 = std::io::append_to_string(&local_130,&local_c8);
  lVar9 = local_128;
  if ((auVar15 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
    if (auVar15._8_8_ == 0) {
      if ((char)param_1[7] == '\0') {
        local_f8 = param_7;
        local_118 = (undefined ********)&local_100;
        pcStack_110 = (code *)PTR_fmt_0030c9a0;
        local_168 = (undefined ********)&PTR_s_empty_SDK_CSV_002ff388;
        pcStack_160 = (code *)&DAT_00000001;
        local_148 = (undefined ********)0x0;
        local_158 = (undefined ********)&local_118;
        local_150 = (code *)0x1;
        local_100 = param_6;
        (*(code *)PTR_format_inner_0030c888)(local_60,&local_168);
        uVar8 = anyhow::error::_<impl_anyhow::Error>::msg(local_60);
      }
      else {
        pcStack_110 = param_7;
        local_168 = &local_98;
        pcStack_160 = _<&T_as_core::fmt::Display>::fmt;
        local_158 = &local_88;
        local_150 = _<&T_as_core::fmt::Display>::fmt;
        local_148 = (undefined ********)&local_118;
        local_140 = (code *)PTR_fmt_0030c9a0;
        local_100 = (undefined ********)&PTR_s__EMPTY__skip_zero_record_SDK_CSV_002ff398;
        local_f8 = (code *)&DAT_00000004;
        local_e0 = (undefined8 *)0x0;
        local_e8 = (code *)0x3;
        local_118 = param_6;
        local_f0 = (undefined *******)&local_168;
        (*(code *)PTR__eprint_0030c908)(&local_100);
        uVar8 = 0;
      }
    }
    else {
      pcVar11 = (code *)&DAT_00000001;
      if (local_120 != 0) {
        lVar13 = local_120 + local_128;
        do {
          uVar5 = (uint)*(char *)(lVar13 + -1);
          if (*(char *)(lVar13 + -1) < '\0') {
            bVar1 = *(byte *)(lVar13 + -2);
            if ((char)bVar1 < -0x40) {
              bVar2 = *(byte *)(lVar13 + -3);
              if ((char)bVar2 < -0x40) {
                lVar10 = lVar13 + -4;
                uVar12 = bVar2 & 0x3f | (*(byte *)(lVar13 + -4) & 7) << 6;
              }
              else {
                lVar10 = lVar13 + -3;
                uVar12 = bVar2 & 0xf;
              }
              uVar12 = bVar1 & 0x3f | uVar12 << 6;
            }
            else {
              lVar10 = lVar13 + -2;
              uVar12 = bVar1 & 0x1f;
            }
            uVar5 = uVar5 & 0x3f | uVar12 << 6;
          }
          else {
            lVar10 = lVar13 + -1;
          }
          if ((uVar5 != 0xd) && (uVar5 != 10)) {
            ppppppppuVar14 = (undefined ********)(lVar13 - local_128);
            if ((long)ppppppppuVar14 < 0) {
              uVar8 = 0;
            }
            else {
              if (ppppppppuVar14 == (undefined ********)0x0) break;
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_0030c830)();
              pcVar11 = (code *)(*(code *)PTR___rust_alloc_0030c808)(ppppppppuVar14,1);
              uVar8 = 1;
              if (pcVar11 != (code *)0x0) goto LAB_001891c3;
            }
            (*(code *)PTR_handle_error_0030c8e8)
                      (uVar8,ppppppppuVar14,
                       &
                       PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_9_llvm_7155622891745679880_002fe310
                      );
            goto LAB_00189195;
          }
          lVar13 = lVar10;
        } while (local_128 != lVar10);
      }
      ppppppppuVar14 = (undefined ********)0x0;
LAB_001891c3:
      (*(code *)PTR_memcpy_0030c8b8)(pcVar11,lVar9,ppppppppuVar14);
      local_78 = (undefined *******)(param_1 + 4);
      local_d0 = param_1[4];
      local_118 = ppppppppuVar14;
      pcStack_110 = pcVar11;
      local_108 = ppppppppuVar14;
      if (((undefined ********)param_1[6] == ppppppppuVar14) &&
         (iVar6 = (*(code *)PTR_bcmp_0030ca18)(param_1[5],pcVar11,ppppppppuVar14), iVar6 == 0)) {
        do {
          while( true ) {
            do {
              do {
                local_120 = 0;
                    /* try { // try from 001893b9 to 001894c9 has its CatchHandler @ 00189592 */
                auVar15 = std::io::append_to_string(&local_130,&local_c8);
                lVar9 = auVar15._8_8_;
                if ((auVar15 & (undefined1  [16])0x1) != (undefined1  [16])0x0) goto LAB_001894d3;
                if (lVar9 == 0) {
                  if ((local_d0 != -0x8000000000000000) && (local_118 != (undefined ********)0x0)) {
                    (*(code *)PTR___rust_dealloc_0030c810)(pcStack_110,local_118,1);
                  }
                  if (local_130 != 0) {
                    (*(code *)PTR___rust_dealloc_0030c810)(local_128,local_130,1);
                  }
                  uVar8 = 0;
                  goto joined_r0x00189532;
                }
                core::str::_<impl_str>::trim_matches(local_128,local_120);
              } while (extraout_RDX == 0);
              local_100 = &local_98;
              local_f8 = _<&T_as_core::fmt::Display>::fmt;
              local_f0 = (undefined *******)&local_88;
              local_e8 = _<&T_as_core::fmt::Display>::fmt;
              local_d8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
              local_168 = (undefined ********)&DAT_002ff3f8;
              pcStack_160 = (code *)0x3;
              local_158 = (undefined ********)&local_100;
              local_150 = (code *)0x3;
              local_148 = (undefined ********)0x0;
              local_e0 = &local_130;
              lVar9 = std::io::default_write_fmt(param_1,&local_168);
              if (lVar9 != 0) {
                uVar8 = anyhow::error::_<impl_core::convert::From<E>for_anyhow::Error>::from(lVar9);
                goto LAB_00189545;
              }
            } while ((local_120 != 0) && (*(char *)(local_128 + -1 + local_120) == '\n'));
            lVar9 = param_1[2];
            if ((ulong)(*param_1 - lVar9) < 2) break;
            *(undefined1 *)(param_1[1] + lVar9) = 10;
            param_1[2] = lVar9 + 1;
          }
          lVar9 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(param_1,"\n",1);
        } while (lVar9 == 0);
LAB_001894d3:
                    /* try { // try from 001894d3 to 00189544 has its CatchHandler @ 00189565 */
        uVar8 = anyhow::error::_<impl_core::convert::From<E>for_anyhow::Error>::from(lVar9);
LAB_00189545:
        if (local_d0 == -0x8000000000000000) goto LAB_00188ec4;
      }
      else {
        local_68 = param_7;
        local_168 = (undefined ********)&local_70;
        pcStack_160 = (code *)PTR_fmt_0030c9a0;
        local_158 = &local_78;
        local_150 = _<&T_as_core::fmt::Debug>::fmt;
        local_148 = (undefined ********)&local_118;
        local_140 = _<alloc::string::String_as_core::fmt::Debug>::fmt;
        local_100 = (undefined ********)&PTR_s_CSV_header_mismatch_in___expecte_002ff428;
        local_f8 = (code *)0x3;
        local_e0 = (undefined8 *)0x0;
        local_e8 = (code *)0x3;
        local_f0 = (undefined *******)&local_168;
        local_70 = param_6;
        (*(code *)PTR_format_inner_0030c888)(local_48,&local_100);
        uVar8 = anyhow::error::_<impl_anyhow::Error>::msg(local_48);
      }
      if (local_118 != (undefined ********)0x0) {
        (*(code *)PTR___rust_dealloc_0030c810)(pcStack_110,local_118,1);
      }
    }
  }
  else {
    uVar8 = anyhow::error::_<impl_core::convert::From<E>for_anyhow::Error>::from(auVar15._8_8_);
  }
LAB_00188ec4:
  if (local_130 != 0) {
    (*(code *)PTR___rust_dealloc_0030c810)(local_128,local_130,1);
  }
joined_r0x00189532:
  if (local_c0 != (code *)0x0) {
    (*(code *)PTR___rust_dealloc_0030c810)(local_c8,local_c0,1);
  }
  (*(code *)PTR_close_0030c960)(local_a0);
  return uVar8;
}


