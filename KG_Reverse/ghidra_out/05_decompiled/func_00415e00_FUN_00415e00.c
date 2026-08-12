// Function: FUN_00415e00
// Entry:    00415e00
// Size:     1298 bytes
// Conv:     unknown
// Signature: undefined FUN_00415e00(void)
// Decompiled by Ghidra 12.1.2


undefined4 __thiscall FUN_00415e00(undefined4 *param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0049e958;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (((byte)*(undefined4 *)(param_2 + 0x14) & 1) == 1) {
    ExceptionList = &local_10;
    (**(code **)*param_1)();
  }
  FUN_00493768();
  local_8 = 1;
  if (((byte)*(undefined4 *)(param_2 + 0x14) & 1) == 1) {
    if (*(uint *)(param_2 + 0x28) < *(int *)(param_2 + 0x24) + 4U) {
      FUN_0049a432((*(int *)(param_2 + 0x24) - *(uint *)(param_2 + 0x28)) + 4);
    }
    uVar1 = **(uint **)(param_2 + 0x24);
    *(uint **)(param_2 + 0x24) = *(uint **)(param_2 + 0x24) + 1;
    if (6 < uVar1) {
      local_8 = 0xffffffff;
      FUN_004937a6();
      ExceptionList = local_10;
      return 0;
    }
    FUN_00421070(param_1 + 2);
    iVar4 = FUN_00421070(param_1 + 9);
    if (*(uint *)(iVar4 + 0x28) < *(int *)(iVar4 + 0x24) + 4U) {
      FUN_0049a432((*(int *)(iVar4 + 0x24) - *(uint *)(iVar4 + 0x28)) + 4);
    }
    param_1[3] = **(undefined4 **)(iVar4 + 0x24);
    *(int *)(iVar4 + 0x24) = *(int *)(iVar4 + 0x24) + 4;
    FUN_00421070(param_1 + 10);
    FUN_00421070(param_1 + 0xb);
    FUN_00421070(param_1 + 0xc);
    FUN_00421070(param_1 + 0xd);
    FUN_00421070(param_1 + 0xe);
    FUN_00421070(param_1 + 0x19);
    FUN_00421070(param_1 + 0x1a);
    FUN_00421070(param_1 + 0x1b);
    FUN_00421070(param_1 + 0x1c);
    FUN_00421070(param_1 + 0x1e);
    if (1 < uVar1) {
      FUN_00421070(param_1 + 0x1f);
    }
    if (2 < uVar1) {
      FUN_00421070(param_1 + 0x20);
      FUN_00421070(param_1 + 0x21);
    }
    if (3 < uVar1) {
      FUN_00421070(param_1 + 0x22);
    }
    if (4 < uVar1) {
      FUN_00421070(param_1 + 0x23);
    }
    if (uVar1 == 6) {
      FUN_00407080(param_1 + 0x24,param_2);
    }
  }
  else {
    if (*(uint *)(param_2 + 0x28) < *(int *)(param_2 + 0x24) + 4U) {
      FUN_0049a3b6();
    }
    **(undefined4 **)(param_2 + 0x24) = 6;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 4;
    FUN_00416320(param_1[2]);
    iVar4 = FUN_00416320(param_1[9]);
    uVar2 = param_1[3];
    if (*(uint *)(iVar4 + 0x28) < *(int *)(iVar4 + 0x24) + 4U) {
      FUN_0049a3b6();
    }
    **(undefined4 **)(iVar4 + 0x24) = uVar2;
    *(int *)(iVar4 + 0x24) = *(int *)(iVar4 + 0x24) + 4;
    iVar4 = FUN_00416320(param_1[10]);
    uVar2 = param_1[0xb];
    if (*(uint *)(iVar4 + 0x28) < *(int *)(iVar4 + 0x24) + 4U) {
      FUN_0049a3b6();
    }
    **(undefined4 **)(iVar4 + 0x24) = uVar2;
    iVar3 = *(int *)(iVar4 + 0x24);
    *(int *)(iVar4 + 0x24) = iVar3 + 4;
    uVar2 = param_1[0xc];
    if (*(uint *)(iVar4 + 0x28) < iVar3 + 8U) {
      FUN_0049a3b6();
    }
    **(undefined4 **)(iVar4 + 0x24) = uVar2;
    iVar3 = *(int *)(iVar4 + 0x24);
    *(int *)(iVar4 + 0x24) = iVar3 + 4;
    uVar2 = param_1[0xd];
    if (*(uint *)(iVar4 + 0x28) < iVar3 + 8U) {
      FUN_0049a3b6();
    }
    **(undefined4 **)(iVar4 + 0x24) = uVar2;
    iVar3 = *(int *)(iVar4 + 0x24);
    *(int *)(iVar4 + 0x24) = iVar3 + 4;
    uVar2 = param_1[0xe];
    if (*(uint *)(iVar4 + 0x28) < iVar3 + 8U) {
      FUN_0049a3b6();
    }
    **(undefined4 **)(iVar4 + 0x24) = uVar2;
    iVar3 = *(int *)(iVar4 + 0x24);
    *(int *)(iVar4 + 0x24) = iVar3 + 4;
    uVar2 = param_1[0x19];
    if (*(uint *)(iVar4 + 0x28) < iVar3 + 8U) {
      FUN_0049a3b6();
    }
    **(undefined4 **)(iVar4 + 0x24) = uVar2;
    iVar3 = *(int *)(iVar4 + 0x24);
    *(int *)(iVar4 + 0x24) = iVar3 + 4;
    uVar2 = param_1[0x1a];
    if (*(uint *)(iVar4 + 0x28) < iVar3 + 8U) {
      FUN_0049a3b6();
    }
    **(undefined4 **)(iVar4 + 0x24) = uVar2;
    iVar3 = *(int *)(iVar4 + 0x24);
    *(int *)(iVar4 + 0x24) = iVar3 + 4;
    uVar2 = param_1[0x1b];
    if (*(uint *)(iVar4 + 0x28) < iVar3 + 8U) {
      FUN_0049a3b6();
    }
    **(undefined4 **)(iVar4 + 0x24) = uVar2;
    iVar3 = *(int *)(iVar4 + 0x24);
    *(int *)(iVar4 + 0x24) = iVar3 + 4;
    uVar2 = param_1[0x1c];
    if (*(uint *)(iVar4 + 0x28) < iVar3 + 8U) {
      FUN_0049a3b6();
    }
    **(undefined4 **)(iVar4 + 0x24) = uVar2;
    iVar3 = *(int *)(iVar4 + 0x24);
    *(int *)(iVar4 + 0x24) = iVar3 + 4;
    uVar2 = param_1[0x1e];
    if (*(uint *)(iVar4 + 0x28) < iVar3 + 8U) {
      FUN_0049a3b6();
    }
    **(undefined4 **)(iVar4 + 0x24) = uVar2;
    iVar3 = *(int *)(iVar4 + 0x24);
    *(int *)(iVar4 + 0x24) = iVar3 + 4;
    uVar2 = param_1[0x1f];
    if (*(uint *)(iVar4 + 0x28) < iVar3 + 8U) {
      FUN_0049a3b6();
    }
    **(undefined4 **)(iVar4 + 0x24) = uVar2;
    iVar3 = *(int *)(iVar4 + 0x24);
    *(int *)(iVar4 + 0x24) = iVar3 + 4;
    uVar2 = param_1[0x20];
    if (*(uint *)(iVar4 + 0x28) < iVar3 + 8U) {
      FUN_0049a3b6();
    }
    **(undefined4 **)(iVar4 + 0x24) = uVar2;
    iVar3 = *(int *)(iVar4 + 0x24);
    *(int *)(iVar4 + 0x24) = iVar3 + 4;
    uVar2 = param_1[0x21];
    if (*(uint *)(iVar4 + 0x28) < iVar3 + 8U) {
      FUN_0049a3b6();
    }
    **(undefined4 **)(iVar4 + 0x24) = uVar2;
    iVar3 = *(int *)(iVar4 + 0x24);
    *(int *)(iVar4 + 0x24) = iVar3 + 4;
    uVar2 = param_1[0x22];
    if (*(uint *)(iVar4 + 0x28) < iVar3 + 8U) {
      FUN_0049a3b6();
    }
    **(undefined4 **)(iVar4 + 0x24) = uVar2;
    iVar3 = *(int *)(iVar4 + 0x24);
    *(int *)(iVar4 + 0x24) = iVar3 + 4;
    uVar2 = param_1[0x23];
    if (*(uint *)(iVar4 + 0x28) < iVar3 + 8U) {
      FUN_0049a3b6();
    }
    **(undefined4 **)(iVar4 + 0x24) = uVar2;
    *(int *)(iVar4 + 0x24) = *(int *)(iVar4 + 0x24) + 4;
    FUN_00407080(param_1 + 0x24,param_2);
  }
  FUN_00406620(param_2);
  FUN_00406620(param_2);
  FUN_00406620(param_2);
  FUN_00407080(param_1 + 1,param_2);
  FUN_00407080(param_1 + 0x1d,param_2);
  local_8 = 0xffffffff;
  FUN_004937a6();
  ExceptionList = local_10;
  return 1;
}

