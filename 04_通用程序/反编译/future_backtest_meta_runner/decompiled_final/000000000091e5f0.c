// ELF address 0x000000000091e5f0; future_backtest::RunnerCore::deep_merge

void _ZN15future_backtest10RunnerCore10deep_merge17h91288c7e34e45ebaE
               (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  undefined1 auVar8 [16];
  long lStack_218;
  char *pcStack_210;
  long lStack_208;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1d8;
  char *pcStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 *puStack_1b0;
  long lStack_1a8;
  char *pcStack_1a0;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined8 uStack_158;
  long lStack_150;
  ulong auStack_140 [3];
  undefined8 uStack_128;
  ulong uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  long lStack_100;
  long lStack_f8;
  char *pcStack_f0;
  long lStack_e8;
  long lStack_e0;
  char *pcStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_b8;
  char *pcStack_b0;
  long lStack_a8;
  long lStack_98;
  long lStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  char acStack_70 [32];
  char acStack_50 [32];
  
  uStack_188 = *param_2;
  uStack_180 = param_2[1];
  uStack_178 = param_2[2];
  uStack_170 = param_2[3];
  uStack_168 = *param_3;
  lStack_160 = param_3[1];
  uStack_158 = param_3[2];
  lStack_150 = param_3[3];
  if (((char)uStack_188 == '\x06') && ((char)uStack_168 == '\x06')) {
    uStack_1e8 = param_2[3];
    uStack_1f8 = param_2[1];
    uStack_1f0 = param_2[2];
    auStack_140[0] = (ulong)(lStack_160 != 0);
    lStack_100 = lStack_160;
    if (lStack_160 != 0) {
      lStack_100 = lStack_150;
    }
    auStack_140[1] = 0;
    uStack_118 = 0;
    puStack_1b0 = param_1;
    auStack_140[2] = lStack_160;
    uStack_128 = uStack_158;
    uStack_120 = auStack_140[0];
    lStack_110 = lStack_160;
    uStack_108 = uStack_158;
    while (_ZN5alloc11collections5btree3map25IntoIter_LT_K_C_V_C_A_GT_10dying_next17h8f620c726ac35ce3E_llvm_1643563994444475245
                     (&lStack_1a8,auStack_140), lStack_1a8 != 0) {
      lVar7 = CONCAT44(uStack_194,uStack_198);
      lStack_208 = *(long *)(lStack_1a8 + 0x178 + lVar7 * 0x18);
      plVar6 = (long *)(lStack_1a8 + 0x168 + lVar7 * 0x18);
      lStack_218 = *plVar6;
      pcStack_210 = (char *)plVar6[1];
      lVar7 = lVar7 * 0x20;
      lStack_e0 = *(long *)(lStack_1a8 + lVar7);
      pcStack_d8 = (char *)((long *)(lStack_1a8 + lVar7))[1];
      plVar6 = (long *)(lStack_1a8 + 0x10 + lVar7);
      lStack_d0 = *plVar6;
      lStack_c8 = plVar6[1];
      plVar6 = (long *)(lStack_1a8 + lVar7);
      lStack_98 = *plVar6;
      lStack_90 = plVar6[1];
      uStack_88 = (undefined4)plVar6[2];
      uStack_84 = *(undefined4 *)((long)plVar6 + 0x14);
      uStack_80 = (undefined4)plVar6[3];
      uStack_7c = *(undefined4 *)((long)plVar6 + 0x1c);
      lStack_f8 = lStack_218;
      pcStack_f0 = pcStack_210;
      lStack_e8 = lStack_208;
      if ((lStack_208 == 0x10) &&
         (auVar8[0] = -(*pcStack_210 == DAT_00352a10), auVar8[1] = -(pcStack_210[1] == UNK_00352a11)
         , auVar8[2] = -(pcStack_210[2] == UNK_00352a12),
         auVar8[3] = -(pcStack_210[3] == UNK_00352a13),
         auVar8[4] = -(pcStack_210[4] == UNK_00352a14),
         auVar8[5] = -(pcStack_210[5] == UNK_00352a15),
         auVar8[6] = -(pcStack_210[6] == UNK_00352a16),
         auVar8[7] = -(pcStack_210[7] == UNK_00352a17),
         auVar8[8] = -(pcStack_210[8] == UNK_00352a18),
         auVar8[9] = -(pcStack_210[9] == UNK_00352a19),
         auVar8[10] = -(pcStack_210[10] == UNK_00352a1a),
         auVar8[0xb] = -(pcStack_210[0xb] == UNK_00352a1b),
         auVar8[0xc] = -(pcStack_210[0xc] == UNK_00352a1c),
         auVar8[0xd] = -(pcStack_210[0xd] == UNK_00352a1d),
         auVar8[0xe] = -(pcStack_210[0xe] == UNK_00352a1e),
         auVar8[0xf] = -(pcStack_210[0xf] == UNK_00352a1f),
         (ushort)((ushort)(SUB161(auVar8 >> 7,0) & 1) | (ushort)(SUB161(auVar8 >> 0xf,0) & 1) << 1 |
                  (ushort)(SUB161(auVar8 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar8 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar8 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar8 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar8 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar8 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar8 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar8 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar8 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar8 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar8 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar8 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar8 >> 0x77,0) & 1) << 0xe | (ushort)(auVar8[0xf] >> 7) << 0xf)
         == 0xffff)) {
        lStack_1a8 = *plVar6;
        pcStack_1a0 = (char *)plVar6[1];
        uStack_198 = (undefined4)plVar6[2];
        uStack_194 = *(undefined4 *)((long)plVar6 + 0x14);
        uStack_190 = (undefined4)plVar6[3];
        uStack_18c = *(undefined4 *)((long)plVar6 + 0x1c);
        lStack_1d8 = lStack_218;
        pcStack_1d0 = pcStack_210;
        uStack_1c8 = lStack_208;
        _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6insert17h4722df2c96944f7aE
                  (acStack_70,&uStack_1f8,&lStack_1d8,&lStack_1a8);
        if (acStack_70[0] != '\a') {
          _ZN4core3ptr39drop_in_place_LT_toml__value__Value_GT_17h19ab690cc17942f7E(acStack_70);
        }
      }
      else {
        _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6remove17h3514840d8e1e8590E
                  (acStack_50,&uStack_1f8,&lStack_218);
        if (acStack_50[0] == '\a') {
          uStack_1c8 = lStack_d0;
          uStack_1c0 = lStack_c8;
          lStack_1d8 = lStack_e0;
          pcStack_1d0 = pcStack_d8;
        }
        else {
          _ZN15future_backtest10RunnerCore10deep_merge17h91288c7e34e45ebaE
                    (&lStack_1d8,acStack_50,&lStack_e0);
        }
        lStack_a8 = lStack_208;
        lStack_b8 = lStack_218;
        pcStack_b0 = pcStack_210;
        uStack_198 = (undefined4)uStack_1c8;
        uStack_194 = uStack_1c8._4_4_;
        uStack_190 = (undefined4)uStack_1c0;
        uStack_18c = uStack_1c0._4_4_;
        lStack_1a8 = lStack_1d8;
        pcStack_1a0 = pcStack_1d0;
        _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6insert17h4722df2c96944f7aE
                  (acStack_70,&uStack_1f8,&lStack_b8,&lStack_1a8);
        if (acStack_70[0] != '\a') {
          _ZN4core3ptr39drop_in_place_LT_toml__value__Value_GT_17h19ab690cc17942f7E(acStack_70);
        }
      }
    }
    _ZN99__LT_alloc__collections__btree__map__IntoIter_LT_K_C_V_C_A_GT__u20_as_u20_core__ops__drop__Drop_GT_4drop17h28ac487f5b404079E
              (auStack_140);
    puStack_1b0[3] = uStack_1e8;
    puStack_1b0[1] = uStack_1f8;
    puStack_1b0[2] = uStack_1f0;
    *(undefined1 *)puStack_1b0 = 6;
  }
  else {
    uVar4 = *param_3;
    uVar5 = param_3[1];
    uVar1 = *(undefined4 *)((long)param_3 + 0x14);
    uVar2 = *(undefined4 *)(param_3 + 3);
    uVar3 = *(undefined4 *)((long)param_3 + 0x1c);
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 2);
    *(undefined4 *)((long)param_1 + 0x14) = uVar1;
    *(undefined4 *)(param_1 + 3) = uVar2;
    *(undefined4 *)((long)param_1 + 0x1c) = uVar3;
    *param_1 = uVar4;
    param_1[1] = uVar5;
    if ((char)uStack_188 == '\x06') {
      _ZN99__LT_alloc__collections__btree__map__BTreeMap_LT_K_C_V_C_A_GT__u20_as_u20_core__ops__drop__Drop_GT_4drop17h32fd8fdf528f3f41E
                (&uStack_180);
    }
    else {
      _ZN4core3ptr39drop_in_place_LT_toml__value__Value_GT_17h19ab690cc17942f7E(&uStack_188);
    }
  }
  return;
}


