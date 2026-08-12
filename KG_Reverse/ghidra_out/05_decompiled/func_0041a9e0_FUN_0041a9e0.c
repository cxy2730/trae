// Function: FUN_0041a9e0
// Entry:    0041a9e0
// Size:     255 bytes
// Conv:     unknown
// Signature: undefined FUN_0041a9e0(void)
// Decompiled by Ghidra 12.1.2


undefined4 __thiscall FUN_0041a9e0(int param_1,HWND param_2)

{
  HCURSOR hCursor;
  POINT pt;
  HWND pHVar1;
  BOOL BVar2;
  int iVar3;
  int iVar4;
  tagPOINT local_18;
  tagRECT local_10;
  
  pHVar1 = param_2;
  if (param_2 != (HWND)0x0) {
    if ((param_2 != *(HWND *)(param_1 + 0x1c)) &&
       (BVar2 = IsChild(*(HWND *)(param_1 + 0x1c),param_2), BVar2 == 0)) {
      return 0;
    }
    if (pHVar1 == *(HWND *)(param_1 + 0x1c)) {
      GetCursorPos(&local_18);
      GetClientRect(*(HWND *)(param_1 + 0x1c),&local_10);
      FUN_00499a1f(&local_10);
      pt.y = local_18.y;
      pt.x = local_18.x;
      BVar2 = PtInRect(&local_10,pt);
      if (BVar2 == 0) {
        return 0;
      }
    }
    FUN_00413d70(0x3e9,0,0);
    iVar3 = FUN_0040ec30(*(undefined4 *)(param_1 + 0xdc),&param_2,0);
    if (iVar3 != 0) {
      if (pHVar1 == *(HWND *)(param_1 + 0x1c)) {
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_0040f4c0(pHVar1,1);
        if (iVar3 == -1) {
          return 0;
        }
      }
      iVar3 = FUN_0040e730(iVar3,0);
      iVar4 = FUN_00406cf0(iVar3 + 0x18);
      iVar4 = iVar3 + 0x18 + iVar4;
      iVar3 = FUN_00406cf0(iVar4);
      hCursor = *(HCURSOR *)(iVar4 + iVar3 + 0x14);
      if (hCursor != (HCURSOR)0x0) {
        SetCursor(hCursor);
        return 1;
      }
    }
  }
  return 0;
}

