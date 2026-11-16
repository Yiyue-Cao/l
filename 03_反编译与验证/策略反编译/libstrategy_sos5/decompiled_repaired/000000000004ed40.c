// ELF address 0x000000000004ed40; <strategy_sos5::_::<impl serde_core::de::Deserialize for strategy_sos5::SoS5Params>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_str

/* _<strategy_sos5::_::<impl serde_core::de::Deserialize for
   strategy_sos5::SoS5Params>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_str */

void __rustcall
_<strategy_sos5::_::<impl_serde_core::de::Deserialize_for_strategy_sos5::SoS5Params>::deserialize::__FieldVisitor_as_serde_core::de::Visitor>
::visit_str(undefined8 *param_1,long *param_2,long param_3)

{
  undefined4 uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
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
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  
  bVar2 = false;
  switch(param_3) {
  case 8:
    if (*param_2 == 0x316e6f6974636573) {
      *(undefined1 *)(param_1 + 1) = 0x11;
      goto LAB_0014f266;
    }
    if (*param_2 == 0x326e6f6974636573) {
      *(undefined1 *)(param_1 + 1) = 0x12;
      goto LAB_0014f266;
    }
    if (*param_2 == 0x336e6f6974636573) {
      *(undefined1 *)(param_1 + 1) = 0x13;
      goto LAB_0014f266;
    }
    iVar4 = (*(code *)PTR_bcmp_001e3e98)(param_2,&DAT_00115fd8);
    if (iVar4 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x19;
      goto LAB_0014f266;
    }
    bVar2 = false;
    goto switchD_0014efb8_caseD_14f31f;
  default:
    goto switchD_0014ed68_caseD_9;
  case 0xb:
    if (*(long *)((long)param_2 + 3) == 0x79656b5f72656863 && *param_2 == 0x5f72656863746177) {
      *(undefined1 *)(param_1 + 1) = 2;
      goto LAB_0014f266;
    }
    iVar4 = (*(code *)PTR_bcmp_001e3e98)(param_2,"sos_add_vol");
    if (iVar4 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x10;
      goto LAB_0014f266;
    }
    iVar4 = (*(code *)PTR_bcmp_001e3e98)(param_2,"signal_modepv1_alphacost_alpha",param_3);
    if (iVar4 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x14;
      goto LAB_0014f266;
    }
    bVar2 = false;
    bVar3 = false;
    if (0xd < param_3 - 9U) goto switchD_0014efb8_caseD_14f31f;
    goto LAB_0014efaa;
  case 0xe:
    if (*(long *)((long)param_2 + 6) == 0x657461725f72656b && *param_2 == 0x656b61745f736f73) {
      *(undefined1 *)(param_1 + 1) = 0xf;
      goto LAB_0014f266;
    }
    iVar4 = (*(code *)PTR_bcmp_001e3e98)(param_2,"max_taker_rate");
    if (iVar4 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x1d;
      goto LAB_0014f266;
    }
    iVar4 = (*(code *)PTR_bcmp_001e3e98)(param_2,"trade_slipperyclose_position_block_ms",param_3);
    if (iVar4 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x1e;
      goto LAB_0014f266;
    }
    bVar2 = false;
    goto switchD_0014efb8_caseD_14f31f;
  case 0x11:
    auVar11[0] = -((char)*param_2 == DAT_00115790);
    auVar11[1] = -(*(char *)((long)param_2 + 1) == UNK_00115791);
    auVar11[2] = -(*(char *)((long)param_2 + 2) == UNK_00115792);
    auVar11[3] = -(*(char *)((long)param_2 + 3) == UNK_00115793);
    auVar11[4] = -(*(char *)((long)param_2 + 4) == UNK_00115794);
    auVar11[5] = -(*(char *)((long)param_2 + 5) == UNK_00115795);
    auVar11[6] = -(*(char *)((long)param_2 + 6) == UNK_00115796);
    auVar11[7] = -(*(char *)((long)param_2 + 7) == UNK_00115797);
    auVar11[8] = -((char)param_2[1] == UNK_00115798);
    auVar11[9] = -(*(char *)((long)param_2 + 9) == UNK_00115799);
    auVar11[10] = -(*(char *)((long)param_2 + 10) == UNK_0011579a);
    auVar11[0xb] = -(*(char *)((long)param_2 + 0xb) == UNK_0011579b);
    auVar11[0xc] = -(*(char *)((long)param_2 + 0xc) == UNK_0011579c);
    auVar11[0xd] = -(*(char *)((long)param_2 + 0xd) == UNK_0011579d);
    auVar11[0xe] = -(*(char *)((long)param_2 + 0xe) == UNK_0011579e);
    auVar11[0xf] = -(*(char *)((long)param_2 + 0xf) == UNK_0011579f);
    auVar30[0] = -((char)param_2[2] == s_l_00115b00[0]);
    auVar30[1] = -(s_l_00115b00[1] == '\0');
    auVar30[2] = -(s_l_00115b00[2] == '\0');
    auVar30[3] = -(s_l_00115b00[3] == '\0');
    auVar30[4] = -(UNK_00115b04 == '\0');
    auVar30[5] = -(UNK_00115b05 == '\0');
    auVar30[6] = -(UNK_00115b06 == '\0');
    auVar30[7] = -(UNK_00115b07 == '\0');
    auVar30[8] = -(UNK_00115b08 == '\0');
    auVar30[9] = -(UNK_00115b09 == '\0');
    auVar30[10] = -(UNK_00115b0a == '\0');
    auVar30[0xb] = -(UNK_00115b0b == '\0');
    auVar30[0xc] = -(UNK_00115b0c == '\0');
    auVar30[0xd] = -(UNK_00115b0d == '\0');
    auVar30[0xe] = -(UNK_00115b0e == '\0');
    auVar30[0xf] = -(UNK_00115b0f == '\0');
    auVar30 = auVar30 & auVar11;
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
      *(undefined1 *)(param_1 + 1) = 3;
      goto LAB_0014f266;
    }
    auVar12[0] = -((char)*param_2 == s_section1_to_3_pn_00115b70[0]);
    auVar12[1] = -(*(char *)((long)param_2 + 1) == s_section1_to_3_pn_00115b70[1]);
    auVar12[2] = -(*(char *)((long)param_2 + 2) == s_section1_to_3_pn_00115b70[2]);
    auVar12[3] = -(*(char *)((long)param_2 + 3) == s_section1_to_3_pn_00115b70[3]);
    auVar12[4] = -(*(char *)((long)param_2 + 4) == s_section1_to_3_pn_00115b70[4]);
    auVar12[5] = -(*(char *)((long)param_2 + 5) == s_section1_to_3_pn_00115b70[5]);
    auVar12[6] = -(*(char *)((long)param_2 + 6) == s_section1_to_3_pn_00115b70[6]);
    auVar12[7] = -(*(char *)((long)param_2 + 7) == s_section1_to_3_pn_00115b70[7]);
    auVar12[8] = -((char)param_2[1] == s_section1_to_3_pn_00115b70[8]);
    auVar12[9] = -(*(char *)((long)param_2 + 9) == s_section1_to_3_pn_00115b70[9]);
    auVar12[10] = -(*(char *)((long)param_2 + 10) == s_section1_to_3_pn_00115b70[10]);
    auVar12[0xb] = -(*(char *)((long)param_2 + 0xb) == s_section1_to_3_pn_00115b70[0xb]);
    auVar12[0xc] = -(*(char *)((long)param_2 + 0xc) == s_section1_to_3_pn_00115b70[0xc]);
    auVar12[0xd] = -(*(char *)((long)param_2 + 0xd) == s_section1_to_3_pn_00115b70[0xd]);
    auVar12[0xe] = -(*(char *)((long)param_2 + 0xe) == s_section1_to_3_pn_00115b70[0xe]);
    auVar12[0xf] = -(*(char *)((long)param_2 + 0xf) == s_section1_to_3_pn_00115b70[0xf]);
    auVar31[0] = -((char)param_2[2] == s_l_00115b00[0]);
    auVar31[1] = -(s_l_00115b00[1] == '\0');
    auVar31[2] = -(s_l_00115b00[2] == '\0');
    auVar31[3] = -(s_l_00115b00[3] == '\0');
    auVar31[4] = -(UNK_00115b04 == '\0');
    auVar31[5] = -(UNK_00115b05 == '\0');
    auVar31[6] = -(UNK_00115b06 == '\0');
    auVar31[7] = -(UNK_00115b07 == '\0');
    auVar31[8] = -(UNK_00115b08 == '\0');
    auVar31[9] = -(UNK_00115b09 == '\0');
    auVar31[10] = -(UNK_00115b0a == '\0');
    auVar31[0xb] = -(UNK_00115b0b == '\0');
    auVar31[0xc] = -(UNK_00115b0c == '\0');
    auVar31[0xd] = -(UNK_00115b0d == '\0');
    auVar31[0xe] = -(UNK_00115b0e == '\0');
    auVar31[0xf] = -(UNK_00115b0f == '\0');
    auVar31 = auVar31 & auVar12;
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
      *(undefined1 *)(param_1 + 1) = 4;
      goto LAB_0014f266;
    }
    auVar13[0] = -((char)*param_2 == DAT_00115ed0);
    auVar13[1] = -(*(char *)((long)param_2 + 1) == UNK_00115ed1);
    auVar13[2] = -(*(char *)((long)param_2 + 2) == UNK_00115ed2);
    auVar13[3] = -(*(char *)((long)param_2 + 3) == UNK_00115ed3);
    auVar13[4] = -(*(char *)((long)param_2 + 4) == UNK_00115ed4);
    auVar13[5] = -(*(char *)((long)param_2 + 5) == UNK_00115ed5);
    auVar13[6] = -(*(char *)((long)param_2 + 6) == UNK_00115ed6);
    auVar13[7] = -(*(char *)((long)param_2 + 7) == UNK_00115ed7);
    auVar13[8] = -((char)param_2[1] == UNK_00115ed8);
    auVar13[9] = -(*(char *)((long)param_2 + 9) == UNK_00115ed9);
    auVar13[10] = -(*(char *)((long)param_2 + 10) == UNK_00115eda);
    auVar13[0xb] = -(*(char *)((long)param_2 + 0xb) == UNK_00115edb);
    auVar13[0xc] = -(*(char *)((long)param_2 + 0xc) == UNK_00115edc);
    auVar13[0xd] = -(*(char *)((long)param_2 + 0xd) == UNK_00115edd);
    auVar13[0xe] = -(*(char *)((long)param_2 + 0xe) == UNK_00115ede);
    auVar13[0xf] = -(*(char *)((long)param_2 + 0xf) == UNK_00115edf);
    auVar32[0] = -((char)param_2[2] == s_l_00115b00[0]);
    auVar32[1] = -(s_l_00115b00[1] == '\0');
    auVar32[2] = -(s_l_00115b00[2] == '\0');
    auVar32[3] = -(s_l_00115b00[3] == '\0');
    auVar32[4] = -(UNK_00115b04 == '\0');
    auVar32[5] = -(UNK_00115b05 == '\0');
    auVar32[6] = -(UNK_00115b06 == '\0');
    auVar32[7] = -(UNK_00115b07 == '\0');
    auVar32[8] = -(UNK_00115b08 == '\0');
    auVar32[9] = -(UNK_00115b09 == '\0');
    auVar32[10] = -(UNK_00115b0a == '\0');
    auVar32[0xb] = -(UNK_00115b0b == '\0');
    auVar32[0xc] = -(UNK_00115b0c == '\0');
    auVar32[0xd] = -(UNK_00115b0d == '\0');
    auVar32[0xe] = -(UNK_00115b0e == '\0');
    auVar32[0xf] = -(UNK_00115b0f == '\0');
    auVar32 = auVar32 & auVar13;
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
      *(undefined1 *)(param_1 + 1) = 5;
      goto LAB_0014f266;
    }
    auVar14[0] = -((char)*param_2 == s_section2_to_3_pn_00115aa0[0]);
    auVar14[1] = -(*(char *)((long)param_2 + 1) == s_section2_to_3_pn_00115aa0[1]);
    auVar14[2] = -(*(char *)((long)param_2 + 2) == s_section2_to_3_pn_00115aa0[2]);
    auVar14[3] = -(*(char *)((long)param_2 + 3) == s_section2_to_3_pn_00115aa0[3]);
    auVar14[4] = -(*(char *)((long)param_2 + 4) == s_section2_to_3_pn_00115aa0[4]);
    auVar14[5] = -(*(char *)((long)param_2 + 5) == s_section2_to_3_pn_00115aa0[5]);
    auVar14[6] = -(*(char *)((long)param_2 + 6) == s_section2_to_3_pn_00115aa0[6]);
    auVar14[7] = -(*(char *)((long)param_2 + 7) == s_section2_to_3_pn_00115aa0[7]);
    auVar14[8] = -((char)param_2[1] == s_section2_to_3_pn_00115aa0[8]);
    auVar14[9] = -(*(char *)((long)param_2 + 9) == s_section2_to_3_pn_00115aa0[9]);
    auVar14[10] = -(*(char *)((long)param_2 + 10) == s_section2_to_3_pn_00115aa0[10]);
    auVar14[0xb] = -(*(char *)((long)param_2 + 0xb) == s_section2_to_3_pn_00115aa0[0xb]);
    auVar14[0xc] = -(*(char *)((long)param_2 + 0xc) == s_section2_to_3_pn_00115aa0[0xc]);
    auVar14[0xd] = -(*(char *)((long)param_2 + 0xd) == s_section2_to_3_pn_00115aa0[0xd]);
    auVar14[0xe] = -(*(char *)((long)param_2 + 0xe) == s_section2_to_3_pn_00115aa0[0xe]);
    auVar14[0xf] = -(*(char *)((long)param_2 + 0xf) == s_section2_to_3_pn_00115aa0[0xf]);
    auVar33[0] = -((char)param_2[2] == s_l_00115b00[0]);
    auVar33[1] = -(s_l_00115b00[1] == '\0');
    auVar33[2] = -(s_l_00115b00[2] == '\0');
    auVar33[3] = -(s_l_00115b00[3] == '\0');
    auVar33[4] = -(UNK_00115b04 == '\0');
    auVar33[5] = -(UNK_00115b05 == '\0');
    auVar33[6] = -(UNK_00115b06 == '\0');
    auVar33[7] = -(UNK_00115b07 == '\0');
    auVar33[8] = -(UNK_00115b08 == '\0');
    auVar33[9] = -(UNK_00115b09 == '\0');
    auVar33[10] = -(UNK_00115b0a == '\0');
    auVar33[0xb] = -(UNK_00115b0b == '\0');
    auVar33[0xc] = -(UNK_00115b0c == '\0');
    auVar33[0xd] = -(UNK_00115b0d == '\0');
    auVar33[0xe] = -(UNK_00115b0e == '\0');
    auVar33[0xf] = -(UNK_00115b0f == '\0');
    auVar33 = auVar33 & auVar14;
    if ((ushort)((ushort)(SUB161(auVar33 >> 7,0) & 1) | (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar33[0xf] >> 7) << 0xf) == 0xffff) {
      *(undefined1 *)(param_1 + 1) = 6;
      goto LAB_0014f266;
    }
    auVar15[0] = -((char)*param_2 == DAT_00115da0);
    auVar15[1] = -(*(char *)((long)param_2 + 1) == UNK_00115da1);
    auVar15[2] = -(*(char *)((long)param_2 + 2) == UNK_00115da2);
    auVar15[3] = -(*(char *)((long)param_2 + 3) == UNK_00115da3);
    auVar15[4] = -(*(char *)((long)param_2 + 4) == UNK_00115da4);
    auVar15[5] = -(*(char *)((long)param_2 + 5) == UNK_00115da5);
    auVar15[6] = -(*(char *)((long)param_2 + 6) == UNK_00115da6);
    auVar15[7] = -(*(char *)((long)param_2 + 7) == UNK_00115da7);
    auVar15[8] = -((char)param_2[1] == UNK_00115da8);
    auVar15[9] = -(*(char *)((long)param_2 + 9) == UNK_00115da9);
    auVar15[10] = -(*(char *)((long)param_2 + 10) == UNK_00115daa);
    auVar15[0xb] = -(*(char *)((long)param_2 + 0xb) == UNK_00115dab);
    auVar15[0xc] = -(*(char *)((long)param_2 + 0xc) == UNK_00115dac);
    auVar15[0xd] = -(*(char *)((long)param_2 + 0xd) == UNK_00115dad);
    auVar15[0xe] = -(*(char *)((long)param_2 + 0xe) == UNK_00115dae);
    auVar15[0xf] = -(*(char *)((long)param_2 + 0xf) == UNK_00115daf);
    auVar34[0] = -((char)param_2[2] == s_l_00115b00[0]);
    auVar34[1] = -(s_l_00115b00[1] == '\0');
    auVar34[2] = -(s_l_00115b00[2] == '\0');
    auVar34[3] = -(s_l_00115b00[3] == '\0');
    auVar34[4] = -(UNK_00115b04 == '\0');
    auVar34[5] = -(UNK_00115b05 == '\0');
    auVar34[6] = -(UNK_00115b06 == '\0');
    auVar34[7] = -(UNK_00115b07 == '\0');
    auVar34[8] = -(UNK_00115b08 == '\0');
    auVar34[9] = -(UNK_00115b09 == '\0');
    auVar34[10] = -(UNK_00115b0a == '\0');
    auVar34[0xb] = -(UNK_00115b0b == '\0');
    auVar34[0xc] = -(UNK_00115b0c == '\0');
    auVar34[0xd] = -(UNK_00115b0d == '\0');
    auVar34[0xe] = -(UNK_00115b0e == '\0');
    auVar34[0xf] = -(UNK_00115b0f == '\0');
    auVar34 = auVar34 & auVar15;
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
      *(undefined1 *)(param_1 + 1) = 7;
      goto LAB_0014f266;
    }
    bVar2 = false;
    goto joined_r0x0014f19a;
  case 0x12:
    auVar16[0] = -((char)*param_2 == DAT_00115c90);
    auVar16[1] = -(*(char *)((long)param_2 + 1) == UNK_00115c91);
    auVar16[2] = -(*(char *)((long)param_2 + 2) == UNK_00115c92);
    auVar16[3] = -(*(char *)((long)param_2 + 3) == UNK_00115c93);
    auVar16[4] = -(*(char *)((long)param_2 + 4) == UNK_00115c94);
    auVar16[5] = -(*(char *)((long)param_2 + 5) == UNK_00115c95);
    auVar16[6] = -(*(char *)((long)param_2 + 6) == UNK_00115c96);
    auVar16[7] = -(*(char *)((long)param_2 + 7) == UNK_00115c97);
    auVar16[8] = -((char)param_2[1] == UNK_00115c98);
    auVar16[9] = -(*(char *)((long)param_2 + 9) == UNK_00115c99);
    auVar16[10] = -(*(char *)((long)param_2 + 10) == UNK_00115c9a);
    auVar16[0xb] = -(*(char *)((long)param_2 + 0xb) == UNK_00115c9b);
    auVar16[0xc] = -(*(char *)((long)param_2 + 0xc) == UNK_00115c9c);
    auVar16[0xd] = -(*(char *)((long)param_2 + 0xd) == UNK_00115c9d);
    auVar16[0xe] = -(*(char *)((long)param_2 + 0xe) == UNK_00115c9e);
    auVar16[0xf] = -(*(char *)((long)param_2 + 0xf) == UNK_00115c9f);
    auVar35[0] = -((char)(short)param_2[2] == s_bp_00115990[0]);
    auVar35[1] = -((char)((ushort)(short)param_2[2] >> 8) == s_bp_00115990[1]);
    auVar35[2] = -(s_bp_00115990[2] == '\0');
    auVar35[3] = -(s_bp_00115990[3] == '\0');
    auVar35[4] = -(UNK_00115994 == '\0');
    auVar35[5] = -(UNK_00115995 == '\0');
    auVar35[6] = -(UNK_00115996 == '\0');
    auVar35[7] = -(UNK_00115997 == '\0');
    auVar35[8] = -(UNK_00115998 == '\0');
    auVar35[9] = -(UNK_00115999 == '\0');
    auVar35[10] = -(UNK_0011599a == '\0');
    auVar35[0xb] = -(UNK_0011599b == '\0');
    auVar35[0xc] = -(UNK_0011599c == '\0');
    auVar35[0xd] = -(UNK_0011599d == '\0');
    auVar35[0xe] = -(UNK_0011599e == '\0');
    auVar35[0xf] = -(UNK_0011599f == '\0');
    auVar35 = auVar35 & auVar16;
    if ((ushort)((ushort)(SUB161(auVar35 >> 7,0) & 1) | (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar35 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar35 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar35 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar35 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar35 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar35 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar35 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar35 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar35 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar35 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar35 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar35[0xf] >> 7) << 0xf) == 0xffff) {
      *(undefined1 *)(param_1 + 1) = 9;
      goto LAB_0014f266;
    }
    auVar17[0] = -((char)*param_2 == DAT_00115c20);
    auVar17[1] = -(*(char *)((long)param_2 + 1) == UNK_00115c21);
    auVar17[2] = -(*(char *)((long)param_2 + 2) == UNK_00115c22);
    auVar17[3] = -(*(char *)((long)param_2 + 3) == UNK_00115c23);
    auVar17[4] = -(*(char *)((long)param_2 + 4) == UNK_00115c24);
    auVar17[5] = -(*(char *)((long)param_2 + 5) == UNK_00115c25);
    auVar17[6] = -(*(char *)((long)param_2 + 6) == UNK_00115c26);
    auVar17[7] = -(*(char *)((long)param_2 + 7) == UNK_00115c27);
    auVar17[8] = -((char)param_2[1] == UNK_00115c28);
    auVar17[9] = -(*(char *)((long)param_2 + 9) == UNK_00115c29);
    auVar17[10] = -(*(char *)((long)param_2 + 10) == UNK_00115c2a);
    auVar17[0xb] = -(*(char *)((long)param_2 + 0xb) == UNK_00115c2b);
    auVar17[0xc] = -(*(char *)((long)param_2 + 0xc) == UNK_00115c2c);
    auVar17[0xd] = -(*(char *)((long)param_2 + 0xd) == UNK_00115c2d);
    auVar17[0xe] = -(*(char *)((long)param_2 + 0xe) == UNK_00115c2e);
    auVar17[0xf] = -(*(char *)((long)param_2 + 0xf) == UNK_00115c2f);
    auVar36[0] = -((char)(short)param_2[2] == s_ap_00115b60[0]);
    auVar36[1] = -((char)((ushort)(short)param_2[2] >> 8) == s_ap_00115b60[1]);
    auVar36[2] = -(s_ap_00115b60[2] == '\0');
    auVar36[3] = -(s_ap_00115b60[3] == '\0');
    auVar36[4] = -(UNK_00115b64 == '\0');
    auVar36[5] = -(UNK_00115b65 == '\0');
    auVar36[6] = -(UNK_00115b66 == '\0');
    auVar36[7] = -(UNK_00115b67 == '\0');
    auVar36[8] = -(UNK_00115b68 == '\0');
    auVar36[9] = -(UNK_00115b69 == '\0');
    auVar36[10] = -(UNK_00115b6a == '\0');
    auVar36[0xb] = -(UNK_00115b6b == '\0');
    auVar36[0xc] = -(UNK_00115b6c == '\0');
    auVar36[0xd] = -(UNK_00115b6d == '\0');
    auVar36[0xe] = -(UNK_00115b6e == '\0');
    auVar36[0xf] = -(UNK_00115b6f == '\0');
    auVar36 = auVar36 & auVar17;
    if ((ushort)((ushort)(SUB161(auVar36 >> 7,0) & 1) | (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar36 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar36 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar36 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar36 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar36 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar36 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar36 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar36 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar36[0xf] >> 7) << 0xf) == 0xffff) {
      *(undefined1 *)(param_1 + 1) = 0xe;
      goto LAB_0014f266;
    }
    break;
  case 0x13:
    auVar24[0] = -(*(char *)((long)param_2 + 3) == DAT_001159e0);
    auVar24[1] = -(*(char *)((long)param_2 + 4) == UNK_001159e1);
    auVar24[2] = -(*(char *)((long)param_2 + 5) == UNK_001159e2);
    auVar24[3] = -(*(char *)((long)param_2 + 6) == UNK_001159e3);
    auVar24[4] = -(*(char *)((long)param_2 + 7) == UNK_001159e4);
    auVar24[5] = -((char)param_2[1] == UNK_001159e5);
    auVar24[6] = -(*(char *)((long)param_2 + 9) == UNK_001159e6);
    auVar24[7] = -(*(char *)((long)param_2 + 10) == UNK_001159e7);
    auVar24[8] = -(*(char *)((long)param_2 + 0xb) == UNK_001159e8);
    auVar24[9] = -(*(char *)((long)param_2 + 0xc) == UNK_001159e9);
    auVar24[10] = -(*(char *)((long)param_2 + 0xd) == UNK_001159ea);
    auVar24[0xb] = -(*(char *)((long)param_2 + 0xe) == UNK_001159eb);
    auVar24[0xc] = -(*(char *)((long)param_2 + 0xf) == UNK_001159ec);
    auVar24[0xd] = -((char)param_2[2] == UNK_001159ed);
    auVar24[0xe] = -(*(char *)((long)param_2 + 0x11) == UNK_001159ee);
    auVar24[0xf] = -(*(char *)((long)param_2 + 0x12) == UNK_001159ef);
    auVar5[0] = -((char)*param_2 == DAT_00115bb0);
    auVar5[1] = -(*(char *)((long)param_2 + 1) == UNK_00115bb1);
    auVar5[2] = -(*(char *)((long)param_2 + 2) == UNK_00115bb2);
    auVar5[3] = -(*(char *)((long)param_2 + 3) == UNK_00115bb3);
    auVar5[4] = -(*(char *)((long)param_2 + 4) == UNK_00115bb4);
    auVar5[5] = -(*(char *)((long)param_2 + 5) == UNK_00115bb5);
    auVar5[6] = -(*(char *)((long)param_2 + 6) == UNK_00115bb6);
    auVar5[7] = -(*(char *)((long)param_2 + 7) == UNK_00115bb7);
    auVar5[8] = -((char)param_2[1] == UNK_00115bb8);
    auVar5[9] = -(*(char *)((long)param_2 + 9) == UNK_00115bb9);
    auVar5[10] = -(*(char *)((long)param_2 + 10) == UNK_00115bba);
    auVar5[0xb] = -(*(char *)((long)param_2 + 0xb) == UNK_00115bbb);
    auVar5[0xc] = -(*(char *)((long)param_2 + 0xc) == UNK_00115bbc);
    auVar5[0xd] = -(*(char *)((long)param_2 + 0xd) == UNK_00115bbd);
    auVar5[0xe] = -(*(char *)((long)param_2 + 0xe) == UNK_00115bbe);
    auVar5[0xf] = -(*(char *)((long)param_2 + 0xf) == UNK_00115bbf);
    auVar5 = auVar5 & auVar24;
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
      *(undefined1 *)(param_1 + 1) = 0xd;
      goto LAB_0014f266;
    }
    iVar4 = (*(code *)PTR_bcmp_001e3e98)(param_2,"signal_trigger_mode");
    if (iVar4 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x17;
      goto LAB_0014f266;
    }
    iVar4 = (*(code *)PTR_bcmp_001e3e98)(param_2,"taker_rate_baseline",param_3);
    if (iVar4 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x1c;
      goto LAB_0014f266;
    }
    break;
  case 0x14:
    uVar1 = (undefined4)param_2[2];
    auVar25[0] = -((char)uVar1 == DAT_00115d40);
    auVar25[1] = -((char)((uint)uVar1 >> 8) == UNK_00115d41);
    auVar25[2] = -((char)((uint)uVar1 >> 0x10) == UNK_00115d42);
    auVar25[3] = -((char)((uint)uVar1 >> 0x18) == UNK_00115d43);
    auVar25[4] = -(UNK_00115d44 == '\0');
    auVar25[5] = -(UNK_00115d45 == '\0');
    auVar25[6] = -(UNK_00115d46 == '\0');
    auVar25[7] = -(UNK_00115d47 == '\0');
    auVar25[8] = -(UNK_00115d48 == '\0');
    auVar25[9] = -(UNK_00115d49 == '\0');
    auVar25[10] = -(UNK_00115d4a == '\0');
    auVar25[0xb] = -(UNK_00115d4b == '\0');
    auVar25[0xc] = -(UNK_00115d4c == '\0');
    auVar25[0xd] = -(UNK_00115d4d == '\0');
    auVar25[0xe] = -(UNK_00115d4e == '\0');
    auVar25[0xf] = -(UNK_00115d4f == '\0');
    auVar6[0] = -((char)*param_2 == DAT_001157a0);
    auVar6[1] = -(*(char *)((long)param_2 + 1) == UNK_001157a1);
    auVar6[2] = -(*(char *)((long)param_2 + 2) == UNK_001157a2);
    auVar6[3] = -(*(char *)((long)param_2 + 3) == UNK_001157a3);
    auVar6[4] = -(*(char *)((long)param_2 + 4) == UNK_001157a4);
    auVar6[5] = -(*(char *)((long)param_2 + 5) == UNK_001157a5);
    auVar6[6] = -(*(char *)((long)param_2 + 6) == UNK_001157a6);
    auVar6[7] = -(*(char *)((long)param_2 + 7) == UNK_001157a7);
    auVar6[8] = -((char)param_2[1] == UNK_001157a8);
    auVar6[9] = -(*(char *)((long)param_2 + 9) == UNK_001157a9);
    auVar6[10] = -(*(char *)((long)param_2 + 10) == UNK_001157aa);
    auVar6[0xb] = -(*(char *)((long)param_2 + 0xb) == UNK_001157ab);
    auVar6[0xc] = -(*(char *)((long)param_2 + 0xc) == UNK_001157ac);
    auVar6[0xd] = -(*(char *)((long)param_2 + 0xd) == UNK_001157ad);
    auVar6[0xe] = -(*(char *)((long)param_2 + 0xe) == UNK_001157ae);
    auVar6[0xf] = -(*(char *)((long)param_2 + 0xf) == UNK_001157af);
    auVar6 = auVar6 & auVar25;
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
      *(undefined1 *)(param_1 + 1) = 1;
      goto LAB_0014f266;
    }
    uVar1 = (undefined4)param_2[2];
    auVar26[0] = -((char)uVar1 == DAT_00115910);
    auVar26[1] = -((char)((uint)uVar1 >> 8) == UNK_00115911);
    auVar26[2] = -((char)((uint)uVar1 >> 0x10) == UNK_00115912);
    auVar26[3] = -((char)((uint)uVar1 >> 0x18) == UNK_00115913);
    auVar26[4] = -(UNK_00115914 == '\0');
    auVar26[5] = -(UNK_00115915 == '\0');
    auVar26[6] = -(UNK_00115916 == '\0');
    auVar26[7] = -(UNK_00115917 == '\0');
    auVar26[8] = -(UNK_00115918 == '\0');
    auVar26[9] = -(UNK_00115919 == '\0');
    auVar26[10] = -(UNK_0011591a == '\0');
    auVar26[0xb] = -(UNK_0011591b == '\0');
    auVar26[0xc] = -(UNK_0011591c == '\0');
    auVar26[0xd] = -(UNK_0011591d == '\0');
    auVar26[0xe] = -(UNK_0011591e == '\0');
    auVar26[0xf] = -(UNK_0011591f == '\0');
    auVar7[0] = -((char)*param_2 == DAT_00115c90);
    auVar7[1] = -(*(char *)((long)param_2 + 1) == UNK_00115c91);
    auVar7[2] = -(*(char *)((long)param_2 + 2) == UNK_00115c92);
    auVar7[3] = -(*(char *)((long)param_2 + 3) == UNK_00115c93);
    auVar7[4] = -(*(char *)((long)param_2 + 4) == UNK_00115c94);
    auVar7[5] = -(*(char *)((long)param_2 + 5) == UNK_00115c95);
    auVar7[6] = -(*(char *)((long)param_2 + 6) == UNK_00115c96);
    auVar7[7] = -(*(char *)((long)param_2 + 7) == UNK_00115c97);
    auVar7[8] = -((char)param_2[1] == UNK_00115c98);
    auVar7[9] = -(*(char *)((long)param_2 + 9) == UNK_00115c99);
    auVar7[10] = -(*(char *)((long)param_2 + 10) == UNK_00115c9a);
    auVar7[0xb] = -(*(char *)((long)param_2 + 0xb) == UNK_00115c9b);
    auVar7[0xc] = -(*(char *)((long)param_2 + 0xc) == UNK_00115c9c);
    auVar7[0xd] = -(*(char *)((long)param_2 + 0xd) == UNK_00115c9d);
    auVar7[0xe] = -(*(char *)((long)param_2 + 0xe) == UNK_00115c9e);
    auVar7[0xf] = -(*(char *)((long)param_2 + 0xf) == UNK_00115c9f);
    auVar7 = auVar7 & auVar26;
    bVar2 = true;
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
      *(undefined1 *)(param_1 + 1) = 8;
      goto LAB_0014f266;
    }
    goto switchD_0014ed68_caseD_9;
  case 0x15:
    auVar27[0] = -(*(char *)((long)param_2 + 5) == DAT_00115b10);
    auVar27[1] = -(*(char *)((long)param_2 + 6) == UNK_00115b11);
    auVar27[2] = -(*(char *)((long)param_2 + 7) == UNK_00115b12);
    auVar27[3] = -((char)param_2[1] == UNK_00115b13);
    auVar27[4] = -(*(char *)((long)param_2 + 9) == UNK_00115b14);
    auVar27[5] = -(*(char *)((long)param_2 + 10) == UNK_00115b15);
    auVar27[6] = -(*(char *)((long)param_2 + 0xb) == UNK_00115b16);
    auVar27[7] = -(*(char *)((long)param_2 + 0xc) == UNK_00115b17);
    auVar27[8] = -(*(char *)((long)param_2 + 0xd) == UNK_00115b18);
    auVar27[9] = -(*(char *)((long)param_2 + 0xe) == UNK_00115b19);
    auVar27[10] = -(*(char *)((long)param_2 + 0xf) == UNK_00115b1a);
    auVar27[0xb] = -((char)param_2[2] == UNK_00115b1b);
    auVar27[0xc] = -(*(char *)((long)param_2 + 0x11) == UNK_00115b1c);
    auVar27[0xd] = -(*(char *)((long)param_2 + 0x12) == UNK_00115b1d);
    auVar27[0xe] = -(*(char *)((long)param_2 + 0x13) == UNK_00115b1e);
    auVar27[0xf] = -(*(char *)((long)param_2 + 0x14) == UNK_00115b1f);
    auVar8[0] = -((char)*param_2 == DAT_00115940);
    auVar8[1] = -(*(char *)((long)param_2 + 1) == UNK_00115941);
    auVar8[2] = -(*(char *)((long)param_2 + 2) == UNK_00115942);
    auVar8[3] = -(*(char *)((long)param_2 + 3) == UNK_00115943);
    auVar8[4] = -(*(char *)((long)param_2 + 4) == UNK_00115944);
    auVar8[5] = -(*(char *)((long)param_2 + 5) == UNK_00115945);
    auVar8[6] = -(*(char *)((long)param_2 + 6) == UNK_00115946);
    auVar8[7] = -(*(char *)((long)param_2 + 7) == UNK_00115947);
    auVar8[8] = -((char)param_2[1] == UNK_00115948);
    auVar8[9] = -(*(char *)((long)param_2 + 9) == UNK_00115949);
    auVar8[10] = -(*(char *)((long)param_2 + 10) == UNK_0011594a);
    auVar8[0xb] = -(*(char *)((long)param_2 + 0xb) == UNK_0011594b);
    auVar8[0xc] = -(*(char *)((long)param_2 + 0xc) == UNK_0011594c);
    auVar8[0xd] = -(*(char *)((long)param_2 + 0xd) == UNK_0011594d);
    auVar8[0xe] = -(*(char *)((long)param_2 + 0xe) == UNK_0011594e);
    auVar8[0xf] = -(*(char *)((long)param_2 + 0xf) == UNK_0011594f);
    auVar8 = auVar8 & auVar27;
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
      *(undefined1 *)(param_1 + 1) = 0;
      goto LAB_0014f266;
    }
    auVar28[0] = -(*(char *)((long)param_2 + 5) == DAT_00115770);
    auVar28[1] = -(*(char *)((long)param_2 + 6) == UNK_00115771);
    auVar28[2] = -(*(char *)((long)param_2 + 7) == UNK_00115772);
    auVar28[3] = -((char)param_2[1] == UNK_00115773);
    auVar28[4] = -(*(char *)((long)param_2 + 9) == UNK_00115774);
    auVar28[5] = -(*(char *)((long)param_2 + 10) == UNK_00115775);
    auVar28[6] = -(*(char *)((long)param_2 + 0xb) == UNK_00115776);
    auVar28[7] = -(*(char *)((long)param_2 + 0xc) == UNK_00115777);
    auVar28[8] = -(*(char *)((long)param_2 + 0xd) == UNK_00115778);
    auVar28[9] = -(*(char *)((long)param_2 + 0xe) == UNK_00115779);
    auVar28[10] = -(*(char *)((long)param_2 + 0xf) == UNK_0011577a);
    auVar28[0xb] = -((char)param_2[2] == UNK_0011577b);
    auVar28[0xc] = -(*(char *)((long)param_2 + 0x11) == UNK_0011577c);
    auVar28[0xd] = -(*(char *)((long)param_2 + 0x12) == UNK_0011577d);
    auVar28[0xe] = -(*(char *)((long)param_2 + 0x13) == UNK_0011577e);
    auVar28[0xf] = -(*(char *)((long)param_2 + 0x14) == UNK_0011577f);
    auVar9[0] = -((char)*param_2 == DAT_00115950);
    auVar9[1] = -(*(char *)((long)param_2 + 1) == UNK_00115951);
    auVar9[2] = -(*(char *)((long)param_2 + 2) == UNK_00115952);
    auVar9[3] = -(*(char *)((long)param_2 + 3) == UNK_00115953);
    auVar9[4] = -(*(char *)((long)param_2 + 4) == UNK_00115954);
    auVar9[5] = -(*(char *)((long)param_2 + 5) == UNK_00115955);
    auVar9[6] = -(*(char *)((long)param_2 + 6) == UNK_00115956);
    auVar9[7] = -(*(char *)((long)param_2 + 7) == UNK_00115957);
    auVar9[8] = -((char)param_2[1] == UNK_00115958);
    auVar9[9] = -(*(char *)((long)param_2 + 9) == UNK_00115959);
    auVar9[10] = -(*(char *)((long)param_2 + 10) == UNK_0011595a);
    auVar9[0xb] = -(*(char *)((long)param_2 + 0xb) == UNK_0011595b);
    auVar9[0xc] = -(*(char *)((long)param_2 + 0xc) == UNK_0011595c);
    auVar9[0xd] = -(*(char *)((long)param_2 + 0xd) == UNK_0011595d);
    auVar9[0xe] = -(*(char *)((long)param_2 + 0xe) == UNK_0011595e);
    auVar9[0xf] = -(*(char *)((long)param_2 + 0xf) == UNK_0011595f);
    auVar9 = auVar9 & auVar28;
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
      *(undefined1 *)(param_1 + 1) = 10;
      goto LAB_0014f266;
    }
    auVar29[0] = -(*(char *)((long)param_2 + 5) == DAT_00115840);
    auVar29[1] = -(*(char *)((long)param_2 + 6) == UNK_00115841);
    auVar29[2] = -(*(char *)((long)param_2 + 7) == UNK_00115842);
    auVar29[3] = -((char)param_2[1] == UNK_00115843);
    auVar29[4] = -(*(char *)((long)param_2 + 9) == UNK_00115844);
    auVar29[5] = -(*(char *)((long)param_2 + 10) == UNK_00115845);
    auVar29[6] = -(*(char *)((long)param_2 + 0xb) == UNK_00115846);
    auVar29[7] = -(*(char *)((long)param_2 + 0xc) == UNK_00115847);
    auVar29[8] = -(*(char *)((long)param_2 + 0xd) == UNK_00115848);
    auVar29[9] = -(*(char *)((long)param_2 + 0xe) == UNK_00115849);
    auVar29[10] = -(*(char *)((long)param_2 + 0xf) == UNK_0011584a);
    auVar29[0xb] = -((char)param_2[2] == UNK_0011584b);
    auVar29[0xc] = -(*(char *)((long)param_2 + 0x11) == UNK_0011584c);
    auVar29[0xd] = -(*(char *)((long)param_2 + 0x12) == UNK_0011584d);
    auVar29[0xe] = -(*(char *)((long)param_2 + 0x13) == UNK_0011584e);
    auVar29[0xf] = -(*(char *)((long)param_2 + 0x14) == UNK_0011584f);
    auVar10[0] = -((char)*param_2 == DAT_00115e20);
    auVar10[1] = -(*(char *)((long)param_2 + 1) == UNK_00115e21);
    auVar10[2] = -(*(char *)((long)param_2 + 2) == UNK_00115e22);
    auVar10[3] = -(*(char *)((long)param_2 + 3) == UNK_00115e23);
    auVar10[4] = -(*(char *)((long)param_2 + 4) == UNK_00115e24);
    auVar10[5] = -(*(char *)((long)param_2 + 5) == UNK_00115e25);
    auVar10[6] = -(*(char *)((long)param_2 + 6) == UNK_00115e26);
    auVar10[7] = -(*(char *)((long)param_2 + 7) == UNK_00115e27);
    auVar10[8] = -((char)param_2[1] == UNK_00115e28);
    auVar10[9] = -(*(char *)((long)param_2 + 9) == UNK_00115e29);
    auVar10[10] = -(*(char *)((long)param_2 + 10) == UNK_00115e2a);
    auVar10[0xb] = -(*(char *)((long)param_2 + 0xb) == UNK_00115e2b);
    auVar10[0xc] = -(*(char *)((long)param_2 + 0xc) == UNK_00115e2c);
    auVar10[0xd] = -(*(char *)((long)param_2 + 0xd) == UNK_00115e2d);
    auVar10[0xe] = -(*(char *)((long)param_2 + 0xe) == UNK_00115e2e);
    auVar10[0xf] = -(*(char *)((long)param_2 + 0xf) == UNK_00115e2f);
    auVar10 = auVar10 & auVar29;
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
      *(undefined1 *)(param_1 + 1) = 0x24;
      goto LAB_0014f266;
    }
    break;
  case 0x1a:
    auVar38[0] = -(*(char *)((long)param_2 + 10) == DAT_001159f0);
    auVar38[1] = -(*(char *)((long)param_2 + 0xb) == UNK_001159f1);
    auVar38[2] = -(*(char *)((long)param_2 + 0xc) == UNK_001159f2);
    auVar38[3] = -(*(char *)((long)param_2 + 0xd) == UNK_001159f3);
    auVar38[4] = -(*(char *)((long)param_2 + 0xe) == UNK_001159f4);
    auVar38[5] = -(*(char *)((long)param_2 + 0xf) == UNK_001159f5);
    auVar38[6] = -((char)param_2[2] == UNK_001159f6);
    auVar38[7] = -(*(char *)((long)param_2 + 0x11) == UNK_001159f7);
    auVar38[8] = -(*(char *)((long)param_2 + 0x12) == UNK_001159f8);
    auVar38[9] = -(*(char *)((long)param_2 + 0x13) == UNK_001159f9);
    auVar38[10] = -(*(char *)((long)param_2 + 0x14) == UNK_001159fa);
    auVar38[0xb] = -(*(char *)((long)param_2 + 0x15) == UNK_001159fb);
    auVar38[0xc] = -(*(char *)((long)param_2 + 0x16) == UNK_001159fc);
    auVar38[0xd] = -(*(char *)((long)param_2 + 0x17) == UNK_001159fd);
    auVar38[0xe] = -((char)param_2[3] == UNK_001159fe);
    auVar38[0xf] = -(*(char *)((long)param_2 + 0x19) == UNK_001159ff);
    auVar19[0] = -((char)*param_2 == DAT_00115930);
    auVar19[1] = -(*(char *)((long)param_2 + 1) == UNK_00115931);
    auVar19[2] = -(*(char *)((long)param_2 + 2) == UNK_00115932);
    auVar19[3] = -(*(char *)((long)param_2 + 3) == UNK_00115933);
    auVar19[4] = -(*(char *)((long)param_2 + 4) == UNK_00115934);
    auVar19[5] = -(*(char *)((long)param_2 + 5) == UNK_00115935);
    auVar19[6] = -(*(char *)((long)param_2 + 6) == UNK_00115936);
    auVar19[7] = -(*(char *)((long)param_2 + 7) == UNK_00115937);
    auVar19[8] = -((char)param_2[1] == UNK_00115938);
    auVar19[9] = -(*(char *)((long)param_2 + 9) == UNK_00115939);
    auVar19[10] = -(*(char *)((long)param_2 + 10) == UNK_0011593a);
    auVar19[0xb] = -(*(char *)((long)param_2 + 0xb) == UNK_0011593b);
    auVar19[0xc] = -(*(char *)((long)param_2 + 0xc) == UNK_0011593c);
    auVar19[0xd] = -(*(char *)((long)param_2 + 0xd) == UNK_0011593d);
    auVar19[0xe] = -(*(char *)((long)param_2 + 0xe) == UNK_0011593e);
    auVar19[0xf] = -(*(char *)((long)param_2 + 0xf) == UNK_0011593f);
    auVar19 = auVar19 & auVar38;
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
      *(undefined1 *)(param_1 + 1) = 0xc;
      goto LAB_0014f266;
    }
    break;
  case 0x20:
    auVar37[0] = -((char)param_2[2] == DAT_00115f10);
    auVar37[1] = -(*(char *)((long)param_2 + 0x11) == UNK_00115f11);
    auVar37[2] = -(*(char *)((long)param_2 + 0x12) == UNK_00115f12);
    auVar37[3] = -(*(char *)((long)param_2 + 0x13) == UNK_00115f13);
    auVar37[4] = -(*(char *)((long)param_2 + 0x14) == UNK_00115f14);
    auVar37[5] = -(*(char *)((long)param_2 + 0x15) == UNK_00115f15);
    auVar37[6] = -(*(char *)((long)param_2 + 0x16) == UNK_00115f16);
    auVar37[7] = -(*(char *)((long)param_2 + 0x17) == UNK_00115f17);
    auVar37[8] = -((char)param_2[3] == UNK_00115f18);
    auVar37[9] = -(*(char *)((long)param_2 + 0x19) == UNK_00115f19);
    auVar37[10] = -(*(char *)((long)param_2 + 0x1a) == UNK_00115f1a);
    auVar37[0xb] = -(*(char *)((long)param_2 + 0x1b) == UNK_00115f1b);
    auVar37[0xc] = -(*(char *)((long)param_2 + 0x1c) == UNK_00115f1c);
    auVar37[0xd] = -(*(char *)((long)param_2 + 0x1d) == UNK_00115f1d);
    auVar37[0xe] = -(*(char *)((long)param_2 + 0x1e) == UNK_00115f1e);
    auVar37[0xf] = -(*(char *)((long)param_2 + 0x1f) == UNK_00115f1f);
    auVar18[0] = -((char)*param_2 == DAT_00115e70);
    auVar18[1] = -(*(char *)((long)param_2 + 1) == UNK_00115e71);
    auVar18[2] = -(*(char *)((long)param_2 + 2) == UNK_00115e72);
    auVar18[3] = -(*(char *)((long)param_2 + 3) == UNK_00115e73);
    auVar18[4] = -(*(char *)((long)param_2 + 4) == UNK_00115e74);
    auVar18[5] = -(*(char *)((long)param_2 + 5) == UNK_00115e75);
    auVar18[6] = -(*(char *)((long)param_2 + 6) == UNK_00115e76);
    auVar18[7] = -(*(char *)((long)param_2 + 7) == UNK_00115e77);
    auVar18[8] = -((char)param_2[1] == UNK_00115e78);
    auVar18[9] = -(*(char *)((long)param_2 + 9) == UNK_00115e79);
    auVar18[10] = -(*(char *)((long)param_2 + 10) == UNK_00115e7a);
    auVar18[0xb] = -(*(char *)((long)param_2 + 0xb) == UNK_00115e7b);
    auVar18[0xc] = -(*(char *)((long)param_2 + 0xc) == UNK_00115e7c);
    auVar18[0xd] = -(*(char *)((long)param_2 + 0xd) == UNK_00115e7d);
    auVar18[0xe] = -(*(char *)((long)param_2 + 0xe) == UNK_00115e7e);
    auVar18[0xf] = -(*(char *)((long)param_2 + 0xf) == UNK_00115e7f);
    auVar18 = auVar18 & auVar37;
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
      *(undefined1 *)(param_1 + 1) = 0xb;
      goto LAB_0014f266;
    }
  }
  goto switchD_0014f3bb_caseD_1c;
