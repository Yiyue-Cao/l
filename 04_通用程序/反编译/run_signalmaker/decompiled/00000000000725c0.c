// ELF address 0x00000000000725c0; run_signalmaker::parse_sigs

/* run_signalmaker::parse_sigs */

void __rustcall run_signalmaker::parse_sigs(long *param_1,long param_2,ulong param_3)

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
  pcVar8 = (code *)PTR_memchr_aligned_002b2b08;
  uVar9 = 0;
  do {
    do {
      if (bVar2) {
        lVar5 = ensure_unique_signals(lStack_50,local_48,"--sigs",6);
        if (lVar5 == 0) {
          param_1[2] = local_48;
          *param_1 = local_58;
          param_1[1] = lStack_50;
        }
        else {
LAB_0017284f:
          param_1[1] = lVar5;
          *param_1 = -0x8000000000000000;
          if (local_58 != 0) {
            (*(code *)PTR___rust_dealloc_002b2908)(lStack_50,local_58 << 3,8);
          }
        }
        return;
      }
      do {
        uVar7 = uVar13;
        if (param_3 < uVar13) {
LAB_00172687:
          bVar2 = true;
          uVar3 = param_3;
          uVar13 = uVar7;
          local_68 = uVar9;
          break;
        }
        uVar3 = param_3 - uVar13;
        uVar7 = param_3;
        if (uVar3 < 0x10) {
          if (param_3 == uVar13) goto LAB_00172687;
          uVar6 = 0;
          while (*(char *)(param_2 + uVar13 + uVar6) != ',') {
            uVar6 = uVar6 + 1;
            if (uVar3 == uVar6) goto LAB_00172687;
          }
        }
        else {
                    /* try { // try from 00172640 to 00172649 has its CatchHandler @ 001728c9 */
          auVar14 = (*pcVar8)(0x2c,param_2 + uVar13,uVar3);
          uVar6 = auVar14._8_8_;
          if ((auVar14 & (undefined1  [16])0x1) == (undefined1  [16])0x0) goto LAB_00172687;
        }
        uVar3 = uVar6 + uVar13;
        uVar13 = uVar13 + uVar6 + 1;
      } while ((param_3 <= uVar3) || (local_68 = uVar13, *(char *)(param_2 + uVar3) != ','));
                    /* try { // try from 00172697 to 0017269e has its CatchHandler @ 001728cb */
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
        if (cVar1 != '-') goto LAB_001726e7;
      }
LAB_00172840:
      uVar3 = CONCAT71((int7)(uVar3 >> 8),1);
LAB_00172842:
                    /* try { // try from 00172842 to 001728a9 has its CatchHandler @ 001728c7 */
      lVar5 = parse_sigs::___closure__(local_40,uVar3 & 0xff,uVar7,uVar3);
      goto LAB_0017284f;
    }
    if (cVar1 == '-') {
      if (uVar7 < 0x11) {
        uVar3 = 1;
        lVar11 = 0;
        do {
          if (9 < (byte)pcVar4[uVar3] - 0x30) goto LAB_00172840;
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
          if (9 < uVar12) goto LAB_00172840;
          uVar3 = 3;
          if (SEXT816(lVar10) != SEXT816(lVar11) * SEXT816(10)) goto LAB_00172842;
          uVar6 = uVar6 + 1;
          lVar11 = lVar10 - (ulong)uVar12;
          if (SBORROW8(lVar10,(ulong)uVar12)) goto LAB_00172842;
        }
      }
    }
    else {
      if (cVar1 == '+') {
        uVar3 = uVar7 - 1;
        auVar14._8_8_ = uVar3;
        auVar14._0_8_ = pcVar4 + 1;
        if (0x10 < uVar7) {
LAB_001727c4:
          uVar7 = auVar14._8_8_;
          uVar6 = 0;
          lVar11 = 0;
          while (uVar7 != uVar6) {
            lVar10 = lVar11 * 10;
            uVar12 = *(byte *)(auVar14._0_8_ + uVar6) - 0x30;
            if (9 < uVar12) goto LAB_00172840;
            uVar3 = CONCAT71((int7)(uVar3 >> 8),2);
            if (SEXT816(lVar10) != SEXT816(lVar11) * SEXT816(10)) goto LAB_00172842;
            uVar6 = uVar6 + 1;
            lVar11 = lVar10 + (ulong)uVar12;
            if (SCARRY8(lVar10,(ulong)uVar12)) goto LAB_00172842;
          }
          goto LAB_00172719;
        }
      }
      else if (0xf < uVar7) goto LAB_001727c4;
LAB_001726e7:
      uVar7 = auVar14._8_8_;
      uVar3 = 0;
      lVar11 = 0;
      do {
        uVar12 = *(byte *)(auVar14._0_8_ + uVar3) - 0x30;
        if (9 < uVar12) goto LAB_00172840;
        lVar11 = (ulong)uVar12 + lVar11 * 10;
        uVar3 = uVar3 + 1;
      } while (uVar7 != uVar3);
    }
LAB_00172719:
    if (local_48 == local_58) {
                    /* try { // try from 00172728 to 00172738 has its CatchHandler @ 001728c5 */
      alloc::raw_vec::RawVec<T,A>::grow_one
                (&local_58,
                 &PTR_anon_52b3106212fa17b89ed124d311d91c84_8_llvm_18028058375776711367_002a5bf8);
    }
    *(long *)(lStack_50 + lVar5 * 8) = lVar11;
    local_48 = lVar5 + 1;
    pcVar8 = (code *)PTR_memchr_aligned_002b2b08;
  } while( true );
}


