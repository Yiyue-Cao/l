// ELF address 0x000000000004c580; <strategy_sos6::_::<impl serde_core::de::Deserialize for strategy_sos6::SoS6Params>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_str

/* _<strategy_sos6::_::<impl serde_core::de::Deserialize for
   strategy_sos6::SoS6Params>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_str */

void __rustcall
_<strategy_sos6::_::<impl_serde_core::de::Deserialize_for_strategy_sos6::SoS6Params>::deserialize::__FieldVisitor_as_serde_core::de::Visitor>
::visit_str(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
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
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  
  switch(param_3) {
  case 8:
    if (*param_2 == 0x316e6f6974636573) {
      *(undefined1 *)(param_1 + 1) = 0xb;
      goto LAB_0014cb5d;
    }
    if (*param_2 == 0x326e6f6974636573) {
      *(undefined1 *)(param_1 + 1) = 0xc;
      goto LAB_0014cb5d;
    }
    if (*param_2 == 0x336e6f6974636573) {
      *(undefined1 *)(param_1 + 1) = 0xd;
      goto LAB_0014cb5d;
    }
    iVar2 = (*(code *)PTR_bcmp_001dd120)(param_2,&DAT_001156b8);
    if (iVar2 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x13;
      goto LAB_0014cb5d;
    }
    break;
  case 9:
    if ((char)param_2[1] == 'a' && *param_2 == 0x68706c615f317670) {
      *(undefined1 *)(param_1 + 1) = 0xf;
      goto LAB_0014cb5d;
    }
    if ((char)param_2[1] == 'e' && *param_2 == 0x7461725f65746f76) {
      *(undefined1 *)(param_1 + 1) = 0x12;
      goto LAB_0014cb5d;
    }
    break;
  case 10:
    if ((short)param_2[1] == 0x6168 && *param_2 == 0x706c615f74736f63) {
      *(undefined1 *)(param_1 + 1) = 0x10;
      goto LAB_0014cb5d;
    }
    break;
  case 0xb:
    if (*(long *)((long)param_2 + 3) == 0x6c6f765f6464615f && *param_2 == 0x5f6464615f736f73) {
      *(undefined1 *)(param_1 + 1) = 10;
      goto LAB_0014cb5d;
    }
    if (*(long *)((long)param_2 + 3) == 0x65646f6d5f6c616e && *param_2 == 0x6d5f6c616e676973) {
      *(undefined1 *)(param_1 + 1) = 0xe;
      goto LAB_0014cb5d;
    }
    break;
  case 0xe:
    if (*(long *)((long)param_2 + 6) == 0x657461725f72656b && *param_2 == 0x656b61745f736f73) {
      *(undefined1 *)(param_1 + 1) = 9;
      goto LAB_0014cb5d;
    }
    iVar2 = (*(code *)PTR_bcmp_001dd120)(param_2,"max_taker_rate");
    if (iVar2 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x17;
      goto LAB_0014cb5d;
    }
    iVar2 = (*(code *)PTR_bcmp_001dd120)(param_2,"trade_slipperyclose_position_block_ms",param_3);
    if (iVar2 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x18;
      goto LAB_0014cb5d;
    }
    break;
  case 0xf:
    if (*(long *)((long)param_2 + 7) == 0x79656b5f6c6e705f && *param_2 == 0x5f72656863746177) {
      *(undefined1 *)(param_1 + 1) = 2;
      goto LAB_0014cb5d;
    }
    break;
  case 0x10:
    auVar8[0] = -((char)*param_2 == s_signal_windows_s_00115240[0]);
    auVar8[1] = -(*(char *)((long)param_2 + 1) == s_signal_windows_s_00115240[1]);
    auVar8[2] = -(*(char *)((long)param_2 + 2) == s_signal_windows_s_00115240[2]);
    auVar8[3] = -(*(char *)((long)param_2 + 3) == s_signal_windows_s_00115240[3]);
    auVar8[4] = -(*(char *)((long)param_2 + 4) == s_signal_windows_s_00115240[4]);
    auVar8[5] = -(*(char *)((long)param_2 + 5) == s_signal_windows_s_00115240[5]);
    auVar8[6] = -(*(char *)((long)param_2 + 6) == s_signal_windows_s_00115240[6]);
    auVar8[7] = -(*(char *)((long)param_2 + 7) == s_signal_windows_s_00115240[7]);
    auVar8[8] = -((char)param_2[1] == s_signal_windows_s_00115240[8]);
    auVar8[9] = -(*(char *)((long)param_2 + 9) == s_signal_windows_s_00115240[9]);
    auVar8[10] = -(*(char *)((long)param_2 + 10) == s_signal_windows_s_00115240[10]);
    auVar8[0xb] = -(*(char *)((long)param_2 + 0xb) == s_signal_windows_s_00115240[0xb]);
    auVar8[0xc] = -(*(char *)((long)param_2 + 0xc) == s_signal_windows_s_00115240[0xc]);
    auVar8[0xd] = -(*(char *)((long)param_2 + 0xd) == s_signal_windows_s_00115240[0xd]);
    auVar8[0xe] = -(*(char *)((long)param_2 + 0xe) == s_signal_windows_s_00115240[0xe]);
    auVar8[0xf] = -(*(char *)((long)param_2 + 0xf) == s_signal_windows_s_00115240[0xf]);
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
                 (ushort)(SUB161(auVar8 >> 0x77,0) & 1) << 0xe | (ushort)(auVar8[0xf] >> 7) << 0xf)
        == 0xffff) {
      *(undefined1 *)(param_1 + 1) = 0x14;
      goto LAB_0014cb5d;
    }
    break;
  case 0x11:
    auVar9[0] = -((char)*param_2 == DAT_00114f70);
    auVar9[1] = -(*(char *)((long)param_2 + 1) == UNK_00114f71);
    auVar9[2] = -(*(char *)((long)param_2 + 2) == UNK_00114f72);
    auVar9[3] = -(*(char *)((long)param_2 + 3) == UNK_00114f73);
    auVar9[4] = -(*(char *)((long)param_2 + 4) == UNK_00114f74);
    auVar9[5] = -(*(char *)((long)param_2 + 5) == UNK_00114f75);
    auVar9[6] = -(*(char *)((long)param_2 + 6) == UNK_00114f76);
    auVar9[7] = -(*(char *)((long)param_2 + 7) == UNK_00114f77);
    auVar9[8] = -((char)param_2[1] == UNK_00114f78);
    auVar9[9] = -(*(char *)((long)param_2 + 9) == UNK_00114f79);
    auVar9[10] = -(*(char *)((long)param_2 + 10) == UNK_00114f7a);
    auVar9[0xb] = -(*(char *)((long)param_2 + 0xb) == UNK_00114f7b);
    auVar9[0xc] = -(*(char *)((long)param_2 + 0xc) == UNK_00114f7c);
    auVar9[0xd] = -(*(char *)((long)param_2 + 0xd) == UNK_00114f7d);
    auVar9[0xe] = -(*(char *)((long)param_2 + 0xe) == UNK_00114f7e);
    auVar9[0xf] = -(*(char *)((long)param_2 + 0xf) == UNK_00114f7f);
    auVar22[0] = -((char)param_2[2] == s_l_00115260[0]);
    auVar22[1] = -(s_l_00115260[1] == '\0');
    auVar22[2] = -(s_l_00115260[2] == '\0');
    auVar22[3] = -(s_l_00115260[3] == '\0');
    auVar22[4] = -(UNK_00115264 == '\0');
    auVar22[5] = -(UNK_00115265 == '\0');
    auVar22[6] = -(UNK_00115266 == '\0');
    auVar22[7] = -(UNK_00115267 == '\0');
    auVar22[8] = -(UNK_00115268 == '\0');
    auVar22[9] = -(UNK_00115269 == '\0');
    auVar22[10] = -(UNK_0011526a == '\0');
    auVar22[0xb] = -(UNK_0011526b == '\0');
    auVar22[0xc] = -(UNK_0011526c == '\0');
    auVar22[0xd] = -(UNK_0011526d == '\0');
    auVar22[0xe] = -(UNK_0011526e == '\0');
    auVar22[0xf] = -(UNK_0011526f == '\0');
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
      *(undefined1 *)(param_1 + 1) = 3;
      goto LAB_0014cb5d;
    }
    auVar10[0] = -((char)*param_2 == s_section1_to_3_pn_001152d0[0]);
    auVar10[1] = -(*(char *)((long)param_2 + 1) == s_section1_to_3_pn_001152d0[1]);
    auVar10[2] = -(*(char *)((long)param_2 + 2) == s_section1_to_3_pn_001152d0[2]);
    auVar10[3] = -(*(char *)((long)param_2 + 3) == s_section1_to_3_pn_001152d0[3]);
    auVar10[4] = -(*(char *)((long)param_2 + 4) == s_section1_to_3_pn_001152d0[4]);
    auVar10[5] = -(*(char *)((long)param_2 + 5) == s_section1_to_3_pn_001152d0[5]);
    auVar10[6] = -(*(char *)((long)param_2 + 6) == s_section1_to_3_pn_001152d0[6]);
    auVar10[7] = -(*(char *)((long)param_2 + 7) == s_section1_to_3_pn_001152d0[7]);
    auVar10[8] = -((char)param_2[1] == s_section1_to_3_pn_001152d0[8]);
    auVar10[9] = -(*(char *)((long)param_2 + 9) == s_section1_to_3_pn_001152d0[9]);
    auVar10[10] = -(*(char *)((long)param_2 + 10) == s_section1_to_3_pn_001152d0[10]);
    auVar10[0xb] = -(*(char *)((long)param_2 + 0xb) == s_section1_to_3_pn_001152d0[0xb]);
    auVar10[0xc] = -(*(char *)((long)param_2 + 0xc) == s_section1_to_3_pn_001152d0[0xc]);
    auVar10[0xd] = -(*(char *)((long)param_2 + 0xd) == s_section1_to_3_pn_001152d0[0xd]);
    auVar10[0xe] = -(*(char *)((long)param_2 + 0xe) == s_section1_to_3_pn_001152d0[0xe]);
    auVar10[0xf] = -(*(char *)((long)param_2 + 0xf) == s_section1_to_3_pn_001152d0[0xf]);
    auVar23[0] = -((char)param_2[2] == s_l_00115260[0]);
    auVar23[1] = -(s_l_00115260[1] == '\0');
    auVar23[2] = -(s_l_00115260[2] == '\0');
    auVar23[3] = -(s_l_00115260[3] == '\0');
    auVar23[4] = -(UNK_00115264 == '\0');
    auVar23[5] = -(UNK_00115265 == '\0');
    auVar23[6] = -(UNK_00115266 == '\0');
    auVar23[7] = -(UNK_00115267 == '\0');
    auVar23[8] = -(UNK_00115268 == '\0');
    auVar23[9] = -(UNK_00115269 == '\0');
    auVar23[10] = -(UNK_0011526a == '\0');
    auVar23[0xb] = -(UNK_0011526b == '\0');
    auVar23[0xc] = -(UNK_0011526c == '\0');
    auVar23[0xd] = -(UNK_0011526d == '\0');
    auVar23[0xe] = -(UNK_0011526e == '\0');
    auVar23[0xf] = -(UNK_0011526f == '\0');
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
      *(undefined1 *)(param_1 + 1) = 4;
      goto LAB_0014cb5d;
    }
    auVar11[0] = -((char)*param_2 == DAT_001155e0);
    auVar11[1] = -(*(char *)((long)param_2 + 1) == UNK_001155e1);
    auVar11[2] = -(*(char *)((long)param_2 + 2) == UNK_001155e2);
    auVar11[3] = -(*(char *)((long)param_2 + 3) == UNK_001155e3);
    auVar11[4] = -(*(char *)((long)param_2 + 4) == UNK_001155e4);
    auVar11[5] = -(*(char *)((long)param_2 + 5) == UNK_001155e5);
    auVar11[6] = -(*(char *)((long)param_2 + 6) == UNK_001155e6);
    auVar11[7] = -(*(char *)((long)param_2 + 7) == UNK_001155e7);
    auVar11[8] = -((char)param_2[1] == UNK_001155e8);
    auVar11[9] = -(*(char *)((long)param_2 + 9) == UNK_001155e9);
    auVar11[10] = -(*(char *)((long)param_2 + 10) == UNK_001155ea);
    auVar11[0xb] = -(*(char *)((long)param_2 + 0xb) == UNK_001155eb);
    auVar11[0xc] = -(*(char *)((long)param_2 + 0xc) == UNK_001155ec);
    auVar11[0xd] = -(*(char *)((long)param_2 + 0xd) == UNK_001155ed);
    auVar11[0xe] = -(*(char *)((long)param_2 + 0xe) == UNK_001155ee);
    auVar11[0xf] = -(*(char *)((long)param_2 + 0xf) == UNK_001155ef);
    auVar24[0] = -((char)param_2[2] == s_l_00115260[0]);
    auVar24[1] = -(s_l_00115260[1] == '\0');
    auVar24[2] = -(s_l_00115260[2] == '\0');
    auVar24[3] = -(s_l_00115260[3] == '\0');
    auVar24[4] = -(UNK_00115264 == '\0');
    auVar24[5] = -(UNK_00115265 == '\0');
    auVar24[6] = -(UNK_00115266 == '\0');
    auVar24[7] = -(UNK_00115267 == '\0');
    auVar24[8] = -(UNK_00115268 == '\0');
    auVar24[9] = -(UNK_00115269 == '\0');
    auVar24[10] = -(UNK_0011526a == '\0');
    auVar24[0xb] = -(UNK_0011526b == '\0');
    auVar24[0xc] = -(UNK_0011526c == '\0');
    auVar24[0xd] = -(UNK_0011526d == '\0');
    auVar24[0xe] = -(UNK_0011526e == '\0');
    auVar24[0xf] = -(UNK_0011526f == '\0');
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
      *(undefined1 *)(param_1 + 1) = 5;
      goto LAB_0014cb5d;
    }
    auVar12[0] = -((char)*param_2 == s_section2_to_3_pn_00115200[0]);
    auVar12[1] = -(*(char *)((long)param_2 + 1) == s_section2_to_3_pn_00115200[1]);
    auVar12[2] = -(*(char *)((long)param_2 + 2) == s_section2_to_3_pn_00115200[2]);
    auVar12[3] = -(*(char *)((long)param_2 + 3) == s_section2_to_3_pn_00115200[3]);
    auVar12[4] = -(*(char *)((long)param_2 + 4) == s_section2_to_3_pn_00115200[4]);
    auVar12[5] = -(*(char *)((long)param_2 + 5) == s_section2_to_3_pn_00115200[5]);
    auVar12[6] = -(*(char *)((long)param_2 + 6) == s_section2_to_3_pn_00115200[6]);
    auVar12[7] = -(*(char *)((long)param_2 + 7) == s_section2_to_3_pn_00115200[7]);
    auVar12[8] = -((char)param_2[1] == s_section2_to_3_pn_00115200[8]);
    auVar12[9] = -(*(char *)((long)param_2 + 9) == s_section2_to_3_pn_00115200[9]);
    auVar12[10] = -(*(char *)((long)param_2 + 10) == s_section2_to_3_pn_00115200[10]);
    auVar12[0xb] = -(*(char *)((long)param_2 + 0xb) == s_section2_to_3_pn_00115200[0xb]);
    auVar12[0xc] = -(*(char *)((long)param_2 + 0xc) == s_section2_to_3_pn_00115200[0xc]);
    auVar12[0xd] = -(*(char *)((long)param_2 + 0xd) == s_section2_to_3_pn_00115200[0xd]);
    auVar12[0xe] = -(*(char *)((long)param_2 + 0xe) == s_section2_to_3_pn_00115200[0xe]);
    auVar12[0xf] = -(*(char *)((long)param_2 + 0xf) == s_section2_to_3_pn_00115200[0xf]);
    auVar25[0] = -((char)param_2[2] == s_l_00115260[0]);
    auVar25[1] = -(s_l_00115260[1] == '\0');
    auVar25[2] = -(s_l_00115260[2] == '\0');
    auVar25[3] = -(s_l_00115260[3] == '\0');
    auVar25[4] = -(UNK_00115264 == '\0');
    auVar25[5] = -(UNK_00115265 == '\0');
    auVar25[6] = -(UNK_00115266 == '\0');
    auVar25[7] = -(UNK_00115267 == '\0');
    auVar25[8] = -(UNK_00115268 == '\0');
    auVar25[9] = -(UNK_00115269 == '\0');
    auVar25[10] = -(UNK_0011526a == '\0');
    auVar25[0xb] = -(UNK_0011526b == '\0');
    auVar25[0xc] = -(UNK_0011526c == '\0');
    auVar25[0xd] = -(UNK_0011526d == '\0');
    auVar25[0xe] = -(UNK_0011526e == '\0');
    auVar25[0xf] = -(UNK_0011526f == '\0');
    auVar25 = auVar25 & auVar12;
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
      *(undefined1 *)(param_1 + 1) = 6;
      goto LAB_0014cb5d;
    }
    auVar13[0] = -((char)*param_2 == DAT_001154d0);
    auVar13[1] = -(*(char *)((long)param_2 + 1) == UNK_001154d1);
    auVar13[2] = -(*(char *)((long)param_2 + 2) == UNK_001154d2);
    auVar13[3] = -(*(char *)((long)param_2 + 3) == UNK_001154d3);
    auVar13[4] = -(*(char *)((long)param_2 + 4) == UNK_001154d4);
    auVar13[5] = -(*(char *)((long)param_2 + 5) == UNK_001154d5);
    auVar13[6] = -(*(char *)((long)param_2 + 6) == UNK_001154d6);
    auVar13[7] = -(*(char *)((long)param_2 + 7) == UNK_001154d7);
    auVar13[8] = -((char)param_2[1] == UNK_001154d8);
    auVar13[9] = -(*(char *)((long)param_2 + 9) == UNK_001154d9);
    auVar13[10] = -(*(char *)((long)param_2 + 10) == UNK_001154da);
    auVar13[0xb] = -(*(char *)((long)param_2 + 0xb) == UNK_001154db);
    auVar13[0xc] = -(*(char *)((long)param_2 + 0xc) == UNK_001154dc);
    auVar13[0xd] = -(*(char *)((long)param_2 + 0xd) == UNK_001154dd);
    auVar13[0xe] = -(*(char *)((long)param_2 + 0xe) == UNK_001154de);
    auVar13[0xf] = -(*(char *)((long)param_2 + 0xf) == UNK_001154df);
    auVar26[0] = -((char)param_2[2] == s_l_00115260[0]);
    auVar26[1] = -(s_l_00115260[1] == '\0');
    auVar26[2] = -(s_l_00115260[2] == '\0');
    auVar26[3] = -(s_l_00115260[3] == '\0');
    auVar26[4] = -(UNK_00115264 == '\0');
    auVar26[5] = -(UNK_00115265 == '\0');
    auVar26[6] = -(UNK_00115266 == '\0');
    auVar26[7] = -(UNK_00115267 == '\0');
    auVar26[8] = -(UNK_00115268 == '\0');
    auVar26[9] = -(UNK_00115269 == '\0');
    auVar26[10] = -(UNK_0011526a == '\0');
    auVar26[0xb] = -(UNK_0011526b == '\0');
    auVar26[0xc] = -(UNK_0011526c == '\0');
    auVar26[0xd] = -(UNK_0011526d == '\0');
    auVar26[0xe] = -(UNK_0011526e == '\0');
    auVar26[0xf] = -(UNK_0011526f == '\0');
    auVar26 = auVar26 & auVar13;
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
      *(undefined1 *)(param_1 + 1) = 7;
      goto LAB_0014cb5d;
    }
    break;
  case 0x12:
    auVar16[0] = -((char)*param_2 == DAT_00115370);
    auVar16[1] = -(*(char *)((long)param_2 + 1) == UNK_00115371);
    auVar16[2] = -(*(char *)((long)param_2 + 2) == UNK_00115372);
    auVar16[3] = -(*(char *)((long)param_2 + 3) == UNK_00115373);
    auVar16[4] = -(*(char *)((long)param_2 + 4) == UNK_00115374);
    auVar16[5] = -(*(char *)((long)param_2 + 5) == UNK_00115375);
    auVar16[6] = -(*(char *)((long)param_2 + 6) == UNK_00115376);
    auVar16[7] = -(*(char *)((long)param_2 + 7) == UNK_00115377);
    auVar16[8] = -((char)param_2[1] == UNK_00115378);
    auVar16[9] = -(*(char *)((long)param_2 + 9) == UNK_00115379);
    auVar16[10] = -(*(char *)((long)param_2 + 10) == UNK_0011537a);
    auVar16[0xb] = -(*(char *)((long)param_2 + 0xb) == UNK_0011537b);
    auVar16[0xc] = -(*(char *)((long)param_2 + 0xc) == UNK_0011537c);
    auVar16[0xd] = -(*(char *)((long)param_2 + 0xd) == UNK_0011537d);
    auVar16[0xe] = -(*(char *)((long)param_2 + 0xe) == UNK_0011537e);
    auVar16[0xf] = -(*(char *)((long)param_2 + 0xf) == UNK_0011537f);
    auVar29[0] = -((char)(short)param_2[2] == s_ap_001152c0[0]);
    auVar29[1] = -((char)((ushort)(short)param_2[2] >> 8) == s_ap_001152c0[1]);
    auVar29[2] = -(s_ap_001152c0[2] == '\0');
    auVar29[3] = -(s_ap_001152c0[3] == '\0');
    auVar29[4] = -(UNK_001152c4 == '\0');
    auVar29[5] = -(UNK_001152c5 == '\0');
    auVar29[6] = -(UNK_001152c6 == '\0');
    auVar29[7] = -(UNK_001152c7 == '\0');
    auVar29[8] = -(UNK_001152c8 == '\0');
    auVar29[9] = -(UNK_001152c9 == '\0');
    auVar29[10] = -(UNK_001152ca == '\0');
    auVar29[0xb] = -(UNK_001152cb == '\0');
    auVar29[0xc] = -(UNK_001152cc == '\0');
    auVar29[0xd] = -(UNK_001152cd == '\0');
    auVar29[0xe] = -(UNK_001152ce == '\0');
    auVar29[0xf] = -(UNK_001152cf == '\0');
    auVar29 = auVar29 & auVar16;
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
      *(undefined1 *)(param_1 + 1) = 8;
      goto LAB_0014cb5d;
    }
    break;
  case 0x13:
    auVar28[0] = -(*(char *)((long)param_2 + 3) == DAT_00114fe0);
    auVar28[1] = -(*(char *)((long)param_2 + 4) == UNK_00114fe1);
    auVar28[2] = -(*(char *)((long)param_2 + 5) == UNK_00114fe2);
    auVar28[3] = -(*(char *)((long)param_2 + 6) == UNK_00114fe3);
    auVar28[4] = -(*(char *)((long)param_2 + 7) == UNK_00114fe4);
    auVar28[5] = -((char)param_2[1] == UNK_00114fe5);
    auVar28[6] = -(*(char *)((long)param_2 + 9) == UNK_00114fe6);
    auVar28[7] = -(*(char *)((long)param_2 + 10) == UNK_00114fe7);
    auVar28[8] = -(*(char *)((long)param_2 + 0xb) == UNK_00114fe8);
    auVar28[9] = -(*(char *)((long)param_2 + 0xc) == UNK_00114fe9);
    auVar28[10] = -(*(char *)((long)param_2 + 0xd) == UNK_00114fea);
    auVar28[0xb] = -(*(char *)((long)param_2 + 0xe) == UNK_00114feb);
    auVar28[0xc] = -(*(char *)((long)param_2 + 0xf) == UNK_00114fec);
    auVar28[0xd] = -((char)param_2[2] == UNK_00114fed);
    auVar28[0xe] = -(*(char *)((long)param_2 + 0x11) == UNK_00114fee);
    auVar28[0xf] = -(*(char *)((long)param_2 + 0x12) == UNK_00114fef);
    auVar15[0] = -((char)*param_2 == DAT_00115440);
    auVar15[1] = -(*(char *)((long)param_2 + 1) == UNK_00115441);
    auVar15[2] = -(*(char *)((long)param_2 + 2) == UNK_00115442);
    auVar15[3] = -(*(char *)((long)param_2 + 3) == UNK_00115443);
    auVar15[4] = -(*(char *)((long)param_2 + 4) == UNK_00115444);
    auVar15[5] = -(*(char *)((long)param_2 + 5) == UNK_00115445);
    auVar15[6] = -(*(char *)((long)param_2 + 6) == UNK_00115446);
    auVar15[7] = -(*(char *)((long)param_2 + 7) == UNK_00115447);
    auVar15[8] = -((char)param_2[1] == UNK_00115448);
    auVar15[9] = -(*(char *)((long)param_2 + 9) == UNK_00115449);
    auVar15[10] = -(*(char *)((long)param_2 + 10) == UNK_0011544a);
    auVar15[0xb] = -(*(char *)((long)param_2 + 0xb) == UNK_0011544b);
    auVar15[0xc] = -(*(char *)((long)param_2 + 0xc) == UNK_0011544c);
    auVar15[0xd] = -(*(char *)((long)param_2 + 0xd) == UNK_0011544d);
    auVar15[0xe] = -(*(char *)((long)param_2 + 0xe) == UNK_0011544e);
    auVar15[0xf] = -(*(char *)((long)param_2 + 0xf) == UNK_0011544f);
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
      *(undefined1 *)(param_1 + 1) = 0x11;
      goto LAB_0014cb5d;
    }
    iVar2 = (*(code *)PTR_bcmp_001dd120)(param_2,"taker_rate_baseline");
    if (iVar2 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x16;
      goto LAB_0014cb5d;
    }
    break;
  case 0x14:
    uVar1 = (undefined4)param_2[2];
    auVar18[0] = -((char)uVar1 == DAT_00115480);
    auVar18[1] = -((char)((uint)uVar1 >> 8) == UNK_00115481);
    auVar18[2] = -((char)((uint)uVar1 >> 0x10) == UNK_00115482);
    auVar18[3] = -((char)((uint)uVar1 >> 0x18) == UNK_00115483);
    auVar18[4] = -(UNK_00115484 == '\0');
    auVar18[5] = -(UNK_00115485 == '\0');
    auVar18[6] = -(UNK_00115486 == '\0');
    auVar18[7] = -(UNK_00115487 == '\0');
    auVar18[8] = -(UNK_00115488 == '\0');
    auVar18[9] = -(UNK_00115489 == '\0');
    auVar18[10] = -(UNK_0011548a == '\0');
    auVar18[0xb] = -(UNK_0011548b == '\0');
    auVar18[0xc] = -(UNK_0011548c == '\0');
    auVar18[0xd] = -(UNK_0011548d == '\0');
    auVar18[0xe] = -(UNK_0011548e == '\0');
    auVar18[0xf] = -(UNK_0011548f == '\0');
    auVar4[0] = -((char)*param_2 == DAT_00114f80);
    auVar4[1] = -(*(char *)((long)param_2 + 1) == UNK_00114f81);
    auVar4[2] = -(*(char *)((long)param_2 + 2) == UNK_00114f82);
    auVar4[3] = -(*(char *)((long)param_2 + 3) == UNK_00114f83);
    auVar4[4] = -(*(char *)((long)param_2 + 4) == UNK_00114f84);
    auVar4[5] = -(*(char *)((long)param_2 + 5) == UNK_00114f85);
    auVar4[6] = -(*(char *)((long)param_2 + 6) == UNK_00114f86);
    auVar4[7] = -(*(char *)((long)param_2 + 7) == UNK_00114f87);
    auVar4[8] = -((char)param_2[1] == UNK_00114f88);
    auVar4[9] = -(*(char *)((long)param_2 + 9) == UNK_00114f89);
    auVar4[10] = -(*(char *)((long)param_2 + 10) == UNK_00114f8a);
    auVar4[0xb] = -(*(char *)((long)param_2 + 0xb) == UNK_00114f8b);
    auVar4[0xc] = -(*(char *)((long)param_2 + 0xc) == UNK_00114f8c);
    auVar4[0xd] = -(*(char *)((long)param_2 + 0xd) == UNK_00114f8d);
    auVar4[0xe] = -(*(char *)((long)param_2 + 0xe) == UNK_00114f8e);
    auVar4[0xf] = -(*(char *)((long)param_2 + 0xf) == UNK_00114f8f);
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
      *(undefined1 *)(param_1 + 1) = 1;
      goto LAB_0014cb5d;
    }
    iVar2 = (*(code *)PTR_bcmp_001dd120)(param_2,"max_single_close_vol");
    if (iVar2 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x1a;
      goto LAB_0014cb5d;
    }
    iVar2 = (*(code *)PTR_bcmp_001dd120)(param_2,"max_single_close_amt",param_3);
    if (iVar2 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x1b;
      goto LAB_0014cb5d;
    }
    break;
  case 0x15:
    auVar20[0] = -(*(char *)((long)param_2 + 5) == DAT_00115270);
    auVar20[1] = -(*(char *)((long)param_2 + 6) == UNK_00115271);
    auVar20[2] = -(*(char *)((long)param_2 + 7) == UNK_00115272);
    auVar20[3] = -((char)param_2[1] == UNK_00115273);
    auVar20[4] = -(*(char *)((long)param_2 + 9) == UNK_00115274);
    auVar20[5] = -(*(char *)((long)param_2 + 10) == UNK_00115275);
    auVar20[6] = -(*(char *)((long)param_2 + 0xb) == UNK_00115276);
    auVar20[7] = -(*(char *)((long)param_2 + 0xc) == UNK_00115277);
    auVar20[8] = -(*(char *)((long)param_2 + 0xd) == UNK_00115278);
    auVar20[9] = -(*(char *)((long)param_2 + 0xe) == UNK_00115279);
    auVar20[10] = -(*(char *)((long)param_2 + 0xf) == UNK_0011527a);
    auVar20[0xb] = -((char)param_2[2] == UNK_0011527b);
    auVar20[0xc] = -(*(char *)((long)param_2 + 0x11) == UNK_0011527c);
    auVar20[0xd] = -(*(char *)((long)param_2 + 0x12) == UNK_0011527d);
    auVar20[0xe] = -(*(char *)((long)param_2 + 0x13) == UNK_0011527e);
    auVar20[0xf] = -(*(char *)((long)param_2 + 0x14) == UNK_0011527f);
    auVar6[0] = -((char)*param_2 == DAT_00115110);
    auVar6[1] = -(*(char *)((long)param_2 + 1) == UNK_00115111);
    auVar6[2] = -(*(char *)((long)param_2 + 2) == UNK_00115112);
    auVar6[3] = -(*(char *)((long)param_2 + 3) == UNK_00115113);
    auVar6[4] = -(*(char *)((long)param_2 + 4) == UNK_00115114);
    auVar6[5] = -(*(char *)((long)param_2 + 5) == UNK_00115115);
    auVar6[6] = -(*(char *)((long)param_2 + 6) == UNK_00115116);
    auVar6[7] = -(*(char *)((long)param_2 + 7) == UNK_00115117);
    auVar6[8] = -((char)param_2[1] == UNK_00115118);
    auVar6[9] = -(*(char *)((long)param_2 + 9) == UNK_00115119);
    auVar6[10] = -(*(char *)((long)param_2 + 10) == UNK_0011511a);
    auVar6[0xb] = -(*(char *)((long)param_2 + 0xb) == UNK_0011511b);
    auVar6[0xc] = -(*(char *)((long)param_2 + 0xc) == UNK_0011511c);
    auVar6[0xd] = -(*(char *)((long)param_2 + 0xd) == UNK_0011511d);
    auVar6[0xe] = -(*(char *)((long)param_2 + 0xe) == UNK_0011511e);
    auVar6[0xf] = -(*(char *)((long)param_2 + 0xf) == UNK_0011511f);
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
      *(undefined1 *)(param_1 + 1) = 0;
      goto LAB_0014cb5d;
    }
    auVar21[0] = -(*(char *)((long)param_2 + 5) == DAT_00115030);
    auVar21[1] = -(*(char *)((long)param_2 + 6) == UNK_00115031);
    auVar21[2] = -(*(char *)((long)param_2 + 7) == UNK_00115032);
    auVar21[3] = -((char)param_2[1] == UNK_00115033);
    auVar21[4] = -(*(char *)((long)param_2 + 9) == UNK_00115034);
    auVar21[5] = -(*(char *)((long)param_2 + 10) == UNK_00115035);
    auVar21[6] = -(*(char *)((long)param_2 + 0xb) == UNK_00115036);
    auVar21[7] = -(*(char *)((long)param_2 + 0xc) == UNK_00115037);
    auVar21[8] = -(*(char *)((long)param_2 + 0xd) == UNK_00115038);
    auVar21[9] = -(*(char *)((long)param_2 + 0xe) == UNK_00115039);
    auVar21[10] = -(*(char *)((long)param_2 + 0xf) == UNK_0011503a);
    auVar21[0xb] = -((char)param_2[2] == UNK_0011503b);
    auVar21[0xc] = -(*(char *)((long)param_2 + 0x11) == UNK_0011503c);
    auVar21[0xd] = -(*(char *)((long)param_2 + 0x12) == UNK_0011503d);
    auVar21[0xe] = -(*(char *)((long)param_2 + 0x13) == UNK_0011503e);
    auVar21[0xf] = -(*(char *)((long)param_2 + 0x14) == UNK_0011503f);
    auVar7[0] = -((char)*param_2 == DAT_00115540);
    auVar7[1] = -(*(char *)((long)param_2 + 1) == UNK_00115541);
    auVar7[2] = -(*(char *)((long)param_2 + 2) == UNK_00115542);
    auVar7[3] = -(*(char *)((long)param_2 + 3) == UNK_00115543);
    auVar7[4] = -(*(char *)((long)param_2 + 4) == UNK_00115544);
    auVar7[5] = -(*(char *)((long)param_2 + 5) == UNK_00115545);
    auVar7[6] = -(*(char *)((long)param_2 + 6) == UNK_00115546);
    auVar7[7] = -(*(char *)((long)param_2 + 7) == UNK_00115547);
    auVar7[8] = -((char)param_2[1] == UNK_00115548);
    auVar7[9] = -(*(char *)((long)param_2 + 9) == UNK_00115549);
    auVar7[10] = -(*(char *)((long)param_2 + 10) == UNK_0011554a);
    auVar7[0xb] = -(*(char *)((long)param_2 + 0xb) == UNK_0011554b);
    auVar7[0xc] = -(*(char *)((long)param_2 + 0xc) == UNK_0011554c);
    auVar7[0xd] = -(*(char *)((long)param_2 + 0xd) == UNK_0011554d);
    auVar7[0xe] = -(*(char *)((long)param_2 + 0xe) == UNK_0011554e);
    auVar7[0xf] = -(*(char *)((long)param_2 + 0xf) == UNK_0011554f);
    auVar7 = auVar7 & auVar21;
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
                 (ushort)(SUB161(auVar7 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar7[0xf] >> 7) << 0xf) == 0xffff) {
      *(undefined1 *)(param_1 + 1) = 0x1e;
      goto LAB_0014cb5d;
    }
    break;
  case 0x16:
    auVar19[0] = -(*(char *)((long)param_2 + 6) == DAT_00114fd0);
    auVar19[1] = -(*(char *)((long)param_2 + 7) == UNK_00114fd1);
    auVar19[2] = -((char)param_2[1] == UNK_00114fd2);
    auVar19[3] = -(*(char *)((long)param_2 + 9) == UNK_00114fd3);
    auVar19[4] = -(*(char *)((long)param_2 + 10) == UNK_00114fd4);
    auVar19[5] = -(*(char *)((long)param_2 + 0xb) == UNK_00114fd5);
    auVar19[6] = -(*(char *)((long)param_2 + 0xc) == UNK_00114fd6);
    auVar19[7] = -(*(char *)((long)param_2 + 0xd) == UNK_00114fd7);
    auVar19[8] = -(*(char *)((long)param_2 + 0xe) == UNK_00114fd8);
    auVar19[9] = -(*(char *)((long)param_2 + 0xf) == UNK_00114fd9);
    auVar19[10] = -((char)param_2[2] == UNK_00114fda);
    auVar19[0xb] = -(*(char *)((long)param_2 + 0x11) == UNK_00114fdb);
    auVar19[0xc] = -(*(char *)((long)param_2 + 0x12) == UNK_00114fdc);
    auVar19[0xd] = -(*(char *)((long)param_2 + 0x13) == UNK_00114fdd);
    auVar19[0xe] = -(*(char *)((long)param_2 + 0x14) == UNK_00114fde);
    auVar19[0xf] = -(*(char *)((long)param_2 + 0x15) == UNK_00114fdf);
    auVar5[0] = -((char)*param_2 == DAT_00115100);
    auVar5[1] = -(*(char *)((long)param_2 + 1) == UNK_00115101);
    auVar5[2] = -(*(char *)((long)param_2 + 2) == UNK_00115102);
    auVar5[3] = -(*(char *)((long)param_2 + 3) == UNK_00115103);
    auVar5[4] = -(*(char *)((long)param_2 + 4) == UNK_00115104);
    auVar5[5] = -(*(char *)((long)param_2 + 5) == UNK_00115105);
    auVar5[6] = -(*(char *)((long)param_2 + 6) == UNK_00115106);
    auVar5[7] = -(*(char *)((long)param_2 + 7) == UNK_00115107);
    auVar5[8] = -((char)param_2[1] == UNK_00115108);
    auVar5[9] = -(*(char *)((long)param_2 + 9) == UNK_00115109);
    auVar5[10] = -(*(char *)((long)param_2 + 10) == UNK_0011510a);
    auVar5[0xb] = -(*(char *)((long)param_2 + 0xb) == UNK_0011510b);
    auVar5[0xc] = -(*(char *)((long)param_2 + 0xc) == UNK_0011510c);
    auVar5[0xd] = -(*(char *)((long)param_2 + 0xd) == UNK_0011510d);
    auVar5[0xe] = -(*(char *)((long)param_2 + 0xe) == UNK_0011510e);
    auVar5[0xf] = -(*(char *)((long)param_2 + 0xf) == UNK_0011510f);
    auVar5 = auVar5 & auVar19;
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
      *(undefined1 *)(param_1 + 1) = 0x15;
      goto LAB_0014cb5d;
    }
    break;
  case 0x17:
    auVar17[0] = -(*(char *)((long)param_2 + 7) == DAT_00115460);
    auVar17[1] = -((char)param_2[1] == UNK_00115461);
    auVar17[2] = -(*(char *)((long)param_2 + 9) == UNK_00115462);
    auVar17[3] = -(*(char *)((long)param_2 + 10) == UNK_00115463);
    auVar17[4] = -(*(char *)((long)param_2 + 0xb) == UNK_00115464);
    auVar17[5] = -(*(char *)((long)param_2 + 0xc) == UNK_00115465);
    auVar17[6] = -(*(char *)((long)param_2 + 0xd) == UNK_00115466);
    auVar17[7] = -(*(char *)((long)param_2 + 0xe) == UNK_00115467);
    auVar17[8] = -(*(char *)((long)param_2 + 0xf) == UNK_00115468);
    auVar17[9] = -((char)param_2[2] == UNK_00115469);
    auVar17[10] = -(*(char *)((long)param_2 + 0x11) == UNK_0011546a);
    auVar17[0xb] = -(*(char *)((long)param_2 + 0x12) == UNK_0011546b);
    auVar17[0xc] = -(*(char *)((long)param_2 + 0x13) == UNK_0011546c);
    auVar17[0xd] = -(*(char *)((long)param_2 + 0x14) == UNK_0011546d);
    auVar17[0xe] = -(*(char *)((long)param_2 + 0x15) == UNK_0011546e);
    auVar17[0xf] = -(*(char *)((long)param_2 + 0x16) == UNK_0011546f);
    auVar3[0] = -((char)*param_2 == DAT_00115070);
    auVar3[1] = -(*(char *)((long)param_2 + 1) == UNK_00115071);
    auVar3[2] = -(*(char *)((long)param_2 + 2) == UNK_00115072);
    auVar3[3] = -(*(char *)((long)param_2 + 3) == UNK_00115073);
    auVar3[4] = -(*(char *)((long)param_2 + 4) == UNK_00115074);
    auVar3[5] = -(*(char *)((long)param_2 + 5) == UNK_00115075);
    auVar3[6] = -(*(char *)((long)param_2 + 6) == UNK_00115076);
    auVar3[7] = -(*(char *)((long)param_2 + 7) == UNK_00115077);
    auVar3[8] = -((char)param_2[1] == UNK_00115078);
    auVar3[9] = -(*(char *)((long)param_2 + 9) == UNK_00115079);
    auVar3[10] = -(*(char *)((long)param_2 + 10) == UNK_0011507a);
    auVar3[0xb] = -(*(char *)((long)param_2 + 0xb) == UNK_0011507b);
    auVar3[0xc] = -(*(char *)((long)param_2 + 0xc) == UNK_0011507c);
    auVar3[0xd] = -(*(char *)((long)param_2 + 0xd) == UNK_0011507d);
    auVar3[0xe] = -(*(char *)((long)param_2 + 0xe) == UNK_0011507e);
    auVar3[0xf] = -(*(char *)((long)param_2 + 0xf) == UNK_0011507f);
    auVar3 = auVar3 & auVar17;
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
      *(undefined1 *)(param_1 + 1) = 0x19;
      goto LAB_0014cb5d;
    }
    break;
  case 0x1b:
    auVar27[0] = -(*(char *)((long)param_2 + 0xb) == DAT_00114f60);
    auVar27[1] = -(*(char *)((long)param_2 + 0xc) == UNK_00114f61);
    auVar27[2] = -(*(char *)((long)param_2 + 0xd) == UNK_00114f62);
    auVar27[3] = -(*(char *)((long)param_2 + 0xe) == UNK_00114f63);
    auVar27[4] = -(*(char *)((long)param_2 + 0xf) == UNK_00114f64);
    auVar27[5] = -((char)param_2[2] == UNK_00114f65);
    auVar27[6] = -(*(char *)((long)param_2 + 0x11) == UNK_00114f66);
    auVar27[7] = -(*(char *)((long)param_2 + 0x12) == UNK_00114f67);
    auVar27[8] = -(*(char *)((long)param_2 + 0x13) == UNK_00114f68);
    auVar27[9] = -(*(char *)((long)param_2 + 0x14) == UNK_00114f69);
    auVar27[10] = -(*(char *)((long)param_2 + 0x15) == UNK_00114f6a);
    auVar27[0xb] = -(*(char *)((long)param_2 + 0x16) == UNK_00114f6b);
    auVar27[0xc] = -(*(char *)((long)param_2 + 0x17) == UNK_00114f6c);
    auVar27[0xd] = -((char)param_2[3] == UNK_00114f6d);
    auVar27[0xe] = -(*(char *)((long)param_2 + 0x19) == UNK_00114f6e);
    auVar27[0xf] = -(*(char *)((long)param_2 + 0x1a) == UNK_00114f6f);
    auVar14[0] = -((char)*param_2 == s_dyn_score_max_po_00115230[0]);
    auVar14[1] = -(*(char *)((long)param_2 + 1) == s_dyn_score_max_po_00115230[1]);
    auVar14[2] = -(*(char *)((long)param_2 + 2) == s_dyn_score_max_po_00115230[2]);
    auVar14[3] = -(*(char *)((long)param_2 + 3) == s_dyn_score_max_po_00115230[3]);
    auVar14[4] = -(*(char *)((long)param_2 + 4) == s_dyn_score_max_po_00115230[4]);
    auVar14[5] = -(*(char *)((long)param_2 + 5) == s_dyn_score_max_po_00115230[5]);
    auVar14[6] = -(*(char *)((long)param_2 + 6) == s_dyn_score_max_po_00115230[6]);
    auVar14[7] = -(*(char *)((long)param_2 + 7) == s_dyn_score_max_po_00115230[7]);
    auVar14[8] = -((char)param_2[1] == s_dyn_score_max_po_00115230[8]);
    auVar14[9] = -(*(char *)((long)param_2 + 9) == s_dyn_score_max_po_00115230[9]);
    auVar14[10] = -(*(char *)((long)param_2 + 10) == s_dyn_score_max_po_00115230[10]);
    auVar14[0xb] = -(*(char *)((long)param_2 + 0xb) == s_dyn_score_max_po_00115230[0xb]);
    auVar14[0xc] = -(*(char *)((long)param_2 + 0xc) == s_dyn_score_max_po_00115230[0xc]);
    auVar14[0xd] = -(*(char *)((long)param_2 + 0xd) == s_dyn_score_max_po_00115230[0xd]);
    auVar14[0xe] = -(*(char *)((long)param_2 + 0xe) == s_dyn_score_max_po_00115230[0xe]);
    auVar14[0xf] = -(*(char *)((long)param_2 + 0xf) == s_dyn_score_max_po_00115230[0xf]);
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
      *(undefined1 *)(param_1 + 1) = 0x1d;
      goto LAB_0014cb5d;
    }
    break;
  case 0x1d:
    iVar2 = (*(code *)PTR_bcmp_001dd120)(param_2,"dyn_pending_max_position_ts_s");
    if (iVar2 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x20;
      goto LAB_0014cb5d;
    }
    break;
  case 0x21:
    iVar2 = (*(code *)PTR_bcmp_001dd120)
                      (param_2,
                       "dyn_score_position_ts_threshold_sdyn_score_max_position_ts_sdyn_score_delta_score"
                       ,0x21);
    if (iVar2 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x1c;
      goto LAB_0014cb5d;
    }
    break;
  case 0x23:
    iVar2 = (*(code *)PTR_bcmp_001dd120)(param_2,"dyn_pending_position_ts_threshold_s",0x23);
    if (iVar2 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x1f;
      goto LAB_0014cb5d;
    }
    iVar2 = (*(code *)PTR_bcmp_001dd120)(param_2,"dyn_pending_delta_max_pending_ts_ms",0x23);
    if (iVar2 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x22;
      goto LAB_0014cb5d;
    }
    goto LAB_0014cb5a;
  case 0x25:
    iVar2 = (*(code *)PTR_bcmp_001dd120)(param_2,"dyn_pending_order_max_pending_time_ms");
    if (iVar2 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x21;
      goto LAB_0014cb5d;
    }
  }
LAB_0014cb5a:
  *(undefined1 *)(param_1 + 1) = 0x23;
LAB_0014cb5d:
  *param_1 = 2;
  return;
}


