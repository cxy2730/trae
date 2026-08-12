// Function: FUN_00424180
// Entry:    00424180
// Size:     24 bytes
// Conv:     unknown
// Signature: undefined FUN_00424180(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_00424180(int param_1)

{
  FUN_00424120();
  InvalidateRect(*(HWND *)(param_1 + 0x1c),(RECT *)0x0,0);
  return;
}

