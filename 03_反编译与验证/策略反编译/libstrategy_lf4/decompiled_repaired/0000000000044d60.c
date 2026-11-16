// ELF address 0x0000000000044d60; <strategy_lf4::_::<impl serde_core::de::Deserialize for strategy_lf4::LF4Params>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_str

/* _<strategy_lf4::_::<impl serde_core::de::Deserialize for
   strategy_lf4::LF4Params>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_str */

undefined8 * __rustcall
_<strategy_lf4::_::<impl_serde_core::de::Deserialize_for_strategy_lf4::LF4Params>::deserialize::__FieldVisitor_as_serde_core::de::Visitor>
::visit_str(undefined8 *param_1,long *param_2,long param_3)

{
  undefined4 uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  bool bVar6;
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
  
  bVar3 = false;
  switch(param_3) {
  case 8:
    if (*param_2 == 0x656c69746e617571) {
      *(undefined1 *)(param_1 + 1) = 5;
      goto LAB_001452f7;
    }
    break;
  case 9:
    if ((char)param_2[1] == 'a' && *param_2 == 0x68706c615f317670) {
      *(undefined1 *)(param_1 + 1) = 1;
      goto LAB_001452f7;
    }
    if ((char)param_2[1] == 'e' && *param_2 == 0x7461725f65746f76) {
      *(undefined1 *)(param_1 + 1) = 4;
      goto LAB_001452f7;
    }
    break;
  case 10:
    if ((short)param_2[1] == 0x6168 && *param_2 == 0x706c615f74736f63) {
      *(undefined1 *)(param_1 + 1) = 2;
      goto LAB_001452f7;
    }
    break;
  case 0xb:
    if (*(long *)((long)param_2 + 3) == 0x65646f6d5f6c616e && *param_2 == 0x6d5f6c616e676973) {
      *(undefined1 *)(param_1 + 1) = 0;
      goto LAB_001452f7;
    }
    bVar3 = false;
  default:
    goto switchD_00144d92_caseD_c;
  case 0xe:
    if (*(long *)((long)param_2 + 6) == 0x657461725f72656b && *param_2 == 0x656b61745f78616d) {
      *(undefined1 *)(param_1 + 1) = 8;
      goto LAB_001452f7;
    }
    if (*(long *)((long)param_2 + 6) == 0x7972657070696c73 && *param_2 == 0x6c735f6564617274) {
      *(undefined1 *)(param_1 + 1) = 9;
      goto LAB_001452f7;
    }
    bVar4 = true;
    bVar2 = false;
    goto LAB_00144e93;
  case 0x10:
    auVar7[0] = -((char)*param_2 == DAT_001166e0);
    auVar7[1] = -(*(char *)((long)param_2 + 1) == UNK_001166e1);
    auVar7[2] = -(*(char *)((long)param_2 + 2) == UNK_001166e2);
    auVar7[3] = -(*(char *)((long)param_2 + 3) == UNK_001166e3);
    auVar7[4] = -(*(char *)((long)param_2 + 4) == UNK_001166e4);
    auVar7[5] = -(*(char *)((long)param_2 + 5) == UNK_001166e5);
    auVar7[6] = -(*(char *)((long)param_2 + 6) == UNK_001166e6);
    auVar7[7] = -(*(char *)((long)param_2 + 7) == UNK_001166e7);
    auVar7[8] = -((char)param_2[1] == UNK_001166e8);
    auVar7[9] = -(*(char *)((long)param_2 + 9) == UNK_001166e9);
    auVar7[10] = -(*(char *)((long)param_2 + 10) == UNK_001166ea);
    auVar7[0xb] = -(*(char *)((long)param_2 + 0xb) == UNK_001166eb);
    auVar7[0xc] = -(*(char *)((long)param_2 + 0xc) == UNK_001166ec);
    auVar7[0xd] = -(*(char *)((long)param_2 + 0xd) == UNK_001166ed);
    auVar7[0xe] = -(*(char *)((long)param_2 + 0xe) == UNK_001166ee);
    auVar7[0xf] = -(*(char *)((long)param_2 + 0xf) == UNK_001166ef);
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
      goto LAB_001452f7;
    }
    break;
  case 0x13:
    auVar18[0] = -(*(char *)((long)param_2 + 3) == DAT_00116490);
    auVar18[1] = -(*(char *)((long)param_2 + 4) == UNK_00116491);
    auVar18[2] = -(*(char *)((long)param_2 + 5) == UNK_00116492);
    auVar18[3] = -(*(char *)((long)param_2 + 6) == UNK_00116493);
    auVar18[4] = -(*(char *)((long)param_2 + 7) == UNK_00116494);
    auVar18[5] = -((char)param_2[1] == UNK_00116495);
    auVar18[6] = -(*(char *)((long)param_2 + 9) == UNK_00116496);
    auVar18[7] = -(*(char *)((long)param_2 + 10) == UNK_00116497);
    auVar18[8] = -(*(char *)((long)param_2 + 0xb) == UNK_00116498);
    auVar18[9] = -(*(char *)((long)param_2 + 0xc) == UNK_00116499);
    auVar18[10] = -(*(char *)((long)param_2 + 0xd) == UNK_0011649a);
    auVar18[0xb] = -(*(char *)((long)param_2 + 0xe) == UNK_0011649b);
    auVar18[0xc] = -(*(char *)((long)param_2 + 0xf) == UNK_0011649c);
    auVar18[0xd] = -((char)param_2[2] == UNK_0011649d);
    auVar18[0xe] = -(*(char *)((long)param_2 + 0x11) == UNK_0011649e);
    auVar18[0xf] = -(*(char *)((long)param_2 + 0x12) == UNK_0011649f);
    auVar8[0] = -((char)*param_2 == DAT_00116860);
    auVar8[1] = -(*(char *)((long)param_2 + 1) == UNK_00116861);
    auVar8[2] = -(*(char *)((long)param_2 + 2) == UNK_00116862);
    auVar8[3] = -(*(char *)((long)param_2 + 3) == UNK_00116863);
    auVar8[4] = -(*(char *)((long)param_2 + 4) == UNK_00116864);
    auVar8[5] = -(*(char *)((long)param_2 + 5) == UNK_00116865);
    auVar8[6] = -(*(char *)((long)param_2 + 6) == UNK_00116866);
    auVar8[7] = -(*(char *)((long)param_2 + 7) == UNK_00116867);
    auVar8[8] = -((char)param_2[1] == UNK_00116868);
    auVar8[9] = -(*(char *)((long)param_2 + 9) == UNK_00116869);
    auVar8[10] = -(*(char *)((long)param_2 + 10) == UNK_0011686a);
    auVar8[0xb] = -(*(char *)((long)param_2 + 0xb) == UNK_0011686b);
    auVar8[0xc] = -(*(char *)((long)param_2 + 0xc) == UNK_0011686c);
    auVar8[0xd] = -(*(char *)((long)param_2 + 0xd) == UNK_0011686d);
    auVar8[0xe] = -(*(char *)((long)param_2 + 0xe) == UNK_0011686e);
    auVar8[0xf] = -(*(char *)((long)param_2 + 0xf) == UNK_0011686f);
    auVar8 = auVar8 & auVar18;
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
      *(undefined1 *)(param_1 + 1) = 3;
      goto LAB_001452f7;
    }
    iVar5 = (*(code *)PTR_bcmp_001ccb58)
                      (param_2,
                       "taker_rate_baselinemax_taker_ratetrade_slipperyclose_position_block_msmax_single_add_volmax_single_net_volmax_single_close_vol"
                       ,param_3);
    bVar3 = true;
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 1) = 7;
      goto LAB_001452f7;
    }
