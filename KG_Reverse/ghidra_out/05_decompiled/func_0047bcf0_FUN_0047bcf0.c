// Function: FUN_0047bcf0
// Entry:    0047bcf0
// Size:     119 bytes
// Conv:     unknown
// Signature: undefined FUN_0047bcf0(void)
// Decompiled by Ghidra 12.1.2


void FUN_0047bcf0(uint param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined4 *puVar12;
  
  iVar7 = param_1 - 1;
  uVar5 = 0;
  if (0 < iVar7) {
    uVar5 = param_1 >> 1;
    uVar8 = uVar5;
    puVar10 = param_3;
    puVar12 = param_2;
    do {
      uVar2 = *puVar12;
      puVar12 = puVar12 + 1;
      *puVar10 = uVar2;
      puVar10 = puVar10 + 2;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  if (iVar7 <= (int)uVar5) {
    param_3[1] = param_2[uVar5];
    return;
  }
  iVar7 = iVar7 - uVar5;
  piVar9 = param_2 + uVar5;
  iVar6 = uVar5 + iVar7;
  iVar4 = iVar7 * 2;
  piVar11 = param_3 + 1;
  do {
    piVar1 = piVar9 + 1;
    iVar3 = *piVar9;
    piVar9 = piVar9 + 1;
    iVar7 = iVar7 + -1;
    *piVar11 = *piVar1 + iVar3;
    piVar11 = piVar11 + 2;
  } while (iVar7 != 0);
  param_3[iVar4 + 1] = param_2[iVar6];
  return;
}

