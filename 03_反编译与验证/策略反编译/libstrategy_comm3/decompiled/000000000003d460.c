// ELF address 0x000000000003d460; <strategy_comm3::_::<impl serde_core::de::Deserialize for strategy_comm3::Comm3Params>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_str

/* _<strategy_comm3::_::<impl serde_core::de::Deserialize for
   strategy_comm3::Comm3Params>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_str
    */

undefined8 * __rustcall
_<strategy_comm3::_::<impl_serde_core::de::Deserialize_for_strategy_comm3::Comm3Params>::deserialize::__FieldVisitor_as_serde_core::de::Visitor>
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
  bVar6 = false;
  switch(param_3) {
  case 8:
    if (*(long *)*param_2 == 0x656c69746e617571) {
      *(undefined1 *)(param_1 + 1) = 5;
      goto LAB_0013d859;
    }
    break;
  case 9:
    if ((*param_2)[8] == 'a' && *(long *)*param_2 == 0x68706c615f317670) {
      *(undefined1 *)(param_1 + 1) = 1;
      goto LAB_0013d859;
    }
    if ((*param_2)[8] == 'e' && *(long *)*param_2 == 0x7461725f65746f76) {
      *(undefined1 *)(param_1 + 1) = 4;
      goto LAB_0013d859;
    }
    break;
  case 10:
    if (*(short *)(*param_2 + 8) == 0x6168 && *(long *)*param_2 == 0x706c615f74736f63) {
      *(undefined1 *)(param_1 + 1) = 2;
      goto LAB_0013d859;
    }
    if (*(short *)(*param_2 + 8) == 0x6574 && *(long *)*param_2 == 0x61675f6863756f74) {
      *(undefined1 *)(param_1 + 1) = 0xc;
      goto LAB_0013d859;
    }
    iVar7 = (*(code *)PTR_bcmp_001dcfa8)
                      (param_2,
                       "low_actionmaker_order_max_pending_time_msmax_maker_pending_vol_on_depth");
    if (iVar7 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x23;
      goto LAB_0013d859;
    }
    bVar3 = false;
    bVar4 = false;
    goto LAB_0013d787;
  case 0xb:
    if (*(long *)(*param_2 + 3) == 0x65646f6d5f6c616e && *(long *)*param_2 == 0x6d5f6c616e676973) {
      *(undefined1 *)(param_1 + 1) = 0;
      goto LAB_0013d859;
    }
    goto LAB_0013d783;
  case 0xc:
  case 0xd:
  case 0xf:
  case 0x11:
    goto switchD_0013d48c_caseD_c;
  case 0xe:
    if (*(long *)(*param_2 + 6) == 0x657461725f72656b && *(long *)*param_2 == 0x656b61745f78616d) {
      *(undefined1 *)(param_1 + 1) = 9;
      goto LAB_0013d859;
    }
    if (*(long *)(*param_2 + 6) == 0x7972657070696c73 && *(long *)*param_2 == 0x6c735f6564617274) {
      *(undefined1 *)(param_1 + 1) = 10;
      goto LAB_0013d859;
    }
    break;
  case 0x10:
    auVar9[0] = -((*param_2)[0] == DAT_00117670);
    auVar9[1] = -((*param_2)[1] == UNK_00117671);
    auVar9[2] = -((*param_2)[2] == UNK_00117672);
    auVar9[3] = -((*param_2)[3] == UNK_00117673);
    auVar9[4] = -((*param_2)[4] == UNK_00117674);
    auVar9[5] = -((*param_2)[5] == UNK_00117675);
    auVar9[6] = -((*param_2)[6] == UNK_00117676);
    auVar9[7] = -((*param_2)[7] == UNK_00117677);
    auVar9[8] = -((*param_2)[8] == UNK_00117678);
    auVar9[9] = -((*param_2)[9] == UNK_00117679);
    auVar9[10] = -((*param_2)[10] == UNK_0011767a);
    auVar9[0xb] = -((*param_2)[0xb] == UNK_0011767b);
    auVar9[0xc] = -((*param_2)[0xc] == UNK_0011767c);
    auVar9[0xd] = -((*param_2)[0xd] == UNK_0011767d);
    auVar9[0xe] = -((*param_2)[0xe] == UNK_0011767e);
    auVar9[0xf] = -((*param_2)[0xf] == UNK_0011767f);
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
                 (ushort)(SUB161(auVar9 >> 0x77,0) & 1) << 0xe | (ushort)(auVar9[0xf] >> 7) << 0xf)
        == 0xffff) {
      *(undefined1 *)(param_1 + 1) = 6;
      goto LAB_0013d859;
    }
    goto LAB_0013d783;
  case 0x12:
    auVar11[0] = -((*param_2)[0] == s_max_single_add_v_00117710[0]);
    auVar11[1] = -((*param_2)[1] == s_max_single_add_v_00117710[1]);
    auVar11[2] = -((*param_2)[2] == s_max_single_add_v_00117710[2]);
    auVar11[3] = -((*param_2)[3] == s_max_single_add_v_00117710[3]);
    auVar11[4] = -((*param_2)[4] == s_max_single_add_v_00117710[4]);
    auVar11[5] = -((*param_2)[5] == s_max_single_add_v_00117710[5]);
    auVar11[6] = -((*param_2)[6] == s_max_single_add_v_00117710[6]);
    auVar11[7] = -((*param_2)[7] == s_max_single_add_v_00117710[7]);
    auVar11[8] = -((*param_2)[8] == s_max_single_add_v_00117710[8]);
    auVar11[9] = -((*param_2)[9] == s_max_single_add_v_00117710[9]);
    auVar11[10] = -((*param_2)[10] == s_max_single_add_v_00117710[10]);
    auVar11[0xb] = -((*param_2)[0xb] == s_max_single_add_v_00117710[0xb]);
    auVar11[0xc] = -((*param_2)[0xc] == s_max_single_add_v_00117710[0xc]);
    auVar11[0xd] = -((*param_2)[0xd] == s_max_single_add_v_00117710[0xd]);
    auVar11[0xe] = -((*param_2)[0xe] == s_max_single_add_v_00117710[0xe]);
    auVar11[0xf] = -((*param_2)[0xf] == s_max_single_add_v_00117710[0xf]);
    auVar28[0] = -((char)*(undefined2 *)param_2[1] == s_ol_00117390[0]);
    auVar28[1] = -((char)((ushort)*(undefined2 *)param_2[1] >> 8) == s_ol_00117390[1]);
    auVar28[2] = -(s_ol_00117390[2] == '\0');
    auVar28[3] = -(s_ol_00117390[3] == '\0');
    auVar28[4] = -(UNK_00117394 == '\0');
    auVar28[5] = -(UNK_00117395 == '\0');
    auVar28[6] = -(UNK_00117396 == '\0');
    auVar28[7] = -(UNK_00117397 == '\0');
    auVar28[8] = -(UNK_00117398 == '\0');
    auVar28[9] = -(UNK_00117399 == '\0');
    auVar28[10] = -(UNK_0011739a == '\0');
    auVar28[0xb] = -(UNK_0011739b == '\0');
    auVar28[0xc] = -(UNK_0011739c == '\0');
    auVar28[0xd] = -(UNK_0011739d == '\0');
    auVar28[0xe] = -(UNK_0011739e == '\0');
    auVar28[0xf] = -(UNK_0011739f == '\0');
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
      *(undefined1 *)(param_1 + 1) = 0xe;
      goto LAB_0013d859;
    }
    auVar12[0] = -((*param_2)[0] == DAT_00117660);
    auVar12[1] = -((*param_2)[1] == UNK_00117661);
    auVar12[2] = -((*param_2)[2] == UNK_00117662);
    auVar12[3] = -((*param_2)[3] == UNK_00117663);
    auVar12[4] = -((*param_2)[4] == UNK_00117664);
    auVar12[5] = -((*param_2)[5] == UNK_00117665);
    auVar12[6] = -((*param_2)[6] == UNK_00117666);
    auVar12[7] = -((*param_2)[7] == UNK_00117667);
    auVar12[8] = -((*param_2)[8] == UNK_00117668);
    auVar12[9] = -((*param_2)[9] == UNK_00117669);
    auVar12[10] = -((*param_2)[10] == UNK_0011766a);
    auVar12[0xb] = -((*param_2)[0xb] == UNK_0011766b);
    auVar12[0xc] = -((*param_2)[0xc] == UNK_0011766c);
    auVar12[0xd] = -((*param_2)[0xd] == UNK_0011766d);
    auVar12[0xe] = -((*param_2)[0xe] == UNK_0011766e);
    auVar12[0xf] = -((*param_2)[0xf] == UNK_0011766f);
    auVar29[0] = -((char)*(undefined2 *)param_2[1] == DAT_001179a0);
    auVar29[1] = -((char)((ushort)*(undefined2 *)param_2[1] >> 8) == UNK_001179a1);
    auVar29[2] = -(UNK_001179a2 == '\0');
    auVar29[3] = -(UNK_001179a3 == '\0');
    auVar29[4] = -(UNK_001179a4 == '\0');
    auVar29[5] = -(UNK_001179a5 == '\0');
    auVar29[6] = -(UNK_001179a6 == '\0');
    auVar29[7] = -(UNK_001179a7 == '\0');
    auVar29[8] = -(UNK_001179a8 == '\0');
    auVar29[9] = -(UNK_001179a9 == '\0');
    auVar29[10] = -(UNK_001179aa == '\0');
    auVar29[0xb] = -(UNK_001179ab == '\0');
    auVar29[0xc] = -(UNK_001179ac == '\0');
    auVar29[0xd] = -(UNK_001179ad == '\0');
    auVar29[0xe] = -(UNK_001179ae == '\0');
    auVar29[0xf] = -(UNK_001179af == '\0');
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
      *(undefined1 *)(param_1 + 1) = 0xf;
      goto LAB_0013d859;
    }
    auVar13[0] = -((*param_2)[0] == s_max_single_net_v_001176a0[0]);
    auVar13[1] = -((*param_2)[1] == s_max_single_net_v_001176a0[1]);
    auVar13[2] = -((*param_2)[2] == s_max_single_net_v_001176a0[2]);
    auVar13[3] = -((*param_2)[3] == s_max_single_net_v_001176a0[3]);
    auVar13[4] = -((*param_2)[4] == s_max_single_net_v_001176a0[4]);
    auVar13[5] = -((*param_2)[5] == s_max_single_net_v_001176a0[5]);
    auVar13[6] = -((*param_2)[6] == s_max_single_net_v_001176a0[6]);
    auVar13[7] = -((*param_2)[7] == s_max_single_net_v_001176a0[7]);
    auVar13[8] = -((*param_2)[8] == s_max_single_net_v_001176a0[8]);
    auVar13[9] = -((*param_2)[9] == s_max_single_net_v_001176a0[9]);
    auVar13[10] = -((*param_2)[10] == s_max_single_net_v_001176a0[10]);
    auVar13[0xb] = -((*param_2)[0xb] == s_max_single_net_v_001176a0[0xb]);
    auVar13[0xc] = -((*param_2)[0xc] == s_max_single_net_v_001176a0[0xc]);
    auVar13[0xd] = -((*param_2)[0xd] == s_max_single_net_v_001176a0[0xd]);
    auVar13[0xe] = -((*param_2)[0xe] == s_max_single_net_v_001176a0[0xe]);
    auVar13[0xf] = -((*param_2)[0xf] == s_max_single_net_v_001176a0[0xf]);
    auVar30[0] = -((char)*(undefined2 *)param_2[1] == s_ol_00117390[0]);
    auVar30[1] = -((char)((ushort)*(undefined2 *)param_2[1] >> 8) == s_ol_00117390[1]);
    auVar30[2] = -(s_ol_00117390[2] == '\0');
    auVar30[3] = -(s_ol_00117390[3] == '\0');
    auVar30[4] = -(UNK_00117394 == '\0');
    auVar30[5] = -(UNK_00117395 == '\0');
    auVar30[6] = -(UNK_00117396 == '\0');
    auVar30[7] = -(UNK_00117397 == '\0');
    auVar30[8] = -(UNK_00117398 == '\0');
    auVar30[9] = -(UNK_00117399 == '\0');
    auVar30[10] = -(UNK_0011739a == '\0');
    auVar30[0xb] = -(UNK_0011739b == '\0');
    auVar30[0xc] = -(UNK_0011739c == '\0');
    auVar30[0xd] = -(UNK_0011739d == '\0');
    auVar30[0xe] = -(UNK_0011739e == '\0');
    auVar30[0xf] = -(UNK_0011739f == '\0');
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
      *(undefined1 *)(param_1 + 1) = 0x10;
      goto LAB_0013d859;
    }
    auVar14[0] = -((*param_2)[0] == s_max_single_net_a_00117820[0]);
    auVar14[1] = -((*param_2)[1] == s_max_single_net_a_00117820[1]);
    auVar14[2] = -((*param_2)[2] == s_max_single_net_a_00117820[2]);
    auVar14[3] = -((*param_2)[3] == s_max_single_net_a_00117820[3]);
    auVar14[4] = -((*param_2)[4] == s_max_single_net_a_00117820[4]);
    auVar14[5] = -((*param_2)[5] == s_max_single_net_a_00117820[5]);
    auVar14[6] = -((*param_2)[6] == s_max_single_net_a_00117820[6]);
    auVar14[7] = -((*param_2)[7] == s_max_single_net_a_00117820[7]);
    auVar14[8] = -((*param_2)[8] == s_max_single_net_a_00117820[8]);
    auVar14[9] = -((*param_2)[9] == s_max_single_net_a_00117820[9]);
    auVar14[10] = -((*param_2)[10] == s_max_single_net_a_00117820[10]);
    auVar14[0xb] = -((*param_2)[0xb] == s_max_single_net_a_00117820[0xb]);
    auVar14[0xc] = -((*param_2)[0xc] == s_max_single_net_a_00117820[0xc]);
    auVar14[0xd] = -((*param_2)[0xd] == s_max_single_net_a_00117820[0xd]);
    auVar14[0xe] = -((*param_2)[0xe] == s_max_single_net_a_00117820[0xe]);
    auVar14[0xf] = -((*param_2)[0xf] == s_max_single_net_a_00117820[0xf]);
    auVar31[0] = -((char)*(undefined2 *)param_2[1] == DAT_001179a0);
    auVar31[1] = -((char)((ushort)*(undefined2 *)param_2[1] >> 8) == UNK_001179a1);
    auVar31[2] = -(UNK_001179a2 == '\0');
    auVar31[3] = -(UNK_001179a3 == '\0');
    auVar31[4] = -(UNK_001179a4 == '\0');
    auVar31[5] = -(UNK_001179a5 == '\0');
    auVar31[6] = -(UNK_001179a6 == '\0');
    auVar31[7] = -(UNK_001179a7 == '\0');
    auVar31[8] = -(UNK_001179a8 == '\0');
    auVar31[9] = -(UNK_001179a9 == '\0');
    auVar31[10] = -(UNK_001179aa == '\0');
    auVar31[0xb] = -(UNK_001179ab == '\0');
    auVar31[0xc] = -(UNK_001179ac == '\0');
    auVar31[0xd] = -(UNK_001179ad == '\0');
    auVar31[0xe] = -(UNK_001179ae == '\0');
    auVar31[0xf] = -(UNK_001179af == '\0');
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
      *(undefined1 *)(param_1 + 1) = 0x11;
      goto LAB_0013d859;
    }
    iVar7 = (*(code *)PTR_bcmp_001dcfa8)(param_2,"rolling_windows_mssplit_high_low_ratio_threshold")
    ;
    if (iVar7 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x21;
      goto LAB_0013d859;
    }
    bVar3 = true;
    bVar4 = false;
    goto LAB_0013dc02;
  case 0x13:
    auVar32[0] = -((*param_2)[3] == DAT_001173b0);
    auVar32[1] = -((*param_2)[4] == UNK_001173b1);
    auVar32[2] = -((*param_2)[5] == UNK_001173b2);
    auVar32[3] = -((*param_2)[6] == UNK_001173b3);
    auVar32[4] = -((*param_2)[7] == UNK_001173b4);
    auVar32[5] = -((*param_2)[8] == UNK_001173b5);
    auVar32[6] = -((*param_2)[9] == UNK_001173b6);
    auVar32[7] = -((*param_2)[10] == UNK_001173b7);
    auVar32[8] = -((*param_2)[0xb] == UNK_001173b8);
    auVar32[9] = -((*param_2)[0xc] == UNK_001173b9);
    auVar32[10] = -((*param_2)[0xd] == UNK_001173ba);
    auVar32[0xb] = -((*param_2)[0xe] == UNK_001173bb);
    auVar32[0xc] = -((*param_2)[0xf] == UNK_001173bc);
    auVar32[0xd] = -(param_2[1][0] == UNK_001173bd);
    auVar32[0xe] = -(param_2[1][1] == UNK_001173be);
    auVar32[0xf] = -(param_2[1][2] == UNK_001173bf);
    auVar15[0] = -((*param_2)[0] == s_signal_trigger_m_00117830[0]);
    auVar15[1] = -((*param_2)[1] == s_signal_trigger_m_00117830[1]);
    auVar15[2] = -((*param_2)[2] == s_signal_trigger_m_00117830[2]);
    auVar15[3] = -((*param_2)[3] == s_signal_trigger_m_00117830[3]);
    auVar15[4] = -((*param_2)[4] == s_signal_trigger_m_00117830[4]);
    auVar15[5] = -((*param_2)[5] == s_signal_trigger_m_00117830[5]);
    auVar15[6] = -((*param_2)[6] == s_signal_trigger_m_00117830[6]);
    auVar15[7] = -((*param_2)[7] == s_signal_trigger_m_00117830[7]);
    auVar15[8] = -((*param_2)[8] == s_signal_trigger_m_00117830[8]);
    auVar15[9] = -((*param_2)[9] == s_signal_trigger_m_00117830[9]);
    auVar15[10] = -((*param_2)[10] == s_signal_trigger_m_00117830[10]);
    auVar15[0xb] = -((*param_2)[0xb] == s_signal_trigger_m_00117830[0xb]);
    auVar15[0xc] = -((*param_2)[0xc] == s_signal_trigger_m_00117830[0xc]);
    auVar15[0xd] = -((*param_2)[0xd] == s_signal_trigger_m_00117830[0xd]);
    auVar15[0xe] = -((*param_2)[0xe] == s_signal_trigger_m_00117830[0xe]);
    auVar15[0xf] = -((*param_2)[0xf] == s_signal_trigger_m_00117830[0xf]);
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
      *(undefined1 *)(param_1 + 1) = 3;
      goto LAB_0013d859;
    }
    iVar7 = (*(code *)PTR_bcmp_001dcfa8)
                      (param_2,
                       "taker_rate_baselinemax_taker_ratetrade_slipperyclose_position_block_mstouch_gatetouch_gate_timeout_msmax_single_add_volmax_single_add_amtmax_single_net_volmax_single_net_amtmax_single_close_volmax_single_close_amt"
                      );
    if (iVar7 == 0) {
      *(undefined1 *)(param_1 + 1) = 8;
      goto LAB_0013d859;
    }
    iVar7 = (*(code *)PTR_bcmp_001dcfa8)(param_2,"long_open_threshold",param_3);
    if (iVar7 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x14;
      goto LAB_0013d859;
    }
    bVar3 = false;
    goto LAB_0013d8bb;
  case 0x14:
    uVar2 = *(undefined4 *)param_2[1];
    auVar35[0] = -((char)uVar2 == DAT_00117350);
    auVar35[1] = -((char)((uint)uVar2 >> 8) == UNK_00117351);
    auVar35[2] = -((char)((uint)uVar2 >> 0x10) == UNK_00117352);
    auVar35[3] = -((char)((uint)uVar2 >> 0x18) == UNK_00117353);
    auVar35[4] = -(UNK_00117354 == '\0');
    auVar35[5] = -(UNK_00117355 == '\0');
    auVar35[6] = -(UNK_00117356 == '\0');
    auVar35[7] = -(UNK_00117357 == '\0');
    auVar35[8] = -(UNK_00117358 == '\0');
    auVar35[9] = -(UNK_00117359 == '\0');
    auVar35[10] = -(UNK_0011735a == '\0');
    auVar35[0xb] = -(UNK_0011735b == '\0');
    auVar35[0xc] = -(UNK_0011735c == '\0');
    auVar35[0xd] = -(UNK_0011735d == '\0');
    auVar35[0xe] = -(UNK_0011735e == '\0');
    auVar35[0xf] = -(UNK_0011735f == '\0');
    auVar18[0] = -((*param_2)[0] == s_max_single_close_001174e0[0]);
    auVar18[1] = -((*param_2)[1] == s_max_single_close_001174e0[1]);
    auVar18[2] = -((*param_2)[2] == s_max_single_close_001174e0[2]);
    auVar18[3] = -((*param_2)[3] == s_max_single_close_001174e0[3]);
    auVar18[4] = -((*param_2)[4] == s_max_single_close_001174e0[4]);
    auVar18[5] = -((*param_2)[5] == s_max_single_close_001174e0[5]);
    auVar18[6] = -((*param_2)[6] == s_max_single_close_001174e0[6]);
    auVar18[7] = -((*param_2)[7] == s_max_single_close_001174e0[7]);
    auVar18[8] = -((*param_2)[8] == s_max_single_close_001174e0[8]);
    auVar18[9] = -((*param_2)[9] == s_max_single_close_001174e0[9]);
    auVar18[10] = -((*param_2)[10] == s_max_single_close_001174e0[10]);
    auVar18[0xb] = -((*param_2)[0xb] == s_max_single_close_001174e0[0xb]);
    auVar18[0xc] = -((*param_2)[0xc] == s_max_single_close_001174e0[0xc]);
    auVar18[0xd] = -((*param_2)[0xd] == s_max_single_close_001174e0[0xd]);
    auVar18[0xe] = -((*param_2)[0xe] == s_max_single_close_001174e0[0xe]);
    auVar18[0xf] = -((*param_2)[0xf] == s_max_single_close_001174e0[0xf]);
    auVar18 = auVar18 & auVar35;
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
      *(undefined1 *)(param_1 + 1) = 0x12;
      goto LAB_0013d859;
    }
    auVar10 = *param_2;
    uVar2 = *(undefined4 *)param_2[1];
    auVar44[0] = -((char)uVar2 == s__amt_001175c0[0]);
    auVar44[1] = -((char)((uint)uVar2 >> 8) == s__amt_001175c0[1]);
    auVar44[2] = -((char)((uint)uVar2 >> 0x10) == s__amt_001175c0[2]);
    auVar44[3] = -((char)((uint)uVar2 >> 0x18) == s__amt_001175c0[3]);
    auVar44[4] = -(s__amt_001175c0[4] == '\0');
    auVar44[5] = -(s__amt_001175c0[5] == '\0');
    auVar44[6] = -(s__amt_001175c0[6] == '\0');
    auVar44[7] = -(s__amt_001175c0[7] == '\0');
    auVar44[8] = -(UNK_001175c8 == '\0');
    auVar44[9] = -(UNK_001175c9 == '\0');
    auVar44[10] = -(UNK_001175ca == '\0');
    auVar44[0xb] = -(UNK_001175cb == '\0');
    auVar44[0xc] = -(UNK_001175cc == '\0');
    auVar44[0xd] = -(UNK_001175cd == '\0');
    auVar44[0xe] = -(UNK_001175ce == '\0');
    auVar44[0xf] = -(UNK_001175cf == '\0');
    auVar36[0] = -(auVar10[0] == 'm');
    auVar36[1] = -(auVar10[1] == 'a');
    auVar36[2] = -(auVar10[2] == 'x');
    auVar36[3] = -(auVar10[3] == '_');
    auVar36[4] = -(auVar10[4] == 's');
    auVar36[5] = -(auVar10[5] == 'i');
    auVar36[6] = -(auVar10[6] == 'n');
    auVar36[7] = -(auVar10[7] == 'g');
    auVar36[8] = -(auVar10[8] == 'l');
    auVar36[9] = -(auVar10[9] == 'e');
    auVar36[10] = -(auVar10[10] == '_');
    auVar36[0xb] = -(auVar10[0xb] == 'c');
    auVar36[0xc] = -(auVar10[0xc] == 'l');
    auVar36[0xd] = -(auVar10[0xd] == 'o');
    auVar36[0xe] = -(auVar10[0xe] == 's');
    auVar36[0xf] = -(auVar10[0xf] == 'e');
    auVar44 = auVar44 & auVar36;
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
      *(undefined1 *)(param_1 + 1) = 0x13;
      goto LAB_0013d859;
    }
    iVar7 = (*(code *)PTR_bcmp_001dcfa8)(param_2,"long_close_threshold");
    if (iVar7 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x15;
      goto LAB_0013d859;
    }
    iVar7 = (*(code *)PTR_bcmp_001dcfa8)(param_2,"short_open_threshold",param_3);
    if (iVar7 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x16;
      goto LAB_0013d859;
    }
    bVar6 = true;
    bVar3 = false;
    goto switchD_0013d48c_caseD_c;
  case 0x15:
    auVar34[0] = -((*param_2)[5] == DAT_00117770);
    auVar34[1] = -((*param_2)[6] == UNK_00117771);
    auVar34[2] = -((*param_2)[7] == UNK_00117772);
    auVar34[3] = -((*param_2)[8] == UNK_00117773);
    auVar34[4] = -((*param_2)[9] == UNK_00117774);
    auVar34[5] = -((*param_2)[10] == UNK_00117775);
    auVar34[6] = -((*param_2)[0xb] == UNK_00117776);
    auVar34[7] = -((*param_2)[0xc] == UNK_00117777);
    auVar34[8] = -((*param_2)[0xd] == UNK_00117778);
    auVar34[9] = -((*param_2)[0xe] == UNK_00117779);
    auVar34[10] = -((*param_2)[0xf] == UNK_0011777a);
    auVar34[0xb] = -(param_2[1][0] == UNK_0011777b);
    auVar34[0xc] = -(param_2[1][1] == UNK_0011777c);
    auVar34[0xd] = -(param_2[1][2] == UNK_0011777d);
    auVar34[0xe] = -(param_2[1][3] == UNK_0011777e);
    auVar34[0xf] = -(param_2[1][4] == UNK_0011777f);
    auVar17[0] = -((*param_2)[0] == DAT_00117410);
    auVar17[1] = -((*param_2)[1] == UNK_00117411);
    auVar17[2] = -((*param_2)[2] == UNK_00117412);
    auVar17[3] = -((*param_2)[3] == UNK_00117413);
    auVar17[4] = -((*param_2)[4] == UNK_00117414);
    auVar17[5] = -((*param_2)[5] == UNK_00117415);
    auVar17[6] = -((*param_2)[6] == UNK_00117416);
    auVar17[7] = -((*param_2)[7] == UNK_00117417);
    auVar17[8] = -((*param_2)[8] == UNK_00117418);
    auVar17[9] = -((*param_2)[9] == UNK_00117419);
    auVar17[10] = -((*param_2)[10] == UNK_0011741a);
    auVar17[0xb] = -((*param_2)[0xb] == UNK_0011741b);
    auVar17[0xc] = -((*param_2)[0xc] == UNK_0011741c);
    auVar17[0xd] = -((*param_2)[0xd] == UNK_0011741d);
    auVar17[0xe] = -((*param_2)[0xe] == UNK_0011741e);
    auVar17[0xf] = -((*param_2)[0xf] == UNK_0011741f);
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
      *(undefined1 *)(param_1 + 1) = 0xd;
      goto LAB_0013d859;
    }
    iVar7 = (*(code *)PTR_bcmp_001dcfa8)(param_2,"short_close_threshold");
    if (iVar7 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x17;
      goto LAB_0013d859;
    }
    bVar3 = true;
