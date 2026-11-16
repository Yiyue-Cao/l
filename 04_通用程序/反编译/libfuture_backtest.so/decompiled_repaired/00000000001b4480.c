// ELF address 0x00000000001b4480; future_backtest::Customer::order_store::ExchangeRemovingOrder::add_order

/* future_backtest::Customer::order_store::ExchangeRemovingOrder::add_order */

undefined8 __rustcall
future_backtest::Customer::order_store::ExchangeRemovingOrder::add_order
          (undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined1 auVar1 [16];
  undefined1 (*pauVar2) [16];
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ushort uVar7;
  undefined *puVar8;
  int iVar9;
  byte bVar10;
  long lVar11;
  byte bVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 *local_40;
  ulong local_38;
  
                    /* try { // try from 002b4497 to 002b44a0 has its CatchHandler @ 002b4693 */
  hashbrown::rustc_entry::_<impl_hashbrown::map::HashMap<K,V,S,A>>::rustc_entry
            (&local_58,param_1,param_2);
  pauVar2 = (undefined1 (*) [16])*local_40;
  uVar3 = local_40[1];
  uVar14 = uVar3 & local_38;
  auVar1 = *(undefined1 (*) [16])(*pauVar2 + uVar14);
  uVar7 = (ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 | (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3
          | (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
          (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 | (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6
          | (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
          (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 | (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9
          | (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
          (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
          (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
          (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
          (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar1[0xf] >> 7) << 0xf;
  uVar15 = (uint)uVar7;
  if (uVar7 == 0) {
    lVar11 = 0x10;
    do {
      uVar14 = uVar14 + lVar11 & uVar3;
      auVar1 = *(undefined1 (*) [16])(*pauVar2 + uVar14);
      lVar11 = lVar11 + 0x10;
      uVar15 = (uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
    } while (uVar15 == 0);
  }
  uVar13 = 0;
  for (; (uVar15 & 1) == 0; uVar15 = uVar15 >> 1 | 0x80000000) {
    uVar13 = uVar13 + 1;
  }
  uVar14 = uVar13 + uVar14 & uVar3;
  bVar12 = (*pauVar2)[uVar14];
  if (-1 < (char)bVar12) {
    auVar1 = *pauVar2;
    uVar15 = 0;
    for (uVar13 = (uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar1[0xf] >> 7) << 0xf); (uVar13 & 1) == 0;
        uVar13 = uVar13 >> 1 | 0x80000000) {
      uVar15 = uVar15 + 1;
    }
    uVar14 = (ulong)uVar15;
    bVar12 = (*pauVar2)[uVar14];
  }
  bVar10 = (byte)(local_38 >> 0x39);
  (*pauVar2)[uVar14] = bVar10;
  pauVar2[1][uVar14 - 0x10 & uVar3] = bVar10;
  local_40[2] = local_40[2] - (ulong)(bVar12 & 1);
  *(undefined8 *)pauVar2[uVar14 * -3 + -3] = local_58;
  *(undefined8 *)(pauVar2[uVar14 * -3 + -3] + 8) = local_50;
  *(undefined8 *)pauVar2[uVar14 * -3 + -2] = local_48;
  *(undefined8 *)(pauVar2[uVar14 * -3 + -2] + 8) = 0;
  *(undefined8 *)pauVar2[uVar14 * -3 + -1] = 8;
  *(undefined8 *)(pauVar2[uVar14 * -3 + -1] + 8) = 0;
  local_40[3] = local_40[3] + 1;
  puVar8 = PTR_bcmp_003f2740;
  lVar11 = *(long *)pauVar2[uVar14 * -3 + -1];
  lVar4 = *(long *)(pauVar2[uVar14 * -3 + -1] + 8);
  lVar5 = param_3[1];
  lVar6 = param_3[2];
  if (lVar4 != 0) {
    lVar16 = 0;
    do {
      if ((*(long *)(lVar11 + 0x10 + lVar16) == lVar6) &&
         (iVar9 = (*(code *)puVar8)(*(undefined8 *)(lVar11 + 8 + lVar16),lVar5,lVar6), iVar9 == 0))
      {
        if (*param_3 == 0) {
          return 0;
        }
        (*(code *)PTR___rust_dealloc_003f2638)(lVar5,*param_3,1);
        return 0;
      }
      lVar16 = lVar16 + 0x18;
    } while (lVar4 * 0x18 != lVar16);
  }
  lVar16 = *param_3;
  if (lVar4 == *(long *)(pauVar2[uVar14 * -3 + -2] + 8)) {
                    /* try { // try from 002b45fb to 002b4607 has its CatchHandler @ 002b467e */
    (*(code *)PTR_grow_one_003f2878)
              (pauVar2[uVar14 * -3 + -2] + 8,&PTR_s_future_backtest_src_Customer_ord_003e3118);
    lVar11 = *(long *)pauVar2[uVar14 * -3 + -1];
  }
  *(long *)(lVar11 + lVar4 * 0x18) = lVar16;
  *(long *)(lVar11 + 8 + lVar4 * 0x18) = lVar5;
  *(long *)(lVar11 + 0x10 + lVar4 * 0x18) = lVar6;
  *(long *)(pauVar2[uVar14 * -3 + -1] + 8) = lVar4 + 1;
  return 0;
}


