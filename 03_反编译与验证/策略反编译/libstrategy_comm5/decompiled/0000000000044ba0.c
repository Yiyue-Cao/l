// ELF address 0x0000000000044ba0; <strategy_comm5::_::<impl serde_core::de::Deserialize for strategy_comm5::Comm5Params>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_str

/* _<strategy_comm5::_::<impl serde_core::de::Deserialize for
   strategy_comm5::Comm5Params>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_str
    */

undefined8 * __rustcall
_<strategy_comm5::_::<impl_serde_core::de::Deserialize_for_strategy_comm5::Comm5Params>::deserialize::__FieldVisitor_as_serde_core::de::Visitor>
::visit_str(undefined8 *param_1,undefined1 (*param_2) [16],long param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
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
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  
  bVar3 = false;
  bVar4 = false;
  switch(param_3) {
  case 8:
    if (*(long *)*param_2 == 0x656c69746e617571) {
      *(undefined1 *)(param_1 + 1) = 5;
      goto LAB_00145837;
    }
    iVar7 = (*(code *)PTR_bcmp_00203d28)(param_2,&DAT_001163a8,param_3);
    if (iVar7 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x40;
      goto LAB_00145837;
    }
    iVar7 = (*(code *)PTR_bcmp_00203d28)(param_2,&DAT_00116490,param_3);
    if (iVar7 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x41;
      goto LAB_00145837;
    }
    break;
  case 9:
    if ((*param_2)[8] == 'a' && *(long *)*param_2 == 0x68706c615f317670) {
      *(undefined1 *)(param_1 + 1) = 1;
      goto LAB_00145837;
    }
    if ((*param_2)[8] == 'e' && *(long *)*param_2 == 0x7461725f65746f76) {
      *(undefined1 *)(param_1 + 1) = 4;
      goto LAB_00145837;
    }
    if ((*param_2)[8] == 's' && *(long *)*param_2 == 0x785f656c62616e65) {
      *(undefined1 *)(param_1 + 1) = 0x38;
      goto LAB_00145837;
    }
    break;
  case 10:
    if (*(short *)(*param_2 + 8) == 0x6168 && *(long *)*param_2 == 0x706c615f74736f63) {
      *(undefined1 *)(param_1 + 1) = 2;
      goto LAB_00145837;
    }
    if (*(short *)(*param_2 + 8) == 0x6574 && *(long *)*param_2 == 0x61675f6863756f74) {
      *(undefined1 *)(param_1 + 1) = 0x10;
      goto LAB_00145837;
    }
    iVar7 = (*(code *)PTR_bcmp_00203d28)
                      (param_2,
                       "low_actionmaker_order_max_pending_time_msmax_maker_pending_vol_on_depth",
                       param_3);
    if (iVar7 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x27;
      goto LAB_00145837;
    }
    bVar6 = false;
    bVar3 = false;
    bVar5 = false;
    goto LAB_001453f2;
  case 0xb:
    if (*(long *)(*param_2 + 3) == 0x65646f6d5f6c616e && *(long *)*param_2 == 0x6d5f6c616e676973) {
      *(undefined1 *)(param_1 + 1) = 0;
      goto LAB_00145837;
    }
    if (*(long *)(*param_2 + 3) == 0x3265736168705f74 && *(long *)*param_2 == 0x6168705f74697865) {
      *(undefined1 *)(param_1 + 1) = 0x31;
      goto LAB_00145837;
    }
    if (*(long *)(*param_2 + 3) == 0x3365736168705f74 && *(long *)*param_2 == 0x6168705f74697865) {
      *(undefined1 *)(param_1 + 1) = 0x33;
      goto LAB_00145837;
    }
    if (*(long *)(*param_2 + 3) == 0x70696c635f6c6e70 && *(long *)*param_2 == 0x635f6c6e705f7378) {
      *(undefined1 *)(param_1 + 1) = 0x43;
      goto LAB_00145837;
    }
    if (*(long *)(*param_2 + 3) == 0x6c6f6f705f6e696d && *(long *)*param_2 == 0x705f6e696d5f7378) {
      *(undefined1 *)(param_1 + 1) = 0x44;
      goto LAB_00145837;
    }
    break;
  case 0xc:
  case 0xf:
  case 0x11:
  case 0x18:
    goto switchD_00144bd5_caseD_c;
  case 0xd:
    if (*(long *)(*param_2 + 5) == 0x6b5f7265766f635f && *(long *)*param_2 == 0x6f635f72656b6174) {
      *(undefined1 *)(param_1 + 1) = 0xc;
      goto LAB_00145837;
    }
    iVar7 = (*(code *)PTR_bcmp_00203d28)(param_2,"enable_phasesinvert_phase",param_3);
    if (iVar7 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x2c;
      goto LAB_00145837;
    }
    goto LAB_00144d26;
  case 0xe:
    if (*(long *)(*param_2 + 6) == 0x657461725f72656b && *(long *)*param_2 == 0x656b61745f78616d) {
      *(undefined1 *)(param_1 + 1) = 9;
      goto LAB_00145837;
    }
    iVar7 = (*(code *)PTR_bcmp_00203d28)
                      (param_2,"taker_mult_maxtaker_cover_ktaker_skip_half_spread_bp",param_3);
    if (iVar7 == 0) {
      *(undefined1 *)(param_1 + 1) = 0xb;
      goto LAB_00145837;
    }
    iVar7 = (*(code *)PTR_bcmp_00203d28)
                      (param_2,
                       "trade_slipperyclose_position_block_mstouch_gatetouch_gate_timeout_msmax_single_add_volmax_single_add_amtmax_single_net_volmax_single_net_amtmax_single_close_volmax_single_close_amt"
                       ,param_3);
    if (iVar7 == 0) {
      *(undefined1 *)(param_1 + 1) = 0xe;
      goto LAB_00145837;
    }
    iVar7 = (*(code *)PTR_bcmp_00203d28)
                      (param_2,"daily_pnl_pathxs_dateew_lagsew_half_life_daysxs_q3xs_q2xs_qb",
                       param_3);
    if (iVar7 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x39;
      goto LAB_00145837;
    }
    break;
  case 0x10:
    auVar12[0] = -((*param_2)[0] == DAT_00116850);
    auVar12[1] = -((*param_2)[1] == UNK_00116851);
    auVar12[2] = -((*param_2)[2] == UNK_00116852);
    auVar12[3] = -((*param_2)[3] == UNK_00116853);
    auVar12[4] = -((*param_2)[4] == UNK_00116854);
    auVar12[5] = -((*param_2)[5] == UNK_00116855);
    auVar12[6] = -((*param_2)[6] == UNK_00116856);
    auVar12[7] = -((*param_2)[7] == UNK_00116857);
    auVar12[8] = -((*param_2)[8] == UNK_00116858);
    auVar12[9] = -((*param_2)[9] == UNK_00116859);
    auVar12[10] = -((*param_2)[10] == UNK_0011685a);
    auVar12[0xb] = -((*param_2)[0xb] == UNK_0011685b);
    auVar12[0xc] = -((*param_2)[0xc] == UNK_0011685c);
    auVar12[0xd] = -((*param_2)[0xd] == UNK_0011685d);
    auVar12[0xe] = -((*param_2)[0xe] == UNK_0011685e);
    auVar12[0xf] = -((*param_2)[0xf] == UNK_0011685f);
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
                 (ushort)(SUB161(auVar12 >> 0x77,0) & 1) << 0xe | (ushort)(auVar12[0xf] >> 7) << 0xf
                ) == 0xffff) {
      *(undefined1 *)(param_1 + 1) = 6;
      goto LAB_00145837;
    }
    iVar7 = (*(code *)PTR_bcmp_00203d28)(param_2,&DAT_00116c90,param_3);
    if (iVar7 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x45;
      goto LAB_00145837;
    }
    iVar7 = (*(code *)PTR_bcmp_00203d28)(param_2,&DAT_00116860,param_3);
    if (iVar7 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x46;
      goto LAB_00145837;
    }
    break;
  case 0x12:
    auVar13[0] = -((*param_2)[0] == s_max_single_add_v_00116910[0]);
    auVar13[1] = -((*param_2)[1] == s_max_single_add_v_00116910[1]);
    auVar13[2] = -((*param_2)[2] == s_max_single_add_v_00116910[2]);
    auVar13[3] = -((*param_2)[3] == s_max_single_add_v_00116910[3]);
    auVar13[4] = -((*param_2)[4] == s_max_single_add_v_00116910[4]);
    auVar13[5] = -((*param_2)[5] == s_max_single_add_v_00116910[5]);
    auVar13[6] = -((*param_2)[6] == s_max_single_add_v_00116910[6]);
    auVar13[7] = -((*param_2)[7] == s_max_single_add_v_00116910[7]);
    auVar13[8] = -((*param_2)[8] == s_max_single_add_v_00116910[8]);
    auVar13[9] = -((*param_2)[9] == s_max_single_add_v_00116910[9]);
    auVar13[10] = -((*param_2)[10] == s_max_single_add_v_00116910[10]);
    auVar13[0xb] = -((*param_2)[0xb] == s_max_single_add_v_00116910[0xb]);
    auVar13[0xc] = -((*param_2)[0xc] == s_max_single_add_v_00116910[0xc]);
    auVar13[0xd] = -((*param_2)[0xd] == s_max_single_add_v_00116910[0xd]);
    auVar13[0xe] = -((*param_2)[0xe] == s_max_single_add_v_00116910[0xe]);
    auVar13[0xf] = -((*param_2)[0xf] == s_max_single_add_v_00116910[0xf]);
    auVar31[0] = -((char)*(undefined2 *)param_2[1] == s_ol_00116550[0]);
    auVar31[1] = -((char)((ushort)*(undefined2 *)param_2[1] >> 8) == s_ol_00116550[1]);
    auVar31[2] = -(s_ol_00116550[2] == '\0');
    auVar31[3] = -(s_ol_00116550[3] == '\0');
    auVar31[4] = -(UNK_00116554 == '\0');
    auVar31[5] = -(UNK_00116555 == '\0');
    auVar31[6] = -(UNK_00116556 == '\0');
    auVar31[7] = -(UNK_00116557 == '\0');
    auVar31[8] = -(UNK_00116558 == '\0');
    auVar31[9] = -(UNK_00116559 == '\0');
    auVar31[10] = -(UNK_0011655a == '\0');
    auVar31[0xb] = -(UNK_0011655b == '\0');
    auVar31[0xc] = -(UNK_0011655c == '\0');
    auVar31[0xd] = -(UNK_0011655d == '\0');
    auVar31[0xe] = -(UNK_0011655e == '\0');
    auVar31[0xf] = -(UNK_0011655f == '\0');
    auVar31 = auVar31 & auVar13;
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
      *(undefined1 *)(param_1 + 1) = 0x12;
      goto LAB_00145837;
    }
    auVar14[0] = -((*param_2)[0] == DAT_00116840);
    auVar14[1] = -((*param_2)[1] == UNK_00116841);
    auVar14[2] = -((*param_2)[2] == UNK_00116842);
    auVar14[3] = -((*param_2)[3] == UNK_00116843);
    auVar14[4] = -((*param_2)[4] == UNK_00116844);
    auVar14[5] = -((*param_2)[5] == UNK_00116845);
    auVar14[6] = -((*param_2)[6] == UNK_00116846);
    auVar14[7] = -((*param_2)[7] == UNK_00116847);
    auVar14[8] = -((*param_2)[8] == UNK_00116848);
    auVar14[9] = -((*param_2)[9] == UNK_00116849);
    auVar14[10] = -((*param_2)[10] == UNK_0011684a);
    auVar14[0xb] = -((*param_2)[0xb] == UNK_0011684b);
    auVar14[0xc] = -((*param_2)[0xc] == UNK_0011684c);
    auVar14[0xd] = -((*param_2)[0xd] == UNK_0011684d);
    auVar14[0xe] = -((*param_2)[0xe] == UNK_0011684e);
    auVar14[0xf] = -((*param_2)[0xf] == UNK_0011684f);
    auVar32[0] = -((char)*(undefined2 *)param_2[1] == DAT_00116c10);
    auVar32[1] = -((char)((ushort)*(undefined2 *)param_2[1] >> 8) == UNK_00116c11);
    auVar32[2] = -(UNK_00116c12 == '\0');
    auVar32[3] = -(UNK_00116c13 == '\0');
    auVar32[4] = -(UNK_00116c14 == '\0');
    auVar32[5] = -(UNK_00116c15 == '\0');
    auVar32[6] = -(UNK_00116c16 == '\0');
    auVar32[7] = -(UNK_00116c17 == '\0');
    auVar32[8] = -(UNK_00116c18 == '\0');
    auVar32[9] = -(UNK_00116c19 == '\0');
    auVar32[10] = -(UNK_00116c1a == '\0');
    auVar32[0xb] = -(UNK_00116c1b == '\0');
    auVar32[0xc] = -(UNK_00116c1c == '\0');
    auVar32[0xd] = -(UNK_00116c1d == '\0');
    auVar32[0xe] = -(UNK_00116c1e == '\0');
    auVar32[0xf] = -(UNK_00116c1f == '\0');
    auVar32 = auVar32 & auVar14;
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
      *(undefined1 *)(param_1 + 1) = 0x13;
      goto LAB_00145837;
    }
    auVar15[0] = -((*param_2)[0] == s_max_single_net_v_00116890[0]);
    auVar15[1] = -((*param_2)[1] == s_max_single_net_v_00116890[1]);
    auVar15[2] = -((*param_2)[2] == s_max_single_net_v_00116890[2]);
    auVar15[3] = -((*param_2)[3] == s_max_single_net_v_00116890[3]);
    auVar15[4] = -((*param_2)[4] == s_max_single_net_v_00116890[4]);
    auVar15[5] = -((*param_2)[5] == s_max_single_net_v_00116890[5]);
    auVar15[6] = -((*param_2)[6] == s_max_single_net_v_00116890[6]);
    auVar15[7] = -((*param_2)[7] == s_max_single_net_v_00116890[7]);
    auVar15[8] = -((*param_2)[8] == s_max_single_net_v_00116890[8]);
    auVar15[9] = -((*param_2)[9] == s_max_single_net_v_00116890[9]);
    auVar15[10] = -((*param_2)[10] == s_max_single_net_v_00116890[10]);
    auVar15[0xb] = -((*param_2)[0xb] == s_max_single_net_v_00116890[0xb]);
    auVar15[0xc] = -((*param_2)[0xc] == s_max_single_net_v_00116890[0xc]);
    auVar15[0xd] = -((*param_2)[0xd] == s_max_single_net_v_00116890[0xd]);
    auVar15[0xe] = -((*param_2)[0xe] == s_max_single_net_v_00116890[0xe]);
    auVar15[0xf] = -((*param_2)[0xf] == s_max_single_net_v_00116890[0xf]);
    auVar33[0] = -((char)*(undefined2 *)param_2[1] == s_ol_00116550[0]);
    auVar33[1] = -((char)((ushort)*(undefined2 *)param_2[1] >> 8) == s_ol_00116550[1]);
    auVar33[2] = -(s_ol_00116550[2] == '\0');
    auVar33[3] = -(s_ol_00116550[3] == '\0');
    auVar33[4] = -(UNK_00116554 == '\0');
    auVar33[5] = -(UNK_00116555 == '\0');
    auVar33[6] = -(UNK_00116556 == '\0');
    auVar33[7] = -(UNK_00116557 == '\0');
    auVar33[8] = -(UNK_00116558 == '\0');
    auVar33[9] = -(UNK_00116559 == '\0');
    auVar33[10] = -(UNK_0011655a == '\0');
    auVar33[0xb] = -(UNK_0011655b == '\0');
    auVar33[0xc] = -(UNK_0011655c == '\0');
    auVar33[0xd] = -(UNK_0011655d == '\0');
    auVar33[0xe] = -(UNK_0011655e == '\0');
    auVar33[0xf] = -(UNK_0011655f == '\0');
    auVar33 = auVar33 & auVar15;
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
      *(undefined1 *)(param_1 + 1) = 0x14;
      goto LAB_00145837;
    }
    auVar16[0] = -((*param_2)[0] == s_max_single_net_a_00116a30[0]);
    auVar16[1] = -((*param_2)[1] == s_max_single_net_a_00116a30[1]);
    auVar16[2] = -((*param_2)[2] == s_max_single_net_a_00116a30[2]);
    auVar16[3] = -((*param_2)[3] == s_max_single_net_a_00116a30[3]);
    auVar16[4] = -((*param_2)[4] == s_max_single_net_a_00116a30[4]);
    auVar16[5] = -((*param_2)[5] == s_max_single_net_a_00116a30[5]);
    auVar16[6] = -((*param_2)[6] == s_max_single_net_a_00116a30[6]);
    auVar16[7] = -((*param_2)[7] == s_max_single_net_a_00116a30[7]);
    auVar16[8] = -((*param_2)[8] == s_max_single_net_a_00116a30[8]);
    auVar16[9] = -((*param_2)[9] == s_max_single_net_a_00116a30[9]);
    auVar16[10] = -((*param_2)[10] == s_max_single_net_a_00116a30[10]);
    auVar16[0xb] = -((*param_2)[0xb] == s_max_single_net_a_00116a30[0xb]);
    auVar16[0xc] = -((*param_2)[0xc] == s_max_single_net_a_00116a30[0xc]);
    auVar16[0xd] = -((*param_2)[0xd] == s_max_single_net_a_00116a30[0xd]);
    auVar16[0xe] = -((*param_2)[0xe] == s_max_single_net_a_00116a30[0xe]);
    auVar16[0xf] = -((*param_2)[0xf] == s_max_single_net_a_00116a30[0xf]);
    auVar34[0] = -((char)*(undefined2 *)param_2[1] == DAT_00116c10);
    auVar34[1] = -((char)((ushort)*(undefined2 *)param_2[1] >> 8) == UNK_00116c11);
    auVar34[2] = -(UNK_00116c12 == '\0');
    auVar34[3] = -(UNK_00116c13 == '\0');
    auVar34[4] = -(UNK_00116c14 == '\0');
    auVar34[5] = -(UNK_00116c15 == '\0');
    auVar34[6] = -(UNK_00116c16 == '\0');
    auVar34[7] = -(UNK_00116c17 == '\0');
    auVar34[8] = -(UNK_00116c18 == '\0');
    auVar34[9] = -(UNK_00116c19 == '\0');
    auVar34[10] = -(UNK_00116c1a == '\0');
    auVar34[0xb] = -(UNK_00116c1b == '\0');
    auVar34[0xc] = -(UNK_00116c1c == '\0');
    auVar34[0xd] = -(UNK_00116c1d == '\0');
    auVar34[0xe] = -(UNK_00116c1e == '\0');
    auVar34[0xf] = -(UNK_00116c1f == '\0');
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
      *(undefined1 *)(param_1 + 1) = 0x15;
      goto LAB_00145837;
    }
    iVar7 = (*(code *)PTR_bcmp_00203d28)
                      (param_2,"rolling_windows_mssplit_high_low_ratio_threshold",param_3);
    if (iVar7 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x25;
      goto LAB_00145837;
    }
    bVar5 = true;
    bVar6 = false;
    bVar3 = false;
    goto LAB_001453b6;
  case 0x13:
    auVar37[0] = -((*param_2)[3] == DAT_00116570);
    auVar37[1] = -((*param_2)[4] == UNK_00116571);
    auVar37[2] = -((*param_2)[5] == UNK_00116572);
    auVar37[3] = -((*param_2)[6] == UNK_00116573);
    auVar37[4] = -((*param_2)[7] == UNK_00116574);
    auVar37[5] = -((*param_2)[8] == UNK_00116575);
    auVar37[6] = -((*param_2)[9] == UNK_00116576);
    auVar37[7] = -((*param_2)[10] == UNK_00116577);
    auVar37[8] = -((*param_2)[0xb] == UNK_00116578);
    auVar37[9] = -((*param_2)[0xc] == UNK_00116579);
    auVar37[10] = -((*param_2)[0xd] == UNK_0011657a);
    auVar37[0xb] = -((*param_2)[0xe] == UNK_0011657b);
    auVar37[0xc] = -((*param_2)[0xf] == UNK_0011657c);
    auVar37[0xd] = -(param_2[1][0] == UNK_0011657d);
    auVar37[0xe] = -(param_2[1][1] == UNK_0011657e);
    auVar37[0xf] = -(param_2[1][2] == UNK_0011657f);
    auVar18[0] = -((*param_2)[0] == s_signal_trigger_m_00116a50[0]);
    auVar18[1] = -((*param_2)[1] == s_signal_trigger_m_00116a50[1]);
    auVar18[2] = -((*param_2)[2] == s_signal_trigger_m_00116a50[2]);
    auVar18[3] = -((*param_2)[3] == s_signal_trigger_m_00116a50[3]);
    auVar18[4] = -((*param_2)[4] == s_signal_trigger_m_00116a50[4]);
    auVar18[5] = -((*param_2)[5] == s_signal_trigger_m_00116a50[5]);
    auVar18[6] = -((*param_2)[6] == s_signal_trigger_m_00116a50[6]);
    auVar18[7] = -((*param_2)[7] == s_signal_trigger_m_00116a50[7]);
    auVar18[8] = -((*param_2)[8] == s_signal_trigger_m_00116a50[8]);
    auVar18[9] = -((*param_2)[9] == s_signal_trigger_m_00116a50[9]);
    auVar18[10] = -((*param_2)[10] == s_signal_trigger_m_00116a50[10]);
    auVar18[0xb] = -((*param_2)[0xb] == s_signal_trigger_m_00116a50[0xb]);
    auVar18[0xc] = -((*param_2)[0xc] == s_signal_trigger_m_00116a50[0xc]);
    auVar18[0xd] = -((*param_2)[0xd] == s_signal_trigger_m_00116a50[0xd]);
    auVar18[0xe] = -((*param_2)[0xe] == s_signal_trigger_m_00116a50[0xe]);
    auVar18[0xf] = -((*param_2)[0xf] == s_signal_trigger_m_00116a50[0xf]);
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
      *(undefined1 *)(param_1 + 1) = 3;
      goto LAB_00145837;
    }
    iVar7 = (*(code *)PTR_bcmp_00203d28)(param_2,"taker_rate_baselinemax_taker_rate",param_3);
    if (iVar7 == 0) {
      *(undefined1 *)(param_1 + 1) = 8;
      goto LAB_00145837;
    }
    iVar7 = (*(code *)PTR_bcmp_00203d28)(param_2,"long_open_threshold",param_3);
    if (iVar7 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x18;
      goto LAB_00145837;
    }
    goto LAB_00145258;
  case 0x14:
    uVar2 = *(undefined4 *)param_2[1];
    auVar35[0] = -((char)uVar2 == DAT_00116510);
    auVar35[1] = -((char)((uint)uVar2 >> 8) == UNK_00116511);
    auVar35[2] = -((char)((uint)uVar2 >> 0x10) == UNK_00116512);
    auVar35[3] = -((char)((uint)uVar2 >> 0x18) == UNK_00116513);
    auVar35[4] = -(UNK_00116514 == '\0');
    auVar35[5] = -(UNK_00116515 == '\0');
    auVar35[6] = -(UNK_00116516 == '\0');
    auVar35[7] = -(UNK_00116517 == '\0');
    auVar35[8] = -(UNK_00116518 == '\0');
    auVar35[9] = -(UNK_00116519 == '\0');
    auVar35[10] = -(UNK_0011651a == '\0');
    auVar35[0xb] = -(UNK_0011651b == '\0');
    auVar35[0xc] = -(UNK_0011651c == '\0');
    auVar35[0xd] = -(UNK_0011651d == '\0');
    auVar35[0xe] = -(UNK_0011651e == '\0');
    auVar35[0xf] = -(UNK_0011651f == '\0');
    auVar17[0] = -((*param_2)[0] == s_max_single_close_001166b0[0]);
    auVar17[1] = -((*param_2)[1] == s_max_single_close_001166b0[1]);
    auVar17[2] = -((*param_2)[2] == s_max_single_close_001166b0[2]);
    auVar17[3] = -((*param_2)[3] == s_max_single_close_001166b0[3]);
    auVar17[4] = -((*param_2)[4] == s_max_single_close_001166b0[4]);
    auVar17[5] = -((*param_2)[5] == s_max_single_close_001166b0[5]);
    auVar17[6] = -((*param_2)[6] == s_max_single_close_001166b0[6]);
    auVar17[7] = -((*param_2)[7] == s_max_single_close_001166b0[7]);
    auVar17[8] = -((*param_2)[8] == s_max_single_close_001166b0[8]);
    auVar17[9] = -((*param_2)[9] == s_max_single_close_001166b0[9]);
    auVar17[10] = -((*param_2)[10] == s_max_single_close_001166b0[10]);
    auVar17[0xb] = -((*param_2)[0xb] == s_max_single_close_001166b0[0xb]);
    auVar17[0xc] = -((*param_2)[0xc] == s_max_single_close_001166b0[0xc]);
    auVar17[0xd] = -((*param_2)[0xd] == s_max_single_close_001166b0[0xd]);
    auVar17[0xe] = -((*param_2)[0xe] == s_max_single_close_001166b0[0xe]);
    auVar17[0xf] = -((*param_2)[0xf] == s_max_single_close_001166b0[0xf]);
    auVar17 = auVar17 & auVar35;
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
      *(undefined1 *)(param_1 + 1) = 0x16;
      goto LAB_00145837;
    }
    auVar8 = *param_2;
    uVar2 = *(undefined4 *)param_2[1];
    auVar46[0] = -((char)uVar2 == s__amt_001167a0[0]);
    auVar46[1] = -((char)((uint)uVar2 >> 8) == s__amt_001167a0[1]);
    auVar46[2] = -((char)((uint)uVar2 >> 0x10) == s__amt_001167a0[2]);
    auVar46[3] = -((char)((uint)uVar2 >> 0x18) == s__amt_001167a0[3]);
    auVar46[4] = -(s__amt_001167a0[4] == '\0');
    auVar46[5] = -(s__amt_001167a0[5] == '\0');
    auVar46[6] = -(s__amt_001167a0[6] == '\0');
    auVar46[7] = -(s__amt_001167a0[7] == '\0');
    auVar46[8] = -(UNK_001167a8 == '\0');
    auVar46[9] = -(UNK_001167a9 == '\0');
    auVar46[10] = -(UNK_001167aa == '\0');
    auVar46[0xb] = -(UNK_001167ab == '\0');
    auVar46[0xc] = -(UNK_001167ac == '\0');
    auVar46[0xd] = -(UNK_001167ad == '\0');
    auVar46[0xe] = -(UNK_001167ae == '\0');
    auVar46[0xf] = -(UNK_001167af == '\0');
    auVar36[0] = -(auVar8[0] == 'm');
    auVar36[1] = -(auVar8[1] == 'a');
    auVar36[2] = -(auVar8[2] == 'x');
    auVar36[3] = -(auVar8[3] == '_');
    auVar36[4] = -(auVar8[4] == 's');
    auVar36[5] = -(auVar8[5] == 'i');
    auVar36[6] = -(auVar8[6] == 'n');
    auVar36[7] = -(auVar8[7] == 'g');
    auVar36[8] = -(auVar8[8] == 'l');
    auVar36[9] = -(auVar8[9] == 'e');
    auVar36[10] = -(auVar8[10] == '_');
    auVar36[0xb] = -(auVar8[0xb] == 'c');
    auVar36[0xc] = -(auVar8[0xc] == 'l');
    auVar36[0xd] = -(auVar8[0xd] == 'o');
    auVar36[0xe] = -(auVar8[0xe] == 's');
    auVar36[0xf] = -(auVar8[0xf] == 'e');
    auVar46 = auVar46 & auVar36;
    if ((ushort)((ushort)(SUB161(auVar46 >> 7,0) & 1) | (ushort)(SUB161(auVar46 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar46 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar46 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar46 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar46 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar46 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar46 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar46 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar46 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar46 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar46 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar46 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar46 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar46 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar46[0xf] >> 7) << 0xf) == 0xffff) {
      *(undefined1 *)(param_1 + 1) = 0x17;
      goto LAB_00145837;
    }
    iVar7 = (*(code *)PTR_bcmp_00203d28)(param_2,"long_close_threshold",param_3);
    if (iVar7 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x19;
      goto LAB_00145837;
    }
    iVar7 = (*(code *)PTR_bcmp_00203d28)(param_2,"short_open_threshold",param_3);
    if (iVar7 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x1a;
      goto LAB_00145837;
    }
    bVar4 = true;
    bVar3 = false;
    goto switchD_00144bd5_caseD_c;
  case 0x15:
    auVar28[0] = -((*param_2)[5] == DAT_00116980);
    auVar28[1] = -((*param_2)[6] == UNK_00116981);
    auVar28[2] = -((*param_2)[7] == UNK_00116982);
    auVar28[3] = -((*param_2)[8] == UNK_00116983);
    auVar28[4] = -((*param_2)[9] == UNK_00116984);
    auVar28[5] = -((*param_2)[10] == UNK_00116985);
    auVar28[6] = -((*param_2)[0xb] == UNK_00116986);
    auVar28[7] = -((*param_2)[0xc] == UNK_00116987);
    auVar28[8] = -((*param_2)[0xd] == UNK_00116988);
    auVar28[9] = -((*param_2)[0xe] == UNK_00116989);
    auVar28[10] = -((*param_2)[0xf] == UNK_0011698a);
    auVar28[0xb] = -(param_2[1][0] == UNK_0011698b);
    auVar28[0xc] = -(param_2[1][1] == UNK_0011698c);
    auVar28[0xd] = -(param_2[1][2] == UNK_0011698d);
    auVar28[0xe] = -(param_2[1][3] == UNK_0011698e);
    auVar28[0xf] = -(param_2[1][4] == UNK_0011698f);
    auVar9[0] = -((*param_2)[0] == DAT_001165d0);
    auVar9[1] = -((*param_2)[1] == UNK_001165d1);
    auVar9[2] = -((*param_2)[2] == UNK_001165d2);
    auVar9[3] = -((*param_2)[3] == UNK_001165d3);
    auVar9[4] = -((*param_2)[4] == UNK_001165d4);
    auVar9[5] = -((*param_2)[5] == UNK_001165d5);
    auVar9[6] = -((*param_2)[6] == UNK_001165d6);
    auVar9[7] = -((*param_2)[7] == UNK_001165d7);
    auVar9[8] = -((*param_2)[8] == UNK_001165d8);
    auVar9[9] = -((*param_2)[9] == UNK_001165d9);
    auVar9[10] = -((*param_2)[10] == UNK_001165da);
    auVar9[0xb] = -((*param_2)[0xb] == UNK_001165db);
    auVar9[0xc] = -((*param_2)[0xc] == UNK_001165dc);
    auVar9[0xd] = -((*param_2)[0xd] == UNK_001165dd);
    auVar9[0xe] = -((*param_2)[0xe] == UNK_001165de);
    auVar9[0xf] = -((*param_2)[0xf] == UNK_001165df);
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
      *(undefined1 *)(param_1 + 1) = 0x11;
      goto LAB_00145837;
    }
    iVar7 = (*(code *)PTR_bcmp_00203d28)(param_2,"short_close_threshold",param_3);
    if (iVar7 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x1b;
      goto LAB_00145837;
    }
    bVar3 = true;
  default:
switchD_00144bd5_default:
    bVar4 = false;
switchD_00144bd5_caseD_c:
    if (param_3 == 0x21) {
      iVar7 = (*(code *)PTR_bcmp_00203d28)
                        (param_2,"dyn_score_position_ts_threshold_sdyn_score_max_position_ts_s",0x21
                        );
      if (iVar7 == 0) {
        *(undefined1 *)(param_1 + 1) = 0x20;
        goto LAB_00145837;
      }
LAB_0014537a:
      if (bVar4) {
LAB_00145396:
        iVar7 = (*(code *)PTR_bcmp_00203d28)(param_2,"market_volatility_ms",param_3);
        if (iVar7 == 0) {
          *(undefined1 *)(param_1 + 1) = 0x24;
          goto LAB_00145837;
        }
        bVar6 = true;
      }
      else {
        bVar6 = false;
      }
      bVar5 = false;
    }
    else {
      if (param_3 == 0x1b) {
        auVar40[0] = -((*param_2)[0xb] == s_ax_position_ts_s_001164e0[0]);
        auVar40[1] = -((*param_2)[0xc] == s_ax_position_ts_s_001164e0[1]);
        auVar40[2] = -((*param_2)[0xd] == s_ax_position_ts_s_001164e0[2]);
        auVar40[3] = -((*param_2)[0xe] == s_ax_position_ts_s_001164e0[3]);
        auVar40[4] = -((*param_2)[0xf] == s_ax_position_ts_s_001164e0[4]);
        auVar40[5] = -(param_2[1][0] == s_ax_position_ts_s_001164e0[5]);
        auVar40[6] = -(param_2[1][1] == s_ax_position_ts_s_001164e0[6]);
        auVar40[7] = -(param_2[1][2] == s_ax_position_ts_s_001164e0[7]);
        auVar40[8] = -(param_2[1][3] == s_ax_position_ts_s_001164e0[8]);
        auVar40[9] = -(param_2[1][4] == s_ax_position_ts_s_001164e0[9]);
        auVar40[10] = -(param_2[1][5] == s_ax_position_ts_s_001164e0[10]);
        auVar40[0xb] = -(param_2[1][6] == s_ax_position_ts_s_001164e0[0xb]);
        auVar40[0xc] = -(param_2[1][7] == s_ax_position_ts_s_001164e0[0xc]);
        auVar40[0xd] = -(param_2[1][8] == s_ax_position_ts_s_001164e0[0xd]);
        auVar40[0xe] = -(param_2[1][9] == s_ax_position_ts_s_001164e0[0xe]);
        auVar40[0xf] = -(param_2[1][10] == s_ax_position_ts_s_001164e0[0xf]);
        auVar21[0] = -((*param_2)[0] == DAT_00116820);
        auVar21[1] = -((*param_2)[1] == UNK_00116821);
        auVar21[2] = -((*param_2)[2] == UNK_00116822);
        auVar21[3] = -((*param_2)[3] == UNK_00116823);
        auVar21[4] = -((*param_2)[4] == UNK_00116824);
        auVar21[5] = -((*param_2)[5] == UNK_00116825);
        auVar21[6] = -((*param_2)[6] == UNK_00116826);
        auVar21[7] = -((*param_2)[7] == UNK_00116827);
        auVar21[8] = -((*param_2)[8] == UNK_00116828);
        auVar21[9] = -((*param_2)[9] == UNK_00116829);
        auVar21[10] = -((*param_2)[10] == UNK_0011682a);
        auVar21[0xb] = -((*param_2)[0xb] == UNK_0011682b);
        auVar21[0xc] = -((*param_2)[0xc] == UNK_0011682c);
        auVar21[0xd] = -((*param_2)[0xd] == UNK_0011682d);
        auVar21[0xe] = -((*param_2)[0xe] == UNK_0011682e);
        auVar21[0xf] = -((*param_2)[0xf] == UNK_0011682f);
        auVar21 = auVar21 & auVar40;
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
          *(undefined1 *)(param_1 + 1) = 0x21;
          goto LAB_00145837;
        }
        auVar41[0] = -((*param_2)[0xb] == DAT_00116580);
        auVar41[1] = -((*param_2)[0xc] == UNK_00116581);
        auVar41[2] = -((*param_2)[0xd] == UNK_00116582);
        auVar41[3] = -((*param_2)[0xe] == UNK_00116583);
        auVar41[4] = -((*param_2)[0xf] == UNK_00116584);
        auVar41[5] = -(param_2[1][0] == UNK_00116585);
        auVar41[6] = -(param_2[1][1] == UNK_00116586);
        auVar41[7] = -(param_2[1][2] == UNK_00116587);
        auVar41[8] = -(param_2[1][3] == UNK_00116588);
        auVar41[9] = -(param_2[1][4] == UNK_00116589);
        auVar41[10] = -(param_2[1][5] == UNK_0011658a);
        auVar41[0xb] = -(param_2[1][6] == UNK_0011658b);
        auVar41[0xc] = -(param_2[1][7] == UNK_0011658c);
        auVar41[0xd] = -(param_2[1][8] == UNK_0011658d);
        auVar41[0xe] = -(param_2[1][9] == UNK_0011658e);
        auVar41[0xf] = -(param_2[1][10] == UNK_0011658f);
        auVar22[0] = -((*param_2)[0] == DAT_00116b30);
        auVar22[1] = -((*param_2)[1] == UNK_00116b31);
        auVar22[2] = -((*param_2)[2] == UNK_00116b32);
        auVar22[3] = -((*param_2)[3] == UNK_00116b33);
        auVar22[4] = -((*param_2)[4] == UNK_00116b34);
        auVar22[5] = -((*param_2)[5] == UNK_00116b35);
        auVar22[6] = -((*param_2)[6] == UNK_00116b36);
        auVar22[7] = -((*param_2)[7] == UNK_00116b37);
        auVar22[8] = -((*param_2)[8] == UNK_00116b38);
        auVar22[9] = -((*param_2)[9] == UNK_00116b39);
        auVar22[10] = -((*param_2)[10] == UNK_00116b3a);
        auVar22[0xb] = -((*param_2)[0xb] == UNK_00116b3b);
        auVar22[0xc] = -((*param_2)[0xc] == UNK_00116b3c);
        auVar22[0xd] = -((*param_2)[0xd] == UNK_00116b3d);
        auVar22[0xe] = -((*param_2)[0xe] == UNK_00116b3e);
        auVar22[0xf] = -((*param_2)[0xf] == UNK_00116b3f);
        auVar22 = auVar22 & auVar41;
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
          *(undefined1 *)(param_1 + 1) = 0x23;
          goto LAB_00145837;
        }
        goto LAB_0014537a;
      }
      if (param_3 == 0x18) {
        uVar1 = *(undefined8 *)param_2[1];
        auVar38[0] = -((char)uVar1 == s_hreshold_001169c0[0]);
        auVar38[1] = -((char)((ulong)uVar1 >> 8) == s_hreshold_001169c0[1]);
        auVar38[2] = -((char)((ulong)uVar1 >> 0x10) == s_hreshold_001169c0[2]);
        auVar38[3] = -((char)((ulong)uVar1 >> 0x18) == s_hreshold_001169c0[3]);
        auVar38[4] = -((char)((ulong)uVar1 >> 0x20) == s_hreshold_001169c0[4]);
        auVar38[5] = -((char)((ulong)uVar1 >> 0x28) == s_hreshold_001169c0[5]);
        auVar38[6] = -((char)((ulong)uVar1 >> 0x30) == s_hreshold_001169c0[6]);
        auVar38[7] = -((char)((ulong)uVar1 >> 0x38) == s_hreshold_001169c0[7]);
        auVar38[8] = -(s_hreshold_001169c0[8] == '\0');
        auVar38[9] = -(s_hreshold_001169c0[9] == '\0');
        auVar38[10] = -(s_hreshold_001169c0[10] == '\0');
        auVar38[0xb] = -(s_hreshold_001169c0[0xb] == '\0');
        auVar38[0xc] = -(UNK_001169cc == '\0');
        auVar38[0xd] = -(UNK_001169cd == '\0');
        auVar38[0xe] = -(UNK_001169ce == '\0');
        auVar38[0xf] = -(UNK_001169cf == '\0');
        auVar19[0] = -((*param_2)[0] == DAT_00116830);
        auVar19[1] = -((*param_2)[1] == UNK_00116831);
        auVar19[2] = -((*param_2)[2] == UNK_00116832);
        auVar19[3] = -((*param_2)[3] == UNK_00116833);
        auVar19[4] = -((*param_2)[4] == UNK_00116834);
        auVar19[5] = -((*param_2)[5] == UNK_00116835);
        auVar19[6] = -((*param_2)[6] == UNK_00116836);
        auVar19[7] = -((*param_2)[7] == UNK_00116837);
        auVar19[8] = -((*param_2)[8] == UNK_00116838);
        auVar19[9] = -((*param_2)[9] == UNK_00116839);
        auVar19[10] = -((*param_2)[10] == UNK_0011683a);
        auVar19[0xb] = -((*param_2)[0xb] == UNK_0011683b);
        auVar19[0xc] = -((*param_2)[0xc] == UNK_0011683c);
        auVar19[0xd] = -((*param_2)[0xd] == UNK_0011683d);
        auVar19[0xe] = -((*param_2)[0xe] == UNK_0011683e);
        auVar19[0xf] = -((*param_2)[0xf] == UNK_0011683f);
        auVar19 = auVar19 & auVar38;
        if ((ushort)((ushort)(SUB161(auVar19 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
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
          *(undefined1 *)(param_1 + 1) = 0x1d;
          goto LAB_00145837;
        }
        uVar1 = *(undefined8 *)param_2[1];
        auVar39[0] = -((char)uVar1 == s_hreshold_001169c0[0]);
        auVar39[1] = -((char)((ulong)uVar1 >> 8) == s_hreshold_001169c0[1]);
        auVar39[2] = -((char)((ulong)uVar1 >> 0x10) == s_hreshold_001169c0[2]);
        auVar39[3] = -((char)((ulong)uVar1 >> 0x18) == s_hreshold_001169c0[3]);
        auVar39[4] = -((char)((ulong)uVar1 >> 0x20) == s_hreshold_001169c0[4]);
        auVar39[5] = -((char)((ulong)uVar1 >> 0x28) == s_hreshold_001169c0[5]);
        auVar39[6] = -((char)((ulong)uVar1 >> 0x30) == s_hreshold_001169c0[6]);
        auVar39[7] = -((char)((ulong)uVar1 >> 0x38) == s_hreshold_001169c0[7]);
        auVar39[8] = -(s_hreshold_001169c0[8] == '\0');
        auVar39[9] = -(s_hreshold_001169c0[9] == '\0');
        auVar39[10] = -(s_hreshold_001169c0[10] == '\0');
        auVar39[0xb] = -(s_hreshold_001169c0[0xb] == '\0');
        auVar39[0xc] = -(UNK_001169cc == '\0');
        auVar39[0xd] = -(UNK_001169cd == '\0');
        auVar39[0xe] = -(UNK_001169ce == '\0');
        auVar39[0xf] = -(UNK_001169cf == '\0');
        auVar20[0] = -((*param_2)[0] == DAT_001165e0);
        auVar20[1] = -((*param_2)[1] == UNK_001165e1);
        auVar20[2] = -((*param_2)[2] == UNK_001165e2);
        auVar20[3] = -((*param_2)[3] == UNK_001165e3);
        auVar20[4] = -((*param_2)[4] == UNK_001165e4);
        auVar20[5] = -((*param_2)[5] == UNK_001165e5);
        auVar20[6] = -((*param_2)[6] == UNK_001165e6);
        auVar20[7] = -((*param_2)[7] == UNK_001165e7);
        auVar20[8] = -((*param_2)[8] == UNK_001165e8);
        auVar20[9] = -((*param_2)[9] == UNK_001165e9);
        auVar20[10] = -((*param_2)[10] == UNK_001165ea);
        auVar20[0xb] = -((*param_2)[0xb] == UNK_001165eb);
        auVar20[0xc] = -((*param_2)[0xc] == UNK_001165ec);
        auVar20[0xd] = -((*param_2)[0xd] == UNK_001165ed);
        auVar20[0xe] = -((*param_2)[0xe] == UNK_001165ee);
        auVar20[0xf] = -((*param_2)[0xf] == UNK_001165ef);
        auVar20 = auVar20 & auVar39;
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
                    (ushort)(byte)(auVar20[0xf] >> 7) << 0xf) == 0xffff) {
          *(undefined1 *)(param_1 + 1) = 0x1e;
          goto LAB_00145837;
        }
      }
      if (bVar3) {
        iVar7 = (*(code *)PTR_bcmp_00203d28)
                          (param_2,"dyn_score_delta_scoreuse_dynamic_volspread_ratio",param_3);
        if (iVar7 == 0) {
          *(undefined1 *)(param_1 + 1) = 0x22;
          goto LAB_00145837;
        }
        bVar3 = true;
        goto LAB_0014537a;
      }
      bVar3 = false;
      bVar6 = false;
      bVar5 = false;
      if (bVar4) goto LAB_00145396;
    }
