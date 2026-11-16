// ELF address 0x00000000000550a0; <strategy_comm4::_::<impl serde_core::de::Deserialize for strategy_comm4::Comm4Params>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_str

/* _<strategy_comm4::_::<impl serde_core::de::Deserialize for
   strategy_comm4::Comm4Params>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_str
    */

undefined8 * __rustcall
_<strategy_comm4::_::<impl_serde_core::de::Deserialize_for_strategy_comm4::Comm4Params>::deserialize::__FieldVisitor_as_serde_core::de::Visitor>
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
  
  bVar3 = false;
  bVar4 = false;
  switch(param_3) {
  case 8:
    if (*(long *)*param_2 == 0x656c69746e617571) {
      *(undefined1 *)(param_1 + 1) = 5;
      goto LAB_001559a2;
    }
    break;
  case 9:
    if ((*param_2)[8] == 'a' && *(long *)*param_2 == 0x68706c615f317670) {
      *(undefined1 *)(param_1 + 1) = 1;
      goto LAB_001559a2;
    }
    if ((*param_2)[8] == 'e' && *(long *)*param_2 == 0x7461725f65746f76) {
      *(undefined1 *)(param_1 + 1) = 4;
      goto LAB_001559a2;
    }
    break;
  case 10:
    if (*(short *)(*param_2 + 8) == 0x6168 && *(long *)*param_2 == 0x706c615f74736f63) {
      *(undefined1 *)(param_1 + 1) = 2;
      goto LAB_001559a2;
    }
    if (*(short *)(*param_2 + 8) == 0x6574 && *(long *)*param_2 == 0x61675f6863756f74) {
      *(undefined1 *)(param_1 + 1) = 0x10;
      goto LAB_001559a2;
    }
    iVar7 = (*(code *)PTR_bcmp_001f11d8)
                      (param_2,
                       "low_actionmaker_order_max_pending_time_msmax_maker_pending_vol_on_depth",
                       param_3);
    if (iVar7 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x27;
      goto LAB_001559a2;
    }
    bVar6 = false;
    bVar3 = false;
    bVar5 = false;
    goto LAB_001557e6;
  case 0xb:
    if (*(long *)(*param_2 + 3) == 0x65646f6d5f6c616e && *(long *)*param_2 == 0x6d5f6c616e676973) {
      *(undefined1 *)(param_1 + 1) = 0;
      goto LAB_001559a2;
    }
    if (*(long *)(*param_2 + 3) == 0x3265736168705f74 && *(long *)*param_2 == 0x6168705f74697865) {
      *(undefined1 *)(param_1 + 1) = 0x31;
      goto LAB_001559a2;
    }
    if (*(long *)(*param_2 + 3) == 0x3365736168705f74 && *(long *)*param_2 == 0x6168705f74697865) {
      *(undefined1 *)(param_1 + 1) = 0x33;
      goto LAB_001559a2;
    }
    break;
  case 0xc:
  case 0xf:
  case 0x11:
  case 0x18:
    goto switchD_001550d5_caseD_c;
  case 0xd:
    if (*(long *)(*param_2 + 5) == 0x6b5f7265766f635f && *(long *)*param_2 == 0x6f635f72656b6174) {
      *(undefined1 *)(param_1 + 1) = 0xc;
      goto LAB_001559a2;
    }
    iVar7 = (*(code *)PTR_bcmp_001f11d8)(param_2,"enable_phasesinvert_phase",param_3);
    if (iVar7 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x2c;
      goto LAB_001559a2;
    }
    goto LAB_001551f0;
  case 0xe:
    if (*(long *)(*param_2 + 6) == 0x657461725f72656b && *(long *)*param_2 == 0x656b61745f78616d) {
      *(undefined1 *)(param_1 + 1) = 9;
      goto LAB_001559a2;
    }
    iVar7 = (*(code *)PTR_bcmp_001f11d8)
                      (param_2,"taker_mult_maxtaker_cover_ktaker_skip_half_spread_bp",param_3);
    if (iVar7 == 0) {
      *(undefined1 *)(param_1 + 1) = 0xb;
      goto LAB_001559a2;
    }
    iVar7 = (*(code *)PTR_bcmp_001f11d8)
                      (param_2,
                       "trade_slipperyclose_position_block_mstouch_gatetouch_gate_timeout_msmax_single_add_volmax_single_add_amtmax_single_net_volmax_single_net_amtmax_single_close_volmax_single_close_amt"
                       ,param_3);
    if (iVar7 == 0) {
      *(undefined1 *)(param_1 + 1) = 0xe;
      goto LAB_001559a2;
    }
    break;
  case 0x10:
    auVar12[0] = -((*param_2)[0] == DAT_00115e30);
    auVar12[1] = -((*param_2)[1] == UNK_00115e31);
    auVar12[2] = -((*param_2)[2] == UNK_00115e32);
    auVar12[3] = -((*param_2)[3] == UNK_00115e33);
    auVar12[4] = -((*param_2)[4] == UNK_00115e34);
    auVar12[5] = -((*param_2)[5] == UNK_00115e35);
    auVar12[6] = -((*param_2)[6] == UNK_00115e36);
    auVar12[7] = -((*param_2)[7] == UNK_00115e37);
    auVar12[8] = -((*param_2)[8] == UNK_00115e38);
    auVar12[9] = -((*param_2)[9] == UNK_00115e39);
    auVar12[10] = -((*param_2)[10] == UNK_00115e3a);
    auVar12[0xb] = -((*param_2)[0xb] == UNK_00115e3b);
    auVar12[0xc] = -((*param_2)[0xc] == UNK_00115e3c);
    auVar12[0xd] = -((*param_2)[0xd] == UNK_00115e3d);
    auVar12[0xe] = -((*param_2)[0xe] == UNK_00115e3e);
    auVar12[0xf] = -((*param_2)[0xf] == UNK_00115e3f);
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
                 (ushort)(SUB161(auVar12 >> 0x77,0) & 1) << 0xe | (ushort)(auVar12[0xf] >> 7) << 0xf
                ) == 0xffff) {
      *(undefined1 *)(param_1 + 1) = 6;
      goto LAB_001559a2;
    }
    break;
  case 0x12:
    auVar13[0] = -((*param_2)[0] == s_max_single_add_v_00115f00[0]);
    auVar13[1] = -((*param_2)[1] == s_max_single_add_v_00115f00[1]);
    auVar13[2] = -((*param_2)[2] == s_max_single_add_v_00115f00[2]);
    auVar13[3] = -((*param_2)[3] == s_max_single_add_v_00115f00[3]);
    auVar13[4] = -((*param_2)[4] == s_max_single_add_v_00115f00[4]);
    auVar13[5] = -((*param_2)[5] == s_max_single_add_v_00115f00[5]);
    auVar13[6] = -((*param_2)[6] == s_max_single_add_v_00115f00[6]);
    auVar13[7] = -((*param_2)[7] == s_max_single_add_v_00115f00[7]);
    auVar13[8] = -((*param_2)[8] == s_max_single_add_v_00115f00[8]);
    auVar13[9] = -((*param_2)[9] == s_max_single_add_v_00115f00[9]);
    auVar13[10] = -((*param_2)[10] == s_max_single_add_v_00115f00[10]);
    auVar13[0xb] = -((*param_2)[0xb] == s_max_single_add_v_00115f00[0xb]);
    auVar13[0xc] = -((*param_2)[0xc] == s_max_single_add_v_00115f00[0xc]);
    auVar13[0xd] = -((*param_2)[0xd] == s_max_single_add_v_00115f00[0xd]);
    auVar13[0xe] = -((*param_2)[0xe] == s_max_single_add_v_00115f00[0xe]);
    auVar13[0xf] = -((*param_2)[0xf] == s_max_single_add_v_00115f00[0xf]);
    auVar30[0] = -((char)*(undefined2 *)param_2[1] == s_ol_00115b50[0]);
    auVar30[1] = -((char)((ushort)*(undefined2 *)param_2[1] >> 8) == s_ol_00115b50[1]);
    auVar30[2] = -(s_ol_00115b50[2] == '\0');
    auVar30[3] = -(s_ol_00115b50[3] == '\0');
    auVar30[4] = -(UNK_00115b54 == '\0');
    auVar30[5] = -(UNK_00115b55 == '\0');
    auVar30[6] = -(UNK_00115b56 == '\0');
    auVar30[7] = -(UNK_00115b57 == '\0');
    auVar30[8] = -(UNK_00115b58 == '\0');
    auVar30[9] = -(UNK_00115b59 == '\0');
    auVar30[10] = -(UNK_00115b5a == '\0');
    auVar30[0xb] = -(UNK_00115b5b == '\0');
    auVar30[0xc] = -(UNK_00115b5c == '\0');
    auVar30[0xd] = -(UNK_00115b5d == '\0');
    auVar30[0xe] = -(UNK_00115b5e == '\0');
    auVar30[0xf] = -(UNK_00115b5f == '\0');
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
      *(undefined1 *)(param_1 + 1) = 0x12;
      goto LAB_001559a2;
    }
    auVar14[0] = -((*param_2)[0] == DAT_00115e40);
    auVar14[1] = -((*param_2)[1] == UNK_00115e41);
    auVar14[2] = -((*param_2)[2] == UNK_00115e42);
    auVar14[3] = -((*param_2)[3] == UNK_00115e43);
    auVar14[4] = -((*param_2)[4] == UNK_00115e44);
    auVar14[5] = -((*param_2)[5] == UNK_00115e45);
    auVar14[6] = -((*param_2)[6] == UNK_00115e46);
    auVar14[7] = -((*param_2)[7] == UNK_00115e47);
    auVar14[8] = -((*param_2)[8] == UNK_00115e48);
    auVar14[9] = -((*param_2)[9] == UNK_00115e49);
    auVar14[10] = -((*param_2)[10] == UNK_00115e4a);
    auVar14[0xb] = -((*param_2)[0xb] == UNK_00115e4b);
    auVar14[0xc] = -((*param_2)[0xc] == UNK_00115e4c);
    auVar14[0xd] = -((*param_2)[0xd] == UNK_00115e4d);
    auVar14[0xe] = -((*param_2)[0xe] == UNK_00115e4e);
    auVar14[0xf] = -((*param_2)[0xf] == UNK_00115e4f);
    auVar31[0] = -((char)*(undefined2 *)param_2[1] == DAT_001161f0);
    auVar31[1] = -((char)((ushort)*(undefined2 *)param_2[1] >> 8) == UNK_001161f1);
    auVar31[2] = -(UNK_001161f2 == '\0');
    auVar31[3] = -(UNK_001161f3 == '\0');
    auVar31[4] = -(UNK_001161f4 == '\0');
    auVar31[5] = -(UNK_001161f5 == '\0');
    auVar31[6] = -(UNK_001161f6 == '\0');
    auVar31[7] = -(UNK_001161f7 == '\0');
    auVar31[8] = -(UNK_001161f8 == '\0');
    auVar31[9] = -(UNK_001161f9 == '\0');
    auVar31[10] = -(UNK_001161fa == '\0');
    auVar31[0xb] = -(UNK_001161fb == '\0');
    auVar31[0xc] = -(UNK_001161fc == '\0');
    auVar31[0xd] = -(UNK_001161fd == '\0');
    auVar31[0xe] = -(UNK_001161fe == '\0');
    auVar31[0xf] = -(UNK_001161ff == '\0');
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
      *(undefined1 *)(param_1 + 1) = 0x13;
      goto LAB_001559a2;
    }
    auVar15[0] = -((*param_2)[0] == s_max_single_net_v_00115e70[0]);
    auVar15[1] = -((*param_2)[1] == s_max_single_net_v_00115e70[1]);
    auVar15[2] = -((*param_2)[2] == s_max_single_net_v_00115e70[2]);
    auVar15[3] = -((*param_2)[3] == s_max_single_net_v_00115e70[3]);
    auVar15[4] = -((*param_2)[4] == s_max_single_net_v_00115e70[4]);
    auVar15[5] = -((*param_2)[5] == s_max_single_net_v_00115e70[5]);
    auVar15[6] = -((*param_2)[6] == s_max_single_net_v_00115e70[6]);
    auVar15[7] = -((*param_2)[7] == s_max_single_net_v_00115e70[7]);
    auVar15[8] = -((*param_2)[8] == s_max_single_net_v_00115e70[8]);
    auVar15[9] = -((*param_2)[9] == s_max_single_net_v_00115e70[9]);
    auVar15[10] = -((*param_2)[10] == s_max_single_net_v_00115e70[10]);
    auVar15[0xb] = -((*param_2)[0xb] == s_max_single_net_v_00115e70[0xb]);
    auVar15[0xc] = -((*param_2)[0xc] == s_max_single_net_v_00115e70[0xc]);
    auVar15[0xd] = -((*param_2)[0xd] == s_max_single_net_v_00115e70[0xd]);
    auVar15[0xe] = -((*param_2)[0xe] == s_max_single_net_v_00115e70[0xe]);
    auVar15[0xf] = -((*param_2)[0xf] == s_max_single_net_v_00115e70[0xf]);
    auVar32[0] = -((char)*(undefined2 *)param_2[1] == s_ol_00115b50[0]);
    auVar32[1] = -((char)((ushort)*(undefined2 *)param_2[1] >> 8) == s_ol_00115b50[1]);
    auVar32[2] = -(s_ol_00115b50[2] == '\0');
    auVar32[3] = -(s_ol_00115b50[3] == '\0');
    auVar32[4] = -(UNK_00115b54 == '\0');
    auVar32[5] = -(UNK_00115b55 == '\0');
    auVar32[6] = -(UNK_00115b56 == '\0');
    auVar32[7] = -(UNK_00115b57 == '\0');
    auVar32[8] = -(UNK_00115b58 == '\0');
    auVar32[9] = -(UNK_00115b59 == '\0');
    auVar32[10] = -(UNK_00115b5a == '\0');
    auVar32[0xb] = -(UNK_00115b5b == '\0');
    auVar32[0xc] = -(UNK_00115b5c == '\0');
    auVar32[0xd] = -(UNK_00115b5d == '\0');
    auVar32[0xe] = -(UNK_00115b5e == '\0');
    auVar32[0xf] = -(UNK_00115b5f == '\0');
    auVar32 = auVar32 & auVar15;
    if ((ushort)((ushort)(SUB161(auVar32 >> 7,0) & 1) | (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar32[0xf] >> 7) << 0xf) == 0xffff) {
      *(undefined1 *)(param_1 + 1) = 0x14;
      goto LAB_001559a2;
    }
    auVar16[0] = -((*param_2)[0] == s_max_single_net_a_00116010[0]);
    auVar16[1] = -((*param_2)[1] == s_max_single_net_a_00116010[1]);
    auVar16[2] = -((*param_2)[2] == s_max_single_net_a_00116010[2]);
    auVar16[3] = -((*param_2)[3] == s_max_single_net_a_00116010[3]);
    auVar16[4] = -((*param_2)[4] == s_max_single_net_a_00116010[4]);
    auVar16[5] = -((*param_2)[5] == s_max_single_net_a_00116010[5]);
    auVar16[6] = -((*param_2)[6] == s_max_single_net_a_00116010[6]);
    auVar16[7] = -((*param_2)[7] == s_max_single_net_a_00116010[7]);
    auVar16[8] = -((*param_2)[8] == s_max_single_net_a_00116010[8]);
    auVar16[9] = -((*param_2)[9] == s_max_single_net_a_00116010[9]);
    auVar16[10] = -((*param_2)[10] == s_max_single_net_a_00116010[10]);
    auVar16[0xb] = -((*param_2)[0xb] == s_max_single_net_a_00116010[0xb]);
    auVar16[0xc] = -((*param_2)[0xc] == s_max_single_net_a_00116010[0xc]);
    auVar16[0xd] = -((*param_2)[0xd] == s_max_single_net_a_00116010[0xd]);
    auVar16[0xe] = -((*param_2)[0xe] == s_max_single_net_a_00116010[0xe]);
    auVar16[0xf] = -((*param_2)[0xf] == s_max_single_net_a_00116010[0xf]);
    auVar33[0] = -((char)*(undefined2 *)param_2[1] == DAT_001161f0);
    auVar33[1] = -((char)((ushort)*(undefined2 *)param_2[1] >> 8) == UNK_001161f1);
    auVar33[2] = -(UNK_001161f2 == '\0');
    auVar33[3] = -(UNK_001161f3 == '\0');
    auVar33[4] = -(UNK_001161f4 == '\0');
    auVar33[5] = -(UNK_001161f5 == '\0');
    auVar33[6] = -(UNK_001161f6 == '\0');
    auVar33[7] = -(UNK_001161f7 == '\0');
    auVar33[8] = -(UNK_001161f8 == '\0');
    auVar33[9] = -(UNK_001161f9 == '\0');
    auVar33[10] = -(UNK_001161fa == '\0');
    auVar33[0xb] = -(UNK_001161fb == '\0');
    auVar33[0xc] = -(UNK_001161fc == '\0');
    auVar33[0xd] = -(UNK_001161fd == '\0');
    auVar33[0xe] = -(UNK_001161fe == '\0');
    auVar33[0xf] = -(UNK_001161ff == '\0');
    auVar33 = auVar33 & auVar16;
    if ((ushort)((ushort)(SUB161(auVar33 >> 7,0) & 1) | (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1
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
                (ushort)(byte)(auVar33[0xf] >> 7) << 0xf) == 0xffff) {
      *(undefined1 *)(param_1 + 1) = 0x15;
      goto LAB_001559a2;
    }
    iVar7 = (*(code *)PTR_bcmp_001f11d8)
                      (param_2,"rolling_windows_mssplit_high_low_ratio_threshold",param_3);
    if (iVar7 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x25;
      goto LAB_001559a2;
    }
    bVar5 = true;
    bVar6 = false;
    bVar3 = false;
    goto LAB_001557aa;
  case 0x13:
    auVar36[0] = -((*param_2)[3] == DAT_00115b70);
    auVar36[1] = -((*param_2)[4] == UNK_00115b71);
    auVar36[2] = -((*param_2)[5] == UNK_00115b72);
    auVar36[3] = -((*param_2)[6] == UNK_00115b73);
    auVar36[4] = -((*param_2)[7] == UNK_00115b74);
    auVar36[5] = -((*param_2)[8] == UNK_00115b75);
    auVar36[6] = -((*param_2)[9] == UNK_00115b76);
    auVar36[7] = -((*param_2)[10] == UNK_00115b77);
    auVar36[8] = -((*param_2)[0xb] == UNK_00115b78);
    auVar36[9] = -((*param_2)[0xc] == UNK_00115b79);
    auVar36[10] = -((*param_2)[0xd] == UNK_00115b7a);
    auVar36[0xb] = -((*param_2)[0xe] == UNK_00115b7b);
    auVar36[0xc] = -((*param_2)[0xf] == UNK_00115b7c);
    auVar36[0xd] = -(param_2[1][0] == UNK_00115b7d);
    auVar36[0xe] = -(param_2[1][1] == UNK_00115b7e);
    auVar36[0xf] = -(param_2[1][2] == UNK_00115b7f);
    auVar18[0] = -((*param_2)[0] == s_signal_trigger_m_00116030[0]);
    auVar18[1] = -((*param_2)[1] == s_signal_trigger_m_00116030[1]);
    auVar18[2] = -((*param_2)[2] == s_signal_trigger_m_00116030[2]);
    auVar18[3] = -((*param_2)[3] == s_signal_trigger_m_00116030[3]);
    auVar18[4] = -((*param_2)[4] == s_signal_trigger_m_00116030[4]);
    auVar18[5] = -((*param_2)[5] == s_signal_trigger_m_00116030[5]);
    auVar18[6] = -((*param_2)[6] == s_signal_trigger_m_00116030[6]);
    auVar18[7] = -((*param_2)[7] == s_signal_trigger_m_00116030[7]);
    auVar18[8] = -((*param_2)[8] == s_signal_trigger_m_00116030[8]);
    auVar18[9] = -((*param_2)[9] == s_signal_trigger_m_00116030[9]);
    auVar18[10] = -((*param_2)[10] == s_signal_trigger_m_00116030[10]);
    auVar18[0xb] = -((*param_2)[0xb] == s_signal_trigger_m_00116030[0xb]);
    auVar18[0xc] = -((*param_2)[0xc] == s_signal_trigger_m_00116030[0xc]);
    auVar18[0xd] = -((*param_2)[0xd] == s_signal_trigger_m_00116030[0xd]);
    auVar18[0xe] = -((*param_2)[0xe] == s_signal_trigger_m_00116030[0xe]);
    auVar18[0xf] = -((*param_2)[0xf] == s_signal_trigger_m_00116030[0xf]);
    auVar18 = auVar18 & auVar36;
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
      *(undefined1 *)(param_1 + 1) = 3;
      goto LAB_001559a2;
    }
    iVar7 = (*(code *)PTR_bcmp_001f11d8)(param_2,"taker_rate_baselinemax_taker_rate",param_3);
    if (iVar7 == 0) {
      *(undefined1 *)(param_1 + 1) = 8;
      goto LAB_001559a2;
    }
    iVar7 = (*(code *)PTR_bcmp_001f11d8)(param_2,"long_open_threshold",param_3);
    if (iVar7 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x18;
      goto LAB_001559a2;
    }
    goto LAB_0015564c;
  case 0x14:
    uVar2 = *(undefined4 *)param_2[1];
    auVar34[0] = -((char)uVar2 == DAT_00115b10);
    auVar34[1] = -((char)((uint)uVar2 >> 8) == UNK_00115b11);
    auVar34[2] = -((char)((uint)uVar2 >> 0x10) == UNK_00115b12);
    auVar34[3] = -((char)((uint)uVar2 >> 0x18) == UNK_00115b13);
    auVar34[4] = -(UNK_00115b14 == '\0');
    auVar34[5] = -(UNK_00115b15 == '\0');
    auVar34[6] = -(UNK_00115b16 == '\0');
    auVar34[7] = -(UNK_00115b17 == '\0');
    auVar34[8] = -(UNK_00115b18 == '\0');
    auVar34[9] = -(UNK_00115b19 == '\0');
    auVar34[10] = -(UNK_00115b1a == '\0');
    auVar34[0xb] = -(UNK_00115b1b == '\0');
    auVar34[0xc] = -(UNK_00115b1c == '\0');
    auVar34[0xd] = -(UNK_00115b1d == '\0');
    auVar34[0xe] = -(UNK_00115b1e == '\0');
    auVar34[0xf] = -(UNK_00115b1f == '\0');
    auVar17[0] = -((*param_2)[0] == DAT_00115cc0);
    auVar17[1] = -((*param_2)[1] == UNK_00115cc1);
    auVar17[2] = -((*param_2)[2] == UNK_00115cc2);
    auVar17[3] = -((*param_2)[3] == UNK_00115cc3);
    auVar17[4] = -((*param_2)[4] == UNK_00115cc4);
    auVar17[5] = -((*param_2)[5] == UNK_00115cc5);
    auVar17[6] = -((*param_2)[6] == UNK_00115cc6);
    auVar17[7] = -((*param_2)[7] == UNK_00115cc7);
    auVar17[8] = -((*param_2)[8] == UNK_00115cc8);
    auVar17[9] = -((*param_2)[9] == UNK_00115cc9);
    auVar17[10] = -((*param_2)[10] == UNK_00115cca);
    auVar17[0xb] = -((*param_2)[0xb] == UNK_00115ccb);
    auVar17[0xc] = -((*param_2)[0xc] == UNK_00115ccc);
    auVar17[0xd] = -((*param_2)[0xd] == UNK_00115ccd);
    auVar17[0xe] = -((*param_2)[0xe] == UNK_00115cce);
    auVar17[0xf] = -((*param_2)[0xf] == UNK_00115ccf);
    auVar17 = auVar17 & auVar34;
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
      *(undefined1 *)(param_1 + 1) = 0x16;
      goto LAB_001559a2;
    }
    auVar8 = *param_2;
    uVar2 = *(undefined4 *)param_2[1];
    auVar44[0] = -((char)uVar2 == s__amt_00115d90[0]);
    auVar44[1] = -((char)((uint)uVar2 >> 8) == s__amt_00115d90[1]);
    auVar44[2] = -((char)((uint)uVar2 >> 0x10) == s__amt_00115d90[2]);
    auVar44[3] = -((char)((uint)uVar2 >> 0x18) == s__amt_00115d90[3]);
    auVar44[4] = -(s__amt_00115d90[4] == '\0');
    auVar44[5] = -(s__amt_00115d90[5] == '\0');
    auVar44[6] = -(s__amt_00115d90[6] == '\0');
    auVar44[7] = -(s__amt_00115d90[7] == '\0');
    auVar44[8] = -(UNK_00115d98 == '\0');
    auVar44[9] = -(UNK_00115d99 == '\0');
    auVar44[10] = -(UNK_00115d9a == '\0');
    auVar44[0xb] = -(UNK_00115d9b == '\0');
    auVar44[0xc] = -(UNK_00115d9c == '\0');
    auVar44[0xd] = -(UNK_00115d9d == '\0');
    auVar44[0xe] = -(UNK_00115d9e == '\0');
    auVar44[0xf] = -(UNK_00115d9f == '\0');
    auVar35[0] = -(auVar8[0] == 'm');
    auVar35[1] = -(auVar8[1] == 'a');
    auVar35[2] = -(auVar8[2] == 'x');
    auVar35[3] = -(auVar8[3] == '_');
    auVar35[4] = -(auVar8[4] == 's');
    auVar35[5] = -(auVar8[5] == 'i');
    auVar35[6] = -(auVar8[6] == 'n');
    auVar35[7] = -(auVar8[7] == 'g');
    auVar35[8] = -(auVar8[8] == 'l');
    auVar35[9] = -(auVar8[9] == 'e');
    auVar35[10] = -(auVar8[10] == '_');
    auVar35[0xb] = -(auVar8[0xb] == 'c');
    auVar35[0xc] = -(auVar8[0xc] == 'l');
    auVar35[0xd] = -(auVar8[0xd] == 'o');
    auVar35[0xe] = -(auVar8[0xe] == 's');
    auVar35[0xf] = -(auVar8[0xf] == 'e');
    auVar44 = auVar44 & auVar35;
    if ((ushort)((ushort)(SUB161(auVar44 >> 7,0) & 1) | (ushort)(SUB161(auVar44 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar44 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar44 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar44 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar44 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar44 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar44 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar44 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar44 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar44 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar44 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar44 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar44 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar44 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar44[0xf] >> 7) << 0xf) == 0xffff) {
      *(undefined1 *)(param_1 + 1) = 0x17;
      goto LAB_001559a2;
    }
    iVar7 = (*(code *)PTR_bcmp_001f11d8)(param_2,"long_close_threshold",param_3);
    if (iVar7 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x19;
      goto LAB_001559a2;
    }
    iVar7 = (*(code *)PTR_bcmp_001f11d8)(param_2,"short_open_threshold",param_3);
    if (iVar7 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x1a;
      goto LAB_001559a2;
    }
    bVar4 = true;
    bVar3 = false;
    goto switchD_001550d5_caseD_c;
  case 0x15:
    auVar27[0] = -((*param_2)[5] == DAT_00115f70);
    auVar27[1] = -((*param_2)[6] == UNK_00115f71);
    auVar27[2] = -((*param_2)[7] == UNK_00115f72);
    auVar27[3] = -((*param_2)[8] == UNK_00115f73);
    auVar27[4] = -((*param_2)[9] == UNK_00115f74);
    auVar27[5] = -((*param_2)[10] == UNK_00115f75);
    auVar27[6] = -((*param_2)[0xb] == UNK_00115f76);
    auVar27[7] = -((*param_2)[0xc] == UNK_00115f77);
    auVar27[8] = -((*param_2)[0xd] == UNK_00115f78);
    auVar27[9] = -((*param_2)[0xe] == UNK_00115f79);
    auVar27[10] = -((*param_2)[0xf] == UNK_00115f7a);
    auVar27[0xb] = -(param_2[1][0] == UNK_00115f7b);
    auVar27[0xc] = -(param_2[1][1] == UNK_00115f7c);
    auVar27[0xd] = -(param_2[1][2] == UNK_00115f7d);
    auVar27[0xe] = -(param_2[1][3] == UNK_00115f7e);
    auVar27[0xf] = -(param_2[1][4] == UNK_00115f7f);
    auVar9[0] = -((*param_2)[0] == DAT_00115bd0);
    auVar9[1] = -((*param_2)[1] == UNK_00115bd1);
    auVar9[2] = -((*param_2)[2] == UNK_00115bd2);
    auVar9[3] = -((*param_2)[3] == UNK_00115bd3);
    auVar9[4] = -((*param_2)[4] == UNK_00115bd4);
    auVar9[5] = -((*param_2)[5] == UNK_00115bd5);
    auVar9[6] = -((*param_2)[6] == UNK_00115bd6);
    auVar9[7] = -((*param_2)[7] == UNK_00115bd7);
    auVar9[8] = -((*param_2)[8] == UNK_00115bd8);
    auVar9[9] = -((*param_2)[9] == UNK_00115bd9);
    auVar9[10] = -((*param_2)[10] == UNK_00115bda);
    auVar9[0xb] = -((*param_2)[0xb] == UNK_00115bdb);
    auVar9[0xc] = -((*param_2)[0xc] == UNK_00115bdc);
    auVar9[0xd] = -((*param_2)[0xd] == UNK_00115bdd);
    auVar9[0xe] = -((*param_2)[0xe] == UNK_00115bde);
    auVar9[0xf] = -((*param_2)[0xf] == UNK_00115bdf);
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
      *(undefined1 *)(param_1 + 1) = 0x11;
      goto LAB_001559a2;
    }
    iVar7 = (*(code *)PTR_bcmp_001f11d8)(param_2,"short_close_threshold",param_3);
    if (iVar7 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x1b;
      goto LAB_001559a2;
    }
    bVar3 = true;
  default:
