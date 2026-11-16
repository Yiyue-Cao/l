// ELF address 0x0000000000734fd0; future_backtest::Customer::customer::Account::update_code_status_info

undefined8
_ZN15future_backtest8Customer8customer7Account23update_code_status_info17h7ed5507d42ea92ceE
          (undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ushort uVar10;
  int iVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  uint uVar16;
  long unaff_RBX;
  long lVar17;
  long lVar18;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  byte bVar19;
  undefined4 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined8 *puStack_78;
  undefined1 *puStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  lVar17 = unaff_RBX;
  puVar7 = puStack_70;
  uStack_60 = param_1;
  if (*(long *)(param_2 + 0x780) != 0) {
    uVar12 = _ZN4core4hash11BuildHasher8hash_one17hec92e4315c4796f5E();
    puVar6 = PTR_bcmp_01aa6eb8;
    lVar1 = *(long *)(param_2 + 0x768);
    puVar13 = *(undefined8 **)(param_2 + 0x770);
    bVar19 = (byte)(uVar12 >> 0x39);
    auVar21 = ZEXT216(CONCAT11(bVar19,bVar19));
    auVar21 = pshuflw(auVar21,auVar21,0);
    uVar20 = auVar21._0_4_;
    auVar21._4_4_ = uVar20;
    auVar21._0_4_ = uVar20;
    auVar21._8_4_ = uVar20;
    auVar21._12_4_ = uVar20;
    uVar15 = *(undefined8 *)(param_3 + 8);
    lVar2 = *(long *)(param_3 + 0x10);
    lVar18 = 0;
    lVar17 = param_2;
    while( true ) {
      auVar23 = *(undefined1 (*) [16])(lVar1 + (uVar12 & (ulong)puVar13));
      auVar22[0] = -(auVar23[0] == auVar21[0]);
      auVar22[1] = -(auVar23[1] == auVar21[1]);
      auVar22[2] = -(auVar23[2] == auVar21[2]);
      auVar22[3] = -(auVar23[3] == auVar21[3]);
      auVar22[4] = -(auVar23[4] == auVar21[4]);
      auVar22[5] = -(auVar23[5] == auVar21[5]);
      auVar22[6] = -(auVar23[6] == auVar21[6]);
      auVar22[7] = -(auVar23[7] == auVar21[7]);
      auVar22[8] = -(auVar23[8] == auVar21[8]);
      auVar22[9] = -(auVar23[9] == auVar21[9]);
      auVar22[10] = -(auVar23[10] == auVar21[10]);
      auVar22[0xb] = -(auVar23[0xb] == auVar21[0xb]);
      auVar22[0xc] = -(auVar23[0xc] == auVar21[0xc]);
      auVar22[0xd] = -(auVar23[0xd] == auVar21[0xd]);
      auVar22[0xe] = -(auVar23[0xe] == auVar21[0xe]);
      auVar22[0xf] = -(auVar23[0xf] == auVar21[0xf]);
      uVar10 = (ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe | (ushort)(auVar22[0xf] >> 7) << 0xf;
      puVar8 = (undefined1 *)(uVar12 & (ulong)puVar13);
      uVar9 = (ulong)uVar10;
      puVar7 = puStack_70;
      uVar12 = uStack_68;
      auVar22 = auStack_58;
      while (uStack_68 = uVar9, auStack_58 = auVar23, puStack_70 = puVar8, uVar10 != 0) {
        uVar5 = 0;
        for (uVar16 = (uint)uStack_68; (uVar16 & 1) == 0; uVar16 = uVar16 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        lVar17 = ((ulong)uVar5 + (long)puStack_70 & (ulong)puVar13) * -0x290;
        puStack_78 = puVar13;
        auStack_48 = auVar21;
        if ((lVar2 == *(long *)(lVar1 + -0x280 + lVar17)) &&
           (iVar11 = (*(code *)puVar6)(uVar15,*(undefined8 *)(lVar1 + lVar17 + -0x288),lVar2),
           iVar11 == 0)) {
          *(undefined8 *)(lVar1 + -0x30 + lVar17) = uStack_60;
          return 0;
        }
        iVar11 = (int)uStack_68 + -1;
        uVar10 = (ushort)iVar11 & (ushort)uStack_68;
        puVar8 = puStack_70;
        auVar23 = auStack_58;
        uVar9 = (ulong)CONCAT22((short)((uint)iVar11 >> 0x10),uVar10);
        puVar13 = puStack_78;
        auVar21 = auStack_48;
        puVar7 = puStack_70;
        uVar12 = uStack_68;
        auVar22 = auStack_58;
      }
      auVar23[0] = -(auStack_58[0] == -1);
      auVar23[1] = -(auStack_58[1] == -1);
      auVar23[2] = -(auStack_58[2] == -1);
      auVar23[3] = -(auStack_58[3] == -1);
      auVar23[4] = -(auStack_58[4] == -1);
      auVar23[5] = -(auStack_58[5] == -1);
      auVar23[6] = -(auStack_58[6] == -1);
      auVar23[7] = -(auStack_58[7] == -1);
      auVar23[8] = -(auStack_58[8] == -1);
      auVar23[9] = -(auStack_58[9] == -1);
      auVar23[10] = -(auStack_58[10] == -1);
      auVar23[0xb] = -(auStack_58[0xb] == -1);
      auVar23[0xc] = -(auStack_58[0xc] == -1);
      auVar23[0xd] = -(auStack_58[0xd] == -1);
      auVar23[0xe] = -(auStack_58[0xe] == -1);
      bVar4 = auStack_58[0xf] == -1;
      auVar23[0xf] = -bVar4;
      uStack_68 = uVar12;
      auStack_58 = auVar22;
      if ((((((((((((((((auVar23 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                       (auVar23 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar23 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar23 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar23 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar23 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar23 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar23 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar23 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar23 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar23 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar23 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar23 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar23 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar23 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar4) break;
      uVar12 = (long)puStack_70 + lVar18 + 0x10;
      lVar18 = lVar18 + 0x10;
      puStack_70 = puVar7;
    }
  }
  puStack_70 = puVar7;
  (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc35___rust_no_alloc_shim_is_unstable_v2_01aa6a40)();
  puVar13 = (undefined8 *)(*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc12___rust_alloc_01aa6a18)(0x14,1)
  ;
  uVar15 = anon_d0b8e27bea7bf57269a32e15b6abf5cf_359_llvm_1643563994444475245._8_8_;
  if (puVar13 == (undefined8 *)0x0) {
    uVar15 = (*(code *)PTR__ZN5alloc7raw_vec12handle_error17h24b7b14ecfc8bc80E_01aa6b98)
                       (1,0x14,anon_d0b8e27bea7bf57269a32e15b6abf5cf_211_llvm_1643563994444475245);
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20)(lVar17,0x14,1);
    func_0x019dd680(uVar15);
    pcVar3 = (code *)swi(3);
    uVar15 = (*pcVar3)();
    return uVar15;
  }
  *puVar13 = anon_d0b8e27bea7bf57269a32e15b6abf5cf_359_llvm_1643563994444475245._0_8_;
  puVar13[1] = uVar15;
  *(undefined4 *)(puVar13 + 2) = 0x646e756f;
  (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc35___rust_no_alloc_shim_is_unstable_v2_01aa6a40)();
  puVar14 = (undefined8 *)(*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc12___rust_alloc_01aa6a18)(0x20,8)
  ;
  if (puVar14 != (undefined8 *)0x0) {
    *puVar14 = 1;
    puVar14[1] = 0x14;
    puVar14[2] = puVar13;
    puVar14[3] = 0x14;
    puStack_70 = anon_d0b8e27bea7bf57269a32e15b6abf5cf_309_llvm_1643563994444475245;
    puStack_78 = puVar14;
    lVar17 = (*(code *)PTR__ZN6anyhow7nightly21request_ref_backtrace17hbea295235811927fE_01aa83d0)
                       (&puStack_78,
                        anon_306c05995557b157a5a4a5b5d20bb2f5_241_llvm_2664273085281908480);
    if (lVar17 == 0) {
      (*(code *)PTR__ZN3std9backtrace9Backtrace7capture17hd1766be109779efcE_01aa7e40)(&uStack_68);
      uStack_38 = uStack_60;
    }
    else {
      uStack_68 = 3;
      auStack_58._0_8_ = unaff_RBX;
      auStack_58._8_8_ = unaff_R12;
      auStack_48._0_8_ = unaff_R13;
      auStack_48._8_8_ = unaff_R14;
    }
    uStack_60 = uStack_38;
    uVar15 = _ZN6anyhow5error31__LT_impl_u20_anyhow__Error_GT_9construct17hd52f188bff74df50E_llvm_2664273085281908480
                       (puStack_78,puStack_70,&uStack_68);
    return uVar15;
  }
  (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17hf07a1aab219f1466E_01aa6c98)(8,0x20);
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}


