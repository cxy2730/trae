// Function: FUN_0042c940
// Entry:    0042c940
// Size:     453 bytes
// Conv:     unknown
// Signature: undefined FUN_0042c940(void)
// Decompiled by Ghidra 12.1.2


void __thiscall
FUN_0042c940(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  RECT *lprcSrc;
  tagRECT tStack_20;
  undefined1 auStack_10 [16];
  
  iVar2 = param_2;
  iVar1 = FUN_0042a650();
  if (((iVar1 != 0) && (-1 < param_2)) && (-1 < param_3)) {
    if ((param_4 == 1) && ((*(byte *)(param_1 + 0x44) & 1) != 0)) {
      FUN_0042c6a0(param_2,param_3,param_5);
      return;
    }
    iVar1 = FUN_004279e0();
    if (param_2 < iVar1) {
      param_2 = FUN_004279e0();
    }
    iVar1 = FUN_00427920();
    if (iVar1 + -1 < param_2) {
      iVar2 = FUN_00427920();
      iVar2 = iVar2 + -1;
    }
    else {
      iVar1 = FUN_004279e0();
      if (iVar2 < iVar1) {
        iVar2 = FUN_004279e0();
      }
    }
    iVar1 = FUN_004279f0();
    if (param_3 < iVar1) {
      param_2 = FUN_004279f0();
    }
    else {
      param_2 = param_3;
    }
    iVar1 = FUN_00427960();
    if (iVar1 + -1 < param_2) {
      param_3 = FUN_00427960();
      param_3 = param_3 + -1;
    }
    else {
      iVar1 = FUN_004279f0();
      if (param_3 < iVar1) {
        param_3 = FUN_004279f0();
      }
    }
    if ((-1 < iVar2) && (-1 < param_3)) {
      lprcSrc = (RECT *)FUN_0042e140(auStack_10,iVar2,param_3);
      CopyRect(&tStack_20,lprcSrc);
      if ((tStack_20.left != -1) &&
         ((((*(int *)(param_1 + 0x48) != tStack_20.top ||
            (*(int *)(param_1 + 0x4c) != tStack_20.left)) ||
           (*(int *)(param_1 + 0x50) != tStack_20.bottom)) ||
          (*(int *)(param_1 + 0x54) != tStack_20.right)))) {
        if (param_5 != 0) {
          *(undefined4 *)(param_1 + 0x44c) = 0;
          FUN_0042c270();
        }
        if (param_6 != 0) {
          FUN_0042cd10(tStack_20.top,tStack_20.left,param_5 != 0);
        }
        *(LONG *)(param_1 + 0x4c) = tStack_20.left;
        *(LONG *)(param_1 + 0x48) = tStack_20.top;
        *(LONG *)(param_1 + 0x50) = tStack_20.bottom;
        *(LONG *)(param_1 + 0x54) = tStack_20.right;
        if (param_5 != 0) {
          UpdateWindow(*(HWND *)(param_1 + 0x1c));
          FUN_0042c270();
          *(undefined4 *)(param_1 + 0x44c) = 1;
        }
      }
    }
  }
  return;
}

