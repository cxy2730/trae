// Function: FUN_00407a00
// Entry:    00407a00
// Size:     69 bytes
// Conv:     unknown
// Signature: undefined FUN_00407a00(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_00407a00(int param_1)

{
  int iVar1;
  uint wParam;
  
  iVar1 = FUN_00436e20();
  wParam = (uint)(*(int *)(param_1 + 0x78) == 1);
  if (iVar1 != 0) {
    iVar1 = FUN_00427c10();
    if (iVar1 != 0) {
      wParam = 1;
    }
  }
  SendMessageA(*(HWND *)(param_1 + 0x1c),0xcf,wParam,0);
  return;
}

