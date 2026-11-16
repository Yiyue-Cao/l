// ELF address 0x000000000082f6d0; future_backtest::MetaControl::router::load_reader::{{closure}}

undefined *
_ZN15future_backtest11MetaControl6router11load_reader28__u7b__u7b_closure_u7d__u7d_17h8d5c311b44a52b04E
          (ulong *param_1,long param_2)

{
  undefined *in_RAX;
  ulong uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  
  puVar3 = (undefined1 *)register0x00000020;
  if (param_2 - 4U < 0xb) {
    in_RAX = &UNK_00375358;
                    /* WARNING: Switch is manually overridden */
    switch(param_2 - 4U) {
    case 0:
      if ((int)*param_1 == 0x65746164) {
        return (undefined *)0x0;
      }
      in_RAX = (undefined *)0x1;
      if ((int)*param_1 == 0x65646f63) {
        return (undefined *)0x1;
      }
      break;
    case 2:
      in_RAX = (undefined *)0x3;
      if (*(short *)((long)param_1 + 4) == 0x6570 && (int)*param_1 == 0x79746261) {
        return (undefined *)0x3;
      }
      break;
    case 4:
      in_RAX = (undefined *)0x2;
      if (*param_1 == 0x6365735f656d6974) {
        return (undefined *)0x2;
      }
      break;
    case 6:
      uVar1 = *param_1 ^ 0x6c61765f64657270;
      uVar2 = (ulong)(ushort)param_1[1] ^ 0x6575;
      in_RAX = (undefined *)0x4;
      goto LAB_0092f7be;
    case 9:
      uVar1 = *param_1 ^ 0x6461625f64657270;
      uVar2 = *(ulong *)((long)param_1 + 5) ^ 0x626f72705f646162;
      in_RAX = (undefined *)0x6;
      goto LAB_0092f7be;
    case 10:
      goto override_jmp_0092f6e8_case_10;
    }
  }
  do {
    register0x00000020 = (BADSPACEBASE *)(puVar3 + -8);
    *(undefined **)(puVar3 + -8) = in_RAX;
    param_1 = (ulong *)&UNK_0037597e;
    *(undefined8 *)(puVar3 + -0x10) = 0x92f762;
    (*(code *)PTR__ZN4core6option13expect_failed17h9f9eceee6280f039E_019fc070)
              (&UNK_0037597e,0x1b,&UNK_019450f0);
override_jmp_0092f6e8_case_10:
    uVar1 = *param_1 ^ 0x6f6f675f64657270;
    uVar2 = *(ulong *)((long)param_1 + 6) ^ 0x626f72705f646f6f;
    in_RAX = (undefined *)0x5;
LAB_0092f7be:
    puVar3 = (undefined1 *)register0x00000020;
  } while (uVar2 != 0 || uVar1 != 0);
  return in_RAX;
}


