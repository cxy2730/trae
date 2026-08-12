// Function: FUN_0043d750
// Entry:    0043d750
// Size:     22 bytes
// Conv:     unknown
// Signature: undefined FUN_0043d750(void)
// Decompiled by Ghidra 12.1.2


byte FUN_0043d750(byte param_1)

{
  if ((param_1 < 0x20) || (0x7e < param_1)) {
    param_1 = 0x3f;
  }
  return param_1;
}

