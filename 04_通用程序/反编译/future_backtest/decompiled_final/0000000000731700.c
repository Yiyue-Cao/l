// ELF address 0x0000000000731700; future_backtest::Customer::customer::Account::postion_locking_update

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
_ZN15future_backtest8Customer8customer7Account22postion_locking_update17ha960190ac2721b11E
          (double param_1,double param_2,double param_3,long param_4,byte param_5,long *param_6)

{
  double dVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  int iVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  byte bVar17;
  undefined4 uVar18;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar19;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar33;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  long *plStack_1f8;
  code *pcStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  long **pplStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined1 auStack_1b8 [16];
  undefined1 auStack_1a8 [16];
  undefined1 auStack_198 [16];
  undefined1 auStack_188 [16];
  double dStack_178;
  long lStack_160;
  double dStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  dStack_178 = param_2;
  dStack_158 = param_3;
  if (7 < param_5 - 1) {
override_jmp_00831746_case_2:
    puStack_1e8 = &UNK_019e2010;
    uStack_1e0 = 1;
    pplStack_1d8 = (long **)0x8;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    (*(code *)PTR__ZN4core9panicking9panic_fmt17h7a459a2e5c566496E_01aa6bc8)
              (&puStack_1e8,&UNK_019e2020);
LAB_00833149:
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
                    /* WARNING: Switch is manually overridden */
  switch(param_5 - 1) {
  case 0:
    if (*(long *)(param_4 + 0xa58) != 0) {
      uVar9 = _ZN4core4hash11BuildHasher8hash_one17hec92e4315c4796f5E(param_4 + 0xa60,param_6);
      lVar12 = *(long *)(param_4 + 0xa40);
      uVar14 = *(ulong *)(param_4 + 0xa48);
      bVar17 = (byte)(uVar9 >> 0x39);
      auVar22 = ZEXT216(CONCAT11(bVar17,bVar17));
      auVar22 = pshuflw(auVar22,auVar22,0);
      uVar18 = auVar22._0_4_;
      auVar34._4_4_ = uVar18;
      auVar34._0_4_ = uVar18;
      auVar34._8_4_ = uVar18;
      auVar34._12_4_ = uVar18;
      lVar15 = param_6[1];
      lVar2 = param_6[2];
      lVar16 = 0;
      while( true ) {
        uVar9 = uVar9 & uVar14;
        auVar22 = *(undefined1 (*) [16])(lVar12 + uVar9);
        auVar20[0] = -(auVar22[0] == auVar34[0]);
        auVar20[1] = -(auVar22[1] == auVar34[1]);
        auVar20[2] = -(auVar22[2] == auVar34[2]);
        auVar20[3] = -(auVar22[3] == auVar34[3]);
        auVar20[4] = -(auVar22[4] == auVar34[4]);
        auVar20[5] = -(auVar22[5] == auVar34[5]);
        auVar20[6] = -(auVar22[6] == auVar34[6]);
        auVar20[7] = -(auVar22[7] == auVar34[7]);
        auVar20[8] = -(auVar22[8] == auVar34[8]);
        auVar20[9] = -(auVar22[9] == auVar34[9]);
        auVar20[10] = -(auVar22[10] == auVar34[10]);
        auVar20[0xb] = -(auVar22[0xb] == auVar34[0xb]);
        auVar20[0xc] = -(auVar22[0xc] == auVar34[0xc]);
        auVar20[0xd] = -(auVar22[0xd] == auVar34[0xd]);
        auVar20[0xe] = -(auVar22[0xe] == auVar34[0xe]);
        auVar20[0xf] = -(auVar22[0xf] == auVar34[0xf]);
        uVar7 = (ushort)(SUB161(auVar20 >> 7,0) & 1) | (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar20 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar20 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar20 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar20 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar20 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar20 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar20 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar20 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar20 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar20 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar20 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar20 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe | (ushort)(auVar20[0xf] >> 7) << 0xf;
        uVar13 = (uint)uVar7;
        if (uVar7 != 0) {
          auStack_1a8._0_8_ = uVar14;
          auStack_1b8 = auVar22;
          auStack_198 = auVar34;
          do {
            uVar5 = 0;
            for (uVar6 = uVar13; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
              uVar5 = uVar5 + 1;
            }
            uVar14 = uVar5 + uVar9 & uVar14;
            if ((lVar2 == *(long *)(lVar12 + -0x18 + uVar14 * -0x28)) &&
               (iVar8 = (*(code *)PTR_bcmp_01aa6eb8)
                                  (lVar15,*(undefined8 *)(uVar14 * -0x28 + lVar12 + -0x20),lVar2),
               iVar8 == 0)) {
              *(double *)(lVar12 + -8 + uVar14 * -0x28) =
                   *(double *)(lVar12 + -8 + uVar14 * -0x28) + dStack_178;
              if (*(long *)(param_4 + 0x780) == 0) goto LAB_00832dcb;
              uVar9 = _ZN4core4hash11BuildHasher8hash_one17hec92e4315c4796f5E
                                (param_4 + 0x788,param_6);
              lVar12 = *(long *)(param_4 + 0x768);
              uVar14 = *(ulong *)(param_4 + 0x770);
              bVar17 = (byte)(uVar9 >> 0x39);
              auVar22 = ZEXT216(CONCAT11(bVar17,bVar17));
              auVar22 = pshuflw(auVar22,auVar22,0);
              uVar18 = auVar22._0_4_;
              auVar43._4_4_ = uVar18;
              auVar43._0_4_ = uVar18;
              auVar43._8_4_ = uVar18;
              auVar43._12_4_ = uVar18;
              lVar15 = param_6[1];
              lVar2 = param_6[2];
              lVar16 = 0;
              goto LAB_00832912;
            }
            uVar7 = (ushort)(uVar13 - 1) & (ushort)uVar13;
            uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar7);
            uVar14 = auStack_1a8._0_8_;
            auVar34 = auStack_198;
            auVar22 = auStack_1b8;
          } while (uVar7 != 0);
        }
        auVar45[0] = -(auVar22[0] == -1);
        auVar45[1] = -(auVar22[1] == -1);
        auVar45[2] = -(auVar22[2] == -1);
        auVar45[3] = -(auVar22[3] == -1);
        auVar45[4] = -(auVar22[4] == -1);
        auVar45[5] = -(auVar22[5] == -1);
        auVar45[6] = -(auVar22[6] == -1);
        auVar45[7] = -(auVar22[7] == -1);
        auVar45[8] = -(auVar22[8] == -1);
        auVar45[9] = -(auVar22[9] == -1);
        auVar45[10] = -(auVar22[10] == -1);
        auVar45[0xb] = -(auVar22[0xb] == -1);
        auVar45[0xc] = -(auVar22[0xc] == -1);
        auVar45[0xd] = -(auVar22[0xd] == -1);
        auVar45[0xe] = -(auVar22[0xe] == -1);
        bVar4 = auVar22[0xf] == -1;
        auVar45[0xf] = -bVar4;
        if ((((((((((((((((auVar45 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                         (auVar45 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar45 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar45 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar45 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar45 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar45 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar45 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar45 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar45 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar45 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar45 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar45 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar45 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar45 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar4) break;
        uVar9 = uVar9 + lVar16 + 0x10;
        lVar16 = lVar16 + 0x10;
      }
    }
    pcStack_1f0 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE_llvm_1643563994444475245
    ;
    puStack_1e8 = &UNK_019e1fc0;
    uStack_1e0 = 1;
    uStack_1c8 = 0;
    pplStack_1d8 = &plStack_1f8;
    uStack_1d0 = 1;
    plStack_1f8 = param_6;
    (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_01aa6d80)
              (&uStack_150,&puStack_1e8);
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc35___rust_no_alloc_shim_is_unstable_v2_01aa6a40)();
    puVar10 = (undefined8 *)
              (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc12___rust_alloc_01aa6a18)(0x20,8);
    uStack_b0 = uStack_140;
    uStack_c0 = uStack_150;
    uStack_b8 = uStack_148;
    if (puVar10 == (undefined8 *)0x0) {
      (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17hf07a1aab219f1466E_01aa6c98)(8,0x20);
      goto LAB_00833149;
    }
    break;
  case 1:
    if (*(long *)(param_4 + 0xa88) != 0) {
      uVar9 = _ZN4core4hash11BuildHasher8hash_one17hec92e4315c4796f5E(param_4 + 0xa90,param_6);
      lVar12 = *(long *)(param_4 + 0xa70);
      uVar14 = *(ulong *)(param_4 + 0xa78);
      bVar17 = (byte)(uVar9 >> 0x39);
      auVar22 = ZEXT216(CONCAT11(bVar17,bVar17));
      auVar22 = pshuflw(auVar22,auVar22,0);
      uVar18 = auVar22._0_4_;
      auVar37._4_4_ = uVar18;
      auVar37._0_4_ = uVar18;
      auVar37._8_4_ = uVar18;
      auVar37._12_4_ = uVar18;
      lVar15 = param_6[1];
      lVar2 = param_6[2];
      lVar16 = 0;
      while( true ) {
        uVar9 = uVar9 & uVar14;
        auVar22 = *(undefined1 (*) [16])(lVar12 + uVar9);
        auVar25[0] = -(auVar22[0] == auVar37[0]);
        auVar25[1] = -(auVar22[1] == auVar37[1]);
        auVar25[2] = -(auVar22[2] == auVar37[2]);
        auVar25[3] = -(auVar22[3] == auVar37[3]);
        auVar25[4] = -(auVar22[4] == auVar37[4]);
        auVar25[5] = -(auVar22[5] == auVar37[5]);
        auVar25[6] = -(auVar22[6] == auVar37[6]);
        auVar25[7] = -(auVar22[7] == auVar37[7]);
        auVar25[8] = -(auVar22[8] == auVar37[8]);
        auVar25[9] = -(auVar22[9] == auVar37[9]);
        auVar25[10] = -(auVar22[10] == auVar37[10]);
        auVar25[0xb] = -(auVar22[0xb] == auVar37[0xb]);
        auVar25[0xc] = -(auVar22[0xc] == auVar37[0xc]);
        auVar25[0xd] = -(auVar22[0xd] == auVar37[0xd]);
        auVar25[0xe] = -(auVar22[0xe] == auVar37[0xe]);
        auVar25[0xf] = -(auVar22[0xf] == auVar37[0xf]);
        uVar7 = (ushort)(SUB161(auVar25 >> 7,0) & 1) | (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe | (ushort)(auVar25[0xf] >> 7) << 0xf;
        uVar13 = (uint)uVar7;
        if (uVar7 != 0) {
          auStack_1a8._0_8_ = uVar14;
          auStack_1b8 = auVar22;
          auStack_198 = auVar37;
          do {
            uVar5 = 0;
            for (uVar6 = uVar13; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
              uVar5 = uVar5 + 1;
            }
            uVar14 = uVar5 + uVar9 & uVar14;
            if ((lVar2 == *(long *)(lVar12 + -0x18 + uVar14 * -0x28)) &&
               (iVar8 = (*(code *)PTR_bcmp_01aa6eb8)
                                  (lVar15,*(undefined8 *)(uVar14 * -0x28 + lVar12 + -0x20),lVar2),
               iVar8 == 0)) {
              *(double *)(lVar12 + -8 + uVar14 * -0x28) =
                   *(double *)(lVar12 + -8 + uVar14 * -0x28) + dStack_178;
              if (*(long *)(param_4 + 0x780) == 0) goto LAB_00832d2a;
              uVar9 = _ZN4core4hash11BuildHasher8hash_one17hec92e4315c4796f5E
                                (param_4 + 0x788,param_6);
              lVar12 = *(long *)(param_4 + 0x768);
              uVar14 = *(ulong *)(param_4 + 0x770);
              bVar17 = (byte)(uVar9 >> 0x39);
              auVar22 = ZEXT216(CONCAT11(bVar17,bVar17));
              auVar22 = pshuflw(auVar22,auVar22,0);
              uVar18 = auVar22._0_4_;
              auVar42._4_4_ = uVar18;
              auVar42._0_4_ = uVar18;
              auVar42._8_4_ = uVar18;
              auVar42._12_4_ = uVar18;
              lVar15 = param_6[1];
              lVar2 = param_6[2];
              lVar16 = 0;
              goto LAB_008327ba;
            }
            uVar7 = (ushort)(uVar13 - 1) & (ushort)uVar13;
            uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar7);
            uVar14 = auStack_1a8._0_8_;
            auVar37 = auStack_198;
            auVar22 = auStack_1b8;
          } while (uVar7 != 0);
        }
        auVar49[0] = -(auVar22[0] == -1);
        auVar49[1] = -(auVar22[1] == -1);
        auVar49[2] = -(auVar22[2] == -1);
        auVar49[3] = -(auVar22[3] == -1);
        auVar49[4] = -(auVar22[4] == -1);
        auVar49[5] = -(auVar22[5] == -1);
        auVar49[6] = -(auVar22[6] == -1);
        auVar49[7] = -(auVar22[7] == -1);
        auVar49[8] = -(auVar22[8] == -1);
        auVar49[9] = -(auVar22[9] == -1);
        auVar49[10] = -(auVar22[10] == -1);
        auVar49[0xb] = -(auVar22[0xb] == -1);
        auVar49[0xc] = -(auVar22[0xc] == -1);
        auVar49[0xd] = -(auVar22[0xd] == -1);
        auVar49[0xe] = -(auVar22[0xe] == -1);
        bVar4 = auVar22[0xf] == -1;
        auVar49[0xf] = -bVar4;
        if ((((((((((((((((auVar49 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                         (auVar49 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar49 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar49 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar49 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar49 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar49 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar49 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar49 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar49 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar49 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar49 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar49 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar49 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar49 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar4) break;
        uVar9 = uVar9 + lVar16 + 0x10;
        lVar16 = lVar16 + 0x10;
      }
    }
    pcStack_1f0 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE_llvm_1643563994444475245
    ;
    puStack_1e8 = &UNK_019e1fe0;
    uStack_1e0 = 1;
    uStack_1c8 = 0;
    pplStack_1d8 = &plStack_1f8;
    uStack_1d0 = 1;
    plStack_1f8 = param_6;
    (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_01aa6d80)
              (&uStack_120,&puStack_1e8);
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc35___rust_no_alloc_shim_is_unstable_v2_01aa6a40)();
    puVar10 = (undefined8 *)
              (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc12___rust_alloc_01aa6a18)(0x20,8);
    uStack_b0 = uStack_110;
    uStack_c0 = uStack_120;
    uStack_b8 = uStack_118;
    if (puVar10 == (undefined8 *)0x0) {
      (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17hf07a1aab219f1466E_01aa6c98)(8,0x20);
      goto LAB_00833149;
    }
    break;
  default:
    goto override_jmp_00831746_case_2;
  case 4:
    if (*(long *)(param_4 + 0x9f8) != 0) {
      uVar9 = _ZN4core4hash11BuildHasher8hash_one17hec92e4315c4796f5E(param_4 + 0xa00,param_6);
      lVar12 = *(long *)(param_4 + 0x9e0);
      uVar14 = *(ulong *)(param_4 + 0x9e8);
      bVar17 = (byte)(uVar9 >> 0x39);
      auVar22 = ZEXT216(CONCAT11(bVar17,bVar17));
      auVar22 = pshuflw(auVar22,auVar22,0);
      uVar18 = auVar22._0_4_;
      auVar38._4_4_ = uVar18;
      auVar38._0_4_ = uVar18;
      auVar38._8_4_ = uVar18;
      auVar38._12_4_ = uVar18;
      lVar15 = param_6[1];
      lVar2 = param_6[2];
      lVar16 = 0;
      while( true ) {
        uVar9 = uVar9 & uVar14;
        auVar22 = *(undefined1 (*) [16])(lVar12 + uVar9);
        auVar26[0] = -(auVar22[0] == auVar38[0]);
        auVar26[1] = -(auVar22[1] == auVar38[1]);
        auVar26[2] = -(auVar22[2] == auVar38[2]);
        auVar26[3] = -(auVar22[3] == auVar38[3]);
        auVar26[4] = -(auVar22[4] == auVar38[4]);
        auVar26[5] = -(auVar22[5] == auVar38[5]);
        auVar26[6] = -(auVar22[6] == auVar38[6]);
        auVar26[7] = -(auVar22[7] == auVar38[7]);
        auVar26[8] = -(auVar22[8] == auVar38[8]);
        auVar26[9] = -(auVar22[9] == auVar38[9]);
        auVar26[10] = -(auVar22[10] == auVar38[10]);
        auVar26[0xb] = -(auVar22[0xb] == auVar38[0xb]);
        auVar26[0xc] = -(auVar22[0xc] == auVar38[0xc]);
        auVar26[0xd] = -(auVar22[0xd] == auVar38[0xd]);
        auVar26[0xe] = -(auVar22[0xe] == auVar38[0xe]);
        auVar26[0xf] = -(auVar22[0xf] == auVar38[0xf]);
        uVar7 = (ushort)(SUB161(auVar26 >> 7,0) & 1) | (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe | (ushort)(auVar26[0xf] >> 7) << 0xf;
        uVar13 = (uint)uVar7;
        if (uVar7 != 0) {
          auStack_1a8._0_8_ = uVar14;
          auStack_1b8 = auVar22;
          auStack_198 = auVar38;
          do {
            uVar5 = 0;
            for (uVar6 = uVar13; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
              uVar5 = uVar5 + 1;
            }
            uVar14 = uVar5 + uVar9 & uVar14;
            if ((lVar2 == *(long *)(lVar12 + -0x18 + uVar14 * -0x28)) &&
               (iVar8 = (*(code *)PTR_bcmp_01aa6eb8)
                                  (lVar15,*(undefined8 *)(uVar14 * -0x28 + lVar12 + -0x20),lVar2),
               iVar8 == 0)) {
              *(double *)(lVar12 + -8 + uVar14 * -0x28) =
                   *(double *)(lVar12 + -8 + uVar14 * -0x28) + dStack_178;
              if (*(long *)(param_4 + 0x780) == 0) goto LAB_00832e6c;
              uVar9 = _ZN4core4hash11BuildHasher8hash_one17hec92e4315c4796f5E
                                (param_4 + 0x788,param_6);
              lVar12 = *(long *)(param_4 + 0x768);
              uVar14 = *(ulong *)(param_4 + 0x770);
              bVar17 = (byte)(uVar9 >> 0x39);
              auVar22 = ZEXT216(CONCAT11(bVar17,bVar17));
              auVar22 = pshuflw(auVar22,auVar22,0);
              uVar18 = auVar22._0_4_;
              auVar44._4_4_ = uVar18;
              auVar44._0_4_ = uVar18;
              auVar44._8_4_ = uVar18;
              auVar44._12_4_ = uVar18;
              lVar15 = param_6[1];
              lVar2 = param_6[2];
              lVar16 = 0;
              goto LAB_00832a6a;
            }
            uVar7 = (ushort)(uVar13 - 1) & (ushort)uVar13;
            uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar7);
            uVar14 = auStack_1a8._0_8_;
            auVar38 = auStack_198;
            auVar22 = auStack_1b8;
          } while (uVar7 != 0);
        }
        auVar50[0] = -(auVar22[0] == -1);
        auVar50[1] = -(auVar22[1] == -1);
        auVar50[2] = -(auVar22[2] == -1);
        auVar50[3] = -(auVar22[3] == -1);
        auVar50[4] = -(auVar22[4] == -1);
        auVar50[5] = -(auVar22[5] == -1);
        auVar50[6] = -(auVar22[6] == -1);
        auVar50[7] = -(auVar22[7] == -1);
        auVar50[8] = -(auVar22[8] == -1);
        auVar50[9] = -(auVar22[9] == -1);
        auVar50[10] = -(auVar22[10] == -1);
        auVar50[0xb] = -(auVar22[0xb] == -1);
        auVar50[0xc] = -(auVar22[0xc] == -1);
        auVar50[0xd] = -(auVar22[0xd] == -1);
        auVar50[0xe] = -(auVar22[0xe] == -1);
        bVar4 = auVar22[0xf] == -1;
        auVar50[0xf] = -bVar4;
        if ((((((((((((((((auVar50 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                         (auVar50 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar50 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar50 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar50 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar50 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar50 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar50 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar50 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar50 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar50 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar50 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar50 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar50 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar50 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar4) break;
        uVar9 = uVar9 + lVar16 + 0x10;
        lVar16 = lVar16 + 0x10;
      }
    }
    pcStack_1f0 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE_llvm_1643563994444475245
    ;
    puStack_1e8 = &UNK_019e1ff0;
    uStack_1e0 = 1;
    uStack_1c8 = 0;
    pplStack_1d8 = &plStack_1f8;
    uStack_1d0 = 1;
    plStack_1f8 = param_6;
    (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_01aa6d80)
              (&uStack_90,&puStack_1e8);
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc35___rust_no_alloc_shim_is_unstable_v2_01aa6a40)();
    puVar10 = (undefined8 *)
              (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc12___rust_alloc_01aa6a18)(0x20,8);
    uStack_b0 = uStack_80;
    uStack_c0 = uStack_90;
    uStack_b8 = uStack_88;
    if (puVar10 == (undefined8 *)0x0) {
      (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17hf07a1aab219f1466E_01aa6c98)(8,0x20);
      goto LAB_00833149;
    }
    break;
  case 5:
    if (*(long *)(param_4 + 0xa28) != 0) {
      uVar9 = _ZN4core4hash11BuildHasher8hash_one17hec92e4315c4796f5E(param_4 + 0xa30,param_6);
      lVar12 = *(long *)(param_4 + 0xa10);
      uVar14 = *(ulong *)(param_4 + 0xa18);
      bVar17 = (byte)(uVar9 >> 0x39);
      auVar22 = ZEXT216(CONCAT11(bVar17,bVar17));
      auVar22 = pshuflw(auVar22,auVar22,0);
      uVar18 = auVar22._0_4_;
      auVar35._4_4_ = uVar18;
      auVar35._0_4_ = uVar18;
      auVar35._8_4_ = uVar18;
      auVar35._12_4_ = uVar18;
      lVar15 = param_6[1];
      lVar2 = param_6[2];
      lVar16 = 0;
      while( true ) {
        uVar9 = uVar9 & uVar14;
        auVar22 = *(undefined1 (*) [16])(lVar12 + uVar9);
        auVar21[0] = -(auVar22[0] == auVar35[0]);
        auVar21[1] = -(auVar22[1] == auVar35[1]);
        auVar21[2] = -(auVar22[2] == auVar35[2]);
        auVar21[3] = -(auVar22[3] == auVar35[3]);
        auVar21[4] = -(auVar22[4] == auVar35[4]);
        auVar21[5] = -(auVar22[5] == auVar35[5]);
        auVar21[6] = -(auVar22[6] == auVar35[6]);
        auVar21[7] = -(auVar22[7] == auVar35[7]);
        auVar21[8] = -(auVar22[8] == auVar35[8]);
        auVar21[9] = -(auVar22[9] == auVar35[9]);
        auVar21[10] = -(auVar22[10] == auVar35[10]);
        auVar21[0xb] = -(auVar22[0xb] == auVar35[0xb]);
        auVar21[0xc] = -(auVar22[0xc] == auVar35[0xc]);
        auVar21[0xd] = -(auVar22[0xd] == auVar35[0xd]);
        auVar21[0xe] = -(auVar22[0xe] == auVar35[0xe]);
        auVar21[0xf] = -(auVar22[0xf] == auVar35[0xf]);
        uVar7 = (ushort)(SUB161(auVar21 >> 7,0) & 1) | (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
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
                (ushort)(SUB161(auVar21 >> 0x77,0) & 1) << 0xe | (ushort)(auVar21[0xf] >> 7) << 0xf;
        uVar13 = (uint)uVar7;
        if (uVar7 != 0) {
          auStack_1a8._0_8_ = uVar14;
          auStack_1b8 = auVar22;
          auStack_198 = auVar35;
          do {
            uVar5 = 0;
            for (uVar6 = uVar13; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
              uVar5 = uVar5 + 1;
            }
            uVar14 = uVar5 + uVar9 & uVar14;
            if ((lVar2 == *(long *)(lVar12 + -0x18 + uVar14 * -0x28)) &&
               (iVar8 = (*(code *)PTR_bcmp_01aa6eb8)
                                  (lVar15,*(undefined8 *)(uVar14 * -0x28 + lVar12 + -0x20)),
               iVar8 == 0)) {
              *(double *)(lVar12 + -8 + uVar14 * -0x28) =
                   *(double *)(lVar12 + -8 + uVar14 * -0x28) + dStack_178;
              if (*(long *)(param_4 + 0x780) == 0) goto LAB_00832b47;
              uVar9 = _ZN4core4hash11BuildHasher8hash_one17hec92e4315c4796f5E
                                (param_4 + 0x788,param_6);
              lVar12 = *(long *)(param_4 + 0x768);
              uVar14 = *(ulong *)(param_4 + 0x770);
              bVar17 = (byte)(uVar9 >> 0x39);
              auVar22 = ZEXT216(CONCAT11(bVar17,bVar17));
              auVar22 = pshuflw(auVar22,auVar22,0);
              uVar18 = auVar22._0_4_;
              auVar39._4_4_ = uVar18;
              auVar39._0_4_ = uVar18;
              auVar39._8_4_ = uVar18;
              auVar39._12_4_ = uVar18;
              lVar15 = param_6[1];
              lVar2 = param_6[2];
              lVar16 = 0;
              goto LAB_00832318;
            }
            uVar7 = (ushort)(uVar13 - 1) & (ushort)uVar13;
            uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar7);
            uVar14 = auStack_1a8._0_8_;
            auVar35 = auStack_198;
            auVar22 = auStack_1b8;
          } while (uVar7 != 0);
        }
        auVar46[0] = -(auVar22[0] == -1);
        auVar46[1] = -(auVar22[1] == -1);
        auVar46[2] = -(auVar22[2] == -1);
        auVar46[3] = -(auVar22[3] == -1);
        auVar46[4] = -(auVar22[4] == -1);
        auVar46[5] = -(auVar22[5] == -1);
        auVar46[6] = -(auVar22[6] == -1);
        auVar46[7] = -(auVar22[7] == -1);
        auVar46[8] = -(auVar22[8] == -1);
        auVar46[9] = -(auVar22[9] == -1);
        auVar46[10] = -(auVar22[10] == -1);
        auVar46[0xb] = -(auVar22[0xb] == -1);
        auVar46[0xc] = -(auVar22[0xc] == -1);
        auVar46[0xd] = -(auVar22[0xd] == -1);
        auVar46[0xe] = -(auVar22[0xe] == -1);
        bVar4 = auVar22[0xf] == -1;
        auVar46[0xf] = -bVar4;
        if ((((((((((((((((auVar46 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                         (auVar46 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar46 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar46 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar46 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar46 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar46 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar46 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar46 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar46 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar46 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar46 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar46 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar46 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar46 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar4) break;
        uVar9 = uVar9 + lVar16 + 0x10;
        lVar16 = lVar16 + 0x10;
      }
    }
    pcStack_1f0 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE_llvm_1643563994444475245
    ;
    puStack_1e8 = &UNK_019e2000;
    uStack_1e0 = 1;
    uStack_1c8 = 0;
    pplStack_1d8 = &plStack_1f8;
    uStack_1d0 = 1;
    plStack_1f8 = param_6;
    (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_01aa6d80)
              (&uStack_60,&puStack_1e8);
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc35___rust_no_alloc_shim_is_unstable_v2_01aa6a40)();
    puVar10 = (undefined8 *)
              (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc12___rust_alloc_01aa6a18)(0x20,8);
    uStack_b0 = uStack_50;
    uStack_c0 = uStack_60;
    uStack_b8 = uStack_58;
    if (puVar10 == (undefined8 *)0x0) {
      (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17hf07a1aab219f1466E_01aa6c98)(8,0x20);
      goto LAB_00833149;
    }
    break;
  case 6:
    if (*(long *)(param_4 + 0x9f8) != 0) {
      uVar9 = _ZN4core4hash11BuildHasher8hash_one17hec92e4315c4796f5E(param_4 + 0xa00,param_6);
      lVar12 = *(long *)(param_4 + 0x9e0);
      uVar14 = *(ulong *)(param_4 + 0x9e8);
      bVar17 = (byte)(uVar9 >> 0x39);
      auVar22 = ZEXT216(CONCAT11(bVar17,bVar17));
      auVar22 = pshuflw(auVar22,auVar22,0);
      uVar18 = auVar22._0_4_;
      auVar36._4_4_ = uVar18;
      auVar36._0_4_ = uVar18;
      auVar36._8_4_ = uVar18;
      auVar36._12_4_ = uVar18;
      lVar15 = param_6[1];
      lVar2 = param_6[2];
      lVar16 = 0;
      while( true ) {
        uVar9 = uVar9 & uVar14;
        auVar22 = *(undefined1 (*) [16])(lVar12 + uVar9);
        auVar24[0] = -(auVar22[0] == auVar36[0]);
        auVar24[1] = -(auVar22[1] == auVar36[1]);
        auVar24[2] = -(auVar22[2] == auVar36[2]);
        auVar24[3] = -(auVar22[3] == auVar36[3]);
        auVar24[4] = -(auVar22[4] == auVar36[4]);
        auVar24[5] = -(auVar22[5] == auVar36[5]);
        auVar24[6] = -(auVar22[6] == auVar36[6]);
        auVar24[7] = -(auVar22[7] == auVar36[7]);
        auVar24[8] = -(auVar22[8] == auVar36[8]);
        auVar24[9] = -(auVar22[9] == auVar36[9]);
        auVar24[10] = -(auVar22[10] == auVar36[10]);
        auVar24[0xb] = -(auVar22[0xb] == auVar36[0xb]);
        auVar24[0xc] = -(auVar22[0xc] == auVar36[0xc]);
        auVar24[0xd] = -(auVar22[0xd] == auVar36[0xd]);
        auVar24[0xe] = -(auVar22[0xe] == auVar36[0xe]);
        auVar24[0xf] = -(auVar22[0xf] == auVar36[0xf]);
        uVar7 = (ushort)(SUB161(auVar24 >> 7,0) & 1) | (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe | (ushort)(auVar24[0xf] >> 7) << 0xf;
        uVar13 = (uint)uVar7;
        if (uVar7 != 0) {
          auStack_1a8._0_8_ = uVar14;
          auStack_1b8 = auVar22;
          auStack_198 = auVar36;
          lStack_160 = param_4;
          do {
            uVar5 = 0;
            for (uVar6 = uVar13; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
              uVar5 = uVar5 + 1;
            }
            uVar14 = uVar5 + uVar9 & uVar14;
            if ((lVar2 == *(long *)(lVar12 + -0x18 + uVar14 * -0x28)) &&
               (iVar8 = (*(code *)PTR_bcmp_01aa6eb8)
                                  (lVar15,*(undefined8 *)(uVar14 * -0x28 + lVar12 + -0x20)),
               param_4 = lStack_160, iVar8 == 0)) {
              param_1 = param_1 * dStack_178;
              lVar15 = lVar12 + uVar14 * -0x28;
              dVar1 = *(double *)(lVar12 + -8 + uVar14 * -0x28);
              dVar19 = dStack_178 + dVar1;
              dVar33 = 0.0;
              if (_DAT_00352e38 < (double)(_DAT_00354750 & (ulong)dVar19)) {
                dVar33 = (dVar1 * *(double *)(lVar12 + -0x10 + uVar14 * -0x28) + param_1) / dVar19;
              }
              *(double *)(lVar15 + -0x10) = dVar33;
              *(double *)(lVar15 + -8) = dVar19;
              if (*(long *)(lStack_160 + 0x780) == 0) goto LAB_00832c89;
              uVar9 = _ZN4core4hash11BuildHasher8hash_one17hec92e4315c4796f5E
                                (lStack_160 + 0x788,param_6);
              lVar12 = *(long *)(param_4 + 0x768);
              uVar14 = *(ulong *)(param_4 + 0x770);
              bVar17 = (byte)(uVar9 >> 0x39);
              auVar22 = ZEXT216(CONCAT11(bVar17,bVar17));
              auVar22 = pshuflw(auVar22,auVar22,0);
              uVar18 = auVar22._0_4_;
              auVar41._4_4_ = uVar18;
              auVar41._0_4_ = uVar18;
              auVar41._8_4_ = uVar18;
              auVar41._12_4_ = uVar18;
              lVar15 = param_6[1];
              lVar2 = param_6[2];
              lVar16 = 0;
              goto LAB_00832662;
            }
            uVar7 = (ushort)(uVar13 - 1) & (ushort)uVar13;
            uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar7);
            uVar14 = auStack_1a8._0_8_;
            param_4 = lStack_160;
            auVar36 = auStack_198;
            auVar22 = auStack_1b8;
          } while (uVar7 != 0);
        }
        auVar48[0] = -(auVar22[0] == -1);
        auVar48[1] = -(auVar22[1] == -1);
        auVar48[2] = -(auVar22[2] == -1);
        auVar48[3] = -(auVar22[3] == -1);
        auVar48[4] = -(auVar22[4] == -1);
        auVar48[5] = -(auVar22[5] == -1);
        auVar48[6] = -(auVar22[6] == -1);
        auVar48[7] = -(auVar22[7] == -1);
        auVar48[8] = -(auVar22[8] == -1);
        auVar48[9] = -(auVar22[9] == -1);
        auVar48[10] = -(auVar22[10] == -1);
        auVar48[0xb] = -(auVar22[0xb] == -1);
        auVar48[0xc] = -(auVar22[0xc] == -1);
        auVar48[0xd] = -(auVar22[0xd] == -1);
        auVar48[0xe] = -(auVar22[0xe] == -1);
        bVar4 = auVar22[0xf] == -1;
        auVar48[0xf] = -bVar4;
        if ((((((((((((((((auVar48 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                         (auVar48 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar48 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar48 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar48 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar48 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar48 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar48 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar48 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar48 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar48 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar48 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar48 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar48 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar48 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar4) break;
        uVar9 = uVar9 + lVar16 + 0x10;
        lVar16 = lVar16 + 0x10;
      }
    }
    pcStack_1f0 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE_llvm_1643563994444475245
    ;
    puStack_1e8 = &UNK_019e1ff0;
    uStack_1e0 = 1;
    uStack_1c8 = 0;
    pplStack_1d8 = &plStack_1f8;
    uStack_1d0 = 1;
    plStack_1f8 = param_6;
    (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_01aa6d80)
              (&uStack_f0,&puStack_1e8);
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc35___rust_no_alloc_shim_is_unstable_v2_01aa6a40)();
    puVar10 = (undefined8 *)
              (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc12___rust_alloc_01aa6a18)(0x20,8);
    uStack_b0 = uStack_e0;
    uStack_c0 = uStack_f0;
    uStack_b8 = uStack_e8;
    if (puVar10 == (undefined8 *)0x0) {
      (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17hf07a1aab219f1466E_01aa6c98)(8,0x20);
      goto LAB_00833149;
    }
    break;
  case 7:
    if (*(long *)(param_4 + 0xa28) != 0) {
      uVar9 = _ZN4core4hash11BuildHasher8hash_one17hec92e4315c4796f5E(param_4 + 0xa30,param_6);
      lVar12 = *(long *)(param_4 + 0xa10);
      uVar14 = *(ulong *)(param_4 + 0xa18);
      bVar17 = (byte)(uVar9 >> 0x39);
      auVar22 = ZEXT216(CONCAT11(bVar17,bVar17));
      auVar22 = pshuflw(auVar22,auVar22,0);
      uVar18 = auVar22._0_4_;
      auVar22._4_4_ = uVar18;
      auVar22._0_4_ = uVar18;
      auVar22._8_4_ = uVar18;
      auVar22._12_4_ = uVar18;
      lVar15 = param_6[1];
      lVar2 = param_6[2];
      lVar16 = 0;
      while( true ) {
        uVar9 = uVar9 & uVar14;
        auVar40 = *(undefined1 (*) [16])(lVar12 + uVar9);
        auVar23[0] = -(auVar40[0] == auVar22[0]);
        auVar23[1] = -(auVar40[1] == auVar22[1]);
        auVar23[2] = -(auVar40[2] == auVar22[2]);
        auVar23[3] = -(auVar40[3] == auVar22[3]);
        auVar23[4] = -(auVar40[4] == auVar22[4]);
        auVar23[5] = -(auVar40[5] == auVar22[5]);
        auVar23[6] = -(auVar40[6] == auVar22[6]);
        auVar23[7] = -(auVar40[7] == auVar22[7]);
        auVar23[8] = -(auVar40[8] == auVar22[8]);
        auVar23[9] = -(auVar40[9] == auVar22[9]);
        auVar23[10] = -(auVar40[10] == auVar22[10]);
        auVar23[0xb] = -(auVar40[0xb] == auVar22[0xb]);
        auVar23[0xc] = -(auVar40[0xc] == auVar22[0xc]);
        auVar23[0xd] = -(auVar40[0xd] == auVar22[0xd]);
        auVar23[0xe] = -(auVar40[0xe] == auVar22[0xe]);
        auVar23[0xf] = -(auVar40[0xf] == auVar22[0xf]);
        uVar7 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe | (ushort)(auVar23[0xf] >> 7) << 0xf;
        uVar13 = (uint)uVar7;
        if (uVar7 != 0) {
          auStack_198._0_8_ = uVar9;
          auStack_1b8._0_8_ = lVar16;
          auStack_1a8 = auVar22;
          auStack_188 = auVar40;
          do {
            uVar5 = 0;
            for (uVar6 = uVar13; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
              uVar5 = uVar5 + 1;
            }
            uVar9 = uVar5 + uVar9 & uVar14;
            if ((lVar2 == *(long *)(lVar12 + -0x18 + uVar9 * -0x28)) &&
               (iVar8 = (*(code *)PTR_bcmp_01aa6eb8)
                                  (lVar15,*(undefined8 *)(uVar9 * -0x28 + lVar12 + -0x20),lVar2),
               iVar8 == 0)) {
              param_1 = param_1 * dStack_178;
              lVar15 = lVar12 + uVar9 * -0x28;
              dVar1 = *(double *)(lVar12 + -8 + uVar9 * -0x28);
              dVar19 = dStack_178 + dVar1;
              dVar33 = 0.0;
              if (_DAT_00352e38 < (double)(_DAT_00354750 & (ulong)dVar19)) {
                dVar33 = (dVar1 * *(double *)(lVar12 + -0x10 + uVar9 * -0x28) + param_1) / dVar19;
              }
              *(double *)(lVar15 + -0x10) = dVar33;
              *(double *)(lVar15 + -8) = dVar19;
              if (*(long *)(param_4 + 0x780) == 0) goto LAB_00832be8;
              uVar9 = _ZN4core4hash11BuildHasher8hash_one17hec92e4315c4796f5E
                                (param_4 + 0x788,param_6);
              lVar12 = *(long *)(param_4 + 0x768);
              uVar14 = *(ulong *)(param_4 + 0x770);
              bVar17 = (byte)(uVar9 >> 0x39);
              auVar22 = ZEXT216(CONCAT11(bVar17,bVar17));
              auVar22 = pshuflw(auVar22,auVar22,0);
              uVar18 = auVar22._0_4_;
              auVar40._4_4_ = uVar18;
              auVar40._0_4_ = uVar18;
              auVar40._8_4_ = uVar18;
              auVar40._12_4_ = uVar18;
              lVar15 = param_6[1];
              lVar2 = param_6[2];
              lVar16 = 0;
              goto LAB_008324b9;
            }
            uVar7 = (ushort)(uVar13 - 1) & (ushort)uVar13;
            uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar7);
            uVar9 = auStack_198._0_8_;
            lVar16 = auStack_1b8._0_8_;
            auVar22 = auStack_1a8;
            auVar40 = auStack_188;
          } while (uVar7 != 0);
        }
        auVar47[0] = -(auVar40[0] == -1);
        auVar47[1] = -(auVar40[1] == -1);
        auVar47[2] = -(auVar40[2] == -1);
        auVar47[3] = -(auVar40[3] == -1);
        auVar47[4] = -(auVar40[4] == -1);
        auVar47[5] = -(auVar40[5] == -1);
        auVar47[6] = -(auVar40[6] == -1);
        auVar47[7] = -(auVar40[7] == -1);
        auVar47[8] = -(auVar40[8] == -1);
        auVar47[9] = -(auVar40[9] == -1);
        auVar47[10] = -(auVar40[10] == -1);
        auVar47[0xb] = -(auVar40[0xb] == -1);
        auVar47[0xc] = -(auVar40[0xc] == -1);
        auVar47[0xd] = -(auVar40[0xd] == -1);
        auVar47[0xe] = -(auVar40[0xe] == -1);
        bVar4 = auVar40[0xf] == -1;
        auVar47[0xf] = -bVar4;
        if ((((((((((((((((auVar47 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                         (auVar47 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar47 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar47 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar47 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar47 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar47 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar47 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar47 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar47 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar47 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar47 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar47 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar47 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar47 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar4) break;
        uVar9 = uVar9 + lVar16 + 0x10;
        lVar16 = lVar16 + 0x10;
      }
    }
    pcStack_1f0 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE_llvm_1643563994444475245
    ;
    puStack_1e8 = &UNK_019e2000;
    uStack_1e0 = 1;
    uStack_1c8 = 0;
    pplStack_1d8 = &plStack_1f8;
    uStack_1d0 = 1;
    plStack_1f8 = param_6;
    (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_01aa6d80)
              (&uStack_c0,&puStack_1e8);
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc35___rust_no_alloc_shim_is_unstable_v2_01aa6a40)();
    puVar10 = (undefined8 *)
              (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc12___rust_alloc_01aa6a18)(0x20,8);
    if (puVar10 == (undefined8 *)0x0) {
      (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17hf07a1aab219f1466E_01aa6c98)(8,0x20);
      goto LAB_00833149;
    }
  }
  *puVar10 = 0;
  goto LAB_00832eff;
LAB_008324b9:
  uVar9 = uVar9 & uVar14;
  auVar22 = *(undefined1 (*) [16])(lVar12 + uVar9);
  auVar28[0] = -(auVar22[0] == auVar40[0]);
  auVar28[1] = -(auVar22[1] == auVar40[1]);
  auVar28[2] = -(auVar22[2] == auVar40[2]);
  auVar28[3] = -(auVar22[3] == auVar40[3]);
  auVar28[4] = -(auVar22[4] == auVar40[4]);
  auVar28[5] = -(auVar22[5] == auVar40[5]);
  auVar28[6] = -(auVar22[6] == auVar40[6]);
  auVar28[7] = -(auVar22[7] == auVar40[7]);
  auVar28[8] = -(auVar22[8] == auVar40[8]);
  auVar28[9] = -(auVar22[9] == auVar40[9]);
  auVar28[10] = -(auVar22[10] == auVar40[10]);
  auVar28[0xb] = -(auVar22[0xb] == auVar40[0xb]);
  auVar28[0xc] = -(auVar22[0xc] == auVar40[0xc]);
  auVar28[0xd] = -(auVar22[0xd] == auVar40[0xd]);
  auVar28[0xe] = -(auVar22[0xe] == auVar40[0xe]);
  auVar28[0xf] = -(auVar22[0xf] == auVar40[0xf]);
  uVar7 = (ushort)(SUB161(auVar28 >> 7,0) & 1) | (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
          (ushort)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
          (ushort)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
          (ushort)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
          (ushort)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
          (ushort)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
          (ushort)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
          (ushort)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
          (ushort)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
          (ushort)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
          (ushort)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
          (ushort)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
          (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe | (ushort)(auVar28[0xf] >> 7) << 0xf;
  uVar13 = (uint)uVar7;
  if (uVar7 != 0) {
    auStack_198._0_8_ = uVar9;
    auStack_1b8._0_8_ = lVar16;
    auStack_1a8 = auVar40;
    auStack_188 = auVar22;
    do {
      uVar5 = 0;
      for (uVar6 = uVar13; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
        uVar5 = uVar5 + 1;
      }
      lVar16 = (uVar5 + uVar9 & uVar14) * -0x290;
      if ((lVar2 == *(long *)(lVar12 + -0x280 + lVar16)) &&
         (iVar8 = (*(code *)PTR_bcmp_01aa6eb8)
                            (lVar15,*(undefined8 *)(lVar16 + lVar12 + -0x288),lVar2), iVar8 == 0)) {
        *(double *)(lVar12 + -0x60 + lVar16) =
             (double)(_DAT_00354750 & (ulong)dStack_178) + *(double *)(lVar12 + -0x60 + lVar16);
        lVar12 = 0x860;
        lVar15 = 0x850;
        goto LAB_0083309b;
      }
      uVar7 = (ushort)(uVar13 - 1) & (ushort)uVar13;
      uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar7);
      uVar9 = auStack_198._0_8_;
      lVar16 = auStack_1b8._0_8_;
      auVar40 = auStack_1a8;
      auVar22 = auStack_188;
    } while (uVar7 != 0);
  }
  auVar52[0] = -(auVar22[0] == -1);
  auVar52[1] = -(auVar22[1] == -1);
  auVar52[2] = -(auVar22[2] == -1);
  auVar52[3] = -(auVar22[3] == -1);
  auVar52[4] = -(auVar22[4] == -1);
  auVar52[5] = -(auVar22[5] == -1);
  auVar52[6] = -(auVar22[6] == -1);
  auVar52[7] = -(auVar22[7] == -1);
  auVar52[8] = -(auVar22[8] == -1);
  auVar52[9] = -(auVar22[9] == -1);
  auVar52[10] = -(auVar22[10] == -1);
  auVar52[0xb] = -(auVar22[0xb] == -1);
  auVar52[0xc] = -(auVar22[0xc] == -1);
  auVar52[0xd] = -(auVar22[0xd] == -1);
  auVar52[0xe] = -(auVar22[0xe] == -1);
  bVar4 = auVar22[0xf] == -1;
  auVar52[0xf] = -bVar4;
  if ((((((((((((((((auVar52 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                   (auVar52 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar52 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar52 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar52 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar52 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar52 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar52 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar52 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar52 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar52 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
         (auVar52 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
        (auVar52 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
       (auVar52 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
      (auVar52 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar4)
  goto LAB_00832be8;
  uVar9 = uVar9 + lVar16 + 0x10;
  lVar16 = lVar16 + 0x10;
  goto LAB_008324b9;
LAB_00832be8:
  pcStack_1f0 = 
  _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE_llvm_1643563994444475245
  ;
  puStack_1e8 = &UNK_019e1fd0;
  uStack_1e0 = 1;
  uStack_1c8 = 0;
  pplStack_1d8 = &plStack_1f8;
  uStack_1d0 = 1;
  plStack_1f8 = param_6;
  (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_01aa6d80)
            (&uStack_a8,&puStack_1e8);
  (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc35___rust_no_alloc_shim_is_unstable_v2_01aa6a40)();
  puVar10 = (undefined8 *)(*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc12___rust_alloc_01aa6a18)(0x20,8)
  ;
  if (puVar10 == (undefined8 *)0x0) {
    (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17hf07a1aab219f1466E_01aa6c98)(8,0x20);
    goto LAB_00833149;
  }
  goto LAB_00832ef8;
LAB_00832662:
  uVar9 = uVar9 & uVar14;
  auVar22 = *(undefined1 (*) [16])(lVar12 + uVar9);
  auVar29[0] = -(auVar22[0] == auVar41[0]);
  auVar29[1] = -(auVar22[1] == auVar41[1]);
  auVar29[2] = -(auVar22[2] == auVar41[2]);
  auVar29[3] = -(auVar22[3] == auVar41[3]);
  auVar29[4] = -(auVar22[4] == auVar41[4]);
  auVar29[5] = -(auVar22[5] == auVar41[5]);
  auVar29[6] = -(auVar22[6] == auVar41[6]);
  auVar29[7] = -(auVar22[7] == auVar41[7]);
  auVar29[8] = -(auVar22[8] == auVar41[8]);
  auVar29[9] = -(auVar22[9] == auVar41[9]);
  auVar29[10] = -(auVar22[10] == auVar41[10]);
  auVar29[0xb] = -(auVar22[0xb] == auVar41[0xb]);
  auVar29[0xc] = -(auVar22[0xc] == auVar41[0xc]);
  auVar29[0xd] = -(auVar22[0xd] == auVar41[0xd]);
  auVar29[0xe] = -(auVar22[0xe] == auVar41[0xe]);
  auVar29[0xf] = -(auVar22[0xf] == auVar41[0xf]);
  uVar7 = (ushort)(SUB161(auVar29 >> 7,0) & 1) | (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
          (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
          (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
          (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
          (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
          (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
          (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
          (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
          (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
          (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
          (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
          (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
          (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe | (ushort)(auVar29[0xf] >> 7) << 0xf;
  uVar13 = (uint)uVar7;
  if (uVar7 != 0) {
    auStack_198._0_8_ = uVar9;
    auStack_1b8._0_8_ = lVar16;
    auStack_1a8 = auVar41;
    auStack_188 = auVar22;
    do {
      uVar5 = 0;
      for (uVar6 = uVar13; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
        uVar5 = uVar5 + 1;
      }
      lVar16 = (uVar5 + uVar9 & uVar14) * -0x290;
      if ((lVar2 == *(long *)(lVar12 + -0x280 + lVar16)) &&
         (iVar8 = (*(code *)PTR_bcmp_01aa6eb8)
                            (lVar15,*(undefined8 *)(lVar16 + lVar12 + -0x288),lVar2), iVar8 == 0)) {
        *(double *)(lVar12 + -0x60 + lVar16) =
             (double)(_DAT_00354750 & (ulong)dStack_178) + *(double *)(lVar12 + -0x60 + lVar16);
        lVar12 = 0x858;
        lVar15 = 0x848;
        goto LAB_0083309b;
      }
      uVar7 = (ushort)(uVar13 - 1) & (ushort)uVar13;
      uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar7);
      uVar9 = auStack_198._0_8_;
      lVar16 = auStack_1b8._0_8_;
      auVar41 = auStack_1a8;
      auVar22 = auStack_188;
    } while (uVar7 != 0);
  }
  auVar53[0] = -(auVar22[0] == -1);
  auVar53[1] = -(auVar22[1] == -1);
  auVar53[2] = -(auVar22[2] == -1);
  auVar53[3] = -(auVar22[3] == -1);
  auVar53[4] = -(auVar22[4] == -1);
  auVar53[5] = -(auVar22[5] == -1);
  auVar53[6] = -(auVar22[6] == -1);
  auVar53[7] = -(auVar22[7] == -1);
  auVar53[8] = -(auVar22[8] == -1);
  auVar53[9] = -(auVar22[9] == -1);
  auVar53[10] = -(auVar22[10] == -1);
  auVar53[0xb] = -(auVar22[0xb] == -1);
  auVar53[0xc] = -(auVar22[0xc] == -1);
  auVar53[0xd] = -(auVar22[0xd] == -1);
  auVar53[0xe] = -(auVar22[0xe] == -1);
  bVar4 = auVar22[0xf] == -1;
  auVar53[0xf] = -bVar4;
  if ((((((((((((((((auVar53 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                   (auVar53 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar53 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar53 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar53 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar53 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar53 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar53 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar53 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar53 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar53 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
         (auVar53 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
        (auVar53 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
       (auVar53 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
      (auVar53 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar4)
  goto LAB_00832c89;
  uVar9 = uVar9 + lVar16 + 0x10;
  lVar16 = lVar16 + 0x10;
  goto LAB_00832662;
LAB_00832c89:
  pcStack_1f0 = 
  _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE_llvm_1643563994444475245
  ;
  puStack_1e8 = &UNK_019e1fd0;
  uStack_1e0 = 1;
  uStack_1c8 = 0;
  pplStack_1d8 = &plStack_1f8;
  uStack_1d0 = 1;
  plStack_1f8 = param_6;
  (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_01aa6d80)
            (&uStack_d8,&puStack_1e8);
  (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc35___rust_no_alloc_shim_is_unstable_v2_01aa6a40)();
  puVar10 = (undefined8 *)(*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc12___rust_alloc_01aa6a18)(0x20,8)
  ;
  uStack_98 = uStack_c8;
  uStack_a8 = uStack_d8;
  uStack_a0 = uStack_d0;
  if (puVar10 == (undefined8 *)0x0) {
    (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17hf07a1aab219f1466E_01aa6c98)(8,0x20);
    goto LAB_00833149;
  }
  goto LAB_00832ef8;
LAB_00832318:
  uVar9 = uVar9 & uVar14;
  auVar22 = *(undefined1 (*) [16])(lVar12 + uVar9);
  auVar27[0] = -(auVar22[0] == auVar39[0]);
  auVar27[1] = -(auVar22[1] == auVar39[1]);
  auVar27[2] = -(auVar22[2] == auVar39[2]);
  auVar27[3] = -(auVar22[3] == auVar39[3]);
  auVar27[4] = -(auVar22[4] == auVar39[4]);
  auVar27[5] = -(auVar22[5] == auVar39[5]);
  auVar27[6] = -(auVar22[6] == auVar39[6]);
  auVar27[7] = -(auVar22[7] == auVar39[7]);
  auVar27[8] = -(auVar22[8] == auVar39[8]);
  auVar27[9] = -(auVar22[9] == auVar39[9]);
  auVar27[10] = -(auVar22[10] == auVar39[10]);
  auVar27[0xb] = -(auVar22[0xb] == auVar39[0xb]);
  auVar27[0xc] = -(auVar22[0xc] == auVar39[0xc]);
  auVar27[0xd] = -(auVar22[0xd] == auVar39[0xd]);
  auVar27[0xe] = -(auVar22[0xe] == auVar39[0xe]);
  auVar27[0xf] = -(auVar22[0xf] == auVar39[0xf]);
  uVar7 = (ushort)(SUB161(auVar27 >> 7,0) & 1) | (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
          (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
          (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
          (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
          (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
          (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
          (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
          (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
          (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
          (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
          (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
          (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
          (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe | (ushort)(auVar27[0xf] >> 7) << 0xf;
  uVar13 = (uint)uVar7;
  if (uVar7 != 0) {
    auStack_198._0_8_ = uVar9;
    auStack_1b8._0_8_ = lVar16;
    auStack_1a8 = auVar39;
    auStack_188 = auVar22;
    do {
      uVar5 = 0;
      for (uVar6 = uVar13; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
        uVar5 = uVar5 + 1;
      }
      lVar16 = (uVar5 + uVar9 & uVar14) * -0x290;
      if ((lVar2 == *(long *)(lVar12 + -0x280 + lVar16)) &&
         (iVar8 = (*(code *)PTR_bcmp_01aa6eb8)
                            (lVar15,*(undefined8 *)(lVar16 + lVar12 + -0x288),lVar2), iVar8 == 0)) {
        *(double *)(lVar12 + -0x58 + lVar16) =
             (double)(_DAT_00354750 & (ulong)dStack_178) + *(double *)(lVar12 + -0x58 + lVar16);
        goto LAB_00833017;
      }
      uVar7 = (ushort)(uVar13 - 1) & (ushort)uVar13;
      uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar7);
      uVar9 = auStack_198._0_8_;
      lVar16 = auStack_1b8._0_8_;
      auVar39 = auStack_1a8;
      auVar22 = auStack_188;
    } while (uVar7 != 0);
  }
  auVar51[0] = -(auVar22[0] == -1);
  auVar51[1] = -(auVar22[1] == -1);
  auVar51[2] = -(auVar22[2] == -1);
  auVar51[3] = -(auVar22[3] == -1);
  auVar51[4] = -(auVar22[4] == -1);
  auVar51[5] = -(auVar22[5] == -1);
  auVar51[6] = -(auVar22[6] == -1);
  auVar51[7] = -(auVar22[7] == -1);
  auVar51[8] = -(auVar22[8] == -1);
  auVar51[9] = -(auVar22[9] == -1);
  auVar51[10] = -(auVar22[10] == -1);
  auVar51[0xb] = -(auVar22[0xb] == -1);
  auVar51[0xc] = -(auVar22[0xc] == -1);
  auVar51[0xd] = -(auVar22[0xd] == -1);
  auVar51[0xe] = -(auVar22[0xe] == -1);
  bVar4 = auVar22[0xf] == -1;
  auVar51[0xf] = -bVar4;
  if ((((((((((((((((auVar51 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                   (auVar51 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar51 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar51 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar51 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar51 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar51 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar51 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar51 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar51 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar51 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
         (auVar51 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
        (auVar51 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
       (auVar51 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
      (auVar51 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar4)
  goto LAB_00832b47;
  uVar9 = uVar9 + lVar16 + 0x10;
  lVar16 = lVar16 + 0x10;
  goto LAB_00832318;
LAB_00832b47:
  pcStack_1f0 = 
  _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE_llvm_1643563994444475245
  ;
  puStack_1e8 = &UNK_019e1fd0;
  uStack_1e0 = 1;
  uStack_1c8 = 0;
  pplStack_1d8 = &plStack_1f8;
  uStack_1d0 = 1;
  plStack_1f8 = param_6;
  (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_01aa6d80)
            (&uStack_48,&puStack_1e8);
  (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc35___rust_no_alloc_shim_is_unstable_v2_01aa6a40)();
  puVar10 = (undefined8 *)(*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc12___rust_alloc_01aa6a18)(0x20,8)
  ;
  uStack_98 = uStack_38;
  uStack_a8 = uStack_48;
  uStack_a0 = uStack_40;
  if (puVar10 == (undefined8 *)0x0) {
    (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17hf07a1aab219f1466E_01aa6c98)(8,0x20);
    goto LAB_00833149;
  }
  goto LAB_00832ef8;
LAB_00832a6a:
  uVar9 = uVar9 & uVar14;
  auVar22 = *(undefined1 (*) [16])(lVar12 + uVar9);
  auVar32[0] = -(auVar22[0] == auVar44[0]);
  auVar32[1] = -(auVar22[1] == auVar44[1]);
  auVar32[2] = -(auVar22[2] == auVar44[2]);
  auVar32[3] = -(auVar22[3] == auVar44[3]);
  auVar32[4] = -(auVar22[4] == auVar44[4]);
  auVar32[5] = -(auVar22[5] == auVar44[5]);
  auVar32[6] = -(auVar22[6] == auVar44[6]);
  auVar32[7] = -(auVar22[7] == auVar44[7]);
  auVar32[8] = -(auVar22[8] == auVar44[8]);
  auVar32[9] = -(auVar22[9] == auVar44[9]);
  auVar32[10] = -(auVar22[10] == auVar44[10]);
  auVar32[0xb] = -(auVar22[0xb] == auVar44[0xb]);
  auVar32[0xc] = -(auVar22[0xc] == auVar44[0xc]);
  auVar32[0xd] = -(auVar22[0xd] == auVar44[0xd]);
  auVar32[0xe] = -(auVar22[0xe] == auVar44[0xe]);
  auVar32[0xf] = -(auVar22[0xf] == auVar44[0xf]);
  uVar7 = (ushort)(SUB161(auVar32 >> 7,0) & 1) | (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
          (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
          (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
          (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
          (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
          (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
          (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
          (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
          (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
          (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
          (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
          (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
          (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe | (ushort)(auVar32[0xf] >> 7) << 0xf;
  uVar13 = (uint)uVar7;
  if (uVar7 != 0) {
    auStack_198._0_8_ = uVar9;
    auStack_1b8._0_8_ = lVar16;
    auStack_1a8 = auVar44;
    auStack_188 = auVar22;
    do {
      uVar5 = 0;
      for (uVar6 = uVar13; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
        uVar5 = uVar5 + 1;
      }
      lVar16 = (uVar5 + uVar9 & uVar14) * -0x290;
      if ((lVar2 == *(long *)(lVar12 + -0x280 + lVar16)) &&
         (iVar8 = (*(code *)PTR_bcmp_01aa6eb8)
                            (lVar15,*(undefined8 *)(lVar16 + lVar12 + -0x288),lVar2), iVar8 == 0)) {
        *(double *)(lVar12 + -0x58 + lVar16) =
             (double)(_DAT_00354750 & (ulong)dStack_178) + *(double *)(lVar12 + -0x58 + lVar16);
        goto LAB_00833083;
      }
      uVar7 = (ushort)(uVar13 - 1) & (ushort)uVar13;
      uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar7);
      uVar9 = auStack_198._0_8_;
      lVar16 = auStack_1b8._0_8_;
      auVar44 = auStack_1a8;
      auVar22 = auStack_188;
    } while (uVar7 != 0);
  }
  auVar56[0] = -(auVar22[0] == -1);
  auVar56[1] = -(auVar22[1] == -1);
  auVar56[2] = -(auVar22[2] == -1);
  auVar56[3] = -(auVar22[3] == -1);
  auVar56[4] = -(auVar22[4] == -1);
  auVar56[5] = -(auVar22[5] == -1);
  auVar56[6] = -(auVar22[6] == -1);
  auVar56[7] = -(auVar22[7] == -1);
  auVar56[8] = -(auVar22[8] == -1);
  auVar56[9] = -(auVar22[9] == -1);
  auVar56[10] = -(auVar22[10] == -1);
  auVar56[0xb] = -(auVar22[0xb] == -1);
  auVar56[0xc] = -(auVar22[0xc] == -1);
  auVar56[0xd] = -(auVar22[0xd] == -1);
  auVar56[0xe] = -(auVar22[0xe] == -1);
  bVar4 = auVar22[0xf] == -1;
  auVar56[0xf] = -bVar4;
  if ((((((((((((((((auVar56 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                   (auVar56 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar56 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar56 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar56 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar56 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar56 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar56 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar56 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar56 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar56 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
         (auVar56 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
        (auVar56 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
       (auVar56 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
      (auVar56 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar4)
  goto LAB_00832e6c;
  uVar9 = uVar9 + lVar16 + 0x10;
  lVar16 = lVar16 + 0x10;
  goto LAB_00832a6a;
LAB_00832e6c:
  pcStack_1f0 = 
  _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE_llvm_1643563994444475245
  ;
  puStack_1e8 = &UNK_019e1fd0;
  uStack_1e0 = 1;
  uStack_1c8 = 0;
  pplStack_1d8 = &plStack_1f8;
  uStack_1d0 = 1;
  plStack_1f8 = param_6;
  (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_01aa6d80)
            (&uStack_78,&puStack_1e8);
  (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc35___rust_no_alloc_shim_is_unstable_v2_01aa6a40)();
  puVar10 = (undefined8 *)(*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc12___rust_alloc_01aa6a18)(0x20,8)
  ;
  uStack_98 = uStack_68;
  uStack_a8 = uStack_78;
  uStack_a0 = uStack_70;
  if (puVar10 == (undefined8 *)0x0) {
    (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17hf07a1aab219f1466E_01aa6c98)(8,0x20);
    goto LAB_00833149;
  }
  goto LAB_00832ef8;
LAB_008327ba:
  uVar9 = uVar9 & uVar14;
  auVar22 = *(undefined1 (*) [16])(lVar12 + uVar9);
  auVar30[0] = -(auVar22[0] == auVar42[0]);
  auVar30[1] = -(auVar22[1] == auVar42[1]);
  auVar30[2] = -(auVar22[2] == auVar42[2]);
  auVar30[3] = -(auVar22[3] == auVar42[3]);
  auVar30[4] = -(auVar22[4] == auVar42[4]);
  auVar30[5] = -(auVar22[5] == auVar42[5]);
  auVar30[6] = -(auVar22[6] == auVar42[6]);
  auVar30[7] = -(auVar22[7] == auVar42[7]);
  auVar30[8] = -(auVar22[8] == auVar42[8]);
  auVar30[9] = -(auVar22[9] == auVar42[9]);
  auVar30[10] = -(auVar22[10] == auVar42[10]);
  auVar30[0xb] = -(auVar22[0xb] == auVar42[0xb]);
  auVar30[0xc] = -(auVar22[0xc] == auVar42[0xc]);
  auVar30[0xd] = -(auVar22[0xd] == auVar42[0xd]);
  auVar30[0xe] = -(auVar22[0xe] == auVar42[0xe]);
  auVar30[0xf] = -(auVar22[0xf] == auVar42[0xf]);
  uVar7 = (ushort)(SUB161(auVar30 >> 7,0) & 1) | (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
          (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
          (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
          (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
          (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
          (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
          (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
          (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
          (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
          (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
          (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
          (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
          (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe | (ushort)(auVar30[0xf] >> 7) << 0xf;
  uVar13 = (uint)uVar7;
  if (uVar7 != 0) {
    auStack_198._0_8_ = uVar9;
    auStack_1b8._0_8_ = lVar16;
    auStack_1a8 = auVar42;
    auStack_188 = auVar22;
    do {
      uVar5 = 0;
      for (uVar6 = uVar13; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
        uVar5 = uVar5 + 1;
      }
      lVar16 = (uVar5 + uVar9 & uVar14) * -0x290;
      if ((lVar2 == *(long *)(lVar12 + -0x280 + lVar16)) &&
         (iVar8 = (*(code *)PTR_bcmp_01aa6eb8)
                            (lVar15,*(undefined8 *)(lVar16 + lVar12 + -0x288),lVar2), iVar8 == 0)) {
        *(double *)(lVar12 + -0x68 + lVar16) =
             (double)(_DAT_00354750 & (ulong)dStack_178) + *(double *)(lVar12 + -0x68 + lVar16);
LAB_00833017:
        param_1 = param_1 * dStack_178;
        lVar12 = 0x860;
        lVar15 = 0x850;
        goto LAB_0083309b;
      }
      uVar7 = (ushort)(uVar13 - 1) & (ushort)uVar13;
      uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar7);
      uVar9 = auStack_198._0_8_;
      lVar16 = auStack_1b8._0_8_;
      auVar42 = auStack_1a8;
      auVar22 = auStack_188;
    } while (uVar7 != 0);
  }
  auVar54[0] = -(auVar22[0] == -1);
  auVar54[1] = -(auVar22[1] == -1);
  auVar54[2] = -(auVar22[2] == -1);
  auVar54[3] = -(auVar22[3] == -1);
  auVar54[4] = -(auVar22[4] == -1);
  auVar54[5] = -(auVar22[5] == -1);
  auVar54[6] = -(auVar22[6] == -1);
  auVar54[7] = -(auVar22[7] == -1);
  auVar54[8] = -(auVar22[8] == -1);
  auVar54[9] = -(auVar22[9] == -1);
  auVar54[10] = -(auVar22[10] == -1);
  auVar54[0xb] = -(auVar22[0xb] == -1);
  auVar54[0xc] = -(auVar22[0xc] == -1);
  auVar54[0xd] = -(auVar22[0xd] == -1);
  auVar54[0xe] = -(auVar22[0xe] == -1);
  bVar4 = auVar22[0xf] == -1;
  auVar54[0xf] = -bVar4;
  if ((((((((((((((((auVar54 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                   (auVar54 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar54 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar54 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar54 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar54 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar54 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar54 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar54 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar54 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar54 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
         (auVar54 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
        (auVar54 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
       (auVar54 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
      (auVar54 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar4)
  goto LAB_00832d2a;
  uVar9 = uVar9 + lVar16 + 0x10;
  lVar16 = lVar16 + 0x10;
  goto LAB_008327ba;
LAB_00832d2a:
  pcStack_1f0 = 
  _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE_llvm_1643563994444475245
  ;
  puStack_1e8 = &UNK_019e1fd0;
  uStack_1e0 = 1;
  uStack_1c8 = 0;
  pplStack_1d8 = &plStack_1f8;
  uStack_1d0 = 1;
  plStack_1f8 = param_6;
  (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_01aa6d80)
            (&uStack_108,&puStack_1e8);
  (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc35___rust_no_alloc_shim_is_unstable_v2_01aa6a40)();
  puVar10 = (undefined8 *)(*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc12___rust_alloc_01aa6a18)(0x20,8)
  ;
  uStack_98 = uStack_f8;
  uStack_a8 = uStack_108;
  uStack_a0 = uStack_100;
  if (puVar10 == (undefined8 *)0x0) {
    (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17hf07a1aab219f1466E_01aa6c98)(8,0x20);
    goto LAB_00833149;
  }
  goto LAB_00832ef8;
LAB_00832912:
  uVar9 = uVar9 & uVar14;
  auVar22 = *(undefined1 (*) [16])(lVar12 + uVar9);
  auVar31[0] = -(auVar22[0] == auVar43[0]);
  auVar31[1] = -(auVar22[1] == auVar43[1]);
  auVar31[2] = -(auVar22[2] == auVar43[2]);
  auVar31[3] = -(auVar22[3] == auVar43[3]);
  auVar31[4] = -(auVar22[4] == auVar43[4]);
  auVar31[5] = -(auVar22[5] == auVar43[5]);
  auVar31[6] = -(auVar22[6] == auVar43[6]);
  auVar31[7] = -(auVar22[7] == auVar43[7]);
  auVar31[8] = -(auVar22[8] == auVar43[8]);
  auVar31[9] = -(auVar22[9] == auVar43[9]);
  auVar31[10] = -(auVar22[10] == auVar43[10]);
  auVar31[0xb] = -(auVar22[0xb] == auVar43[0xb]);
  auVar31[0xc] = -(auVar22[0xc] == auVar43[0xc]);
  auVar31[0xd] = -(auVar22[0xd] == auVar43[0xd]);
  auVar31[0xe] = -(auVar22[0xe] == auVar43[0xe]);
  auVar31[0xf] = -(auVar22[0xf] == auVar43[0xf]);
  uVar7 = (ushort)(SUB161(auVar31 >> 7,0) & 1) | (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auVar31 >> 0x17,0) & 1) << 2 |
          (ushort)(SUB161(auVar31 >> 0x1f,0) & 1) << 3 |
          (ushort)(SUB161(auVar31 >> 0x27,0) & 1) << 4 |
          (ushort)(SUB161(auVar31 >> 0x2f,0) & 1) << 5 |
          (ushort)(SUB161(auVar31 >> 0x37,0) & 1) << 6 |
          (ushort)(SUB161(auVar31 >> 0x3f,0) & 1) << 7 |
          (ushort)(SUB161(auVar31 >> 0x47,0) & 1) << 8 |
          (ushort)(SUB161(auVar31 >> 0x4f,0) & 1) << 9 |
          (ushort)(SUB161(auVar31 >> 0x57,0) & 1) << 10 |
          (ushort)(SUB161(auVar31 >> 0x5f,0) & 1) << 0xb |
          (ushort)(SUB161(auVar31 >> 0x67,0) & 1) << 0xc |
          (ushort)(SUB161(auVar31 >> 0x6f,0) & 1) << 0xd |
          (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe | (ushort)(auVar31[0xf] >> 7) << 0xf;
  uVar13 = (uint)uVar7;
  if (uVar7 != 0) {
    auStack_198._0_8_ = uVar9;
    auStack_1b8._0_8_ = lVar16;
    auStack_1a8 = auVar43;
    auStack_188 = auVar22;
    do {
      uVar5 = 0;
      for (uVar6 = uVar13; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
        uVar5 = uVar5 + 1;
      }
      lVar16 = (uVar5 + uVar9 & uVar14) * -0x290;
      if ((lVar2 == *(long *)(lVar12 + -0x280 + lVar16)) &&
         (iVar8 = (*(code *)PTR_bcmp_01aa6eb8)
                            (lVar15,*(undefined8 *)(lVar16 + lVar12 + -0x288),lVar2), iVar8 == 0)) {
        *(double *)(lVar12 + -0x68 + lVar16) =
             (double)(_DAT_00354750 & (ulong)dStack_178) + *(double *)(lVar12 + -0x68 + lVar16);
LAB_00833083:
        param_1 = param_1 * dStack_178;
        lVar12 = 0x858;
        lVar15 = 0x848;
LAB_0083309b:
        *(double *)(param_4 + lVar15) = dStack_158 * param_1 + *(double *)(param_4 + lVar15);
        *(double *)(param_4 + lVar12) = dStack_178 + *(double *)(param_4 + lVar12);
        if (*param_6 != 0) {
          (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20)
                    (param_6[1],*param_6,1);
        }
        return 0;
      }
      uVar7 = (ushort)(uVar13 - 1) & (ushort)uVar13;
      uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar7);
      uVar9 = auStack_198._0_8_;
      lVar16 = auStack_1b8._0_8_;
      auVar43 = auStack_1a8;
      auVar22 = auStack_188;
    } while (uVar7 != 0);
  }
  auVar55[0] = -(auVar22[0] == -1);
  auVar55[1] = -(auVar22[1] == -1);
  auVar55[2] = -(auVar22[2] == -1);
  auVar55[3] = -(auVar22[3] == -1);
  auVar55[4] = -(auVar22[4] == -1);
  auVar55[5] = -(auVar22[5] == -1);
  auVar55[6] = -(auVar22[6] == -1);
  auVar55[7] = -(auVar22[7] == -1);
  auVar55[8] = -(auVar22[8] == -1);
  auVar55[9] = -(auVar22[9] == -1);
  auVar55[10] = -(auVar22[10] == -1);
  auVar55[0xb] = -(auVar22[0xb] == -1);
  auVar55[0xc] = -(auVar22[0xc] == -1);
  auVar55[0xd] = -(auVar22[0xd] == -1);
  auVar55[0xe] = -(auVar22[0xe] == -1);
  bVar4 = auVar22[0xf] == -1;
  auVar55[0xf] = -bVar4;
  if ((((((((((((((((auVar55 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                   (auVar55 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar55 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar55 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar55 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar55 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar55 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar55 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar55 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar55 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar55 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
         (auVar55 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
        (auVar55 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
       (auVar55 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
      (auVar55 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar4)
  goto LAB_00832dcb;
  uVar9 = uVar9 + lVar16 + 0x10;
  lVar16 = lVar16 + 0x10;
  goto LAB_00832912;
LAB_00832dcb:
  pcStack_1f0 = 
  _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdb4f0a07d4290bbfE_llvm_1643563994444475245
  ;
  puStack_1e8 = &UNK_019e1fd0;
  uStack_1e0 = 1;
  uStack_1c8 = 0;
  pplStack_1d8 = &plStack_1f8;
  uStack_1d0 = 1;
  plStack_1f8 = param_6;
  (*(code *)PTR__ZN5alloc3fmt6format12format_inner17hecd64d831fae0142E_01aa6d80)
            (&uStack_138,&puStack_1e8);
  (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc35___rust_no_alloc_shim_is_unstable_v2_01aa6a40)();
  puVar10 = (undefined8 *)(*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc12___rust_alloc_01aa6a18)(0x20,8)
  ;
  uStack_98 = uStack_128;
  uStack_a8 = uStack_138;
  uStack_a0 = uStack_130;
  if (puVar10 == (undefined8 *)0x0) {
    (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17hf07a1aab219f1466E_01aa6c98)(8,0x20);
    goto LAB_00833149;
  }
LAB_00832ef8:
  *puVar10 = 1;
  uStack_b0 = uStack_98;
  uStack_c0 = uStack_a8;
  uStack_b8 = uStack_a0;
LAB_00832eff:
  puVar10[1] = uStack_c0;
  puVar10[2] = uStack_b8;
  puVar10[3] = uStack_b0;
  uVar11 = _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17hd179a16700024adcE
                     (puVar10,anon_d0b8e27bea7bf57269a32e15b6abf5cf_309_llvm_1643563994444475245);
  if (*param_6 != 0) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_01aa6a20)(param_6[1],*param_6,1);
  }
  return uVar11;
}


