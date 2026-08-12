// Function: FUN_004573a0
// Entry:    004573a0
// Size:     284 bytes
// Conv:     unknown
// Signature: undefined FUN_004573a0(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_004573a0(int param_1)

{
  short *psVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 local_4;
  
  iVar2 = param_1;
  iVar8 = 0;
  local_4 = 0;
  iVar9 = *(int *)(param_1 + 0x1a8);
  if ((*(int *)(param_1 + 0xdc) == 0) || (*(int *)(param_1 + 0xa0) == 0)) {
    return 0;
  }
  if (*(int *)(iVar9 + 0x70) == 0) {
    uVar3 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,*(int *)(param_1 + 0x20) * 0x18);
    *(undefined4 *)(iVar9 + 0x70) = uVar3;
  }
  iVar9 = *(int *)(iVar9 + 0x70);
  if (0 < *(int *)(param_1 + 0x20)) {
    puVar4 = (undefined4 *)(*(int *)(param_1 + 0xd8) + 0x4c);
    param_1 = 0;
    do {
      psVar1 = (short *)*puVar4;
      if (psVar1 == (short *)0x0) {
        return 0;
      }
      if (*psVar1 == 0) {
        return 0;
      }
      if (psVar1[1] == 0) {
        return 0;
      }
      if (psVar1[8] == 0) {
        return 0;
      }
      if (psVar1[0x10] == 0) {
        return 0;
      }
      if (psVar1[9] == 0) {
        return 0;
      }
      if (psVar1[2] == 0) {
        return 0;
      }
      piVar5 = (int *)(*(int *)(iVar2 + 0xa0) + param_1);
      if (*piVar5 < 0) {
        return 0;
      }
      iVar7 = iVar9 - (int)piVar5;
      iVar6 = 5;
      do {
        piVar5 = piVar5 + 1;
        *(int *)(iVar7 + (int)piVar5) = *piVar5;
        if (*piVar5 != 0) {
          local_4 = 1;
        }
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      iVar9 = iVar9 + 0x18;
      iVar8 = iVar8 + 1;
      param_1 = param_1 + 0x100;
      puVar4 = puVar4 + 0x15;
    } while (iVar8 < *(int *)(iVar2 + 0x20));
  }
  return local_4;
}