LAB_0013d8bb:
    bVar6 = false;
switchD_0013d48c_caseD_c:
joined_r0x0013d9a7:
    if (param_3 - 0x18U < 10) {
      switch((long)&switchD_0013d9bb::switchdataD_00117a84 +
             (long)(int)(&switchD_0013d9bb::switchdataD_00117a84)[param_3 + -0x18]) {
      case 0x13d9bd:
        uVar1 = *(undefined8 *)param_2[1];
        auVar37[0] = -((char)uVar1 == s_hreshold_001177b0[0]);
        auVar37[1] = -((char)((ulong)uVar1 >> 8) == s_hreshold_001177b0[1]);
        auVar37[2] = -((char)((ulong)uVar1 >> 0x10) == s_hreshold_001177b0[2]);
        auVar37[3] = -((char)((ulong)uVar1 >> 0x18) == s_hreshold_001177b0[3]);
        auVar37[4] = -((char)((ulong)uVar1 >> 0x20) == s_hreshold_001177b0[4]);
        auVar37[5] = -((char)((ulong)uVar1 >> 0x28) == s_hreshold_001177b0[5]);
        auVar37[6] = -((char)((ulong)uVar1 >> 0x30) == s_hreshold_001177b0[6]);
        auVar37[7] = -((char)((ulong)uVar1 >> 0x38) == s_hreshold_001177b0[7]);
        auVar37[8] = -(s_hreshold_001177b0[8] == '\0');
        auVar37[9] = -(s_hreshold_001177b0[9] == '\0');
        auVar37[10] = -(s_hreshold_001177b0[10] == '\0');
        auVar37[0xb] = -(s_hreshold_001177b0[0xb] == '\0');
        auVar37[0xc] = -(UNK_001177bc == '\0');
        auVar37[0xd] = -(UNK_001177bd == '\0');
        auVar37[0xe] = -(UNK_001177be == '\0');
        auVar37[0xf] = -(UNK_001177bf == '\0');
        auVar19[0] = -((*param_2)[0] == DAT_00117650);
        auVar19[1] = -((*param_2)[1] == UNK_00117651);
        auVar19[2] = -((*param_2)[2] == UNK_00117652);
        auVar19[3] = -((*param_2)[3] == UNK_00117653);
        auVar19[4] = -((*param_2)[4] == UNK_00117654);
        auVar19[5] = -((*param_2)[5] == UNK_00117655);
        auVar19[6] = -((*param_2)[6] == UNK_00117656);
        auVar19[7] = -((*param_2)[7] == UNK_00117657);
        auVar19[8] = -((*param_2)[8] == UNK_00117658);
        auVar19[9] = -((*param_2)[9] == UNK_00117659);
        auVar19[10] = -((*param_2)[10] == UNK_0011765a);
        auVar19[0xb] = -((*param_2)[0xb] == UNK_0011765b);
        auVar19[0xc] = -((*param_2)[0xc] == UNK_0011765c);
        auVar19[0xd] = -((*param_2)[0xd] == UNK_0011765d);
        auVar19[0xe] = -((*param_2)[0xe] == UNK_0011765e);
        auVar19[0xf] = -((*param_2)[0xf] == UNK_0011765f);
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
          *(undefined1 *)(param_1 + 1) = 0x19;
          goto LAB_0013d859;
        }
        uVar1 = *(undefined8 *)param_2[1];
        auVar38[0] = -((char)uVar1 == s_hreshold_001177b0[0]);
        auVar38[1] = -((char)((ulong)uVar1 >> 8) == s_hreshold_001177b0[1]);
        auVar38[2] = -((char)((ulong)uVar1 >> 0x10) == s_hreshold_001177b0[2]);
        auVar38[3] = -((char)((ulong)uVar1 >> 0x18) == s_hreshold_001177b0[3]);
        auVar38[4] = -((char)((ulong)uVar1 >> 0x20) == s_hreshold_001177b0[4]);
        auVar38[5] = -((char)((ulong)uVar1 >> 0x28) == s_hreshold_001177b0[5]);
        auVar38[6] = -((char)((ulong)uVar1 >> 0x30) == s_hreshold_001177b0[6]);
        auVar38[7] = -((char)((ulong)uVar1 >> 0x38) == s_hreshold_001177b0[7]);
        auVar38[8] = -(s_hreshold_001177b0[8] == '\0');
        auVar38[9] = -(s_hreshold_001177b0[9] == '\0');
        auVar38[10] = -(s_hreshold_001177b0[10] == '\0');
        auVar38[0xb] = -(s_hreshold_001177b0[0xb] == '\0');
        auVar38[0xc] = -(UNK_001177bc == '\0');
        auVar38[0xd] = -(UNK_001177bd == '\0');
        auVar38[0xe] = -(UNK_001177be == '\0');
        auVar38[0xf] = -(UNK_001177bf == '\0');
        auVar20[0] = -((*param_2)[0] == DAT_00117420);
        auVar20[1] = -((*param_2)[1] == UNK_00117421);
        auVar20[2] = -((*param_2)[2] == UNK_00117422);
        auVar20[3] = -((*param_2)[3] == UNK_00117423);
        auVar20[4] = -((*param_2)[4] == UNK_00117424);
        auVar20[5] = -((*param_2)[5] == UNK_00117425);
        auVar20[6] = -((*param_2)[6] == UNK_00117426);
        auVar20[7] = -((*param_2)[7] == UNK_00117427);
        auVar20[8] = -((*param_2)[8] == UNK_00117428);
        auVar20[9] = -((*param_2)[9] == UNK_00117429);
        auVar20[10] = -((*param_2)[10] == UNK_0011742a);
        auVar20[0xb] = -((*param_2)[0xb] == UNK_0011742b);
        auVar20[0xc] = -((*param_2)[0xc] == UNK_0011742c);
        auVar20[0xd] = -((*param_2)[0xd] == UNK_0011742d);
        auVar20[0xe] = -((*param_2)[0xe] == UNK_0011742e);
        auVar20[0xf] = -((*param_2)[0xf] == UNK_0011742f);
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
          *(undefined1 *)(param_1 + 1) = 0x1a;
          goto LAB_0013d859;
        }
        break;
      case 0x13da78:
        auVar39[0] = -((*param_2)[0xb] == s_ax_position_ts_s_00117320[0]);
        auVar39[1] = -((*param_2)[0xc] == s_ax_position_ts_s_00117320[1]);
        auVar39[2] = -((*param_2)[0xd] == s_ax_position_ts_s_00117320[2]);
        auVar39[3] = -((*param_2)[0xe] == s_ax_position_ts_s_00117320[3]);
        auVar39[4] = -((*param_2)[0xf] == s_ax_position_ts_s_00117320[4]);
        auVar39[5] = -(param_2[1][0] == s_ax_position_ts_s_00117320[5]);
        auVar39[6] = -(param_2[1][1] == s_ax_position_ts_s_00117320[6]);
        auVar39[7] = -(param_2[1][2] == s_ax_position_ts_s_00117320[7]);
        auVar39[8] = -(param_2[1][3] == s_ax_position_ts_s_00117320[8]);
        auVar39[9] = -(param_2[1][4] == s_ax_position_ts_s_00117320[9]);
        auVar39[10] = -(param_2[1][5] == s_ax_position_ts_s_00117320[10]);
        auVar39[0xb] = -(param_2[1][6] == s_ax_position_ts_s_00117320[0xb]);
        auVar39[0xc] = -(param_2[1][7] == s_ax_position_ts_s_00117320[0xc]);
        auVar39[0xd] = -(param_2[1][8] == s_ax_position_ts_s_00117320[0xd]);
        auVar39[0xe] = -(param_2[1][9] == s_ax_position_ts_s_00117320[0xe]);
        auVar39[0xf] = -(param_2[1][10] == s_ax_position_ts_s_00117320[0xf]);
        auVar21[0] = -((*param_2)[0] == DAT_00117640);
        auVar21[1] = -((*param_2)[1] == UNK_00117641);
        auVar21[2] = -((*param_2)[2] == UNK_00117642);
        auVar21[3] = -((*param_2)[3] == UNK_00117643);
        auVar21[4] = -((*param_2)[4] == UNK_00117644);
        auVar21[5] = -((*param_2)[5] == UNK_00117645);
        auVar21[6] = -((*param_2)[6] == UNK_00117646);
        auVar21[7] = -((*param_2)[7] == UNK_00117647);
        auVar21[8] = -((*param_2)[8] == UNK_00117648);
        auVar21[9] = -((*param_2)[9] == UNK_00117649);
        auVar21[10] = -((*param_2)[10] == UNK_0011764a);
        auVar21[0xb] = -((*param_2)[0xb] == UNK_0011764b);
        auVar21[0xc] = -((*param_2)[0xc] == UNK_0011764c);
        auVar21[0xd] = -((*param_2)[0xd] == UNK_0011764d);
        auVar21[0xe] = -((*param_2)[0xe] == UNK_0011764e);
        auVar21[0xf] = -((*param_2)[0xf] == UNK_0011764f);
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
          *(undefined1 *)(param_1 + 1) = 0x1d;
          goto LAB_0013d859;
        }
        auVar40[0] = -((*param_2)[0xb] == DAT_001173c0);
        auVar40[1] = -((*param_2)[0xc] == UNK_001173c1);
        auVar40[2] = -((*param_2)[0xd] == UNK_001173c2);
        auVar40[3] = -((*param_2)[0xe] == UNK_001173c3);
        auVar40[4] = -((*param_2)[0xf] == UNK_001173c4);
        auVar40[5] = -(param_2[1][0] == UNK_001173c5);
        auVar40[6] = -(param_2[1][1] == UNK_001173c6);
        auVar40[7] = -(param_2[1][2] == UNK_001173c7);
        auVar40[8] = -(param_2[1][3] == UNK_001173c8);
        auVar40[9] = -(param_2[1][4] == UNK_001173c9);
        auVar40[10] = -(param_2[1][5] == UNK_001173ca);
        auVar40[0xb] = -(param_2[1][6] == UNK_001173cb);
        auVar40[0xc] = -(param_2[1][7] == UNK_001173cc);
        auVar40[0xd] = -(param_2[1][8] == UNK_001173cd);
        auVar40[0xe] = -(param_2[1][9] == UNK_001173ce);
        auVar40[0xf] = -(param_2[1][10] == UNK_001173cf);
        auVar22[0] = -((*param_2)[0] == DAT_00117900);
        auVar22[1] = -((*param_2)[1] == UNK_00117901);
        auVar22[2] = -((*param_2)[2] == UNK_00117902);
        auVar22[3] = -((*param_2)[3] == UNK_00117903);
        auVar22[4] = -((*param_2)[4] == UNK_00117904);
        auVar22[5] = -((*param_2)[5] == UNK_00117905);
        auVar22[6] = -((*param_2)[6] == UNK_00117906);
        auVar22[7] = -((*param_2)[7] == UNK_00117907);
        auVar22[8] = -((*param_2)[8] == UNK_00117908);
        auVar22[9] = -((*param_2)[9] == UNK_00117909);
        auVar22[10] = -((*param_2)[10] == UNK_0011790a);
        auVar22[0xb] = -((*param_2)[0xb] == UNK_0011790b);
        auVar22[0xc] = -((*param_2)[0xc] == UNK_0011790c);
        auVar22[0xd] = -((*param_2)[0xd] == UNK_0011790d);
        auVar22[0xe] = -((*param_2)[0xe] == UNK_0011790e);
        auVar22[0xf] = -((*param_2)[0xf] == UNK_0011790f);
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
          *(undefined1 *)(param_1 + 1) = 0x1f;
          goto LAB_0013d859;
        }
        break;
      case 0x13dae5:
        auVar41[0] = -((*param_2)[9] == DAT_00117600);
        auVar41[1] = -((*param_2)[10] == UNK_00117601);
        auVar41[2] = -((*param_2)[0xb] == UNK_00117602);
        auVar41[3] = -((*param_2)[0xc] == UNK_00117603);
        auVar41[4] = -((*param_2)[0xd] == UNK_00117604);
        auVar41[5] = -((*param_2)[0xe] == UNK_00117605);
        auVar41[6] = -((*param_2)[0xf] == UNK_00117606);
        auVar41[7] = -(param_2[1][0] == UNK_00117607);
        auVar41[8] = -(param_2[1][1] == UNK_00117608);
        auVar41[9] = -(param_2[1][2] == UNK_00117609);
        auVar41[10] = -(param_2[1][3] == UNK_0011760a);
        auVar41[0xb] = -(param_2[1][4] == UNK_0011760b);
        auVar41[0xc] = -(param_2[1][5] == UNK_0011760c);
        auVar41[0xd] = -(param_2[1][6] == UNK_0011760d);
        auVar41[0xe] = -(param_2[1][7] == UNK_0011760e);
        auVar41[0xf] = -(param_2[1][8] == UNK_0011760f);
        auVar23[0] = -((*param_2)[0] == DAT_001175d0);
        auVar23[1] = -((*param_2)[1] == UNK_001175d1);
        auVar23[2] = -((*param_2)[2] == UNK_001175d2);
        auVar23[3] = -((*param_2)[3] == UNK_001175d3);
        auVar23[4] = -((*param_2)[4] == UNK_001175d4);
        auVar23[5] = -((*param_2)[5] == UNK_001175d5);
        auVar23[6] = -((*param_2)[6] == UNK_001175d6);
        auVar23[7] = -((*param_2)[7] == UNK_001175d7);
        auVar23[8] = -((*param_2)[8] == UNK_001175d8);
        auVar23[9] = -((*param_2)[9] == UNK_001175d9);
        auVar23[10] = -((*param_2)[10] == UNK_001175da);
        auVar23[0xb] = -((*param_2)[0xb] == UNK_001175db);
        auVar23[0xc] = -((*param_2)[0xc] == UNK_001175dc);
        auVar23[0xd] = -((*param_2)[0xd] == UNK_001175dd);
        auVar23[0xe] = -((*param_2)[0xe] == UNK_001175de);
        auVar23[0xf] = -((*param_2)[0xf] == UNK_001175df);
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
          *(undefined1 *)(param_1 + 1) = 0x1b;
          goto LAB_0013d859;
        }
        bVar4 = true;
        bVar5 = bVar4;
        if (bVar6) goto LAB_0013dbdd;
        bVar3 = false;
        goto LAB_0013d787;
      case 0x13db24:
        iVar7 = (*(code *)PTR_bcmp_001dcfa8)
                          (param_2,"dyn_score_position_ts_threshold_sdyn_score_max_position_ts_s",
                           0x21);
        if (iVar7 == 0) {
          *(undefined1 *)(param_1 + 1) = 0x1c;
          goto LAB_0013d859;
        }
        break;
      case 0x13db62:
        goto switchD_0013d9bb_caseD_13db62;
      }
      bVar4 = false;
      bVar5 = false;
      bVar3 = false;
      if (bVar6) {
LAB_0013dbdd:
        iVar7 = (*(code *)PTR_bcmp_001dcfa8)(param_2,"market_volatility_ms");
        if (iVar7 == 0) {
          *(undefined1 *)(param_1 + 1) = 0x20;
          goto LAB_0013d859;
        }
        bVar3 = false;
        bVar4 = bVar5;
        goto LAB_0013dc02;
      }
      goto LAB_0013d787;
    }
