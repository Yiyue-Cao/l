// ELF address 0x0000000000043290; <strategy_sm4::_::<impl serde_core::de::Deserialize for strategy_sm4::SM4Params>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_str

/* _<strategy_sm4::_::<impl serde_core::de::Deserialize for
   strategy_sm4::SM4Params>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_str */

undefined8 * __rustcall
_<strategy_sm4::_::<impl_serde_core::de::Deserialize_for_strategy_sm4::SM4Params>::deserialize::__FieldVisitor_as_serde_core::de::Visitor>
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
  undefined1 auVar38 [16];
  
  bVar2 = false;
  bVar3 = false;
  bVar4 = false;
  switch(param_3) {
  case 8:
    if (*(long *)*param_2 == 0x656c69746e617571) {
      *(undefined1 *)(param_1 + 1) = 5;
      goto LAB_001439e0;
    }
    break;
  case 9:
    if ((*param_2)[8] == 'a' && *(long *)*param_2 == 0x68706c615f317670) {
      *(undefined1 *)(param_1 + 1) = 1;
      goto LAB_001439e0;
    }
    if ((*param_2)[8] == 'e' && *(long *)*param_2 == 0x7461725f65746f76) {
      *(undefined1 *)(param_1 + 1) = 4;
      goto LAB_001439e0;
    }
    break;
  case 10:
    if (*(short *)(*param_2 + 8) == 0x6168 && *(long *)*param_2 == 0x706c615f74736f63) {
      *(undefined1 *)(param_1 + 1) = 2;
      goto LAB_001439e0;
    }
    bVar3 = true;
    bVar2 = false;
    goto switchD_001432c2_caseD_c;
  case 0xb:
    if (*(long *)(*param_2 + 3) == 0x65646f6d5f6c616e && *(long *)*param_2 == 0x6d5f6c616e676973) {
      *(undefined1 *)(param_1 + 1) = 0;
      goto LAB_001439e0;
    }
    break;
  case 0xc:
  case 0xd:
  case 0xf:
  case 0x11:
  case 0x16:
    goto switchD_001432c2_caseD_c;
  case 0xe:
    if (*(long *)(*param_2 + 6) == 0x657461725f72656b && *(long *)*param_2 == 0x656b61745f78616d) {
      *(undefined1 *)(param_1 + 1) = 8;
      goto LAB_001439e0;
    }
    if (*(long *)(*param_2 + 6) == 0x7972657070696c73 && *(long *)*param_2 == 0x6c735f6564617274) {
      *(undefined1 *)(param_1 + 1) = 9;
      goto LAB_001439e0;
    }
    break;
  case 0x10:
    auVar7[0] = -((*param_2)[0] == DAT_00118320);
    auVar7[1] = -((*param_2)[1] == UNK_00118321);
    auVar7[2] = -((*param_2)[2] == UNK_00118322);
    auVar7[3] = -((*param_2)[3] == UNK_00118323);
    auVar7[4] = -((*param_2)[4] == UNK_00118324);
    auVar7[5] = -((*param_2)[5] == UNK_00118325);
    auVar7[6] = -((*param_2)[6] == UNK_00118326);
    auVar7[7] = -((*param_2)[7] == UNK_00118327);
    auVar7[8] = -((*param_2)[8] == UNK_00118328);
    auVar7[9] = -((*param_2)[9] == UNK_00118329);
    auVar7[10] = -((*param_2)[10] == UNK_0011832a);
    auVar7[0xb] = -((*param_2)[0xb] == UNK_0011832b);
    auVar7[0xc] = -((*param_2)[0xc] == UNK_0011832c);
    auVar7[0xd] = -((*param_2)[0xd] == UNK_0011832d);
    auVar7[0xe] = -((*param_2)[0xe] == UNK_0011832e);
    auVar7[0xf] = -((*param_2)[0xf] == UNK_0011832f);
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
                 (ushort)(SUB161(auVar7 >> 0x77,0) & 1) << 0xe | (ushort)(auVar7[0xf] >> 7) << 0xf)
        == 0xffff) {
      *(undefined1 *)(param_1 + 1) = 6;
      goto LAB_001439e0;
    }
    break;
  case 0x12:
    auVar8[0] = -((*param_2)[0] == s_max_single_add_v_001183c0[0]);
    auVar8[1] = -((*param_2)[1] == s_max_single_add_v_001183c0[1]);
    auVar8[2] = -((*param_2)[2] == s_max_single_add_v_001183c0[2]);
    auVar8[3] = -((*param_2)[3] == s_max_single_add_v_001183c0[3]);
    auVar8[4] = -((*param_2)[4] == s_max_single_add_v_001183c0[4]);
    auVar8[5] = -((*param_2)[5] == s_max_single_add_v_001183c0[5]);
    auVar8[6] = -((*param_2)[6] == s_max_single_add_v_001183c0[6]);
    auVar8[7] = -((*param_2)[7] == s_max_single_add_v_001183c0[7]);
    auVar8[8] = -((*param_2)[8] == s_max_single_add_v_001183c0[8]);
    auVar8[9] = -((*param_2)[9] == s_max_single_add_v_001183c0[9]);
    auVar8[10] = -((*param_2)[10] == s_max_single_add_v_001183c0[10]);
    auVar8[0xb] = -((*param_2)[0xb] == s_max_single_add_v_001183c0[0xb]);
    auVar8[0xc] = -((*param_2)[0xc] == s_max_single_add_v_001183c0[0xc]);
    auVar8[0xd] = -((*param_2)[0xd] == s_max_single_add_v_001183c0[0xd]);
    auVar8[0xe] = -((*param_2)[0xe] == s_max_single_add_v_001183c0[0xe]);
    auVar8[0xf] = -((*param_2)[0xf] == s_max_single_add_v_001183c0[0xf]);
    auVar23[0] = -((char)*(undefined2 *)param_2[1] == s_ol_00118070[0]);
    auVar23[1] = -((char)((ushort)*(undefined2 *)param_2[1] >> 8) == s_ol_00118070[1]);
    auVar23[2] = -(s_ol_00118070[2] == '\0');
    auVar23[3] = -(s_ol_00118070[3] == '\0');
    auVar23[4] = -(UNK_00118074 == '\0');
    auVar23[5] = -(UNK_00118075 == '\0');
    auVar23[6] = -(UNK_00118076 == '\0');
    auVar23[7] = -(UNK_00118077 == '\0');
    auVar23[8] = -(UNK_00118078 == '\0');
    auVar23[9] = -(UNK_00118079 == '\0');
    auVar23[10] = -(UNK_0011807a == '\0');
    auVar23[0xb] = -(UNK_0011807b == '\0');
    auVar23[0xc] = -(UNK_0011807c == '\0');
    auVar23[0xd] = -(UNK_0011807d == '\0');
    auVar23[0xe] = -(UNK_0011807e == '\0');
    auVar23[0xf] = -(UNK_0011807f == '\0');
    auVar23 = auVar23 & auVar8;
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
      *(undefined1 *)(param_1 + 1) = 0xb;
      goto LAB_001439e0;
    }
    auVar9[0] = -((*param_2)[0] == DAT_00118310);
    auVar9[1] = -((*param_2)[1] == UNK_00118311);
    auVar9[2] = -((*param_2)[2] == UNK_00118312);
    auVar9[3] = -((*param_2)[3] == UNK_00118313);
    auVar9[4] = -((*param_2)[4] == UNK_00118314);
    auVar9[5] = -((*param_2)[5] == UNK_00118315);
    auVar9[6] = -((*param_2)[6] == UNK_00118316);
    auVar9[7] = -((*param_2)[7] == UNK_00118317);
    auVar9[8] = -((*param_2)[8] == UNK_00118318);
    auVar9[9] = -((*param_2)[9] == UNK_00118319);
    auVar9[10] = -((*param_2)[10] == UNK_0011831a);
    auVar9[0xb] = -((*param_2)[0xb] == UNK_0011831b);
    auVar9[0xc] = -((*param_2)[0xc] == UNK_0011831c);
    auVar9[0xd] = -((*param_2)[0xd] == UNK_0011831d);
    auVar9[0xe] = -((*param_2)[0xe] == UNK_0011831e);
    auVar9[0xf] = -((*param_2)[0xf] == UNK_0011831f);
    auVar24[0] = -((char)*(undefined2 *)param_2[1] == DAT_00118640);
    auVar24[1] = -((char)((ushort)*(undefined2 *)param_2[1] >> 8) == UNK_00118641);
    auVar24[2] = -(UNK_00118642 == '\0');
    auVar24[3] = -(UNK_00118643 == '\0');
    auVar24[4] = -(UNK_00118644 == '\0');
    auVar24[5] = -(UNK_00118645 == '\0');
    auVar24[6] = -(UNK_00118646 == '\0');
    auVar24[7] = -(UNK_00118647 == '\0');
    auVar24[8] = -(UNK_00118648 == '\0');
    auVar24[9] = -(UNK_00118649 == '\0');
    auVar24[10] = -(UNK_0011864a == '\0');
    auVar24[0xb] = -(UNK_0011864b == '\0');
    auVar24[0xc] = -(UNK_0011864c == '\0');
    auVar24[0xd] = -(UNK_0011864d == '\0');
    auVar24[0xe] = -(UNK_0011864e == '\0');
    auVar24[0xf] = -(UNK_0011864f == '\0');
    auVar24 = auVar24 & auVar9;
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
      *(undefined1 *)(param_1 + 1) = 0xc;
      goto LAB_001439e0;
    }
    auVar10[0] = -((*param_2)[0] == s_max_single_net_v_00118350[0]);
    auVar10[1] = -((*param_2)[1] == s_max_single_net_v_00118350[1]);
    auVar10[2] = -((*param_2)[2] == s_max_single_net_v_00118350[2]);
    auVar10[3] = -((*param_2)[3] == s_max_single_net_v_00118350[3]);
    auVar10[4] = -((*param_2)[4] == s_max_single_net_v_00118350[4]);
    auVar10[5] = -((*param_2)[5] == s_max_single_net_v_00118350[5]);
    auVar10[6] = -((*param_2)[6] == s_max_single_net_v_00118350[6]);
    auVar10[7] = -((*param_2)[7] == s_max_single_net_v_00118350[7]);
    auVar10[8] = -((*param_2)[8] == s_max_single_net_v_00118350[8]);
    auVar10[9] = -((*param_2)[9] == s_max_single_net_v_00118350[9]);
    auVar10[10] = -((*param_2)[10] == s_max_single_net_v_00118350[10]);
    auVar10[0xb] = -((*param_2)[0xb] == s_max_single_net_v_00118350[0xb]);
    auVar10[0xc] = -((*param_2)[0xc] == s_max_single_net_v_00118350[0xc]);
    auVar10[0xd] = -((*param_2)[0xd] == s_max_single_net_v_00118350[0xd]);
    auVar10[0xe] = -((*param_2)[0xe] == s_max_single_net_v_00118350[0xe]);
    auVar10[0xf] = -((*param_2)[0xf] == s_max_single_net_v_00118350[0xf]);
    auVar25[0] = -((char)*(undefined2 *)param_2[1] == s_ol_00118070[0]);
    auVar25[1] = -((char)((ushort)*(undefined2 *)param_2[1] >> 8) == s_ol_00118070[1]);
    auVar25[2] = -(s_ol_00118070[2] == '\0');
    auVar25[3] = -(s_ol_00118070[3] == '\0');
    auVar25[4] = -(UNK_00118074 == '\0');
    auVar25[5] = -(UNK_00118075 == '\0');
    auVar25[6] = -(UNK_00118076 == '\0');
    auVar25[7] = -(UNK_00118077 == '\0');
    auVar25[8] = -(UNK_00118078 == '\0');
    auVar25[9] = -(UNK_00118079 == '\0');
    auVar25[10] = -(UNK_0011807a == '\0');
    auVar25[0xb] = -(UNK_0011807b == '\0');
    auVar25[0xc] = -(UNK_0011807c == '\0');
    auVar25[0xd] = -(UNK_0011807d == '\0');
    auVar25[0xe] = -(UNK_0011807e == '\0');
    auVar25[0xf] = -(UNK_0011807f == '\0');
    auVar25 = auVar25 & auVar10;
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
      *(undefined1 *)(param_1 + 1) = 0xd;
      goto LAB_001439e0;
    }
    auVar11[0] = -((*param_2)[0] == s_max_single_net_a_001184c0[0]);
    auVar11[1] = -((*param_2)[1] == s_max_single_net_a_001184c0[1]);
    auVar11[2] = -((*param_2)[2] == s_max_single_net_a_001184c0[2]);
    auVar11[3] = -((*param_2)[3] == s_max_single_net_a_001184c0[3]);
    auVar11[4] = -((*param_2)[4] == s_max_single_net_a_001184c0[4]);
    auVar11[5] = -((*param_2)[5] == s_max_single_net_a_001184c0[5]);
    auVar11[6] = -((*param_2)[6] == s_max_single_net_a_001184c0[6]);
    auVar11[7] = -((*param_2)[7] == s_max_single_net_a_001184c0[7]);
    auVar11[8] = -((*param_2)[8] == s_max_single_net_a_001184c0[8]);
    auVar11[9] = -((*param_2)[9] == s_max_single_net_a_001184c0[9]);
    auVar11[10] = -((*param_2)[10] == s_max_single_net_a_001184c0[10]);
    auVar11[0xb] = -((*param_2)[0xb] == s_max_single_net_a_001184c0[0xb]);
    auVar11[0xc] = -((*param_2)[0xc] == s_max_single_net_a_001184c0[0xc]);
    auVar11[0xd] = -((*param_2)[0xd] == s_max_single_net_a_001184c0[0xd]);
    auVar11[0xe] = -((*param_2)[0xe] == s_max_single_net_a_001184c0[0xe]);
    auVar11[0xf] = -((*param_2)[0xf] == s_max_single_net_a_001184c0[0xf]);
    auVar26[0] = -((char)*(undefined2 *)param_2[1] == DAT_00118640);
    auVar26[1] = -((char)((ushort)*(undefined2 *)param_2[1] >> 8) == UNK_00118641);
    auVar26[2] = -(UNK_00118642 == '\0');
    auVar26[3] = -(UNK_00118643 == '\0');
    auVar26[4] = -(UNK_00118644 == '\0');
    auVar26[5] = -(UNK_00118645 == '\0');
    auVar26[6] = -(UNK_00118646 == '\0');
    auVar26[7] = -(UNK_00118647 == '\0');
    auVar26[8] = -(UNK_00118648 == '\0');
    auVar26[9] = -(UNK_00118649 == '\0');
    auVar26[10] = -(UNK_0011864a == '\0');
    auVar26[0xb] = -(UNK_0011864b == '\0');
    auVar26[0xc] = -(UNK_0011864c == '\0');
    auVar26[0xd] = -(UNK_0011864d == '\0');
    auVar26[0xe] = -(UNK_0011864e == '\0');
    auVar26[0xf] = -(UNK_0011864f == '\0');
    auVar26 = auVar26 & auVar11;
    if ((ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) | (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
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
                (ushort)(byte)(auVar26[0xf] >> 7) << 0xf) == 0xffff) {
      *(undefined1 *)(param_1 + 1) = 0xe;
      goto LAB_001439e0;
    }
    break;
  case 0x13:
    auVar27[0] = -((*param_2)[3] == DAT_00118080);
    auVar27[1] = -((*param_2)[4] == UNK_00118081);
    auVar27[2] = -((*param_2)[5] == UNK_00118082);
    auVar27[3] = -((*param_2)[6] == UNK_00118083);
    auVar27[4] = -((*param_2)[7] == UNK_00118084);
    auVar27[5] = -((*param_2)[8] == UNK_00118085);
    auVar27[6] = -((*param_2)[9] == UNK_00118086);
    auVar27[7] = -((*param_2)[10] == UNK_00118087);
    auVar27[8] = -((*param_2)[0xb] == UNK_00118088);
    auVar27[9] = -((*param_2)[0xc] == UNK_00118089);
    auVar27[10] = -((*param_2)[0xd] == UNK_0011808a);
    auVar27[0xb] = -((*param_2)[0xe] == UNK_0011808b);
    auVar27[0xc] = -((*param_2)[0xf] == UNK_0011808c);
    auVar27[0xd] = -(param_2[1][0] == UNK_0011808d);
    auVar27[0xe] = -(param_2[1][1] == UNK_0011808e);
    auVar27[0xf] = -(param_2[1][2] == UNK_0011808f);
    auVar12[0] = -((*param_2)[0] == s_signal_trigger_m_001184d0[0]);
    auVar12[1] = -((*param_2)[1] == s_signal_trigger_m_001184d0[1]);
    auVar12[2] = -((*param_2)[2] == s_signal_trigger_m_001184d0[2]);
    auVar12[3] = -((*param_2)[3] == s_signal_trigger_m_001184d0[3]);
    auVar12[4] = -((*param_2)[4] == s_signal_trigger_m_001184d0[4]);
    auVar12[5] = -((*param_2)[5] == s_signal_trigger_m_001184d0[5]);
    auVar12[6] = -((*param_2)[6] == s_signal_trigger_m_001184d0[6]);
    auVar12[7] = -((*param_2)[7] == s_signal_trigger_m_001184d0[7]);
    auVar12[8] = -((*param_2)[8] == s_signal_trigger_m_001184d0[8]);
    auVar12[9] = -((*param_2)[9] == s_signal_trigger_m_001184d0[9]);
    auVar12[10] = -((*param_2)[10] == s_signal_trigger_m_001184d0[10]);
    auVar12[0xb] = -((*param_2)[0xb] == s_signal_trigger_m_001184d0[0xb]);
    auVar12[0xc] = -((*param_2)[0xc] == s_signal_trigger_m_001184d0[0xc]);
    auVar12[0xd] = -((*param_2)[0xd] == s_signal_trigger_m_001184d0[0xd]);
    auVar12[0xe] = -((*param_2)[0xe] == s_signal_trigger_m_001184d0[0xe]);
    auVar12[0xf] = -((*param_2)[0xf] == s_signal_trigger_m_001184d0[0xf]);
    auVar12 = auVar12 & auVar27;
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
      *(undefined1 *)(param_1 + 1) = 3;
      goto LAB_001439e0;
    }
    iVar5 = (*(code *)PTR_bcmp_001e7990)
                      (param_2,
                       "taker_rate_baselinemax_taker_ratetrade_slipperyclose_position_block_msmax_single_add_volmax_single_add_amtmax_single_net_volmax_single_net_amtmax_single_close_volmax_single_close_amt"
                       ,param_3);
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 1) = 7;
      goto LAB_001439e0;
    }
    iVar5 = (*(code *)PTR_bcmp_001e7990)(param_2,"long_open_threshold",param_3);
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x11;
      goto LAB_001439e0;
    }
    break;
  case 0x14:
    uVar1 = *(undefined4 *)param_2[1];
    auVar32[0] = -((char)uVar1 == DAT_00118030);
    auVar32[1] = -((char)((uint)uVar1 >> 8) == UNK_00118031);
    auVar32[2] = -((char)((uint)uVar1 >> 0x10) == UNK_00118032);
    auVar32[3] = -((char)((uint)uVar1 >> 0x18) == UNK_00118033);
    auVar32[4] = -(UNK_00118034 == '\0');
    auVar32[5] = -(UNK_00118035 == '\0');
    auVar32[6] = -(UNK_00118036 == '\0');
    auVar32[7] = -(UNK_00118037 == '\0');
    auVar32[8] = -(UNK_00118038 == '\0');
    auVar32[9] = -(UNK_00118039 == '\0');
    auVar32[10] = -(UNK_0011803a == '\0');
    auVar32[0xb] = -(UNK_0011803b == '\0');
    auVar32[0xc] = -(UNK_0011803c == '\0');
    auVar32[0xd] = -(UNK_0011803d == '\0');
    auVar32[0xe] = -(UNK_0011803e == '\0');
    auVar32[0xf] = -(UNK_0011803f == '\0');
    auVar17[0] = -((*param_2)[0] == s_max_single_close_001181b0[0]);
    auVar17[1] = -((*param_2)[1] == s_max_single_close_001181b0[1]);
    auVar17[2] = -((*param_2)[2] == s_max_single_close_001181b0[2]);
    auVar17[3] = -((*param_2)[3] == s_max_single_close_001181b0[3]);
    auVar17[4] = -((*param_2)[4] == s_max_single_close_001181b0[4]);
    auVar17[5] = -((*param_2)[5] == s_max_single_close_001181b0[5]);
    auVar17[6] = -((*param_2)[6] == s_max_single_close_001181b0[6]);
    auVar17[7] = -((*param_2)[7] == s_max_single_close_001181b0[7]);
    auVar17[8] = -((*param_2)[8] == s_max_single_close_001181b0[8]);
    auVar17[9] = -((*param_2)[9] == s_max_single_close_001181b0[9]);
    auVar17[10] = -((*param_2)[10] == s_max_single_close_001181b0[10]);
    auVar17[0xb] = -((*param_2)[0xb] == s_max_single_close_001181b0[0xb]);
    auVar17[0xc] = -((*param_2)[0xc] == s_max_single_close_001181b0[0xc]);
    auVar17[0xd] = -((*param_2)[0xd] == s_max_single_close_001181b0[0xd]);
    auVar17[0xe] = -((*param_2)[0xe] == s_max_single_close_001181b0[0xe]);
    auVar17[0xf] = -((*param_2)[0xf] == s_max_single_close_001181b0[0xf]);
    auVar17 = auVar17 & auVar32;
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
      *(undefined1 *)(param_1 + 1) = 0xf;
      goto LAB_001439e0;
    }
    auVar6 = *param_2;
    uVar1 = *(undefined4 *)param_2[1];
    auVar38[0] = -((char)uVar1 == s__amt_00118280[0]);
    auVar38[1] = -((char)((uint)uVar1 >> 8) == s__amt_00118280[1]);
    auVar38[2] = -((char)((uint)uVar1 >> 0x10) == s__amt_00118280[2]);
    auVar38[3] = -((char)((uint)uVar1 >> 0x18) == s__amt_00118280[3]);
    auVar38[4] = -(s__amt_00118280[4] == '\0');
    auVar38[5] = -(s__amt_00118280[5] == '\0');
    auVar38[6] = -(s__amt_00118280[6] == '\0');
    auVar38[7] = -(s__amt_00118280[7] == '\0');
    auVar38[8] = -(UNK_00118288 == '\0');
    auVar38[9] = -(UNK_00118289 == '\0');
    auVar38[10] = -(UNK_0011828a == '\0');
    auVar38[0xb] = -(UNK_0011828b == '\0');
    auVar38[0xc] = -(UNK_0011828c == '\0');
    auVar38[0xd] = -(UNK_0011828d == '\0');
    auVar38[0xe] = -(UNK_0011828e == '\0');
    auVar38[0xf] = -(UNK_0011828f == '\0');
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
    auVar38 = auVar38 & auVar33;
    if ((ushort)((ushort)(SUB161(auVar38 >> 7,0) & 1) | (ushort)(SUB161(auVar38 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar38 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar38 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar38 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar38 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar38 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar38 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar38 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar38 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar38 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar38 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar38 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar38 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar38 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar38[0xf] >> 7) << 0xf) == 0xffff) {
      *(undefined1 *)(param_1 + 1) = 0x10;
      goto LAB_001439e0;
    }
    iVar5 = (*(code *)PTR_bcmp_001e7990)(param_2,"long_close_threshold",param_3);
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x12;
      goto LAB_001439e0;
    }
    iVar5 = (*(code *)PTR_bcmp_001e7990)
                      (param_2,"short_open_thresholdshort_close_threshold",param_3);
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x13;
      goto LAB_001439e0;
    }
    bVar4 = true;
    goto switchD_001432c2_default;
  case 0x15:
    auVar29[0] = -((*param_2)[5] == DAT_001182b0);
    auVar29[1] = -((*param_2)[6] == UNK_001182b1);
    auVar29[2] = -((*param_2)[7] == UNK_001182b2);
    auVar29[3] = -((*param_2)[8] == UNK_001182b3);
    auVar29[4] = -((*param_2)[9] == UNK_001182b4);
    auVar29[5] = -((*param_2)[10] == UNK_001182b5);
    auVar29[6] = -((*param_2)[0xb] == UNK_001182b6);
    auVar29[7] = -((*param_2)[0xc] == UNK_001182b7);
    auVar29[8] = -((*param_2)[0xd] == UNK_001182b8);
    auVar29[9] = -((*param_2)[0xe] == UNK_001182b9);
    auVar29[10] = -((*param_2)[0xf] == UNK_001182ba);
    auVar29[0xb] = -(param_2[1][0] == UNK_001182bb);
    auVar29[0xc] = -(param_2[1][1] == UNK_001182bc);
    auVar29[0xd] = -(param_2[1][2] == UNK_001182bd);
    auVar29[0xe] = -(param_2[1][3] == UNK_001182be);
    auVar29[0xf] = -(param_2[1][4] == UNK_001182bf);
    auVar14[0] = -((*param_2)[0] == DAT_001182c0);
    auVar14[1] = -((*param_2)[1] == UNK_001182c1);
    auVar14[2] = -((*param_2)[2] == UNK_001182c2);
    auVar14[3] = -((*param_2)[3] == UNK_001182c3);
    auVar14[4] = -((*param_2)[4] == UNK_001182c4);
    auVar14[5] = -((*param_2)[5] == UNK_001182c5);
    auVar14[6] = -((*param_2)[6] == UNK_001182c6);
    auVar14[7] = -((*param_2)[7] == UNK_001182c7);
    auVar14[8] = -((*param_2)[8] == UNK_001182c8);
    auVar14[9] = -((*param_2)[9] == UNK_001182c9);
    auVar14[10] = -((*param_2)[10] == UNK_001182ca);
    auVar14[0xb] = -((*param_2)[0xb] == UNK_001182cb);
    auVar14[0xc] = -((*param_2)[0xc] == UNK_001182cc);
    auVar14[0xd] = -((*param_2)[0xd] == UNK_001182cd);
    auVar14[0xe] = -((*param_2)[0xe] == UNK_001182ce);
    auVar14[0xf] = -((*param_2)[0xf] == UNK_001182cf);
    auVar14 = auVar14 & auVar29;
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
      *(undefined1 *)(param_1 + 1) = 0x14;
      goto LAB_001439e0;
    }
    auVar30[0] = -((*param_2)[5] == DAT_001180e0);
    auVar30[1] = -((*param_2)[6] == UNK_001180e1);
    auVar30[2] = -((*param_2)[7] == UNK_001180e2);
    auVar30[3] = -((*param_2)[8] == UNK_001180e3);
    auVar30[4] = -((*param_2)[9] == UNK_001180e4);
    auVar30[5] = -((*param_2)[10] == UNK_001180e5);
    auVar30[6] = -((*param_2)[0xb] == UNK_001180e6);
    auVar30[7] = -((*param_2)[0xc] == UNK_001180e7);
    auVar30[8] = -((*param_2)[0xd] == UNK_001180e8);
    auVar30[9] = -((*param_2)[0xe] == UNK_001180e9);
    auVar30[10] = -((*param_2)[0xf] == UNK_001180ea);
    auVar30[0xb] = -(param_2[1][0] == UNK_001180eb);
    auVar30[0xc] = -(param_2[1][1] == UNK_001180ec);
    auVar30[0xd] = -(param_2[1][2] == UNK_001180ed);
    auVar30[0xe] = -(param_2[1][3] == UNK_001180ee);
    auVar30[0xf] = -(param_2[1][4] == UNK_001180ef);
    auVar15[0] = -((*param_2)[0] == DAT_001185a0);
    auVar15[1] = -((*param_2)[1] == UNK_001185a1);
    auVar15[2] = -((*param_2)[2] == UNK_001185a2);
    auVar15[3] = -((*param_2)[3] == UNK_001185a3);
    auVar15[4] = -((*param_2)[4] == UNK_001185a4);
    auVar15[5] = -((*param_2)[5] == UNK_001185a5);
    auVar15[6] = -((*param_2)[6] == UNK_001185a6);
    auVar15[7] = -((*param_2)[7] == UNK_001185a7);
    auVar15[8] = -((*param_2)[8] == UNK_001185a8);
    auVar15[9] = -((*param_2)[9] == UNK_001185a9);
    auVar15[10] = -((*param_2)[10] == UNK_001185aa);
    auVar15[0xb] = -((*param_2)[0xb] == UNK_001185ab);
    auVar15[0xc] = -((*param_2)[0xc] == UNK_001185ac);
    auVar15[0xd] = -((*param_2)[0xd] == UNK_001185ad);
    auVar15[0xe] = -((*param_2)[0xe] == UNK_001185ae);
    auVar15[0xf] = -((*param_2)[0xf] == UNK_001185af);
    auVar15 = auVar15 & auVar30;
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
      *(undefined1 *)(param_1 + 1) = 0x17;
      goto LAB_001439e0;
    }
    auVar31[0] = -((*param_2)[5] == DAT_00118420);
    auVar31[1] = -((*param_2)[6] == UNK_00118421);
    auVar31[2] = -((*param_2)[7] == UNK_00118422);
    auVar31[3] = -((*param_2)[8] == UNK_00118423);
    auVar31[4] = -((*param_2)[9] == UNK_00118424);
    auVar31[5] = -((*param_2)[10] == UNK_00118425);
    auVar31[6] = -((*param_2)[0xb] == UNK_00118426);
    auVar31[7] = -((*param_2)[0xc] == UNK_00118427);
    auVar31[8] = -((*param_2)[0xd] == UNK_00118428);
    auVar31[9] = -((*param_2)[0xe] == UNK_00118429);
    auVar31[10] = -((*param_2)[0xf] == UNK_0011842a);
    auVar31[0xb] = -(param_2[1][0] == UNK_0011842b);
    auVar31[0xc] = -(param_2[1][1] == UNK_0011842c);
    auVar31[0xd] = -(param_2[1][2] == UNK_0011842d);
    auVar31[0xe] = -(param_2[1][3] == UNK_0011842e);
    auVar31[0xf] = -(param_2[1][4] == UNK_0011842f);
    auVar16[0] = -((*param_2)[0] == DAT_001180f0);
    auVar16[1] = -((*param_2)[1] == UNK_001180f1);
    auVar16[2] = -((*param_2)[2] == UNK_001180f2);
    auVar16[3] = -((*param_2)[3] == UNK_001180f3);
    auVar16[4] = -((*param_2)[4] == UNK_001180f4);
    auVar16[5] = -((*param_2)[5] == UNK_001180f5);
    auVar16[6] = -((*param_2)[6] == UNK_001180f6);
    auVar16[7] = -((*param_2)[7] == UNK_001180f7);
    auVar16[8] = -((*param_2)[8] == UNK_001180f8);
    auVar16[9] = -((*param_2)[9] == UNK_001180f9);
    auVar16[10] = -((*param_2)[10] == UNK_001180fa);
    auVar16[0xb] = -((*param_2)[0xb] == UNK_001180fb);
    auVar16[0xc] = -((*param_2)[0xc] == UNK_001180fc);
    auVar16[0xd] = -((*param_2)[0xd] == UNK_001180fd);
    auVar16[0xe] = -((*param_2)[0xe] == UNK_001180fe);
    auVar16[0xf] = -((*param_2)[0xf] == UNK_001180ff);
    auVar16 = auVar16 & auVar31;
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
      *(undefined1 *)(param_1 + 1) = 0x24;
      goto LAB_001439e0;
    }
    goto LAB_00143941;
  case 0x17:
    auVar22[0] = -((*param_2)[7] == DAT_00118500);
    auVar22[1] = -((*param_2)[8] == UNK_00118501);
    auVar22[2] = -((*param_2)[9] == UNK_00118502);
    auVar22[3] = -((*param_2)[10] == UNK_00118503);
    auVar22[4] = -((*param_2)[0xb] == UNK_00118504);
    auVar22[5] = -((*param_2)[0xc] == UNK_00118505);
    auVar22[6] = -((*param_2)[0xd] == UNK_00118506);
    auVar22[7] = -((*param_2)[0xe] == UNK_00118507);
    auVar22[8] = -((*param_2)[0xf] == UNK_00118508);
    auVar22[9] = -(param_2[1][0] == UNK_00118509);
    auVar22[10] = -(param_2[1][1] == UNK_0011850a);
    auVar22[0xb] = -(param_2[1][2] == UNK_0011850b);
    auVar22[0xc] = -(param_2[1][3] == UNK_0011850c);
    auVar22[0xd] = -(param_2[1][4] == UNK_0011850d);
    auVar22[0xe] = -(param_2[1][5] == UNK_0011850e);
    auVar22[0xf] = -(param_2[1][6] == UNK_0011850f);
    auVar6[0] = -((*param_2)[0] == s_close_position_b_00118130[0]);
    auVar6[1] = -((*param_2)[1] == s_close_position_b_00118130[1]);
    auVar6[2] = -((*param_2)[2] == s_close_position_b_00118130[2]);
    auVar6[3] = -((*param_2)[3] == s_close_position_b_00118130[3]);
    auVar6[4] = -((*param_2)[4] == s_close_position_b_00118130[4]);
    auVar6[5] = -((*param_2)[5] == s_close_position_b_00118130[5]);
    auVar6[6] = -((*param_2)[6] == s_close_position_b_00118130[6]);
    auVar6[7] = -((*param_2)[7] == s_close_position_b_00118130[7]);
    auVar6[8] = -((*param_2)[8] == s_close_position_b_00118130[8]);
    auVar6[9] = -((*param_2)[9] == s_close_position_b_00118130[9]);
    auVar6[10] = -((*param_2)[10] == s_close_position_b_00118130[10]);
    auVar6[0xb] = -((*param_2)[0xb] == s_close_position_b_00118130[0xb]);
    auVar6[0xc] = -((*param_2)[0xc] == s_close_position_b_00118130[0xc]);
    auVar6[0xd] = -((*param_2)[0xd] == s_close_position_b_00118130[0xd]);
    auVar6[0xe] = -((*param_2)[0xe] == s_close_position_b_00118130[0xe]);
    auVar6[0xf] = -((*param_2)[0xf] == s_close_position_b_00118130[0xf]);
    auVar6 = auVar6 & auVar22;
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
      *(undefined1 *)(param_1 + 1) = 10;
      goto LAB_001439e0;
    }
    break;
  default:
    goto switchD_001432c2_default;
  }
  bVar4 = false;
