// Function: FUN_00469920
// Entry:    00469920
// Size:     198 bytes
// Conv:     unknown
// Signature: undefined FUN_00469920(void)
// Decompiled by Ghidra 12.1.2


HWND FUN_00469920(void)

{
  HWND hWnd;
  BOOL BVar1;
  int iVar2;
  HWND hWnd_00;
  HWND pHVar3;
  int iVar4;
  HWND local_8;
  HWND local_4;
  
  hWnd = GetActiveWindow();
  BVar1 = IsWindow(hWnd);
  if (BVar1 == 0) {
    hWnd = (HWND)0x0;
  }
  local_8 = hWnd;
  local_4 = GetForegroundWindow();
  FUN_00469ea0(&local_8,8);
  iVar2 = FUN_00469bc0(0x7f0,0,0);
  iVar4 = 0;
  if (iVar2 < 1) {
    return hWnd;
  }
  do {
    hWnd_00 = (HWND)FUN_00469bc0(0x7f1,iVar4,0);
    if ((hWnd_00 != (HWND)0x0) && (pHVar3 = GetParent(hWnd_00), pHVar3 == (HWND)0x0)) {
      local_8 = hWnd_00;
      BVar1 = IsWindowEnabled(hWnd_00);
      local_4 = (HWND)(uint)(BVar1 != 0);
      FUN_00469ea0(&local_8,8);
      EnableWindow(hWnd_00,0);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < iVar2);
  return hWnd;
}

