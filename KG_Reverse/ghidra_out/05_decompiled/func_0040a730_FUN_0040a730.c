// Function: FUN_0040a730
// Entry:    0040a730
// Size:     127 bytes
// Conv:     unknown
// Signature: undefined FUN_0040a730(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_0040a730(int param_1,LPARAM param_2)

{
  int iVar1;
  LRESULT lParam;
  
  iVar1 = FUN_00491cd4(param_2);
  if ((iVar1 != 0) &&
     (lParam = SendMessageA(*(HWND *)(param_1 + 0x1c),0x110a,4,param_2), lParam != 0)) {
    iVar1 = FUN_00491cd4(lParam);
    if (iVar1 != 0) {
      iVar1 = SendMessageA(*(HWND *)(param_1 + 0x1c),0x110a,4,lParam);
      while (iVar1 != 0) {
        SendMessageA(*(HWND *)(param_1 + 0x1c),0x1101,0,iVar1);
        iVar1 = SendMessageA(*(HWND *)(param_1 + 0x1c),0x110a,4,lParam);
      }
    }
    SendMessageA(*(HWND *)(param_1 + 0x1c),0x1101,0,lParam);
  }
  return;
}

