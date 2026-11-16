// ELF address 0x000000000004a830; <strategy_comm_maker1::_::<impl serde_core::de::Deserialize for strategy_comm_maker1::CommMaker1Params>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_str

/* _<strategy_comm_maker1::_::<impl serde_core::de::Deserialize for
   strategy_comm_maker1::CommMaker1Params>::deserialize::__FieldVisitor as
   serde_core::de::Visitor>::visit_str */

undefined8 * __rustcall
_<strategy_comm_maker1::_::<impl_serde_core::de::Deserialize_for_strategy_comm_maker1::CommMaker1Params>::deserialize::__FieldVisitor_as_serde_core::de::Visitor>
::visit_str(undefined8 *param_1,undefined1 (*param_2) [16],long param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
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
  
  bVar3 = false;
  switch(param_3) {
  case 8:
    if (*(long *)*param_2 == 0x656c69746e617571) {
      *(undefined1 *)(param_1 + 1) = 5;
      goto LAB_0014b06a;
    }
    break;
  case 9:
    if ((*param_2)[8] == 'a' && *(long *)*param_2 == 0x68706c615f317670) {
      *(undefined1 *)(param_1 + 1) = 1;
      goto LAB_0014b06a;
    }
    if ((*param_2)[8] == 'e' && *(long *)*param_2 == 0x7461725f65746f76) {
      *(undefined1 *)(param_1 + 1) = 4;
      goto LAB_0014b06a;
    }
    break;
  case 10:
    if (*(short *)(*param_2 + 8) == 0x6168 && *(long *)*param_2 == 0x706c615f74736f63) {
      *(undefined1 *)(param_1 + 1) = 2;
      goto LAB_0014b06a;
    }
    bVar7 = true;
    goto LAB_0014ab53;
  case 0xb:
    if (*(long *)(*param_2 + 3) == 0x65646f6d5f6c616e && *(long *)*param_2 == 0x6d5f6c616e676973) {
      *(undefined1 *)(param_1 + 1) = 0;
      goto LAB_0014b06a;
    }
    break;
  default:
    goto switchD_0014a863_caseD_c;
  case 0xe:
    if (*(long *)(*param_2 + 6) == 0x657461725f72656b && *(long *)*param_2 == 0x656b61745f78616d) {
      *(undefined1 *)(param_1 + 1) = 9;
      goto LAB_0014b06a;
    }
    if (*(long *)(*param_2 + 6) == 0x7972657070696c73 && *(long *)*param_2 == 0x6c735f6564617274) {
      *(undefined1 *)(param_1 + 1) = 10;
      goto LAB_0014b06a;
    }
    break;
  case 0x10:
    auVar11[0] = -((*param_2)[0] == DAT_00117710);
    auVar11[1] = -((*param_2)[1] == UNK_00117711);
    auVar11[2] = -((*param_2)[2] == UNK_00117712);
    auVar11[3] = -((*param_2)[3] == UNK_00117713);
    auVar11[4] = -((*param_2)[4] == UNK_00117714);
    auVar11[5] = -((*param_2)[5] == UNK_00117715);
    auVar11[6] = -((*param_2)[6] == UNK_00117716);
    auVar11[7] = -((*param_2)[7] == UNK_00117717);
    auVar11[8] = -((*param_2)[8] == UNK_00117718);
    auVar11[9] = -((*param_2)[9] == UNK_00117719);
    auVar11[10] = -((*param_2)[10] == UNK_0011771a);
    auVar11[0xb] = -((*param_2)[0xb] == UNK_0011771b);
    auVar11[0xc] = -((*param_2)[0xc] == UNK_0011771c);
    auVar11[0xd] = -((*param_2)[0xd] == UNK_0011771d);
    auVar11[0xe] = -((*param_2)[0xe] == UNK_0011771e);
    auVar11[0xf] = -((*param_2)[0xf] == UNK_0011771f);
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
      goto LAB_0014b06a;
    }
    break;
  case 0x12:
    auVar12[0] = -((*param_2)[0] == DAT_001177d0);
    auVar12[1] = -((*param_2)[1] == UNK_001177d1);
    auVar12[2] = -((*param_2)[2] == UNK_001177d2);
    auVar12[3] = -((*param_2)[3] == UNK_001177d3);
    auVar12[4] = -((*param_2)[4] == UNK_001177d4);
    auVar12[5] = -((*param_2)[5] == UNK_001177d5);
    auVar12[6] = -((*param_2)[6] == UNK_001177d6);
    auVar12[7] = -((*param_2)[7] == UNK_001177d7);
    auVar12[8] = -((*param_2)[8] == UNK_001177d8);
    auVar12[9] = -((*param_2)[9] == UNK_001177d9);
    auVar12[10] = -((*param_2)[10] == UNK_001177da);
    auVar12[0xb] = -((*param_2)[0xb] == UNK_001177db);
    auVar12[0xc] = -((*param_2)[0xc] == UNK_001177dc);
    auVar12[0xd] = -((*param_2)[0xd] == UNK_001177dd);
    auVar12[0xe] = -((*param_2)[0xe] == UNK_001177de);
    auVar12[0xf] = -((*param_2)[0xf] == UNK_001177df);
    auVar29[0] = -((char)*(undefined2 *)param_2[1] == s_ol_00117420[0]);
    auVar29[1] = -((char)((ushort)*(undefined2 *)param_2[1] >> 8) == s_ol_00117420[1]);
    auVar29[2] = -(s_ol_00117420[2] == '\0');
    auVar29[3] = -(s_ol_00117420[3] == '\0');
    auVar29[4] = -(UNK_00117424 == '\0');
    auVar29[5] = -(UNK_00117425 == '\0');
    auVar29[6] = -(UNK_00117426 == '\0');
    auVar29[7] = -(UNK_00117427 == '\0');
    auVar29[8] = -(UNK_00117428 == '\0');
    auVar29[9] = -(UNK_00117429 == '\0');
    auVar29[10] = -(UNK_0011742a == '\0');
    auVar29[0xb] = -(UNK_0011742b == '\0');
    auVar29[0xc] = -(UNK_0011742c == '\0');
    auVar29[0xd] = -(UNK_0011742d == '\0');
    auVar29[0xe] = -(UNK_0011742e == '\0');
    auVar29[0xf] = -(UNK_0011742f == '\0');
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
      *(undefined1 *)(param_1 + 1) = 0xc;
      goto LAB_0014b06a;
    }
    auVar13[0] = -((*param_2)[0] == DAT_00117720);
    auVar13[1] = -((*param_2)[1] == UNK_00117721);
    auVar13[2] = -((*param_2)[2] == UNK_00117722);
    auVar13[3] = -((*param_2)[3] == UNK_00117723);
    auVar13[4] = -((*param_2)[4] == UNK_00117724);
    auVar13[5] = -((*param_2)[5] == UNK_00117725);
    auVar13[6] = -((*param_2)[6] == UNK_00117726);
    auVar13[7] = -((*param_2)[7] == UNK_00117727);
    auVar13[8] = -((*param_2)[8] == UNK_00117728);
    auVar13[9] = -((*param_2)[9] == UNK_00117729);
    auVar13[10] = -((*param_2)[10] == UNK_0011772a);
    auVar13[0xb] = -((*param_2)[0xb] == UNK_0011772b);
    auVar13[0xc] = -((*param_2)[0xc] == UNK_0011772c);
    auVar13[0xd] = -((*param_2)[0xd] == UNK_0011772d);
    auVar13[0xe] = -((*param_2)[0xe] == UNK_0011772e);
    auVar13[0xf] = -((*param_2)[0xf] == UNK_0011772f);
    auVar30[0] = -((char)*(undefined2 *)param_2[1] == DAT_00117a40);
    auVar30[1] = -((char)((ushort)*(undefined2 *)param_2[1] >> 8) == UNK_00117a41);
    auVar30[2] = -(UNK_00117a42 == '\0');
    auVar30[3] = -(UNK_00117a43 == '\0');
    auVar30[4] = -(UNK_00117a44 == '\0');
    auVar30[5] = -(UNK_00117a45 == '\0');
    auVar30[6] = -(UNK_00117a46 == '\0');
    auVar30[7] = -(UNK_00117a47 == '\0');
    auVar30[8] = -(UNK_00117a48 == '\0');
    auVar30[9] = -(UNK_00117a49 == '\0');
    auVar30[10] = -(UNK_00117a4a == '\0');
    auVar30[0xb] = -(UNK_00117a4b == '\0');
    auVar30[0xc] = -(UNK_00117a4c == '\0');
    auVar30[0xd] = -(UNK_00117a4d == '\0');
    auVar30[0xe] = -(UNK_00117a4e == '\0');
    auVar30[0xf] = -(UNK_00117a4f == '\0');
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
      *(undefined1 *)(param_1 + 1) = 0xd;
      goto LAB_0014b06a;
    }
    auVar14[0] = -((*param_2)[0] == s_max_single_net_v_00117750[0]);
    auVar14[1] = -((*param_2)[1] == s_max_single_net_v_00117750[1]);
    auVar14[2] = -((*param_2)[2] == s_max_single_net_v_00117750[2]);
    auVar14[3] = -((*param_2)[3] == s_max_single_net_v_00117750[3]);
    auVar14[4] = -((*param_2)[4] == s_max_single_net_v_00117750[4]);
    auVar14[5] = -((*param_2)[5] == s_max_single_net_v_00117750[5]);
    auVar14[6] = -((*param_2)[6] == s_max_single_net_v_00117750[6]);
    auVar14[7] = -((*param_2)[7] == s_max_single_net_v_00117750[7]);
    auVar14[8] = -((*param_2)[8] == s_max_single_net_v_00117750[8]);
    auVar14[9] = -((*param_2)[9] == s_max_single_net_v_00117750[9]);
    auVar14[10] = -((*param_2)[10] == s_max_single_net_v_00117750[10]);
    auVar14[0xb] = -((*param_2)[0xb] == s_max_single_net_v_00117750[0xb]);
    auVar14[0xc] = -((*param_2)[0xc] == s_max_single_net_v_00117750[0xc]);
    auVar14[0xd] = -((*param_2)[0xd] == s_max_single_net_v_00117750[0xd]);
    auVar14[0xe] = -((*param_2)[0xe] == s_max_single_net_v_00117750[0xe]);
    auVar14[0xf] = -((*param_2)[0xf] == s_max_single_net_v_00117750[0xf]);
    auVar31[0] = -((char)*(undefined2 *)param_2[1] == s_ol_00117420[0]);
    auVar31[1] = -((char)((ushort)*(undefined2 *)param_2[1] >> 8) == s_ol_00117420[1]);
    auVar31[2] = -(s_ol_00117420[2] == '\0');
    auVar31[3] = -(s_ol_00117420[3] == '\0');
    auVar31[4] = -(UNK_00117424 == '\0');
    auVar31[5] = -(UNK_00117425 == '\0');
    auVar31[6] = -(UNK_00117426 == '\0');
    auVar31[7] = -(UNK_00117427 == '\0');
    auVar31[8] = -(UNK_00117428 == '\0');
    auVar31[9] = -(UNK_00117429 == '\0');
    auVar31[10] = -(UNK_0011742a == '\0');
    auVar31[0xb] = -(UNK_0011742b == '\0');
    auVar31[0xc] = -(UNK_0011742c == '\0');
    auVar31[0xd] = -(UNK_0011742d == '\0');
    auVar31[0xe] = -(UNK_0011742e == '\0');
    auVar31[0xf] = -(UNK_0011742f == '\0');
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
      *(undefined1 *)(param_1 + 1) = 0xe;
      goto LAB_0014b06a;
    }
    auVar15[0] = -((*param_2)[0] == s_max_single_net_a_001178b0[0]);
    auVar15[1] = -((*param_2)[1] == s_max_single_net_a_001178b0[1]);
    auVar15[2] = -((*param_2)[2] == s_max_single_net_a_001178b0[2]);
    auVar15[3] = -((*param_2)[3] == s_max_single_net_a_001178b0[3]);
    auVar15[4] = -((*param_2)[4] == s_max_single_net_a_001178b0[4]);
    auVar15[5] = -((*param_2)[5] == s_max_single_net_a_001178b0[5]);
    auVar15[6] = -((*param_2)[6] == s_max_single_net_a_001178b0[6]);
    auVar15[7] = -((*param_2)[7] == s_max_single_net_a_001178b0[7]);
    auVar15[8] = -((*param_2)[8] == s_max_single_net_a_001178b0[8]);
    auVar15[9] = -((*param_2)[9] == s_max_single_net_a_001178b0[9]);
    auVar15[10] = -((*param_2)[10] == s_max_single_net_a_001178b0[10]);
    auVar15[0xb] = -((*param_2)[0xb] == s_max_single_net_a_001178b0[0xb]);
    auVar15[0xc] = -((*param_2)[0xc] == s_max_single_net_a_001178b0[0xc]);
    auVar15[0xd] = -((*param_2)[0xd] == s_max_single_net_a_001178b0[0xd]);
    auVar15[0xe] = -((*param_2)[0xe] == s_max_single_net_a_001178b0[0xe]);
    auVar15[0xf] = -((*param_2)[0xf] == s_max_single_net_a_001178b0[0xf]);
    auVar32[0] = -((char)*(undefined2 *)param_2[1] == DAT_00117a40);
    auVar32[1] = -((char)((ushort)*(undefined2 *)param_2[1] >> 8) == UNK_00117a41);
    auVar32[2] = -(UNK_00117a42 == '\0');
    auVar32[3] = -(UNK_00117a43 == '\0');
    auVar32[4] = -(UNK_00117a44 == '\0');
    auVar32[5] = -(UNK_00117a45 == '\0');
    auVar32[6] = -(UNK_00117a46 == '\0');
    auVar32[7] = -(UNK_00117a47 == '\0');
    auVar32[8] = -(UNK_00117a48 == '\0');
    auVar32[9] = -(UNK_00117a49 == '\0');
    auVar32[10] = -(UNK_00117a4a == '\0');
    auVar32[0xb] = -(UNK_00117a4b == '\0');
    auVar32[0xc] = -(UNK_00117a4c == '\0');
    auVar32[0xd] = -(UNK_00117a4d == '\0');
    auVar32[0xe] = -(UNK_00117a4e == '\0');
    auVar32[0xf] = -(UNK_00117a4f == '\0');
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
      *(undefined1 *)(param_1 + 1) = 0xf;
      goto LAB_0014b06a;
    }
    bVar6 = true;
    bVar7 = false;
    goto LAB_0014ab5a;
  case 0x13:
    auVar33[0] = -((*param_2)[3] == DAT_00117440);
    auVar33[1] = -((*param_2)[4] == UNK_00117441);
    auVar33[2] = -((*param_2)[5] == UNK_00117442);
    auVar33[3] = -((*param_2)[6] == UNK_00117443);
    auVar33[4] = -((*param_2)[7] == UNK_00117444);
    auVar33[5] = -((*param_2)[8] == UNK_00117445);
    auVar33[6] = -((*param_2)[9] == UNK_00117446);
    auVar33[7] = -((*param_2)[10] == UNK_00117447);
    auVar33[8] = -((*param_2)[0xb] == UNK_00117448);
    auVar33[9] = -((*param_2)[0xc] == UNK_00117449);
    auVar33[10] = -((*param_2)[0xd] == UNK_0011744a);
    auVar33[0xb] = -((*param_2)[0xe] == UNK_0011744b);
    auVar33[0xc] = -((*param_2)[0xf] == UNK_0011744c);
    auVar33[0xd] = -(param_2[1][0] == UNK_0011744d);
    auVar33[0xe] = -(param_2[1][1] == UNK_0011744e);
    auVar33[0xf] = -(param_2[1][2] == UNK_0011744f);
    auVar16[0] = -((*param_2)[0] == s_signal_trigger_m_001178c0[0]);
    auVar16[1] = -((*param_2)[1] == s_signal_trigger_m_001178c0[1]);
    auVar16[2] = -((*param_2)[2] == s_signal_trigger_m_001178c0[2]);
    auVar16[3] = -((*param_2)[3] == s_signal_trigger_m_001178c0[3]);
    auVar16[4] = -((*param_2)[4] == s_signal_trigger_m_001178c0[4]);
    auVar16[5] = -((*param_2)[5] == s_signal_trigger_m_001178c0[5]);
    auVar16[6] = -((*param_2)[6] == s_signal_trigger_m_001178c0[6]);
    auVar16[7] = -((*param_2)[7] == s_signal_trigger_m_001178c0[7]);
    auVar16[8] = -((*param_2)[8] == s_signal_trigger_m_001178c0[8]);
    auVar16[9] = -((*param_2)[9] == s_signal_trigger_m_001178c0[9]);
    auVar16[10] = -((*param_2)[10] == s_signal_trigger_m_001178c0[10]);
    auVar16[0xb] = -((*param_2)[0xb] == s_signal_trigger_m_001178c0[0xb]);
    auVar16[0xc] = -((*param_2)[0xc] == s_signal_trigger_m_001178c0[0xc]);
    auVar16[0xd] = -((*param_2)[0xd] == s_signal_trigger_m_001178c0[0xd]);
    auVar16[0xe] = -((*param_2)[0xe] == s_signal_trigger_m_001178c0[0xe]);
    auVar16[0xf] = -((*param_2)[0xf] == s_signal_trigger_m_001178c0[0xf]);
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
      *(undefined1 *)(param_1 + 1) = 3;
      goto LAB_0014b06a;
    }
    iVar9 = (*(code *)PTR_bcmp_001dd488)
                      (param_2,
                       "taker_rate_baselinemax_taker_ratetrade_slipperyclose_position_block_msmax_single_add_volmax_single_add_amtmax_single_net_volmax_single_net_amtmax_single_close_volmax_single_close_amt"
                       ,param_3);
    if (iVar9 == 0) {
      *(undefined1 *)(param_1 + 1) = 8;
      goto LAB_0014b06a;
    }
    iVar9 = (*(code *)PTR_bcmp_001dd488)(param_2,"long_open_threshold",param_3);
    if (iVar9 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x12;
      goto LAB_0014b06a;
    }
    bVar3 = false;
    goto switchD_0014a863_caseD_c;
  case 0x14:
    uVar2 = *(undefined4 *)param_2[1];
    auVar37[0] = -((char)uVar2 == DAT_001173e0);
    auVar37[1] = -((char)((uint)uVar2 >> 8) == UNK_001173e1);
    auVar37[2] = -((char)((uint)uVar2 >> 0x10) == UNK_001173e2);
    auVar37[3] = -((char)((uint)uVar2 >> 0x18) == UNK_001173e3);
    auVar37[4] = -(UNK_001173e4 == '\0');
    auVar37[5] = -(UNK_001173e5 == '\0');
    auVar37[6] = -(UNK_001173e6 == '\0');
    auVar37[7] = -(UNK_001173e7 == '\0');
    auVar37[8] = -(UNK_001173e8 == '\0');
    auVar37[9] = -(UNK_001173e9 == '\0');
    auVar37[10] = -(UNK_001173ea == '\0');
    auVar37[0xb] = -(UNK_001173eb == '\0');
    auVar37[0xc] = -(UNK_001173ec == '\0');
    auVar37[0xd] = -(UNK_001173ed == '\0');
    auVar37[0xe] = -(UNK_001173ee == '\0');
    auVar37[0xf] = -(UNK_001173ef == '\0');
    auVar20[0] = -((*param_2)[0] == DAT_00117580);
    auVar20[1] = -((*param_2)[1] == UNK_00117581);
    auVar20[2] = -((*param_2)[2] == UNK_00117582);
    auVar20[3] = -((*param_2)[3] == UNK_00117583);
    auVar20[4] = -((*param_2)[4] == UNK_00117584);
    auVar20[5] = -((*param_2)[5] == UNK_00117585);
    auVar20[6] = -((*param_2)[6] == UNK_00117586);
    auVar20[7] = -((*param_2)[7] == UNK_00117587);
    auVar20[8] = -((*param_2)[8] == UNK_00117588);
    auVar20[9] = -((*param_2)[9] == UNK_00117589);
    auVar20[10] = -((*param_2)[10] == UNK_0011758a);
    auVar20[0xb] = -((*param_2)[0xb] == UNK_0011758b);
    auVar20[0xc] = -((*param_2)[0xc] == UNK_0011758c);
    auVar20[0xd] = -((*param_2)[0xd] == UNK_0011758d);
    auVar20[0xe] = -((*param_2)[0xe] == UNK_0011758e);
    auVar20[0xf] = -((*param_2)[0xf] == UNK_0011758f);
    auVar20 = auVar20 & auVar37;
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
      *(undefined1 *)(param_1 + 1) = 0x10;
      goto LAB_0014b06a;
    }
    auVar10 = *param_2;
    uVar2 = *(undefined4 *)param_2[1];
    auVar46[0] = -((char)uVar2 == s__amt_00117650[0]);
    auVar46[1] = -((char)((uint)uVar2 >> 8) == s__amt_00117650[1]);
    auVar46[2] = -((char)((uint)uVar2 >> 0x10) == s__amt_00117650[2]);
    auVar46[3] = -((char)((uint)uVar2 >> 0x18) == s__amt_00117650[3]);
    auVar46[4] = -(s__amt_00117650[4] == '\0');
    auVar46[5] = -(s__amt_00117650[5] == '\0');
    auVar46[6] = -(s__amt_00117650[6] == '\0');
    auVar46[7] = -(s__amt_00117650[7] == '\0');
    auVar46[8] = -(UNK_00117658 == '\0');
    auVar46[9] = -(UNK_00117659 == '\0');
    auVar46[10] = -(UNK_0011765a == '\0');
    auVar46[0xb] = -(UNK_0011765b == '\0');
    auVar46[0xc] = -(UNK_0011765c == '\0');
    auVar46[0xd] = -(UNK_0011765d == '\0');
    auVar46[0xe] = -(UNK_0011765e == '\0');
    auVar46[0xf] = -(UNK_0011765f == '\0');
    auVar38[0] = -(auVar10[0] == 'm');
    auVar38[1] = -(auVar10[1] == 'a');
    auVar38[2] = -(auVar10[2] == 'x');
    auVar38[3] = -(auVar10[3] == '_');
    auVar38[4] = -(auVar10[4] == 's');
    auVar38[5] = -(auVar10[5] == 'i');
    auVar38[6] = -(auVar10[6] == 'n');
    auVar38[7] = -(auVar10[7] == 'g');
    auVar38[8] = -(auVar10[8] == 'l');
    auVar38[9] = -(auVar10[9] == 'e');
    auVar38[10] = -(auVar10[10] == '_');
    auVar38[0xb] = -(auVar10[0xb] == 'c');
    auVar38[0xc] = -(auVar10[0xc] == 'l');
    auVar38[0xd] = -(auVar10[0xd] == 'o');
    auVar38[0xe] = -(auVar10[0xe] == 's');
    auVar38[0xf] = -(auVar10[0xf] == 'e');
    auVar46 = auVar46 & auVar38;
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
      *(undefined1 *)(param_1 + 1) = 0x11;
      goto LAB_0014b06a;
    }
    iVar9 = (*(code *)PTR_bcmp_001dd488)(param_2,"long_close_threshold",param_3);
    if (iVar9 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x13;
      goto LAB_0014b06a;
    }
    iVar9 = (*(code *)PTR_bcmp_001dd488)
                      (param_2,"short_open_thresholdshort_close_threshold",param_3);
    bVar3 = true;
    if (iVar9 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x14;
      goto LAB_0014b06a;
    }
