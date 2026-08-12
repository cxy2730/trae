// Function: FUN_0049544b
// Entry:    0049544b
// Size:     71 bytes
// Conv:     unknown
// Signature: undefined FUN_0049544b(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_0049544b(int *param_1,UINT param_2,WPARAM param_3,LPARAM param_4)

{
  int *piVar1;
  WNDPROC lpPrevWndFunc;
  
  lpPrevWndFunc = (WNDPROC)param_1[10];
  if (lpPrevWndFunc == (WNDPROC)0x0) {
    piVar1 = (int *)(**(code **)(*param_1 + 0x80))();
    lpPrevWndFunc = (WNDPROC)*piVar1;
    if (lpPrevWndFunc == (WNDPROC)0x0) {
      DefWindowProcA((HWND)param_1[7],param_2,param_3,param_4);
      return;
    }
  }
  CallWindowProcA(lpPrevWndFunc,(HWND)param_1[7],param_2,param_3,param_4);
  return;
}

