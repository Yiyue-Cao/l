// ELF address 0x000000000004ae80; <strategy_tm6::_::<impl serde_core::de::Deserialize for strategy_tm6::TM6Params>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_str

/* _<strategy_tm6::_::<impl serde_core::de::Deserialize for
   strategy_tm6::TM6Params>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_str */

undefined8 * __rustcall
_<strategy_tm6::_::<impl_serde_core::de::Deserialize_for_strategy_tm6::TM6Params>::deserialize::__FieldVisitor_as_serde_core::de::Visitor>
::visit_str(undefined8 *param_1,undefined1 (*param_2) [16],long param_3)

{
  undefined4 uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
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
  
  bVar2 = false;
  switch(param_3) {
  case 8:
    if (*(long *)*param_2 == 0x656c69746e617571) {
      *(undefined1 *)(param_1 + 1) = 5;
      goto LAB_0014b4df;
    }
    break;
  case 9:
    if ((*param_2)[8] == 'a' && *(long *)*param_2 == 0x68706c615f317670) {
      *(undefined1 *)(param_1 + 1) = 1;
      goto LAB_0014b4df;
    }
    if ((*param_2)[8] == 'e' && *(long *)*param_2 == 0x7461725f65746f76) {
      *(undefined1 *)(param_1 + 1) = 4;
      goto LAB_0014b4df;
    }
    break;
  case 10:
    if (*(short *)(*param_2 + 8) == 0x6168 && *(long *)*param_2 == 0x706c615f74736f63) {
      *(undefined1 *)(param_1 + 1) = 2;
      goto LAB_0014b4df;
    }
    break;
  case 0xb:
    if (*(long *)(*param_2 + 3) == 0x65646f6d5f6c616e && *(long *)*param_2 == 0x6d5f6c616e676973) {
      *(undefined1 *)(param_1 + 1) = 0;
      goto LAB_0014b4df;
    }
    break;
  default:
    goto switchD_0014aeb5_caseD_c;
  case 0xe:
    if (*(long *)(*param_2 + 6) == 0x657461725f72656b && *(long *)*param_2 == 0x656b61745f78616d) {
      *(undefined1 *)(param_1 + 1) = 9;
      goto LAB_0014b4df;
    }
    if (*(long *)(*param_2 + 6) == 0x7972657070696c73 && *(long *)*param_2 == 0x6c735f6564617274) {
      *(undefined1 *)(param_1 + 1) = 10;
      goto LAB_0014b4df;
    }
    break;
  case 0x10:
    auVar9[0] = -((*param_2)[0] == DAT_001171f0);
    auVar9[1] = -((*param_2)[1] == UNK_001171f1);
    auVar9[2] = -((*param_2)[2] == UNK_001171f2);
    auVar9[3] = -((*param_2)[3] == UNK_001171f3);
    auVar9[4] = -((*param_2)[4] == UNK_001171f4);
    auVar9[5] = -((*param_2)[5] == UNK_001171f5);
    auVar9[6] = -((*param_2)[6] == UNK_001171f6);
    auVar9[7] = -((*param_2)[7] == UNK_001171f7);
    auVar9[8] = -((*param_2)[8] == UNK_001171f8);
    auVar9[9] = -((*param_2)[9] == UNK_001171f9);
    auVar9[10] = -((*param_2)[10] == UNK_001171fa);
    auVar9[0xb] = -((*param_2)[0xb] == UNK_001171fb);
    auVar9[0xc] = -((*param_2)[0xc] == UNK_001171fc);
    auVar9[0xd] = -((*param_2)[0xd] == UNK_001171fd);
    auVar9[0xe] = -((*param_2)[0xe] == UNK_001171fe);
    auVar9[0xf] = -((*param_2)[0xf] == UNK_001171ff);
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
      goto LAB_0014b4df;
    }
    break;
  case 0x12:
    auVar10[0] = -((*param_2)[0] == DAT_001172c0);
    auVar10[1] = -((*param_2)[1] == UNK_001172c1);
    auVar10[2] = -((*param_2)[2] == UNK_001172c2);
    auVar10[3] = -((*param_2)[3] == UNK_001172c3);
    auVar10[4] = -((*param_2)[4] == UNK_001172c4);
    auVar10[5] = -((*param_2)[5] == UNK_001172c5);
    auVar10[6] = -((*param_2)[6] == UNK_001172c6);
    auVar10[7] = -((*param_2)[7] == UNK_001172c7);
    auVar10[8] = -((*param_2)[8] == UNK_001172c8);
    auVar10[9] = -((*param_2)[9] == UNK_001172c9);
    auVar10[10] = -((*param_2)[10] == UNK_001172ca);
    auVar10[0xb] = -((*param_2)[0xb] == UNK_001172cb);
    auVar10[0xc] = -((*param_2)[0xc] == UNK_001172cc);
    auVar10[0xd] = -((*param_2)[0xd] == UNK_001172cd);
    auVar10[0xe] = -((*param_2)[0xe] == UNK_001172ce);
    auVar10[0xf] = -((*param_2)[0xf] == UNK_001172cf);
    auVar20[0] = -((char)*(undefined2 *)param_2[1] == s_ol_00116fa0[0]);
    auVar20[1] = -((char)((ushort)*(undefined2 *)param_2[1] >> 8) == s_ol_00116fa0[1]);
    auVar20[2] = -(s_ol_00116fa0[2] == '\0');
    auVar20[3] = -(s_ol_00116fa0[3] == '\0');
    auVar20[4] = -(UNK_00116fa4 == '\0');
    auVar20[5] = -(UNK_00116fa5 == '\0');
    auVar20[6] = -(UNK_00116fa6 == '\0');
    auVar20[7] = -(UNK_00116fa7 == '\0');
    auVar20[8] = -(UNK_00116fa8 == '\0');
    auVar20[9] = -(UNK_00116fa9 == '\0');
    auVar20[10] = -(UNK_00116faa == '\0');
    auVar20[0xb] = -(UNK_00116fab == '\0');
    auVar20[0xc] = -(UNK_00116fac == '\0');
    auVar20[0xd] = -(UNK_00116fad == '\0');
    auVar20[0xe] = -(UNK_00116fae == '\0');
    auVar20[0xf] = -(UNK_00116faf == '\0');
    auVar20 = auVar20 & auVar10;
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
      *(undefined1 *)(param_1 + 1) = 0xc;
      goto LAB_0014b4df;
    }
    auVar11[0] = -((*param_2)[0] == DAT_00117200);
    auVar11[1] = -((*param_2)[1] == UNK_00117201);
    auVar11[2] = -((*param_2)[2] == UNK_00117202);
    auVar11[3] = -((*param_2)[3] == UNK_00117203);
    auVar11[4] = -((*param_2)[4] == UNK_00117204);
    auVar11[5] = -((*param_2)[5] == UNK_00117205);
    auVar11[6] = -((*param_2)[6] == UNK_00117206);
    auVar11[7] = -((*param_2)[7] == UNK_00117207);
    auVar11[8] = -((*param_2)[8] == UNK_00117208);
    auVar11[9] = -((*param_2)[9] == UNK_00117209);
    auVar11[10] = -((*param_2)[10] == UNK_0011720a);
    auVar11[0xb] = -((*param_2)[0xb] == UNK_0011720b);
    auVar11[0xc] = -((*param_2)[0xc] == UNK_0011720c);
    auVar11[0xd] = -((*param_2)[0xd] == UNK_0011720d);
    auVar11[0xe] = -((*param_2)[0xe] == UNK_0011720e);
    auVar11[0xf] = -((*param_2)[0xf] == UNK_0011720f);
    auVar21[0] = -((char)*(undefined2 *)param_2[1] == DAT_001174e0);
    auVar21[1] = -((char)((ushort)*(undefined2 *)param_2[1] >> 8) == UNK_001174e1);
    auVar21[2] = -(UNK_001174e2 == '\0');
    auVar21[3] = -(UNK_001174e3 == '\0');
    auVar21[4] = -(UNK_001174e4 == '\0');
    auVar21[5] = -(UNK_001174e5 == '\0');
    auVar21[6] = -(UNK_001174e6 == '\0');
    auVar21[7] = -(UNK_001174e7 == '\0');
    auVar21[8] = -(UNK_001174e8 == '\0');
    auVar21[9] = -(UNK_001174e9 == '\0');
    auVar21[10] = -(UNK_001174ea == '\0');
    auVar21[0xb] = -(UNK_001174eb == '\0');
    auVar21[0xc] = -(UNK_001174ec == '\0');
    auVar21[0xd] = -(UNK_001174ed == '\0');
    auVar21[0xe] = -(UNK_001174ee == '\0');
    auVar21[0xf] = -(UNK_001174ef == '\0');
    auVar21 = auVar21 & auVar11;
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
      *(undefined1 *)(param_1 + 1) = 0xd;
      goto LAB_0014b4df;
    }
    auVar12[0] = -((*param_2)[0] == s_max_single_net_v_00117230[0]);
    auVar12[1] = -((*param_2)[1] == s_max_single_net_v_00117230[1]);
    auVar12[2] = -((*param_2)[2] == s_max_single_net_v_00117230[2]);
    auVar12[3] = -((*param_2)[3] == s_max_single_net_v_00117230[3]);
    auVar12[4] = -((*param_2)[4] == s_max_single_net_v_00117230[4]);
    auVar12[5] = -((*param_2)[5] == s_max_single_net_v_00117230[5]);
    auVar12[6] = -((*param_2)[6] == s_max_single_net_v_00117230[6]);
    auVar12[7] = -((*param_2)[7] == s_max_single_net_v_00117230[7]);
    auVar12[8] = -((*param_2)[8] == s_max_single_net_v_00117230[8]);
    auVar12[9] = -((*param_2)[9] == s_max_single_net_v_00117230[9]);
    auVar12[10] = -((*param_2)[10] == s_max_single_net_v_00117230[10]);
    auVar12[0xb] = -((*param_2)[0xb] == s_max_single_net_v_00117230[0xb]);
    auVar12[0xc] = -((*param_2)[0xc] == s_max_single_net_v_00117230[0xc]);
    auVar12[0xd] = -((*param_2)[0xd] == s_max_single_net_v_00117230[0xd]);
    auVar12[0xe] = -((*param_2)[0xe] == s_max_single_net_v_00117230[0xe]);
    auVar12[0xf] = -((*param_2)[0xf] == s_max_single_net_v_00117230[0xf]);
    auVar22[0] = -((char)*(undefined2 *)param_2[1] == s_ol_00116fa0[0]);
    auVar22[1] = -((char)((ushort)*(undefined2 *)param_2[1] >> 8) == s_ol_00116fa0[1]);
    auVar22[2] = -(s_ol_00116fa0[2] == '\0');
    auVar22[3] = -(s_ol_00116fa0[3] == '\0');
    auVar22[4] = -(UNK_00116fa4 == '\0');
    auVar22[5] = -(UNK_00116fa5 == '\0');
    auVar22[6] = -(UNK_00116fa6 == '\0');
    auVar22[7] = -(UNK_00116fa7 == '\0');
    auVar22[8] = -(UNK_00116fa8 == '\0');
    auVar22[9] = -(UNK_00116fa9 == '\0');
    auVar22[10] = -(UNK_00116faa == '\0');
    auVar22[0xb] = -(UNK_00116fab == '\0');
    auVar22[0xc] = -(UNK_00116fac == '\0');
    auVar22[0xd] = -(UNK_00116fad == '\0');
    auVar22[0xe] = -(UNK_00116fae == '\0');
    auVar22[0xf] = -(UNK_00116faf == '\0');
    auVar22 = auVar22 & auVar12;
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
      *(undefined1 *)(param_1 + 1) = 0xe;
      goto LAB_0014b4df;
    }
    auVar13[0] = -((*param_2)[0] == DAT_00117380);
    auVar13[1] = -((*param_2)[1] == UNK_00117381);
    auVar13[2] = -((*param_2)[2] == UNK_00117382);
    auVar13[3] = -((*param_2)[3] == UNK_00117383);
    auVar13[4] = -((*param_2)[4] == UNK_00117384);
    auVar13[5] = -((*param_2)[5] == UNK_00117385);
    auVar13[6] = -((*param_2)[6] == UNK_00117386);
    auVar13[7] = -((*param_2)[7] == UNK_00117387);
    auVar13[8] = -((*param_2)[8] == UNK_00117388);
    auVar13[9] = -((*param_2)[9] == UNK_00117389);
    auVar13[10] = -((*param_2)[10] == UNK_0011738a);
    auVar13[0xb] = -((*param_2)[0xb] == UNK_0011738b);
    auVar13[0xc] = -((*param_2)[0xc] == UNK_0011738c);
    auVar13[0xd] = -((*param_2)[0xd] == UNK_0011738d);
    auVar13[0xe] = -((*param_2)[0xe] == UNK_0011738e);
    auVar13[0xf] = -((*param_2)[0xf] == UNK_0011738f);
    auVar23[0] = -((char)*(undefined2 *)param_2[1] == DAT_001174e0);
    auVar23[1] = -((char)((ushort)*(undefined2 *)param_2[1] >> 8) == UNK_001174e1);
    auVar23[2] = -(UNK_001174e2 == '\0');
    auVar23[3] = -(UNK_001174e3 == '\0');
    auVar23[4] = -(UNK_001174e4 == '\0');
    auVar23[5] = -(UNK_001174e5 == '\0');
    auVar23[6] = -(UNK_001174e6 == '\0');
    auVar23[7] = -(UNK_001174e7 == '\0');
    auVar23[8] = -(UNK_001174e8 == '\0');
    auVar23[9] = -(UNK_001174e9 == '\0');
    auVar23[10] = -(UNK_001174ea == '\0');
    auVar23[0xb] = -(UNK_001174eb == '\0');
    auVar23[0xc] = -(UNK_001174ec == '\0');
    auVar23[0xd] = -(UNK_001174ed == '\0');
    auVar23[0xe] = -(UNK_001174ee == '\0');
    auVar23[0xf] = -(UNK_001174ef == '\0');
    auVar23 = auVar23 & auVar13;
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
      *(undefined1 *)(param_1 + 1) = 0xf;
      goto LAB_0014b4df;
    }
    break;
  case 0x13:
    auVar24[0] = -((*param_2)[3] == DAT_00116fc0);
    auVar24[1] = -((*param_2)[4] == UNK_00116fc1);
    auVar24[2] = -((*param_2)[5] == UNK_00116fc2);
    auVar24[3] = -((*param_2)[6] == UNK_00116fc3);
    auVar24[4] = -((*param_2)[7] == UNK_00116fc4);
    auVar24[5] = -((*param_2)[8] == UNK_00116fc5);
    auVar24[6] = -((*param_2)[9] == UNK_00116fc6);
    auVar24[7] = -((*param_2)[10] == UNK_00116fc7);
    auVar24[8] = -((*param_2)[0xb] == UNK_00116fc8);
    auVar24[9] = -((*param_2)[0xc] == UNK_00116fc9);
    auVar24[10] = -((*param_2)[0xd] == UNK_00116fca);
    auVar24[0xb] = -((*param_2)[0xe] == UNK_00116fcb);
    auVar24[0xc] = -((*param_2)[0xf] == UNK_00116fcc);
    auVar24[0xd] = -(param_2[1][0] == UNK_00116fcd);
    auVar24[0xe] = -(param_2[1][1] == UNK_00116fce);
    auVar24[0xf] = -(param_2[1][2] == UNK_00116fcf);
    auVar14[0] = -((*param_2)[0] == DAT_00117390);
    auVar14[1] = -((*param_2)[1] == UNK_00117391);
    auVar14[2] = -((*param_2)[2] == UNK_00117392);
    auVar14[3] = -((*param_2)[3] == UNK_00117393);
    auVar14[4] = -((*param_2)[4] == UNK_00117394);
    auVar14[5] = -((*param_2)[5] == UNK_00117395);
    auVar14[6] = -((*param_2)[6] == UNK_00117396);
    auVar14[7] = -((*param_2)[7] == UNK_00117397);
    auVar14[8] = -((*param_2)[8] == UNK_00117398);
    auVar14[9] = -((*param_2)[9] == UNK_00117399);
    auVar14[10] = -((*param_2)[10] == UNK_0011739a);
    auVar14[0xb] = -((*param_2)[0xb] == UNK_0011739b);
    auVar14[0xc] = -((*param_2)[0xc] == UNK_0011739c);
    auVar14[0xd] = -((*param_2)[0xd] == UNK_0011739d);
    auVar14[0xe] = -((*param_2)[0xe] == UNK_0011739e);
    auVar14[0xf] = -((*param_2)[0xf] == UNK_0011739f);
    auVar14 = auVar14 & auVar24;
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
      *(undefined1 *)(param_1 + 1) = 3;
      goto LAB_0014b4df;
    }
    iVar5 = (*(code *)PTR_bcmp_001d9378)
                      (param_2,
                       "taker_rate_baselinemax_taker_ratetrade_slipperyclose_position_block_msmax_single_add_volmax_single_add_amtmax_single_net_volmax_single_net_amtmax_single_close_volmax_single_close_amtdyn_score_position_ts_threshold_sdyn_score_max_position_ts_sdyn_score_delta_scoredyn_pending_position_ts_threshold_sdyn_pending_max_position_ts_s"
                       ,param_3);
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 1) = 8;
      goto LAB_0014b4df;
    }
    iVar5 = (*(code *)PTR_bcmp_001d9378)(param_2,"long_open_threshold",param_3);
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x12;
      goto LAB_0014b4df;
    }
    break;
  case 0x14:
    uVar1 = *(undefined4 *)param_2[1];
    auVar26[0] = -((char)uVar1 == DAT_00116f60);
    auVar26[1] = -((char)((uint)uVar1 >> 8) == UNK_00116f61);
    auVar26[2] = -((char)((uint)uVar1 >> 0x10) == UNK_00116f62);
    auVar26[3] = -((char)((uint)uVar1 >> 0x18) == UNK_00116f63);
    auVar26[4] = -(UNK_00116f64 == '\0');
    auVar26[5] = -(UNK_00116f65 == '\0');
    auVar26[6] = -(UNK_00116f66 == '\0');
    auVar26[7] = -(UNK_00116f67 == '\0');
    auVar26[8] = -(UNK_00116f68 == '\0');
    auVar26[9] = -(UNK_00116f69 == '\0');
    auVar26[10] = -(UNK_00116f6a == '\0');
    auVar26[0xb] = -(UNK_00116f6b == '\0');
    auVar26[0xc] = -(UNK_00116f6c == '\0');
    auVar26[0xd] = -(UNK_00116f6d == '\0');
    auVar26[0xe] = -(UNK_00116f6e == '\0');
    auVar26[0xf] = -(UNK_00116f6f == '\0');
    auVar16[0] = -((*param_2)[0] == DAT_001170c0);
    auVar16[1] = -((*param_2)[1] == UNK_001170c1);
    auVar16[2] = -((*param_2)[2] == UNK_001170c2);
    auVar16[3] = -((*param_2)[3] == UNK_001170c3);
    auVar16[4] = -((*param_2)[4] == UNK_001170c4);
    auVar16[5] = -((*param_2)[5] == UNK_001170c5);
    auVar16[6] = -((*param_2)[6] == UNK_001170c6);
    auVar16[7] = -((*param_2)[7] == UNK_001170c7);
    auVar16[8] = -((*param_2)[8] == UNK_001170c8);
    auVar16[9] = -((*param_2)[9] == UNK_001170c9);
    auVar16[10] = -((*param_2)[10] == UNK_001170ca);
    auVar16[0xb] = -((*param_2)[0xb] == UNK_001170cb);
    auVar16[0xc] = -((*param_2)[0xc] == UNK_001170cc);
    auVar16[0xd] = -((*param_2)[0xd] == UNK_001170cd);
    auVar16[0xe] = -((*param_2)[0xe] == UNK_001170ce);
    auVar16[0xf] = -((*param_2)[0xf] == UNK_001170cf);
    auVar16 = auVar16 & auVar26;
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
      *(undefined1 *)(param_1 + 1) = 0x10;
      goto LAB_0014b4df;
    }
    auVar8 = *param_2;
    uVar1 = *(undefined4 *)param_2[1];
    auVar30[0] = -((char)uVar1 == s__amt_00117190[0]);
    auVar30[1] = -((char)((uint)uVar1 >> 8) == s__amt_00117190[1]);
    auVar30[2] = -((char)((uint)uVar1 >> 0x10) == s__amt_00117190[2]);
    auVar30[3] = -((char)((uint)uVar1 >> 0x18) == s__amt_00117190[3]);
    auVar30[4] = -(s__amt_00117190[4] == '\0');
    auVar30[5] = -(s__amt_00117190[5] == '\0');
    auVar30[6] = -(s__amt_00117190[6] == '\0');
    auVar30[7] = -(s__amt_00117190[7] == '\0');
    auVar30[8] = -(UNK_00117198 == '\0');
    auVar30[9] = -(UNK_00117199 == '\0');
    auVar30[10] = -(UNK_0011719a == '\0');
    auVar30[0xb] = -(UNK_0011719b == '\0');
    auVar30[0xc] = -(UNK_0011719c == '\0');
    auVar30[0xd] = -(UNK_0011719d == '\0');
    auVar30[0xe] = -(UNK_0011719e == '\0');
    auVar30[0xf] = -(UNK_0011719f == '\0');
    auVar27[0] = -(auVar8[0] == 'm');
    auVar27[1] = -(auVar8[1] == 'a');
    auVar27[2] = -(auVar8[2] == 'x');
    auVar27[3] = -(auVar8[3] == '_');
    auVar27[4] = -(auVar8[4] == 's');
    auVar27[5] = -(auVar8[5] == 'i');
    auVar27[6] = -(auVar8[6] == 'n');
    auVar27[7] = -(auVar8[7] == 'g');
    auVar27[8] = -(auVar8[8] == 'l');
    auVar27[9] = -(auVar8[9] == 'e');
    auVar27[10] = -(auVar8[10] == '_');
    auVar27[0xb] = -(auVar8[0xb] == 'c');
    auVar27[0xc] = -(auVar8[0xc] == 'l');
    auVar27[0xd] = -(auVar8[0xd] == 'o');
    auVar27[0xe] = -(auVar8[0xe] == 's');
    auVar27[0xf] = -(auVar8[0xf] == 'e');
    auVar30 = auVar30 & auVar27;
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
      *(undefined1 *)(param_1 + 1) = 0x11;
      goto LAB_0014b4df;
    }
    iVar5 = (*(code *)PTR_bcmp_001d9378)(param_2,"long_close_threshold",param_3);
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x13;
      goto LAB_0014b4df;
    }
    iVar5 = (*(code *)PTR_bcmp_001d9378)(param_2,"short_open_threshold",param_3);
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x14;
      goto LAB_0014b4df;
    }
    bVar4 = true;
    bVar2 = false;
    uVar6 = param_3 - 0x15U >> 1 | (ulong)((param_3 - 0x15U & 1) != 0) << 0x3f;
    goto joined_r0x0014b32e;
  case 0x16:
    auVar25[0] = -((*param_2)[6] == DAT_00116fb0);
    auVar25[1] = -((*param_2)[7] == UNK_00116fb1);
    auVar25[2] = -((*param_2)[8] == UNK_00116fb2);
    auVar25[3] = -((*param_2)[9] == UNK_00116fb3);
    auVar25[4] = -((*param_2)[10] == UNK_00116fb4);
    auVar25[5] = -((*param_2)[0xb] == UNK_00116fb5);
    auVar25[6] = -((*param_2)[0xc] == UNK_00116fb6);
    auVar25[7] = -((*param_2)[0xd] == UNK_00116fb7);
    auVar25[8] = -((*param_2)[0xe] == UNK_00116fb8);
    auVar25[9] = -((*param_2)[0xf] == UNK_00116fb9);
    auVar25[10] = -(param_2[1][0] == UNK_00116fba);
    auVar25[0xb] = -(param_2[1][1] == UNK_00116fbb);
    auVar25[0xc] = -(param_2[1][2] == UNK_00116fbc);
    auVar25[0xd] = -(param_2[1][3] == UNK_00116fbd);
    auVar25[0xe] = -(param_2[1][4] == UNK_00116fbe);
    auVar25[0xf] = -(param_2[1][5] == UNK_00116fbf);
    auVar15[0] = -((*param_2)[0] == DAT_001170e0);
    auVar15[1] = -((*param_2)[1] == UNK_001170e1);
    auVar15[2] = -((*param_2)[2] == UNK_001170e2);
    auVar15[3] = -((*param_2)[3] == UNK_001170e3);
    auVar15[4] = -((*param_2)[4] == UNK_001170e4);
    auVar15[5] = -((*param_2)[5] == UNK_001170e5);
    auVar15[6] = -((*param_2)[6] == UNK_001170e6);
    auVar15[7] = -((*param_2)[7] == UNK_001170e7);
    auVar15[8] = -((*param_2)[8] == UNK_001170e8);
    auVar15[9] = -((*param_2)[9] == UNK_001170e9);
    auVar15[10] = -((*param_2)[10] == UNK_001170ea);
    auVar15[0xb] = -((*param_2)[0xb] == UNK_001170eb);
    auVar15[0xc] = -((*param_2)[0xc] == UNK_001170ec);
    auVar15[0xd] = -((*param_2)[0xd] == UNK_001170ed);
    auVar15[0xe] = -((*param_2)[0xe] == UNK_001170ee);
    auVar15[0xf] = -((*param_2)[0xf] == UNK_001170ef);
    auVar15 = auVar15 & auVar25;
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
      *(undefined1 *)(param_1 + 1) = 7;
      goto LAB_0014b4df;
    }
    bVar2 = true;
    goto switchD_0014aeb5_caseD_c;
  case 0x17:
    auVar19[0] = -((*param_2)[7] == DAT_001173b0);
    auVar19[1] = -((*param_2)[8] == UNK_001173b1);
    auVar19[2] = -((*param_2)[9] == UNK_001173b2);
    auVar19[3] = -((*param_2)[10] == UNK_001173b3);
    auVar19[4] = -((*param_2)[0xb] == UNK_001173b4);
    auVar19[5] = -((*param_2)[0xc] == UNK_001173b5);
    auVar19[6] = -((*param_2)[0xd] == UNK_001173b6);
    auVar19[7] = -((*param_2)[0xe] == UNK_001173b7);
    auVar19[8] = -((*param_2)[0xf] == UNK_001173b8);
    auVar19[9] = -(param_2[1][0] == UNK_001173b9);
    auVar19[10] = -(param_2[1][1] == UNK_001173ba);
    auVar19[0xb] = -(param_2[1][2] == UNK_001173bb);
    auVar19[0xc] = -(param_2[1][3] == UNK_001173bc);
    auVar19[0xd] = -(param_2[1][4] == UNK_001173bd);
    auVar19[0xe] = -(param_2[1][5] == UNK_001173be);
    auVar19[0xf] = -(param_2[1][6] == UNK_001173bf);
    auVar8[0] = -((*param_2)[0] == DAT_00117040);
    auVar8[1] = -((*param_2)[1] == UNK_00117041);
    auVar8[2] = -((*param_2)[2] == UNK_00117042);
    auVar8[3] = -((*param_2)[3] == UNK_00117043);
    auVar8[4] = -((*param_2)[4] == UNK_00117044);
    auVar8[5] = -((*param_2)[5] == UNK_00117045);
    auVar8[6] = -((*param_2)[6] == UNK_00117046);
    auVar8[7] = -((*param_2)[7] == UNK_00117047);
    auVar8[8] = -((*param_2)[8] == UNK_00117048);
    auVar8[9] = -((*param_2)[9] == UNK_00117049);
    auVar8[10] = -((*param_2)[10] == UNK_0011704a);
    auVar8[0xb] = -((*param_2)[0xb] == UNK_0011704b);
    auVar8[0xc] = -((*param_2)[0xc] == UNK_0011704c);
    auVar8[0xd] = -((*param_2)[0xd] == UNK_0011704d);
    auVar8[0xe] = -((*param_2)[0xe] == UNK_0011704e);
    auVar8[0xf] = -((*param_2)[0xf] == UNK_0011704f);
    auVar8 = auVar8 & auVar19;
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
      *(undefined1 *)(param_1 + 1) = 0xb;
      goto LAB_0014b4df;
    }
  }
  bVar2 = false;
