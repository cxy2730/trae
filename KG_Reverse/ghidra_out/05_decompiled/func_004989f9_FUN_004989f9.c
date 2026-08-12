// Function: FUN_004989f9
// Entry:    004989f9
// Size:     25 bytes
// Conv:     unknown
// Signature: undefined FUN_004989f9(void)
// Decompiled by Ghidra 12.1.2


undefined4 __thiscall FUN_004989f9(int param_1,int param_2)

{
  while( true ) {
    if (param_1 == 0) {
      return 0;
    }
    if (param_1 == param_2) break;
    param_1 = *(int *)(param_1 + 0x10);
  }
  return 1;
}

