// Function: FUN_0049639a
// Entry:    0049639a
// Size:     48 bytes
// Conv:     unknown
// Signature: undefined FUN_0049639a(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_0049639a(int *param_1,int param_2,LPINT param_3,LPINT param_4)

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
  GetScrollRange(hWnd,param_2,param_3,param_4);
  return;
}

