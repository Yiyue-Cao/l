// ELF address 0x00000000000403c0; <strategy_sm3::_::<impl serde_core::de::Deserialize for strategy_sm3::SM3Params>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_str

/* _<strategy_sm3::_::<impl serde_core::de::Deserialize for
   strategy_sm3::SM3Params>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_str */

undefined8 * __rustcall
_<strategy_sm3::_::<impl_serde_core::de::Deserialize_for_strategy_sm3::SM3Params>::deserialize::__FieldVisitor_as_serde_core::de::Visitor>
::visit_str(undefined8 *param_1,undefined1 (*param_2) [16],long param_3)

{
  undefined4 uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
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
  
  bVar4 = false;
  bVar2 = false;
  switch(param_3) {
  case 9:
    if ((*param_2)[8] == 'a' && *(long *)*param_2 == 0x68706c615f317670) {
      *(undefined1 *)(param_1 + 1) = 1;
      goto LAB_00140a45;
    }
    break;
  case 10:
    if (*(short *)(*param_2 + 8) == 0x6168 && *(long *)*param_2 == 0x706c615f74736f63) {
      *(undefined1 *)(param_1 + 1) = 2;
      goto LAB_00140a45;
    }
    bVar2 = true;
    bVar4 = false;
    goto switchD_001403f5_caseD_c;
  case 0xb:
    if (*(long *)(*param_2 + 3) == 0x65646f6d5f6c616e && *(long *)*param_2 == 0x6d5f6c616e676973) {
      *(undefined1 *)(param_1 + 1) = 0;
      goto LAB_00140a45;
    }
    break;
  case 0xc:
  case 0xd:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x16:
    goto switchD_001403f5_caseD_c;
  case 0xe:
    if (*(long *)(*param_2 + 6) == 0x657461725f72656b && *(long *)*param_2 == 0x656b61745f78616d) {
      *(undefined1 *)(param_1 + 1) = 4;
      goto LAB_00140a45;
    }
    if (*(long *)(*param_2 + 6) == 0x7972657070696c73 && *(long *)*param_2 == 0x6c735f6564617274) {
      *(undefined1 *)(param_1 + 1) = 5;
      goto LAB_00140a45;
    }
    break;
  case 0x12:
    auVar11[0] = -((*param_2)[0] == s_max_single_add_v_00117b20[0]);
    auVar11[1] = -((*param_2)[1] == s_max_single_add_v_00117b20[1]);
    auVar11[2] = -((*param_2)[2] == s_max_single_add_v_00117b20[2]);
    auVar11[3] = -((*param_2)[3] == s_max_single_add_v_00117b20[3]);
    auVar11[4] = -((*param_2)[4] == s_max_single_add_v_00117b20[4]);
    auVar11[5] = -((*param_2)[5] == s_max_single_add_v_00117b20[5]);
    auVar11[6] = -((*param_2)[6] == s_max_single_add_v_00117b20[6]);
    auVar11[7] = -((*param_2)[7] == s_max_single_add_v_00117b20[7]);
    auVar11[8] = -((*param_2)[8] == s_max_single_add_v_00117b20[8]);
    auVar11[9] = -((*param_2)[9] == s_max_single_add_v_00117b20[9]);
    auVar11[10] = -((*param_2)[10] == s_max_single_add_v_00117b20[10]);
    auVar11[0xb] = -((*param_2)[0xb] == s_max_single_add_v_00117b20[0xb]);
    auVar11[0xc] = -((*param_2)[0xc] == s_max_single_add_v_00117b20[0xc]);
    auVar11[0xd] = -((*param_2)[0xd] == s_max_single_add_v_00117b20[0xd]);
    auVar11[0xe] = -((*param_2)[0xe] == s_max_single_add_v_00117b20[0xe]);
    auVar11[0xf] = -((*param_2)[0xf] == s_max_single_add_v_00117b20[0xf]);
    auVar27[0] = -((char)*(undefined2 *)param_2[1] == s_ol_00117840[0]);
    auVar27[1] = -((char)((ushort)*(undefined2 *)param_2[1] >> 8) == s_ol_00117840[1]);
    auVar27[2] = -(s_ol_00117840[2] == '\0');
    auVar27[3] = -(s_ol_00117840[3] == '\0');
    auVar27[4] = -(UNK_00117844 == '\0');
    auVar27[5] = -(UNK_00117845 == '\0');
    auVar27[6] = -(UNK_00117846 == '\0');
    auVar27[7] = -(UNK_00117847 == '\0');
    auVar27[8] = -(UNK_00117848 == '\0');
    auVar27[9] = -(UNK_00117849 == '\0');
    auVar27[10] = -(UNK_0011784a == '\0');
    auVar27[0xb] = -(UNK_0011784b == '\0');
    auVar27[0xc] = -(UNK_0011784c == '\0');
    auVar27[0xd] = -(UNK_0011784d == '\0');
    auVar27[0xe] = -(UNK_0011784e == '\0');
    auVar27[0xf] = -(UNK_0011784f == '\0');
    auVar27 = auVar27 & auVar11;
    if ((ushort)((ushort)(SUB161(auVar27 >> 7,0) & 1) | (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar27[0xf] >> 7) << 0xf) == 0xffff) {
      *(undefined1 *)(param_1 + 1) = 7;
      goto LAB_00140a45;
    }
    auVar12[0] = -((*param_2)[0] == DAT_00117ab0);
    auVar12[1] = -((*param_2)[1] == UNK_00117ab1);
    auVar12[2] = -((*param_2)[2] == UNK_00117ab2);
    auVar12[3] = -((*param_2)[3] == UNK_00117ab3);
    auVar12[4] = -((*param_2)[4] == UNK_00117ab4);
    auVar12[5] = -((*param_2)[5] == UNK_00117ab5);
    auVar12[6] = -((*param_2)[6] == UNK_00117ab6);
    auVar12[7] = -((*param_2)[7] == UNK_00117ab7);
    auVar12[8] = -((*param_2)[8] == UNK_00117ab8);
    auVar12[9] = -((*param_2)[9] == UNK_00117ab9);
    auVar12[10] = -((*param_2)[10] == UNK_00117aba);
    auVar12[0xb] = -((*param_2)[0xb] == UNK_00117abb);
    auVar12[0xc] = -((*param_2)[0xc] == UNK_00117abc);
    auVar12[0xd] = -((*param_2)[0xd] == UNK_00117abd);
    auVar12[0xe] = -((*param_2)[0xe] == UNK_00117abe);
    auVar12[0xf] = -((*param_2)[0xf] == UNK_00117abf);
    auVar28[0] = -((char)*(undefined2 *)param_2[1] == DAT_00117d90);
    auVar28[1] = -((char)((ushort)*(undefined2 *)param_2[1] >> 8) == UNK_00117d91);
    auVar28[2] = -(UNK_00117d92 == '\0');
    auVar28[3] = -(UNK_00117d93 == '\0');
    auVar28[4] = -(UNK_00117d94 == '\0');
    auVar28[5] = -(UNK_00117d95 == '\0');
    auVar28[6] = -(UNK_00117d96 == '\0');
    auVar28[7] = -(UNK_00117d97 == '\0');
    auVar28[8] = -(UNK_00117d98 == '\0');
    auVar28[9] = -(UNK_00117d99 == '\0');
    auVar28[10] = -(UNK_00117d9a == '\0');
    auVar28[0xb] = -(UNK_00117d9b == '\0');
    auVar28[0xc] = -(UNK_00117d9c == '\0');
    auVar28[0xd] = -(UNK_00117d9d == '\0');
    auVar28[0xe] = -(UNK_00117d9e == '\0');
    auVar28[0xf] = -(UNK_00117d9f == '\0');
    auVar28 = auVar28 & auVar12;
    if ((ushort)((ushort)(SUB161(auVar28 >> 7,0) & 1) | (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar28[0xf] >> 7) << 0xf) == 0xffff) {
      *(undefined1 *)(param_1 + 1) = 8;
      goto LAB_00140a45;
    }
    auVar13[0] = -((*param_2)[0] == DAT_00117ae0);
    auVar13[1] = -((*param_2)[1] == UNK_00117ae1);
    auVar13[2] = -((*param_2)[2] == UNK_00117ae2);
    auVar13[3] = -((*param_2)[3] == UNK_00117ae3);
    auVar13[4] = -((*param_2)[4] == UNK_00117ae4);
    auVar13[5] = -((*param_2)[5] == UNK_00117ae5);
    auVar13[6] = -((*param_2)[6] == UNK_00117ae6);
    auVar13[7] = -((*param_2)[7] == UNK_00117ae7);
    auVar13[8] = -((*param_2)[8] == UNK_00117ae8);
    auVar13[9] = -((*param_2)[9] == UNK_00117ae9);
    auVar13[10] = -((*param_2)[10] == UNK_00117aea);
    auVar13[0xb] = -((*param_2)[0xb] == UNK_00117aeb);
    auVar13[0xc] = -((*param_2)[0xc] == UNK_00117aec);
    auVar13[0xd] = -((*param_2)[0xd] == UNK_00117aed);
    auVar13[0xe] = -((*param_2)[0xe] == UNK_00117aee);
    auVar13[0xf] = -((*param_2)[0xf] == UNK_00117aef);
    auVar29[0] = -((char)*(undefined2 *)param_2[1] == s_ol_00117840[0]);
    auVar29[1] = -((char)((ushort)*(undefined2 *)param_2[1] >> 8) == s_ol_00117840[1]);
    auVar29[2] = -(s_ol_00117840[2] == '\0');
    auVar29[3] = -(s_ol_00117840[3] == '\0');
    auVar29[4] = -(UNK_00117844 == '\0');
    auVar29[5] = -(UNK_00117845 == '\0');
    auVar29[6] = -(UNK_00117846 == '\0');
    auVar29[7] = -(UNK_00117847 == '\0');
    auVar29[8] = -(UNK_00117848 == '\0');
    auVar29[9] = -(UNK_00117849 == '\0');
    auVar29[10] = -(UNK_0011784a == '\0');
    auVar29[0xb] = -(UNK_0011784b == '\0');
    auVar29[0xc] = -(UNK_0011784c == '\0');
    auVar29[0xd] = -(UNK_0011784d == '\0');
    auVar29[0xe] = -(UNK_0011784e == '\0');
    auVar29[0xf] = -(UNK_0011784f == '\0');
    auVar29 = auVar29 & auVar13;
    if ((ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) | (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar29[0xf] >> 7) << 0xf) == 0xffff) {
      *(undefined1 *)(param_1 + 1) = 9;
      goto LAB_00140a45;
    }
    auVar14[0] = -((*param_2)[0] == s_max_single_net_a_00117c10[0]);
    auVar14[1] = -((*param_2)[1] == s_max_single_net_a_00117c10[1]);
    auVar14[2] = -((*param_2)[2] == s_max_single_net_a_00117c10[2]);
    auVar14[3] = -((*param_2)[3] == s_max_single_net_a_00117c10[3]);
    auVar14[4] = -((*param_2)[4] == s_max_single_net_a_00117c10[4]);
    auVar14[5] = -((*param_2)[5] == s_max_single_net_a_00117c10[5]);
    auVar14[6] = -((*param_2)[6] == s_max_single_net_a_00117c10[6]);
    auVar14[7] = -((*param_2)[7] == s_max_single_net_a_00117c10[7]);
    auVar14[8] = -((*param_2)[8] == s_max_single_net_a_00117c10[8]);
    auVar14[9] = -((*param_2)[9] == s_max_single_net_a_00117c10[9]);
    auVar14[10] = -((*param_2)[10] == s_max_single_net_a_00117c10[10]);
    auVar14[0xb] = -((*param_2)[0xb] == s_max_single_net_a_00117c10[0xb]);
    auVar14[0xc] = -((*param_2)[0xc] == s_max_single_net_a_00117c10[0xc]);
    auVar14[0xd] = -((*param_2)[0xd] == s_max_single_net_a_00117c10[0xd]);
    auVar14[0xe] = -((*param_2)[0xe] == s_max_single_net_a_00117c10[0xe]);
    auVar14[0xf] = -((*param_2)[0xf] == s_max_single_net_a_00117c10[0xf]);
    auVar30[0] = -((char)*(undefined2 *)param_2[1] == DAT_00117d90);
    auVar30[1] = -((char)((ushort)*(undefined2 *)param_2[1] >> 8) == UNK_00117d91);
    auVar30[2] = -(UNK_00117d92 == '\0');
    auVar30[3] = -(UNK_00117d93 == '\0');
    auVar30[4] = -(UNK_00117d94 == '\0');
    auVar30[5] = -(UNK_00117d95 == '\0');
    auVar30[6] = -(UNK_00117d96 == '\0');
    auVar30[7] = -(UNK_00117d97 == '\0');
    auVar30[8] = -(UNK_00117d98 == '\0');
    auVar30[9] = -(UNK_00117d99 == '\0');
    auVar30[10] = -(UNK_00117d9a == '\0');
    auVar30[0xb] = -(UNK_00117d9b == '\0');
    auVar30[0xc] = -(UNK_00117d9c == '\0');
    auVar30[0xd] = -(UNK_00117d9d == '\0');
    auVar30[0xe] = -(UNK_00117d9e == '\0');
    auVar30[0xf] = -(UNK_00117d9f == '\0');
    auVar30 = auVar30 & auVar14;
    if ((ushort)((ushort)(SUB161(auVar30 >> 7,0) & 1) | (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar30[0xf] >> 7) << 0xf) == 0xffff) {
      *(undefined1 *)(param_1 + 1) = 10;
      goto LAB_00140a45;
    }
    break;
  case 0x13:
    auVar21[0] = -((*param_2)[3] == s_er_rate_baseline_001178f0[0]);
    auVar21[1] = -((*param_2)[4] == s_er_rate_baseline_001178f0[1]);
    auVar21[2] = -((*param_2)[5] == s_er_rate_baseline_001178f0[2]);
    auVar21[3] = -((*param_2)[6] == s_er_rate_baseline_001178f0[3]);
    auVar21[4] = -((*param_2)[7] == s_er_rate_baseline_001178f0[4]);
    auVar21[5] = -((*param_2)[8] == s_er_rate_baseline_001178f0[5]);
    auVar21[6] = -((*param_2)[9] == s_er_rate_baseline_001178f0[6]);
    auVar21[7] = -((*param_2)[10] == s_er_rate_baseline_001178f0[7]);
    auVar21[8] = -((*param_2)[0xb] == s_er_rate_baseline_001178f0[8]);
    auVar21[9] = -((*param_2)[0xc] == s_er_rate_baseline_001178f0[9]);
    auVar21[10] = -((*param_2)[0xd] == s_er_rate_baseline_001178f0[10]);
    auVar21[0xb] = -((*param_2)[0xe] == s_er_rate_baseline_001178f0[0xb]);
    auVar21[0xc] = -((*param_2)[0xf] == s_er_rate_baseline_001178f0[0xc]);
    auVar21[0xd] = -(param_2[1][0] == s_er_rate_baseline_001178f0[0xd]);
    auVar21[0xe] = -(param_2[1][1] == s_er_rate_baseline_001178f0[0xe]);
    auVar21[0xf] = -(param_2[1][2] == s_er_rate_baseline_001178f0[0xf]);
    auVar6[0] = -((*param_2)[0] == DAT_00117d30);
    auVar6[1] = -((*param_2)[1] == UNK_00117d31);
    auVar6[2] = -((*param_2)[2] == UNK_00117d32);
    auVar6[3] = -((*param_2)[3] == UNK_00117d33);
    auVar6[4] = -((*param_2)[4] == UNK_00117d34);
    auVar6[5] = -((*param_2)[5] == UNK_00117d35);
    auVar6[6] = -((*param_2)[6] == UNK_00117d36);
    auVar6[7] = -((*param_2)[7] == UNK_00117d37);
    auVar6[8] = -((*param_2)[8] == UNK_00117d38);
    auVar6[9] = -((*param_2)[9] == UNK_00117d39);
    auVar6[10] = -((*param_2)[10] == UNK_00117d3a);
    auVar6[0xb] = -((*param_2)[0xb] == UNK_00117d3b);
    auVar6[0xc] = -((*param_2)[0xc] == UNK_00117d3c);
    auVar6[0xd] = -((*param_2)[0xd] == UNK_00117d3d);
    auVar6[0xe] = -((*param_2)[0xe] == UNK_00117d3e);
    auVar6[0xf] = -((*param_2)[0xf] == UNK_00117d3f);
    auVar6 = auVar6 & auVar21;
    if ((ushort)((ushort)(SUB161(auVar6 >> 7,0) & 1) | (ushort)(SUB161(auVar6 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar6 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar6 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar6 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar6 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar6 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar6 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar6 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar6 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar6 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar6 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar6 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar6 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar6 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar6[0xf] >> 7) << 0xf) == 0xffff) {
      *(undefined1 *)(param_1 + 1) = 3;
      goto LAB_00140a45;
    }
    iVar5 = (*(code *)PTR_bcmp_001dc150)(param_2,&DAT_00117f38,param_3);
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 1) = 0xd;
      goto LAB_00140a45;
    }
    break;
  case 0x14:
    uVar1 = *(undefined4 *)param_2[1];
    auVar22[0] = -((char)uVar1 == DAT_001177f0);
    auVar22[1] = -((char)((uint)uVar1 >> 8) == UNK_001177f1);
    auVar22[2] = -((char)((uint)uVar1 >> 0x10) == UNK_001177f2);
    auVar22[3] = -((char)((uint)uVar1 >> 0x18) == UNK_001177f3);
    auVar22[4] = -(UNK_001177f4 == '\0');
    auVar22[5] = -(UNK_001177f5 == '\0');
    auVar22[6] = -(UNK_001177f6 == '\0');
    auVar22[7] = -(UNK_001177f7 == '\0');
    auVar22[8] = -(UNK_001177f8 == '\0');
    auVar22[9] = -(UNK_001177f9 == '\0');
    auVar22[10] = -(UNK_001177fa == '\0');
    auVar22[0xb] = -(UNK_001177fb == '\0');
    auVar22[0xc] = -(UNK_001177fc == '\0');
    auVar22[0xd] = -(UNK_001177fd == '\0');
    auVar22[0xe] = -(UNK_001177fe == '\0');
    auVar22[0xf] = -(UNK_001177ff == '\0');
    auVar7[0] = -((*param_2)[0] == s_max_single_close_00117990[0]);
    auVar7[1] = -((*param_2)[1] == s_max_single_close_00117990[1]);
    auVar7[2] = -((*param_2)[2] == s_max_single_close_00117990[2]);
    auVar7[3] = -((*param_2)[3] == s_max_single_close_00117990[3]);
    auVar7[4] = -((*param_2)[4] == s_max_single_close_00117990[4]);
    auVar7[5] = -((*param_2)[5] == s_max_single_close_00117990[5]);
    auVar7[6] = -((*param_2)[6] == s_max_single_close_00117990[6]);
    auVar7[7] = -((*param_2)[7] == s_max_single_close_00117990[7]);
    auVar7[8] = -((*param_2)[8] == s_max_single_close_00117990[8]);
    auVar7[9] = -((*param_2)[9] == s_max_single_close_00117990[9]);
    auVar7[10] = -((*param_2)[10] == s_max_single_close_00117990[10]);
    auVar7[0xb] = -((*param_2)[0xb] == s_max_single_close_00117990[0xb]);
    auVar7[0xc] = -((*param_2)[0xc] == s_max_single_close_00117990[0xc]);
    auVar7[0xd] = -((*param_2)[0xd] == s_max_single_close_00117990[0xd]);
    auVar7[0xe] = -((*param_2)[0xe] == s_max_single_close_00117990[0xe]);
    auVar7[0xf] = -((*param_2)[0xf] == s_max_single_close_00117990[0xf]);
    auVar7 = auVar7 & auVar22;
    if ((ushort)((ushort)(SUB161(auVar7 >> 7,0) & 1) | (ushort)(SUB161(auVar7 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar7 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar7 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar7 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar7 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar7 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar7 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar7 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar7 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar7 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar7 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar7 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar7 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar7 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar7[0xf] >> 7) << 0xf) == 0xffff) {
      *(undefined1 *)(param_1 + 1) = 0xb;
      goto LAB_00140a45;
    }
    auVar15 = *param_2;
    uVar1 = *(undefined4 *)param_2[1];
    auVar37[0] = -((char)uVar1 == DAT_00117a40);
    auVar37[1] = -((char)((uint)uVar1 >> 8) == UNK_00117a41);
    auVar37[2] = -((char)((uint)uVar1 >> 0x10) == UNK_00117a42);
    auVar37[3] = -((char)((uint)uVar1 >> 0x18) == UNK_00117a43);
    auVar37[4] = -(UNK_00117a44 == '\0');
    auVar37[5] = -(UNK_00117a45 == '\0');
    auVar37[6] = -(UNK_00117a46 == '\0');
    auVar37[7] = -(UNK_00117a47 == '\0');
    auVar37[8] = -(UNK_00117a48 == '\0');
    auVar37[9] = -(UNK_00117a49 == '\0');
    auVar37[10] = -(UNK_00117a4a == '\0');
    auVar37[0xb] = -(UNK_00117a4b == '\0');
    auVar37[0xc] = -(UNK_00117a4c == '\0');
    auVar37[0xd] = -(UNK_00117a4d == '\0');
    auVar37[0xe] = -(UNK_00117a4e == '\0');
    auVar37[0xf] = -(UNK_00117a4f == '\0');
    auVar23[0] = -(auVar15[0] == 'm');
    auVar23[1] = -(auVar15[1] == 'a');
    auVar23[2] = -(auVar15[2] == 'x');
    auVar23[3] = -(auVar15[3] == '_');
    auVar23[4] = -(auVar15[4] == 's');
    auVar23[5] = -(auVar15[5] == 'i');
    auVar23[6] = -(auVar15[6] == 'n');
    auVar23[7] = -(auVar15[7] == 'g');
    auVar23[8] = -(auVar15[8] == 'l');
    auVar23[9] = -(auVar15[9] == 'e');
    auVar23[10] = -(auVar15[10] == '_');
    auVar23[0xb] = -(auVar15[0xb] == 'c');
    auVar23[0xc] = -(auVar15[0xc] == 'l');
    auVar23[0xd] = -(auVar15[0xd] == 'o');
    auVar23[0xe] = -(auVar15[0xe] == 's');
    auVar23[0xf] = -(auVar15[0xf] == 'e');
    auVar37 = auVar37 & auVar23;
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
      *(undefined1 *)(param_1 + 1) = 0xc;
      goto LAB_00140a45;
    }
    iVar5 = (*(code *)PTR_bcmp_001dc150)(param_2,&DAT_00117f4b,param_3);
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 1) = 0xe;
      goto LAB_00140a45;
    }
    iVar5 = (*(code *)PTR_bcmp_001dc150)(param_2,&DAT_00117f5f,param_3);
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 1) = 0xf;
      goto LAB_00140a45;
    }
    bVar4 = true;
    goto switchD_001403f5_default;
  case 0x15:
    auVar24[0] = -((*param_2)[5] == DAT_00117a50);
    auVar24[1] = -((*param_2)[6] == UNK_00117a51);
    auVar24[2] = -((*param_2)[7] == UNK_00117a52);
    auVar24[3] = -((*param_2)[8] == UNK_00117a53);
    auVar24[4] = -((*param_2)[9] == UNK_00117a54);
    auVar24[5] = -((*param_2)[10] == UNK_00117a55);
    auVar24[6] = -((*param_2)[0xb] == UNK_00117a56);
    auVar24[7] = -((*param_2)[0xc] == UNK_00117a57);
    auVar24[8] = -((*param_2)[0xd] == UNK_00117a58);
    auVar24[9] = -((*param_2)[0xe] == UNK_00117a59);
    auVar24[10] = -((*param_2)[0xf] == UNK_00117a5a);
    auVar24[0xb] = -(param_2[1][0] == UNK_00117a5b);
    auVar24[0xc] = -(param_2[1][1] == UNK_00117a5c);
    auVar24[0xd] = -(param_2[1][2] == UNK_00117a5d);
    auVar24[0xe] = -(param_2[1][3] == UNK_00117a5e);
    auVar24[0xf] = -(param_2[1][4] == UNK_00117a5f);
    auVar8[0] = -((*param_2)[0] == DAT_00117a60);
    auVar8[1] = -((*param_2)[1] == UNK_00117a61);
    auVar8[2] = -((*param_2)[2] == UNK_00117a62);
    auVar8[3] = -((*param_2)[3] == UNK_00117a63);
    auVar8[4] = -((*param_2)[4] == UNK_00117a64);
    auVar8[5] = -((*param_2)[5] == UNK_00117a65);
    auVar8[6] = -((*param_2)[6] == UNK_00117a66);
    auVar8[7] = -((*param_2)[7] == UNK_00117a67);
    auVar8[8] = -((*param_2)[8] == UNK_00117a68);
    auVar8[9] = -((*param_2)[9] == UNK_00117a69);
    auVar8[10] = -((*param_2)[10] == UNK_00117a6a);
    auVar8[0xb] = -((*param_2)[0xb] == UNK_00117a6b);
    auVar8[0xc] = -((*param_2)[0xc] == UNK_00117a6c);
    auVar8[0xd] = -((*param_2)[0xd] == UNK_00117a6d);
    auVar8[0xe] = -((*param_2)[0xe] == UNK_00117a6e);
    auVar8[0xf] = -((*param_2)[0xf] == UNK_00117a6f);
    auVar8 = auVar8 & auVar24;
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
      *(undefined1 *)(param_1 + 1) = 0x10;
      goto LAB_00140a45;
    }
    auVar25[0] = -((*param_2)[5] == DAT_001178a0);
    auVar25[1] = -((*param_2)[6] == UNK_001178a1);
    auVar25[2] = -((*param_2)[7] == UNK_001178a2);
    auVar25[3] = -((*param_2)[8] == UNK_001178a3);
    auVar25[4] = -((*param_2)[9] == UNK_001178a4);
    auVar25[5] = -((*param_2)[10] == UNK_001178a5);
    auVar25[6] = -((*param_2)[0xb] == UNK_001178a6);
    auVar25[7] = -((*param_2)[0xc] == UNK_001178a7);
    auVar25[8] = -((*param_2)[0xd] == UNK_001178a8);
    auVar25[9] = -((*param_2)[0xe] == UNK_001178a9);
    auVar25[10] = -((*param_2)[0xf] == UNK_001178aa);
    auVar25[0xb] = -(param_2[1][0] == UNK_001178ab);
    auVar25[0xc] = -(param_2[1][1] == UNK_001178ac);
    auVar25[0xd] = -(param_2[1][2] == UNK_001178ad);
    auVar25[0xe] = -(param_2[1][3] == UNK_001178ae);
    auVar25[0xf] = -(param_2[1][4] == UNK_001178af);
    auVar9[0] = -((*param_2)[0] == DAT_00117ce0);
    auVar9[1] = -((*param_2)[1] == UNK_00117ce1);
    auVar9[2] = -((*param_2)[2] == UNK_00117ce2);
    auVar9[3] = -((*param_2)[3] == UNK_00117ce3);
    auVar9[4] = -((*param_2)[4] == UNK_00117ce4);
    auVar9[5] = -((*param_2)[5] == UNK_00117ce5);
    auVar9[6] = -((*param_2)[6] == UNK_00117ce6);
    auVar9[7] = -((*param_2)[7] == UNK_00117ce7);
    auVar9[8] = -((*param_2)[8] == UNK_00117ce8);
    auVar9[9] = -((*param_2)[9] == UNK_00117ce9);
    auVar9[10] = -((*param_2)[10] == UNK_00117cea);
    auVar9[0xb] = -((*param_2)[0xb] == UNK_00117ceb);
    auVar9[0xc] = -((*param_2)[0xc] == UNK_00117cec);
    auVar9[0xd] = -((*param_2)[0xd] == UNK_00117ced);
    auVar9[0xe] = -((*param_2)[0xe] == UNK_00117cee);
    auVar9[0xf] = -((*param_2)[0xf] == UNK_00117cef);
    auVar9 = auVar9 & auVar25;
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
      *(undefined1 *)(param_1 + 1) = 0x13;
      goto LAB_00140a45;
    }
    auVar26[0] = -((*param_2)[5] == DAT_00117d70);
    auVar26[1] = -((*param_2)[6] == UNK_00117d71);
    auVar26[2] = -((*param_2)[7] == UNK_00117d72);
    auVar26[3] = -((*param_2)[8] == UNK_00117d73);
    auVar26[4] = -((*param_2)[9] == UNK_00117d74);
    auVar26[5] = -((*param_2)[10] == UNK_00117d75);
    auVar26[6] = -((*param_2)[0xb] == UNK_00117d76);
    auVar26[7] = -((*param_2)[0xc] == UNK_00117d77);
    auVar26[8] = -((*param_2)[0xd] == UNK_00117d78);
    auVar26[9] = -((*param_2)[0xe] == UNK_00117d79);
    auVar26[10] = -((*param_2)[0xf] == UNK_00117d7a);
    auVar26[0xb] = -(param_2[1][0] == UNK_00117d7b);
    auVar26[0xc] = -(param_2[1][1] == UNK_00117d7c);
    auVar26[0xd] = -(param_2[1][2] == UNK_00117d7d);
    auVar26[0xe] = -(param_2[1][3] == UNK_00117d7e);
    auVar26[0xf] = -(param_2[1][4] == UNK_00117d7f);
    auVar10[0] = -((*param_2)[0] == DAT_00117d20);
    auVar10[1] = -((*param_2)[1] == UNK_00117d21);
    auVar10[2] = -((*param_2)[2] == UNK_00117d22);
    auVar10[3] = -((*param_2)[3] == UNK_00117d23);
    auVar10[4] = -((*param_2)[4] == UNK_00117d24);
    auVar10[5] = -((*param_2)[5] == UNK_00117d25);
    auVar10[6] = -((*param_2)[6] == UNK_00117d26);
    auVar10[7] = -((*param_2)[7] == UNK_00117d27);
    auVar10[8] = -((*param_2)[8] == UNK_00117d28);
    auVar10[9] = -((*param_2)[9] == UNK_00117d29);
    auVar10[10] = -((*param_2)[10] == UNK_00117d2a);
    auVar10[0xb] = -((*param_2)[0xb] == UNK_00117d2b);
    auVar10[0xc] = -((*param_2)[0xc] == UNK_00117d2c);
    auVar10[0xd] = -((*param_2)[0xd] == UNK_00117d2d);
    auVar10[0xe] = -((*param_2)[0xe] == UNK_00117d2e);
    auVar10[0xf] = -((*param_2)[0xf] == UNK_00117d2f);
    auVar10 = auVar10 & auVar26;
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
      *(undefined1 *)(param_1 + 1) = 0x1a;
      goto LAB_00140a45;
    }
    bVar3 = true;
    bVar4 = false;
    bVar2 = false;
    goto switchD_00140785_caseD_17;
  case 0x17:
    auVar31[0] = -((*param_2)[7] == DAT_00117c40);
    auVar31[1] = -((*param_2)[8] == UNK_00117c41);
    auVar31[2] = -((*param_2)[9] == UNK_00117c42);
    auVar31[3] = -((*param_2)[10] == UNK_00117c43);
    auVar31[4] = -((*param_2)[0xb] == UNK_00117c44);
    auVar31[5] = -((*param_2)[0xc] == UNK_00117c45);
    auVar31[6] = -((*param_2)[0xd] == UNK_00117c46);
    auVar31[7] = -((*param_2)[0xe] == UNK_00117c47);
    auVar31[8] = -((*param_2)[0xf] == UNK_00117c48);
    auVar31[9] = -(param_2[1][0] == UNK_00117c49);
    auVar31[10] = -(param_2[1][1] == UNK_00117c4a);
    auVar31[0xb] = -(param_2[1][2] == UNK_00117c4b);
    auVar31[0xc] = -(param_2[1][3] == UNK_00117c4c);
    auVar31[0xd] = -(param_2[1][4] == UNK_00117c4d);
    auVar31[0xe] = -(param_2[1][5] == UNK_00117c4e);
    auVar31[0xf] = -(param_2[1][6] == UNK_00117c4f);
    auVar15[0] = -((*param_2)[0] == s_close_position_b_001178e0[0]);
    auVar15[1] = -((*param_2)[1] == s_close_position_b_001178e0[1]);
    auVar15[2] = -((*param_2)[2] == s_close_position_b_001178e0[2]);
    auVar15[3] = -((*param_2)[3] == s_close_position_b_001178e0[3]);
    auVar15[4] = -((*param_2)[4] == s_close_position_b_001178e0[4]);
    auVar15[5] = -((*param_2)[5] == s_close_position_b_001178e0[5]);
    auVar15[6] = -((*param_2)[6] == s_close_position_b_001178e0[6]);
    auVar15[7] = -((*param_2)[7] == s_close_position_b_001178e0[7]);
    auVar15[8] = -((*param_2)[8] == s_close_position_b_001178e0[8]);
    auVar15[9] = -((*param_2)[9] == s_close_position_b_001178e0[9]);
    auVar15[10] = -((*param_2)[10] == s_close_position_b_001178e0[10]);
    auVar15[0xb] = -((*param_2)[0xb] == s_close_position_b_001178e0[0xb]);
    auVar15[0xc] = -((*param_2)[0xc] == s_close_position_b_001178e0[0xc]);
    auVar15[0xd] = -((*param_2)[0xd] == s_close_position_b_001178e0[0xd]);
    auVar15[0xe] = -((*param_2)[0xe] == s_close_position_b_001178e0[0xe]);
    auVar15[0xf] = -((*param_2)[0xf] == s_close_position_b_001178e0[0xf]);
    auVar15 = auVar15 & auVar31;
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
                 (ushort)(SUB161(auVar15 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar15[0xf] >> 7) << 0xf) == 0xffff) {
      *(undefined1 *)(param_1 + 1) = 6;
      goto LAB_00140a45;
    }
    break;
  default:
    goto switchD_001403f5_default;
  }
  bVar4 = false;
