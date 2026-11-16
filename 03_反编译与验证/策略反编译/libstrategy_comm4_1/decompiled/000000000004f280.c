// ELF address 0x000000000004f280; strategy_comm4_1::Comm4Params::effective

/* WARNING: Removing unreachable block (ram,0x0014f29a) */
/* WARNING: Removing unreachable block (ram,0x0014f2ae) */
/* strategy_comm4_1::Comm4Params::effective */

void __rustcall
strategy_comm4_1::Comm4Params::effective(undefined8 *param_1,long param_2,ulong param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int *piVar14;
  char cVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  char cVar19;
  
  lVar1 = param_2 + (param_3 & 0xff) * 0xf0;
  piVar14 = *(int **)(lVar1 + 0x118);
  if (*(long *)(lVar1 + 0x120) == 5) {
    cVar19 = ((char)piVar14[1] == 'r' && *piVar14 == 0x656b616d) * '\x02';
  }
  else if (*(long *)(lVar1 + 0x120) == 4) {
    cVar19 = *piVar14 == 0x70696b73;
  }
  else {
    cVar19 = '\0';
  }
  puVar17 = (undefined8 *)(param_2 + 0x438);
  if (*(char *)(lVar1 + 0x40) != '\0') {
    puVar17 = (undefined8 *)(lVar1 + 0x48);
  }
  puVar16 = (undefined8 *)(param_2 + 0x440);
  if (*(char *)(lVar1 + 0x50) != '\0') {
    puVar16 = (undefined8 *)(lVar1 + 0x58);
  }
  uVar2 = *puVar16;
  puVar16 = (undefined8 *)(param_2 + 0x448);
  if (*(char *)(lVar1 + 0x60) != '\0') {
    puVar16 = (undefined8 *)(lVar1 + 0x68);
  }
  puVar18 = (undefined8 *)(param_2 + 0x450);
  if (*(char *)(lVar1 + 0x70) != '\0') {
    puVar18 = (undefined8 *)(lVar1 + 0x78);
  }
  uVar3 = *puVar16;
  uVar4 = *puVar18;
  puVar16 = (undefined8 *)(param_2 + 0x418);
  if (*(char *)(lVar1 + 0x80) != '\0') {
    puVar16 = (undefined8 *)(lVar1 + 0x88);
  }
  uVar5 = *puVar16;
  puVar16 = (undefined8 *)(param_2 + 0x420);
  if (*(char *)(lVar1 + 0x90) != '\0') {
    puVar16 = (undefined8 *)(lVar1 + 0x98);
  }
  uVar6 = *puVar16;
  puVar16 = (undefined8 *)(param_2 + 0x408);
  if (*(char *)(lVar1 + 0xa0) != '\0') {
    puVar16 = (undefined8 *)(lVar1 + 0xa8);
  }
  puVar18 = (undefined8 *)(param_2 + 0x410);
  if (*(char *)(lVar1 + 0xb0) != '\0') {
    puVar18 = (undefined8 *)(lVar1 + 0xb8);
  }
  uVar7 = *puVar16;
  uVar8 = *puVar18;
  cVar15 = (char)*(undefined4 *)(lVar1 + 0x128);
  if (cVar15 == '\x02') {
    cVar15 = (char)*(undefined4 *)(param_2 + 0x4d0);
  }
  puVar16 = (undefined8 *)(param_2 + 0x3d8);
  if (*(char *)(lVar1 + 0xc0) != '\0') {
    puVar16 = (undefined8 *)(lVar1 + 200);
  }
  uVar9 = *puVar16;
  puVar16 = (undefined8 *)(param_2 + 0x3e0);
  if (*(char *)(lVar1 + 0xd0) != '\0') {
    puVar16 = (undefined8 *)(lVar1 + 0xd8);
  }
  uVar10 = *puVar16;
  puVar16 = (undefined8 *)(param_2 + 1000);
  if (*(char *)(lVar1 + 0xe0) != '\0') {
    puVar16 = (undefined8 *)(lVar1 + 0xe8);
  }
  puVar18 = (undefined8 *)(param_2 + 0x3c8);
  if (*(char *)(lVar1 + 0xf0) != '\0') {
    puVar18 = (undefined8 *)(lVar1 + 0xf8);
  }
  uVar11 = *puVar16;
  uVar12 = *puVar18;
  puVar16 = (undefined8 *)(param_2 + 0x3d0);
  if (*(char *)(lVar1 + 0x100) != '\0') {
    puVar16 = (undefined8 *)(lVar1 + 0x108);
  }
  uVar13 = *puVar16;
  *param_1 = *puVar17;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  param_1[4] = uVar5;
  param_1[5] = uVar6;
  param_1[6] = uVar7;
  param_1[7] = uVar8;
  *(char *)((long)param_1 + 0x69) = cVar15;
  param_1[8] = uVar9;
  param_1[9] = uVar10;
  param_1[10] = uVar11;
  param_1[0xb] = uVar12;
  param_1[0xc] = uVar13;
  *(char *)(param_1 + 0xd) = cVar19;
  return;
}