switchD_00144d92_caseD_c:
    if (param_3 == 0x12) {
      auVar11[0] = -((char)*param_2 == DAT_001167a0);
      auVar11[1] = -(*(char *)((long)param_2 + 1) == UNK_001167a1);
      auVar11[2] = -(*(char *)((long)param_2 + 2) == UNK_001167a2);
      auVar11[3] = -(*(char *)((long)param_2 + 3) == UNK_001167a3);
      auVar11[4] = -(*(char *)((long)param_2 + 4) == UNK_001167a4);
      auVar11[5] = -(*(char *)((long)param_2 + 5) == UNK_001167a5);
      auVar11[6] = -(*(char *)((long)param_2 + 6) == UNK_001167a6);
      auVar11[7] = -(*(char *)((long)param_2 + 7) == UNK_001167a7);
      auVar11[8] = -((char)param_2[1] == UNK_001167a8);
      auVar11[9] = -(*(char *)((long)param_2 + 9) == UNK_001167a9);
      auVar11[10] = -(*(char *)((long)param_2 + 10) == UNK_001167aa);
      auVar11[0xb] = -(*(char *)((long)param_2 + 0xb) == UNK_001167ab);
      auVar11[0xc] = -(*(char *)((long)param_2 + 0xc) == UNK_001167ac);
      auVar11[0xd] = -(*(char *)((long)param_2 + 0xd) == UNK_001167ad);
      auVar11[0xe] = -(*(char *)((long)param_2 + 0xe) == UNK_001167ae);
      auVar11[0xf] = -(*(char *)((long)param_2 + 0xf) == UNK_001167af);
      auVar21[0] = -((char)(short)param_2[2] == s_ol_00116480[0]);
      auVar21[1] = -((char)((ushort)(short)param_2[2] >> 8) == s_ol_00116480[1]);
      auVar21[2] = -(s_ol_00116480[2] == '\0');
      auVar21[3] = -(s_ol_00116480[3] == '\0');
      auVar21[4] = -(UNK_00116484 == '\0');
      auVar21[5] = -(UNK_00116485 == '\0');
      auVar21[6] = -(UNK_00116486 == '\0');
      auVar21[7] = -(UNK_00116487 == '\0');
      auVar21[8] = -(UNK_00116488 == '\0');
      auVar21[9] = -(UNK_00116489 == '\0');
      auVar21[10] = -(UNK_0011648a == '\0');
      auVar21[0xb] = -(UNK_0011648b == '\0');
      auVar21[0xc] = -(UNK_0011648c == '\0');
      auVar21[0xd] = -(UNK_0011648d == '\0');
      auVar21[0xe] = -(UNK_0011648e == '\0');
      auVar21[0xf] = -(UNK_0011648f == '\0');
      auVar21 = auVar21 & auVar11;
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
        *(undefined1 *)(param_1 + 1) = 0xb;
        goto LAB_001452f7;
      }
      auVar12[0] = -((char)*param_2 == s_max_single_net_v_00116720[0]);
      auVar12[1] = -(*(char *)((long)param_2 + 1) == s_max_single_net_v_00116720[1]);
      auVar12[2] = -(*(char *)((long)param_2 + 2) == s_max_single_net_v_00116720[2]);
      auVar12[3] = -(*(char *)((long)param_2 + 3) == s_max_single_net_v_00116720[3]);
      auVar12[4] = -(*(char *)((long)param_2 + 4) == s_max_single_net_v_00116720[4]);
      auVar12[5] = -(*(char *)((long)param_2 + 5) == s_max_single_net_v_00116720[5]);
      auVar12[6] = -(*(char *)((long)param_2 + 6) == s_max_single_net_v_00116720[6]);
      auVar12[7] = -(*(char *)((long)param_2 + 7) == s_max_single_net_v_00116720[7]);
      auVar12[8] = -((char)param_2[1] == s_max_single_net_v_00116720[8]);
      auVar12[9] = -(*(char *)((long)param_2 + 9) == s_max_single_net_v_00116720[9]);
      auVar12[10] = -(*(char *)((long)param_2 + 10) == s_max_single_net_v_00116720[10]);
      auVar12[0xb] = -(*(char *)((long)param_2 + 0xb) == s_max_single_net_v_00116720[0xb]);
      auVar12[0xc] = -(*(char *)((long)param_2 + 0xc) == s_max_single_net_v_00116720[0xc]);
      auVar12[0xd] = -(*(char *)((long)param_2 + 0xd) == s_max_single_net_v_00116720[0xd]);
      auVar12[0xe] = -(*(char *)((long)param_2 + 0xe) == s_max_single_net_v_00116720[0xe]);
      auVar12[0xf] = -(*(char *)((long)param_2 + 0xf) == s_max_single_net_v_00116720[0xf]);
      auVar22[0] = -((char)(short)param_2[2] == s_ol_00116480[0]);
      auVar22[1] = -((char)((ushort)(short)param_2[2] >> 8) == s_ol_00116480[1]);
      auVar22[2] = -(s_ol_00116480[2] == '\0');
      auVar22[3] = -(s_ol_00116480[3] == '\0');
      auVar22[4] = -(UNK_00116484 == '\0');
      auVar22[5] = -(UNK_00116485 == '\0');
      auVar22[6] = -(UNK_00116486 == '\0');
      auVar22[7] = -(UNK_00116487 == '\0');
      auVar22[8] = -(UNK_00116488 == '\0');
      auVar22[9] = -(UNK_00116489 == '\0');
      auVar22[10] = -(UNK_0011648a == '\0');
      auVar22[0xb] = -(UNK_0011648b == '\0');
      auVar22[0xc] = -(UNK_0011648c == '\0');
      auVar22[0xd] = -(UNK_0011648d == '\0');
      auVar22[0xe] = -(UNK_0011648e == '\0');
      auVar22[0xf] = -(UNK_0011648f == '\0');
      auVar22 = auVar22 & auVar12;
      if ((ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
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
                  (ushort)(byte)(auVar22[0xf] >> 7) << 0xf) == 0xffff) {
        *(undefined1 *)(param_1 + 1) = 0xc;
        goto LAB_001452f7;
      }
