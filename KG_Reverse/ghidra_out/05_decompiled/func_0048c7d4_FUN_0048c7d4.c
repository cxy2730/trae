// Function: FUN_0048c7d4
// Entry:    0048c7d4
// Size:     14 bytes
// Conv:     unknown
// Signature: undefined FUN_0048c7d4(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_0048c7d4(int *param_1)

{
  *param_1 = *param_1 + 4;
  return CONCAT22((short)((uint)*param_1 >> 0x10),*(undefined2 *)(*param_1 + -4));
}

