// Function: FUN_004353f0
// Entry:    004353f0
// Size:     14 bytes
// Conv:     unknown
// Signature: undefined FUN_004353f0(void)
// Decompiled by Ghidra 12.1.2


undefined4 __fastcall FUN_004353f0(int param_1)

{
  if (*(int *)(param_1 + 0x4c) == 1) {
    return *(undefined4 *)(param_1 + 0x48);
  }
  return *(undefined4 *)(param_1 + 0x44);
}

