// Function: FUN_00491d50
// Entry:    00491d50
// Size:     57 bytes
// Conv:     unknown
// Signature: undefined FUN_00491d50(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_00491d50(int param_1,WPARAM param_2)

{
  LRESULT LVar1;
  int iVar2;
  
  LVar1 = SendMessageA(*(HWND *)(param_1 + 0x1c),0x1108,param_2,0);
  iVar2 = FUN_00491f47(LVar1);
  if (iVar2 != 0) {
    SendMessageA(*(HWND *)(param_1 + 0x1c),0x1109,param_2,0);
  }
  return;
}

