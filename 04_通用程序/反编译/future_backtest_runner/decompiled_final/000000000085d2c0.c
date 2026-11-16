// ELF address 0x000000000085d2c0; future_backtest::Exchange::exchange::Exchange::new

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
_ZN15future_backtest8Exchange8exchange8Exchange3new17h411a43627a8f6e63E
          (undefined8 *param_1,undefined8 *param_2,long *param_3,undefined8 *param_4)

{
  undefined1 (*pauVar1) [16];
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 *puVar15;
  long *in_FS_OFFSET;
  undefined1 auVar16 [16];
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 auStack_118 [3];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17h50a5061b4b6652f4E
            (&uStack_148,param_3,&UNK_01946080);
  (*(code *)
    PTR__ZN15future_backtest8Exchange11market_info10MarketInfo3new17hb3c84cc17e241ed3E_019fcde0)
            (&uStack_70,&uStack_148);
  _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17h50a5061b4b6652f4E
            (&uStack_148,param_3,&UNK_01946098);
  (*(code *)
    PTR__ZN15future_backtest8Customer11order_store10OrderStore3new17h45accad775c7bbf8E_019fcd80)
            (&uStack_100,&uStack_148);
  _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17h50a5061b4b6652f4E
            (&uStack_148,param_3,&UNK_019460b0);
  (*(code *)
    PTR__ZN15future_backtest8Customer11order_store20ExchangeRunningOrder3new17hb41adeb87e04fce5E_019fcd98
  )(&uStack_d0,&uStack_148);
  auStack_118[0] = 0x8000000000000000;
  (*(code *)
    PTR__ZN15future_backtest8Customer11order_store20ExchangeDealingOrder3new17h16476edd510abfd5E_019fcdb0
  )(&uStack_a0,auStack_118);
  (*(code *)
    PTR__ZN15future_backtest8Customer11order_store21ExchangeRemovingOrder3new17hd8245e05f0399ce1E_019fcdc8
  )(&uStack_148,auStack_118);
  lVar2 = *in_FS_OFFSET;
  pauVar1 = (undefined1 (*) [16])(lVar2 + -0x30);
  if (*(char *)(lVar2 + -0x20) == '\x01') {
    auVar16 = *pauVar1;
  }
  else {
    auVar16 = (*(code *)
                PTR__ZN3std3sys6random5linux19hashmap_random_keys17haac972767ca845fcE_019fc048)();
    *pauVar1 = auVar16;
    *(undefined1 *)(lVar2 + -0x20) = 1;
  }
  *(long *)*pauVar1 = auVar16._0_8_ + 1;
  uVar3 = param_4[9];
  param_1[8] = param_4[8];
  param_1[9] = uVar3;
  uVar3 = *param_4;
  uVar4 = param_4[1];
  uVar5 = param_4[2];
  uVar6 = param_4[3];
  uVar7 = param_4[4];
  uVar8 = param_4[5];
  uVar9 = param_4[7];
  param_1[6] = param_4[6];
  param_1[7] = uVar9;
  param_1[4] = uVar7;
  param_1[5] = uVar8;
  param_1[2] = uVar5;
  param_1[3] = uVar6;
  *param_1 = uVar3;
  param_1[1] = uVar4;
  param_1[0xc] = param_2[2];
  uVar3 = param_2[1];
  param_1[10] = *param_2;
  param_1[0xb] = uVar3;
  param_1[0x13] = uStack_40;
  param_1[0x14] = uStack_38;
  param_1[0x11] = uStack_50;
  param_1[0x12] = uStack_48;
  param_1[0xf] = uStack_60;
  param_1[0x10] = uStack_58;
  param_1[0xd] = uStack_70;
  param_1[0xe] = uStack_68;
  param_1[0x15] = uStack_100;
  param_1[0x16] = uStack_f8;
  param_1[0x17] = uStack_f0;
  param_1[0x18] = uStack_e8;
  param_1[0x19] = uStack_e0;
  param_1[0x1a] = uStack_d8;
  param_1[0x1d] = uStack_c0;
  param_1[0x1e] = uStack_b8;
  param_1[0x1f] = uStack_b0;
  param_1[0x20] = uStack_a8;
  param_1[0x1b] = uStack_d0;
  param_1[0x1c] = uStack_c8;
  param_1[0x21] = uStack_a0;
  param_1[0x22] = uStack_98;
  param_1[0x23] = uStack_90;
  param_1[0x24] = uStack_88;
  param_1[0x25] = uStack_80;
  param_1[0x26] = uStack_78;
  param_1[0x27] = uStack_148;
  param_1[0x28] = uStack_140;
  param_1[0x29] = uStack_138;
  param_1[0x2a] = uStack_130;
  param_1[0x2b] = uStack_128;
  param_1[0x2c] = uStack_120;
  uVar3 = _UNK_01945fb8;
  param_1[0x2f] = _DAT_01945fb0;
  param_1[0x30] = uVar3;
  uVar12 = _UNK_01945fac;
  uVar11 = _UNK_01945fa8;
  uVar10 = _UNK_01945fa4;
  *(undefined4 *)(param_1 + 0x2d) = _DAT_01945fa0;
  *(undefined4 *)((long)param_1 + 0x16c) = uVar10;
  *(undefined4 *)(param_1 + 0x2e) = uVar11;
  *(undefined4 *)((long)param_1 + 0x174) = uVar12;
  *(undefined1 (*) [16])(param_1 + 0x31) = auVar16;
  puVar13 = PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_019fbb20;
  lVar2 = param_3[1];
  lVar14 = param_3[2];
  if (lVar14 != 0) {
    puVar15 = (undefined8 *)(lVar2 + 8);
    do {
      if (puVar15[-1] != 0) {
        (*(code *)puVar13)(*puVar15,puVar15[-1],1);
      }
      puVar15 = puVar15 + 3;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  if (*param_3 != 0) {
    (*(code *)PTR__RNvCseg1Mqjmf11U_7___rustc14___rust_dealloc_019fbb20)(lVar2,*param_3 * 0x18,8);
  }
  return param_1;
}