switchD_0014a863_caseD_c:
    if (param_3 != 0x15) {
      bVar7 = false;
      bVar6 = false;
      if (param_3 - 0x18U < 10) goto LAB_0014ab6e;
      goto switchD_0014ab7c_caseD_14ae05;
    }
    auVar39[0] = -((*param_2)[5] == DAT_00117690);
    auVar39[1] = -((*param_2)[6] == UNK_00117691);
    auVar39[2] = -((*param_2)[7] == UNK_00117692);
    auVar39[3] = -((*param_2)[8] == UNK_00117693);
    auVar39[4] = -((*param_2)[9] == UNK_00117694);
    auVar39[5] = -((*param_2)[10] == UNK_00117695);
    auVar39[6] = -((*param_2)[0xb] == UNK_00117696);
    auVar39[7] = -((*param_2)[0xc] == UNK_00117697);
    auVar39[8] = -((*param_2)[0xd] == UNK_00117698);
    auVar39[9] = -((*param_2)[0xe] == UNK_00117699);
    auVar39[10] = -((*param_2)[0xf] == UNK_0011769a);
    auVar39[0xb] = -(param_2[1][0] == UNK_0011769b);
    auVar39[0xc] = -(param_2[1][1] == UNK_0011769c);
    auVar39[0xd] = -(param_2[1][2] == UNK_0011769d);
    auVar39[0xe] = -(param_2[1][3] == UNK_0011769e);
    auVar39[0xf] = -(param_2[1][4] == UNK_0011769f);
    auVar21[0] = -((*param_2)[0] == DAT_001176a0);
    auVar21[1] = -((*param_2)[1] == UNK_001176a1);
    auVar21[2] = -((*param_2)[2] == UNK_001176a2);
    auVar21[3] = -((*param_2)[3] == UNK_001176a3);
    auVar21[4] = -((*param_2)[4] == UNK_001176a4);
    auVar21[5] = -((*param_2)[5] == UNK_001176a5);
    auVar21[6] = -((*param_2)[6] == UNK_001176a6);
    auVar21[7] = -((*param_2)[7] == UNK_001176a7);
    auVar21[8] = -((*param_2)[8] == UNK_001176a8);
    auVar21[9] = -((*param_2)[9] == UNK_001176a9);
    auVar21[10] = -((*param_2)[10] == UNK_001176aa);
    auVar21[0xb] = -((*param_2)[0xb] == UNK_001176ab);
    auVar21[0xc] = -((*param_2)[0xc] == UNK_001176ac);
    auVar21[0xd] = -((*param_2)[0xd] == UNK_001176ad);
    auVar21[0xe] = -((*param_2)[0xe] == UNK_001176ae);
    auVar21[0xf] = -((*param_2)[0xf] == UNK_001176af);
    auVar21 = auVar21 & auVar39;
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
      *(undefined1 *)(param_1 + 1) = 0x15;
      goto LAB_0014b06a;
    }
    auVar40[0] = -((*param_2)[5] == DAT_001174b0);
    auVar40[1] = -((*param_2)[6] == UNK_001174b1);
    auVar40[2] = -((*param_2)[7] == UNK_001174b2);
    auVar40[3] = -((*param_2)[8] == UNK_001174b3);
    auVar40[4] = -((*param_2)[9] == UNK_001174b4);
    auVar40[5] = -((*param_2)[10] == UNK_001174b5);
    auVar40[6] = -((*param_2)[0xb] == UNK_001174b6);
    auVar40[7] = -((*param_2)[0xc] == UNK_001174b7);
    auVar40[8] = -((*param_2)[0xd] == UNK_001174b8);
    auVar40[9] = -((*param_2)[0xe] == UNK_001174b9);
    auVar40[10] = -((*param_2)[0xf] == UNK_001174ba);
    auVar40[0xb] = -(param_2[1][0] == UNK_001174bb);
    auVar40[0xc] = -(param_2[1][1] == UNK_001174bc);
    auVar40[0xd] = -(param_2[1][2] == UNK_001174bd);
    auVar40[0xe] = -(param_2[1][3] == UNK_001174be);
    auVar40[0xf] = -(param_2[1][4] == UNK_001174bf);
    auVar22[0] = -((*param_2)[0] == DAT_001179a0);
    auVar22[1] = -((*param_2)[1] == UNK_001179a1);
    auVar22[2] = -((*param_2)[2] == UNK_001179a2);
    auVar22[3] = -((*param_2)[3] == UNK_001179a3);
    auVar22[4] = -((*param_2)[4] == UNK_001179a4);
    auVar22[5] = -((*param_2)[5] == UNK_001179a5);
    auVar22[6] = -((*param_2)[6] == UNK_001179a6);
    auVar22[7] = -((*param_2)[7] == UNK_001179a7);
    auVar22[8] = -((*param_2)[8] == UNK_001179a8);
    auVar22[9] = -((*param_2)[9] == UNK_001179a9);
    auVar22[10] = -((*param_2)[10] == UNK_001179aa);
    auVar22[0xb] = -((*param_2)[0xb] == UNK_001179ab);
    auVar22[0xc] = -((*param_2)[0xc] == UNK_001179ac);
    auVar22[0xd] = -((*param_2)[0xd] == UNK_001179ad);
    auVar22[0xe] = -((*param_2)[0xe] == UNK_001179ae);
    auVar22[0xf] = -((*param_2)[0xf] == UNK_001179af);
    auVar22 = auVar22 & auVar40;
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
      *(undefined1 *)(param_1 + 1) = 0x1c;
      goto LAB_0014b06a;
    }
    bVar5 = true;
    bVar7 = false;
    bVar6 = false;
    bVar4 = false;
    bVar8 = true;
    if (bVar3) goto LAB_0014ae10;
    goto LAB_0014ae2b;
  case 0x16:
    auVar34[0] = -((*param_2)[6] == DAT_00117430);
    auVar34[1] = -((*param_2)[7] == UNK_00117431);
    auVar34[2] = -((*param_2)[8] == UNK_00117432);
    auVar34[3] = -((*param_2)[9] == UNK_00117433);
    auVar34[4] = -((*param_2)[10] == UNK_00117434);
    auVar34[5] = -((*param_2)[0xb] == UNK_00117435);
    auVar34[6] = -((*param_2)[0xc] == UNK_00117436);
    auVar34[7] = -((*param_2)[0xd] == UNK_00117437);
    auVar34[8] = -((*param_2)[0xe] == UNK_00117438);
    auVar34[9] = -((*param_2)[0xf] == UNK_00117439);
    auVar34[10] = -(param_2[1][0] == UNK_0011743a);
    auVar34[0xb] = -(param_2[1][1] == UNK_0011743b);
    auVar34[0xc] = -(param_2[1][2] == UNK_0011743c);
    auVar34[0xd] = -(param_2[1][3] == UNK_0011743d);
    auVar34[0xe] = -(param_2[1][4] == UNK_0011743e);
    auVar34[0xf] = -(param_2[1][5] == UNK_0011743f);
    auVar17[0] = -((*param_2)[0] == DAT_001175a0);
    auVar17[1] = -((*param_2)[1] == UNK_001175a1);
    auVar17[2] = -((*param_2)[2] == UNK_001175a2);
    auVar17[3] = -((*param_2)[3] == UNK_001175a3);
    auVar17[4] = -((*param_2)[4] == UNK_001175a4);
    auVar17[5] = -((*param_2)[5] == UNK_001175a5);
    auVar17[6] = -((*param_2)[6] == UNK_001175a6);
    auVar17[7] = -((*param_2)[7] == UNK_001175a7);
    auVar17[8] = -((*param_2)[8] == UNK_001175a8);
    auVar17[9] = -((*param_2)[9] == UNK_001175a9);
    auVar17[10] = -((*param_2)[10] == UNK_001175aa);
    auVar17[0xb] = -((*param_2)[0xb] == UNK_001175ab);
    auVar17[0xc] = -((*param_2)[0xc] == UNK_001175ac);
    auVar17[0xd] = -((*param_2)[0xd] == UNK_001175ad);
    auVar17[0xe] = -((*param_2)[0xe] == UNK_001175ae);
    auVar17[0xf] = -((*param_2)[0xf] == UNK_001175af);
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
      *(undefined1 *)(param_1 + 1) = 7;
      goto LAB_0014b06a;
    }
    break;
  case 0x17:
    auVar28[0] = -((*param_2)[7] == DAT_001178f0);
    auVar28[1] = -((*param_2)[8] == UNK_001178f1);
    auVar28[2] = -((*param_2)[9] == UNK_001178f2);
    auVar28[3] = -((*param_2)[10] == UNK_001178f3);
    auVar28[4] = -((*param_2)[0xb] == UNK_001178f4);
    auVar28[5] = -((*param_2)[0xc] == UNK_001178f5);
    auVar28[6] = -((*param_2)[0xd] == UNK_001178f6);
    auVar28[7] = -((*param_2)[0xe] == UNK_001178f7);
    auVar28[8] = -((*param_2)[0xf] == UNK_001178f8);
    auVar28[9] = -(param_2[1][0] == UNK_001178f9);
    auVar28[10] = -(param_2[1][1] == UNK_001178fa);
    auVar28[0xb] = -(param_2[1][2] == UNK_001178fb);
    auVar28[0xc] = -(param_2[1][3] == UNK_001178fc);
    auVar28[0xd] = -(param_2[1][4] == UNK_001178fd);
    auVar28[0xe] = -(param_2[1][5] == UNK_001178fe);
    auVar28[0xf] = -(param_2[1][6] == UNK_001178ff);
    auVar10[0] = -((*param_2)[0] == DAT_001174f0);
    auVar10[1] = -((*param_2)[1] == UNK_001174f1);
    auVar10[2] = -((*param_2)[2] == UNK_001174f2);
    auVar10[3] = -((*param_2)[3] == UNK_001174f3);
    auVar10[4] = -((*param_2)[4] == UNK_001174f4);
    auVar10[5] = -((*param_2)[5] == UNK_001174f5);
    auVar10[6] = -((*param_2)[6] == UNK_001174f6);
    auVar10[7] = -((*param_2)[7] == UNK_001174f7);
    auVar10[8] = -((*param_2)[8] == UNK_001174f8);
    auVar10[9] = -((*param_2)[9] == UNK_001174f9);
    auVar10[10] = -((*param_2)[10] == UNK_001174fa);
    auVar10[0xb] = -((*param_2)[0xb] == UNK_001174fb);
    auVar10[0xc] = -((*param_2)[0xc] == UNK_001174fc);
    auVar10[0xd] = -((*param_2)[0xd] == UNK_001174fd);
    auVar10[0xe] = -((*param_2)[0xe] == UNK_001174fe);
    auVar10[0xf] = -((*param_2)[0xf] == UNK_001174ff);
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
      *(undefined1 *)(param_1 + 1) = 0xb;
      goto LAB_0014b06a;
    }
    iVar9 = (*(code *)PTR_bcmp_001dd488)
                      (param_2,
                       "low_long_open_thresholdlow_long_close_thresholdlow_short_open_thresholdlow_short_close_threshold"
                       ,param_3);
    if (iVar9 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x16;
      goto LAB_0014b06a;
    }
    goto LAB_0014af8c;
  }
  bVar7 = false;
