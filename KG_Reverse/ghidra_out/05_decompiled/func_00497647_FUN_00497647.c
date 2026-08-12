// Function: FUN_00497647
// Entry:    00497647
// Size:     31 bytes
// Conv:     unknown
// Signature: undefined FUN_00497647(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_00497647(int param_1,int param_2)

{
  if ((*(int *)(param_1 + 0x38) == 0) && (*(int **)(param_2 + 0x34) != (int *)0x0)) {
    (**(code **)(**(int **)(param_2 + 0x34) + 0x8c))(param_1);
  }
  return;
}