LAB_001453b6:
    if (param_3 == 0x1e) {
      auVar42[0] = -((*param_2)[0xe] == DAT_001167b0);
      auVar42[1] = -((*param_2)[0xf] == UNK_001167b1);
      auVar42[2] = -(param_2[1][0] == UNK_001167b2);
      auVar42[3] = -(param_2[1][1] == UNK_001167b3);
      auVar42[4] = -(param_2[1][2] == UNK_001167b4);
      auVar42[5] = -(param_2[1][3] == UNK_001167b5);
      auVar42[6] = -(param_2[1][4] == UNK_001167b6);
      auVar42[7] = -(param_2[1][5] == UNK_001167b7);
      auVar42[8] = -(param_2[1][6] == UNK_001167b8);
      auVar42[9] = -(param_2[1][7] == UNK_001167b9);
      auVar42[10] = -(param_2[1][8] == UNK_001167ba);
      auVar42[0xb] = -(param_2[1][9] == UNK_001167bb);
      auVar42[0xc] = -(param_2[1][10] == UNK_001167bc);
      auVar42[0xd] = -(param_2[1][0xb] == UNK_001167bd);
      auVar42[0xe] = -(param_2[1][0xc] == UNK_001167be);
      auVar42[0xf] = -(param_2[1][0xd] == UNK_001167bf);
      auVar23[0] = -((*param_2)[0] == s_split_high_low_r_00116620[0]);
      auVar23[1] = -((*param_2)[1] == s_split_high_low_r_00116620[1]);
      auVar23[2] = -((*param_2)[2] == s_split_high_low_r_00116620[2]);
      auVar23[3] = -((*param_2)[3] == s_split_high_low_r_00116620[3]);
      auVar23[4] = -((*param_2)[4] == s_split_high_low_r_00116620[4]);
      auVar23[5] = -((*param_2)[5] == s_split_high_low_r_00116620[5]);
      auVar23[6] = -((*param_2)[6] == s_split_high_low_r_00116620[6]);
      auVar23[7] = -((*param_2)[7] == s_split_high_low_r_00116620[7]);
      auVar23[8] = -((*param_2)[8] == s_split_high_low_r_00116620[8]);
      auVar23[9] = -((*param_2)[9] == s_split_high_low_r_00116620[9]);
      auVar23[10] = -((*param_2)[10] == s_split_high_low_r_00116620[10]);
      auVar23[0xb] = -((*param_2)[0xb] == s_split_high_low_r_00116620[0xb]);
      auVar23[0xc] = -((*param_2)[0xc] == s_split_high_low_r_00116620[0xc]);
      auVar23[0xd] = -((*param_2)[0xd] == s_split_high_low_r_00116620[0xd]);
      auVar23[0xe] = -((*param_2)[0xe] == s_split_high_low_r_00116620[0xe]);
      auVar23[0xf] = -((*param_2)[0xf] == s_split_high_low_r_00116620[0xf]);
      auVar23 = auVar23 & auVar42;
      bVar4 = true;
      if ((ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) |
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
                  (ushort)(byte)(auVar23[0xf] >> 7) << 0xf) == 0xffff) {
        *(undefined1 *)(param_1 + 1) = 0x26;
        goto LAB_00145837;
      }
    }
    else {
LAB_001453f2:
      bVar4 = false;
    }
    if (param_3 == 0x1f) {
      auVar43[0] = -((*param_2)[0xf] == s__pending_time_ms_00116920[0]);
      auVar43[1] = -(param_2[1][0] == s__pending_time_ms_00116920[1]);
      auVar43[2] = -(param_2[1][1] == s__pending_time_ms_00116920[2]);
      auVar43[3] = -(param_2[1][2] == s__pending_time_ms_00116920[3]);
      auVar43[4] = -(param_2[1][3] == s__pending_time_ms_00116920[4]);
      auVar43[5] = -(param_2[1][4] == s__pending_time_ms_00116920[5]);
      auVar43[6] = -(param_2[1][5] == s__pending_time_ms_00116920[6]);
      auVar43[7] = -(param_2[1][6] == s__pending_time_ms_00116920[7]);
      auVar43[8] = -(param_2[1][7] == s__pending_time_ms_00116920[8]);
      auVar43[9] = -(param_2[1][8] == s__pending_time_ms_00116920[9]);
      auVar43[10] = -(param_2[1][9] == s__pending_time_ms_00116920[10]);
      auVar43[0xb] = -(param_2[1][10] == s__pending_time_ms_00116920[0xb]);
      auVar43[0xc] = -(param_2[1][0xb] == s__pending_time_ms_00116920[0xc]);
      auVar43[0xd] = -(param_2[1][0xc] == s__pending_time_ms_00116920[0xd]);
      auVar43[0xe] = -(param_2[1][0xd] == s__pending_time_ms_00116920[0xe]);
      auVar43[0xf] = -(param_2[1][0xe] == s__pending_time_ms_00116920[0xf]);
      auVar24[0] = -((*param_2)[0] == DAT_00116c30);
      auVar24[1] = -((*param_2)[1] == UNK_00116c31);
      auVar24[2] = -((*param_2)[2] == UNK_00116c32);
      auVar24[3] = -((*param_2)[3] == UNK_00116c33);
      auVar24[4] = -((*param_2)[4] == UNK_00116c34);
      auVar24[5] = -((*param_2)[5] == UNK_00116c35);
      auVar24[6] = -((*param_2)[6] == UNK_00116c36);
      auVar24[7] = -((*param_2)[7] == UNK_00116c37);
      auVar24[8] = -((*param_2)[8] == UNK_00116c38);
      auVar24[9] = -((*param_2)[9] == UNK_00116c39);
      auVar24[10] = -((*param_2)[10] == UNK_00116c3a);
      auVar24[0xb] = -((*param_2)[0xb] == UNK_00116c3b);
      auVar24[0xc] = -((*param_2)[0xc] == UNK_00116c3c);
      auVar24[0xd] = -((*param_2)[0xd] == UNK_00116c3d);
      auVar24[0xe] = -((*param_2)[0xe] == UNK_00116c3e);
      auVar24[0xf] = -((*param_2)[0xf] == UNK_00116c3f);
      auVar24 = auVar24 & auVar43;
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
                  (ushort)(byte)(auVar24[0xf] >> 7) << 0xf) == 0xffff) {
        *(undefined1 *)(param_1 + 1) = 0x28;
        goto LAB_00145837;
      }
      if (bVar5) {
LAB_00145469:
        iVar7 = (*(code *)PTR_bcmp_00203d28)(param_2,"maker_ticks_inside",param_3);
        if (iVar7 == 0) {
          *(undefined1 *)(param_1 + 1) = 0x2a;
          goto LAB_00145837;
        }
        goto LAB_00145484;
      }
