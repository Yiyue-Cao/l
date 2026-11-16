// ELF address 0x00000000000441e0; <strategy_tm5::_::<impl serde_core::de::Deserialize for strategy_tm5::TM5Params>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_str

/* _<strategy_tm5::_::<impl serde_core::de::Deserialize for
   strategy_tm5::TM5Params>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_str */

undefined8 * __rustcall
_<strategy_tm5::_::<impl_serde_core::de::Deserialize_for_strategy_tm5::TM5Params>::deserialize::__FieldVisitor_as_serde_core::de::Visitor>
::visit_str(undefined8 *param_1,undefined1 (*param_2) [16],long param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  int iVar3;
  undefined8 *puVar4;
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
  case 8:
    if (*(long *)*param_2 == 0x656c69746e617571) {
      *(undefined1 *)(param_1 + 1) = 5;
      goto LAB_001446cd;
    }
    break;
  case 9:
    if ((*param_2)[8] == 'a' && *(long *)*param_2 == 0x68706c615f317670) {
      *(undefined1 *)(param_1 + 1) = 1;
      goto LAB_001446cd;
    }
    if ((*param_2)[8] == 'e' && *(long *)*param_2 == 0x7461725f65746f76) {
      *(undefined1 *)(param_1 + 1) = 4;
      goto LAB_001446cd;
    }
    break;
  case 10:
    if (*(short *)(*param_2 + 8) == 0x6168 && *(long *)*param_2 == 0x706c615f74736f63) {
      *(undefined1 *)(param_1 + 1) = 2;
      goto LAB_001446cd;
    }
    break;
  case 0xb:
    if (*(long *)(*param_2 + 3) == 0x65646f6d5f6c616e && *(long *)*param_2 == 0x6d5f6c616e676973) {
      *(undefined1 *)(param_1 + 1) = 0;
      goto LAB_001446cd;
    }
    break;
  case 0xe:
    if (*(long *)(*param_2 + 6) == 0x657461725f72656b && *(long *)*param_2 == 0x656b61745f78616d) {
      *(undefined1 *)(param_1 + 1) = 9;
      goto LAB_001446cd;
    }
    if (*(long *)(*param_2 + 6) == 0x7972657070696c73 && *(long *)*param_2 == 0x6c735f6564617274) {
      *(undefined1 *)(param_1 + 1) = 10;
      goto LAB_001446cd;
    }
    break;
  case 0x10:
    auVar6[0] = -((*param_2)[0] == DAT_00116720);
    auVar6[1] = -((*param_2)[1] == UNK_00116721);
    auVar6[2] = -((*param_2)[2] == UNK_00116722);
    auVar6[3] = -((*param_2)[3] == UNK_00116723);
    auVar6[4] = -((*param_2)[4] == UNK_00116724);
    auVar6[5] = -((*param_2)[5] == UNK_00116725);
    auVar6[6] = -((*param_2)[6] == UNK_00116726);
    auVar6[7] = -((*param_2)[7] == UNK_00116727);
    auVar6[8] = -((*param_2)[8] == UNK_00116728);
    auVar6[9] = -((*param_2)[9] == UNK_00116729);
    auVar6[10] = -((*param_2)[10] == UNK_0011672a);
    auVar6[0xb] = -((*param_2)[0xb] == UNK_0011672b);
    auVar6[0xc] = -((*param_2)[0xc] == UNK_0011672c);
    auVar6[0xd] = -((*param_2)[0xd] == UNK_0011672d);
    auVar6[0xe] = -((*param_2)[0xe] == UNK_0011672e);
    auVar6[0xf] = -((*param_2)[0xf] == UNK_0011672f);
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
                 (ushort)(SUB161(auVar6 >> 0x77,0) & 1) << 0xe | (ushort)(auVar6[0xf] >> 7) << 0xf)
        == 0xffff) {
      *(undefined1 *)(param_1 + 1) = 6;
      goto LAB_001446cd;
    }
    break;
  case 0x12:
    auVar7[0] = -((*param_2)[0] == DAT_001167e0);
    auVar7[1] = -((*param_2)[1] == UNK_001167e1);
    auVar7[2] = -((*param_2)[2] == UNK_001167e2);
    auVar7[3] = -((*param_2)[3] == UNK_001167e3);
    auVar7[4] = -((*param_2)[4] == UNK_001167e4);
    auVar7[5] = -((*param_2)[5] == UNK_001167e5);
    auVar7[6] = -((*param_2)[6] == UNK_001167e6);
    auVar7[7] = -((*param_2)[7] == UNK_001167e7);
    auVar7[8] = -((*param_2)[8] == UNK_001167e8);
    auVar7[9] = -((*param_2)[9] == UNK_001167e9);
    auVar7[10] = -((*param_2)[10] == UNK_001167ea);
    auVar7[0xb] = -((*param_2)[0xb] == UNK_001167eb);
    auVar7[0xc] = -((*param_2)[0xc] == UNK_001167ec);
    auVar7[0xd] = -((*param_2)[0xd] == UNK_001167ed);
    auVar7[0xe] = -((*param_2)[0xe] == UNK_001167ee);
    auVar7[0xf] = -((*param_2)[0xf] == UNK_001167ef);
    auVar15[0] = -((char)*(undefined2 *)param_2[1] == s_ol_001164d0[0]);
    auVar15[1] = -((char)((ushort)*(undefined2 *)param_2[1] >> 8) == s_ol_001164d0[1]);
    auVar15[2] = -(s_ol_001164d0[2] == '\0');
    auVar15[3] = -(s_ol_001164d0[3] == '\0');
    auVar15[4] = -(UNK_001164d4 == '\0');
    auVar15[5] = -(UNK_001164d5 == '\0');
    auVar15[6] = -(UNK_001164d6 == '\0');
    auVar15[7] = -(UNK_001164d7 == '\0');
    auVar15[8] = -(UNK_001164d8 == '\0');
    auVar15[9] = -(UNK_001164d9 == '\0');
    auVar15[10] = -(UNK_001164da == '\0');
    auVar15[0xb] = -(UNK_001164db == '\0');
    auVar15[0xc] = -(UNK_001164dc == '\0');
    auVar15[0xd] = -(UNK_001164dd == '\0');
    auVar15[0xe] = -(UNK_001164de == '\0');
    auVar15[0xf] = -(UNK_001164df == '\0');
    auVar15 = auVar15 & auVar7;
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
      *(undefined1 *)(param_1 + 1) = 0xc;
      goto LAB_001446cd;
    }
    auVar8[0] = -((*param_2)[0] == DAT_00116730);
    auVar8[1] = -((*param_2)[1] == UNK_00116731);
    auVar8[2] = -((*param_2)[2] == UNK_00116732);
    auVar8[3] = -((*param_2)[3] == UNK_00116733);
    auVar8[4] = -((*param_2)[4] == UNK_00116734);
    auVar8[5] = -((*param_2)[5] == UNK_00116735);
    auVar8[6] = -((*param_2)[6] == UNK_00116736);
    auVar8[7] = -((*param_2)[7] == UNK_00116737);
    auVar8[8] = -((*param_2)[8] == UNK_00116738);
    auVar8[9] = -((*param_2)[9] == UNK_00116739);
    auVar8[10] = -((*param_2)[10] == UNK_0011673a);
    auVar8[0xb] = -((*param_2)[0xb] == UNK_0011673b);
    auVar8[0xc] = -((*param_2)[0xc] == UNK_0011673c);
    auVar8[0xd] = -((*param_2)[0xd] == UNK_0011673d);
    auVar8[0xe] = -((*param_2)[0xe] == UNK_0011673e);
    auVar8[0xf] = -((*param_2)[0xf] == UNK_0011673f);
    auVar16[0] = -((char)*(undefined2 *)param_2[1] == DAT_00116a10);
    auVar16[1] = -((char)((ushort)*(undefined2 *)param_2[1] >> 8) == UNK_00116a11);
    auVar16[2] = -(UNK_00116a12 == '\0');
    auVar16[3] = -(UNK_00116a13 == '\0');
    auVar16[4] = -(UNK_00116a14 == '\0');
    auVar16[5] = -(UNK_00116a15 == '\0');
    auVar16[6] = -(UNK_00116a16 == '\0');
    auVar16[7] = -(UNK_00116a17 == '\0');
    auVar16[8] = -(UNK_00116a18 == '\0');
    auVar16[9] = -(UNK_00116a19 == '\0');
    auVar16[10] = -(UNK_00116a1a == '\0');
    auVar16[0xb] = -(UNK_00116a1b == '\0');
    auVar16[0xc] = -(UNK_00116a1c == '\0');
    auVar16[0xd] = -(UNK_00116a1d == '\0');
    auVar16[0xe] = -(UNK_00116a1e == '\0');
    auVar16[0xf] = -(UNK_00116a1f == '\0');
    auVar16 = auVar16 & auVar8;
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
      *(undefined1 *)(param_1 + 1) = 0xd;
      goto LAB_001446cd;
    }
    auVar9[0] = -((*param_2)[0] == s_max_single_net_v_00116760[0]);
    auVar9[1] = -((*param_2)[1] == s_max_single_net_v_00116760[1]);
    auVar9[2] = -((*param_2)[2] == s_max_single_net_v_00116760[2]);
    auVar9[3] = -((*param_2)[3] == s_max_single_net_v_00116760[3]);
    auVar9[4] = -((*param_2)[4] == s_max_single_net_v_00116760[4]);
    auVar9[5] = -((*param_2)[5] == s_max_single_net_v_00116760[5]);
    auVar9[6] = -((*param_2)[6] == s_max_single_net_v_00116760[6]);
    auVar9[7] = -((*param_2)[7] == s_max_single_net_v_00116760[7]);
    auVar9[8] = -((*param_2)[8] == s_max_single_net_v_00116760[8]);
    auVar9[9] = -((*param_2)[9] == s_max_single_net_v_00116760[9]);
    auVar9[10] = -((*param_2)[10] == s_max_single_net_v_00116760[10]);
    auVar9[0xb] = -((*param_2)[0xb] == s_max_single_net_v_00116760[0xb]);
    auVar9[0xc] = -((*param_2)[0xc] == s_max_single_net_v_00116760[0xc]);
    auVar9[0xd] = -((*param_2)[0xd] == s_max_single_net_v_00116760[0xd]);
    auVar9[0xe] = -((*param_2)[0xe] == s_max_single_net_v_00116760[0xe]);
    auVar9[0xf] = -((*param_2)[0xf] == s_max_single_net_v_00116760[0xf]);
    auVar17[0] = -((char)*(undefined2 *)param_2[1] == s_ol_001164d0[0]);
    auVar17[1] = -((char)((ushort)*(undefined2 *)param_2[1] >> 8) == s_ol_001164d0[1]);
    auVar17[2] = -(s_ol_001164d0[2] == '\0');
    auVar17[3] = -(s_ol_001164d0[3] == '\0');
    auVar17[4] = -(UNK_001164d4 == '\0');
    auVar17[5] = -(UNK_001164d5 == '\0');
    auVar17[6] = -(UNK_001164d6 == '\0');
    auVar17[7] = -(UNK_001164d7 == '\0');
    auVar17[8] = -(UNK_001164d8 == '\0');
    auVar17[9] = -(UNK_001164d9 == '\0');
    auVar17[10] = -(UNK_001164da == '\0');
    auVar17[0xb] = -(UNK_001164db == '\0');
    auVar17[0xc] = -(UNK_001164dc == '\0');
    auVar17[0xd] = -(UNK_001164dd == '\0');
    auVar17[0xe] = -(UNK_001164de == '\0');
    auVar17[0xf] = -(UNK_001164df == '\0');
    auVar17 = auVar17 & auVar9;
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
      *(undefined1 *)(param_1 + 1) = 0xe;
      goto LAB_001446cd;
    }
    auVar10[0] = -((*param_2)[0] == DAT_001168a0);
    auVar10[1] = -((*param_2)[1] == UNK_001168a1);
    auVar10[2] = -((*param_2)[2] == UNK_001168a2);
    auVar10[3] = -((*param_2)[3] == UNK_001168a3);
    auVar10[4] = -((*param_2)[4] == UNK_001168a4);
    auVar10[5] = -((*param_2)[5] == UNK_001168a5);
    auVar10[6] = -((*param_2)[6] == UNK_001168a6);
    auVar10[7] = -((*param_2)[7] == UNK_001168a7);
    auVar10[8] = -((*param_2)[8] == UNK_001168a8);
    auVar10[9] = -((*param_2)[9] == UNK_001168a9);
    auVar10[10] = -((*param_2)[10] == UNK_001168aa);
    auVar10[0xb] = -((*param_2)[0xb] == UNK_001168ab);
    auVar10[0xc] = -((*param_2)[0xc] == UNK_001168ac);
    auVar10[0xd] = -((*param_2)[0xd] == UNK_001168ad);
    auVar10[0xe] = -((*param_2)[0xe] == UNK_001168ae);
    auVar10[0xf] = -((*param_2)[0xf] == UNK_001168af);
    auVar18[0] = -((char)*(undefined2 *)param_2[1] == DAT_00116a10);
    auVar18[1] = -((char)((ushort)*(undefined2 *)param_2[1] >> 8) == UNK_00116a11);
    auVar18[2] = -(UNK_00116a12 == '\0');
    auVar18[3] = -(UNK_00116a13 == '\0');
    auVar18[4] = -(UNK_00116a14 == '\0');
    auVar18[5] = -(UNK_00116a15 == '\0');
    auVar18[6] = -(UNK_00116a16 == '\0');
    auVar18[7] = -(UNK_00116a17 == '\0');
    auVar18[8] = -(UNK_00116a18 == '\0');
    auVar18[9] = -(UNK_00116a19 == '\0');
    auVar18[10] = -(UNK_00116a1a == '\0');
    auVar18[0xb] = -(UNK_00116a1b == '\0');
    auVar18[0xc] = -(UNK_00116a1c == '\0');
    auVar18[0xd] = -(UNK_00116a1d == '\0');
    auVar18[0xe] = -(UNK_00116a1e == '\0');
    auVar18[0xf] = -(UNK_00116a1f == '\0');
    auVar18 = auVar18 & auVar10;
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
      *(undefined1 *)(param_1 + 1) = 0xf;
      goto LAB_001446cd;
    }
    break;
  case 0x13:
    auVar19[0] = -((*param_2)[3] == DAT_001164f0);
    auVar19[1] = -((*param_2)[4] == UNK_001164f1);
    auVar19[2] = -((*param_2)[5] == UNK_001164f2);
    auVar19[3] = -((*param_2)[6] == UNK_001164f3);
    auVar19[4] = -((*param_2)[7] == UNK_001164f4);
    auVar19[5] = -((*param_2)[8] == UNK_001164f5);
    auVar19[6] = -((*param_2)[9] == UNK_001164f6);
    auVar19[7] = -((*param_2)[10] == UNK_001164f7);
    auVar19[8] = -((*param_2)[0xb] == UNK_001164f8);
    auVar19[9] = -((*param_2)[0xc] == UNK_001164f9);
    auVar19[10] = -((*param_2)[0xd] == UNK_001164fa);
    auVar19[0xb] = -((*param_2)[0xe] == UNK_001164fb);
    auVar19[0xc] = -((*param_2)[0xf] == UNK_001164fc);
    auVar19[0xd] = -(param_2[1][0] == UNK_001164fd);
    auVar19[0xe] = -(param_2[1][1] == UNK_001164fe);
    auVar19[0xf] = -(param_2[1][2] == UNK_001164ff);
    auVar11[0] = -((*param_2)[0] == DAT_001168b0);
    auVar11[1] = -((*param_2)[1] == UNK_001168b1);
    auVar11[2] = -((*param_2)[2] == UNK_001168b2);
    auVar11[3] = -((*param_2)[3] == UNK_001168b3);
    auVar11[4] = -((*param_2)[4] == UNK_001168b4);
    auVar11[5] = -((*param_2)[5] == UNK_001168b5);
    auVar11[6] = -((*param_2)[6] == UNK_001168b6);
    auVar11[7] = -((*param_2)[7] == UNK_001168b7);
    auVar11[8] = -((*param_2)[8] == UNK_001168b8);
    auVar11[9] = -((*param_2)[9] == UNK_001168b9);
    auVar11[10] = -((*param_2)[10] == UNK_001168ba);
    auVar11[0xb] = -((*param_2)[0xb] == UNK_001168bb);
    auVar11[0xc] = -((*param_2)[0xc] == UNK_001168bc);
    auVar11[0xd] = -((*param_2)[0xd] == UNK_001168bd);
    auVar11[0xe] = -((*param_2)[0xe] == UNK_001168be);
    auVar11[0xf] = -((*param_2)[0xf] == UNK_001168bf);
    auVar11 = auVar11 & auVar19;
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
      goto LAB_001446cd;
    }
    iVar3 = (*(code *)PTR_bcmp_001cb3d8)
                      (param_2,
                       "taker_rate_baselinemax_taker_ratetrade_slipperyclose_position_block_msmax_single_add_volmax_single_add_amtmax_single_net_volmax_single_net_amtmax_single_close_volmax_single_close_amt"
                      );
    if (iVar3 == 0) {
      *(undefined1 *)(param_1 + 1) = 8;
      goto LAB_001446cd;
    }
    iVar3 = (*(code *)PTR_bcmp_001cb3d8)(param_2,"long_open_threshold",param_3);
    if (iVar3 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x12;
      goto LAB_001446cd;
    }
    break;
  case 0x14:
    uVar1 = *(undefined4 *)param_2[1];
    auVar21[0] = -((char)uVar1 == DAT_00116490);
    auVar21[1] = -((char)((uint)uVar1 >> 8) == UNK_00116491);
    auVar21[2] = -((char)((uint)uVar1 >> 0x10) == UNK_00116492);
    auVar21[3] = -((char)((uint)uVar1 >> 0x18) == UNK_00116493);
    auVar21[4] = -(UNK_00116494 == '\0');
    auVar21[5] = -(UNK_00116495 == '\0');
    auVar21[6] = -(UNK_00116496 == '\0');
    auVar21[7] = -(UNK_00116497 == '\0');
    auVar21[8] = -(UNK_00116498 == '\0');
    auVar21[9] = -(UNK_00116499 == '\0');
    auVar21[10] = -(UNK_0011649a == '\0');
    auVar21[0xb] = -(UNK_0011649b == '\0');
    auVar21[0xc] = -(UNK_0011649c == '\0');
    auVar21[0xd] = -(UNK_0011649d == '\0');
    auVar21[0xe] = -(UNK_0011649e == '\0');
    auVar21[0xf] = -(UNK_0011649f == '\0');
    auVar13[0] = -((*param_2)[0] == DAT_001165f0);
    auVar13[1] = -((*param_2)[1] == UNK_001165f1);
    auVar13[2] = -((*param_2)[2] == UNK_001165f2);
    auVar13[3] = -((*param_2)[3] == UNK_001165f3);
    auVar13[4] = -((*param_2)[4] == UNK_001165f4);
    auVar13[5] = -((*param_2)[5] == UNK_001165f5);
    auVar13[6] = -((*param_2)[6] == UNK_001165f6);
    auVar13[7] = -((*param_2)[7] == UNK_001165f7);
    auVar13[8] = -((*param_2)[8] == UNK_001165f8);
    auVar13[9] = -((*param_2)[9] == UNK_001165f9);
    auVar13[10] = -((*param_2)[10] == UNK_001165fa);
    auVar13[0xb] = -((*param_2)[0xb] == UNK_001165fb);
    auVar13[0xc] = -((*param_2)[0xc] == UNK_001165fc);
    auVar13[0xd] = -((*param_2)[0xd] == UNK_001165fd);
    auVar13[0xe] = -((*param_2)[0xe] == UNK_001165fe);
    auVar13[0xf] = -((*param_2)[0xf] == UNK_001165ff);
    auVar13 = auVar13 & auVar21;
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
      *(undefined1 *)(param_1 + 1) = 0x10;
      goto LAB_001446cd;
    }
    auVar5 = *param_2;
    uVar1 = *(undefined4 *)param_2[1];
    auVar23[0] = -((char)uVar1 == s__amt_001166d0[0]);
    auVar23[1] = -((char)((uint)uVar1 >> 8) == s__amt_001166d0[1]);
    auVar23[2] = -((char)((uint)uVar1 >> 0x10) == s__amt_001166d0[2]);
    auVar23[3] = -((char)((uint)uVar1 >> 0x18) == s__amt_001166d0[3]);
    auVar23[4] = -(s__amt_001166d0[4] == '\0');
    auVar23[5] = -(s__amt_001166d0[5] == '\0');
    auVar23[6] = -(s__amt_001166d0[6] == '\0');
    auVar23[7] = -(s__amt_001166d0[7] == '\0');
    auVar23[8] = -(UNK_001166d8 == '\0');
    auVar23[9] = -(UNK_001166d9 == '\0');
    auVar23[10] = -(UNK_001166da == '\0');
    auVar23[0xb] = -(UNK_001166db == '\0');
    auVar23[0xc] = -(UNK_001166dc == '\0');
    auVar23[0xd] = -(UNK_001166dd == '\0');
    auVar23[0xe] = -(UNK_001166de == '\0');
    auVar23[0xf] = -(UNK_001166df == '\0');
    auVar22[0] = -(auVar5[0] == 'm');
    auVar22[1] = -(auVar5[1] == 'a');
    auVar22[2] = -(auVar5[2] == 'x');
    auVar22[3] = -(auVar5[3] == '_');
    auVar22[4] = -(auVar5[4] == 's');
    auVar22[5] = -(auVar5[5] == 'i');
    auVar22[6] = -(auVar5[6] == 'n');
    auVar22[7] = -(auVar5[7] == 'g');
    auVar22[8] = -(auVar5[8] == 'l');
    auVar22[9] = -(auVar5[9] == 'e');
    auVar22[10] = -(auVar5[10] == '_');
    auVar22[0xb] = -(auVar5[0xb] == 'c');
    auVar22[0xc] = -(auVar5[0xc] == 'l');
    auVar22[0xd] = -(auVar5[0xd] == 'o');
    auVar22[0xe] = -(auVar5[0xe] == 's');
    auVar22[0xf] = -(auVar5[0xf] == 'e');
    auVar23 = auVar23 & auVar22;
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
      goto LAB_001446cd;
    }
    iVar3 = (*(code *)PTR_bcmp_001cb3d8)(param_2,"long_close_threshold");
    if (iVar3 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x13;
      goto LAB_001446cd;
    }
    iVar3 = (*(code *)PTR_bcmp_001cb3d8)
                      (param_2,
                       "short_open_thresholdshort_close_thresholddyn_score_position_ts_threshold_sdyn_score_max_position_ts_sdyn_score_delta_scoredyn_pending_position_ts_threshold_sdyn_pending_max_position_ts_sdyn_pending_order_max_pending_time_msdyn_pending_delta_max_pending_ts_msrolling_window_ms"
                       ,param_3);
    if (iVar3 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x14;
      goto LAB_001446cd;
    }
    break;
  case 0x16:
    auVar20[0] = -((*param_2)[6] == DAT_001164e0);
    auVar20[1] = -((*param_2)[7] == UNK_001164e1);
    auVar20[2] = -((*param_2)[8] == UNK_001164e2);
    auVar20[3] = -((*param_2)[9] == UNK_001164e3);
    auVar20[4] = -((*param_2)[10] == UNK_001164e4);
    auVar20[5] = -((*param_2)[0xb] == UNK_001164e5);
    auVar20[6] = -((*param_2)[0xc] == UNK_001164e6);
    auVar20[7] = -((*param_2)[0xd] == UNK_001164e7);
    auVar20[8] = -((*param_2)[0xe] == UNK_001164e8);
    auVar20[9] = -((*param_2)[0xf] == UNK_001164e9);
    auVar20[10] = -(param_2[1][0] == UNK_001164ea);
    auVar20[0xb] = -(param_2[1][1] == UNK_001164eb);
    auVar20[0xc] = -(param_2[1][2] == UNK_001164ec);
    auVar20[0xd] = -(param_2[1][3] == UNK_001164ed);
    auVar20[0xe] = -(param_2[1][4] == UNK_001164ee);
    auVar20[0xf] = -(param_2[1][5] == UNK_001164ef);
    auVar12[0] = -((*param_2)[0] == DAT_00116620);
    auVar12[1] = -((*param_2)[1] == UNK_00116621);
    auVar12[2] = -((*param_2)[2] == UNK_00116622);
    auVar12[3] = -((*param_2)[3] == UNK_00116623);
    auVar12[4] = -((*param_2)[4] == UNK_00116624);
    auVar12[5] = -((*param_2)[5] == UNK_00116625);
    auVar12[6] = -((*param_2)[6] == UNK_00116626);
    auVar12[7] = -((*param_2)[7] == UNK_00116627);
    auVar12[8] = -((*param_2)[8] == UNK_00116628);
    auVar12[9] = -((*param_2)[9] == UNK_00116629);
    auVar12[10] = -((*param_2)[10] == UNK_0011662a);
    auVar12[0xb] = -((*param_2)[0xb] == UNK_0011662b);
    auVar12[0xc] = -((*param_2)[0xc] == UNK_0011662c);
    auVar12[0xd] = -((*param_2)[0xd] == UNK_0011662d);
    auVar12[0xe] = -((*param_2)[0xe] == UNK_0011662e);
    auVar12[0xf] = -((*param_2)[0xf] == UNK_0011662f);
    auVar12 = auVar12 & auVar20;
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
      goto LAB_001446cd;
    }
    break;
  case 0x17:
    auVar14[0] = -((*param_2)[7] == DAT_001168d0);
    auVar14[1] = -((*param_2)[8] == UNK_001168d1);
    auVar14[2] = -((*param_2)[9] == UNK_001168d2);
    auVar14[3] = -((*param_2)[10] == UNK_001168d3);
    auVar14[4] = -((*param_2)[0xb] == UNK_001168d4);
    auVar14[5] = -((*param_2)[0xc] == UNK_001168d5);
    auVar14[6] = -((*param_2)[0xd] == UNK_001168d6);
    auVar14[7] = -((*param_2)[0xe] == UNK_001168d7);
    auVar14[8] = -((*param_2)[0xf] == UNK_001168d8);
    auVar14[9] = -(param_2[1][0] == UNK_001168d9);
    auVar14[10] = -(param_2[1][1] == UNK_001168da);
    auVar14[0xb] = -(param_2[1][2] == UNK_001168db);
    auVar14[0xc] = -(param_2[1][3] == UNK_001168dc);
    auVar14[0xd] = -(param_2[1][4] == UNK_001168dd);
    auVar14[0xe] = -(param_2[1][5] == UNK_001168de);
    auVar14[0xf] = -(param_2[1][6] == UNK_001168df);
    auVar5[0] = -((*param_2)[0] == DAT_00116570);
    auVar5[1] = -((*param_2)[1] == UNK_00116571);
    auVar5[2] = -((*param_2)[2] == UNK_00116572);
    auVar5[3] = -((*param_2)[3] == UNK_00116573);
    auVar5[4] = -((*param_2)[4] == UNK_00116574);
    auVar5[5] = -((*param_2)[5] == UNK_00116575);
    auVar5[6] = -((*param_2)[6] == UNK_00116576);
    auVar5[7] = -((*param_2)[7] == UNK_00116577);
    auVar5[8] = -((*param_2)[8] == UNK_00116578);
    auVar5[9] = -((*param_2)[9] == UNK_00116579);
    auVar5[10] = -((*param_2)[10] == UNK_0011657a);
    auVar5[0xb] = -((*param_2)[0xb] == UNK_0011657b);
    auVar5[0xc] = -((*param_2)[0xc] == UNK_0011657c);
    auVar5[0xd] = -((*param_2)[0xd] == UNK_0011657d);
    auVar5[0xe] = -((*param_2)[0xe] == UNK_0011657e);
    auVar5[0xf] = -((*param_2)[0xf] == UNK_0011657f);
    auVar5 = auVar5 & auVar14;
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
      *(undefined1 *)(param_1 + 1) = 0xb;
      goto LAB_001446cd;
    }
  }
  uVar2 = param_3 - 0x11U >> 1;
  if ((uVar2 | (ulong)((param_3 - 0x11U & 1) != 0) << 0x3f) < 0xb) {
                    /* WARNING: Could not recover jumptable at 0x001444eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar4 = (undefined8 *)(*(code *)(&DAT_00116f48 + *(int *)(&DAT_00116f48 + uVar2 * 4)))();
    return puVar4;
  }
  *(undefined1 *)(param_1 + 1) = 0x1e;
LAB_001446cd:
  *param_1 = 2;
  return param_1;
}


