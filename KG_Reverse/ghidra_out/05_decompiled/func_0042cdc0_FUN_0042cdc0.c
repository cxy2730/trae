// Function: FUN_0042cdc0
// Entry:    0042cdc0
// Size:     739 bytes
// Conv:     unknown
// Signature: undefined FUN_0042cdc0(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_0042cdc0(int param_1,int param_2,int param_3,int *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  RECT *lprcSrc;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined1 auStack_6c [8];
  tagRECT tStack_64;
  tagRECT tStack_54;
  tagRECT tStack_44;
  undefined1 auStack_34 [8];
  HDC pHStack_2c;
  undefined1 auStack_20 [8];
  HDC pHStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0049fff0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar1 = FUN_0042a650();
  if (iVar1 == 0) {
    ExceptionList = pvStack_c;
    return;
  }
  iVar1 = FUN_004279e0();
  iVar2 = FUN_004279f0();
  if (param_2 < iVar1) {
    ExceptionList = pvStack_c;
    return;
  }
  if (param_3 < iVar2) {
    ExceptionList = pvStack_c;
    return;
  }
  lprcSrc = (RECT *)FUN_0042cb10(&tStack_54,*param_4,*param_5);
  CopyRect(&tStack_64,lprcSrc);
  if (param_2 < tStack_64.top) {
    *param_5 = param_2 - iVar1;
  }
  else {
    if (param_2 <= tStack_64.bottom) {
      if ((tStack_64.left <= param_3) && (param_3 <= tStack_64.right)) {
        ExceptionList = pvStack_c;
        return;
      }
      if (param_2 <= tStack_64.bottom) goto LAB_0042cf7f;
    }
    GetClientRect(*(HWND *)(param_1 + 0x1c),&tStack_54);
    FUN_00499b75(0);
    uStack_4 = 0;
    FUN_00442c00(auStack_34,*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c));
    FUN_0042a070(auStack_34);
    uStack_4 = CONCAT31(uStack_4._1_3_,1);
    DPtoLP(pHStack_2c,(LPPOINT)&tStack_54,2);
    iVar3 = FUN_0042c1c0(auStack_6c);
    iVar4 = FUN_0042a470(tStack_54.bottom - tStack_54.top,-*(int *)(iVar3 + 4));
    iVar3 = param_2;
    do {
      iVar5 = FUN_0042a0a0(iVar3);
      iVar4 = FUN_0042a470(iVar4,-iVar5);
      if (iVar4 < 0) {
        iVar3 = iVar3 + 1;
        break;
      }
      iVar3 = iVar3 + -1;
    } while (iVar1 <= iVar3);
    iVar4 = param_2;
    if (iVar3 <= param_2) {
      iVar4 = iVar3;
    }
    iVar5 = iVar1;
    if ((iVar1 <= iVar4) && (iVar5 = param_2, iVar3 <= param_2)) {
      iVar5 = iVar3;
    }
    *param_5 = iVar5 - iVar1;
    FUN_0042a090();
    uStack_4 = 0xffffffff;
    FID_conflict__CClientDC();
  }
LAB_0042cf7f:
  if (param_3 < tStack_64.left) {
    *param_4 = param_3 - iVar2;
  }
  else if (tStack_64.right < param_3) {
    GetClientRect(*(HWND *)(param_1 + 0x1c),&tStack_44);
    FUN_00499b75(0);
    uStack_4 = 2;
    FUN_00442c00(auStack_20,*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c));
    FUN_0042a070(auStack_20);
    uStack_4 = CONCAT31(uStack_4._1_3_,3);
    DPtoLP(pHStack_18,(LPPOINT)&tStack_44,2);
    piVar6 = (int *)FUN_0042c1c0(auStack_6c);
    iVar3 = (tStack_44.right - tStack_44.left) - *piVar6;
    iVar1 = param_3;
    do {
      iVar4 = FUN_0042a180(iVar1);
      iVar3 = FUN_0042a340(iVar3,-iVar4);
      if (iVar3 < 0) {
        iVar1 = iVar1 + 1;
        break;
      }
      iVar1 = iVar1 + -1;
    } while (iVar2 <= iVar1);
    iVar3 = param_3;
    if (iVar1 <= param_3) {
      iVar3 = iVar1;
    }
    iVar4 = iVar2;
    if ((iVar2 <= iVar3) && (iVar4 = iVar1, param_3 < iVar1)) {
      iVar4 = param_3;
    }
    *param_4 = iVar4 - iVar2;
    FUN_0042a090();
    uStack_4 = 0xffffffff;
    FID_conflict__CClientDC();
  }
  ExceptionList = pvStack_c;
  return;
}

