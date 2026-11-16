// ELF address 0x000000000003da10; <strategy_comm3_2::_::<impl serde_core::de::Deserialize for strategy_comm3_2::Comm3Params>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_str

/* _<strategy_comm3_2::_::<impl serde_core::de::Deserialize for
   strategy_comm3_2::Comm3Params>::deserialize::__FieldVisitor as
   serde_core::de::Visitor>::visit_str */

undefined8 * __rustcall
_<strategy_comm3_2::_::<impl_serde_core::de::Deserialize_for_strategy_comm3_2::Comm3Params>::deserialize::__FieldVisitor_as_serde_core::de::Visitor>
::visit_str(undefined8 *param_1,undefined1 (*param_2) [16],long param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
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
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  
  bVar3 = false;
  bVar4 = false;
  switch(param_3) {
  case 8:
    if (*(long *)*param_2 == 0x656c69746e617571) {
      *(undefined1 *)(param_1 + 1) = 5;
      goto LAB_0013e1c3;
    }
    break;
  case 9:
    if ((*param_2)[8] == 'a' && *(long *)*param_2 == 0x68706c615f317670) {
      *(undefined1 *)(param_1 + 1) = 1;
      goto LAB_0013e1c3;
    }
    if ((*param_2)[8] == 'e' && *(long *)*param_2 == 0x7461725f65746f76) {
      *(undefined1 *)(param_1 + 1) = 4;
      goto LAB_0013e1c3;
    }
    break;
  case 10:
    if (*(short *)(*param_2 + 8) == 0x6168 && *(long *)*param_2 == 0x706c615f74736f63) {
      *(undefined1 *)(param_1 + 1) = 2;
      goto LAB_0013e1c3;
    }
    if (*(short *)(*param_2 + 8) == 0x6574 && *(long *)*param_2 == 0x61675f6863756f74) {
      *(undefined1 *)(param_1 + 1) = 0x10;
      goto LAB_0013e1c3;
    }
    iVar5 = (*(code *)PTR_bcmp_001de488)
                      (param_2,
                       "low_actionmaker_order_max_pending_time_msmax_maker_pending_vol_on_depth");
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x27;
      goto LAB_0013e1c3;
    }
    bVar3 = false;
    bVar4 = false;
    goto LAB_0013e139;
  case 0xb:
    if (*(long *)(*param_2 + 3) == 0x65646f6d5f6c616e && *(long *)*param_2 == 0x6d5f6c616e676973) {
      *(undefined1 *)(param_1 + 1) = 0;
      goto LAB_0013e1c3;
    }
    break;
  case 0xc:
  case 0xf:
  case 0x11:
  case 0x18:
    goto switchD_0013da3a_caseD_c;
  case 0xd:
    if (*(long *)(*param_2 + 5) == 0x6b5f7265766f635f && *(long *)*param_2 == 0x6f635f72656b6174) {
      *(undefined1 *)(param_1 + 1) = 0xc;
      goto LAB_0013e1c3;
    }
    break;
  case 0xe:
    if (*(long *)(*param_2 + 6) == 0x657461725f72656b && *(long *)*param_2 == 0x656b61745f78616d) {
      *(undefined1 *)(param_1 + 1) = 9;
      goto LAB_0013e1c3;
    }
    iVar5 = (*(code *)PTR_bcmp_001de488)
                      (param_2,"taker_mult_maxtaker_cover_ktaker_skip_half_spread_bp");
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 1) = 0xb;
      goto LAB_0013e1c3;
    }
    iVar5 = (*(code *)PTR_bcmp_001de488)
                      (param_2,
                       "trade_slipperyclose_position_block_mstouch_gatetouch_gate_timeout_msmax_single_add_volmax_single_add_amtmax_single_net_volmax_single_net_amtmax_single_close_volmax_single_close_amt"
                       ,param_3);
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 1) = 0xe;
      goto LAB_0013e1c3;
    }
    break;
  case 0x10:
    auVar10[0] = -((*param_2)[0] == DAT_00117750);
    auVar10[1] = -((*param_2)[1] == UNK_00117751);
    auVar10[2] = -((*param_2)[2] == UNK_00117752);
    auVar10[3] = -((*param_2)[3] == UNK_00117753);
    auVar10[4] = -((*param_2)[4] == UNK_00117754);
    auVar10[5] = -((*param_2)[5] == UNK_00117755);
    auVar10[6] = -((*param_2)[6] == UNK_00117756);
    auVar10[7] = -((*param_2)[7] == UNK_00117757);
    auVar10[8] = -((*param_2)[8] == UNK_00117758);
    auVar10[9] = -((*param_2)[9] == UNK_00117759);
    auVar10[10] = -((*param_2)[10] == UNK_0011775a);
    auVar10[0xb] = -((*param_2)[0xb] == UNK_0011775b);
    auVar10[0xc] = -((*param_2)[0xc] == UNK_0011775c);
    auVar10[0xd] = -((*param_2)[0xd] == UNK_0011775d);
    auVar10[0xe] = -((*param_2)[0xe] == UNK_0011775e);
    auVar10[0xf] = -((*param_2)[0xf] == UNK_0011775f);
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
                 (ushort)(SUB161(auVar10 >> 0x77,0) & 1) << 0xe | (ushort)(auVar10[0xf] >> 7) << 0xf
                ) == 0xffff) {
      *(undefined1 *)(param_1 + 1) = 6;
      goto LAB_0013e1c3;
    }
    break;
  case 0x12:
    auVar11[0] = -((*param_2)[0] == s_max_single_add_v_001177f0[0]);
    auVar11[1] = -((*param_2)[1] == s_max_single_add_v_001177f0[1]);
    auVar11[2] = -((*param_2)[2] == s_max_single_add_v_001177f0[2]);
    auVar11[3] = -((*param_2)[3] == s_max_single_add_v_001177f0[3]);
    auVar11[4] = -((*param_2)[4] == s_max_single_add_v_001177f0[4]);
    auVar11[5] = -((*param_2)[5] == s_max_single_add_v_001177f0[5]);
    auVar11[6] = -((*param_2)[6] == s_max_single_add_v_001177f0[6]);
    auVar11[7] = -((*param_2)[7] == s_max_single_add_v_001177f0[7]);
    auVar11[8] = -((*param_2)[8] == s_max_single_add_v_001177f0[8]);
    auVar11[9] = -((*param_2)[9] == s_max_single_add_v_001177f0[9]);
    auVar11[10] = -((*param_2)[10] == s_max_single_add_v_001177f0[10]);
    auVar11[0xb] = -((*param_2)[0xb] == s_max_single_add_v_001177f0[0xb]);
    auVar11[0xc] = -((*param_2)[0xc] == s_max_single_add_v_001177f0[0xc]);
    auVar11[0xd] = -((*param_2)[0xd] == s_max_single_add_v_001177f0[0xd]);
    auVar11[0xe] = -((*param_2)[0xe] == s_max_single_add_v_001177f0[0xe]);
    auVar11[0xf] = -((*param_2)[0xf] == s_max_single_add_v_001177f0[0xf]);
    auVar28[0] = -((char)*(undefined2 *)param_2[1] == s_ol_00117490[0]);
    auVar28[1] = -((char)((ushort)*(undefined2 *)param_2[1] >> 8) == s_ol_00117490[1]);
    auVar28[2] = -(s_ol_00117490[2] == '\0');
    auVar28[3] = -(s_ol_00117490[3] == '\0');
    auVar28[4] = -(UNK_00117494 == '\0');
    auVar28[5] = -(UNK_00117495 == '\0');
    auVar28[6] = -(UNK_00117496 == '\0');
    auVar28[7] = -(UNK_00117497 == '\0');
    auVar28[8] = -(UNK_00117498 == '\0');
    auVar28[9] = -(UNK_00117499 == '\0');
    auVar28[10] = -(UNK_0011749a == '\0');
    auVar28[0xb] = -(UNK_0011749b == '\0');
    auVar28[0xc] = -(UNK_0011749c == '\0');
    auVar28[0xd] = -(UNK_0011749d == '\0');
    auVar28[0xe] = -(UNK_0011749e == '\0');
    auVar28[0xf] = -(UNK_0011749f == '\0');
    auVar28 = auVar28 & auVar11;
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
      *(undefined1 *)(param_1 + 1) = 0x12;
      goto LAB_0013e1c3;
    }
    auVar12[0] = -((*param_2)[0] == DAT_00117740);
    auVar12[1] = -((*param_2)[1] == UNK_00117741);
    auVar12[2] = -((*param_2)[2] == UNK_00117742);
    auVar12[3] = -((*param_2)[3] == UNK_00117743);
    auVar12[4] = -((*param_2)[4] == UNK_00117744);
    auVar12[5] = -((*param_2)[5] == UNK_00117745);
    auVar12[6] = -((*param_2)[6] == UNK_00117746);
    auVar12[7] = -((*param_2)[7] == UNK_00117747);
    auVar12[8] = -((*param_2)[8] == UNK_00117748);
    auVar12[9] = -((*param_2)[9] == UNK_00117749);
    auVar12[10] = -((*param_2)[10] == UNK_0011774a);
    auVar12[0xb] = -((*param_2)[0xb] == UNK_0011774b);
    auVar12[0xc] = -((*param_2)[0xc] == UNK_0011774c);
    auVar12[0xd] = -((*param_2)[0xd] == UNK_0011774d);
    auVar12[0xe] = -((*param_2)[0xe] == UNK_0011774e);
    auVar12[0xf] = -((*param_2)[0xf] == UNK_0011774f);
    auVar29[0] = -((char)*(undefined2 *)param_2[1] == DAT_00117a90);
    auVar29[1] = -((char)((ushort)*(undefined2 *)param_2[1] >> 8) == UNK_00117a91);
    auVar29[2] = -(UNK_00117a92 == '\0');
    auVar29[3] = -(UNK_00117a93 == '\0');
    auVar29[4] = -(UNK_00117a94 == '\0');
    auVar29[5] = -(UNK_00117a95 == '\0');
    auVar29[6] = -(UNK_00117a96 == '\0');
    auVar29[7] = -(UNK_00117a97 == '\0');
    auVar29[8] = -(UNK_00117a98 == '\0');
    auVar29[9] = -(UNK_00117a99 == '\0');
    auVar29[10] = -(UNK_00117a9a == '\0');
    auVar29[0xb] = -(UNK_00117a9b == '\0');
    auVar29[0xc] = -(UNK_00117a9c == '\0');
    auVar29[0xd] = -(UNK_00117a9d == '\0');
    auVar29[0xe] = -(UNK_00117a9e == '\0');
    auVar29[0xf] = -(UNK_00117a9f == '\0');
    auVar29 = auVar29 & auVar12;
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
      *(undefined1 *)(param_1 + 1) = 0x13;
      goto LAB_0013e1c3;
    }
    auVar13[0] = -((*param_2)[0] == s_max_single_net_v_00117780[0]);
    auVar13[1] = -((*param_2)[1] == s_max_single_net_v_00117780[1]);
    auVar13[2] = -((*param_2)[2] == s_max_single_net_v_00117780[2]);
    auVar13[3] = -((*param_2)[3] == s_max_single_net_v_00117780[3]);
    auVar13[4] = -((*param_2)[4] == s_max_single_net_v_00117780[4]);
    auVar13[5] = -((*param_2)[5] == s_max_single_net_v_00117780[5]);
    auVar13[6] = -((*param_2)[6] == s_max_single_net_v_00117780[6]);
    auVar13[7] = -((*param_2)[7] == s_max_single_net_v_00117780[7]);
    auVar13[8] = -((*param_2)[8] == s_max_single_net_v_00117780[8]);
    auVar13[9] = -((*param_2)[9] == s_max_single_net_v_00117780[9]);
    auVar13[10] = -((*param_2)[10] == s_max_single_net_v_00117780[10]);
    auVar13[0xb] = -((*param_2)[0xb] == s_max_single_net_v_00117780[0xb]);
    auVar13[0xc] = -((*param_2)[0xc] == s_max_single_net_v_00117780[0xc]);
    auVar13[0xd] = -((*param_2)[0xd] == s_max_single_net_v_00117780[0xd]);
    auVar13[0xe] = -((*param_2)[0xe] == s_max_single_net_v_00117780[0xe]);
    auVar13[0xf] = -((*param_2)[0xf] == s_max_single_net_v_00117780[0xf]);
    auVar30[0] = -((char)*(undefined2 *)param_2[1] == s_ol_00117490[0]);
    auVar30[1] = -((char)((ushort)*(undefined2 *)param_2[1] >> 8) == s_ol_00117490[1]);
    auVar30[2] = -(s_ol_00117490[2] == '\0');
    auVar30[3] = -(s_ol_00117490[3] == '\0');
    auVar30[4] = -(UNK_00117494 == '\0');
    auVar30[5] = -(UNK_00117495 == '\0');
    auVar30[6] = -(UNK_00117496 == '\0');
    auVar30[7] = -(UNK_00117497 == '\0');
    auVar30[8] = -(UNK_00117498 == '\0');
    auVar30[9] = -(UNK_00117499 == '\0');
    auVar30[10] = -(UNK_0011749a == '\0');
    auVar30[0xb] = -(UNK_0011749b == '\0');
    auVar30[0xc] = -(UNK_0011749c == '\0');
    auVar30[0xd] = -(UNK_0011749d == '\0');
    auVar30[0xe] = -(UNK_0011749e == '\0');
    auVar30[0xf] = -(UNK_0011749f == '\0');
    auVar30 = auVar30 & auVar13;
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
      *(undefined1 *)(param_1 + 1) = 0x14;
      goto LAB_0013e1c3;
    }
    auVar14[0] = -((*param_2)[0] == s_max_single_net_a_00117900[0]);
    auVar14[1] = -((*param_2)[1] == s_max_single_net_a_00117900[1]);
    auVar14[2] = -((*param_2)[2] == s_max_single_net_a_00117900[2]);
    auVar14[3] = -((*param_2)[3] == s_max_single_net_a_00117900[3]);
    auVar14[4] = -((*param_2)[4] == s_max_single_net_a_00117900[4]);
    auVar14[5] = -((*param_2)[5] == s_max_single_net_a_00117900[5]);
    auVar14[6] = -((*param_2)[6] == s_max_single_net_a_00117900[6]);
    auVar14[7] = -((*param_2)[7] == s_max_single_net_a_00117900[7]);
    auVar14[8] = -((*param_2)[8] == s_max_single_net_a_00117900[8]);
    auVar14[9] = -((*param_2)[9] == s_max_single_net_a_00117900[9]);
    auVar14[10] = -((*param_2)[10] == s_max_single_net_a_00117900[10]);
    auVar14[0xb] = -((*param_2)[0xb] == s_max_single_net_a_00117900[0xb]);
    auVar14[0xc] = -((*param_2)[0xc] == s_max_single_net_a_00117900[0xc]);
    auVar14[0xd] = -((*param_2)[0xd] == s_max_single_net_a_00117900[0xd]);
    auVar14[0xe] = -((*param_2)[0xe] == s_max_single_net_a_00117900[0xe]);
    auVar14[0xf] = -((*param_2)[0xf] == s_max_single_net_a_00117900[0xf]);
    auVar31[0] = -((char)*(undefined2 *)param_2[1] == DAT_00117a90);
    auVar31[1] = -((char)((ushort)*(undefined2 *)param_2[1] >> 8) == UNK_00117a91);
    auVar31[2] = -(UNK_00117a92 == '\0');
    auVar31[3] = -(UNK_00117a93 == '\0');
    auVar31[4] = -(UNK_00117a94 == '\0');
    auVar31[5] = -(UNK_00117a95 == '\0');
    auVar31[6] = -(UNK_00117a96 == '\0');
    auVar31[7] = -(UNK_00117a97 == '\0');
    auVar31[8] = -(UNK_00117a98 == '\0');
    auVar31[9] = -(UNK_00117a99 == '\0');
    auVar31[10] = -(UNK_00117a9a == '\0');
    auVar31[0xb] = -(UNK_00117a9b == '\0');
    auVar31[0xc] = -(UNK_00117a9c == '\0');
    auVar31[0xd] = -(UNK_00117a9d == '\0');
    auVar31[0xe] = -(UNK_00117a9e == '\0');
    auVar31[0xf] = -(UNK_00117a9f == '\0');
    auVar31 = auVar31 & auVar14;
    if ((ushort)((ushort)(SUB161(auVar31 >> 7,0) & 1) | (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar31 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar31[0xf] >> 7) << 0xf) == 0xffff) {
      *(undefined1 *)(param_1 + 1) = 0x15;
      goto LAB_0013e1c3;
    }
    iVar5 = (*(code *)PTR_bcmp_001de488)(param_2,"rolling_windows_mssplit_high_low_ratio_threshold")
    ;
    bVar3 = true;
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x25;
      goto LAB_0013e1c3;
    }
    goto LAB_0013e0b4;
  case 0x13:
    auVar34[0] = -((*param_2)[3] == DAT_001174b0);
    auVar34[1] = -((*param_2)[4] == UNK_001174b1);
    auVar34[2] = -((*param_2)[5] == UNK_001174b2);
    auVar34[3] = -((*param_2)[6] == UNK_001174b3);
    auVar34[4] = -((*param_2)[7] == UNK_001174b4);
    auVar34[5] = -((*param_2)[8] == UNK_001174b5);
    auVar34[6] = -((*param_2)[9] == UNK_001174b6);
    auVar34[7] = -((*param_2)[10] == UNK_001174b7);
    auVar34[8] = -((*param_2)[0xb] == UNK_001174b8);
    auVar34[9] = -((*param_2)[0xc] == UNK_001174b9);
    auVar34[10] = -((*param_2)[0xd] == UNK_001174ba);
    auVar34[0xb] = -((*param_2)[0xe] == UNK_001174bb);
    auVar34[0xc] = -((*param_2)[0xf] == UNK_001174bc);
    auVar34[0xd] = -(param_2[1][0] == UNK_001174bd);
    auVar34[0xe] = -(param_2[1][1] == UNK_001174be);
    auVar34[0xf] = -(param_2[1][2] == UNK_001174bf);
    auVar16[0] = -((*param_2)[0] == s_signal_trigger_m_00117920[0]);
    auVar16[1] = -((*param_2)[1] == s_signal_trigger_m_00117920[1]);
    auVar16[2] = -((*param_2)[2] == s_signal_trigger_m_00117920[2]);
    auVar16[3] = -((*param_2)[3] == s_signal_trigger_m_00117920[3]);
    auVar16[4] = -((*param_2)[4] == s_signal_trigger_m_00117920[4]);
    auVar16[5] = -((*param_2)[5] == s_signal_trigger_m_00117920[5]);
    auVar16[6] = -((*param_2)[6] == s_signal_trigger_m_00117920[6]);
    auVar16[7] = -((*param_2)[7] == s_signal_trigger_m_00117920[7]);
    auVar16[8] = -((*param_2)[8] == s_signal_trigger_m_00117920[8]);
    auVar16[9] = -((*param_2)[9] == s_signal_trigger_m_00117920[9]);
    auVar16[10] = -((*param_2)[10] == s_signal_trigger_m_00117920[10]);
    auVar16[0xb] = -((*param_2)[0xb] == s_signal_trigger_m_00117920[0xb]);
    auVar16[0xc] = -((*param_2)[0xc] == s_signal_trigger_m_00117920[0xc]);
    auVar16[0xd] = -((*param_2)[0xd] == s_signal_trigger_m_00117920[0xd]);
    auVar16[0xe] = -((*param_2)[0xe] == s_signal_trigger_m_00117920[0xe]);
    auVar16[0xf] = -((*param_2)[0xf] == s_signal_trigger_m_00117920[0xf]);
    auVar16 = auVar16 & auVar34;
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
      *(undefined1 *)(param_1 + 1) = 3;
      goto LAB_0013e1c3;
    }
    iVar5 = (*(code *)PTR_bcmp_001de488)(param_2,"taker_rate_baselinemax_taker_rate");
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 1) = 8;
      goto LAB_0013e1c3;
    }
    iVar5 = (*(code *)PTR_bcmp_001de488)(param_2,"long_open_threshold",param_3);
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x18;
      goto LAB_0013e1c3;
    }
    goto LAB_0013df73;
  case 0x14:
    uVar2 = *(undefined4 *)param_2[1];
    auVar32[0] = -((char)uVar2 == DAT_00117450);
    auVar32[1] = -((char)((uint)uVar2 >> 8) == UNK_00117451);
    auVar32[2] = -((char)((uint)uVar2 >> 0x10) == UNK_00117452);
    auVar32[3] = -((char)((uint)uVar2 >> 0x18) == UNK_00117453);
    auVar32[4] = -(UNK_00117454 == '\0');
    auVar32[5] = -(UNK_00117455 == '\0');
    auVar32[6] = -(UNK_00117456 == '\0');
    auVar32[7] = -(UNK_00117457 == '\0');
    auVar32[8] = -(UNK_00117458 == '\0');
    auVar32[9] = -(UNK_00117459 == '\0');
    auVar32[10] = -(UNK_0011745a == '\0');
    auVar32[0xb] = -(UNK_0011745b == '\0');
    auVar32[0xc] = -(UNK_0011745c == '\0');
    auVar32[0xd] = -(UNK_0011745d == '\0');
    auVar32[0xe] = -(UNK_0011745e == '\0');
    auVar32[0xf] = -(UNK_0011745f == '\0');
    auVar15[0] = -((*param_2)[0] == s_max_single_close_001175e0[0]);
    auVar15[1] = -((*param_2)[1] == s_max_single_close_001175e0[1]);
    auVar15[2] = -((*param_2)[2] == s_max_single_close_001175e0[2]);
    auVar15[3] = -((*param_2)[3] == s_max_single_close_001175e0[3]);
    auVar15[4] = -((*param_2)[4] == s_max_single_close_001175e0[4]);
    auVar15[5] = -((*param_2)[5] == s_max_single_close_001175e0[5]);
    auVar15[6] = -((*param_2)[6] == s_max_single_close_001175e0[6]);
    auVar15[7] = -((*param_2)[7] == s_max_single_close_001175e0[7]);
    auVar15[8] = -((*param_2)[8] == s_max_single_close_001175e0[8]);
    auVar15[9] = -((*param_2)[9] == s_max_single_close_001175e0[9]);
    auVar15[10] = -((*param_2)[10] == s_max_single_close_001175e0[10]);
    auVar15[0xb] = -((*param_2)[0xb] == s_max_single_close_001175e0[0xb]);
    auVar15[0xc] = -((*param_2)[0xc] == s_max_single_close_001175e0[0xc]);
    auVar15[0xd] = -((*param_2)[0xd] == s_max_single_close_001175e0[0xd]);
    auVar15[0xe] = -((*param_2)[0xe] == s_max_single_close_001175e0[0xe]);
    auVar15[0xf] = -((*param_2)[0xf] == s_max_single_close_001175e0[0xf]);
    auVar15 = auVar15 & auVar32;
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
      *(undefined1 *)(param_1 + 1) = 0x16;
      goto LAB_0013e1c3;
    }
    auVar6 = *param_2;
    uVar2 = *(undefined4 *)param_2[1];
    auVar42[0] = -((char)uVar2 == s__amt_001176c0[0]);
    auVar42[1] = -((char)((uint)uVar2 >> 8) == s__amt_001176c0[1]);
    auVar42[2] = -((char)((uint)uVar2 >> 0x10) == s__amt_001176c0[2]);
    auVar42[3] = -((char)((uint)uVar2 >> 0x18) == s__amt_001176c0[3]);
    auVar42[4] = -(s__amt_001176c0[4] == '\0');
    auVar42[5] = -(s__amt_001176c0[5] == '\0');
    auVar42[6] = -(s__amt_001176c0[6] == '\0');
    auVar42[7] = -(s__amt_001176c0[7] == '\0');
    auVar42[8] = -(UNK_001176c8 == '\0');
    auVar42[9] = -(UNK_001176c9 == '\0');
    auVar42[10] = -(UNK_001176ca == '\0');
    auVar42[0xb] = -(UNK_001176cb == '\0');
    auVar42[0xc] = -(UNK_001176cc == '\0');
    auVar42[0xd] = -(UNK_001176cd == '\0');
    auVar42[0xe] = -(UNK_001176ce == '\0');
    auVar42[0xf] = -(UNK_001176cf == '\0');
    auVar33[0] = -(auVar6[0] == 'm');
    auVar33[1] = -(auVar6[1] == 'a');
    auVar33[2] = -(auVar6[2] == 'x');
    auVar33[3] = -(auVar6[3] == '_');
    auVar33[4] = -(auVar6[4] == 's');
    auVar33[5] = -(auVar6[5] == 'i');
    auVar33[6] = -(auVar6[6] == 'n');
    auVar33[7] = -(auVar6[7] == 'g');
    auVar33[8] = -(auVar6[8] == 'l');
    auVar33[9] = -(auVar6[9] == 'e');
    auVar33[10] = -(auVar6[10] == '_');
    auVar33[0xb] = -(auVar6[0xb] == 'c');
    auVar33[0xc] = -(auVar6[0xc] == 'l');
    auVar33[0xd] = -(auVar6[0xd] == 'o');
    auVar33[0xe] = -(auVar6[0xe] == 's');
    auVar33[0xf] = -(auVar6[0xf] == 'e');
    auVar42 = auVar42 & auVar33;
    if ((ushort)((ushort)(SUB161(auVar42 >> 7,0) & 1) | (ushort)(SUB161(auVar42 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar42 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar42 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar42 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar42 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar42 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar42 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar42 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar42 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar42 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar42 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar42 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar42 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar42 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar42[0xf] >> 7) << 0xf) == 0xffff) {
      *(undefined1 *)(param_1 + 1) = 0x17;
      goto LAB_0013e1c3;
    }
    iVar5 = (*(code *)PTR_bcmp_001de488)(param_2,"long_close_threshold");
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x19;
      goto LAB_0013e1c3;
    }
    iVar5 = (*(code *)PTR_bcmp_001de488)(param_2,"short_open_threshold",param_3);
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x1a;
      goto LAB_0013e1c3;
    }
    bVar4 = true;
    bVar3 = false;
    goto switchD_0013da3a_caseD_c;
  case 0x15:
    auVar25[0] = -((*param_2)[5] == DAT_00117850);
    auVar25[1] = -((*param_2)[6] == UNK_00117851);
    auVar25[2] = -((*param_2)[7] == UNK_00117852);
    auVar25[3] = -((*param_2)[8] == UNK_00117853);
    auVar25[4] = -((*param_2)[9] == UNK_00117854);
    auVar25[5] = -((*param_2)[10] == UNK_00117855);
    auVar25[6] = -((*param_2)[0xb] == UNK_00117856);
    auVar25[7] = -((*param_2)[0xc] == UNK_00117857);
    auVar25[8] = -((*param_2)[0xd] == UNK_00117858);
    auVar25[9] = -((*param_2)[0xe] == UNK_00117859);
    auVar25[10] = -((*param_2)[0xf] == UNK_0011785a);
    auVar25[0xb] = -(param_2[1][0] == UNK_0011785b);
    auVar25[0xc] = -(param_2[1][1] == UNK_0011785c);
    auVar25[0xd] = -(param_2[1][2] == UNK_0011785d);
    auVar25[0xe] = -(param_2[1][3] == UNK_0011785e);
    auVar25[0xf] = -(param_2[1][4] == UNK_0011785f);
    auVar7[0] = -((*param_2)[0] == DAT_00117510);
    auVar7[1] = -((*param_2)[1] == UNK_00117511);
    auVar7[2] = -((*param_2)[2] == UNK_00117512);
    auVar7[3] = -((*param_2)[3] == UNK_00117513);
    auVar7[4] = -((*param_2)[4] == UNK_00117514);
    auVar7[5] = -((*param_2)[5] == UNK_00117515);
    auVar7[6] = -((*param_2)[6] == UNK_00117516);
    auVar7[7] = -((*param_2)[7] == UNK_00117517);
    auVar7[8] = -((*param_2)[8] == UNK_00117518);
    auVar7[9] = -((*param_2)[9] == UNK_00117519);
    auVar7[10] = -((*param_2)[10] == UNK_0011751a);
    auVar7[0xb] = -((*param_2)[0xb] == UNK_0011751b);
    auVar7[0xc] = -((*param_2)[0xc] == UNK_0011751c);
    auVar7[0xd] = -((*param_2)[0xd] == UNK_0011751d);
    auVar7[0xe] = -((*param_2)[0xe] == UNK_0011751e);
    auVar7[0xf] = -((*param_2)[0xf] == UNK_0011751f);
    auVar7 = auVar7 & auVar25;
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
      *(undefined1 *)(param_1 + 1) = 0x11;
      goto LAB_0013e1c3;
    }
    iVar5 = (*(code *)PTR_bcmp_001de488)(param_2,"short_close_threshold");
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x1b;
      goto LAB_0013e1c3;
    }
    bVar3 = true;
    goto LAB_0013df75;
  case 0x16:
    auVar27[0] = -((*param_2)[6] == DAT_001174a0);
    auVar27[1] = -((*param_2)[7] == UNK_001174a1);
    auVar27[2] = -((*param_2)[8] == UNK_001174a2);
    auVar27[3] = -((*param_2)[9] == UNK_001174a3);
    auVar27[4] = -((*param_2)[10] == UNK_001174a4);
    auVar27[5] = -((*param_2)[0xb] == UNK_001174a5);
    auVar27[6] = -((*param_2)[0xc] == UNK_001174a6);
    auVar27[7] = -((*param_2)[0xd] == UNK_001174a7);
    auVar27[8] = -((*param_2)[0xe] == UNK_001174a8);
    auVar27[9] = -((*param_2)[0xf] == UNK_001174a9);
    auVar27[10] = -(param_2[1][0] == UNK_001174aa);
    auVar27[0xb] = -(param_2[1][1] == UNK_001174ab);
    auVar27[0xc] = -(param_2[1][2] == UNK_001174ac);
    auVar27[0xd] = -(param_2[1][3] == UNK_001174ad);
    auVar27[0xe] = -(param_2[1][4] == UNK_001174ae);
    auVar27[0xf] = -(param_2[1][5] == UNK_001174af);
    auVar9[0] = -((*param_2)[0] == DAT_00117610);
    auVar9[1] = -((*param_2)[1] == UNK_00117611);
    auVar9[2] = -((*param_2)[2] == UNK_00117612);
    auVar9[3] = -((*param_2)[3] == UNK_00117613);
    auVar9[4] = -((*param_2)[4] == UNK_00117614);
    auVar9[5] = -((*param_2)[5] == UNK_00117615);
    auVar9[6] = -((*param_2)[6] == UNK_00117616);
    auVar9[7] = -((*param_2)[7] == UNK_00117617);
    auVar9[8] = -((*param_2)[8] == UNK_00117618);
    auVar9[9] = -((*param_2)[9] == UNK_00117619);
    auVar9[10] = -((*param_2)[10] == UNK_0011761a);
    auVar9[0xb] = -((*param_2)[0xb] == UNK_0011761b);
    auVar9[0xc] = -((*param_2)[0xc] == UNK_0011761c);
    auVar9[0xd] = -((*param_2)[0xd] == UNK_0011761d);
    auVar9[0xe] = -((*param_2)[0xe] == UNK_0011761e);
    auVar9[0xf] = -((*param_2)[0xf] == UNK_0011761f);
    auVar9 = auVar9 & auVar27;
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
      *(undefined1 *)(param_1 + 1) = 7;
      goto LAB_0013e1c3;
    }
    iVar5 = (*(code *)PTR_bcmp_001de488)(param_2,"high_taker_half_spread");
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 1) = 10;
      goto LAB_0013e1c3;
    }
    break;
  case 0x17:
    auVar26[0] = -((*param_2)[7] == DAT_00117950);
    auVar26[1] = -((*param_2)[8] == UNK_00117951);
    auVar26[2] = -((*param_2)[9] == UNK_00117952);
    auVar26[3] = -((*param_2)[10] == UNK_00117953);
    auVar26[4] = -((*param_2)[0xb] == UNK_00117954);
    auVar26[5] = -((*param_2)[0xc] == UNK_00117955);
    auVar26[6] = -((*param_2)[0xd] == UNK_00117956);
    auVar26[7] = -((*param_2)[0xe] == UNK_00117957);
    auVar26[8] = -((*param_2)[0xf] == UNK_00117958);
    auVar26[9] = -(param_2[1][0] == UNK_00117959);
    auVar26[10] = -(param_2[1][1] == UNK_0011795a);
    auVar26[0xb] = -(param_2[1][2] == UNK_0011795b);
    auVar26[0xc] = -(param_2[1][3] == UNK_0011795c);
    auVar26[0xd] = -(param_2[1][4] == UNK_0011795d);
    auVar26[0xe] = -(param_2[1][5] == UNK_0011795e);
    auVar26[0xf] = -(param_2[1][6] == UNK_0011795f);
    auVar8[0] = -((*param_2)[0] == s_close_position_b_00117550[0]);
    auVar8[1] = -((*param_2)[1] == s_close_position_b_00117550[1]);
    auVar8[2] = -((*param_2)[2] == s_close_position_b_00117550[2]);
    auVar8[3] = -((*param_2)[3] == s_close_position_b_00117550[3]);
    auVar8[4] = -((*param_2)[4] == s_close_position_b_00117550[4]);
    auVar8[5] = -((*param_2)[5] == s_close_position_b_00117550[5]);
    auVar8[6] = -((*param_2)[6] == s_close_position_b_00117550[6]);
    auVar8[7] = -((*param_2)[7] == s_close_position_b_00117550[7]);
    auVar8[8] = -((*param_2)[8] == s_close_position_b_00117550[8]);
    auVar8[9] = -((*param_2)[9] == s_close_position_b_00117550[9]);
    auVar8[10] = -((*param_2)[10] == s_close_position_b_00117550[10]);
    auVar8[0xb] = -((*param_2)[0xb] == s_close_position_b_00117550[0xb]);
    auVar8[0xc] = -((*param_2)[0xc] == s_close_position_b_00117550[0xc]);
    auVar8[0xd] = -((*param_2)[0xd] == s_close_position_b_00117550[0xd]);
    auVar8[0xe] = -((*param_2)[0xe] == s_close_position_b_00117550[0xe]);
    auVar8[0xf] = -((*param_2)[0xf] == s_close_position_b_00117550[0xf]);
    auVar8 = auVar8 & auVar26;
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
      *(undefined1 *)(param_1 + 1) = 0xf;
      goto LAB_0013e1c3;
    }
    iVar5 = (*(code *)PTR_bcmp_001de488)
                      (param_2,
                       "low_long_open_thresholdlow_long_close_thresholdlow_short_open_threshold");
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x1c;
      goto LAB_0013e1c3;
    }
