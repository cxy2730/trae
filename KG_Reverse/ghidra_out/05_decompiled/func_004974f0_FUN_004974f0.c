// Function: FUN_004974f0
// Entry:    004974f0
// Size:     65 bytes
// Conv:     unknown
// Signature: undefined FUN_004974f0(void)
// Decompiled by Ghidra 12.1.2


void __thiscall
FUN_004974f0(int param_1,int param_2,int param_3,int param_4,int param_5,BOOL param_6)

{
  if (*(int **)(param_1 + 0x38) == (int *)0x0) {
    MoveWindow(*(HWND *)(param_1 + 0x1c),param_2,param_3,param_4,param_5,param_6);
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x38) + 0x98))(param_2,param_3,param_4,param_5,param_6);
  }
  return;
}

