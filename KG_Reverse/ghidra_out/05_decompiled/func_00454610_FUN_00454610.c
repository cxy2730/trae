// Function: FUN_00454610
// Entry:    00454610
// Size:     339 bytes
// Conv:     unknown
// Signature: undefined FUN_00454610(void)
// Decompiled by Ghidra 12.1.2


void FUN_00454610(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[0x68];
  if (*(int *)(iVar1 + 8) == 0) {
    if ((param_1[0x15] != 0) && (param_1[0x22] == 0)) {
      if ((param_1[0x17] == 0) || (param_1[0x1b] == 0)) {
        if (param_1[0x19] == 0) {
          (**(code **)*param_1)(param_1);
        }
        else {
          param_1[0x72] = *(undefined4 *)(iVar1 + 0x14);
        }
      }
      else {
        param_1[0x72] = *(undefined4 *)(iVar1 + 0x18);
        *(undefined4 *)(iVar1 + 8) = 1;
      }
    }
    (**(code **)param_1[0x6f])(param_1);
    (**(code **)(param_1[0x6a] + 8))(param_1);
    if (param_1[0x11] == 0) {
      if (*(int *)(iVar1 + 0x10) == 0) {
        (**(code **)param_1[0x71])(param_1);
      }
      (**(code **)param_1[0x70])(param_1);
      if (param_1[0x15] != 0) {
        (**(code **)param_1[0x72])(param_1,*(undefined4 *)(iVar1 + 8));
      }
      (**(code **)param_1[0x6b])(param_1,-(*(int *)(iVar1 + 8) != 0) & 3);
      (**(code **)param_1[0x69])(param_1,0);
    }
  }
  else {
    *(undefined4 *)(iVar1 + 8) = 0;
    (**(code **)param_1[0x72])(param_1,0);
    (**(code **)param_1[0x6b])(param_1,2);
    (**(code **)param_1[0x69])(param_1,2);
  }
  if (param_1[2] != 0) {
    *(undefined4 *)(param_1[2] + 0xc) = *(undefined4 *)(iVar1 + 0xc);
    *(uint *)(param_1[2] + 0x10) = (*(int *)(iVar1 + 8) != 0) + 1 + *(int *)(iVar1 + 0xc);
    if ((param_1[0x10] != 0) && (*(int *)(param_1[0x6c] + 0x14) == 0)) {
      *(uint *)(param_1[2] + 0x10) = *(int *)(param_1[2] + 0x10) + (param_1[0x1b] != 0) + 1;
    }
  }
  return;
}

