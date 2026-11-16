// ELF address 0x000000000003da40; <strategy_comm3_1::_::<impl serde_core::de::Deserialize for strategy_comm3_1::Comm3Params>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_str

/* _<strategy_comm3_1::_::<impl serde_core::de::Deserialize for
   strategy_comm3_1::Comm3Params>::deserialize::__FieldVisitor as
   serde_core::de::Visitor>::visit_str */

undefined8 * __rustcall
_<strategy_comm3_1::_::<impl_serde_core::de::Deserialize_for_strategy_comm3_1::Comm3Params>::deserialize::__FieldVisitor_as_serde_core::de::Visitor>
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
  
  bVar4 = false;
  bVar3 = false;
  switch(param_3) {
  case 8:
    if (*(long *)*param_2 == 0x656c69746e617571) {
      *(undefined1 *)(param_1 + 1) = 5;
      goto LAB_0013e240;
    }
    break;
  case 9:
    if ((*param_2)[8] == 'a' && *(long *)*param_2 == 0x68706c615f317670) {
      *(undefined1 *)(param_1 + 1) = 1;
      goto LAB_0013e240;
    }
    if ((*param_2)[8] == 'e' && *(long *)*param_2 == 0x7461725f65746f76) {
      *(undefined1 *)(param_1 + 1) = 4;
      goto LAB_0013e240;
    }
    break;
  case 10:
    if (*(short *)(*param_2 + 8) == 0x6168 && *(long *)*param_2 == 0x706c615f74736f63) {
      *(undefined1 *)(param_1 + 1) = 2;
      goto LAB_0013e240;
    }
    if (*(short *)(*param_2 + 8) == 0x6574 && *(long *)*param_2 == 0x61675f6863756f74) {
      *(undefined1 *)(param_1 + 1) = 0xf;
      goto LAB_0013e240;
    }
    iVar7 = (*(code *)PTR_bcmp_001de1a8)
                      (param_2,
                       "low_actionmaker_order_max_pending_time_msmax_maker_pending_vol_on_depth");
    if (iVar7 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x26;
      goto LAB_0013e240;
    }
    break;
  case 0xb:
    if (*(long *)(*param_2 + 3) == 0x65646f6d5f6c616e && *(long *)*param_2 == 0x6d5f6c616e676973) {
      *(undefined1 *)(param_1 + 1) = 0;
      goto LAB_0013e240;
    }
    break;
  case 0xc:
  case 0xf:
  case 0x11:
    goto switchD_0013da6b_caseD_c;
  case 0xd:
    if (*(long *)(*param_2 + 5) == 0x6b5f7265766f635f && *(long *)*param_2 == 0x6f635f72656b6174) {
      *(undefined1 *)(param_1 + 1) = 0xc;
      goto LAB_0013e240;
    }
    break;
  case 0xe:
    if (*(long *)(*param_2 + 6) == 0x657461725f72656b && *(long *)*param_2 == 0x656b61745f78616d) {
      *(undefined1 *)(param_1 + 1) = 9;
      goto LAB_0013e240;
    }
    iVar7 = (*(code *)PTR_bcmp_001de1a8)(param_2,"taker_mult_maxtaker_cover_k");
    if (iVar7 == 0) {
      *(undefined1 *)(param_1 + 1) = 0xb;
      goto LAB_0013e240;
    }
    iVar7 = (*(code *)PTR_bcmp_001de1a8)
                      (param_2,
                       "trade_slipperyclose_position_block_mstouch_gatetouch_gate_timeout_msmax_single_add_volmax_single_add_amtmax_single_net_volmax_single_net_amtmax_single_close_volmax_single_close_amt"
                       ,param_3);
    if (iVar7 == 0) {
      *(undefined1 *)(param_1 + 1) = 0xd;
      goto LAB_0013e240;
    }
    break;
  case 0x10:
    auVar11[0] = -((*param_2)[0] == DAT_001176f0);
    auVar11[1] = -((*param_2)[1] == UNK_001176f1);
    auVar11[2] = -((*param_2)[2] == UNK_001176f2);
    auVar11[3] = -((*param_2)[3] == UNK_001176f3);
    auVar11[4] = -((*param_2)[4] == UNK_001176f4);
    auVar11[5] = -((*param_2)[5] == UNK_001176f5);
    auVar11[6] = -((*param_2)[6] == UNK_001176f6);
    auVar11[7] = -((*param_2)[7] == UNK_001176f7);
    auVar11[8] = -((*param_2)[8] == UNK_001176f8);
    auVar11[9] = -((*param_2)[9] == UNK_001176f9);
    auVar11[10] = -((*param_2)[10] == UNK_001176fa);
    auVar11[0xb] = -((*param_2)[0xb] == UNK_001176fb);
    auVar11[0xc] = -((*param_2)[0xc] == UNK_001176fc);
    auVar11[0xd] = -((*param_2)[0xd] == UNK_001176fd);
    auVar11[0xe] = -((*param_2)[0xe] == UNK_001176fe);
    auVar11[0xf] = -((*param_2)[0xf] == UNK_001176ff);
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
                 (ushort)(SUB161(auVar11 >> 0x77,0) & 1) << 0xe | (ushort)(auVar11[0xf] >> 7) << 0xf
                ) == 0xffff) {
      *(undefined1 *)(param_1 + 1) = 6;
      goto LAB_0013e240;
    }
    break;
  case 0x12:
    auVar12[0] = -((*param_2)[0] == s_max_single_add_v_00117790[0]);
    auVar12[1] = -((*param_2)[1] == s_max_single_add_v_00117790[1]);
    auVar12[2] = -((*param_2)[2] == s_max_single_add_v_00117790[2]);
    auVar12[3] = -((*param_2)[3] == s_max_single_add_v_00117790[3]);
    auVar12[4] = -((*param_2)[4] == s_max_single_add_v_00117790[4]);
    auVar12[5] = -((*param_2)[5] == s_max_single_add_v_00117790[5]);
    auVar12[6] = -((*param_2)[6] == s_max_single_add_v_00117790[6]);
    auVar12[7] = -((*param_2)[7] == s_max_single_add_v_00117790[7]);
    auVar12[8] = -((*param_2)[8] == s_max_single_add_v_00117790[8]);
    auVar12[9] = -((*param_2)[9] == s_max_single_add_v_00117790[9]);
    auVar12[10] = -((*param_2)[10] == s_max_single_add_v_00117790[10]);
    auVar12[0xb] = -((*param_2)[0xb] == s_max_single_add_v_00117790[0xb]);
    auVar12[0xc] = -((*param_2)[0xc] == s_max_single_add_v_00117790[0xc]);
    auVar12[0xd] = -((*param_2)[0xd] == s_max_single_add_v_00117790[0xd]);
    auVar12[0xe] = -((*param_2)[0xe] == s_max_single_add_v_00117790[0xe]);
    auVar12[0xf] = -((*param_2)[0xf] == s_max_single_add_v_00117790[0xf]);
    auVar29[0] = -((char)*(undefined2 *)param_2[1] == s_ol_00117410[0]);
    auVar29[1] = -((char)((ushort)*(undefined2 *)param_2[1] >> 8) == s_ol_00117410[1]);
    auVar29[2] = -(s_ol_00117410[2] == '\0');
    auVar29[3] = -(s_ol_00117410[3] == '\0');
    auVar29[4] = -(UNK_00117414 == '\0');
    auVar29[5] = -(UNK_00117415 == '\0');
    auVar29[6] = -(UNK_00117416 == '\0');
    auVar29[7] = -(UNK_00117417 == '\0');
    auVar29[8] = -(UNK_00117418 == '\0');
    auVar29[9] = -(UNK_00117419 == '\0');
    auVar29[10] = -(UNK_0011741a == '\0');
    auVar29[0xb] = -(UNK_0011741b == '\0');
    auVar29[0xc] = -(UNK_0011741c == '\0');
    auVar29[0xd] = -(UNK_0011741d == '\0');
    auVar29[0xe] = -(UNK_0011741e == '\0');
    auVar29[0xf] = -(UNK_0011741f == '\0');
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
      *(undefined1 *)(param_1 + 1) = 0x11;
      goto LAB_0013e240;
    }
    auVar13[0] = -((*param_2)[0] == DAT_001176e0);
    auVar13[1] = -((*param_2)[1] == UNK_001176e1);
    auVar13[2] = -((*param_2)[2] == UNK_001176e2);
    auVar13[3] = -((*param_2)[3] == UNK_001176e3);
    auVar13[4] = -((*param_2)[4] == UNK_001176e4);
    auVar13[5] = -((*param_2)[5] == UNK_001176e5);
    auVar13[6] = -((*param_2)[6] == UNK_001176e6);
    auVar13[7] = -((*param_2)[7] == UNK_001176e7);
    auVar13[8] = -((*param_2)[8] == UNK_001176e8);
    auVar13[9] = -((*param_2)[9] == UNK_001176e9);
    auVar13[10] = -((*param_2)[10] == UNK_001176ea);
    auVar13[0xb] = -((*param_2)[0xb] == UNK_001176eb);
    auVar13[0xc] = -((*param_2)[0xc] == UNK_001176ec);
    auVar13[0xd] = -((*param_2)[0xd] == UNK_001176ed);
    auVar13[0xe] = -((*param_2)[0xe] == UNK_001176ee);
    auVar13[0xf] = -((*param_2)[0xf] == UNK_001176ef);
    auVar30[0] = -((char)*(undefined2 *)param_2[1] == DAT_00117a20);
    auVar30[1] = -((char)((ushort)*(undefined2 *)param_2[1] >> 8) == UNK_00117a21);
    auVar30[2] = -(UNK_00117a22 == '\0');
    auVar30[3] = -(UNK_00117a23 == '\0');
    auVar30[4] = -(UNK_00117a24 == '\0');
    auVar30[5] = -(UNK_00117a25 == '\0');
    auVar30[6] = -(UNK_00117a26 == '\0');
    auVar30[7] = -(UNK_00117a27 == '\0');
    auVar30[8] = -(UNK_00117a28 == '\0');
    auVar30[9] = -(UNK_00117a29 == '\0');
    auVar30[10] = -(UNK_00117a2a == '\0');
    auVar30[0xb] = -(UNK_00117a2b == '\0');
    auVar30[0xc] = -(UNK_00117a2c == '\0');
    auVar30[0xd] = -(UNK_00117a2d == '\0');
    auVar30[0xe] = -(UNK_00117a2e == '\0');
    auVar30[0xf] = -(UNK_00117a2f == '\0');
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
      goto LAB_0013e240;
    }
    auVar14[0] = -((*param_2)[0] == s_max_single_net_v_00117720[0]);
    auVar14[1] = -((*param_2)[1] == s_max_single_net_v_00117720[1]);
    auVar14[2] = -((*param_2)[2] == s_max_single_net_v_00117720[2]);
    auVar14[3] = -((*param_2)[3] == s_max_single_net_v_00117720[3]);
    auVar14[4] = -((*param_2)[4] == s_max_single_net_v_00117720[4]);
    auVar14[5] = -((*param_2)[5] == s_max_single_net_v_00117720[5]);
    auVar14[6] = -((*param_2)[6] == s_max_single_net_v_00117720[6]);
    auVar14[7] = -((*param_2)[7] == s_max_single_net_v_00117720[7]);
    auVar14[8] = -((*param_2)[8] == s_max_single_net_v_00117720[8]);
    auVar14[9] = -((*param_2)[9] == s_max_single_net_v_00117720[9]);
    auVar14[10] = -((*param_2)[10] == s_max_single_net_v_00117720[10]);
    auVar14[0xb] = -((*param_2)[0xb] == s_max_single_net_v_00117720[0xb]);
    auVar14[0xc] = -((*param_2)[0xc] == s_max_single_net_v_00117720[0xc]);
    auVar14[0xd] = -((*param_2)[0xd] == s_max_single_net_v_00117720[0xd]);
    auVar14[0xe] = -((*param_2)[0xe] == s_max_single_net_v_00117720[0xe]);
    auVar14[0xf] = -((*param_2)[0xf] == s_max_single_net_v_00117720[0xf]);
    auVar31[0] = -((char)*(undefined2 *)param_2[1] == s_ol_00117410[0]);
    auVar31[1] = -((char)((ushort)*(undefined2 *)param_2[1] >> 8) == s_ol_00117410[1]);
    auVar31[2] = -(s_ol_00117410[2] == '\0');
    auVar31[3] = -(s_ol_00117410[3] == '\0');
    auVar31[4] = -(UNK_00117414 == '\0');
    auVar31[5] = -(UNK_00117415 == '\0');
    auVar31[6] = -(UNK_00117416 == '\0');
    auVar31[7] = -(UNK_00117417 == '\0');
    auVar31[8] = -(UNK_00117418 == '\0');
    auVar31[9] = -(UNK_00117419 == '\0');
    auVar31[10] = -(UNK_0011741a == '\0');
    auVar31[0xb] = -(UNK_0011741b == '\0');
    auVar31[0xc] = -(UNK_0011741c == '\0');
    auVar31[0xd] = -(UNK_0011741d == '\0');
    auVar31[0xe] = -(UNK_0011741e == '\0');
    auVar31[0xf] = -(UNK_0011741f == '\0');
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
      goto LAB_0013e240;
    }
    auVar15[0] = -((*param_2)[0] == s_max_single_net_a_001178a0[0]);
    auVar15[1] = -((*param_2)[1] == s_max_single_net_a_001178a0[1]);
    auVar15[2] = -((*param_2)[2] == s_max_single_net_a_001178a0[2]);
    auVar15[3] = -((*param_2)[3] == s_max_single_net_a_001178a0[3]);
    auVar15[4] = -((*param_2)[4] == s_max_single_net_a_001178a0[4]);
    auVar15[5] = -((*param_2)[5] == s_max_single_net_a_001178a0[5]);
    auVar15[6] = -((*param_2)[6] == s_max_single_net_a_001178a0[6]);
    auVar15[7] = -((*param_2)[7] == s_max_single_net_a_001178a0[7]);
    auVar15[8] = -((*param_2)[8] == s_max_single_net_a_001178a0[8]);
    auVar15[9] = -((*param_2)[9] == s_max_single_net_a_001178a0[9]);
    auVar15[10] = -((*param_2)[10] == s_max_single_net_a_001178a0[10]);
    auVar15[0xb] = -((*param_2)[0xb] == s_max_single_net_a_001178a0[0xb]);
    auVar15[0xc] = -((*param_2)[0xc] == s_max_single_net_a_001178a0[0xc]);
    auVar15[0xd] = -((*param_2)[0xd] == s_max_single_net_a_001178a0[0xd]);
    auVar15[0xe] = -((*param_2)[0xe] == s_max_single_net_a_001178a0[0xe]);
    auVar15[0xf] = -((*param_2)[0xf] == s_max_single_net_a_001178a0[0xf]);
    auVar32[0] = -((char)*(undefined2 *)param_2[1] == DAT_00117a20);
    auVar32[1] = -((char)((ushort)*(undefined2 *)param_2[1] >> 8) == UNK_00117a21);
    auVar32[2] = -(UNK_00117a22 == '\0');
    auVar32[3] = -(UNK_00117a23 == '\0');
    auVar32[4] = -(UNK_00117a24 == '\0');
    auVar32[5] = -(UNK_00117a25 == '\0');
    auVar32[6] = -(UNK_00117a26 == '\0');
    auVar32[7] = -(UNK_00117a27 == '\0');
    auVar32[8] = -(UNK_00117a28 == '\0');
    auVar32[9] = -(UNK_00117a29 == '\0');
    auVar32[10] = -(UNK_00117a2a == '\0');
    auVar32[0xb] = -(UNK_00117a2b == '\0');
    auVar32[0xc] = -(UNK_00117a2c == '\0');
    auVar32[0xd] = -(UNK_00117a2d == '\0');
    auVar32[0xe] = -(UNK_00117a2e == '\0');
    auVar32[0xf] = -(UNK_00117a2f == '\0');
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
      goto LAB_0013e240;
    }
    iVar7 = (*(code *)PTR_bcmp_001de1a8)(param_2,"rolling_windows_mssplit_high_low_ratio_threshold")
    ;
    if (iVar7 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x24;
      goto LAB_0013e240;
    }
    bVar4 = true;
    bVar5 = false;
    goto LAB_0013e14d;
  case 0x13:
    auVar35[0] = -((*param_2)[3] == DAT_00117430);
    auVar35[1] = -((*param_2)[4] == UNK_00117431);
    auVar35[2] = -((*param_2)[5] == UNK_00117432);
    auVar35[3] = -((*param_2)[6] == UNK_00117433);
    auVar35[4] = -((*param_2)[7] == UNK_00117434);
    auVar35[5] = -((*param_2)[8] == UNK_00117435);
    auVar35[6] = -((*param_2)[9] == UNK_00117436);
    auVar35[7] = -((*param_2)[10] == UNK_00117437);
    auVar35[8] = -((*param_2)[0xb] == UNK_00117438);
    auVar35[9] = -((*param_2)[0xc] == UNK_00117439);
    auVar35[10] = -((*param_2)[0xd] == UNK_0011743a);
    auVar35[0xb] = -((*param_2)[0xe] == UNK_0011743b);
    auVar35[0xc] = -((*param_2)[0xf] == UNK_0011743c);
    auVar35[0xd] = -(param_2[1][0] == UNK_0011743d);
    auVar35[0xe] = -(param_2[1][1] == UNK_0011743e);
    auVar35[0xf] = -(param_2[1][2] == UNK_0011743f);
    auVar17[0] = -((*param_2)[0] == s_signal_trigger_m_001178b0[0]);
    auVar17[1] = -((*param_2)[1] == s_signal_trigger_m_001178b0[1]);
    auVar17[2] = -((*param_2)[2] == s_signal_trigger_m_001178b0[2]);
    auVar17[3] = -((*param_2)[3] == s_signal_trigger_m_001178b0[3]);
    auVar17[4] = -((*param_2)[4] == s_signal_trigger_m_001178b0[4]);
    auVar17[5] = -((*param_2)[5] == s_signal_trigger_m_001178b0[5]);
    auVar17[6] = -((*param_2)[6] == s_signal_trigger_m_001178b0[6]);
    auVar17[7] = -((*param_2)[7] == s_signal_trigger_m_001178b0[7]);
    auVar17[8] = -((*param_2)[8] == s_signal_trigger_m_001178b0[8]);
    auVar17[9] = -((*param_2)[9] == s_signal_trigger_m_001178b0[9]);
    auVar17[10] = -((*param_2)[10] == s_signal_trigger_m_001178b0[10]);
    auVar17[0xb] = -((*param_2)[0xb] == s_signal_trigger_m_001178b0[0xb]);
    auVar17[0xc] = -((*param_2)[0xc] == s_signal_trigger_m_001178b0[0xc]);
    auVar17[0xd] = -((*param_2)[0xd] == s_signal_trigger_m_001178b0[0xd]);
    auVar17[0xe] = -((*param_2)[0xe] == s_signal_trigger_m_001178b0[0xe]);
    auVar17[0xf] = -((*param_2)[0xf] == s_signal_trigger_m_001178b0[0xf]);
    auVar17 = auVar17 & auVar35;
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
      *(undefined1 *)(param_1 + 1) = 3;
      goto LAB_0013e240;
    }
    iVar7 = (*(code *)PTR_bcmp_001de1a8)(param_2,"taker_rate_baselinemax_taker_rate");
    if (iVar7 == 0) {
      *(undefined1 *)(param_1 + 1) = 8;
      goto LAB_0013e240;
    }
    iVar7 = (*(code *)PTR_bcmp_001de1a8)(param_2,"long_open_threshold",param_3);
    if (iVar7 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x17;
      goto LAB_0013e240;
    }
    bVar4 = false;
    goto LAB_0013df19;
  case 0x14:
    uVar2 = *(undefined4 *)param_2[1];
    auVar33[0] = -((char)uVar2 == DAT_001173d0);
    auVar33[1] = -((char)((uint)uVar2 >> 8) == UNK_001173d1);
    auVar33[2] = -((char)((uint)uVar2 >> 0x10) == UNK_001173d2);
    auVar33[3] = -((char)((uint)uVar2 >> 0x18) == UNK_001173d3);
    auVar33[4] = -(UNK_001173d4 == '\0');
    auVar33[5] = -(UNK_001173d5 == '\0');
    auVar33[6] = -(UNK_001173d6 == '\0');
    auVar33[7] = -(UNK_001173d7 == '\0');
    auVar33[8] = -(UNK_001173d8 == '\0');
    auVar33[9] = -(UNK_001173d9 == '\0');
    auVar33[10] = -(UNK_001173da == '\0');
    auVar33[0xb] = -(UNK_001173db == '\0');
    auVar33[0xc] = -(UNK_001173dc == '\0');
    auVar33[0xd] = -(UNK_001173dd == '\0');
    auVar33[0xe] = -(UNK_001173de == '\0');
    auVar33[0xf] = -(UNK_001173df == '\0');
    auVar16[0] = -((*param_2)[0] == s_max_single_close_00117560[0]);
    auVar16[1] = -((*param_2)[1] == s_max_single_close_00117560[1]);
    auVar16[2] = -((*param_2)[2] == s_max_single_close_00117560[2]);
    auVar16[3] = -((*param_2)[3] == s_max_single_close_00117560[3]);
    auVar16[4] = -((*param_2)[4] == s_max_single_close_00117560[4]);
    auVar16[5] = -((*param_2)[5] == s_max_single_close_00117560[5]);
    auVar16[6] = -((*param_2)[6] == s_max_single_close_00117560[6]);
    auVar16[7] = -((*param_2)[7] == s_max_single_close_00117560[7]);
    auVar16[8] = -((*param_2)[8] == s_max_single_close_00117560[8]);
    auVar16[9] = -((*param_2)[9] == s_max_single_close_00117560[9]);
    auVar16[10] = -((*param_2)[10] == s_max_single_close_00117560[10]);
    auVar16[0xb] = -((*param_2)[0xb] == s_max_single_close_00117560[0xb]);
    auVar16[0xc] = -((*param_2)[0xc] == s_max_single_close_00117560[0xc]);
    auVar16[0xd] = -((*param_2)[0xd] == s_max_single_close_00117560[0xd]);
    auVar16[0xe] = -((*param_2)[0xe] == s_max_single_close_00117560[0xe]);
    auVar16[0xf] = -((*param_2)[0xf] == s_max_single_close_00117560[0xf]);
    auVar16 = auVar16 & auVar33;
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
      *(undefined1 *)(param_1 + 1) = 0x15;
      goto LAB_0013e240;
    }
    auVar9 = *param_2;
    uVar2 = *(undefined4 *)param_2[1];
    auVar44[0] = -((char)uVar2 == s__amt_00117640[0]);
    auVar44[1] = -((char)((uint)uVar2 >> 8) == s__amt_00117640[1]);
    auVar44[2] = -((char)((uint)uVar2 >> 0x10) == s__amt_00117640[2]);
    auVar44[3] = -((char)((uint)uVar2 >> 0x18) == s__amt_00117640[3]);
    auVar44[4] = -(s__amt_00117640[4] == '\0');
    auVar44[5] = -(s__amt_00117640[5] == '\0');
    auVar44[6] = -(s__amt_00117640[6] == '\0');
    auVar44[7] = -(s__amt_00117640[7] == '\0');
    auVar44[8] = -(UNK_00117648 == '\0');
    auVar44[9] = -(UNK_00117649 == '\0');
    auVar44[10] = -(UNK_0011764a == '\0');
    auVar44[0xb] = -(UNK_0011764b == '\0');
    auVar44[0xc] = -(UNK_0011764c == '\0');
    auVar44[0xd] = -(UNK_0011764d == '\0');
    auVar44[0xe] = -(UNK_0011764e == '\0');
    auVar44[0xf] = -(UNK_0011764f == '\0');
    auVar34[0] = -(auVar9[0] == 'm');
    auVar34[1] = -(auVar9[1] == 'a');
    auVar34[2] = -(auVar9[2] == 'x');
    auVar34[3] = -(auVar9[3] == '_');
    auVar34[4] = -(auVar9[4] == 's');
    auVar34[5] = -(auVar9[5] == 'i');
    auVar34[6] = -(auVar9[6] == 'n');
    auVar34[7] = -(auVar9[7] == 'g');
    auVar34[8] = -(auVar9[8] == 'l');
    auVar34[9] = -(auVar9[9] == 'e');
    auVar34[10] = -(auVar9[10] == '_');
    auVar34[0xb] = -(auVar9[0xb] == 'c');
    auVar34[0xc] = -(auVar9[0xc] == 'l');
    auVar34[0xd] = -(auVar9[0xd] == 'o');
    auVar34[0xe] = -(auVar9[0xe] == 's');
    auVar34[0xf] = -(auVar9[0xf] == 'e');
    auVar44 = auVar44 & auVar34;
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
      *(undefined1 *)(param_1 + 1) = 0x16;
      goto LAB_0013e240;
    }
    iVar7 = (*(code *)PTR_bcmp_001de1a8)(param_2,"long_close_threshold");
    if (iVar7 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x18;
      goto LAB_0013e240;
    }
    iVar7 = (*(code *)PTR_bcmp_001de1a8)(param_2,"short_open_threshold",param_3);
    if (iVar7 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x19;
      goto LAB_0013e240;
    }
    bVar3 = true;
    bVar4 = false;
    goto switchD_0013da6b_caseD_c;
  case 0x15:
    auVar26[0] = -((*param_2)[5] == DAT_001177f0);
    auVar26[1] = -((*param_2)[6] == UNK_001177f1);
    auVar26[2] = -((*param_2)[7] == UNK_001177f2);
    auVar26[3] = -((*param_2)[8] == UNK_001177f3);
    auVar26[4] = -((*param_2)[9] == UNK_001177f4);
    auVar26[5] = -((*param_2)[10] == UNK_001177f5);
    auVar26[6] = -((*param_2)[0xb] == UNK_001177f6);
    auVar26[7] = -((*param_2)[0xc] == UNK_001177f7);
    auVar26[8] = -((*param_2)[0xd] == UNK_001177f8);
    auVar26[9] = -((*param_2)[0xe] == UNK_001177f9);
    auVar26[10] = -((*param_2)[0xf] == UNK_001177fa);
    auVar26[0xb] = -(param_2[1][0] == UNK_001177fb);
    auVar26[0xc] = -(param_2[1][1] == UNK_001177fc);
    auVar26[0xd] = -(param_2[1][2] == UNK_001177fd);
    auVar26[0xe] = -(param_2[1][3] == UNK_001177fe);
    auVar26[0xf] = -(param_2[1][4] == UNK_001177ff);
    auVar8[0] = -((*param_2)[0] == DAT_00117490);
    auVar8[1] = -((*param_2)[1] == UNK_00117491);
    auVar8[2] = -((*param_2)[2] == UNK_00117492);
    auVar8[3] = -((*param_2)[3] == UNK_00117493);
    auVar8[4] = -((*param_2)[4] == UNK_00117494);
    auVar8[5] = -((*param_2)[5] == UNK_00117495);
    auVar8[6] = -((*param_2)[6] == UNK_00117496);
    auVar8[7] = -((*param_2)[7] == UNK_00117497);
    auVar8[8] = -((*param_2)[8] == UNK_00117498);
    auVar8[9] = -((*param_2)[9] == UNK_00117499);
    auVar8[10] = -((*param_2)[10] == UNK_0011749a);
    auVar8[0xb] = -((*param_2)[0xb] == UNK_0011749b);
    auVar8[0xc] = -((*param_2)[0xc] == UNK_0011749c);
    auVar8[0xd] = -((*param_2)[0xd] == UNK_0011749d);
    auVar8[0xe] = -((*param_2)[0xe] == UNK_0011749e);
    auVar8[0xf] = -((*param_2)[0xf] == UNK_0011749f);
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
      *(undefined1 *)(param_1 + 1) = 0x10;
      goto LAB_0013e240;
    }
    iVar7 = (*(code *)PTR_bcmp_001de1a8)(param_2,"short_close_threshold");
    if (iVar7 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x1a;
      goto LAB_0013e240;
    }
    bVar4 = true;