switchD_0014ed68_caseD_9:
joined_r0x0014f19a:
  bVar3 = bVar2;
  if (param_3 - 9U < 0xe) {
LAB_0014efaa:
    bVar2 = bVar3;
    switch((long)&switchD_0014efb8::switchdataD_00116760 +
           (long)(int)(&switchD_0014efb8::switchdataD_00116760)[param_3 + -9]) {
    case 0x14efba:
      if ((char)param_2[1] == 'a' && *param_2 == 0x68706c615f317670) {
        *(undefined1 *)(param_1 + 1) = 0x15;
        goto LAB_0014f266;
      }
      iVar4 = (*(code *)PTR_bcmp_001e3e98)(param_2,"vote_ratescore_taker_rate_alpha");
      if (iVar4 == 0) {
        *(undefined1 *)(param_1 + 1) = 0x18;
        goto LAB_0014f266;
      }
      break;
    case 0x14f2ae:
      auVar20[0] = -((char)*param_2 == s_signal_windows_s_00115ae0[0]);
      auVar20[1] = -(*(char *)((long)param_2 + 1) == s_signal_windows_s_00115ae0[1]);
      auVar20[2] = -(*(char *)((long)param_2 + 2) == s_signal_windows_s_00115ae0[2]);
      auVar20[3] = -(*(char *)((long)param_2 + 3) == s_signal_windows_s_00115ae0[3]);
      auVar20[4] = -(*(char *)((long)param_2 + 4) == s_signal_windows_s_00115ae0[4]);
      auVar20[5] = -(*(char *)((long)param_2 + 5) == s_signal_windows_s_00115ae0[5]);
      auVar20[6] = -(*(char *)((long)param_2 + 6) == s_signal_windows_s_00115ae0[6]);
      auVar20[7] = -(*(char *)((long)param_2 + 7) == s_signal_windows_s_00115ae0[7]);
      auVar20[8] = -((char)param_2[1] == s_signal_windows_s_00115ae0[8]);
      auVar20[9] = -(*(char *)((long)param_2 + 9) == s_signal_windows_s_00115ae0[9]);
      auVar20[10] = -(*(char *)((long)param_2 + 10) == s_signal_windows_s_00115ae0[10]);
      auVar20[0xb] = -(*(char *)((long)param_2 + 0xb) == s_signal_windows_s_00115ae0[0xb]);
      auVar20[0xc] = -(*(char *)((long)param_2 + 0xc) == s_signal_windows_s_00115ae0[0xc]);
      auVar20[0xd] = -(*(char *)((long)param_2 + 0xd) == s_signal_windows_s_00115ae0[0xd]);
      auVar20[0xe] = -(*(char *)((long)param_2 + 0xe) == s_signal_windows_s_00115ae0[0xe]);
      auVar20[0xf] = -(*(char *)((long)param_2 + 0xf) == s_signal_windows_s_00115ae0[0xf]);
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
                  (ushort)(auVar20[0xf] >> 7) << 0xf) == 0xffff) {
        *(undefined1 *)(param_1 + 1) = 0x1a;
        goto LAB_0014f266;
      }
      break;
    case 0x14f2cc:
      if ((short)param_2[1] == 0x6168 && *param_2 == 0x706c615f74736f63) {
        *(undefined1 *)(param_1 + 1) = 0x16;
        goto LAB_0014f266;
      }
      break;
    case 0x14f2f2:
      auVar39[0] = -(*(char *)((long)param_2 + 6) == DAT_001157f0);
      auVar39[1] = -(*(char *)((long)param_2 + 7) == UNK_001157f1);
      auVar39[2] = -((char)param_2[1] == UNK_001157f2);
      auVar39[3] = -(*(char *)((long)param_2 + 9) == UNK_001157f3);
      auVar39[4] = -(*(char *)((long)param_2 + 10) == UNK_001157f4);
      auVar39[5] = -(*(char *)((long)param_2 + 0xb) == UNK_001157f5);
      auVar39[6] = -(*(char *)((long)param_2 + 0xc) == UNK_001157f6);
      auVar39[7] = -(*(char *)((long)param_2 + 0xd) == UNK_001157f7);
      auVar39[8] = -(*(char *)((long)param_2 + 0xe) == UNK_001157f8);
      auVar39[9] = -(*(char *)((long)param_2 + 0xf) == UNK_001157f9);
      auVar39[10] = -((char)param_2[2] == UNK_001157fa);
      auVar39[0xb] = -(*(char *)((long)param_2 + 0x11) == UNK_001157fb);
      auVar39[0xc] = -(*(char *)((long)param_2 + 0x12) == UNK_001157fc);
      auVar39[0xd] = -(*(char *)((long)param_2 + 0x13) == UNK_001157fd);
      auVar39[0xe] = -(*(char *)((long)param_2 + 0x14) == UNK_001157fe);
      auVar39[0xf] = -(*(char *)((long)param_2 + 0x15) == UNK_001157ff);
      auVar21[0] = -((char)*param_2 == DAT_00115960);
      auVar21[1] = -(*(char *)((long)param_2 + 1) == UNK_00115961);
      auVar21[2] = -(*(char *)((long)param_2 + 2) == UNK_00115962);
      auVar21[3] = -(*(char *)((long)param_2 + 3) == UNK_00115963);
      auVar21[4] = -(*(char *)((long)param_2 + 4) == UNK_00115964);
      auVar21[5] = -(*(char *)((long)param_2 + 5) == UNK_00115965);
      auVar21[6] = -(*(char *)((long)param_2 + 6) == UNK_00115966);
      auVar21[7] = -(*(char *)((long)param_2 + 7) == UNK_00115967);
      auVar21[8] = -((char)param_2[1] == UNK_00115968);
      auVar21[9] = -(*(char *)((long)param_2 + 9) == UNK_00115969);
      auVar21[10] = -(*(char *)((long)param_2 + 10) == UNK_0011596a);
      auVar21[0xb] = -(*(char *)((long)param_2 + 0xb) == UNK_0011596b);
      auVar21[0xc] = -(*(char *)((long)param_2 + 0xc) == UNK_0011596c);
      auVar21[0xd] = -(*(char *)((long)param_2 + 0xd) == UNK_0011596d);
      auVar21[0xe] = -(*(char *)((long)param_2 + 0xe) == UNK_0011596e);
      auVar21[0xf] = -(*(char *)((long)param_2 + 0xf) == UNK_0011596f);
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
        *(undefined1 *)(param_1 + 1) = 0x1b;
        goto LAB_0014f266;
      }
    }
  }
