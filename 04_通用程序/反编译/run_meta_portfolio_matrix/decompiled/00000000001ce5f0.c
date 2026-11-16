// ELF address 0x00000000001ce5f0; run_meta_portfolio_matrix::validate_days

undefined8
_ZN25run_meta_portfolio_matrix13validate_days17h7229bd47ba8fc362E
          (long param_1,long param_2,long param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lStack_c0;
  long *plStack_b8;
  code *pcStack_b0;
  long lStack_a8;
  code *pcStack_a0;
  long lStack_98;
  code *pcStack_90;
  long lStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long **pplStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_48 [24];
  
  lVar6 = param_1;
  pcVar11 = (code *)PTR_memcmp_005ef080;
  do {
    do {
      lVar10 = lVar6;
      if (lVar10 == param_2 * 0xb8 + param_1) {
        return 0;
      }
      lVar6 = lVar10 + 0xb8;
    } while (*(char *)(lVar10 + 0xb0) != '\x01');
    uVar8 = *(undefined8 *)(lVar10 + 0x20);
    uVar1 = *(ulong *)(lVar10 + 0x28);
    uVar2 = *(undefined8 *)(lVar10 + 0x38);
    uVar3 = *(ulong *)(lVar10 + 0x40);
    lVar12 = param_4 * 0x18;
    lVar14 = param_3;
    while (lVar13 = lVar14, lVar12 != 0) {
      uVar4 = *(undefined8 *)(lVar13 + 8);
      uVar5 = *(ulong *)(lVar13 + 0x10);
      uVar9 = uVar1;
      if (uVar5 < uVar1) {
        uVar9 = uVar5;
      }
      iVar7 = (*pcVar11)(uVar4,uVar8,uVar9);
      lVar14 = uVar5 - uVar1;
      if (iVar7 != 0) {
        lVar14 = (long)iVar7;
      }
      if (lVar14 < 0) goto LAB_002ce703;
      uVar9 = uVar5;
      if (uVar3 <= uVar5) {
        uVar9 = uVar3;
      }
      iVar7 = (*(code *)PTR_memcmp_005ef080)(uVar4,uVar2,uVar9);
      lVar15 = uVar5 - uVar3;
      if (iVar7 != 0) {
        lVar15 = (long)iVar7;
      }
      lVar12 = lVar12 + -0x18;
      pcVar11 = (code *)PTR_memcmp_005ef080;
      lVar14 = lVar13 + 0x18;
      if (0 < lVar15) {
LAB_002ce703:
        lStack_98 = lVar10 + 0x18;
        plStack_b8 = &lStack_c0;
        pcStack_b0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h5c676dce0c8248d5E;
        lStack_88 = lVar10 + 0x30;
        pcStack_a0 = 
        _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE;
        pcStack_90 = 
        _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE;
        pcStack_80 = 
        _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE;
        puStack_78 = &DAT_005d2c08;
        uStack_70 = 4;
        uStack_58 = 0;
        pplStack_68 = &plStack_b8;
        uStack_60 = 4;
        lStack_c0 = lVar13;
        lStack_a8 = lVar10;
        (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_005ef0d8)
                  (auStack_48,&puStack_78);
        uVar8 = _ZN6anyhow5error31__LT_impl_u20_anyhow__Error_GT_3msg17hc0ba3fc2c0908611E
                          (auStack_48);
        return uVar8;
      }
    }
  } while( true );
}


