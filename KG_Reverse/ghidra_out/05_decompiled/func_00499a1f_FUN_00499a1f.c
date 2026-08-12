// Function: FUN_00499a1f
// Entry:    00499a1f
// Size:     60 bytes
// Conv:     unknown
// Signature: undefined FUN_00499a1f(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_00499a1f(int param_1,LPPOINT param_2)

{
  LPPOINT lpPoint;
  LONG LVar1;
  uint uVar2;
  
  ClientToScreen(*(HWND *)(param_1 + 0x1c),param_2);
  lpPoint = param_2 + 1;
  ClientToScreen(*(HWND *)(param_1 + 0x1c),lpPoint);
  uVar2 = FUN_00497432();
  if ((uVar2 & 0x400000) != 0) {
    LVar1 = param_2->x;
    param_2->x = lpPoint->x;
    lpPoint->x = LVar1;
  }
  return;
}

