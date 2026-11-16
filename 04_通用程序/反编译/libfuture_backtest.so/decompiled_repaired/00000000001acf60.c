// ELF address 0x00000000001acf60; fb_ctx_publish

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fb_ctx_publish(undefined8 param_1,long param_2,long param_3)

{
  undefined1 auVar1 [16];
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  ushort uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined1 (*pauVar8) [16];
  ulong uVar9;
  byte bVar10;
  undefined8 uVar11;
  byte bVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  undefined1 auVar17 [16];
  ulong local_118;
  long local_110;
  ulong local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  ulong local_e0;
  ulong local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  ulong local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  lVar2 = *(long *)(param_2 + 0xe8);
                    /* try { // try from 002acf88 to 002acf99 has its CatchHandler @ 002ad2db */
  local_d0 = param_1;
  (*(code *)PTR_clone_003f27a8)(&local_b0,lVar2 + 0xb30,&PTR_s_future_backtest_src_ffi_rs_003e2d28);
                    /* try { // try from 002acfa1 to 002acfb2 has its CatchHandler @ 002ad2cb */
  (*(code *)PTR_clone_003f27a8)(&local_c8,lVar2 + 0xb48,&PTR_s_future_backtest_src_ffi_rs_003e2d40);
  if (param_3 == 0) {
    lVar7 = 1;
    uVar9 = 0;
    lVar16 = 1;
  }
  else {
    lVar7 = (*(code *)PTR_strlen_003f29e8)(param_3);
                    /* try { // try from 002acfc5 to 002acfd0 has its CatchHandler @ 002ad301 */
    (*(code *)PTR_to_str_003f29f0)(&local_118,param_3,lVar7 + 1);
    uVar9 = local_108;
    lVar7 = local_110;
    lVar16 = 1;
    if ((local_118 & 1) == 0) {
      if ((long)local_108 < 0) {
        uVar11 = 0;
LAB_002ad202:
                    /* try { // try from 002ad202 to 002ad211 has its CatchHandler @ 002ad301 */
        (*(code *)PTR_handle_error_003f2798)
                  (uVar11,uVar9,anon_d0b8e27bea7bf57269a32e15b6abf5cf_211_llvm_1643563994444475245);
        goto LAB_002ad221;
      }
      if (local_108 == 0) {
        uVar9 = 0;
      }
      else {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_003f2658)();
        lVar16 = (*(code *)PTR___rust_alloc_003f2630)(uVar9,1);
        uVar11 = 1;
        if (lVar16 == 0) goto LAB_002ad202;
      }
    }
    else {
      uVar9 = 0;
      lVar7 = 1;
    }
  }
  (*(code *)PTR_memcpy_003f2700)(lVar16,lVar7,uVar9);
  lVar2 = *(long *)(lVar2 + 0x14b8);
  if (*(long *)(lVar2 + 0x10) == 0) {
    *(undefined8 *)(lVar2 + 0x10) = 0xffffffffffffffff;
    local_58 = local_a0;
    local_68 = local_b0;
    uStack_60 = uStack_a8;
    local_50 = local_c8;
    uStack_48 = uStack_c0;
    local_40 = local_b8;
                    /* try { // try from 002ad055 to 002ad064 has its CatchHandler @ 002ad2c3 */
    hashbrown::rustc_entry::_<impl_hashbrown::map::HashMap<K,V,S,A>>::rustc_entry
              (&local_118,lVar2 + 0x48,&local_68);
    local_98 = local_100;
    uStack_90 = uStack_f8;
    local_88 = local_f0;
    uStack_84 = uStack_ec;
    uStack_80 = uStack_e8;
    uStack_7c = uStack_e4;
    local_78 = local_e0;
    local_d8 = local_108;
    pauVar8 = (undefined1 (*) [16])__tls_get_addr(&PTR_003f2750);
    if (pauVar8[1][0] == '\x01') {
      auVar17 = *pauVar8;
    }
    else {
                    /* try { // try from 002ad249 to 002ad24e has its CatchHandler @ 002ad2af */
      auVar17 = (*(code *)PTR_hashmap_random_keys_003f27e0)();
      *(long *)(*pauVar8 + 8) = auVar17._8_8_;
      pauVar8[1][0] = 1;
    }
    *(long *)*pauVar8 = auVar17._0_8_ + 1;
    puVar6 = (undefined8 *)CONCAT44(uStack_e4,uStack_e8);
    pauVar8 = (undefined1 (*) [16])*puVar6;
    uVar3 = puVar6[1];
    uVar14 = uVar3 & local_e0;
    auVar1 = *(undefined1 (*) [16])(*pauVar8 + uVar14);
    uVar5 = (ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar1[0xf] >> 7) << 0xf;
    uVar15 = (uint)uVar5;
    if (uVar5 == 0) {
      lVar7 = 0x10;
      do {
        uVar14 = uVar14 + lVar7 & uVar3;
        auVar1 = *(undefined1 (*) [16])(*pauVar8 + uVar14);
        lVar7 = lVar7 + 0x10;
        uVar15 = (uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
      } while (uVar15 == 0);
    }
    uVar13 = 0;
    for (; (uVar15 & 1) == 0; uVar15 = uVar15 >> 1 | 0x80000000) {
      uVar13 = uVar13 + 1;
    }
    uVar14 = uVar13 + uVar14 & uVar3;
    bVar12 = (*pauVar8)[uVar14];
    if (-1 < (char)bVar12) {
      auVar1 = *pauVar8;
      uVar15 = 0;
      for (uVar13 = (uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(byte)(auVar1[0xf] >> 7) << 0xf); (uVar13 & 1) == 0;
          uVar13 = uVar13 >> 1 | 0x80000000) {
        uVar15 = uVar15 + 1;
      }
      uVar14 = (ulong)uVar15;
      bVar12 = (*pauVar8)[uVar14];
    }
    bVar10 = (byte)(local_e0 >> 0x39);
    (*pauVar8)[uVar14] = bVar10;
    pauVar8[1][uVar14 - 0x10 & uVar3] = bVar10;
    puVar6[2] = puVar6[2] - (ulong)(bVar12 & 1);
    *(ulong *)pauVar8[uVar14 * -6 + -6] = local_118;
    *(long *)(pauVar8[uVar14 * -6 + -6] + 8) = local_110;
    *(ulong *)pauVar8[uVar14 * -6 + -5] = local_d8;
    *(undefined8 *)(pauVar8[uVar14 * -6 + -5] + 8) = local_98;
    *(undefined8 *)((long)(pauVar8[uVar14 * -6 + -5] + 8) + 8) = uStack_90;
    *(ulong *)(pauVar8[uVar14 * -6 + -4] + 8) = CONCAT44(uStack_84,local_88);
    uVar11 = _UNK_003e24e0;
    *(undefined **)pauVar8[uVar14 * -6 + -3] =
         PTR_anon_f0028fa5a75892db355dae2981df5056_7_llvm_16736236534389680341_003e24d8;
    *(undefined8 *)(pauVar8[uVar14 * -6 + -3] + 8) = uVar11;
    uVar11 = _UNK_003e24f0;
    *(undefined8 *)pauVar8[uVar14 * -6 + -2] = _DAT_003e24e8;
    *(undefined8 *)(pauVar8[uVar14 * -6 + -2] + 8) = uVar11;
    *(long *)pauVar8[uVar14 * -6 + -1] = auVar17._0_8_;
    *(long *)(pauVar8[uVar14 * -6 + -1] + 8) = auVar17._8_8_;
    puVar6[3] = puVar6[3] + 1;
    local_118 = uVar9;
    local_110 = lVar16;
    local_108 = uVar9;
                    /* try { // try from 002ad1cf to 002ad1df has its CatchHandler @ 002ad2b9 */
    hashbrown::map::HashMap<K,V,S,A>::insert(local_d0,pauVar8 + uVar14 * -6 + -3,&local_118);
    *(long *)(lVar2 + 0x10) = *(long *)(lVar2 + 0x10) + 1;
    return;
  }
                    /* try { // try from 002ad214 to 002ad220 has its CatchHandler @ 002ad2e1 */
  (*(code *)PTR_panic_already_borrowed_003f27c8)(&PTR_s_future_backtest_src_ffi_rs_003e2d58);
LAB_002ad221:
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}


