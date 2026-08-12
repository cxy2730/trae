// Function: FUN_0042c530
// Entry:    0042c530
// Size:     361 bytes
// Conv:     unknown
// Signature: undefined FUN_0042c530(void)
// Decompiled by Ghidra 12.1.2


LONG * __thiscall
FUN_0042c530(int param_1,LONG *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  RECT *lprcSrc;
  BOOL BVar1;
  int *piVar2;
  undefined1 local_60 [16];
  tagRECT local_50;
  tagRECT local_40;
  tagRECT local_30;
  undefined1 local_20 [8];
  HDC local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049ff98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  lprcSrc = (RECT *)FUN_0042d0b0(local_60,param_3,param_4,param_5,param_6);
  CopyRect(&local_50,lprcSrc);
  local_50.left = (local_50.left < 0) - 1 & local_50.left;
  local_50.top = (local_50.top < 0) - 1 & local_50.top;
  BVar1 = IsRectEmpty(&local_50);
  if (BVar1 != 0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    ExceptionList = local_c;
    return param_2;
  }
  piVar2 = (int *)FUN_0042c1c0(local_60);
  OffsetRect(&local_50,*piVar2,piVar2[1]);
  FUN_00499b75(0);
  local_4 = 0;
  FUN_00442c00(local_20,*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c));
  LPtoDP(local_18,(LPPOINT)&local_50,2);
  GetClientRect(*(HWND *)(param_1 + 0x1c),&local_30);
  IntersectRect(&local_40,&local_50,&local_30);
  local_4 = 0xffffffff;
  *param_2 = local_40.left;
  param_2[1] = local_40.top;
  param_2[2] = local_40.right;
  param_2[3] = local_40.bottom;
  FID_conflict__CClientDC();
  ExceptionList = local_c;
  return param_2;
}

