// ELF address 0x00000000000490a0; <strategy_comm2::_::<impl serde_core::de::Deserialize for strategy_comm2::Comm2Params>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_str

/* _<strategy_comm2::_::<impl serde_core::de::Deserialize for
   strategy_comm2::Comm2Params>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_str
    */

void __rustcall
_<strategy_comm2::_::<impl_serde_core::de::Deserialize_for_strategy_comm2::Comm2Params>::deserialize::__FieldVisitor_as_serde_core::de::Visitor>
::visit_str(undefined8 *param_1,undefined1 (*param_2) [16],long param_3)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
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
  
  bVar2 = false;
  switch(param_3) {
  case 8:
    if (*(long *)*param_2 == 0x656c69746e617571) {
      *(undefined1 *)(param_1 + 1) = 5;
      goto LAB_00149789;
    }
    break;
  case 9:
    if ((*param_2)[8] == 'a' && *(long *)*param_2 == 0x68706c615f317670) {
      *(undefined1 *)(param_1 + 1) = 1;
      goto LAB_00149789;
    }
    if ((*param_2)[8] == 'e' && *(long *)*param_2 == 0x7461725f65746f76) {
      *(undefined1 *)(param_1 + 1) = 4;
      goto LAB_00149789;
    }
    break;
  case 10:
    if (*(short *)(*param_2 + 8) == 0x6168 && *(long *)*param_2 == 0x706c615f74736f63) {
      *(undefined1 *)(param_1 + 1) = 2;
      goto LAB_00149789;
    }
    if (*(short *)(*param_2 + 8) == 0x6574 && *(long *)*param_2 == 0x61675f6863756f74) {
      *(undefined1 *)(param_1 + 1) = 0xc;
      goto LAB_00149789;
    }
    break;
  case 0xb:
    if (*(long *)(*param_2 + 3) == 0x65646f6d5f6c616e && *(long *)*param_2 == 0x6d5f6c616e676973) {
      *(undefined1 *)(param_1 + 1) = 0;
      goto LAB_00149789;
    }
    break;
  default:
    goto switchD_001490c8_caseD_c;
  case 0xe:
    if (*(long *)(*param_2 + 6) == 0x657461725f72656b && *(long *)*param_2 == 0x656b61745f78616d) {
      *(undefined1 *)(param_1 + 1) = 9;
      goto LAB_00149789;
    }
    if (*(long *)(*param_2 + 6) == 0x7972657070696c73 && *(long *)*param_2 == 0x6c735f6564617274) {
      *(undefined1 *)(param_1 + 1) = 10;
      goto LAB_00149789;
    }
    break;
  case 0x10:
    auVar5[0] = -((*param_2)[0] == DAT_00116dc0);
    auVar5[1] = -((*param_2)[1] == UNK_00116dc1);
    auVar5[2] = -((*param_2)[2] == UNK_00116dc2);
    auVar5[3] = -((*param_2)[3] == UNK_00116dc3);
    auVar5[4] = -((*param_2)[4] == UNK_00116dc4);
    auVar5[5] = -((*param_2)[5] == UNK_00116dc5);
    auVar5[6] = -((*param_2)[6] == UNK_00116dc6);
    auVar5[7] = -((*param_2)[7] == UNK_00116dc7);
    auVar5[8] = -((*param_2)[8] == UNK_00116dc8);
    auVar5[9] = -((*param_2)[9] == UNK_00116dc9);
    auVar5[10] = -((*param_2)[10] == UNK_00116dca);
    auVar5[0xb] = -((*param_2)[0xb] == UNK_00116dcb);
    auVar5[0xc] = -((*param_2)[0xc] == UNK_00116dcc);
    auVar5[0xd] = -((*param_2)[0xd] == UNK_00116dcd);
    auVar5[0xe] = -((*param_2)[0xe] == UNK_00116dce);
    auVar5[0xf] = -((*param_2)[0xf] == UNK_00116dcf);
    if ((ushort)((ushort)(SUB161(auVar5 >> 7,0) & 1) | (ushort)(SUB161(auVar5 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar5 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar5 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar5 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar5 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar5 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar5 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar5 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar5 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar5 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar5 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar5 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar5 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar5 >> 0x77,0) & 1) << 0xe | (ushort)(auVar5[0xf] >> 7) << 0xf)
        == 0xffff) {
      *(undefined1 *)(param_1 + 1) = 6;
      goto LAB_00149789;
    }
    break;
  case 0x12:
    auVar7[0] = -((*param_2)[0] == DAT_00116e80);
    auVar7[1] = -((*param_2)[1] == UNK_00116e81);
    auVar7[2] = -((*param_2)[2] == UNK_00116e82);
    auVar7[3] = -((*param_2)[3] == UNK_00116e83);
    auVar7[4] = -((*param_2)[4] == UNK_00116e84);
    auVar7[5] = -((*param_2)[5] == UNK_00116e85);
    auVar7[6] = -((*param_2)[6] == UNK_00116e86);
    auVar7[7] = -((*param_2)[7] == UNK_00116e87);
    auVar7[8] = -((*param_2)[8] == UNK_00116e88);
    auVar7[9] = -((*param_2)[9] == UNK_00116e89);
    auVar7[10] = -((*param_2)[10] == UNK_00116e8a);
    auVar7[0xb] = -((*param_2)[0xb] == UNK_00116e8b);
    auVar7[0xc] = -((*param_2)[0xc] == UNK_00116e8c);
    auVar7[0xd] = -((*param_2)[0xd] == UNK_00116e8d);
    auVar7[0xe] = -((*param_2)[0xe] == UNK_00116e8e);
    auVar7[0xf] = -((*param_2)[0xf] == UNK_00116e8f);
    auVar20[0] = -((char)*(undefined2 *)param_2[1] == s_ol_00116b30[0]);
    auVar20[1] = -((char)((ushort)*(undefined2 *)param_2[1] >> 8) == s_ol_00116b30[1]);
    auVar20[2] = -(s_ol_00116b30[2] == '\0');
    auVar20[3] = -(s_ol_00116b30[3] == '\0');
    auVar20[4] = -(UNK_00116b34 == '\0');
    auVar20[5] = -(UNK_00116b35 == '\0');
    auVar20[6] = -(UNK_00116b36 == '\0');
    auVar20[7] = -(UNK_00116b37 == '\0');
    auVar20[8] = -(UNK_00116b38 == '\0');
    auVar20[9] = -(UNK_00116b39 == '\0');
    auVar20[10] = -(UNK_00116b3a == '\0');
    auVar20[0xb] = -(UNK_00116b3b == '\0');
    auVar20[0xc] = -(UNK_00116b3c == '\0');
    auVar20[0xd] = -(UNK_00116b3d == '\0');
    auVar20[0xe] = -(UNK_00116b3e == '\0');
    auVar20[0xf] = -(UNK_00116b3f == '\0');
    auVar20 = auVar20 & auVar7;
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
      *(undefined1 *)(param_1 + 1) = 0xe;
      goto LAB_00149789;
    }
    auVar8[0] = -((*param_2)[0] == DAT_00116dd0);
    auVar8[1] = -((*param_2)[1] == UNK_00116dd1);
    auVar8[2] = -((*param_2)[2] == UNK_00116dd2);
    auVar8[3] = -((*param_2)[3] == UNK_00116dd3);
    auVar8[4] = -((*param_2)[4] == UNK_00116dd4);
    auVar8[5] = -((*param_2)[5] == UNK_00116dd5);
    auVar8[6] = -((*param_2)[6] == UNK_00116dd6);
    auVar8[7] = -((*param_2)[7] == UNK_00116dd7);
    auVar8[8] = -((*param_2)[8] == UNK_00116dd8);
    auVar8[9] = -((*param_2)[9] == UNK_00116dd9);
    auVar8[10] = -((*param_2)[10] == UNK_00116dda);
    auVar8[0xb] = -((*param_2)[0xb] == UNK_00116ddb);
    auVar8[0xc] = -((*param_2)[0xc] == UNK_00116ddc);
    auVar8[0xd] = -((*param_2)[0xd] == UNK_00116ddd);
    auVar8[0xe] = -((*param_2)[0xe] == UNK_00116dde);
    auVar8[0xf] = -((*param_2)[0xf] == UNK_00116ddf);
    auVar21[0] = -((char)*(undefined2 *)param_2[1] == DAT_001170d0);
    auVar21[1] = -((char)((ushort)*(undefined2 *)param_2[1] >> 8) == UNK_001170d1);
    auVar21[2] = -(UNK_001170d2 == '\0');
    auVar21[3] = -(UNK_001170d3 == '\0');
    auVar21[4] = -(UNK_001170d4 == '\0');
    auVar21[5] = -(UNK_001170d5 == '\0');
    auVar21[6] = -(UNK_001170d6 == '\0');
    auVar21[7] = -(UNK_001170d7 == '\0');
    auVar21[8] = -(UNK_001170d8 == '\0');
    auVar21[9] = -(UNK_001170d9 == '\0');
    auVar21[10] = -(UNK_001170da == '\0');
    auVar21[0xb] = -(UNK_001170db == '\0');
    auVar21[0xc] = -(UNK_001170dc == '\0');
    auVar21[0xd] = -(UNK_001170dd == '\0');
    auVar21[0xe] = -(UNK_001170de == '\0');
    auVar21[0xf] = -(UNK_001170df == '\0');
    auVar21 = auVar21 & auVar8;
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
      *(undefined1 *)(param_1 + 1) = 0xf;
      goto LAB_00149789;
    }
    auVar9[0] = -((*param_2)[0] == s_max_single_net_v_00116e00[0]);
    auVar9[1] = -((*param_2)[1] == s_max_single_net_v_00116e00[1]);
    auVar9[2] = -((*param_2)[2] == s_max_single_net_v_00116e00[2]);
    auVar9[3] = -((*param_2)[3] == s_max_single_net_v_00116e00[3]);
    auVar9[4] = -((*param_2)[4] == s_max_single_net_v_00116e00[4]);
    auVar9[5] = -((*param_2)[5] == s_max_single_net_v_00116e00[5]);
    auVar9[6] = -((*param_2)[6] == s_max_single_net_v_00116e00[6]);
    auVar9[7] = -((*param_2)[7] == s_max_single_net_v_00116e00[7]);
    auVar9[8] = -((*param_2)[8] == s_max_single_net_v_00116e00[8]);
    auVar9[9] = -((*param_2)[9] == s_max_single_net_v_00116e00[9]);
    auVar9[10] = -((*param_2)[10] == s_max_single_net_v_00116e00[10]);
    auVar9[0xb] = -((*param_2)[0xb] == s_max_single_net_v_00116e00[0xb]);
    auVar9[0xc] = -((*param_2)[0xc] == s_max_single_net_v_00116e00[0xc]);
    auVar9[0xd] = -((*param_2)[0xd] == s_max_single_net_v_00116e00[0xd]);
    auVar9[0xe] = -((*param_2)[0xe] == s_max_single_net_v_00116e00[0xe]);
    auVar9[0xf] = -((*param_2)[0xf] == s_max_single_net_v_00116e00[0xf]);
    auVar22[0] = -((char)*(undefined2 *)param_2[1] == s_ol_00116b30[0]);
    auVar22[1] = -((char)((ushort)*(undefined2 *)param_2[1] >> 8) == s_ol_00116b30[1]);
    auVar22[2] = -(s_ol_00116b30[2] == '\0');
    auVar22[3] = -(s_ol_00116b30[3] == '\0');
    auVar22[4] = -(UNK_00116b34 == '\0');
    auVar22[5] = -(UNK_00116b35 == '\0');
    auVar22[6] = -(UNK_00116b36 == '\0');
    auVar22[7] = -(UNK_00116b37 == '\0');
    auVar22[8] = -(UNK_00116b38 == '\0');
    auVar22[9] = -(UNK_00116b39 == '\0');
    auVar22[10] = -(UNK_00116b3a == '\0');
    auVar22[0xb] = -(UNK_00116b3b == '\0');
    auVar22[0xc] = -(UNK_00116b3c == '\0');
    auVar22[0xd] = -(UNK_00116b3d == '\0');
    auVar22[0xe] = -(UNK_00116b3e == '\0');
    auVar22[0xf] = -(UNK_00116b3f == '\0');
    auVar22 = auVar22 & auVar9;
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
      *(undefined1 *)(param_1 + 1) = 0x10;
      goto LAB_00149789;
    }
    auVar10[0] = -((*param_2)[0] == s_max_single_net_a_00116f50[0]);
    auVar10[1] = -((*param_2)[1] == s_max_single_net_a_00116f50[1]);
    auVar10[2] = -((*param_2)[2] == s_max_single_net_a_00116f50[2]);
    auVar10[3] = -((*param_2)[3] == s_max_single_net_a_00116f50[3]);
    auVar10[4] = -((*param_2)[4] == s_max_single_net_a_00116f50[4]);
    auVar10[5] = -((*param_2)[5] == s_max_single_net_a_00116f50[5]);
    auVar10[6] = -((*param_2)[6] == s_max_single_net_a_00116f50[6]);
    auVar10[7] = -((*param_2)[7] == s_max_single_net_a_00116f50[7]);
    auVar10[8] = -((*param_2)[8] == s_max_single_net_a_00116f50[8]);
    auVar10[9] = -((*param_2)[9] == s_max_single_net_a_00116f50[9]);
    auVar10[10] = -((*param_2)[10] == s_max_single_net_a_00116f50[10]);
    auVar10[0xb] = -((*param_2)[0xb] == s_max_single_net_a_00116f50[0xb]);
    auVar10[0xc] = -((*param_2)[0xc] == s_max_single_net_a_00116f50[0xc]);
    auVar10[0xd] = -((*param_2)[0xd] == s_max_single_net_a_00116f50[0xd]);
    auVar10[0xe] = -((*param_2)[0xe] == s_max_single_net_a_00116f50[0xe]);
    auVar10[0xf] = -((*param_2)[0xf] == s_max_single_net_a_00116f50[0xf]);
    auVar23[0] = -((char)*(undefined2 *)param_2[1] == DAT_001170d0);
    auVar23[1] = -((char)((ushort)*(undefined2 *)param_2[1] >> 8) == UNK_001170d1);
    auVar23[2] = -(UNK_001170d2 == '\0');
    auVar23[3] = -(UNK_001170d3 == '\0');
    auVar23[4] = -(UNK_001170d4 == '\0');
    auVar23[5] = -(UNK_001170d5 == '\0');
    auVar23[6] = -(UNK_001170d6 == '\0');
    auVar23[7] = -(UNK_001170d7 == '\0');
    auVar23[8] = -(UNK_001170d8 == '\0');
    auVar23[9] = -(UNK_001170d9 == '\0');
    auVar23[10] = -(UNK_001170da == '\0');
    auVar23[0xb] = -(UNK_001170db == '\0');
    auVar23[0xc] = -(UNK_001170dc == '\0');
    auVar23[0xd] = -(UNK_001170dd == '\0');
    auVar23[0xe] = -(UNK_001170de == '\0');
    auVar23[0xf] = -(UNK_001170df == '\0');
    auVar23 = auVar23 & auVar10;
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
      *(undefined1 *)(param_1 + 1) = 0x11;
      goto LAB_00149789;
    }
    iVar3 = (*(code *)PTR_bcmp_001d5ce8)(param_2,"rolling_windows_mssplit_high_low_ratio_threshold")
    ;
    if (iVar3 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x21;
      goto LAB_00149789;
    }
    goto LAB_0014974a;
  case 0x13:
    auVar24[0] = -((*param_2)[3] == DAT_00116b50);
    auVar24[1] = -((*param_2)[4] == UNK_00116b51);
    auVar24[2] = -((*param_2)[5] == UNK_00116b52);
    auVar24[3] = -((*param_2)[6] == UNK_00116b53);
    auVar24[4] = -((*param_2)[7] == UNK_00116b54);
    auVar24[5] = -((*param_2)[8] == UNK_00116b55);
    auVar24[6] = -((*param_2)[9] == UNK_00116b56);
    auVar24[7] = -((*param_2)[10] == UNK_00116b57);
    auVar24[8] = -((*param_2)[0xb] == UNK_00116b58);
    auVar24[9] = -((*param_2)[0xc] == UNK_00116b59);
    auVar24[10] = -((*param_2)[0xd] == UNK_00116b5a);
    auVar24[0xb] = -((*param_2)[0xe] == UNK_00116b5b);
    auVar24[0xc] = -((*param_2)[0xf] == UNK_00116b5c);
    auVar24[0xd] = -(param_2[1][0] == UNK_00116b5d);
    auVar24[0xe] = -(param_2[1][1] == UNK_00116b5e);
    auVar24[0xf] = -(param_2[1][2] == UNK_00116b5f);
    auVar11[0] = -((*param_2)[0] == s_signal_trigger_m_00116f60[0]);
    auVar11[1] = -((*param_2)[1] == s_signal_trigger_m_00116f60[1]);
    auVar11[2] = -((*param_2)[2] == s_signal_trigger_m_00116f60[2]);
    auVar11[3] = -((*param_2)[3] == s_signal_trigger_m_00116f60[3]);
    auVar11[4] = -((*param_2)[4] == s_signal_trigger_m_00116f60[4]);
    auVar11[5] = -((*param_2)[5] == s_signal_trigger_m_00116f60[5]);
    auVar11[6] = -((*param_2)[6] == s_signal_trigger_m_00116f60[6]);
    auVar11[7] = -((*param_2)[7] == s_signal_trigger_m_00116f60[7]);
    auVar11[8] = -((*param_2)[8] == s_signal_trigger_m_00116f60[8]);
    auVar11[9] = -((*param_2)[9] == s_signal_trigger_m_00116f60[9]);
    auVar11[10] = -((*param_2)[10] == s_signal_trigger_m_00116f60[10]);
    auVar11[0xb] = -((*param_2)[0xb] == s_signal_trigger_m_00116f60[0xb]);
    auVar11[0xc] = -((*param_2)[0xc] == s_signal_trigger_m_00116f60[0xc]);
    auVar11[0xd] = -((*param_2)[0xd] == s_signal_trigger_m_00116f60[0xd]);
    auVar11[0xe] = -((*param_2)[0xe] == s_signal_trigger_m_00116f60[0xe]);
    auVar11[0xf] = -((*param_2)[0xf] == s_signal_trigger_m_00116f60[0xf]);
    auVar11 = auVar11 & auVar24;
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
      *(undefined1 *)(param_1 + 1) = 3;
      goto LAB_00149789;
    }
    iVar3 = (*(code *)PTR_bcmp_001d5ce8)
                      (param_2,
                       "taker_rate_baselinemax_taker_ratetrade_slipperyclose_position_block_mstouch_gatetouch_gate_timeout_msmax_single_add_volmax_single_add_amtmax_single_net_volmax_single_net_amtmax_single_close_volmax_single_close_amt"
                      );
    if (iVar3 == 0) {
      *(undefined1 *)(param_1 + 1) = 8;
      goto LAB_00149789;
    }
    iVar3 = (*(code *)PTR_bcmp_001d5ce8)(param_2,"long_open_threshold",param_3);
    if (iVar3 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x14;
      goto LAB_00149789;
    }
    bVar2 = false;
    goto switchD_001490c8_caseD_c;
  case 0x14:
    uVar1 = *(undefined4 *)param_2[1];
    auVar26[0] = -((char)uVar1 == DAT_00116af0);
    auVar26[1] = -((char)((uint)uVar1 >> 8) == UNK_00116af1);
    auVar26[2] = -((char)((uint)uVar1 >> 0x10) == UNK_00116af2);
    auVar26[3] = -((char)((uint)uVar1 >> 0x18) == UNK_00116af3);
    auVar26[4] = -(UNK_00116af4 == '\0');
    auVar26[5] = -(UNK_00116af5 == '\0');
    auVar26[6] = -(UNK_00116af6 == '\0');
    auVar26[7] = -(UNK_00116af7 == '\0');
    auVar26[8] = -(UNK_00116af8 == '\0');
    auVar26[9] = -(UNK_00116af9 == '\0');
    auVar26[10] = -(UNK_00116afa == '\0');
    auVar26[0xb] = -(UNK_00116afb == '\0');
    auVar26[0xc] = -(UNK_00116afc == '\0');
    auVar26[0xd] = -(UNK_00116afd == '\0');
    auVar26[0xe] = -(UNK_00116afe == '\0');
    auVar26[0xf] = -(UNK_00116aff == '\0');
    auVar13[0] = -((*param_2)[0] == DAT_00116c80);
    auVar13[1] = -((*param_2)[1] == UNK_00116c81);
    auVar13[2] = -((*param_2)[2] == UNK_00116c82);
    auVar13[3] = -((*param_2)[3] == UNK_00116c83);
    auVar13[4] = -((*param_2)[4] == UNK_00116c84);
    auVar13[5] = -((*param_2)[5] == UNK_00116c85);
    auVar13[6] = -((*param_2)[6] == UNK_00116c86);
    auVar13[7] = -((*param_2)[7] == UNK_00116c87);
    auVar13[8] = -((*param_2)[8] == UNK_00116c88);
    auVar13[9] = -((*param_2)[9] == UNK_00116c89);
    auVar13[10] = -((*param_2)[10] == UNK_00116c8a);
    auVar13[0xb] = -((*param_2)[0xb] == UNK_00116c8b);
    auVar13[0xc] = -((*param_2)[0xc] == UNK_00116c8c);
    auVar13[0xd] = -((*param_2)[0xd] == UNK_00116c8d);
    auVar13[0xe] = -((*param_2)[0xe] == UNK_00116c8e);
    auVar13[0xf] = -((*param_2)[0xf] == UNK_00116c8f);
    auVar13 = auVar13 & auVar26;
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
      *(undefined1 *)(param_1 + 1) = 0x12;
      goto LAB_00149789;
    }
    auVar6 = *param_2;
    uVar1 = *(undefined4 *)param_2[1];
    auVar32[0] = -((char)uVar1 == s__amt_00116d50[0]);
    auVar32[1] = -((char)((uint)uVar1 >> 8) == s__amt_00116d50[1]);
    auVar32[2] = -((char)((uint)uVar1 >> 0x10) == s__amt_00116d50[2]);
    auVar32[3] = -((char)((uint)uVar1 >> 0x18) == s__amt_00116d50[3]);
    auVar32[4] = -(s__amt_00116d50[4] == '\0');
    auVar32[5] = -(s__amt_00116d50[5] == '\0');
    auVar32[6] = -(s__amt_00116d50[6] == '\0');
    auVar32[7] = -(s__amt_00116d50[7] == '\0');
    auVar32[8] = -(UNK_00116d58 == '\0');
    auVar32[9] = -(UNK_00116d59 == '\0');
    auVar32[10] = -(UNK_00116d5a == '\0');
    auVar32[0xb] = -(UNK_00116d5b == '\0');
    auVar32[0xc] = -(UNK_00116d5c == '\0');
    auVar32[0xd] = -(UNK_00116d5d == '\0');
    auVar32[0xe] = -(UNK_00116d5e == '\0');
    auVar32[0xf] = -(UNK_00116d5f == '\0');
    auVar27[0] = -(auVar6[0] == 'm');
    auVar27[1] = -(auVar6[1] == 'a');
    auVar27[2] = -(auVar6[2] == 'x');
    auVar27[3] = -(auVar6[3] == '_');
    auVar27[4] = -(auVar6[4] == 's');
    auVar27[5] = -(auVar6[5] == 'i');
    auVar27[6] = -(auVar6[6] == 'n');
    auVar27[7] = -(auVar6[7] == 'g');
    auVar27[8] = -(auVar6[8] == 'l');
    auVar27[9] = -(auVar6[9] == 'e');
    auVar27[10] = -(auVar6[10] == '_');
    auVar27[0xb] = -(auVar6[0xb] == 'c');
    auVar27[0xc] = -(auVar6[0xc] == 'l');
    auVar27[0xd] = -(auVar6[0xd] == 'o');
    auVar27[0xe] = -(auVar6[0xe] == 's');
    auVar27[0xf] = -(auVar6[0xf] == 'e');
    auVar32 = auVar32 & auVar27;
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
      *(undefined1 *)(param_1 + 1) = 0x13;
      goto LAB_00149789;
    }
    iVar3 = (*(code *)PTR_bcmp_001d5ce8)(param_2,"long_close_threshold");
    if (iVar3 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x15;
      goto LAB_00149789;
    }
    iVar3 = (*(code *)PTR_bcmp_001d5ce8)(param_2,"short_open_threshold",param_3);
    bVar2 = true;
    if (iVar3 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x16;
      goto LAB_00149789;
    }
