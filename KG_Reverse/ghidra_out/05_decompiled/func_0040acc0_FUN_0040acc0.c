// Function: FUN_0040acc0
// Entry:    0040acc0
// Size:     39 bytes
// Conv:     unknown
// Signature: undefined FUN_0040acc0(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_0040acc0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0040ae10(5);
  *(int *)(param_1 + 0x84) = iVar1;
  if (iVar1 == 1) {
    InvalidateRect(*(HWND *)(param_1 + 0x1c),(RECT *)0x0,0);
  }
  return;
}