switchD_001550d5_default:
    bVar4 = false;
switchD_001550d5_caseD_c:
    if (param_3 == 0x21) {
      iVar7 = (*(code *)PTR_bcmp_001f11d8)
                        (param_2,"dyn_score_position_ts_threshold_sdyn_score_max_position_ts_s",0x21
                        );
      if (iVar7 == 0) {
        *(undefined1 *)(param_1 + 1) = 0x20;
        goto LAB_001559a2;
      }
LAB_0015576e:
      if (bVar4) {
LAB_0015578a:
        iVar7 = (*(code *)PTR_bcmp_001f11d8)(param_2,"market_volatility_ms",param_3);
        if (iVar7 == 0) {
          *(undefined1 *)(param_1 + 1) = 0x24;
          goto LAB_001559a2;
        }
        bVar6 = true;
      }
      else {
        bVar6 = false;
      }
      bVar5 = false;
    }
    else {
      if (param_3 == 0x1b) {
        auVar39[0] = -((*param_2)[0xb] == DAT_00115ae0);
        auVar39[1] = -((*param_2)[0xc] == UNK_00115ae1);
        auVar39[2] = -((*param_2)[0xd] == UNK_00115ae2);
        auVar39[3] = -((*param_2)[0xe] == UNK_00115ae3);
        auVar39[4] = -((*param_2)[0xf] == UNK_00115ae4);
        auVar39[5] = -(param_2[1][0] == UNK_00115ae5);
        auVar39[6] = -(param_2[1][1] == UNK_00115ae6);
        auVar39[7] = -(param_2[1][2] == UNK_00115ae7);
        auVar39[8] = -(param_2[1][3] == UNK_00115ae8);
        auVar39[9] = -(param_2[1][4] == UNK_00115ae9);
        auVar39[10] = -(param_2[1][5] == UNK_00115aea);
        auVar39[0xb] = -(param_2[1][6] == UNK_00115aeb);
        auVar39[0xc] = -(param_2[1][7] == UNK_00115aec);
        auVar39[0xd] = -(param_2[1][8] == UNK_00115aed);
        auVar39[0xe] = -(param_2[1][9] == UNK_00115aee);
        auVar39[0xf] = -(param_2[1][10] == UNK_00115aef);
        auVar21[0] = -((*param_2)[0] == DAT_00115e10);
        auVar21[1] = -((*param_2)[1] == UNK_00115e11);
        auVar21[2] = -((*param_2)[2] == UNK_00115e12);
        auVar21[3] = -((*param_2)[3] == UNK_00115e13);
        auVar21[4] = -((*param_2)[4] == UNK_00115e14);
        auVar21[5] = -((*param_2)[5] == UNK_00115e15);
        auVar21[6] = -((*param_2)[6] == UNK_00115e16);
        auVar21[7] = -((*param_2)[7] == UNK_00115e17);
        auVar21[8] = -((*param_2)[8] == UNK_00115e18);
        auVar21[9] = -((*param_2)[9] == UNK_00115e19);
        auVar21[10] = -((*param_2)[10] == UNK_00115e1a);
        auVar21[0xb] = -((*param_2)[0xb] == UNK_00115e1b);
        auVar21[0xc] = -((*param_2)[0xc] == UNK_00115e1c);
        auVar21[0xd] = -((*param_2)[0xd] == UNK_00115e1d);
        auVar21[0xe] = -((*param_2)[0xe] == UNK_00115e1e);
        auVar21[0xf] = -((*param_2)[0xf] == UNK_00115e1f);
        auVar21 = auVar21 & auVar39;
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
          *(undefined1 *)(param_1 + 1) = 0x21;
          goto LAB_001559a2;
        }
        auVar40[0] = -((*param_2)[0xb] == DAT_00115b80);
        auVar40[1] = -((*param_2)[0xc] == UNK_00115b81);
        auVar40[2] = -((*param_2)[0xd] == UNK_00115b82);
        auVar40[3] = -((*param_2)[0xe] == UNK_00115b83);
        auVar40[4] = -((*param_2)[0xf] == UNK_00115b84);
        auVar40[5] = -(param_2[1][0] == UNK_00115b85);
        auVar40[6] = -(param_2[1][1] == UNK_00115b86);
        auVar40[7] = -(param_2[1][2] == UNK_00115b87);
        auVar40[8] = -(param_2[1][3] == UNK_00115b88);
        auVar40[9] = -(param_2[1][4] == UNK_00115b89);
        auVar40[10] = -(param_2[1][5] == UNK_00115b8a);
        auVar40[0xb] = -(param_2[1][6] == UNK_00115b8b);
        auVar40[0xc] = -(param_2[1][7] == UNK_00115b8c);
        auVar40[0xd] = -(param_2[1][8] == UNK_00115b8d);
        auVar40[0xe] = -(param_2[1][9] == UNK_00115b8e);
        auVar40[0xf] = -(param_2[1][10] == UNK_00115b8f);
        auVar22[0] = -((*param_2)[0] == DAT_00116110);
        auVar22[1] = -((*param_2)[1] == UNK_00116111);
        auVar22[2] = -((*param_2)[2] == UNK_00116112);
        auVar22[3] = -((*param_2)[3] == UNK_00116113);
        auVar22[4] = -((*param_2)[4] == UNK_00116114);
        auVar22[5] = -((*param_2)[5] == UNK_00116115);
        auVar22[6] = -((*param_2)[6] == UNK_00116116);
        auVar22[7] = -((*param_2)[7] == UNK_00116117);
        auVar22[8] = -((*param_2)[8] == UNK_00116118);
        auVar22[9] = -((*param_2)[9] == UNK_00116119);
        auVar22[10] = -((*param_2)[10] == UNK_0011611a);
        auVar22[0xb] = -((*param_2)[0xb] == UNK_0011611b);
        auVar22[0xc] = -((*param_2)[0xc] == UNK_0011611c);
        auVar22[0xd] = -((*param_2)[0xd] == UNK_0011611d);
        auVar22[0xe] = -((*param_2)[0xe] == UNK_0011611e);
        auVar22[0xf] = -((*param_2)[0xf] == UNK_0011611f);
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
          *(undefined1 *)(param_1 + 1) = 0x23;
          goto LAB_001559a2;
        }
        goto LAB_0015576e;
      }
      if (param_3 == 0x18) {
        uVar1 = *(undefined8 *)param_2[1];
        auVar37[0] = -((char)uVar1 == s_hreshold_00115fa0[0]);
        auVar37[1] = -((char)((ulong)uVar1 >> 8) == s_hreshold_00115fa0[1]);
        auVar37[2] = -((char)((ulong)uVar1 >> 0x10) == s_hreshold_00115fa0[2]);
        auVar37[3] = -((char)((ulong)uVar1 >> 0x18) == s_hreshold_00115fa0[3]);
        auVar37[4] = -((char)((ulong)uVar1 >> 0x20) == s_hreshold_00115fa0[4]);
        auVar37[5] = -((char)((ulong)uVar1 >> 0x28) == s_hreshold_00115fa0[5]);
        auVar37[6] = -((char)((ulong)uVar1 >> 0x30) == s_hreshold_00115fa0[6]);
        auVar37[7] = -((char)((ulong)uVar1 >> 0x38) == s_hreshold_00115fa0[7]);
        auVar37[8] = -(s_hreshold_00115fa0[8] == '\0');
        auVar37[9] = -(s_hreshold_00115fa0[9] == '\0');
        auVar37[10] = -(s_hreshold_00115fa0[10] == '\0');
        auVar37[0xb] = -(s_hreshold_00115fa0[0xb] == '\0');
        auVar37[0xc] = -(UNK_00115fac == '\0');
        auVar37[0xd] = -(UNK_00115fad == '\0');
        auVar37[0xe] = -(UNK_00115fae == '\0');
        auVar37[0xf] = -(UNK_00115faf == '\0');
        auVar19[0] = -((*param_2)[0] == DAT_00115e20);
        auVar19[1] = -((*param_2)[1] == UNK_00115e21);
        auVar19[2] = -((*param_2)[2] == UNK_00115e22);
        auVar19[3] = -((*param_2)[3] == UNK_00115e23);
        auVar19[4] = -((*param_2)[4] == UNK_00115e24);
        auVar19[5] = -((*param_2)[5] == UNK_00115e25);
        auVar19[6] = -((*param_2)[6] == UNK_00115e26);
        auVar19[7] = -((*param_2)[7] == UNK_00115e27);
        auVar19[8] = -((*param_2)[8] == UNK_00115e28);
        auVar19[9] = -((*param_2)[9] == UNK_00115e29);
        auVar19[10] = -((*param_2)[10] == UNK_00115e2a);
        auVar19[0xb] = -((*param_2)[0xb] == UNK_00115e2b);
        auVar19[0xc] = -((*param_2)[0xc] == UNK_00115e2c);
        auVar19[0xd] = -((*param_2)[0xd] == UNK_00115e2d);
        auVar19[0xe] = -((*param_2)[0xe] == UNK_00115e2e);
        auVar19[0xf] = -((*param_2)[0xf] == UNK_00115e2f);
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
          *(undefined1 *)(param_1 + 1) = 0x1d;
          goto LAB_001559a2;
        }
        uVar1 = *(undefined8 *)param_2[1];
        auVar38[0] = -((char)uVar1 == s_hreshold_00115fa0[0]);
        auVar38[1] = -((char)((ulong)uVar1 >> 8) == s_hreshold_00115fa0[1]);
        auVar38[2] = -((char)((ulong)uVar1 >> 0x10) == s_hreshold_00115fa0[2]);
        auVar38[3] = -((char)((ulong)uVar1 >> 0x18) == s_hreshold_00115fa0[3]);
        auVar38[4] = -((char)((ulong)uVar1 >> 0x20) == s_hreshold_00115fa0[4]);
        auVar38[5] = -((char)((ulong)uVar1 >> 0x28) == s_hreshold_00115fa0[5]);
        auVar38[6] = -((char)((ulong)uVar1 >> 0x30) == s_hreshold_00115fa0[6]);
        auVar38[7] = -((char)((ulong)uVar1 >> 0x38) == s_hreshold_00115fa0[7]);
        auVar38[8] = -(s_hreshold_00115fa0[8] == '\0');
        auVar38[9] = -(s_hreshold_00115fa0[9] == '\0');
        auVar38[10] = -(s_hreshold_00115fa0[10] == '\0');
        auVar38[0xb] = -(s_hreshold_00115fa0[0xb] == '\0');
        auVar38[0xc] = -(UNK_00115fac == '\0');
        auVar38[0xd] = -(UNK_00115fad == '\0');
        auVar38[0xe] = -(UNK_00115fae == '\0');
        auVar38[0xf] = -(UNK_00115faf == '\0');
        auVar20[0] = -((*param_2)[0] == DAT_00115be0);
        auVar20[1] = -((*param_2)[1] == UNK_00115be1);
        auVar20[2] = -((*param_2)[2] == UNK_00115be2);
        auVar20[3] = -((*param_2)[3] == UNK_00115be3);
        auVar20[4] = -((*param_2)[4] == UNK_00115be4);
        auVar20[5] = -((*param_2)[5] == UNK_00115be5);
        auVar20[6] = -((*param_2)[6] == UNK_00115be6);
        auVar20[7] = -((*param_2)[7] == UNK_00115be7);
        auVar20[8] = -((*param_2)[8] == UNK_00115be8);
        auVar20[9] = -((*param_2)[9] == UNK_00115be9);
        auVar20[10] = -((*param_2)[10] == UNK_00115bea);
        auVar20[0xb] = -((*param_2)[0xb] == UNK_00115beb);
        auVar20[0xc] = -((*param_2)[0xc] == UNK_00115bec);
        auVar20[0xd] = -((*param_2)[0xd] == UNK_00115bed);
        auVar20[0xe] = -((*param_2)[0xe] == UNK_00115bee);
        auVar20[0xf] = -((*param_2)[0xf] == UNK_00115bef);
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
          *(undefined1 *)(param_1 + 1) = 0x1e;
          goto LAB_001559a2;
        }
      }
      if (bVar3) {
        iVar7 = (*(code *)PTR_bcmp_001f11d8)
                          (param_2,"dyn_score_delta_scoreuse_dynamic_volspread_ratio",param_3);
        if (iVar7 == 0) {
          *(undefined1 *)(param_1 + 1) = 0x22;
          goto LAB_001559a2;
        }
        bVar3 = true;
        goto LAB_0015576e;
      }
      bVar3 = false;
      bVar6 = false;
      bVar5 = false;
      if (bVar4) goto LAB_0015578a;
    }
