// ELF address 0x0000000000049780; <strategy_sm1::_::<impl serde_core::de::Deserialize for strategy_sm1::SM1Params>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_str

/* _<strategy_sm1::_::<impl serde_core::de::Deserialize for
   strategy_sm1::SM1Params>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_str */

undefined8 * __rustcall
_<strategy_sm1::_::<impl_serde_core::de::Deserialize_for_strategy_sm1::SM1Params>::deserialize::__FieldVisitor_as_serde_core::de::Visitor>
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
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = false;
  switch(param_3) {
  case 8:
    if (*(long *)*param_2 == 0x656c69746e617571) {
      *(undefined1 *)(param_1 + 1) = 5;
      goto LAB_00149dfb;
    }
    break;
  case 9:
    if ((*param_2)[8] == 'a' && *(long *)*param_2 == 0x68706c615f317670) {
      *(undefined1 *)(param_1 + 1) = 1;
      goto LAB_00149dfb;
    }
    if ((*param_2)[8] == 'e' && *(long *)*param_2 == 0x7461725f65746f76) {
      *(undefined1 *)(param_1 + 1) = 4;
      goto LAB_00149dfb;
    }
    break;
  case 10:
    if (*(short *)(*param_2 + 8) == 0x6168 && *(long *)*param_2 == 0x706c615f74736f63) {
      *(undefined1 *)(param_1 + 1) = 2;
      goto LAB_00149dfb;
    }
    bVar2 = true;
    bVar3 = false;
    goto switchD_001497b2_caseD_c;
  case 0xb:
    if (*(long *)(*param_2 + 3) == 0x65646f6d5f6c616e && *(long *)*param_2 == 0x6d5f6c616e676973) {
      *(undefined1 *)(param_1 + 1) = 0;
      goto LAB_00149dfb;
    }
    break;
  case 0xc:
  case 0xd:
  case 0xf:
  case 0x11:
  case 0x16:
    goto switchD_001497b2_caseD_c;
  case 0xe:
    if (*(long *)(*param_2 + 6) == 0x657461725f72656b && *(long *)*param_2 == 0x656b61745f78616d) {
      *(undefined1 *)(param_1 + 1) = 8;
      goto LAB_00149dfb;
    }
    if (*(long *)(*param_2 + 6) == 0x7972657070696c73 && *(long *)*param_2 == 0x6c735f6564617274) {
      *(undefined1 *)(param_1 + 1) = 9;
      goto LAB_00149dfb;
    }
    break;
  case 0x10:
    auVar7[0] = -((*param_2)[0] == DAT_001175c0);
    auVar7[1] = -((*param_2)[1] == UNK_001175c1);
    auVar7[2] = -((*param_2)[2] == UNK_001175c2);
    auVar7[3] = -((*param_2)[3] == UNK_001175c3);
    auVar7[4] = -((*param_2)[4] == UNK_001175c4);
    auVar7[5] = -((*param_2)[5] == UNK_001175c5);
    auVar7[6] = -((*param_2)[6] == UNK_001175c6);
    auVar7[7] = -((*param_2)[7] == UNK_001175c7);
    auVar7[8] = -((*param_2)[8] == UNK_001175c8);
    auVar7[9] = -((*param_2)[9] == UNK_001175c9);
    auVar7[10] = -((*param_2)[10] == UNK_001175ca);
    auVar7[0xb] = -((*param_2)[0xb] == UNK_001175cb);
    auVar7[0xc] = -((*param_2)[0xc] == UNK_001175cc);
    auVar7[0xd] = -((*param_2)[0xd] == UNK_001175cd);
    auVar7[0xe] = -((*param_2)[0xe] == UNK_001175ce);
    auVar7[0xf] = -((*param_2)[0xf] == UNK_001175cf);
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
      goto LAB_00149dfb;
    }
    break;
  case 0x12:
    auVar8[0] = -((*param_2)[0] == DAT_00117680);
    auVar8[1] = -((*param_2)[1] == UNK_00117681);
    auVar8[2] = -((*param_2)[2] == UNK_00117682);
    auVar8[3] = -((*param_2)[3] == UNK_00117683);
    auVar8[4] = -((*param_2)[4] == UNK_00117684);
    auVar8[5] = -((*param_2)[5] == UNK_00117685);
    auVar8[6] = -((*param_2)[6] == UNK_00117686);
    auVar8[7] = -((*param_2)[7] == UNK_00117687);
    auVar8[8] = -((*param_2)[8] == UNK_00117688);
    auVar8[9] = -((*param_2)[9] == UNK_00117689);
    auVar8[10] = -((*param_2)[10] == UNK_0011768a);
    auVar8[0xb] = -((*param_2)[0xb] == UNK_0011768b);
    auVar8[0xc] = -((*param_2)[0xc] == UNK_0011768c);
    auVar8[0xd] = -((*param_2)[0xd] == UNK_0011768d);
    auVar8[0xe] = -((*param_2)[0xe] == UNK_0011768e);
    auVar8[0xf] = -((*param_2)[0xf] == UNK_0011768f);
    auVar21[0] = -((char)*(undefined2 *)param_2[1] == s_ol_00117340[0]);
    auVar21[1] = -((char)((ushort)*(undefined2 *)param_2[1] >> 8) == s_ol_00117340[1]);
    auVar21[2] = -(s_ol_00117340[2] == '\0');
    auVar21[3] = -(s_ol_00117340[3] == '\0');
    auVar21[4] = -(UNK_00117344 == '\0');
    auVar21[5] = -(UNK_00117345 == '\0');
    auVar21[6] = -(UNK_00117346 == '\0');
    auVar21[7] = -(UNK_00117347 == '\0');
    auVar21[8] = -(UNK_00117348 == '\0');
    auVar21[9] = -(UNK_00117349 == '\0');
    auVar21[10] = -(UNK_0011734a == '\0');
    auVar21[0xb] = -(UNK_0011734b == '\0');
    auVar21[0xc] = -(UNK_0011734c == '\0');
    auVar21[0xd] = -(UNK_0011734d == '\0');
    auVar21[0xe] = -(UNK_0011734e == '\0');
    auVar21[0xf] = -(UNK_0011734f == '\0');
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
      *(undefined1 *)(param_1 + 1) = 0xb;
      goto LAB_00149dfb;
    }
    auVar9[0] = -((*param_2)[0] == DAT_001175d0);
    auVar9[1] = -((*param_2)[1] == UNK_001175d1);
    auVar9[2] = -((*param_2)[2] == UNK_001175d2);
    auVar9[3] = -((*param_2)[3] == UNK_001175d3);
    auVar9[4] = -((*param_2)[4] == UNK_001175d4);
    auVar9[5] = -((*param_2)[5] == UNK_001175d5);
    auVar9[6] = -((*param_2)[6] == UNK_001175d6);
    auVar9[7] = -((*param_2)[7] == UNK_001175d7);
    auVar9[8] = -((*param_2)[8] == UNK_001175d8);
    auVar9[9] = -((*param_2)[9] == UNK_001175d9);
    auVar9[10] = -((*param_2)[10] == UNK_001175da);
    auVar9[0xb] = -((*param_2)[0xb] == UNK_001175db);
    auVar9[0xc] = -((*param_2)[0xc] == UNK_001175dc);
    auVar9[0xd] = -((*param_2)[0xd] == UNK_001175dd);
    auVar9[0xe] = -((*param_2)[0xe] == UNK_001175de);
    auVar9[0xf] = -((*param_2)[0xf] == UNK_001175df);
    auVar22[0] = -((char)*(undefined2 *)param_2[1] == DAT_001178f0);
    auVar22[1] = -((char)((ushort)*(undefined2 *)param_2[1] >> 8) == UNK_001178f1);
    auVar22[2] = -(UNK_001178f2 == '\0');
    auVar22[3] = -(UNK_001178f3 == '\0');
    auVar22[4] = -(UNK_001178f4 == '\0');
    auVar22[5] = -(UNK_001178f5 == '\0');
    auVar22[6] = -(UNK_001178f6 == '\0');
    auVar22[7] = -(UNK_001178f7 == '\0');
    auVar22[8] = -(UNK_001178f8 == '\0');
    auVar22[9] = -(UNK_001178f9 == '\0');
    auVar22[10] = -(UNK_001178fa == '\0');
    auVar22[0xb] = -(UNK_001178fb == '\0');
    auVar22[0xc] = -(UNK_001178fc == '\0');
    auVar22[0xd] = -(UNK_001178fd == '\0');
    auVar22[0xe] = -(UNK_001178fe == '\0');
    auVar22[0xf] = -(UNK_001178ff == '\0');
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
      *(undefined1 *)(param_1 + 1) = 0xc;
      goto LAB_00149dfb;
    }
    auVar10[0] = -((*param_2)[0] == s_max_single_net_v_00117600[0]);
    auVar10[1] = -((*param_2)[1] == s_max_single_net_v_00117600[1]);
    auVar10[2] = -((*param_2)[2] == s_max_single_net_v_00117600[2]);
    auVar10[3] = -((*param_2)[3] == s_max_single_net_v_00117600[3]);
    auVar10[4] = -((*param_2)[4] == s_max_single_net_v_00117600[4]);
    auVar10[5] = -((*param_2)[5] == s_max_single_net_v_00117600[5]);
    auVar10[6] = -((*param_2)[6] == s_max_single_net_v_00117600[6]);
    auVar10[7] = -((*param_2)[7] == s_max_single_net_v_00117600[7]);
    auVar10[8] = -((*param_2)[8] == s_max_single_net_v_00117600[8]);
    auVar10[9] = -((*param_2)[9] == s_max_single_net_v_00117600[9]);
    auVar10[10] = -((*param_2)[10] == s_max_single_net_v_00117600[10]);
    auVar10[0xb] = -((*param_2)[0xb] == s_max_single_net_v_00117600[0xb]);
    auVar10[0xc] = -((*param_2)[0xc] == s_max_single_net_v_00117600[0xc]);
    auVar10[0xd] = -((*param_2)[0xd] == s_max_single_net_v_00117600[0xd]);
    auVar10[0xe] = -((*param_2)[0xe] == s_max_single_net_v_00117600[0xe]);
    auVar10[0xf] = -((*param_2)[0xf] == s_max_single_net_v_00117600[0xf]);
    auVar23[0] = -((char)*(undefined2 *)param_2[1] == s_ol_00117340[0]);
    auVar23[1] = -((char)((ushort)*(undefined2 *)param_2[1] >> 8) == s_ol_00117340[1]);
    auVar23[2] = -(s_ol_00117340[2] == '\0');
    auVar23[3] = -(s_ol_00117340[3] == '\0');
    auVar23[4] = -(UNK_00117344 == '\0');
    auVar23[5] = -(UNK_00117345 == '\0');
    auVar23[6] = -(UNK_00117346 == '\0');
    auVar23[7] = -(UNK_00117347 == '\0');
    auVar23[8] = -(UNK_00117348 == '\0');
    auVar23[9] = -(UNK_00117349 == '\0');
    auVar23[10] = -(UNK_0011734a == '\0');
    auVar23[0xb] = -(UNK_0011734b == '\0');
    auVar23[0xc] = -(UNK_0011734c == '\0');
    auVar23[0xd] = -(UNK_0011734d == '\0');
    auVar23[0xe] = -(UNK_0011734e == '\0');
    auVar23[0xf] = -(UNK_0011734f == '\0');
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
      *(undefined1 *)(param_1 + 1) = 0xd;
      goto LAB_00149dfb;
    }
    auVar11[0] = -((*param_2)[0] == s_max_single_net_a_00117760[0]);
    auVar11[1] = -((*param_2)[1] == s_max_single_net_a_00117760[1]);
    auVar11[2] = -((*param_2)[2] == s_max_single_net_a_00117760[2]);
    auVar11[3] = -((*param_2)[3] == s_max_single_net_a_00117760[3]);
    auVar11[4] = -((*param_2)[4] == s_max_single_net_a_00117760[4]);
    auVar11[5] = -((*param_2)[5] == s_max_single_net_a_00117760[5]);
    auVar11[6] = -((*param_2)[6] == s_max_single_net_a_00117760[6]);
    auVar11[7] = -((*param_2)[7] == s_max_single_net_a_00117760[7]);
    auVar11[8] = -((*param_2)[8] == s_max_single_net_a_00117760[8]);
    auVar11[9] = -((*param_2)[9] == s_max_single_net_a_00117760[9]);
    auVar11[10] = -((*param_2)[10] == s_max_single_net_a_00117760[10]);
    auVar11[0xb] = -((*param_2)[0xb] == s_max_single_net_a_00117760[0xb]);
    auVar11[0xc] = -((*param_2)[0xc] == s_max_single_net_a_00117760[0xc]);
    auVar11[0xd] = -((*param_2)[0xd] == s_max_single_net_a_00117760[0xd]);
    auVar11[0xe] = -((*param_2)[0xe] == s_max_single_net_a_00117760[0xe]);
    auVar11[0xf] = -((*param_2)[0xf] == s_max_single_net_a_00117760[0xf]);
    auVar24[0] = -((char)*(undefined2 *)param_2[1] == DAT_001178f0);
    auVar24[1] = -((char)((ushort)*(undefined2 *)param_2[1] >> 8) == UNK_001178f1);
    auVar24[2] = -(UNK_001178f2 == '\0');
    auVar24[3] = -(UNK_001178f3 == '\0');
    auVar24[4] = -(UNK_001178f4 == '\0');
    auVar24[5] = -(UNK_001178f5 == '\0');
    auVar24[6] = -(UNK_001178f6 == '\0');
    auVar24[7] = -(UNK_001178f7 == '\0');
    auVar24[8] = -(UNK_001178f8 == '\0');
    auVar24[9] = -(UNK_001178f9 == '\0');
    auVar24[10] = -(UNK_001178fa == '\0');
    auVar24[0xb] = -(UNK_001178fb == '\0');
    auVar24[0xc] = -(UNK_001178fc == '\0');
    auVar24[0xd] = -(UNK_001178fd == '\0');
    auVar24[0xe] = -(UNK_001178fe == '\0');
    auVar24[0xf] = -(UNK_001178ff == '\0');
    auVar24 = auVar24 & auVar11;
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
      *(undefined1 *)(param_1 + 1) = 0xe;
      goto LAB_00149dfb;
    }
    break;
  case 0x13:
    auVar25[0] = -((*param_2)[3] == DAT_00117350);
    auVar25[1] = -((*param_2)[4] == UNK_00117351);
    auVar25[2] = -((*param_2)[5] == UNK_00117352);
    auVar25[3] = -((*param_2)[6] == UNK_00117353);
    auVar25[4] = -((*param_2)[7] == UNK_00117354);
    auVar25[5] = -((*param_2)[8] == UNK_00117355);
    auVar25[6] = -((*param_2)[9] == UNK_00117356);
    auVar25[7] = -((*param_2)[10] == UNK_00117357);
    auVar25[8] = -((*param_2)[0xb] == UNK_00117358);
    auVar25[9] = -((*param_2)[0xc] == UNK_00117359);
    auVar25[10] = -((*param_2)[0xd] == UNK_0011735a);
    auVar25[0xb] = -((*param_2)[0xe] == UNK_0011735b);
    auVar25[0xc] = -((*param_2)[0xf] == UNK_0011735c);
    auVar25[0xd] = -(param_2[1][0] == UNK_0011735d);
    auVar25[0xe] = -(param_2[1][1] == UNK_0011735e);
    auVar25[0xf] = -(param_2[1][2] == UNK_0011735f);
    auVar12[0] = -((*param_2)[0] == s_signal_trigger_m_00117770[0]);
    auVar12[1] = -((*param_2)[1] == s_signal_trigger_m_00117770[1]);
    auVar12[2] = -((*param_2)[2] == s_signal_trigger_m_00117770[2]);
    auVar12[3] = -((*param_2)[3] == s_signal_trigger_m_00117770[3]);
    auVar12[4] = -((*param_2)[4] == s_signal_trigger_m_00117770[4]);
    auVar12[5] = -((*param_2)[5] == s_signal_trigger_m_00117770[5]);
    auVar12[6] = -((*param_2)[6] == s_signal_trigger_m_00117770[6]);
    auVar12[7] = -((*param_2)[7] == s_signal_trigger_m_00117770[7]);
    auVar12[8] = -((*param_2)[8] == s_signal_trigger_m_00117770[8]);
    auVar12[9] = -((*param_2)[9] == s_signal_trigger_m_00117770[9]);
    auVar12[10] = -((*param_2)[10] == s_signal_trigger_m_00117770[10]);
    auVar12[0xb] = -((*param_2)[0xb] == s_signal_trigger_m_00117770[0xb]);
    auVar12[0xc] = -((*param_2)[0xc] == s_signal_trigger_m_00117770[0xc]);
    auVar12[0xd] = -((*param_2)[0xd] == s_signal_trigger_m_00117770[0xd]);
    auVar12[0xe] = -((*param_2)[0xe] == s_signal_trigger_m_00117770[0xe]);
    auVar12[0xf] = -((*param_2)[0xf] == s_signal_trigger_m_00117770[0xf]);
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
      *(undefined1 *)(param_1 + 1) = 3;
      goto LAB_00149dfb;
    }
    iVar5 = (*(code *)PTR_bcmp_001d97d8)(param_2,&DAT_00117f76,param_3);
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 1) = 7;
      goto LAB_00149dfb;
    }
    iVar5 = (*(code *)PTR_bcmp_001d97d8)(param_2,&DAT_0011802c,param_3);
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x11;
      goto LAB_00149dfb;
    }
    break;
  case 0x14:
    uVar1 = *(undefined4 *)param_2[1];
    auVar30[0] = -((char)uVar1 == DAT_00117300);
    auVar30[1] = -((char)((uint)uVar1 >> 8) == UNK_00117301);
    auVar30[2] = -((char)((uint)uVar1 >> 0x10) == UNK_00117302);
    auVar30[3] = -((char)((uint)uVar1 >> 0x18) == UNK_00117303);
    auVar30[4] = -(UNK_00117304 == '\0');
    auVar30[5] = -(UNK_00117305 == '\0');
    auVar30[6] = -(UNK_00117306 == '\0');
    auVar30[7] = -(UNK_00117307 == '\0');
    auVar30[8] = -(UNK_00117308 == '\0');
    auVar30[9] = -(UNK_00117309 == '\0');
    auVar30[10] = -(UNK_0011730a == '\0');
    auVar30[0xb] = -(UNK_0011730b == '\0');
    auVar30[0xc] = -(UNK_0011730c == '\0');
    auVar30[0xd] = -(UNK_0011730d == '\0');
    auVar30[0xe] = -(UNK_0011730e == '\0');
    auVar30[0xf] = -(UNK_0011730f == '\0');
    auVar17[0] = -((*param_2)[0] == DAT_00117480);
    auVar17[1] = -((*param_2)[1] == UNK_00117481);
    auVar17[2] = -((*param_2)[2] == UNK_00117482);
    auVar17[3] = -((*param_2)[3] == UNK_00117483);
    auVar17[4] = -((*param_2)[4] == UNK_00117484);
    auVar17[5] = -((*param_2)[5] == UNK_00117485);
    auVar17[6] = -((*param_2)[6] == UNK_00117486);
    auVar17[7] = -((*param_2)[7] == UNK_00117487);
    auVar17[8] = -((*param_2)[8] == UNK_00117488);
    auVar17[9] = -((*param_2)[9] == UNK_00117489);
    auVar17[10] = -((*param_2)[10] == UNK_0011748a);
    auVar17[0xb] = -((*param_2)[0xb] == UNK_0011748b);
    auVar17[0xc] = -((*param_2)[0xc] == UNK_0011748c);
    auVar17[0xd] = -((*param_2)[0xd] == UNK_0011748d);
    auVar17[0xe] = -((*param_2)[0xe] == UNK_0011748e);
    auVar17[0xf] = -((*param_2)[0xf] == UNK_0011748f);
    auVar17 = auVar17 & auVar30;
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
      goto LAB_00149dfb;
    }
    auVar6 = *param_2;
    uVar1 = *(undefined4 *)param_2[1];
    auVar34[0] = -((char)uVar1 == s__amt_00117540[0]);
    auVar34[1] = -((char)((uint)uVar1 >> 8) == s__amt_00117540[1]);
    auVar34[2] = -((char)((uint)uVar1 >> 0x10) == s__amt_00117540[2]);
    auVar34[3] = -((char)((uint)uVar1 >> 0x18) == s__amt_00117540[3]);
    auVar34[4] = -(s__amt_00117540[4] == '\0');
    auVar34[5] = -(s__amt_00117540[5] == '\0');
    auVar34[6] = -(s__amt_00117540[6] == '\0');
    auVar34[7] = -(s__amt_00117540[7] == '\0');
    auVar34[8] = -(UNK_00117548 == '\0');
    auVar34[9] = -(UNK_00117549 == '\0');
    auVar34[10] = -(UNK_0011754a == '\0');
    auVar34[0xb] = -(UNK_0011754b == '\0');
    auVar34[0xc] = -(UNK_0011754c == '\0');
    auVar34[0xd] = -(UNK_0011754d == '\0');
    auVar34[0xe] = -(UNK_0011754e == '\0');
    auVar34[0xf] = -(UNK_0011754f == '\0');
    auVar31[0] = -(auVar6[0] == 'm');
    auVar31[1] = -(auVar6[1] == 'a');
    auVar31[2] = -(auVar6[2] == 'x');
    auVar31[3] = -(auVar6[3] == '_');
    auVar31[4] = -(auVar6[4] == 's');
    auVar31[5] = -(auVar6[5] == 'i');
    auVar31[6] = -(auVar6[6] == 'n');
    auVar31[7] = -(auVar6[7] == 'g');
    auVar31[8] = -(auVar6[8] == 'l');
    auVar31[9] = -(auVar6[9] == 'e');
    auVar31[10] = -(auVar6[10] == '_');
    auVar31[0xb] = -(auVar6[0xb] == 'c');
    auVar31[0xc] = -(auVar6[0xc] == 'l');
    auVar31[0xd] = -(auVar6[0xd] == 'o');
    auVar31[0xe] = -(auVar6[0xe] == 's');
    auVar31[0xf] = -(auVar6[0xf] == 'e');
    auVar34 = auVar34 & auVar31;
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
      goto LAB_00149dfb;
    }
    iVar5 = (*(code *)PTR_bcmp_001d97d8)(param_2,&DAT_0011803f,param_3);
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x12;
      goto LAB_00149dfb;
    }
    iVar5 = (*(code *)PTR_bcmp_001d97d8)(param_2,&DAT_00118053,param_3);
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x13;
      goto LAB_00149dfb;
    }
    bVar4 = true;
    goto switchD_001497b2_default;
  case 0x15:
    auVar27[0] = -((*param_2)[5] == DAT_00117560);
    auVar27[1] = -((*param_2)[6] == UNK_00117561);
    auVar27[2] = -((*param_2)[7] == UNK_00117562);
    auVar27[3] = -((*param_2)[8] == UNK_00117563);
    auVar27[4] = -((*param_2)[9] == UNK_00117564);
    auVar27[5] = -((*param_2)[10] == UNK_00117565);
    auVar27[6] = -((*param_2)[0xb] == UNK_00117566);
    auVar27[7] = -((*param_2)[0xc] == UNK_00117567);
    auVar27[8] = -((*param_2)[0xd] == UNK_00117568);
    auVar27[9] = -((*param_2)[0xe] == UNK_00117569);
    auVar27[10] = -((*param_2)[0xf] == UNK_0011756a);
    auVar27[0xb] = -(param_2[1][0] == UNK_0011756b);
    auVar27[0xc] = -(param_2[1][1] == UNK_0011756c);
    auVar27[0xd] = -(param_2[1][2] == UNK_0011756d);
    auVar27[0xe] = -(param_2[1][3] == UNK_0011756e);
    auVar27[0xf] = -(param_2[1][4] == UNK_0011756f);
    auVar14[0] = -((*param_2)[0] == DAT_00117570);
    auVar14[1] = -((*param_2)[1] == UNK_00117571);
    auVar14[2] = -((*param_2)[2] == UNK_00117572);
    auVar14[3] = -((*param_2)[3] == UNK_00117573);
    auVar14[4] = -((*param_2)[4] == UNK_00117574);
    auVar14[5] = -((*param_2)[5] == UNK_00117575);
    auVar14[6] = -((*param_2)[6] == UNK_00117576);
    auVar14[7] = -((*param_2)[7] == UNK_00117577);
    auVar14[8] = -((*param_2)[8] == UNK_00117578);
    auVar14[9] = -((*param_2)[9] == UNK_00117579);
    auVar14[10] = -((*param_2)[10] == UNK_0011757a);
    auVar14[0xb] = -((*param_2)[0xb] == UNK_0011757b);
    auVar14[0xc] = -((*param_2)[0xc] == UNK_0011757c);
    auVar14[0xd] = -((*param_2)[0xd] == UNK_0011757d);
    auVar14[0xe] = -((*param_2)[0xe] == UNK_0011757e);
    auVar14[0xf] = -((*param_2)[0xf] == UNK_0011757f);
    auVar14 = auVar14 & auVar27;
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
      goto LAB_00149dfb;
    }
    auVar28[0] = -((*param_2)[5] == DAT_001173b0);
    auVar28[1] = -((*param_2)[6] == UNK_001173b1);
    auVar28[2] = -((*param_2)[7] == UNK_001173b2);
    auVar28[3] = -((*param_2)[8] == UNK_001173b3);
    auVar28[4] = -((*param_2)[9] == UNK_001173b4);
    auVar28[5] = -((*param_2)[10] == UNK_001173b5);
    auVar28[6] = -((*param_2)[0xb] == UNK_001173b6);
    auVar28[7] = -((*param_2)[0xc] == UNK_001173b7);
    auVar28[8] = -((*param_2)[0xd] == UNK_001173b8);
    auVar28[9] = -((*param_2)[0xe] == UNK_001173b9);
    auVar28[10] = -((*param_2)[0xf] == UNK_001173ba);
    auVar28[0xb] = -(param_2[1][0] == UNK_001173bb);
    auVar28[0xc] = -(param_2[1][1] == UNK_001173bc);
    auVar28[0xd] = -(param_2[1][2] == UNK_001173bd);
    auVar28[0xe] = -(param_2[1][3] == UNK_001173be);
    auVar28[0xf] = -(param_2[1][4] == UNK_001173bf);
    auVar15[0] = -((*param_2)[0] == DAT_00117840);
    auVar15[1] = -((*param_2)[1] == UNK_00117841);
    auVar15[2] = -((*param_2)[2] == UNK_00117842);
    auVar15[3] = -((*param_2)[3] == UNK_00117843);
    auVar15[4] = -((*param_2)[4] == UNK_00117844);
    auVar15[5] = -((*param_2)[5] == UNK_00117845);
    auVar15[6] = -((*param_2)[6] == UNK_00117846);
    auVar15[7] = -((*param_2)[7] == UNK_00117847);
    auVar15[8] = -((*param_2)[8] == UNK_00117848);
    auVar15[9] = -((*param_2)[9] == UNK_00117849);
    auVar15[10] = -((*param_2)[10] == UNK_0011784a);
    auVar15[0xb] = -((*param_2)[0xb] == UNK_0011784b);
    auVar15[0xc] = -((*param_2)[0xc] == UNK_0011784c);
    auVar15[0xd] = -((*param_2)[0xd] == UNK_0011784d);
    auVar15[0xe] = -((*param_2)[0xe] == UNK_0011784e);
    auVar15[0xf] = -((*param_2)[0xf] == UNK_0011784f);
    auVar15 = auVar15 & auVar28;
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
      goto LAB_00149dfb;
    }
    auVar29[0] = -((*param_2)[5] == DAT_001176e0);
    auVar29[1] = -((*param_2)[6] == UNK_001176e1);
    auVar29[2] = -((*param_2)[7] == UNK_001176e2);
    auVar29[3] = -((*param_2)[8] == UNK_001176e3);
    auVar29[4] = -((*param_2)[9] == UNK_001176e4);
    auVar29[5] = -((*param_2)[10] == UNK_001176e5);
    auVar29[6] = -((*param_2)[0xb] == UNK_001176e6);
    auVar29[7] = -((*param_2)[0xc] == UNK_001176e7);
    auVar29[8] = -((*param_2)[0xd] == UNK_001176e8);
    auVar29[9] = -((*param_2)[0xe] == UNK_001176e9);
    auVar29[10] = -((*param_2)[0xf] == UNK_001176ea);
    auVar29[0xb] = -(param_2[1][0] == UNK_001176eb);
    auVar29[0xc] = -(param_2[1][1] == UNK_001176ec);
    auVar29[0xd] = -(param_2[1][2] == UNK_001176ed);
    auVar29[0xe] = -(param_2[1][3] == UNK_001176ee);
    auVar29[0xf] = -(param_2[1][4] == UNK_001176ef);
    auVar16[0] = -((*param_2)[0] == DAT_001173c0);
    auVar16[1] = -((*param_2)[1] == UNK_001173c1);
    auVar16[2] = -((*param_2)[2] == UNK_001173c2);
    auVar16[3] = -((*param_2)[3] == UNK_001173c3);
    auVar16[4] = -((*param_2)[4] == UNK_001173c4);
    auVar16[5] = -((*param_2)[5] == UNK_001173c5);
    auVar16[6] = -((*param_2)[6] == UNK_001173c6);
    auVar16[7] = -((*param_2)[7] == UNK_001173c7);
    auVar16[8] = -((*param_2)[8] == UNK_001173c8);
    auVar16[9] = -((*param_2)[9] == UNK_001173c9);
    auVar16[10] = -((*param_2)[10] == UNK_001173ca);
    auVar16[0xb] = -((*param_2)[0xb] == UNK_001173cb);
    auVar16[0xc] = -((*param_2)[0xc] == UNK_001173cc);
    auVar16[0xd] = -((*param_2)[0xd] == UNK_001173cd);
    auVar16[0xe] = -((*param_2)[0xe] == UNK_001173ce);
    auVar16[0xf] = -((*param_2)[0xf] == UNK_001173cf);
    auVar16 = auVar16 & auVar29;
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
      *(undefined1 *)(param_1 + 1) = 0x20;
      goto LAB_00149dfb;
    }
    goto LAB_00149d77;
  case 0x17:
    auVar20[0] = -((*param_2)[7] == DAT_001177a0);
    auVar20[1] = -((*param_2)[8] == UNK_001177a1);
    auVar20[2] = -((*param_2)[9] == UNK_001177a2);
    auVar20[3] = -((*param_2)[10] == UNK_001177a3);
    auVar20[4] = -((*param_2)[0xb] == UNK_001177a4);
    auVar20[5] = -((*param_2)[0xc] == UNK_001177a5);
    auVar20[6] = -((*param_2)[0xd] == UNK_001177a6);
    auVar20[7] = -((*param_2)[0xe] == UNK_001177a7);
    auVar20[8] = -((*param_2)[0xf] == UNK_001177a8);
    auVar20[9] = -(param_2[1][0] == UNK_001177a9);
    auVar20[10] = -(param_2[1][1] == UNK_001177aa);
    auVar20[0xb] = -(param_2[1][2] == UNK_001177ab);
    auVar20[0xc] = -(param_2[1][3] == UNK_001177ac);
    auVar20[0xd] = -(param_2[1][4] == UNK_001177ad);
    auVar20[0xe] = -(param_2[1][5] == UNK_001177ae);
    auVar20[0xf] = -(param_2[1][6] == UNK_001177af);
    auVar6[0] = -((*param_2)[0] == DAT_00117400);
    auVar6[1] = -((*param_2)[1] == UNK_00117401);
    auVar6[2] = -((*param_2)[2] == UNK_00117402);
    auVar6[3] = -((*param_2)[3] == UNK_00117403);
    auVar6[4] = -((*param_2)[4] == UNK_00117404);
    auVar6[5] = -((*param_2)[5] == UNK_00117405);
    auVar6[6] = -((*param_2)[6] == UNK_00117406);
    auVar6[7] = -((*param_2)[7] == UNK_00117407);
    auVar6[8] = -((*param_2)[8] == UNK_00117408);
    auVar6[9] = -((*param_2)[9] == UNK_00117409);
    auVar6[10] = -((*param_2)[10] == UNK_0011740a);
    auVar6[0xb] = -((*param_2)[0xb] == UNK_0011740b);
    auVar6[0xc] = -((*param_2)[0xc] == UNK_0011740c);
    auVar6[0xd] = -((*param_2)[0xd] == UNK_0011740d);
    auVar6[0xe] = -((*param_2)[0xe] == UNK_0011740e);
    auVar6[0xf] = -((*param_2)[0xf] == UNK_0011740f);
    auVar6 = auVar6 & auVar20;
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
      goto LAB_00149dfb;
    }
    break;
  default:
    goto switchD_001497b2_default;
  }
  bVar4 = false;
