// Function: FUN_004268c0
// Entry:    004268c0
// Size:     33 bytes
// Conv:     unknown
// Signature: undefined FUN_004268c0(void)
// Decompiled by Ghidra 12.1.2


int __fastcall FUN_004268c0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x54;
}

