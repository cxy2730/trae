// Function: FUN_0041dc90
// Entry:    0041dc90
// Size:     51 bytes
// Conv:     unknown
// Signature: undefined FUN_0041dc90(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_0041dc90(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_004974d5();
  iVar1 = *(int *)(*(int *)(param_1 + 0x74) + -8 + iVar1 * 8);
  if (*(int *)(iVar1 + 0x40) != param_3) {
    *(int *)(iVar1 + 0x40) = param_3;
    InvalidateRect(*(HWND *)(iVar1 + 0x1c),(RECT *)0x0,0);
  }
  return;
}

