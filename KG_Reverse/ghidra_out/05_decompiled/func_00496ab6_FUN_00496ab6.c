// Function: FUN_00496ab6
// Entry:    00496ab6
// Size:     437 bytes
// Conv:     unknown
// Signature: undefined FUN_00496ab6(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_00496ab6(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  HWND pHVar4;
  int iVar5;
  HWND hWnd;
  undefined4 *puVar6;
  undefined4 local_64 [5];
  RECT local_50;
  tagRECT local_3c;
  tagRECT local_2c;
  tagRECT local_1c;
  int local_c;
  uint local_8;
  
  local_c = param_1;
  local_8 = FUN_00497418();
  if (param_2 == 0) {
    if ((local_8 & 0x40000000) == 0) {
      hWnd = GetWindow(*(HWND *)(param_1 + 0x1c),4);
    }
    else {
      hWnd = GetParent(*(HWND *)(param_1 + 0x1c));
    }
    if ((hWnd != (HWND)0x0) && (pHVar4 = (HWND)SendMessageA(hWnd,0x36b,0,0), pHVar4 != (HWND)0x0)) {
      hWnd = pHVar4;
    }
  }
  else {
    hWnd = *(HWND *)(param_2 + 0x1c);
  }
  GetWindowRect(*(HWND *)(param_1 + 0x1c),&local_2c);
  if ((local_8 & 0x40000000) == 0) {
    if ((hWnd != (HWND)0x0) &&
       ((uVar1 = GetWindowLongA(hWnd,-0x10), (uVar1 & 0x10000000) == 0 ||
        ((uVar1 & 0x20000000) != 0)))) {
      hWnd = (HWND)0x0;
    }
    local_64[0] = 0x28;
    if (hWnd == (HWND)0x0) {
      iVar2 = FUN_00481913();
      uVar3 = 0;
      if (iVar2 != 0) {
        uVar3 = *(undefined4 *)(iVar2 + 0x1c);
      }
      puVar6 = local_64;
      uVar3 = xMonitorFromWindow(uVar3,1);
      FUN_00481aeb(uVar3,puVar6);
      CopyRect(&local_3c,&local_50);
      CopyRect(&local_1c,&local_50);
    }
    else {
      GetWindowRect(hWnd,&local_3c);
      puVar6 = local_64;
      uVar3 = xMonitorFromWindow(hWnd,2);
      FUN_00481aeb(uVar3,puVar6);
      CopyRect(&local_1c,&local_50);
    }
  }
  else {
    pHVar4 = GetParent(*(HWND *)(param_1 + 0x1c));
    GetClientRect(pHVar4,&local_1c);
    GetClientRect(hWnd,&local_3c);
    MapWindowPoints(hWnd,pHVar4,(LPPOINT)&local_3c,2);
  }
  iVar2 = (local_3c.left + local_3c.right) / 2 - (local_2c.right - local_2c.left) / 2;
  iVar5 = (local_3c.top + local_3c.bottom) / 2 - (local_2c.bottom - local_2c.top) / 2;
  if ((local_1c.left <= iVar2) &&
     (local_1c.left = iVar2, local_1c.right < (local_2c.right - local_2c.left) + iVar2)) {
    local_1c.left = (local_1c.right - local_2c.right) + local_2c.left;
  }
  if ((local_1c.top <= iVar5) &&
     (local_1c.top = iVar5, local_1c.bottom < (local_2c.bottom - local_2c.top) + iVar5)) {
    local_1c.top = (local_2c.top - local_2c.bottom) + local_1c.bottom;
  }
  FUN_00497531(0,local_1c.left,local_1c.top,0xffffffff,0xffffffff,0x15);
  return;
}