LAB_0013df19:
    bVar3 = false;
switchD_0013da6b_caseD_c:
joined_r0x0013df3a:
    if (9 < param_3 - 0x18U) {
switchD_0013df4e_caseD_13e0dd:
      if ((bVar4) &&
         (iVar7 = (*(code *)PTR_bcmp_001de1a8)
                            (param_2,"dyn_score_delta_scoreuse_dynamic_volspread_ratio"), iVar7 == 0
         )) {
        *(undefined1 *)(param_1 + 1) = 0x21;
        goto LAB_0013e240;
      }
      goto joined_r0x0013e122;
    }
    switch((long)&switchD_0013df4e::switchdataD_00117b04 +
           (long)(int)(&switchD_0013df4e::switchdataD_00117b04)[param_3 + -0x18]) {
    case 0x13df50:
      uVar1 = *(undefined8 *)param_2[1];
      auVar36[0] = -((char)uVar1 == s_hreshold_00117830[0]);
      auVar36[1] = -((char)((ulong)uVar1 >> 8) == s_hreshold_00117830[1]);
      auVar36[2] = -((char)((ulong)uVar1 >> 0x10) == s_hreshold_00117830[2]);
      auVar36[3] = -((char)((ulong)uVar1 >> 0x18) == s_hreshold_00117830[3]);
      auVar36[4] = -((char)((ulong)uVar1 >> 0x20) == s_hreshold_00117830[4]);
      auVar36[5] = -((char)((ulong)uVar1 >> 0x28) == s_hreshold_00117830[5]);
      auVar36[6] = -((char)((ulong)uVar1 >> 0x30) == s_hreshold_00117830[6]);
      auVar36[7] = -((char)((ulong)uVar1 >> 0x38) == s_hreshold_00117830[7]);
      auVar36[8] = -(s_hreshold_00117830[8] == '\0');
      auVar36[9] = -(s_hreshold_00117830[9] == '\0');
      auVar36[10] = -(s_hreshold_00117830[10] == '\0');
      auVar36[0xb] = -(s_hreshold_00117830[0xb] == '\0');
      auVar36[0xc] = -(UNK_0011783c == '\0');
      auVar36[0xd] = -(UNK_0011783d == '\0');
      auVar36[0xe] = -(UNK_0011783e == '\0');
      auVar36[0xf] = -(UNK_0011783f == '\0');
      auVar18[0] = -((*param_2)[0] == DAT_001176d0);
      auVar18[1] = -((*param_2)[1] == UNK_001176d1);
      auVar18[2] = -((*param_2)[2] == UNK_001176d2);
      auVar18[3] = -((*param_2)[3] == UNK_001176d3);
      auVar18[4] = -((*param_2)[4] == UNK_001176d4);
      auVar18[5] = -((*param_2)[5] == UNK_001176d5);
      auVar18[6] = -((*param_2)[6] == UNK_001176d6);
      auVar18[7] = -((*param_2)[7] == UNK_001176d7);
      auVar18[8] = -((*param_2)[8] == UNK_001176d8);
      auVar18[9] = -((*param_2)[9] == UNK_001176d9);
      auVar18[10] = -((*param_2)[10] == UNK_001176da);
      auVar18[0xb] = -((*param_2)[0xb] == UNK_001176db);
      auVar18[0xc] = -((*param_2)[0xc] == UNK_001176dc);
      auVar18[0xd] = -((*param_2)[0xd] == UNK_001176dd);
      auVar18[0xe] = -((*param_2)[0xe] == UNK_001176de);
      auVar18[0xf] = -((*param_2)[0xf] == UNK_001176df);
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
        *(undefined1 *)(param_1 + 1) = 0x1c;
        goto LAB_0013e240;
      }
      uVar1 = *(undefined8 *)param_2[1];
      auVar37[0] = -((char)uVar1 == s_hreshold_00117830[0]);
      auVar37[1] = -((char)((ulong)uVar1 >> 8) == s_hreshold_00117830[1]);
      auVar37[2] = -((char)((ulong)uVar1 >> 0x10) == s_hreshold_00117830[2]);
      auVar37[3] = -((char)((ulong)uVar1 >> 0x18) == s_hreshold_00117830[3]);
      auVar37[4] = -((char)((ulong)uVar1 >> 0x20) == s_hreshold_00117830[4]);
      auVar37[5] = -((char)((ulong)uVar1 >> 0x28) == s_hreshold_00117830[5]);
      auVar37[6] = -((char)((ulong)uVar1 >> 0x30) == s_hreshold_00117830[6]);
      auVar37[7] = -((char)((ulong)uVar1 >> 0x38) == s_hreshold_00117830[7]);
      auVar37[8] = -(s_hreshold_00117830[8] == '\0');
      auVar37[9] = -(s_hreshold_00117830[9] == '\0');
      auVar37[10] = -(s_hreshold_00117830[10] == '\0');
      auVar37[0xb] = -(s_hreshold_00117830[0xb] == '\0');
      auVar37[0xc] = -(UNK_0011783c == '\0');
      auVar37[0xd] = -(UNK_0011783d == '\0');
      auVar37[0xe] = -(UNK_0011783e == '\0');
      auVar37[0xf] = -(UNK_0011783f == '\0');
      auVar19[0] = -((*param_2)[0] == DAT_001174a0);
      auVar19[1] = -((*param_2)[1] == UNK_001174a1);
      auVar19[2] = -((*param_2)[2] == UNK_001174a2);
      auVar19[3] = -((*param_2)[3] == UNK_001174a3);
      auVar19[4] = -((*param_2)[4] == UNK_001174a4);
      auVar19[5] = -((*param_2)[5] == UNK_001174a5);
      auVar19[6] = -((*param_2)[6] == UNK_001174a6);
      auVar19[7] = -((*param_2)[7] == UNK_001174a7);
      auVar19[8] = -((*param_2)[8] == UNK_001174a8);
      auVar19[9] = -((*param_2)[9] == UNK_001174a9);
      auVar19[10] = -((*param_2)[10] == UNK_001174aa);
      auVar19[0xb] = -((*param_2)[0xb] == UNK_001174ab);
      auVar19[0xc] = -((*param_2)[0xc] == UNK_001174ac);
      auVar19[0xd] = -((*param_2)[0xd] == UNK_001174ad);
      auVar19[0xe] = -((*param_2)[0xe] == UNK_001174ae);
      auVar19[0xf] = -((*param_2)[0xf] == UNK_001174af);
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
        goto LAB_0013e240;
      }
      break;
    case 0x13e002:
      auVar38[0] = -((*param_2)[0xb] == s_ax_position_ts_s_001173a0[0]);
      auVar38[1] = -((*param_2)[0xc] == s_ax_position_ts_s_001173a0[1]);
      auVar38[2] = -((*param_2)[0xd] == s_ax_position_ts_s_001173a0[2]);
      auVar38[3] = -((*param_2)[0xe] == s_ax_position_ts_s_001173a0[3]);
      auVar38[4] = -((*param_2)[0xf] == s_ax_position_ts_s_001173a0[4]);
      auVar38[5] = -(param_2[1][0] == s_ax_position_ts_s_001173a0[5]);
      auVar38[6] = -(param_2[1][1] == s_ax_position_ts_s_001173a0[6]);
      auVar38[7] = -(param_2[1][2] == s_ax_position_ts_s_001173a0[7]);
      auVar38[8] = -(param_2[1][3] == s_ax_position_ts_s_001173a0[8]);
      auVar38[9] = -(param_2[1][4] == s_ax_position_ts_s_001173a0[9]);
      auVar38[10] = -(param_2[1][5] == s_ax_position_ts_s_001173a0[10]);
      auVar38[0xb] = -(param_2[1][6] == s_ax_position_ts_s_001173a0[0xb]);
      auVar38[0xc] = -(param_2[1][7] == s_ax_position_ts_s_001173a0[0xc]);
      auVar38[0xd] = -(param_2[1][8] == s_ax_position_ts_s_001173a0[0xd]);
      auVar38[0xe] = -(param_2[1][9] == s_ax_position_ts_s_001173a0[0xe]);
      auVar38[0xf] = -(param_2[1][10] == s_ax_position_ts_s_001173a0[0xf]);
      auVar20[0] = -((*param_2)[0] == DAT_001176c0);
      auVar20[1] = -((*param_2)[1] == UNK_001176c1);
      auVar20[2] = -((*param_2)[2] == UNK_001176c2);
      auVar20[3] = -((*param_2)[3] == UNK_001176c3);
      auVar20[4] = -((*param_2)[4] == UNK_001176c4);
      auVar20[5] = -((*param_2)[5] == UNK_001176c5);
      auVar20[6] = -((*param_2)[6] == UNK_001176c6);
      auVar20[7] = -((*param_2)[7] == UNK_001176c7);
      auVar20[8] = -((*param_2)[8] == UNK_001176c8);
      auVar20[9] = -((*param_2)[9] == UNK_001176c9);
      auVar20[10] = -((*param_2)[10] == UNK_001176ca);
      auVar20[0xb] = -((*param_2)[0xb] == UNK_001176cb);
      auVar20[0xc] = -((*param_2)[0xc] == UNK_001176cc);
      auVar20[0xd] = -((*param_2)[0xd] == UNK_001176cd);
      auVar20[0xe] = -((*param_2)[0xe] == UNK_001176ce);
      auVar20[0xf] = -((*param_2)[0xf] == UNK_001176cf);
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
        *(undefined1 *)(param_1 + 1) = 0x20;
        goto LAB_0013e240;
      }
      auVar39[0] = -((*param_2)[0xb] == DAT_00117440);
      auVar39[1] = -((*param_2)[0xc] == UNK_00117441);
      auVar39[2] = -((*param_2)[0xd] == UNK_00117442);
      auVar39[3] = -((*param_2)[0xe] == UNK_00117443);
      auVar39[4] = -((*param_2)[0xf] == UNK_00117444);
      auVar39[5] = -(param_2[1][0] == UNK_00117445);
      auVar39[6] = -(param_2[1][1] == UNK_00117446);
      auVar39[7] = -(param_2[1][2] == UNK_00117447);
      auVar39[8] = -(param_2[1][3] == UNK_00117448);
      auVar39[9] = -(param_2[1][4] == UNK_00117449);
      auVar39[10] = -(param_2[1][5] == UNK_0011744a);
      auVar39[0xb] = -(param_2[1][6] == UNK_0011744b);
      auVar39[0xc] = -(param_2[1][7] == UNK_0011744c);
      auVar39[0xd] = -(param_2[1][8] == UNK_0011744d);
      auVar39[0xe] = -(param_2[1][9] == UNK_0011744e);
      auVar39[0xf] = -(param_2[1][10] == UNK_0011744f);
      auVar21[0] = -((*param_2)[0] == DAT_00117980);
      auVar21[1] = -((*param_2)[1] == UNK_00117981);
      auVar21[2] = -((*param_2)[2] == UNK_00117982);
      auVar21[3] = -((*param_2)[3] == UNK_00117983);
      auVar21[4] = -((*param_2)[4] == UNK_00117984);
      auVar21[5] = -((*param_2)[5] == UNK_00117985);
      auVar21[6] = -((*param_2)[6] == UNK_00117986);
      auVar21[7] = -((*param_2)[7] == UNK_00117987);
      auVar21[8] = -((*param_2)[8] == UNK_00117988);
      auVar21[9] = -((*param_2)[9] == UNK_00117989);
      auVar21[10] = -((*param_2)[10] == UNK_0011798a);
      auVar21[0xb] = -((*param_2)[0xb] == UNK_0011798b);
      auVar21[0xc] = -((*param_2)[0xc] == UNK_0011798c);
      auVar21[0xd] = -((*param_2)[0xd] == UNK_0011798d);
      auVar21[0xe] = -((*param_2)[0xe] == UNK_0011798e);
      auVar21[0xf] = -((*param_2)[0xf] == UNK_0011798f);
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
        *(undefined1 *)(param_1 + 1) = 0x22;
        goto LAB_0013e240;
      }
      break;
    case 0x13e063:
      auVar40[0] = -((*param_2)[9] == DAT_00117680);
      auVar40[1] = -((*param_2)[10] == UNK_00117681);
      auVar40[2] = -((*param_2)[0xb] == UNK_00117682);
      auVar40[3] = -((*param_2)[0xc] == UNK_00117683);
      auVar40[4] = -((*param_2)[0xd] == UNK_00117684);
      auVar40[5] = -((*param_2)[0xe] == UNK_00117685);
      auVar40[6] = -((*param_2)[0xf] == UNK_00117686);
      auVar40[7] = -(param_2[1][0] == UNK_00117687);
      auVar40[8] = -(param_2[1][1] == UNK_00117688);
      auVar40[9] = -(param_2[1][2] == UNK_00117689);
      auVar40[10] = -(param_2[1][3] == UNK_0011768a);
      auVar40[0xb] = -(param_2[1][4] == UNK_0011768b);
      auVar40[0xc] = -(param_2[1][5] == UNK_0011768c);
      auVar40[0xd] = -(param_2[1][6] == UNK_0011768d);
      auVar40[0xe] = -(param_2[1][7] == UNK_0011768e);
      auVar40[0xf] = -(param_2[1][8] == UNK_0011768f);
      auVar22[0] = -((*param_2)[0] == DAT_00117650);
      auVar22[1] = -((*param_2)[1] == UNK_00117651);
      auVar22[2] = -((*param_2)[2] == UNK_00117652);
      auVar22[3] = -((*param_2)[3] == UNK_00117653);
      auVar22[4] = -((*param_2)[4] == UNK_00117654);
      auVar22[5] = -((*param_2)[5] == UNK_00117655);
      auVar22[6] = -((*param_2)[6] == UNK_00117656);
      auVar22[7] = -((*param_2)[7] == UNK_00117657);
      auVar22[8] = -((*param_2)[8] == UNK_00117658);
      auVar22[9] = -((*param_2)[9] == UNK_00117659);
      auVar22[10] = -((*param_2)[10] == UNK_0011765a);
      auVar22[0xb] = -((*param_2)[0xb] == UNK_0011765b);
      auVar22[0xc] = -((*param_2)[0xc] == UNK_0011765c);
      auVar22[0xd] = -((*param_2)[0xd] == UNK_0011765d);
      auVar22[0xe] = -((*param_2)[0xe] == UNK_0011765e);
      auVar22[0xf] = -((*param_2)[0xf] == UNK_0011765f);
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
        *(undefined1 *)(param_1 + 1) = 0x1e;
        goto LAB_0013e240;
      }
      bVar5 = true;
      bVar6 = true;
      if (bVar3) goto LAB_0013e124;
      bVar4 = false;
      goto LAB_0013e14d;
    case 0x13e0a2:
      iVar7 = (*(code *)PTR_bcmp_001de1a8)
                        (param_2,"dyn_score_position_ts_threshold_sdyn_score_max_position_ts_s",0x21
                        );
      if (iVar7 == 0) {
        *(undefined1 *)(param_1 + 1) = 0x1f;
        goto LAB_0013e240;
      }
      break;
    case 0x13e0dd:
      goto switchD_0013df4e_caseD_13e0dd;
    }
