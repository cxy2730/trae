// Function: FUN_00444dc0
// Entry:    00444dc0
// Size:     110 bytes
// Conv:     unknown
// Signature: undefined FUN_00444dc0(void)
// Decompiled by Ghidra 12.1.2


int __thiscall FUN_00444dc0(int param_1,int param_2,int param_3)

{
  if (((param_2 == -2) || (param_3 == -2)) && (*(int *)(*(int *)(param_1 + 0x5c) + -8) != 0)) {
    return -2;
  }
  if (((param_2 == -3) || (param_3 == -3)) && (*(int *)(*(int *)(param_1 + 0x58) + -8) != 0)) {
    return -3;
  }
  if (((param_2 < 0) || (param_3 < 0)) ||
     ((*(int *)(param_1 + 0x44) <= param_2 ||
      ((*(int *)(param_1 + 0x40) <= param_3 ||
       (param_3 = *(int *)(param_1 + 0x40) * param_2 + param_3, *(int *)(param_1 + 0x3c) <= param_3)
       ))))) {
    param_3 = -1;
  }
  return param_3;
}