LAB_0014ab53:
  bVar6 = false;
LAB_0014ab5a:
  bVar3 = false;
  if (param_3 - 0x18U < 10) {
LAB_0014ab6e:
    switch((long)&switchD_0014ab7c::switchdataD_0011817c +
           (long)(int)(&switchD_0014ab7c::switchdataD_0011817c)[param_3 + -0x18]) {
    case 0x14ab7e:
      uVar1 = *(undefined8 *)param_2[1];
      auVar35[0] = -((char)uVar1 == s_hreshold_00117850[0]);
      auVar35[1] = -((char)((ulong)uVar1 >> 8) == s_hreshold_00117850[1]);
      auVar35[2] = -((char)((ulong)uVar1 >> 0x10) == s_hreshold_00117850[2]);
      auVar35[3] = -((char)((ulong)uVar1 >> 0x18) == s_hreshold_00117850[3]);
      auVar35[4] = -((char)((ulong)uVar1 >> 0x20) == s_hreshold_00117850[4]);
      auVar35[5] = -((char)((ulong)uVar1 >> 0x28) == s_hreshold_00117850[5]);
      auVar35[6] = -((char)((ulong)uVar1 >> 0x30) == s_hreshold_00117850[6]);
      auVar35[7] = -((char)((ulong)uVar1 >> 0x38) == s_hreshold_00117850[7]);
      auVar35[8] = -(s_hreshold_00117850[8] == '\0');
      auVar35[9] = -(s_hreshold_00117850[9] == '\0');
      auVar35[10] = -(s_hreshold_00117850[10] == '\0');
      auVar35[0xb] = -(s_hreshold_00117850[0xb] == '\0');
      auVar35[0xc] = -(UNK_0011785c == '\0');
      auVar35[0xd] = -(UNK_0011785d == '\0');
      auVar35[0xe] = -(UNK_0011785e == '\0');
      auVar35[0xf] = -(UNK_0011785f == '\0');
      auVar18[0] = -((*param_2)[0] == DAT_00117700);
      auVar18[1] = -((*param_2)[1] == UNK_00117701);
      auVar18[2] = -((*param_2)[2] == UNK_00117702);
      auVar18[3] = -((*param_2)[3] == UNK_00117703);
      auVar18[4] = -((*param_2)[4] == UNK_00117704);
      auVar18[5] = -((*param_2)[5] == UNK_00117705);
      auVar18[6] = -((*param_2)[6] == UNK_00117706);
      auVar18[7] = -((*param_2)[7] == UNK_00117707);
      auVar18[8] = -((*param_2)[8] == UNK_00117708);
      auVar18[9] = -((*param_2)[9] == UNK_00117709);
      auVar18[10] = -((*param_2)[10] == UNK_0011770a);
      auVar18[0xb] = -((*param_2)[0xb] == UNK_0011770b);
      auVar18[0xc] = -((*param_2)[0xc] == UNK_0011770c);
      auVar18[0xd] = -((*param_2)[0xd] == UNK_0011770d);
      auVar18[0xe] = -((*param_2)[0xe] == UNK_0011770e);
      auVar18[0xf] = -((*param_2)[0xf] == UNK_0011770f);
      auVar18 = auVar18 & auVar35;
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
        *(undefined1 *)(param_1 + 1) = 0x17;
        goto LAB_0014b06a;
      }
      uVar1 = *(undefined8 *)param_2[1];
      auVar36[0] = -((char)uVar1 == s_hreshold_00117850[0]);
      auVar36[1] = -((char)((ulong)uVar1 >> 8) == s_hreshold_00117850[1]);
      auVar36[2] = -((char)((ulong)uVar1 >> 0x10) == s_hreshold_00117850[2]);
      auVar36[3] = -((char)((ulong)uVar1 >> 0x18) == s_hreshold_00117850[3]);
      auVar36[4] = -((char)((ulong)uVar1 >> 0x20) == s_hreshold_00117850[4]);
      auVar36[5] = -((char)((ulong)uVar1 >> 0x28) == s_hreshold_00117850[5]);
      auVar36[6] = -((char)((ulong)uVar1 >> 0x30) == s_hreshold_00117850[6]);
      auVar36[7] = -((char)((ulong)uVar1 >> 0x38) == s_hreshold_00117850[7]);
      auVar36[8] = -(s_hreshold_00117850[8] == '\0');
      auVar36[9] = -(s_hreshold_00117850[9] == '\0');
      auVar36[10] = -(s_hreshold_00117850[10] == '\0');
      auVar36[0xb] = -(s_hreshold_00117850[0xb] == '\0');
      auVar36[0xc] = -(UNK_0011785c == '\0');
      auVar36[0xd] = -(UNK_0011785d == '\0');
      auVar36[0xe] = -(UNK_0011785e == '\0');
      auVar36[0xf] = -(UNK_0011785f == '\0');
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
      auVar19 = auVar19 & auVar36;
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
        *(undefined1 *)(param_1 + 1) = 0x18;
        goto LAB_0014b06a;
      }
      break;
    case 0x14ad1e:
      auVar41[0] = -((*param_2)[0xb] == DAT_001173c0);
      auVar41[1] = -((*param_2)[0xc] == UNK_001173c1);
      auVar41[2] = -((*param_2)[0xd] == UNK_001173c2);
      auVar41[3] = -((*param_2)[0xe] == UNK_001173c3);
      auVar41[4] = -((*param_2)[0xf] == UNK_001173c4);
      auVar41[5] = -(param_2[1][0] == UNK_001173c5);
      auVar41[6] = -(param_2[1][1] == UNK_001173c6);
      auVar41[7] = -(param_2[1][2] == UNK_001173c7);
      auVar41[8] = -(param_2[1][3] == UNK_001173c8);
      auVar41[9] = -(param_2[1][4] == UNK_001173c9);
      auVar41[10] = -(param_2[1][5] == UNK_001173ca);
      auVar41[0xb] = -(param_2[1][6] == UNK_001173cb);
      auVar41[0xc] = -(param_2[1][7] == UNK_001173cc);
      auVar41[0xd] = -(param_2[1][8] == UNK_001173cd);
      auVar41[0xe] = -(param_2[1][9] == UNK_001173ce);
      auVar41[0xf] = -(param_2[1][10] == UNK_001173cf);
      auVar23[0] = -((*param_2)[0] == DAT_001176f0);
      auVar23[1] = -((*param_2)[1] == UNK_001176f1);
      auVar23[2] = -((*param_2)[2] == UNK_001176f2);
      auVar23[3] = -((*param_2)[3] == UNK_001176f3);
      auVar23[4] = -((*param_2)[4] == UNK_001176f4);
      auVar23[5] = -((*param_2)[5] == UNK_001176f5);
      auVar23[6] = -((*param_2)[6] == UNK_001176f6);
      auVar23[7] = -((*param_2)[7] == UNK_001176f7);
      auVar23[8] = -((*param_2)[8] == UNK_001176f8);
      auVar23[9] = -((*param_2)[9] == UNK_001176f9);
      auVar23[10] = -((*param_2)[10] == UNK_001176fa);
      auVar23[0xb] = -((*param_2)[0xb] == UNK_001176fb);
      auVar23[0xc] = -((*param_2)[0xc] == UNK_001176fc);
      auVar23[0xd] = -((*param_2)[0xd] == UNK_001176fd);
      auVar23[0xe] = -((*param_2)[0xe] == UNK_001176fe);
      auVar23[0xf] = -((*param_2)[0xf] == UNK_001176ff);
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
        goto LAB_0014b06a;
      }
      auVar42[0] = -((*param_2)[0xb] == DAT_00117450);
      auVar42[1] = -((*param_2)[0xc] == UNK_00117451);
      auVar42[2] = -((*param_2)[0xd] == UNK_00117452);
      auVar42[3] = -((*param_2)[0xe] == UNK_00117453);
      auVar42[4] = -((*param_2)[0xf] == UNK_00117454);
      auVar42[5] = -(param_2[1][0] == UNK_00117455);
      auVar42[6] = -(param_2[1][1] == UNK_00117456);
      auVar42[7] = -(param_2[1][2] == UNK_00117457);
      auVar42[8] = -(param_2[1][3] == UNK_00117458);
      auVar42[9] = -(param_2[1][4] == UNK_00117459);
      auVar42[10] = -(param_2[1][5] == UNK_0011745a);
      auVar42[0xb] = -(param_2[1][6] == UNK_0011745b);
      auVar42[0xc] = -(param_2[1][7] == UNK_0011745c);
      auVar42[0xd] = -(param_2[1][8] == UNK_0011745d);
      auVar42[0xe] = -(param_2[1][9] == UNK_0011745e);
      auVar42[0xf] = -(param_2[1][10] == UNK_0011745f);
      auVar24[0] = -((*param_2)[0] == DAT_00117990);
      auVar24[1] = -((*param_2)[1] == UNK_00117991);
      auVar24[2] = -((*param_2)[2] == UNK_00117992);
      auVar24[3] = -((*param_2)[3] == UNK_00117993);
      auVar24[4] = -((*param_2)[4] == UNK_00117994);
      auVar24[5] = -((*param_2)[5] == UNK_00117995);
      auVar24[6] = -((*param_2)[6] == UNK_00117996);
      auVar24[7] = -((*param_2)[7] == UNK_00117997);
      auVar24[8] = -((*param_2)[8] == UNK_00117998);
      auVar24[9] = -((*param_2)[9] == UNK_00117999);
      auVar24[10] = -((*param_2)[10] == UNK_0011799a);
      auVar24[0xb] = -((*param_2)[0xb] == UNK_0011799b);
      auVar24[0xc] = -((*param_2)[0xc] == UNK_0011799c);
      auVar24[0xd] = -((*param_2)[0xd] == UNK_0011799d);
      auVar24[0xe] = -((*param_2)[0xe] == UNK_0011799e);
      auVar24[0xf] = -((*param_2)[0xf] == UNK_0011799f);
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
        *(undefined1 *)(param_1 + 1) = 0x1d;
        goto LAB_0014b06a;
      }
      break;
    case 0x14ad7f:
      auVar43[0] = -((*param_2)[9] == DAT_00117690);
      auVar43[1] = -((*param_2)[10] == UNK_00117691);
      auVar43[2] = -((*param_2)[0xb] == UNK_00117692);
      auVar43[3] = -((*param_2)[0xc] == UNK_00117693);
      auVar43[4] = -((*param_2)[0xd] == UNK_00117694);
      auVar43[5] = -((*param_2)[0xe] == UNK_00117695);
      auVar43[6] = -((*param_2)[0xf] == UNK_00117696);
      auVar43[7] = -(param_2[1][0] == UNK_00117697);
      auVar43[8] = -(param_2[1][1] == UNK_00117698);
      auVar43[9] = -(param_2[1][2] == UNK_00117699);
      auVar43[10] = -(param_2[1][3] == UNK_0011769a);
      auVar43[0xb] = -(param_2[1][4] == UNK_0011769b);
      auVar43[0xc] = -(param_2[1][5] == UNK_0011769c);
      auVar43[0xd] = -(param_2[1][6] == UNK_0011769d);
      auVar43[0xe] = -(param_2[1][7] == UNK_0011769e);
      auVar43[0xf] = -(param_2[1][8] == UNK_0011769f);
      auVar25[0] = -((*param_2)[0] == DAT_00117660);
      auVar25[1] = -((*param_2)[1] == UNK_00117661);
      auVar25[2] = -((*param_2)[2] == UNK_00117662);
      auVar25[3] = -((*param_2)[3] == UNK_00117663);
      auVar25[4] = -((*param_2)[4] == UNK_00117664);
      auVar25[5] = -((*param_2)[5] == UNK_00117665);
      auVar25[6] = -((*param_2)[6] == UNK_00117666);
      auVar25[7] = -((*param_2)[7] == UNK_00117667);
      auVar25[8] = -((*param_2)[8] == UNK_00117668);
      auVar25[9] = -((*param_2)[9] == UNK_00117669);
      auVar25[10] = -((*param_2)[10] == UNK_0011766a);
      auVar25[0xb] = -((*param_2)[0xb] == UNK_0011766b);
      auVar25[0xc] = -((*param_2)[0xc] == UNK_0011766c);
      auVar25[0xd] = -((*param_2)[0xd] == UNK_0011766d);
      auVar25[0xe] = -((*param_2)[0xe] == UNK_0011766e);
      auVar25[0xf] = -((*param_2)[0xf] == UNK_0011766f);
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
        *(undefined1 *)(param_1 + 1) = 0x19;
        goto LAB_0014b06a;
      }
      bVar4 = true;
      goto joined_r0x0014adba;
    case 0x14adbe:
      iVar9 = (*(code *)PTR_bcmp_001dd488)
                        (param_2,
                         "dyn_score_position_ts_threshold_sdyn_score_max_position_ts_sdyn_score_delta_scoreuse_dynamic_volspread_ratio"
                         ,0x21);
      if (iVar9 == 0) {
        *(undefined1 *)(param_1 + 1) = 0x1a;
        goto LAB_0014b06a;
      }
      break;
    case 0x14ae05:
      goto switchD_0014ab7c_caseD_14ae05;
    }
    bVar4 = false;