LAB_00145510:
      if ((bVar3) &&
         (iVar7 = (*(code *)PTR_bcmp_00203d28)(param_2,"watcher_strategy_name",param_3), iVar7 == 0)
         ) {
        *(undefined1 *)(param_1 + 1) = 0x2e;
        goto LAB_00145837;
      }
      if ((!bVar6) ||
         (iVar7 = (*(code *)PTR_bcmp_00203d28)(param_2,"watcher_account_name",param_3), iVar7 != 0))
      {
LAB_00145550:
        if (param_3 == 6) {
          if (*(short *)(*param_2 + 4) == 0x3165 && *(int *)*param_2 == 0x73616870) {
            *(undefined1 *)(param_1 + 1) = 0x35;
            goto LAB_00145837;
          }
          if (*(short *)(*param_2 + 4) == 0x3265 && *(int *)*param_2 == 0x73616870) {
            *(undefined1 *)(param_1 + 1) = 0x36;
            goto LAB_00145837;
          }
          if (*(short *)(*param_2 + 4) == 0x3365 && *(int *)*param_2 == 0x73616870) {
            *(undefined1 *)(param_1 + 1) = 0x37;
            goto LAB_00145837;
          }
        }
        else {
          bVar3 = false;
LAB_00145631:
          if (param_3 == 5) {
            if ((*param_2)[4] == '3' && *(int *)*param_2 == 0x715f7378) {
              *(undefined1 *)(param_1 + 1) = 0x3d;
              goto LAB_00145837;
            }
            if ((*param_2)[4] == '2' && *(int *)*param_2 == 0x715f7378) {
              *(undefined1 *)(param_1 + 1) = 0x3e;
              goto LAB_00145837;
            }
            if ((*param_2)[4] == 'b' && *(int *)*param_2 == 0x715f7378) {
              *(undefined1 *)(param_1 + 1) = 0x3f;
              goto LAB_00145837;
            }
          }
          else if (param_3 == 0x11) {
            auVar26[0] = -((*param_2)[0] == s_ew_half_life_day_001166c0[0]);
            auVar26[1] = -((*param_2)[1] == s_ew_half_life_day_001166c0[1]);
            auVar26[2] = -((*param_2)[2] == s_ew_half_life_day_001166c0[2]);
            auVar26[3] = -((*param_2)[3] == s_ew_half_life_day_001166c0[3]);
            auVar26[4] = -((*param_2)[4] == s_ew_half_life_day_001166c0[4]);
            auVar26[5] = -((*param_2)[5] == s_ew_half_life_day_001166c0[5]);
            auVar26[6] = -((*param_2)[6] == s_ew_half_life_day_001166c0[6]);
            auVar26[7] = -((*param_2)[7] == s_ew_half_life_day_001166c0[7]);
            auVar26[8] = -((*param_2)[8] == s_ew_half_life_day_001166c0[8]);
            auVar26[9] = -((*param_2)[9] == s_ew_half_life_day_001166c0[9]);
            auVar26[10] = -((*param_2)[10] == s_ew_half_life_day_001166c0[10]);
            auVar26[0xb] = -((*param_2)[0xb] == s_ew_half_life_day_001166c0[0xb]);
            auVar26[0xc] = -((*param_2)[0xc] == s_ew_half_life_day_001166c0[0xc]);
            auVar26[0xd] = -((*param_2)[0xd] == s_ew_half_life_day_001166c0[0xd]);
            auVar26[0xe] = -((*param_2)[0xe] == s_ew_half_life_day_001166c0[0xe]);
            auVar26[0xf] = -((*param_2)[0xf] == s_ew_half_life_day_001166c0[0xf]);
            auVar45[0] = -(param_2[1][0] == s_s_00116c60[0]);
            auVar45[1] = -(s_s_00116c60[1] == '\0');
            auVar45[2] = -(s_s_00116c60[2] == '\0');
            auVar45[3] = -(s_s_00116c60[3] == '\0');
            auVar45[4] = -(UNK_00116c64 == '\0');
            auVar45[5] = -(UNK_00116c65 == '\0');
            auVar45[6] = -(UNK_00116c66 == '\0');
            auVar45[7] = -(UNK_00116c67 == '\0');
            auVar45[8] = -(UNK_00116c68 == '\0');
            auVar45[9] = -(UNK_00116c69 == '\0');
            auVar45[10] = -(UNK_00116c6a == '\0');
            auVar45[0xb] = -(UNK_00116c6b == '\0');
            auVar45[0xc] = -(UNK_00116c6c == '\0');
            auVar45[0xd] = -(UNK_00116c6d == '\0');
            auVar45[0xe] = -(UNK_00116c6e == '\0');
            auVar45[0xf] = -(UNK_00116c6f == '\0');
            auVar45 = auVar45 & auVar26;
            if ((ushort)((ushort)(SUB161(auVar45 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar45 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar45 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar45 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar45 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar45 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar45 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar45 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar45 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar45 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar45 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar45 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar45 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar45 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar45 >> 0x77,0) & 1) << 0xe |
                        (ushort)(byte)(auVar45[0xf] >> 7) << 0xf) == 0xffff) {
              *(undefined1 *)(param_1 + 1) = 0x3c;
              goto LAB_00145837;
            }
          }
          else if (param_3 == 7) {
            if (*(int *)(*param_2 + 3) == 0x65746164 && *(int *)*param_2 == 0x645f7378) {
              *(undefined1 *)(param_1 + 1) = 0x3a;
              goto LAB_00145837;
            }
            if (*(int *)(*param_2 + 3) == 0x7367616c && *(int *)*param_2 == 0x6c5f7765) {
              *(undefined1 *)(param_1 + 1) = 0x3b;
              goto LAB_00145837;
            }
          }
          if ((bVar3) &&
             (iVar7 = (*(code *)PTR_bcmp_00203d28)
                                (param_2,"xs_mult_skipxs_pnl_clipxs_min_pool",param_3), iVar7 == 0))
          {
            *(undefined1 *)(param_1 + 1) = 0x42;
            goto LAB_00145837;
          }
        }
        break;
      }
    }
    else {
      if ((bVar4) &&
         (auVar44[0] = -((*param_2)[0xe] == DAT_001169d0),
         auVar44[1] = -((*param_2)[0xf] == UNK_001169d1),
         auVar44[2] = -(param_2[1][0] == UNK_001169d2),
         auVar44[3] = -(param_2[1][1] == UNK_001169d3),
         auVar44[4] = -(param_2[1][2] == UNK_001169d4),
         auVar44[5] = -(param_2[1][3] == UNK_001169d5),
         auVar44[6] = -(param_2[1][4] == UNK_001169d6),
         auVar44[7] = -(param_2[1][5] == UNK_001169d7),
         auVar44[8] = -(param_2[1][6] == UNK_001169d8),
         auVar44[9] = -(param_2[1][7] == UNK_001169d9),
         auVar44[10] = -(param_2[1][8] == UNK_001169da),
         auVar44[0xb] = -(param_2[1][9] == UNK_001169db),
         auVar44[0xc] = -(param_2[1][10] == UNK_001169dc),
         auVar44[0xd] = -(param_2[1][0xb] == UNK_001169dd),
         auVar44[0xe] = -(param_2[1][0xc] == UNK_001169de),
         auVar44[0xf] = -(param_2[1][0xd] == UNK_001169df),
         auVar25[0] = -((*param_2)[0] == s_max_maker_pendin_00116c50[0]),
         auVar25[1] = -((*param_2)[1] == s_max_maker_pendin_00116c50[1]),
         auVar25[2] = -((*param_2)[2] == s_max_maker_pendin_00116c50[2]),
         auVar25[3] = -((*param_2)[3] == s_max_maker_pendin_00116c50[3]),
         auVar25[4] = -((*param_2)[4] == s_max_maker_pendin_00116c50[4]),
         auVar25[5] = -((*param_2)[5] == s_max_maker_pendin_00116c50[5]),
         auVar25[6] = -((*param_2)[6] == s_max_maker_pendin_00116c50[6]),
         auVar25[7] = -((*param_2)[7] == s_max_maker_pendin_00116c50[7]),
         auVar25[8] = -((*param_2)[8] == s_max_maker_pendin_00116c50[8]),
         auVar25[9] = -((*param_2)[9] == s_max_maker_pendin_00116c50[9]),
         auVar25[10] = -((*param_2)[10] == s_max_maker_pendin_00116c50[10]),
         auVar25[0xb] = -((*param_2)[0xb] == s_max_maker_pendin_00116c50[0xb]),
         auVar25[0xc] = -((*param_2)[0xc] == s_max_maker_pendin_00116c50[0xc]),
         auVar25[0xd] = -((*param_2)[0xd] == s_max_maker_pendin_00116c50[0xd]),
         auVar25[0xe] = -((*param_2)[0xe] == s_max_maker_pendin_00116c50[0xe]),
         auVar25[0xf] = -((*param_2)[0xf] == s_max_maker_pendin_00116c50[0xf]),
         auVar25 = auVar25 & auVar44,
         (ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) | (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1
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
                 (ushort)(byte)(auVar25[0xf] >> 7) << 0xf) == 0xffff)) {
        *(undefined1 *)(param_1 + 1) = 0x29;
        goto LAB_00145837;
      }
      if (bVar5) goto LAB_00145469;
LAB_00145484:
      if (param_3 != 0xc) goto LAB_00145510;
      if (*(int *)(*param_2 + 8) == 0x65736168 && *(long *)*param_2 == 0x705f747265766e69) {
        *(undefined1 *)(param_1 + 1) = 0x2d;
        goto LAB_00145837;
      }
      if ((!bVar6) ||
         (iVar7 = (*(code *)PTR_bcmp_00203d28)(param_2,"watcher_account_name",0xc), iVar7 != 0)) {
        iVar7 = (*(code *)PTR_bcmp_00203d28)(param_2,"enter_phase2exit_phase2",0xc);
        if (iVar7 == 0) {
          *(undefined1 *)(param_1 + 1) = 0x30;
          goto LAB_00145837;
        }
        iVar7 = (*(code *)PTR_bcmp_00203d28)(param_2,"enter_phase3exit_phase3",0xc);
        bVar3 = true;
        if (iVar7 == 0) {
          *(undefined1 *)(param_1 + 1) = 0x32;
          goto LAB_00145837;
        }
        goto LAB_00145631;
      }
    }
    *(undefined1 *)(param_1 + 1) = 0x2f;
    goto LAB_00145837;
  case 0x16:
    auVar30[0] = -((*param_2)[6] == DAT_00116560);
    auVar30[1] = -((*param_2)[7] == UNK_00116561);
    auVar30[2] = -((*param_2)[8] == UNK_00116562);
    auVar30[3] = -((*param_2)[9] == UNK_00116563);
    auVar30[4] = -((*param_2)[10] == UNK_00116564);
    auVar30[5] = -((*param_2)[0xb] == UNK_00116565);
    auVar30[6] = -((*param_2)[0xc] == UNK_00116566);
    auVar30[7] = -((*param_2)[0xd] == UNK_00116567);
    auVar30[8] = -((*param_2)[0xe] == UNK_00116568);
    auVar30[9] = -((*param_2)[0xf] == UNK_00116569);
    auVar30[10] = -(param_2[1][0] == UNK_0011656a);
    auVar30[0xb] = -(param_2[1][1] == UNK_0011656b);
    auVar30[0xc] = -(param_2[1][2] == UNK_0011656c);
    auVar30[0xd] = -(param_2[1][3] == UNK_0011656d);
    auVar30[0xe] = -(param_2[1][4] == UNK_0011656e);
    auVar30[0xf] = -(param_2[1][5] == UNK_0011656f);
    auVar11[0] = -((*param_2)[0] == DAT_001166f0);
    auVar11[1] = -((*param_2)[1] == UNK_001166f1);
    auVar11[2] = -((*param_2)[2] == UNK_001166f2);
    auVar11[3] = -((*param_2)[3] == UNK_001166f3);
    auVar11[4] = -((*param_2)[4] == UNK_001166f4);
    auVar11[5] = -((*param_2)[5] == UNK_001166f5);
    auVar11[6] = -((*param_2)[6] == UNK_001166f6);
    auVar11[7] = -((*param_2)[7] == UNK_001166f7);
    auVar11[8] = -((*param_2)[8] == UNK_001166f8);
    auVar11[9] = -((*param_2)[9] == UNK_001166f9);
    auVar11[10] = -((*param_2)[10] == UNK_001166fa);
    auVar11[0xb] = -((*param_2)[0xb] == UNK_001166fb);
    auVar11[0xc] = -((*param_2)[0xc] == UNK_001166fc);
    auVar11[0xd] = -((*param_2)[0xd] == UNK_001166fd);
    auVar11[0xe] = -((*param_2)[0xe] == UNK_001166fe);
    auVar11[0xf] = -((*param_2)[0xf] == UNK_001166ff);
    auVar11 = auVar11 & auVar30;
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
      *(undefined1 *)(param_1 + 1) = 7;
      goto LAB_00145837;
    }
    iVar7 = (*(code *)PTR_bcmp_00203d28)(param_2,"high_taker_half_spread",param_3);
    if (iVar7 == 0) {
      *(undefined1 *)(param_1 + 1) = 10;
      goto LAB_00145837;
    }
    iVar7 = (*(code *)PTR_bcmp_00203d28)
                      (param_2,"min_trades_for_upgradephase1phase2phase3enable_xs",param_3);
    if (iVar7 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x34;
      goto LAB_00145837;
    }
    goto LAB_00145550;
  case 0x17:
    auVar29[0] = -((*param_2)[7] == DAT_00116a80);
    auVar29[1] = -((*param_2)[8] == UNK_00116a81);
    auVar29[2] = -((*param_2)[9] == UNK_00116a82);
    auVar29[3] = -((*param_2)[10] == UNK_00116a83);
    auVar29[4] = -((*param_2)[0xb] == UNK_00116a84);
    auVar29[5] = -((*param_2)[0xc] == UNK_00116a85);
    auVar29[6] = -((*param_2)[0xd] == UNK_00116a86);
    auVar29[7] = -((*param_2)[0xe] == UNK_00116a87);
    auVar29[8] = -((*param_2)[0xf] == UNK_00116a88);
    auVar29[9] = -(param_2[1][0] == UNK_00116a89);
    auVar29[10] = -(param_2[1][1] == UNK_00116a8a);
    auVar29[0xb] = -(param_2[1][2] == UNK_00116a8b);
    auVar29[0xc] = -(param_2[1][3] == UNK_00116a8c);
    auVar29[0xd] = -(param_2[1][4] == UNK_00116a8d);
    auVar29[0xe] = -(param_2[1][5] == UNK_00116a8e);
    auVar29[0xf] = -(param_2[1][6] == UNK_00116a8f);
    auVar10[0] = -((*param_2)[0] == s_close_position_b_00116610[0]);
    auVar10[1] = -((*param_2)[1] == s_close_position_b_00116610[1]);
    auVar10[2] = -((*param_2)[2] == s_close_position_b_00116610[2]);
    auVar10[3] = -((*param_2)[3] == s_close_position_b_00116610[3]);
    auVar10[4] = -((*param_2)[4] == s_close_position_b_00116610[4]);
    auVar10[5] = -((*param_2)[5] == s_close_position_b_00116610[5]);
    auVar10[6] = -((*param_2)[6] == s_close_position_b_00116610[6]);
    auVar10[7] = -((*param_2)[7] == s_close_position_b_00116610[7]);
    auVar10[8] = -((*param_2)[8] == s_close_position_b_00116610[8]);
    auVar10[9] = -((*param_2)[9] == s_close_position_b_00116610[9]);
    auVar10[10] = -((*param_2)[10] == s_close_position_b_00116610[10]);
    auVar10[0xb] = -((*param_2)[0xb] == s_close_position_b_00116610[0xb]);
    auVar10[0xc] = -((*param_2)[0xc] == s_close_position_b_00116610[0xc]);
    auVar10[0xd] = -((*param_2)[0xd] == s_close_position_b_00116610[0xd]);
    auVar10[0xe] = -((*param_2)[0xe] == s_close_position_b_00116610[0xe]);
    auVar10[0xf] = -((*param_2)[0xf] == s_close_position_b_00116610[0xf]);
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
      *(undefined1 *)(param_1 + 1) = 0xf;
      goto LAB_00145837;
    }
    iVar7 = (*(code *)PTR_bcmp_00203d28)
                      (param_2,
                       "low_long_open_thresholdlow_long_close_thresholdlow_short_open_threshold",
                       param_3);
    if (iVar7 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x1c;
      goto LAB_00145837;
    }