switchD_0014aeb5_caseD_c:
  bVar4 = false;
  uVar6 = param_3 - 0x15U >> 1 | (ulong)((param_3 - 0x15U & 1) != 0) << 0x3f;
joined_r0x0014b32e:
  if (uVar6 < 8) {
                    /* WARNING: Could not recover jumptable at 0x0014b170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar7 = (undefined8 *)(*(code *)(&DAT_00117af0 + *(int *)(&DAT_00117af0 + uVar6 * 4)))();
    return puVar7;
  }
  if (param_3 == 0x25) {
    iVar5 = (*(code *)PTR_bcmp_001d9378)
                      (param_2,
                       "dyn_pending_order_max_pending_time_msdyn_pending_delta_max_pending_ts_ms",
                       0x25);
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x1b;
      goto LAB_0014b4df;
    }
    bVar3 = false;
  }
  else if (param_3 == 0x1d) {
    auVar28[0] = -((*param_2)[0xd] == DAT_00116f40);
    auVar28[1] = -((*param_2)[0xe] == UNK_00116f41);
    auVar28[2] = -((*param_2)[0xf] == UNK_00116f42);
    auVar28[3] = -(param_2[1][0] == UNK_00116f43);
    auVar28[4] = -(param_2[1][1] == UNK_00116f44);
    auVar28[5] = -(param_2[1][2] == UNK_00116f45);
    auVar28[6] = -(param_2[1][3] == UNK_00116f46);
    auVar28[7] = -(param_2[1][4] == UNK_00116f47);
    auVar28[8] = -(param_2[1][5] == UNK_00116f48);
    auVar28[9] = -(param_2[1][6] == UNK_00116f49);
    auVar28[10] = -(param_2[1][7] == UNK_00116f4a);
    auVar28[0xb] = -(param_2[1][8] == UNK_00116f4b);
    auVar28[0xc] = -(param_2[1][9] == UNK_00116f4c);
    auVar28[0xd] = -(param_2[1][10] == UNK_00116f4d);
    auVar28[0xe] = -(param_2[1][0xb] == UNK_00116f4e);
    auVar28[0xf] = -(param_2[1][0xc] == UNK_00116f4f);
    auVar17[0] = -((*param_2)[0] == DAT_001174f0);
    auVar17[1] = -((*param_2)[1] == UNK_001174f1);
    auVar17[2] = -((*param_2)[2] == UNK_001174f2);
    auVar17[3] = -((*param_2)[3] == UNK_001174f3);
    auVar17[4] = -((*param_2)[4] == UNK_001174f4);
    auVar17[5] = -((*param_2)[5] == UNK_001174f5);
    auVar17[6] = -((*param_2)[6] == UNK_001174f6);
    auVar17[7] = -((*param_2)[7] == UNK_001174f7);
    auVar17[8] = -((*param_2)[8] == UNK_001174f8);
    auVar17[9] = -((*param_2)[9] == UNK_001174f9);
    auVar17[10] = -((*param_2)[10] == UNK_001174fa);
    auVar17[0xb] = -((*param_2)[0xb] == UNK_001174fb);
    auVar17[0xc] = -((*param_2)[0xc] == UNK_001174fc);
    auVar17[0xd] = -((*param_2)[0xd] == UNK_001174fd);
    auVar17[0xe] = -((*param_2)[0xe] == UNK_001174fe);
    auVar17[0xf] = -((*param_2)[0xf] == UNK_001174ff);
    auVar17 = auVar17 & auVar28;
    bVar3 = true;
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
      *(undefined1 *)(param_1 + 1) = 0x1a;
      goto LAB_0014b4df;
    }
  }
  else {
    bVar3 = false;
  }
  if ((bVar2) &&
     (iVar5 = (*(code *)PTR_bcmp_001d9378)(param_2,"pair_rolling_window_ms",param_3), iVar5 == 0)) {
    *(undefined1 *)(param_1 + 1) = 0x1d;
  }
  else if ((bVar3) &&
          (iVar5 = (*(code *)PTR_bcmp_001d9378)(param_2,"pair_target_holding_period_ms",param_3),
          iVar5 == 0)) {
    *(undefined1 *)(param_1 + 1) = 0x1e;
  }
  else if ((bVar2) &&
          (iVar5 = (*(code *)PTR_bcmp_001d9378)(param_2,"score_thresholds_delta",param_3),
          iVar5 == 0)) {
    *(undefined1 *)(param_1 + 1) = 0x1f;
  }
  else if ((bVar4) &&
          (iVar5 = (*(code *)PTR_bcmp_001d9378)
                             (param_2,"score_thresholds_numrolling_window_ms",param_3), iVar5 == 0))
  {
    *(undefined1 *)(param_1 + 1) = 0x20;
  }
  else if (param_3 == 0x11) {
    auVar18[0] = -((*param_2)[0] == DAT_00117270);
    auVar18[1] = -((*param_2)[1] == UNK_00117271);
    auVar18[2] = -((*param_2)[2] == UNK_00117272);
    auVar18[3] = -((*param_2)[3] == UNK_00117273);
    auVar18[4] = -((*param_2)[4] == UNK_00117274);
    auVar18[5] = -((*param_2)[5] == UNK_00117275);
    auVar18[6] = -((*param_2)[6] == UNK_00117276);
    auVar18[7] = -((*param_2)[7] == UNK_00117277);
    auVar18[8] = -((*param_2)[8] == UNK_00117278);
    auVar18[9] = -((*param_2)[9] == UNK_00117279);
    auVar18[10] = -((*param_2)[10] == UNK_0011727a);
    auVar18[0xb] = -((*param_2)[0xb] == UNK_0011727b);
    auVar18[0xc] = -((*param_2)[0xc] == UNK_0011727c);
    auVar18[0xd] = -((*param_2)[0xd] == UNK_0011727d);
    auVar18[0xe] = -((*param_2)[0xe] == UNK_0011727e);
    auVar18[0xf] = -((*param_2)[0xf] == UNK_0011727f);
    auVar29[0] = -(param_2[1][0] == DAT_00117510);
    auVar29[1] = -(UNK_00117511 == '\0');
    auVar29[2] = -(UNK_00117512 == '\0');
    auVar29[3] = -(UNK_00117513 == '\0');
    auVar29[4] = -(UNK_00117514 == '\0');
    auVar29[5] = -(UNK_00117515 == '\0');
    auVar29[6] = -(UNK_00117516 == '\0');
    auVar29[7] = -(UNK_00117517 == '\0');
    auVar29[8] = -(UNK_00117518 == '\0');
    auVar29[9] = -(UNK_00117519 == '\0');
    auVar29[10] = -(UNK_0011751a == '\0');
    auVar29[0xb] = -(UNK_0011751b == '\0');
    auVar29[0xc] = -(UNK_0011751c == '\0');
    auVar29[0xd] = -(UNK_0011751d == '\0');
    auVar29[0xe] = -(UNK_0011751e == '\0');
    auVar29[0xf] = -(UNK_0011751f == '\0');
    auVar29 = auVar29 & auVar18;
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
      *(undefined1 *)(param_1 + 1) = 0x21;
    }
    else {
      *(undefined1 *)(param_1 + 1) = 0x22;
    }
  }
  else {
    *(undefined1 *)(param_1 + 1) = 0x22;
  }
LAB_0014b4df:
  *param_1 = 2;
  return param_1;
}


