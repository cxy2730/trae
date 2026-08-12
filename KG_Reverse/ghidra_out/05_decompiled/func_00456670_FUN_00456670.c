// Function: FUN_00456670
// Entry:    00456670
// Size:     326 bytes
// Conv:     unknown
// Signature: undefined FUN_00456670(void)
// Decompiled by Ghidra 12.1.2


void FUN_00456670(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  int local_20;
  int *local_1c;
  int local_14;
  
  local_20 = 0;
  iVar1 = *(int *)(param_1 + 0x138);
  iVar2 = *(int *)(param_1 + 0x1a4);
  if (0 < *(int *)(param_1 + 0x20)) {
    piVar8 = (int *)(*(int *)(param_1 + 0xd8) + 0xc);
    local_1c = (int *)(iVar2 + 8);
    do {
      iVar6 = (piVar8[6] * *piVar8) / *(int *)(param_1 + 0x138);
      puVar3 = *(undefined4 **)(*(int *)(iVar2 + 0x38) + local_20 * 4);
      puVar4 = *(undefined4 **)(*(int *)(iVar2 + 0x3c) + local_20 * 4);
      iVar10 = *local_1c;
      local_14 = (iVar1 + 2) * iVar6;
      if (0 < local_14) {
        puVar9 = puVar4;
        do {
          uVar5 = *(undefined4 *)((int)puVar9 + (iVar10 - (int)puVar4));
          *puVar9 = uVar5;
          *(undefined4 *)(((int)puVar3 - (int)puVar4) + (int)puVar9) = uVar5;
          puVar9 = puVar9 + 1;
          local_14 = local_14 + -1;
        } while (local_14 != 0);
      }
      if (0 < iVar6 * 2) {
        puVar9 = (undefined4 *)(iVar10 + (iVar1 + -2) * iVar6 * 4);
        iVar12 = iVar6 * 2;
        puVar11 = puVar4 + iVar6 * iVar1;
        do {
          *(undefined4 *)(((int)puVar4 - iVar10) + (int)puVar9) =
               *(undefined4 *)((int)puVar11 + (iVar10 - (int)puVar4));
          *puVar11 = *puVar9;
          puVar9 = puVar9 + 1;
          iVar12 = iVar12 + -1;
          puVar11 = puVar11 + 1;
        } while (iVar12 != 0);
      }
      if (0 < iVar6) {
        iVar12 = 0;
        iVar10 = iVar6;
        do {
          iVar7 = iVar12 + iVar6 * -4;
          iVar12 = iVar12 + 4;
          iVar10 = iVar10 + -1;
          *(undefined4 *)(iVar7 + (int)puVar3) = *puVar3;
        } while (iVar10 != 0);
      }
      local_20 = local_20 + 1;
      local_1c = local_1c + 1;
      piVar8 = piVar8 + 0x15;
    } while (local_20 < *(int *)(param_1 + 0x20));
  }
  return;
}

