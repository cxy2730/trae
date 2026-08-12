// Function: FUN_0045bdf0
// Entry:    0045bdf0
// Size:     406 bytes
// Conv:     unknown
// Signature: undefined FUN_0045bdf0(void)
// Decompiled by Ghidra 12.1.2


void FUN_0045bdf0(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ushort *puVar9;
  ushort *puVar10;
  int iVar11;
  int iVar12;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_14;
  
  iVar12 = 0;
  local_2c = 0;
  piVar1 = param_2 + 3;
  iVar7 = param_2[2];
  iVar3 = param_2[4];
  piVar2 = param_2 + 5;
  iVar8 = *param_2;
  local_28 = 0;
  local_24 = 0;
  if (iVar8 <= param_2[1]) {
    local_30 = iVar8 * 8 + 4;
    local_14 = (param_2[1] - iVar8) + 1;
    param_2 = (int *)(*(int *)(*(int *)(param_1 + 0x1c8) + 0x18) + iVar8 * 4);
    do {
      if (iVar7 <= *piVar1) {
        iVar8 = iVar7 * 4 + 2;
        puVar9 = (ushort *)(*param_2 + (iVar7 * 0x20 + iVar3) * 2);
        iVar4 = (*piVar1 - iVar7) + 1;
        do {
          if (iVar3 <= *piVar2) {
            iVar6 = iVar3 * 8 + 4;
            iVar11 = (*piVar2 - iVar3) + 1;
            puVar10 = puVar9;
            do {
              uVar5 = (uint)*puVar10;
              puVar10 = puVar10 + 1;
              if (uVar5 != 0) {
                local_2c = local_2c + local_30 * uVar5;
                local_28 = local_28 + iVar8 * uVar5;
                iVar12 = iVar12 + uVar5;
                local_24 = local_24 + iVar6 * uVar5;
              }
              iVar6 = iVar6 + 8;
              iVar11 = iVar11 + -1;
            } while (iVar11 != 0);
          }
          iVar8 = iVar8 + 4;
          puVar9 = puVar9 + 0x20;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      param_2 = param_2 + 1;
      local_30 = local_30 + 8;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  iVar7 = iVar12 >> 1;
  *(char *)(**(int **)(param_1 + 0x88) + param_3) = (char)((iVar7 + local_2c) / iVar12);
  *(char *)(*(int *)(*(int *)(param_1 + 0x88) + 4) + param_3) = (char)((local_28 + iVar7) / iVar12);
  *(char *)(*(int *)(*(int *)(param_1 + 0x88) + 8) + param_3) = (char)((local_24 + iVar7) / iVar12);
  return;
}

