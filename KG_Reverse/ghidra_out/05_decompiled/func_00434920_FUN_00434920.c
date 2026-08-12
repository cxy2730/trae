// Function: FUN_00434920
// Entry:    00434920
// Size:     223 bytes
// Conv:     unknown
// Signature: undefined FUN_00434920(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_00434920(int param_1,byte param_2,LONG param_3,LONG param_4)

{
  POINT pt;
  POINT Point;
  int iVar1;
  BOOL BVar2;
  HWND pHVar3;
  HWND pHVar4;
  tagRECT local_10;
  
  if (*(int *)(param_1 + 0x3c) != 1) {
    iVar1 = FUN_004975a7();
    if (iVar1 != 0) {
      GetClientRect(*(HWND *)(param_1 + 0x1c),&local_10);
      pt.y = param_4;
      pt.x = param_3;
      BVar2 = PtInRect(&local_10,pt);
      ClientToScreen(*(HWND *)(param_1 + 0x1c),(LPPOINT)&param_3);
      Point.y = param_4;
      Point.x = param_3;
      pHVar3 = WindowFromPoint(Point);
      if ((pHVar3 != *(HWND *)(param_1 + 0x1c)) && ((pHVar3 != (HWND)0x0 || (BVar2 == 0)))) {
        if ((param_2 & 1) == 0) {
          ReleaseCapture();
        }
        FUN_00434c40(0);
        return;
      }
      pHVar3 = *(HWND *)(param_1 + 0x1c);
      pHVar4 = GetCapture();
      if (pHVar4 != pHVar3) {
        pHVar3 = SetCapture(pHVar3);
        FUN_00494bb2(pHVar3);
      }
      if ((param_2 & 1) != 0) {
        FUN_00434c40(2);
        return;
      }
      FUN_00434c40(1);
      return;
    }
  }
  ReleaseCapture();
  return;
}