switchD_0013d9bb_caseD_13db62:
    if ((bVar3) &&
       (iVar7 = (*(code *)PTR_bcmp_001dcfa8)
                          (param_2,"dyn_score_delta_scoreuse_dynamic_volspread_ratio"), iVar7 == 0))
    {
      *(undefined1 *)(param_1 + 1) = 0x1e;
      goto LAB_0013d859;
    }
    bVar3 = false;
    bVar5 = false;
    bVar4 = false;
    if (bVar6) goto LAB_0013dbdd;
LAB_0013dc02:
    if (param_3 != 0x1e) goto LAB_0013d787;
    auVar42[0] = -((*param_2)[0xe] == DAT_001175e0);
    auVar42[1] = -((*param_2)[0xf] == UNK_001175e1);
    auVar42[2] = -(param_2[1][0] == UNK_001175e2);
    auVar42[3] = -(param_2[1][1] == UNK_001175e3);
    auVar42[4] = -(param_2[1][2] == UNK_001175e4);
    auVar42[5] = -(param_2[1][3] == UNK_001175e5);
    auVar42[6] = -(param_2[1][4] == UNK_001175e6);
    auVar42[7] = -(param_2[1][5] == UNK_001175e7);
    auVar42[8] = -(param_2[1][6] == UNK_001175e8);
    auVar42[9] = -(param_2[1][7] == UNK_001175e9);
    auVar42[10] = -(param_2[1][8] == UNK_001175ea);
    auVar42[0xb] = -(param_2[1][9] == UNK_001175eb);
    auVar42[0xc] = -(param_2[1][10] == UNK_001175ec);
    auVar42[0xd] = -(param_2[1][0xb] == UNK_001175ed);
    auVar42[0xe] = -(param_2[1][0xc] == UNK_001175ee);
    auVar42[0xf] = -(param_2[1][0xd] == UNK_001175ef);
    auVar24[0] = -((*param_2)[0] == s_split_high_low_r_00117460[0]);
    auVar24[1] = -((*param_2)[1] == s_split_high_low_r_00117460[1]);
    auVar24[2] = -((*param_2)[2] == s_split_high_low_r_00117460[2]);
    auVar24[3] = -((*param_2)[3] == s_split_high_low_r_00117460[3]);
    auVar24[4] = -((*param_2)[4] == s_split_high_low_r_00117460[4]);
    auVar24[5] = -((*param_2)[5] == s_split_high_low_r_00117460[5]);
    auVar24[6] = -((*param_2)[6] == s_split_high_low_r_00117460[6]);
    auVar24[7] = -((*param_2)[7] == s_split_high_low_r_00117460[7]);
    auVar24[8] = -((*param_2)[8] == s_split_high_low_r_00117460[8]);
    auVar24[9] = -((*param_2)[9] == s_split_high_low_r_00117460[9]);
    auVar24[10] = -((*param_2)[10] == s_split_high_low_r_00117460[10]);
    auVar24[0xb] = -((*param_2)[0xb] == s_split_high_low_r_00117460[0xb]);
    auVar24[0xc] = -((*param_2)[0xc] == s_split_high_low_r_00117460[0xc]);
    auVar24[0xd] = -((*param_2)[0xd] == s_split_high_low_r_00117460[0xd]);
    auVar24[0xe] = -((*param_2)[0xe] == s_split_high_low_r_00117460[0xe]);
    auVar24[0xf] = -((*param_2)[0xf] == s_split_high_low_r_00117460[0xf]);
    auVar24 = auVar24 & auVar42;
    if ((ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) | (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
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
      *(undefined1 *)(param_1 + 1) = 0x22;
      goto LAB_0013d859;
    }
    auVar43[0] = -((*param_2)[0xe] == DAT_001177c0);
    auVar43[1] = -((*param_2)[0xf] == UNK_001177c1);
    auVar43[2] = -(param_2[1][0] == UNK_001177c2);
    auVar43[3] = -(param_2[1][1] == UNK_001177c3);
    auVar43[4] = -(param_2[1][2] == UNK_001177c4);
    auVar43[5] = -(param_2[1][3] == UNK_001177c5);
    auVar43[6] = -(param_2[1][4] == UNK_001177c6);
    auVar43[7] = -(param_2[1][5] == UNK_001177c7);
    auVar43[8] = -(param_2[1][6] == UNK_001177c8);
    auVar43[9] = -(param_2[1][7] == UNK_001177c9);
    auVar43[10] = -(param_2[1][8] == UNK_001177ca);
    auVar43[0xb] = -(param_2[1][9] == UNK_001177cb);
    auVar43[0xc] = -(param_2[1][10] == UNK_001177cc);
    auVar43[0xd] = -(param_2[1][0xb] == UNK_001177cd);
    auVar43[0xe] = -(param_2[1][0xc] == UNK_001177ce);
    auVar43[0xf] = -(param_2[1][0xd] == UNK_001177cf);
    auVar25[0] = -((*param_2)[0] == DAT_001179d0);
    auVar25[1] = -((*param_2)[1] == UNK_001179d1);
    auVar25[2] = -((*param_2)[2] == UNK_001179d2);
    auVar25[3] = -((*param_2)[3] == UNK_001179d3);
    auVar25[4] = -((*param_2)[4] == UNK_001179d4);
    auVar25[5] = -((*param_2)[5] == UNK_001179d5);
    auVar25[6] = -((*param_2)[6] == UNK_001179d6);
    auVar25[7] = -((*param_2)[7] == UNK_001179d7);
    auVar25[8] = -((*param_2)[8] == UNK_001179d8);
    auVar25[9] = -((*param_2)[9] == UNK_001179d9);
    auVar25[10] = -((*param_2)[10] == UNK_001179da);
    auVar25[0xb] = -((*param_2)[0xb] == UNK_001179db);
    auVar25[0xc] = -((*param_2)[0xc] == UNK_001179dc);
    auVar25[0xd] = -((*param_2)[0xd] == UNK_001179dd);
    auVar25[0xe] = -((*param_2)[0xe] == UNK_001179de);
    auVar25[0xf] = -((*param_2)[0xf] == UNK_001179df);
    auVar25 = auVar25 & auVar43;
    if ((ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) | (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1
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
                (ushort)(byte)(auVar25[0xf] >> 7) << 0xf) == 0xffff) {
      *(undefined1 *)(param_1 + 1) = 0x25;
      goto LAB_0013d859;
    }
    goto LAB_0013d7ba;
  case 0x16:
    auVar26[0] = -((*param_2)[6] == DAT_001173a0);
    auVar26[1] = -((*param_2)[7] == UNK_001173a1);
    auVar26[2] = -((*param_2)[8] == UNK_001173a2);
    auVar26[3] = -((*param_2)[9] == UNK_001173a3);
    auVar26[4] = -((*param_2)[10] == UNK_001173a4);
    auVar26[5] = -((*param_2)[0xb] == UNK_001173a5);
    auVar26[6] = -((*param_2)[0xc] == UNK_001173a6);
    auVar26[7] = -((*param_2)[0xd] == UNK_001173a7);
    auVar26[8] = -((*param_2)[0xe] == UNK_001173a8);
    auVar26[9] = -((*param_2)[0xf] == UNK_001173a9);
    auVar26[10] = -(param_2[1][0] == UNK_001173aa);
    auVar26[0xb] = -(param_2[1][1] == UNK_001173ab);
    auVar26[0xc] = -(param_2[1][2] == UNK_001173ac);
    auVar26[0xd] = -(param_2[1][3] == UNK_001173ad);
    auVar26[0xe] = -(param_2[1][4] == UNK_001173ae);
    auVar26[0xf] = -(param_2[1][5] == UNK_001173af);
    auVar8[0] = -((*param_2)[0] == DAT_00117510);
    auVar8[1] = -((*param_2)[1] == UNK_00117511);
    auVar8[2] = -((*param_2)[2] == UNK_00117512);
    auVar8[3] = -((*param_2)[3] == UNK_00117513);
    auVar8[4] = -((*param_2)[4] == UNK_00117514);
    auVar8[5] = -((*param_2)[5] == UNK_00117515);
    auVar8[6] = -((*param_2)[6] == UNK_00117516);
    auVar8[7] = -((*param_2)[7] == UNK_00117517);
    auVar8[8] = -((*param_2)[8] == UNK_00117518);
    auVar8[9] = -((*param_2)[9] == UNK_00117519);
    auVar8[10] = -((*param_2)[10] == UNK_0011751a);
    auVar8[0xb] = -((*param_2)[0xb] == UNK_0011751b);
    auVar8[0xc] = -((*param_2)[0xc] == UNK_0011751c);
    auVar8[0xd] = -((*param_2)[0xd] == UNK_0011751d);
    auVar8[0xe] = -((*param_2)[0xe] == UNK_0011751e);
    auVar8[0xf] = -((*param_2)[0xf] == UNK_0011751f);
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
      *(undefined1 *)(param_1 + 1) = 7;
      goto LAB_0013d859;
    }
