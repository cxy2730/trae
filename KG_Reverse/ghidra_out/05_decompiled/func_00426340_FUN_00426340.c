// Function: FUN_00426340
// Entry:    00426340
// Size:     33 bytes
// Conv:     unknown
// Signature: undefined FUN_00426340(void)
// Decompiled by Ghidra 12.1.2


int __fastcall FUN_00426340(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x18;
}

