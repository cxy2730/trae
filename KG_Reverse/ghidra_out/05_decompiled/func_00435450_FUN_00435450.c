// Function: FUN_00435450
// Entry:    00435450
// Size:     47 bytes
// Conv:     unknown
// Signature: undefined FUN_00435450(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_00435450(int param_1,undefined4 param_2)

{
  BOOL BVar1;
  
  *(undefined4 *)(param_1 + 0x48) = param_2;
  BVar1 = IsWindow(*(HWND *)(param_1 + 0x1c));
  if (BVar1 != 0) {
    RedrawWindow(*(HWND *)(param_1 + 0x1c),(RECT *)0x0,(HRGN)0x0,0x105);
  }
  return;
}

