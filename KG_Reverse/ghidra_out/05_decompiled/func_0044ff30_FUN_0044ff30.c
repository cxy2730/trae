// Function: FUN_0044ff30
// Entry:    0044ff30
// Size:     16 bytes
// Conv:     unknown
// Signature: undefined FUN_0044ff30(void)
// Decompiled by Ghidra 12.1.2


void FUN_0044ff30(int param_1)

{
  if (param_1 != 0) {
    *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) | 0x20000;
  }
  return;
}

