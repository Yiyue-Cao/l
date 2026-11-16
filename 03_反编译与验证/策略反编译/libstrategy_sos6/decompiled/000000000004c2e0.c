// ELF address 0x000000000004c2e0; <strategy_sos6::_::<impl serde_core::de::Deserialize for strategy_sos6::SectionParams>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_str

/* _<strategy_sos6::_::<impl serde_core::de::Deserialize for
   strategy_sos6::SectionParams>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_str
    */

void __rustcall
_<strategy_sos6::_::<impl_serde_core::de::Deserialize_for_strategy_sos6::SectionParams>::deserialize::__FieldVisitor_as_serde_core::de::Visitor>
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
    auVar3[0] = -((char)*param_2 == s_max_single_add_v_00115350[0]);
    auVar3[1] = -(*(char *)((long)param_2 + 1) == s_max_single_add_v_00115350[1]);
    auVar3[2] = -(*(char *)((long)param_2 + 2) == s_max_single_add_v_00115350[2]);
    auVar3[3] = -(*(char *)((long)param_2 + 3) == s_max_single_add_v_00115350[3]);
    auVar3[4] = -(*(char *)((long)param_2 + 4) == s_max_single_add_v_00115350[4]);
    auVar3[5] = -(*(char *)((long)param_2 + 5) == s_max_single_add_v_00115350[5]);
    auVar3[6] = -(*(char *)((long)param_2 + 6) == s_max_single_add_v_00115350[6]);
    auVar3[7] = -(*(char *)((long)param_2 + 7) == s_max_single_add_v_00115350[7]);
    auVar3[8] = -((char)param_2[1] == s_max_single_add_v_00115350[8]);
    auVar3[9] = -(*(char *)((long)param_2 + 9) == s_max_single_add_v_00115350[9]);
    auVar3[10] = -(*(char *)((long)param_2 + 10) == s_max_single_add_v_00115350[10]);
    auVar3[0xb] = -(*(char *)((long)param_2 + 0xb) == s_max_single_add_v_00115350[0xb]);
    auVar3[0xc] = -(*(char *)((long)param_2 + 0xc) == s_max_single_add_v_00115350[0xc]);
    auVar3[0xd] = -(*(char *)((long)param_2 + 0xd) == s_max_single_add_v_00115350[0xd]);
    auVar3[0xe] = -(*(char *)((long)param_2 + 0xe) == s_max_single_add_v_00115350[0xe]);
    auVar3[0xf] = -(*(char *)((long)param_2 + 0xf) == s_max_single_add_v_00115350[0xf]);
    auVar11[0] = -((char)(short)param_2[2] == s_ol_00114fc0[0]);
    auVar11[1] = -((char)((ushort)(short)param_2[2] >> 8) == s_ol_00114fc0[1]);
    auVar11[2] = -(s_ol_00114fc0[2] == '\0');
    auVar11[3] = -(s_ol_00114fc0[3] == '\0');
    auVar11[4] = -(UNK_00114fc4 == '\0');
    auVar11[5] = -(UNK_00114fc5 == '\0');
    auVar11[6] = -(UNK_00114fc6 == '\0');
    auVar11[7] = -(UNK_00114fc7 == '\0');
    auVar11[8] = -(UNK_00114fc8 == '\0');
    auVar11[9] = -(UNK_00114fc9 == '\0');
    auVar11[10] = -(UNK_00114fca == '\0');
    auVar11[0xb] = -(UNK_00114fcb == '\0');
    auVar11[0xc] = -(UNK_00114fcc == '\0');
    auVar11[0xd] = -(UNK_00114fcd == '\0');
    auVar11[0xe] = -(UNK_00114fce == '\0');
    auVar11[0xf] = -(UNK_00114fcf == '\0');
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
    auVar4[0] = -((char)*param_2 == s_max_single_net_v_001152a0[0]);
    auVar4[1] = -(*(char *)((long)param_2 + 1) == s_max_single_net_v_001152a0[1]);
    auVar4[2] = -(*(char *)((long)param_2 + 2) == s_max_single_net_v_001152a0[2]);
    auVar4[3] = -(*(char *)((long)param_2 + 3) == s_max_single_net_v_001152a0[3]);
    auVar4[4] = -(*(char *)((long)param_2 + 4) == s_max_single_net_v_001152a0[4]);
    auVar4[5] = -(*(char *)((long)param_2 + 5) == s_max_single_net_v_001152a0[5]);
    auVar4[6] = -(*(char *)((long)param_2 + 6) == s_max_single_net_v_001152a0[6]);
    auVar4[7] = -(*(char *)((long)param_2 + 7) == s_max_single_net_v_001152a0[7]);
    auVar4[8] = -((char)param_2[1] == s_max_single_net_v_001152a0[8]);
    auVar4[9] = -(*(char *)((long)param_2 + 9) == s_max_single_net_v_001152a0[9]);
    auVar4[10] = -(*(char *)((long)param_2 + 10) == s_max_single_net_v_001152a0[10]);
    auVar4[0xb] = -(*(char *)((long)param_2 + 0xb) == s_max_single_net_v_001152a0[0xb]);
    auVar4[0xc] = -(*(char *)((long)param_2 + 0xc) == s_max_single_net_v_001152a0[0xc]);
    auVar4[0xd] = -(*(char *)((long)param_2 + 0xd) == s_max_single_net_v_001152a0[0xd]);
    auVar4[0xe] = -(*(char *)((long)param_2 + 0xe) == s_max_single_net_v_001152a0[0xe]);
    auVar4[0xf] = -(*(char *)((long)param_2 + 0xf) == s_max_single_net_v_001152a0[0xf]);
    auVar12[0] = -((char)(short)param_2[2] == s_ol_00114fc0[0]);
    auVar12[1] = -((char)((ushort)(short)param_2[2] >> 8) == s_ol_00114fc0[1]);
    auVar12[2] = -(s_ol_00114fc0[2] == '\0');
    auVar12[3] = -(s_ol_00114fc0[3] == '\0');
    auVar12[4] = -(UNK_00114fc4 == '\0');
    auVar12[5] = -(UNK_00114fc5 == '\0');
    auVar12[6] = -(UNK_00114fc6 == '\0');
    auVar12[7] = -(UNK_00114fc7 == '\0');
    auVar12[8] = -(UNK_00114fc8 == '\0');
    auVar12[9] = -(UNK_00114fc9 == '\0');
    auVar12[10] = -(UNK_00114fca == '\0');
    auVar12[0xb] = -(UNK_00114fcb == '\0');
    auVar12[0xc] = -(UNK_00114fcc == '\0');
    auVar12[0xd] = -(UNK_00114fcd == '\0');
    auVar12[0xe] = -(UNK_00114fce == '\0');
    auVar12[0xf] = -(UNK_00114fcf == '\0');
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
    auVar5[0] = -((char)*param_2 == s_max_single_add_a_00115250[0]);
    auVar5[1] = -(*(char *)((long)param_2 + 1) == s_max_single_add_a_00115250[1]);
    auVar5[2] = -(*(char *)((long)param_2 + 2) == s_max_single_add_a_00115250[2]);
    auVar5[3] = -(*(char *)((long)param_2 + 3) == s_max_single_add_a_00115250[3]);
    auVar5[4] = -(*(char *)((long)param_2 + 4) == s_max_single_add_a_00115250[4]);
    auVar5[5] = -(*(char *)((long)param_2 + 5) == s_max_single_add_a_00115250[5]);
    auVar5[6] = -(*(char *)((long)param_2 + 6) == s_max_single_add_a_00115250[6]);
    auVar5[7] = -(*(char *)((long)param_2 + 7) == s_max_single_add_a_00115250[7]);
    auVar5[8] = -((char)param_2[1] == s_max_single_add_a_00115250[8]);
    auVar5[9] = -(*(char *)((long)param_2 + 9) == s_max_single_add_a_00115250[9]);
    auVar5[10] = -(*(char *)((long)param_2 + 10) == s_max_single_add_a_00115250[10]);
    auVar5[0xb] = -(*(char *)((long)param_2 + 0xb) == s_max_single_add_a_00115250[0xb]);
    auVar5[0xc] = -(*(char *)((long)param_2 + 0xc) == s_max_single_add_a_00115250[0xc]);
    auVar5[0xd] = -(*(char *)((long)param_2 + 0xd) == s_max_single_add_a_00115250[0xd]);
    auVar5[0xe] = -(*(char *)((long)param_2 + 0xe) == s_max_single_add_a_00115250[0xe]);
    auVar5[0xf] = -(*(char *)((long)param_2 + 0xf) == s_max_single_add_a_00115250[0xf]);
    auVar13[0] = -((char)(short)param_2[2] == DAT_00115600);
    auVar13[1] = -((char)((ushort)(short)param_2[2] >> 8) == UNK_00115601);
    auVar13[2] = -(UNK_00115602 == '\0');
    auVar13[3] = -(UNK_00115603 == '\0');
    auVar13[4] = -(UNK_00115604 == '\0');
    auVar13[5] = -(UNK_00115605 == '\0');
    auVar13[6] = -(UNK_00115606 == '\0');
    auVar13[7] = -(UNK_00115607 == '\0');
    auVar13[8] = -(UNK_00115608 == '\0');
    auVar13[9] = -(UNK_00115609 == '\0');
    auVar13[10] = -(UNK_0011560a == '\0');
    auVar13[0xb] = -(UNK_0011560b == '\0');
    auVar13[0xc] = -(UNK_0011560c == '\0');
    auVar13[0xd] = -(UNK_0011560d == '\0');
    auVar13[0xe] = -(UNK_0011560e == '\0');
    auVar13[0xf] = -(UNK_0011560f == '\0');
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
    auVar6[0] = -((char)*param_2 == DAT_00115430);
    auVar6[1] = -(*(char *)((long)param_2 + 1) == UNK_00115431);
    auVar6[2] = -(*(char *)((long)param_2 + 2) == UNK_00115432);
    auVar6[3] = -(*(char *)((long)param_2 + 3) == UNK_00115433);
    auVar6[4] = -(*(char *)((long)param_2 + 4) == UNK_00115434);
    auVar6[5] = -(*(char *)((long)param_2 + 5) == UNK_00115435);
    auVar6[6] = -(*(char *)((long)param_2 + 6) == UNK_00115436);
    auVar6[7] = -(*(char *)((long)param_2 + 7) == UNK_00115437);
    auVar6[8] = -((char)param_2[1] == UNK_00115438);
    auVar6[9] = -(*(char *)((long)param_2 + 9) == UNK_00115439);
    auVar6[10] = -(*(char *)((long)param_2 + 10) == UNK_0011543a);
    auVar6[0xb] = -(*(char *)((long)param_2 + 0xb) == UNK_0011543b);
    auVar6[0xc] = -(*(char *)((long)param_2 + 0xc) == UNK_0011543c);
    auVar6[0xd] = -(*(char *)((long)param_2 + 0xd) == UNK_0011543d);
    auVar6[0xe] = -(*(char *)((long)param_2 + 0xe) == UNK_0011543e);
    auVar6[0xf] = -(*(char *)((long)param_2 + 0xf) == UNK_0011543f);
    auVar14[0] = -((char)(short)param_2[2] == DAT_00115600);
    auVar14[1] = -((char)((ushort)(short)param_2[2] >> 8) == UNK_00115601);
    auVar14[2] = -(UNK_00115602 == '\0');
    auVar14[3] = -(UNK_00115603 == '\0');
    auVar14[4] = -(UNK_00115604 == '\0');
    auVar14[5] = -(UNK_00115605 == '\0');
    auVar14[6] = -(UNK_00115606 == '\0');
    auVar14[7] = -(UNK_00115607 == '\0');
    auVar14[8] = -(UNK_00115608 == '\0');
    auVar14[9] = -(UNK_00115609 == '\0');
    auVar14[10] = -(UNK_0011560a == '\0');
    auVar14[0xb] = -(UNK_0011560b == '\0');
    auVar14[0xc] = -(UNK_0011560c == '\0');
    auVar14[0xd] = -(UNK_0011560d == '\0');
    auVar14[0xe] = -(UNK_0011560e == '\0');
    auVar14[0xf] = -(UNK_0011560f == '\0');
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
    auVar10[0] = -(*(char *)((long)param_2 + 3) == DAT_00114f50);
    auVar10[1] = -(*(char *)((long)param_2 + 4) == UNK_00114f51);
    auVar10[2] = -(*(char *)((long)param_2 + 5) == UNK_00114f52);
    auVar10[3] = -(*(char *)((long)param_2 + 6) == UNK_00114f53);
    auVar10[4] = -(*(char *)((long)param_2 + 7) == UNK_00114f54);
    auVar10[5] = -((char)param_2[1] == UNK_00114f55);
    auVar10[6] = -(*(char *)((long)param_2 + 9) == UNK_00114f56);
    auVar10[7] = -(*(char *)((long)param_2 + 10) == UNK_00114f57);
    auVar10[8] = -(*(char *)((long)param_2 + 0xb) == UNK_00114f58);
    auVar10[9] = -(*(char *)((long)param_2 + 0xc) == UNK_00114f59);
    auVar10[10] = -(*(char *)((long)param_2 + 0xd) == UNK_00114f5a);
    auVar10[0xb] = -(*(char *)((long)param_2 + 0xe) == UNK_00114f5b);
    auVar10[0xc] = -(*(char *)((long)param_2 + 0xf) == UNK_00114f5c);
    auVar10[0xd] = -((char)param_2[2] == UNK_00114f5d);
    auVar10[0xe] = -(*(char *)((long)param_2 + 0x11) == UNK_00114f5e);
    auVar10[0xf] = -(*(char *)((long)param_2 + 0x12) == UNK_00114f5f);
    auVar2[0] = -((char)*param_2 == s_long_open_thresh_001152b0[0]);
    auVar2[1] = -(*(char *)((long)param_2 + 1) == s_long_open_thresh_001152b0[1]);
    auVar2[2] = -(*(char *)((long)param_2 + 2) == s_long_open_thresh_001152b0[2]);
    auVar2[3] = -(*(char *)((long)param_2 + 3) == s_long_open_thresh_001152b0[3]);
    auVar2[4] = -(*(char *)((long)param_2 + 4) == s_long_open_thresh_001152b0[4]);
    auVar2[5] = -(*(char *)((long)param_2 + 5) == s_long_open_thresh_001152b0[5]);
    auVar2[6] = -(*(char *)((long)param_2 + 6) == s_long_open_thresh_001152b0[6]);
    auVar2[7] = -(*(char *)((long)param_2 + 7) == s_long_open_thresh_001152b0[7]);
    auVar2[8] = -((char)param_2[1] == s_long_open_thresh_001152b0[8]);
    auVar2[9] = -(*(char *)((long)param_2 + 9) == s_long_open_thresh_001152b0[9]);
    auVar2[10] = -(*(char *)((long)param_2 + 10) == s_long_open_thresh_001152b0[10]);
    auVar2[0xb] = -(*(char *)((long)param_2 + 0xb) == s_long_open_thresh_001152b0[0xb]);
    auVar2[0xc] = -(*(char *)((long)param_2 + 0xc) == s_long_open_thresh_001152b0[0xc]);
    auVar2[0xd] = -(*(char *)((long)param_2 + 0xd) == s_long_open_thresh_001152b0[0xd]);
    auVar2[0xe] = -(*(char *)((long)param_2 + 0xe) == s_long_open_thresh_001152b0[0xe]);
    auVar2[0xf] = -(*(char *)((long)param_2 + 0xf) == s_long_open_thresh_001152b0[0xf]);
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
    auVar15[0] = -((char)uVar1 == s_hold_00115360[0]);
    auVar15[1] = -((char)((uint)uVar1 >> 8) == s_hold_00115360[1]);
    auVar15[2] = -((char)((uint)uVar1 >> 0x10) == s_hold_00115360[2]);
    auVar15[3] = -((char)((uint)uVar1 >> 0x18) == s_hold_00115360[3]);
    auVar15[4] = -(s_hold_00115360[4] == '\0');
    auVar15[5] = -(s_hold_00115360[5] == '\0');
    auVar15[6] = -(s_hold_00115360[6] == '\0');
    auVar15[7] = -(s_hold_00115360[7] == '\0');
    auVar15[8] = -(UNK_00115368 == '\0');
    auVar15[9] = -(UNK_00115369 == '\0');
    auVar15[10] = -(UNK_0011536a == '\0');
    auVar15[0xb] = -(UNK_0011536b == '\0');
    auVar15[0xc] = -(UNK_0011536c == '\0');
    auVar15[0xd] = -(UNK_0011536d == '\0');
    auVar15[0xe] = -(UNK_0011536e == '\0');
    auVar15[0xf] = -(UNK_0011536f == '\0');
    auVar7[0] = -((char)*param_2 == DAT_00115530);
    auVar7[1] = -(*(char *)((long)param_2 + 1) == UNK_00115531);
    auVar7[2] = -(*(char *)((long)param_2 + 2) == UNK_00115532);
    auVar7[3] = -(*(char *)((long)param_2 + 3) == UNK_00115533);
    auVar7[4] = -(*(char *)((long)param_2 + 4) == UNK_00115534);
    auVar7[5] = -(*(char *)((long)param_2 + 5) == UNK_00115535);
    auVar7[6] = -(*(char *)((long)param_2 + 6) == UNK_00115536);
    auVar7[7] = -(*(char *)((long)param_2 + 7) == UNK_00115537);
    auVar7[8] = -((char)param_2[1] == UNK_00115538);
    auVar7[9] = -(*(char *)((long)param_2 + 9) == UNK_00115539);
    auVar7[10] = -(*(char *)((long)param_2 + 10) == UNK_0011553a);
    auVar7[0xb] = -(*(char *)((long)param_2 + 0xb) == UNK_0011553b);
    auVar7[0xc] = -(*(char *)((long)param_2 + 0xc) == UNK_0011553c);
    auVar7[0xd] = -(*(char *)((long)param_2 + 0xd) == UNK_0011553d);
    auVar7[0xe] = -(*(char *)((long)param_2 + 0xe) == UNK_0011553e);
    auVar7[0xf] = -(*(char *)((long)param_2 + 0xf) == UNK_0011553f);
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
    auVar16[0] = -((char)uVar1 == s_hold_00115360[0]);
    auVar16[1] = -((char)((uint)uVar1 >> 8) == s_hold_00115360[1]);
    auVar16[2] = -((char)((uint)uVar1 >> 0x10) == s_hold_00115360[2]);
    auVar16[3] = -((char)((uint)uVar1 >> 0x18) == s_hold_00115360[3]);
    auVar16[4] = -(s_hold_00115360[4] == '\0');
    auVar16[5] = -(s_hold_00115360[5] == '\0');
    auVar16[6] = -(s_hold_00115360[6] == '\0');
    auVar16[7] = -(s_hold_00115360[7] == '\0');
    auVar16[8] = -(UNK_00115368 == '\0');
    auVar16[9] = -(UNK_00115369 == '\0');
    auVar16[10] = -(UNK_0011536a == '\0');
    auVar16[0xb] = -(UNK_0011536b == '\0');
    auVar16[0xc] = -(UNK_0011536c == '\0');
    auVar16[0xd] = -(UNK_0011536d == '\0');
    auVar16[0xe] = -(UNK_0011536e == '\0');
    auVar16[0xf] = -(UNK_0011536f == '\0');
    auVar8[0] = -((char)*param_2 == DAT_001155d0);
    auVar8[1] = -(*(char *)((long)param_2 + 1) == UNK_001155d1);
    auVar8[2] = -(*(char *)((long)param_2 + 2) == UNK_001155d2);
    auVar8[3] = -(*(char *)((long)param_2 + 3) == UNK_001155d3);
    auVar8[4] = -(*(char *)((long)param_2 + 4) == UNK_001155d4);
    auVar8[5] = -(*(char *)((long)param_2 + 5) == UNK_001155d5);
    auVar8[6] = -(*(char *)((long)param_2 + 6) == UNK_001155d6);
    auVar8[7] = -(*(char *)((long)param_2 + 7) == UNK_001155d7);
    auVar8[8] = -((char)param_2[1] == UNK_001155d8);
    auVar8[9] = -(*(char *)((long)param_2 + 9) == UNK_001155d9);
    auVar8[10] = -(*(char *)((long)param_2 + 10) == UNK_001155da);
    auVar8[0xb] = -(*(char *)((long)param_2 + 0xb) == UNK_001155db);
    auVar8[0xc] = -(*(char *)((long)param_2 + 0xc) == UNK_001155dc);
    auVar8[0xd] = -(*(char *)((long)param_2 + 0xd) == UNK_001155dd);
    auVar8[0xe] = -(*(char *)((long)param_2 + 0xe) == UNK_001155de);
    auVar8[0xf] = -(*(char *)((long)param_2 + 0xf) == UNK_001155df);
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
    auVar17[0] = -(*(char *)((long)param_2 + 5) == s__close_threshold_001151d0[0]);
    auVar17[1] = -(*(char *)((long)param_2 + 6) == s__close_threshold_001151d0[1]);
    auVar17[2] = -(*(char *)((long)param_2 + 7) == s__close_threshold_001151d0[2]);
    auVar17[3] = -((char)param_2[1] == s__close_threshold_001151d0[3]);
    auVar17[4] = -(*(char *)((long)param_2 + 9) == s__close_threshold_001151d0[4]);
    auVar17[5] = -(*(char *)((long)param_2 + 10) == s__close_threshold_001151d0[5]);
    auVar17[6] = -(*(char *)((long)param_2 + 0xb) == s__close_threshold_001151d0[6]);
    auVar17[7] = -(*(char *)((long)param_2 + 0xc) == s__close_threshold_001151d0[7]);
    auVar17[8] = -(*(char *)((long)param_2 + 0xd) == s__close_threshold_001151d0[8]);
    auVar17[9] = -(*(char *)((long)param_2 + 0xe) == s__close_threshold_001151d0[9]);
    auVar17[10] = -(*(char *)((long)param_2 + 0xf) == s__close_threshold_001151d0[10]);
    auVar17[0xb] = -((char)param_2[2] == s__close_threshold_001151d0[0xb]);
    auVar17[0xc] = -(*(char *)((long)param_2 + 0x11) == s__close_threshold_001151d0[0xc]);
    auVar17[0xd] = -(*(char *)((long)param_2 + 0x12) == s__close_threshold_001151d0[0xd]);
    auVar17[0xe] = -(*(char *)((long)param_2 + 0x13) == s__close_threshold_001151d0[0xe]);
    auVar17[0xf] = -(*(char *)((long)param_2 + 0x14) == s__close_threshold_001151d0[0xf]);
    auVar9[0] = -((char)*param_2 == s_short_close_thre_001151e0[0]);
    auVar9[1] = -(*(char *)((long)param_2 + 1) == s_short_close_thre_001151e0[1]);
    auVar9[2] = -(*(char *)((long)param_2 + 2) == s_short_close_thre_001151e0[2]);
    auVar9[3] = -(*(char *)((long)param_2 + 3) == s_short_close_thre_001151e0[3]);
    auVar9[4] = -(*(char *)((long)param_2 + 4) == s_short_close_thre_001151e0[4]);
    auVar9[5] = -(*(char *)((long)param_2 + 5) == s_short_close_thre_001151e0[5]);
    auVar9[6] = -(*(char *)((long)param_2 + 6) == s_short_close_thre_001151e0[6]);
    auVar9[7] = -(*(char *)((long)param_2 + 7) == s_short_close_thre_001151e0[7]);
    auVar9[8] = -((char)param_2[1] == s_short_close_thre_001151e0[8]);
    auVar9[9] = -(*(char *)((long)param_2 + 9) == s_short_close_thre_001151e0[9]);
    auVar9[10] = -(*(char *)((long)param_2 + 10) == s_short_close_thre_001151e0[10]);
    auVar9[0xb] = -(*(char *)((long)param_2 + 0xb) == s_short_close_thre_001151e0[0xb]);
    auVar9[0xc] = -(*(char *)((long)param_2 + 0xc) == s_short_close_thre_001151e0[0xc]);
    auVar9[0xd] = -(*(char *)((long)param_2 + 0xd) == s_short_close_thre_001151e0[0xd]);
    auVar9[0xe] = -(*(char *)((long)param_2 + 0xe) == s_short_close_thre_001151e0[0xe]);
    auVar9[0xf] = -(*(char *)((long)param_2 + 0xf) == s_short_close_thre_001151e0[0xf]);
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