LAB_00145010:
      bVar6 = false;
      bVar2 = false;
      bVar4 = false;
      if (bVar3) {
LAB_00145068:
        iVar5 = (*(code *)PTR_bcmp_001ccb58)(param_2,"long_open_threshold",param_3);
        bVar2 = true;
        if (iVar5 == 0) {
          *(undefined1 *)(param_1 + 1) = 0xe;
          goto LAB_001452f7;
        }
        goto LAB_0014520b;
      }
      goto LAB_00144e93;
    }
    if (param_3 == 0x17) {
      auVar20[0] = -(*(char *)((long)param_2 + 7) == DAT_00116880);
      auVar20[1] = -((char)param_2[1] == UNK_00116881);
      auVar20[2] = -(*(char *)((long)param_2 + 9) == UNK_00116882);
      auVar20[3] = -(*(char *)((long)param_2 + 10) == UNK_00116883);
      auVar20[4] = -(*(char *)((long)param_2 + 0xb) == UNK_00116884);
      auVar20[5] = -(*(char *)((long)param_2 + 0xc) == UNK_00116885);
      auVar20[6] = -(*(char *)((long)param_2 + 0xd) == UNK_00116886);
      auVar20[7] = -(*(char *)((long)param_2 + 0xe) == UNK_00116887);
      auVar20[8] = -(*(char *)((long)param_2 + 0xf) == UNK_00116888);
      auVar20[9] = -((char)param_2[2] == UNK_00116889);
      auVar20[10] = -(*(char *)((long)param_2 + 0x11) == UNK_0011688a);
      auVar20[0xb] = -(*(char *)((long)param_2 + 0x12) == UNK_0011688b);
      auVar20[0xc] = -(*(char *)((long)param_2 + 0x13) == UNK_0011688c);
      auVar20[0xd] = -(*(char *)((long)param_2 + 0x14) == UNK_0011688d);
      auVar20[0xe] = -(*(char *)((long)param_2 + 0x15) == UNK_0011688e);
      auVar20[0xf] = -(*(char *)((long)param_2 + 0x16) == UNK_0011688f);
      auVar10[0] = -((char)*param_2 == DAT_00116520);
      auVar10[1] = -(*(char *)((long)param_2 + 1) == UNK_00116521);
      auVar10[2] = -(*(char *)((long)param_2 + 2) == UNK_00116522);
      auVar10[3] = -(*(char *)((long)param_2 + 3) == UNK_00116523);
      auVar10[4] = -(*(char *)((long)param_2 + 4) == UNK_00116524);
      auVar10[5] = -(*(char *)((long)param_2 + 5) == UNK_00116525);
      auVar10[6] = -(*(char *)((long)param_2 + 6) == UNK_00116526);
      auVar10[7] = -(*(char *)((long)param_2 + 7) == UNK_00116527);
      auVar10[8] = -((char)param_2[1] == UNK_00116528);
      auVar10[9] = -(*(char *)((long)param_2 + 9) == UNK_00116529);
      auVar10[10] = -(*(char *)((long)param_2 + 10) == UNK_0011652a);
      auVar10[0xb] = -(*(char *)((long)param_2 + 0xb) == UNK_0011652b);
      auVar10[0xc] = -(*(char *)((long)param_2 + 0xc) == UNK_0011652c);
      auVar10[0xd] = -(*(char *)((long)param_2 + 0xd) == UNK_0011652d);
      auVar10[0xe] = -(*(char *)((long)param_2 + 0xe) == UNK_0011652e);
      auVar10[0xf] = -(*(char *)((long)param_2 + 0xf) == UNK_0011652f);
      auVar10 = auVar10 & auVar20;
      if ((ushort)((ushort)(SUB161(auVar10 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar10 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar10 >> 0x17,0) & 1) << 2 |
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
        *(undefined1 *)(param_1 + 1) = 10;
        goto LAB_001452f7;
      }
      goto LAB_00145010;
    }
    bVar6 = param_3 == 0x14;
    if (bVar6) {
      uVar1 = (undefined4)param_2[2];
      auVar23[0] = -((char)uVar1 == DAT_00116440);
      auVar23[1] = -((char)((uint)uVar1 >> 8) == UNK_00116441);
      auVar23[2] = -((char)((uint)uVar1 >> 0x10) == UNK_00116442);
      auVar23[3] = -((char)((uint)uVar1 >> 0x18) == UNK_00116443);
      auVar23[4] = -(UNK_00116444 == '\0');
      auVar23[5] = -(UNK_00116445 == '\0');
      auVar23[6] = -(UNK_00116446 == '\0');
      auVar23[7] = -(UNK_00116447 == '\0');
      auVar23[8] = -(UNK_00116448 == '\0');
      auVar23[9] = -(UNK_00116449 == '\0');
      auVar23[10] = -(UNK_0011644a == '\0');
      auVar23[0xb] = -(UNK_0011644b == '\0');
      auVar23[0xc] = -(UNK_0011644c == '\0');
      auVar23[0xd] = -(UNK_0011644d == '\0');
      auVar23[0xe] = -(UNK_0011644e == '\0');
      auVar23[0xf] = -(UNK_0011644f == '\0');
      auVar13[0] = -((char)*param_2 == DAT_001165a0);
      auVar13[1] = -(*(char *)((long)param_2 + 1) == UNK_001165a1);
      auVar13[2] = -(*(char *)((long)param_2 + 2) == UNK_001165a2);
      auVar13[3] = -(*(char *)((long)param_2 + 3) == UNK_001165a3);
      auVar13[4] = -(*(char *)((long)param_2 + 4) == UNK_001165a4);
      auVar13[5] = -(*(char *)((long)param_2 + 5) == UNK_001165a5);
      auVar13[6] = -(*(char *)((long)param_2 + 6) == UNK_001165a6);
      auVar13[7] = -(*(char *)((long)param_2 + 7) == UNK_001165a7);
      auVar13[8] = -((char)param_2[1] == UNK_001165a8);
      auVar13[9] = -(*(char *)((long)param_2 + 9) == UNK_001165a9);
      auVar13[10] = -(*(char *)((long)param_2 + 10) == UNK_001165aa);
      auVar13[0xb] = -(*(char *)((long)param_2 + 0xb) == UNK_001165ab);
      auVar13[0xc] = -(*(char *)((long)param_2 + 0xc) == UNK_001165ac);
      auVar13[0xd] = -(*(char *)((long)param_2 + 0xd) == UNK_001165ad);
      auVar13[0xe] = -(*(char *)((long)param_2 + 0xe) == UNK_001165ae);
      auVar13[0xf] = -(*(char *)((long)param_2 + 0xf) == UNK_001165af);
      auVar13 = auVar13 & auVar23;
      if ((ushort)((ushort)(SUB161(auVar13 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar13 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar13 >> 0x17,0) & 1) << 2 |
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
        *(undefined1 *)(param_1 + 1) = 0xd;
        goto LAB_001452f7;
      }
    }
    if (bVar3) goto LAB_00145068;
    bVar2 = false;
LAB_0014520b:
    if (bVar6) {
      iVar5 = (*(code *)PTR_bcmp_001ccb58)(param_2,"long_close_threshold",param_3);
      if (iVar5 == 0) {
        *(undefined1 *)(param_1 + 1) = 0xf;
        goto LAB_001452f7;
      }
      iVar5 = (*(code *)PTR_bcmp_001ccb58)
                        (param_2,"short_open_thresholdshort_close_threshold",param_3);
      if (iVar5 == 0) {
        *(undefined1 *)(param_1 + 1) = 0x10;
        goto LAB_001452f7;
      }
    }
    if (param_3 != 0x15) goto LAB_00144e90;
    auVar26[0] = -(*(char *)((long)param_2 + 5) == DAT_00116680);
    auVar26[1] = -(*(char *)((long)param_2 + 6) == UNK_00116681);
    auVar26[2] = -(*(char *)((long)param_2 + 7) == UNK_00116682);
    auVar26[3] = -((char)param_2[1] == UNK_00116683);
    auVar26[4] = -(*(char *)((long)param_2 + 9) == UNK_00116684);
    auVar26[5] = -(*(char *)((long)param_2 + 10) == UNK_00116685);
    auVar26[6] = -(*(char *)((long)param_2 + 0xb) == UNK_00116686);
    auVar26[7] = -(*(char *)((long)param_2 + 0xc) == UNK_00116687);
    auVar26[8] = -(*(char *)((long)param_2 + 0xd) == UNK_00116688);
    auVar26[9] = -(*(char *)((long)param_2 + 0xe) == UNK_00116689);
    auVar26[10] = -(*(char *)((long)param_2 + 0xf) == UNK_0011668a);
    auVar26[0xb] = -((char)param_2[2] == UNK_0011668b);
    auVar26[0xc] = -(*(char *)((long)param_2 + 0x11) == UNK_0011668c);
    auVar26[0xd] = -(*(char *)((long)param_2 + 0x12) == UNK_0011668d);
    auVar26[0xe] = -(*(char *)((long)param_2 + 0x13) == UNK_0011668e);
    auVar26[0xf] = -(*(char *)((long)param_2 + 0x14) == UNK_0011668f);
    auVar16[0] = -((char)*param_2 == DAT_00116690);
    auVar16[1] = -(*(char *)((long)param_2 + 1) == UNK_00116691);
    auVar16[2] = -(*(char *)((long)param_2 + 2) == UNK_00116692);
    auVar16[3] = -(*(char *)((long)param_2 + 3) == UNK_00116693);
    auVar16[4] = -(*(char *)((long)param_2 + 4) == UNK_00116694);
    auVar16[5] = -(*(char *)((long)param_2 + 5) == UNK_00116695);
    auVar16[6] = -(*(char *)((long)param_2 + 6) == UNK_00116696);
    auVar16[7] = -(*(char *)((long)param_2 + 7) == UNK_00116697);
    auVar16[8] = -((char)param_2[1] == UNK_00116698);
    auVar16[9] = -(*(char *)((long)param_2 + 9) == UNK_00116699);
    auVar16[10] = -(*(char *)((long)param_2 + 10) == UNK_0011669a);
    auVar16[0xb] = -(*(char *)((long)param_2 + 0xb) == UNK_0011669b);
    auVar16[0xc] = -(*(char *)((long)param_2 + 0xc) == UNK_0011669c);
    auVar16[0xd] = -(*(char *)((long)param_2 + 0xd) == UNK_0011669d);
    auVar16[0xe] = -(*(char *)((long)param_2 + 0xe) == UNK_0011669e);
    auVar16[0xf] = -(*(char *)((long)param_2 + 0xf) == UNK_0011669f);
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
      *(undefined1 *)(param_1 + 1) = 0x11;
      goto LAB_001452f7;
    }
    auVar27[0] = -(*(char *)((long)param_2 + 5) == DAT_001164e0);
    auVar27[1] = -(*(char *)((long)param_2 + 6) == UNK_001164e1);
    auVar27[2] = -(*(char *)((long)param_2 + 7) == UNK_001164e2);
    auVar27[3] = -((char)param_2[1] == UNK_001164e3);
    auVar27[4] = -(*(char *)((long)param_2 + 9) == UNK_001164e4);
    auVar27[5] = -(*(char *)((long)param_2 + 10) == UNK_001164e5);
    auVar27[6] = -(*(char *)((long)param_2 + 0xb) == UNK_001164e6);
    auVar27[7] = -(*(char *)((long)param_2 + 0xc) == UNK_001164e7);
    auVar27[8] = -(*(char *)((long)param_2 + 0xd) == UNK_001164e8);
    auVar27[9] = -(*(char *)((long)param_2 + 0xe) == UNK_001164e9);
    auVar27[10] = -(*(char *)((long)param_2 + 0xf) == UNK_001164ea);
    auVar27[0xb] = -((char)param_2[2] == UNK_001164eb);
    auVar27[0xc] = -(*(char *)((long)param_2 + 0x11) == UNK_001164ec);
    auVar27[0xd] = -(*(char *)((long)param_2 + 0x12) == UNK_001164ed);
    auVar27[0xe] = -(*(char *)((long)param_2 + 0x13) == UNK_001164ee);
    auVar27[0xf] = -(*(char *)((long)param_2 + 0x14) == UNK_001164ef);
    auVar17[0] = -((char)*param_2 == DAT_00116930);
    auVar17[1] = -(*(char *)((long)param_2 + 1) == UNK_00116931);
    auVar17[2] = -(*(char *)((long)param_2 + 2) == UNK_00116932);
    auVar17[3] = -(*(char *)((long)param_2 + 3) == UNK_00116933);
    auVar17[4] = -(*(char *)((long)param_2 + 4) == UNK_00116934);
    auVar17[5] = -(*(char *)((long)param_2 + 5) == UNK_00116935);
    auVar17[6] = -(*(char *)((long)param_2 + 6) == UNK_00116936);
    auVar17[7] = -(*(char *)((long)param_2 + 7) == UNK_00116937);
    auVar17[8] = -((char)param_2[1] == UNK_00116938);
    auVar17[9] = -(*(char *)((long)param_2 + 9) == UNK_00116939);
    auVar17[10] = -(*(char *)((long)param_2 + 10) == UNK_0011693a);
    auVar17[0xb] = -(*(char *)((long)param_2 + 0xb) == UNK_0011693b);
    auVar17[0xc] = -(*(char *)((long)param_2 + 0xc) == UNK_0011693c);
    auVar17[0xd] = -(*(char *)((long)param_2 + 0xd) == UNK_0011693d);
    auVar17[0xe] = -(*(char *)((long)param_2 + 0xe) == UNK_0011693e);
    auVar17[0xf] = -(*(char *)((long)param_2 + 0xf) == UNK_0011693f);
    auVar17 = auVar17 & auVar27;
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
      *(undefined1 *)(param_1 + 1) = 0x14;
      goto LAB_001452f7;
    }
    bVar3 = true;
    bVar4 = false;
    bVar6 = true;
    if (bVar2) goto LAB_0014514c;
    goto LAB_00145163;
  }
  bVar2 = false;
