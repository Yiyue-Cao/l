// ELF address 0x000000000004a7a0; <strategy_sm3_1::_::<impl serde_core::de::Deserialize for strategy_sm3_1::SM31Params>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_str

/* _<strategy_sm3_1::_::<impl serde_core::de::Deserialize for
   strategy_sm3_1::SM31Params>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_str
    */

undefined8 * __rustcall
_<strategy_sm3_1::_::<impl_serde_core::de::Deserialize_for_strategy_sm3_1::SM31Params>::deserialize::__FieldVisitor_as_serde_core::de::Visitor>
::visit_str(undefined8 *param_1,undefined1 (*param_2) [16],long param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
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
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  
  if (param_3 == 0xe) {
    if (*(long *)(*param_2 + 6) == 0x657461645f797274 && *(long *)*param_2 == 0x7274656d656c6574) {
      *(undefined1 *)(param_1 + 1) = 0;
      goto LAB_0014b20b;
    }
    if (*(long *)(*param_2 + 6) == 0x657461725f72656b && *(long *)*param_2 == 0x656b61745f78616d) {
      *(undefined1 *)(param_1 + 1) = 5;
      goto LAB_0014b20b;
    }
    if (*(long *)(*param_2 + 6) == 0x7972657070696c73 && *(long *)*param_2 == 0x6c735f6564617274) {
      *(undefined1 *)(param_1 + 1) = 6;
      goto LAB_0014b20b;
    }
    goto LAB_0014aab3;
  }
  bVar7 = false;
  bVar3 = false;
  bVar5 = false;
  switch(param_3) {
  case 9:
    if ((*param_2)[8] == 'a' && *(long *)*param_2 == 0x68706c615f317670) {
      *(undefined1 *)(param_1 + 1) = 2;
      goto LAB_0014b20b;
    }
    goto LAB_0014aab3;
  case 10:
    if (*(short *)(*param_2 + 8) == 0x6168 && *(long *)*param_2 == 0x706c615f74736f63) {
      *(undefined1 *)(param_1 + 1) = 3;
      goto LAB_0014b20b;
    }
    bVar6 = true;
    bVar7 = false;
    bVar3 = false;
    bVar5 = false;
    goto joined_r0x0014a992;
  case 0xb:
    if (*(long *)(*param_2 + 3) == 0x65646f6d5f6c616e && *(long *)*param_2 == 0x6d5f6c616e676973) {
      *(undefined1 *)(param_1 + 1) = 1;
      goto LAB_0014b20b;
    }
LAB_0014aab3:
    bVar7 = false;
    break;
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x16:
    goto switchD_0014a85f_caseD_c;
  case 0x12:
    auVar16[0] = -((*param_2)[0] == s_max_single_add_v_00118900[0]);
    auVar16[1] = -((*param_2)[1] == s_max_single_add_v_00118900[1]);
    auVar16[2] = -((*param_2)[2] == s_max_single_add_v_00118900[2]);
    auVar16[3] = -((*param_2)[3] == s_max_single_add_v_00118900[3]);
    auVar16[4] = -((*param_2)[4] == s_max_single_add_v_00118900[4]);
    auVar16[5] = -((*param_2)[5] == s_max_single_add_v_00118900[5]);
    auVar16[6] = -((*param_2)[6] == s_max_single_add_v_00118900[6]);
    auVar16[7] = -((*param_2)[7] == s_max_single_add_v_00118900[7]);
    auVar16[8] = -((*param_2)[8] == s_max_single_add_v_00118900[8]);
    auVar16[9] = -((*param_2)[9] == s_max_single_add_v_00118900[9]);
    auVar16[10] = -((*param_2)[10] == s_max_single_add_v_00118900[10]);
    auVar16[0xb] = -((*param_2)[0xb] == s_max_single_add_v_00118900[0xb]);
    auVar16[0xc] = -((*param_2)[0xc] == s_max_single_add_v_00118900[0xc]);
    auVar16[0xd] = -((*param_2)[0xd] == s_max_single_add_v_00118900[0xd]);
    auVar16[0xe] = -((*param_2)[0xe] == s_max_single_add_v_00118900[0xe]);
    auVar16[0xf] = -((*param_2)[0xf] == s_max_single_add_v_00118900[0xf]);
    auVar34[0] = -((char)*(undefined2 *)param_2[1] == s_ol_00118630[0]);
    auVar34[1] = -((char)((ushort)*(undefined2 *)param_2[1] >> 8) == s_ol_00118630[1]);
    auVar34[2] = -(s_ol_00118630[2] == '\0');
    auVar34[3] = -(s_ol_00118630[3] == '\0');
    auVar34[4] = -(UNK_00118634 == '\0');
    auVar34[5] = -(UNK_00118635 == '\0');
    auVar34[6] = -(UNK_00118636 == '\0');
    auVar34[7] = -(UNK_00118637 == '\0');
    auVar34[8] = -(UNK_00118638 == '\0');
    auVar34[9] = -(UNK_00118639 == '\0');
    auVar34[10] = -(UNK_0011863a == '\0');
    auVar34[0xb] = -(UNK_0011863b == '\0');
    auVar34[0xc] = -(UNK_0011863c == '\0');
    auVar34[0xd] = -(UNK_0011863d == '\0');
    auVar34[0xe] = -(UNK_0011863e == '\0');
    auVar34[0xf] = -(UNK_0011863f == '\0');
    auVar34 = auVar34 & auVar16;
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
      *(undefined1 *)(param_1 + 1) = 8;
      goto LAB_0014b20b;
    }
    auVar17[0] = -((*param_2)[0] == DAT_00118890);
    auVar17[1] = -((*param_2)[1] == UNK_00118891);
    auVar17[2] = -((*param_2)[2] == UNK_00118892);
    auVar17[3] = -((*param_2)[3] == UNK_00118893);
    auVar17[4] = -((*param_2)[4] == UNK_00118894);
    auVar17[5] = -((*param_2)[5] == UNK_00118895);
    auVar17[6] = -((*param_2)[6] == UNK_00118896);
    auVar17[7] = -((*param_2)[7] == UNK_00118897);
    auVar17[8] = -((*param_2)[8] == UNK_00118898);
    auVar17[9] = -((*param_2)[9] == UNK_00118899);
    auVar17[10] = -((*param_2)[10] == UNK_0011889a);
    auVar17[0xb] = -((*param_2)[0xb] == UNK_0011889b);
    auVar17[0xc] = -((*param_2)[0xc] == UNK_0011889c);
    auVar17[0xd] = -((*param_2)[0xd] == UNK_0011889d);
    auVar17[0xe] = -((*param_2)[0xe] == UNK_0011889e);
    auVar17[0xf] = -((*param_2)[0xf] == UNK_0011889f);
    auVar35[0] = -((char)*(undefined2 *)param_2[1] == DAT_00118bb0);
    auVar35[1] = -((char)((ushort)*(undefined2 *)param_2[1] >> 8) == UNK_00118bb1);
    auVar35[2] = -(UNK_00118bb2 == '\0');
    auVar35[3] = -(UNK_00118bb3 == '\0');
    auVar35[4] = -(UNK_00118bb4 == '\0');
    auVar35[5] = -(UNK_00118bb5 == '\0');
    auVar35[6] = -(UNK_00118bb6 == '\0');
    auVar35[7] = -(UNK_00118bb7 == '\0');
    auVar35[8] = -(UNK_00118bb8 == '\0');
    auVar35[9] = -(UNK_00118bb9 == '\0');
    auVar35[10] = -(UNK_00118bba == '\0');
    auVar35[0xb] = -(UNK_00118bbb == '\0');
    auVar35[0xc] = -(UNK_00118bbc == '\0');
    auVar35[0xd] = -(UNK_00118bbd == '\0');
    auVar35[0xe] = -(UNK_00118bbe == '\0');
    auVar35[0xf] = -(UNK_00118bbf == '\0');
    auVar35 = auVar35 & auVar17;
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
      goto LAB_0014b20b;
    }
    auVar18[0] = -((*param_2)[0] == DAT_001188c0);
    auVar18[1] = -((*param_2)[1] == UNK_001188c1);
    auVar18[2] = -((*param_2)[2] == UNK_001188c2);
    auVar18[3] = -((*param_2)[3] == UNK_001188c3);
    auVar18[4] = -((*param_2)[4] == UNK_001188c4);
    auVar18[5] = -((*param_2)[5] == UNK_001188c5);
    auVar18[6] = -((*param_2)[6] == UNK_001188c6);
    auVar18[7] = -((*param_2)[7] == UNK_001188c7);
    auVar18[8] = -((*param_2)[8] == UNK_001188c8);
    auVar18[9] = -((*param_2)[9] == UNK_001188c9);
    auVar18[10] = -((*param_2)[10] == UNK_001188ca);
    auVar18[0xb] = -((*param_2)[0xb] == UNK_001188cb);
    auVar18[0xc] = -((*param_2)[0xc] == UNK_001188cc);
    auVar18[0xd] = -((*param_2)[0xd] == UNK_001188cd);
    auVar18[0xe] = -((*param_2)[0xe] == UNK_001188ce);
    auVar18[0xf] = -((*param_2)[0xf] == UNK_001188cf);
    auVar36[0] = -((char)*(undefined2 *)param_2[1] == s_ol_00118630[0]);
    auVar36[1] = -((char)((ushort)*(undefined2 *)param_2[1] >> 8) == s_ol_00118630[1]);
    auVar36[2] = -(s_ol_00118630[2] == '\0');
    auVar36[3] = -(s_ol_00118630[3] == '\0');
    auVar36[4] = -(UNK_00118634 == '\0');
    auVar36[5] = -(UNK_00118635 == '\0');
    auVar36[6] = -(UNK_00118636 == '\0');
    auVar36[7] = -(UNK_00118637 == '\0');
    auVar36[8] = -(UNK_00118638 == '\0');
    auVar36[9] = -(UNK_00118639 == '\0');
    auVar36[10] = -(UNK_0011863a == '\0');
    auVar36[0xb] = -(UNK_0011863b == '\0');
    auVar36[0xc] = -(UNK_0011863c == '\0');
    auVar36[0xd] = -(UNK_0011863d == '\0');
    auVar36[0xe] = -(UNK_0011863e == '\0');
    auVar36[0xf] = -(UNK_0011863f == '\0');
    auVar36 = auVar36 & auVar18;
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
      *(undefined1 *)(param_1 + 1) = 10;
      goto LAB_0014b20b;
    }
    auVar19[0] = -((*param_2)[0] == s_max_single_net_a_00118a00[0]);
    auVar19[1] = -((*param_2)[1] == s_max_single_net_a_00118a00[1]);
    auVar19[2] = -((*param_2)[2] == s_max_single_net_a_00118a00[2]);
    auVar19[3] = -((*param_2)[3] == s_max_single_net_a_00118a00[3]);
    auVar19[4] = -((*param_2)[4] == s_max_single_net_a_00118a00[4]);
    auVar19[5] = -((*param_2)[5] == s_max_single_net_a_00118a00[5]);
    auVar19[6] = -((*param_2)[6] == s_max_single_net_a_00118a00[6]);
    auVar19[7] = -((*param_2)[7] == s_max_single_net_a_00118a00[7]);
    auVar19[8] = -((*param_2)[8] == s_max_single_net_a_00118a00[8]);
    auVar19[9] = -((*param_2)[9] == s_max_single_net_a_00118a00[9]);
    auVar19[10] = -((*param_2)[10] == s_max_single_net_a_00118a00[10]);
    auVar19[0xb] = -((*param_2)[0xb] == s_max_single_net_a_00118a00[0xb]);
    auVar19[0xc] = -((*param_2)[0xc] == s_max_single_net_a_00118a00[0xc]);
    auVar19[0xd] = -((*param_2)[0xd] == s_max_single_net_a_00118a00[0xd]);
    auVar19[0xe] = -((*param_2)[0xe] == s_max_single_net_a_00118a00[0xe]);
    auVar19[0xf] = -((*param_2)[0xf] == s_max_single_net_a_00118a00[0xf]);
    auVar37[0] = -((char)*(undefined2 *)param_2[1] == DAT_00118bb0);
    auVar37[1] = -((char)((ushort)*(undefined2 *)param_2[1] >> 8) == UNK_00118bb1);
    auVar37[2] = -(UNK_00118bb2 == '\0');
    auVar37[3] = -(UNK_00118bb3 == '\0');
    auVar37[4] = -(UNK_00118bb4 == '\0');
    auVar37[5] = -(UNK_00118bb5 == '\0');
    auVar37[6] = -(UNK_00118bb6 == '\0');
    auVar37[7] = -(UNK_00118bb7 == '\0');
    auVar37[8] = -(UNK_00118bb8 == '\0');
    auVar37[9] = -(UNK_00118bb9 == '\0');
    auVar37[10] = -(UNK_00118bba == '\0');
    auVar37[0xb] = -(UNK_00118bbb == '\0');
    auVar37[0xc] = -(UNK_00118bbc == '\0');
    auVar37[0xd] = -(UNK_00118bbd == '\0');
    auVar37[0xe] = -(UNK_00118bbe == '\0');
    auVar37[0xf] = -(UNK_00118bbf == '\0');
    auVar37 = auVar37 & auVar19;
    if ((ushort)((ushort)(SUB161(auVar37 >> 7,0) & 1) | (ushort)(SUB161(auVar37 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar37 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar37 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar37 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar37 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar37 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar37 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar37 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar37 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar37 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar37 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar37 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar37 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar37 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar37[0xf] >> 7) << 0xf) == 0xffff) {
      *(undefined1 *)(param_1 + 1) = 0xb;
      goto LAB_0014b20b;
    }
    bVar3 = true;
    bVar7 = false;
    goto LAB_0014aabd;
  case 0x13:
    auVar38[0] = -((*param_2)[3] == s_er_rate_baseline_001186e0[0]);
    auVar38[1] = -((*param_2)[4] == s_er_rate_baseline_001186e0[1]);
    auVar38[2] = -((*param_2)[5] == s_er_rate_baseline_001186e0[2]);
    auVar38[3] = -((*param_2)[6] == s_er_rate_baseline_001186e0[3]);
    auVar38[4] = -((*param_2)[7] == s_er_rate_baseline_001186e0[4]);
    auVar38[5] = -((*param_2)[8] == s_er_rate_baseline_001186e0[5]);
    auVar38[6] = -((*param_2)[9] == s_er_rate_baseline_001186e0[6]);
    auVar38[7] = -((*param_2)[10] == s_er_rate_baseline_001186e0[7]);
    auVar38[8] = -((*param_2)[0xb] == s_er_rate_baseline_001186e0[8]);
    auVar38[9] = -((*param_2)[0xc] == s_er_rate_baseline_001186e0[9]);
    auVar38[10] = -((*param_2)[0xd] == s_er_rate_baseline_001186e0[10]);
    auVar38[0xb] = -((*param_2)[0xe] == s_er_rate_baseline_001186e0[0xb]);
    auVar38[0xc] = -((*param_2)[0xf] == s_er_rate_baseline_001186e0[0xc]);
    auVar38[0xd] = -(param_2[1][0] == s_er_rate_baseline_001186e0[0xd]);
    auVar38[0xe] = -(param_2[1][1] == s_er_rate_baseline_001186e0[0xe]);
    auVar38[0xf] = -(param_2[1][2] == s_er_rate_baseline_001186e0[0xf]);
    auVar20[0] = -((*param_2)[0] == DAT_00118b30);
    auVar20[1] = -((*param_2)[1] == UNK_00118b31);
    auVar20[2] = -((*param_2)[2] == UNK_00118b32);
    auVar20[3] = -((*param_2)[3] == UNK_00118b33);
    auVar20[4] = -((*param_2)[4] == UNK_00118b34);
    auVar20[5] = -((*param_2)[5] == UNK_00118b35);
    auVar20[6] = -((*param_2)[6] == UNK_00118b36);
    auVar20[7] = -((*param_2)[7] == UNK_00118b37);
    auVar20[8] = -((*param_2)[8] == UNK_00118b38);
    auVar20[9] = -((*param_2)[9] == UNK_00118b39);
    auVar20[10] = -((*param_2)[10] == UNK_00118b3a);
    auVar20[0xb] = -((*param_2)[0xb] == UNK_00118b3b);
    auVar20[0xc] = -((*param_2)[0xc] == UNK_00118b3c);
    auVar20[0xd] = -((*param_2)[0xd] == UNK_00118b3d);
    auVar20[0xe] = -((*param_2)[0xe] == UNK_00118b3e);
    auVar20[0xf] = -((*param_2)[0xf] == UNK_00118b3f);
    auVar20 = auVar20 & auVar38;
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
      *(undefined1 *)(param_1 + 1) = 4;
      goto LAB_0014b20b;
    }
    iVar9 = (*(code *)PTR_bcmp_001ef778)(param_2,"long_open_threshold",param_3);
    if (iVar9 == 0) {
      *(undefined1 *)(param_1 + 1) = 0xe;
      goto LAB_0014b20b;
    }
    bVar4 = true;
    bVar7 = false;
    bVar3 = false;
    bVar5 = false;
    bVar6 = false;
    if (param_3 - 0x19U < 0xb) goto LAB_0014aad2;
    goto switchD_0014aae0_caseD_14ad34;
  case 0x14:
    uVar2 = *(undefined4 *)param_2[1];
    auVar27[0] = -((char)uVar2 == DAT_001185e0);
    auVar27[1] = -((char)((uint)uVar2 >> 8) == UNK_001185e1);
    auVar27[2] = -((char)((uint)uVar2 >> 0x10) == UNK_001185e2);
    auVar27[3] = -((char)((uint)uVar2 >> 0x18) == UNK_001185e3);
    auVar27[4] = -(UNK_001185e4 == '\0');
    auVar27[5] = -(UNK_001185e5 == '\0');
    auVar27[6] = -(UNK_001185e6 == '\0');
    auVar27[7] = -(UNK_001185e7 == '\0');
    auVar27[8] = -(UNK_001185e8 == '\0');
    auVar27[9] = -(UNK_001185e9 == '\0');
    auVar27[10] = -(UNK_001185ea == '\0');
    auVar27[0xb] = -(UNK_001185eb == '\0');
    auVar27[0xc] = -(UNK_001185ec == '\0');
    auVar27[0xd] = -(UNK_001185ed == '\0');
    auVar27[0xe] = -(UNK_001185ee == '\0');
    auVar27[0xf] = -(UNK_001185ef == '\0');
    auVar10[0] = -((*param_2)[0] == s_max_single_close_00118770[0]);
    auVar10[1] = -((*param_2)[1] == s_max_single_close_00118770[1]);
    auVar10[2] = -((*param_2)[2] == s_max_single_close_00118770[2]);
    auVar10[3] = -((*param_2)[3] == s_max_single_close_00118770[3]);
    auVar10[4] = -((*param_2)[4] == s_max_single_close_00118770[4]);
    auVar10[5] = -((*param_2)[5] == s_max_single_close_00118770[5]);
    auVar10[6] = -((*param_2)[6] == s_max_single_close_00118770[6]);
    auVar10[7] = -((*param_2)[7] == s_max_single_close_00118770[7]);
    auVar10[8] = -((*param_2)[8] == s_max_single_close_00118770[8]);
    auVar10[9] = -((*param_2)[9] == s_max_single_close_00118770[9]);
    auVar10[10] = -((*param_2)[10] == s_max_single_close_00118770[10]);
    auVar10[0xb] = -((*param_2)[0xb] == s_max_single_close_00118770[0xb]);
    auVar10[0xc] = -((*param_2)[0xc] == s_max_single_close_00118770[0xc]);
    auVar10[0xd] = -((*param_2)[0xd] == s_max_single_close_00118770[0xd]);
    auVar10[0xe] = -((*param_2)[0xe] == s_max_single_close_00118770[0xe]);
    auVar10[0xf] = -((*param_2)[0xf] == s_max_single_close_00118770[0xf]);
    auVar10 = auVar10 & auVar27;
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
      *(undefined1 *)(param_1 + 1) = 0xc;
      goto LAB_0014b20b;
    }
    auVar14 = *param_2;
    uVar2 = *(undefined4 *)param_2[1];
    auVar44[0] = -((char)uVar2 == DAT_00118820);
    auVar44[1] = -((char)((uint)uVar2 >> 8) == UNK_00118821);
    auVar44[2] = -((char)((uint)uVar2 >> 0x10) == UNK_00118822);
    auVar44[3] = -((char)((uint)uVar2 >> 0x18) == UNK_00118823);
    auVar44[4] = -(UNK_00118824 == '\0');
    auVar44[5] = -(UNK_00118825 == '\0');
    auVar44[6] = -(UNK_00118826 == '\0');
    auVar44[7] = -(UNK_00118827 == '\0');
    auVar44[8] = -(UNK_00118828 == '\0');
    auVar44[9] = -(UNK_00118829 == '\0');
    auVar44[10] = -(UNK_0011882a == '\0');
    auVar44[0xb] = -(UNK_0011882b == '\0');
    auVar44[0xc] = -(UNK_0011882c == '\0');
    auVar44[0xd] = -(UNK_0011882d == '\0');
    auVar44[0xe] = -(UNK_0011882e == '\0');
    auVar44[0xf] = -(UNK_0011882f == '\0');
    auVar28[0] = -(auVar14[0] == 'm');
    auVar28[1] = -(auVar14[1] == 'a');
    auVar28[2] = -(auVar14[2] == 'x');
    auVar28[3] = -(auVar14[3] == '_');
    auVar28[4] = -(auVar14[4] == 's');
    auVar28[5] = -(auVar14[5] == 'i');
    auVar28[6] = -(auVar14[6] == 'n');
    auVar28[7] = -(auVar14[7] == 'g');
    auVar28[8] = -(auVar14[8] == 'l');
    auVar28[9] = -(auVar14[9] == 'e');
    auVar28[10] = -(auVar14[10] == '_');
    auVar28[0xb] = -(auVar14[0xb] == 'c');
    auVar28[0xc] = -(auVar14[0xc] == 'l');
    auVar28[0xd] = -(auVar14[0xd] == 'o');
    auVar28[0xe] = -(auVar14[0xe] == 's');
    auVar28[0xf] = -(auVar14[0xf] == 'e');
    auVar44 = auVar44 & auVar28;
    if ((ushort)((ushort)(SUB161(auVar44 >> 7,0) & 1) | (ushort)(SUB161(auVar44 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar44 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar44 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar44 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar44 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar44 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar44 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar44 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar44 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar44 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar44 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar44 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar44 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar44 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar44[0xf] >> 7) << 0xf) == 0xffff) {
      *(undefined1 *)(param_1 + 1) = 0xd;
      goto LAB_0014b20b;
    }
    iVar9 = (*(code *)PTR_bcmp_001ef778)(param_2,"long_close_threshold",param_3);
    if (iVar9 == 0) {
      *(undefined1 *)(param_1 + 1) = 0xf;
      goto LAB_0014b20b;
    }
    iVar9 = (*(code *)PTR_bcmp_001ef778)
                      (param_2,"short_open_thresholdshort_close_threshold",param_3);
    if (iVar9 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x10;
      goto LAB_0014b20b;
    }
    bVar7 = true;
    break;
  case 0x15:
    auVar29[0] = -((*param_2)[5] == DAT_00118830);
    auVar29[1] = -((*param_2)[6] == UNK_00118831);
    auVar29[2] = -((*param_2)[7] == UNK_00118832);
    auVar29[3] = -((*param_2)[8] == UNK_00118833);
    auVar29[4] = -((*param_2)[9] == UNK_00118834);
    auVar29[5] = -((*param_2)[10] == UNK_00118835);
    auVar29[6] = -((*param_2)[0xb] == UNK_00118836);
    auVar29[7] = -((*param_2)[0xc] == UNK_00118837);
    auVar29[8] = -((*param_2)[0xd] == UNK_00118838);
    auVar29[9] = -((*param_2)[0xe] == UNK_00118839);
    auVar29[10] = -((*param_2)[0xf] == UNK_0011883a);
    auVar29[0xb] = -(param_2[1][0] == UNK_0011883b);
    auVar29[0xc] = -(param_2[1][1] == UNK_0011883c);
    auVar29[0xd] = -(param_2[1][2] == UNK_0011883d);
    auVar29[0xe] = -(param_2[1][3] == UNK_0011883e);
    auVar29[0xf] = -(param_2[1][4] == UNK_0011883f);
    auVar11[0] = -((*param_2)[0] == DAT_00118840);
    auVar11[1] = -((*param_2)[1] == UNK_00118841);
    auVar11[2] = -((*param_2)[2] == UNK_00118842);
    auVar11[3] = -((*param_2)[3] == UNK_00118843);
    auVar11[4] = -((*param_2)[4] == UNK_00118844);
    auVar11[5] = -((*param_2)[5] == UNK_00118845);
    auVar11[6] = -((*param_2)[6] == UNK_00118846);
    auVar11[7] = -((*param_2)[7] == UNK_00118847);
    auVar11[8] = -((*param_2)[8] == UNK_00118848);
    auVar11[9] = -((*param_2)[9] == UNK_00118849);
    auVar11[10] = -((*param_2)[10] == UNK_0011884a);
    auVar11[0xb] = -((*param_2)[0xb] == UNK_0011884b);
    auVar11[0xc] = -((*param_2)[0xc] == UNK_0011884c);
    auVar11[0xd] = -((*param_2)[0xd] == UNK_0011884d);
    auVar11[0xe] = -((*param_2)[0xe] == UNK_0011884e);
    auVar11[0xf] = -((*param_2)[0xf] == UNK_0011884f);
    auVar11 = auVar11 & auVar29;
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
      *(undefined1 *)(param_1 + 1) = 0x11;
      goto LAB_0014b20b;
    }
    auVar30[0] = -((*param_2)[5] == DAT_00118690);
    auVar30[1] = -((*param_2)[6] == UNK_00118691);
    auVar30[2] = -((*param_2)[7] == UNK_00118692);
    auVar30[3] = -((*param_2)[8] == UNK_00118693);
    auVar30[4] = -((*param_2)[9] == UNK_00118694);
    auVar30[5] = -((*param_2)[10] == UNK_00118695);
    auVar30[6] = -((*param_2)[0xb] == UNK_00118696);
    auVar30[7] = -((*param_2)[0xc] == UNK_00118697);
    auVar30[8] = -((*param_2)[0xd] == UNK_00118698);
    auVar30[9] = -((*param_2)[0xe] == UNK_00118699);
    auVar30[10] = -((*param_2)[0xf] == UNK_0011869a);
    auVar30[0xb] = -(param_2[1][0] == UNK_0011869b);
    auVar30[0xc] = -(param_2[1][1] == UNK_0011869c);
    auVar30[0xd] = -(param_2[1][2] == UNK_0011869d);
    auVar30[0xe] = -(param_2[1][3] == UNK_0011869e);
    auVar30[0xf] = -(param_2[1][4] == UNK_0011869f);
    auVar12[0] = -((*param_2)[0] == DAT_00118ae0);
    auVar12[1] = -((*param_2)[1] == UNK_00118ae1);
    auVar12[2] = -((*param_2)[2] == UNK_00118ae2);
    auVar12[3] = -((*param_2)[3] == UNK_00118ae3);
    auVar12[4] = -((*param_2)[4] == UNK_00118ae4);
    auVar12[5] = -((*param_2)[5] == UNK_00118ae5);
    auVar12[6] = -((*param_2)[6] == UNK_00118ae6);
    auVar12[7] = -((*param_2)[7] == UNK_00118ae7);
    auVar12[8] = -((*param_2)[8] == UNK_00118ae8);
    auVar12[9] = -((*param_2)[9] == UNK_00118ae9);
    auVar12[10] = -((*param_2)[10] == UNK_00118aea);
    auVar12[0xb] = -((*param_2)[0xb] == UNK_00118aeb);
    auVar12[0xc] = -((*param_2)[0xc] == UNK_00118aec);
    auVar12[0xd] = -((*param_2)[0xd] == UNK_00118aed);
    auVar12[0xe] = -((*param_2)[0xe] == UNK_00118aee);
    auVar12[0xf] = -((*param_2)[0xf] == UNK_00118aef);
    auVar12 = auVar12 & auVar30;
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
      *(undefined1 *)(param_1 + 1) = 0x14;
      goto LAB_0014b20b;
    }
    auVar31[0] = -((*param_2)[5] == DAT_00118b80);
    auVar31[1] = -((*param_2)[6] == UNK_00118b81);
    auVar31[2] = -((*param_2)[7] == UNK_00118b82);
    auVar31[3] = -((*param_2)[8] == UNK_00118b83);
    auVar31[4] = -((*param_2)[9] == UNK_00118b84);
    auVar31[5] = -((*param_2)[10] == UNK_00118b85);
    auVar31[6] = -((*param_2)[0xb] == UNK_00118b86);
    auVar31[7] = -((*param_2)[0xc] == UNK_00118b87);
    auVar31[8] = -((*param_2)[0xd] == UNK_00118b88);
    auVar31[9] = -((*param_2)[0xe] == UNK_00118b89);
    auVar31[10] = -((*param_2)[0xf] == UNK_00118b8a);
    auVar31[0xb] = -(param_2[1][0] == UNK_00118b8b);
    auVar31[0xc] = -(param_2[1][1] == UNK_00118b8c);
    auVar31[0xd] = -(param_2[1][2] == UNK_00118b8d);
    auVar31[0xe] = -(param_2[1][3] == UNK_00118b8e);
    auVar31[0xf] = -(param_2[1][4] == UNK_00118b8f);
    auVar13[0] = -((*param_2)[0] == DAT_00118b20);
    auVar13[1] = -((*param_2)[1] == UNK_00118b21);
    auVar13[2] = -((*param_2)[2] == UNK_00118b22);
    auVar13[3] = -((*param_2)[3] == UNK_00118b23);
    auVar13[4] = -((*param_2)[4] == UNK_00118b24);
    auVar13[5] = -((*param_2)[5] == UNK_00118b25);
    auVar13[6] = -((*param_2)[6] == UNK_00118b26);
    auVar13[7] = -((*param_2)[7] == UNK_00118b27);
    auVar13[8] = -((*param_2)[8] == UNK_00118b28);
    auVar13[9] = -((*param_2)[9] == UNK_00118b29);
    auVar13[10] = -((*param_2)[10] == UNK_00118b2a);
    auVar13[0xb] = -((*param_2)[0xb] == UNK_00118b2b);
    auVar13[0xc] = -((*param_2)[0xc] == UNK_00118b2c);
    auVar13[0xd] = -((*param_2)[0xd] == UNK_00118b2d);
    auVar13[0xe] = -((*param_2)[0xe] == UNK_00118b2e);
    auVar13[0xf] = -((*param_2)[0xf] == UNK_00118b2f);
    auVar13 = auVar13 & auVar31;
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
      goto LAB_0014b20b;
    }
    bVar8 = true;
    bVar7 = false;
    bVar3 = false;
    bVar4 = false;
    bVar6 = false;
    bVar5 = false;
    goto LAB_0014add1;
  case 0x17:
    auVar32[0] = -((*param_2)[7] == DAT_00118a40);
    auVar32[1] = -((*param_2)[8] == UNK_00118a41);
    auVar32[2] = -((*param_2)[9] == UNK_00118a42);
    auVar32[3] = -((*param_2)[10] == UNK_00118a43);
    auVar32[4] = -((*param_2)[0xb] == UNK_00118a44);
    auVar32[5] = -((*param_2)[0xc] == UNK_00118a45);
    auVar32[6] = -((*param_2)[0xd] == UNK_00118a46);
    auVar32[7] = -((*param_2)[0xe] == UNK_00118a47);
    auVar32[8] = -((*param_2)[0xf] == UNK_00118a48);
    auVar32[9] = -(param_2[1][0] == UNK_00118a49);
    auVar32[10] = -(param_2[1][1] == UNK_00118a4a);
    auVar32[0xb] = -(param_2[1][2] == UNK_00118a4b);
    auVar32[0xc] = -(param_2[1][3] == UNK_00118a4c);
    auVar32[0xd] = -(param_2[1][4] == UNK_00118a4d);
    auVar32[0xe] = -(param_2[1][5] == UNK_00118a4e);
    auVar32[0xf] = -(param_2[1][6] == UNK_00118a4f);
    auVar14[0] = -((*param_2)[0] == s_close_position_b_001186d0[0]);
    auVar14[1] = -((*param_2)[1] == s_close_position_b_001186d0[1]);
    auVar14[2] = -((*param_2)[2] == s_close_position_b_001186d0[2]);
    auVar14[3] = -((*param_2)[3] == s_close_position_b_001186d0[3]);
    auVar14[4] = -((*param_2)[4] == s_close_position_b_001186d0[4]);
    auVar14[5] = -((*param_2)[5] == s_close_position_b_001186d0[5]);
    auVar14[6] = -((*param_2)[6] == s_close_position_b_001186d0[6]);
    auVar14[7] = -((*param_2)[7] == s_close_position_b_001186d0[7]);
    auVar14[8] = -((*param_2)[8] == s_close_position_b_001186d0[8]);
    auVar14[9] = -((*param_2)[9] == s_close_position_b_001186d0[9]);
    auVar14[10] = -((*param_2)[10] == s_close_position_b_001186d0[10]);
    auVar14[0xb] = -((*param_2)[0xb] == s_close_position_b_001186d0[0xb]);
    auVar14[0xc] = -((*param_2)[0xc] == s_close_position_b_001186d0[0xc]);
    auVar14[0xd] = -((*param_2)[0xd] == s_close_position_b_001186d0[0xd]);
    auVar14[0xe] = -((*param_2)[0xe] == s_close_position_b_001186d0[0xe]);
    auVar14[0xf] = -((*param_2)[0xf] == s_close_position_b_001186d0[0xf]);
    auVar14 = auVar14 & auVar32;
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
      *(undefined1 *)(param_1 + 1) = 7;
      goto LAB_0014b20b;
    }
    bVar5 = true;
    bVar7 = false;
    bVar3 = false;
    goto switchD_0014a85f_caseD_c;
  }
  bVar3 = false;
