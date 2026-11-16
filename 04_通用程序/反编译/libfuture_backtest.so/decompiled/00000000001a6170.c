// ELF address 0x00000000001a6170; fb_ctx_fee_bp

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double fb_ctx_fee_bp(long param_1,long param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined *puVar4;
  long **pplVar5;
  byte bVar6;
  ushort uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  byte *pbVar15;
  uint uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  double *pdVar19;
  long lVar20;
  long *plVar21;
  long lVar22;
  uint uVar23;
  undefined8 uVar24;
  long lVar25;
  undefined8 uVar26;
  long lVar27;
  undefined4 uVar28;
  undefined8 extraout_XMM0_Qa;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  double local_140;
  double local_130;
  long **pplStack_128;
  undefined8 local_120;
  undefined8 local_118;
  long ***ppplStack_110;
  undefined1 local_108 [16];
  undefined1 auStack_f8 [16];
  long *plStack_e0;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 auStack_b8 [16];
  undefined1 local_a8 [16];
  long ***local_98;
  undefined8 local_90;
  double local_88;
  double dStack_80;
  undefined1 local_78 [16];
  double local_68;
  double local_60;
  long local_58;
  double local_50;
  long local_48;
  undefined8 local_40;
  long local_38;
  
  if (param_2 == 0) {
LAB_002a61b8:
    uVar24 = 1;
    dVar29 = 0.0;
    lVar9 = 1;
  }
  else {
    lVar9 = (*(code *)PTR_strlen_003f29e8)(param_2);
                    /* try { // try from 002a6199 to 002a61a9 has its CatchHandler @ 002a6df1 */
    (*(code *)PTR_to_str_003f29f0)(&local_98,param_2,lVar9 + 1);
    dVar29 = local_88;
    uVar24 = local_90;
    if (((ulong)local_98 & 1) != 0) goto LAB_002a61b8;
    if ((long)local_88 < 0) {
      uVar26 = 0;
LAB_002a63cf:
                    /* try { // try from 002a63cf to 002a63de has its CatchHandler @ 002a6df1 */
      (*(code *)PTR_handle_error_003f2798)
                (uVar26,dVar29,anon_d0b8e27bea7bf57269a32e15b6abf5cf_211_llvm_1643563994444475245);
      goto LAB_002a6d67;
    }
    if (local_88 == 0.0) {
      lVar9 = 1;
      dVar29 = 0.0;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_003f2658)();
      lVar9 = (*(code *)PTR___rust_alloc_003f2630)(dVar29,1);
      uVar26 = 1;
      if (lVar9 == 0) goto LAB_002a63cf;
    }
  }
  (*(code *)PTR_memcpy_003f2700)(lVar9,uVar24,dVar29);
                    /* try { // try from 002a61ef to 002a6204 has its CatchHandler @ 002a6dab */
  local_60 = dVar29;
  local_58 = lVar9;
  local_50 = dVar29;
  (*(code *)PTR_code2inst_003f2748)(&local_48,&local_60);
  lVar9 = *(long *)(param_1 + 0xe8);
  lVar22 = *(long *)(lVar9 + 0x14b0);
  uVar11 = *(ulong *)(lVar22 + 0x10);
  if (uVar11 < 0x7fffffffffffffff) {
    local_118 = local_40;
    *(ulong *)(lVar22 + 0x10) = uVar11 + 1;
    local_68 = 0.0;
    if (*(long *)(lVar22 + 0x98) == 0) {
LAB_002a63f9:
      *(ulong *)(lVar22 + 0x10) = uVar11;
      lVar22 = *(long *)(lVar9 + 0x780);
    }
    else {
      uVar10 = core::hash::BuildHasher::hash_one(lVar22 + 0xa0,uVar24,dVar29);
      puVar4 = PTR_bcmp_003f2740;
      lVar20 = *(long *)(lVar22 + 0x80);
      uVar14 = *(ulong *)(lVar22 + 0x88);
      bVar6 = (byte)(uVar10 >> 0x39);
      auVar30 = ZEXT216(CONCAT11(bVar6,bVar6));
      auVar30 = pshuflw(auVar30,auVar30,0);
      uVar28 = auVar30._0_4_;
      auVar30._4_4_ = uVar28;
      auVar30._0_4_ = uVar28;
      auVar30._8_4_ = uVar28;
      auVar30._12_4_ = uVar28;
      lVar25 = lVar20 + -0x4d8;
      lVar27 = 0;
      while( true ) {
        uVar10 = uVar10 & uVar14;
        auVar37 = *(undefined1 (*) [16])(lVar20 + uVar10);
        auVar31[0] = -(auVar37[0] == auVar30[0]);
        auVar31[1] = -(auVar37[1] == auVar30[1]);
        auVar31[2] = -(auVar37[2] == auVar30[2]);
        auVar31[3] = -(auVar37[3] == auVar30[3]);
        auVar31[4] = -(auVar37[4] == auVar30[4]);
        auVar31[5] = -(auVar37[5] == auVar30[5]);
        auVar31[6] = -(auVar37[6] == auVar30[6]);
        auVar31[7] = -(auVar37[7] == auVar30[7]);
        auVar31[8] = -(auVar37[8] == auVar30[8]);
        auVar31[9] = -(auVar37[9] == auVar30[9]);
        auVar31[10] = -(auVar37[10] == auVar30[10]);
        auVar31[0xb] = -(auVar37[0xb] == auVar30[0xb]);
        auVar31[0xc] = -(auVar37[0xc] == auVar30[0xc]);
        auVar31[0xd] = -(auVar37[0xd] == auVar30[0xd]);
        auVar31[0xe] = -(auVar37[0xe] == auVar30[0xe]);
        auVar31[0xf] = -(auVar37[0xf] == auVar30[0xf]);
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
        uVar17 = (ulong)uVar7;
        if (uVar7 != 0) {
          local_108._0_8_ = uVar10;
          local_c8._0_8_ = uVar14;
          local_a8._0_8_ = lVar27;
          local_d8 = auVar30;
          local_78 = auVar37;
          do {
            uVar23 = 0;
            for (uVar16 = (uint)uVar17; (uVar16 & 1) == 0; uVar16 = uVar16 >> 1 | 0x80000000) {
              uVar23 = uVar23 + 1;
            }
            lVar27 = (uVar23 + uVar10 & uVar14) * -0x4d8;
            local_120 = uVar17;
            if (dVar29 == *(double *)(lVar25 + 0x10 + lVar27)) {
              auStack_f8._0_8_ = lVar25;
              auStack_b8._0_8_ = lVar20;
              iVar8 = (*(code *)puVar4)(uVar24,*(undefined8 *)(lVar25 + lVar27 + 8),dVar29);
              lVar20 = auStack_b8._0_8_;
              lVar25 = auStack_f8._0_8_;
              if (iVar8 == 0) {
                local_68 = *(double *)(auStack_b8._0_8_ + -8 + lVar27);
                goto LAB_002a63f9;
              }
            }
            iVar8 = (int)local_120 + -1;
            uVar7 = (ushort)iVar8 & (ushort)local_120;
            uVar17 = (ulong)CONCAT22((short)((uint)iVar8 >> 0x10),uVar7);
            uVar10 = local_108._0_8_;
            uVar14 = local_c8._0_8_;
            lVar27 = local_a8._0_8_;
            auVar30 = local_d8;
            auVar37 = local_78;
          } while (uVar7 != 0);
        }
        auVar42[0] = -(auVar37[0] == -1);
        auVar42[1] = -(auVar37[1] == -1);
        auVar42[2] = -(auVar37[2] == -1);
        auVar42[3] = -(auVar37[3] == -1);
        auVar42[4] = -(auVar37[4] == -1);
        auVar42[5] = -(auVar37[5] == -1);
        auVar42[6] = -(auVar37[6] == -1);
        auVar42[7] = -(auVar37[7] == -1);
        auVar42[8] = -(auVar37[8] == -1);
        auVar42[9] = -(auVar37[9] == -1);
        auVar42[10] = -(auVar37[10] == -1);
        auVar42[0xb] = -(auVar37[0xb] == -1);
        auVar42[0xc] = -(auVar37[0xc] == -1);
        auVar42[0xd] = -(auVar37[0xd] == -1);
        auVar42[0xe] = -(auVar37[0xe] == -1);
        bVar2 = auVar37[0xf] == -1;
        auVar42[0xf] = -bVar2;
        if ((((((((((((((((auVar42 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                         (auVar42 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar42 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar42 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar42 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar42 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar42 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar42 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar42 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar42 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar42 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar42 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar42 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar42 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar42 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar2) break;
        uVar10 = uVar10 + lVar27 + 0x10;
        lVar27 = lVar27 + 0x10;
      }
      *(ulong *)(lVar22 + 0x10) = uVar11;
      lVar22 = *(long *)(lVar9 + 0x780);
    }
    if (lVar22 == 0) {
      local_120 = local_120 & 0xffffffff00000000;
    }
    else {
      uVar14 = core::hash::BuildHasher::hash_one(lVar9 + 0x788,uVar24,dVar29);
      puVar4 = PTR_bcmp_003f2740;
      lVar22 = *(long *)(lVar9 + 0x768);
      uVar11 = *(ulong *)(lVar9 + 0x770);
      bVar6 = (byte)(uVar14 >> 0x39);
      auVar30 = ZEXT216(CONCAT11(bVar6,bVar6));
      auVar30 = pshuflw(auVar30,auVar30,0);
      uVar28 = auVar30._0_4_;
      auVar37._4_4_ = uVar28;
      auVar37._0_4_ = uVar28;
      auVar37._8_4_ = uVar28;
      auVar37._12_4_ = uVar28;
      lVar9 = 0;
      while( true ) {
        uVar14 = uVar14 & uVar11;
        auVar30 = *(undefined1 (*) [16])(lVar22 + uVar14);
        auVar32[0] = -(auVar30[0] == auVar37[0]);
        auVar32[1] = -(auVar30[1] == auVar37[1]);
        auVar32[2] = -(auVar30[2] == auVar37[2]);
        auVar32[3] = -(auVar30[3] == auVar37[3]);
        auVar32[4] = -(auVar30[4] == auVar37[4]);
        auVar32[5] = -(auVar30[5] == auVar37[5]);
        auVar32[6] = -(auVar30[6] == auVar37[6]);
        auVar32[7] = -(auVar30[7] == auVar37[7]);
        auVar32[8] = -(auVar30[8] == auVar37[8]);
        auVar32[9] = -(auVar30[9] == auVar37[9]);
        auVar32[10] = -(auVar30[10] == auVar37[10]);
        auVar32[0xb] = -(auVar30[0xb] == auVar37[0xb]);
        auVar32[0xc] = -(auVar30[0xc] == auVar37[0xc]);
        auVar32[0xd] = -(auVar30[0xd] == auVar37[0xd]);
        auVar32[0xe] = -(auVar30[0xe] == auVar37[0xe]);
        auVar32[0xf] = -(auVar30[0xf] == auVar37[0xf]);
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
        uVar23 = (uint)uVar7;
        if (uVar7 != 0) {
          auStack_b8._0_8_ = lVar9;
          local_120 = uVar14;
          local_108 = auVar30;
          auStack_f8 = auVar37;
          do {
            uVar16 = 0;
            for (uVar3 = uVar23; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
              uVar16 = uVar16 + 1;
            }
            lVar9 = (uVar16 + local_120 & uVar11) * -0x290;
            if ((dVar29 == *(double *)(lVar22 + -0x280 + lVar9)) &&
               (iVar8 = (*(code *)puVar4)(uVar24,*(undefined8 *)(lVar22 + lVar9 + -0x288)),
               iVar8 == 0)) {
              if (*(char *)(lVar22 + -0xc + lVar9) == '\0') {
                local_120 = (ulong)local_120._4_4_ << 0x20;
              }
              else {
                local_120 = CONCAT44(local_120._4_4_,(uint)(*(byte *)(lVar22 + lVar9 + -0xb) ^ 1));
              }
              goto LAB_002a655b;
            }
            uVar7 = (ushort)(uVar23 - 1) & (ushort)uVar23;
            uVar23 = CONCAT22((short)(uVar23 - 1 >> 0x10),uVar7);
            uVar14 = local_120;
            lVar9 = auStack_b8._0_8_;
            auVar37 = auStack_f8;
            auVar30 = local_108;
          } while (uVar7 != 0);
        }
        auVar43[0] = -(auVar30[0] == -1);
        auVar43[1] = -(auVar30[1] == -1);
        auVar43[2] = -(auVar30[2] == -1);
        auVar43[3] = -(auVar30[3] == -1);
        auVar43[4] = -(auVar30[4] == -1);
        auVar43[5] = -(auVar30[5] == -1);
        auVar43[6] = -(auVar30[6] == -1);
        auVar43[7] = -(auVar30[7] == -1);
        auVar43[8] = -(auVar30[8] == -1);
        auVar43[9] = -(auVar30[9] == -1);
        auVar43[10] = -(auVar30[10] == -1);
        auVar43[0xb] = -(auVar30[0xb] == -1);
        auVar43[0xc] = -(auVar30[0xc] == -1);
        auVar43[0xd] = -(auVar30[0xd] == -1);
        auVar43[0xe] = -(auVar30[0xe] == -1);
        bVar2 = auVar30[0xf] == -1;
        auVar43[0xf] = -bVar2;
        if ((((((((((((((((auVar43 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                         (auVar43 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar43 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar43 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar43 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar43 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar43 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar43 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar43 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar43 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar43 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar43 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar43 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar43 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar43 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar2) break;
        uVar14 = uVar14 + lVar9 + 0x10;
        lVar9 = lVar9 + 0x10;
      }
      local_120 = local_120 & 0xffffffff00000000;
    }
LAB_002a655b:
                    /* try { // try from 002a6560 to 002a6574 has its CatchHandler @ 002a6dbe */
    uVar11 = (*(code *)PTR_dyn_mult_003f29d8)(uVar24,dVar29);
    auStack_b8._0_8_ = extraout_XMM0_Qa;
    if ((uVar11 & 1) == 0) {
      pplStack_128 = (long **)&_<future_backtest::future_info::pointer_mul::INST_MULT_as_core::ops::deref::Deref>
                               ::deref::__stability::LAZY;
      if (DAT_003f4c40 != 0) {
        ppplStack_110 = &pplStack_128;
        local_98 = (long ***)&ppplStack_110;
                    /* try { // try from 002a6c79 to 002a6d66 has its CatchHandler @ 002a6dbe */
        (*(code *)PTR_call_003f2818)
                  (&DAT_003f4c40,0,&local_98,
                   anon_fdbab276b20b22b3c9c7da938155e424_73_llvm_4008431589571684065,
                   anon_fdbab276b20b22b3c9c7da938155e424_394_llvm_4008431589571684065);
      }
      pplVar5 = pplStack_128;
      if (pplStack_128[3] == (long *)0x0) {
        plVar12 = (long *)0x0;
      }
      else {
        uVar11 = core::hash::BuildHasher::hash_one(pplStack_128 + 4,local_118,local_38);
        puVar4 = PTR_bcmp_003f2740;
        plVar12 = *pplVar5;
        plVar21 = pplVar5[1];
        bVar6 = (byte)(uVar11 >> 0x39);
        auVar30 = ZEXT216(CONCAT11(bVar6,bVar6));
        auVar30 = pshuflw(auVar30,auVar30,0);
        uVar28 = auVar30._0_4_;
        auVar38._4_4_ = uVar28;
        auVar38._0_4_ = uVar28;
        auVar38._8_4_ = uVar28;
        auVar38._12_4_ = uVar28;
        plVar13 = (long *)0x0;
        lVar9 = 0;
        while( true ) {
          uVar11 = uVar11 & (ulong)plVar21;
          auVar30 = *(undefined1 (*) [16])((long)plVar12 + uVar11);
          auVar33[0] = -(auVar30[0] == auVar38[0]);
          auVar33[1] = -(auVar30[1] == auVar38[1]);
          auVar33[2] = -(auVar30[2] == auVar38[2]);
          auVar33[3] = -(auVar30[3] == auVar38[3]);
          auVar33[4] = -(auVar30[4] == auVar38[4]);
          auVar33[5] = -(auVar30[5] == auVar38[5]);
          auVar33[6] = -(auVar30[6] == auVar38[6]);
          auVar33[7] = -(auVar30[7] == auVar38[7]);
          auVar33[8] = -(auVar30[8] == auVar38[8]);
          auVar33[9] = -(auVar30[9] == auVar38[9]);
          auVar33[10] = -(auVar30[10] == auVar38[10]);
          auVar33[0xb] = -(auVar30[0xb] == auVar38[0xb]);
          auVar33[0xc] = -(auVar30[0xc] == auVar38[0xc]);
          auVar33[0xd] = -(auVar30[0xd] == auVar38[0xd]);
          auVar33[0xe] = -(auVar30[0xe] == auVar38[0xe]);
          auVar33[0xf] = -(auVar30[0xf] == auVar38[0xf]);
          uVar7 = (ushort)(SUB161(auVar33 >> 7,0) & 1) | (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe |
                  (ushort)(auVar33[0xf] >> 7) << 0xf;
          uVar23 = (uint)uVar7;
          if (uVar7 != 0) {
            auStack_f8._0_8_ = uVar11;
            local_108._0_8_ = plVar21;
            local_c8._0_8_ = lVar9;
            local_d8 = auVar30;
            auStack_b8 = auVar38;
            do {
              uVar16 = 0;
              for (uVar3 = uVar23; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
                uVar16 = uVar16 + 1;
              }
              uVar11 = uVar16 + uVar11 & (ulong)plVar21;
              if (local_38 == plVar12[uVar11 * -3 + -2]) {
                iVar8 = (*(code *)puVar4)(local_118,plVar12[uVar11 * -3 + -3]);
                if (iVar8 == 0) {
                  plVar13 = plVar12 + uVar11 * -3;
                  goto LAB_002a66b2;
                }
              }
              uVar7 = (ushort)(uVar23 - 1) & (ushort)uVar23;
              uVar23 = CONCAT22((short)(uVar23 - 1 >> 0x10),uVar7);
              uVar11 = auStack_f8._0_8_;
              plVar21 = (long *)local_108._0_8_;
              lVar9 = local_c8._0_8_;
              auVar38 = auStack_b8;
              auVar30 = local_d8;
            } while (uVar7 != 0);
          }
          auVar44[0] = -(auVar30[0] == -1);
          auVar44[1] = -(auVar30[1] == -1);
          auVar44[2] = -(auVar30[2] == -1);
          auVar44[3] = -(auVar30[3] == -1);
          auVar44[4] = -(auVar30[4] == -1);
          auVar44[5] = -(auVar30[5] == -1);
          auVar44[6] = -(auVar30[6] == -1);
          auVar44[7] = -(auVar30[7] == -1);
          auVar44[8] = -(auVar30[8] == -1);
          auVar44[9] = -(auVar30[9] == -1);
          auVar44[10] = -(auVar30[10] == -1);
          auVar44[0xb] = -(auVar30[0xb] == -1);
          auVar44[0xc] = -(auVar30[0xc] == -1);
          auVar44[0xd] = -(auVar30[0xd] == -1);
          auVar44[0xe] = -(auVar30[0xe] == -1);
          bVar2 = auVar30[0xf] == -1;
          auVar44[0xf] = -bVar2;
          if ((((((((((((((((auVar44 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                           (auVar44 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                          (auVar44 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                         (auVar44 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar44 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar44 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar44 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar44 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar44 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar44 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar44 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar44 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar44 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar44 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar44 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar2) break;
          uVar11 = uVar11 + lVar9 + 0x10;
          lVar9 = lVar9 + 0x10;
        }
LAB_002a66b2:
        plVar12 = plVar13 + -3;
        if (plVar13 == (long *)0x0) {
          plVar12 = (long *)0x0;
        }
      }
      plVar13 = &DAT_001c2c40;
      if (plVar12 != (long *)0x0) {
        plVar13 = plVar12 + 2;
      }
      auStack_b8._0_8_ = *plVar13;
    }
                    /* try { // try from 002a66ea to 002a66fd has its CatchHandler @ 002a6dbe */
    (*(code *)PTR_dyn_open_close_today_fee_003f29f8)(&local_98,uVar24,dVar29);
    if ((int)local_98 == 1) {
      auStack_f8._0_8_ = local_90;
      local_140 = local_88;
      local_130 = dStack_80;
    }
    else {
      plStack_e0 = &_<future_backtest::future_info::pointer_mul::INST_OPEN_FEE_as_core::ops::deref::Deref>
                    ::deref::__stability::LAZY;
      if (DAT_003f4cb0 != 0) {
        pplStack_128 = &plStack_e0;
        ppplStack_110 = &pplStack_128;
        (*(code *)PTR_call_003f2818)
                  (&DAT_003f4cb0,0,&ppplStack_110,
                   anon_fdbab276b20b22b3c9c7da938155e424_71_llvm_4008431589571684065,
                   anon_fdbab276b20b22b3c9c7da938155e424_394_llvm_4008431589571684065);
      }
      plVar12 = plStack_e0;
      if (plStack_e0[3] == 0) {
        lVar9 = 0;
      }
      else {
        uVar14 = core::hash::BuildHasher::hash_one(plStack_e0 + 4,local_118,local_38);
        puVar4 = PTR_bcmp_003f2740;
        lVar9 = *plVar12;
        uVar11 = plVar12[1];
        bVar6 = (byte)(uVar14 >> 0x39);
        auVar30 = ZEXT216(CONCAT11(bVar6,bVar6));
        auVar30 = pshuflw(auVar30,auVar30,0);
        uVar28 = auVar30._0_4_;
        auVar39._4_4_ = uVar28;
        auVar39._0_4_ = uVar28;
        auVar39._8_4_ = uVar28;
        auVar39._12_4_ = uVar28;
        lVar22 = 0;
        lVar25 = 0;
        while( true ) {
          uVar14 = uVar14 & uVar11;
          auVar30 = *(undefined1 (*) [16])(lVar9 + uVar14);
          auVar34[0] = -(auVar30[0] == auVar39[0]);
          auVar34[1] = -(auVar30[1] == auVar39[1]);
          auVar34[2] = -(auVar30[2] == auVar39[2]);
          auVar34[3] = -(auVar30[3] == auVar39[3]);
          auVar34[4] = -(auVar30[4] == auVar39[4]);
          auVar34[5] = -(auVar30[5] == auVar39[5]);
          auVar34[6] = -(auVar30[6] == auVar39[6]);
          auVar34[7] = -(auVar30[7] == auVar39[7]);
          auVar34[8] = -(auVar30[8] == auVar39[8]);
          auVar34[9] = -(auVar30[9] == auVar39[9]);
          auVar34[10] = -(auVar30[10] == auVar39[10]);
          auVar34[0xb] = -(auVar30[0xb] == auVar39[0xb]);
          auVar34[0xc] = -(auVar30[0xc] == auVar39[0xc]);
          auVar34[0xd] = -(auVar30[0xd] == auVar39[0xd]);
          auVar34[0xe] = -(auVar30[0xe] == auVar39[0xe]);
          auVar34[0xf] = -(auVar30[0xf] == auVar39[0xf]);
          uVar7 = (ushort)(SUB161(auVar34 >> 7,0) & 1) | (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar34 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar34 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar34 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar34 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar34 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar34 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar34 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar34 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar34 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar34 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar34 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar34 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar34 >> 0x77,0) & 1) << 0xe |
                  (ushort)(auVar34[0xf] >> 7) << 0xf;
          uVar23 = (uint)uVar7;
          if (uVar7 != 0) {
            auStack_f8._0_8_ = uVar14;
            local_c8._0_8_ = uVar11;
            local_d8._0_8_ = lVar25;
            local_108 = auVar39;
            local_a8 = auVar30;
            do {
              uVar16 = 0;
              for (uVar3 = uVar23; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
                uVar16 = uVar16 + 1;
              }
              uVar11 = uVar16 + uVar14 & uVar11;
              if (local_38 == *(long *)(lVar9 + -0x10 + uVar11 * -0x18)) {
                iVar8 = (*(code *)puVar4)(local_118,*(undefined8 *)(lVar9 + -0x18 + uVar11 * -0x18))
                ;
                if (iVar8 == 0) {
                  lVar22 = lVar9 + uVar11 * -0x18;
                  goto LAB_002a686f;
                }
              }
              uVar7 = (ushort)(uVar23 - 1) & (ushort)uVar23;
              uVar23 = CONCAT22((short)(uVar23 - 1 >> 0x10),uVar7);
              uVar14 = auStack_f8._0_8_;
              uVar11 = local_c8._0_8_;
              lVar25 = local_d8._0_8_;
              auVar39 = local_108;
              auVar30 = local_a8;
            } while (uVar7 != 0);
          }
          auVar45[0] = -(auVar30[0] == -1);
          auVar45[1] = -(auVar30[1] == -1);
          auVar45[2] = -(auVar30[2] == -1);
          auVar45[3] = -(auVar30[3] == -1);
          auVar45[4] = -(auVar30[4] == -1);
          auVar45[5] = -(auVar30[5] == -1);
          auVar45[6] = -(auVar30[6] == -1);
          auVar45[7] = -(auVar30[7] == -1);
          auVar45[8] = -(auVar30[8] == -1);
          auVar45[9] = -(auVar30[9] == -1);
          auVar45[10] = -(auVar30[10] == -1);
          auVar45[0xb] = -(auVar30[0xb] == -1);
          auVar45[0xc] = -(auVar30[0xc] == -1);
          auVar45[0xd] = -(auVar30[0xd] == -1);
          auVar45[0xe] = -(auVar30[0xe] == -1);
          bVar2 = auVar30[0xf] == -1;
          auVar45[0xf] = -bVar2;
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
              (auVar45 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar2) break;
          uVar14 = uVar14 + lVar25 + 0x10;
          lVar25 = lVar25 + 0x10;
        }
LAB_002a686f:
        lVar9 = lVar22 + -0x18;
        if (lVar22 == 0) {
          lVar9 = 0;
        }
      }
      puVar18 = (undefined8 *)(lVar9 + 0x10);
      if (lVar9 == 0) {
        puVar18 = &DAT_001c2c68;
      }
      auStack_f8._0_8_ = *puVar18;
      plStack_e0 = &_<future_backtest::future_info::pointer_mul::INST_CLOSE_FEE_as_core::ops::deref::Deref>
                    ::deref::__stability::LAZY;
      if (DAT_003f4ce8 != 0) {
        pplStack_128 = &plStack_e0;
        ppplStack_110 = &pplStack_128;
        (*(code *)PTR_call_003f2818)
                  (&DAT_003f4ce8,0,&ppplStack_110,
                   anon_fdbab276b20b22b3c9c7da938155e424_68_llvm_4008431589571684065,
                   anon_fdbab276b20b22b3c9c7da938155e424_394_llvm_4008431589571684065);
      }
      plVar12 = plStack_e0;
      if (plStack_e0[3] == 0) {
        lVar9 = 0;
      }
      else {
        uVar14 = core::hash::BuildHasher::hash_one(plStack_e0 + 4,local_118,local_38);
        puVar4 = PTR_bcmp_003f2740;
        lVar9 = *plVar12;
        uVar11 = plVar12[1];
        bVar6 = (byte)(uVar14 >> 0x39);
        auVar30 = ZEXT216(CONCAT11(bVar6,bVar6));
        auVar30 = pshuflw(auVar30,auVar30,0);
        uVar28 = auVar30._0_4_;
        auVar40._4_4_ = uVar28;
        auVar40._0_4_ = uVar28;
        auVar40._8_4_ = uVar28;
        auVar40._12_4_ = uVar28;
        lVar22 = 0;
        lVar25 = 0;
        while( true ) {
          uVar14 = uVar14 & uVar11;
          auVar30 = *(undefined1 (*) [16])(lVar9 + uVar14);
          auVar35[0] = -(auVar30[0] == auVar40[0]);
          auVar35[1] = -(auVar30[1] == auVar40[1]);
          auVar35[2] = -(auVar30[2] == auVar40[2]);
          auVar35[3] = -(auVar30[3] == auVar40[3]);
          auVar35[4] = -(auVar30[4] == auVar40[4]);
          auVar35[5] = -(auVar30[5] == auVar40[5]);
          auVar35[6] = -(auVar30[6] == auVar40[6]);
          auVar35[7] = -(auVar30[7] == auVar40[7]);
          auVar35[8] = -(auVar30[8] == auVar40[8]);
          auVar35[9] = -(auVar30[9] == auVar40[9]);
          auVar35[10] = -(auVar30[10] == auVar40[10]);
          auVar35[0xb] = -(auVar30[0xb] == auVar40[0xb]);
          auVar35[0xc] = -(auVar30[0xc] == auVar40[0xc]);
          auVar35[0xd] = -(auVar30[0xd] == auVar40[0xd]);
          auVar35[0xe] = -(auVar30[0xe] == auVar40[0xe]);
          auVar35[0xf] = -(auVar30[0xf] == auVar40[0xf]);
          uVar7 = (ushort)(SUB161(auVar35 >> 7,0) & 1) | (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar35 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar35 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar35 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar35 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar35 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar35 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar35 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar35 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar35 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar35 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar35 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe |
                  (ushort)(auVar35[0xf] >> 7) << 0xf;
          uVar23 = (uint)uVar7;
          if (uVar7 != 0) {
            local_108._0_8_ = uVar14;
            local_d8._0_8_ = uVar11;
            local_a8._0_8_ = lVar25;
            local_c8 = auVar40;
            local_78 = auVar30;
            do {
              uVar16 = 0;
              for (uVar3 = uVar23; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
                uVar16 = uVar16 + 1;
              }
              uVar11 = uVar16 + uVar14 & uVar11;
              if ((local_38 == *(long *)(lVar9 + -0x10 + uVar11 * -0x18)) &&
                 (iVar8 = (*(code *)puVar4)(local_118,
                                            *(undefined8 *)(lVar9 + -0x18 + uVar11 * -0x18)),
                 iVar8 == 0)) {
                lVar22 = lVar9 + uVar11 * -0x18;
                goto LAB_002a69df;
              }
              uVar7 = (ushort)(uVar23 - 1) & (ushort)uVar23;
              uVar23 = CONCAT22((short)(uVar23 - 1 >> 0x10),uVar7);
              uVar14 = local_108._0_8_;
              uVar11 = local_d8._0_8_;
              lVar25 = local_a8._0_8_;
              auVar40 = local_c8;
              auVar30 = local_78;
            } while (uVar7 != 0);
          }
          auVar46[0] = -(auVar30[0] == -1);
          auVar46[1] = -(auVar30[1] == -1);
          auVar46[2] = -(auVar30[2] == -1);
          auVar46[3] = -(auVar30[3] == -1);
          auVar46[4] = -(auVar30[4] == -1);
          auVar46[5] = -(auVar30[5] == -1);
          auVar46[6] = -(auVar30[6] == -1);
          auVar46[7] = -(auVar30[7] == -1);
          auVar46[8] = -(auVar30[8] == -1);
          auVar46[9] = -(auVar30[9] == -1);
          auVar46[10] = -(auVar30[10] == -1);
          auVar46[0xb] = -(auVar30[0xb] == -1);
          auVar46[0xc] = -(auVar30[0xc] == -1);
          auVar46[0xd] = -(auVar30[0xd] == -1);
          auVar46[0xe] = -(auVar30[0xe] == -1);
          bVar2 = auVar30[0xf] == -1;
          auVar46[0xf] = -bVar2;
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
              (auVar46 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar2) break;
          uVar14 = uVar14 + lVar25 + 0x10;
          lVar25 = lVar25 + 0x10;
        }
LAB_002a69df:
        lVar9 = lVar22 + -0x18;
        if (lVar22 == 0) {
          lVar9 = 0;
        }
      }
      pdVar19 = (double *)(lVar9 + 0x10);
      if (lVar9 == 0) {
        pdVar19 = (double *)&DAT_001c2c68;
      }
      local_130 = *pdVar19;
      local_140 = (double)auStack_f8._0_8_;
    }
                    /* try { // try from 002a6a20 to 002a6a2b has its CatchHandler @ 002a6dbe */
    bVar6 = (*(code *)PTR_dyn_fee_mode_003f2a00)(uVar24,dVar29);
    if (bVar6 == 2) {
      pplStack_128 = (long **)&_<future_backtest::future_info::pointer_mul::INST_FEE_SCALE_as_core::ops::deref::Deref>
                               ::deref::__stability::LAZY;
      if (DAT_003f4d20 != 0) {
        ppplStack_110 = &pplStack_128;
        local_98 = (long ***)&ppplStack_110;
        (*(code *)PTR_call_003f2818)
                  (&DAT_003f4d20,0,&local_98,
                   anon_fdbab276b20b22b3c9c7da938155e424_69_llvm_4008431589571684065,
                   anon_fdbab276b20b22b3c9c7da938155e424_394_llvm_4008431589571684065);
      }
      pplVar5 = pplStack_128;
      if (pplStack_128[3] == (long *)0x0) {
        plVar12 = (long *)0x0;
      }
      else {
        uVar11 = core::hash::BuildHasher::hash_one(pplStack_128 + 4,local_118,local_38);
        puVar4 = PTR_bcmp_003f2740;
        plVar12 = *pplVar5;
        plVar21 = pplVar5[1];
        bVar6 = (byte)(uVar11 >> 0x39);
        auVar30 = ZEXT216(CONCAT11(bVar6,bVar6));
        auVar30 = pshuflw(auVar30,auVar30,0);
        uVar28 = auVar30._0_4_;
        auVar41._4_4_ = uVar28;
        auVar41._0_4_ = uVar28;
        auVar41._8_4_ = uVar28;
        auVar41._12_4_ = uVar28;
        plVar13 = (long *)0x0;
        lVar9 = 0;
        while( true ) {
          uVar11 = uVar11 & (ulong)plVar21;
          auVar30 = *(undefined1 (*) [16])((long)plVar12 + uVar11);
          auVar36[0] = -(auVar30[0] == auVar41[0]);
          auVar36[1] = -(auVar30[1] == auVar41[1]);
          auVar36[2] = -(auVar30[2] == auVar41[2]);
          auVar36[3] = -(auVar30[3] == auVar41[3]);
          auVar36[4] = -(auVar30[4] == auVar41[4]);
          auVar36[5] = -(auVar30[5] == auVar41[5]);
          auVar36[6] = -(auVar30[6] == auVar41[6]);
          auVar36[7] = -(auVar30[7] == auVar41[7]);
          auVar36[8] = -(auVar30[8] == auVar41[8]);
          auVar36[9] = -(auVar30[9] == auVar41[9]);
          auVar36[10] = -(auVar30[10] == auVar41[10]);
          auVar36[0xb] = -(auVar30[0xb] == auVar41[0xb]);
          auVar36[0xc] = -(auVar30[0xc] == auVar41[0xc]);
          auVar36[0xd] = -(auVar30[0xd] == auVar41[0xd]);
          auVar36[0xe] = -(auVar30[0xe] == auVar41[0xe]);
          auVar36[0xf] = -(auVar30[0xf] == auVar41[0xf]);
          uVar7 = (ushort)(SUB161(auVar36 >> 7,0) & 1) | (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar36 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar36 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar36 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar36 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar36 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar36 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar36 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar36 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe |
                  (ushort)(auVar36[0xf] >> 7) << 0xf;
          uVar23 = (uint)uVar7;
          if (uVar7 != 0) {
            local_108._0_8_ = uVar11;
            local_d8._0_8_ = plVar21;
            local_a8._0_8_ = lVar9;
            local_c8 = auVar41;
            local_78 = auVar30;
            do {
              uVar16 = 0;
              for (uVar3 = uVar23; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
                uVar16 = uVar16 + 1;
              }
              uVar11 = uVar16 + uVar11 & (ulong)plVar21;
              if ((local_38 == plVar12[uVar11 * -3 + -2]) &&
                 (iVar8 = (*(code *)puVar4)(local_118,plVar12[uVar11 * -3 + -3]), iVar8 == 0)) {
                plVar13 = plVar12 + uVar11 * -3;
                goto LAB_002a6b6b;
              }
              uVar7 = (ushort)(uVar23 - 1) & (ushort)uVar23;
              uVar23 = CONCAT22((short)(uVar23 - 1 >> 0x10),uVar7);
              uVar11 = local_108._0_8_;
              plVar21 = (long *)local_d8._0_8_;
              lVar9 = local_a8._0_8_;
              auVar41 = local_c8;
              auVar30 = local_78;
            } while (uVar7 != 0);
          }
          auVar47[0] = -(auVar30[0] == -1);
          auVar47[1] = -(auVar30[1] == -1);
          auVar47[2] = -(auVar30[2] == -1);
          auVar47[3] = -(auVar30[3] == -1);
          auVar47[4] = -(auVar30[4] == -1);
          auVar47[5] = -(auVar30[5] == -1);
          auVar47[6] = -(auVar30[6] == -1);
          auVar47[7] = -(auVar30[7] == -1);
          auVar47[8] = -(auVar30[8] == -1);
          auVar47[9] = -(auVar30[9] == -1);
          auVar47[10] = -(auVar30[10] == -1);
          auVar47[0xb] = -(auVar30[0xb] == -1);
          auVar47[0xc] = -(auVar30[0xc] == -1);
          auVar47[0xd] = -(auVar30[0xd] == -1);
          auVar47[0xe] = -(auVar30[0xe] == -1);
          bVar2 = auVar30[0xf] == -1;
          auVar47[0xf] = -bVar2;
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
              (auVar47 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar2) break;
          uVar11 = uVar11 + lVar9 + 0x10;
          lVar9 = lVar9 + 0x10;
        }
LAB_002a6b6b:
        plVar12 = plVar13 + -3;
        if (plVar13 == (long *)0x0) {
          plVar12 = (long *)0x0;
        }
      }
      pbVar15 = &DAT_001c4447;
      if (plVar12 != (long *)0x0) {
        pbVar15 = (byte *)(plVar12 + 2);
      }
      bVar6 = *pbVar15;
    }
    if ((char)local_120 == '\0') {
      local_140 = local_130;
    }
    dVar29 = ((double)auStack_f8._0_8_ + local_140) * _s__001c2cd0;
    if ((bVar6 & 1) == 0) {
      local_140 = dVar29 * _DAT_001c2c60;
    }
    else {
      local_140 = 0.0;
      if (DAT_001c2cf8 <= local_68 * (double)auStack_b8._0_8_) {
        local_140 = (dVar29 / (local_68 * (double)auStack_b8._0_8_)) * _DAT_001c2c60;
      }
    }
    if (local_48 != 0) {
      (*(code *)PTR___rust_dealloc_003f2638)(local_40,local_48,1);
    }
    if (local_60 != 0.0) {
      (*(code *)PTR___rust_dealloc_003f2638)(local_58,local_60,1);
    }
    return local_140;
  }
  (*(code *)PTR_panic_already_mutably_borrowed_003f2830)(&PTR_s_future_backtest_src_ffi_rs_003e2928)
  ;
LAB_002a6d67:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