LAB_00144e90:
  bVar4 = false;
LAB_00144e93:
  switch(param_3) {
  case 0x1b:
    auVar19[0] = -(*(char *)((long)param_2 + 0xb) == DAT_00116410);
    auVar19[1] = -(*(char *)((long)param_2 + 0xc) == UNK_00116411);
    auVar19[2] = -(*(char *)((long)param_2 + 0xd) == UNK_00116412);
    auVar19[3] = -(*(char *)((long)param_2 + 0xe) == UNK_00116413);
    auVar19[4] = -(*(char *)((long)param_2 + 0xf) == UNK_00116414);
    auVar19[5] = -((char)param_2[2] == UNK_00116415);
    auVar19[6] = -(*(char *)((long)param_2 + 0x11) == UNK_00116416);
    auVar19[7] = -(*(char *)((long)param_2 + 0x12) == UNK_00116417);
    auVar19[8] = -(*(char *)((long)param_2 + 0x13) == UNK_00116418);
    auVar19[9] = -(*(char *)((long)param_2 + 0x14) == UNK_00116419);
    auVar19[10] = -(*(char *)((long)param_2 + 0x15) == UNK_0011641a);
    auVar19[0xb] = -(*(char *)((long)param_2 + 0x16) == UNK_0011641b);
    auVar19[0xc] = -(*(char *)((long)param_2 + 0x17) == UNK_0011641c);
    auVar19[0xd] = -((char)param_2[3] == UNK_0011641d);
    auVar19[0xe] = -(*(char *)((long)param_2 + 0x19) == UNK_0011641e);
    auVar19[0xf] = -(*(char *)((long)param_2 + 0x1a) == UNK_0011641f);
    auVar9[0] = -((char)*param_2 == DAT_001166d0);
    auVar9[1] = -(*(char *)((long)param_2 + 1) == UNK_001166d1);
    auVar9[2] = -(*(char *)((long)param_2 + 2) == UNK_001166d2);
    auVar9[3] = -(*(char *)((long)param_2 + 3) == UNK_001166d3);
    auVar9[4] = -(*(char *)((long)param_2 + 4) == UNK_001166d4);
    auVar9[5] = -(*(char *)((long)param_2 + 5) == UNK_001166d5);
    auVar9[6] = -(*(char *)((long)param_2 + 6) == UNK_001166d6);
    auVar9[7] = -(*(char *)((long)param_2 + 7) == UNK_001166d7);
    auVar9[8] = -((char)param_2[1] == UNK_001166d8);
    auVar9[9] = -(*(char *)((long)param_2 + 9) == UNK_001166d9);
    auVar9[10] = -(*(char *)((long)param_2 + 10) == UNK_001166da);
    auVar9[0xb] = -(*(char *)((long)param_2 + 0xb) == UNK_001166db);
    auVar9[0xc] = -(*(char *)((long)param_2 + 0xc) == UNK_001166dc);
    auVar9[0xd] = -(*(char *)((long)param_2 + 0xd) == UNK_001166dd);
    auVar9[0xe] = -(*(char *)((long)param_2 + 0xe) == UNK_001166de);
    auVar9[0xf] = -(*(char *)((long)param_2 + 0xf) == UNK_001166df);
    auVar9 = auVar9 & auVar19;
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
      *(undefined1 *)(param_1 + 1) = 0x13;
      goto LAB_001452f7;
    }
    break;
  case 0x1d:
    auVar24[0] = -(*(char *)((long)param_2 + 0xd) == DAT_00116410);
    auVar24[1] = -(*(char *)((long)param_2 + 0xe) == UNK_00116411);
    auVar24[2] = -(*(char *)((long)param_2 + 0xf) == UNK_00116412);
    auVar24[3] = -((char)param_2[2] == UNK_00116413);
    auVar24[4] = -(*(char *)((long)param_2 + 0x11) == UNK_00116414);
    auVar24[5] = -(*(char *)((long)param_2 + 0x12) == UNK_00116415);
    auVar24[6] = -(*(char *)((long)param_2 + 0x13) == UNK_00116416);
    auVar24[7] = -(*(char *)((long)param_2 + 0x14) == UNK_00116417);
    auVar24[8] = -(*(char *)((long)param_2 + 0x15) == UNK_00116418);
    auVar24[9] = -(*(char *)((long)param_2 + 0x16) == UNK_00116419);
    auVar24[10] = -(*(char *)((long)param_2 + 0x17) == UNK_0011641a);
    auVar24[0xb] = -((char)param_2[3] == UNK_0011641b);
    auVar24[0xc] = -(*(char *)((long)param_2 + 0x19) == UNK_0011641c);
    auVar24[0xd] = -(*(char *)((long)param_2 + 0x1a) == UNK_0011641d);
    auVar24[0xe] = -(*(char *)((long)param_2 + 0x1b) == UNK_0011641e);
    auVar24[0xf] = -(*(char *)((long)param_2 + 0x1c) == UNK_0011641f);
    auVar14[0] = -((char)*param_2 == DAT_001169f0);
    auVar14[1] = -(*(char *)((long)param_2 + 1) == UNK_001169f1);
    auVar14[2] = -(*(char *)((long)param_2 + 2) == UNK_001169f2);
    auVar14[3] = -(*(char *)((long)param_2 + 3) == UNK_001169f3);
    auVar14[4] = -(*(char *)((long)param_2 + 4) == UNK_001169f4);
    auVar14[5] = -(*(char *)((long)param_2 + 5) == UNK_001169f5);
    auVar14[6] = -(*(char *)((long)param_2 + 6) == UNK_001169f6);
    auVar14[7] = -(*(char *)((long)param_2 + 7) == UNK_001169f7);
    auVar14[8] = -((char)param_2[1] == UNK_001169f8);
    auVar14[9] = -(*(char *)((long)param_2 + 9) == UNK_001169f9);
    auVar14[10] = -(*(char *)((long)param_2 + 10) == UNK_001169fa);
    auVar14[0xb] = -(*(char *)((long)param_2 + 0xb) == UNK_001169fb);
    auVar14[0xc] = -(*(char *)((long)param_2 + 0xc) == UNK_001169fc);
    auVar14[0xd] = -(*(char *)((long)param_2 + 0xd) == UNK_001169fd);
    auVar14[0xe] = -(*(char *)((long)param_2 + 0xe) == UNK_001169fe);
    auVar14[0xf] = -(*(char *)((long)param_2 + 0xf) == UNK_001169ff);
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
      *(undefined1 *)(param_1 + 1) = 0x16;
      goto LAB_001452f7;
    }
    break;
  case 0x21:
    iVar5 = (*(code *)PTR_bcmp_001ccb58)
                      (param_2,
                       "dyn_score_position_ts_threshold_sdyn_score_max_position_ts_sdyn_score_delta_score"
                       ,0x21);
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x12;
      goto LAB_001452f7;
    }
    break;
  case 0x23:
    iVar5 = (*(code *)PTR_bcmp_001ccb58)
                      (param_2,"dyn_pending_position_ts_threshold_sdyn_pending_max_position_ts_s",
                       0x23);
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x15;
      goto LAB_001452f7;
    }
    iVar5 = (*(code *)PTR_bcmp_001ccb58)(param_2,"dyn_pending_delta_max_pending_ts_ms",0x23);
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x18;
      goto LAB_001452f7;
    }
    break;
  case 0x25:
    iVar5 = (*(code *)PTR_bcmp_001ccb58)(param_2,"dyn_pending_order_max_pending_time_ms",0x25);
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x17;
      goto LAB_001452f7;
    }
  }
  bVar3 = false;
  bVar6 = bVar3;
  if (bVar2) {
LAB_0014514c:
    bVar3 = bVar6;
    iVar5 = (*(code *)PTR_bcmp_001ccb58)(param_2,"max_try_hiter_timesmax_try_hiter_time_ms",param_3)
    ;
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x19;
      goto LAB_001452f7;
    }
  }
