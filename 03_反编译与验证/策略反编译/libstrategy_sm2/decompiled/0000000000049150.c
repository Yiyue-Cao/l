// ELF address 0x0000000000049150; <strategy_sm2::_::<impl serde_core::de::Deserialize for strategy_sm2::SM2Params>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_str

/* _<strategy_sm2::_::<impl serde_core::de::Deserialize for
   strategy_sm2::SM2Params>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_str */

undefined8 * __rustcall
_<strategy_sm2::_::<impl_serde_core::de::Deserialize_for_strategy_sm2::SM2Params>::deserialize::__FieldVisitor_as_serde_core::de::Visitor>
::visit_str(undefined8 *param_1,long *param_2,long param_3)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
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
  
  bVar4 = false;
  switch(param_3) {
  case 9:
    if ((char)param_2[1] == 'a' && *param_2 == 0x68706c615f317670) {
      *(undefined1 *)(param_1 + 1) = 1;
      goto LAB_001495ea;
    }
    goto LAB_001493f1;
  default:
    goto switchD_0014917c_caseD_a;
  case 0xb:
    if (*(long *)((long)param_2 + 3) == 0x65646f6d5f6c616e && *param_2 == 0x6d5f6c616e676973) {
      *(undefined1 *)(param_1 + 1) = 0;
      goto LAB_001495ea;
    }
    goto LAB_001493f1;
  case 0xe:
    if (*(long *)((long)param_2 + 6) == 0x7972657070696c73 && *param_2 == 0x6c735f6564617274) {
      *(undefined1 *)(param_1 + 1) = 2;
      goto LAB_001495ea;
    }
    goto LAB_001493f1;
  case 0x12:
    auVar7[0] = -((char)*param_2 == DAT_001174a0);
    auVar7[1] = -(*(char *)((long)param_2 + 1) == UNK_001174a1);
    auVar7[2] = -(*(char *)((long)param_2 + 2) == UNK_001174a2);
    auVar7[3] = -(*(char *)((long)param_2 + 3) == UNK_001174a3);
    auVar7[4] = -(*(char *)((long)param_2 + 4) == UNK_001174a4);
    auVar7[5] = -(*(char *)((long)param_2 + 5) == UNK_001174a5);
    auVar7[6] = -(*(char *)((long)param_2 + 6) == UNK_001174a6);
    auVar7[7] = -(*(char *)((long)param_2 + 7) == UNK_001174a7);
    auVar7[8] = -((char)param_2[1] == UNK_001174a8);
    auVar7[9] = -(*(char *)((long)param_2 + 9) == UNK_001174a9);
    auVar7[10] = -(*(char *)((long)param_2 + 10) == UNK_001174aa);
    auVar7[0xb] = -(*(char *)((long)param_2 + 0xb) == UNK_001174ab);
    auVar7[0xc] = -(*(char *)((long)param_2 + 0xc) == UNK_001174ac);
    auVar7[0xd] = -(*(char *)((long)param_2 + 0xd) == UNK_001174ad);
    auVar7[0xe] = -(*(char *)((long)param_2 + 0xe) == UNK_001174ae);
    auVar7[0xf] = -(*(char *)((long)param_2 + 0xf) == UNK_001174af);
    auVar18[0] = -((char)(short)param_2[2] == s_ol_00117170[0]);
    auVar18[1] = -((char)((ushort)(short)param_2[2] >> 8) == s_ol_00117170[1]);
    auVar18[2] = -(s_ol_00117170[2] == '\0');
    auVar18[3] = -(s_ol_00117170[3] == '\0');
    auVar18[4] = -(UNK_00117174 == '\0');
    auVar18[5] = -(UNK_00117175 == '\0');
    auVar18[6] = -(UNK_00117176 == '\0');
    auVar18[7] = -(UNK_00117177 == '\0');
    auVar18[8] = -(UNK_00117178 == '\0');
    auVar18[9] = -(UNK_00117179 == '\0');
    auVar18[10] = -(UNK_0011717a == '\0');
    auVar18[0xb] = -(UNK_0011717b == '\0');
    auVar18[0xc] = -(UNK_0011717c == '\0');
    auVar18[0xd] = -(UNK_0011717d == '\0');
    auVar18[0xe] = -(UNK_0011717e == '\0');
    auVar18[0xf] = -(UNK_0011717f == '\0');
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
      *(undefined1 *)(param_1 + 1) = 4;
      goto LAB_001495ea;
    }
    auVar8[0] = -((char)*param_2 == DAT_001173f0);
    auVar8[1] = -(*(char *)((long)param_2 + 1) == UNK_001173f1);
    auVar8[2] = -(*(char *)((long)param_2 + 2) == UNK_001173f2);
    auVar8[3] = -(*(char *)((long)param_2 + 3) == UNK_001173f3);
    auVar8[4] = -(*(char *)((long)param_2 + 4) == UNK_001173f4);
    auVar8[5] = -(*(char *)((long)param_2 + 5) == UNK_001173f5);
    auVar8[6] = -(*(char *)((long)param_2 + 6) == UNK_001173f6);
    auVar8[7] = -(*(char *)((long)param_2 + 7) == UNK_001173f7);
    auVar8[8] = -((char)param_2[1] == UNK_001173f8);
    auVar8[9] = -(*(char *)((long)param_2 + 9) == UNK_001173f9);
    auVar8[10] = -(*(char *)((long)param_2 + 10) == UNK_001173fa);
    auVar8[0xb] = -(*(char *)((long)param_2 + 0xb) == UNK_001173fb);
    auVar8[0xc] = -(*(char *)((long)param_2 + 0xc) == UNK_001173fc);
    auVar8[0xd] = -(*(char *)((long)param_2 + 0xd) == UNK_001173fd);
    auVar8[0xe] = -(*(char *)((long)param_2 + 0xe) == UNK_001173fe);
    auVar8[0xf] = -(*(char *)((long)param_2 + 0xf) == UNK_001173ff);
    auVar19[0] = -((char)(short)param_2[2] == DAT_00117780);
    auVar19[1] = -((char)((ushort)(short)param_2[2] >> 8) == UNK_00117781);
    auVar19[2] = -(UNK_00117782 == '\0');
    auVar19[3] = -(UNK_00117783 == '\0');
    auVar19[4] = -(UNK_00117784 == '\0');
    auVar19[5] = -(UNK_00117785 == '\0');
    auVar19[6] = -(UNK_00117786 == '\0');
    auVar19[7] = -(UNK_00117787 == '\0');
    auVar19[8] = -(UNK_00117788 == '\0');
    auVar19[9] = -(UNK_00117789 == '\0');
    auVar19[10] = -(UNK_0011778a == '\0');
    auVar19[0xb] = -(UNK_0011778b == '\0');
    auVar19[0xc] = -(UNK_0011778c == '\0');
    auVar19[0xd] = -(UNK_0011778d == '\0');
    auVar19[0xe] = -(UNK_0011778e == '\0');
    auVar19[0xf] = -(UNK_0011778f == '\0');
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
      *(undefined1 *)(param_1 + 1) = 5;
      goto LAB_001495ea;
    }
    auVar9[0] = -((char)*param_2 == DAT_00117420);
    auVar9[1] = -(*(char *)((long)param_2 + 1) == UNK_00117421);
    auVar9[2] = -(*(char *)((long)param_2 + 2) == UNK_00117422);
    auVar9[3] = -(*(char *)((long)param_2 + 3) == UNK_00117423);
    auVar9[4] = -(*(char *)((long)param_2 + 4) == UNK_00117424);
    auVar9[5] = -(*(char *)((long)param_2 + 5) == UNK_00117425);
    auVar9[6] = -(*(char *)((long)param_2 + 6) == UNK_00117426);
    auVar9[7] = -(*(char *)((long)param_2 + 7) == UNK_00117427);
    auVar9[8] = -((char)param_2[1] == UNK_00117428);
    auVar9[9] = -(*(char *)((long)param_2 + 9) == UNK_00117429);
    auVar9[10] = -(*(char *)((long)param_2 + 10) == UNK_0011742a);
    auVar9[0xb] = -(*(char *)((long)param_2 + 0xb) == UNK_0011742b);
    auVar9[0xc] = -(*(char *)((long)param_2 + 0xc) == UNK_0011742c);
    auVar9[0xd] = -(*(char *)((long)param_2 + 0xd) == UNK_0011742d);
    auVar9[0xe] = -(*(char *)((long)param_2 + 0xe) == UNK_0011742e);
    auVar9[0xf] = -(*(char *)((long)param_2 + 0xf) == UNK_0011742f);
    auVar20[0] = -((char)(short)param_2[2] == s_ol_00117170[0]);
    auVar20[1] = -((char)((ushort)(short)param_2[2] >> 8) == s_ol_00117170[1]);
    auVar20[2] = -(s_ol_00117170[2] == '\0');
    auVar20[3] = -(s_ol_00117170[3] == '\0');
    auVar20[4] = -(UNK_00117174 == '\0');
    auVar20[5] = -(UNK_00117175 == '\0');
    auVar20[6] = -(UNK_00117176 == '\0');
    auVar20[7] = -(UNK_00117177 == '\0');
    auVar20[8] = -(UNK_00117178 == '\0');
    auVar20[9] = -(UNK_00117179 == '\0');
    auVar20[10] = -(UNK_0011717a == '\0');
    auVar20[0xb] = -(UNK_0011717b == '\0');
    auVar20[0xc] = -(UNK_0011717c == '\0');
    auVar20[0xd] = -(UNK_0011717d == '\0');
    auVar20[0xe] = -(UNK_0011717e == '\0');
    auVar20[0xf] = -(UNK_0011717f == '\0');
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
      *(undefined1 *)(param_1 + 1) = 6;
      goto LAB_001495ea;
    }
    auVar10[0] = -((char)*param_2 == s_max_single_net_a_001175b0[0]);
    auVar10[1] = -(*(char *)((long)param_2 + 1) == s_max_single_net_a_001175b0[1]);
    auVar10[2] = -(*(char *)((long)param_2 + 2) == s_max_single_net_a_001175b0[2]);
    auVar10[3] = -(*(char *)((long)param_2 + 3) == s_max_single_net_a_001175b0[3]);
    auVar10[4] = -(*(char *)((long)param_2 + 4) == s_max_single_net_a_001175b0[4]);
    auVar10[5] = -(*(char *)((long)param_2 + 5) == s_max_single_net_a_001175b0[5]);
    auVar10[6] = -(*(char *)((long)param_2 + 6) == s_max_single_net_a_001175b0[6]);
    auVar10[7] = -(*(char *)((long)param_2 + 7) == s_max_single_net_a_001175b0[7]);
    auVar10[8] = -((char)param_2[1] == s_max_single_net_a_001175b0[8]);
    auVar10[9] = -(*(char *)((long)param_2 + 9) == s_max_single_net_a_001175b0[9]);
    auVar10[10] = -(*(char *)((long)param_2 + 10) == s_max_single_net_a_001175b0[10]);
    auVar10[0xb] = -(*(char *)((long)param_2 + 0xb) == s_max_single_net_a_001175b0[0xb]);
    auVar10[0xc] = -(*(char *)((long)param_2 + 0xc) == s_max_single_net_a_001175b0[0xc]);
    auVar10[0xd] = -(*(char *)((long)param_2 + 0xd) == s_max_single_net_a_001175b0[0xd]);
    auVar10[0xe] = -(*(char *)((long)param_2 + 0xe) == s_max_single_net_a_001175b0[0xe]);
    auVar10[0xf] = -(*(char *)((long)param_2 + 0xf) == s_max_single_net_a_001175b0[0xf]);
    auVar21[0] = -((char)(short)param_2[2] == DAT_00117780);
    auVar21[1] = -((char)((ushort)(short)param_2[2] >> 8) == UNK_00117781);
    auVar21[2] = -(UNK_00117782 == '\0');
    auVar21[3] = -(UNK_00117783 == '\0');
    auVar21[4] = -(UNK_00117784 == '\0');
    auVar21[5] = -(UNK_00117785 == '\0');
    auVar21[6] = -(UNK_00117786 == '\0');
    auVar21[7] = -(UNK_00117787 == '\0');
    auVar21[8] = -(UNK_00117788 == '\0');
    auVar21[9] = -(UNK_00117789 == '\0');
    auVar21[10] = -(UNK_0011778a == '\0');
    auVar21[0xb] = -(UNK_0011778b == '\0');
    auVar21[0xc] = -(UNK_0011778c == '\0');
    auVar21[0xd] = -(UNK_0011778d == '\0');
    auVar21[0xe] = -(UNK_0011778e == '\0');
    auVar21[0xf] = -(UNK_0011778f == '\0');
    auVar21 = auVar21 & auVar10;
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
      *(undefined1 *)(param_1 + 1) = 7;
      goto LAB_001495ea;
    }
    goto LAB_001495e7;
  case 0x13:
    iVar5 = (*(code *)PTR_bcmp_001d7810)
                      (param_2,"long_open_thresholdlong_close_thresholdshort_open_threshold",param_3
                      );
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 1) = 10;
      goto LAB_001495ea;
    }
    break;
  case 0x14:
    uVar2 = (undefined4)param_2[2];
    auVar23[0] = -((char)uVar2 == DAT_00117120);
    auVar23[1] = -((char)((uint)uVar2 >> 8) == UNK_00117121);
    auVar23[2] = -((char)((uint)uVar2 >> 0x10) == UNK_00117122);
    auVar23[3] = -((char)((uint)uVar2 >> 0x18) == UNK_00117123);
    auVar23[4] = -(UNK_00117124 == '\0');
    auVar23[5] = -(UNK_00117125 == '\0');
    auVar23[6] = -(UNK_00117126 == '\0');
    auVar23[7] = -(UNK_00117127 == '\0');
    auVar23[8] = -(UNK_00117128 == '\0');
    auVar23[9] = -(UNK_00117129 == '\0');
    auVar23[10] = -(UNK_0011712a == '\0');
    auVar23[0xb] = -(UNK_0011712b == '\0');
    auVar23[0xc] = -(UNK_0011712c == '\0');
    auVar23[0xd] = -(UNK_0011712d == '\0');
    auVar23[0xe] = -(UNK_0011712e == '\0');
    auVar23[0xf] = -(UNK_0011712f == '\0');
    auVar12[0] = -((char)*param_2 == s_max_single_close_001172c0[0]);
    auVar12[1] = -(*(char *)((long)param_2 + 1) == s_max_single_close_001172c0[1]);
    auVar12[2] = -(*(char *)((long)param_2 + 2) == s_max_single_close_001172c0[2]);
    auVar12[3] = -(*(char *)((long)param_2 + 3) == s_max_single_close_001172c0[3]);
    auVar12[4] = -(*(char *)((long)param_2 + 4) == s_max_single_close_001172c0[4]);
    auVar12[5] = -(*(char *)((long)param_2 + 5) == s_max_single_close_001172c0[5]);
    auVar12[6] = -(*(char *)((long)param_2 + 6) == s_max_single_close_001172c0[6]);
    auVar12[7] = -(*(char *)((long)param_2 + 7) == s_max_single_close_001172c0[7]);
    auVar12[8] = -((char)param_2[1] == s_max_single_close_001172c0[8]);
    auVar12[9] = -(*(char *)((long)param_2 + 9) == s_max_single_close_001172c0[9]);
    auVar12[10] = -(*(char *)((long)param_2 + 10) == s_max_single_close_001172c0[10]);
    auVar12[0xb] = -(*(char *)((long)param_2 + 0xb) == s_max_single_close_001172c0[0xb]);
    auVar12[0xc] = -(*(char *)((long)param_2 + 0xc) == s_max_single_close_001172c0[0xc]);
    auVar12[0xd] = -(*(char *)((long)param_2 + 0xd) == s_max_single_close_001172c0[0xd]);
    auVar12[0xe] = -(*(char *)((long)param_2 + 0xe) == s_max_single_close_001172c0[0xe]);
    auVar12[0xf] = -(*(char *)((long)param_2 + 0xf) == s_max_single_close_001172c0[0xf]);
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
      *(undefined1 *)(param_1 + 1) = 8;
      goto LAB_001495ea;
    }
    uVar2 = (undefined4)param_2[2];
    auVar30[0] = -((char)uVar2 == DAT_00117370);
    auVar30[1] = -((char)((uint)uVar2 >> 8) == UNK_00117371);
    auVar30[2] = -((char)((uint)uVar2 >> 0x10) == UNK_00117372);
    auVar30[3] = -((char)((uint)uVar2 >> 0x18) == UNK_00117373);
    auVar30[4] = -(UNK_00117374 == '\0');
    auVar30[5] = -(UNK_00117375 == '\0');
    auVar30[6] = -(UNK_00117376 == '\0');
    auVar30[7] = -(UNK_00117377 == '\0');
    auVar30[8] = -(UNK_00117378 == '\0');
    auVar30[9] = -(UNK_00117379 == '\0');
    auVar30[10] = -(UNK_0011737a == '\0');
    auVar30[0xb] = -(UNK_0011737b == '\0');
    auVar30[0xc] = -(UNK_0011737c == '\0');
    auVar30[0xd] = -(UNK_0011737d == '\0');
    auVar30[0xe] = -(UNK_0011737e == '\0');
    auVar30[0xf] = -(UNK_0011737f == '\0');
    auVar24[0] = -((char)*param_2 == 'm');
    auVar24[1] = -(*(char *)((long)param_2 + 1) == 'a');
    auVar24[2] = -(*(char *)((long)param_2 + 2) == 'x');
    auVar24[3] = -(*(char *)((long)param_2 + 3) == '_');
    auVar24[4] = -(*(char *)((long)param_2 + 4) == 's');
    auVar24[5] = -(*(char *)((long)param_2 + 5) == 'i');
    auVar24[6] = -(*(char *)((long)param_2 + 6) == 'n');
    auVar24[7] = -(*(char *)((long)param_2 + 7) == 'g');
    auVar24[8] = -((char)param_2[1] == 'l');
    auVar24[9] = -(*(char *)((long)param_2 + 9) == 'e');
    auVar24[10] = -(*(char *)((long)param_2 + 10) == '_');
    auVar24[0xb] = -(*(char *)((long)param_2 + 0xb) == 'c');
    auVar24[0xc] = -(*(char *)((long)param_2 + 0xc) == 'l');
    auVar24[0xd] = -(*(char *)((long)param_2 + 0xd) == 'o');
    auVar24[0xe] = -(*(char *)((long)param_2 + 0xe) == 's');
    auVar24[0xf] = -(*(char *)((long)param_2 + 0xf) == 'e');
    auVar30 = auVar30 & auVar24;
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
      *(undefined1 *)(param_1 + 1) = 9;
      goto LAB_001495ea;
    }
    uVar2 = (undefined4)param_2[2];
    auVar25[0] = -((char)uVar2 == DAT_00117490);
    auVar25[1] = -((char)((uint)uVar2 >> 8) == UNK_00117491);
    auVar25[2] = -((char)((uint)uVar2 >> 0x10) == UNK_00117492);
    auVar25[3] = -((char)((uint)uVar2 >> 0x18) == UNK_00117493);
    auVar25[4] = -(UNK_00117494 == '\0');
    auVar25[5] = -(UNK_00117495 == '\0');
    auVar25[6] = -(UNK_00117496 == '\0');
    auVar25[7] = -(UNK_00117497 == '\0');
    auVar25[8] = -(UNK_00117498 == '\0');
    auVar25[9] = -(UNK_00117499 == '\0');
    auVar25[10] = -(UNK_0011749a == '\0');
    auVar25[0xb] = -(UNK_0011749b == '\0');
    auVar25[0xc] = -(UNK_0011749c == '\0');
    auVar25[0xd] = -(UNK_0011749d == '\0');
    auVar25[0xe] = -(UNK_0011749e == '\0');
    auVar25[0xf] = -(UNK_0011749f == '\0');
    auVar13[0] = -((char)*param_2 == DAT_001176b0);
    auVar13[1] = -(*(char *)((long)param_2 + 1) == UNK_001176b1);
    auVar13[2] = -(*(char *)((long)param_2 + 2) == UNK_001176b2);
    auVar13[3] = -(*(char *)((long)param_2 + 3) == UNK_001176b3);
    auVar13[4] = -(*(char *)((long)param_2 + 4) == UNK_001176b4);
    auVar13[5] = -(*(char *)((long)param_2 + 5) == UNK_001176b5);
    auVar13[6] = -(*(char *)((long)param_2 + 6) == UNK_001176b6);
    auVar13[7] = -(*(char *)((long)param_2 + 7) == UNK_001176b7);
    auVar13[8] = -((char)param_2[1] == UNK_001176b8);
    auVar13[9] = -(*(char *)((long)param_2 + 9) == UNK_001176b9);
    auVar13[10] = -(*(char *)((long)param_2 + 10) == UNK_001176ba);
    auVar13[0xb] = -(*(char *)((long)param_2 + 0xb) == UNK_001176bb);
    auVar13[0xc] = -(*(char *)((long)param_2 + 0xc) == UNK_001176bc);
    auVar13[0xd] = -(*(char *)((long)param_2 + 0xd) == UNK_001176bd);
    auVar13[0xe] = -(*(char *)((long)param_2 + 0xe) == UNK_001176be);
    auVar13[0xf] = -(*(char *)((long)param_2 + 0xf) == UNK_001176bf);
    auVar13 = auVar13 & auVar25;
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
      *(undefined1 *)(param_1 + 1) = 0xb;
      goto LAB_001495ea;
    }
    uVar2 = (undefined4)param_2[2];
    auVar26[0] = -((char)uVar2 == DAT_00117490);
    auVar26[1] = -((char)((uint)uVar2 >> 8) == UNK_00117491);
    auVar26[2] = -((char)((uint)uVar2 >> 0x10) == UNK_00117492);
    auVar26[3] = -((char)((uint)uVar2 >> 0x18) == UNK_00117493);
    auVar26[4] = -(UNK_00117494 == '\0');
    auVar26[5] = -(UNK_00117495 == '\0');
    auVar26[6] = -(UNK_00117496 == '\0');
    auVar26[7] = -(UNK_00117497 == '\0');
    auVar26[8] = -(UNK_00117498 == '\0');
    auVar26[9] = -(UNK_00117499 == '\0');
    auVar26[10] = -(UNK_0011749a == '\0');
    auVar26[0xb] = -(UNK_0011749b == '\0');
    auVar26[0xc] = -(UNK_0011749c == '\0');
    auVar26[0xd] = -(UNK_0011749d == '\0');
    auVar26[0xe] = -(UNK_0011749e == '\0');
    auVar26[0xf] = -(UNK_0011749f == '\0');
    auVar14[0] = -((char)*param_2 == DAT_00117750);
    auVar14[1] = -(*(char *)((long)param_2 + 1) == UNK_00117751);
    auVar14[2] = -(*(char *)((long)param_2 + 2) == UNK_00117752);
    auVar14[3] = -(*(char *)((long)param_2 + 3) == UNK_00117753);
    auVar14[4] = -(*(char *)((long)param_2 + 4) == UNK_00117754);
    auVar14[5] = -(*(char *)((long)param_2 + 5) == UNK_00117755);
    auVar14[6] = -(*(char *)((long)param_2 + 6) == UNK_00117756);
    auVar14[7] = -(*(char *)((long)param_2 + 7) == UNK_00117757);
    auVar14[8] = -((char)param_2[1] == UNK_00117758);
    auVar14[9] = -(*(char *)((long)param_2 + 9) == UNK_00117759);
    auVar14[10] = -(*(char *)((long)param_2 + 10) == UNK_0011775a);
    auVar14[0xb] = -(*(char *)((long)param_2 + 0xb) == UNK_0011775b);
    auVar14[0xc] = -(*(char *)((long)param_2 + 0xc) == UNK_0011775c);
    auVar14[0xd] = -(*(char *)((long)param_2 + 0xd) == UNK_0011775d);
    auVar14[0xe] = -(*(char *)((long)param_2 + 0xe) == UNK_0011775e);
    auVar14[0xf] = -(*(char *)((long)param_2 + 0xf) == UNK_0011775f);
    auVar14 = auVar14 & auVar26;
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
      *(undefined1 *)(param_1 + 1) = 0xc;
      goto LAB_001495ea;
    }
    iVar5 = (*(code *)PTR_bcmp_001d7810)
                      (param_2,"max_single_taker_volmax_maker_pending_vol_on_depth",param_3);
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x1c;
      goto LAB_001495ea;
    }
    goto LAB_001495e7;
  case 0x15:
    iVar5 = (*(code *)PTR_bcmp_001d7810)(param_2,"short_close_threshold",param_3);
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 1) = 0xd;
      goto LAB_001495ea;
    }
    iVar5 = (*(code *)PTR_bcmp_001d7810)(param_2,"dyn_score_delta_score",param_3);
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x10;
      goto LAB_001495ea;
    }
    iVar5 = (*(code *)PTR_bcmp_001d7810)(param_2,"maker_signal_abtype_u",param_3);
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x15;
      goto LAB_001495ea;
    }
    iVar5 = (*(code *)PTR_bcmp_001d7810)
                      (param_2,"maker_signal_abtype_smaker_signal_abtype_betasignal_alltouch_gate",
                       param_3);
    bVar4 = true;
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x16;
      goto LAB_001495ea;
    }
    goto switchD_0014917c_caseD_a;
  case 0x17:
    auVar22[0] = -(*(char *)((long)param_2 + 7) == DAT_001175e0);
    auVar22[1] = -((char)param_2[1] == UNK_001175e1);
    auVar22[2] = -(*(char *)((long)param_2 + 9) == UNK_001175e2);
    auVar22[3] = -(*(char *)((long)param_2 + 10) == UNK_001175e3);
    auVar22[4] = -(*(char *)((long)param_2 + 0xb) == UNK_001175e4);
    auVar22[5] = -(*(char *)((long)param_2 + 0xc) == UNK_001175e5);
    auVar22[6] = -(*(char *)((long)param_2 + 0xd) == UNK_001175e6);
    auVar22[7] = -(*(char *)((long)param_2 + 0xe) == UNK_001175e7);
    auVar22[8] = -(*(char *)((long)param_2 + 0xf) == UNK_001175e8);
    auVar22[9] = -((char)param_2[2] == UNK_001175e9);
    auVar22[10] = -(*(char *)((long)param_2 + 0x11) == UNK_001175ea);
    auVar22[0xb] = -(*(char *)((long)param_2 + 0x12) == UNK_001175eb);
    auVar22[0xc] = -(*(char *)((long)param_2 + 0x13) == UNK_001175ec);
    auVar22[0xd] = -(*(char *)((long)param_2 + 0x14) == UNK_001175ed);
    auVar22[0xe] = -(*(char *)((long)param_2 + 0x15) == UNK_001175ee);
    auVar22[0xf] = -(*(char *)((long)param_2 + 0x16) == UNK_001175ef);
    auVar11[0] = -((char)*param_2 == s_close_position_b_00117210[0]);
    auVar11[1] = -(*(char *)((long)param_2 + 1) == s_close_position_b_00117210[1]);
    auVar11[2] = -(*(char *)((long)param_2 + 2) == s_close_position_b_00117210[2]);
    auVar11[3] = -(*(char *)((long)param_2 + 3) == s_close_position_b_00117210[3]);
    auVar11[4] = -(*(char *)((long)param_2 + 4) == s_close_position_b_00117210[4]);
    auVar11[5] = -(*(char *)((long)param_2 + 5) == s_close_position_b_00117210[5]);
    auVar11[6] = -(*(char *)((long)param_2 + 6) == s_close_position_b_00117210[6]);
    auVar11[7] = -(*(char *)((long)param_2 + 7) == s_close_position_b_00117210[7]);
    auVar11[8] = -((char)param_2[1] == s_close_position_b_00117210[8]);
    auVar11[9] = -(*(char *)((long)param_2 + 9) == s_close_position_b_00117210[9]);
    auVar11[10] = -(*(char *)((long)param_2 + 10) == s_close_position_b_00117210[10]);
    auVar11[0xb] = -(*(char *)((long)param_2 + 0xb) == s_close_position_b_00117210[0xb]);
    auVar11[0xc] = -(*(char *)((long)param_2 + 0xc) == s_close_position_b_00117210[0xc]);
    auVar11[0xd] = -(*(char *)((long)param_2 + 0xd) == s_close_position_b_00117210[0xd]);
    auVar11[0xe] = -(*(char *)((long)param_2 + 0xe) == s_close_position_b_00117210[0xe]);
    auVar11[0xf] = -(*(char *)((long)param_2 + 0xf) == s_close_position_b_00117210[0xf]);
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
      *(undefined1 *)(param_1 + 1) = 3;
      goto LAB_001495ea;
    }
