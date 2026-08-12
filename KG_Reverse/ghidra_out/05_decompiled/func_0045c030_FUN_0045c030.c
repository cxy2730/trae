// Function: FUN_0045c030
// Entry:    0045c030
// Size:     324 bytes
// Conv:     unknown
// Signature: undefined FUN_0045c030(void)
// Decompiled by Ghidra 12.1.2


void FUN_0045c030(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int *piStack_14;
  
  iVar1 = param_1[0x72];
  piStack_14 = (int *)(iVar1 + 0x20);
  iVar4 = FUN_0045c180(param_1,piStack_14);
  if (param_1[0x1e] == 3) {
    (**(code **)(*param_1 + 4))(param_1,1);
  }
  else {
    (**(code **)(*param_1 + 4))(param_1,1);
  }
  piVar5 = (int *)(**(code **)(param_1[1] + 8))(param_1,1,iVar4,param_1[0x1e]);
  iStack_18 = 0;
  piVar11 = piVar5;
  iStack_1c = iVar4;
  if (0 < param_1[0x1e]) {
    do {
      iStack_20 = 0;
      iVar2 = *piStack_14;
      iVar6 = iStack_1c / iVar2;
      if (0 < iVar2) {
        iVar9 = 0;
        do {
          uVar3 = FUN_0045c260(param_1,iStack_18,iStack_20,iVar2 + -1);
          for (iVar8 = iVar9; iVar8 < iVar4; iVar8 = iVar8 + iStack_1c) {
            iVar7 = 0;
            if (0 < iVar6) {
              do {
                iVar10 = *piVar11 + iVar7;
                iVar7 = iVar7 + 1;
                *(undefined1 *)(iVar8 + iVar10) = uVar3;
              } while (iVar7 < iVar6);
            }
          }
          iVar9 = iVar9 + iVar6;
          iStack_20 = iStack_20 + 1;
        } while (iStack_20 < iVar2);
      }
      iStack_18 = iStack_18 + 1;
      piStack_14 = piStack_14 + 1;
      piVar11 = piVar11 + 1;
      iStack_1c = iVar6;
    } while (iStack_18 < param_1[0x1e]);
    *(int **)(iVar1 + 0x10) = piVar5;
    *(int *)(iVar1 + 0x14) = iVar4;
    return;
  }
  *(int **)(iVar1 + 0x10) = piVar5;
  *(int *)(iVar1 + 0x14) = iVar4;
  return;
}

