// Function: FUN_00445a80
// Entry:    00445a80
// Size:     56 bytes
// Conv:     unknown
// Signature: undefined FUN_00445a80(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_00445a80(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_00494b19();
  if (param_2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_2 + 0x1c);
  }
  if (param_1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x1c);
  }
  if (iVar2 != iVar1) {
    InvalidateRect(*(HWND *)(param_1 + 0x1c),(RECT *)0x0,1);
  }
  return;
}

