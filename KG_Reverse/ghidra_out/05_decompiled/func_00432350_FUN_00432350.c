// Function: FUN_00432350
// Entry:    00432350
// Size:     136 bytes
// Conv:     unknown
// Signature: undefined FUN_00432350(void)
// Decompiled by Ghidra 12.1.2


undefined4 __fastcall FUN_00432350(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  bool bVar8;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004a0440;
  pvStack_10 = ExceptionList;
  if (param_1[4] == 1) {
    iVar2 = 0x38;
    bVar8 = true;
    piVar3 = param_1 + 6;
    piVar6 = param_1 + 0x3e;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar8 = *piVar3 == *piVar6;
      piVar3 = piVar3 + 1;
      piVar6 = piVar6 + 1;
    } while (bVar8);
    if (!bVar8) {
      ExceptionList = &pvStack_10;
      FUN_00493768();
      local_8 = 1;
      (**(code **)(*(int *)*param_1 + 0x28))(0,0);
      (**(code **)(*(int *)*param_1 + 0x38))(param_1 + 6,0xe0);
      puVar4 = param_1 + 6;
      puVar7 = param_1 + 0x3e;
      for (iVar2 = 0x38; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar7 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar7 = puVar7 + 1;
      }
      uVar1 = FUN_00432406();
      return uVar1;
    }
  }
  iVar2 = param_1[2];
  if (0 < iVar2) {
    if (1 < iVar2) {
      param_1[2] = iVar2 + -1;
      return 0;
    }
    ExceptionList = &pvStack_10;
    FUN_00493768();
    local_8 = 4;
    if (param_1[0x92] == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = param_1[0x90];
    }
    for (iVar5 = 0; iVar5 < (int)param_1[0x76]; iVar5 = iVar5 + 1) {
      if (*(char *)(iVar5 + 0x224 + (int)param_1) != '\0') {
        (**(code **)(*(int *)*param_1 + 0x28))(param_1[iVar5 + 0x77] * *(int *)(param_1[1] + 8),0);
        (**(code **)(*(int *)*param_1 + 0x38))(iVar2,*(undefined4 *)(param_1[1] + 8));
      }
      iVar2 = iVar2 + *(int *)(param_1[1] + 8);
    }
    local_8 = 0xffffffff;
    FUN_004937a6();
    FUN_00430fe0(*param_1,0xffffffff,0);
    param_1[2] = param_1[2] + -1;
  }
  ExceptionList = pvStack_10;
  return 0;
}