LAB_00145258:
    bVar3 = false;
    goto switchD_00144bd5_default;
  case 0x19:
    auVar27[0] = -((*param_2)[9] == s_p_half_spread_bp_00116a40[0]);
    auVar27[1] = -((*param_2)[10] == s_p_half_spread_bp_00116a40[1]);
    auVar27[2] = -((*param_2)[0xb] == s_p_half_spread_bp_00116a40[2]);
    auVar27[3] = -((*param_2)[0xc] == s_p_half_spread_bp_00116a40[3]);
    auVar27[4] = -((*param_2)[0xd] == s_p_half_spread_bp_00116a40[4]);
    auVar27[5] = -((*param_2)[0xe] == s_p_half_spread_bp_00116a40[5]);
    auVar27[6] = -((*param_2)[0xf] == s_p_half_spread_bp_00116a40[6]);
    auVar27[7] = -(param_2[1][0] == s_p_half_spread_bp_00116a40[7]);
    auVar27[8] = -(param_2[1][1] == s_p_half_spread_bp_00116a40[8]);
    auVar27[9] = -(param_2[1][2] == s_p_half_spread_bp_00116a40[9]);
    auVar27[10] = -(param_2[1][3] == s_p_half_spread_bp_00116a40[10]);
    auVar27[0xb] = -(param_2[1][4] == s_p_half_spread_bp_00116a40[0xb]);
    auVar27[0xc] = -(param_2[1][5] == s_p_half_spread_bp_00116a40[0xc]);
    auVar27[0xd] = -(param_2[1][6] == s_p_half_spread_bp_00116a40[0xd]);
    auVar27[0xe] = -(param_2[1][7] == s_p_half_spread_bp_00116a40[0xe]);
    auVar27[0xf] = -(param_2[1][8] == s_p_half_spread_bp_00116a40[0xf]);
    auVar8[0] = -((*param_2)[0] == DAT_00116c20);
    auVar8[1] = -((*param_2)[1] == UNK_00116c21);
    auVar8[2] = -((*param_2)[2] == UNK_00116c22);
    auVar8[3] = -((*param_2)[3] == UNK_00116c23);
    auVar8[4] = -((*param_2)[4] == UNK_00116c24);
    auVar8[5] = -((*param_2)[5] == UNK_00116c25);
    auVar8[6] = -((*param_2)[6] == UNK_00116c26);
    auVar8[7] = -((*param_2)[7] == UNK_00116c27);
    auVar8[8] = -((*param_2)[8] == UNK_00116c28);
    auVar8[9] = -((*param_2)[9] == UNK_00116c29);
    auVar8[10] = -((*param_2)[10] == UNK_00116c2a);
    auVar8[0xb] = -((*param_2)[0xb] == UNK_00116c2b);
    auVar8[0xc] = -((*param_2)[0xc] == UNK_00116c2c);
    auVar8[0xd] = -((*param_2)[0xd] == UNK_00116c2d);
    auVar8[0xe] = -((*param_2)[0xe] == UNK_00116c2e);
    auVar8[0xf] = -((*param_2)[0xf] == UNK_00116c2f);
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
      *(undefined1 *)(param_1 + 1) = 0xd;
      goto LAB_00145837;
    }
    iVar7 = (*(code *)PTR_bcmp_00203d28)(param_2,"low_short_close_threshold",param_3);
    if (iVar7 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x1f;
      goto LAB_00145837;
    }
    iVar7 = (*(code *)PTR_bcmp_00203d28)(param_2,"maker_cancel_range_levels",param_3);
    if (iVar7 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x2b;
      goto LAB_00145837;
    }
LAB_00144d26:
    bVar3 = false;
    bVar6 = false;
    goto LAB_00145484;
  }
  *(undefined1 *)(param_1 + 1) = 0x47;
LAB_00145837:
  *param_1 = 2;
  return param_1;
}