LAB_001557aa:
    if (param_3 == 0x1e) {
      auVar41[0] = -((*param_2)[0xe] == DAT_00115da0);
      auVar41[1] = -((*param_2)[0xf] == UNK_00115da1);
      auVar41[2] = -(param_2[1][0] == UNK_00115da2);
      auVar41[3] = -(param_2[1][1] == UNK_00115da3);
      auVar41[4] = -(param_2[1][2] == UNK_00115da4);
      auVar41[5] = -(param_2[1][3] == UNK_00115da5);
      auVar41[6] = -(param_2[1][4] == UNK_00115da6);
      auVar41[7] = -(param_2[1][5] == UNK_00115da7);
      auVar41[8] = -(param_2[1][6] == UNK_00115da8);
      auVar41[9] = -(param_2[1][7] == UNK_00115da9);
      auVar41[10] = -(param_2[1][8] == UNK_00115daa);
      auVar41[0xb] = -(param_2[1][9] == UNK_00115dab);
      auVar41[0xc] = -(param_2[1][10] == UNK_00115dac);
      auVar41[0xd] = -(param_2[1][0xb] == UNK_00115dad);
      auVar41[0xe] = -(param_2[1][0xc] == UNK_00115dae);
      auVar41[0xf] = -(param_2[1][0xd] == UNK_00115daf);
      auVar23[0] = -((*param_2)[0] == DAT_00115c30);
      auVar23[1] = -((*param_2)[1] == UNK_00115c31);
      auVar23[2] = -((*param_2)[2] == UNK_00115c32);
      auVar23[3] = -((*param_2)[3] == UNK_00115c33);
      auVar23[4] = -((*param_2)[4] == UNK_00115c34);
      auVar23[5] = -((*param_2)[5] == UNK_00115c35);
      auVar23[6] = -((*param_2)[6] == UNK_00115c36);
      auVar23[7] = -((*param_2)[7] == UNK_00115c37);
      auVar23[8] = -((*param_2)[8] == UNK_00115c38);
      auVar23[9] = -((*param_2)[9] == UNK_00115c39);
      auVar23[10] = -((*param_2)[10] == UNK_00115c3a);
      auVar23[0xb] = -((*param_2)[0xb] == UNK_00115c3b);
      auVar23[0xc] = -((*param_2)[0xc] == UNK_00115c3c);
      auVar23[0xd] = -((*param_2)[0xd] == UNK_00115c3d);
      auVar23[0xe] = -((*param_2)[0xe] == UNK_00115c3e);
      auVar23[0xf] = -((*param_2)[0xf] == UNK_00115c3f);
      auVar23 = auVar23 & auVar41;
      bVar4 = true;
      if ((ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) |
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
                  (ushort)(byte)(auVar23[0xf] >> 7) << 0xf) == 0xffff) {
        *(undefined1 *)(param_1 + 1) = 0x26;
        goto LAB_001559a2;
      }
    }
    else {
LAB_001557e6:
      bVar4 = false;
    }
    if (param_3 == 0x1f) {
      auVar42[0] = -((*param_2)[0xf] == s__pending_time_ms_00115f10[0]);
      auVar42[1] = -(param_2[1][0] == s__pending_time_ms_00115f10[1]);
      auVar42[2] = -(param_2[1][1] == s__pending_time_ms_00115f10[2]);
      auVar42[3] = -(param_2[1][2] == s__pending_time_ms_00115f10[3]);
      auVar42[4] = -(param_2[1][3] == s__pending_time_ms_00115f10[4]);
      auVar42[5] = -(param_2[1][4] == s__pending_time_ms_00115f10[5]);
      auVar42[6] = -(param_2[1][5] == s__pending_time_ms_00115f10[6]);
      auVar42[7] = -(param_2[1][6] == s__pending_time_ms_00115f10[7]);
      auVar42[8] = -(param_2[1][7] == s__pending_time_ms_00115f10[8]);
      auVar42[9] = -(param_2[1][8] == s__pending_time_ms_00115f10[9]);
      auVar42[10] = -(param_2[1][9] == s__pending_time_ms_00115f10[10]);
      auVar42[0xb] = -(param_2[1][10] == s__pending_time_ms_00115f10[0xb]);
      auVar42[0xc] = -(param_2[1][0xb] == s__pending_time_ms_00115f10[0xc]);
      auVar42[0xd] = -(param_2[1][0xc] == s__pending_time_ms_00115f10[0xd]);
      auVar42[0xe] = -(param_2[1][0xd] == s__pending_time_ms_00115f10[0xe]);
      auVar42[0xf] = -(param_2[1][0xe] == s__pending_time_ms_00115f10[0xf]);
      auVar24[0] = -((*param_2)[0] == DAT_00116210);
      auVar24[1] = -((*param_2)[1] == UNK_00116211);
      auVar24[2] = -((*param_2)[2] == UNK_00116212);
      auVar24[3] = -((*param_2)[3] == UNK_00116213);
      auVar24[4] = -((*param_2)[4] == UNK_00116214);
      auVar24[5] = -((*param_2)[5] == UNK_00116215);
      auVar24[6] = -((*param_2)[6] == UNK_00116216);
      auVar24[7] = -((*param_2)[7] == UNK_00116217);
      auVar24[8] = -((*param_2)[8] == UNK_00116218);
      auVar24[9] = -((*param_2)[9] == UNK_00116219);
      auVar24[10] = -((*param_2)[10] == UNK_0011621a);
      auVar24[0xb] = -((*param_2)[0xb] == UNK_0011621b);
      auVar24[0xc] = -((*param_2)[0xc] == UNK_0011621c);
      auVar24[0xd] = -((*param_2)[0xd] == UNK_0011621d);
      auVar24[0xe] = -((*param_2)[0xe] == UNK_0011621e);
      auVar24[0xf] = -((*param_2)[0xf] == UNK_0011621f);
      auVar24 = auVar24 & auVar42;
      if ((ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
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
                   (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar24[0xf] >> 7) << 0xf) == 0xffff) {
        *(undefined1 *)(param_1 + 1) = 0x28;
        goto LAB_001559a2;
      }
      if (bVar5) {
LAB_0015585d:
        iVar7 = (*(code *)PTR_bcmp_001f11d8)(param_2,"maker_ticks_inside",param_3);
        if (iVar7 == 0) {
          *(undefined1 *)(param_1 + 1) = 0x2a;
          goto LAB_001559a2;
        }
        goto LAB_00155878;
      }
LAB_00155902:
      if ((bVar3) &&
         (iVar7 = (*(code *)PTR_bcmp_001f11d8)(param_2,"watcher_strategy_name",param_3), iVar7 == 0)
         ) {
        *(undefined1 *)(param_1 + 1) = 0x2e;
        goto LAB_001559a2;
      }
      if ((!bVar6) ||
         (iVar7 = (*(code *)PTR_bcmp_001f11d8)(param_2,"watcher_account_name",param_3), iVar7 != 0))
      {
        if (param_3 == 6) {
          if (*(short *)(*param_2 + 4) == 0x3165 && *(int *)*param_2 == 0x73616870) {
            *(undefined1 *)(param_1 + 1) = 0x34;
            goto LAB_001559a2;
          }
          if (*(short *)(*param_2 + 4) == 0x3265 && *(int *)*param_2 == 0x73616870) {
            *(undefined1 *)(param_1 + 1) = 0x35;
            goto LAB_001559a2;
          }
          if (*(short *)(*param_2 + 4) == 0x3365 && *(int *)*param_2 == 0x73616870) {
            *(undefined1 *)(param_1 + 1) = 0x36;
            goto LAB_001559a2;
          }
        }
        break;
      }
    }
    else {
      if ((bVar4) &&
         (auVar43[0] = -((*param_2)[0xe] == DAT_00115fb0),
         auVar43[1] = -((*param_2)[0xf] == UNK_00115fb1),
         auVar43[2] = -(param_2[1][0] == UNK_00115fb2),
         auVar43[3] = -(param_2[1][1] == UNK_00115fb3),
         auVar43[4] = -(param_2[1][2] == UNK_00115fb4),
         auVar43[5] = -(param_2[1][3] == UNK_00115fb5),
         auVar43[6] = -(param_2[1][4] == UNK_00115fb6),
         auVar43[7] = -(param_2[1][5] == UNK_00115fb7),
         auVar43[8] = -(param_2[1][6] == UNK_00115fb8),
         auVar43[9] = -(param_2[1][7] == UNK_00115fb9),
         auVar43[10] = -(param_2[1][8] == UNK_00115fba),
         auVar43[0xb] = -(param_2[1][9] == UNK_00115fbb),
         auVar43[0xc] = -(param_2[1][10] == UNK_00115fbc),
         auVar43[0xd] = -(param_2[1][0xb] == UNK_00115fbd),
         auVar43[0xe] = -(param_2[1][0xc] == UNK_00115fbe),
         auVar43[0xf] = -(param_2[1][0xd] == UNK_00115fbf),
         auVar25[0] = -((*param_2)[0] == DAT_00116230),
         auVar25[1] = -((*param_2)[1] == UNK_00116231),
         auVar25[2] = -((*param_2)[2] == UNK_00116232),
         auVar25[3] = -((*param_2)[3] == UNK_00116233),
         auVar25[4] = -((*param_2)[4] == UNK_00116234),
         auVar25[5] = -((*param_2)[5] == UNK_00116235),
         auVar25[6] = -((*param_2)[6] == UNK_00116236),
         auVar25[7] = -((*param_2)[7] == UNK_00116237),
         auVar25[8] = -((*param_2)[8] == UNK_00116238),
         auVar25[9] = -((*param_2)[9] == UNK_00116239),
         auVar25[10] = -((*param_2)[10] == UNK_0011623a),
         auVar25[0xb] = -((*param_2)[0xb] == UNK_0011623b),
         auVar25[0xc] = -((*param_2)[0xc] == UNK_0011623c),
         auVar25[0xd] = -((*param_2)[0xd] == UNK_0011623d),
         auVar25[0xe] = -((*param_2)[0xe] == UNK_0011623e),
         auVar25[0xf] = -((*param_2)[0xf] == UNK_0011623f), auVar25 = auVar25 & auVar43,
         (ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) | (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(byte)(auVar25[0xf] >> 7) << 0xf) == 0xffff)) {
        *(undefined1 *)(param_1 + 1) = 0x29;
        goto LAB_001559a2;
      }
      if (bVar5) goto LAB_0015585d;
LAB_00155878:
      if (param_3 != 0xc) goto LAB_00155902;
      if (*(int *)(*param_2 + 8) == 0x65736168 && *(long *)*param_2 == 0x705f747265766e69) {
        *(undefined1 *)(param_1 + 1) = 0x2d;
        goto LAB_001559a2;
      }
      if ((!bVar6) ||
         (iVar7 = (*(code *)PTR_bcmp_001f11d8)(param_2,"watcher_account_name",0xc), iVar7 != 0)) {
        iVar7 = (*(code *)PTR_bcmp_001f11d8)(param_2,"enter_phase2exit_phase2",0xc);
        if (iVar7 == 0) {
          *(undefined1 *)(param_1 + 1) = 0x30;
          goto LAB_001559a2;
        }
        iVar7 = (*(code *)PTR_bcmp_001f11d8)
                          (param_2,"enter_phase3exit_phase3phase1phase2phase3",0xc);
        if (iVar7 == 0) {
          *(undefined1 *)(param_1 + 1) = 0x32;
          goto LAB_001559a2;
        }
        break;
      }
    }
    *(undefined1 *)(param_1 + 1) = 0x2f;
    goto LAB_001559a2;
  case 0x16:
    auVar29[0] = -((*param_2)[6] == DAT_00115b60);
    auVar29[1] = -((*param_2)[7] == UNK_00115b61);
    auVar29[2] = -((*param_2)[8] == UNK_00115b62);
    auVar29[3] = -((*param_2)[9] == UNK_00115b63);
    auVar29[4] = -((*param_2)[10] == UNK_00115b64);
    auVar29[5] = -((*param_2)[0xb] == UNK_00115b65);
    auVar29[6] = -((*param_2)[0xc] == UNK_00115b66);
    auVar29[7] = -((*param_2)[0xd] == UNK_00115b67);
    auVar29[8] = -((*param_2)[0xe] == UNK_00115b68);
    auVar29[9] = -((*param_2)[0xf] == UNK_00115b69);
    auVar29[10] = -(param_2[1][0] == UNK_00115b6a);
    auVar29[0xb] = -(param_2[1][1] == UNK_00115b6b);
    auVar29[0xc] = -(param_2[1][2] == UNK_00115b6c);
    auVar29[0xd] = -(param_2[1][3] == UNK_00115b6d);
    auVar29[0xe] = -(param_2[1][4] == UNK_00115b6e);
    auVar29[0xf] = -(param_2[1][5] == UNK_00115b6f);
    auVar11[0] = -((*param_2)[0] == DAT_00115ce0);
    auVar11[1] = -((*param_2)[1] == UNK_00115ce1);
    auVar11[2] = -((*param_2)[2] == UNK_00115ce2);
    auVar11[3] = -((*param_2)[3] == UNK_00115ce3);
    auVar11[4] = -((*param_2)[4] == UNK_00115ce4);
    auVar11[5] = -((*param_2)[5] == UNK_00115ce5);
    auVar11[6] = -((*param_2)[6] == UNK_00115ce6);
    auVar11[7] = -((*param_2)[7] == UNK_00115ce7);
    auVar11[8] = -((*param_2)[8] == UNK_00115ce8);
    auVar11[9] = -((*param_2)[9] == UNK_00115ce9);
    auVar11[10] = -((*param_2)[10] == UNK_00115cea);
    auVar11[0xb] = -((*param_2)[0xb] == UNK_00115ceb);
    auVar11[0xc] = -((*param_2)[0xc] == UNK_00115cec);
    auVar11[0xd] = -((*param_2)[0xd] == UNK_00115ced);
    auVar11[0xe] = -((*param_2)[0xe] == UNK_00115cee);
    auVar11[0xf] = -((*param_2)[0xf] == UNK_00115cef);
    auVar11 = auVar11 & auVar29;
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
      *(undefined1 *)(param_1 + 1) = 7;
      goto LAB_001559a2;
    }
    iVar7 = (*(code *)PTR_bcmp_001f11d8)(param_2,"high_taker_half_spread",param_3);
    if (iVar7 == 0) {
      *(undefined1 *)(param_1 + 1) = 10;
      goto LAB_001559a2;
    }
    break;
  case 0x17:
    auVar28[0] = -((*param_2)[7] == DAT_00116060);
    auVar28[1] = -((*param_2)[8] == UNK_00116061);
    auVar28[2] = -((*param_2)[9] == UNK_00116062);
    auVar28[3] = -((*param_2)[10] == UNK_00116063);
    auVar28[4] = -((*param_2)[0xb] == UNK_00116064);
    auVar28[5] = -((*param_2)[0xc] == UNK_00116065);
    auVar28[6] = -((*param_2)[0xd] == UNK_00116066);
    auVar28[7] = -((*param_2)[0xe] == UNK_00116067);
    auVar28[8] = -((*param_2)[0xf] == UNK_00116068);
    auVar28[9] = -(param_2[1][0] == UNK_00116069);
    auVar28[10] = -(param_2[1][1] == UNK_0011606a);
    auVar28[0xb] = -(param_2[1][2] == UNK_0011606b);
    auVar28[0xc] = -(param_2[1][3] == UNK_0011606c);
    auVar28[0xd] = -(param_2[1][4] == UNK_0011606d);
    auVar28[0xe] = -(param_2[1][5] == UNK_0011606e);
    auVar28[0xf] = -(param_2[1][6] == UNK_0011606f);
    auVar10[0] = -((*param_2)[0] == DAT_00115c20);
    auVar10[1] = -((*param_2)[1] == UNK_00115c21);
    auVar10[2] = -((*param_2)[2] == UNK_00115c22);
    auVar10[3] = -((*param_2)[3] == UNK_00115c23);
    auVar10[4] = -((*param_2)[4] == UNK_00115c24);
    auVar10[5] = -((*param_2)[5] == UNK_00115c25);
    auVar10[6] = -((*param_2)[6] == UNK_00115c26);
    auVar10[7] = -((*param_2)[7] == UNK_00115c27);
    auVar10[8] = -((*param_2)[8] == UNK_00115c28);
    auVar10[9] = -((*param_2)[9] == UNK_00115c29);
    auVar10[10] = -((*param_2)[10] == UNK_00115c2a);
    auVar10[0xb] = -((*param_2)[0xb] == UNK_00115c2b);
    auVar10[0xc] = -((*param_2)[0xc] == UNK_00115c2c);
    auVar10[0xd] = -((*param_2)[0xd] == UNK_00115c2d);
    auVar10[0xe] = -((*param_2)[0xe] == UNK_00115c2e);
    auVar10[0xf] = -((*param_2)[0xf] == UNK_00115c2f);
    auVar10 = auVar10 & auVar28;
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
      *(undefined1 *)(param_1 + 1) = 0xf;
      goto LAB_001559a2;
    }
    iVar7 = (*(code *)PTR_bcmp_001f11d8)
                      (param_2,
                       "low_long_open_thresholdlow_long_close_thresholdlow_short_open_threshold",
                       param_3);
    if (iVar7 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x1c;
      goto LAB_001559a2;
    }
