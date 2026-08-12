// Function: FUN_004433d0
// Entry:    004433d0
// Size:     79 bytes
// Conv:     unknown
// Signature: undefined FUN_004433d0(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_004433d0(int param_1,int param_2)

{
  param_2 = *(int *)(param_1 + 0xd0) + param_2;
  if (199 < param_2) {
    if (3000 < param_2) {
      param_2 = 3000;
      goto LAB_00443400;
    }
    if (199 < param_2) goto LAB_00443400;
  }
  param_2 = 200;
LAB_00443400:
  *(int *)(param_1 + 0xd0) = param_2;
  FUN_004432a0();
  InvalidateRect(*(HWND *)(param_1 + 0x1c),(RECT *)0x0,1);
  return;
}

