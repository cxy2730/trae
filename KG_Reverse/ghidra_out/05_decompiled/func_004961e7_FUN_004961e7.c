// Function: FUN_004961e7
// Entry:    004961e7
// Size:     50 bytes
// Conv:     unknown
// Signature: undefined FUN_004961e7(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_004961e7(int param_1,LPCSTR param_2,LPCSTR param_3,UINT param_4)

{
  int iVar1;
  HWND hWnd;
  
  if (param_3 == (LPCSTR)0x0) {
    iVar1 = FUN_0049c724();
    param_3 = *(LPCSTR *)(iVar1 + 0x10);
  }
  if (param_1 == 0) {
    hWnd = (HWND)0x0;
  }
  else {
    hWnd = *(HWND *)(param_1 + 0x1c);
  }
  MessageBoxA(hWnd,param_2,param_3,param_4);
  return;
}

