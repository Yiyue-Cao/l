// ELF address 0x000000000004eaa0; <strategy_sos5::_::<impl serde_core::de::Deserialize for strategy_sos5::SectionParams>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_str

/* _<strategy_sos5::_::<impl serde_core::de::Deserialize for
   strategy_sos5::SectionParams>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_str
    */

void __rustcall
_<strategy_sos5::_::<impl_serde_core::de::Deserialize_for_strategy_sos5::SectionParams>::deserialize::__FieldVisitor_as_serde_core::de::Visitor>
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
  
  switch(param_3) {
  case 10:
    if ((short)param_2[1] == 0x6c6c && *param_2 == 0x615f6c616e676973) {
      *(undefined1 *)(param_1 + 1) = 0;
      *param_1 = 2;
      return;
    }
    if ((short)param_2[1] != 0x6564 || *param_2 != 0x6f6d5f6564617274) {
      if ((short)param_2[1] != 0x6564 || *param_2 != 0x6f635f6564617274) {
        *(undefined1 *)(param_1 + 1) = 0xb;
        *param_1 = 2;
        return;
      }
      *(undefined1 *)(param_1 + 1) = 10;
      *param_1 = 2;
      return;
    }
    *(undefined1 *)(param_1 + 1) = 1;
    *param_1 = 2;
    return;
  case 0x12:
    auVar3[0] = -((char)*param_2 == s_max_single_add_v_00115c00[0]);
    auVar3[1] = -(*(char *)((long)param_2 + 1) == s_max_single_add_v_00115c00[1]);
    auVar3[2] = -(*(char *)((long)param_2 + 2) == s_max_single_add_v_00115c00[2]);
    auVar3[3] = -(*(char *)((long)param_2 + 3) == s_max_single_add_v_00115c00[3]);
    auVar3[4] = -(*(char *)((long)param_2 + 4) == s_max_single_add_v_00115c00[4]);
    auVar3[5] = -(*(char *)((long)param_2 + 5) == s_max_single_add_v_00115c00[5]);
    auVar3[6] = -(*(char *)((long)param_2 + 6) == s_max_single_add_v_00115c00[6]);
    auVar3[7] = -(*(char *)((long)param_2 + 7) == s_max_single_add_v_00115c00[7]);
    auVar3[8] = -((char)param_2[1] == s_max_single_add_v_00115c00[8]);
    auVar3[9] = -(*(char *)((long)param_2 + 9) == s_max_single_add_v_00115c00[9]);
    auVar3[10] = -(*(char *)((long)param_2 + 10) == s_max_single_add_v_00115c00[10]);
    auVar3[0xb] = -(*(char *)((long)param_2 + 0xb) == s_max_single_add_v_00115c00[0xb]);
    auVar3[0xc] = -(*(char *)((long)param_2 + 0xc) == s_max_single_add_v_00115c00[0xc]);
    auVar3[0xd] = -(*(char *)((long)param_2 + 0xd) == s_max_single_add_v_00115c00[0xd]);
    auVar3[0xe] = -(*(char *)((long)param_2 + 0xe) == s_max_single_add_v_00115c00[0xe]);
    auVar3[0xf] = -(*(char *)((long)param_2 + 0xf) == s_max_single_add_v_00115c00[0xf]);
    auVar11[0] = -((char)(short)param_2[2] == s_ol_001157e0[0]);
    auVar11[1] = -((char)((ushort)(short)param_2[2] >> 8) == s_ol_001157e0[1]);
    auVar11[2] = -(s_ol_001157e0[2] == '\0');
    auVar11[3] = -(s_ol_001157e0[3] == '\0');
    auVar11[4] = -(UNK_001157e4 == '\0');
    auVar11[5] = -(UNK_001157e5 == '\0');
    auVar11[6] = -(UNK_001157e6 == '\0');
    auVar11[7] = -(UNK_001157e7 == '\0');
    auVar11[8] = -(UNK_001157e8 == '\0');
    auVar11[9] = -(UNK_001157e9 == '\0');
    auVar11[10] = -(UNK_001157ea == '\0');
    auVar11[0xb] = -(UNK_001157eb == '\0');
    auVar11[0xc] = -(UNK_001157ec == '\0');
    auVar11[0xd] = -(UNK_001157ed == '\0');
    auVar11[0xe] = -(UNK_001157ee == '\0');
    auVar11[0xf] = -(UNK_001157ef == '\0');
    auVar11 = auVar11 & auVar3;
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
      *(undefined1 *)(param_1 + 1) = 6;
      *param_1 = 2;
      return;
    }
    auVar4[0] = -((char)*param_2 == s_max_single_net_v_00115b40[0]);
    auVar4[1] = -(*(char *)((long)param_2 + 1) == s_max_single_net_v_00115b40[1]);
    auVar4[2] = -(*(char *)((long)param_2 + 2) == s_max_single_net_v_00115b40[2]);
    auVar4[3] = -(*(char *)((long)param_2 + 3) == s_max_single_net_v_00115b40[3]);
    auVar4[4] = -(*(char *)((long)param_2 + 4) == s_max_single_net_v_00115b40[4]);
    auVar4[5] = -(*(char *)((long)param_2 + 5) == s_max_single_net_v_00115b40[5]);
    auVar4[6] = -(*(char *)((long)param_2 + 6) == s_max_single_net_v_00115b40[6]);
    auVar4[7] = -(*(char *)((long)param_2 + 7) == s_max_single_net_v_00115b40[7]);
    auVar4[8] = -((char)param_2[1] == s_max_single_net_v_00115b40[8]);
    auVar4[9] = -(*(char *)((long)param_2 + 9) == s_max_single_net_v_00115b40[9]);
    auVar4[10] = -(*(char *)((long)param_2 + 10) == s_max_single_net_v_00115b40[10]);
    auVar4[0xb] = -(*(char *)((long)param_2 + 0xb) == s_max_single_net_v_00115b40[0xb]);
    auVar4[0xc] = -(*(char *)((long)param_2 + 0xc) == s_max_single_net_v_00115b40[0xc]);
    auVar4[0xd] = -(*(char *)((long)param_2 + 0xd) == s_max_single_net_v_00115b40[0xd]);
    auVar4[0xe] = -(*(char *)((long)param_2 + 0xe) == s_max_single_net_v_00115b40[0xe]);
    auVar4[0xf] = -(*(char *)((long)param_2 + 0xf) == s_max_single_net_v_00115b40[0xf]);
    auVar12[0] = -((char)(short)param_2[2] == s_ol_001157e0[0]);
    auVar12[1] = -((char)((ushort)(short)param_2[2] >> 8) == s_ol_001157e0[1]);
    auVar12[2] = -(s_ol_001157e0[2] == '\0');
    auVar12[3] = -(s_ol_001157e0[3] == '\0');
    auVar12[4] = -(UNK_001157e4 == '\0');
    auVar12[5] = -(UNK_001157e5 == '\0');
    auVar12[6] = -(UNK_001157e6 == '\0');
    auVar12[7] = -(UNK_001157e7 == '\0');
    auVar12[8] = -(UNK_001157e8 == '\0');
    auVar12[9] = -(UNK_001157e9 == '\0');
    auVar12[10] = -(UNK_001157ea == '\0');
    auVar12[0xb] = -(UNK_001157eb == '\0');
    auVar12[0xc] = -(UNK_001157ec == '\0');
    auVar12[0xd] = -(UNK_001157ed == '\0');
    auVar12[0xe] = -(UNK_001157ee == '\0');
    auVar12[0xf] = -(UNK_001157ef == '\0');
    auVar12 = auVar12 & auVar4;
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
      *(undefined1 *)(param_1 + 1) = 7;
      *param_1 = 2;
      return;
    }
    auVar5[0] = -((char)*param_2 == s_max_single_add_a_00115af0[0]);
    auVar5[1] = -(*(char *)((long)param_2 + 1) == s_max_single_add_a_00115af0[1]);
    auVar5[2] = -(*(char *)((long)param_2 + 2) == s_max_single_add_a_00115af0[2]);
    auVar5[3] = -(*(char *)((long)param_2 + 3) == s_max_single_add_a_00115af0[3]);
    auVar5[4] = -(*(char *)((long)param_2 + 4) == s_max_single_add_a_00115af0[4]);
    auVar5[5] = -(*(char *)((long)param_2 + 5) == s_max_single_add_a_00115af0[5]);
    auVar5[6] = -(*(char *)((long)param_2 + 6) == s_max_single_add_a_00115af0[6]);
    auVar5[7] = -(*(char *)((long)param_2 + 7) == s_max_single_add_a_00115af0[7]);
    auVar5[8] = -((char)param_2[1] == s_max_single_add_a_00115af0[8]);
    auVar5[9] = -(*(char *)((long)param_2 + 9) == s_max_single_add_a_00115af0[9]);
    auVar5[10] = -(*(char *)((long)param_2 + 10) == s_max_single_add_a_00115af0[10]);
    auVar5[0xb] = -(*(char *)((long)param_2 + 0xb) == s_max_single_add_a_00115af0[0xb]);
    auVar5[0xc] = -(*(char *)((long)param_2 + 0xc) == s_max_single_add_a_00115af0[0xc]);
    auVar5[0xd] = -(*(char *)((long)param_2 + 0xd) == s_max_single_add_a_00115af0[0xd]);
    auVar5[0xe] = -(*(char *)((long)param_2 + 0xe) == s_max_single_add_a_00115af0[0xe]);
    auVar5[0xf] = -(*(char *)((long)param_2 + 0xf) == s_max_single_add_a_00115af0[0xf]);
    auVar13[0] = -((char)(short)param_2[2] == DAT_00115f00);
    auVar13[1] = -((char)((ushort)(short)param_2[2] >> 8) == UNK_00115f01);
    auVar13[2] = -(UNK_00115f02 == '\0');
    auVar13[3] = -(UNK_00115f03 == '\0');
    auVar13[4] = -(UNK_00115f04 == '\0');
    auVar13[5] = -(UNK_00115f05 == '\0');
    auVar13[6] = -(UNK_00115f06 == '\0');
    auVar13[7] = -(UNK_00115f07 == '\0');
    auVar13[8] = -(UNK_00115f08 == '\0');
    auVar13[9] = -(UNK_00115f09 == '\0');
    auVar13[10] = -(UNK_00115f0a == '\0');
    auVar13[0xb] = -(UNK_00115f0b == '\0');
    auVar13[0xc] = -(UNK_00115f0c == '\0');
    auVar13[0xd] = -(UNK_00115f0d == '\0');
    auVar13[0xe] = -(UNK_00115f0e == '\0');
    auVar13[0xf] = -(UNK_00115f0f == '\0');
    auVar13 = auVar13 & auVar5;
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
      *(undefined1 *)(param_1 + 1) = 8;
      *param_1 = 2;
      return;
    }
    auVar6[0] = -((char)*param_2 == DAT_00115cf0);
    auVar6[1] = -(*(char *)((long)param_2 + 1) == UNK_00115cf1);
    auVar6[2] = -(*(char *)((long)param_2 + 2) == UNK_00115cf2);
    auVar6[3] = -(*(char *)((long)param_2 + 3) == UNK_00115cf3);
    auVar6[4] = -(*(char *)((long)param_2 + 4) == UNK_00115cf4);
    auVar6[5] = -(*(char *)((long)param_2 + 5) == UNK_00115cf5);
    auVar6[6] = -(*(char *)((long)param_2 + 6) == UNK_00115cf6);
    auVar6[7] = -(*(char *)((long)param_2 + 7) == UNK_00115cf7);
    auVar6[8] = -((char)param_2[1] == UNK_00115cf8);
    auVar6[9] = -(*(char *)((long)param_2 + 9) == UNK_00115cf9);
    auVar6[10] = -(*(char *)((long)param_2 + 10) == UNK_00115cfa);
    auVar6[0xb] = -(*(char *)((long)param_2 + 0xb) == UNK_00115cfb);
    auVar6[0xc] = -(*(char *)((long)param_2 + 0xc) == UNK_00115cfc);
    auVar6[0xd] = -(*(char *)((long)param_2 + 0xd) == UNK_00115cfd);
    auVar6[0xe] = -(*(char *)((long)param_2 + 0xe) == UNK_00115cfe);
    auVar6[0xf] = -(*(char *)((long)param_2 + 0xf) == UNK_00115cff);
    auVar14[0] = -((char)(short)param_2[2] == DAT_00115f00);
    auVar14[1] = -((char)((ushort)(short)param_2[2] >> 8) == UNK_00115f01);
    auVar14[2] = -(UNK_00115f02 == '\0');
    auVar14[3] = -(UNK_00115f03 == '\0');
    auVar14[4] = -(UNK_00115f04 == '\0');
    auVar14[5] = -(UNK_00115f05 == '\0');
    auVar14[6] = -(UNK_00115f06 == '\0');
    auVar14[7] = -(UNK_00115f07 == '\0');
    auVar14[8] = -(UNK_00115f08 == '\0');
    auVar14[9] = -(UNK_00115f09 == '\0');
    auVar14[10] = -(UNK_00115f0a == '\0');
    auVar14[0xb] = -(UNK_00115f0b == '\0');
    auVar14[0xc] = -(UNK_00115f0c == '\0');
    auVar14[0xd] = -(UNK_00115f0d == '\0');
    auVar14[0xe] = -(UNK_00115f0e == '\0');
    auVar14[0xf] = -(UNK_00115f0f == '\0');
    auVar14 = auVar14 & auVar6;
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
      *(undefined1 *)(param_1 + 1) = 9;
      *param_1 = 2;
      return;
    }
    break;
  case 0x13:
    auVar10[0] = -(*(char *)((long)param_2 + 3) == DAT_00115760);
    auVar10[1] = -(*(char *)((long)param_2 + 4) == UNK_00115761);
    auVar10[2] = -(*(char *)((long)param_2 + 5) == UNK_00115762);
    auVar10[3] = -(*(char *)((long)param_2 + 6) == UNK_00115763);
    auVar10[4] = -(*(char *)((long)param_2 + 7) == UNK_00115764);
    auVar10[5] = -((char)param_2[1] == UNK_00115765);
    auVar10[6] = -(*(char *)((long)param_2 + 9) == UNK_00115766);
    auVar10[7] = -(*(char *)((long)param_2 + 10) == UNK_00115767);
    auVar10[8] = -(*(char *)((long)param_2 + 0xb) == UNK_00115768);
    auVar10[9] = -(*(char *)((long)param_2 + 0xc) == UNK_00115769);
    auVar10[10] = -(*(char *)((long)param_2 + 0xd) == UNK_0011576a);
    auVar10[0xb] = -(*(char *)((long)param_2 + 0xe) == UNK_0011576b);
    auVar10[0xc] = -(*(char *)((long)param_2 + 0xf) == UNK_0011576c);
    auVar10[0xd] = -((char)param_2[2] == UNK_0011576d);
    auVar10[0xe] = -(*(char *)((long)param_2 + 0x11) == UNK_0011576e);
    auVar10[0xf] = -(*(char *)((long)param_2 + 0x12) == UNK_0011576f);
    auVar2[0] = -((char)*param_2 == s_long_open_thresh_00115b50[0]);
    auVar2[1] = -(*(char *)((long)param_2 + 1) == s_long_open_thresh_00115b50[1]);
    auVar2[2] = -(*(char *)((long)param_2 + 2) == s_long_open_thresh_00115b50[2]);
    auVar2[3] = -(*(char *)((long)param_2 + 3) == s_long_open_thresh_00115b50[3]);
    auVar2[4] = -(*(char *)((long)param_2 + 4) == s_long_open_thresh_00115b50[4]);
    auVar2[5] = -(*(char *)((long)param_2 + 5) == s_long_open_thresh_00115b50[5]);
    auVar2[6] = -(*(char *)((long)param_2 + 6) == s_long_open_thresh_00115b50[6]);
    auVar2[7] = -(*(char *)((long)param_2 + 7) == s_long_open_thresh_00115b50[7]);
    auVar2[8] = -((char)param_2[1] == s_long_open_thresh_00115b50[8]);
    auVar2[9] = -(*(char *)((long)param_2 + 9) == s_long_open_thresh_00115b50[9]);
    auVar2[10] = -(*(char *)((long)param_2 + 10) == s_long_open_thresh_00115b50[10]);
    auVar2[0xb] = -(*(char *)((long)param_2 + 0xb) == s_long_open_thresh_00115b50[0xb]);
    auVar2[0xc] = -(*(char *)((long)param_2 + 0xc) == s_long_open_thresh_00115b50[0xc]);
    auVar2[0xd] = -(*(char *)((long)param_2 + 0xd) == s_long_open_thresh_00115b50[0xd]);
    auVar2[0xe] = -(*(char *)((long)param_2 + 0xe) == s_long_open_thresh_00115b50[0xe]);
    auVar2[0xf] = -(*(char *)((long)param_2 + 0xf) == s_long_open_thresh_00115b50[0xf]);
    auVar2 = auVar2 & auVar10;
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
      *(undefined1 *)(param_1 + 1) = 2;
      *param_1 = 2;
      return;
    }
    break;
  case 0x14:
    uVar1 = (undefined4)param_2[2];
    auVar15[0] = -((char)uVar1 == s_hold_00115c10[0]);
    auVar15[1] = -((char)((uint)uVar1 >> 8) == s_hold_00115c10[1]);
    auVar15[2] = -((char)((uint)uVar1 >> 0x10) == s_hold_00115c10[2]);
    auVar15[3] = -((char)((uint)uVar1 >> 0x18) == s_hold_00115c10[3]);
    auVar15[4] = -(s_hold_00115c10[4] == '\0');
    auVar15[5] = -(s_hold_00115c10[5] == '\0');
    auVar15[6] = -(s_hold_00115c10[6] == '\0');
    auVar15[7] = -(s_hold_00115c10[7] == '\0');
    auVar15[8] = -(UNK_00115c18 == '\0');
    auVar15[9] = -(UNK_00115c19 == '\0');
    auVar15[10] = -(UNK_00115c1a == '\0');
    auVar15[0xb] = -(UNK_00115c1b == '\0');
    auVar15[0xc] = -(UNK_00115c1c == '\0');
    auVar15[0xd] = -(UNK_00115c1d == '\0');
    auVar15[0xe] = -(UNK_00115c1e == '\0');
    auVar15[0xf] = -(UNK_00115c1f == '\0');
    auVar7[0] = -((char)*param_2 == DAT_00115e10);
    auVar7[1] = -(*(char *)((long)param_2 + 1) == UNK_00115e11);
    auVar7[2] = -(*(char *)((long)param_2 + 2) == UNK_00115e12);
    auVar7[3] = -(*(char *)((long)param_2 + 3) == UNK_00115e13);
    auVar7[4] = -(*(char *)((long)param_2 + 4) == UNK_00115e14);
    auVar7[5] = -(*(char *)((long)param_2 + 5) == UNK_00115e15);
    auVar7[6] = -(*(char *)((long)param_2 + 6) == UNK_00115e16);
    auVar7[7] = -(*(char *)((long)param_2 + 7) == UNK_00115e17);
    auVar7[8] = -((char)param_2[1] == UNK_00115e18);
    auVar7[9] = -(*(char *)((long)param_2 + 9) == UNK_00115e19);
    auVar7[10] = -(*(char *)((long)param_2 + 10) == UNK_00115e1a);
    auVar7[0xb] = -(*(char *)((long)param_2 + 0xb) == UNK_00115e1b);
    auVar7[0xc] = -(*(char *)((long)param_2 + 0xc) == UNK_00115e1c);
    auVar7[0xd] = -(*(char *)((long)param_2 + 0xd) == UNK_00115e1d);
    auVar7[0xe] = -(*(char *)((long)param_2 + 0xe) == UNK_00115e1e);
    auVar7[0xf] = -(*(char *)((long)param_2 + 0xf) == UNK_00115e1f);
    auVar7 = auVar7 & auVar15;
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
      *(undefined1 *)(param_1 + 1) = 3;
      *param_1 = 2;
      return;
    }
    uVar1 = (undefined4)param_2[2];
    auVar16[0] = -((char)uVar1 == s_hold_00115c10[0]);
    auVar16[1] = -((char)((uint)uVar1 >> 8) == s_hold_00115c10[1]);
    auVar16[2] = -((char)((uint)uVar1 >> 0x10) == s_hold_00115c10[2]);
    auVar16[3] = -((char)((uint)uVar1 >> 0x18) == s_hold_00115c10[3]);
    auVar16[4] = -(s_hold_00115c10[4] == '\0');
    auVar16[5] = -(s_hold_00115c10[5] == '\0');
    auVar16[6] = -(s_hold_00115c10[6] == '\0');
    auVar16[7] = -(s_hold_00115c10[7] == '\0');
    auVar16[8] = -(UNK_00115c18 == '\0');
    auVar16[9] = -(UNK_00115c19 == '\0');
    auVar16[10] = -(UNK_00115c1a == '\0');
    auVar16[0xb] = -(UNK_00115c1b == '\0');
    auVar16[0xc] = -(UNK_00115c1c == '\0');
    auVar16[0xd] = -(UNK_00115c1d == '\0');
    auVar16[0xe] = -(UNK_00115c1e == '\0');
    auVar16[0xf] = -(UNK_00115c1f == '\0');
    auVar8[0] = -((char)*param_2 == DAT_00115ec0);
    auVar8[1] = -(*(char *)((long)param_2 + 1) == UNK_00115ec1);
    auVar8[2] = -(*(char *)((long)param_2 + 2) == UNK_00115ec2);
    auVar8[3] = -(*(char *)((long)param_2 + 3) == UNK_00115ec3);
    auVar8[4] = -(*(char *)((long)param_2 + 4) == UNK_00115ec4);
    auVar8[5] = -(*(char *)((long)param_2 + 5) == UNK_00115ec5);
    auVar8[6] = -(*(char *)((long)param_2 + 6) == UNK_00115ec6);
    auVar8[7] = -(*(char *)((long)param_2 + 7) == UNK_00115ec7);
    auVar8[8] = -((char)param_2[1] == UNK_00115ec8);
    auVar8[9] = -(*(char *)((long)param_2 + 9) == UNK_00115ec9);
    auVar8[10] = -(*(char *)((long)param_2 + 10) == UNK_00115eca);
    auVar8[0xb] = -(*(char *)((long)param_2 + 0xb) == UNK_00115ecb);
    auVar8[0xc] = -(*(char *)((long)param_2 + 0xc) == UNK_00115ecc);
    auVar8[0xd] = -(*(char *)((long)param_2 + 0xd) == UNK_00115ecd);
    auVar8[0xe] = -(*(char *)((long)param_2 + 0xe) == UNK_00115ece);
    auVar8[0xf] = -(*(char *)((long)param_2 + 0xf) == UNK_00115ecf);
    auVar8 = auVar8 & auVar16;
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
      *(undefined1 *)(param_1 + 1) = 4;
      *param_1 = 2;
      return;
    }
    break;
  case 0x15:
    auVar17[0] = -(*(char *)((long)param_2 + 5) == s__close_threshold_00115a70[0]);
    auVar17[1] = -(*(char *)((long)param_2 + 6) == s__close_threshold_00115a70[1]);
    auVar17[2] = -(*(char *)((long)param_2 + 7) == s__close_threshold_00115a70[2]);
    auVar17[3] = -((char)param_2[1] == s__close_threshold_00115a70[3]);
    auVar17[4] = -(*(char *)((long)param_2 + 9) == s__close_threshold_00115a70[4]);
    auVar17[5] = -(*(char *)((long)param_2 + 10) == s__close_threshold_00115a70[5]);
    auVar17[6] = -(*(char *)((long)param_2 + 0xb) == s__close_threshold_00115a70[6]);
    auVar17[7] = -(*(char *)((long)param_2 + 0xc) == s__close_threshold_00115a70[7]);
    auVar17[8] = -(*(char *)((long)param_2 + 0xd) == s__close_threshold_00115a70[8]);
    auVar17[9] = -(*(char *)((long)param_2 + 0xe) == s__close_threshold_00115a70[9]);
    auVar17[10] = -(*(char *)((long)param_2 + 0xf) == s__close_threshold_00115a70[10]);
    auVar17[0xb] = -((char)param_2[2] == s__close_threshold_00115a70[0xb]);
    auVar17[0xc] = -(*(char *)((long)param_2 + 0x11) == s__close_threshold_00115a70[0xc]);
    auVar17[0xd] = -(*(char *)((long)param_2 + 0x12) == s__close_threshold_00115a70[0xd]);
    auVar17[0xe] = -(*(char *)((long)param_2 + 0x13) == s__close_threshold_00115a70[0xe]);
    auVar17[0xf] = -(*(char *)((long)param_2 + 0x14) == s__close_threshold_00115a70[0xf]);
    auVar9[0] = -((char)*param_2 == s_short_close_thre_00115a80[0]);
    auVar9[1] = -(*(char *)((long)param_2 + 1) == s_short_close_thre_00115a80[1]);
    auVar9[2] = -(*(char *)((long)param_2 + 2) == s_short_close_thre_00115a80[2]);
    auVar9[3] = -(*(char *)((long)param_2 + 3) == s_short_close_thre_00115a80[3]);
    auVar9[4] = -(*(char *)((long)param_2 + 4) == s_short_close_thre_00115a80[4]);
    auVar9[5] = -(*(char *)((long)param_2 + 5) == s_short_close_thre_00115a80[5]);
    auVar9[6] = -(*(char *)((long)param_2 + 6) == s_short_close_thre_00115a80[6]);
    auVar9[7] = -(*(char *)((long)param_2 + 7) == s_short_close_thre_00115a80[7]);
    auVar9[8] = -((char)param_2[1] == s_short_close_thre_00115a80[8]);
    auVar9[9] = -(*(char *)((long)param_2 + 9) == s_short_close_thre_00115a80[9]);
    auVar9[10] = -(*(char *)((long)param_2 + 10) == s_short_close_thre_00115a80[10]);
    auVar9[0xb] = -(*(char *)((long)param_2 + 0xb) == s_short_close_thre_00115a80[0xb]);
    auVar9[0xc] = -(*(char *)((long)param_2 + 0xc) == s_short_close_thre_00115a80[0xc]);
    auVar9[0xd] = -(*(char *)((long)param_2 + 0xd) == s_short_close_thre_00115a80[0xd]);
    auVar9[0xe] = -(*(char *)((long)param_2 + 0xe) == s_short_close_thre_00115a80[0xe]);
    auVar9[0xf] = -(*(char *)((long)param_2 + 0xf) == s_short_close_thre_00115a80[0xf]);
    auVar9 = auVar9 & auVar17;
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
      *(undefined1 *)(param_1 + 1) = 5;
      *param_1 = 2;
      return;
    }
  }
  *(undefined1 *)(param_1 + 1) = 0xb;
  *param_1 = 2;
  return;
}