switchD_001403f5_default:
  bVar2 = false;
switchD_001403f5_caseD_c:
  bVar3 = false;
  switch(param_3) {
  case 0x16:
    goto switchD_00140785_caseD_16;
  default:
    goto switchD_00140785_caseD_17;
  case 0x19:
    auVar32[0] = -((*param_2)[9] == s__pending_time_ms_00117b30[0]);
    auVar32[1] = -((*param_2)[10] == s__pending_time_ms_00117b30[1]);
    auVar32[2] = -((*param_2)[0xb] == s__pending_time_ms_00117b30[2]);
    auVar32[3] = -((*param_2)[0xc] == s__pending_time_ms_00117b30[3]);
    auVar32[4] = -((*param_2)[0xd] == s__pending_time_ms_00117b30[4]);
    auVar32[5] = -((*param_2)[0xe] == s__pending_time_ms_00117b30[5]);
    auVar32[6] = -((*param_2)[0xf] == s__pending_time_ms_00117b30[6]);
    auVar32[7] = -(param_2[1][0] == s__pending_time_ms_00117b30[7]);
    auVar32[8] = -(param_2[1][1] == s__pending_time_ms_00117b30[8]);
    auVar32[9] = -(param_2[1][2] == s__pending_time_ms_00117b30[9]);
    auVar32[10] = -(param_2[1][3] == s__pending_time_ms_00117b30[10]);
    auVar32[0xb] = -(param_2[1][4] == s__pending_time_ms_00117b30[0xb]);
    auVar32[0xc] = -(param_2[1][5] == s__pending_time_ms_00117b30[0xc]);
    auVar32[0xd] = -(param_2[1][6] == s__pending_time_ms_00117b30[0xd]);
    auVar32[0xe] = -(param_2[1][7] == s__pending_time_ms_00117b30[0xe]);
    auVar32[0xf] = -(param_2[1][8] == s__pending_time_ms_00117b30[0xf]);
    auVar16[0] = -((*param_2)[0] == DAT_00117850);
    auVar16[1] = -((*param_2)[1] == UNK_00117851);
    auVar16[2] = -((*param_2)[2] == UNK_00117852);
    auVar16[3] = -((*param_2)[3] == UNK_00117853);
    auVar16[4] = -((*param_2)[4] == UNK_00117854);
    auVar16[5] = -((*param_2)[5] == UNK_00117855);
    auVar16[6] = -((*param_2)[6] == UNK_00117856);
    auVar16[7] = -((*param_2)[7] == UNK_00117857);
    auVar16[8] = -((*param_2)[8] == UNK_00117858);
    auVar16[9] = -((*param_2)[9] == UNK_00117859);
    auVar16[10] = -((*param_2)[10] == UNK_0011785a);
    auVar16[0xb] = -((*param_2)[0xb] == UNK_0011785b);
    auVar16[0xc] = -((*param_2)[0xc] == UNK_0011785c);
    auVar16[0xd] = -((*param_2)[0xd] == UNK_0011785d);
    auVar16[0xe] = -((*param_2)[0xe] == UNK_0011785e);
    auVar16[0xf] = -((*param_2)[0xf] == UNK_0011785f);
    auVar16 = auVar16 & auVar32;
    if ((ushort)((ushort)(SUB161(auVar16 >> 7,0) & 1) | (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar16 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar16 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar16 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar16 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar16 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar16 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar16 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar16 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar16 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar16 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar16 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar16 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar16 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar16[0xf] >> 7) << 0xf) == 0xffff) {
      *(undefined1 *)(param_1 + 1) = 0x17;
      goto LAB_00140a45;
    }
    break;
  case 0x1b:
    auVar33[0] = -((*param_2)[0xb] == s_ax_position_ts_s_001177c0[0]);
    auVar33[1] = -((*param_2)[0xc] == s_ax_position_ts_s_001177c0[1]);
    auVar33[2] = -((*param_2)[0xd] == s_ax_position_ts_s_001177c0[2]);
    auVar33[3] = -((*param_2)[0xe] == s_ax_position_ts_s_001177c0[3]);
    auVar33[4] = -((*param_2)[0xf] == s_ax_position_ts_s_001177c0[4]);
    auVar33[5] = -(param_2[1][0] == s_ax_position_ts_s_001177c0[5]);
    auVar33[6] = -(param_2[1][1] == s_ax_position_ts_s_001177c0[6]);
    auVar33[7] = -(param_2[1][2] == s_ax_position_ts_s_001177c0[7]);
    auVar33[8] = -(param_2[1][3] == s_ax_position_ts_s_001177c0[8]);
    auVar33[9] = -(param_2[1][4] == s_ax_position_ts_s_001177c0[9]);
    auVar33[10] = -(param_2[1][5] == s_ax_position_ts_s_001177c0[10]);
    auVar33[0xb] = -(param_2[1][6] == s_ax_position_ts_s_001177c0[0xb]);
    auVar33[0xc] = -(param_2[1][7] == s_ax_position_ts_s_001177c0[0xc]);
    auVar33[0xd] = -(param_2[1][8] == s_ax_position_ts_s_001177c0[0xd]);
    auVar33[0xe] = -(param_2[1][9] == s_ax_position_ts_s_001177c0[0xe]);
    auVar33[0xf] = -(param_2[1][10] == s_ax_position_ts_s_001177c0[0xf]);
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
    auVar17 = auVar17 & auVar33;
    if ((ushort)((ushort)(SUB161(auVar17 >> 7,0) & 1) | (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar17 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar17 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar17 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar17 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar17 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar17 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar17[0xf] >> 7) << 0xf) == 0xffff) {
      *(undefined1 *)(param_1 + 1) = 0x12;
      goto LAB_00140a45;
    }
    goto LAB_001408ac;
  case 0x1d:
    auVar34[0] = -((*param_2)[0xd] == s_ax_position_ts_s_001177c0[0]);
    auVar34[1] = -((*param_2)[0xe] == s_ax_position_ts_s_001177c0[1]);
    auVar34[2] = -((*param_2)[0xf] == s_ax_position_ts_s_001177c0[2]);
    auVar34[3] = -(param_2[1][0] == s_ax_position_ts_s_001177c0[3]);
    auVar34[4] = -(param_2[1][1] == s_ax_position_ts_s_001177c0[4]);
    auVar34[5] = -(param_2[1][2] == s_ax_position_ts_s_001177c0[5]);
    auVar34[6] = -(param_2[1][3] == s_ax_position_ts_s_001177c0[6]);
    auVar34[7] = -(param_2[1][4] == s_ax_position_ts_s_001177c0[7]);
    auVar34[8] = -(param_2[1][5] == s_ax_position_ts_s_001177c0[8]);
    auVar34[9] = -(param_2[1][6] == s_ax_position_ts_s_001177c0[9]);
    auVar34[10] = -(param_2[1][7] == s_ax_position_ts_s_001177c0[10]);
    auVar34[0xb] = -(param_2[1][8] == s_ax_position_ts_s_001177c0[0xb]);
    auVar34[0xc] = -(param_2[1][9] == s_ax_position_ts_s_001177c0[0xc]);
    auVar34[0xd] = -(param_2[1][10] == s_ax_position_ts_s_001177c0[0xd]);
    auVar34[0xe] = -(param_2[1][0xb] == s_ax_position_ts_s_001177c0[0xe]);
    auVar34[0xf] = -(param_2[1][0xc] == s_ax_position_ts_s_001177c0[0xf]);
    auVar18[0] = -((*param_2)[0] == DAT_00117da0);
    auVar18[1] = -((*param_2)[1] == UNK_00117da1);
    auVar18[2] = -((*param_2)[2] == UNK_00117da2);
    auVar18[3] = -((*param_2)[3] == UNK_00117da3);
    auVar18[4] = -((*param_2)[4] == UNK_00117da4);
    auVar18[5] = -((*param_2)[5] == UNK_00117da5);
    auVar18[6] = -((*param_2)[6] == UNK_00117da6);
    auVar18[7] = -((*param_2)[7] == UNK_00117da7);
    auVar18[8] = -((*param_2)[8] == UNK_00117da8);
    auVar18[9] = -((*param_2)[9] == UNK_00117da9);
    auVar18[10] = -((*param_2)[10] == UNK_00117daa);
    auVar18[0xb] = -((*param_2)[0xb] == UNK_00117dab);
    auVar18[0xc] = -((*param_2)[0xc] == UNK_00117dac);
    auVar18[0xd] = -((*param_2)[0xd] == UNK_00117dad);
    auVar18[0xe] = -((*param_2)[0xe] == UNK_00117dae);
    auVar18[0xf] = -((*param_2)[0xf] == UNK_00117daf);
    auVar18 = auVar18 & auVar34;
    if ((ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) | (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar18[0xf] >> 7) << 0xf) == 0xffff) {
      *(undefined1 *)(param_1 + 1) = 0x15;
      goto LAB_00140a45;
    }
    goto LAB_001408ac;
  case 0x1e:
    iVar5 = (*(code *)PTR_bcmp_001dc150)(param_2,&DAT_00118055,param_3);
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x18;
      goto LAB_00140a45;
    }
    break;
  case 0x21:
    iVar5 = (*(code *)PTR_bcmp_001dc150)(param_2,&DAT_00117f88,0x21);
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x11;
      goto LAB_00140a45;
    }