LAB_001493f1:
    uVar3 = param_3 - 0x13U >> 1;
    bVar4 = false;
    if ((uVar3 | (ulong)((param_3 - 0x13U & 1) != 0) << 0x3f) < 9) {
                    /* WARNING: Could not recover jumptable at 0x00149412. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar6 = (undefined8 *)
               (*(code *)((long)&UINT_00117f54 + (long)(int)(&UINT_00117f54)[uVar3]))();
      return puVar6;
    }
    goto switchD_0014917c_caseD_a;
  case 0x19:
switchD_0014917c_caseD_19:
    auVar27[0] = -(*(char *)((long)param_2 + 9) == DAT_001174b0);
    auVar27[1] = -(*(char *)((long)param_2 + 10) == UNK_001174b1);
    auVar27[2] = -(*(char *)((long)param_2 + 0xb) == UNK_001174b2);
    auVar27[3] = -(*(char *)((long)param_2 + 0xc) == UNK_001174b3);
    auVar27[4] = -(*(char *)((long)param_2 + 0xd) == UNK_001174b4);
    auVar27[5] = -(*(char *)((long)param_2 + 0xe) == UNK_001174b5);
    auVar27[6] = -(*(char *)((long)param_2 + 0xf) == UNK_001174b6);
    auVar27[7] = -((char)param_2[2] == UNK_001174b7);
    auVar27[8] = -(*(char *)((long)param_2 + 0x11) == UNK_001174b8);
    auVar27[9] = -(*(char *)((long)param_2 + 0x12) == UNK_001174b9);
    auVar27[10] = -(*(char *)((long)param_2 + 0x13) == UNK_001174ba);
    auVar27[0xb] = -(*(char *)((long)param_2 + 0x14) == UNK_001174bb);
    auVar27[0xc] = -(*(char *)((long)param_2 + 0x15) == UNK_001174bc);
    auVar27[0xd] = -(*(char *)((long)param_2 + 0x16) == UNK_001174bd);
    auVar27[0xe] = -(*(char *)((long)param_2 + 0x17) == UNK_001174be);
    auVar27[0xf] = -((char)param_2[3] == UNK_001174bf);
    auVar15[0] = -((char)*param_2 == DAT_00117190);
    auVar15[1] = -(*(char *)((long)param_2 + 1) == UNK_00117191);
    auVar15[2] = -(*(char *)((long)param_2 + 2) == UNK_00117192);
    auVar15[3] = -(*(char *)((long)param_2 + 3) == UNK_00117193);
    auVar15[4] = -(*(char *)((long)param_2 + 4) == UNK_00117194);
    auVar15[5] = -(*(char *)((long)param_2 + 5) == UNK_00117195);
    auVar15[6] = -(*(char *)((long)param_2 + 6) == UNK_00117196);
    auVar15[7] = -(*(char *)((long)param_2 + 7) == UNK_00117197);
    auVar15[8] = -((char)param_2[1] == UNK_00117198);
    auVar15[9] = -(*(char *)((long)param_2 + 9) == UNK_00117199);
    auVar15[10] = -(*(char *)((long)param_2 + 10) == UNK_0011719a);
    auVar15[0xb] = -(*(char *)((long)param_2 + 0xb) == UNK_0011719b);
    auVar15[0xc] = -(*(char *)((long)param_2 + 0xc) == UNK_0011719c);
    auVar15[0xd] = -(*(char *)((long)param_2 + 0xd) == UNK_0011719d);
    auVar15[0xe] = -(*(char *)((long)param_2 + 0xe) == UNK_0011719e);
    auVar15[0xf] = -(*(char *)((long)param_2 + 0xf) == UNK_0011719f);
    auVar15 = auVar15 & auVar27;
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
      *(undefined1 *)(param_1 + 1) = 0x14;
      goto LAB_001495ea;
    }
    goto LAB_001495e7;
  case 0x1b:
    iVar5 = (*(code *)PTR_bcmp_001d7810)(param_2,"dyn_score_max_position_ts_s",param_3);
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 1) = 0xf;
      goto LAB_001495ea;
    }
    if (param_3 == 0x19) goto switchD_0014917c_caseD_19;
    break;
  case 0x1d:
    iVar5 = (*(code *)PTR_bcmp_001d7810)(param_2,"dyn_pending_max_position_ts_s",param_3);
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x12;
      goto LAB_001495ea;
    }
    break;
  case 0x21:
    iVar5 = (*(code *)PTR_bcmp_001d7810)(param_2,"dyn_score_position_ts_threshold_s",param_3);
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 1) = 0xe;
      goto LAB_001495ea;
    }
    break;
  case 0x23:
    iVar5 = (*(code *)PTR_bcmp_001d7810)(param_2,"dyn_pending_position_ts_threshold_s",param_3);
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x11;
      goto LAB_001495ea;
    }
    iVar5 = (*(code *)PTR_bcmp_001d7810)
                      (param_2,"dyn_pending_delta_max_pending_ts_msorder_max_pending_time_ms",
                       param_3);
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x13;
      goto LAB_001495ea;
    }
  }
  bVar4 = false;
switchD_0014917c_caseD_a:
  if (param_3 == 10) {
    if ((short)param_2[1] == 0x6c6c && *param_2 == 0x615f6c616e676973) {
      *(undefined1 *)(param_1 + 1) = 0x18;
      goto LAB_001495ea;
    }
    if ((short)param_2[1] == 0x6574 && *param_2 == 0x61675f6863756f74) {
      *(undefined1 *)(param_1 + 1) = 0x19;
      goto LAB_001495ea;
    }
  }
  else if (param_3 == 0x18) {
    lVar1 = param_2[2];
    auVar28[0] = -((char)lVar1 == s_ype_beta_00117660[0]);
    auVar28[1] = -((char)((ulong)lVar1 >> 8) == s_ype_beta_00117660[1]);
    auVar28[2] = -((char)((ulong)lVar1 >> 0x10) == s_ype_beta_00117660[2]);
    auVar28[3] = -((char)((ulong)lVar1 >> 0x18) == s_ype_beta_00117660[3]);
    auVar28[4] = -((char)((ulong)lVar1 >> 0x20) == s_ype_beta_00117660[4]);
    auVar28[5] = -((char)((ulong)lVar1 >> 0x28) == s_ype_beta_00117660[5]);
    auVar28[6] = -((char)((ulong)lVar1 >> 0x30) == s_ype_beta_00117660[6]);
    auVar28[7] = -((char)((ulong)lVar1 >> 0x38) == s_ype_beta_00117660[7]);
    auVar28[8] = -(s_ype_beta_00117660[8] == '\0');
    auVar28[9] = -(UNK_00117669 == '\0');
    auVar28[10] = -(UNK_0011766a == '\0');
    auVar28[0xb] = -(UNK_0011766b == '\0');
    auVar28[0xc] = -(UNK_0011766c == '\0');
    auVar28[0xd] = -(UNK_0011766d == '\0');
    auVar28[0xe] = -(UNK_0011766e == '\0');
    auVar28[0xf] = -(UNK_0011766f == '\0');
    auVar16[0] = -((char)*param_2 == DAT_00117700);
    auVar16[1] = -(*(char *)((long)param_2 + 1) == UNK_00117701);
    auVar16[2] = -(*(char *)((long)param_2 + 2) == UNK_00117702);
    auVar16[3] = -(*(char *)((long)param_2 + 3) == UNK_00117703);
    auVar16[4] = -(*(char *)((long)param_2 + 4) == UNK_00117704);
    auVar16[5] = -(*(char *)((long)param_2 + 5) == UNK_00117705);
    auVar16[6] = -(*(char *)((long)param_2 + 6) == UNK_00117706);
    auVar16[7] = -(*(char *)((long)param_2 + 7) == UNK_00117707);
    auVar16[8] = -((char)param_2[1] == UNK_00117708);
    auVar16[9] = -(*(char *)((long)param_2 + 9) == UNK_00117709);
    auVar16[10] = -(*(char *)((long)param_2 + 10) == UNK_0011770a);
    auVar16[0xb] = -(*(char *)((long)param_2 + 0xb) == UNK_0011770b);
    auVar16[0xc] = -(*(char *)((long)param_2 + 0xc) == UNK_0011770c);
    auVar16[0xd] = -(*(char *)((long)param_2 + 0xd) == UNK_0011770d);
    auVar16[0xe] = -(*(char *)((long)param_2 + 0xe) == UNK_0011770e);
    auVar16[0xf] = -(*(char *)((long)param_2 + 0xf) == UNK_0011770f);
    auVar16 = auVar16 & auVar28;
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
      *(undefined1 *)(param_1 + 1) = 0x17;
      goto LAB_001495ea;
    }
  }
  if ((bVar4) &&
     (iVar5 = (*(code *)PTR_bcmp_001d7810)(param_2,"touch_gate_timeout_msbook_vol_cap",param_3),
     iVar5 == 0)) {
    *(undefined1 *)(param_1 + 1) = 0x1a;
  }
  else {
    if (param_3 == 0x1e) {
      auVar29[0] = -(*(char *)((long)param_2 + 0xe) == s_ing_vol_on_depth_00117530[0]);
      auVar29[1] = -(*(char *)((long)param_2 + 0xf) == s_ing_vol_on_depth_00117530[1]);
      auVar29[2] = -((char)param_2[2] == s_ing_vol_on_depth_00117530[2]);
      auVar29[3] = -(*(char *)((long)param_2 + 0x11) == s_ing_vol_on_depth_00117530[3]);
      auVar29[4] = -(*(char *)((long)param_2 + 0x12) == s_ing_vol_on_depth_00117530[4]);
      auVar29[5] = -(*(char *)((long)param_2 + 0x13) == s_ing_vol_on_depth_00117530[5]);
      auVar29[6] = -(*(char *)((long)param_2 + 0x14) == s_ing_vol_on_depth_00117530[6]);
      auVar29[7] = -(*(char *)((long)param_2 + 0x15) == s_ing_vol_on_depth_00117530[7]);
      auVar29[8] = -(*(char *)((long)param_2 + 0x16) == s_ing_vol_on_depth_00117530[8]);
      auVar29[9] = -(*(char *)((long)param_2 + 0x17) == s_ing_vol_on_depth_00117530[9]);
      auVar29[10] = -((char)param_2[3] == s_ing_vol_on_depth_00117530[10]);
      auVar29[0xb] = -(*(char *)((long)param_2 + 0x19) == s_ing_vol_on_depth_00117530[0xb]);
      auVar29[0xc] = -(*(char *)((long)param_2 + 0x1a) == s_ing_vol_on_depth_00117530[0xc]);
      auVar29[0xd] = -(*(char *)((long)param_2 + 0x1b) == s_ing_vol_on_depth_00117530[0xd]);
      auVar29[0xe] = -(*(char *)((long)param_2 + 0x1c) == s_ing_vol_on_depth_00117530[0xe]);
      auVar29[0xf] = -(*(char *)((long)param_2 + 0x1d) == s_ing_vol_on_depth_00117530[0xf]);
      auVar17[0] = -((char)*param_2 == DAT_001177a0);
      auVar17[1] = -(*(char *)((long)param_2 + 1) == UNK_001177a1);
      auVar17[2] = -(*(char *)((long)param_2 + 2) == UNK_001177a2);
      auVar17[3] = -(*(char *)((long)param_2 + 3) == UNK_001177a3);
      auVar17[4] = -(*(char *)((long)param_2 + 4) == UNK_001177a4);
      auVar17[5] = -(*(char *)((long)param_2 + 5) == UNK_001177a5);
      auVar17[6] = -(*(char *)((long)param_2 + 6) == UNK_001177a6);
      auVar17[7] = -(*(char *)((long)param_2 + 7) == UNK_001177a7);
      auVar17[8] = -((char)param_2[1] == UNK_001177a8);
      auVar17[9] = -(*(char *)((long)param_2 + 9) == UNK_001177a9);
      auVar17[10] = -(*(char *)((long)param_2 + 10) == UNK_001177aa);
      auVar17[0xb] = -(*(char *)((long)param_2 + 0xb) == UNK_001177ab);
      auVar17[0xc] = -(*(char *)((long)param_2 + 0xc) == UNK_001177ac);
      auVar17[0xd] = -(*(char *)((long)param_2 + 0xd) == UNK_001177ad);
      auVar17[0xe] = -(*(char *)((long)param_2 + 0xe) == UNK_001177ae);
      auVar17[0xf] = -(*(char *)((long)param_2 + 0xf) == UNK_001177af);
      auVar17 = auVar17 & auVar29;
      if ((ushort)((ushort)(SUB161(auVar17 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
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
        *(undefined1 *)(param_1 + 1) = 0x1d;
        goto LAB_001495ea;
      }
    }
    else if ((param_3 == 0xc) && ((int)param_2[1] == 0x7061635f && *param_2 == 0x6c6f765f6b6f6f62))
    {
      *(undefined1 *)(param_1 + 1) = 0x1b;
      goto LAB_001495ea;
    }
LAB_001495e7:
    *(undefined1 *)(param_1 + 1) = 0x1e;
  }
LAB_001495ea:
  *param_1 = 2;
  return param_1;
}


