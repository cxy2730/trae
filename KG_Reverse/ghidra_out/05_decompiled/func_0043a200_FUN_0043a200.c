// Function: FUN_0043a200
// Entry:    0043a200
// Size:     19 bytes
// Conv:     unknown
// Signature: undefined FUN_0043a200(void)
// Decompiled by Ghidra 12.1.2


int __fastcall FUN_0043a200(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
}