LAB_001408ac:
    if (param_3 == 0x16) {
switchD_00140785_caseD_16:
      auVar35[0] = -((*param_2)[6] == s_signal_threshold_00117900[0]);
      auVar35[1] = -((*param_2)[7] == s_signal_threshold_00117900[1]);
      auVar35[2] = -((*param_2)[8] == s_signal_threshold_00117900[2]);
      auVar35[3] = -((*param_2)[9] == s_signal_threshold_00117900[3]);
      auVar35[4] = -((*param_2)[10] == s_signal_threshold_00117900[4]);
      auVar35[5] = -((*param_2)[0xb] == s_signal_threshold_00117900[5]);
      auVar35[6] = -((*param_2)[0xc] == s_signal_threshold_00117900[6]);
      auVar35[7] = -((*param_2)[0xd] == s_signal_threshold_00117900[7]);
      auVar35[8] = -((*param_2)[0xe] == s_signal_threshold_00117900[8]);
      auVar35[9] = -((*param_2)[0xf] == s_signal_threshold_00117900[9]);
      auVar35[10] = -(param_2[1][0] == s_signal_threshold_00117900[10]);
      auVar35[0xb] = -(param_2[1][1] == s_signal_threshold_00117900[0xb]);
      auVar35[0xc] = -(param_2[1][2] == s_signal_threshold_00117900[0xc]);
      auVar35[0xd] = -(param_2[1][3] == s_signal_threshold_00117900[0xd]);
      auVar35[0xe] = -(param_2[1][4] == s_signal_threshold_00117900[0xe]);
      auVar35[0xf] = -(param_2[1][5] == s_signal_threshold_00117900[0xf]);
      auVar19[0] = -((*param_2)[0] == s_maker_signal_thr_00117910[0]);
      auVar19[1] = -((*param_2)[1] == s_maker_signal_thr_00117910[1]);
      auVar19[2] = -((*param_2)[2] == s_maker_signal_thr_00117910[2]);
      auVar19[3] = -((*param_2)[3] == s_maker_signal_thr_00117910[3]);
      auVar19[4] = -((*param_2)[4] == s_maker_signal_thr_00117910[4]);
      auVar19[5] = -((*param_2)[5] == s_maker_signal_thr_00117910[5]);
      auVar19[6] = -((*param_2)[6] == s_maker_signal_thr_00117910[6]);
      auVar19[7] = -((*param_2)[7] == s_maker_signal_thr_00117910[7]);
      auVar19[8] = -((*param_2)[8] == s_maker_signal_thr_00117910[8]);
      auVar19[9] = -((*param_2)[9] == s_maker_signal_thr_00117910[9]);
      auVar19[10] = -((*param_2)[10] == s_maker_signal_thr_00117910[10]);
      auVar19[0xb] = -((*param_2)[0xb] == s_maker_signal_thr_00117910[0xb]);
      auVar19[0xc] = -((*param_2)[0xc] == s_maker_signal_thr_00117910[0xc]);
      auVar19[0xd] = -((*param_2)[0xd] == s_maker_signal_thr_00117910[0xd]);
      auVar19[0xe] = -((*param_2)[0xe] == s_maker_signal_thr_00117910[0xe]);
      auVar19[0xf] = -((*param_2)[0xf] == s_maker_signal_thr_00117910[0xf]);
      auVar19 = auVar19 & auVar35;
      if ((ushort)((ushort)(SUB161(auVar19 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar19[0xf] >> 7) << 0xf) == 0xffff) {
        *(undefined1 *)(param_1 + 1) = 0x1b;
        goto LAB_00140a45;
      }
    }
    break;
  case 0x22:
    iVar5 = (*(code *)PTR_bcmp_001dc150)(param_2,&DAT_00118073,param_3);
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x19;
      goto LAB_00140a45;
    }
    break;
  case 0x23:
    iVar5 = (*(code *)PTR_bcmp_001dc150)(param_2,&DAT_00117fd9,0x23);
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x14;
      goto LAB_00140a45;
    }
    iVar5 = (*(code *)PTR_bcmp_001dc150)(param_2,&DAT_00118019,0x23);
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x16;
      goto LAB_00140a45;
    }
  }
  bVar3 = false;
