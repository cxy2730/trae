// Function: FUN_00463cc0
// Entry:    00463cc0
// Size:     29 bytes
// Conv:     unknown
// Signature: undefined FUN_00463cc0(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_00463cc0(uint param_1,uint param_2)

{
  if (param_1 < param_2) {
    SetLastError(0xd);
    return 0;
  }
  return 1;
}

