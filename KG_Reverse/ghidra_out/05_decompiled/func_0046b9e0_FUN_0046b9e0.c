// Function: FUN_0046b9e0
// Entry:    0046b9e0
// Size:     35 bytes
// Conv:     unknown
// Signature: undefined FUN_0046b9e0(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_0046b9e0(int param_1)

{
  if ((*(int **)(param_1 + 0x234) != (int *)0x0) && (*(int *)(param_1 + 8) == 1)) {
    (**(code **)(**(int **)(param_1 + 0x234) + 8))();
    FUN_0046b770(2);
  }
  return;
}