LAB_0013d783:
    bVar3 = false;
    bVar4 = false;
LAB_0013d787:
    if ((param_3 == 0x1f) &&
       (auVar33[0] = -((*param_2)[0xf] == s__pending_time_ms_00117720[0]),
       auVar33[1] = -(param_2[1][0] == s__pending_time_ms_00117720[1]),
       auVar33[2] = -(param_2[1][1] == s__pending_time_ms_00117720[2]),
       auVar33[3] = -(param_2[1][2] == s__pending_time_ms_00117720[3]),
       auVar33[4] = -(param_2[1][3] == s__pending_time_ms_00117720[4]),
       auVar33[5] = -(param_2[1][4] == s__pending_time_ms_00117720[5]),
       auVar33[6] = -(param_2[1][5] == s__pending_time_ms_00117720[6]),
       auVar33[7] = -(param_2[1][6] == s__pending_time_ms_00117720[7]),
       auVar33[8] = -(param_2[1][7] == s__pending_time_ms_00117720[8]),
       auVar33[9] = -(param_2[1][8] == s__pending_time_ms_00117720[9]),
       auVar33[10] = -(param_2[1][9] == s__pending_time_ms_00117720[10]),
       auVar33[0xb] = -(param_2[1][10] == s__pending_time_ms_00117720[0xb]),
       auVar33[0xc] = -(param_2[1][0xb] == s__pending_time_ms_00117720[0xc]),
       auVar33[0xd] = -(param_2[1][0xc] == s__pending_time_ms_00117720[0xd]),
       auVar33[0xe] = -(param_2[1][0xd] == s__pending_time_ms_00117720[0xe]),
       auVar33[0xf] = -(param_2[1][0xe] == s__pending_time_ms_00117720[0xf]),
       auVar16[0] = -((*param_2)[0] == DAT_001179b0), auVar16[1] = -((*param_2)[1] == UNK_001179b1),
       auVar16[2] = -((*param_2)[2] == UNK_001179b2), auVar16[3] = -((*param_2)[3] == UNK_001179b3),
       auVar16[4] = -((*param_2)[4] == UNK_001179b4), auVar16[5] = -((*param_2)[5] == UNK_001179b5),
       auVar16[6] = -((*param_2)[6] == UNK_001179b6), auVar16[7] = -((*param_2)[7] == UNK_001179b7),
       auVar16[8] = -((*param_2)[8] == UNK_001179b8), auVar16[9] = -((*param_2)[9] == UNK_001179b9),
       auVar16[10] = -((*param_2)[10] == UNK_001179ba),
       auVar16[0xb] = -((*param_2)[0xb] == UNK_001179bb),
       auVar16[0xc] = -((*param_2)[0xc] == UNK_001179bc),
       auVar16[0xd] = -((*param_2)[0xd] == UNK_001179bd),
       auVar16[0xe] = -((*param_2)[0xe] == UNK_001179be),
       auVar16[0xf] = -((*param_2)[0xf] == UNK_001179bf), auVar16 = auVar16 & auVar33,
       (ushort)((ushort)(SUB161(auVar16 >> 7,0) & 1) | (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar16 >> 0x17,0) & 1) << 2 |
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
               (ushort)(byte)(auVar16[0xf] >> 7) << 0xf) == 0xffff)) {
      *(undefined1 *)(param_1 + 1) = 0x24;
      goto LAB_0013d859;
    }
