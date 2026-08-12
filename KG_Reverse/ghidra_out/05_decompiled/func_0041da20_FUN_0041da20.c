// Function: FUN_0041da20
// Entry:    0041da20
// Size:     77 bytes
// Conv:     unknown
// Signature: undefined FUN_0041da20(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_0041da20(int param_1,undefined4 param_2,LONG param_3,undefined4 param_4)

{
  HWND pHVar1;
  
  if (*(int *)(param_1 + 0x3c) == 1) {
    GetWindowRect(*(HWND *)(param_1 + 0x1c),(LPRECT)(param_1 + 0x48));
    ((LPPOINT)(param_1 + 0x40))->x = param_3;
    *(undefined4 *)(param_1 + 0x44) = param_4;
    ClientToScreen(*(HWND *)(param_1 + 0x1c),(LPPOINT)(param_1 + 0x40));
    pHVar1 = SetCapture(*(HWND *)(param_1 + 0x1c));
    FUN_00494bb2(pHVar1);
  }
  FUN_00494b19();
  return;
}

