// Function: xMonitorFromWindow
// Entry:    00481a80
// Size:     107 bytes
// Conv:     __stdcall
// Signature: undefined xMonitorFromWindow(void)
// Decompiled by Ghidra 12.1.2


/* Library Function - Single Match
    _xMonitorFromWindow@8
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release
   __stdcall xMonitorFromWindow,8 */

undefined4 xMonitorFromWindow(HWND param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  BOOL BVar3;
  WINDOWPLACEMENT local_30;
  
  iVar1 = FUN_00481952();
  if (iVar1 == 0) {
    if ((param_2 & 3) == 0) {
      BVar3 = IsIconic(param_1);
      if (BVar3 == 0) {
        iVar1 = GetWindowRect(param_1,&local_30.rcNormalPosition);
      }
      else {
        iVar1 = GetWindowPlacement(param_1,&local_30);
      }
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_00481a2a(&local_30.rcNormalPosition,param_2);
      }
    }
    else {
      uVar2 = 0x12340042;
    }
  }
  else {
    uVar2 = (*DAT_03010bac)(param_1,param_2);
  }
  return uVar2;
}