switchD_001432c2_default:
  bVar2 = bVar4;
  bVar3 = false;
switchD_001432c2_caseD_c:
  switch(param_3) {
  case 0x16:
    auVar28[0] = -((*param_2)[6] == DAT_00118290);
    auVar28[1] = -((*param_2)[7] == UNK_00118291);
    auVar28[2] = -((*param_2)[8] == UNK_00118292);
    auVar28[3] = -((*param_2)[9] == UNK_00118293);
    auVar28[4] = -((*param_2)[10] == UNK_00118294);
    auVar28[5] = -((*param_2)[0xb] == UNK_00118295);
    auVar28[6] = -((*param_2)[0xc] == UNK_00118296);
    auVar28[7] = -((*param_2)[0xd] == UNK_00118297);
    auVar28[8] = -((*param_2)[0xe] == UNK_00118298);
    auVar28[9] = -((*param_2)[0xf] == UNK_00118299);
    auVar28[10] = -(param_2[1][0] == UNK_0011829a);
    auVar28[0xb] = -(param_2[1][1] == UNK_0011829b);
    auVar28[0xc] = -(param_2[1][2] == UNK_0011829c);
    auVar28[0xd] = -(param_2[1][3] == UNK_0011829d);
    auVar28[0xe] = -(param_2[1][4] == UNK_0011829e);
    auVar28[0xf] = -(param_2[1][5] == UNK_0011829f);
    auVar13[0] = -((*param_2)[0] == DAT_00118100);
    auVar13[1] = -((*param_2)[1] == UNK_00118101);
    auVar13[2] = -((*param_2)[2] == UNK_00118102);
    auVar13[3] = -((*param_2)[3] == UNK_00118103);
    auVar13[4] = -((*param_2)[4] == UNK_00118104);
    auVar13[5] = -((*param_2)[5] == UNK_00118105);
    auVar13[6] = -((*param_2)[6] == UNK_00118106);
    auVar13[7] = -((*param_2)[7] == UNK_00118107);
    auVar13[8] = -((*param_2)[8] == UNK_00118108);
    auVar13[9] = -((*param_2)[9] == UNK_00118109);
    auVar13[10] = -((*param_2)[10] == UNK_0011810a);
    auVar13[0xb] = -((*param_2)[0xb] == UNK_0011810b);
    auVar13[0xc] = -((*param_2)[0xc] == UNK_0011810c);
    auVar13[0xd] = -((*param_2)[0xd] == UNK_0011810d);
    auVar13[0xe] = -((*param_2)[0xe] == UNK_0011810e);
    auVar13[0xf] = -((*param_2)[0xf] == UNK_0011810f);
    auVar13 = auVar13 & auVar28;
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
      *(undefined1 *)(param_1 + 1) = 0x1e;
      goto LAB_001439e0;
    }
    iVar5 = (*(code *)PTR_bcmp_001e7990)(param_2,"score_thresholds_delta",param_3);
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x20;
      goto LAB_001439e0;
    }
    break;
  case 0x19:
    auVar34[0] = -((*param_2)[9] == s__pending_time_ms_001183d0[0]);
    auVar34[1] = -((*param_2)[10] == s__pending_time_ms_001183d0[1]);
    auVar34[2] = -((*param_2)[0xb] == s__pending_time_ms_001183d0[2]);
    auVar34[3] = -((*param_2)[0xc] == s__pending_time_ms_001183d0[3]);
    auVar34[4] = -((*param_2)[0xd] == s__pending_time_ms_001183d0[4]);
    auVar34[5] = -((*param_2)[0xe] == s__pending_time_ms_001183d0[5]);
    auVar34[6] = -((*param_2)[0xf] == s__pending_time_ms_001183d0[6]);
    auVar34[7] = -(param_2[1][0] == s__pending_time_ms_001183d0[7]);
    auVar34[8] = -(param_2[1][1] == s__pending_time_ms_001183d0[8]);
    auVar34[9] = -(param_2[1][2] == s__pending_time_ms_001183d0[9]);
    auVar34[10] = -(param_2[1][3] == s__pending_time_ms_001183d0[10]);
    auVar34[0xb] = -(param_2[1][4] == s__pending_time_ms_001183d0[0xb]);
    auVar34[0xc] = -(param_2[1][5] == s__pending_time_ms_001183d0[0xc]);
    auVar34[0xd] = -(param_2[1][6] == s__pending_time_ms_001183d0[0xd]);
    auVar34[0xe] = -(param_2[1][7] == s__pending_time_ms_001183d0[0xe]);
    auVar34[0xf] = -(param_2[1][8] == s__pending_time_ms_001183d0[0xf]);
    auVar18[0] = -((*param_2)[0] == DAT_00118090);
    auVar18[1] = -((*param_2)[1] == UNK_00118091);
    auVar18[2] = -((*param_2)[2] == UNK_00118092);
    auVar18[3] = -((*param_2)[3] == UNK_00118093);
    auVar18[4] = -((*param_2)[4] == UNK_00118094);
    auVar18[5] = -((*param_2)[5] == UNK_00118095);
    auVar18[6] = -((*param_2)[6] == UNK_00118096);
    auVar18[7] = -((*param_2)[7] == UNK_00118097);
    auVar18[8] = -((*param_2)[8] == UNK_00118098);
    auVar18[9] = -((*param_2)[9] == UNK_00118099);
    auVar18[10] = -((*param_2)[10] == UNK_0011809a);
    auVar18[0xb] = -((*param_2)[0xb] == UNK_0011809b);
    auVar18[0xc] = -((*param_2)[0xc] == UNK_0011809c);
    auVar18[0xd] = -((*param_2)[0xd] == UNK_0011809d);
    auVar18[0xe] = -((*param_2)[0xe] == UNK_0011809e);
    auVar18[0xf] = -((*param_2)[0xf] == UNK_0011809f);
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
      *(undefined1 *)(param_1 + 1) = 0x1b;
      goto LAB_001439e0;
    }
    break;
  case 0x1b:
    auVar35[0] = -((*param_2)[0xb] == s_ax_position_ts_s_00117ff0[0]);
    auVar35[1] = -((*param_2)[0xc] == s_ax_position_ts_s_00117ff0[1]);
    auVar35[2] = -((*param_2)[0xd] == s_ax_position_ts_s_00117ff0[2]);
    auVar35[3] = -((*param_2)[0xe] == s_ax_position_ts_s_00117ff0[3]);
    auVar35[4] = -((*param_2)[0xf] == s_ax_position_ts_s_00117ff0[4]);
    auVar35[5] = -(param_2[1][0] == s_ax_position_ts_s_00117ff0[5]);
    auVar35[6] = -(param_2[1][1] == s_ax_position_ts_s_00117ff0[6]);
    auVar35[7] = -(param_2[1][2] == s_ax_position_ts_s_00117ff0[7]);
    auVar35[8] = -(param_2[1][3] == s_ax_position_ts_s_00117ff0[8]);
    auVar35[9] = -(param_2[1][4] == s_ax_position_ts_s_00117ff0[9]);
    auVar35[10] = -(param_2[1][5] == s_ax_position_ts_s_00117ff0[10]);
    auVar35[0xb] = -(param_2[1][6] == s_ax_position_ts_s_00117ff0[0xb]);
    auVar35[0xc] = -(param_2[1][7] == s_ax_position_ts_s_00117ff0[0xc]);
    auVar35[0xd] = -(param_2[1][8] == s_ax_position_ts_s_00117ff0[0xd]);
    auVar35[0xe] = -(param_2[1][9] == s_ax_position_ts_s_00117ff0[0xe]);
    auVar35[0xf] = -(param_2[1][10] == s_ax_position_ts_s_00117ff0[0xf]);
    auVar19[0] = -((*param_2)[0] == DAT_00118300);
    auVar19[1] = -((*param_2)[1] == UNK_00118301);
    auVar19[2] = -((*param_2)[2] == UNK_00118302);
    auVar19[3] = -((*param_2)[3] == UNK_00118303);
    auVar19[4] = -((*param_2)[4] == UNK_00118304);
    auVar19[5] = -((*param_2)[5] == UNK_00118305);
    auVar19[6] = -((*param_2)[6] == UNK_00118306);
    auVar19[7] = -((*param_2)[7] == UNK_00118307);
    auVar19[8] = -((*param_2)[8] == UNK_00118308);
    auVar19[9] = -((*param_2)[9] == UNK_00118309);
    auVar19[10] = -((*param_2)[10] == UNK_0011830a);
    auVar19[0xb] = -((*param_2)[0xb] == UNK_0011830b);
    auVar19[0xc] = -((*param_2)[0xc] == UNK_0011830c);
    auVar19[0xd] = -((*param_2)[0xd] == UNK_0011830d);
    auVar19[0xe] = -((*param_2)[0xe] == UNK_0011830e);
    auVar19[0xf] = -((*param_2)[0xf] == UNK_0011830f);
    auVar19 = auVar19 & auVar35;
    if ((ushort)((ushort)(SUB161(auVar19 >> 7,0) & 1) | (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
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
      *(undefined1 *)(param_1 + 1) = 0x16;
      goto LAB_001439e0;
    }
    break;
  case 0x1d:
    auVar36[0] = -((*param_2)[0xd] == s_ax_position_ts_s_00117ff0[0]);
    auVar36[1] = -((*param_2)[0xe] == s_ax_position_ts_s_00117ff0[1]);
    auVar36[2] = -((*param_2)[0xf] == s_ax_position_ts_s_00117ff0[2]);
    auVar36[3] = -(param_2[1][0] == s_ax_position_ts_s_00117ff0[3]);
    auVar36[4] = -(param_2[1][1] == s_ax_position_ts_s_00117ff0[4]);
    auVar36[5] = -(param_2[1][2] == s_ax_position_ts_s_00117ff0[5]);
    auVar36[6] = -(param_2[1][3] == s_ax_position_ts_s_00117ff0[6]);
    auVar36[7] = -(param_2[1][4] == s_ax_position_ts_s_00117ff0[7]);
    auVar36[8] = -(param_2[1][5] == s_ax_position_ts_s_00117ff0[8]);
    auVar36[9] = -(param_2[1][6] == s_ax_position_ts_s_00117ff0[9]);
    auVar36[10] = -(param_2[1][7] == s_ax_position_ts_s_00117ff0[10]);
    auVar36[0xb] = -(param_2[1][8] == s_ax_position_ts_s_00117ff0[0xb]);
    auVar36[0xc] = -(param_2[1][9] == s_ax_position_ts_s_00117ff0[0xc]);
    auVar36[0xd] = -(param_2[1][10] == s_ax_position_ts_s_00117ff0[0xd]);
    auVar36[0xe] = -(param_2[1][0xb] == s_ax_position_ts_s_00117ff0[0xe]);
    auVar36[0xf] = -(param_2[1][0xc] == s_ax_position_ts_s_00117ff0[0xf]);
    auVar20[0] = -((*param_2)[0] == DAT_00118650);
    auVar20[1] = -((*param_2)[1] == UNK_00118651);
    auVar20[2] = -((*param_2)[2] == UNK_00118652);
    auVar20[3] = -((*param_2)[3] == UNK_00118653);
    auVar20[4] = -((*param_2)[4] == UNK_00118654);
    auVar20[5] = -((*param_2)[5] == UNK_00118655);
    auVar20[6] = -((*param_2)[6] == UNK_00118656);
    auVar20[7] = -((*param_2)[7] == UNK_00118657);
    auVar20[8] = -((*param_2)[8] == UNK_00118658);
    auVar20[9] = -((*param_2)[9] == UNK_00118659);
    auVar20[10] = -((*param_2)[10] == UNK_0011865a);
    auVar20[0xb] = -((*param_2)[0xb] == UNK_0011865b);
    auVar20[0xc] = -((*param_2)[0xc] == UNK_0011865c);
    auVar20[0xd] = -((*param_2)[0xd] == UNK_0011865d);
    auVar20[0xe] = -((*param_2)[0xe] == UNK_0011865e);
    auVar20[0xf] = -((*param_2)[0xf] == UNK_0011865f);
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
      *(undefined1 *)(param_1 + 1) = 0x19;
      goto LAB_001439e0;
    }
    iVar5 = (*(code *)PTR_bcmp_001e7990)(param_2,"pair_target_holding_period_ms",param_3);
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x1f;
      goto LAB_001439e0;
    }
    break;
  case 0x1e:
    auVar37[0] = -((*param_2)[0xe] == DAT_00118460);
    auVar37[1] = -((*param_2)[0xf] == UNK_00118461);
    auVar37[2] = -(param_2[1][0] == UNK_00118462);
    auVar37[3] = -(param_2[1][1] == UNK_00118463);
    auVar37[4] = -(param_2[1][2] == UNK_00118464);
    auVar37[5] = -(param_2[1][3] == UNK_00118465);
    auVar37[6] = -(param_2[1][4] == UNK_00118466);
    auVar37[7] = -(param_2[1][5] == UNK_00118467);
    auVar37[8] = -(param_2[1][6] == UNK_00118468);
    auVar37[9] = -(param_2[1][7] == UNK_00118469);
    auVar37[10] = -(param_2[1][8] == UNK_0011846a);
    auVar37[0xb] = -(param_2[1][9] == UNK_0011846b);
    auVar37[0xc] = -(param_2[1][10] == UNK_0011846c);
    auVar37[0xd] = -(param_2[1][0xb] == UNK_0011846d);
    auVar37[0xe] = -(param_2[1][0xc] == UNK_0011846e);
    auVar37[0xf] = -(param_2[1][0xd] == UNK_0011846f);
    auVar21[0] = -((*param_2)[0] == DAT_00118670);
    auVar21[1] = -((*param_2)[1] == UNK_00118671);
    auVar21[2] = -((*param_2)[2] == UNK_00118672);
    auVar21[3] = -((*param_2)[3] == UNK_00118673);
    auVar21[4] = -((*param_2)[4] == UNK_00118674);
    auVar21[5] = -((*param_2)[5] == UNK_00118675);
    auVar21[6] = -((*param_2)[6] == UNK_00118676);
    auVar21[7] = -((*param_2)[7] == UNK_00118677);
    auVar21[8] = -((*param_2)[8] == UNK_00118678);
    auVar21[9] = -((*param_2)[9] == UNK_00118679);
    auVar21[10] = -((*param_2)[10] == UNK_0011867a);
    auVar21[0xb] = -((*param_2)[0xb] == UNK_0011867b);
    auVar21[0xc] = -((*param_2)[0xc] == UNK_0011867c);
    auVar21[0xd] = -((*param_2)[0xd] == UNK_0011867d);
    auVar21[0xe] = -((*param_2)[0xe] == UNK_0011867e);
    auVar21[0xf] = -((*param_2)[0xf] == UNK_0011867f);
    auVar21 = auVar21 & auVar37;
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
      *(undefined1 *)(param_1 + 1) = 0x1c;
      goto LAB_001439e0;
    }
    break;
  case 0x21:
    iVar5 = (*(code *)PTR_bcmp_001e7990)
                      (param_2,
                       "dyn_score_position_ts_threshold_sdyn_score_max_position_ts_sdyn_score_delta_score"
                       ,0x21);
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x15;
      goto LAB_001439e0;
    }
    break;
  case 0x22:
    iVar5 = (*(code *)PTR_bcmp_001e7990)
                      (param_2,"max_maker_limit_rate_bias_from_midpair_rolling_window_ms",0x22);
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x1d;
      goto LAB_001439e0;
    }
    break;
  case 0x23:
    iVar5 = (*(code *)PTR_bcmp_001e7990)
                      (param_2,"dyn_pending_position_ts_threshold_sdyn_pending_max_position_ts_s",
                       0x23);
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x18;
      goto LAB_001439e0;
    }
    iVar5 = (*(code *)PTR_bcmp_001e7990)
                      (param_2,
                       "dyn_pending_delta_max_pending_ts_msorder_max_pending_time_msmax_maker_pending_vol_on_depth"
                       ,0x23);
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x1a;
      goto LAB_001439e0;
    }
  }
  if (bVar2) {
    iVar5 = (*(code *)PTR_bcmp_001e7990)(param_2,"score_thresholds_num",param_3);
    bVar4 = true;
    bVar2 = true;
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x21;
      goto LAB_001439e0;
    }
  }
  else {
    bVar4 = false;
    bVar2 = false;
  }
  if (bVar3) {
    iVar5 = (*(code *)PTR_bcmp_001e7990)(param_2,"signal_all",param_3);
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x22;
      goto LAB_001439e0;
    }
    iVar5 = (*(code *)PTR_bcmp_001e7990)
                      (param_2,"touch_gatetouch_gate_timeout_msbook_vol_cap",param_3);
    bVar2 = bVar4;
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x23;
      goto LAB_001439e0;
    }
  }
  if ((param_3 == 0xc) &&
     (*(int *)(*param_2 + 8) == 0x7061635f && *(long *)*param_2 == 0x6c6f765f6b6f6f62)) {
    *(undefined1 *)(param_1 + 1) = 0x25;
  }
  else if (bVar2) {
    iVar5 = (*(code *)PTR_bcmp_001e7990)(param_2,"max_single_taker_vol",param_3);
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x26;
    }
    else {
      *(undefined1 *)(param_1 + 1) = 0x27;
    }
  }
  else {
LAB_00143941:
    *(undefined1 *)(param_1 + 1) = 0x27;
  }
LAB_001439e0:
  *param_1 = 2;
  return param_1;
}