switchD_001490c8_caseD_c:
    switch(param_3) {
    case 0x1b:
      auVar28[0] = -((*param_2)[0xb] == DAT_00116ad0);
      auVar28[1] = -((*param_2)[0xc] == UNK_00116ad1);
      auVar28[2] = -((*param_2)[0xd] == UNK_00116ad2);
      auVar28[3] = -((*param_2)[0xe] == UNK_00116ad3);
      auVar28[4] = -((*param_2)[0xf] == UNK_00116ad4);
      auVar28[5] = -(param_2[1][0] == UNK_00116ad5);
      auVar28[6] = -(param_2[1][1] == UNK_00116ad6);
      auVar28[7] = -(param_2[1][2] == UNK_00116ad7);
      auVar28[8] = -(param_2[1][3] == UNK_00116ad8);
      auVar28[9] = -(param_2[1][4] == UNK_00116ad9);
      auVar28[10] = -(param_2[1][5] == UNK_00116ada);
      auVar28[0xb] = -(param_2[1][6] == UNK_00116adb);
      auVar28[0xc] = -(param_2[1][7] == UNK_00116adc);
      auVar28[0xd] = -(param_2[1][8] == UNK_00116add);
      auVar28[0xe] = -(param_2[1][9] == UNK_00116ade);
      auVar28[0xf] = -(param_2[1][10] == UNK_00116adf);
      auVar14[0] = -((*param_2)[0] == DAT_00116db0);
      auVar14[1] = -((*param_2)[1] == UNK_00116db1);
      auVar14[2] = -((*param_2)[2] == UNK_00116db2);
      auVar14[3] = -((*param_2)[3] == UNK_00116db3);
      auVar14[4] = -((*param_2)[4] == UNK_00116db4);
      auVar14[5] = -((*param_2)[5] == UNK_00116db5);
      auVar14[6] = -((*param_2)[6] == UNK_00116db6);
      auVar14[7] = -((*param_2)[7] == UNK_00116db7);
      auVar14[8] = -((*param_2)[8] == UNK_00116db8);
      auVar14[9] = -((*param_2)[9] == UNK_00116db9);
      auVar14[10] = -((*param_2)[10] == UNK_00116dba);
      auVar14[0xb] = -((*param_2)[0xb] == UNK_00116dbb);
      auVar14[0xc] = -((*param_2)[0xc] == UNK_00116dbc);
      auVar14[0xd] = -((*param_2)[0xd] == UNK_00116dbd);
      auVar14[0xe] = -((*param_2)[0xe] == UNK_00116dbe);
      auVar14[0xf] = -((*param_2)[0xf] == UNK_00116dbf);
      auVar14 = auVar14 & auVar28;
      if ((ushort)((ushort)(SUB161(auVar14 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar14 >> 0x17,0) & 1) << 2 |
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
        *(undefined1 *)(param_1 + 1) = 0x19;
        goto LAB_00149789;
      }
      auVar29[0] = -((*param_2)[0xb] == DAT_00116b60);
      auVar29[1] = -((*param_2)[0xc] == UNK_00116b61);
      auVar29[2] = -((*param_2)[0xd] == UNK_00116b62);
      auVar29[3] = -((*param_2)[0xe] == UNK_00116b63);
      auVar29[4] = -((*param_2)[0xf] == UNK_00116b64);
      auVar29[5] = -(param_2[1][0] == UNK_00116b65);
      auVar29[6] = -(param_2[1][1] == UNK_00116b66);
      auVar29[7] = -(param_2[1][2] == UNK_00116b67);
      auVar29[8] = -(param_2[1][3] == UNK_00116b68);
      auVar29[9] = -(param_2[1][4] == UNK_00116b69);
      auVar29[10] = -(param_2[1][5] == UNK_00116b6a);
      auVar29[0xb] = -(param_2[1][6] == UNK_00116b6b);
      auVar29[0xc] = -(param_2[1][7] == UNK_00116b6c);
      auVar29[0xd] = -(param_2[1][8] == UNK_00116b6d);
      auVar29[0xe] = -(param_2[1][9] == UNK_00116b6e);
      auVar29[0xf] = -(param_2[1][10] == UNK_00116b6f);
      auVar15[0] = -((*param_2)[0] == DAT_00117030);
      auVar15[1] = -((*param_2)[1] == UNK_00117031);
      auVar15[2] = -((*param_2)[2] == UNK_00117032);
      auVar15[3] = -((*param_2)[3] == UNK_00117033);
      auVar15[4] = -((*param_2)[4] == UNK_00117034);
      auVar15[5] = -((*param_2)[5] == UNK_00117035);
      auVar15[6] = -((*param_2)[6] == UNK_00117036);
      auVar15[7] = -((*param_2)[7] == UNK_00117037);
      auVar15[8] = -((*param_2)[8] == UNK_00117038);
      auVar15[9] = -((*param_2)[9] == UNK_00117039);
      auVar15[10] = -((*param_2)[10] == UNK_0011703a);
      auVar15[0xb] = -((*param_2)[0xb] == UNK_0011703b);
      auVar15[0xc] = -((*param_2)[0xc] == UNK_0011703c);
      auVar15[0xd] = -((*param_2)[0xd] == UNK_0011703d);
      auVar15[0xe] = -((*param_2)[0xe] == UNK_0011703e);
      auVar15[0xf] = -((*param_2)[0xf] == UNK_0011703f);
      auVar15 = auVar15 & auVar29;
      if ((ushort)((ushort)(SUB161(auVar15 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar15 >> 0x17,0) & 1) << 2 |
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
        *(undefined1 *)(param_1 + 1) = 0x1f;
        goto LAB_00149789;
      }
      goto LAB_00149694;
    default:
      if (bVar2) goto LAB_00149728;
      goto LAB_0014974a;
    case 0x1d:
      auVar30[0] = -((*param_2)[0xd] == DAT_00116ad0);
      auVar30[1] = -((*param_2)[0xe] == UNK_00116ad1);
      auVar30[2] = -((*param_2)[0xf] == UNK_00116ad2);
      auVar30[3] = -(param_2[1][0] == UNK_00116ad3);
      auVar30[4] = -(param_2[1][1] == UNK_00116ad4);
      auVar30[5] = -(param_2[1][2] == UNK_00116ad5);
      auVar30[6] = -(param_2[1][3] == UNK_00116ad6);
      auVar30[7] = -(param_2[1][4] == UNK_00116ad7);
      auVar30[8] = -(param_2[1][5] == UNK_00116ad8);
      auVar30[9] = -(param_2[1][6] == UNK_00116ad9);
      auVar30[10] = -(param_2[1][7] == UNK_00116ada);
      auVar30[0xb] = -(param_2[1][8] == UNK_00116adb);
      auVar30[0xc] = -(param_2[1][9] == UNK_00116adc);
      auVar30[0xd] = -(param_2[1][10] == UNK_00116add);
      auVar30[0xe] = -(param_2[1][0xb] == UNK_00116ade);
      auVar30[0xf] = -(param_2[1][0xc] == UNK_00116adf);
      auVar16[0] = -((*param_2)[0] == DAT_001170e0);
      auVar16[1] = -((*param_2)[1] == UNK_001170e1);
      auVar16[2] = -((*param_2)[2] == UNK_001170e2);
      auVar16[3] = -((*param_2)[3] == UNK_001170e3);
      auVar16[4] = -((*param_2)[4] == UNK_001170e4);
      auVar16[5] = -((*param_2)[5] == UNK_001170e5);
      auVar16[6] = -((*param_2)[6] == UNK_001170e6);
      auVar16[7] = -((*param_2)[7] == UNK_001170e7);
      auVar16[8] = -((*param_2)[8] == UNK_001170e8);
      auVar16[9] = -((*param_2)[9] == UNK_001170e9);
      auVar16[10] = -((*param_2)[10] == UNK_001170ea);
      auVar16[0xb] = -((*param_2)[0xb] == UNK_001170eb);
      auVar16[0xc] = -((*param_2)[0xc] == UNK_001170ec);
      auVar16[0xd] = -((*param_2)[0xd] == UNK_001170ed);
      auVar16[0xe] = -((*param_2)[0xe] == UNK_001170ee);
      auVar16[0xf] = -((*param_2)[0xf] == UNK_001170ef);
      auVar16 = auVar16 & auVar30;
      if ((ushort)((ushort)(SUB161(auVar16 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1 |
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
                  (ushort)(byte)(auVar16[0xf] >> 7) << 0xf) == 0xffff) {
        *(undefined1 *)(param_1 + 1) = 0x1c;
        goto LAB_00149789;
      }
LAB_00149694:
      if (!bVar2) goto LAB_00149786;
      goto LAB_00149728;
    case 0x21:
      iVar3 = (*(code *)PTR_bcmp_001d5ce8)
                        (param_2,"dyn_score_position_ts_threshold_sdyn_score_max_position_ts_s",0x21
                        );
      if (iVar3 == 0) {
        *(undefined1 *)(param_1 + 1) = 0x18;
        goto LAB_00149789;
      }
      break;
    case 0x23:
      iVar3 = (*(code *)PTR_bcmp_001d5ce8)
                        (param_2,"dyn_pending_position_ts_threshold_sdyn_pending_max_position_ts_s",
                         0x23);
      if (iVar3 == 0) {
        *(undefined1 *)(param_1 + 1) = 0x1b;
        goto LAB_00149789;
      }
      iVar3 = (*(code *)PTR_bcmp_001d5ce8)
                        (param_2,"dyn_pending_delta_max_pending_ts_msuse_dynamic_volspread_ratio",
                         0x23);
      if (iVar3 == 0) {
        *(undefined1 *)(param_1 + 1) = 0x1e;
        goto LAB_00149789;
      }
      break;
    case 0x25:
      iVar3 = (*(code *)PTR_bcmp_001d5ce8)(param_2,"dyn_pending_order_max_pending_time_ms",0x25);
      if (iVar3 == 0) {
        *(undefined1 *)(param_1 + 1) = 0x1d;
        goto LAB_00149789;
      }
    }
    if (bVar2) {
LAB_00149728:
      iVar3 = (*(code *)PTR_bcmp_001d5ce8)(param_2,"market_volatility_ms");
      if (iVar3 == 0) {
        *(undefined1 *)(param_1 + 1) = 0x20;
        goto LAB_00149789;
      }
LAB_0014974a:
      if (param_3 == 0x1e) {
        auVar31[0] = -((*param_2)[0xe] == DAT_00116d60);
        auVar31[1] = -((*param_2)[0xf] == UNK_00116d61);
        auVar31[2] = -(param_2[1][0] == UNK_00116d62);
        auVar31[3] = -(param_2[1][1] == UNK_00116d63);
        auVar31[4] = -(param_2[1][2] == UNK_00116d64);
        auVar31[5] = -(param_2[1][3] == UNK_00116d65);
        auVar31[6] = -(param_2[1][4] == UNK_00116d66);
        auVar31[7] = -(param_2[1][5] == UNK_00116d67);
        auVar31[8] = -(param_2[1][6] == UNK_00116d68);
        auVar31[9] = -(param_2[1][7] == UNK_00116d69);
        auVar31[10] = -(param_2[1][8] == UNK_00116d6a);
        auVar31[0xb] = -(param_2[1][9] == UNK_00116d6b);
        auVar31[0xc] = -(param_2[1][10] == UNK_00116d6c);
        auVar31[0xd] = -(param_2[1][0xb] == UNK_00116d6d);
        auVar31[0xe] = -(param_2[1][0xc] == UNK_00116d6e);
        auVar31[0xf] = -(param_2[1][0xd] == UNK_00116d6f);
        auVar17[0] = -((*param_2)[0] == DAT_00116c00);
        auVar17[1] = -((*param_2)[1] == UNK_00116c01);
        auVar17[2] = -((*param_2)[2] == UNK_00116c02);
        auVar17[3] = -((*param_2)[3] == UNK_00116c03);
        auVar17[4] = -((*param_2)[4] == UNK_00116c04);
        auVar17[5] = -((*param_2)[5] == UNK_00116c05);
        auVar17[6] = -((*param_2)[6] == UNK_00116c06);
        auVar17[7] = -((*param_2)[7] == UNK_00116c07);
        auVar17[8] = -((*param_2)[8] == UNK_00116c08);
        auVar17[9] = -((*param_2)[9] == UNK_00116c09);
        auVar17[10] = -((*param_2)[10] == UNK_00116c0a);
        auVar17[0xb] = -((*param_2)[0xb] == UNK_00116c0b);
        auVar17[0xc] = -((*param_2)[0xc] == UNK_00116c0c);
        auVar17[0xd] = -((*param_2)[0xd] == UNK_00116c0d);
        auVar17[0xe] = -((*param_2)[0xe] == UNK_00116c0e);
        auVar17[0xf] = -((*param_2)[0xf] == UNK_00116c0f);
        auVar17 = auVar17 & auVar31;
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
          *(undefined1 *)(param_1 + 1) = 0x22;
          goto LAB_00149789;
        }
      }
    }
    break;
  case 0x15:
    auVar25[0] = -((*param_2)[5] == DAT_00116ed0);
    auVar25[1] = -((*param_2)[6] == UNK_00116ed1);
    auVar25[2] = -((*param_2)[7] == UNK_00116ed2);
    auVar25[3] = -((*param_2)[8] == UNK_00116ed3);
    auVar25[4] = -((*param_2)[9] == UNK_00116ed4);
    auVar25[5] = -((*param_2)[10] == UNK_00116ed5);
    auVar25[6] = -((*param_2)[0xb] == UNK_00116ed6);
    auVar25[7] = -((*param_2)[0xc] == UNK_00116ed7);
    auVar25[8] = -((*param_2)[0xd] == UNK_00116ed8);
    auVar25[9] = -((*param_2)[0xe] == UNK_00116ed9);
    auVar25[10] = -((*param_2)[0xf] == UNK_00116eda);
    auVar25[0xb] = -(param_2[1][0] == UNK_00116edb);
    auVar25[0xc] = -(param_2[1][1] == UNK_00116edc);
    auVar25[0xd] = -(param_2[1][2] == UNK_00116edd);
    auVar25[0xe] = -(param_2[1][3] == UNK_00116ede);
    auVar25[0xf] = -(param_2[1][4] == UNK_00116edf);
    auVar12[0] = -((*param_2)[0] == DAT_00116bb0);
    auVar12[1] = -((*param_2)[1] == UNK_00116bb1);
    auVar12[2] = -((*param_2)[2] == UNK_00116bb2);
    auVar12[3] = -((*param_2)[3] == UNK_00116bb3);
    auVar12[4] = -((*param_2)[4] == UNK_00116bb4);
    auVar12[5] = -((*param_2)[5] == UNK_00116bb5);
    auVar12[6] = -((*param_2)[6] == UNK_00116bb6);
    auVar12[7] = -((*param_2)[7] == UNK_00116bb7);
    auVar12[8] = -((*param_2)[8] == UNK_00116bb8);
    auVar12[9] = -((*param_2)[9] == UNK_00116bb9);
    auVar12[10] = -((*param_2)[10] == UNK_00116bba);
    auVar12[0xb] = -((*param_2)[0xb] == UNK_00116bbb);
    auVar12[0xc] = -((*param_2)[0xc] == UNK_00116bbc);
    auVar12[0xd] = -((*param_2)[0xd] == UNK_00116bbd);
    auVar12[0xe] = -((*param_2)[0xe] == UNK_00116bbe);
    auVar12[0xf] = -((*param_2)[0xf] == UNK_00116bbf);
    auVar12 = auVar12 & auVar25;
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
      *(undefined1 *)(param_1 + 1) = 0xd;
      goto LAB_00149789;
    }
    iVar3 = (*(code *)PTR_bcmp_001d5ce8)(param_2,"short_close_threshold");
    if (iVar3 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x17;
      goto LAB_00149789;
    }
    iVar3 = (*(code *)PTR_bcmp_001d5ce8)(param_2,"dyn_score_delta_score",param_3);
    if (iVar3 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x1a;
      goto LAB_00149789;
    }
    goto LAB_0014974a;
  case 0x16:
    auVar18[0] = -((*param_2)[6] == DAT_00116b40);
    auVar18[1] = -((*param_2)[7] == UNK_00116b41);
    auVar18[2] = -((*param_2)[8] == UNK_00116b42);
    auVar18[3] = -((*param_2)[9] == UNK_00116b43);
    auVar18[4] = -((*param_2)[10] == UNK_00116b44);
    auVar18[5] = -((*param_2)[0xb] == UNK_00116b45);
    auVar18[6] = -((*param_2)[0xc] == UNK_00116b46);
    auVar18[7] = -((*param_2)[0xd] == UNK_00116b47);
    auVar18[8] = -((*param_2)[0xe] == UNK_00116b48);
    auVar18[9] = -((*param_2)[0xf] == UNK_00116b49);
    auVar18[10] = -(param_2[1][0] == UNK_00116b4a);
    auVar18[0xb] = -(param_2[1][1] == UNK_00116b4b);
    auVar18[0xc] = -(param_2[1][2] == UNK_00116b4c);
    auVar18[0xd] = -(param_2[1][3] == UNK_00116b4d);
    auVar18[0xe] = -(param_2[1][4] == UNK_00116b4e);
    auVar18[0xf] = -(param_2[1][5] == UNK_00116b4f);
    auVar4[0] = -((*param_2)[0] == DAT_00116ca0);
    auVar4[1] = -((*param_2)[1] == UNK_00116ca1);
    auVar4[2] = -((*param_2)[2] == UNK_00116ca2);
    auVar4[3] = -((*param_2)[3] == UNK_00116ca3);
    auVar4[4] = -((*param_2)[4] == UNK_00116ca4);
    auVar4[5] = -((*param_2)[5] == UNK_00116ca5);
    auVar4[6] = -((*param_2)[6] == UNK_00116ca6);
    auVar4[7] = -((*param_2)[7] == UNK_00116ca7);
    auVar4[8] = -((*param_2)[8] == UNK_00116ca8);
    auVar4[9] = -((*param_2)[9] == UNK_00116ca9);
    auVar4[10] = -((*param_2)[10] == UNK_00116caa);
    auVar4[0xb] = -((*param_2)[0xb] == UNK_00116cab);
    auVar4[0xc] = -((*param_2)[0xc] == UNK_00116cac);
    auVar4[0xd] = -((*param_2)[0xd] == UNK_00116cad);
    auVar4[0xe] = -((*param_2)[0xe] == UNK_00116cae);
    auVar4[0xf] = -((*param_2)[0xf] == UNK_00116caf);
    auVar4 = auVar4 & auVar18;
    if ((ushort)((ushort)(SUB161(auVar4 >> 7,0) & 1) | (ushort)(SUB161(auVar4 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar4 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar4 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar4 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar4 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar4 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar4 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar4 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar4 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar4 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar4 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar4 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar4 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar4 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar4[0xf] >> 7) << 0xf) == 0xffff) {
      *(undefined1 *)(param_1 + 1) = 7;
      goto LAB_00149789;
    }
    break;
  case 0x17:
    auVar19[0] = -((*param_2)[7] == DAT_00116f90);
    auVar19[1] = -((*param_2)[8] == UNK_00116f91);
    auVar19[2] = -((*param_2)[9] == UNK_00116f92);
    auVar19[3] = -((*param_2)[10] == UNK_00116f93);
    auVar19[4] = -((*param_2)[0xb] == UNK_00116f94);
    auVar19[5] = -((*param_2)[0xc] == UNK_00116f95);
    auVar19[6] = -((*param_2)[0xd] == UNK_00116f96);
    auVar19[7] = -((*param_2)[0xe] == UNK_00116f97);
    auVar19[8] = -((*param_2)[0xf] == UNK_00116f98);
    auVar19[9] = -(param_2[1][0] == UNK_00116f99);
    auVar19[10] = -(param_2[1][1] == UNK_00116f9a);
    auVar19[0xb] = -(param_2[1][2] == UNK_00116f9b);
    auVar19[0xc] = -(param_2[1][3] == UNK_00116f9c);
    auVar19[0xd] = -(param_2[1][4] == UNK_00116f9d);
    auVar19[0xe] = -(param_2[1][5] == UNK_00116f9e);
    auVar19[0xf] = -(param_2[1][6] == UNK_00116f9f);
    auVar6[0] = -((*param_2)[0] == DAT_00116bf0);
    auVar6[1] = -((*param_2)[1] == UNK_00116bf1);
    auVar6[2] = -((*param_2)[2] == UNK_00116bf2);
    auVar6[3] = -((*param_2)[3] == UNK_00116bf3);
    auVar6[4] = -((*param_2)[4] == UNK_00116bf4);
    auVar6[5] = -((*param_2)[5] == UNK_00116bf5);
    auVar6[6] = -((*param_2)[6] == UNK_00116bf6);
    auVar6[7] = -((*param_2)[7] == UNK_00116bf7);
    auVar6[8] = -((*param_2)[8] == UNK_00116bf8);
    auVar6[9] = -((*param_2)[9] == UNK_00116bf9);
    auVar6[10] = -((*param_2)[10] == UNK_00116bfa);
    auVar6[0xb] = -((*param_2)[0xb] == UNK_00116bfb);
    auVar6[0xc] = -((*param_2)[0xc] == UNK_00116bfc);
    auVar6[0xd] = -((*param_2)[0xd] == UNK_00116bfd);
    auVar6[0xe] = -((*param_2)[0xe] == UNK_00116bfe);
    auVar6[0xf] = -((*param_2)[0xf] == UNK_00116bff);
    auVar6 = auVar6 & auVar19;
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
      *(undefined1 *)(param_1 + 1) = 0xb;
      goto LAB_00149789;
    }
  }
LAB_00149786:
  *(undefined1 *)(param_1 + 1) = 0x23;
LAB_00149789:
  *param_1 = 2;
  return;
}


