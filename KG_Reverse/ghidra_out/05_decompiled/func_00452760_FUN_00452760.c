// Function: FUN_00452760
// Entry:    00452760
// Size:     151 bytes
// Conv:     unknown
// Signature: undefined FUN_00452760(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_00452760(int *param_1)

{
  int *piVar1;
  
  (**(code **)(*param_1 + 4))(param_1,1);
  if (*(int *)(param_1[0x6d] + 0x50) != 0) {
    (**(code **)*param_1)(param_1);
  }
  piVar1 = param_1 + 0x3d;
  do {
    *(undefined1 *)(piVar1 + -4) = 0;
    *(undefined1 *)piVar1 = 1;
    *(undefined1 *)(piVar1 + 4) = 5;
    piVar1 = (int *)((int)piVar1 + 1);
  } while ((int)((-0xf4 - (int)param_1) + (int)piVar1) < 0x10);
  param_1[0x45] = 0;
  param_1[9] = 0;
  param_1[0x4b] = 0;
  param_1[0x46] = 0;
  *(undefined1 *)(param_1 + 0x47) = 0;
  *(undefined2 *)((int)param_1 + 0x11e) = 1;
  *(undefined2 *)(param_1 + 0x48) = 1;
  param_1[0x49] = 0;
  *(undefined1 *)(param_1 + 0x4a) = 0;
  *(undefined4 *)(param_1[0x6d] + 0x50) = 1;
  return 1;
}

