// ELF address 0x0000000000088630; run_config_matrix::write_audit

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* run_config_matrix::write_audit */

undefined8 __rustcall
run_config_matrix::write_audit
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5,
          long param_6,int param_7)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  char *pcVar14;
  ulong uVar15;
  undefined1 auVar16 [16];
  long local_130;
  long local_128;
  long local_120;
  long local_118;
  long local_110;
  long local_108;
  long local_100;
  undefined **local_f8;
  code *local_f0;
  int **local_e8;
  code *local_e0;
  undefined **local_d8;
  code *local_d0;
  long local_c8;
  code *local_c0;
  int local_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  ulong local_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 local_90;
  int *local_88;
  undefined *local_80;
  undefined ***local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48 [24];
  
  local_58 = param_3;
  local_50 = param_4;
  if (param_7 == 1) {
    pcVar14 = "alias\tabtype\tdate\tdetail\n";
    lVar12 = 0x19;
  }
  else {
    if (param_7 != 2) {
      local_b8 = param_7;
      local_88 = &local_b8;
      local_80 = PTR_fmt_0030c9c0;
      local_f8 = &PTR_s_unsupported_audit_schema_version_002ff378;
      local_f0 = (code *)0x1;
      local_d8 = (undefined **)0x0;
      local_e8 = &local_88;
      local_e0 = (code *)0x1;
      (*(code *)PTR_format_inner_0030c888)(local_48,&local_f8);
      uVar9 = anyhow::error::_<impl_anyhow::Error>::msg(local_48);
      return uVar9;
    }
    pcVar14 = "case_id\tdate\tdetail\n";
    lVar12 = 0x14;
  }
  (*(code *)PTR__join_0030c8a8)(&local_a0,param_1,param_2,"_audit\t",6);
  uVar9 = local_98;
  local_f8 = (undefined **)CONCAT35(local_f8._5_3_,0x1000001ff);
                    /* try { // try from 001886ca to 001886e4 has its CatchHandler @ 00188d3b */
  lVar7 = (*(code *)PTR__create_0030ca60)(&local_f8,local_98,local_90);
  if (lVar7 != 0) {
    uVar8 = anyhow::error::_<impl_core::convert::From<E>for_anyhow::Error>::from(lVar7);
    local_98 = uVar9;
    goto LAB_00188a42;
  }
  lVar7 = param_6 * 8;
  local_108 = lVar7;
  if (param_6 == 0) {
    local_130 = 8;
    uVar15 = 0;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_0030c830)();
    local_130 = (*(code *)PTR___rust_alloc_0030c808)(lVar7,8);
    lVar6 = _UNK_0012b618;
    lVar5 = _DAT_0012b610;
    lVar4 = _UNK_0012b3f8;
    lVar3 = _DAT_0012b3f0;
    if (local_130 == 0) {
                    /* try { // try from 00188c92 to 00188ca6 has its CatchHandler @ 00188d3b */
      (*(code *)PTR_handle_error_0030c8e8)
                (8,lVar7,&
                         PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_002fe220
                );
      goto LAB_00188ca7;
    }
    uVar15 = param_6 * 0x78 - 0x78;
    if (uVar15 < 0x168) {
      uVar15 = 0;
      lVar7 = param_5;
LAB_001887c8:
      do {
        *(long *)(local_130 + uVar15 * 8) = lVar7;
        lVar7 = lVar7 + 0x78;
        uVar15 = uVar15 + 1;
      } while (lVar7 != param_5 + param_6 * 0x78);
    }
    else {
      uVar11 = uVar15 / 0x78 + 1;
      uVar15 = uVar11 & 0xfffffffffffffffc;
      lVar7 = uVar15 * 0x78 + param_5;
      uVar10 = 0;
      lVar13 = param_5;
      do {
        auVar16._8_4_ = (int)lVar13;
        auVar16._0_8_ = lVar13;
        auVar16._12_4_ = (int)((ulong)lVar13 >> 0x20);
        plVar1 = (long *)(local_130 + uVar10 * 8);
        *plVar1 = lVar13 + lVar5;
        plVar1[1] = auVar16._8_8_ + lVar6;
        plVar1 = (long *)(local_130 + 0x10 + uVar10 * 8);
        *plVar1 = lVar13 + lVar3;
        plVar1[1] = auVar16._8_8_ + lVar4;
        uVar10 = uVar10 + 4;
        lVar13 = lVar13 + 0x1e0;
      } while (uVar15 != uVar10);
      if (uVar11 != uVar15) goto LAB_001887c8;
    }
    if (uVar15 == 1) {
      uVar15 = 1;
    }
    else if (uVar15 - 1 < 0x14) {
                    /* try { // try from 00188c5c to 00188c8f has its CatchHandler @ 00188d22 */
      core::slice::sort::shared::smallsort::insertion_sort_shift_left(local_130,uVar15,1,&local_f8);
    }
    else {
                    /* try { // try from 00188ca9 to 00188cb8 has its CatchHandler @ 00188d22 */
      core::slice::sort::stable::driftsort_main(local_130,uVar15,&local_f8);
    }
  }
  local_100 = param_6;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_0030c830)();
  lVar7 = (*(code *)PTR___rust_alloc_0030c808)(lVar12,1);
  if (lVar7 == 0) {
    (*(code *)PTR_handle_error_0030c8e8)
              (1,lVar12,&
                        PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_9_llvm_7155622891745679880_002fe310
              );
LAB_00188ca7:
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  (*(code *)PTR_memcpy_0030c8b8)(lVar7,pcVar14,lVar12);
  local_128 = lVar12;
  local_120 = lVar7;
  local_118 = lVar12;
  if (uVar15 != 0) {
    local_110 = lVar7;
    if (param_7 == 1) {
      lVar7 = 0;
      do {
        local_c8 = *(long *)(local_130 + lVar7);
        local_f8 = (undefined **)(local_c8 + 0x18);
        local_e8 = (int **)(local_c8 + 0x30);
        local_d8 = (undefined **)(local_c8 + 0x48);
        local_c8 = local_c8 + 0x60;
        local_f0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
        local_e0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
        local_d0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
        local_c0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
        local_88 = (int *)&DAT_002ff2e8;
        local_80 = (undefined *)0x5;
        local_68 = 0;
        local_78 = &local_f8;
        local_70 = 4;
                    /* try { // try from 00188b35 to 00188b4a has its CatchHandler @ 00188d40 */
        (*(code *)PTR_format_inner_0030c888)(&local_b8,&local_88);
        uVar10 = local_a8;
        uVar9 = local_b0;
        lVar3 = CONCAT44(uStack_b4,local_b8);
        if ((ulong)(local_128 - lVar12) < local_a8) {
                    /* try { // try from 00188bac to 00188bc6 has its CatchHandler @ 00188cbe */
          alloc::raw_vec::RawVecInner<A>::reserve::do_reserve_and_handle
                    (&local_128,lVar12,local_a8,1,1);
          local_110 = local_120;
          lVar12 = local_118;
        }
        (*(code *)PTR_memcpy_0030c8b8)(local_110 + lVar12,uVar9,uVar10);
        lVar12 = lVar12 + uVar10;
        local_118 = lVar12;
        if (lVar3 != 0) {
          (*(code *)PTR___rust_dealloc_0030c810)(uVar9,lVar3,1);
        }
        lVar7 = lVar7 + 8;
      } while (uVar15 * 8 != lVar7);
    }
    else {
      lVar7 = 0;
      do {
        local_f8 = *(undefined ***)(local_130 + lVar7);
        local_e8 = (int **)(local_f8 + 9);
        local_d8 = local_f8 + 0xc;
        local_f0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
        local_e0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
        local_d0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
        local_88 = (int *)&DAT_002ff338;
        local_80 = (undefined *)0x4;
        local_68 = 0;
        local_78 = &local_f8;
        local_70 = 3;
                    /* try { // try from 001888f3 to 00188908 has its CatchHandler @ 00188d42 */
        (*(code *)PTR_format_inner_0030c888)(&local_b8,&local_88);
        uVar10 = local_a8;
        uVar9 = local_b0;
        lVar3 = CONCAT44(uStack_b4,local_b8);
        if ((ulong)(local_128 - lVar12) < local_a8) {
                    /* try { // try from 0018896a to 00188984 has its CatchHandler @ 00188cd3 */
          alloc::raw_vec::RawVecInner<A>::reserve::do_reserve_and_handle
                    (&local_128,lVar12,local_a8,1,1);
          local_110 = local_120;
          lVar12 = local_118;
        }
        (*(code *)PTR_memcpy_0030c8b8)(local_110 + lVar12,uVar9,uVar10);
        lVar12 = lVar12 + uVar10;
        local_118 = lVar12;
        if (lVar3 != 0) {
          (*(code *)PTR___rust_dealloc_0030c810)(uVar9,lVar3,1);
        }
        lVar7 = lVar7 + 8;
      } while (uVar15 * 8 != lVar7);
    }
  }
  if (local_100 != 0) {
    (*(code *)PTR___rust_dealloc_0030c810)(local_130,local_108,8);
  }
                    /* try { // try from 001889c3 to 001889e0 has its CatchHandler @ 00188d1d */
  (*(code *)PTR__join_0030c8a8)(&local_f8,local_98,local_90,local_58,local_50);
  pcVar2 = local_f0;
  lVar3 = local_120;
  lVar7 = local_128;
                    /* try { // try from 001889f5 to 00188a03 has its CatchHandler @ 00188cf0 */
  lVar12 = (*(code *)PTR_inner_0030ca68)(local_f0,local_e8,local_120,lVar12);
  if (lVar7 != 0) {
    (*(code *)PTR___rust_dealloc_0030c810)(lVar3,lVar7,1);
  }
  if (local_f8 != (undefined **)0x0) {
    (*(code *)PTR___rust_dealloc_0030c810)(pcVar2,local_f8,1);
  }
  if (lVar12 == 0) {
    if (local_a0 != 0) {
      (*(code *)PTR___rust_dealloc_0030c810)(local_98,local_a0,1);
    }
    return 0;
  }
                    /* try { // try from 00188a3a to 00188a41 has its CatchHandler @ 00188cee */
  uVar8 = anyhow::error::_<impl_core::convert::From<E>for_anyhow::Error>::from(lVar12);
LAB_00188a42:
  if (local_a0 != 0) {
    (*(code *)PTR___rust_dealloc_0030c810)(local_98,local_a0,1);
  }
  return uVar8;
}


