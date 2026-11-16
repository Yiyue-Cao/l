// ELF address 0x00000000000458a0; <strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::PhaseParams>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_str

/* _<strategy_comm5::_::<impl serde_core::de::Deserialize for
   strategy_comm5::PhaseParams>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_str
    */

void __rustcall
_<strategy_comm5::_::<impl_serde_core::de::Deserialize_for_strategy_comm5::PhaseParams>::deserialize::__FieldVisitor_as_serde_core::de::Visitor>
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
    auVar6[0] = -((char)*param_2 == s_max_single_net_v_00116890[0]);
    auVar6[1] = -(*(char *)((long)param_2 + 1) == s_max_single_net_v_00116890[1]);
    auVar6[2] = -(*(char *)((long)param_2 + 2) == s_max_single_net_v_00116890[2]);
    auVar6[3] = -(*(char *)((long)param_2 + 3) == s_max_single_net_v_00116890[3]);
    auVar6[4] = -(*(char *)((long)param_2 + 4) == s_max_single_net_v_00116890[4]);
    auVar6[5] = -(*(char *)((long)param_2 + 5) == s_max_single_net_v_00116890[5]);
    auVar6[6] = -(*(char *)((long)param_2 + 6) == s_max_single_net_v_00116890[6]);
    auVar6[7] = -(*(char *)((long)param_2 + 7) == s_max_single_net_v_00116890[7]);
    auVar6[8] = -((char)param_2[1] == s_max_single_net_v_00116890[8]);
    auVar6[9] = -(*(char *)((long)param_2 + 9) == s_max_single_net_v_00116890[9]);
    auVar6[10] = -(*(char *)((long)param_2 + 10) == s_max_single_net_v_00116890[10]);
    auVar6[0xb] = -(*(char *)((long)param_2 + 0xb) == s_max_single_net_v_00116890[0xb]);
    auVar6[0xc] = -(*(char *)((long)param_2 + 0xc) == s_max_single_net_v_00116890[0xc]);
    auVar6[0xd] = -(*(char *)((long)param_2 + 0xd) == s_max_single_net_v_00116890[0xd]);
    auVar6[0xe] = -(*(char *)((long)param_2 + 0xe) == s_max_single_net_v_00116890[0xe]);
    auVar6[0xf] = -(*(char *)((long)param_2 + 0xf) == s_max_single_net_v_00116890[0xf]);
    auVar17[0] = -((char)(short)param_2[2] == s_ol_00116550[0]);
    auVar17[1] = -((char)((ushort)(short)param_2[2] >> 8) == s_ol_00116550[1]);
    auVar17[2] = -(s_ol_00116550[2] == '\0');
    auVar17[3] = -(s_ol_00116550[3] == '\0');
    auVar17[4] = -(UNK_00116554 == '\0');
    auVar17[5] = -(UNK_00116555 == '\0');
    auVar17[6] = -(UNK_00116556 == '\0');
    auVar17[7] = -(UNK_00116557 == '\0');
    auVar17[8] = -(UNK_00116558 == '\0');
    auVar17[9] = -(UNK_00116559 == '\0');
    auVar17[10] = -(UNK_0011655a == '\0');
    auVar17[0xb] = -(UNK_0011655b == '\0');
    auVar17[0xc] = -(UNK_0011655c == '\0');
    auVar17[0xd] = -(UNK_0011655d == '\0');
    auVar17[0xe] = -(UNK_0011655e == '\0');
    auVar17[0xf] = -(UNK_0011655f == '\0');
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
    auVar7[0] = -((char)*param_2 == s_max_single_net_a_00116a30[0]);
    auVar7[1] = -(*(char *)((long)param_2 + 1) == s_max_single_net_a_00116a30[1]);
    auVar7[2] = -(*(char *)((long)param_2 + 2) == s_max_single_net_a_00116a30[2]);
    auVar7[3] = -(*(char *)((long)param_2 + 3) == s_max_single_net_a_00116a30[3]);
    auVar7[4] = -(*(char *)((long)param_2 + 4) == s_max_single_net_a_00116a30[4]);
    auVar7[5] = -(*(char *)((long)param_2 + 5) == s_max_single_net_a_00116a30[5]);
    auVar7[6] = -(*(char *)((long)param_2 + 6) == s_max_single_net_a_00116a30[6]);
    auVar7[7] = -(*(char *)((long)param_2 + 7) == s_max_single_net_a_00116a30[7]);
    auVar7[8] = -((char)param_2[1] == s_max_single_net_a_00116a30[8]);
    auVar7[9] = -(*(char *)((long)param_2 + 9) == s_max_single_net_a_00116a30[9]);
    auVar7[10] = -(*(char *)((long)param_2 + 10) == s_max_single_net_a_00116a30[10]);
    auVar7[0xb] = -(*(char *)((long)param_2 + 0xb) == s_max_single_net_a_00116a30[0xb]);
    auVar7[0xc] = -(*(char *)((long)param_2 + 0xc) == s_max_single_net_a_00116a30[0xc]);
    auVar7[0xd] = -(*(char *)((long)param_2 + 0xd) == s_max_single_net_a_00116a30[0xd]);
    auVar7[0xe] = -(*(char *)((long)param_2 + 0xe) == s_max_single_net_a_00116a30[0xe]);
    auVar7[0xf] = -(*(char *)((long)param_2 + 0xf) == s_max_single_net_a_00116a30[0xf]);
    auVar18[0] = -((char)(short)param_2[2] == DAT_00116c10);
    auVar18[1] = -((char)((ushort)(short)param_2[2] >> 8) == UNK_00116c11);
    auVar18[2] = -(UNK_00116c12 == '\0');
    auVar18[3] = -(UNK_00116c13 == '\0');
    auVar18[4] = -(UNK_00116c14 == '\0');
    auVar18[5] = -(UNK_00116c15 == '\0');
    auVar18[6] = -(UNK_00116c16 == '\0');
    auVar18[7] = -(UNK_00116c17 == '\0');
    auVar18[8] = -(UNK_00116c18 == '\0');
    auVar18[9] = -(UNK_00116c19 == '\0');
    auVar18[10] = -(UNK_00116c1a == '\0');
    auVar18[0xb] = -(UNK_00116c1b == '\0');
    auVar18[0xc] = -(UNK_00116c1c == '\0');
    auVar18[0xd] = -(UNK_00116c1d == '\0');
    auVar18[0xe] = -(UNK_00116c1e == '\0');
    auVar18[0xf] = -(UNK_00116c1f == '\0');
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
    auVar8[0] = -((char)*param_2 == s_max_single_add_v_00116910[0]);
    auVar8[1] = -(*(char *)((long)param_2 + 1) == s_max_single_add_v_00116910[1]);
    auVar8[2] = -(*(char *)((long)param_2 + 2) == s_max_single_add_v_00116910[2]);
    auVar8[3] = -(*(char *)((long)param_2 + 3) == s_max_single_add_v_00116910[3]);
    auVar8[4] = -(*(char *)((long)param_2 + 4) == s_max_single_add_v_00116910[4]);
    auVar8[5] = -(*(char *)((long)param_2 + 5) == s_max_single_add_v_00116910[5]);
    auVar8[6] = -(*(char *)((long)param_2 + 6) == s_max_single_add_v_00116910[6]);
    auVar8[7] = -(*(char *)((long)param_2 + 7) == s_max_single_add_v_00116910[7]);
    auVar8[8] = -((char)param_2[1] == s_max_single_add_v_00116910[8]);
    auVar8[9] = -(*(char *)((long)param_2 + 9) == s_max_single_add_v_00116910[9]);
    auVar8[10] = -(*(char *)((long)param_2 + 10) == s_max_single_add_v_00116910[10]);
    auVar8[0xb] = -(*(char *)((long)param_2 + 0xb) == s_max_single_add_v_00116910[0xb]);
    auVar8[0xc] = -(*(char *)((long)param_2 + 0xc) == s_max_single_add_v_00116910[0xc]);
    auVar8[0xd] = -(*(char *)((long)param_2 + 0xd) == s_max_single_add_v_00116910[0xd]);
    auVar8[0xe] = -(*(char *)((long)param_2 + 0xe) == s_max_single_add_v_00116910[0xe]);
    auVar8[0xf] = -(*(char *)((long)param_2 + 0xf) == s_max_single_add_v_00116910[0xf]);
    auVar19[0] = -((char)(short)param_2[2] == s_ol_00116550[0]);
    auVar19[1] = -((char)((ushort)(short)param_2[2] >> 8) == s_ol_00116550[1]);
    auVar19[2] = -(s_ol_00116550[2] == '\0');
    auVar19[3] = -(s_ol_00116550[3] == '\0');
    auVar19[4] = -(UNK_00116554 == '\0');
    auVar19[5] = -(UNK_00116555 == '\0');
    auVar19[6] = -(UNK_00116556 == '\0');
    auVar19[7] = -(UNK_00116557 == '\0');
    auVar19[8] = -(UNK_00116558 == '\0');
    auVar19[9] = -(UNK_00116559 == '\0');
    auVar19[10] = -(UNK_0011655a == '\0');
    auVar19[0xb] = -(UNK_0011655b == '\0');
    auVar19[0xc] = -(UNK_0011655c == '\0');
    auVar19[0xd] = -(UNK_0011655d == '\0');
    auVar19[0xe] = -(UNK_0011655e == '\0');
    auVar19[0xf] = -(UNK_0011655f == '\0');
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
    auVar9[0] = -((char)*param_2 == DAT_00116840);
    auVar9[1] = -(*(char *)((long)param_2 + 1) == UNK_00116841);
    auVar9[2] = -(*(char *)((long)param_2 + 2) == UNK_00116842);
    auVar9[3] = -(*(char *)((long)param_2 + 3) == UNK_00116843);
    auVar9[4] = -(*(char *)((long)param_2 + 4) == UNK_00116844);
    auVar9[5] = -(*(char *)((long)param_2 + 5) == UNK_00116845);
    auVar9[6] = -(*(char *)((long)param_2 + 6) == UNK_00116846);
    auVar9[7] = -(*(char *)((long)param_2 + 7) == UNK_00116847);
    auVar9[8] = -((char)param_2[1] == UNK_00116848);
    auVar9[9] = -(*(char *)((long)param_2 + 9) == UNK_00116849);
    auVar9[10] = -(*(char *)((long)param_2 + 10) == UNK_0011684a);
    auVar9[0xb] = -(*(char *)((long)param_2 + 0xb) == UNK_0011684b);
    auVar9[0xc] = -(*(char *)((long)param_2 + 0xc) == UNK_0011684c);
    auVar9[0xd] = -(*(char *)((long)param_2 + 0xd) == UNK_0011684d);
    auVar9[0xe] = -(*(char *)((long)param_2 + 0xe) == UNK_0011684e);
    auVar9[0xf] = -(*(char *)((long)param_2 + 0xf) == UNK_0011684f);
    auVar20[0] = -((char)(short)param_2[2] == DAT_00116c10);
    auVar20[1] = -((char)((ushort)(short)param_2[2] >> 8) == UNK_00116c11);
    auVar20[2] = -(UNK_00116c12 == '\0');
    auVar20[3] = -(UNK_00116c13 == '\0');
    auVar20[4] = -(UNK_00116c14 == '\0');
    auVar20[5] = -(UNK_00116c15 == '\0');
    auVar20[6] = -(UNK_00116c16 == '\0');
    auVar20[7] = -(UNK_00116c17 == '\0');
    auVar20[8] = -(UNK_00116c18 == '\0');
    auVar20[9] = -(UNK_00116c19 == '\0');
    auVar20[10] = -(UNK_00116c1a == '\0');
    auVar20[0xb] = -(UNK_00116c1b == '\0');
    auVar20[0xc] = -(UNK_00116c1c == '\0');
    auVar20[0xd] = -(UNK_00116c1d == '\0');
    auVar20[0xe] = -(UNK_00116c1e == '\0');
    auVar20[0xf] = -(UNK_00116c1f == '\0');
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
    auVar21[0] = -(*(char *)((long)param_2 + 3) == s_g_open_threshold_001164f0[0]);
    auVar21[1] = -(*(char *)((long)param_2 + 4) == s_g_open_threshold_001164f0[1]);
    auVar21[2] = -(*(char *)((long)param_2 + 5) == s_g_open_threshold_001164f0[2]);
    auVar21[3] = -(*(char *)((long)param_2 + 6) == s_g_open_threshold_001164f0[3]);
    auVar21[4] = -(*(char *)((long)param_2 + 7) == s_g_open_threshold_001164f0[4]);
    auVar21[5] = -((char)param_2[1] == s_g_open_threshold_001164f0[5]);
    auVar21[6] = -(*(char *)((long)param_2 + 9) == s_g_open_threshold_001164f0[6]);
    auVar21[7] = -(*(char *)((long)param_2 + 10) == s_g_open_threshold_001164f0[7]);
    auVar21[8] = -(*(char *)((long)param_2 + 0xb) == s_g_open_threshold_001164f0[8]);
    auVar21[9] = -(*(char *)((long)param_2 + 0xc) == s_g_open_threshold_001164f0[9]);
    auVar21[10] = -(*(char *)((long)param_2 + 0xd) == s_g_open_threshold_001164f0[10]);
    auVar21[0xb] = -(*(char *)((long)param_2 + 0xe) == s_g_open_threshold_001164f0[0xb]);
    auVar21[0xc] = -(*(char *)((long)param_2 + 0xf) == s_g_open_threshold_001164f0[0xc]);
    auVar21[0xd] = -((char)param_2[2] == s_g_open_threshold_001164f0[0xd]);
    auVar21[0xe] = -(*(char *)((long)param_2 + 0x11) == s_g_open_threshold_001164f0[0xe]);
    auVar21[0xf] = -(*(char *)((long)param_2 + 0x12) == s_g_open_threshold_001164f0[0xf]);
    auVar10[0] = -((char)*param_2 == s_long_open_thresh_001168a0[0]);
    auVar10[1] = -(*(char *)((long)param_2 + 1) == s_long_open_thresh_001168a0[1]);
    auVar10[2] = -(*(char *)((long)param_2 + 2) == s_long_open_thresh_001168a0[2]);
    auVar10[3] = -(*(char *)((long)param_2 + 3) == s_long_open_thresh_001168a0[3]);
    auVar10[4] = -(*(char *)((long)param_2 + 4) == s_long_open_thresh_001168a0[4]);
    auVar10[5] = -(*(char *)((long)param_2 + 5) == s_long_open_thresh_001168a0[5]);
    auVar10[6] = -(*(char *)((long)param_2 + 6) == s_long_open_thresh_001168a0[6]);
    auVar10[7] = -(*(char *)((long)param_2 + 7) == s_long_open_thresh_001168a0[7]);
    auVar10[8] = -((char)param_2[1] == s_long_open_thresh_001168a0[8]);
    auVar10[9] = -(*(char *)((long)param_2 + 9) == s_long_open_thresh_001168a0[9]);
    auVar10[10] = -(*(char *)((long)param_2 + 10) == s_long_open_thresh_001168a0[10]);
    auVar10[0xb] = -(*(char *)((long)param_2 + 0xb) == s_long_open_thresh_001168a0[0xb]);
    auVar10[0xc] = -(*(char *)((long)param_2 + 0xc) == s_long_open_thresh_001168a0[0xc]);
    auVar10[0xd] = -(*(char *)((long)param_2 + 0xd) == s_long_open_thresh_001168a0[0xd]);
    auVar10[0xe] = -(*(char *)((long)param_2 + 0xe) == s_long_open_thresh_001168a0[0xe]);
    auVar10[0xf] = -(*(char *)((long)param_2 + 0xf) == s_long_open_thresh_001168a0[0xf]);
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
    auVar22[0] = -(*(char *)((long)param_2 + 3) == s_er_rate_baseline_00116630[0]);
    auVar22[1] = -(*(char *)((long)param_2 + 4) == s_er_rate_baseline_00116630[1]);
    auVar22[2] = -(*(char *)((long)param_2 + 5) == s_er_rate_baseline_00116630[2]);
    auVar22[3] = -(*(char *)((long)param_2 + 6) == s_er_rate_baseline_00116630[3]);
    auVar22[4] = -(*(char *)((long)param_2 + 7) == s_er_rate_baseline_00116630[4]);
    auVar22[5] = -((char)param_2[1] == s_er_rate_baseline_00116630[5]);
    auVar22[6] = -(*(char *)((long)param_2 + 9) == s_er_rate_baseline_00116630[6]);
    auVar22[7] = -(*(char *)((long)param_2 + 10) == s_er_rate_baseline_00116630[7]);
    auVar22[8] = -(*(char *)((long)param_2 + 0xb) == s_er_rate_baseline_00116630[8]);
    auVar22[9] = -(*(char *)((long)param_2 + 0xc) == s_er_rate_baseline_00116630[9]);
    auVar22[10] = -(*(char *)((long)param_2 + 0xd) == s_er_rate_baseline_00116630[10]);
    auVar22[0xb] = -(*(char *)((long)param_2 + 0xe) == s_er_rate_baseline_00116630[0xb]);
    auVar22[0xc] = -(*(char *)((long)param_2 + 0xf) == s_er_rate_baseline_00116630[0xc]);
    auVar22[0xd] = -((char)param_2[2] == s_er_rate_baseline_00116630[0xd]);
    auVar22[0xe] = -(*(char *)((long)param_2 + 0x11) == s_er_rate_baseline_00116630[0xe]);
    auVar22[0xf] = -(*(char *)((long)param_2 + 0x12) == s_er_rate_baseline_00116630[0xf]);
    auVar11[0] = -((char)*param_2 == DAT_00116ba0);
    auVar11[1] = -(*(char *)((long)param_2 + 1) == UNK_00116ba1);
    auVar11[2] = -(*(char *)((long)param_2 + 2) == UNK_00116ba2);
    auVar11[3] = -(*(char *)((long)param_2 + 3) == UNK_00116ba3);
    auVar11[4] = -(*(char *)((long)param_2 + 4) == UNK_00116ba4);
    auVar11[5] = -(*(char *)((long)param_2 + 5) == UNK_00116ba5);
    auVar11[6] = -(*(char *)((long)param_2 + 6) == UNK_00116ba6);
    auVar11[7] = -(*(char *)((long)param_2 + 7) == UNK_00116ba7);
    auVar11[8] = -((char)param_2[1] == UNK_00116ba8);
    auVar11[9] = -(*(char *)((long)param_2 + 9) == UNK_00116ba9);
    auVar11[10] = -(*(char *)((long)param_2 + 10) == UNK_00116baa);
    auVar11[0xb] = -(*(char *)((long)param_2 + 0xb) == UNK_00116bab);
    auVar11[0xc] = -(*(char *)((long)param_2 + 0xc) == UNK_00116bac);
    auVar11[0xd] = -(*(char *)((long)param_2 + 0xd) == UNK_00116bad);
    auVar11[0xe] = -(*(char *)((long)param_2 + 0xe) == UNK_00116bae);
    auVar11[0xf] = -(*(char *)((long)param_2 + 0xf) == UNK_00116baf);
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
    auVar13[0] = -((char)uVar1 == s_hold_00116930[0]);
    auVar13[1] = -((char)((uint)uVar1 >> 8) == s_hold_00116930[1]);
    auVar13[2] = -((char)((uint)uVar1 >> 0x10) == s_hold_00116930[2]);
    auVar13[3] = -((char)((uint)uVar1 >> 0x18) == s_hold_00116930[3]);
    auVar13[4] = -(s_hold_00116930[4] == '\0');
    auVar13[5] = -(s_hold_00116930[5] == '\0');
    auVar13[6] = -(s_hold_00116930[6] == '\0');
    auVar13[7] = -(s_hold_00116930[7] == '\0');
    auVar13[8] = -(UNK_00116938 == '\0');
    auVar13[9] = -(UNK_00116939 == '\0');
    auVar13[10] = -(UNK_0011693a == '\0');
    auVar13[0xb] = -(UNK_0011693b == '\0');
    auVar13[0xc] = -(UNK_0011693c == '\0');
    auVar13[0xd] = -(UNK_0011693d == '\0');
    auVar13[0xe] = -(UNK_0011693e == '\0');
    auVar13[0xf] = -(UNK_0011693f == '\0');
    auVar2[0] = -((char)*param_2 == DAT_00116b40);
    auVar2[1] = -(*(char *)((long)param_2 + 1) == UNK_00116b41);
    auVar2[2] = -(*(char *)((long)param_2 + 2) == UNK_00116b42);
    auVar2[3] = -(*(char *)((long)param_2 + 3) == UNK_00116b43);
    auVar2[4] = -(*(char *)((long)param_2 + 4) == UNK_00116b44);
    auVar2[5] = -(*(char *)((long)param_2 + 5) == UNK_00116b45);
    auVar2[6] = -(*(char *)((long)param_2 + 6) == UNK_00116b46);
    auVar2[7] = -(*(char *)((long)param_2 + 7) == UNK_00116b47);
    auVar2[8] = -((char)param_2[1] == UNK_00116b48);
    auVar2[9] = -(*(char *)((long)param_2 + 9) == UNK_00116b49);
    auVar2[10] = -(*(char *)((long)param_2 + 10) == UNK_00116b4a);
    auVar2[0xb] = -(*(char *)((long)param_2 + 0xb) == UNK_00116b4b);
    auVar2[0xc] = -(*(char *)((long)param_2 + 0xc) == UNK_00116b4c);
    auVar2[0xd] = -(*(char *)((long)param_2 + 0xd) == UNK_00116b4d);
    auVar2[0xe] = -(*(char *)((long)param_2 + 0xe) == UNK_00116b4e);
    auVar2[0xf] = -(*(char *)((long)param_2 + 0xf) == UNK_00116b4f);
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
    auVar14[0] = -((char)uVar1 == s_hold_00116930[0]);
    auVar14[1] = -((char)((uint)uVar1 >> 8) == s_hold_00116930[1]);
    auVar14[2] = -((char)((uint)uVar1 >> 0x10) == s_hold_00116930[2]);
    auVar14[3] = -((char)((uint)uVar1 >> 0x18) == s_hold_00116930[3]);
    auVar14[4] = -(s_hold_00116930[4] == '\0');
    auVar14[5] = -(s_hold_00116930[5] == '\0');
    auVar14[6] = -(s_hold_00116930[6] == '\0');
    auVar14[7] = -(s_hold_00116930[7] == '\0');
    auVar14[8] = -(UNK_00116938 == '\0');
    auVar14[9] = -(UNK_00116939 == '\0');
    auVar14[10] = -(UNK_0011693a == '\0');
    auVar14[0xb] = -(UNK_0011693b == '\0');
    auVar14[0xc] = -(UNK_0011693c == '\0');
    auVar14[0xd] = -(UNK_0011693d == '\0');
    auVar14[0xe] = -(UNK_0011693e == '\0');
    auVar14[0xf] = -(UNK_0011693f == '\0');
    auVar3[0] = -((char)*param_2 == DAT_00116bf0);
    auVar3[1] = -(*(char *)((long)param_2 + 1) == UNK_00116bf1);
    auVar3[2] = -(*(char *)((long)param_2 + 2) == UNK_00116bf2);
    auVar3[3] = -(*(char *)((long)param_2 + 3) == UNK_00116bf3);
    auVar3[4] = -(*(char *)((long)param_2 + 4) == UNK_00116bf4);
    auVar3[5] = -(*(char *)((long)param_2 + 5) == UNK_00116bf5);
    auVar3[6] = -(*(char *)((long)param_2 + 6) == UNK_00116bf6);
    auVar3[7] = -(*(char *)((long)param_2 + 7) == UNK_00116bf7);
    auVar3[8] = -((char)param_2[1] == UNK_00116bf8);
    auVar3[9] = -(*(char *)((long)param_2 + 9) == UNK_00116bf9);
    auVar3[10] = -(*(char *)((long)param_2 + 10) == UNK_00116bfa);
    auVar3[0xb] = -(*(char *)((long)param_2 + 0xb) == UNK_00116bfb);
    auVar3[0xc] = -(*(char *)((long)param_2 + 0xc) == UNK_00116bfc);
    auVar3[0xd] = -(*(char *)((long)param_2 + 0xd) == UNK_00116bfd);
    auVar3[0xe] = -(*(char *)((long)param_2 + 0xe) == UNK_00116bfe);
    auVar3[0xf] = -(*(char *)((long)param_2 + 0xf) == UNK_00116bff);
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
    auVar15[0] = -(*(char *)((long)param_2 + 5) == DAT_001167d0);
    auVar15[1] = -(*(char *)((long)param_2 + 6) == UNK_001167d1);
    auVar15[2] = -(*(char *)((long)param_2 + 7) == UNK_001167d2);
    auVar15[3] = -((char)param_2[1] == UNK_001167d3);
    auVar15[4] = -(*(char *)((long)param_2 + 9) == UNK_001167d4);
    auVar15[5] = -(*(char *)((long)param_2 + 10) == UNK_001167d5);
    auVar15[6] = -(*(char *)((long)param_2 + 0xb) == UNK_001167d6);
    auVar15[7] = -(*(char *)((long)param_2 + 0xc) == UNK_001167d7);
    auVar15[8] = -(*(char *)((long)param_2 + 0xd) == UNK_001167d8);
    auVar15[9] = -(*(char *)((long)param_2 + 0xe) == UNK_001167d9);
    auVar15[10] = -(*(char *)((long)param_2 + 0xf) == UNK_001167da);
    auVar15[0xb] = -((char)param_2[2] == UNK_001167db);
    auVar15[0xc] = -(*(char *)((long)param_2 + 0x11) == UNK_001167dc);
    auVar15[0xd] = -(*(char *)((long)param_2 + 0x12) == UNK_001167dd);
    auVar15[0xe] = -(*(char *)((long)param_2 + 0x13) == UNK_001167de);
    auVar15[0xf] = -(*(char *)((long)param_2 + 0x14) == UNK_001167df);
    auVar4[0] = -((char)*param_2 == DAT_001167e0);
    auVar4[1] = -(*(char *)((long)param_2 + 1) == UNK_001167e1);
    auVar4[2] = -(*(char *)((long)param_2 + 2) == UNK_001167e2);
    auVar4[3] = -(*(char *)((long)param_2 + 3) == UNK_001167e3);
    auVar4[4] = -(*(char *)((long)param_2 + 4) == UNK_001167e4);
    auVar4[5] = -(*(char *)((long)param_2 + 5) == UNK_001167e5);
    auVar4[6] = -(*(char *)((long)param_2 + 6) == UNK_001167e6);
    auVar4[7] = -(*(char *)((long)param_2 + 7) == UNK_001167e7);
    auVar4[8] = -((char)param_2[1] == UNK_001167e8);
    auVar4[9] = -(*(char *)((long)param_2 + 9) == UNK_001167e9);
    auVar4[10] = -(*(char *)((long)param_2 + 10) == UNK_001167ea);
    auVar4[0xb] = -(*(char *)((long)param_2 + 0xb) == UNK_001167eb);
    auVar4[0xc] = -(*(char *)((long)param_2 + 0xc) == UNK_001167ec);
    auVar4[0xd] = -(*(char *)((long)param_2 + 0xd) == UNK_001167ed);
    auVar4[0xe] = -(*(char *)((long)param_2 + 0xe) == UNK_001167ee);
    auVar4[0xf] = -(*(char *)((long)param_2 + 0xf) == UNK_001167ef);
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
    auVar16[0] = -(*(char *)((long)param_2 + 6) == DAT_00116aa0);
    auVar16[1] = -(*(char *)((long)param_2 + 7) == UNK_00116aa1);
    auVar16[2] = -((char)param_2[1] == UNK_00116aa2);
    auVar16[3] = -(*(char *)((long)param_2 + 9) == UNK_00116aa3);
    auVar16[4] = -(*(char *)((long)param_2 + 10) == UNK_00116aa4);
    auVar16[5] = -(*(char *)((long)param_2 + 0xb) == UNK_00116aa5);
    auVar16[6] = -(*(char *)((long)param_2 + 0xc) == UNK_00116aa6);
    auVar16[7] = -(*(char *)((long)param_2 + 0xd) == UNK_00116aa7);
    auVar16[8] = -(*(char *)((long)param_2 + 0xe) == UNK_00116aa8);
    auVar16[9] = -(*(char *)((long)param_2 + 0xf) == UNK_00116aa9);
    auVar16[10] = -((char)param_2[2] == UNK_00116aaa);
    auVar16[0xb] = -(*(char *)((long)param_2 + 0x11) == UNK_00116aab);
    auVar16[0xc] = -(*(char *)((long)param_2 + 0x12) == UNK_00116aac);
    auVar16[0xd] = -(*(char *)((long)param_2 + 0x13) == UNK_00116aad);
    auVar16[0xe] = -(*(char *)((long)param_2 + 0x14) == UNK_00116aae);
    auVar16[0xf] = -(*(char *)((long)param_2 + 0x15) == UNK_00116aaf);
    auVar5[0] = -((char)*param_2 == DAT_00116b90);
    auVar5[1] = -(*(char *)((long)param_2 + 1) == UNK_00116b91);
    auVar5[2] = -(*(char *)((long)param_2 + 2) == UNK_00116b92);
    auVar5[3] = -(*(char *)((long)param_2 + 3) == UNK_00116b93);
    auVar5[4] = -(*(char *)((long)param_2 + 4) == UNK_00116b94);
    auVar5[5] = -(*(char *)((long)param_2 + 5) == UNK_00116b95);
    auVar5[6] = -(*(char *)((long)param_2 + 6) == UNK_00116b96);
    auVar5[7] = -(*(char *)((long)param_2 + 7) == UNK_00116b97);
    auVar5[8] = -((char)param_2[1] == UNK_00116b98);
    auVar5[9] = -(*(char *)((long)param_2 + 9) == UNK_00116b99);
    auVar5[10] = -(*(char *)((long)param_2 + 10) == UNK_00116b9a);
    auVar5[0xb] = -(*(char *)((long)param_2 + 0xb) == UNK_00116b9b);
    auVar5[0xc] = -(*(char *)((long)param_2 + 0xc) == UNK_00116b9c);
    auVar5[0xd] = -(*(char *)((long)param_2 + 0xd) == UNK_00116b9d);
    auVar5[0xe] = -(*(char *)((long)param_2 + 0xe) == UNK_00116b9e);
    auVar5[0xf] = -(*(char *)((long)param_2 + 0xf) == UNK_00116b9f);
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
    auVar23[0] = -(*(char *)((long)param_2 + 9) == s_p_half_spread_bp_00116a40[0]);
    auVar23[1] = -(*(char *)((long)param_2 + 10) == s_p_half_spread_bp_00116a40[1]);
    auVar23[2] = -(*(char *)((long)param_2 + 0xb) == s_p_half_spread_bp_00116a40[2]);
    auVar23[3] = -(*(char *)((long)param_2 + 0xc) == s_p_half_spread_bp_00116a40[3]);
    auVar23[4] = -(*(char *)((long)param_2 + 0xd) == s_p_half_spread_bp_00116a40[4]);
    auVar23[5] = -(*(char *)((long)param_2 + 0xe) == s_p_half_spread_bp_00116a40[5]);
    auVar23[6] = -(*(char *)((long)param_2 + 0xf) == s_p_half_spread_bp_00116a40[6]);
    auVar23[7] = -((char)param_2[2] == s_p_half_spread_bp_00116a40[7]);
    auVar23[8] = -(*(char *)((long)param_2 + 0x11) == s_p_half_spread_bp_00116a40[8]);
    auVar23[9] = -(*(char *)((long)param_2 + 0x12) == s_p_half_spread_bp_00116a40[9]);
    auVar23[10] = -(*(char *)((long)param_2 + 0x13) == s_p_half_spread_bp_00116a40[10]);
    auVar23[0xb] = -(*(char *)((long)param_2 + 0x14) == s_p_half_spread_bp_00116a40[0xb]);
    auVar23[0xc] = -(*(char *)((long)param_2 + 0x15) == s_p_half_spread_bp_00116a40[0xc]);
    auVar23[0xd] = -(*(char *)((long)param_2 + 0x16) == s_p_half_spread_bp_00116a40[0xd]);
    auVar23[0xe] = -(*(char *)((long)param_2 + 0x17) == s_p_half_spread_bp_00116a40[0xe]);
    auVar23[0xf] = -((char)param_2[3] == s_p_half_spread_bp_00116a40[0xf]);
    auVar12[0] = -((char)*param_2 == DAT_00116c20);
    auVar12[1] = -(*(char *)((long)param_2 + 1) == UNK_00116c21);
    auVar12[2] = -(*(char *)((long)param_2 + 2) == UNK_00116c22);
    auVar12[3] = -(*(char *)((long)param_2 + 3) == UNK_00116c23);
    auVar12[4] = -(*(char *)((long)param_2 + 4) == UNK_00116c24);
    auVar12[5] = -(*(char *)((long)param_2 + 5) == UNK_00116c25);
    auVar12[6] = -(*(char *)((long)param_2 + 6) == UNK_00116c26);
    auVar12[7] = -(*(char *)((long)param_2 + 7) == UNK_00116c27);
    auVar12[8] = -((char)param_2[1] == UNK_00116c28);
    auVar12[9] = -(*(char *)((long)param_2 + 9) == UNK_00116c29);
    auVar12[10] = -(*(char *)((long)param_2 + 10) == UNK_00116c2a);
    auVar12[0xb] = -(*(char *)((long)param_2 + 0xb) == UNK_00116c2b);
    auVar12[0xc] = -(*(char *)((long)param_2 + 0xc) == UNK_00116c2c);
    auVar12[0xd] = -(*(char *)((long)param_2 + 0xd) == UNK_00116c2d);
    auVar12[0xe] = -(*(char *)((long)param_2 + 0xe) == UNK_00116c2e);
    auVar12[0xf] = -(*(char *)((long)param_2 + 0xf) == UNK_00116c2f);
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