switchD_001497b2_default:
  bVar3 = bVar4;
  bVar2 = false;
switchD_001497b2_caseD_c:
  switch(param_3) {
  case 0x19:
    auVar26[0] = -((*param_2)[9] == DAT_00117690);
    auVar26[1] = -((*param_2)[10] == UNK_00117691);
    auVar26[2] = -((*param_2)[0xb] == UNK_00117692);
    auVar26[3] = -((*param_2)[0xc] == UNK_00117693);
    auVar26[4] = -((*param_2)[0xd] == UNK_00117694);
    auVar26[5] = -((*param_2)[0xe] == UNK_00117695);
    auVar26[6] = -((*param_2)[0xf] == UNK_00117696);
    auVar26[7] = -(param_2[1][0] == UNK_00117697);
    auVar26[8] = -(param_2[1][1] == UNK_00117698);
    auVar26[9] = -(param_2[1][2] == UNK_00117699);
    auVar26[10] = -(param_2[1][3] == UNK_0011769a);
    auVar26[0xb] = -(param_2[1][4] == UNK_0011769b);
    auVar26[0xc] = -(param_2[1][5] == UNK_0011769c);
    auVar26[0xd] = -(param_2[1][6] == UNK_0011769d);
    auVar26[0xe] = -(param_2[1][7] == UNK_0011769e);
    auVar26[0xf] = -(param_2[1][8] == UNK_0011769f);
    auVar13[0] = -((*param_2)[0] == DAT_00117360);
    auVar13[1] = -((*param_2)[1] == UNK_00117361);
    auVar13[2] = -((*param_2)[2] == UNK_00117362);
    auVar13[3] = -((*param_2)[3] == UNK_00117363);
    auVar13[4] = -((*param_2)[4] == UNK_00117364);
    auVar13[5] = -((*param_2)[5] == UNK_00117365);
    auVar13[6] = -((*param_2)[6] == UNK_00117366);
    auVar13[7] = -((*param_2)[7] == UNK_00117367);
    auVar13[8] = -((*param_2)[8] == UNK_00117368);
    auVar13[9] = -((*param_2)[9] == UNK_00117369);
    auVar13[10] = -((*param_2)[10] == UNK_0011736a);
    auVar13[0xb] = -((*param_2)[0xb] == UNK_0011736b);
    auVar13[0xc] = -((*param_2)[0xc] == UNK_0011736c);
    auVar13[0xd] = -((*param_2)[0xd] == UNK_0011736d);
    auVar13[0xe] = -((*param_2)[0xe] == UNK_0011736e);
    auVar13[0xf] = -((*param_2)[0xf] == UNK_0011736f);
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
      *(undefined1 *)(param_1 + 1) = 0x1b;
      goto LAB_00149dfb;
    }
    break;
  case 0x1b:
    auVar32[0] = -((*param_2)[0xb] == DAT_001172e0);
    auVar32[1] = -((*param_2)[0xc] == UNK_001172e1);
    auVar32[2] = -((*param_2)[0xd] == UNK_001172e2);
    auVar32[3] = -((*param_2)[0xe] == UNK_001172e3);
    auVar32[4] = -((*param_2)[0xf] == UNK_001172e4);
    auVar32[5] = -(param_2[1][0] == UNK_001172e5);
    auVar32[6] = -(param_2[1][1] == UNK_001172e6);
    auVar32[7] = -(param_2[1][2] == UNK_001172e7);
    auVar32[8] = -(param_2[1][3] == UNK_001172e8);
    auVar32[9] = -(param_2[1][4] == UNK_001172e9);
    auVar32[10] = -(param_2[1][5] == UNK_001172ea);
    auVar32[0xb] = -(param_2[1][6] == UNK_001172eb);
    auVar32[0xc] = -(param_2[1][7] == UNK_001172ec);
    auVar32[0xd] = -(param_2[1][8] == UNK_001172ed);
    auVar32[0xe] = -(param_2[1][9] == UNK_001172ee);
    auVar32[0xf] = -(param_2[1][10] == UNK_001172ef);
    auVar18[0] = -((*param_2)[0] == DAT_001175b0);
    auVar18[1] = -((*param_2)[1] == UNK_001175b1);
    auVar18[2] = -((*param_2)[2] == UNK_001175b2);
    auVar18[3] = -((*param_2)[3] == UNK_001175b3);
    auVar18[4] = -((*param_2)[4] == UNK_001175b4);
    auVar18[5] = -((*param_2)[5] == UNK_001175b5);
    auVar18[6] = -((*param_2)[6] == UNK_001175b6);
    auVar18[7] = -((*param_2)[7] == UNK_001175b7);
    auVar18[8] = -((*param_2)[8] == UNK_001175b8);
    auVar18[9] = -((*param_2)[9] == UNK_001175b9);
    auVar18[10] = -((*param_2)[10] == UNK_001175ba);
    auVar18[0xb] = -((*param_2)[0xb] == UNK_001175bb);
    auVar18[0xc] = -((*param_2)[0xc] == UNK_001175bc);
    auVar18[0xd] = -((*param_2)[0xd] == UNK_001175bd);
    auVar18[0xe] = -((*param_2)[0xe] == UNK_001175be);
    auVar18[0xf] = -((*param_2)[0xf] == UNK_001175bf);
    auVar18 = auVar18 & auVar32;
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
      *(undefined1 *)(param_1 + 1) = 0x16;
      goto LAB_00149dfb;
    }
    break;
  case 0x1d:
    auVar33[0] = -((*param_2)[0xd] == DAT_001172e0);
    auVar33[1] = -((*param_2)[0xe] == UNK_001172e1);
    auVar33[2] = -((*param_2)[0xf] == UNK_001172e2);
    auVar33[3] = -(param_2[1][0] == UNK_001172e3);
    auVar33[4] = -(param_2[1][1] == UNK_001172e4);
    auVar33[5] = -(param_2[1][2] == UNK_001172e5);
    auVar33[6] = -(param_2[1][3] == UNK_001172e6);
    auVar33[7] = -(param_2[1][4] == UNK_001172e7);
    auVar33[8] = -(param_2[1][5] == UNK_001172e8);
    auVar33[9] = -(param_2[1][6] == UNK_001172e9);
    auVar33[10] = -(param_2[1][7] == UNK_001172ea);
    auVar33[0xb] = -(param_2[1][8] == UNK_001172eb);
    auVar33[0xc] = -(param_2[1][9] == UNK_001172ec);
    auVar33[0xd] = -(param_2[1][10] == UNK_001172ed);
    auVar33[0xe] = -(param_2[1][0xb] == UNK_001172ee);
    auVar33[0xf] = -(param_2[1][0xc] == UNK_001172ef);
    auVar19[0] = -((*param_2)[0] == DAT_00117900);
    auVar19[1] = -((*param_2)[1] == UNK_00117901);
    auVar19[2] = -((*param_2)[2] == UNK_00117902);
    auVar19[3] = -((*param_2)[3] == UNK_00117903);
    auVar19[4] = -((*param_2)[4] == UNK_00117904);
    auVar19[5] = -((*param_2)[5] == UNK_00117905);
    auVar19[6] = -((*param_2)[6] == UNK_00117906);
    auVar19[7] = -((*param_2)[7] == UNK_00117907);
    auVar19[8] = -((*param_2)[8] == UNK_00117908);
    auVar19[9] = -((*param_2)[9] == UNK_00117909);
    auVar19[10] = -((*param_2)[10] == UNK_0011790a);
    auVar19[0xb] = -((*param_2)[0xb] == UNK_0011790b);
    auVar19[0xc] = -((*param_2)[0xc] == UNK_0011790c);
    auVar19[0xd] = -((*param_2)[0xd] == UNK_0011790d);
    auVar19[0xe] = -((*param_2)[0xe] == UNK_0011790e);
    auVar19[0xf] = -((*param_2)[0xf] == UNK_0011790f);
    auVar19 = auVar19 & auVar33;
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
      *(undefined1 *)(param_1 + 1) = 0x19;
      goto LAB_00149dfb;
    }
    break;
  case 0x1e:
    iVar5 = (*(code *)PTR_bcmp_001d97d8)(param_2,&DAT_00118149,param_3);
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x1c;
      goto LAB_00149dfb;
    }
    break;
  case 0x21:
    iVar5 = (*(code *)PTR_bcmp_001d97d8)(param_2,&DAT_0011807c,0x21);
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x15;
      goto LAB_00149dfb;
    }
    break;
  case 0x22:
    iVar5 = (*(code *)PTR_bcmp_001d97d8)(param_2,&DAT_00118167,param_3);
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x1d;
      goto LAB_00149dfb;
    }
    break;
  case 0x23:
    iVar5 = (*(code *)PTR_bcmp_001d97d8)(param_2,&DAT_001180cd,0x23);
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x18;
      goto LAB_00149dfb;
    }
    iVar5 = (*(code *)PTR_bcmp_001d97d8)(param_2,&DAT_0011810d,0x23);
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x1a;
      goto LAB_00149dfb;
    }
  }
  if (bVar2) {
    iVar5 = (*(code *)PTR_bcmp_001d97d8)(param_2,&DAT_00118189,param_3);
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x1e;
      goto LAB_00149dfb;
    }
    iVar5 = (*(code *)PTR_bcmp_001d97d8)(param_2,&DAT_00118193,param_3);
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x1f;
      goto LAB_00149dfb;
    }
  }
  if ((param_3 == 0xc) &&
     (*(int *)(*param_2 + 8) == 0x7061635f && *(long *)*param_2 == 0x6c6f765f6b6f6f62)) {
    *(undefined1 *)(param_1 + 1) = 0x21;
  }
  else if (bVar3) {
    iVar5 = (*(code *)PTR_bcmp_001d97d8)(param_2,&DAT_001181be,param_3);
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x22;
    }
    else {
      *(undefined1 *)(param_1 + 1) = 0x23;
    }
  }
  else {
LAB_00149d77:
    *(undefined1 *)(param_1 + 1) = 0x23;
  }
LAB_00149dfb:
  *param_1 = 2;
  return param_1;
}


