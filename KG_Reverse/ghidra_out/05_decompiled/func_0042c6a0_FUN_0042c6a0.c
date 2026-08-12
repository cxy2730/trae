// Function: FUN_0042c6a0
// Entry:    0042c6a0
// Size:     602 bytes
// Conv:     unknown
// Signature: undefined FUN_0042c6a0(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_0042c6a0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  RECT *pRVar3;
  int iVar4;
  undefined4 uStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  tagRECT tStack_30;
  tagRECT tStack_20;
  undefined1 auStack_10 [16];
  
  iVar1 = FUN_0042a650();
  if (iVar1 != 0) {
    iVar2 = FUN_004279e0();
    iVar1 = param_2;
    if (param_2 < iVar2) {
      iVar1 = FUN_004279e0();
    }
    iVar2 = FUN_00427920();
    if (iVar2 + -1 < iVar1) {
      param_2 = FUN_00427920();
      param_2 = param_2 + -1;
    }
    else {
      iVar1 = FUN_004279e0();
      if (param_2 < iVar1) {
        param_2 = FUN_004279e0();
      }
    }
    iVar2 = FUN_004279f0();
    iVar1 = param_3;
    if (param_3 < iVar2) {
      iVar1 = FUN_004279f0();
    }
    iVar2 = FUN_00427960();
    if (iVar2 + -1 < iVar1) {
      param_3 = FUN_00427960();
      param_3 = param_3 + -1;
    }
    else {
      iVar1 = FUN_004279f0();
      if (param_3 < iVar1) {
        param_3 = FUN_004279f0();
      }
    }
    if ((param_2 != -1) && (param_3 != -1)) {
      pRVar3 = (RECT *)FUN_0042e140(auStack_10,*(undefined4 *)(param_1 + 0x48),
                                    *(undefined4 *)(param_1 + 0x4c));
      CopyRect(&tStack_30,pRVar3);
      if (tStack_30.left != -1) {
        pRVar3 = (RECT *)FUN_0042e140(auStack_10,param_2,param_3);
        CopyRect(&tStack_20,pRVar3);
        if (tStack_20.left != -1) {
          if (tStack_30.bottom <= tStack_20.bottom) {
            tStack_30.bottom = tStack_20.bottom;
          }
          if (tStack_20.right < tStack_30.right) {
            tStack_20.right = tStack_30.right;
          }
          if (tStack_20.top <= tStack_30.top) {
            tStack_30.top = tStack_20.top;
          }
          if (tStack_30.left < tStack_20.left) {
            tStack_20.left = tStack_30.left;
          }
          iStack_40 = tStack_20.left;
          iStack_3c = tStack_30.top;
          iStack_38 = tStack_20.right;
          iStack_34 = tStack_30.bottom;
          FUN_00428200(&iStack_40);
          iVar1 = param_4;
          if (param_2 < *(int *)(param_1 + 0x48)) {
            param_2 = iStack_34;
            iVar2 = iStack_3c;
          }
          else {
            param_2 = iStack_3c;
            iVar2 = iStack_34;
          }
          if (param_3 < *(int *)(param_1 + 0x4c)) {
            param_3 = iStack_38;
            iVar4 = iStack_40;
          }
          else {
            param_3 = iStack_40;
            iVar4 = iStack_38;
          }
          if ((((*(int *)(param_1 + 0x48) != param_2) || (*(int *)(param_1 + 0x4c) != param_3)) ||
              (*(int *)(param_1 + 0x50) != iVar2)) || (*(int *)(param_1 + 0x54) != iVar4)) {
            if (param_4 != 0) {
              FUN_0042c270();
              *(undefined4 *)(param_1 + 0x44c) = 0;
            }
            uStack_44 = FUN_0049633f(0);
            param_4 = FUN_0049633f(1);
            FUN_0042cdc0(iVar2,iVar4,&uStack_44,&param_4);
            FUN_0042eed0(uStack_44,param_4,iVar1 != 0);
            *(int *)(param_1 + 0x48) = param_2;
            *(int *)(param_1 + 0x4c) = param_3;
            *(int *)(param_1 + 0x50) = iVar2;
            *(int *)(param_1 + 0x54) = iVar4;
            if (iVar1 != 0) {
              UpdateWindow(*(HWND *)(param_1 + 0x1c));
              FUN_0042c270();
              *(undefined4 *)(param_1 + 0x44c) = 1;
            }
          }
        }
      }
    }
  }
  return;
}

