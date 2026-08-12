// Function: FUN_00497531
// Entry:    00497531
// Size:     79 bytes
// Conv:     unknown
// Signature: undefined FUN_00497531(void)
// Decompiled by Ghidra 12.1.2


void __thiscall
FUN_00497531(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,UINT param_7)

{
  HWND hWndInsertAfter;
  
  if (*(int **)(param_1 + 0x38) == (int *)0x0) {
    hWndInsertAfter = (HWND)0x0;
    if (param_2 != 0) {
      hWndInsertAfter = *(HWND *)(param_2 + 0x1c);
    }
    SetWindowPos(*(HWND *)(param_1 + 0x1c),hWndInsertAfter,param_3,param_4,param_5,param_6,param_7);
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x38) + 0x9c))
              (param_2,param_3,param_4,param_5,param_6,param_7);
  }
  return;
}

