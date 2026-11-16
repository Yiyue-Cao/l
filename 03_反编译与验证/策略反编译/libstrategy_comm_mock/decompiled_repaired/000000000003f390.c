// ELF address 0x000000000003f390; <strategy_comm_mock::_::<impl serde_core::de::Deserialize for strategy_comm_mock::Comm3Params>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_str

/* WARNING: Type propagation algorithm not settling */
/* _<strategy_comm_mock::_::<impl serde_core::de::Deserialize for
   strategy_comm_mock::Comm3Params>::deserialize::__FieldVisitor as
   serde_core::de::Visitor>::visit_str */

undefined8 * __rustcall
_<strategy_comm_mock::_::<impl_serde_core::de::Deserialize_for_strategy_comm_mock::Comm3Params>::deserialize::__FieldVisitor_as_serde_core::de::Visitor>
::visit_str(undefined8 *param_1,undefined1 (*param_2) [16],long param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
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
  
  bVar4 = false;
  bVar3 = false;
  switch(param_3) {
  case 8:
    if (*(long *)*param_2 == 0x656c69746e617571) {
      *(undefined1 *)(param_1 + 1) = 5;
      goto LAB_0013fc67;
    }
    break;
  case 9:
    if ((*param_2)[8] == 'a' && *(long *)*param_2 == 0x68706c615f317670) {
      *(undefined1 *)(param_1 + 1) = 1;
      goto LAB_0013fc67;
    }
    if ((*param_2)[8] == 'e' && *(long *)*param_2 == 0x7461725f65746f76) {
      *(undefined1 *)(param_1 + 1) = 4;
      goto LAB_0013fc67;
    }
    break;
  case 10:
    if (*(short *)(*param_2 + 8) == 0x6168 && *(long *)*param_2 == 0x706c615f74736f63) {
      *(undefined1 *)(param_1 + 1) = 2;
      goto LAB_0013fc67;
    }
    bVar5 = true;
    bVar4 = false;
    bVar3 = false;
    goto joined_r0x0013f911;
  case 0xb:
    if (*(long *)(*param_2 + 3) == 0x65646f6d5f6c616e && *(long *)*param_2 == 0x6d5f6c616e676973) {
      *(undefined1 *)(param_1 + 1) = 0;
      goto LAB_0013fc67;
    }
    goto LAB_0013f8fe;
  case 0xc:
  case 0xf:
  case 0x11:
  case 0x18:
    break;
  case 0xd:
    if (*(long *)(*param_2 + 5) == 0x6b5f7265766f635f && *(long *)*param_2 == 0x6f635f72656b6174) {
      *(undefined1 *)(param_1 + 1) = 0xc;
      goto LAB_0013fc67;
    }
    break;
  case 0xe:
    if (*(long *)(*param_2 + 6) == 0x657461725f72656b && *(long *)*param_2 == 0x656b61745f78616d) {
      *(undefined1 *)(param_1 + 1) = 9;
      goto LAB_0013fc67;
    }
    iVar7 = (*(code *)PTR_bcmp_001e0358)
                      (param_2,"taker_mult_maxtaker_cover_ktaker_skip_half_spread_bp",param_3);
    if (iVar7 == 0) {
      *(undefined1 *)(param_1 + 1) = 0xb;
      goto LAB_0013fc67;
    }
    iVar7 = (*(code *)PTR_bcmp_001e0358)
                      (param_2,
                       "trade_slipperyclose_position_block_msmax_single_add_volmax_single_add_amtmax_single_net_volmax_single_net_amtmax_single_close_volmax_single_close_amt"
                       ,param_3);
    if (iVar7 == 0) {
      *(undefined1 *)(param_1 + 1) = 0xe;
      goto LAB_0013fc67;
    }
    break;
  case 0x10:
    auVar15[0] = -((*param_2)[0] == DAT_00117ab0);
    auVar15[1] = -((*param_2)[1] == UNK_00117ab1);
    auVar15[2] = -((*param_2)[2] == UNK_00117ab2);
    auVar15[3] = -((*param_2)[3] == UNK_00117ab3);
    auVar15[4] = -((*param_2)[4] == UNK_00117ab4);
    auVar15[5] = -((*param_2)[5] == UNK_00117ab5);
    auVar15[6] = -((*param_2)[6] == UNK_00117ab6);
    auVar15[7] = -((*param_2)[7] == UNK_00117ab7);
    auVar15[8] = -((*param_2)[8] == UNK_00117ab8);
    auVar15[9] = -((*param_2)[9] == UNK_00117ab9);
    auVar15[10] = -((*param_2)[10] == UNK_00117aba);
    auVar15[0xb] = -((*param_2)[0xb] == UNK_00117abb);
    auVar15[0xc] = -((*param_2)[0xc] == UNK_00117abc);
    auVar15[0xd] = -((*param_2)[0xd] == UNK_00117abd);
    auVar15[0xe] = -((*param_2)[0xe] == UNK_00117abe);
    auVar15[0xf] = -((*param_2)[0xf] == UNK_00117abf);
    if ((ushort)((ushort)(SUB161(auVar15 >> 7,0) & 1) | (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar15 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar15 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar15 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar15 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar15 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar15 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar15 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar15 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar15 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar15 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar15 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar15 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar15 >> 0x77,0) & 1) << 0xe | (ushort)(auVar15[0xf] >> 7) << 0xf
                ) == 0xffff) {
      *(undefined1 *)(param_1 + 1) = 6;
      goto LAB_0013fc67;
    }
    goto LAB_0013f8fe;
  case 0x12:
    auVar16[0] = -((*param_2)[0] == s_max_single_add_v_00117b50[0]);
    auVar16[1] = -((*param_2)[1] == s_max_single_add_v_00117b50[1]);
    auVar16[2] = -((*param_2)[2] == s_max_single_add_v_00117b50[2]);
    auVar16[3] = -((*param_2)[3] == s_max_single_add_v_00117b50[3]);
    auVar16[4] = -((*param_2)[4] == s_max_single_add_v_00117b50[4]);
    auVar16[5] = -((*param_2)[5] == s_max_single_add_v_00117b50[5]);
    auVar16[6] = -((*param_2)[6] == s_max_single_add_v_00117b50[6]);
    auVar16[7] = -((*param_2)[7] == s_max_single_add_v_00117b50[7]);
    auVar16[8] = -((*param_2)[8] == s_max_single_add_v_00117b50[8]);
    auVar16[9] = -((*param_2)[9] == s_max_single_add_v_00117b50[9]);
    auVar16[10] = -((*param_2)[10] == s_max_single_add_v_00117b50[10]);
    auVar16[0xb] = -((*param_2)[0xb] == s_max_single_add_v_00117b50[0xb]);
    auVar16[0xc] = -((*param_2)[0xc] == s_max_single_add_v_00117b50[0xc]);
    auVar16[0xd] = -((*param_2)[0xd] == s_max_single_add_v_00117b50[0xd]);
    auVar16[0xe] = -((*param_2)[0xe] == s_max_single_add_v_00117b50[0xe]);
    auVar16[0xf] = -((*param_2)[0xf] == s_max_single_add_v_00117b50[0xf]);
    auVar34[0] = -((char)*(undefined2 *)param_2[1] == s_ol_001177d0[0]);
    auVar34[1] = -((char)((ushort)*(undefined2 *)param_2[1] >> 8) == s_ol_001177d0[1]);
    auVar34[2] = -(s_ol_001177d0[2] == '\0');
    auVar34[3] = -(s_ol_001177d0[3] == '\0');
    auVar34[4] = -(UNK_001177d4 == '\0');
    auVar34[5] = -(UNK_001177d5 == '\0');
    auVar34[6] = -(UNK_001177d6 == '\0');
    auVar34[7] = -(UNK_001177d7 == '\0');
    auVar34[8] = -(UNK_001177d8 == '\0');
    auVar34[9] = -(UNK_001177d9 == '\0');
    auVar34[10] = -(UNK_001177da == '\0');
    auVar34[0xb] = -(UNK_001177db == '\0');
    auVar34[0xc] = -(UNK_001177dc == '\0');
    auVar34[0xd] = -(UNK_001177dd == '\0');
    auVar34[0xe] = -(UNK_001177de == '\0');
    auVar34[0xf] = -(UNK_001177df == '\0');
    auVar34 = auVar34 & auVar16;
    if ((ushort)((ushort)(SUB161(auVar34 >> 7,0) & 1) | (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1
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
                (ushort)(byte)(auVar34[0xf] >> 7) << 0xf) == 0xffff) {
      *(undefined1 *)(param_1 + 1) = 0x10;
      goto LAB_0013fc67;
    }
    auVar17[0] = -((*param_2)[0] == DAT_00117aa0);
    auVar17[1] = -((*param_2)[1] == UNK_00117aa1);
    auVar17[2] = -((*param_2)[2] == UNK_00117aa2);
    auVar17[3] = -((*param_2)[3] == UNK_00117aa3);
    auVar17[4] = -((*param_2)[4] == UNK_00117aa4);
    auVar17[5] = -((*param_2)[5] == UNK_00117aa5);
    auVar17[6] = -((*param_2)[6] == UNK_00117aa6);
    auVar17[7] = -((*param_2)[7] == UNK_00117aa7);
    auVar17[8] = -((*param_2)[8] == UNK_00117aa8);
    auVar17[9] = -((*param_2)[9] == UNK_00117aa9);
    auVar17[10] = -((*param_2)[10] == UNK_00117aaa);
    auVar17[0xb] = -((*param_2)[0xb] == UNK_00117aab);
    auVar17[0xc] = -((*param_2)[0xc] == UNK_00117aac);
    auVar17[0xd] = -((*param_2)[0xd] == UNK_00117aad);
    auVar17[0xe] = -((*param_2)[0xe] == UNK_00117aae);
    auVar17[0xf] = -((*param_2)[0xf] == UNK_00117aaf);
    auVar35[0] = -((char)*(undefined2 *)param_2[1] == DAT_00117df0);
    auVar35[1] = -((char)((ushort)*(undefined2 *)param_2[1] >> 8) == UNK_00117df1);
    auVar35[2] = -(UNK_00117df2 == '\0');
    auVar35[3] = -(UNK_00117df3 == '\0');
    auVar35[4] = -(UNK_00117df4 == '\0');
    auVar35[5] = -(UNK_00117df5 == '\0');
    auVar35[6] = -(UNK_00117df6 == '\0');
    auVar35[7] = -(UNK_00117df7 == '\0');
    auVar35[8] = -(UNK_00117df8 == '\0');
    auVar35[9] = -(UNK_00117df9 == '\0');
    auVar35[10] = -(UNK_00117dfa == '\0');
    auVar35[0xb] = -(UNK_00117dfb == '\0');
    auVar35[0xc] = -(UNK_00117dfc == '\0');
    auVar35[0xd] = -(UNK_00117dfd == '\0');
    auVar35[0xe] = -(UNK_00117dfe == '\0');
    auVar35[0xf] = -(UNK_00117dff == '\0');
    auVar35 = auVar35 & auVar17;
    if ((ushort)((ushort)(SUB161(auVar35 >> 7,0) & 1) | (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1
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
                (ushort)(byte)(auVar35[0xf] >> 7) << 0xf) == 0xffff) {
      *(undefined1 *)(param_1 + 1) = 0x11;
      goto LAB_0013fc67;
    }
    auVar18[0] = -((*param_2)[0] == s_max_single_net_v_00117ae0[0]);
    auVar18[1] = -((*param_2)[1] == s_max_single_net_v_00117ae0[1]);
    auVar18[2] = -((*param_2)[2] == s_max_single_net_v_00117ae0[2]);
    auVar18[3] = -((*param_2)[3] == s_max_single_net_v_00117ae0[3]);
    auVar18[4] = -((*param_2)[4] == s_max_single_net_v_00117ae0[4]);
    auVar18[5] = -((*param_2)[5] == s_max_single_net_v_00117ae0[5]);
    auVar18[6] = -((*param_2)[6] == s_max_single_net_v_00117ae0[6]);
    auVar18[7] = -((*param_2)[7] == s_max_single_net_v_00117ae0[7]);
    auVar18[8] = -((*param_2)[8] == s_max_single_net_v_00117ae0[8]);
    auVar18[9] = -((*param_2)[9] == s_max_single_net_v_00117ae0[9]);
    auVar18[10] = -((*param_2)[10] == s_max_single_net_v_00117ae0[10]);
    auVar18[0xb] = -((*param_2)[0xb] == s_max_single_net_v_00117ae0[0xb]);
    auVar18[0xc] = -((*param_2)[0xc] == s_max_single_net_v_00117ae0[0xc]);
    auVar18[0xd] = -((*param_2)[0xd] == s_max_single_net_v_00117ae0[0xd]);
    auVar18[0xe] = -((*param_2)[0xe] == s_max_single_net_v_00117ae0[0xe]);
    auVar18[0xf] = -((*param_2)[0xf] == s_max_single_net_v_00117ae0[0xf]);
    auVar36[0] = -((char)*(undefined2 *)param_2[1] == s_ol_001177d0[0]);
    auVar36[1] = -((char)((ushort)*(undefined2 *)param_2[1] >> 8) == s_ol_001177d0[1]);
    auVar36[2] = -(s_ol_001177d0[2] == '\0');
    auVar36[3] = -(s_ol_001177d0[3] == '\0');
    auVar36[4] = -(UNK_001177d4 == '\0');
    auVar36[5] = -(UNK_001177d5 == '\0');
    auVar36[6] = -(UNK_001177d6 == '\0');
    auVar36[7] = -(UNK_001177d7 == '\0');
    auVar36[8] = -(UNK_001177d8 == '\0');
    auVar36[9] = -(UNK_001177d9 == '\0');
    auVar36[10] = -(UNK_001177da == '\0');
    auVar36[0xb] = -(UNK_001177db == '\0');
    auVar36[0xc] = -(UNK_001177dc == '\0');
    auVar36[0xd] = -(UNK_001177dd == '\0');
    auVar36[0xe] = -(UNK_001177de == '\0');
    auVar36[0xf] = -(UNK_001177df == '\0');
    auVar36 = auVar36 & auVar18;
    if ((ushort)((ushort)(SUB161(auVar36 >> 7,0) & 1) | (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1
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
                (ushort)(byte)(auVar36[0xf] >> 7) << 0xf) == 0xffff) {
      *(undefined1 *)(param_1 + 1) = 0x12;
      goto LAB_0013fc67;
    }
    auVar19[0] = -((*param_2)[0] == s_max_single_net_a_00117c40[0]);
    auVar19[1] = -((*param_2)[1] == s_max_single_net_a_00117c40[1]);
    auVar19[2] = -((*param_2)[2] == s_max_single_net_a_00117c40[2]);
    auVar19[3] = -((*param_2)[3] == s_max_single_net_a_00117c40[3]);
    auVar19[4] = -((*param_2)[4] == s_max_single_net_a_00117c40[4]);
    auVar19[5] = -((*param_2)[5] == s_max_single_net_a_00117c40[5]);
    auVar19[6] = -((*param_2)[6] == s_max_single_net_a_00117c40[6]);
    auVar19[7] = -((*param_2)[7] == s_max_single_net_a_00117c40[7]);
    auVar19[8] = -((*param_2)[8] == s_max_single_net_a_00117c40[8]);
    auVar19[9] = -((*param_2)[9] == s_max_single_net_a_00117c40[9]);
    auVar19[10] = -((*param_2)[10] == s_max_single_net_a_00117c40[10]);
    auVar19[0xb] = -((*param_2)[0xb] == s_max_single_net_a_00117c40[0xb]);
    auVar19[0xc] = -((*param_2)[0xc] == s_max_single_net_a_00117c40[0xc]);
    auVar19[0xd] = -((*param_2)[0xd] == s_max_single_net_a_00117c40[0xd]);
    auVar19[0xe] = -((*param_2)[0xe] == s_max_single_net_a_00117c40[0xe]);
    auVar19[0xf] = -((*param_2)[0xf] == s_max_single_net_a_00117c40[0xf]);
    auVar37[0] = -((char)*(undefined2 *)param_2[1] == DAT_00117df0);
    auVar37[1] = -((char)((ushort)*(undefined2 *)param_2[1] >> 8) == UNK_00117df1);
    auVar37[2] = -(UNK_00117df2 == '\0');
    auVar37[3] = -(UNK_00117df3 == '\0');
    auVar37[4] = -(UNK_00117df4 == '\0');
    auVar37[5] = -(UNK_00117df5 == '\0');
    auVar37[6] = -(UNK_00117df6 == '\0');
    auVar37[7] = -(UNK_00117df7 == '\0');
    auVar37[8] = -(UNK_00117df8 == '\0');
    auVar37[9] = -(UNK_00117df9 == '\0');
    auVar37[10] = -(UNK_00117dfa == '\0');
    auVar37[0xb] = -(UNK_00117dfb == '\0');
    auVar37[0xc] = -(UNK_00117dfc == '\0');
    auVar37[0xd] = -(UNK_00117dfd == '\0');
    auVar37[0xe] = -(UNK_00117dfe == '\0');
    auVar37[0xf] = -(UNK_00117dff == '\0');
    auVar37 = auVar37 & auVar19;
    if ((ushort)((ushort)(SUB161(auVar37 >> 7,0) & 1) | (ushort)(SUB161(auVar37 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar37 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar37 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar37 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar37 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar37 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar37 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar37 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar37 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar37 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar37 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar37 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar37 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar37 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar37[0xf] >> 7) << 0xf) == 0xffff) {
      *(undefined1 *)(param_1 + 1) = 0x13;
      goto LAB_0013fc67;
    }
    bVar4 = true;
    bVar5 = false;
    bVar6 = false;
    goto LAB_0013f949;
  case 0x13:
    auVar40[0] = -((*param_2)[3] == DAT_001177f0);
    auVar40[1] = -((*param_2)[4] == UNK_001177f1);
    auVar40[2] = -((*param_2)[5] == UNK_001177f2);
    auVar40[3] = -((*param_2)[6] == UNK_001177f3);
    auVar40[4] = -((*param_2)[7] == UNK_001177f4);
    auVar40[5] = -((*param_2)[8] == UNK_001177f5);
    auVar40[6] = -((*param_2)[9] == UNK_001177f6);
    auVar40[7] = -((*param_2)[10] == UNK_001177f7);
    auVar40[8] = -((*param_2)[0xb] == UNK_001177f8);
    auVar40[9] = -((*param_2)[0xc] == UNK_001177f9);
    auVar40[10] = -((*param_2)[0xd] == UNK_001177fa);
    auVar40[0xb] = -((*param_2)[0xe] == UNK_001177fb);
    auVar40[0xc] = -((*param_2)[0xf] == UNK_001177fc);
    auVar40[0xd] = -(param_2[1][0] == UNK_001177fd);
    auVar40[0xe] = -(param_2[1][1] == UNK_001177fe);
    auVar40[0xf] = -(param_2[1][2] == UNK_001177ff);
    auVar21[0] = -((*param_2)[0] == s_signal_trigger_m_00117c60[0]);
    auVar21[1] = -((*param_2)[1] == s_signal_trigger_m_00117c60[1]);
    auVar21[2] = -((*param_2)[2] == s_signal_trigger_m_00117c60[2]);
    auVar21[3] = -((*param_2)[3] == s_signal_trigger_m_00117c60[3]);
    auVar21[4] = -((*param_2)[4] == s_signal_trigger_m_00117c60[4]);
    auVar21[5] = -((*param_2)[5] == s_signal_trigger_m_00117c60[5]);
    auVar21[6] = -((*param_2)[6] == s_signal_trigger_m_00117c60[6]);
    auVar21[7] = -((*param_2)[7] == s_signal_trigger_m_00117c60[7]);
    auVar21[8] = -((*param_2)[8] == s_signal_trigger_m_00117c60[8]);
    auVar21[9] = -((*param_2)[9] == s_signal_trigger_m_00117c60[9]);
    auVar21[10] = -((*param_2)[10] == s_signal_trigger_m_00117c60[10]);
    auVar21[0xb] = -((*param_2)[0xb] == s_signal_trigger_m_00117c60[0xb]);
    auVar21[0xc] = -((*param_2)[0xc] == s_signal_trigger_m_00117c60[0xc]);
    auVar21[0xd] = -((*param_2)[0xd] == s_signal_trigger_m_00117c60[0xd]);
    auVar21[0xe] = -((*param_2)[0xe] == s_signal_trigger_m_00117c60[0xe]);
    auVar21[0xf] = -((*param_2)[0xf] == s_signal_trigger_m_00117c60[0xf]);
    auVar21 = auVar21 & auVar40;
    if ((ushort)((ushort)(SUB161(auVar21 >> 7,0) & 1) | (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar21 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar21 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar21[0xf] >> 7) << 0xf) == 0xffff) {
      *(undefined1 *)(param_1 + 1) = 3;
      goto LAB_0013fc67;
    }
    iVar7 = (*(code *)PTR_bcmp_001e0358)(param_2,"taker_rate_baselinemax_taker_rate",param_3);
    if (iVar7 == 0) {
      *(undefined1 *)(param_1 + 1) = 8;
      goto LAB_0013fc67;
    }
    iVar7 = (*(code *)PTR_bcmp_001e0358)(param_2,"long_open_threshold",param_3);
    if (iVar7 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x16;
      goto LAB_0013fc67;
    }
    goto LAB_0013f8fe;
  case 0x14:
    uVar2 = *(undefined4 *)param_2[1];
    auVar38[0] = -((char)uVar2 == DAT_00117790);
    auVar38[1] = -((char)((uint)uVar2 >> 8) == UNK_00117791);
    auVar38[2] = -((char)((uint)uVar2 >> 0x10) == UNK_00117792);
    auVar38[3] = -((char)((uint)uVar2 >> 0x18) == UNK_00117793);
    auVar38[4] = -(UNK_00117794 == '\0');
    auVar38[5] = -(UNK_00117795 == '\0');
    auVar38[6] = -(UNK_00117796 == '\0');
    auVar38[7] = -(UNK_00117797 == '\0');
    auVar38[8] = -(UNK_00117798 == '\0');
    auVar38[9] = -(UNK_00117799 == '\0');
    auVar38[10] = -(UNK_0011779a == '\0');
    auVar38[0xb] = -(UNK_0011779b == '\0');
    auVar38[0xc] = -(UNK_0011779c == '\0');
    auVar38[0xd] = -(UNK_0011779d == '\0');
    auVar38[0xe] = -(UNK_0011779e == '\0');
    auVar38[0xf] = -(UNK_0011779f == '\0');
    auVar20[0] = -((*param_2)[0] == s_max_single_close_00117920[0]);
    auVar20[1] = -((*param_2)[1] == s_max_single_close_00117920[1]);
    auVar20[2] = -((*param_2)[2] == s_max_single_close_00117920[2]);
    auVar20[3] = -((*param_2)[3] == s_max_single_close_00117920[3]);
    auVar20[4] = -((*param_2)[4] == s_max_single_close_00117920[4]);
    auVar20[5] = -((*param_2)[5] == s_max_single_close_00117920[5]);
    auVar20[6] = -((*param_2)[6] == s_max_single_close_00117920[6]);
    auVar20[7] = -((*param_2)[7] == s_max_single_close_00117920[7]);
    auVar20[8] = -((*param_2)[8] == s_max_single_close_00117920[8]);
    auVar20[9] = -((*param_2)[9] == s_max_single_close_00117920[9]);
    auVar20[10] = -((*param_2)[10] == s_max_single_close_00117920[10]);
    auVar20[0xb] = -((*param_2)[0xb] == s_max_single_close_00117920[0xb]);
    auVar20[0xc] = -((*param_2)[0xc] == s_max_single_close_00117920[0xc]);
    auVar20[0xd] = -((*param_2)[0xd] == s_max_single_close_00117920[0xd]);
    auVar20[0xe] = -((*param_2)[0xe] == s_max_single_close_00117920[0xe]);
    auVar20[0xf] = -((*param_2)[0xf] == s_max_single_close_00117920[0xf]);
    auVar20 = auVar20 & auVar38;
    if ((ushort)((ushort)(SUB161(auVar20 >> 7,0) & 1) | (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar20 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar20[0xf] >> 7) << 0xf) == 0xffff) {
      *(undefined1 *)(param_1 + 1) = 0x14;
      goto LAB_0013fc67;
    }
    auVar8 = *param_2;
    uVar2 = *(undefined4 *)param_2[1];
    auVar46[0] = -((char)uVar2 == s__amt_00117a00[0]);
    auVar46[1] = -((char)((uint)uVar2 >> 8) == s__amt_00117a00[1]);
    auVar46[2] = -((char)((uint)uVar2 >> 0x10) == s__amt_00117a00[2]);
    auVar46[3] = -((char)((uint)uVar2 >> 0x18) == s__amt_00117a00[3]);
    auVar46[4] = -(s__amt_00117a00[4] == '\0');
    auVar46[5] = -(s__amt_00117a00[5] == '\0');
    auVar46[6] = -(s__amt_00117a00[6] == '\0');
    auVar46[7] = -(s__amt_00117a00[7] == '\0');
    auVar46[8] = -(UNK_00117a08 == '\0');
    auVar46[9] = -(UNK_00117a09 == '\0');
    auVar46[10] = -(UNK_00117a0a == '\0');
    auVar46[0xb] = -(UNK_00117a0b == '\0');
    auVar46[0xc] = -(UNK_00117a0c == '\0');
    auVar46[0xd] = -(UNK_00117a0d == '\0');
    auVar46[0xe] = -(UNK_00117a0e == '\0');
    auVar46[0xf] = -(UNK_00117a0f == '\0');
    auVar39[0] = -(auVar8[0] == 'm');
    auVar39[1] = -(auVar8[1] == 'a');
    auVar39[2] = -(auVar8[2] == 'x');
    auVar39[3] = -(auVar8[3] == '_');
    auVar39[4] = -(auVar8[4] == 's');
    auVar39[5] = -(auVar8[5] == 'i');
    auVar39[6] = -(auVar8[6] == 'n');
    auVar39[7] = -(auVar8[7] == 'g');
    auVar39[8] = -(auVar8[8] == 'l');
    auVar39[9] = -(auVar8[9] == 'e');
    auVar39[10] = -(auVar8[10] == '_');
    auVar39[0xb] = -(auVar8[0xb] == 'c');
    auVar39[0xc] = -(auVar8[0xc] == 'l');
    auVar39[0xd] = -(auVar8[0xd] == 'o');
    auVar39[0xe] = -(auVar8[0xe] == 's');
    auVar39[0xf] = -(auVar8[0xf] == 'e');
    auVar46 = auVar46 & auVar39;
    if ((ushort)((ushort)(SUB161(auVar46 >> 7,0) & 1) | (ushort)(SUB161(auVar46 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar46 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar46 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar46 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar46 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar46 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar46 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar46 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar46 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar46 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar46 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar46 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar46 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar46 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar46[0xf] >> 7) << 0xf) == 0xffff) {
      *(undefined1 *)(param_1 + 1) = 0x15;
      goto LAB_0013fc67;
    }
    iVar7 = (*(code *)PTR_bcmp_001e0358)(param_2,"long_close_threshold",param_3);
    if (iVar7 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x17;
      goto LAB_0013fc67;
    }
    iVar7 = (*(code *)PTR_bcmp_001e0358)
                      (param_2,"short_open_thresholdshort_close_threshold",param_3);
    if (iVar7 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x18;
      goto LAB_0013fc67;
    }
    bVar3 = true;
    bVar5 = false;
    bVar6 = false;
    bVar4 = false;
    goto LAB_0013f94c;
  case 0x15:
    auVar28[0] = -((*param_2)[5] == DAT_00117a30);
    auVar28[1] = -((*param_2)[6] == UNK_00117a31);
    auVar28[2] = -((*param_2)[7] == UNK_00117a32);
    auVar28[3] = -((*param_2)[8] == UNK_00117a33);
    auVar28[4] = -((*param_2)[9] == UNK_00117a34);
    auVar28[5] = -((*param_2)[10] == UNK_00117a35);
    auVar28[6] = -((*param_2)[0xb] == UNK_00117a36);
    auVar28[7] = -((*param_2)[0xc] == UNK_00117a37);
    auVar28[8] = -((*param_2)[0xd] == UNK_00117a38);
    auVar28[9] = -((*param_2)[0xe] == UNK_00117a39);
    auVar28[10] = -((*param_2)[0xf] == UNK_00117a3a);
    auVar28[0xb] = -(param_2[1][0] == UNK_00117a3b);
    auVar28[0xc] = -(param_2[1][1] == UNK_00117a3c);
    auVar28[0xd] = -(param_2[1][2] == UNK_00117a3d);
    auVar28[0xe] = -(param_2[1][3] == UNK_00117a3e);
    auVar28[0xf] = -(param_2[1][4] == UNK_00117a3f);
    auVar9[0] = -((*param_2)[0] == DAT_00117a40);
    auVar9[1] = -((*param_2)[1] == UNK_00117a41);
    auVar9[2] = -((*param_2)[2] == UNK_00117a42);
    auVar9[3] = -((*param_2)[3] == UNK_00117a43);
    auVar9[4] = -((*param_2)[4] == UNK_00117a44);
    auVar9[5] = -((*param_2)[5] == UNK_00117a45);
    auVar9[6] = -((*param_2)[6] == UNK_00117a46);
    auVar9[7] = -((*param_2)[7] == UNK_00117a47);
    auVar9[8] = -((*param_2)[8] == UNK_00117a48);
    auVar9[9] = -((*param_2)[9] == UNK_00117a49);
    auVar9[10] = -((*param_2)[10] == UNK_00117a4a);
    auVar9[0xb] = -((*param_2)[0xb] == UNK_00117a4b);
    auVar9[0xc] = -((*param_2)[0xc] == UNK_00117a4c);
    auVar9[0xd] = -((*param_2)[0xd] == UNK_00117a4d);
    auVar9[0xe] = -((*param_2)[0xe] == UNK_00117a4e);
    auVar9[0xf] = -((*param_2)[0xf] == UNK_00117a4f);
    auVar9 = auVar9 & auVar28;
    if ((ushort)((ushort)(SUB161(auVar9 >> 7,0) & 1) | (ushort)(SUB161(auVar9 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar9 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar9 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar9 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar9 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar9 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar9 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar9 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar9 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar9 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar9 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar9 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar9 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar9 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar9[0xf] >> 7) << 0xf) == 0xffff) {
      *(undefined1 *)(param_1 + 1) = 0x19;
      goto LAB_0013fc67;
    }
    auVar29[0] = -((*param_2)[5] == DAT_00117850);
    auVar29[1] = -((*param_2)[6] == UNK_00117851);
    auVar29[2] = -((*param_2)[7] == UNK_00117852);
    auVar29[3] = -((*param_2)[8] == UNK_00117853);
    auVar29[4] = -((*param_2)[9] == UNK_00117854);
    auVar29[5] = -((*param_2)[10] == UNK_00117855);
    auVar29[6] = -((*param_2)[0xb] == UNK_00117856);
    auVar29[7] = -((*param_2)[0xc] == UNK_00117857);
    auVar29[8] = -((*param_2)[0xd] == UNK_00117858);
    auVar29[9] = -((*param_2)[0xe] == UNK_00117859);
    auVar29[10] = -((*param_2)[0xf] == UNK_0011785a);
    auVar29[0xb] = -(param_2[1][0] == UNK_0011785b);
    auVar29[0xc] = -(param_2[1][1] == UNK_0011785c);
    auVar29[0xd] = -(param_2[1][2] == UNK_0011785d);
    auVar29[0xe] = -(param_2[1][3] == UNK_0011785e);
    auVar29[0xf] = -(param_2[1][4] == UNK_0011785f);
    auVar10[0] = -((*param_2)[0] == DAT_00117d30);
    auVar10[1] = -((*param_2)[1] == UNK_00117d31);
    auVar10[2] = -((*param_2)[2] == UNK_00117d32);
    auVar10[3] = -((*param_2)[3] == UNK_00117d33);
    auVar10[4] = -((*param_2)[4] == UNK_00117d34);
    auVar10[5] = -((*param_2)[5] == UNK_00117d35);
    auVar10[6] = -((*param_2)[6] == UNK_00117d36);
    auVar10[7] = -((*param_2)[7] == UNK_00117d37);
    auVar10[8] = -((*param_2)[8] == UNK_00117d38);
    auVar10[9] = -((*param_2)[9] == UNK_00117d39);
    auVar10[10] = -((*param_2)[10] == UNK_00117d3a);
    auVar10[0xb] = -((*param_2)[0xb] == UNK_00117d3b);
    auVar10[0xc] = -((*param_2)[0xc] == UNK_00117d3c);
    auVar10[0xd] = -((*param_2)[0xd] == UNK_00117d3d);
    auVar10[0xe] = -((*param_2)[0xe] == UNK_00117d3e);
    auVar10[0xf] = -((*param_2)[0xf] == UNK_00117d3f);
    auVar10 = auVar10 & auVar29;
    if ((ushort)((ushort)(SUB161(auVar10 >> 7,0) & 1) | (ushort)(SUB161(auVar10 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar10 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar10 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar10 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar10 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar10 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar10 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar10 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar10 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar10 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar10 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar10 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar10 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar10 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar10[0xf] >> 7) << 0xf) == 0xffff) {
      *(undefined1 *)(param_1 + 1) = 0x20;
      goto LAB_0013fc67;
    }
    bVar3 = false;
    bVar4 = false;
    bVar6 = false;
    bVar5 = false;
    goto LAB_0013f9d6;
  case 0x16:
    auVar31[0] = -((*param_2)[6] == DAT_001177e0);
    auVar31[1] = -((*param_2)[7] == UNK_001177e1);
    auVar31[2] = -((*param_2)[8] == UNK_001177e2);
    auVar31[3] = -((*param_2)[9] == UNK_001177e3);
    auVar31[4] = -((*param_2)[10] == UNK_001177e4);
    auVar31[5] = -((*param_2)[0xb] == UNK_001177e5);
    auVar31[6] = -((*param_2)[0xc] == UNK_001177e6);
    auVar31[7] = -((*param_2)[0xd] == UNK_001177e7);
    auVar31[8] = -((*param_2)[0xe] == UNK_001177e8);
    auVar31[9] = -((*param_2)[0xf] == UNK_001177e9);
    auVar31[10] = -(param_2[1][0] == UNK_001177ea);
    auVar31[0xb] = -(param_2[1][1] == UNK_001177eb);
    auVar31[0xc] = -(param_2[1][2] == UNK_001177ec);
    auVar31[0xd] = -(param_2[1][3] == UNK_001177ed);
    auVar31[0xe] = -(param_2[1][4] == UNK_001177ee);
    auVar31[0xf] = -(param_2[1][5] == UNK_001177ef);
    auVar12[0] = -((*param_2)[0] == DAT_00117950);
    auVar12[1] = -((*param_2)[1] == UNK_00117951);
    auVar12[2] = -((*param_2)[2] == UNK_00117952);
    auVar12[3] = -((*param_2)[3] == UNK_00117953);
    auVar12[4] = -((*param_2)[4] == UNK_00117954);
    auVar12[5] = -((*param_2)[5] == UNK_00117955);
    auVar12[6] = -((*param_2)[6] == UNK_00117956);
    auVar12[7] = -((*param_2)[7] == UNK_00117957);
    auVar12[8] = -((*param_2)[8] == UNK_00117958);
    auVar12[9] = -((*param_2)[9] == UNK_00117959);
    auVar12[10] = -((*param_2)[10] == UNK_0011795a);
    auVar12[0xb] = -((*param_2)[0xb] == UNK_0011795b);
    auVar12[0xc] = -((*param_2)[0xc] == UNK_0011795c);
    auVar12[0xd] = -((*param_2)[0xd] == UNK_0011795d);
    auVar12[0xe] = -((*param_2)[0xe] == UNK_0011795e);
    auVar12[0xf] = -((*param_2)[0xf] == UNK_0011795f);
    auVar12 = auVar12 & auVar31;
    if ((ushort)((ushort)(SUB161(auVar12 >> 7,0) & 1) | (ushort)(SUB161(auVar12 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar12 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar12 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar12 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar12 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar12 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar12 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar12 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar12 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar12 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar12 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar12 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar12 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar12 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar12[0xf] >> 7) << 0xf) == 0xffff) {
      *(undefined1 *)(param_1 + 1) = 7;
      goto LAB_0013fc67;
    }
    iVar7 = (*(code *)PTR_bcmp_001e0358)(param_2,"high_taker_half_spread",param_3);
    if (iVar7 == 0) {
      *(undefined1 *)(param_1 + 1) = 10;
      goto LAB_0013fc67;
    }
LAB_0013f8fe:
    bVar5 = false;
    goto LAB_0013f93e;
  case 0x17:
    auVar30[0] = -((*param_2)[7] == DAT_00117c90);
    auVar30[1] = -((*param_2)[8] == UNK_00117c91);
    auVar30[2] = -((*param_2)[9] == UNK_00117c92);
    auVar30[3] = -((*param_2)[10] == UNK_00117c93);
    auVar30[4] = -((*param_2)[0xb] == UNK_00117c94);
    auVar30[5] = -((*param_2)[0xc] == UNK_00117c95);
    auVar30[6] = -((*param_2)[0xd] == UNK_00117c96);
    auVar30[7] = -((*param_2)[0xe] == UNK_00117c97);
    auVar30[8] = -((*param_2)[0xf] == UNK_00117c98);
    auVar30[9] = -(param_2[1][0] == UNK_00117c99);
    auVar30[10] = -(param_2[1][1] == UNK_00117c9a);
    auVar30[0xb] = -(param_2[1][2] == UNK_00117c9b);
    auVar30[0xc] = -(param_2[1][3] == UNK_00117c9c);
    auVar30[0xd] = -(param_2[1][4] == UNK_00117c9d);
    auVar30[0xe] = -(param_2[1][5] == UNK_00117c9e);
    auVar30[0xf] = -(param_2[1][6] == UNK_00117c9f);
    auVar11[0] = -((*param_2)[0] == s_close_position_b_00117890[0]);
    auVar11[1] = -((*param_2)[1] == s_close_position_b_00117890[1]);
    auVar11[2] = -((*param_2)[2] == s_close_position_b_00117890[2]);
    auVar11[3] = -((*param_2)[3] == s_close_position_b_00117890[3]);
    auVar11[4] = -((*param_2)[4] == s_close_position_b_00117890[4]);
    auVar11[5] = -((*param_2)[5] == s_close_position_b_00117890[5]);
    auVar11[6] = -((*param_2)[6] == s_close_position_b_00117890[6]);
    auVar11[7] = -((*param_2)[7] == s_close_position_b_00117890[7]);
    auVar11[8] = -((*param_2)[8] == s_close_position_b_00117890[8]);
    auVar11[9] = -((*param_2)[9] == s_close_position_b_00117890[9]);
    auVar11[10] = -((*param_2)[10] == s_close_position_b_00117890[10]);
    auVar11[0xb] = -((*param_2)[0xb] == s_close_position_b_00117890[0xb]);
    auVar11[0xc] = -((*param_2)[0xc] == s_close_position_b_00117890[0xc]);
    auVar11[0xd] = -((*param_2)[0xd] == s_close_position_b_00117890[0xd]);
    auVar11[0xe] = -((*param_2)[0xe] == s_close_position_b_00117890[0xe]);
    auVar11[0xf] = -((*param_2)[0xf] == s_close_position_b_00117890[0xf]);
    auVar11 = auVar11 & auVar30;
    if ((ushort)((ushort)(SUB161(auVar11 >> 7,0) & 1) | (ushort)(SUB161(auVar11 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar11 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar11 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar11 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar11 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar11 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar11 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar11 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar11 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar11 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar11 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar11 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar11 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar11 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar11[0xf] >> 7) << 0xf) == 0xffff) {
      *(undefined1 *)(param_1 + 1) = 0xf;
      goto LAB_0013fc67;
    }
    iVar7 = (*(code *)PTR_bcmp_001e0358)
                      (param_2,
                       "low_long_open_thresholdlow_long_close_thresholdlow_short_open_threshold",
                       param_3);
    if (iVar7 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x1a;
      goto LAB_0013fc67;
    }
    goto LAB_0013fb80;
  case 0x19:
    auVar27[0] = -((*param_2)[9] == s_p_half_spread_bp_00117c50[0]);
    auVar27[1] = -((*param_2)[10] == s_p_half_spread_bp_00117c50[1]);
    auVar27[2] = -((*param_2)[0xb] == s_p_half_spread_bp_00117c50[2]);
    auVar27[3] = -((*param_2)[0xc] == s_p_half_spread_bp_00117c50[3]);
    auVar27[4] = -((*param_2)[0xd] == s_p_half_spread_bp_00117c50[4]);
    auVar27[5] = -((*param_2)[0xe] == s_p_half_spread_bp_00117c50[5]);
    auVar27[6] = -((*param_2)[0xf] == s_p_half_spread_bp_00117c50[6]);
    auVar27[7] = -(param_2[1][0] == s_p_half_spread_bp_00117c50[7]);
    auVar27[8] = -(param_2[1][1] == s_p_half_spread_bp_00117c50[8]);
    auVar27[9] = -(param_2[1][2] == s_p_half_spread_bp_00117c50[9]);
    auVar27[10] = -(param_2[1][3] == s_p_half_spread_bp_00117c50[10]);
    auVar27[0xb] = -(param_2[1][4] == s_p_half_spread_bp_00117c50[0xb]);
    auVar27[0xc] = -(param_2[1][5] == s_p_half_spread_bp_00117c50[0xc]);
    auVar27[0xd] = -(param_2[1][6] == s_p_half_spread_bp_00117c50[0xd]);
    auVar27[0xe] = -(param_2[1][7] == s_p_half_spread_bp_00117c50[0xe]);
    auVar27[0xf] = -(param_2[1][8] == s_p_half_spread_bp_00117c50[0xf]);
    auVar8[0] = -((*param_2)[0] == DAT_00117e00);
    auVar8[1] = -((*param_2)[1] == UNK_00117e01);
    auVar8[2] = -((*param_2)[2] == UNK_00117e02);
    auVar8[3] = -((*param_2)[3] == UNK_00117e03);
    auVar8[4] = -((*param_2)[4] == UNK_00117e04);
    auVar8[5] = -((*param_2)[5] == UNK_00117e05);
    auVar8[6] = -((*param_2)[6] == UNK_00117e06);
    auVar8[7] = -((*param_2)[7] == UNK_00117e07);
    auVar8[8] = -((*param_2)[8] == UNK_00117e08);
    auVar8[9] = -((*param_2)[9] == UNK_00117e09);
    auVar8[10] = -((*param_2)[10] == UNK_00117e0a);
    auVar8[0xb] = -((*param_2)[0xb] == UNK_00117e0b);
    auVar8[0xc] = -((*param_2)[0xc] == UNK_00117e0c);
    auVar8[0xd] = -((*param_2)[0xd] == UNK_00117e0d);
    auVar8[0xe] = -((*param_2)[0xe] == UNK_00117e0e);
    auVar8[0xf] = -((*param_2)[0xf] == UNK_00117e0f);
    auVar8 = auVar8 & auVar27;
    if ((ushort)((ushort)(SUB161(auVar8 >> 7,0) & 1) | (ushort)(SUB161(auVar8 >> 0xf,0) & 1) << 1 |
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
                 (ushort)(SUB161(auVar8 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar8[0xf] >> 7) << 0xf) == 0xffff) {
      *(undefined1 *)(param_1 + 1) = 0xd;
      goto LAB_0013fc67;
    }
    bVar4 = true;
    bVar3 = true;
    goto joined_r0x0013f418;
  default:
    bVar5 = false;
    goto joined_r0x0013f911;
  }
  bVar4 = false;
  bVar3 = false;
joined_r0x0013f418:
  bVar5 = false;
joined_r0x0013f911:
  if (param_3 == 0x18) {
    uVar1 = *(undefined8 *)param_2[1];
    auVar32[0] = -((char)uVar1 == s_hreshold_00117be0[0]);
    auVar32[1] = -((char)((ulong)uVar1 >> 8) == s_hreshold_00117be0[1]);
    auVar32[2] = -((char)((ulong)uVar1 >> 0x10) == s_hreshold_00117be0[2]);
    auVar32[3] = -((char)((ulong)uVar1 >> 0x18) == s_hreshold_00117be0[3]);
    auVar32[4] = -((char)((ulong)uVar1 >> 0x20) == s_hreshold_00117be0[4]);
    auVar32[5] = -((char)((ulong)uVar1 >> 0x28) == s_hreshold_00117be0[5]);
    auVar32[6] = -((char)((ulong)uVar1 >> 0x30) == s_hreshold_00117be0[6]);
    auVar32[7] = -((char)((ulong)uVar1 >> 0x38) == s_hreshold_00117be0[7]);
    auVar32[8] = -(s_hreshold_00117be0[8] == '\0');
    auVar32[9] = -(s_hreshold_00117be0[9] == '\0');
    auVar32[10] = -(s_hreshold_00117be0[10] == '\0');
    auVar32[0xb] = -(s_hreshold_00117be0[0xb] == '\0');
    auVar32[0xc] = -(UNK_00117bec == '\0');
    auVar32[0xd] = -(UNK_00117bed == '\0');
    auVar32[0xe] = -(UNK_00117bee == '\0');
    auVar32[0xf] = -(UNK_00117bef == '\0');
    auVar13[0] = -((*param_2)[0] == DAT_00117a80);
    auVar13[1] = -((*param_2)[1] == UNK_00117a81);
    auVar13[2] = -((*param_2)[2] == UNK_00117a82);
    auVar13[3] = -((*param_2)[3] == UNK_00117a83);
    auVar13[4] = -((*param_2)[4] == UNK_00117a84);
    auVar13[5] = -((*param_2)[5] == UNK_00117a85);
    auVar13[6] = -((*param_2)[6] == UNK_00117a86);
    auVar13[7] = -((*param_2)[7] == UNK_00117a87);
    auVar13[8] = -((*param_2)[8] == UNK_00117a88);
    auVar13[9] = -((*param_2)[9] == UNK_00117a89);
    auVar13[10] = -((*param_2)[10] == UNK_00117a8a);
    auVar13[0xb] = -((*param_2)[0xb] == UNK_00117a8b);
    auVar13[0xc] = -((*param_2)[0xc] == UNK_00117a8c);
    auVar13[0xd] = -((*param_2)[0xd] == UNK_00117a8d);
    auVar13[0xe] = -((*param_2)[0xe] == UNK_00117a8e);
    auVar13[0xf] = -((*param_2)[0xf] == UNK_00117a8f);
    auVar13 = auVar13 & auVar32;
    if ((ushort)((ushort)(SUB161(auVar13 >> 7,0) & 1) | (ushort)(SUB161(auVar13 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar13 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar13 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar13 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar13 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar13 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar13 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar13 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar13 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar13 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar13 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar13 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar13 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar13 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar13[0xf] >> 7) << 0xf) == 0xffff) {
      *(undefined1 *)(param_1 + 1) = 0x1b;
      goto LAB_0013fc67;
    }
    uVar1 = *(undefined8 *)param_2[1];
    auVar33[0] = -((char)uVar1 == s_hreshold_00117be0[0]);
    auVar33[1] = -((char)((ulong)uVar1 >> 8) == s_hreshold_00117be0[1]);
    auVar33[2] = -((char)((ulong)uVar1 >> 0x10) == s_hreshold_00117be0[2]);
    auVar33[3] = -((char)((ulong)uVar1 >> 0x18) == s_hreshold_00117be0[3]);
    auVar33[4] = -((char)((ulong)uVar1 >> 0x20) == s_hreshold_00117be0[4]);
    auVar33[5] = -((char)((ulong)uVar1 >> 0x28) == s_hreshold_00117be0[5]);
    auVar33[6] = -((char)((ulong)uVar1 >> 0x30) == s_hreshold_00117be0[6]);
    auVar33[7] = -((char)((ulong)uVar1 >> 0x38) == s_hreshold_00117be0[7]);
    auVar33[8] = -(s_hreshold_00117be0[8] == '\0');
    auVar33[9] = -(s_hreshold_00117be0[9] == '\0');
    auVar33[10] = -(s_hreshold_00117be0[10] == '\0');
    auVar33[0xb] = -(s_hreshold_00117be0[0xb] == '\0');
    auVar33[0xc] = -(UNK_00117bec == '\0');
    auVar33[0xd] = -(UNK_00117bed == '\0');
    auVar33[0xe] = -(UNK_00117bee == '\0');
    auVar33[0xf] = -(UNK_00117bef == '\0');
    auVar14[0] = -((*param_2)[0] == DAT_00117860);
    auVar14[1] = -((*param_2)[1] == UNK_00117861);
    auVar14[2] = -((*param_2)[2] == UNK_00117862);
    auVar14[3] = -((*param_2)[3] == UNK_00117863);
    auVar14[4] = -((*param_2)[4] == UNK_00117864);
    auVar14[5] = -((*param_2)[5] == UNK_00117865);
    auVar14[6] = -((*param_2)[6] == UNK_00117866);
    auVar14[7] = -((*param_2)[7] == UNK_00117867);
    auVar14[8] = -((*param_2)[8] == UNK_00117868);
    auVar14[9] = -((*param_2)[9] == UNK_00117869);
    auVar14[10] = -((*param_2)[10] == UNK_0011786a);
    auVar14[0xb] = -((*param_2)[0xb] == UNK_0011786b);
    auVar14[0xc] = -((*param_2)[0xc] == UNK_0011786c);
    auVar14[0xd] = -((*param_2)[0xd] == UNK_0011786d);
    auVar14[0xe] = -((*param_2)[0xe] == UNK_0011786e);
    auVar14[0xf] = -((*param_2)[0xf] == UNK_0011786f);
    auVar14 = auVar14 & auVar33;
    bVar3 = bVar4;
    if ((ushort)((ushort)(SUB161(auVar14 >> 7,0) & 1) | (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar14 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar14 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar14 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar14 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar14 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar14 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar14 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar14 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar14 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar14 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar14 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar14 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar14 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar14[0xf] >> 7) << 0xf) == 0xffff) {
      *(undefined1 *)(param_1 + 1) = 0x1c;
      goto LAB_0013fc67;
    }
  }
  if (bVar3) {
    iVar7 = (*(code *)PTR_bcmp_001e0358)(param_2,"low_short_close_threshold",param_3);
    if (iVar7 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x1d;
      goto LAB_0013fc67;
    }
    bVar6 = true;
  }
  else {
LAB_0013f93e:
    bVar6 = false;
  }
  bVar4 = false;
LAB_0013f949:
  bVar3 = false;
LAB_0013f94c:
  if (param_3 == 0x1b) {
    auVar41[0] = -((*param_2)[0xb] == s_ax_position_ts_s_00117760[0]);
    auVar41[1] = -((*param_2)[0xc] == s_ax_position_ts_s_00117760[1]);
    auVar41[2] = -((*param_2)[0xd] == s_ax_position_ts_s_00117760[2]);
    auVar41[3] = -((*param_2)[0xe] == s_ax_position_ts_s_00117760[3]);
    auVar41[4] = -((*param_2)[0xf] == s_ax_position_ts_s_00117760[4]);
    auVar41[5] = -(param_2[1][0] == s_ax_position_ts_s_00117760[5]);
    auVar41[6] = -(param_2[1][1] == s_ax_position_ts_s_00117760[6]);
    auVar41[7] = -(param_2[1][2] == s_ax_position_ts_s_00117760[7]);
    auVar41[8] = -(param_2[1][3] == s_ax_position_ts_s_00117760[8]);
    auVar41[9] = -(param_2[1][4] == s_ax_position_ts_s_00117760[9]);
    auVar41[10] = -(param_2[1][5] == s_ax_position_ts_s_00117760[10]);
    auVar41[0xb] = -(param_2[1][6] == s_ax_position_ts_s_00117760[0xb]);
    auVar41[0xc] = -(param_2[1][7] == s_ax_position_ts_s_00117760[0xc]);
    auVar41[0xd] = -(param_2[1][8] == s_ax_position_ts_s_00117760[0xd]);
    auVar41[0xe] = -(param_2[1][9] == s_ax_position_ts_s_00117760[0xe]);
    auVar41[0xf] = -(param_2[1][10] == s_ax_position_ts_s_00117760[0xf]);
    auVar22[0] = -((*param_2)[0] == DAT_00117a90);
    auVar22[1] = -((*param_2)[1] == UNK_00117a91);
    auVar22[2] = -((*param_2)[2] == UNK_00117a92);
    auVar22[3] = -((*param_2)[3] == UNK_00117a93);
    auVar22[4] = -((*param_2)[4] == UNK_00117a94);
    auVar22[5] = -((*param_2)[5] == UNK_00117a95);
    auVar22[6] = -((*param_2)[6] == UNK_00117a96);
    auVar22[7] = -((*param_2)[7] == UNK_00117a97);
    auVar22[8] = -((*param_2)[8] == UNK_00117a98);
    auVar22[9] = -((*param_2)[9] == UNK_00117a99);
    auVar22[10] = -((*param_2)[10] == UNK_00117a9a);
    auVar22[0xb] = -((*param_2)[0xb] == UNK_00117a9b);
    auVar22[0xc] = -((*param_2)[0xc] == UNK_00117a9c);
    auVar22[0xd] = -((*param_2)[0xd] == UNK_00117a9d);
    auVar22[0xe] = -((*param_2)[0xe] == UNK_00117a9e);
    auVar22[0xf] = -((*param_2)[0xf] == UNK_00117a9f);
    auVar22 = auVar22 & auVar41;
    if ((ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar22[0xf] >> 7) << 0xf) == 0xffff) {
      *(undefined1 *)(param_1 + 1) = 0x1f;
      goto LAB_0013fc67;
    }
    auVar42[0] = -((*param_2)[0xb] == DAT_00117800);
    auVar42[1] = -((*param_2)[0xc] == UNK_00117801);
    auVar42[2] = -((*param_2)[0xd] == UNK_00117802);
    auVar42[3] = -((*param_2)[0xe] == UNK_00117803);
    auVar42[4] = -((*param_2)[0xf] == UNK_00117804);
    auVar42[5] = -(param_2[1][0] == UNK_00117805);
    auVar42[6] = -(param_2[1][1] == UNK_00117806);
    auVar42[7] = -(param_2[1][2] == UNK_00117807);
    auVar42[8] = -(param_2[1][3] == UNK_00117808);
    auVar42[9] = -(param_2[1][4] == UNK_00117809);
    auVar42[10] = -(param_2[1][5] == UNK_0011780a);
    auVar42[0xb] = -(param_2[1][6] == UNK_0011780b);
    auVar42[0xc] = -(param_2[1][7] == UNK_0011780c);
    auVar42[0xd] = -(param_2[1][8] == UNK_0011780d);
    auVar42[0xe] = -(param_2[1][9] == UNK_0011780e);
    auVar42[0xf] = -(param_2[1][10] == UNK_0011780f);
    auVar23[0] = -((*param_2)[0] == DAT_00117d40);
    auVar23[1] = -((*param_2)[1] == UNK_00117d41);
    auVar23[2] = -((*param_2)[2] == UNK_00117d42);
    auVar23[3] = -((*param_2)[3] == UNK_00117d43);
    auVar23[4] = -((*param_2)[4] == UNK_00117d44);
    auVar23[5] = -((*param_2)[5] == UNK_00117d45);
    auVar23[6] = -((*param_2)[6] == UNK_00117d46);
    auVar23[7] = -((*param_2)[7] == UNK_00117d47);
    auVar23[8] = -((*param_2)[8] == UNK_00117d48);
    auVar23[9] = -((*param_2)[9] == UNK_00117d49);
    auVar23[10] = -((*param_2)[10] == UNK_00117d4a);
    auVar23[0xb] = -((*param_2)[0xb] == UNK_00117d4b);
    auVar23[0xc] = -((*param_2)[0xc] == UNK_00117d4c);
    auVar23[0xd] = -((*param_2)[0xd] == UNK_00117d4d);
    auVar23[0xe] = -((*param_2)[0xe] == UNK_00117d4e);
    auVar23[0xf] = -((*param_2)[0xf] == UNK_00117d4f);
    auVar23 = auVar23 & auVar42;
    if ((ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar23[0xf] >> 7) << 0xf) == 0xffff) {
      *(undefined1 *)(param_1 + 1) = 0x21;
      goto LAB_0013fc67;
    }
  }
  else if ((param_3 == 0x21) &&
          (iVar7 = (*(code *)PTR_bcmp_001e0358)
                             (param_2,
                              "dyn_score_position_ts_threshold_sdyn_score_max_position_ts_sdyn_score_delta_scoreuse_dynamic_volspread_ratio"
                              ,0x21), iVar7 == 0)) {
    *(undefined1 *)(param_1 + 1) = 0x1e;
    goto LAB_0013fc67;
  }
LAB_0013f9d6:
  if ((bVar3) &&
     (iVar7 = (*(code *)PTR_bcmp_001e0358)(param_2,"market_volatility_ms",param_3), iVar7 == 0)) {
    *(undefined1 *)(param_1 + 1) = 0x22;
  }
  else if ((bVar4) &&
          (iVar7 = (*(code *)PTR_bcmp_001e0358)
                             (param_2,
                              "rolling_windows_mspublish_window_msuse_iocsplit_high_low_ratio_threshold"
                              ,param_3), iVar7 == 0)) {
    *(undefined1 *)(param_1 + 1) = 0x23;
  }
  else {
    if (param_3 == 7) {
      if (*(int *)(*param_2 + 3) == 0x636f695f && *(int *)*param_2 == 0x5f657375) {
        *(undefined1 *)(param_1 + 1) = 0x25;
        goto LAB_0013fc67;
      }
      bVar3 = false;
    }
    else if (param_3 == 0x1e) {
      auVar44[0] = -((*param_2)[0xe] == DAT_00117a10);
      auVar44[1] = -((*param_2)[0xf] == UNK_00117a11);
      auVar44[2] = -(param_2[1][0] == UNK_00117a12);
      auVar44[3] = -(param_2[1][1] == UNK_00117a13);
      auVar44[4] = -(param_2[1][2] == UNK_00117a14);
      auVar44[5] = -(param_2[1][3] == UNK_00117a15);
      auVar44[6] = -(param_2[1][4] == UNK_00117a16);
      auVar44[7] = -(param_2[1][5] == UNK_00117a17);
      auVar44[8] = -(param_2[1][6] == UNK_00117a18);
      auVar44[9] = -(param_2[1][7] == UNK_00117a19);
      auVar44[10] = -(param_2[1][8] == UNK_00117a1a);
      auVar44[0xb] = -(param_2[1][9] == UNK_00117a1b);
      auVar44[0xc] = -(param_2[1][10] == UNK_00117a1c);
      auVar44[0xd] = -(param_2[1][0xb] == UNK_00117a1d);
      auVar44[0xe] = -(param_2[1][0xc] == UNK_00117a1e);
      auVar44[0xf] = -(param_2[1][0xd] == UNK_00117a1f);
      auVar25[0] = -((*param_2)[0] == s_split_high_low_r_001178a0[0]);
      auVar25[1] = -((*param_2)[1] == s_split_high_low_r_001178a0[1]);
      auVar25[2] = -((*param_2)[2] == s_split_high_low_r_001178a0[2]);
      auVar25[3] = -((*param_2)[3] == s_split_high_low_r_001178a0[3]);
      auVar25[4] = -((*param_2)[4] == s_split_high_low_r_001178a0[4]);
      auVar25[5] = -((*param_2)[5] == s_split_high_low_r_001178a0[5]);
      auVar25[6] = -((*param_2)[6] == s_split_high_low_r_001178a0[6]);
      auVar25[7] = -((*param_2)[7] == s_split_high_low_r_001178a0[7]);
      auVar25[8] = -((*param_2)[8] == s_split_high_low_r_001178a0[8]);
      auVar25[9] = -((*param_2)[9] == s_split_high_low_r_001178a0[9]);
      auVar25[10] = -((*param_2)[10] == s_split_high_low_r_001178a0[10]);
      auVar25[0xb] = -((*param_2)[0xb] == s_split_high_low_r_001178a0[0xb]);
      auVar25[0xc] = -((*param_2)[0xc] == s_split_high_low_r_001178a0[0xc]);
      auVar25[0xd] = -((*param_2)[0xd] == s_split_high_low_r_001178a0[0xd]);
      auVar25[0xe] = -((*param_2)[0xe] == s_split_high_low_r_001178a0[0xe]);
      auVar25[0xf] = -((*param_2)[0xf] == s_split_high_low_r_001178a0[0xf]);
      auVar25 = auVar25 & auVar44;
      bVar3 = true;
      if ((ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
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
                   (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar25[0xf] >> 7) << 0xf) == 0xffff) {
        *(undefined1 *)(param_1 + 1) = 0x26;
        goto LAB_0013fc67;
      }
    }
    else {
      if ((param_3 == 0x11) &&
         (auVar24[0] = -((*param_2)[0] == DAT_00117d90),
         auVar24[1] = -((*param_2)[1] == UNK_00117d91),
         auVar24[2] = -((*param_2)[2] == UNK_00117d92),
         auVar24[3] = -((*param_2)[3] == UNK_00117d93),
         auVar24[4] = -((*param_2)[4] == UNK_00117d94),
         auVar24[5] = -((*param_2)[5] == UNK_00117d95),
         auVar24[6] = -((*param_2)[6] == UNK_00117d96),
         auVar24[7] = -((*param_2)[7] == UNK_00117d97),
         auVar24[8] = -((*param_2)[8] == UNK_00117d98),
         auVar24[9] = -((*param_2)[9] == UNK_00117d99),
         auVar24[10] = -((*param_2)[10] == UNK_00117d9a),
         auVar24[0xb] = -((*param_2)[0xb] == UNK_00117d9b),
         auVar24[0xc] = -((*param_2)[0xc] == UNK_00117d9c),
         auVar24[0xd] = -((*param_2)[0xd] == UNK_00117d9d),
         auVar24[0xe] = -((*param_2)[0xe] == UNK_00117d9e),
         auVar24[0xf] = -((*param_2)[0xf] == UNK_00117d9f),
         auVar43[0] = -(param_2[1][0] == DAT_00117e30), auVar43[1] = -(UNK_00117e31 == '\0'),
         auVar43[2] = -(UNK_00117e32 == '\0'), auVar43[3] = -(UNK_00117e33 == '\0'),
         auVar43[4] = -(UNK_00117e34 == '\0'), auVar43[5] = -(UNK_00117e35 == '\0'),
         auVar43[6] = -(UNK_00117e36 == '\0'), auVar43[7] = -(UNK_00117e37 == '\0'),
         auVar43[8] = -(UNK_00117e38 == '\0'), auVar43[9] = -(UNK_00117e39 == '\0'),
         auVar43[10] = -(UNK_00117e3a == '\0'), auVar43[0xb] = -(UNK_00117e3b == '\0'),
         auVar43[0xc] = -(UNK_00117e3c == '\0'), auVar43[0xd] = -(UNK_00117e3d == '\0'),
         auVar43[0xe] = -(UNK_00117e3e == '\0'), auVar43[0xf] = -(UNK_00117e3f == '\0'),
         auVar43 = auVar43 & auVar24,
         (ushort)((ushort)(SUB161(auVar43 >> 7,0) & 1) | (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar43 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar43 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar43 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar43 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar43 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar43 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar43 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar43 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar43 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar43 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar43 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar43 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe |
                 (ushort)(byte)(auVar43[0xf] >> 7) << 0xf) == 0xffff)) {
        *(undefined1 *)(param_1 + 1) = 0x24;
        goto LAB_0013fc67;
      }
      bVar3 = false;
    }
    if ((bVar5) &&
       (iVar7 = (*(code *)PTR_bcmp_001e0358)
                          (param_2,"low_actionmaker_order_max_pending_time_ms",param_3), iVar7 == 0)
       ) {
      *(undefined1 *)(param_1 + 1) = 0x27;
    }
    else if ((param_3 == 0x1f) &&
            (auVar45[0] = -((*param_2)[0xf] == s__pending_time_ms_00117b60[0]),
            auVar45[1] = -(param_2[1][0] == s__pending_time_ms_00117b60[1]),
            auVar45[2] = -(param_2[1][1] == s__pending_time_ms_00117b60[2]),
            auVar45[3] = -(param_2[1][2] == s__pending_time_ms_00117b60[3]),
            auVar45[4] = -(param_2[1][3] == s__pending_time_ms_00117b60[4]),
            auVar45[5] = -(param_2[1][4] == s__pending_time_ms_00117b60[5]),
            auVar45[6] = -(param_2[1][5] == s__pending_time_ms_00117b60[6]),
            auVar45[7] = -(param_2[1][6] == s__pending_time_ms_00117b60[7]),
            auVar45[8] = -(param_2[1][7] == s__pending_time_ms_00117b60[8]),
            auVar45[9] = -(param_2[1][8] == s__pending_time_ms_00117b60[9]),
            auVar45[10] = -(param_2[1][9] == s__pending_time_ms_00117b60[10]),
            auVar45[0xb] = -(param_2[1][10] == s__pending_time_ms_00117b60[0xb]),
            auVar45[0xc] = -(param_2[1][0xb] == s__pending_time_ms_00117b60[0xc]),
            auVar45[0xd] = -(param_2[1][0xc] == s__pending_time_ms_00117b60[0xd]),
            auVar45[0xe] = -(param_2[1][0xd] == s__pending_time_ms_00117b60[0xe]),
            auVar45[0xf] = -(param_2[1][0xe] == s__pending_time_ms_00117b60[0xf]),
            auVar26[0] = -((*param_2)[0] == DAT_00117e10),
            auVar26[1] = -((*param_2)[1] == UNK_00117e11),
            auVar26[2] = -((*param_2)[2] == UNK_00117e12),
            auVar26[3] = -((*param_2)[3] == UNK_00117e13),
            auVar26[4] = -((*param_2)[4] == UNK_00117e14),
            auVar26[5] = -((*param_2)[5] == UNK_00117e15),
            auVar26[6] = -((*param_2)[6] == UNK_00117e16),
            auVar26[7] = -((*param_2)[7] == UNK_00117e17),
            auVar26[8] = -((*param_2)[8] == UNK_00117e18),
            auVar26[9] = -((*param_2)[9] == UNK_00117e19),
            auVar26[10] = -((*param_2)[10] == UNK_00117e1a),
            auVar26[0xb] = -((*param_2)[0xb] == UNK_00117e1b),
            auVar26[0xc] = -((*param_2)[0xc] == UNK_00117e1c),
            auVar26[0xd] = -((*param_2)[0xd] == UNK_00117e1d),
            auVar26[0xe] = -((*param_2)[0xe] == UNK_00117e1e),
            auVar26[0xf] = -((*param_2)[0xf] == UNK_00117e1f), auVar26 = auVar26 & auVar45,
            (ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
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
                     (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar26[0xf] >> 7) << 0xf) == 0xffff)) {
      *(undefined1 *)(param_1 + 1) = 0x28;
    }
    else if ((bVar3) &&
            (iVar7 = (*(code *)PTR_bcmp_001e0358)(param_2,"max_maker_pending_vol_on_depth",param_3),
            iVar7 == 0)) {
      *(undefined1 *)(param_1 + 1) = 0x29;
    }
    else if ((bVar4) &&
            (iVar7 = (*(code *)PTR_bcmp_001e0358)(param_2,"maker_ticks_inside",param_3), iVar7 == 0)
            ) {
      *(undefined1 *)(param_1 + 1) = 0x2a;
    }
    else if (bVar6) {
      iVar7 = (*(code *)PTR_bcmp_001e0358)(param_2,"maker_cancel_range_levels",param_3);
      if (iVar7 == 0) {
        *(undefined1 *)(param_1 + 1) = 0x2b;
      }
      else {
        *(undefined1 *)(param_1 + 1) = 0x2c;
      }
    }
    else {
LAB_0013fb80:
      *(undefined1 *)(param_1 + 1) = 0x2c;
    }
  }
LAB_0013fc67:
  *param_1 = 2;
  return param_1;
}