LAB_0014aabd:
  bVar5 = false;
switchD_0014a85f_caseD_c:
  bVar6 = false;
joined_r0x0014a992:
  bVar4 = false;
  if (10 < param_3 - 0x19U) goto switchD_0014aae0_caseD_14ad34;
LAB_0014aad2:
  switch((long)&switchD_0014aae0::switchdataD_00118c7c +
         (long)(int)(&switchD_0014aae0::switchdataD_00118c7c)[param_3 + -0x19]) {
  case 0x14aae2:
    auVar33[0] = -((*param_2)[9] == s__pending_time_ms_00118910[0]);
    auVar33[1] = -((*param_2)[10] == s__pending_time_ms_00118910[1]);
    auVar33[2] = -((*param_2)[0xb] == s__pending_time_ms_00118910[2]);
    auVar33[3] = -((*param_2)[0xc] == s__pending_time_ms_00118910[3]);
    auVar33[4] = -((*param_2)[0xd] == s__pending_time_ms_00118910[4]);
    auVar33[5] = -((*param_2)[0xe] == s__pending_time_ms_00118910[5]);
    auVar33[6] = -((*param_2)[0xf] == s__pending_time_ms_00118910[6]);
    auVar33[7] = -(param_2[1][0] == s__pending_time_ms_00118910[7]);
    auVar33[8] = -(param_2[1][1] == s__pending_time_ms_00118910[8]);
    auVar33[9] = -(param_2[1][2] == s__pending_time_ms_00118910[9]);
    auVar33[10] = -(param_2[1][3] == s__pending_time_ms_00118910[10]);
    auVar33[0xb] = -(param_2[1][4] == s__pending_time_ms_00118910[0xb]);
    auVar33[0xc] = -(param_2[1][5] == s__pending_time_ms_00118910[0xc]);
    auVar33[0xd] = -(param_2[1][6] == s__pending_time_ms_00118910[0xd]);
    auVar33[0xe] = -(param_2[1][7] == s__pending_time_ms_00118910[0xe]);
    auVar33[0xf] = -(param_2[1][8] == s__pending_time_ms_00118910[0xf]);
    auVar15[0] = -((*param_2)[0] == DAT_00118640);
    auVar15[1] = -((*param_2)[1] == UNK_00118641);
    auVar15[2] = -((*param_2)[2] == UNK_00118642);
    auVar15[3] = -((*param_2)[3] == UNK_00118643);
    auVar15[4] = -((*param_2)[4] == UNK_00118644);
    auVar15[5] = -((*param_2)[5] == UNK_00118645);
    auVar15[6] = -((*param_2)[6] == UNK_00118646);
    auVar15[7] = -((*param_2)[7] == UNK_00118647);
    auVar15[8] = -((*param_2)[8] == UNK_00118648);
    auVar15[9] = -((*param_2)[9] == UNK_00118649);
    auVar15[10] = -((*param_2)[10] == UNK_0011864a);
    auVar15[0xb] = -((*param_2)[0xb] == UNK_0011864b);
    auVar15[0xc] = -((*param_2)[0xc] == UNK_0011864c);
    auVar15[0xd] = -((*param_2)[0xd] == UNK_0011864d);
    auVar15[0xe] = -((*param_2)[0xe] == UNK_0011864e);
    auVar15[0xf] = -((*param_2)[0xf] == UNK_0011864f);
    auVar15 = auVar15 & auVar33;
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
      *(undefined1 *)(param_1 + 1) = 0x18;
      goto LAB_0014b20b;
    }
    break;
  case 0x14ac5a:
    iVar9 = (*(code *)PTR_bcmp_001ef778)
                      (param_2,"max_maker_limit_rate_bias_from_midmaker_signal_abtype_u",param_3);
    if (iVar9 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x1a;
      goto LAB_0014b20b;
    }
    goto LAB_0014ad98;
  case 0x14ac85:
    auVar39[0] = -((*param_2)[0xb] == s_ax_position_ts_s_001185b0[0]);
    auVar39[1] = -((*param_2)[0xc] == s_ax_position_ts_s_001185b0[1]);
    auVar39[2] = -((*param_2)[0xd] == s_ax_position_ts_s_001185b0[2]);
    auVar39[3] = -((*param_2)[0xe] == s_ax_position_ts_s_001185b0[3]);
    auVar39[4] = -((*param_2)[0xf] == s_ax_position_ts_s_001185b0[4]);
    auVar39[5] = -(param_2[1][0] == s_ax_position_ts_s_001185b0[5]);
    auVar39[6] = -(param_2[1][1] == s_ax_position_ts_s_001185b0[6]);
    auVar39[7] = -(param_2[1][2] == s_ax_position_ts_s_001185b0[7]);
    auVar39[8] = -(param_2[1][3] == s_ax_position_ts_s_001185b0[8]);
    auVar39[9] = -(param_2[1][4] == s_ax_position_ts_s_001185b0[9]);
    auVar39[10] = -(param_2[1][5] == s_ax_position_ts_s_001185b0[10]);
    auVar39[0xb] = -(param_2[1][6] == s_ax_position_ts_s_001185b0[0xb]);
    auVar39[0xc] = -(param_2[1][7] == s_ax_position_ts_s_001185b0[0xc]);
    auVar39[0xd] = -(param_2[1][8] == s_ax_position_ts_s_001185b0[0xd]);
    auVar39[0xe] = -(param_2[1][9] == s_ax_position_ts_s_001185b0[0xe]);
    auVar39[0xf] = -(param_2[1][10] == s_ax_position_ts_s_001185b0[0xf]);
    auVar21[0] = -((*param_2)[0] == DAT_00118880);
    auVar21[1] = -((*param_2)[1] == UNK_00118881);
    auVar21[2] = -((*param_2)[2] == UNK_00118882);
    auVar21[3] = -((*param_2)[3] == UNK_00118883);
    auVar21[4] = -((*param_2)[4] == UNK_00118884);
    auVar21[5] = -((*param_2)[5] == UNK_00118885);
    auVar21[6] = -((*param_2)[6] == UNK_00118886);
    auVar21[7] = -((*param_2)[7] == UNK_00118887);
    auVar21[8] = -((*param_2)[8] == UNK_00118888);
    auVar21[9] = -((*param_2)[9] == UNK_00118889);
    auVar21[10] = -((*param_2)[10] == UNK_0011888a);
    auVar21[0xb] = -((*param_2)[0xb] == UNK_0011888b);
    auVar21[0xc] = -((*param_2)[0xc] == UNK_0011888c);
    auVar21[0xd] = -((*param_2)[0xd] == UNK_0011888d);
    auVar21[0xe] = -((*param_2)[0xe] == UNK_0011888e);
    auVar21[0xf] = -((*param_2)[0xf] == UNK_0011888f);
    auVar21 = auVar21 & auVar39;
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
      *(undefined1 *)(param_1 + 1) = 0x13;
      goto LAB_0014b20b;
    }
    break;
  case 0x14acbc:
    iVar9 = (*(code *)PTR_bcmp_001ef778)
                      (param_2,"dyn_pending_position_ts_threshold_sdyn_pending_max_position_ts_s",
                       0x23);
    if (iVar9 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x15;
      goto LAB_0014b20b;
    }
    iVar9 = (*(code *)PTR_bcmp_001ef778)
                      (param_2,"dyn_pending_delta_max_pending_ts_msorder_max_pending_time_ms",0x23);
    if (iVar9 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x17;
      goto LAB_0014b20b;
    }