joined_r0x0013e122:
    bVar5 = false;
    bVar4 = false;
    bVar6 = false;
    if (bVar3) {
LAB_0013e124:
      bVar5 = bVar6;
      iVar7 = (*(code *)PTR_bcmp_001de1a8)(param_2,"market_volatility_ms");
      if (iVar7 == 0) {
        *(undefined1 *)(param_1 + 1) = 0x23;
        goto LAB_0013e240;
      }
      bVar4 = false;
    }
LAB_0013e14d:
    if (param_3 == 0x1f) {
      auVar43[0] = -((*param_2)[0xf] == s__pending_time_ms_001177a0[0]);
      auVar43[1] = -(param_2[1][0] == s__pending_time_ms_001177a0[1]);
      auVar43[2] = -(param_2[1][1] == s__pending_time_ms_001177a0[2]);
      auVar43[3] = -(param_2[1][2] == s__pending_time_ms_001177a0[3]);
      auVar43[4] = -(param_2[1][3] == s__pending_time_ms_001177a0[4]);
      auVar43[5] = -(param_2[1][4] == s__pending_time_ms_001177a0[5]);
      auVar43[6] = -(param_2[1][5] == s__pending_time_ms_001177a0[6]);
      auVar43[7] = -(param_2[1][6] == s__pending_time_ms_001177a0[7]);
      auVar43[8] = -(param_2[1][7] == s__pending_time_ms_001177a0[8]);
      auVar43[9] = -(param_2[1][8] == s__pending_time_ms_001177a0[9]);
      auVar43[10] = -(param_2[1][9] == s__pending_time_ms_001177a0[10]);
      auVar43[0xb] = -(param_2[1][10] == s__pending_time_ms_001177a0[0xb]);
      auVar43[0xc] = -(param_2[1][0xb] == s__pending_time_ms_001177a0[0xc]);
      auVar43[0xd] = -(param_2[1][0xc] == s__pending_time_ms_001177a0[0xd]);
      auVar43[0xe] = -(param_2[1][0xd] == s__pending_time_ms_001177a0[0xe]);
      auVar43[0xf] = -(param_2[1][0xe] == s__pending_time_ms_001177a0[0xf]);
      auVar25[0] = -((*param_2)[0] == DAT_00117a30);
      auVar25[1] = -((*param_2)[1] == UNK_00117a31);
      auVar25[2] = -((*param_2)[2] == UNK_00117a32);
      auVar25[3] = -((*param_2)[3] == UNK_00117a33);
      auVar25[4] = -((*param_2)[4] == UNK_00117a34);
      auVar25[5] = -((*param_2)[5] == UNK_00117a35);
      auVar25[6] = -((*param_2)[6] == UNK_00117a36);
      auVar25[7] = -((*param_2)[7] == UNK_00117a37);
      auVar25[8] = -((*param_2)[8] == UNK_00117a38);
      auVar25[9] = -((*param_2)[9] == UNK_00117a39);
      auVar25[10] = -((*param_2)[10] == UNK_00117a3a);
      auVar25[0xb] = -((*param_2)[0xb] == UNK_00117a3b);
      auVar25[0xc] = -((*param_2)[0xc] == UNK_00117a3c);
      auVar25[0xd] = -((*param_2)[0xd] == UNK_00117a3d);
      auVar25[0xe] = -((*param_2)[0xe] == UNK_00117a3e);
      auVar25[0xf] = -((*param_2)[0xf] == UNK_00117a3f);
      auVar25 = auVar25 & auVar43;
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
        *(undefined1 *)(param_1 + 1) = 0x27;
        goto LAB_0013e240;
      }
    }
    else if (param_3 == 0x1e) {
      auVar41[0] = -((*param_2)[0xe] == DAT_00117660);
      auVar41[1] = -((*param_2)[0xf] == UNK_00117661);
      auVar41[2] = -(param_2[1][0] == UNK_00117662);
      auVar41[3] = -(param_2[1][1] == UNK_00117663);
      auVar41[4] = -(param_2[1][2] == UNK_00117664);
      auVar41[5] = -(param_2[1][3] == UNK_00117665);
      auVar41[6] = -(param_2[1][4] == UNK_00117666);
      auVar41[7] = -(param_2[1][5] == UNK_00117667);
      auVar41[8] = -(param_2[1][6] == UNK_00117668);
      auVar41[9] = -(param_2[1][7] == UNK_00117669);
      auVar41[10] = -(param_2[1][8] == UNK_0011766a);
      auVar41[0xb] = -(param_2[1][9] == UNK_0011766b);
      auVar41[0xc] = -(param_2[1][10] == UNK_0011766c);
      auVar41[0xd] = -(param_2[1][0xb] == UNK_0011766d);
      auVar41[0xe] = -(param_2[1][0xc] == UNK_0011766e);
      auVar41[0xf] = -(param_2[1][0xd] == UNK_0011766f);
      auVar23[0] = -((*param_2)[0] == s_split_high_low_r_001174e0[0]);
      auVar23[1] = -((*param_2)[1] == s_split_high_low_r_001174e0[1]);
      auVar23[2] = -((*param_2)[2] == s_split_high_low_r_001174e0[2]);
      auVar23[3] = -((*param_2)[3] == s_split_high_low_r_001174e0[3]);
      auVar23[4] = -((*param_2)[4] == s_split_high_low_r_001174e0[4]);
      auVar23[5] = -((*param_2)[5] == s_split_high_low_r_001174e0[5]);
      auVar23[6] = -((*param_2)[6] == s_split_high_low_r_001174e0[6]);
      auVar23[7] = -((*param_2)[7] == s_split_high_low_r_001174e0[7]);
      auVar23[8] = -((*param_2)[8] == s_split_high_low_r_001174e0[8]);
      auVar23[9] = -((*param_2)[9] == s_split_high_low_r_001174e0[9]);
      auVar23[10] = -((*param_2)[10] == s_split_high_low_r_001174e0[10]);
      auVar23[0xb] = -((*param_2)[0xb] == s_split_high_low_r_001174e0[0xb]);
      auVar23[0xc] = -((*param_2)[0xc] == s_split_high_low_r_001174e0[0xc]);
      auVar23[0xd] = -((*param_2)[0xd] == s_split_high_low_r_001174e0[0xd]);
      auVar23[0xe] = -((*param_2)[0xe] == s_split_high_low_r_001174e0[0xe]);
      auVar23[0xf] = -((*param_2)[0xf] == s_split_high_low_r_001174e0[0xf]);
      auVar23 = auVar23 & auVar41;
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
        *(undefined1 *)(param_1 + 1) = 0x25;
        goto LAB_0013e240;
      }
      auVar42[0] = -((*param_2)[0xe] == DAT_00117840);
      auVar42[1] = -((*param_2)[0xf] == UNK_00117841);
      auVar42[2] = -(param_2[1][0] == UNK_00117842);
      auVar42[3] = -(param_2[1][1] == UNK_00117843);
      auVar42[4] = -(param_2[1][2] == UNK_00117844);
      auVar42[5] = -(param_2[1][3] == UNK_00117845);
      auVar42[6] = -(param_2[1][4] == UNK_00117846);
      auVar42[7] = -(param_2[1][5] == UNK_00117847);
      auVar42[8] = -(param_2[1][6] == UNK_00117848);
      auVar42[9] = -(param_2[1][7] == UNK_00117849);
      auVar42[10] = -(param_2[1][8] == UNK_0011784a);
      auVar42[0xb] = -(param_2[1][9] == UNK_0011784b);
      auVar42[0xc] = -(param_2[1][10] == UNK_0011784c);
      auVar42[0xd] = -(param_2[1][0xb] == UNK_0011784d);
      auVar42[0xe] = -(param_2[1][0xc] == UNK_0011784e);
      auVar42[0xf] = -(param_2[1][0xd] == UNK_0011784f);
      auVar24[0] = -((*param_2)[0] == DAT_00117a50);
      auVar24[1] = -((*param_2)[1] == UNK_00117a51);
      auVar24[2] = -((*param_2)[2] == UNK_00117a52);
      auVar24[3] = -((*param_2)[3] == UNK_00117a53);
      auVar24[4] = -((*param_2)[4] == UNK_00117a54);
      auVar24[5] = -((*param_2)[5] == UNK_00117a55);
      auVar24[6] = -((*param_2)[6] == UNK_00117a56);
      auVar24[7] = -((*param_2)[7] == UNK_00117a57);
      auVar24[8] = -((*param_2)[8] == UNK_00117a58);
      auVar24[9] = -((*param_2)[9] == UNK_00117a59);
      auVar24[10] = -((*param_2)[10] == UNK_00117a5a);
      auVar24[0xb] = -((*param_2)[0xb] == UNK_00117a5b);
      auVar24[0xc] = -((*param_2)[0xc] == UNK_00117a5c);
      auVar24[0xd] = -((*param_2)[0xd] == UNK_00117a5d);
      auVar24[0xe] = -((*param_2)[0xe] == UNK_00117a5e);
      auVar24[0xf] = -((*param_2)[0xf] == UNK_00117a5f);
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
        goto LAB_0013e240;
      }
    }
    if ((bVar4) && (iVar7 = (*(code *)PTR_bcmp_001de1a8)(param_2,"maker_ticks_inside"), iVar7 == 0))
    {
      *(undefined1 *)(param_1 + 1) = 0x29;
      goto LAB_0013e240;
    }
    if (bVar5) {
      iVar7 = (*(code *)PTR_bcmp_001de1a8)(param_2,"maker_cancel_range_levels",param_3);
      if (iVar7 == 0) {
        *(undefined1 *)(param_1 + 1) = 0x2a;
        goto LAB_0013e240;
      }
    }
    break;
  case 0x16:
    auVar28[0] = -((*param_2)[6] == DAT_00117420);
    auVar28[1] = -((*param_2)[7] == UNK_00117421);
    auVar28[2] = -((*param_2)[8] == UNK_00117422);
    auVar28[3] = -((*param_2)[9] == UNK_00117423);
    auVar28[4] = -((*param_2)[10] == UNK_00117424);
    auVar28[5] = -((*param_2)[0xb] == UNK_00117425);
    auVar28[6] = -((*param_2)[0xc] == UNK_00117426);
    auVar28[7] = -((*param_2)[0xd] == UNK_00117427);
    auVar28[8] = -((*param_2)[0xe] == UNK_00117428);
    auVar28[9] = -((*param_2)[0xf] == UNK_00117429);
    auVar28[10] = -(param_2[1][0] == UNK_0011742a);
    auVar28[0xb] = -(param_2[1][1] == UNK_0011742b);
    auVar28[0xc] = -(param_2[1][2] == UNK_0011742c);
    auVar28[0xd] = -(param_2[1][3] == UNK_0011742d);
    auVar28[0xe] = -(param_2[1][4] == UNK_0011742e);
    auVar28[0xf] = -(param_2[1][5] == UNK_0011742f);
    auVar10[0] = -((*param_2)[0] == DAT_00117590);
    auVar10[1] = -((*param_2)[1] == UNK_00117591);
    auVar10[2] = -((*param_2)[2] == UNK_00117592);
    auVar10[3] = -((*param_2)[3] == UNK_00117593);
    auVar10[4] = -((*param_2)[4] == UNK_00117594);
    auVar10[5] = -((*param_2)[5] == UNK_00117595);
    auVar10[6] = -((*param_2)[6] == UNK_00117596);
    auVar10[7] = -((*param_2)[7] == UNK_00117597);
    auVar10[8] = -((*param_2)[8] == UNK_00117598);
    auVar10[9] = -((*param_2)[9] == UNK_00117599);
    auVar10[10] = -((*param_2)[10] == UNK_0011759a);
    auVar10[0xb] = -((*param_2)[0xb] == UNK_0011759b);
    auVar10[0xc] = -((*param_2)[0xc] == UNK_0011759c);
    auVar10[0xd] = -((*param_2)[0xd] == UNK_0011759d);
    auVar10[0xe] = -((*param_2)[0xe] == UNK_0011759e);
    auVar10[0xf] = -((*param_2)[0xf] == UNK_0011759f);
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
      *(undefined1 *)(param_1 + 1) = 7;
      goto LAB_0013e240;
    }
    iVar7 = (*(code *)PTR_bcmp_001de1a8)(param_2,"high_taker_half_spread");
    if (iVar7 == 0) {
      *(undefined1 *)(param_1 + 1) = 10;
      goto LAB_0013e240;
    }
    break;
  case 0x17:
    auVar27[0] = -((*param_2)[7] == DAT_001178e0);
    auVar27[1] = -((*param_2)[8] == UNK_001178e1);
    auVar27[2] = -((*param_2)[9] == UNK_001178e2);
    auVar27[3] = -((*param_2)[10] == UNK_001178e3);
    auVar27[4] = -((*param_2)[0xb] == UNK_001178e4);
    auVar27[5] = -((*param_2)[0xc] == UNK_001178e5);
    auVar27[6] = -((*param_2)[0xd] == UNK_001178e6);
    auVar27[7] = -((*param_2)[0xe] == UNK_001178e7);
    auVar27[8] = -((*param_2)[0xf] == UNK_001178e8);
    auVar27[9] = -(param_2[1][0] == UNK_001178e9);
    auVar27[10] = -(param_2[1][1] == UNK_001178ea);
    auVar27[0xb] = -(param_2[1][2] == UNK_001178eb);
    auVar27[0xc] = -(param_2[1][3] == UNK_001178ec);
    auVar27[0xd] = -(param_2[1][4] == UNK_001178ed);
    auVar27[0xe] = -(param_2[1][5] == UNK_001178ee);
    auVar27[0xf] = -(param_2[1][6] == UNK_001178ef);
    auVar9[0] = -((*param_2)[0] == s_close_position_b_001174d0[0]);
    auVar9[1] = -((*param_2)[1] == s_close_position_b_001174d0[1]);
    auVar9[2] = -((*param_2)[2] == s_close_position_b_001174d0[2]);
    auVar9[3] = -((*param_2)[3] == s_close_position_b_001174d0[3]);
    auVar9[4] = -((*param_2)[4] == s_close_position_b_001174d0[4]);
    auVar9[5] = -((*param_2)[5] == s_close_position_b_001174d0[5]);
    auVar9[6] = -((*param_2)[6] == s_close_position_b_001174d0[6]);
    auVar9[7] = -((*param_2)[7] == s_close_position_b_001174d0[7]);
    auVar9[8] = -((*param_2)[8] == s_close_position_b_001174d0[8]);
    auVar9[9] = -((*param_2)[9] == s_close_position_b_001174d0[9]);
    auVar9[10] = -((*param_2)[10] == s_close_position_b_001174d0[10]);
    auVar9[0xb] = -((*param_2)[0xb] == s_close_position_b_001174d0[0xb]);
    auVar9[0xc] = -((*param_2)[0xc] == s_close_position_b_001174d0[0xc]);
    auVar9[0xd] = -((*param_2)[0xd] == s_close_position_b_001174d0[0xd]);
    auVar9[0xe] = -((*param_2)[0xe] == s_close_position_b_001174d0[0xe]);
    auVar9[0xf] = -((*param_2)[0xf] == s_close_position_b_001174d0[0xf]);
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
      *(undefined1 *)(param_1 + 1) = 0xe;
      goto LAB_0013e240;
    }
    iVar7 = (*(code *)PTR_bcmp_001de1a8)
                      (param_2,
                       "low_long_open_thresholdlow_long_close_thresholdlow_short_open_thresholdlow_short_close_threshold"
                      );
    if (iVar7 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x1b;
      goto LAB_0013e240;
    }
    break;
  default:
    bVar3 = false;
    goto joined_r0x0013df3a;
  }
  *(undefined1 *)(param_1 + 1) = 0x2b;
LAB_0013e240:
  *param_1 = 2;
  return param_1;
}


