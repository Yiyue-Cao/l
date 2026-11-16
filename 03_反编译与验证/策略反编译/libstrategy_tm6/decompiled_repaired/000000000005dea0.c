// ELF address 0x000000000005dea0; strategy_tm6::signal_pairs_tree::RollingmsQueue<T>::update

/* strategy_tm6::signal_pairs_tree::RollingmsQueue<T>::update */

void __rustcall
strategy_tm6::signal_pairs_tree::RollingmsQueue<T>::update
          (double param_1,ulong *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  
  uVar2 = param_3[8];
  uVar3 = param_3[9];
  uVar16 = *param_2;
  uVar14 = param_2[3];
  if (uVar14 == uVar16) {
                    /* try { // try from 0015dec7 to 0015ded5 has its CatchHandler @ 0015e001 */
    alloc::collections::vec_deque::VecDeque<T,A>::grow
              (param_2,&
                       PTR_anon_d4a1fc886ee21fee57a5c323490ee03a_28_llvm_17305594220767975752_001d4278
              );
    uVar16 = *param_2;
    uVar14 = param_2[3];
  }
  uVar17 = 0;
  if (uVar16 <= uVar14 + param_2[2]) {
    uVar17 = uVar16;
  }
  uVar16 = param_2[1];
  lVar15 = ((uVar14 + param_2[2]) - uVar17) * 0x68;
  *(double *)(uVar16 + lVar15) = param_1;
  uVar6 = param_3[1];
  uVar7 = param_3[2];
  uVar8 = param_3[3];
  uVar9 = param_3[4];
  uVar10 = param_3[5];
  uVar11 = param_3[6];
  uVar12 = param_3[7];
  puVar1 = (undefined8 *)(uVar16 + 8 + lVar15);
  *puVar1 = *param_3;
  puVar1[1] = uVar6;
  puVar1 = (undefined8 *)(uVar16 + 0x18 + lVar15);
  *puVar1 = uVar7;
  puVar1[1] = uVar8;
  puVar1 = (undefined8 *)(uVar16 + 0x28 + lVar15);
  *puVar1 = uVar9;
  puVar1[1] = uVar10;
  puVar1 = (undefined8 *)(uVar16 + 0x38 + lVar15);
  *puVar1 = uVar11;
  puVar1[1] = uVar12;
  *(undefined8 *)(uVar16 + 0x48 + lVar15) = uVar2;
  *(undefined8 *)(uVar16 + 0x50 + lVar15) = uVar3;
  uVar2 = param_3[0xb];
  puVar1 = (undefined8 *)(uVar16 + 0x58 + lVar15);
  *puVar1 = param_3[10];
  puVar1[1] = uVar2;
  uVar16 = param_2[3] + 1;
  param_2[3] = uVar16;
  puVar13 = PTR___rust_dealloc_001d9238;
  if (uVar16 != 0) {
    do {
      uVar14 = param_2[2];
      uVar17 = *param_2;
      uVar4 = param_2[1];
      uVar19 = uVar17;
      if (uVar14 < uVar17) {
        uVar19 = 0;
      }
      dVar5 = param_1 - *(double *)(uVar4 + (uVar14 - uVar19) * 0x68);
      if (dVar5 < (double)param_2[4] || dVar5 == (double)param_2[4]) {
        return;
      }
      uVar19 = 0;
      if (uVar17 <= uVar14 + 1) {
        uVar19 = uVar17;
      }
      param_2[2] = (uVar14 - uVar19) + 1;
      uVar16 = uVar16 - 1;
      param_2[3] = uVar16;
      lVar18 = uVar14 * 0x68;
      lVar15 = *(long *)(uVar4 + 0x48 + lVar18);
      if (lVar15 != 0 && *(long *)(uVar4 + 8 + lVar18) != 2) {
        (*(code *)puVar13)(*(undefined8 *)(uVar4 + lVar18 + 0x50),lVar15,1);
        uVar16 = param_2[3];
      }
    } while (uVar16 != 0);
  }
  return;
}


