// Function: FUN_00497580
// Entry:    00497580
// Size:     39 bytes
// Conv:     unknown
// Signature: undefined FUN_00497580(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_00497580(int param_1,int param_2)

{
  if (*(int **)(param_1 + 0x38) == (int *)0x0) {
    ShowWindow(*(HWND *)(param_1 + 0x1c),param_2);
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x38) + 0xa0))(param_2);
  }
  return;
}

