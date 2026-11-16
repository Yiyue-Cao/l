// ELF address 0x000000000008a310; run_config_matrix::ConsolidatedOutputs::finish

/* WARNING: Removing unreachable block (ram,0x0018a657) */
/* run_config_matrix::ConsolidatedOutputs::finish */

void __rustcall run_config_matrix::ConsolidatedOutputs::finish(undefined8 *param_1,long *param_2)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined **local_f8;
  ulong uStack_f0;
  undefined ***local_e8;
  long lStack_e0;
  long local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined **local_b0;
  undefined1 *local_a8;
  ulong *local_a0;
  undefined *local_98;
  undefined8 uStack_90;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  ulong local_70;
  long local_68;
  ulong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [24];
  
  local_f8 = (undefined **)param_2[3];
  uStack_f0 = param_2[4];
  local_e8 = (undefined ***)param_2[5];
  lStack_e0 = param_2[6];
  local_d8 = param_2[7];
  uStack_d0 = (undefined4)param_2[8];
  uStack_cc = *(undefined4 *)((long)param_2 + 0x44);
  local_c8 = (undefined4)param_2[9];
  uStack_c4 = *(undefined4 *)((long)param_2 + 0x4c);
  uStack_c0 = (undefined4)param_2[10];
  uStack_bc = *(undefined4 *)((long)param_2 + 0x54);
                    /* try { // try from 0018a357 to 0018a36b has its CatchHandler @ 0018a7e0 */
  lVar4 = std::io::buffered::bufwriter::BufWriter<W>::flush_buf(&local_f8);
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = anyhow::error::_<impl_core::convert::From<E>for_anyhow::Error>::from(lVar4);
  }
                    /* try { // try from 0018a377 to 0018a381 has its CatchHandler @ 0018a7db */
  core::ptr::drop_in_place<run_config_matrix::CsvAppender>(&local_f8);
  if (lVar4 == 0) {
    local_f8 = (undefined **)param_2[0xb];
    uStack_f0 = param_2[0xc];
    local_e8 = (undefined ***)param_2[0xd];
    lStack_e0 = param_2[0xe];
    local_d8 = param_2[0xf];
    uStack_d0 = (undefined4)param_2[0x10];
    uStack_cc = *(undefined4 *)((long)param_2 + 0x84);
    local_c8 = (undefined4)param_2[0x11];
    uStack_c4 = *(undefined4 *)((long)param_2 + 0x8c);
    uStack_c0 = (undefined4)param_2[0x12];
    uStack_bc = *(undefined4 *)((long)param_2 + 0x94);
    if (local_d8 == -0x8000000000000000) {
      local_b0 = &PTR_s_cannot_finish_an_empty_consolida_002ff458;
      local_a8 = &DAT_00000001;
      local_a0 = (ulong *)&DAT_00000008;
      local_98 = (undefined *)0x0;
      uStack_90 = 0;
                    /* try { // try from 0018a6b2 to 0018a6bb has its CatchHandler @ 0018a7aa */
      lVar5 = anyhow::__private::format_err(&local_b0);
    }
    else {
                    /* try { // try from 0018a3c8 to 0018a3dc has its CatchHandler @ 0018a7aa */
      lVar5 = std::io::buffered::bufwriter::BufWriter<W>::flush_buf(&local_f8);
      if (lVar5 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = anyhow::error::_<impl_core::convert::From<E>for_anyhow::Error>::from(lVar5);
      }
    }
                    /* try { // try from 0018a3e7 to 0018a3ee has its CatchHandler @ 0018a7db */
    core::ptr::drop_in_place<run_config_matrix::CsvAppender>(&local_f8);
    if (lVar5 == 0) {
      local_f8 = (undefined **)param_2[0x13];
      uStack_f0 = param_2[0x14];
      local_e8 = (undefined ***)param_2[0x15];
      lStack_e0 = param_2[0x16];
      local_d8 = param_2[0x17];
      uStack_d0 = (undefined4)param_2[0x18];
      uStack_cc = *(undefined4 *)((long)param_2 + 0xc4);
      local_c8 = (undefined4)param_2[0x19];
      uStack_c4 = *(undefined4 *)((long)param_2 + 0xcc);
      uStack_c0 = (undefined4)param_2[0x1a];
      uStack_bc = *(undefined4 *)((long)param_2 + 0xd4);
      if (local_d8 == -0x8000000000000000) {
        local_b0 = &PTR_s_cannot_finish_an_empty_consolida_002ff458;
        local_a8 = &DAT_00000001;
        local_a0 = (ulong *)&DAT_00000008;
        local_98 = (undefined *)0x0;
        uStack_90 = 0;
                    /* try { // try from 0018a6e7 to 0018a6f0 has its CatchHandler @ 0018a792 */
        lVar5 = anyhow::__private::format_err(&local_b0);
      }
      else {
                    /* try { // try from 0018a497 to 0018a4ab has its CatchHandler @ 0018a792 */
        lVar5 = std::io::buffered::bufwriter::BufWriter<W>::flush_buf(&local_f8);
        if (lVar5 == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = anyhow::error::_<impl_core::convert::From<E>for_anyhow::Error>::from(lVar5);
        }
      }
                    /* try { // try from 0018a4b7 to 0018a535 has its CatchHandler @ 0018a7db */
      core::ptr::drop_in_place<run_config_matrix::CsvAppender>(&local_f8);
      if (lVar5 == 0) {
        (*(code *)PTR_read_dir_0030ca78)(&local_f8,param_2[1],param_2[2]);
        if ((char)uStack_f0 == '\x02') {
          uVar6 = anyhow::error::_<impl_core::convert::From<E>for_anyhow::Error>::from(local_f8);
          param_1[1] = uVar6;
          goto LAB_0018a500;
        }
        _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                  (&local_80,local_f8,uStack_f0 & 0xff,
                   &PTR_anon_78864cba7c864c4abc065484d6703ef5_12_llvm_5217919868339343686_002fe220);
        uVar8 = local_70;
        lVar5 = CONCAT44(uStack_74,uStack_78);
        if (1 < local_70) {
          if (local_70 < 0x15) {
            local_68 = local_70 * 0x18;
            lVar7 = 0x18;
            do {
                    /* try { // try from 0018a719 to 0018a720 has its CatchHandler @ 0018a781 */
              core::slice::sort::shared::smallsort::insert_tail(lVar5,lVar5 + lVar7);
              lVar7 = lVar7 + 0x18;
            } while (local_68 != lVar7);
            if (uVar8 == 3) {
              param_1[2] = local_70;
              *(undefined4 *)param_1 = local_80;
              *(undefined4 *)((long)param_1 + 4) = uStack_7c;
              *(undefined4 *)(param_1 + 1) = uStack_78;
              *(undefined4 *)((long)param_1 + 0xc) = uStack_74;
              if (*param_2 == 0) {
                return;
              }
              (*(code *)PTR___rust_dealloc_0030c810)(param_2[1],*param_2,1);
              return;
            }
          }
          else {
                    /* try { // try from 0018a76e to 0018a77b has its CatchHandler @ 0018a783 */
            core::slice::sort::stable::driftsort_main(lVar5,local_70,&local_f8);
          }
        }
        local_58 = (undefined4)param_2[1];
        uStack_54 = *(undefined4 *)((long)param_2 + 0xc);
        uStack_50 = (undefined4)param_2[2];
        uStack_4c = *(undefined4 *)((long)param_2 + 0x14);
        local_60 = uVar8;
        local_b0 = (undefined **)&local_58;
        local_a8 = PTR_fmt_0030c9a0;
        local_a0 = &local_60;
        local_98 = PTR_fmt_0030c9b8;
        local_f8 = &PTR_s_consolidated_output_expected_3_C_002ff4c8;
        uStack_f0 = 2;
        local_d8 = 0;
        local_e8 = &local_b0;
        lStack_e0 = 2;
                    /* try { // try from 0018a5c6 to 0018a5ed has its CatchHandler @ 0018a783 */
        (*(code *)PTR_format_inner_0030c888)(local_48,&local_f8);
        uVar6 = anyhow::error::_<impl_anyhow::Error>::msg(local_48);
        param_1[1] = uVar6;
        *param_1 = 0x8000000000000000;
        puVar3 = PTR___rust_dealloc_0030c810;
        if (uVar8 != 0) {
          puVar9 = (undefined8 *)(lVar5 + 8);
          do {
            if (puVar9[-1] != 0) {
              (*(code *)puVar3)(*puVar9,puVar9[-1],1);
            }
            puVar9 = puVar9 + 3;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        if (CONCAT44(uStack_7c,local_80) != 0) {
          (*(code *)PTR___rust_dealloc_0030c810)(lVar5,CONCAT44(uStack_7c,local_80) * 0x18,8);
        }
      }
      else {
        param_1[1] = lVar5;
LAB_0018a500:
        *param_1 = 0x8000000000000000;
      }
      bVar2 = false;
      bVar1 = false;
      lVar5 = *param_2;
      goto joined_r0x0018a515;
    }
    param_1[1] = lVar5;
  }
  else {
    param_1[1] = lVar4;
  }
  *param_1 = 0x8000000000000000;
  bVar2 = true;
  bVar1 = true;
  lVar5 = *param_2;
joined_r0x0018a515:
  if (lVar5 != 0) {
    (*(code *)PTR___rust_dealloc_0030c810)(param_2[1],lVar5,1);
    bVar1 = bVar2;
  }
  if (lVar4 != 0) {
                    /* try { // try from 0018a428 to 0018a42c has its CatchHandler @ 0018a7c2 */
    core::ptr::drop_in_place<run_config_matrix::CsvAppender>(param_2 + 0xb);
  }
  if (bVar1) {
    core::ptr::drop_in_place<run_config_matrix::CsvAppender>(param_2 + 0x13);
  }
  return;
}


