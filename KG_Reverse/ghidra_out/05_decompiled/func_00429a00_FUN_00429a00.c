// Function: FUN_00429a00
// Entry:    00429a00
// Size:     624 bytes
// Conv:     unknown
// Signature: undefined FUN_00429a00(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_00429a00(undefined4 *param_1,int param_2)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  
  if ((*(byte *)(param_2 + 0x14) & 1) == 0) {
    uVar4 = *param_1;
    if (*(uint *)(param_2 + 0x28) < *(int *)(param_2 + 0x24) + 4U) {
      FUN_0049a3b6();
    }
    **(undefined4 **)(param_2 + 0x24) = uVar4;
    iVar5 = *(int *)(param_2 + 0x24);
    *(int *)(param_2 + 0x24) = iVar5 + 4;
    uVar4 = param_1[1];
    if (*(uint *)(param_2 + 0x28) < iVar5 + 8U) {
      FUN_0049a3b6();
    }
    **(undefined4 **)(param_2 + 0x24) = uVar4;
    iVar5 = *(int *)(param_2 + 0x24);
    *(int *)(param_2 + 0x24) = iVar5 + 4;
    uVar4 = param_1[2];
    if (*(uint *)(param_2 + 0x28) < iVar5 + 8U) {
      FUN_0049a3b6();
    }
    **(undefined4 **)(param_2 + 0x24) = uVar4;
    iVar5 = *(int *)(param_2 + 0x24);
    *(int *)(param_2 + 0x24) = iVar5 + 4;
    uVar2 = *(undefined2 *)(param_1 + 0xb);
    if (*(uint *)(param_2 + 0x28) < iVar5 + 6U) {
      FUN_0049a3b6();
    }
    **(undefined2 **)(param_2 + 0x24) = uVar2;
    iVar5 = *(int *)(param_2 + 0x24);
    *(int *)(param_2 + 0x24) = iVar5 + 2;
    uVar2 = *(undefined2 *)((int)param_1 + 0x2e);
    if (*(uint *)(param_2 + 0x28) < iVar5 + 4U) {
      FUN_0049a3b6();
    }
    **(undefined2 **)(param_2 + 0x24) = uVar2;
    iVar5 = *(int *)(param_2 + 0x24);
    *(int *)(param_2 + 0x24) = iVar5 + 2;
    uVar6 = 0xffffffff;
    pcVar8 = (char *)(param_1 + 3);
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    iVar3 = ~uVar6 - 1;
    if (*(uint *)(param_2 + 0x28) < iVar5 + 6U) {
      FUN_0049a3b6();
    }
    **(int **)(param_2 + 0x24) = iVar3;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 4;
    if (0 < iVar3) {
      FUN_0049a326(param_1 + 3,iVar3);
    }
    uVar4 = param_1[0xd];
    if (*(uint *)(param_2 + 0x28) < *(int *)(param_2 + 0x24) + 4U) {
      FUN_0049a3b6();
    }
    **(undefined4 **)(param_2 + 0x24) = uVar4;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 4;
    if (0 < (int)param_1[0xd]) {
      FUN_0049a326(param_1[0xc],param_1[0xd]);
    }
  }
  else {
    FUN_00429740();
    if (*(uint *)(param_2 + 0x28) < *(int *)(param_2 + 0x24) + 4U) {
      FUN_0049a432((*(int *)(param_2 + 0x24) - *(uint *)(param_2 + 0x28)) + 4);
    }
    *param_1 = **(undefined4 **)(param_2 + 0x24);
    iVar5 = *(int *)(param_2 + 0x24);
    iVar3 = iVar5 + 4;
    *(int *)(param_2 + 0x24) = iVar3;
    if (*(uint *)(param_2 + 0x28) < iVar5 + 8U) {
      FUN_0049a432((iVar3 - *(uint *)(param_2 + 0x28)) + 4);
    }
    param_1[1] = **(undefined4 **)(param_2 + 0x24);
    iVar5 = *(int *)(param_2 + 0x24);
    iVar3 = iVar5 + 4;
    *(int *)(param_2 + 0x24) = iVar3;
    if (*(uint *)(param_2 + 0x28) < iVar5 + 8U) {
      FUN_0049a432((iVar3 - *(uint *)(param_2 + 0x28)) + 4);
    }
    param_1[2] = **(undefined4 **)(param_2 + 0x24);
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 4;
    FUN_004296c0(param_1 + 0xb);
    FUN_004296c0((int)param_1 + 0x2e);
    puVar7 = param_1 + 3;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    if (*(uint *)(param_2 + 0x28) < *(int *)(param_2 + 0x24) + 4U) {
      FUN_0049a432((*(int *)(param_2 + 0x24) - *(uint *)(param_2 + 0x28)) + 4);
    }
    uVar4 = **(undefined4 **)(param_2 + 0x24);
    *(undefined4 **)(param_2 + 0x24) = *(undefined4 **)(param_2 + 0x24) + 1;
    FUN_0049a217(param_1 + 3,uVar4);
    if (*(uint *)(param_2 + 0x28) < *(int *)(param_2 + 0x24) + 4U) {
      FUN_0049a432((*(int *)(param_2 + 0x24) - *(uint *)(param_2 + 0x28)) + 4);
    }
    iVar5 = **(int **)(param_2 + 0x24);
    *(int **)(param_2 + 0x24) = *(int **)(param_2 + 0x24) + 1;
    if (0 < iVar5) {
      uVar4 = FUN_00492f17(iVar5);
      param_1[0xc] = uVar4;
      param_1[0xd] = iVar5;
      FUN_0049a217(uVar4,iVar5);
      return;
    }
  }
  return;
}

