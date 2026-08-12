// Function: FUN_0049557d
// Entry:    0049557d
// Size:     72 bytes
// Conv:     unknown
// Signature: undefined FUN_0049557d(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_0049557d(int param_1,undefined4 param_2)

{
  int iVar1;
  LPSTR lpString;
  int nMaxCount;
  
  if (*(int **)(param_1 + 0x38) == (int *)0x0) {
    iVar1 = GetWindowTextLengthA(*(HWND *)(param_1 + 0x1c));
    nMaxCount = iVar1 + 1;
    lpString = (LPSTR)FUN_00493631(iVar1);
    GetWindowTextA(*(HWND *)(param_1 + 0x1c),lpString,nMaxCount);
    FUN_00493609(0xffffffff);
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x38) + 0x88))(param_2);
  }
  return;
}

