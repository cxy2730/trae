// Function: FUN_0047bbf0
// Entry:    0047bbf0
// Size:     251 bytes
// Conv:     unknown
// Signature: undefined FUN_0047bbf0(void)
// Decompiled by Ghidra 12.1.2


void FUN_0047bbf0(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int local_18;
  int local_14;
  int local_10;
  
  local_10 = param_1;
  iVar8 = param_2 >> 1;
  if (0 < param_1) {
    local_14 = iVar8 * 4;
    param_1 = 1;
    local_18 = 0;
    puVar7 = param_4;
    do {
      iVar6 = local_18;
      if (0 < iVar8) {
        puVar9 = (undefined4 *)((param_3 - (int)param_4) + (int)puVar7);
        puVar4 = puVar7;
        iVar11 = iVar8;
        do {
          uVar2 = *puVar9;
          puVar9 = puVar9 + 1;
          *puVar4 = uVar2;
          puVar4 = puVar4 + 2;
          iVar11 = iVar11 + -1;
          iVar6 = local_14;
        } while (iVar11 != 0);
      }
      iVar11 = iVar8 + -1;
      iVar12 = param_1;
      if (0 < iVar11) {
        piVar5 = (int *)(param_3 + iVar6);
        iVar12 = param_1 + iVar11 * 2;
        iVar6 = iVar6 + (iVar8 + -1) * 4;
        piVar10 = puVar7 + 1;
        do {
          piVar1 = piVar5 + 1;
          iVar3 = *piVar5;
          piVar5 = piVar5 + 1;
          iVar11 = iVar11 + -1;
          *piVar10 = *piVar1 + iVar3;
          piVar10 = piVar10 + 2;
        } while (iVar11 != 0);
      }
      param_4[iVar12] = *(undefined4 *)(iVar6 + param_3);
      local_18 = local_18 + param_2 * 4;
      puVar7 = puVar7 + param_2;
      local_14 = local_14 + param_2 * 4;
      param_1 = param_1 + param_2;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  return;
}