LAB_0013df73:
    bVar3 = false;
LAB_0013df75:
    bVar4 = false;
switchD_0013da3a_caseD_c:
joined_r0x0013e0f4:
    if (param_3 == 0x21) {
      iVar5 = (*(code *)PTR_bcmp_001de488)
                        (param_2,"dyn_score_position_ts_threshold_sdyn_score_max_position_ts_s",0x21
                        );
      if (iVar5 == 0) {
        *(undefined1 *)(param_1 + 1) = 0x20;
        goto LAB_0013e1c3;
      }
      if (!bVar4) goto LAB_0013e12f;
LAB_0013e08b:
      iVar5 = (*(code *)PTR_bcmp_001de488)(param_2,"market_volatility_ms");
      if (iVar5 == 0) {
        *(undefined1 *)(param_1 + 1) = 0x24;
        goto LAB_0013e1c3;
      }
      bVar3 = false;
LAB_0013e0b4:
      if (param_3 == 0x1e) goto LAB_0013e0ba;
LAB_0013e137:
      bVar4 = false;
    }
    else {
      if (param_3 == 0x1b) {
        auVar37[0] = -((*param_2)[0xb] == s_ax_position_ts_s_00117420[0]);
        auVar37[1] = -((*param_2)[0xc] == s_ax_position_ts_s_00117420[1]);
        auVar37[2] = -((*param_2)[0xd] == s_ax_position_ts_s_00117420[2]);
        auVar37[3] = -((*param_2)[0xe] == s_ax_position_ts_s_00117420[3]);
        auVar37[4] = -((*param_2)[0xf] == s_ax_position_ts_s_00117420[4]);
        auVar37[5] = -(param_2[1][0] == s_ax_position_ts_s_00117420[5]);
        auVar37[6] = -(param_2[1][1] == s_ax_position_ts_s_00117420[6]);
        auVar37[7] = -(param_2[1][2] == s_ax_position_ts_s_00117420[7]);
        auVar37[8] = -(param_2[1][3] == s_ax_position_ts_s_00117420[8]);
        auVar37[9] = -(param_2[1][4] == s_ax_position_ts_s_00117420[9]);
        auVar37[10] = -(param_2[1][5] == s_ax_position_ts_s_00117420[10]);
        auVar37[0xb] = -(param_2[1][6] == s_ax_position_ts_s_00117420[0xb]);
        auVar37[0xc] = -(param_2[1][7] == s_ax_position_ts_s_00117420[0xc]);
        auVar37[0xd] = -(param_2[1][8] == s_ax_position_ts_s_00117420[0xd]);
        auVar37[0xe] = -(param_2[1][9] == s_ax_position_ts_s_00117420[0xe]);
        auVar37[0xf] = -(param_2[1][10] == s_ax_position_ts_s_00117420[0xf]);
        auVar19[0] = -((*param_2)[0] == DAT_00117720);
        auVar19[1] = -((*param_2)[1] == UNK_00117721);
        auVar19[2] = -((*param_2)[2] == UNK_00117722);
        auVar19[3] = -((*param_2)[3] == UNK_00117723);
        auVar19[4] = -((*param_2)[4] == UNK_00117724);
        auVar19[5] = -((*param_2)[5] == UNK_00117725);
        auVar19[6] = -((*param_2)[6] == UNK_00117726);
        auVar19[7] = -((*param_2)[7] == UNK_00117727);
        auVar19[8] = -((*param_2)[8] == UNK_00117728);
        auVar19[9] = -((*param_2)[9] == UNK_00117729);
        auVar19[10] = -((*param_2)[10] == UNK_0011772a);
        auVar19[0xb] = -((*param_2)[0xb] == UNK_0011772b);
        auVar19[0xc] = -((*param_2)[0xc] == UNK_0011772c);
        auVar19[0xd] = -((*param_2)[0xd] == UNK_0011772d);
        auVar19[0xe] = -((*param_2)[0xe] == UNK_0011772e);
        auVar19[0xf] = -((*param_2)[0xf] == UNK_0011772f);
        auVar19 = auVar19 & auVar37;
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
          *(undefined1 *)(param_1 + 1) = 0x21;
          goto LAB_0013e1c3;
        }
        auVar38[0] = -((*param_2)[0xb] == DAT_001174c0);
        auVar38[1] = -((*param_2)[0xc] == UNK_001174c1);
        auVar38[2] = -((*param_2)[0xd] == UNK_001174c2);
        auVar38[3] = -((*param_2)[0xe] == UNK_001174c3);
        auVar38[4] = -((*param_2)[0xf] == UNK_001174c4);
        auVar38[5] = -(param_2[1][0] == UNK_001174c5);
        auVar38[6] = -(param_2[1][1] == UNK_001174c6);
        auVar38[7] = -(param_2[1][2] == UNK_001174c7);
        auVar38[8] = -(param_2[1][3] == UNK_001174c8);
        auVar38[9] = -(param_2[1][4] == UNK_001174c9);
        auVar38[10] = -(param_2[1][5] == UNK_001174ca);
        auVar38[0xb] = -(param_2[1][6] == UNK_001174cb);
        auVar38[0xc] = -(param_2[1][7] == UNK_001174cc);
        auVar38[0xd] = -(param_2[1][8] == UNK_001174cd);
        auVar38[0xe] = -(param_2[1][9] == UNK_001174ce);
        auVar38[0xf] = -(param_2[1][10] == UNK_001174cf);
        auVar20[0] = -((*param_2)[0] == DAT_001179f0);
        auVar20[1] = -((*param_2)[1] == UNK_001179f1);
        auVar20[2] = -((*param_2)[2] == UNK_001179f2);
        auVar20[3] = -((*param_2)[3] == UNK_001179f3);
        auVar20[4] = -((*param_2)[4] == UNK_001179f4);
        auVar20[5] = -((*param_2)[5] == UNK_001179f5);
        auVar20[6] = -((*param_2)[6] == UNK_001179f6);
        auVar20[7] = -((*param_2)[7] == UNK_001179f7);
        auVar20[8] = -((*param_2)[8] == UNK_001179f8);
        auVar20[9] = -((*param_2)[9] == UNK_001179f9);
        auVar20[10] = -((*param_2)[10] == UNK_001179fa);
        auVar20[0xb] = -((*param_2)[0xb] == UNK_001179fb);
        auVar20[0xc] = -((*param_2)[0xc] == UNK_001179fc);
        auVar20[0xd] = -((*param_2)[0xd] == UNK_001179fd);
        auVar20[0xe] = -((*param_2)[0xe] == UNK_001179fe);
        auVar20[0xf] = -((*param_2)[0xf] == UNK_001179ff);
        auVar20 = auVar20 & auVar38;
        if ((ushort)((ushort)(SUB161(auVar20 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
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
                     (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar20[0xf] >> 7) << 0xf) == 0xffff) {
          *(undefined1 *)(param_1 + 1) = 0x23;
          goto LAB_0013e1c3;
        }
      }
      else {
        if (param_3 == 0x18) {
          uVar1 = *(undefined8 *)param_2[1];
          auVar35[0] = -((char)uVar1 == s_hreshold_00117890[0]);
          auVar35[1] = -((char)((ulong)uVar1 >> 8) == s_hreshold_00117890[1]);
          auVar35[2] = -((char)((ulong)uVar1 >> 0x10) == s_hreshold_00117890[2]);
          auVar35[3] = -((char)((ulong)uVar1 >> 0x18) == s_hreshold_00117890[3]);
          auVar35[4] = -((char)((ulong)uVar1 >> 0x20) == s_hreshold_00117890[4]);
          auVar35[5] = -((char)((ulong)uVar1 >> 0x28) == s_hreshold_00117890[5]);
          auVar35[6] = -((char)((ulong)uVar1 >> 0x30) == s_hreshold_00117890[6]);
          auVar35[7] = -((char)((ulong)uVar1 >> 0x38) == s_hreshold_00117890[7]);
          auVar35[8] = -(s_hreshold_00117890[8] == '\0');
          auVar35[9] = -(s_hreshold_00117890[9] == '\0');
          auVar35[10] = -(s_hreshold_00117890[10] == '\0');
          auVar35[0xb] = -(s_hreshold_00117890[0xb] == '\0');
          auVar35[0xc] = -(UNK_0011789c == '\0');
          auVar35[0xd] = -(UNK_0011789d == '\0');
          auVar35[0xe] = -(UNK_0011789e == '\0');
          auVar35[0xf] = -(UNK_0011789f == '\0');
          auVar17[0] = -((*param_2)[0] == DAT_00117730);
          auVar17[1] = -((*param_2)[1] == UNK_00117731);
          auVar17[2] = -((*param_2)[2] == UNK_00117732);
          auVar17[3] = -((*param_2)[3] == UNK_00117733);
          auVar17[4] = -((*param_2)[4] == UNK_00117734);
          auVar17[5] = -((*param_2)[5] == UNK_00117735);
          auVar17[6] = -((*param_2)[6] == UNK_00117736);
          auVar17[7] = -((*param_2)[7] == UNK_00117737);
          auVar17[8] = -((*param_2)[8] == UNK_00117738);
          auVar17[9] = -((*param_2)[9] == UNK_00117739);
          auVar17[10] = -((*param_2)[10] == UNK_0011773a);
          auVar17[0xb] = -((*param_2)[0xb] == UNK_0011773b);
          auVar17[0xc] = -((*param_2)[0xc] == UNK_0011773c);
          auVar17[0xd] = -((*param_2)[0xd] == UNK_0011773d);
          auVar17[0xe] = -((*param_2)[0xe] == UNK_0011773e);
          auVar17[0xf] = -((*param_2)[0xf] == UNK_0011773f);
          auVar17 = auVar17 & auVar35;
          if ((ushort)((ushort)(SUB161(auVar17 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
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
            *(undefined1 *)(param_1 + 1) = 0x1d;
            goto LAB_0013e1c3;
          }
          uVar1 = *(undefined8 *)param_2[1];
          auVar36[0] = -((char)uVar1 == s_hreshold_00117890[0]);
          auVar36[1] = -((char)((ulong)uVar1 >> 8) == s_hreshold_00117890[1]);
          auVar36[2] = -((char)((ulong)uVar1 >> 0x10) == s_hreshold_00117890[2]);
          auVar36[3] = -((char)((ulong)uVar1 >> 0x18) == s_hreshold_00117890[3]);
          auVar36[4] = -((char)((ulong)uVar1 >> 0x20) == s_hreshold_00117890[4]);
          auVar36[5] = -((char)((ulong)uVar1 >> 0x28) == s_hreshold_00117890[5]);
          auVar36[6] = -((char)((ulong)uVar1 >> 0x30) == s_hreshold_00117890[6]);
          auVar36[7] = -((char)((ulong)uVar1 >> 0x38) == s_hreshold_00117890[7]);
          auVar36[8] = -(s_hreshold_00117890[8] == '\0');
          auVar36[9] = -(s_hreshold_00117890[9] == '\0');
          auVar36[10] = -(s_hreshold_00117890[10] == '\0');
          auVar36[0xb] = -(s_hreshold_00117890[0xb] == '\0');
          auVar36[0xc] = -(UNK_0011789c == '\0');
          auVar36[0xd] = -(UNK_0011789d == '\0');
          auVar36[0xe] = -(UNK_0011789e == '\0');
          auVar36[0xf] = -(UNK_0011789f == '\0');
          auVar18[0] = -((*param_2)[0] == DAT_00117520);
          auVar18[1] = -((*param_2)[1] == UNK_00117521);
          auVar18[2] = -((*param_2)[2] == UNK_00117522);
          auVar18[3] = -((*param_2)[3] == UNK_00117523);
          auVar18[4] = -((*param_2)[4] == UNK_00117524);
          auVar18[5] = -((*param_2)[5] == UNK_00117525);
          auVar18[6] = -((*param_2)[6] == UNK_00117526);
          auVar18[7] = -((*param_2)[7] == UNK_00117527);
          auVar18[8] = -((*param_2)[8] == UNK_00117528);
          auVar18[9] = -((*param_2)[9] == UNK_00117529);
          auVar18[10] = -((*param_2)[10] == UNK_0011752a);
          auVar18[0xb] = -((*param_2)[0xb] == UNK_0011752b);
          auVar18[0xc] = -((*param_2)[0xc] == UNK_0011752c);
          auVar18[0xd] = -((*param_2)[0xd] == UNK_0011752d);
          auVar18[0xe] = -((*param_2)[0xe] == UNK_0011752e);
          auVar18[0xf] = -((*param_2)[0xf] == UNK_0011752f);
          auVar18 = auVar18 & auVar36;
          if ((ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
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
            *(undefined1 *)(param_1 + 1) = 0x1e;
            goto LAB_0013e1c3;
          }
        }
        if ((bVar3) &&
           (iVar5 = (*(code *)PTR_bcmp_001de488)
                              (param_2,"dyn_score_delta_scoreuse_dynamic_volspread_ratio"),
           iVar5 == 0)) {
          *(undefined1 *)(param_1 + 1) = 0x22;
          goto LAB_0013e1c3;
        }
      }
      if (bVar4) goto LAB_0013e08b;
LAB_0013e12f:
      bVar3 = false;
      if (param_3 != 0x1e) goto LAB_0013e137;
LAB_0013e0ba:
      auVar39[0] = -((*param_2)[0xe] == DAT_001176d0);
      auVar39[1] = -((*param_2)[0xf] == UNK_001176d1);
      auVar39[2] = -(param_2[1][0] == UNK_001176d2);
      auVar39[3] = -(param_2[1][1] == UNK_001176d3);
      auVar39[4] = -(param_2[1][2] == UNK_001176d4);
      auVar39[5] = -(param_2[1][3] == UNK_001176d5);
      auVar39[6] = -(param_2[1][4] == UNK_001176d6);
      auVar39[7] = -(param_2[1][5] == UNK_001176d7);
      auVar39[8] = -(param_2[1][6] == UNK_001176d8);
      auVar39[9] = -(param_2[1][7] == UNK_001176d9);
      auVar39[10] = -(param_2[1][8] == UNK_001176da);
      auVar39[0xb] = -(param_2[1][9] == UNK_001176db);
      auVar39[0xc] = -(param_2[1][10] == UNK_001176dc);
      auVar39[0xd] = -(param_2[1][0xb] == UNK_001176dd);
      auVar39[0xe] = -(param_2[1][0xc] == UNK_001176de);
      auVar39[0xf] = -(param_2[1][0xd] == UNK_001176df);
      auVar21[0] = -((*param_2)[0] == s_split_high_low_r_00117560[0]);
      auVar21[1] = -((*param_2)[1] == s_split_high_low_r_00117560[1]);
      auVar21[2] = -((*param_2)[2] == s_split_high_low_r_00117560[2]);
      auVar21[3] = -((*param_2)[3] == s_split_high_low_r_00117560[3]);
      auVar21[4] = -((*param_2)[4] == s_split_high_low_r_00117560[4]);
      auVar21[5] = -((*param_2)[5] == s_split_high_low_r_00117560[5]);
      auVar21[6] = -((*param_2)[6] == s_split_high_low_r_00117560[6]);
      auVar21[7] = -((*param_2)[7] == s_split_high_low_r_00117560[7]);
      auVar21[8] = -((*param_2)[8] == s_split_high_low_r_00117560[8]);
      auVar21[9] = -((*param_2)[9] == s_split_high_low_r_00117560[9]);
      auVar21[10] = -((*param_2)[10] == s_split_high_low_r_00117560[10]);
      auVar21[0xb] = -((*param_2)[0xb] == s_split_high_low_r_00117560[0xb]);
      auVar21[0xc] = -((*param_2)[0xc] == s_split_high_low_r_00117560[0xc]);
      auVar21[0xd] = -((*param_2)[0xd] == s_split_high_low_r_00117560[0xd]);
      auVar21[0xe] = -((*param_2)[0xe] == s_split_high_low_r_00117560[0xe]);
      auVar21[0xf] = -((*param_2)[0xf] == s_split_high_low_r_00117560[0xf]);
      auVar21 = auVar21 & auVar39;
      bVar4 = true;
      if ((ushort)((ushort)(SUB161(auVar21 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
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
                   (ushort)(SUB161(auVar21 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar21[0xf] >> 7) << 0xf) == 0xffff) {
        *(undefined1 *)(param_1 + 1) = 0x26;
        goto LAB_0013e1c3;
      }
    }
LAB_0013e139:
    if (param_3 == 0x1f) {
      auVar40[0] = -((*param_2)[0xf] == s__pending_time_ms_00117800[0]);
      auVar40[1] = -(param_2[1][0] == s__pending_time_ms_00117800[1]);
      auVar40[2] = -(param_2[1][1] == s__pending_time_ms_00117800[2]);
      auVar40[3] = -(param_2[1][2] == s__pending_time_ms_00117800[3]);
      auVar40[4] = -(param_2[1][3] == s__pending_time_ms_00117800[4]);
      auVar40[5] = -(param_2[1][4] == s__pending_time_ms_00117800[5]);
      auVar40[6] = -(param_2[1][5] == s__pending_time_ms_00117800[6]);
      auVar40[7] = -(param_2[1][6] == s__pending_time_ms_00117800[7]);
      auVar40[8] = -(param_2[1][7] == s__pending_time_ms_00117800[8]);
      auVar40[9] = -(param_2[1][8] == s__pending_time_ms_00117800[9]);
      auVar40[10] = -(param_2[1][9] == s__pending_time_ms_00117800[10]);
      auVar40[0xb] = -(param_2[1][10] == s__pending_time_ms_00117800[0xb]);
      auVar40[0xc] = -(param_2[1][0xb] == s__pending_time_ms_00117800[0xc]);
      auVar40[0xd] = -(param_2[1][0xc] == s__pending_time_ms_00117800[0xd]);
      auVar40[0xe] = -(param_2[1][0xd] == s__pending_time_ms_00117800[0xe]);
      auVar40[0xf] = -(param_2[1][0xe] == s__pending_time_ms_00117800[0xf]);
      auVar22[0] = -((*param_2)[0] == DAT_00117ab0);
      auVar22[1] = -((*param_2)[1] == UNK_00117ab1);
      auVar22[2] = -((*param_2)[2] == UNK_00117ab2);
      auVar22[3] = -((*param_2)[3] == UNK_00117ab3);
      auVar22[4] = -((*param_2)[4] == UNK_00117ab4);
      auVar22[5] = -((*param_2)[5] == UNK_00117ab5);
      auVar22[6] = -((*param_2)[6] == UNK_00117ab6);
      auVar22[7] = -((*param_2)[7] == UNK_00117ab7);
      auVar22[8] = -((*param_2)[8] == UNK_00117ab8);
      auVar22[9] = -((*param_2)[9] == UNK_00117ab9);
      auVar22[10] = -((*param_2)[10] == UNK_00117aba);
      auVar22[0xb] = -((*param_2)[0xb] == UNK_00117abb);
      auVar22[0xc] = -((*param_2)[0xc] == UNK_00117abc);
      auVar22[0xd] = -((*param_2)[0xd] == UNK_00117abd);
      auVar22[0xe] = -((*param_2)[0xe] == UNK_00117abe);
      auVar22[0xf] = -((*param_2)[0xf] == UNK_00117abf);
      auVar22 = auVar22 & auVar40;
      if ((ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
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
                   (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar22[0xf] >> 7) << 0xf) == 0xffff) {
        *(undefined1 *)(param_1 + 1) = 0x28;
        goto LAB_0013e1c3;
      }
    }
    else if ((bVar4) &&
            (auVar41[0] = -((*param_2)[0xe] == DAT_001178a0),
            auVar41[1] = -((*param_2)[0xf] == UNK_001178a1),
            auVar41[2] = -(param_2[1][0] == UNK_001178a2),
            auVar41[3] = -(param_2[1][1] == UNK_001178a3),
            auVar41[4] = -(param_2[1][2] == UNK_001178a4),
            auVar41[5] = -(param_2[1][3] == UNK_001178a5),
            auVar41[6] = -(param_2[1][4] == UNK_001178a6),
            auVar41[7] = -(param_2[1][5] == UNK_001178a7),
            auVar41[8] = -(param_2[1][6] == UNK_001178a8),
            auVar41[9] = -(param_2[1][7] == UNK_001178a9),
            auVar41[10] = -(param_2[1][8] == UNK_001178aa),
            auVar41[0xb] = -(param_2[1][9] == UNK_001178ab),
            auVar41[0xc] = -(param_2[1][10] == UNK_001178ac),
            auVar41[0xd] = -(param_2[1][0xb] == UNK_001178ad),
            auVar41[0xe] = -(param_2[1][0xc] == UNK_001178ae),
            auVar41[0xf] = -(param_2[1][0xd] == UNK_001178af),
            auVar23[0] = -((*param_2)[0] == DAT_00117ad0),
            auVar23[1] = -((*param_2)[1] == UNK_00117ad1),
            auVar23[2] = -((*param_2)[2] == UNK_00117ad2),
            auVar23[3] = -((*param_2)[3] == UNK_00117ad3),
            auVar23[4] = -((*param_2)[4] == UNK_00117ad4),
            auVar23[5] = -((*param_2)[5] == UNK_00117ad5),
            auVar23[6] = -((*param_2)[6] == UNK_00117ad6),
            auVar23[7] = -((*param_2)[7] == UNK_00117ad7),
            auVar23[8] = -((*param_2)[8] == UNK_00117ad8),
            auVar23[9] = -((*param_2)[9] == UNK_00117ad9),
            auVar23[10] = -((*param_2)[10] == UNK_00117ada),
            auVar23[0xb] = -((*param_2)[0xb] == UNK_00117adb),
            auVar23[0xc] = -((*param_2)[0xc] == UNK_00117adc),
            auVar23[0xd] = -((*param_2)[0xd] == UNK_00117add),
            auVar23[0xe] = -((*param_2)[0xe] == UNK_00117ade),
            auVar23[0xf] = -((*param_2)[0xf] == UNK_00117adf), auVar23 = auVar23 & auVar41,
            (ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
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
                     (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar23[0xf] >> 7) << 0xf) == 0xffff)) {
      *(undefined1 *)(param_1 + 1) = 0x29;
      goto LAB_0013e1c3;
    }
    if ((bVar3) && (iVar5 = (*(code *)PTR_bcmp_001de488)(param_2,"maker_ticks_inside"), iVar5 == 0))
    {
      *(undefined1 *)(param_1 + 1) = 0x2a;
      goto LAB_0013e1c3;
    }
    break;
  case 0x19:
    auVar24[0] = -((*param_2)[9] == s_p_half_spread_bp_00117910[0]);
    auVar24[1] = -((*param_2)[10] == s_p_half_spread_bp_00117910[1]);
    auVar24[2] = -((*param_2)[0xb] == s_p_half_spread_bp_00117910[2]);
    auVar24[3] = -((*param_2)[0xc] == s_p_half_spread_bp_00117910[3]);
    auVar24[4] = -((*param_2)[0xd] == s_p_half_spread_bp_00117910[4]);
    auVar24[5] = -((*param_2)[0xe] == s_p_half_spread_bp_00117910[5]);
    auVar24[6] = -((*param_2)[0xf] == s_p_half_spread_bp_00117910[6]);
    auVar24[7] = -(param_2[1][0] == s_p_half_spread_bp_00117910[7]);
    auVar24[8] = -(param_2[1][1] == s_p_half_spread_bp_00117910[8]);
    auVar24[9] = -(param_2[1][2] == s_p_half_spread_bp_00117910[9]);
    auVar24[10] = -(param_2[1][3] == s_p_half_spread_bp_00117910[10]);
    auVar24[0xb] = -(param_2[1][4] == s_p_half_spread_bp_00117910[0xb]);
    auVar24[0xc] = -(param_2[1][5] == s_p_half_spread_bp_00117910[0xc]);
    auVar24[0xd] = -(param_2[1][6] == s_p_half_spread_bp_00117910[0xd]);
    auVar24[0xe] = -(param_2[1][7] == s_p_half_spread_bp_00117910[0xe]);
    auVar24[0xf] = -(param_2[1][8] == s_p_half_spread_bp_00117910[0xf]);
    auVar6[0] = -((*param_2)[0] == DAT_00117aa0);
    auVar6[1] = -((*param_2)[1] == UNK_00117aa1);
    auVar6[2] = -((*param_2)[2] == UNK_00117aa2);
    auVar6[3] = -((*param_2)[3] == UNK_00117aa3);
    auVar6[4] = -((*param_2)[4] == UNK_00117aa4);
    auVar6[5] = -((*param_2)[5] == UNK_00117aa5);
    auVar6[6] = -((*param_2)[6] == UNK_00117aa6);
    auVar6[7] = -((*param_2)[7] == UNK_00117aa7);
    auVar6[8] = -((*param_2)[8] == UNK_00117aa8);
    auVar6[9] = -((*param_2)[9] == UNK_00117aa9);
    auVar6[10] = -((*param_2)[10] == UNK_00117aaa);
    auVar6[0xb] = -((*param_2)[0xb] == UNK_00117aab);
    auVar6[0xc] = -((*param_2)[0xc] == UNK_00117aac);
    auVar6[0xd] = -((*param_2)[0xd] == UNK_00117aad);
    auVar6[0xe] = -((*param_2)[0xe] == UNK_00117aae);
    auVar6[0xf] = -((*param_2)[0xf] == UNK_00117aaf);
    auVar6 = auVar6 & auVar24;
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
      *(undefined1 *)(param_1 + 1) = 0xd;
      goto LAB_0013e1c3;
    }
    iVar5 = (*(code *)PTR_bcmp_001de488)(param_2,"low_short_close_threshold");
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x1f;
      goto LAB_0013e1c3;
    }
    iVar5 = (*(code *)PTR_bcmp_001de488)(param_2,"maker_cancel_range_levels",param_3);
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x2b;
      goto LAB_0013e1c3;
    }
    break;
  default:
    bVar4 = false;
    bVar3 = false;
    goto joined_r0x0013e0f4;
  }
  *(undefined1 *)(param_1 + 1) = 0x2c;
LAB_0013e1c3:
  *param_1 = 2;
  return param_1;
}


