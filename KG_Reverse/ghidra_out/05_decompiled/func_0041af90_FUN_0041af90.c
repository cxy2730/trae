// Function: FUN_0041af90
// Entry:    0041af90
// Size:     229 bytes
// Conv:     unknown
// Signature: undefined FUN_0041af90(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_0041af90(int param_1,RECT *param_2)

{
  HWND hWnd;
  BOOL BVar1;
  uint uVar2;
  RECT *pRVar3;
  RECT local_20;
  tagRECT local_10;
  
  InvalidateRect(*(HWND *)(param_1 + 0x1c),param_2,1);
  hWnd = GetTopWindow(*(HWND *)(param_1 + 0x1c));
  do {
    if (hWnd == (HWND)0x0) {
      return;
    }
    BVar1 = IsWindowVisible(hWnd);
    if ((BVar1 != 0) && (uVar2 = GetWindowLongA(hWnd,-0x14), (uVar2 & 0x20) != 0)) {
      if (param_2 == (RECT *)0x0) {
        pRVar3 = (RECT *)0x0;
      }
      else {
        local_20.left = param_2->left;
        local_20.top = param_2->top;
        local_20.right = param_2->right;
        local_20.bottom = param_2->bottom;
        FUN_00499a1f(&local_20);
        pRVar3 = &local_20;
        FUN_00494bb2(hWnd);
        FUN_004999e3(pRVar3);
        GetClientRect(hWnd,&local_10);
        IntersectRect(&local_20,&local_20,&local_10);
        BVar1 = IsRectEmpty(&local_20);
        if (BVar1 != 0) goto LAB_0041b058;
        pRVar3 = &local_20;
      }
      InvalidateRect(hWnd,pRVar3,0);
    }
LAB_0041b058:
    hWnd = GetWindow(hWnd,2);
  } while( true );
}

