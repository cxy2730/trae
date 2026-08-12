// Function: FUN_004054e0
// Entry:    004054e0
// Size:     75 bytes
// Conv:     unknown
// Signature: undefined FUN_004054e0(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_004054e0(uint param_1)

{
  if (param_1 < 0x80000402) {
    if (param_1 == 0x80000401) {
      return 8;
    }
    if (param_1 == 0x80000101) {
      return 1;
    }
    if (param_1 == 0x80000201) {
      return 2;
    }
    if (param_1 != 0x80000301) {
      return 0;
    }
  }
  else if (param_1 != 0x80000501) {
    if (param_1 == 0x80000601) {
      return 8;
    }
    return 0;
  }
  return 4;
}

