// ELF address 0x0000000000080790; run_config_matrix::main::{{closure}}

/* WARNING: Removing unreachable block (ram,0x00180d90) */
/* run_config_matrix::main::_{{closure}} */

void __rustcall
run_config_matrix::main::___closure__
          (undefined8 *param_1,undefined8 ******param_2,long param_3,undefined8 param_4,
          undefined8 param_5)

{
  undefined8 *****pppppuVar1;
  undefined8 *****pppppuVar2;
  undefined8 *****pppppuVar3;
  undefined *puVar4;
  undefined8 *****pppppuVar5;
  undefined8 ******ppppppuVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 ******ppppppuVar9;
  undefined8 *****pppppuVar10;
  undefined8 ******ppppppuVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 *****local_208;
  undefined8 *****pppppuStack_200;
  undefined8 *****pppppuStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 *****pppppuStack_1d8;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  int iStack_1c8;
  undefined4 uStack_1c4;
  undefined8 uStack_1c0;
  undefined8 *****local_1b0;
  undefined8 *****local_1a8;
  undefined8 *****local_1a0;
  undefined8 *****local_198;
  undefined8 *****pppppuStack_190;
  undefined8 *****local_188;
  undefined8 *****pppppuStack_180;
  undefined8 *****local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined8 ****appppuStack_150 [2];
  undefined8 uStack_140;
  undefined8 *****local_138;
  undefined8 *****pppppuStack_130;
  undefined8 *****local_128;
  undefined8 *****pppppuStack_120;
  undefined8 *****local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  undefined8 *****local_f0;
  undefined8 *****local_e8;
  undefined8 *****local_d8;
  undefined8 *****pppppuStack_d0;
  undefined8 *****local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 *****local_a8;
  undefined8 *****local_a0;
  undefined8 *****local_98;
  undefined8 *****local_90;
  undefined8 *****local_88;
  undefined8 *****local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *****local_68;
  undefined8 *****local_60;
  undefined8 *****local_58;
  ulong local_50;
  undefined8 *****local_48;
  undefined8 *****local_40;
  undefined *local_38;
  
  (*(code *)PTR_canonicalize_0030c9a8)(&local_138,param_4,param_5);
  pppppuVar5 = pppppuStack_130;
                    /* try { // try from 001807ea to 0018080a has its CatchHandler @ 00181300 */
  local_1a0 = local_128;
  local_1b0 = local_138;
  (*(code *)PTR_inner_0030c998)(&local_138,pppppuStack_130);
  pppppuVar1 = pppppuStack_130;
  local_1a8 = local_138;
  if ((undefined8 ******)local_138 == (undefined8 ******)0x8000000000000000) {
    local_d8 = pppppuVar5;
    pppppuStack_d0 = local_1a0;
    local_f0 = &local_d8;
    local_e8 = (undefined8 *****)PTR_fmt_0030c9a0;
    local_198 = (undefined8 *****)anon_a85c86dceebc40abfd7301bfa39d5ef7_43_llvm_7186392037480701417;
    pppppuStack_190 = (undefined8 *****)&DAT_00000001;
    local_178 = (undefined8 ******)0x0;
    local_188 = &local_f0;
    pppppuStack_180 = (undefined8 *****)&DAT_00000001;
                    /* try { // try from 001808b3 to 001808c5 has its CatchHandler @ 00181280 */
    (*(code *)PTR_format_inner_0030c888)(&local_218,&local_198);
    ppppppuVar11 = (undefined8 ******)local_1b0;
                    /* try { // try from 001808c6 to 001808da has its CatchHandler @ 00181300 */
    uVar8 = _<E_as_anyhow::context::ext::StdError>::ext_context(pppppuVar1,&local_218);
    param_1[1] = uVar8;
    *param_1 = 1;
    goto LAB_0018107c;
  }
                    /* try { // try from 001808f8 to 00180925 has its CatchHandler @ 00181298 */
  local_98 = pppppuStack_130;
  _<toml::de::Deserializer_as_serde_core::de::Deserializer>::deserialize_struct
            (&local_218,pppppuStack_130,local_128,"SourceCoverageFile",0x12,
             &PTR_anon_31d3382fdd57cc9e09073bf4d56a1a76_128_llvm_16042128466566773669_002fe7d8,4);
  ppppppuVar11 = uStack_210;
  if ((int)local_218 == 2) {
    local_138 = pppppuStack_200;
    pppppuStack_130 = pppppuStack_1f8;
    local_128 = uStack_1f0;
    pppppuStack_120 = uStack_1e8;
    local_118 = local_1e0;
    uStack_110 = (undefined8 ******)pppppuStack_1d8;
    ppppppuVar6 = uStack_110;
    local_108 = local_1d0;
    uStack_104 = uStack_1cc;
    iStack_100 = iStack_1c8;
    uStack_fc = uStack_1c4;
    ppppppuVar9 = (undefined8 ******)local_208;
    if (uStack_210 == (undefined8 ******)0x8000000000000000) goto LAB_00180c6a;
    uStack_110._0_4_ = SUB84(pppppuStack_1d8,0);
    uStack_110._4_4_ = (undefined4)((ulong)pppppuStack_1d8 >> 0x20);
    local_158 = (undefined8 ******)CONCAT44(uStack_1cc,local_1d0);
    local_168 = (undefined4)local_1e0;
    uStack_164 = local_1e0._4_4_;
    uStack_160 = (undefined4)uStack_110;
    uStack_15c = uStack_110._4_4_;
    local_178 = uStack_1f0;
    uStack_170 = (undefined4)uStack_1e8;
    uStack_16c = uStack_1e8._4_4_;
    local_188 = pppppuStack_200;
    pppppuStack_180 = pppppuStack_1f8;
    local_198 = uStack_210;
    pppppuStack_190 = local_208;
    uStack_110 = ppppppuVar6;
    if (iStack_1c8 == 1) {
      pppppuStack_200 = local_208 + (long)pppppuStack_200 * 3;
      local_218 = (undefined **)local_208;
      uStack_210 = (undefined8 ******)local_208;
      local_208 = ppppppuVar11;
                    /* try { // try from 001809ff to 00180a10 has its CatchHandler @ 00181238 */
      _<alloc::collections::btree::set::BTreeSet<T>as_core::iter::traits::collect::FromIterator<T>>
      ::from_iter(&local_78,&local_218);
      local_a0 = (undefined8 *****)CONCAT44(uStack_74,local_78);
      local_a8 = (undefined8 *****)CONCAT44(uStack_6c,uStack_70);
      local_88 = param_2;
      if ((undefined8 ******)local_a0 == (undefined8 ******)0x0) {
LAB_00180e3f:
        local_f0 = pppppuVar5;
        local_e8 = local_1a0;
        local_138 = &local_f0;
        pppppuStack_130 = (undefined8 *****)PTR_fmt_0030c9a0;
        local_128 = &local_88;
        pppppuStack_120 = (undefined8 *****)_<&T_as_core::fmt::Display>::fmt;
        local_218 = &PTR_DAT_002fe818;
        uStack_210 = (undefined8 ******)0x2;
        pppppuStack_1f8 = (undefined8 *****)0x0;
        local_208 = &local_138;
        pppppuStack_200 = (undefined8 ******)0x2;
                    /* try { // try from 00180ece to 00180eed has its CatchHandler @ 0018123a */
        (*(code *)PTR_format_inner_0030c888)(&local_d8,&local_218);
        uVar8 = anyhow::error::_<impl_anyhow::Error>::msg(&local_d8);
        param_1[1] = uVar8;
        *param_1 = 1;
        if ((undefined8 ******)local_a0 == (undefined8 ******)0x0) {
          local_68 = (undefined8 ******)0x0;
        }
        else {
          uStack_210 = (undefined8 ******)0x0;
          local_208 = local_a0;
          pppppuStack_200 = local_a8;
          uStack_1f0 = (undefined8 ******)0x0;
          uStack_1e8 = (undefined8 ******)local_a0;
          local_1e0 = (undefined8 ******)local_a8;
        }
        local_218 = (undefined **)(ulong)((undefined8 ******)local_a0 != (undefined8 ******)0x0);
                    /* try { // try from 00180f5b to 00180f6c has its CatchHandler @ 00181236 */
        pppppuStack_1f8 = (undefined8 *****)local_218;
        pppppuStack_1d8 = local_68;
        alloc::collections::btree::map::IntoIter<K,V,A>::dying_next(&local_138,&local_218);
        puVar4 = PTR___rust_dealloc_0030c810;
        if ((undefined8 ******)local_138 != (undefined8 ******)0x0) {
          do {
            if ((undefined8 *****)local_138[(long)local_128 * 3 + 1] != (undefined8 *****)0x0) {
              (*(code *)puVar4)(local_138[(long)local_128 * 3 + 2],
                                local_138[(long)local_128 * 3 + 1],1);
            }
                    /* try { // try from 00180fba to 00180fc4 has its CatchHandler @ 001812a2 */
            alloc::collections::btree::map::IntoIter<K,V,A>::dying_next(&local_138,&local_218);
          } while ((undefined8 ******)local_138 != (undefined8 ******)0x0);
        }
        goto LAB_00180fd2;
      }
      local_60 = param_2 + param_3 * 3;
      ppppppuVar11 = param_2 + 3;
      do {
        pppppuVar1 = param_2[1];
        pppppuVar2 = param_2[2];
        local_90 = local_a8;
        local_48 = local_a0;
        local_88 = param_2;
        local_58 = ppppppuVar11;
        while( true ) {
          local_50 = (ulong)*(ushort *)((long)local_48 + 0x112);
          lVar12 = (ulong)((uint)*(ushort *)((long)local_48 + 0x112) * 8) * 3;
          uVar13 = 0xffffffffffffffff;
          ppppppuVar11 = (undefined8 ******)local_48 + 1;
          do {
            uVar14 = local_50;
            if (lVar12 == 0) goto LAB_00180b48;
            pppppuVar3 = ppppppuVar11[2];
            pppppuVar10 = pppppuVar3;
            if (pppppuVar2 < pppppuVar3) {
              pppppuVar10 = pppppuVar2;
            }
            iVar7 = (*(code *)PTR_memcmp_0030c878)(pppppuVar1,ppppppuVar11[1],pppppuVar10);
            lVar15 = (long)pppppuVar2 - (long)pppppuVar3;
            if (iVar7 != 0) {
              lVar15 = (long)iVar7;
            }
            lVar12 = lVar12 + -0x18;
            uVar13 = uVar13 + 1;
            ppppppuVar11 = ppppppuVar11 + 3;
          } while ((char)((0 < lVar15) - (lVar15 < 0)) == '\x01');
          uVar14 = uVar13;
          if (0 < lVar15 == lVar15 < 0) break;
LAB_00180b48:
          if ((undefined8 ******)local_90 == (undefined8 ******)0x0) goto LAB_00180e3f;
          local_48 = (undefined8 *****)local_48[uVar14 + 0x23];
          local_90 = (undefined8 ******)((long)local_90 + -1);
        }
        ppppppuVar11 = (undefined8 ******)(local_58 + 3);
        param_2 = (undefined8 ******)local_58;
      } while (local_58 != local_60);
      pppppuStack_200 = local_178 + CONCAT44(uStack_16c,uStack_170) * 3;
      local_218 = (undefined **)local_178;
      uStack_210 = (undefined8 ******)local_178;
      local_208 = pppppuStack_180;
                    /* try { // try from 001810d8 to 001810e9 has its CatchHandler @ 00181217 */
      _<alloc::collections::btree::set::BTreeSet<T>as_core::iter::traits::collect::FromIterator<T>>
      ::from_iter(&local_d8,&local_218);
      local_208 = (undefined8 *****)CONCAT44(uStack_164,local_168);
      pppppuStack_200 = (undefined8 *****)CONCAT44(uStack_15c,uStack_160);
      local_218 = (undefined **)(ulong)((undefined8 ******)local_208 != (undefined8 ******)0x0);
      pppppuStack_1d8 = local_208;
      if ((undefined8 ******)local_208 != (undefined8 ******)0x0) {
        pppppuStack_1d8 = local_158;
      }
      uStack_210 = (undefined8 ******)0x0;
      uStack_1f0 = (undefined8 ******)0x0;
                    /* try { // try from 00181149 to 0018115a has its CatchHandler @ 00181203 */
      pppppuStack_1f8 = (undefined8 *****)local_218;
      uStack_1e8 = (undefined8 ******)local_208;
      local_1e0 = (undefined8 ******)pppppuStack_200;
      _<alloc::collections::btree::map::BTreeMap<K,V>as_core::iter::traits::collect::FromIterator<(K,V)>>
      ::from_iter(&local_138,&local_218);
      local_218 = (undefined **)CONCAT44(uStack_74,local_78);
      uStack_210 = (undefined8 ******)CONCAT44(uStack_6c,uStack_70);
      param_1[9] = local_128;
      param_1[7] = local_138;
      param_1[8] = pppppuStack_130;
      param_1[5] = pppppuStack_d0;
      param_1[6] = local_c8;
      param_1[3] = local_68;
      param_1[4] = local_d8;
      *(undefined4 *)(param_1 + 1) = local_78;
      *(undefined4 *)((long)param_1 + 0xc) = uStack_74;
      *(undefined4 *)(param_1 + 2) = uStack_70;
      *(undefined4 *)((long)param_1 + 0x14) = uStack_6c;
      *param_1 = 0;
      local_208 = local_68;
      uStack_1f0 = (undefined8 ******)local_c8;
      pppppuStack_1d8 = local_128;
      pppppuStack_200 = local_d8;
      pppppuStack_1f8 = pppppuStack_d0;
      uStack_1e8 = (undefined8 ******)local_138;
      local_1e0 = (undefined8 ******)pppppuStack_130;
      ppppppuVar11 = (undefined8 ******)local_1b0;
    }
    else {
      local_d8 = appppuStack_150;
      pppppuStack_d0 = (undefined8 *****)PTR_fmt_0030c9c0;
      local_218 = &PTR_s_unsupported_source_coverage_sche_002fe838;
      uStack_210 = (undefined8 ******)&DAT_00000001;
      pppppuStack_1f8 = (undefined8 ******)0x0;
      local_208 = &local_d8;
      pppppuStack_200 = (undefined8 *****)&DAT_00000001;
                    /* try { // try from 00180ceb to 00180d0a has its CatchHandler @ 0018124c */
      (*(code *)PTR_format_inner_0030c888)(&local_138,&local_218);
      uVar8 = anyhow::error::_<impl_anyhow::Error>::msg(&local_138);
      param_1[1] = uVar8;
      *param_1 = 1;
      puVar4 = PTR___rust_dealloc_0030c810;
      if ((undefined8 ******)local_188 != (undefined8 ******)0x0) {
        ppppppuVar9 = (undefined8 ******)(pppppuStack_190 + 1);
        ppppppuVar11 = (undefined8 ******)local_188;
        do {
          if (ppppppuVar9[-1] != (undefined8 *****)0x0) {
            (*(code *)puVar4)(*ppppppuVar9,ppppppuVar9[-1],1);
          }
          ppppppuVar9 = ppppppuVar9 + 3;
          ppppppuVar11 = (undefined8 ******)((long)ppppppuVar11 + -1);
        } while (ppppppuVar11 != (undefined8 ******)0x0);
      }
      if ((undefined8 ******)local_198 != (undefined8 ******)0x0) {
        (*(code *)PTR___rust_dealloc_0030c810)(pppppuStack_190,(long)local_198 * 0x18,8);
      }
LAB_00180fd2:
      puVar4 = PTR___rust_dealloc_0030c810;
      lVar12 = CONCAT44(uStack_16c,uStack_170);
      if (lVar12 != 0) {
        ppppppuVar11 = (undefined8 ******)(local_178 + 1);
        do {
          if (ppppppuVar11[-1] != (undefined8 *****)0x0) {
            (*(code *)puVar4)(*ppppppuVar11,ppppppuVar11[-1],1);
          }
          ppppppuVar11 = ppppppuVar11 + 3;
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
      }
      if ((undefined8 ******)pppppuStack_180 != (undefined8 ******)0x0) {
        (*(code *)PTR___rust_dealloc_0030c810)(local_178,(long)pppppuStack_180 * 0x18,8);
      }
                    /* try { // try from 0018104f to 00181053 has its CatchHandler @ 00181298 */
      _<alloc::collections::btree::map::BTreeMap<K,V,A>as_core::ops::drop::Drop>::drop(&local_168);
      ppppppuVar11 = (undefined8 ******)local_1b0;
    }
  }
  else {
    uStack_140 = uStack_1c0;
    local_158 = (undefined8 ******)pppppuStack_1d8;
    local_168 = (undefined4)uStack_1e8;
    uStack_164 = uStack_1e8._4_4_;
    uStack_160 = (undefined4)local_1e0;
    uStack_15c = local_1e0._4_4_;
    local_178 = pppppuStack_1f8;
    uStack_170 = (undefined4)uStack_1f0;
    uStack_16c = uStack_1f0._4_4_;
    local_188 = local_208;
    pppppuStack_180 = pppppuStack_200;
    local_198 = (undefined8 *****)local_218;
    pppppuStack_190 = uStack_210;
    local_88 = pppppuVar5;
    local_80 = local_1a0;
    local_40 = &local_88;
    local_38 = PTR_fmt_0030c9a0;
    local_d8 = (undefined8 *****)anon_a85c86dceebc40abfd7301bfa39d5ef7_45_llvm_7186392037480701417;
    pppppuStack_d0 = (undefined8 *****)&DAT_00000001;
    local_b8 = 0;
    local_c8 = &local_40;
    local_c0 = 1;
                    /* try { // try from 00180c3f to 00180c54 has its CatchHandler @ 00181263 */
    (*(code *)PTR_format_inner_0030c888)(&local_f0,&local_d8);
                    /* try { // try from 00180c55 to 00180c69 has its CatchHandler @ 00181298 */
    ppppppuVar9 = (undefined8 ******)
                  _<E_as_anyhow::context::ext::StdError>::ext_context(&local_198,&local_f0);
LAB_00180c6a:
    param_1[1] = ppppppuVar9;
    *param_1 = 1;
    ppppppuVar11 = (undefined8 ******)local_1b0;
  }
  local_1b0 = ppppppuVar11;
  if ((undefined8 ******)local_1a8 != (undefined8 ******)0x0) {
    (*(code *)PTR___rust_dealloc_0030c810)(local_98,local_1a8,1);
  }
LAB_0018107c:
  if (ppppppuVar11 != (undefined8 ******)0x0) {
    (*(code *)PTR___rust_dealloc_0030c810)(pppppuVar5,ppppppuVar11,1);
  }
  return;
}


