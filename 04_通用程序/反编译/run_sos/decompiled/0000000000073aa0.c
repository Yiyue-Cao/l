// ELF address 0x0000000000073aa0; run_sos::parse_sigs

/* run_sos::parse_sigs */

void __rustcall run_sos::parse_sigs(long *param_1,long param_2,ulong param_3)

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
  pcVar8 = (code *)PTR_memchr_aligned_002b3218;
  uVar9 = 0;
  do {
    do {
      if (bVar2) {
        lVar5 = ensure_unique_signals(lStack_50,local_48,&DAT_001297eb,6);
        if (lVar5 == 0) {
          param_1[2] = local_48;
          *param_1 = local_58;
          param_1[1] = lStack_50;
        }
        else {
LAB_00173d2f:
          param_1[1] = lVar5;
          *param_1 = -0x8000000000000000;
          if (local_58 != 0) {
            (*(code *)PTR___rust_dealloc_002b3038)(lStack_50,local_58 << 3,8);
          }
        }
        return;
      }
      do {
        uVar7 = uVar13;
        if (param_3 < uVar13) {
LAB_00173b67:
          bVar2 = true;
          uVar3 = param_3;
          uVar13 = uVar7;
          local_68 = uVar9;
          break;
        }
        uVar3 = param_3 - uVar13;
        uVar7 = param_3;
        if (uVar3 < 0x10) {
          if (param_3 == uVar13) goto LAB_00173b67;
          uVar6 = 0;
          while (*(char *)(param_2 + uVar13 + uVar6) != ',') {
            uVar6 = uVar6 + 1;
            if (uVar3 == uVar6) goto LAB_00173b67;
          }
        }
        else {
                    /* try { // try from 00173b20 to 00173b29 has its CatchHandler @ 00173da9 */
          auVar14 = (*pcVar8)(0x2c,param_2 + uVar13,uVar3);
          uVar6 = auVar14._8_8_;
          if ((auVar14 & (undefined1  [16])0x1) == (undefined1  [16])0x0) goto LAB_00173b67;
        }
        uVar3 = uVar6 + uVar13;
        uVar13 = uVar13 + uVar6 + 1;
      } while ((param_3 <= uVar3) || (local_68 = uVar13, *(char *)(param_2 + uVar3) != ','));
                    /* try { // try from 00173b77 to 00173b7e has its CatchHandler @ 00173dab */
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
        if (cVar1 != '-') goto LAB_00173bc7;
      }
LAB_00173d20:
      uVar3 = CONCAT71((int7)(uVar3 >> 8),1);
LAB_00173d22:
                    /* try { // try from 00173d22 to 00173d89 has its CatchHandler @ 00173da7 */
      lVar5 = parse_sigs::___closure__(local_40,uVar3 & 0xff,uVar7,uVar3);
      goto LAB_00173d2f;
    }
    if (cVar1 == '-') {
      if (uVar7 < 0x11) {
        uVar3 = 1;
        lVar11 = 0;
        do {
          if (9 < (byte)pcVar4[uVar3] - 0x30) goto LAB_00173d20;
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
          if (9 < uVar12) goto LAB_00173d20;
          uVar3 = 3;
          if (SEXT816(lVar10) != SEXT816(lVar11) * SEXT816(10)) goto LAB_00173d22;
          uVar6 = uVar6 + 1;
          lVar11 = lVar10 - (ulong)uVar12;
          if (SBORROW8(lVar10,(ulong)uVar12)) goto LAB_00173d22;
        }
      }
    }
    else {
      if (cVar1 == '+') {
        uVar3 = uVar7 - 1;
        auVar14._8_8_ = uVar3;
        auVar14._0_8_ = pcVar4 + 1;
        if (0x10 < uVar7) {
LAB_00173ca4:
          uVar7 = auVar14._8_8_;
          uVar6 = 0;
          lVar11 = 0;
          while (uVar7 != uVar6) {
            lVar10 = lVar11 * 10;
            uVar12 = *(byte *)(auVar14._0_8_ + uVar6) - 0x30;
            if (9 < uVar12) goto LAB_00173d20;
            uVar3 = CONCAT71((int7)(uVar3 >> 8),2);
            if (SEXT816(lVar10) != SEXT816(lVar11) * SEXT816(10)) goto LAB_00173d22;
            uVar6 = uVar6 + 1;
            lVar11 = lVar10 + (ulong)uVar12;
            if (SCARRY8(lVar10,(ulong)uVar12)) goto LAB_00173d22;
          }
          goto LAB_00173bf9;
        }
      }
      else if (0xf < uVar7) goto LAB_00173ca4;
LAB_00173bc7:
      uVar7 = auVar14._8_8_;
      uVar3 = 0;
      lVar11 = 0;
      do {
        uVar12 = *(byte *)(auVar14._0_8_ + uVar3) - 0x30;
        if (9 < uVar12) goto LAB_00173d20;
        lVar11 = (ulong)uVar12 + lVar11 * 10;
        uVar3 = uVar3 + 1;
      } while (uVar7 != uVar3);
    }
LAB_00173bf9:
    if (local_48 == local_58) {
                    /* try { // try from 00173c08 to 00173c18 has its CatchHandler @ 00173da5 */
      alloc::raw_vec::RawVec<T,A>::grow_one
                (&local_58,
                 &PTR_anon_d3ffc9d39707f9e32d9f5a4a1db7ba2a_12_llvm_4860304101299258416_002a62b0);
    }
    *(long *)(lStack_50 + lVar5 * 8) = lVar11;
    local_48 = lVar5 + 1;
    pcVar8 = (code *)PTR_memchr_aligned_002b3218;
  } while( true );
}


