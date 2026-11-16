// ELF address 0x000000000006f710; run_takermaker::parse_sigs

/* run_takermaker::parse_sigs */

void __rustcall run_takermaker::parse_sigs(long *param_1,long param_2,ulong param_3)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  code *pcVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  undefined1 auVar14 [16];
  ulong local_68;
  long local_58;
  long lStack_50;
  long local_48;
  undefined1 local_40 [16];
  char *pcVar4;
  
  local_58 = 0;
  lStack_50 = 8;
  local_48 = 0;
  uVar13 = 0;
  bVar2 = false;
  pcVar8 = (code *)PTR_memchr_aligned_002ad110;
  uVar9 = 0;
  do {
    do {
      if (bVar2) {
        lVar5 = ensure_unique_signals(lStack_50,local_48,&DAT_0011abeb,6);
        if (lVar5 == 0) {
          param_1[2] = local_48;
          *param_1 = local_58;
          param_1[1] = lStack_50;
        }
        else {
LAB_0016f99f:
          param_1[1] = lVar5;
          *param_1 = -0x8000000000000000;
          if (local_58 != 0) {
            (*(code *)PTR___rust_dealloc_002acf38)(lStack_50,local_58 << 3,8);
          }
        }
        return;
      }
      do {
        uVar7 = uVar13;
        if (param_3 < uVar13) {
LAB_0016f7d7:
          bVar2 = true;
          uVar3 = param_3;
          uVar13 = uVar7;
          local_68 = uVar9;
          break;
        }
        uVar3 = param_3 - uVar13;
        uVar7 = param_3;
        if (uVar3 < 0x10) {
          if (param_3 == uVar13) goto LAB_0016f7d7;
          uVar6 = 0;
          while (*(char *)(param_2 + uVar13 + uVar6) != ',') {
            uVar6 = uVar6 + 1;
            if (uVar3 == uVar6) goto LAB_0016f7d7;
          }
        }
        else {
                    /* try { // try from 0016f790 to 0016f799 has its CatchHandler @ 0016fa19 */
          auVar14 = (*pcVar8)(0x2c,param_2 + uVar13,uVar3);
          uVar6 = auVar14._8_8_;
          if ((auVar14 & (undefined1  [16])0x1) == (undefined1  [16])0x0) goto LAB_0016f7d7;
        }
        uVar3 = uVar6 + uVar13;
        uVar13 = uVar13 + uVar6 + 1;
      } while ((param_3 <= uVar3) || (local_68 = uVar13, *(char *)(param_2 + uVar3) != ','));
                    /* try { // try from 0016f7e7 to 0016f7ee has its CatchHandler @ 0016fa1b */
      auVar14 = core::str::_<impl_str>::trim_matches(uVar9 + param_2,uVar3 - uVar9);
      lVar5 = local_48;
      uVar7 = auVar14._8_8_;
      pcVar4 = auVar14._0_8_;
      uVar9 = local_68;
    } while (pcVar4 == (char *)0x0 || uVar7 == 0);
    cVar1 = *pcVar4;
    uVar3 = 0;
    local_40 = auVar14;
    if (uVar7 == 1) {
      if (cVar1 != '+') {
        uVar7 = 1;
        auVar14._8_8_ = 1;
        auVar14._0_8_ = pcVar4;
        if (cVar1 != '-') goto LAB_0016f837;
      }
LAB_0016f990:
      uVar3 = CONCAT71((int7)(uVar3 >> 8),1);
LAB_0016f992:
                    /* try { // try from 0016f992 to 0016f9f9 has its CatchHandler @ 0016fa17 */
      lVar5 = parse_sigs::___closure__(local_40,uVar3 & 0xff,uVar7,uVar3);
      goto LAB_0016f99f;
    }
    if (cVar1 == '-') {
      if (uVar7 < 0x11) {
        uVar3 = 1;
        lVar11 = 0;
        do {
          if (9 < (byte)pcVar4[uVar3] - 0x30) goto LAB_0016f990;
          lVar11 = lVar11 * 10 - (ulong)((byte)pcVar4[uVar3] - 0x30);
          uVar3 = uVar3 + 1;
        } while (uVar7 != uVar3);
      }
      else {
        uVar6 = 1;
        lVar11 = 0;
        while (uVar3 = 0, uVar7 != uVar6) {
          lVar10 = lVar11 * 10;
          uVar12 = (byte)pcVar4[uVar6] - 0x30;
          if (9 < uVar12) goto LAB_0016f990;
          uVar3 = 3;
          if (SEXT816(lVar10) != SEXT816(lVar11) * SEXT816(10)) goto LAB_0016f992;
          uVar6 = uVar6 + 1;
          lVar11 = lVar10 - (ulong)uVar12;
          if (SBORROW8(lVar10,(ulong)uVar12)) goto LAB_0016f992;
        }
      }
    }
    else {
      if (cVar1 == '+') {
        uVar3 = uVar7 - 1;
        auVar14._8_8_ = uVar3;
        auVar14._0_8_ = pcVar4 + 1;
        if (0x10 < uVar7) {
LAB_0016f914:
          uVar7 = auVar14._8_8_;
          uVar6 = 0;
          lVar11 = 0;
          while (uVar7 != uVar6) {
            lVar10 = lVar11 * 10;
            uVar12 = *(byte *)(auVar14._0_8_ + uVar6) - 0x30;
            if (9 < uVar12) goto LAB_0016f990;
            uVar3 = CONCAT71((int7)(uVar3 >> 8),2);
            if (SEXT816(lVar10) != SEXT816(lVar11) * SEXT816(10)) goto LAB_0016f992;
            uVar6 = uVar6 + 1;
            lVar11 = lVar10 + (ulong)uVar12;
            if (SCARRY8(lVar10,(ulong)uVar12)) goto LAB_0016f992;
          }
          goto LAB_0016f869;
        }
      }
      else if (0xf < uVar7) goto LAB_0016f914;
LAB_0016f837:
      uVar7 = auVar14._8_8_;
      uVar3 = 0;
      lVar11 = 0;
      do {
        uVar12 = *(byte *)(auVar14._0_8_ + uVar3) - 0x30;
        if (9 < uVar12) goto LAB_0016f990;
        lVar11 = (ulong)uVar12 + lVar11 * 10;
        uVar3 = uVar3 + 1;
      } while (uVar7 != uVar3);
    }
LAB_0016f869:
    if (local_48 == local_58) {
                    /* try { // try from 0016f878 to 0016f888 has its CatchHandler @ 0016fa15 */
      alloc::raw_vec::RawVec<T,A>::grow_one
                (&local_58,
                 &PTR_anon_e72f4f423d7fecd9957c9f6ea32f7a74_12_llvm_1849792018781213756_002a0418);
    }
    *(long *)(lStack_50 + lVar5 * 8) = lVar11;
    local_48 = lVar5 + 1;
    pcVar8 = (code *)PTR_memchr_aligned_002ad110;
  } while( true );
}