LAB_00145163:
  if (bVar3) {
    auVar25[0] = -(*(char *)((long)param_2 + 5) == DAT_001165c0);
    auVar25[1] = -(*(char *)((long)param_2 + 6) == UNK_001165c1);
    auVar25[2] = -(*(char *)((long)param_2 + 7) == UNK_001165c2);
    auVar25[3] = -((char)param_2[1] == UNK_001165c3);
    auVar25[4] = -(*(char *)((long)param_2 + 9) == UNK_001165c4);
    auVar25[5] = -(*(char *)((long)param_2 + 10) == UNK_001165c5);
    auVar25[6] = -(*(char *)((long)param_2 + 0xb) == UNK_001165c6);
    auVar25[7] = -(*(char *)((long)param_2 + 0xc) == UNK_001165c7);
    auVar25[8] = -(*(char *)((long)param_2 + 0xd) == UNK_001165c8);
    auVar25[9] = -(*(char *)((long)param_2 + 0xe) == UNK_001165c9);
    auVar25[10] = -(*(char *)((long)param_2 + 0xf) == UNK_001165ca);
    auVar25[0xb] = -((char)param_2[2] == UNK_001165cb);
    auVar25[0xc] = -(*(char *)((long)param_2 + 0x11) == UNK_001165cc);
    auVar25[0xd] = -(*(char *)((long)param_2 + 0x12) == UNK_001165cd);
    auVar25[0xe] = -(*(char *)((long)param_2 + 0x13) == UNK_001165ce);
    auVar25[0xf] = -(*(char *)((long)param_2 + 0x14) == UNK_001165cf);
    auVar15[0] = -((char)*param_2 == DAT_001166f0);
    auVar15[1] = -(*(char *)((long)param_2 + 1) == UNK_001166f1);
    auVar15[2] = -(*(char *)((long)param_2 + 2) == UNK_001166f2);
    auVar15[3] = -(*(char *)((long)param_2 + 3) == UNK_001166f3);
    auVar15[4] = -(*(char *)((long)param_2 + 4) == UNK_001166f4);
    auVar15[5] = -(*(char *)((long)param_2 + 5) == UNK_001166f5);
    auVar15[6] = -(*(char *)((long)param_2 + 6) == UNK_001166f6);
    auVar15[7] = -(*(char *)((long)param_2 + 7) == UNK_001166f7);
    auVar15[8] = -((char)param_2[1] == UNK_001166f8);
    auVar15[9] = -(*(char *)((long)param_2 + 9) == UNK_001166f9);
    auVar15[10] = -(*(char *)((long)param_2 + 10) == UNK_001166fa);
    auVar15[0xb] = -(*(char *)((long)param_2 + 0xb) == UNK_001166fb);
    auVar15[0xc] = -(*(char *)((long)param_2 + 0xc) == UNK_001166fc);
    auVar15[0xd] = -(*(char *)((long)param_2 + 0xd) == UNK_001166fd);
    auVar15[0xe] = -(*(char *)((long)param_2 + 0xe) == UNK_001166fe);
    auVar15[0xf] = -(*(char *)((long)param_2 + 0xf) == UNK_001166ff);
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
      *(undefined1 *)(param_1 + 1) = 0x1a;
      goto LAB_001452f7;
    }
  }
  else if (bVar4) {
    iVar5 = (*(code *)PTR_bcmp_001ccb58)(param_2,"price_range_bp",param_3);
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x1b;
    }
    else {
      *(undefined1 *)(param_1 + 1) = 0x1c;
    }
    goto LAB_001452f7;
  }
  *(undefined1 *)(param_1 + 1) = 0x1c;
LAB_001452f7:
  *param_1 = 2;
  return param_1;
}