LAB_0014ad98:
    bVar8 = false;
    if (bVar6) goto LAB_0014adb3;
    goto LAB_0014add1;
  case 0x14ad06:
    auVar40[0] = -((*param_2)[0xd] == s_ax_position_ts_s_001185b0[0]);
    auVar40[1] = -((*param_2)[0xe] == s_ax_position_ts_s_001185b0[1]);
    auVar40[2] = -((*param_2)[0xf] == s_ax_position_ts_s_001185b0[2]);
    auVar40[3] = -(param_2[1][0] == s_ax_position_ts_s_001185b0[3]);
    auVar40[4] = -(param_2[1][1] == s_ax_position_ts_s_001185b0[4]);
    auVar40[5] = -(param_2[1][2] == s_ax_position_ts_s_001185b0[5]);
    auVar40[6] = -(param_2[1][3] == s_ax_position_ts_s_001185b0[6]);
    auVar40[7] = -(param_2[1][4] == s_ax_position_ts_s_001185b0[7]);
    auVar40[8] = -(param_2[1][5] == s_ax_position_ts_s_001185b0[8]);
    auVar40[9] = -(param_2[1][6] == s_ax_position_ts_s_001185b0[9]);
    auVar40[10] = -(param_2[1][7] == s_ax_position_ts_s_001185b0[10]);
    auVar40[0xb] = -(param_2[1][8] == s_ax_position_ts_s_001185b0[0xb]);
    auVar40[0xc] = -(param_2[1][9] == s_ax_position_ts_s_001185b0[0xc]);
    auVar40[0xd] = -(param_2[1][10] == s_ax_position_ts_s_001185b0[0xd]);
    auVar40[0xe] = -(param_2[1][0xb] == s_ax_position_ts_s_001185b0[0xe]);
    auVar40[0xf] = -(param_2[1][0xc] == s_ax_position_ts_s_001185b0[0xf]);
    auVar22[0] = -((*param_2)[0] == s_dyn_pending_max__00118bc0[0]);
    auVar22[1] = -((*param_2)[1] == s_dyn_pending_max__00118bc0[1]);
    auVar22[2] = -((*param_2)[2] == s_dyn_pending_max__00118bc0[2]);
    auVar22[3] = -((*param_2)[3] == s_dyn_pending_max__00118bc0[3]);
    auVar22[4] = -((*param_2)[4] == s_dyn_pending_max__00118bc0[4]);
    auVar22[5] = -((*param_2)[5] == s_dyn_pending_max__00118bc0[5]);
    auVar22[6] = -((*param_2)[6] == s_dyn_pending_max__00118bc0[6]);
    auVar22[7] = -((*param_2)[7] == s_dyn_pending_max__00118bc0[7]);
    auVar22[8] = -((*param_2)[8] == s_dyn_pending_max__00118bc0[8]);
    auVar22[9] = -((*param_2)[9] == s_dyn_pending_max__00118bc0[9]);
    auVar22[10] = -((*param_2)[10] == s_dyn_pending_max__00118bc0[10]);
    auVar22[0xb] = -((*param_2)[0xb] == s_dyn_pending_max__00118bc0[0xb]);
    auVar22[0xc] = -((*param_2)[0xc] == s_dyn_pending_max__00118bc0[0xc]);
    auVar22[0xd] = -((*param_2)[0xd] == s_dyn_pending_max__00118bc0[0xd]);
    auVar22[0xe] = -((*param_2)[0xe] == s_dyn_pending_max__00118bc0[0xe]);
    auVar22[0xf] = -((*param_2)[0xf] == s_dyn_pending_max__00118bc0[0xf]);
    auVar22 = auVar22 & auVar40;
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
      *(undefined1 *)(param_1 + 1) = 0x16;
      goto LAB_0014b20b;
    }
    break;
  case 0x14ad4d:
    iVar9 = (*(code *)PTR_bcmp_001ef778)(param_2,"max_maker_pending_vol_on_depth",param_3);
    if (iVar9 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x19;
      goto LAB_0014b20b;
    }
    goto LAB_0014ad98;
  case 0x14ad74:
    iVar9 = (*(code *)PTR_bcmp_001ef778)
                      (param_2,
                       "dyn_score_position_ts_threshold_sdyn_score_max_position_ts_sdyn_score_delta_score"
                       ,0x21);
    if (iVar9 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x12;
      goto LAB_0014b20b;
    }
    goto LAB_0014ad98;
  }
