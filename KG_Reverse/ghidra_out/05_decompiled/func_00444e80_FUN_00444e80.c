// Function: FUN_00444e80
// Entry:    00444e80
// Size:     74 bytes
// Conv:     unknown
// Signature: undefined FUN_00444e80(void)
// Decompiled by Ghidra 12.1.2


int __thiscall FUN_00444e80(int param_1,int param_2)

{
  if (param_2 == -2) {
    if (*(int *)(*(int *)(param_1 + 0x5c) + -8) != 0) {
      return -2;
    }
  }
  else if (param_2 == -3) {
    if (*(int *)(*(int *)(param_1 + 0x58) + -8) != 0) {
      return -3;
    }
  }
  else if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x3c))) {
    return param_2 % *(int *)(param_1 + 0x40);
  }
  return -1;
}

