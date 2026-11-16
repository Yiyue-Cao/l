// ELF address 0x000000000008f250; <toml_edit::de::table::TableDeserializer as serde_core::de::Deserializer>::deserialize_any

/* WARNING: Removing unreachable block (ram,0x0018ffc0) */
/* WARNING: Removing unreachable block (ram,0x0018fc82) */
/* WARNING: Removing unreachable block (ram,0x0018fc64) */
/* WARNING: Removing unreachable block (ram,0x0018fc9a) */
/* WARNING: Removing unreachable block (ram,0x0018fc4e) */
/* _<toml_edit::de::table::TableDeserializer as serde_core::de::Deserializer>::deserialize_any */

long * __rustcall
_<toml_edit::de::table::TableDeserializer_as_serde_core::de::Deserializer>::deserialize_any
          (long *param_1)

{
  undefined1 auVar1 [16];
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  byte bVar6;
  long *plVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 local_630;
  undefined8 uStack_628;
  undefined8 local_620;
  long local_618;
  long lStack_610;
  long local_608;
  long local_568;
  long local_560;
  long lStack_558;
  long local_550;
  long local_548;
  long lStack_540;
  long local_538;
  long lStack_530;
  long local_528;
  long lStack_520;
  undefined4 local_518;
  undefined4 uStack_514;
  undefined4 uStack_510;
  undefined4 uStack_50c;
  undefined1 local_4d8 [176];
  undefined1 local_428 [152];
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined1 local_378 [8];
  char (*local_370) [8];
  long local_368;
  undefined1 local_2e8 [144];
  long local_258;
  undefined1 auStack_250 [168];
  undefined1 local_1a8 [24];
  undefined1 local_190 [144];
  int local_100 [44];
  undefined1 local_50 [8];
  long *local_48;
  long *local_38;
  
  (*(code *)PTR_new_002aea58)(local_1a8);
  puVar3 = PTR_memcpy_002ae8a8;
  local_618 = -0x8000000000000000;
  plVar4 = local_48;
  if (local_48 == local_38) {
LAB_0018fb12:
                    /* try { // try from 0018fb12 to 0018fb2a has its CatchHandler @ 00190052 */
    local_48 = plVar4;
    serde_core::de::Error::missing_field(&local_568,"strategies",10);
    lVar2 = local_618;
    if (local_568 == 2) {
      param_1[1] = 0;
      param_1[2] = 1;
      param_1[3] = 0;
      param_1[4] = local_560;
      param_1[5] = lStack_558;
      param_1[6] = local_550;
      *(undefined1 *)(param_1 + 7) = 2;
      *param_1 = 2;
                    /* try { // try from 0018fcf1 to 0018fcf5 has its CatchHandler @ 00190074 */
      _<alloc::vec::into_iter::IntoIter<T,A>as_core::ops::drop::Drop>::drop(local_50);
    }
    else {
      *(undefined4 *)(param_1 + 10) = local_518;
      *(undefined4 *)((long)param_1 + 0x54) = uStack_514;
      *(undefined4 *)(param_1 + 0xb) = uStack_510;
      *(undefined4 *)((long)param_1 + 0x5c) = uStack_50c;
      param_1[8] = local_528;
      param_1[9] = lStack_520;
      param_1[6] = local_538;
      param_1[7] = lStack_530;
      param_1[4] = local_548;
      param_1[5] = lStack_540;
      param_1[3] = local_550;
      param_1[1] = local_560;
      param_1[2] = lStack_558;
      *param_1 = local_568;
      puVar3 = PTR___rust_dealloc_002ae838;
      if (local_618 != -0x8000000000000000) {
        if (local_608 != 0) {
          puVar5 = (undefined8 *)(lStack_610 + 0x38);
          lVar8 = local_608;
          do {
            if (puVar5[-7] != 0) {
              (*(code *)puVar3)(puVar5[-6],puVar5[-7],1);
            }
            if (puVar5[-4] != 0) {
              (*(code *)puVar3)(puVar5[-3],puVar5[-4],1);
            }
            if (puVar5[-1] != 0) {
              (*(code *)puVar3)(*puVar5,puVar5[-1],1);
            }
            puVar5 = puVar5 + 9;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
        if (lVar2 != 0) {
          (*(code *)PTR___rust_dealloc_002ae838)(lStack_610,lVar2 * 0x48,8);
        }
      }
                    /* try { // try from 0018ffdb to 0018ffdf has its CatchHandler @ 00190037 */
      _<alloc::vec::into_iter::IntoIter<T,A>as_core::ops::drop::Drop>::drop(local_50);
    }
    if (local_100[0] != 0xc) {
      core::ptr::drop_in_place<toml_edit::key::Key>(local_190);
      core::ptr::drop_in_place<toml_edit::item::Item>(local_100);
    }
    return param_1;
  }
  lVar2 = *local_48;
  plVar4 = local_48 + 0x29;
  if (lVar2 == 0xc) goto LAB_0018fb12;
  plVar4 = local_48 + 0x16;
  plVar7 = local_48 + 1;
  local_48 = local_48 + 0x29;
  (*(code *)PTR_memcpy_002ae8a8)(local_428,plVar4,0x90);
  (*(code *)puVar3)(auStack_250,plVar7,0xa8);
                    /* try { // try from 0018f380 to 0018f38d has its CatchHandler @ 001900fa */
  local_258 = lVar2;
  (*(code *)PTR_span_002aeda0)(&local_630,local_428);
                    /* try { // try from 0018f38e to 0018f39c has its CatchHandler @ 001900fc */
  (*(code *)PTR_clone_002aedb0)(local_2e8,local_428);
  local_390 = local_630;
  uStack_388 = uStack_628;
  local_380 = local_620;
  (*(code *)puVar3)(local_378,local_2e8,0x90);
  if (local_368 == 0x19) {
    auVar9[0] = -((*local_370)[0] ==
                 anon_fb1b398f95bb3e79a67d6051d46d5d2e_168_llvm_1171352784888483302[0]);
    auVar9[1] = -((*local_370)[1] ==
                 anon_fb1b398f95bb3e79a67d6051d46d5d2e_168_llvm_1171352784888483302[1]);
    auVar9[2] = -((*local_370)[2] ==
                 anon_fb1b398f95bb3e79a67d6051d46d5d2e_168_llvm_1171352784888483302[2]);
    auVar9[3] = -((*local_370)[3] ==
                 anon_fb1b398f95bb3e79a67d6051d46d5d2e_168_llvm_1171352784888483302[3]);
    auVar9[4] = -((*local_370)[4] ==
                 anon_fb1b398f95bb3e79a67d6051d46d5d2e_168_llvm_1171352784888483302[4]);
    auVar9[5] = -((*local_370)[5] ==
                 anon_fb1b398f95bb3e79a67d6051d46d5d2e_168_llvm_1171352784888483302[5]);
    auVar9[6] = -((*local_370)[6] ==
                 anon_fb1b398f95bb3e79a67d6051d46d5d2e_168_llvm_1171352784888483302[6]);
    auVar9[7] = -((*local_370)[7] ==
                 anon_fb1b398f95bb3e79a67d6051d46d5d2e_168_llvm_1171352784888483302[7]);
    auVar9[8] = -(local_370[1][0] ==
                 anon_fb1b398f95bb3e79a67d6051d46d5d2e_168_llvm_1171352784888483302[8]);
    auVar9[9] = -(local_370[1][1] == s__consumption_all_0012a81e[0]);
    auVar9[10] = -(local_370[1][2] == s__consumption_all_0012a81e[1]);
    auVar9[0xb] = -(local_370[1][3] == s__consumption_all_0012a81e[2]);
    auVar9[0xc] = -(local_370[1][4] == s__consumption_all_0012a81e[3]);
    auVar9[0xd] = -(local_370[1][5] == s__consumption_all_0012a81e[4]);
    auVar9[0xe] = -(local_370[1][6] == s__consumption_all_0012a81e[5]);
    auVar9[0xf] = -(local_370[1][7] == s__consumption_all_0012a81e[6]);
    auVar1 = *(undefined1 (*) [16])(local_370[1] + 1);
    auVar10[0] = -(s__consumption_all_0012a81e[0] == auVar1[0]);
    auVar10[1] = -(s__consumption_all_0012a81e[1] == auVar1[1]);
    auVar10[2] = -(s__consumption_all_0012a81e[2] == auVar1[2]);
    auVar10[3] = -(s__consumption_all_0012a81e[3] == auVar1[3]);
    auVar10[4] = -(s__consumption_all_0012a81e[4] == auVar1[4]);
    auVar10[5] = -(s__consumption_all_0012a81e[5] == auVar1[5]);
    auVar10[6] = -(s__consumption_all_0012a81e[6] == auVar1[6]);
    auVar10[7] = -(s__consumption_all_0012a81e[7] == auVar1[7]);
    auVar10[8] = -(s__consumption_all_0012a81e[8] == auVar1[8]);
    auVar10[9] = -(s__consumption_all_0012a81e[9] == auVar1[9]);
    auVar10[10] = -(s__consumption_all_0012a81e[10] == auVar1[10]);
    auVar10[0xb] = -(s__consumption_all_0012a81e[0xb] == auVar1[0xb]);
    auVar10[0xc] = -(s__consumption_all_0012a81e[0xc] == auVar1[0xc]);
    auVar10[0xd] = -(s__consumption_all_0012a81e[0xd] == auVar1[0xd]);
    auVar10[0xe] = -(s__consumption_all_0012a81e[0xe] == auVar1[0xe]);
    auVar10[0xf] = -(s__consumption_all_0012a81e[0xf] == auVar1[0xf]);
    auVar10 = auVar10 & auVar9;
    if ((ushort)((ushort)(SUB161(auVar10 >> 7,0) & 1) | (ushort)(SUB161(auVar10 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar10 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar10 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar10 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar10 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar10 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar10 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar10 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar10 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar10 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar10 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar10 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar10 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar10 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar10[0xf] >> 7) << 0xf) == 0xffff) {
      bVar6 = 1;
      goto LAB_0018f487;
    }
  }
  else if (local_368 == 10) {
    if (*(char (*) [2])local_370[1] == s_es_0012a836 &&
        *local_370 == anon_fb1b398f95bb3e79a67d6051d46d5d2e_169_llvm_1171352784888483302) {
      bVar6 = 2;
      goto LAB_0018f487;
    }
  }
  else if ((local_368 == 9) &&
          (local_370[1][0] == s_g_0012a814[0] &&
           *local_370 == anon_fb1b398f95bb3e79a67d6051d46d5d2e_167_llvm_1171352784888483302)) {
    bVar6 = 0;
    goto LAB_0018f487;
  }
  bVar6 = 3;
LAB_0018f487:
                    /* try { // try from 0018f487 to 0018f493 has its CatchHandler @ 001900fc */
  core::ptr::drop_in_place<toml_edit::de::key::KeyDeserializer>(&local_390);
  (*(code *)puVar3)(&local_568,local_428,0x90);
  (*(code *)puVar3)(local_4d8,&local_258,0xb0);
  if (local_100[0] != 0xc) {
    core::ptr::drop_in_place<toml_edit::key::Key>(local_190);
                    /* try { // try from 0018f4d4 to 0018f4e0 has its CatchHandler @ 001900da */
    core::ptr::drop_in_place<toml_edit::item::Item>(local_100);
  }
  (*(code *)puVar3)(local_190,&local_568,0x140);
                    /* WARNING: Could not recover jumptable at 0x0018f505. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  plVar4 = (long *)(*(code *)((long)&DAT_0012affc + (long)(int)(&DAT_0012affc)[bVar6]))();
  return plVar4;
}


