// Function: FUN_0046b9b0
// Entry:    0046b9b0
// Size:     35 bytes
// Conv:     unknown
// Signature: undefined FUN_0046b9b0(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_0046b9b0(int param_1)

{
  if ((*(int **)(param_1 + 0x234) != (int *)0x0) && (*(int *)(param_1 + 8) == 2)) {
    (**(code **)(**(int **)(param_1 + 0x234) + 4))();
    FUN_0046b770(1);
  }
  return;
}

