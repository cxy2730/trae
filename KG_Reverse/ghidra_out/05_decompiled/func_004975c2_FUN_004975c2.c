// Function: FUN_004975c2
// Entry:    004975c2
// Size:     39 bytes
// Conv:     unknown
// Signature: undefined FUN_004975c2(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_004975c2(int param_1,BOOL param_2)

{
  if (*(int **)(param_1 + 0x38) == (int *)0x0) {
    EnableWindow(*(HWND *)(param_1 + 0x1c),param_2);
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x38) + 0xa8))(param_2);
  }
  return;
}