LAB_0015564c:
    bVar3 = false;
    goto switchD_001550d5_default;
  case 0x19:
    auVar26[0] = -((*param_2)[9] == s_p_half_spread_bp_00116020[0]);
    auVar26[1] = -((*param_2)[10] == s_p_half_spread_bp_00116020[1]);
    auVar26[2] = -((*param_2)[0xb] == s_p_half_spread_bp_00116020[2]);
    auVar26[3] = -((*param_2)[0xc] == s_p_half_spread_bp_00116020[3]);
    auVar26[4] = -((*param_2)[0xd] == s_p_half_spread_bp_00116020[4]);
    auVar26[5] = -((*param_2)[0xe] == s_p_half_spread_bp_00116020[5]);
    auVar26[6] = -((*param_2)[0xf] == s_p_half_spread_bp_00116020[6]);
    auVar26[7] = -(param_2[1][0] == s_p_half_spread_bp_00116020[7]);
    auVar26[8] = -(param_2[1][1] == s_p_half_spread_bp_00116020[8]);
    auVar26[9] = -(param_2[1][2] == s_p_half_spread_bp_00116020[9]);
    auVar26[10] = -(param_2[1][3] == s_p_half_spread_bp_00116020[10]);
    auVar26[0xb] = -(param_2[1][4] == s_p_half_spread_bp_00116020[0xb]);
    auVar26[0xc] = -(param_2[1][5] == s_p_half_spread_bp_00116020[0xc]);
    auVar26[0xd] = -(param_2[1][6] == s_p_half_spread_bp_00116020[0xd]);
    auVar26[0xe] = -(param_2[1][7] == s_p_half_spread_bp_00116020[0xe]);
    auVar26[0xf] = -(param_2[1][8] == s_p_half_spread_bp_00116020[0xf]);
    auVar8[0] = -((*param_2)[0] == DAT_00116200);
    auVar8[1] = -((*param_2)[1] == UNK_00116201);
    auVar8[2] = -((*param_2)[2] == UNK_00116202);
    auVar8[3] = -((*param_2)[3] == UNK_00116203);
    auVar8[4] = -((*param_2)[4] == UNK_00116204);
    auVar8[5] = -((*param_2)[5] == UNK_00116205);
    auVar8[6] = -((*param_2)[6] == UNK_00116206);
    auVar8[7] = -((*param_2)[7] == UNK_00116207);
    auVar8[8] = -((*param_2)[8] == UNK_00116208);
    auVar8[9] = -((*param_2)[9] == UNK_00116209);
    auVar8[10] = -((*param_2)[10] == UNK_0011620a);
    auVar8[0xb] = -((*param_2)[0xb] == UNK_0011620b);
    auVar8[0xc] = -((*param_2)[0xc] == UNK_0011620c);
    auVar8[0xd] = -((*param_2)[0xd] == UNK_0011620d);
    auVar8[0xe] = -((*param_2)[0xe] == UNK_0011620e);
    auVar8[0xf] = -((*param_2)[0xf] == UNK_0011620f);
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
      *(undefined1 *)(param_1 + 1) = 0xd;
      goto LAB_001559a2;
    }
    iVar7 = (*(code *)PTR_bcmp_001f11d8)(param_2,"low_short_close_threshold",param_3);
    if (iVar7 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x1f;
      goto LAB_001559a2;
    }
    iVar7 = (*(code *)PTR_bcmp_001f11d8)(param_2,"maker_cancel_range_levels",param_3);
    if (iVar7 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x2b;
      goto LAB_001559a2;
    }
LAB_001551f0:
    bVar3 = false;
    bVar6 = false;
    goto LAB_00155878;
  }
  *(undefined1 *)(param_1 + 1) = 0x37;
LAB_001559a2:
  *param_1 = 2;
  return param_1;
}


