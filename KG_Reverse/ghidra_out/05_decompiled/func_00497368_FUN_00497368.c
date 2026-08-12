// Function: FUN_00497368
// Entry:    00497368
// Size:     46 bytes
// Conv:     unknown
// Signature: undefined FUN_00497368(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_00497368(int param_1,int param_2,undefined4 *param_3)

{
  HWND pHVar1;
  
  if (*(int **)(param_1 + 0x34) == (int *)0x0) {
    pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x1c),param_2);
    *param_3 = pHVar1;
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x34) + 0x6c))(param_2,param_3);
  }
  return;
}

