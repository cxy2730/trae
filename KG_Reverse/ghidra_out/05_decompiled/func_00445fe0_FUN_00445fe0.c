// Function: FUN_00445fe0
// Entry:    00445fe0
// Size:     211 bytes
// Conv:     unknown
// Signature: undefined FUN_00445fe0(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_00445fe0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_1[4] == 0xca) {
    FUN_00454380(param_1);
    if (param_1[0x10] != 0) {
      param_1[4] = 0xcf;
      return 1;
    }
    param_1[4] = 0xcb;
  }
  if (param_1[4] == 0xcb) {
    if (*(int *)(param_1[0x6c] + 0x10) != 0) {
      while( true ) {
        if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
          (**(code **)param_1[2])(param_1);
        }
        iVar2 = (**(code **)param_1[0x6c])(param_1);
        if (iVar2 == 0) {
          return 0;
        }
        if (iVar2 == 2) break;
        iVar1 = param_1[2];
        if ((iVar1 != 0) && ((iVar2 == 3 || (iVar2 == 1)))) {
          *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
          iVar2 = param_1[2];
          if (*(int *)(iVar2 + 8) <= *(int *)(iVar2 + 4)) {
            *(int *)(iVar2 + 8) = param_1[0x4f] + *(int *)(iVar2 + 8);
          }
        }
      }
    }
    param_1[0x26] = param_1[0x24];
    uVar3 = FUN_004460c0(param_1);
    return uVar3;
  }
  if (param_1[4] != 0xcc) {
    (**(code **)*param_1)(param_1);
  }
  uVar3 = FUN_004460c0(param_1);
  return uVar3;
}