joined_r0x0014adba:
    bVar5 = false;
    bVar8 = false;
    if (bVar3) {
LAB_0014ae10:
      bVar5 = bVar8;
      iVar9 = (*(code *)PTR_bcmp_001dd488)(param_2,"market_volatility_ms",param_3);
      if (iVar9 == 0) {
        *(undefined1 *)(param_1 + 1) = 0x1e;
        goto LAB_0014b06a;
      }
    }
  }
  else {
switchD_0014ab7c_caseD_14ae05:
    bVar5 = false;
    bVar4 = false;
    bVar8 = bVar5;
    if (bVar3) goto LAB_0014ae10;
  }
LAB_0014ae2b:
  if ((bVar6) &&
     (iVar9 = (*(code *)PTR_bcmp_001dd488)
                        (param_2,"rolling_windows_mssplit_high_low_ratio_threshold",param_3),
     iVar9 == 0)) {
    *(undefined1 *)(param_1 + 1) = 0x1f;
  }
  else {
    if (param_3 == 0x22) {
      iVar9 = (*(code *)PTR_bcmp_001dd488)(param_2,"max_maker_limit_rate_bias_from_mid",0x22);
      if (iVar9 == 0) {
        *(undefined1 *)(param_1 + 1) = 0x21;
        goto LAB_0014b06a;
      }
    }
    else if ((param_3 == 0x1e) &&
            (auVar44[0] = -((*param_2)[0xe] == DAT_00117670),
            auVar44[1] = -((*param_2)[0xf] == UNK_00117671),
            auVar44[2] = -(param_2[1][0] == UNK_00117672),
            auVar44[3] = -(param_2[1][1] == UNK_00117673),
            auVar44[4] = -(param_2[1][2] == UNK_00117674),
            auVar44[5] = -(param_2[1][3] == UNK_00117675),
            auVar44[6] = -(param_2[1][4] == UNK_00117676),
            auVar44[7] = -(param_2[1][5] == UNK_00117677),
            auVar44[8] = -(param_2[1][6] == UNK_00117678),
            auVar44[9] = -(param_2[1][7] == UNK_00117679),
            auVar44[10] = -(param_2[1][8] == UNK_0011767a),
            auVar44[0xb] = -(param_2[1][9] == UNK_0011767b),
            auVar44[0xc] = -(param_2[1][10] == UNK_0011767c),
            auVar44[0xd] = -(param_2[1][0xb] == UNK_0011767d),
            auVar44[0xe] = -(param_2[1][0xc] == UNK_0011767e),
            auVar44[0xf] = -(param_2[1][0xd] == UNK_0011767f),
            auVar26[0] = -((*param_2)[0] == DAT_00117500),
            auVar26[1] = -((*param_2)[1] == UNK_00117501),
            auVar26[2] = -((*param_2)[2] == UNK_00117502),
            auVar26[3] = -((*param_2)[3] == UNK_00117503),
            auVar26[4] = -((*param_2)[4] == UNK_00117504),
            auVar26[5] = -((*param_2)[5] == UNK_00117505),
            auVar26[6] = -((*param_2)[6] == UNK_00117506),
            auVar26[7] = -((*param_2)[7] == UNK_00117507),
            auVar26[8] = -((*param_2)[8] == UNK_00117508),
            auVar26[9] = -((*param_2)[9] == UNK_00117509),
            auVar26[10] = -((*param_2)[10] == UNK_0011750a),
            auVar26[0xb] = -((*param_2)[0xb] == UNK_0011750b),
            auVar26[0xc] = -((*param_2)[0xc] == UNK_0011750c),
            auVar26[0xd] = -((*param_2)[0xd] == UNK_0011750d),
            auVar26[0xe] = -((*param_2)[0xe] == UNK_0011750e),
            auVar26[0xf] = -((*param_2)[0xf] == UNK_0011750f), auVar26 = auVar26 & auVar44,
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
      *(undefined1 *)(param_1 + 1) = 0x20;
      goto LAB_0014b06a;
    }
    if ((bVar4) &&
       (iVar9 = (*(code *)PTR_bcmp_001dd488)
                          (param_2,"order_max_pending_time_msmaker_alpha_imb_delta",param_3),
       iVar9 == 0)) {
      *(undefined1 *)(param_1 + 1) = 0x22;
    }
    else if ((bVar5) &&
            (auVar45[0] = -((*param_2)[5] == DAT_00117820),
            auVar45[1] = -((*param_2)[6] == UNK_00117821),
            auVar45[2] = -((*param_2)[7] == UNK_00117822),
            auVar45[3] = -((*param_2)[8] == UNK_00117823),
            auVar45[4] = -((*param_2)[9] == UNK_00117824),
            auVar45[5] = -((*param_2)[10] == UNK_00117825),
            auVar45[6] = -((*param_2)[0xb] == UNK_00117826),
            auVar45[7] = -((*param_2)[0xc] == UNK_00117827),
            auVar45[8] = -((*param_2)[0xd] == UNK_00117828),
            auVar45[9] = -((*param_2)[0xe] == UNK_00117829),
            auVar45[10] = -((*param_2)[0xf] == UNK_0011782a),
            auVar45[0xb] = -(param_2[1][0] == UNK_0011782b),
            auVar45[0xc] = -(param_2[1][1] == UNK_0011782c),
            auVar45[0xd] = -(param_2[1][2] == UNK_0011782d),
            auVar45[0xe] = -(param_2[1][3] == UNK_0011782e),
            auVar45[0xf] = -(param_2[1][4] == UNK_0011782f),
            auVar27[0] = -((*param_2)[0] == DAT_001176b0),
            auVar27[1] = -((*param_2)[1] == UNK_001176b1),
            auVar27[2] = -((*param_2)[2] == UNK_001176b2),
            auVar27[3] = -((*param_2)[3] == UNK_001176b3),
            auVar27[4] = -((*param_2)[4] == UNK_001176b4),
            auVar27[5] = -((*param_2)[5] == UNK_001176b5),
            auVar27[6] = -((*param_2)[6] == UNK_001176b6),
            auVar27[7] = -((*param_2)[7] == UNK_001176b7),
            auVar27[8] = -((*param_2)[8] == UNK_001176b8),
            auVar27[9] = -((*param_2)[9] == UNK_001176b9),
            auVar27[10] = -((*param_2)[10] == UNK_001176ba),
            auVar27[0xb] = -((*param_2)[0xb] == UNK_001176bb),
            auVar27[0xc] = -((*param_2)[0xc] == UNK_001176bc),
            auVar27[0xd] = -((*param_2)[0xd] == UNK_001176bd),
            auVar27[0xe] = -((*param_2)[0xe] == UNK_001176be),
            auVar27[0xf] = -((*param_2)[0xf] == UNK_001176bf), auVar27 = auVar27 & auVar45,
            (ushort)((ushort)(SUB161(auVar27 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
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
                     (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar27[0xf] >> 7) << 0xf) == 0xffff)) {
      *(undefined1 *)(param_1 + 1) = 0x23;
    }
    else if ((bVar4) &&
            (iVar9 = (*(code *)PTR_bcmp_001dd488)(param_2,"maker_vol_depth_window_ms",param_3),
            iVar9 == 0)) {
      *(undefined1 *)(param_1 + 1) = 0x24;
    }
    else if ((bVar6) &&
            (iVar9 = (*(code *)PTR_bcmp_001dd488)(param_2,"maker_ticks_inside",param_3), iVar9 == 0)
            ) {
      *(undefined1 *)(param_1 + 1) = 0x25;
    }
    else if ((bVar4) &&
            (iVar9 = (*(code *)PTR_bcmp_001dd488)(param_2,"maker_cancel_range_levels",param_3),
            iVar9 == 0)) {
      *(undefined1 *)(param_1 + 1) = 0x26;
    }
    else if (bVar7) {
      iVar9 = (*(code *)PTR_bcmp_001dd488)(param_2,"low_action",param_3);
      if (iVar9 == 0) {
        *(undefined1 *)(param_1 + 1) = 0x27;
      }
      else {
        *(undefined1 *)(param_1 + 1) = 0x28;
      }
    }
    else {
LAB_0014af8c:
      *(undefined1 *)(param_1 + 1) = 0x28;
    }
  }
LAB_0014b06a:
  *param_1 = 2;
  return param_1;
}


