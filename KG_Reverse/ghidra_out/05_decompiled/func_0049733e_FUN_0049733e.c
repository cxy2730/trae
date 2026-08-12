// Function: FUN_0049733e
// Entry:    0049733e
// Size:     42 bytes
// Conv:     unknown
// Signature: undefined FUN_0049733e(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_0049733e(int param_1,int param_2)

{
  HWND pHVar1;
  
  if (*(int **)(param_1 + 0x34) == (int *)0x0) {
    pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x1c),param_2);
    FUN_00494bb2(pHVar1);
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x34) + 0x70))(param_2);
  }
  return;
}