switchD_0014efb8_caseD_14f31f:
  if ((param_3 == 0x17) &&
     (auVar40[0] = -(*(char *)((long)param_2 + 7) == DAT_00115d10),
     auVar40[1] = -((char)param_2[1] == UNK_00115d11),
     auVar40[2] = -(*(char *)((long)param_2 + 9) == UNK_00115d12),
     auVar40[3] = -(*(char *)((long)param_2 + 10) == UNK_00115d13),
     auVar40[4] = -(*(char *)((long)param_2 + 0xb) == UNK_00115d14),
     auVar40[5] = -(*(char *)((long)param_2 + 0xc) == UNK_00115d15),
     auVar40[6] = -(*(char *)((long)param_2 + 0xd) == UNK_00115d16),
     auVar40[7] = -(*(char *)((long)param_2 + 0xe) == UNK_00115d17),
     auVar40[8] = -(*(char *)((long)param_2 + 0xf) == UNK_00115d18),
     auVar40[9] = -((char)param_2[2] == UNK_00115d19),
     auVar40[10] = -(*(char *)((long)param_2 + 0x11) == UNK_00115d1a),
     auVar40[0xb] = -(*(char *)((long)param_2 + 0x12) == UNK_00115d1b),
     auVar40[0xc] = -(*(char *)((long)param_2 + 0x13) == UNK_00115d1c),
     auVar40[0xd] = -(*(char *)((long)param_2 + 0x14) == UNK_00115d1d),
     auVar40[0xe] = -(*(char *)((long)param_2 + 0x15) == UNK_00115d1e),
     auVar40[0xf] = -(*(char *)((long)param_2 + 0x16) == UNK_00115d1f),
     auVar22[0] = -((char)*param_2 == DAT_00115880),
     auVar22[1] = -(*(char *)((long)param_2 + 1) == UNK_00115881),
     auVar22[2] = -(*(char *)((long)param_2 + 2) == UNK_00115882),
     auVar22[3] = -(*(char *)((long)param_2 + 3) == UNK_00115883),
     auVar22[4] = -(*(char *)((long)param_2 + 4) == UNK_00115884),
     auVar22[5] = -(*(char *)((long)param_2 + 5) == UNK_00115885),
     auVar22[6] = -(*(char *)((long)param_2 + 6) == UNK_00115886),
     auVar22[7] = -(*(char *)((long)param_2 + 7) == UNK_00115887),
     auVar22[8] = -((char)param_2[1] == UNK_00115888),
     auVar22[9] = -(*(char *)((long)param_2 + 9) == UNK_00115889),
     auVar22[10] = -(*(char *)((long)param_2 + 10) == UNK_0011588a),
     auVar22[0xb] = -(*(char *)((long)param_2 + 0xb) == UNK_0011588b),
     auVar22[0xc] = -(*(char *)((long)param_2 + 0xc) == UNK_0011588c),
     auVar22[0xd] = -(*(char *)((long)param_2 + 0xd) == UNK_0011588d),
     auVar22[0xe] = -(*(char *)((long)param_2 + 0xe) == UNK_0011588e),
     auVar22[0xf] = -(*(char *)((long)param_2 + 0xf) == UNK_0011588f), auVar22 = auVar22 & auVar40,
     (ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
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
             (ushort)(byte)(auVar22[0xf] >> 7) << 0xf) == 0xffff)) {
    *(undefined1 *)(param_1 + 1) = 0x1f;
    goto LAB_0014f266;
  }
  if (bVar2) {
    iVar4 = (*(code *)PTR_bcmp_001e3e98)(param_2,"max_single_close_vol");
    if (iVar4 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x20;
      goto LAB_0014f266;
    }
    iVar4 = (*(code *)PTR_bcmp_001e3e98)(param_2,"max_single_close_amt",param_3);
    if (iVar4 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x21;
      goto LAB_0014f266;
    }
  }
  switch(param_3) {
  case 0x1b:
    auVar41[0] = -(*(char *)((long)param_2 + 0xb) == DAT_00115780);
    auVar41[1] = -(*(char *)((long)param_2 + 0xc) == UNK_00115781);
    auVar41[2] = -(*(char *)((long)param_2 + 0xd) == UNK_00115782);
    auVar41[3] = -(*(char *)((long)param_2 + 0xe) == UNK_00115783);
    auVar41[4] = -(*(char *)((long)param_2 + 0xf) == UNK_00115784);
    auVar41[5] = -((char)param_2[2] == UNK_00115785);
    auVar41[6] = -(*(char *)((long)param_2 + 0x11) == UNK_00115786);
    auVar41[7] = -(*(char *)((long)param_2 + 0x12) == UNK_00115787);
    auVar41[8] = -(*(char *)((long)param_2 + 0x13) == UNK_00115788);
    auVar41[9] = -(*(char *)((long)param_2 + 0x14) == UNK_00115789);
    auVar41[10] = -(*(char *)((long)param_2 + 0x15) == UNK_0011578a);
    auVar41[0xb] = -(*(char *)((long)param_2 + 0x16) == UNK_0011578b);
    auVar41[0xc] = -(*(char *)((long)param_2 + 0x17) == UNK_0011578c);
    auVar41[0xd] = -((char)param_2[3] == UNK_0011578d);
    auVar41[0xe] = -(*(char *)((long)param_2 + 0x19) == UNK_0011578e);
    auVar41[0xf] = -(*(char *)((long)param_2 + 0x1a) == UNK_0011578f);
    auVar23[0] = -((char)*param_2 == s_dyn_score_max_po_00115ad0[0]);
    auVar23[1] = -(*(char *)((long)param_2 + 1) == s_dyn_score_max_po_00115ad0[1]);
    auVar23[2] = -(*(char *)((long)param_2 + 2) == s_dyn_score_max_po_00115ad0[2]);
    auVar23[3] = -(*(char *)((long)param_2 + 3) == s_dyn_score_max_po_00115ad0[3]);
    auVar23[4] = -(*(char *)((long)param_2 + 4) == s_dyn_score_max_po_00115ad0[4]);
    auVar23[5] = -(*(char *)((long)param_2 + 5) == s_dyn_score_max_po_00115ad0[5]);
    auVar23[6] = -(*(char *)((long)param_2 + 6) == s_dyn_score_max_po_00115ad0[6]);
    auVar23[7] = -(*(char *)((long)param_2 + 7) == s_dyn_score_max_po_00115ad0[7]);
    auVar23[8] = -((char)param_2[1] == s_dyn_score_max_po_00115ad0[8]);
    auVar23[9] = -(*(char *)((long)param_2 + 9) == s_dyn_score_max_po_00115ad0[9]);
    auVar23[10] = -(*(char *)((long)param_2 + 10) == s_dyn_score_max_po_00115ad0[10]);
    auVar23[0xb] = -(*(char *)((long)param_2 + 0xb) == s_dyn_score_max_po_00115ad0[0xb]);
    auVar23[0xc] = -(*(char *)((long)param_2 + 0xc) == s_dyn_score_max_po_00115ad0[0xc]);
    auVar23[0xd] = -(*(char *)((long)param_2 + 0xd) == s_dyn_score_max_po_00115ad0[0xd]);
    auVar23[0xe] = -(*(char *)((long)param_2 + 0xe) == s_dyn_score_max_po_00115ad0[0xe]);
    auVar23[0xf] = -(*(char *)((long)param_2 + 0xf) == s_dyn_score_max_po_00115ad0[0xf]);
    auVar23 = auVar23 & auVar41;
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
      *(undefined1 *)(param_1 + 1) = 0x23;
      goto LAB_0014f266;
    }
    break;
  case 0x1d:
    iVar4 = (*(code *)PTR_bcmp_001e3e98)(param_2,"dyn_pending_max_position_ts_s");
    if (iVar4 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x26;
      goto LAB_0014f266;
    }
    break;
  case 0x21:
    iVar4 = (*(code *)PTR_bcmp_001e3e98)
                      (param_2,
                       "dyn_score_position_ts_threshold_sdyn_score_max_position_ts_sdyn_score_delta_score"
                       ,0x21);
    if (iVar4 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x22;
      goto LAB_0014f266;
    }
    break;
  case 0x23:
    iVar4 = (*(code *)PTR_bcmp_001e3e98)(param_2,"dyn_pending_position_ts_threshold_s",0x23);
    if (iVar4 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x25;
      goto LAB_0014f266;
    }
    iVar4 = (*(code *)PTR_bcmp_001e3e98)(param_2,"dyn_pending_delta_max_pending_ts_ms",0x23);
    if (iVar4 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x28;
      goto LAB_0014f266;
    }
    goto LAB_0014f263;
  case 0x25:
    iVar4 = (*(code *)PTR_bcmp_001e3e98)(param_2,"dyn_pending_order_max_pending_time_ms");
    if (iVar4 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x27;
      goto LAB_0014f266;
    }
  }
switchD_0014f3bb_caseD_1c:
LAB_0014f263:
  *(undefined1 *)(param_1 + 1) = 0x29;
LAB_0014f266:
  *param_1 = 2;
  return;
}


