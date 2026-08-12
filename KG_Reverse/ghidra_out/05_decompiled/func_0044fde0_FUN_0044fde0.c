// Function: FUN_0044fde0
// Entry:    0044fde0
// Size:     27 bytes
// Conv:     unknown
// Signature: undefined FUN_0044fde0(void)
// Decompiled by Ghidra 12.1.2


void FUN_0044fde0(int param_1)

{
  if ((param_1 != 0) && (*(char *)(param_1 + 0x158) == '\x10')) {
    *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) | 0x10;
  }
  return;
}

