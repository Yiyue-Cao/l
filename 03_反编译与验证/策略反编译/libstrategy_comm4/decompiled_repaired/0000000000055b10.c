// ELF address 0x0000000000055b10; <strategy_comm4::_::<impl serde_core::de::Deserialize for strategy_comm4::PhaseParams>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_str

/* _<strategy_comm4::_::<impl serde_core::de::Deserialize for
   strategy_comm4::PhaseParams>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_str
    */

void __rustcall
_<strategy_comm4::_::<impl_serde_core::de::Deserialize_for_strategy_comm4::PhaseParams>::deserialize::__FieldVisitor_as_serde_core::de::Visitor>
::visit_str(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
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
  
  switch(param_3) {
  case 10:
    if ((short)param_2[1] != 0x6e6f || *param_2 != 0x697463615f776f6c) {
      *(undefined1 *)(param_1 + 1) = 0xf;
      *param_1 = 2;
      return;
    }
    *(undefined1 *)(param_1 + 1) = 0xe;
    *param_1 = 2;
    return;
  case 0xd:
    if (*(long *)((long)param_2 + 5) == 0x6b5f7265766f635f && *param_2 == 0x6f635f72656b6174) {
      *(undefined1 *)(param_1 + 1) = 10;
      *param_1 = 2;
      return;
    }
    break;
  case 0xe:
    if (*(long *)((long)param_2 + 6) == 0x78616d5f746c756d && *param_2 == 0x756d5f72656b6174) {
      *(undefined1 *)(param_1 + 1) = 9;
      *param_1 = 2;
      return;
    }
    if (*(long *)((long)param_2 + 6) == 0x657461725f72656b && *param_2 == 0x656b61745f78616d) {
      *(undefined1 *)(param_1 + 1) = 0xd;
      *param_1 = 2;
      return;
    }
    break;
  case 0x12:
    auVar6[0] = -((char)*param_2 == s_max_single_net_v_00115e70[0]);
    auVar6[1] = -(*(char *)((long)param_2 + 1) == s_max_single_net_v_00115e70[1]);
    auVar6[2] = -(*(char *)((long)param_2 + 2) == s_max_single_net_v_00115e70[2]);
    auVar6[3] = -(*(char *)((long)param_2 + 3) == s_max_single_net_v_00115e70[3]);
    auVar6[4] = -(*(char *)((long)param_2 + 4) == s_max_single_net_v_00115e70[4]);
    auVar6[5] = -(*(char *)((long)param_2 + 5) == s_max_single_net_v_00115e70[5]);
    auVar6[6] = -(*(char *)((long)param_2 + 6) == s_max_single_net_v_00115e70[6]);
    auVar6[7] = -(*(char *)((long)param_2 + 7) == s_max_single_net_v_00115e70[7]);
    auVar6[8] = -((char)param_2[1] == s_max_single_net_v_00115e70[8]);
    auVar6[9] = -(*(char *)((long)param_2 + 9) == s_max_single_net_v_00115e70[9]);
    auVar6[10] = -(*(char *)((long)param_2 + 10) == s_max_single_net_v_00115e70[10]);
    auVar6[0xb] = -(*(char *)((long)param_2 + 0xb) == s_max_single_net_v_00115e70[0xb]);
    auVar6[0xc] = -(*(char *)((long)param_2 + 0xc) == s_max_single_net_v_00115e70[0xc]);
    auVar6[0xd] = -(*(char *)((long)param_2 + 0xd) == s_max_single_net_v_00115e70[0xd]);
    auVar6[0xe] = -(*(char *)((long)param_2 + 0xe) == s_max_single_net_v_00115e70[0xe]);
    auVar6[0xf] = -(*(char *)((long)param_2 + 0xf) == s_max_single_net_v_00115e70[0xf]);
    auVar17[0] = -((char)(short)param_2[2] == s_ol_00115b50[0]);
    auVar17[1] = -((char)((ushort)(short)param_2[2] >> 8) == s_ol_00115b50[1]);
    auVar17[2] = -(s_ol_00115b50[2] == '\0');
    auVar17[3] = -(s_ol_00115b50[3] == '\0');
    auVar17[4] = -(UNK_00115b54 == '\0');
    auVar17[5] = -(UNK_00115b55 == '\0');
    auVar17[6] = -(UNK_00115b56 == '\0');
    auVar17[7] = -(UNK_00115b57 == '\0');
    auVar17[8] = -(UNK_00115b58 == '\0');
    auVar17[9] = -(UNK_00115b59 == '\0');
    auVar17[10] = -(UNK_00115b5a == '\0');
    auVar17[0xb] = -(UNK_00115b5b == '\0');
    auVar17[0xc] = -(UNK_00115b5c == '\0');
    auVar17[0xd] = -(UNK_00115b5d == '\0');
    auVar17[0xe] = -(UNK_00115b5e == '\0');
    auVar17[0xf] = -(UNK_00115b5f == '\0');
    auVar17 = auVar17 & auVar6;
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
      *(undefined1 *)(param_1 + 1) = 4;
      *param_1 = 2;
      return;
    }
    auVar7[0] = -((char)*param_2 == s_max_single_net_a_00116010[0]);
    auVar7[1] = -(*(char *)((long)param_2 + 1) == s_max_single_net_a_00116010[1]);
    auVar7[2] = -(*(char *)((long)param_2 + 2) == s_max_single_net_a_00116010[2]);
    auVar7[3] = -(*(char *)((long)param_2 + 3) == s_max_single_net_a_00116010[3]);
    auVar7[4] = -(*(char *)((long)param_2 + 4) == s_max_single_net_a_00116010[4]);
    auVar7[5] = -(*(char *)((long)param_2 + 5) == s_max_single_net_a_00116010[5]);
    auVar7[6] = -(*(char *)((long)param_2 + 6) == s_max_single_net_a_00116010[6]);
    auVar7[7] = -(*(char *)((long)param_2 + 7) == s_max_single_net_a_00116010[7]);
    auVar7[8] = -((char)param_2[1] == s_max_single_net_a_00116010[8]);
    auVar7[9] = -(*(char *)((long)param_2 + 9) == s_max_single_net_a_00116010[9]);
    auVar7[10] = -(*(char *)((long)param_2 + 10) == s_max_single_net_a_00116010[10]);
    auVar7[0xb] = -(*(char *)((long)param_2 + 0xb) == s_max_single_net_a_00116010[0xb]);
    auVar7[0xc] = -(*(char *)((long)param_2 + 0xc) == s_max_single_net_a_00116010[0xc]);
    auVar7[0xd] = -(*(char *)((long)param_2 + 0xd) == s_max_single_net_a_00116010[0xd]);
    auVar7[0xe] = -(*(char *)((long)param_2 + 0xe) == s_max_single_net_a_00116010[0xe]);
    auVar7[0xf] = -(*(char *)((long)param_2 + 0xf) == s_max_single_net_a_00116010[0xf]);
    auVar18[0] = -((char)(short)param_2[2] == DAT_001161f0);
    auVar18[1] = -((char)((ushort)(short)param_2[2] >> 8) == UNK_001161f1);
    auVar18[2] = -(UNK_001161f2 == '\0');
    auVar18[3] = -(UNK_001161f3 == '\0');
    auVar18[4] = -(UNK_001161f4 == '\0');
    auVar18[5] = -(UNK_001161f5 == '\0');
    auVar18[6] = -(UNK_001161f6 == '\0');
    auVar18[7] = -(UNK_001161f7 == '\0');
    auVar18[8] = -(UNK_001161f8 == '\0');
    auVar18[9] = -(UNK_001161f9 == '\0');
    auVar18[10] = -(UNK_001161fa == '\0');
    auVar18[0xb] = -(UNK_001161fb == '\0');
    auVar18[0xc] = -(UNK_001161fc == '\0');
    auVar18[0xd] = -(UNK_001161fd == '\0');
    auVar18[0xe] = -(UNK_001161fe == '\0');
    auVar18[0xf] = -(UNK_001161ff == '\0');
    auVar18 = auVar18 & auVar7;
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
      *(undefined1 *)(param_1 + 1) = 5;
      *param_1 = 2;
      return;
    }
    auVar8[0] = -((char)*param_2 == s_max_single_add_v_00115f00[0]);
    auVar8[1] = -(*(char *)((long)param_2 + 1) == s_max_single_add_v_00115f00[1]);
    auVar8[2] = -(*(char *)((long)param_2 + 2) == s_max_single_add_v_00115f00[2]);
    auVar8[3] = -(*(char *)((long)param_2 + 3) == s_max_single_add_v_00115f00[3]);
    auVar8[4] = -(*(char *)((long)param_2 + 4) == s_max_single_add_v_00115f00[4]);
    auVar8[5] = -(*(char *)((long)param_2 + 5) == s_max_single_add_v_00115f00[5]);
    auVar8[6] = -(*(char *)((long)param_2 + 6) == s_max_single_add_v_00115f00[6]);
    auVar8[7] = -(*(char *)((long)param_2 + 7) == s_max_single_add_v_00115f00[7]);
    auVar8[8] = -((char)param_2[1] == s_max_single_add_v_00115f00[8]);
    auVar8[9] = -(*(char *)((long)param_2 + 9) == s_max_single_add_v_00115f00[9]);
    auVar8[10] = -(*(char *)((long)param_2 + 10) == s_max_single_add_v_00115f00[10]);
    auVar8[0xb] = -(*(char *)((long)param_2 + 0xb) == s_max_single_add_v_00115f00[0xb]);
    auVar8[0xc] = -(*(char *)((long)param_2 + 0xc) == s_max_single_add_v_00115f00[0xc]);
    auVar8[0xd] = -(*(char *)((long)param_2 + 0xd) == s_max_single_add_v_00115f00[0xd]);
    auVar8[0xe] = -(*(char *)((long)param_2 + 0xe) == s_max_single_add_v_00115f00[0xe]);
    auVar8[0xf] = -(*(char *)((long)param_2 + 0xf) == s_max_single_add_v_00115f00[0xf]);
    auVar19[0] = -((char)(short)param_2[2] == s_ol_00115b50[0]);
    auVar19[1] = -((char)((ushort)(short)param_2[2] >> 8) == s_ol_00115b50[1]);
    auVar19[2] = -(s_ol_00115b50[2] == '\0');
    auVar19[3] = -(s_ol_00115b50[3] == '\0');
    auVar19[4] = -(UNK_00115b54 == '\0');
    auVar19[5] = -(UNK_00115b55 == '\0');
    auVar19[6] = -(UNK_00115b56 == '\0');
    auVar19[7] = -(UNK_00115b57 == '\0');
    auVar19[8] = -(UNK_00115b58 == '\0');
    auVar19[9] = -(UNK_00115b59 == '\0');
    auVar19[10] = -(UNK_00115b5a == '\0');
    auVar19[0xb] = -(UNK_00115b5b == '\0');
    auVar19[0xc] = -(UNK_00115b5c == '\0');
    auVar19[0xd] = -(UNK_00115b5d == '\0');
    auVar19[0xe] = -(UNK_00115b5e == '\0');
    auVar19[0xf] = -(UNK_00115b5f == '\0');
    auVar19 = auVar19 & auVar8;
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
      *(undefined1 *)(param_1 + 1) = 6;
      *param_1 = 2;
      return;
    }
    auVar9[0] = -((char)*param_2 == DAT_00115e40);
    auVar9[1] = -(*(char *)((long)param_2 + 1) == UNK_00115e41);
    auVar9[2] = -(*(char *)((long)param_2 + 2) == UNK_00115e42);
    auVar9[3] = -(*(char *)((long)param_2 + 3) == UNK_00115e43);
    auVar9[4] = -(*(char *)((long)param_2 + 4) == UNK_00115e44);
    auVar9[5] = -(*(char *)((long)param_2 + 5) == UNK_00115e45);
    auVar9[6] = -(*(char *)((long)param_2 + 6) == UNK_00115e46);
    auVar9[7] = -(*(char *)((long)param_2 + 7) == UNK_00115e47);
    auVar9[8] = -((char)param_2[1] == UNK_00115e48);
    auVar9[9] = -(*(char *)((long)param_2 + 9) == UNK_00115e49);
    auVar9[10] = -(*(char *)((long)param_2 + 10) == UNK_00115e4a);
    auVar9[0xb] = -(*(char *)((long)param_2 + 0xb) == UNK_00115e4b);
    auVar9[0xc] = -(*(char *)((long)param_2 + 0xc) == UNK_00115e4c);
    auVar9[0xd] = -(*(char *)((long)param_2 + 0xd) == UNK_00115e4d);
    auVar9[0xe] = -(*(char *)((long)param_2 + 0xe) == UNK_00115e4e);
    auVar9[0xf] = -(*(char *)((long)param_2 + 0xf) == UNK_00115e4f);
    auVar20[0] = -((char)(short)param_2[2] == DAT_001161f0);
    auVar20[1] = -((char)((ushort)(short)param_2[2] >> 8) == UNK_001161f1);
    auVar20[2] = -(UNK_001161f2 == '\0');
    auVar20[3] = -(UNK_001161f3 == '\0');
    auVar20[4] = -(UNK_001161f4 == '\0');
    auVar20[5] = -(UNK_001161f5 == '\0');
    auVar20[6] = -(UNK_001161f6 == '\0');
    auVar20[7] = -(UNK_001161f7 == '\0');
    auVar20[8] = -(UNK_001161f8 == '\0');
    auVar20[9] = -(UNK_001161f9 == '\0');
    auVar20[10] = -(UNK_001161fa == '\0');
    auVar20[0xb] = -(UNK_001161fb == '\0');
    auVar20[0xc] = -(UNK_001161fc == '\0');
    auVar20[0xd] = -(UNK_001161fd == '\0');
    auVar20[0xe] = -(UNK_001161fe == '\0');
    auVar20[0xf] = -(UNK_001161ff == '\0');
    auVar20 = auVar20 & auVar9;
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
      *(undefined1 *)(param_1 + 1) = 7;
      *param_1 = 2;
      return;
    }
    break;
  case 0x13:
    auVar21[0] = -(*(char *)((long)param_2 + 3) == DAT_00115af0);
    auVar21[1] = -(*(char *)((long)param_2 + 4) == UNK_00115af1);
    auVar21[2] = -(*(char *)((long)param_2 + 5) == UNK_00115af2);
    auVar21[3] = -(*(char *)((long)param_2 + 6) == UNK_00115af3);
    auVar21[4] = -(*(char *)((long)param_2 + 7) == UNK_00115af4);
    auVar21[5] = -((char)param_2[1] == UNK_00115af5);
    auVar21[6] = -(*(char *)((long)param_2 + 9) == UNK_00115af6);
    auVar21[7] = -(*(char *)((long)param_2 + 10) == UNK_00115af7);
    auVar21[8] = -(*(char *)((long)param_2 + 0xb) == UNK_00115af8);
    auVar21[9] = -(*(char *)((long)param_2 + 0xc) == UNK_00115af9);
    auVar21[10] = -(*(char *)((long)param_2 + 0xd) == UNK_00115afa);
    auVar21[0xb] = -(*(char *)((long)param_2 + 0xe) == UNK_00115afb);
    auVar21[0xc] = -(*(char *)((long)param_2 + 0xf) == UNK_00115afc);
    auVar21[0xd] = -((char)param_2[2] == UNK_00115afd);
    auVar21[0xe] = -(*(char *)((long)param_2 + 0x11) == UNK_00115afe);
    auVar21[0xf] = -(*(char *)((long)param_2 + 0x12) == UNK_00115aff);
    auVar10[0] = -((char)*param_2 == s_long_open_thresh_00115e80[0]);
    auVar10[1] = -(*(char *)((long)param_2 + 1) == s_long_open_thresh_00115e80[1]);
    auVar10[2] = -(*(char *)((long)param_2 + 2) == s_long_open_thresh_00115e80[2]);
    auVar10[3] = -(*(char *)((long)param_2 + 3) == s_long_open_thresh_00115e80[3]);
    auVar10[4] = -(*(char *)((long)param_2 + 4) == s_long_open_thresh_00115e80[4]);
    auVar10[5] = -(*(char *)((long)param_2 + 5) == s_long_open_thresh_00115e80[5]);
    auVar10[6] = -(*(char *)((long)param_2 + 6) == s_long_open_thresh_00115e80[6]);
    auVar10[7] = -(*(char *)((long)param_2 + 7) == s_long_open_thresh_00115e80[7]);
    auVar10[8] = -((char)param_2[1] == s_long_open_thresh_00115e80[8]);
    auVar10[9] = -(*(char *)((long)param_2 + 9) == s_long_open_thresh_00115e80[9]);
    auVar10[10] = -(*(char *)((long)param_2 + 10) == s_long_open_thresh_00115e80[10]);
    auVar10[0xb] = -(*(char *)((long)param_2 + 0xb) == s_long_open_thresh_00115e80[0xb]);
    auVar10[0xc] = -(*(char *)((long)param_2 + 0xc) == s_long_open_thresh_00115e80[0xc]);
    auVar10[0xd] = -(*(char *)((long)param_2 + 0xd) == s_long_open_thresh_00115e80[0xd]);
    auVar10[0xe] = -(*(char *)((long)param_2 + 0xe) == s_long_open_thresh_00115e80[0xe]);
    auVar10[0xf] = -(*(char *)((long)param_2 + 0xf) == s_long_open_thresh_00115e80[0xf]);
    auVar10 = auVar10 & auVar21;
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
      *(undefined1 *)(param_1 + 1) = 0;
      *param_1 = 2;
      return;
    }
    auVar22[0] = -(*(char *)((long)param_2 + 3) == DAT_00115c40);
    auVar22[1] = -(*(char *)((long)param_2 + 4) == UNK_00115c41);
    auVar22[2] = -(*(char *)((long)param_2 + 5) == UNK_00115c42);
    auVar22[3] = -(*(char *)((long)param_2 + 6) == UNK_00115c43);
    auVar22[4] = -(*(char *)((long)param_2 + 7) == UNK_00115c44);
    auVar22[5] = -((char)param_2[1] == UNK_00115c45);
    auVar22[6] = -(*(char *)((long)param_2 + 9) == UNK_00115c46);
    auVar22[7] = -(*(char *)((long)param_2 + 10) == UNK_00115c47);
    auVar22[8] = -(*(char *)((long)param_2 + 0xb) == UNK_00115c48);
    auVar22[9] = -(*(char *)((long)param_2 + 0xc) == UNK_00115c49);
    auVar22[10] = -(*(char *)((long)param_2 + 0xd) == UNK_00115c4a);
    auVar22[0xb] = -(*(char *)((long)param_2 + 0xe) == UNK_00115c4b);
    auVar22[0xc] = -(*(char *)((long)param_2 + 0xf) == UNK_00115c4c);
    auVar22[0xd] = -((char)param_2[2] == UNK_00115c4d);
    auVar22[0xe] = -(*(char *)((long)param_2 + 0x11) == UNK_00115c4e);
    auVar22[0xf] = -(*(char *)((long)param_2 + 0x12) == UNK_00115c4f);
    auVar11[0] = -((char)*param_2 == DAT_00116180);
    auVar11[1] = -(*(char *)((long)param_2 + 1) == UNK_00116181);
    auVar11[2] = -(*(char *)((long)param_2 + 2) == UNK_00116182);
    auVar11[3] = -(*(char *)((long)param_2 + 3) == UNK_00116183);
    auVar11[4] = -(*(char *)((long)param_2 + 4) == UNK_00116184);
    auVar11[5] = -(*(char *)((long)param_2 + 5) == UNK_00116185);
    auVar11[6] = -(*(char *)((long)param_2 + 6) == UNK_00116186);
    auVar11[7] = -(*(char *)((long)param_2 + 7) == UNK_00116187);
    auVar11[8] = -((char)param_2[1] == UNK_00116188);
    auVar11[9] = -(*(char *)((long)param_2 + 9) == UNK_00116189);
    auVar11[10] = -(*(char *)((long)param_2 + 10) == UNK_0011618a);
    auVar11[0xb] = -(*(char *)((long)param_2 + 0xb) == UNK_0011618b);
    auVar11[0xc] = -(*(char *)((long)param_2 + 0xc) == UNK_0011618c);
    auVar11[0xd] = -(*(char *)((long)param_2 + 0xd) == UNK_0011618d);
    auVar11[0xe] = -(*(char *)((long)param_2 + 0xe) == UNK_0011618e);
    auVar11[0xf] = -(*(char *)((long)param_2 + 0xf) == UNK_0011618f);
    auVar11 = auVar11 & auVar22;
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
      *(undefined1 *)(param_1 + 1) = 0xc;
      *param_1 = 2;
      return;
    }
    break;
  case 0x14:
    uVar1 = (undefined4)param_2[2];
    auVar13[0] = -((char)uVar1 == s_hold_00115f20[0]);
    auVar13[1] = -((char)((uint)uVar1 >> 8) == s_hold_00115f20[1]);
    auVar13[2] = -((char)((uint)uVar1 >> 0x10) == s_hold_00115f20[2]);
    auVar13[3] = -((char)((uint)uVar1 >> 0x18) == s_hold_00115f20[3]);
    auVar13[4] = -(s_hold_00115f20[4] == '\0');
    auVar13[5] = -(s_hold_00115f20[5] == '\0');
    auVar13[6] = -(s_hold_00115f20[6] == '\0');
    auVar13[7] = -(s_hold_00115f20[7] == '\0');
    auVar13[8] = -(UNK_00115f28 == '\0');
    auVar13[9] = -(UNK_00115f29 == '\0');
    auVar13[10] = -(UNK_00115f2a == '\0');
    auVar13[0xb] = -(UNK_00115f2b == '\0');
    auVar13[0xc] = -(UNK_00115f2c == '\0');
    auVar13[0xd] = -(UNK_00115f2d == '\0');
    auVar13[0xe] = -(UNK_00115f2e == '\0');
    auVar13[0xf] = -(UNK_00115f2f == '\0');
    auVar2[0] = -((char)*param_2 == DAT_00116120);
    auVar2[1] = -(*(char *)((long)param_2 + 1) == UNK_00116121);
    auVar2[2] = -(*(char *)((long)param_2 + 2) == UNK_00116122);
    auVar2[3] = -(*(char *)((long)param_2 + 3) == UNK_00116123);
    auVar2[4] = -(*(char *)((long)param_2 + 4) == UNK_00116124);
    auVar2[5] = -(*(char *)((long)param_2 + 5) == UNK_00116125);
    auVar2[6] = -(*(char *)((long)param_2 + 6) == UNK_00116126);
    auVar2[7] = -(*(char *)((long)param_2 + 7) == UNK_00116127);
    auVar2[8] = -((char)param_2[1] == UNK_00116128);
    auVar2[9] = -(*(char *)((long)param_2 + 9) == UNK_00116129);
    auVar2[10] = -(*(char *)((long)param_2 + 10) == UNK_0011612a);
    auVar2[0xb] = -(*(char *)((long)param_2 + 0xb) == UNK_0011612b);
    auVar2[0xc] = -(*(char *)((long)param_2 + 0xc) == UNK_0011612c);
    auVar2[0xd] = -(*(char *)((long)param_2 + 0xd) == UNK_0011612d);
    auVar2[0xe] = -(*(char *)((long)param_2 + 0xe) == UNK_0011612e);
    auVar2[0xf] = -(*(char *)((long)param_2 + 0xf) == UNK_0011612f);
    auVar2 = auVar2 & auVar13;
    if ((ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) | (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar2[0xf] >> 7) << 0xf) == 0xffff) {
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = 2;
      return;
    }
    uVar1 = (undefined4)param_2[2];
    auVar14[0] = -((char)uVar1 == s_hold_00115f20[0]);
    auVar14[1] = -((char)((uint)uVar1 >> 8) == s_hold_00115f20[1]);
    auVar14[2] = -((char)((uint)uVar1 >> 0x10) == s_hold_00115f20[2]);
    auVar14[3] = -((char)((uint)uVar1 >> 0x18) == s_hold_00115f20[3]);
    auVar14[4] = -(s_hold_00115f20[4] == '\0');
    auVar14[5] = -(s_hold_00115f20[5] == '\0');
    auVar14[6] = -(s_hold_00115f20[6] == '\0');
    auVar14[7] = -(s_hold_00115f20[7] == '\0');
    auVar14[8] = -(UNK_00115f28 == '\0');
    auVar14[9] = -(UNK_00115f29 == '\0');
    auVar14[10] = -(UNK_00115f2a == '\0');
    auVar14[0xb] = -(UNK_00115f2b == '\0');
    auVar14[0xc] = -(UNK_00115f2c == '\0');
    auVar14[0xd] = -(UNK_00115f2d == '\0');
    auVar14[0xe] = -(UNK_00115f2e == '\0');
    auVar14[0xf] = -(UNK_00115f2f == '\0');
    auVar3[0] = -((char)*param_2 == DAT_001161d0);
    auVar3[1] = -(*(char *)((long)param_2 + 1) == UNK_001161d1);
    auVar3[2] = -(*(char *)((long)param_2 + 2) == UNK_001161d2);
    auVar3[3] = -(*(char *)((long)param_2 + 3) == UNK_001161d3);
    auVar3[4] = -(*(char *)((long)param_2 + 4) == UNK_001161d4);
    auVar3[5] = -(*(char *)((long)param_2 + 5) == UNK_001161d5);
    auVar3[6] = -(*(char *)((long)param_2 + 6) == UNK_001161d6);
    auVar3[7] = -(*(char *)((long)param_2 + 7) == UNK_001161d7);
    auVar3[8] = -((char)param_2[1] == UNK_001161d8);
    auVar3[9] = -(*(char *)((long)param_2 + 9) == UNK_001161d9);
    auVar3[10] = -(*(char *)((long)param_2 + 10) == UNK_001161da);
    auVar3[0xb] = -(*(char *)((long)param_2 + 0xb) == UNK_001161db);
    auVar3[0xc] = -(*(char *)((long)param_2 + 0xc) == UNK_001161dc);
    auVar3[0xd] = -(*(char *)((long)param_2 + 0xd) == UNK_001161dd);
    auVar3[0xe] = -(*(char *)((long)param_2 + 0xe) == UNK_001161de);
    auVar3[0xf] = -(*(char *)((long)param_2 + 0xf) == UNK_001161df);
    auVar3 = auVar3 & auVar14;
    if ((ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) | (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar3[0xf] >> 7) << 0xf) == 0xffff) {
      *(undefined1 *)(param_1 + 1) = 2;
      *param_1 = 2;
      return;
    }
    break;
  case 0x15:
    auVar15[0] = -(*(char *)((long)param_2 + 5) == DAT_00115dc0);
    auVar15[1] = -(*(char *)((long)param_2 + 6) == UNK_00115dc1);
    auVar15[2] = -(*(char *)((long)param_2 + 7) == UNK_00115dc2);
    auVar15[3] = -((char)param_2[1] == UNK_00115dc3);
    auVar15[4] = -(*(char *)((long)param_2 + 9) == UNK_00115dc4);
    auVar15[5] = -(*(char *)((long)param_2 + 10) == UNK_00115dc5);
    auVar15[6] = -(*(char *)((long)param_2 + 0xb) == UNK_00115dc6);
    auVar15[7] = -(*(char *)((long)param_2 + 0xc) == UNK_00115dc7);
    auVar15[8] = -(*(char *)((long)param_2 + 0xd) == UNK_00115dc8);
    auVar15[9] = -(*(char *)((long)param_2 + 0xe) == UNK_00115dc9);
    auVar15[10] = -(*(char *)((long)param_2 + 0xf) == UNK_00115dca);
    auVar15[0xb] = -((char)param_2[2] == UNK_00115dcb);
    auVar15[0xc] = -(*(char *)((long)param_2 + 0x11) == UNK_00115dcc);
    auVar15[0xd] = -(*(char *)((long)param_2 + 0x12) == UNK_00115dcd);
    auVar15[0xe] = -(*(char *)((long)param_2 + 0x13) == UNK_00115dce);
    auVar15[0xf] = -(*(char *)((long)param_2 + 0x14) == UNK_00115dcf);
    auVar4[0] = -((char)*param_2 == DAT_00115dd0);
    auVar4[1] = -(*(char *)((long)param_2 + 1) == UNK_00115dd1);
    auVar4[2] = -(*(char *)((long)param_2 + 2) == UNK_00115dd2);
    auVar4[3] = -(*(char *)((long)param_2 + 3) == UNK_00115dd3);
    auVar4[4] = -(*(char *)((long)param_2 + 4) == UNK_00115dd4);
    auVar4[5] = -(*(char *)((long)param_2 + 5) == UNK_00115dd5);
    auVar4[6] = -(*(char *)((long)param_2 + 6) == UNK_00115dd6);
    auVar4[7] = -(*(char *)((long)param_2 + 7) == UNK_00115dd7);
    auVar4[8] = -((char)param_2[1] == UNK_00115dd8);
    auVar4[9] = -(*(char *)((long)param_2 + 9) == UNK_00115dd9);
    auVar4[10] = -(*(char *)((long)param_2 + 10) == UNK_00115dda);
    auVar4[0xb] = -(*(char *)((long)param_2 + 0xb) == UNK_00115ddb);
    auVar4[0xc] = -(*(char *)((long)param_2 + 0xc) == UNK_00115ddc);
    auVar4[0xd] = -(*(char *)((long)param_2 + 0xd) == UNK_00115ddd);
    auVar4[0xe] = -(*(char *)((long)param_2 + 0xe) == UNK_00115dde);
    auVar4[0xf] = -(*(char *)((long)param_2 + 0xf) == UNK_00115ddf);
    auVar4 = auVar4 & auVar15;
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
      *(undefined1 *)(param_1 + 1) = 3;
      *param_1 = 2;
      return;
    }
    break;
  case 0x16:
    auVar16[0] = -(*(char *)((long)param_2 + 6) == DAT_00116080);
    auVar16[1] = -(*(char *)((long)param_2 + 7) == UNK_00116081);
    auVar16[2] = -((char)param_2[1] == UNK_00116082);
    auVar16[3] = -(*(char *)((long)param_2 + 9) == UNK_00116083);
    auVar16[4] = -(*(char *)((long)param_2 + 10) == UNK_00116084);
    auVar16[5] = -(*(char *)((long)param_2 + 0xb) == UNK_00116085);
    auVar16[6] = -(*(char *)((long)param_2 + 0xc) == UNK_00116086);
    auVar16[7] = -(*(char *)((long)param_2 + 0xd) == UNK_00116087);
    auVar16[8] = -(*(char *)((long)param_2 + 0xe) == UNK_00116088);
    auVar16[9] = -(*(char *)((long)param_2 + 0xf) == UNK_00116089);
    auVar16[10] = -((char)param_2[2] == UNK_0011608a);
    auVar16[0xb] = -(*(char *)((long)param_2 + 0x11) == UNK_0011608b);
    auVar16[0xc] = -(*(char *)((long)param_2 + 0x12) == UNK_0011608c);
    auVar16[0xd] = -(*(char *)((long)param_2 + 0x13) == UNK_0011608d);
    auVar16[0xe] = -(*(char *)((long)param_2 + 0x14) == UNK_0011608e);
    auVar16[0xf] = -(*(char *)((long)param_2 + 0x15) == UNK_0011608f);
    auVar5[0] = -((char)*param_2 == DAT_00116170);
    auVar5[1] = -(*(char *)((long)param_2 + 1) == UNK_00116171);
    auVar5[2] = -(*(char *)((long)param_2 + 2) == UNK_00116172);
    auVar5[3] = -(*(char *)((long)param_2 + 3) == UNK_00116173);
    auVar5[4] = -(*(char *)((long)param_2 + 4) == UNK_00116174);
    auVar5[5] = -(*(char *)((long)param_2 + 5) == UNK_00116175);
    auVar5[6] = -(*(char *)((long)param_2 + 6) == UNK_00116176);
    auVar5[7] = -(*(char *)((long)param_2 + 7) == UNK_00116177);
    auVar5[8] = -((char)param_2[1] == UNK_00116178);
    auVar5[9] = -(*(char *)((long)param_2 + 9) == UNK_00116179);
    auVar5[10] = -(*(char *)((long)param_2 + 10) == UNK_0011617a);
    auVar5[0xb] = -(*(char *)((long)param_2 + 0xb) == UNK_0011617b);
    auVar5[0xc] = -(*(char *)((long)param_2 + 0xc) == UNK_0011617c);
    auVar5[0xd] = -(*(char *)((long)param_2 + 0xd) == UNK_0011617d);
    auVar5[0xe] = -(*(char *)((long)param_2 + 0xe) == UNK_0011617e);
    auVar5[0xf] = -(*(char *)((long)param_2 + 0xf) == UNK_0011617f);
    auVar5 = auVar5 & auVar16;
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
                 (ushort)(SUB161(auVar5 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar5[0xf] >> 7) << 0xf) == 0xffff) {
      *(undefined1 *)(param_1 + 1) = 8;
      *param_1 = 2;
      return;
    }
    break;
  case 0x19:
    auVar23[0] = -(*(char *)((long)param_2 + 9) == s_p_half_spread_bp_00116020[0]);
    auVar23[1] = -(*(char *)((long)param_2 + 10) == s_p_half_spread_bp_00116020[1]);
    auVar23[2] = -(*(char *)((long)param_2 + 0xb) == s_p_half_spread_bp_00116020[2]);
    auVar23[3] = -(*(char *)((long)param_2 + 0xc) == s_p_half_spread_bp_00116020[3]);
    auVar23[4] = -(*(char *)((long)param_2 + 0xd) == s_p_half_spread_bp_00116020[4]);
    auVar23[5] = -(*(char *)((long)param_2 + 0xe) == s_p_half_spread_bp_00116020[5]);
    auVar23[6] = -(*(char *)((long)param_2 + 0xf) == s_p_half_spread_bp_00116020[6]);
    auVar23[7] = -((char)param_2[2] == s_p_half_spread_bp_00116020[7]);
    auVar23[8] = -(*(char *)((long)param_2 + 0x11) == s_p_half_spread_bp_00116020[8]);
    auVar23[9] = -(*(char *)((long)param_2 + 0x12) == s_p_half_spread_bp_00116020[9]);
    auVar23[10] = -(*(char *)((long)param_2 + 0x13) == s_p_half_spread_bp_00116020[10]);
    auVar23[0xb] = -(*(char *)((long)param_2 + 0x14) == s_p_half_spread_bp_00116020[0xb]);
    auVar23[0xc] = -(*(char *)((long)param_2 + 0x15) == s_p_half_spread_bp_00116020[0xc]);
    auVar23[0xd] = -(*(char *)((long)param_2 + 0x16) == s_p_half_spread_bp_00116020[0xd]);
    auVar23[0xe] = -(*(char *)((long)param_2 + 0x17) == s_p_half_spread_bp_00116020[0xe]);
    auVar23[0xf] = -((char)param_2[3] == s_p_half_spread_bp_00116020[0xf]);
    auVar12[0] = -((char)*param_2 == DAT_00116200);
    auVar12[1] = -(*(char *)((long)param_2 + 1) == UNK_00116201);
    auVar12[2] = -(*(char *)((long)param_2 + 2) == UNK_00116202);
    auVar12[3] = -(*(char *)((long)param_2 + 3) == UNK_00116203);
    auVar12[4] = -(*(char *)((long)param_2 + 4) == UNK_00116204);
    auVar12[5] = -(*(char *)((long)param_2 + 5) == UNK_00116205);
    auVar12[6] = -(*(char *)((long)param_2 + 6) == UNK_00116206);
    auVar12[7] = -(*(char *)((long)param_2 + 7) == UNK_00116207);
    auVar12[8] = -((char)param_2[1] == UNK_00116208);
    auVar12[9] = -(*(char *)((long)param_2 + 9) == UNK_00116209);
    auVar12[10] = -(*(char *)((long)param_2 + 10) == UNK_0011620a);
    auVar12[0xb] = -(*(char *)((long)param_2 + 0xb) == UNK_0011620b);
    auVar12[0xc] = -(*(char *)((long)param_2 + 0xc) == UNK_0011620c);
    auVar12[0xd] = -(*(char *)((long)param_2 + 0xd) == UNK_0011620d);
    auVar12[0xe] = -(*(char *)((long)param_2 + 0xe) == UNK_0011620e);
    auVar12[0xf] = -(*(char *)((long)param_2 + 0xf) == UNK_0011620f);
    auVar12 = auVar12 & auVar23;
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
      *(undefined1 *)(param_1 + 1) = 0xb;
      *param_1 = 2;
      return;
    }
  }
  *(undefined1 *)(param_1 + 1) = 0xf;
  *param_1 = 2;
  return;
}


