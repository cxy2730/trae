// Function: FUN_0049630f
// Entry:    0049630f
// Size:     48 bytes
// Conv:     unknown
// Signature: undefined FUN_0049630f(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_0049630f(int *param_1,int param_2,int param_3,BOOL param_4)

{
  int iVar1;
  HWND hWnd;
  
  iVar1 = (**(code **)(*param_1 + 0x68))(param_2);
  if (iVar1 == 0) {
    hWnd = (HWND)param_1[7];
  }
  else {
    param_2 = 2;
    hWnd = *(HWND *)(iVar1 + 0x1c);
  }
  SetScrollPos(hWnd,param_2,param_3,param_4);
  return;
}

