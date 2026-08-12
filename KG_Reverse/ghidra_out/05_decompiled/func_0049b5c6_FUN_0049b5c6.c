// Function: FUN_0049b5c6
// Entry:    0049b5c6
// Size:     82 bytes
// Conv:     unknown
// Signature: undefined FUN_0049b5c6(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_0049b5c6(int param_1,WPARAM param_2)

{
  int iVar1;
  RECT local_14;
  
  iVar1 = FUN_0049cd41(&LAB_0049c415);
  SendMessageA(*(HWND *)(param_1 + 0x1c),0x198,param_2,(LPARAM)&local_14);
  local_14.right = *(int *)(iVar1 + 8) + 2 + local_14.left;
  InvalidateRect(*(HWND *)(param_1 + 0x1c),&local_14,0);
  return;
}

