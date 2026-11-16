// ELF address 0x000000000008b0d0; run_config_matrix::publish_consolidated_outputs

/* WARNING: Type propagation algorithm not settling */
/* run_config_matrix::publish_consolidated_outputs */

undefined8 ******* __rustcall
run_config_matrix::publish_consolidated_outputs
          (undefined8 *****param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
          long param_6)

{
  byte bVar1;
  byte bVar2;
  code *pcVar3;
  undefined8 *******pppppppuVar4;
  undefined8 ******ppppppuVar5;
  undefined8 *******pppppppuVar6;
  undefined8 *******pppppppuVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  undefined8 ******ppppppuVar11;
  undefined1 auVar12 [16];
  undefined8 ******local_188;
  undefined8 *******local_180;
  undefined8 *******pppppppuStack_178;
  code *local_170;
  undefined8 *******local_168;
  undefined8 *******local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 *******local_148;
  undefined8 *******pppppppuStack_140;
  code *local_138;
  undefined8 *******local_128;
  undefined8 *******pppppppuStack_120;
  code *local_118;
  undefined4 local_104;
  undefined8 *****local_100;
  long local_f8;
  undefined8 *****local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 ******local_d8;
  undefined8 *******local_d0;
  undefined8 *******local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 *******local_98;
  undefined8 *******local_90;
  long local_88;
  long local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *******local_68;
  undefined1 local_60 [24];
  undefined1 local_48 [24];
  
  do {
    while( true ) {
      local_f8 = param_2;
      if (local_f8 == 0) goto LAB_0018b179;
      uVar8 = (uint)*(char *)((long)param_1 + local_f8 + -1);
      if (-1 < (int)uVar8) break;
      bVar1 = *(byte *)((long)param_1 + local_f8 + -2);
      if ((char)bVar1 < -0x40) {
        bVar2 = *(byte *)((long)param_1 + local_f8 + -3);
        if ((char)bVar2 < -0x40) {
          param_2 = local_f8 + -4;
          uVar9 = bVar2 & 0x3f | (*(byte *)((long)param_1 + local_f8 + -4) & 7) << 6;
        }
        else {
          param_2 = local_f8 + -3;
          uVar9 = bVar2 & 0xf;
        }
        uVar9 = bVar1 & 0x3f | uVar9 << 6;
      }
      else {
        param_2 = local_f8 + -2;
        uVar9 = bVar1 & 0x1f;
      }
      if ((uVar8 & 0x3f | uVar9 << 6) != 0x2f) goto LAB_0018b179;
    }
    param_2 = local_f8 + -1;
  } while (uVar8 == 0x2f);
LAB_0018b179:
  local_100 = param_1;
  case_hdfs_dir(&local_f0,param_1,local_f8,param_3,param_4);
                    /* try { // try from 0018b1b2 to 0018b29a has its CatchHandler @ 0018ba49 */
  hdfs_exists(&local_188,CONCAT44(uStack_e4,local_e8),CONCAT44(uStack_dc,uStack_e0));
  pppppppuVar6 = local_180;
  if ((char)local_188 == '\0') {
    if (((ulong)local_188 & 0x100) != 0) {
      local_d0 = (undefined8 *******)_<alloc::string::String_as_core::fmt::Display>::fmt;
      local_188 = (undefined8 ******)&PTR_s_refusing_to_overwrite_existing_H_002fe640;
      local_180 = (undefined8 *******)&DAT_00000001;
      local_168 = (undefined8 *******)0x0;
      pppppppuStack_178 = &local_d8;
      local_170 = (code *)0x1;
      local_d8 = &local_f0;
      (*(code *)PTR_format_inner_0030c888)(local_60,&local_188);
      pppppppuVar6 = (undefined8 *******)anyhow::error::_<impl_anyhow::Error>::msg(local_60);
      goto joined_r0x0018b834;
    }
    (*(code *)PTR__var_0030caa8)(&local_188,"SLURM_JOB_ID",0xc);
    pppppppuVar4 = pppppppuStack_178;
    pppppppuVar6 = local_180;
    local_80 = param_5;
    if ((int)local_188 == 1) {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_0030c830)();
      pppppppuVar7 = (undefined8 *******)(*(code *)PTR___rust_alloc_0030c808)(5,1);
      if (pppppppuVar7 == (undefined8 *******)0x0) {
                    /* try { // try from 0018b917 to 0018b92d has its CatchHandler @ 0018b992 */
        (*(code *)PTR_handle_error_0030c8e8)
                  (1,5,&
                       PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_9_llvm_7155622891745679880_002fe310
                  );
        goto LAB_0018b94a;
      }
      *(undefined1 *)((long)pppppppuVar7 + 4) = 0x6c;
      *(undefined4 *)pppppppuVar7 = 0x61636f6c;
      local_148 = (undefined8 *******)&DAT_00000005;
      local_138 = (code *)0x5;
      pppppppuStack_140 = pppppppuVar7;
      if (((ulong)pppppppuVar6 & 0x7fffffffffffffff) != 0) {
        (*(code *)PTR___rust_dealloc_0030c810)(pppppppuVar4,pppppppuVar6,1);
      }
    }
    else {
      local_138 = local_170;
      local_148 = local_180;
      pppppppuStack_140 = pppppppuStack_178;
    }
                    /* try { // try from 0018b32c to 0018b343 has its CatchHandler @ 0018b9e6 */
    (*(code *)PTR__var_0030caa8)(&local_188,"SLURM_ARRAY_TASK_ID/.staging--",0x13);
    if ((int)local_188 == 1) {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_0030c830)();
      pppppppuStack_120 = (undefined8 *******)(*(code *)PTR___rust_alloc_0030c808)(1,1);
      if (pppppppuStack_120 == (undefined8 *******)0x0) {
                    /* try { // try from 0018b930 to 0018b949 has its CatchHandler @ 0018b96e */
        (*(code *)PTR_handle_error_0030c8e8)
                  (1,1,&
                       PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_9_llvm_7155622891745679880_002fe310
                  );
LAB_0018b94a:
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      *(undefined1 *)pppppppuStack_120 = 0x30;
      local_128 = (undefined8 *******)&DAT_00000001;
      local_118 = (code *)0x1;
      if (((ulong)local_180 & 0x7fffffffffffffff) != 0) {
        (*(code *)PTR___rust_dealloc_0030c810)(pppppppuStack_178,local_180,1);
      }
    }
    else {
      local_118 = local_170;
      local_128 = local_180;
      pppppppuStack_120 = pppppppuStack_178;
    }
                    /* try { // try from 0018b3c1 to 0018b474 has its CatchHandler @ 0018ba10 */
    local_104 = (*(code *)PTR_id_0030cab0)();
    local_188 = &local_100;
    local_180 = (undefined8 *******)_<&T_as_core::fmt::Display>::fmt;
    pppppppuStack_178 = &local_148;
    local_170 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_168 = &local_128;
    local_160 = (undefined8 *******)_<alloc::string::String_as_core::fmt::Display>::fmt;
    local_158 = (undefined8 *******)&local_104;
    uStack_150 = (undefined8 *******)PTR_fmt_0030c9c0;
    local_d8 = (undefined8 ******)&DAT_002ff538;
    local_d0 = (undefined8 *******)&DAT_00000004;
    local_b8 = 0;
    local_c0 = 4;
    local_c8 = &local_188;
    (*(code *)PTR_format_inner_0030c888)(&local_78,&local_d8);
    local_a8 = local_78;
    uStack_a4 = uStack_74;
    uStack_a0 = uStack_70;
    uStack_9c = uStack_6c;
    local_98 = local_68;
    pppppppuVar4 = (undefined8 *******)CONCAT44(uStack_6c,uStack_70);
                    /* try { // try from 0018b49d to 0018b589 has its CatchHandler @ 0018b9eb */
    hdfs_exists(&local_188,pppppppuVar4,local_68);
    pppppppuVar6 = local_180;
    if ((char)local_188 == '\0') {
      if (((ulong)local_188 & 0x100) == 0) {
        local_188 = (undefined8 ******)0x130a2f;
        local_180 = (undefined8 *******)0x2;
        pppppppuStack_178 = (undefined8 *******)0x130a7e;
        local_170 = (code *)0x6;
        local_168 = (undefined8 *******)0x130a84;
        local_160 = (undefined8 *******)0x2;
        uStack_150 = local_68;
        local_158 = pppppppuVar4;
        pppppppuVar6 = (undefined8 *******)hadoop_ok(&local_188);
        if (pppppppuVar6 == (undefined8 *******)0x0) {
          local_90 = pppppppuVar4;
          if (param_6 != 0) {
            local_88 = param_6 * 0x18;
            lVar10 = 0;
            do {
                    /* try { // try from 0018b5f4 to 0018b601 has its CatchHandler @ 0018b9bc */
              (*(code *)PTR_from_utf8_lossy_0030ca10)
                        (&local_d8,*(undefined8 *)(local_80 + 8 + lVar10),
                         *(undefined8 *)(local_80 + 0x10 + lVar10));
              pppppppuVar4 = local_d0;
              local_188 = (undefined8 ******)0x130a2f;
              local_180 = (undefined8 *******)0x2;
              pppppppuStack_178 = (undefined8 *******)0x12fc4c;
              local_170 = (code *)0x4;
              local_168 = local_d0;
              local_160 = local_c8;
              local_158 = local_90;
              uStack_150 = local_68;
                    /* try { // try from 0018b657 to 0018b65e has its CatchHandler @ 0018b9be */
              pppppppuVar6 = (undefined8 *******)hadoop_ok(&local_188);
              ppppppuVar11 = local_d8;
              ppppppuVar5 = (undefined8 ******)((long)local_d8 * 2);
              if (pppppppuVar6 != (undefined8 *******)0x0) goto joined_r0x0018b7c1;
              if ((undefined8 ******)((long)local_d8 * 2) != (undefined8 ******)0x0) {
                (*(code *)PTR___rust_dealloc_0030c810)(pppppppuVar4,local_d8,1);
              }
              lVar10 = lVar10 + 0x18;
            } while (local_88 != lVar10);
          }
                    /* try { // try from 0018b697 to 0018b6f1 has its CatchHandler @ 0018b9eb */
          auVar12 = (*(code *)PTR_parent_0030cab8)(param_3,param_4);
          if (auVar12._0_8_ == 0) {
            _<T_as_alloc::slice::<impl[T]>::to_vec_in::ConvertVec>::to_vec
                      (&local_188,local_100,local_f8);
            ppppppuVar11 = local_188;
          }
          else {
            case_hdfs_dir(&local_188,local_100,local_f8,auVar12._0_8_,auVar12._8_8_);
            ppppppuVar11 = local_188;
          }
          uStack_150 = pppppppuStack_178;
          pppppppuVar4 = local_180;
          local_188 = (undefined8 ******)0x130a2f;
          local_180 = (undefined8 *******)0x2;
          pppppppuStack_178 = (undefined8 *******)0x130a7e;
          local_170 = (code *)0x6;
          local_168 = (undefined8 *******)0x130a84;
          local_160 = (undefined8 *******)0x2;
          local_158 = pppppppuVar4;
                    /* try { // try from 0018b748 to 0018b899 has its CatchHandler @ 0018b94c */
          pppppppuVar6 = (undefined8 *******)hadoop_ok(&local_188);
          ppppppuVar5 = ppppppuVar11;
          if (pppppppuVar6 == (undefined8 *******)0x0) {
            local_188 = (undefined8 ******)0x130a2f;
            local_180 = (undefined8 *******)0x2;
            pppppppuStack_178 = (undefined8 *******)0x130a86;
            local_170 = (code *)0x3;
            local_168 = local_90;
            local_160 = local_68;
            local_158 = (undefined8 *******)CONCAT44(uStack_e4,local_e8);
            uStack_150 = (undefined8 *******)CONCAT44(uStack_dc,uStack_e0);
            pppppppuVar6 = (undefined8 *******)hadoop_ok(&local_188);
            if (pppppppuVar6 == (undefined8 *******)0x0) {
              local_d8 = &local_f0;
              local_d0 = (undefined8 *******)_<alloc::string::String_as_core::fmt::Display>::fmt;
              local_188 = (undefined8 ******)&PTR_s___>_published_HDFS_case_002ff578;
              local_180 = (undefined8 *******)0x2;
              local_168 = (undefined8 *******)0x0;
              pppppppuStack_178 = &local_d8;
              local_170 = (code *)0x1;
              (*(code *)PTR__eprint_0030c908)(&local_188);
              if (ppppppuVar11 != (undefined8 ******)0x0) {
                (*(code *)PTR___rust_dealloc_0030c810)(pppppppuVar4,ppppppuVar11,1);
              }
              if (CONCAT44(uStack_a4,local_a8) != 0) {
                (*(code *)PTR___rust_dealloc_0030c810)(local_90,CONCAT44(uStack_a4,local_a8),1);
              }
              if (local_128 != (undefined8 *******)0x0) {
                (*(code *)PTR___rust_dealloc_0030c810)(pppppppuStack_120,local_128,1);
              }
              if (local_148 != (undefined8 *******)0x0) {
                (*(code *)PTR___rust_dealloc_0030c810)(pppppppuStack_140,local_148,1);
              }
              pppppppuVar6 = (undefined8 *******)0x0;
              goto joined_r0x0018b834;
            }
          }
joined_r0x0018b7c1:
          if (ppppppuVar5 != (undefined8 ******)0x0) {
            (*(code *)PTR___rust_dealloc_0030c810)(pppppppuVar4,ppppppuVar11,1);
          }
        }
      }
      else {
        local_d8 = (undefined8 ******)&local_a8;
        local_d0 = (undefined8 *******)_<alloc::string::String_as_core::fmt::Display>::fmt;
        local_188 = (undefined8 ******)&PTR_s_refusing_to_reuse_existing_HDFS_s_002ff598;
        local_180 = (undefined8 *******)&DAT_00000001;
        local_168 = (undefined8 *******)0x0;
        pppppppuStack_178 = &local_d8;
        local_170 = (code *)0x1;
        (*(code *)PTR_format_inner_0030c888)(local_48,&local_188);
        pppppppuVar6 = (undefined8 *******)anyhow::error::_<impl_anyhow::Error>::msg(local_48);
      }
    }
    if (CONCAT44(uStack_a4,local_a8) != 0) {
      (*(code *)PTR___rust_dealloc_0030c810)
                (CONCAT44(uStack_9c,uStack_a0),CONCAT44(uStack_a4,local_a8),1);
    }
    if (local_128 != (undefined8 *******)0x0) {
      (*(code *)PTR___rust_dealloc_0030c810)(pppppppuStack_120,local_128,1);
    }
    if (local_148 != (undefined8 *******)0x0) {
      (*(code *)PTR___rust_dealloc_0030c810)(pppppppuStack_140,local_148,1);
    }
  }
joined_r0x0018b834:
  if (local_f0 != (undefined8 *****)0x0) {
    (*(code *)PTR___rust_dealloc_0030c810)(CONCAT44(uStack_e4,local_e8),local_f0,1);
  }
  return pppppppuVar6;
}


