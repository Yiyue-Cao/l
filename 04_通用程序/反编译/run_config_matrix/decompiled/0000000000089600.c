// ELF address 0x0000000000089600; run_config_matrix::ConsolidatedOutputs::new

/* WARNING: Type propagation algorithm not settling */
/* run_config_matrix::ConsolidatedOutputs::new */

void __rustcall
run_config_matrix::ConsolidatedOutputs::new
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  code *pcVar1;
  undefined8 *******pppppppuVar2;
  undefined8 *******pppppppuVar3;
  undefined8 *******pppppppuVar4;
  undefined8 *******pppppppuVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *******local_270;
  undefined8 *******pppppppuStack_268;
  undefined8 local_260;
  undefined8 *******local_258;
  undefined8 *******local_250;
  undefined1 *local_248;
  undefined8 local_240;
  undefined8 *******local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined1 local_210;
  undefined4 local_20f;
  undefined2 local_20b;
  undefined1 local_209;
  undefined8 local_208;
  undefined8 *******local_200;
  undefined8 local_1f8;
  undefined8 *******local_1f0;
  undefined8 local_1e8;
  undefined8 **local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 *******local_1b0;
  undefined *local_1a8;
  undefined8 local_198;
  long lStack_190;
  undefined8 local_188;
  uint uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined1 uStack_160;
  undefined7 uStack_15f;
  undefined8 *******local_158;
  undefined8 *******local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  uint uStack_128;
  undefined4 uStack_124;
  undefined8 local_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  uint uStack_108;
  undefined4 uStack_104;
  undefined8 *******local_100;
  undefined8 *******local_f8;
  undefined *local_f0;
  int local_e8;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined8 *local_d8;
  undefined *local_d0;
  undefined8 *******local_c8;
  undefined8 *******pppppppuStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  long lStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  uint uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  uint uStack_38;
  undefined4 uStack_34;
  
  puVar6 = PTR__join_0030c8a8;
  (*(code *)PTR__join_0030c8a8)(&local_c8,param_2,param_3,"_consolidated",0xd);
  pppppppuVar3 = pppppppuStack_c0;
                    /* try { // try from 00189649 to 00189659 has its CatchHandler @ 00189f3c */
  (*(code *)puVar6)(&local_270,pppppppuStack_c0,local_b8,param_4,param_5);
  if (local_c8 != (undefined8 *******)0x0) {
    (*(code *)PTR___rust_dealloc_0030c810)(pppppppuVar3,local_c8,1);
  }
  uVar11 = local_260;
  pppppppuVar3 = pppppppuStack_268;
  local_c8 = (undefined8 *******)CONCAT35(local_c8._5_3_,0x1000001ff);
                    /* try { // try from 00189692 to 00189701 has its CatchHandler @ 00189f56 */
  lVar10 = (*(code *)PTR__create_0030ca60)(&local_c8,pppppppuStack_268,local_260);
  if (lVar10 != 0) {
    uVar11 = anyhow::error::_<impl_core::convert::From<E>for_anyhow::Error>::from(lVar10);
    param_1[1] = uVar11;
    *param_1 = 0x8000000000000000;
    local_158 = local_270;
    goto joined_r0x00189d75;
  }
  (*(code *)PTR__join_0030c8a8)(&local_158,pppppppuVar3,uVar11,"orders.csv",10);
  local_248 = (undefined1 *)0x1b600000000;
  local_240._5_3_ = (uint3)((ulong)local_240 >> 0x28) & 0xffff00;
  local_240 = CONCAT35(local_240._5_3_,0x100000000);
  local_240 = CONCAT44(local_240._4_4_,0x1000100);
                    /* try { // try from 0018973f to 00189759 has its CatchHandler @ 00189f02 */
  local_250 = local_150;
  (*(code *)PTR__open_0030ca70)(&local_208,&local_248,local_150,local_148);
  pppppppuVar4 = local_200;
  if ((int)local_208 == 1) {
    local_1f0 = local_250;
    local_1e8 = local_148;
    local_1b0 = &local_1f0;
    local_1a8 = PTR_fmt_0030c9a0;
    local_248 = anon_a85c86dceebc40abfd7301bfa39d5ef7_53_llvm_7186392037480701417;
    local_240 = 1;
    local_228 = 0;
    local_238 = &local_1b0;
    uStack_230 = 1;
                    /* try { // try from 001897d2 to 001897e4 has its CatchHandler @ 00189eae */
    (*(code *)PTR_format_inner_0030c888)(&local_140,&local_248);
                    /* try { // try from 001897e5 to 001897f4 has its CatchHandler @ 00189f02 */
    uVar11 = _<E_as_anyhow::context::ext::StdError>::ext_context(pppppppuVar4,&local_140);
    param_1[1] = uVar11;
    *param_1 = 0x8000000000000000;
    pppppppuVar2 = pppppppuVar3;
  }
  else {
    uVar8 = local_208._4_4_;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_0030c830)();
    lVar10 = (*(code *)PTR___rust_alloc_0030c808)(0x2000,1);
    if (lVar10 == 0) {
                    /* try { // try from 00189d99 to 00189daf has its CatchHandler @ 00189ea0 */
      (*(code *)PTR_handle_error_0030c8e8)
                (1,0x2000,anon_d209d26ed1c6d77eb81862810959c541_15_llvm_14933503498357101740);
LAB_00189dc9:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    local_188 = 0;
    uStack_180 = uStack_180 & 0xffffff00;
    uStack_17c = uVar8;
    local_178 = 0x8000000000000000;
    uStack_160 = 1;
    local_198 = 0x2000;
                    /* try { // try from 00189891 to 001898b1 has its CatchHandler @ 00189e8e */
    lStack_190 = lVar10;
    (*(code *)PTR__join_0030c8a8)(&local_100,pppppppuVar3,uVar11,"equity.csv",10);
    local_248 = (undefined1 *)0x1b600000000;
    local_240._5_3_ = (uint3)((ulong)local_240 >> 0x28) & 0xffff00;
    local_240 = CONCAT35(local_240._5_3_,0x100000000);
    local_240 = CONCAT44(local_240._4_4_,0x1000100);
                    /* try { // try from 001898ef to 0018990c has its CatchHandler @ 00189ec1 */
    local_258 = local_f8;
    (*(code *)PTR__open_0030ca70)(&local_1c0,&local_248,local_f8,local_f0);
    uVar9 = local_1b8;
    if ((int)local_1c0 == 1) {
      local_1b0 = local_258;
      local_1a8 = local_f0;
      local_208 = &local_1b0;
      local_200 = (undefined8 *******)PTR_fmt_0030c9a0;
      local_248 = anon_a85c86dceebc40abfd7301bfa39d5ef7_53_llvm_7186392037480701417;
      local_240 = 1;
      local_228 = 0;
      uStack_230 = 1;
                    /* try { // try from 0018997d to 0018998f has its CatchHandler @ 00189e2f */
      local_238 = (undefined8 *******)&local_208;
      (*(code *)PTR_format_inner_0030c888)(&local_1f0,&local_248);
                    /* try { // try from 00189990 to 0018999f has its CatchHandler @ 00189ec1 */
      uVar11 = _<E_as_anyhow::context::ext::StdError>::ext_context(uVar9,&local_1f0);
      param_1[1] = uVar11;
      *param_1 = 0x8000000000000000;
                    /* try { // try from 001899b3 to 001899bf has its CatchHandler @ 00189df5 */
      core::ptr::drop_in_place<run_config_matrix::CsvAppender>(&local_198);
      pppppppuVar4 = pppppppuVar3;
      pppppppuVar5 = local_270;
    }
    else {
      uVar8 = local_1c0._4_4_;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_0030c830)();
      uStack_138 = (*(code *)PTR___rust_alloc_0030c808)(0x2000,1);
      if (uStack_138 == 0) {
                    /* try { // try from 00189db2 to 00189dc8 has its CatchHandler @ 00189e1f */
        (*(code *)PTR_handle_error_0030c8e8)
                  (1,0x2000,anon_d209d26ed1c6d77eb81862810959c541_15_llvm_14933503498357101740);
        goto LAB_00189dc9;
      }
      local_130 = 0;
      uStack_128 = uStack_128 & 0xffffff00;
      uStack_124 = uVar8;
      local_120 = 0x8000000000000000;
      uStack_108 = uStack_108 & 0xffffff00;
      local_140 = 0x2000;
                    /* try { // try from 00189a4a to 00189a67 has its CatchHandler @ 00189dfd */
      (*(code *)PTR__join_0030c8a8)
                (&local_208,pppppppuVar3,uVar11,
                 "trade_pairs.csv_order.csv_equity.csv_trade_pair.csv",0xf);
      pppppppuVar4 = local_200;
      local_1f0 = (undefined8 *******)0x1b600000000;
      local_1e8 = (ulong)local_1e8._6_2_ << 0x30;
      local_1e8 = CONCAT35(local_1e8._5_3_,0x100000000);
      local_1e8 = CONCAT44(local_1e8._4_4_,0x1000100);
                    /* try { // try from 00189ab4 to 00189acf has its CatchHandler @ 00189e45 */
      (*(code *)PTR__open_0030ca70)(&local_e8,&local_1f0,local_200,local_1f8);
      if (local_e8 == 1) {
        local_1c0 = pppppppuVar4;
        local_1b8 = local_1f8;
        local_d0 = PTR_fmt_0030c9a0;
        local_1f0 = (undefined8 *******)
                    anon_a85c86dceebc40abfd7301bfa39d5ef7_53_llvm_7186392037480701417;
        local_1e8 = 1;
        local_1d0 = 0;
        local_1e0 = &local_d8;
        local_1d8 = 1;
                    /* try { // try from 00189b50 to 00189b65 has its CatchHandler @ 00189dcb */
        local_d8 = &local_1c0;
        (*(code *)PTR_format_inner_0030c888)(&local_1b0,&local_1f0);
                    /* try { // try from 00189b66 to 00189b90 has its CatchHandler @ 00189e45 */
        uVar11 = _<E_as_anyhow::context::ext::StdError>::ext_context(local_e0,&local_1b0);
      }
      else {
        std::io::buffered::bufwriter::BufWriter<W>::with_capacity(&local_248,0x2000,local_e4);
        uVar11 = local_240;
        puVar7 = local_248;
        local_228 = 0x8000000000000000;
        local_210 = 1;
        if (local_248 != (undefined1 *)0x8000000000000000) {
          param_1[0x19] = local_218;
          *(undefined1 *)(param_1 + 0x1a) = 1;
          *(undefined4 *)((long)param_1 + 0xd1) = local_20f;
          *(undefined2 *)((long)param_1 + 0xd5) = local_20b;
          *(undefined1 *)((long)param_1 + 0xd7) = local_209;
          param_1[0x17] = 0x8000000000000000;
          param_1[0x18] = local_220;
          param_1[0x15] = local_238;
          param_1[0x16] = uStack_230;
          local_c8 = local_270;
          pppppppuStack_c0 = pppppppuStack_268;
          local_b8 = local_260;
          uStack_98 = CONCAT44(uStack_17c,uStack_180);
          uStack_78 = CONCAT71(uStack_15f,uStack_160);
          local_b0 = local_198;
          lStack_a8 = lStack_190;
          local_a0 = local_188;
          local_90 = local_178;
          uStack_88 = uStack_170;
          local_80 = local_168;
          local_40 = local_110;
          uStack_3c = uStack_10c;
          uStack_38 = uStack_108;
          uStack_34 = uStack_104;
          local_50 = (undefined4)local_120;
          uStack_4c = local_120._4_4_;
          uStack_48 = uStack_118;
          uStack_44 = uStack_114;
          local_60 = (undefined4)local_130;
          uStack_5c = local_130._4_4_;
          uStack_58 = uStack_128;
          uStack_54 = uStack_124;
          local_70 = (undefined4)local_140;
          uStack_6c = local_140._4_4_;
          uStack_68 = (undefined4)uStack_138;
          uStack_64 = uStack_138._4_4_;
          (*(code *)PTR_memcpy_0030c8b8)(param_1,&local_c8,0x98);
          param_1[0x13] = puVar7;
          param_1[0x14] = uVar11;
          pppppppuVar5 = local_208;
          goto joined_r0x00189d3d;
        }
      }
      param_1[1] = uVar11;
      *param_1 = 0x8000000000000000;
                    /* try { // try from 00189bc7 to 00189bd3 has its CatchHandler @ 00189de3 */
      core::ptr::drop_in_place<run_config_matrix::CsvAppender>(&local_140);
                    /* try { // try from 00189bd4 to 00189be0 has its CatchHandler @ 00189dde */
      core::ptr::drop_in_place<run_config_matrix::CsvAppender>(&local_198);
      pppppppuVar5 = local_208;
      if (local_270 != (undefined8 *******)0x0) {
        (*(code *)PTR___rust_dealloc_0030c810)(pppppppuVar3,local_270,1);
        pppppppuVar5 = local_208;
      }
    }
joined_r0x00189d3d:
    pppppppuVar2 = local_258;
    local_270 = local_100;
    if (pppppppuVar5 != (undefined8 *******)0x0) {
      (*(code *)PTR___rust_dealloc_0030c810)(pppppppuVar4,pppppppuVar5,1);
      pppppppuVar2 = local_258;
      local_270 = local_100;
    }
  }
  pppppppuVar3 = local_250;
  if (local_270 != (undefined8 *******)0x0) {
    (*(code *)PTR___rust_dealloc_0030c810)(pppppppuVar2,local_270,1);
    pppppppuVar3 = local_250;
  }
joined_r0x00189d75:
  if (local_158 != (undefined8 *******)0x0) {
    (*(code *)PTR___rust_dealloc_0030c810)(pppppppuVar3,local_158,1);
  }
  return;
}