LAB_0013d7ba:
    if ((bVar3) && (iVar7 = (*(code *)PTR_bcmp_001dcfa8)(param_2,"maker_ticks_inside"), iVar7 == 0))
    {
      *(undefined1 *)(param_1 + 1) = 0x26;
      goto LAB_0013d859;
    }
    if (bVar4) {
      iVar7 = (*(code *)PTR_bcmp_001dcfa8)(param_2,"maker_cancel_range_levels",param_3);
      if (iVar7 == 0) {
        *(undefined1 *)(param_1 + 1) = 0x27;
        goto LAB_0013d859;
      }
    }
    break;
  case 0x17:
    auVar27[0] = -((*param_2)[7] == DAT_00117860);
    auVar27[1] = -((*param_2)[8] == UNK_00117861);
    auVar27[2] = -((*param_2)[9] == UNK_00117862);
    auVar27[3] = -((*param_2)[10] == UNK_00117863);
    auVar27[4] = -((*param_2)[0xb] == UNK_00117864);
    auVar27[5] = -((*param_2)[0xc] == UNK_00117865);
    auVar27[6] = -((*param_2)[0xd] == UNK_00117866);
    auVar27[7] = -((*param_2)[0xe] == UNK_00117867);
    auVar27[8] = -((*param_2)[0xf] == UNK_00117868);
    auVar27[9] = -(param_2[1][0] == UNK_00117869);
    auVar27[10] = -(param_2[1][1] == UNK_0011786a);
    auVar27[0xb] = -(param_2[1][2] == UNK_0011786b);
    auVar27[0xc] = -(param_2[1][3] == UNK_0011786c);
    auVar27[0xd] = -(param_2[1][4] == UNK_0011786d);
    auVar27[0xe] = -(param_2[1][5] == UNK_0011786e);
    auVar27[0xf] = -(param_2[1][6] == UNK_0011786f);
    auVar10[0] = -((*param_2)[0] == s_close_position_b_00117450[0]);
    auVar10[1] = -((*param_2)[1] == s_close_position_b_00117450[1]);
    auVar10[2] = -((*param_2)[2] == s_close_position_b_00117450[2]);
    auVar10[3] = -((*param_2)[3] == s_close_position_b_00117450[3]);
    auVar10[4] = -((*param_2)[4] == s_close_position_b_00117450[4]);
    auVar10[5] = -((*param_2)[5] == s_close_position_b_00117450[5]);
    auVar10[6] = -((*param_2)[6] == s_close_position_b_00117450[6]);
    auVar10[7] = -((*param_2)[7] == s_close_position_b_00117450[7]);
    auVar10[8] = -((*param_2)[8] == s_close_position_b_00117450[8]);
    auVar10[9] = -((*param_2)[9] == s_close_position_b_00117450[9]);
    auVar10[10] = -((*param_2)[10] == s_close_position_b_00117450[10]);
    auVar10[0xb] = -((*param_2)[0xb] == s_close_position_b_00117450[0xb]);
    auVar10[0xc] = -((*param_2)[0xc] == s_close_position_b_00117450[0xc]);
    auVar10[0xd] = -((*param_2)[0xd] == s_close_position_b_00117450[0xd]);
    auVar10[0xe] = -((*param_2)[0xe] == s_close_position_b_00117450[0xe]);
    auVar10[0xf] = -((*param_2)[0xf] == s_close_position_b_00117450[0xf]);
    auVar10 = auVar10 & auVar27;
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
      *(undefined1 *)(param_1 + 1) = 0xb;
      goto LAB_0013d859;
    }
    iVar7 = (*(code *)PTR_bcmp_001dcfa8)
                      (param_2,
                       "low_long_open_thresholdlow_long_close_thresholdlow_short_open_thresholdlow_short_close_threshold"
                      );
    if (iVar7 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x18;
      goto LAB_0013d859;
    }
    break;
  default:
    bVar6 = false;
    goto joined_r0x0013d9a7;
  }
  *(undefined1 *)(param_1 + 1) = 0x28;
LAB_0013d859:
  *param_1 = 2;
  return param_1;
}


