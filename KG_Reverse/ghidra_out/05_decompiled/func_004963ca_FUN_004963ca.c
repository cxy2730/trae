// Function: FUN_004963ca
// Entry:    004963ca
// Size:     43 bytes
// Conv:     unknown
// Signature: undefined FUN_004963ca(void)
// Decompiled by Ghidra 12.1.2


void FUN_004963ca(LPRECT param_1,int param_2)

{
  uint dwExStyle;
  DWORD dwStyle;
  BOOL bMenu;
  
  dwExStyle = FUN_00497432();
  if (param_2 == 0) {
    dwExStyle = dwExStyle & 0xfffffdff;
  }
  bMenu = 0;
  dwStyle = FUN_00497418();
  AdjustWindowRectEx(param_1,dwStyle,bMenu,dwExStyle);
  return;
}

