// ELF address 0x000000000004dba0; <strategy_sos5::StrategySoS5 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _<strategy_sos5::StrategySoS5 as future_backtest_sdk::plugin::StrategyPlugin>::on_depth */

undefined8 __rustcall
_<strategy_sos5::StrategySoS5_as_future_backtest_sdk::plugin::StrategyPlugin>::on_depth
          (long *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  byte *pbVar2;
  byte *pbVar3;
  double dVar4;
  code *pcVar5;
  bool bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  uint uVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  undefined8 **ppuVar62;
  long lVar63;
  ulong uVar64;
  char cVar65;
  char cVar66;
  char cVar67;
  char cVar68;
  char cVar69;
  char cVar70;
  char cVar71;
  undefined *puVar72;
  ulong uVar73;
  ulong uVar74;
  char cVar75;
  ushort uVar76;
  int iVar77;
  short *psVar78;
  undefined **ppuVar79;
  ulong uVar80;
  long lVar81;
  long lVar82;
  ulong uVar83;
  undefined **ppuVar84;
  uint uVar85;
  long lVar86;
  undefined8 uVar87;
  byte bVar88;
  undefined4 uVar89;
  double dVar90;
  long extraout_XMM0_Qa;
  undefined1 auVar91 [16];
  double extraout_XMM1_Qa;
  double dVar92;
  double dVar93;
  undefined1 auVar94 [16];
  byte bVar95;
  byte bVar96;
  byte bVar97;
  byte bVar98;
  byte bVar99;
  byte bVar100;
  byte bVar101;
  byte bVar102;
  byte bVar103;
  byte bVar104;
  byte bVar105;
  byte bVar106;
  byte bVar107;
  byte bVar108;
  byte bVar109;
  byte bVar110;
  byte bVar111;
  byte bVar112;
  byte bVar113;
  byte bVar114;
  byte bVar115;
  byte bVar116;
  byte bVar117;
  byte bVar118;
  byte bVar119;
  byte bVar120;
  byte bVar121;
  byte bVar122;
  byte bVar123;
  byte bVar124;
  byte bVar125;
  byte bVar126;
  byte bVar127;
  byte bVar128;
  byte bVar129;
  byte bVar130;
  byte bVar131;
  byte bVar132;
  byte bVar133;
  byte bVar134;
  undefined1 auVar135 [16];
  undefined **local_110;
  short *local_108;
  undefined **local_100;
  long local_f8;
  double local_f0;
  undefined **local_e8;
  short *local_e0;
  undefined8 **local_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  long local_b8;
  ulong local_b0;
  long local_a8;
  ulong local_a0;
  ulong local_98;
  double local_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 *puStack_78;
  undefined *puStack_70;
  long *plStack_68;
  undefined *puStack_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  auVar135 = core::str::_<impl_str>::trim_matches(param_1[10],param_1[0xb]);
  cVar75 = core::slice::ascii::_<impl[u8]>::eq_ignore_ascii_case(auVar135._0_8_,auVar135._8_8_);
  if (cVar75 == '\0') {
    return 0;
  }
  (*(code *)PTR_current_inst_001e3fe0)(&local_e8,param_3);
  if (-1 < (long)local_d8) {
    if (local_d8 == (undefined8 **)0x0) {
      psVar78 = (short *)0x1;
      (*(code *)PTR_memcpy_001e3e28)(1,local_e0,0);
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_001e3de8)();
      uVar87 = 1;
      psVar78 = (short *)(*(code *)PTR___rust_alloc_001e3dc0)(local_d8,1);
      if (psVar78 == (short *)0x0) goto LAB_0014dc05;
      (*(code *)PTR_memcpy_001e3e28)(psVar78,local_e0,local_d8);
      bVar95 = UNK_00115f4f;
      bVar61 = UNK_00115f4e;
      bVar60 = UNK_00115f4d;
      bVar59 = UNK_00115f4c;
      bVar58 = UNK_00115f4b;
      bVar57 = UNK_00115f4a;
      bVar56 = UNK_00115f49;
      bVar55 = UNK_00115f48;
      bVar13 = UNK_00115f47;
      bVar12 = UNK_00115f46;
      bVar11 = UNK_00115f45;
      bVar10 = UNK_00115f44;
      bVar9 = UNK_00115f43;
      bVar8 = UNK_00115f42;
      bVar7 = UNK_00115f41;
      bVar88 = DAT_00115f40;
      auVar94 = _DAT_001159b0;
      auVar135 = _DAT_001158e0;
      if (local_d8 < (undefined **)0x8) {
        ppuVar84 = (undefined **)0x0;
      }
      else {
        if (local_d8 < (undefined **)0x20) {
          ppuVar79 = (undefined **)0x0;
LAB_0014dd3c:
          cVar71 = s__00115ef0[7];
          cVar70 = s__00115ef0[6];
          cVar69 = s__00115ef0[5];
          cVar68 = s__00115ef0[4];
          cVar67 = s__00115ef0[3];
          cVar66 = s__00115ef0[2];
          cVar65 = s__00115ef0[1];
          cVar75 = s__00115ef0[0];
          auVar94 = _DAT_00115d90;
          auVar135 = _DAT_001159d0;
          ppuVar84 = (undefined **)((ulong)local_d8 & 0x7ffffffffffffff8);
          do {
            pbVar2 = (byte *)((long)psVar78 + (long)ppuVar79);
            bVar55 = pbVar2[1];
            bVar56 = pbVar2[2];
            bVar57 = pbVar2[3];
            bVar58 = pbVar2[4];
            bVar59 = pbVar2[5];
            bVar60 = pbVar2[6];
            bVar61 = pbVar2[7];
            bVar95 = *pbVar2 + auVar135[0];
            bVar96 = bVar55 + auVar135[1];
            bVar97 = bVar56 + auVar135[2];
            bVar98 = bVar57 + auVar135[3];
            bVar99 = bVar58 + auVar135[4];
            bVar100 = bVar59 + auVar135[5];
            bVar101 = bVar60 + auVar135[6];
            bVar102 = bVar61 + auVar135[7];
            bVar88 = auVar94[0];
            bVar7 = auVar94[1];
            bVar8 = auVar94[2];
            bVar9 = auVar94[3];
            bVar10 = auVar94[4];
            bVar11 = auVar94[5];
            bVar12 = auVar94[6];
            bVar13 = auVar94[7];
            pbVar3 = (byte *)((long)psVar78 + (long)ppuVar79);
            *pbVar3 = ~-((byte)((bVar95 < bVar88) * bVar88 | (bVar95 >= bVar88) * bVar95) == bVar95)
                      & cVar75 ^ *pbVar2;
            pbVar3[1] = ~-((byte)((bVar96 < bVar7) * bVar7 | (bVar96 >= bVar7) * bVar96) == bVar96)
                        & cVar65 ^ bVar55;
            pbVar3[2] = ~-((byte)((bVar97 < bVar8) * bVar8 | (bVar97 >= bVar8) * bVar97) == bVar97)
                        & cVar66 ^ bVar56;
            pbVar3[3] = ~-((byte)((bVar98 < bVar9) * bVar9 | (bVar98 >= bVar9) * bVar98) == bVar98)
                        & cVar67 ^ bVar57;
            pbVar3[4] = ~-((byte)((bVar99 < bVar10) * bVar10 | (bVar99 >= bVar10) * bVar99) ==
                          bVar99) & cVar68 ^ bVar58;
            pbVar3[5] = ~-((byte)((bVar100 < bVar11) * bVar11 | (bVar100 >= bVar11) * bVar100) ==
                          bVar100) & cVar69 ^ bVar59;
            pbVar3[6] = ~-((byte)((bVar101 < bVar12) * bVar12 | (bVar101 >= bVar12) * bVar101) ==
                          bVar101) & cVar70 ^ bVar60;
            pbVar3[7] = ~-((byte)((bVar102 < bVar13) * bVar13 | (bVar102 >= bVar13) * bVar102) ==
                          bVar102) & cVar71 ^ bVar61;
            ppuVar79 = ppuVar79 + 1;
            if (ppuVar84 == ppuVar79) goto LAB_0014e3b1;
          } while( true );
        }
        ppuVar84 = (undefined **)((ulong)local_d8 & 0x7fffffffffffffe0);
        ppuVar79 = (undefined **)0x0;
        do {
          pbVar3 = (byte *)((long)psVar78 + (long)ppuVar79);
          bVar24 = pbVar3[1];
          bVar25 = pbVar3[2];
          bVar26 = pbVar3[3];
          bVar27 = pbVar3[4];
          bVar28 = pbVar3[5];
          bVar29 = pbVar3[6];
          bVar30 = pbVar3[7];
          bVar31 = pbVar3[8];
          bVar32 = pbVar3[9];
          bVar33 = pbVar3[10];
          bVar34 = pbVar3[0xb];
          bVar35 = pbVar3[0xc];
          bVar36 = pbVar3[0xd];
          bVar37 = pbVar3[0xe];
          bVar38 = pbVar3[0xf];
          pbVar2 = (byte *)((long)psVar78 + (long)(ppuVar79 + 2));
          bVar39 = *pbVar2;
          bVar40 = pbVar2[1];
          bVar41 = pbVar2[2];
          bVar42 = pbVar2[3];
          bVar43 = pbVar2[4];
          bVar44 = pbVar2[5];
          bVar45 = pbVar2[6];
          bVar46 = pbVar2[7];
          bVar47 = pbVar2[8];
          bVar48 = pbVar2[9];
          bVar49 = pbVar2[10];
          bVar50 = pbVar2[0xb];
          bVar51 = pbVar2[0xc];
          bVar52 = pbVar2[0xd];
          bVar53 = pbVar2[0xe];
          bVar54 = pbVar2[0xf];
          bVar103 = *pbVar3 + auVar135[0];
          bVar104 = bVar24 + auVar135[1];
          bVar105 = bVar25 + auVar135[2];
          bVar106 = bVar26 + auVar135[3];
          bVar107 = bVar27 + auVar135[4];
          bVar108 = bVar28 + auVar135[5];
          bVar109 = bVar29 + auVar135[6];
          bVar110 = bVar30 + auVar135[7];
          bVar111 = bVar31 + auVar135[8];
          bVar112 = bVar32 + auVar135[9];
          bVar113 = bVar33 + auVar135[10];
          bVar114 = bVar34 + auVar135[0xb];
          bVar115 = bVar35 + auVar135[0xc];
          bVar116 = bVar36 + auVar135[0xd];
          bVar117 = bVar37 + auVar135[0xe];
          bVar118 = bVar38 + auVar135[0xf];
          bVar119 = bVar39 + auVar135[0];
          bVar120 = bVar40 + auVar135[1];
          bVar121 = bVar41 + auVar135[2];
          bVar122 = bVar42 + auVar135[3];
          bVar123 = bVar43 + auVar135[4];
          bVar124 = bVar44 + auVar135[5];
          bVar125 = bVar45 + auVar135[6];
          bVar126 = bVar46 + auVar135[7];
          bVar127 = bVar47 + auVar135[8];
          bVar128 = bVar48 + auVar135[9];
          bVar129 = bVar49 + auVar135[10];
          bVar130 = bVar50 + auVar135[0xb];
          bVar131 = bVar51 + auVar135[0xc];
          bVar132 = bVar52 + auVar135[0xd];
          bVar133 = bVar53 + auVar135[0xe];
          bVar134 = bVar54 + auVar135[0xf];
          bVar96 = auVar94[0];
          bVar97 = auVar94[1];
          bVar98 = auVar94[2];
          bVar99 = auVar94[3];
          bVar100 = auVar94[4];
          bVar101 = auVar94[5];
          bVar102 = auVar94[6];
          bVar14 = auVar94[7];
          bVar15 = auVar94[8];
          bVar16 = auVar94[9];
          bVar17 = auVar94[10];
          bVar18 = auVar94[0xb];
          bVar19 = auVar94[0xc];
          bVar20 = auVar94[0xd];
          bVar21 = auVar94[0xe];
          bVar22 = auVar94[0xf];
          pbVar2 = (byte *)((long)psVar78 + (long)ppuVar79);
          *pbVar2 = -((byte)((bVar96 < bVar103) * bVar96 | (bVar96 >= bVar103) * bVar103) == bVar103
                     ) & bVar88 ^ *pbVar3;
          pbVar2[1] = -((byte)((bVar97 < bVar104) * bVar97 | (bVar97 >= bVar104) * bVar104) ==
                       bVar104) & bVar7 ^ bVar24;
          pbVar2[2] = -((byte)((bVar98 < bVar105) * bVar98 | (bVar98 >= bVar105) * bVar105) ==
                       bVar105) & bVar8 ^ bVar25;
          pbVar2[3] = -((byte)((bVar99 < bVar106) * bVar99 | (bVar99 >= bVar106) * bVar106) ==
                       bVar106) & bVar9 ^ bVar26;
          pbVar2[4] = -((byte)((bVar100 < bVar107) * bVar100 | (bVar100 >= bVar107) * bVar107) ==
                       bVar107) & bVar10 ^ bVar27;
          pbVar2[5] = -((byte)((bVar101 < bVar108) * bVar101 | (bVar101 >= bVar108) * bVar108) ==
                       bVar108) & bVar11 ^ bVar28;
          pbVar2[6] = -((byte)((bVar102 < bVar109) * bVar102 | (bVar102 >= bVar109) * bVar109) ==
                       bVar109) & bVar12 ^ bVar29;
          pbVar2[7] = -((byte)((bVar14 < bVar110) * bVar14 | (bVar14 >= bVar110) * bVar110) ==
                       bVar110) & bVar13 ^ bVar30;
          pbVar2[8] = -((byte)((bVar15 < bVar111) * bVar15 | (bVar15 >= bVar111) * bVar111) ==
                       bVar111) & bVar55 ^ bVar31;
          pbVar2[9] = -((byte)((bVar16 < bVar112) * bVar16 | (bVar16 >= bVar112) * bVar112) ==
                       bVar112) & bVar56 ^ bVar32;
          pbVar2[10] = -((byte)((bVar17 < bVar113) * bVar17 | (bVar17 >= bVar113) * bVar113) ==
                        bVar113) & bVar57 ^ bVar33;
          pbVar2[0xb] = -((byte)((bVar18 < bVar114) * bVar18 | (bVar18 >= bVar114) * bVar114) ==
                         bVar114) & bVar58 ^ bVar34;
          pbVar2[0xc] = -((byte)((bVar19 < bVar115) * bVar19 | (bVar19 >= bVar115) * bVar115) ==
                         bVar115) & bVar59 ^ bVar35;
          pbVar2[0xd] = -((byte)((bVar20 < bVar116) * bVar20 | (bVar20 >= bVar116) * bVar116) ==
                         bVar116) & bVar60 ^ bVar36;
          pbVar2[0xe] = -((byte)((bVar21 < bVar117) * bVar21 | (bVar21 >= bVar117) * bVar117) ==
                         bVar117) & bVar61 ^ bVar37;
          pbVar2[0xf] = -((byte)((bVar22 < bVar118) * bVar22 | (bVar22 >= bVar118) * bVar118) ==
                         bVar118) & bVar95 ^ bVar38;
          pbVar2 = (byte *)((long)psVar78 + (long)(ppuVar79 + 2));
          *pbVar2 = -((byte)((bVar96 < bVar119) * bVar96 | (bVar96 >= bVar119) * bVar119) == bVar119
                     ) & bVar88 ^ bVar39;
          pbVar2[1] = -((byte)((bVar97 < bVar120) * bVar97 | (bVar97 >= bVar120) * bVar120) ==
                       bVar120) & bVar7 ^ bVar40;
          pbVar2[2] = -((byte)((bVar98 < bVar121) * bVar98 | (bVar98 >= bVar121) * bVar121) ==
                       bVar121) & bVar8 ^ bVar41;
          pbVar2[3] = -((byte)((bVar99 < bVar122) * bVar99 | (bVar99 >= bVar122) * bVar122) ==
                       bVar122) & bVar9 ^ bVar42;
          pbVar2[4] = -((byte)((bVar100 < bVar123) * bVar100 | (bVar100 >= bVar123) * bVar123) ==
                       bVar123) & bVar10 ^ bVar43;
          pbVar2[5] = -((byte)((bVar101 < bVar124) * bVar101 | (bVar101 >= bVar124) * bVar124) ==
                       bVar124) & bVar11 ^ bVar44;
          pbVar2[6] = -((byte)((bVar102 < bVar125) * bVar102 | (bVar102 >= bVar125) * bVar125) ==
                       bVar125) & bVar12 ^ bVar45;
          pbVar2[7] = -((byte)((bVar14 < bVar126) * bVar14 | (bVar14 >= bVar126) * bVar126) ==
                       bVar126) & bVar13 ^ bVar46;
          pbVar2[8] = -((byte)((bVar15 < bVar127) * bVar15 | (bVar15 >= bVar127) * bVar127) ==
                       bVar127) & bVar55 ^ bVar47;
          pbVar2[9] = -((byte)((bVar16 < bVar128) * bVar16 | (bVar16 >= bVar128) * bVar128) ==
                       bVar128) & bVar56 ^ bVar48;
          pbVar2[10] = -((byte)((bVar17 < bVar129) * bVar17 | (bVar17 >= bVar129) * bVar129) ==
                        bVar129) & bVar57 ^ bVar49;
          pbVar2[0xb] = -((byte)((bVar18 < bVar130) * bVar18 | (bVar18 >= bVar130) * bVar130) ==
                         bVar130) & bVar58 ^ bVar50;
          pbVar2[0xc] = -((byte)((bVar19 < bVar131) * bVar19 | (bVar19 >= bVar131) * bVar131) ==
                         bVar131) & bVar59 ^ bVar51;
          pbVar2[0xd] = -((byte)((bVar20 < bVar132) * bVar20 | (bVar20 >= bVar132) * bVar132) ==
                         bVar132) & bVar60 ^ bVar52;
          pbVar2[0xe] = -((byte)((bVar21 < bVar133) * bVar21 | (bVar21 >= bVar133) * bVar133) ==
                         bVar133) & bVar61 ^ bVar53;
          pbVar2[0xf] = -((byte)((bVar22 < bVar134) * bVar22 | (bVar22 >= bVar134) * bVar134) ==
                         bVar134) & bVar95 ^ bVar54;
          ppuVar79 = ppuVar79 + 4;
        } while (ppuVar84 != ppuVar79);
        if (local_d8 == (undefined8 **)ppuVar84) goto LAB_0014ddb9;
        ppuVar79 = ppuVar84;
        if (((ulong)local_d8 & 0x18) != 0) goto LAB_0014dd3c;
      }
      do {
        *(byte *)((long)psVar78 + (long)ppuVar84) =
             ((byte)(*(byte *)((long)psVar78 + (long)ppuVar84) + 0x9f) < 0x1a) << 5 ^
             *(byte *)((long)psVar78 + (long)ppuVar84);
        ppuVar84 = (undefined **)((long)ppuVar84 + 1);
LAB_0014e3b1:
      } while (local_d8 != (undefined8 **)ppuVar84);
    }
LAB_0014ddb9:
    local_110 = (undefined **)local_d8;
    local_100 = (undefined **)local_d8;
    local_108 = psVar78;
    if (local_e8 != (undefined **)0x0) {
      (*(code *)PTR___rust_dealloc_001e3dc8)(local_e0,local_e8,1);
    }
    ppuVar62 = local_d8;
                    /* try { // try from 0014de14 to 0014de6c has its CatchHandler @ 0014e391 */
    if (((local_d8 == (undefined8 **)0x2) &&
        ((((*psVar78 == 0x4649 || (*psVar78 == 0x4849)) || (*psVar78 == 0x4d49)) ||
         (ppuVar62 = (undefined8 **)(undefined **)0x2, *psVar78 == 0x4349)))) &&
       (iVar77 = (*(code *)PTR_contract_rank_001e3fa8)(param_3), ppuVar62 = (undefined8 **)local_110
       , iVar77 == 1)) {
      if (*param_1 == -0x8000000000000000) {
                    /* try { // try from 0014e364 to 0014e370 has its CatchHandler @ 0014e391 */
        (*(code *)PTR_unwrap_failed_001e3fd0)(&PTR_s_strategies_index_strategy_strate_001de150);
        goto LAB_0014e371;
      }
      local_f0 = (double)param_1[0x59];
      local_90 = (double)param_1[0x5a];
      if (param_1[0x7f] == 0) {
        bVar6 = false;
        dVar92 = extraout_XMM1_Qa;
      }
      else {
        uVar80 = core::hash::BuildHasher::hash_one(param_1 + 0x80,&local_110);
        ppuVar79 = local_100;
        psVar78 = local_108;
        puVar72 = PTR_bcmp_001e3e98;
        lVar86 = param_1[0x7c];
        uVar83 = param_1[0x7d];
        bVar88 = (byte)(uVar80 >> 0x39);
        auVar135 = ZEXT216(CONCAT11(bVar88,bVar88));
        auVar135 = pshuflw(auVar135,auVar135,0);
        uVar89 = auVar135._0_4_;
        auVar135._4_4_ = uVar89;
        auVar135._0_4_ = uVar89;
        auVar135._8_4_ = uVar89;
        auVar135._12_4_ = uVar89;
        lVar82 = lVar86 + -0x20;
        lVar81 = 0;
        while( true ) {
          auVar94 = *(undefined1 (*) [16])(lVar86 + (uVar80 & uVar83));
          auVar91[0] = -(auVar94[0] == auVar135[0]);
          auVar91[1] = -(auVar94[1] == auVar135[1]);
          auVar91[2] = -(auVar94[2] == auVar135[2]);
          auVar91[3] = -(auVar94[3] == auVar135[3]);
          auVar91[4] = -(auVar94[4] == auVar135[4]);
          auVar91[5] = -(auVar94[5] == auVar135[5]);
          auVar91[6] = -(auVar94[6] == auVar135[6]);
          auVar91[7] = -(auVar94[7] == auVar135[7]);
          auVar91[8] = -(auVar94[8] == auVar135[8]);
          auVar91[9] = -(auVar94[9] == auVar135[9]);
          auVar91[10] = -(auVar94[10] == auVar135[10]);
          auVar91[0xb] = -(auVar94[0xb] == auVar135[0xb]);
          auVar91[0xc] = -(auVar94[0xc] == auVar135[0xc]);
          auVar91[0xd] = -(auVar94[0xd] == auVar135[0xd]);
          auVar91[0xe] = -(auVar94[0xe] == auVar135[0xe]);
          auVar91[0xf] = -(auVar94[0xf] == auVar135[0xf]);
          uVar76 = (ushort)(SUB161(auVar91 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar91 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar91 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar91 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar91 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar91 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar91 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar91 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar91 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar91 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar91 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar91 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar91 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar91 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar91 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar91[0xf] >> 7) << 0xf;
          uVar73 = uVar80 & uVar83;
          uVar74 = (ulong)uVar76;
          lVar63 = local_b8;
          uVar64 = local_a0;
          uVar80 = local_98;
          auVar91 = local_58;
          while (local_b8 = lVar81, local_98 = uVar74, local_58 = auVar94, local_a0 = uVar73,
                uVar76 != 0) {
            uVar23 = 0;
            for (uVar85 = (uint)local_98; (uVar85 & 1) == 0; uVar85 = uVar85 >> 1 | 0x80000000) {
              uVar23 = uVar23 + 1;
            }
            uVar80 = uVar23 + local_a0 & uVar83;
            lVar81 = lVar82 + uVar80 * -0x20;
            local_f8 = lVar86;
            local_b0 = uVar83;
            local_a8 = lVar82;
            local_48 = auVar135;
            if ((ppuVar79 == *(undefined ***)(lVar81 + 0x10)) &&
               (iVar77 = (*(code *)puVar72)(psVar78,*(undefined8 *)(lVar81 + 8),ppuVar79),
               iVar77 == 0)) {
              dVar92 = *(double *)(local_f8 + -8 + uVar80 * -0x20);
              bVar6 = true;
              goto LAB_0014dfd3;
            }
            iVar77 = (int)local_98 + -1;
            uVar76 = (ushort)iVar77 & (ushort)local_98;
            uVar73 = local_a0;
            auVar94 = local_58;
            uVar74 = (ulong)CONCAT22((short)((uint)iVar77 >> 0x10),uVar76);
            uVar83 = local_b0;
            lVar82 = local_a8;
            lVar86 = local_f8;
            lVar81 = local_b8;
            auVar135 = local_48;
            lVar63 = local_b8;
            uVar64 = local_a0;
            uVar80 = local_98;
            auVar91 = local_58;
          }
          dVar92 = auVar135._0_8_;
          auVar94[0] = -(local_58[0] == -1);
          auVar94[1] = -(local_58[1] == -1);
          auVar94[2] = -(local_58[2] == -1);
          auVar94[3] = -(local_58[3] == -1);
          auVar94[4] = -(local_58[4] == -1);
          auVar94[5] = -(local_58[5] == -1);
          auVar94[6] = -(local_58[6] == -1);
          auVar94[7] = -(local_58[7] == -1);
          auVar94[8] = -(local_58[8] == -1);
          auVar94[9] = -(local_58[9] == -1);
          auVar94[10] = -(local_58[10] == -1);
          auVar94[0xb] = -(local_58[0xb] == -1);
          auVar94[0xc] = -(local_58[0xc] == -1);
          auVar94[0xd] = -(local_58[0xd] == -1);
          auVar94[0xe] = -(local_58[0xe] == -1);
          bVar6 = local_58[0xf] == -1;
          auVar94[0xf] = -bVar6;
          local_98 = uVar80;
          local_58 = auVar91;
          if ((((((((((((((((auVar94 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                           (auVar94 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                          (auVar94 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                         (auVar94 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar94 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar94 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar94 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar94 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar94 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar94 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar94 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar94 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar94 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar94 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar94 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar6) break;
          uVar80 = local_a0 + local_b8 + 0x10;
          lVar81 = local_b8 + 0x10;
          local_b8 = lVar63;
          local_a0 = uVar64;
        }
        bVar6 = false;
        local_b8 = lVar63;
        local_a0 = uVar64;
      }
LAB_0014dfd3:
      dVar93 = *(double *)(param_2 + 0x48);
      dVar4 = *(double *)(param_2 + 0x98);
      if ((((ulong)ABS(*(double *)(param_2 + 0x50)) < 0x7ff0000000000000) &&
          ((ulong)ABS(dVar93) < 0x7ff0000000000000)) && ((ulong)ABS(dVar4) < 0x7ff0000000000000)) {
        if (((((((dVar4 <= dVar93) && (0.0 < *(double *)(param_2 + 0xa0))) &&
               (0.0 < *(double *)(param_2 + 0x50))) && ((0.0 < dVar4 && (0.0 < dVar93)))) &&
             (((ulong)ABS(*(double *)(param_2 + 0xa0)) < 0x7ff0000000000000 &&
              ((dVar90 = (dVar93 + dVar4) * DAT_001160c8, dVar90 != 0.0 && dVar90 != INFINITY &&
               (dVar93 = ((dVar93 - dVar4) / dVar90) * _DAT_00116090,
               dVar93 <= local_90 && (ulong)ABS(dVar93) < 0x7ff0000000000000)))))) &&
            ((!bVar6 ||
             ((dVar93 = ABS(dVar92),
              (0x3fe < (uint)((long)dVar93 + 0xfff0000000000000U >> 0x35) || -1 < (long)dVar92) &&
              ((dVar93 != INFINITY && (dVar93 != 0.0 && (ulong)dVar93 < 0x7ff0000000000000)) &&
              (0xffffffffffffe < (long)dVar93 - 1U || -1 < (long)dVar92)) &&
              ((double)((ulong)(dVar90 / dVar92 + _s__00116008) & _DAT_00115740) <= local_f0))))))
           && ((dVar92 = *(double *)(param_2 + 0xe8),
               0xffffffffffffe < (long)dVar92 - 1U &&
               ((long)dVar92 < 0 ||
               0x3fe < (uint)((ulong)((long)ABS(dVar92) + -0x10000000000000) >> 0x35)) ||
               ((double)((ulong)(dVar90 / dVar92 + _s__00116008) & _DAT_00115740) <= local_f0)))) {
          plVar1 = param_1 + 0x7c;
          local_d8 = (undefined8 **)local_100;
          local_e8 = local_110;
          local_e0 = local_108;
          hashbrown::map::HashMap<K,V,S,A>::insert(plVar1,&local_e8);
          lVar82 = strategy_sos5::phase_basket_notional(plVar1);
          if (lVar82 != 1) {
            return 0;
          }
          if ((char)param_1[0x83] != '\0') {
            return 0;
          }
          *(undefined1 *)(param_1 + 0x83) = 1;
          if (strategy_sos5::debug_sos5_enabled::FLAG != 0) {
            std::sync::once_lock::OnceLock<T>::initialize(&strategy_sos5::debug_sos5_enabled::FLAG);
          }
          if (DAT_001e5c1c != '\x01') {
            return 0;
          }
          uStack_88 = (*(code *)PTR_time_sec_001e3f60)(param_3);
          lVar82 = DAT_00116148;
          if (*param_1 != -0x8000000000000000) {
            lVar82 = param_1[0x58];
          }
          uVar83 = strategy_sos5::phase_basket_notional(plVar1);
          lStack_80 = extraout_XMM0_Qa;
          if ((uVar83 & 1) == 0) {
            lStack_80 = lVar82;
          }
          puStack_78 = &uStack_88;
          puStack_70 = PTR_fmt_001e3ea8;
          plStack_68 = &lStack_80;
          puStack_60 = PTR_fmt_001e3ea8;
          local_e8 = &PTR_s__SOS5_PHASE__event_reference_rea_001de168;
          local_e0 = (short *)0x3;
          puStack_c8 = &DAT_00118f98;
          uStack_c0 = 2;
          local_d8 = &puStack_78;
          uStack_d0 = 2;
          (*(code *)PTR__eprint_001e3ec0)(&local_e8);
          return 0;
        }
      }
      lVar82 = -1;
      if (param_1[0x82] + 1 != 0) {
        lVar82 = param_1[0x82] + 1;
      }
      param_1[0x82] = lVar82;
      ppuVar62 = (undefined8 **)local_110;
    }
    if (ppuVar62 != (undefined8 **)0x0) {
      (*(code *)PTR___rust_dealloc_001e3dc8)(local_108,ppuVar62,1);
    }
    return 0;
  }
  uVar87 = 0;
LAB_0014dc05:
                    /* try { // try from 0014dc05 to 0014dc17 has its CatchHandler @ 0014dd96 */
  (*(code *)PTR_handle_error_001e3e80)
            (uVar87,local_d8,anon_1f9708350cbd73d004aa52efd57b3741_9_llvm_15849782347872716229);
LAB_0014e371:
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}