switchD_00140785_caseD_17:
  if (bVar2) {
    iVar5 = (*(code *)PTR_bcmp_001dc150)(param_2,&DAT_001180c0,param_3);
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x1c;
      goto LAB_00140a45;
    }
    iVar5 = (*(code *)PTR_bcmp_001dc150)(param_2,&DAT_001180ca,param_3);
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x1d;
      goto LAB_00140a45;
    }
  }
  if (bVar3) {
    auVar36[0] = -((*param_2)[5] == DAT_00117b80);
    auVar36[1] = -((*param_2)[6] == UNK_00117b81);
    auVar36[2] = -((*param_2)[7] == UNK_00117b82);
    auVar36[3] = -((*param_2)[8] == UNK_00117b83);
    auVar36[4] = -((*param_2)[9] == UNK_00117b84);
    auVar36[5] = -((*param_2)[10] == UNK_00117b85);
    auVar36[6] = -((*param_2)[0xb] == UNK_00117b86);
    auVar36[7] = -((*param_2)[0xc] == UNK_00117b87);
    auVar36[8] = -((*param_2)[0xd] == UNK_00117b88);
    auVar36[9] = -((*param_2)[0xe] == UNK_00117b89);
    auVar36[10] = -((*param_2)[0xf] == UNK_00117b8a);
    auVar36[0xb] = -(param_2[1][0] == UNK_00117b8b);
    auVar36[0xc] = -(param_2[1][1] == UNK_00117b8c);
    auVar36[0xd] = -(param_2[1][2] == UNK_00117b8d);
    auVar36[0xe] = -(param_2[1][3] == UNK_00117b8e);
    auVar36[0xf] = -(param_2[1][4] == UNK_00117b8f);
    auVar20[0] = -((*param_2)[0] == DAT_001178b0);
    auVar20[1] = -((*param_2)[1] == UNK_001178b1);
    auVar20[2] = -((*param_2)[2] == UNK_001178b2);
    auVar20[3] = -((*param_2)[3] == UNK_001178b3);
    auVar20[4] = -((*param_2)[4] == UNK_001178b4);
    auVar20[5] = -((*param_2)[5] == UNK_001178b5);
    auVar20[6] = -((*param_2)[6] == UNK_001178b6);
    auVar20[7] = -((*param_2)[7] == UNK_001178b7);
    auVar20[8] = -((*param_2)[8] == UNK_001178b8);
    auVar20[9] = -((*param_2)[9] == UNK_001178b9);
    auVar20[10] = -((*param_2)[10] == UNK_001178ba);
    auVar20[0xb] = -((*param_2)[0xb] == UNK_001178bb);
    auVar20[0xc] = -((*param_2)[0xc] == UNK_001178bc);
    auVar20[0xd] = -((*param_2)[0xd] == UNK_001178bd);
    auVar20[0xe] = -((*param_2)[0xe] == UNK_001178be);
    auVar20[0xf] = -((*param_2)[0xf] == UNK_001178bf);
    auVar20 = auVar20 & auVar36;
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
      *(undefined1 *)(param_1 + 1) = 0x1e;
      goto LAB_00140a45;
    }
  }
  else if ((param_3 == 0xc) &&
          (*(int *)(*param_2 + 8) == 0x7061635f && *(long *)*param_2 == 0x6c6f765f6b6f6f62)) {
    *(undefined1 *)(param_1 + 1) = 0x1f;
    goto LAB_00140a45;
  }
  if (bVar4) {
    iVar5 = (*(code *)PTR_bcmp_001dc150)(param_2,&DAT_001180f5,param_3);
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x20;
    }
    else {
      *(undefined1 *)(param_1 + 1) = 0x21;
    }
  }
  else {
    *(undefined1 *)(param_1 + 1) = 0x21;
  }
LAB_00140a45:
  *param_1 = 2;
  return param_1;
}


