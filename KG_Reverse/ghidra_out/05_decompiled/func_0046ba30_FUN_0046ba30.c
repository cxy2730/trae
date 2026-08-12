// Function: FUN_0046ba30
// Entry:    0046ba30
// Size:     23 bytes
// Conv:     unknown
// Signature: undefined FUN_0046ba30(void)
// Decompiled by Ghidra 12.1.2


uint __fastcall FUN_0046ba30(int param_1)

{
  if (*(int *)(param_1 + 8) == 1) {
    return 0xffffffff;
  }
  return (uint)(*(int *)(param_1 + 8) == 2);
}

