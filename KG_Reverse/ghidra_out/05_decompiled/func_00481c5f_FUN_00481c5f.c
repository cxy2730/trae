// Function: FUN_00481c5f
// Entry:    00481c5f
// Size:     62 bytes
// Conv:     unknown
// Signature: undefined FUN_00481c5f(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_00481c5f(int param_1,int param_2)

{
  int iVar1;
  WPARAM wParam;
  undefined1 local_14 [16];
  
  wParam = 1;
  if (*(int *)(param_2 + 8) == 0) {
    iVar1 = FUN_00481412(local_14);
    if (iVar1 != 0) {
      wParam = 0;
    }
  }
  SendMessageA(*(HWND *)(param_1 + 0x1c),0x1002,wParam,(LPARAM)local_14);
  return;
}

