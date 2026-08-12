// Function: FUN_0045c420
// Entry:    0045c420
// Size:     227 bytes
// Conv:     unknown
// Signature: undefined FUN_0045c420(void)
// Decompiled by Ghidra 12.1.2


void FUN_0045c420(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar1 = param_1[0x72];
  param_1[0x22] = *(undefined4 *)(iVar1 + 0x10);
  iVar3 = param_1[0x16];
  param_1[0x21] = *(undefined4 *)(iVar1 + 0x14);
  if (iVar3 == 0) {
    if (param_1[0x1e] == 3) {
      *(undefined1 **)(iVar1 + 4) = &LAB_0045c6a0;
      return;
    }
    *(undefined1 **)(iVar1 + 4) = &LAB_0045c5e0;
  }
  else if (iVar3 == 1) {
    if (param_1[0x1e] == 3) {
      *(undefined1 **)(iVar1 + 4) = &LAB_0045c890;
    }
    else {
      *(undefined1 **)(iVar1 + 4) = &LAB_0045c760;
    }
    *(undefined4 *)(iVar1 + 0x30) = 0;
    if (*(int *)(iVar1 + 0x1c) == 0) {
      FUN_0045c280(param_1);
    }
    if (*(int *)(iVar1 + 0x34) == 0) {
      FUN_0045c510(param_1);
      return;
    }
  }
  else {
    if (iVar3 != 2) {
      (**(code **)*param_1)(param_1);
      return;
    }
    puVar2 = (undefined4 *)(iVar1 + 0x44);
    *(undefined1 **)(iVar1 + 4) = &LAB_0045c9c0;
    *(undefined4 *)(iVar1 + 0x54) = 0;
    if (*(int *)(iVar1 + 0x44) == 0) {
      FUN_0045c3e0(param_1);
    }
    iVar1 = param_1[0x1c];
    iVar3 = 0;
    if (0 < (int)param_1[0x1e]) {
      do {
        FUN_00456410(*puVar2,iVar1 * 2 + 4);
        iVar3 = iVar3 + 1;
        puVar2 = puVar2 + 1;
      } while (iVar3 < (int)param_1[0x1e]);
      return;
    }
  }
  return;
}

