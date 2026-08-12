// Function: FUN_0044fe30
// Entry:    0044fe30
// Size:     39 bytes
// Conv:     unknown
// Signature: undefined FUN_0044fe30(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_0044fe30(int param_1)

{
  if ((param_1 != 0) && (*(char *)(param_1 + 0x154) != '\0')) {
    *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) | 2;
    return 7;
  }
  return 1;
}

