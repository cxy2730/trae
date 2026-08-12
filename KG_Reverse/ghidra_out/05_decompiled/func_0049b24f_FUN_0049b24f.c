// Function: FUN_0049b24f
// Entry:    0049b24f
// Size:     67 bytes
// Conv:     unknown
// Signature: undefined FUN_0049b24f(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_0049b24f(int param_1,WPARAM param_2)

{
  LRESULT LVar1;
  LPARAM lParam;
  
  LVar1 = SendMessageA(*(HWND *)(param_1 + 0x1c),0x18a,param_2,0);
  lParam = FUN_00493631(LVar1);
  SendMessageA(*(HWND *)(param_1 + 0x1c),0x189,param_2,lParam);
  FUN_00493609(0xffffffff);
  return;
}

