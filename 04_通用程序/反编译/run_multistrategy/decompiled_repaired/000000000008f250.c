// ELF address 0x000000000008f250; <toml_edit::de::table::TableDeserializer as serde_core::de::Deserializer>::deserialize_any

/* _<toml_edit::de::table::TableDeserializer as serde_core::de::Deserializer>::deserialize_any */

long * __rustcall
_<toml_edit::de::table::TableDeserializer_as_serde_core::de::Deserializer>::deserialize_any
          (long *param_1)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  char cVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined1 uVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  bool bVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  ulong local_648;
  char local_639;
  ulong local_630;
  ulong uStack_628;
  ulong local_620;
  long local_618;
  long lStack_610;
  long local_608;
  long local_600;
  undefined **ppuStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  ulong uStack_5d8;
  ulong uStack_5d0;
  long lStack_5c8;
  long lStack_5c0;
  long lStack_5b8;
  long lStack_5a8;
  long lStack_5a0;
  long lStack_598;
  long local_588;
  long lStack_580;
  long local_578;
  long local_570;
  undefined **local_568;
  char local_560;
  undefined7 uStack_55f;
  undefined1 uStack_558;
  undefined7 uStack_557;
  undefined1 local_550;
  undefined7 uStack_54f;
  undefined1 local_548;
  undefined7 uStack_547;
  undefined1 uStack_540;
  undefined7 uStack_53f;
  undefined4 local_538;
  undefined4 uStack_534;
  undefined4 uStack_530;
  undefined4 uStack_52c;
  undefined1 local_528;
  undefined4 uStack_527;
  undefined4 uStack_523;
  undefined7 uStack_51f;
  undefined4 local_518;
  undefined4 uStack_514;
  undefined4 uStack_510;
  undefined4 uStack_50c;
  undefined1 local_4d8 [32];
  undefined1 uStack_4b8;
  long local_428;
  long lStack_420;
  long lStack_418;
  long lStack_410;
  undefined1 auStack_408 [16];
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined8 uStack_3e8;
  undefined7 uStack_3e0;
  undefined1 uStack_3d9;
  undefined7 uStack_3d8;
  ulong local_390;
  ulong uStack_388;
  ulong local_380;
  undefined1 local_378 [8];
  char (*local_370) [8];
  long local_368;
  int local_2e8;
  undefined4 uStack_2e4;
  char cStack_2e0;
  undefined7 uStack_2df;
  long lStack_2d8;
  long lStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  long local_258;
  long lStack_250;
  long local_248;
  undefined1 local_1a8 [24];
  undefined1 local_190 [144];
  long local_100;
  undefined1 auStack_f8 [168];
  undefined1 local_50 [8];
  long *local_48;
  long *local_38;
  
  (*(code *)PTR_new_002aea58)(local_1a8);
  puVar3 = PTR_memcpy_002ae8a8;
  local_618 = -0x8000000000000000;
  if (local_48 == local_38) {
    cVar9 = '\x02';
    lVar11 = 1;
    bVar19 = true;
    uVar13 = 0;
    lVar17 = 0;
    local_648 = 0x8000000000000000;
LAB_0018fb12:
                    /* try { // try from 0018fb12 to 0018fb2a has its CatchHandler @ 00190052 */
    serde_core::de::Error::missing_field(&local_568,"strategies",10);
    local_258 = CONCAT71(uStack_55f,local_560);
    lStack_250 = CONCAT71(uStack_557,uStack_558);
    local_248 = CONCAT71(uStack_54f,local_550);
    lVar18 = local_258;
    lVar5 = lStack_250;
    lVar6 = local_248;
    if (local_568 != (undefined **)0x2) {
      *(undefined4 *)(param_1 + 10) = local_518;
      *(undefined4 *)((long)param_1 + 0x54) = uStack_514;
      *(undefined4 *)(param_1 + 0xb) = uStack_510;
      *(undefined4 *)((long)param_1 + 0x5c) = uStack_50c;
      param_1[8] = CONCAT35((undefined3)uStack_523,CONCAT41(uStack_527,local_528));
      param_1[9] = CONCAT71(uStack_51f,uStack_523._3_1_);
      param_1[6] = CONCAT44(uStack_534,local_538);
      param_1[7] = CONCAT44(uStack_52c,uStack_530);
      param_1[4] = CONCAT71(uStack_547,local_548);
      param_1[5] = CONCAT71(uStack_53f,uStack_540);
      param_1[3] = local_248;
      param_1[1] = local_258;
      param_1[2] = lStack_250;
      *param_1 = (long)local_568;
      if (uVar13 != 0) {
        (*(code *)PTR___rust_dealloc_002ae838)(lVar11,uVar13,1);
      }
LAB_0018ff02:
      lVar17 = lStack_610;
      lVar11 = local_618;
      puVar3 = PTR___rust_dealloc_002ae838;
      if (local_618 != -0x8000000000000000) {
        if (local_608 != 0) {
          puVar12 = (undefined8 *)(lStack_610 + 0x38);
          lVar18 = local_608;
          do {
            if (puVar12[-7] != 0) {
              (*(code *)puVar3)(puVar12[-6],puVar12[-7],1);
            }
            if (puVar12[-4] != 0) {
              (*(code *)puVar3)(puVar12[-3],puVar12[-4],1);
            }
            if (puVar12[-1] != 0) {
              (*(code *)puVar3)(*puVar12,puVar12[-1],1);
            }
            puVar12 = puVar12 + 9;
            lVar18 = lVar18 + -1;
          } while (lVar18 != 0);
        }
        if (lVar11 != 0) {
          (*(code *)PTR___rust_dealloc_002ae838)(lVar17,lVar11 * 0x48,8);
        }
      }
      if ((bVar19) && ((local_648 & 0x7fffffffffffffff) != 0)) {
        (*(code *)PTR___rust_dealloc_002ae838)(local_600,local_648,1);
      }
                    /* try { // try from 0018ffdb to 0018ffdf has its CatchHandler @ 00190037 */
      _<alloc::vec::into_iter::IntoIter<T,A>as_core::ops::drop::Drop>::drop(local_50);
      goto LAB_0018ffe0;
    }
  }
  else {
    local_639 = '\x03';
    local_648 = 0x8000000000000000;
    do {
      lVar11 = *local_48;
      plVar7 = local_48 + 0x29;
      if (lVar11 == 0xc) break;
      plVar7 = local_48 + 0x16;
      plVar15 = local_48 + 1;
      local_48 = local_48 + 0x29;
      (*(code *)puVar3)(&local_428,plVar7,0x90);
      (*(code *)puVar3)(&lStack_250,plVar15,0xa8);
                    /* try { // try from 0018f380 to 0018f38d has its CatchHandler @ 001900fa */
      local_258 = lVar11;
      (*(code *)PTR_span_002aeda0)(&local_630,&local_428);
                    /* try { // try from 0018f38e to 0018f39c has its CatchHandler @ 001900fc */
      (*(code *)PTR_clone_002aedb0)(&local_2e8,&local_428);
      local_390 = local_630;
      uStack_388 = uStack_628;
      local_380 = local_620;
      (*(code *)puVar3)(local_378,&local_2e8,0x90);
      if (local_368 == 0x19) {
        auVar20[0] = -((*local_370)[0] ==
                      anon_fb1b398f95bb3e79a67d6051d46d5d2e_168_llvm_1171352784888483302[0]);
        auVar20[1] = -((*local_370)[1] ==
                      anon_fb1b398f95bb3e79a67d6051d46d5d2e_168_llvm_1171352784888483302[1]);
        auVar20[2] = -((*local_370)[2] ==
                      anon_fb1b398f95bb3e79a67d6051d46d5d2e_168_llvm_1171352784888483302[2]);
        auVar20[3] = -((*local_370)[3] ==
                      anon_fb1b398f95bb3e79a67d6051d46d5d2e_168_llvm_1171352784888483302[3]);
        auVar20[4] = -((*local_370)[4] ==
                      anon_fb1b398f95bb3e79a67d6051d46d5d2e_168_llvm_1171352784888483302[4]);
        auVar20[5] = -((*local_370)[5] ==
                      anon_fb1b398f95bb3e79a67d6051d46d5d2e_168_llvm_1171352784888483302[5]);
        auVar20[6] = -((*local_370)[6] ==
                      anon_fb1b398f95bb3e79a67d6051d46d5d2e_168_llvm_1171352784888483302[6]);
        auVar20[7] = -((*local_370)[7] ==
                      anon_fb1b398f95bb3e79a67d6051d46d5d2e_168_llvm_1171352784888483302[7]);
        auVar20[8] = -(local_370[1][0] ==
                      anon_fb1b398f95bb3e79a67d6051d46d5d2e_168_llvm_1171352784888483302[8]);
        auVar20[9] = -(local_370[1][1] == s__consumption_all_0012a81e[0]);
        auVar20[10] = -(local_370[1][2] == s__consumption_all_0012a81e[1]);
        auVar20[0xb] = -(local_370[1][3] == s__consumption_all_0012a81e[2]);
        auVar20[0xc] = -(local_370[1][4] == s__consumption_all_0012a81e[3]);
        auVar20[0xd] = -(local_370[1][5] == s__consumption_all_0012a81e[4]);
        auVar20[0xe] = -(local_370[1][6] == s__consumption_all_0012a81e[5]);
        auVar20[0xf] = -(local_370[1][7] == s__consumption_all_0012a81e[6]);
        auVar1 = *(undefined1 (*) [16])(local_370[1] + 1);
        auVar21[0] = -(s__consumption_all_0012a81e[0] == auVar1[0]);
        auVar21[1] = -(s__consumption_all_0012a81e[1] == auVar1[1]);
        auVar21[2] = -(s__consumption_all_0012a81e[2] == auVar1[2]);
        auVar21[3] = -(s__consumption_all_0012a81e[3] == auVar1[3]);
        auVar21[4] = -(s__consumption_all_0012a81e[4] == auVar1[4]);
        auVar21[5] = -(s__consumption_all_0012a81e[5] == auVar1[5]);
        auVar21[6] = -(s__consumption_all_0012a81e[6] == auVar1[6]);
        auVar21[7] = -(s__consumption_all_0012a81e[7] == auVar1[7]);
        auVar21[8] = -(s__consumption_all_0012a81e[8] == auVar1[8]);
        auVar21[9] = -(s__consumption_all_0012a81e[9] == auVar1[9]);
        auVar21[10] = -(s__consumption_all_0012a81e[10] == auVar1[10]);
        auVar21[0xb] = -(s__consumption_all_0012a81e[0xb] == auVar1[0xb]);
        auVar21[0xc] = -(s__consumption_all_0012a81e[0xc] == auVar1[0xc]);
        auVar21[0xd] = -(s__consumption_all_0012a81e[0xd] == auVar1[0xd]);
        auVar21[0xe] = -(s__consumption_all_0012a81e[0xe] == auVar1[0xe]);
        auVar21[0xf] = -(s__consumption_all_0012a81e[0xf] == auVar1[0xf]);
        auVar21 = auVar21 & auVar20;
        if ((ushort)((ushort)(SUB161(auVar21 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar21 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar21 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar21 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar21 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar21 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar21 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar21 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar21 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar21 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar21 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar21 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar21 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar21 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar21[0xf] >> 7) << 0xf) != 0xffff) goto LAB_0018f484;
        uVar14 = 1;
      }
      else if (local_368 == 10) {
        if (*(char (*) [2])local_370[1] != s_es_0012a836 ||
            *local_370 != anon_fb1b398f95bb3e79a67d6051d46d5d2e_169_llvm_1171352784888483302)
        goto LAB_0018f484;
        uVar14 = 2;
      }
      else if ((local_368 == 9) &&
              (local_370[1][0] == s_g_0012a814[0] &&
               *local_370 == anon_fb1b398f95bb3e79a67d6051d46d5d2e_167_llvm_1171352784888483302)) {
        uVar14 = 0;
      }
      else {
LAB_0018f484:
        uVar14 = 3;
      }
                    /* try { // try from 0018f487 to 0018f493 has its CatchHandler @ 001900fc */
      core::ptr::drop_in_place<toml_edit::de::key::KeyDeserializer>(&local_390);
      (*(code *)puVar3)(&local_568,&local_428,0x90);
      (*(code *)puVar3)(local_4d8,&local_258,0xb0);
      if ((int)local_100 != 0xc) {
        core::ptr::drop_in_place<toml_edit::key::Key>(local_190);
                    /* try { // try from 0018f4d4 to 0018f4e0 has its CatchHandler @ 001900da */
        core::ptr::drop_in_place<toml_edit::item::Item>(&local_100);
      }
      (*(code *)puVar3)(local_190,&local_568,0x140);
      lVar11 = local_100;
                    /* WARNING: Switch is manually overridden */
      switch(uVar14) {
      case 0:
        if (local_648 != 0x8000000000000000) {
          serde_core::de::Error::duplicate_field(&local_568,"multi_tagliquidity_consumption_all",9);
LAB_0018feaf:
          param_1[10] = CONCAT44(uStack_514,local_518);
          param_1[0xb] = CONCAT44(uStack_50c,uStack_510);
          param_1[8] = CONCAT35((undefined3)uStack_523,CONCAT41(uStack_527,local_528));
          param_1[9] = CONCAT71(uStack_51f,uStack_523._3_1_);
          param_1[6] = CONCAT44(uStack_534,local_538);
          param_1[7] = CONCAT44(uStack_52c,uStack_530);
          param_1[4] = CONCAT71(uStack_547,local_548);
          param_1[5] = CONCAT71(uStack_53f,uStack_540);
          param_1[2] = CONCAT71(uStack_557,uStack_558);
          param_1[3] = CONCAT71(uStack_54f,local_550);
          *param_1 = (long)local_568;
          param_1[1] = CONCAT71(uStack_55f,local_560);
          bVar19 = true;
          goto LAB_0018ff02;
        }
                    /* try { // try from 0018f51b to 0018f52e has its CatchHandler @ 001900d8 */
        serde_core::de::MapAccess::next_value(&local_568,local_1a8);
        local_648 = CONCAT71(uStack_55f,local_560);
        lVar11 = CONCAT71(uStack_557,uStack_558);
        lVar17 = CONCAT71(uStack_54f,local_550);
        if (local_568 != (undefined **)0x2) {
          param_1[10] = CONCAT44(uStack_514,local_518);
          param_1[0xb] = CONCAT44(uStack_50c,uStack_510);
          param_1[8] = CONCAT35((undefined3)uStack_523,CONCAT41(uStack_527,local_528));
          param_1[9] = CONCAT71(uStack_51f,uStack_523._3_1_);
          param_1[6] = CONCAT44(uStack_534,local_538);
          param_1[7] = CONCAT44(uStack_52c,uStack_530);
          param_1[4] = CONCAT71(uStack_547,local_548);
          param_1[5] = CONCAT71(uStack_53f,uStack_540);
          param_1[1] = local_648;
          param_1[2] = CONCAT71(uStack_557,uStack_558);
          param_1[3] = CONCAT71(uStack_54f,local_550);
          *param_1 = (long)local_568;
          bVar19 = true;
          local_648 = 0x8000000000000000;
          goto LAB_0018ff02;
        }
        break;
      case 1:
        if (local_639 != '\x03') {
          serde_core::de::Error::duplicate_field(&local_568,"liquidity_consumption_all",0x19);
          goto LAB_0018feaf;
        }
        local_100 = 0xc;
        if (lVar11 == 0xc) {
LAB_0018fe29:
          local_100 = 0xc;
          local_568 = &PTR_s_no_more_values_in_next_value_see_002a2de0;
          local_560 = '\x01';
          uStack_55f = 0;
          uStack_558 = 8;
          uStack_557 = 0;
          local_550 = 0;
          uStack_54f = 0;
          local_548 = 0;
          uStack_547 = 0;
                    /* try { // try from 0018fe4e to 0018feae has its CatchHandler @ 00190121 */
          (*(code *)PTR_panic_fmt_002ae9e0)
                    (&local_568,&PTR_s__home_lyt__cargo_registry_src_rs_002a2df0);
          goto LAB_0018fe5e;
        }
        (*(code *)puVar3)(&local_390,local_190,0x90);
        local_258 = lVar11;
        (*(code *)puVar3)(&lStack_250,auStack_f8,0xa8);
                    /* try { // try from 0018f6af to 0018f6bf has its CatchHandler @ 001900bc */
        (*(code *)PTR_span_002aea30)(&local_568,&local_258);
        if ((int)local_568 == 1) {
          uStack_5e8 = CONCAT71(uStack_557,uStack_558);
          uStack_5f0 = CONCAT71(uStack_55f,local_560);
          ppuStack_5f8 = local_568;
        }
        else {
                    /* try { // try from 0018f7ca to 0018f7dc has its CatchHandler @ 001900bc */
          (*(code *)PTR_span_002aeda0)(&ppuStack_5f8,&local_390);
        }
        (*(code *)puVar3)(&local_568,&local_258,0xb0);
        uStack_4b8 = 0;
                    /* try { // try from 0018f7f7 to 0018f801 has its CatchHandler @ 0019009d */
        _<toml_edit::de::value::ValueDeserializer_as_serde_core::de::Deserializer>::
        deserialize_option(&local_2e8,&local_568);
        local_639 = cStack_2e0;
        if (local_2e8 == 2) {
          core::ptr::drop_in_place<toml_edit::key::Key>(&local_390);
          lVar11 = local_600;
          lVar17 = local_570;
          break;
        }
        local_518 = (undefined4)uStack_298;
        uStack_514 = (undefined4)((ulong)uStack_298 >> 0x20);
        uStack_510 = (undefined4)uStack_290;
        uStack_50c = (undefined4)((ulong)uStack_290 >> 0x20);
        local_528 = (undefined1)uStack_2a8;
        uStack_527 = (undefined4)((ulong)uStack_2a8 >> 8);
        uStack_523._0_3_ = (undefined3)((ulong)uStack_2a8 >> 0x28);
        uStack_523._3_1_ = (undefined1)uStack_2a0;
        uStack_51f = (undefined7)((ulong)uStack_2a0 >> 8);
        local_568 = (undefined **)CONCAT44(uStack_2e4,local_2e8);
        local_538 = uStack_2b8;
        uStack_534 = uStack_2b4;
        uStack_530 = uStack_2b0;
        uStack_52c = uStack_2ac;
        local_548 = (undefined1)uStack_2c8;
        uStack_547 = (undefined7)((ulong)uStack_2c8 >> 8);
        uStack_540 = (undefined1)uStack_2c0;
        uStack_53f = (undefined7)((ulong)uStack_2c0 >> 8);
        uStack_558 = (undefined1)lStack_2d8;
        uStack_557 = (undefined7)((ulong)lStack_2d8 >> 8);
        local_550 = (undefined1)lStack_2d0;
        uStack_54f = (undefined7)((ulong)lStack_2d0 >> 8);
        local_560 = cStack_2e0;
        uStack_55f = uStack_2df;
                    /* try { // try from 0018f88c to 0018f899 has its CatchHandler @ 00190091 */
        (*(code *)PTR_span_002aea40)(&local_630,&local_568);
        uVar16 = local_380;
        uVar13 = uStack_388;
        if ((local_630 & 1) != 0) {
          if (-1 < (long)local_380) goto LAB_0018f949;
LAB_0018fb9f:
          uVar10 = 0;
          uVar16 = uStack_5d0;
LAB_0018fba2:
                    /* try { // try from 0018fba2 to 0018fbba has its CatchHandler @ 0019012d */
          uStack_5d0 = uVar16;
          (*(code *)PTR_handle_error_002ae8e8)
                    (uVar10,uStack_5d0,
                     &PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_9_llvm_7155622891745679880_002a2e30)
          ;
LAB_0018fe5e:
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        uStack_558 = (undefined1)uStack_5e8;
        uStack_557 = (undefined7)((ulong)uStack_5e8 >> 8);
        local_568 = ppuStack_5f8;
        local_560 = (char)uStack_5f0;
        uStack_55f = (undefined7)((ulong)uStack_5f0 >> 8);
        if ((long)local_380 < 0) goto LAB_0018fb9f;
LAB_0018f949:
        if (local_380 == 0) {
          uVar8 = 1;
        }
        else {
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002ae858)();
          uVar10 = 1;
          uVar8 = (*(code *)PTR___rust_alloc_002ae830)(uVar16,1);
          if (uVar8 == 0) goto LAB_0018fba2;
        }
        (*(code *)puVar3)(uVar8,uVar13,uVar16);
        local_630 = uVar16;
        local_620 = uVar16;
                    /* try { // try from 0018fa57 to 0018fa64 has its CatchHandler @ 00190091 */
        uStack_628 = uVar8;
        uStack_5d0 = uVar8;
        (*(code *)PTR_add_key_002aeda8)(&local_568,&local_630);
        local_639 = local_560;
        ppuVar4 = local_568;
        local_428 = CONCAT17(uStack_558,uStack_55f);
        lStack_420 = CONCAT17(local_550,uStack_557);
        lStack_418 = CONCAT17(local_548,uStack_54f);
        lStack_410 = CONCAT17(uStack_540,uStack_547);
        auStack_408._7_4_ = local_538;
        auStack_408._0_7_ = uStack_53f;
        auStack_408._11_4_ = uStack_534;
        auStack_408[0xf] = (undefined1)uStack_530;
        uStack_3f8 = CONCAT13((undefined1)uStack_52c,uStack_530._1_3_);
        uStack_3f4 = CONCAT13(local_528,uStack_52c._1_3_);
        uStack_3f0 = uStack_527;
        uStack_3ec = uStack_523;
        uStack_3e8 = CONCAT17((undefined1)local_518,uStack_51f);
        uStack_3e0 = CONCAT43(uStack_514,local_518._1_3_);
        uStack_3d9 = (undefined1)uStack_510;
        uStack_3d8 = (undefined7)(CONCAT44(uStack_50c,uStack_510) >> 8);
        core::ptr::drop_in_place<toml_edit::key::Key>(&local_390);
        lVar11 = local_600;
        lVar17 = local_570;
        if (ppuVar4 != (undefined **)0x2) {
          param_1[0xb] = CONCAT71(uStack_3d8,uStack_3d9);
          *(undefined8 *)((long)param_1 + 0x49) = uStack_3e8;
          *(ulong *)((long)param_1 + 0x51) = CONCAT17(uStack_3d9,uStack_3e0);
          *(ulong *)((long)param_1 + 0x39) = CONCAT44(uStack_3f4,uStack_3f8);
          *(ulong *)((long)param_1 + 0x41) = CONCAT44(uStack_3ec,uStack_3f0);
          *(undefined8 *)((long)param_1 + 0x29) = auStack_408._0_8_;
          *(undefined8 *)((long)param_1 + 0x31) = auStack_408._8_8_;
          *(long *)((long)param_1 + 0x19) = lStack_418;
          *(long *)((long)param_1 + 0x21) = lStack_410;
          *(long *)((long)param_1 + 9) = local_428;
          *(long *)((long)param_1 + 0x11) = lStack_420;
          *param_1 = (long)ppuVar4;
          *(char *)(param_1 + 1) = local_639;
          bVar19 = true;
          goto LAB_0018ff02;
        }
        break;
      case 2:
        if (local_618 != -0x8000000000000000) {
          serde_core::de::Error::duplicate_field(&local_568,"strategies",10);
          goto LAB_0018feaf;
        }
        local_100 = 0xc;
        if (lVar11 == 0xc) goto LAB_0018fe29;
        (*(code *)puVar3)(&local_390,local_190,0x90);
        local_258 = lVar11;
        (*(code *)puVar3)(&lStack_250,auStack_f8,0xa8);
                    /* try { // try from 0018f5d9 to 0018f5e9 has its CatchHandler @ 001900a4 */
        (*(code *)PTR_span_002aea30)(&local_568,&local_258);
        if ((int)local_568 == 1) {
          uStack_5e8 = CONCAT71(uStack_557,uStack_558);
          uStack_5f0 = CONCAT71(uStack_55f,local_560);
          ppuStack_5f8 = local_568;
        }
        else {
                    /* try { // try from 0018f6ef to 0018f701 has its CatchHandler @ 001900a4 */
          (*(code *)PTR_span_002aeda0)(&ppuStack_5f8,&local_390);
        }
        (*(code *)puVar3)(&local_568,&local_258,0xb0);
        uStack_4b8 = 0;
                    /* try { // try from 0018f71c to 0018f726 has its CatchHandler @ 0019009f */
        _<toml_edit::de::value::ValueDeserializer_as_serde_core::de::Deserializer>::deserialize_any
                  (&local_2e8,&local_568);
        if (local_2e8 == 2) {
          lStack_5b8 = lStack_2d0;
          lStack_5c8 = CONCAT71(uStack_2df,cStack_2e0);
          lStack_5c0 = lStack_2d8;
          core::ptr::drop_in_place<toml_edit::key::Key>(&local_390);
        }
        else {
          local_518 = (undefined4)uStack_298;
          uStack_514 = (undefined4)((ulong)uStack_298 >> 0x20);
          uStack_510 = (undefined4)uStack_290;
          uStack_50c = (undefined4)((ulong)uStack_290 >> 0x20);
          local_528 = (undefined1)uStack_2a8;
          uStack_527 = (undefined4)((ulong)uStack_2a8 >> 8);
          uStack_523._0_3_ = (undefined3)((ulong)uStack_2a8 >> 0x28);
          uStack_523._3_1_ = (undefined1)uStack_2a0;
          uStack_51f = (undefined7)((ulong)uStack_2a0 >> 8);
          local_568 = (undefined **)CONCAT44(uStack_2e4,local_2e8);
          local_538 = uStack_2b8;
          uStack_534 = uStack_2b4;
          uStack_530 = uStack_2b0;
          uStack_52c = uStack_2ac;
          local_548 = (undefined1)uStack_2c8;
          uStack_547 = (undefined7)((ulong)uStack_2c8 >> 8);
          uStack_540 = (undefined1)uStack_2c0;
          uStack_53f = (undefined7)((ulong)uStack_2c0 >> 8);
          uStack_558 = (undefined1)lStack_2d8;
          uStack_557 = (undefined7)((ulong)lStack_2d8 >> 8);
          local_550 = (undefined1)lStack_2d0;
          uStack_54f = (undefined7)((ulong)lStack_2d0 >> 8);
          local_560 = cStack_2e0;
          uStack_55f = uStack_2df;
                    /* try { // try from 0018f79b to 0018f7a8 has its CatchHandler @ 0019008f */
          (*(code *)PTR_span_002aea40)(&local_630,&local_568);
          uVar16 = local_380;
          uVar13 = uStack_388;
          if ((local_630 & 1) != 0) {
            if (-1 < (long)local_380) goto LAB_0018f8ec;
LAB_0018fb82:
            uVar10 = 0;
LAB_0018fb84:
                    /* try { // try from 0018fb84 to 0018fb99 has its CatchHandler @ 0019012f */
            (*(code *)PTR_handle_error_002ae8e8)
                      (uVar10,uStack_5d8,
                       &
                       PTR_anon_7f24772ccdb201d5cf4d15b4b5d2cc93_9_llvm_7155622891745679880_002a2e30
                      );
            goto LAB_0018fe5e;
          }
          uStack_558 = (undefined1)uStack_5e8;
          uStack_557 = (undefined7)((ulong)uStack_5e8 >> 8);
          local_568 = ppuStack_5f8;
          local_560 = (char)uStack_5f0;
          uStack_55f = (undefined7)((ulong)uStack_5f0 >> 8);
          if ((long)local_380 < 0) goto LAB_0018fb82;
LAB_0018f8ec:
          if (local_380 == 0) {
            uVar8 = 1;
          }
          else {
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_002ae858)();
            uVar8 = (*(code *)PTR___rust_alloc_002ae830)(uVar16,1);
            if (uVar8 == 0) {
              uVar10 = 1;
              uStack_5d8 = uVar16;
              goto LAB_0018fb84;
            }
          }
          (*(code *)puVar3)(uVar8,uVar13,uVar16);
          local_630 = uVar16;
          local_620 = uVar16;
                    /* try { // try from 0018f9a4 to 0018f9b1 has its CatchHandler @ 0019008f */
          uStack_628 = uVar8;
          uStack_5d8 = uVar8;
          (*(code *)PTR_add_key_002aeda8)(&local_568,&local_630);
          ppuVar4 = local_568;
          lStack_5c8 = CONCAT71(uStack_55f,local_560);
          lStack_5c0 = CONCAT71(uStack_557,uStack_558);
          lStack_5b8 = CONCAT71(uStack_54f,local_550);
          local_428 = CONCAT71(uStack_547,local_548);
          lStack_420 = CONCAT71(uStack_53f,uStack_540);
          lStack_418 = CONCAT44(uStack_534,local_538);
          lStack_410 = CONCAT44(uStack_52c,uStack_530);
          auStack_408._1_4_ = uStack_527;
          auStack_408[0] = local_528;
          auStack_408._5_4_ = uStack_523;
          auStack_408._9_7_ = uStack_51f;
          uStack_3f8 = local_518;
          uStack_3f4 = uStack_514;
          uStack_3f0 = uStack_510;
          uStack_3ec = uStack_50c;
          core::ptr::drop_in_place<toml_edit::key::Key>(&local_390);
          if (ppuVar4 != (undefined **)0x2) {
            lStack_598 = lStack_5b8;
            lStack_5a8 = lStack_5c8;
            lStack_5a0 = lStack_5c0;
            param_1[10] = CONCAT44(uStack_3f4,uStack_3f8);
            param_1[0xb] = CONCAT44(uStack_3ec,uStack_3f0);
            param_1[8] = auStack_408._0_8_;
            param_1[9] = auStack_408._8_8_;
            param_1[6] = lStack_418;
            param_1[7] = lStack_410;
            param_1[4] = local_428;
            param_1[5] = lStack_420;
            param_1[3] = lStack_5b8;
            param_1[1] = lStack_5c8;
            param_1[2] = lStack_5c0;
            *param_1 = (long)ppuVar4;
            bVar19 = true;
            goto LAB_0018ff02;
          }
        }
        lStack_598 = lStack_5b8;
        lStack_5a8 = lStack_5c8;
        lStack_5a0 = lStack_5c0;
        local_618 = lStack_5c8;
        lStack_610 = lStack_5c0;
        local_608 = lStack_5b8;
        lVar11 = local_600;
        lVar17 = local_570;
        break;
      case 3:
                    /* try { // try from 0018f620 to 0018f62f has its CatchHandler @ 001900d8 */
        _<toml_edit::de::table::TableMapAccess_as_serde_core::de::MapAccess>::next_value_seed
                  (&local_568,local_1a8);
        lVar11 = local_600;
        lVar17 = local_570;
        if ((int)local_568 != 2) goto LAB_0018feaf;
      }
      local_570 = lVar17;
      local_600 = lVar11;
      plVar7 = local_48;
    } while (local_48 != local_38);
    local_48 = plVar7;
    bVar19 = local_648 == 0x8000000000000000;
    lVar11 = local_600;
    uVar13 = local_648;
    lVar17 = local_570;
    if (bVar19) {
      local_648 = 0x8000000000000000;
      lVar11 = 1;
      uVar13 = 0;
      lVar17 = 0;
    }
    cVar9 = '\x02';
    if (local_639 != '\x03') {
      cVar9 = local_639;
    }
    if (local_618 == -0x8000000000000000) goto LAB_0018fb12;
    local_578 = local_608;
    local_588 = local_618;
    lStack_580 = lStack_610;
    lVar18 = local_588;
    lVar5 = lStack_580;
    lVar6 = local_578;
  }
  local_578 = lVar6;
  lStack_580 = lVar5;
  local_588 = lVar18;
  param_1[1] = uVar13;
  param_1[2] = lVar11;
  param_1[3] = lVar17;
  param_1[4] = local_588;
  param_1[5] = lStack_580;
  param_1[6] = local_578;
  *(char *)(param_1 + 7) = cVar9;
  *param_1 = 2;
                    /* try { // try from 0018fcf1 to 0018fcf5 has its CatchHandler @ 00190074 */
  _<alloc::vec::into_iter::IntoIter<T,A>as_core::ops::drop::Drop>::drop(local_50);
LAB_0018ffe0:
  if ((int)local_100 != 0xc) {
    core::ptr::drop_in_place<toml_edit::key::Key>(local_190);
    core::ptr::drop_in_place<toml_edit::item::Item>(&local_100);
  }
  return param_1;
}


