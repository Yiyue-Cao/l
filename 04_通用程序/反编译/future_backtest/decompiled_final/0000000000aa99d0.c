// ELF address 0x0000000000aa99d0; future_backtest::MetaControl::router::MetaDecisionSchedule::pop_due

/* WARNING: Removing unreachable block (ram,0x00ba9b9e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN15future_backtest11MetaControl6router20MetaDecisionSchedule7pop_due17h29c6a31e516db55bE
               (double param_1,long *param_2,ulong *param_3)

{
  undefined4 *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  ulong *puStack_88;
  long *plStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  
  lStack_a0 = 0;
  lStack_98 = 8;
  lStack_90 = 0;
  uVar9 = param_3[3];
  plStack_80 = param_2;
  if (uVar9 != 0) {
    uVar2 = *param_3;
    param_1 = param_1 + _DAT_00353600;
    uVar3 = param_3[1];
    lStack_78 = -uVar9;
    lVar5 = 8;
    lVar8 = 0;
    uVar6 = param_3[2];
    puStack_88 = param_3;
    do {
      lVar4 = lStack_90;
      uVar9 = uVar9 - 1;
      uVar10 = uVar2;
      if (uVar6 < uVar2) {
        uVar10 = 0;
      }
      if (param_1 < *(double *)(uVar3 + 0x18 + (uVar6 - uVar10) * 0x40)) break;
      uVar10 = uVar2;
      if (uVar6 + 1 < uVar2) {
        uVar10 = 0;
      }
      uVar10 = (uVar6 - uVar10) + 1;
      puStack_88[2] = uVar10;
      puStack_88[3] = uVar9;
      uStack_70 = *(undefined8 *)(uVar3 + uVar6 * 0x40);
      lVar7 = uVar6 * 0x40 + uVar3;
      uStack_38 = *(undefined8 *)(lVar7 + 0x38);
      uStack_68 = *(undefined4 *)(lVar7 + 8);
      uStack_64 = *(undefined4 *)(lVar7 + 0xc);
      uStack_60 = *(undefined4 *)(lVar7 + 0x10);
      uStack_5c = *(undefined4 *)(lVar7 + 0x14);
      uStack_58 = *(undefined4 *)(lVar7 + 0x18);
      uStack_54 = *(undefined4 *)(lVar7 + 0x1c);
      uStack_50 = *(undefined4 *)(lVar7 + 0x20);
      uStack_4c = *(undefined4 *)(lVar7 + 0x24);
      uStack_48 = *(undefined4 *)(lVar7 + 0x28);
      uStack_44 = *(undefined4 *)(lVar7 + 0x2c);
      uStack_40 = *(undefined4 *)(lVar7 + 0x30);
      uStack_3c = *(undefined4 *)(lVar7 + 0x34);
      if (lStack_90 == lStack_a0) {
        (*(code *)PTR__ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h1d03ea1244ca0dd0E_01aa7ba8)
                  (&lStack_a0,anon_3a6d2b86dc1bb50257a917c3dcf9a912_214_llvm_12364612859142937606);
        lVar5 = lStack_98;
      }
      puVar1 = (undefined4 *)(lVar5 + 0x30 + lVar8);
      *puVar1 = uStack_40;
      puVar1[1] = uStack_3c;
      puVar1[2] = (undefined4)uStack_38;
      puVar1[3] = uStack_38._4_4_;
      puVar1 = (undefined4 *)(lVar5 + 0x20 + lVar8);
      *puVar1 = uStack_50;
      puVar1[1] = uStack_4c;
      puVar1[2] = uStack_48;
      puVar1[3] = uStack_44;
      puVar1 = (undefined4 *)(lVar5 + 0x10 + lVar8);
      *puVar1 = uStack_60;
      puVar1[1] = uStack_5c;
      puVar1[2] = uStack_58;
      puVar1[3] = uStack_54;
      *(undefined8 *)(lVar5 + lVar8) = uStack_70;
      ((undefined8 *)(lVar5 + lVar8))[1] = CONCAT44(uStack_64,uStack_68);
      lStack_90 = lVar4 + 1;
      lVar8 = lVar8 + 0x40;
      uVar6 = uVar10;
    } while (lStack_78 + lStack_90 != 0);
  }
  plStack_80[2] = lStack_90;
  *plStack_80 = lStack_a0;
  plStack_80[1] = lStack_98;
  return;
}