switchD_0014aae0_caseD_14ad34:
  bVar8 = false;
  if (bVar6) {
LAB_0014adb3:
    bVar8 = false;
    iVar9 = (*(code *)PTR_bcmp_001ef778)(param_2,"signal_all",param_3);
    if (iVar9 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x1c;
      goto LAB_0014b20b;
    }
  }
LAB_0014add1:
  if ((bVar7) &&
     (iVar9 = (*(code *)PTR_bcmp_001ef778)
                        (param_2,"gate_taker_veto_modegate_taker_veto_scope",param_3), iVar9 == 0))
  {
    *(undefined1 *)(param_1 + 1) = 0x1d;
  }
  else if ((bVar8) &&
          (auVar41[0] = -((*param_2)[5] == DAT_00118b40),
          auVar41[1] = -((*param_2)[6] == UNK_00118b41),
          auVar41[2] = -((*param_2)[7] == UNK_00118b42),
          auVar41[3] = -((*param_2)[8] == UNK_00118b43),
          auVar41[4] = -((*param_2)[9] == UNK_00118b44),
          auVar41[5] = -((*param_2)[10] == UNK_00118b45),
          auVar41[6] = -((*param_2)[0xb] == UNK_00118b46),
          auVar41[7] = -((*param_2)[0xc] == UNK_00118b47),
          auVar41[8] = -((*param_2)[0xd] == UNK_00118b48),
          auVar41[9] = -((*param_2)[0xe] == UNK_00118b49),
          auVar41[10] = -((*param_2)[0xf] == UNK_00118b4a),
          auVar41[0xb] = -(param_2[1][0] == UNK_00118b4b),
          auVar41[0xc] = -(param_2[1][1] == UNK_00118b4c),
          auVar41[0xd] = -(param_2[1][2] == UNK_00118b4d),
          auVar41[0xe] = -(param_2[1][3] == UNK_00118b4e),
          auVar41[0xf] = -(param_2[1][4] == UNK_00118b4f),
          auVar23[0] = -((*param_2)[0] == DAT_00118b90),
          auVar23[1] = -((*param_2)[1] == UNK_00118b91),
          auVar23[2] = -((*param_2)[2] == UNK_00118b92),
          auVar23[3] = -((*param_2)[3] == UNK_00118b93),
          auVar23[4] = -((*param_2)[4] == UNK_00118b94),
          auVar23[5] = -((*param_2)[5] == UNK_00118b95),
          auVar23[6] = -((*param_2)[6] == UNK_00118b96),
          auVar23[7] = -((*param_2)[7] == UNK_00118b97),
          auVar23[8] = -((*param_2)[8] == UNK_00118b98),
          auVar23[9] = -((*param_2)[9] == UNK_00118b99),
          auVar23[10] = -((*param_2)[10] == UNK_00118b9a),
          auVar23[0xb] = -((*param_2)[0xb] == UNK_00118b9b),
          auVar23[0xc] = -((*param_2)[0xc] == UNK_00118b9c),
          auVar23[0xd] = -((*param_2)[0xd] == UNK_00118b9d),
          auVar23[0xe] = -((*param_2)[0xe] == UNK_00118b9e),
          auVar23[0xf] = -((*param_2)[0xf] == UNK_00118b9f), auVar23 = auVar23 & auVar41,
          (ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
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
                  (ushort)(byte)(auVar23[0xf] >> 7) << 0xf) == 0xffff)) {
    *(undefined1 *)(param_1 + 1) = 0x1e;
  }
  else if ((bVar3) &&
          (iVar9 = (*(code *)PTR_bcmp_001ef778)(param_2,"gate_taker_veto_th",param_3), iVar9 == 0))
  {
    *(undefined1 *)(param_1 + 1) = 0x1f;
  }
  else {
    if (bVar4) {
      iVar9 = (*(code *)PTR_bcmp_001ef778)(param_2,"gate_taker_boost_bpgate_maker_mode",param_3);
      if (iVar9 == 0) {
        *(undefined1 *)(param_1 + 1) = 0x20;
        goto LAB_0014b20b;
      }
      iVar9 = (*(code *)PTR_bcmp_001ef778)(param_2,"gate_taker_boost_th",param_3);
      if (iVar9 == 0) {
        *(undefined1 *)(param_1 + 1) = 0x21;
        goto LAB_0014b20b;
      }
    }
    if (param_3 == 0x10) {
      auVar24[0] = -((*param_2)[0] == s_gate_maker_scope_001186f0[0]);
      auVar24[1] = -((*param_2)[1] == s_gate_maker_scope_001186f0[1]);
      auVar24[2] = -((*param_2)[2] == s_gate_maker_scope_001186f0[2]);
      auVar24[3] = -((*param_2)[3] == s_gate_maker_scope_001186f0[3]);
      auVar24[4] = -((*param_2)[4] == s_gate_maker_scope_001186f0[4]);
      auVar24[5] = -((*param_2)[5] == s_gate_maker_scope_001186f0[5]);
      auVar24[6] = -((*param_2)[6] == s_gate_maker_scope_001186f0[6]);
      auVar24[7] = -((*param_2)[7] == s_gate_maker_scope_001186f0[7]);
      auVar24[8] = -((*param_2)[8] == s_gate_maker_scope_001186f0[8]);
      auVar24[9] = -((*param_2)[9] == s_gate_maker_scope_001186f0[9]);
      auVar24[10] = -((*param_2)[10] == s_gate_maker_scope_001186f0[10]);
      auVar24[0xb] = -((*param_2)[0xb] == s_gate_maker_scope_001186f0[0xb]);
      auVar24[0xc] = -((*param_2)[0xc] == s_gate_maker_scope_001186f0[0xc]);
      auVar24[0xd] = -((*param_2)[0xd] == s_gate_maker_scope_001186f0[0xd]);
      auVar24[0xe] = -((*param_2)[0xe] == s_gate_maker_scope_001186f0[0xe]);
      auVar24[0xf] = -((*param_2)[0xf] == s_gate_maker_scope_001186f0[0xf]);
      bVar4 = true;
      if ((ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
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
                  (ushort)(auVar24[0xf] >> 7) << 0xf) == 0xffff) {
        *(undefined1 *)(param_1 + 1) = 0x23;
        goto LAB_0014b20b;
      }
    }
    else {
      if ((param_3 == 0xf) &&
         (*(long *)(*param_2 + 7) == 0x65646f6d5f72656b && *(long *)*param_2 == 0x6b616d5f65746167))
      {
        *(undefined1 *)(param_1 + 1) = 0x22;
        goto LAB_0014b20b;
      }
      bVar4 = false;
    }
    if ((bVar5) &&
       (iVar9 = (*(code *)PTR_bcmp_001ef778)(param_2,"gate_maker_deepen_ticks",param_3), iVar9 == 0)
       ) {
      *(undefined1 *)(param_1 + 1) = 0x24;
    }
    else if ((bVar3) &&
            (iVar9 = (*(code *)PTR_bcmp_001ef778)(param_2,"gate_maker_veto_th",param_3), iVar9 == 0)
            ) {
      *(undefined1 *)(param_1 + 1) = 0x25;
    }
    else if ((bVar4) &&
            (iVar9 = (*(code *)PTR_bcmp_001ef778)(param_2,"gate_cancel_mode",param_3), iVar9 == 0))
    {
      *(undefined1 *)(param_1 + 1) = 0x26;
    }
    else if ((param_3 == 0xe) &&
            (*(long *)(*param_2 + 6) == 0x68745f6c65636e61 &&
             *(long *)*param_2 == 0x6e61635f65746167)) {
      *(undefined1 *)(param_1 + 1) = 0x27;
    }
    else {
      if (bVar5) {
        iVar9 = (*(code *)PTR_bcmp_001ef778)(param_2,"gate_cancel_min_rest_ms",param_3);
        if (iVar9 == 0) {
          *(undefined1 *)(param_1 + 1) = 0x28;
          goto LAB_0014b20b;
        }
        iVar9 = (*(code *)PTR_bcmp_001ef778)
                          (param_2,"gate_b_reuse_max_age_msgate_wait_modegate_a_wait_b_timeout_ms",
                           param_3);
        if (iVar9 == 0) {
          *(undefined1 *)(param_1 + 1) = 0x29;
          goto LAB_0014b20b;
        }
      }
      if (param_3 == 0xe) {
        if (*(long *)(*param_2 + 6) == 0x65646f6d5f746961 && *(long *)*param_2 == 0x6961775f65746167
           ) {
          *(undefined1 *)(param_1 + 1) = 0x2a;
          goto LAB_0014b20b;
        }
      }
      else if (param_3 == 0x18) {
        uVar1 = *(undefined8 *)param_2[1];
        auVar42[0] = -((char)uVar1 == s_meout_ms_00118bd0[0]);
        auVar42[1] = -((char)((ulong)uVar1 >> 8) == s_meout_ms_00118bd0[1]);
        auVar42[2] = -((char)((ulong)uVar1 >> 0x10) == s_meout_ms_00118bd0[2]);
        auVar42[3] = -((char)((ulong)uVar1 >> 0x18) == s_meout_ms_00118bd0[3]);
        auVar42[4] = -((char)((ulong)uVar1 >> 0x20) == s_meout_ms_00118bd0[4]);
        auVar42[5] = -((char)((ulong)uVar1 >> 0x28) == s_meout_ms_00118bd0[5]);
        auVar42[6] = -((char)((ulong)uVar1 >> 0x30) == s_meout_ms_00118bd0[6]);
        auVar42[7] = -((char)((ulong)uVar1 >> 0x38) == s_meout_ms_00118bd0[7]);
        auVar42[8] = -(s_meout_ms_00118bd0[8] == '\0');
        auVar42[9] = -(s_meout_ms_00118bd0[9] == '\0');
        auVar42[10] = -(s_meout_ms_00118bd0[10] == '\0');
        auVar42[0xb] = -(s_meout_ms_00118bd0[0xb] == '\0');
        auVar42[0xc] = -(UNK_00118bdc == '\0');
        auVar42[0xd] = -(UNK_00118bdd == '\0');
        auVar42[0xe] = -(UNK_00118bde == '\0');
        auVar42[0xf] = -(UNK_00118bdf == '\0');
        auVar25[0] = -((*param_2)[0] == s_gate_a_wait_b_ti_00118920[0]);
        auVar25[1] = -((*param_2)[1] == s_gate_a_wait_b_ti_00118920[1]);
        auVar25[2] = -((*param_2)[2] == s_gate_a_wait_b_ti_00118920[2]);
        auVar25[3] = -((*param_2)[3] == s_gate_a_wait_b_ti_00118920[3]);
        auVar25[4] = -((*param_2)[4] == s_gate_a_wait_b_ti_00118920[4]);
        auVar25[5] = -((*param_2)[5] == s_gate_a_wait_b_ti_00118920[5]);
        auVar25[6] = -((*param_2)[6] == s_gate_a_wait_b_ti_00118920[6]);
        auVar25[7] = -((*param_2)[7] == s_gate_a_wait_b_ti_00118920[7]);
        auVar25[8] = -((*param_2)[8] == s_gate_a_wait_b_ti_00118920[8]);
        auVar25[9] = -((*param_2)[9] == s_gate_a_wait_b_ti_00118920[9]);
        auVar25[10] = -((*param_2)[10] == s_gate_a_wait_b_ti_00118920[10]);
        auVar25[0xb] = -((*param_2)[0xb] == s_gate_a_wait_b_ti_00118920[0xb]);
        auVar25[0xc] = -((*param_2)[0xc] == s_gate_a_wait_b_ti_00118920[0xc]);
        auVar25[0xd] = -((*param_2)[0xd] == s_gate_a_wait_b_ti_00118920[0xd]);
        auVar25[0xe] = -((*param_2)[0xe] == s_gate_a_wait_b_ti_00118920[0xe]);
        auVar25[0xf] = -((*param_2)[0xf] == s_gate_a_wait_b_ti_00118920[0xf]);
        auVar25 = auVar25 & auVar42;
        if ((ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
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
          *(undefined1 *)(param_1 + 1) = 0x2b;
          goto LAB_0014b20b;
        }
      }
      if ((bVar6) &&
         (iVar9 = (*(code *)PTR_bcmp_001ef778)
                            (param_2,"touch_gatetouch_gate_timeout_msbook_vol_cap",param_3),
         iVar9 == 0)) {
        *(undefined1 *)(param_1 + 1) = 0x2c;
      }
      else {
        if (bVar8) {
          auVar43[0] = -((*param_2)[5] == DAT_00118970);
          auVar43[1] = -((*param_2)[6] == UNK_00118971);
          auVar43[2] = -((*param_2)[7] == UNK_00118972);
          auVar43[3] = -((*param_2)[8] == UNK_00118973);
          auVar43[4] = -((*param_2)[9] == UNK_00118974);
          auVar43[5] = -((*param_2)[10] == UNK_00118975);
          auVar43[6] = -((*param_2)[0xb] == UNK_00118976);
          auVar43[7] = -((*param_2)[0xc] == UNK_00118977);
          auVar43[8] = -((*param_2)[0xd] == UNK_00118978);
          auVar43[9] = -((*param_2)[0xe] == UNK_00118979);
          auVar43[10] = -((*param_2)[0xf] == UNK_0011897a);
          auVar43[0xb] = -(param_2[1][0] == UNK_0011897b);
          auVar43[0xc] = -(param_2[1][1] == UNK_0011897c);
          auVar43[0xd] = -(param_2[1][2] == UNK_0011897d);
          auVar43[0xe] = -(param_2[1][3] == UNK_0011897e);
          auVar43[0xf] = -(param_2[1][4] == UNK_0011897f);
          auVar26[0] = -((*param_2)[0] == DAT_001186a0);
          auVar26[1] = -((*param_2)[1] == UNK_001186a1);
          auVar26[2] = -((*param_2)[2] == UNK_001186a2);
          auVar26[3] = -((*param_2)[3] == UNK_001186a3);
          auVar26[4] = -((*param_2)[4] == UNK_001186a4);
          auVar26[5] = -((*param_2)[5] == UNK_001186a5);
          auVar26[6] = -((*param_2)[6] == UNK_001186a6);
          auVar26[7] = -((*param_2)[7] == UNK_001186a7);
          auVar26[8] = -((*param_2)[8] == UNK_001186a8);
          auVar26[9] = -((*param_2)[9] == UNK_001186a9);
          auVar26[10] = -((*param_2)[10] == UNK_001186aa);
          auVar26[0xb] = -((*param_2)[0xb] == UNK_001186ab);
          auVar26[0xc] = -((*param_2)[0xc] == UNK_001186ac);
          auVar26[0xd] = -((*param_2)[0xd] == UNK_001186ad);
          auVar26[0xe] = -((*param_2)[0xe] == UNK_001186ae);
          auVar26[0xf] = -((*param_2)[0xf] == UNK_001186af);
          auVar26 = auVar26 & auVar43;
          if ((ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
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
            *(undefined1 *)(param_1 + 1) = 0x2d;
            goto LAB_0014b20b;
          }
        }
        else if ((param_3 == 0xc) &&
                (*(int *)(*param_2 + 8) == 0x7061635f && *(long *)*param_2 == 0x6c6f765f6b6f6f62)) {
          *(undefined1 *)(param_1 + 1) = 0x2e;
          goto LAB_0014b20b;
        }
        if (bVar7) {
          iVar9 = (*(code *)PTR_bcmp_001ef778)(param_2,"max_single_taker_vol",param_3);
          if (iVar9 == 0) {
            *(undefined1 *)(param_1 + 1) = 0x2f;
          }
          else {
            *(undefined1 *)(param_1 + 1) = 0x30;
          }
        }
        else {
          *(undefined1 *)(param_1 + 1) = 0x30;
        }
      }
    }
  }
LAB_0014b20b:
  *param_1 = 2;
  return param_1;
}


