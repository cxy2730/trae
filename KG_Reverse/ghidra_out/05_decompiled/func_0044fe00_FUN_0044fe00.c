// Function: FUN_0044fe00
// Entry:    0044fe00
// Size:     36 bytes
// Conv:     unknown
// Signature: undefined FUN_0044fe00(void)
// Decompiled by Ghidra 12.1.2


void FUN_0044fe00(int param_1)

{
  if ((param_1 != 0) && (*(byte *)(param_1 + 0x158) < 8)) {
    *(undefined1 *)(param_1 + 0x159) = 8;
    *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) | 4;
  }
  return;
}

