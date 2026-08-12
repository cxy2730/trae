// Function: FUN_00445010
// Entry:    00445010
// Size:     693 bytes
// Conv:     unknown
// Signature: undefined FUN_00445010(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_00445010(int param_1)

{
  LPRECT lprc;
  LPCSTR pCVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int local_40;
  int local_3c;
  tagSIZE local_38;
  tagRECT local_30;
  HDC local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004a0fd8;
  local_c = ExceptionList;
  if ((*(int *)(*(int *)(param_1 + 0x5c) + -8) != 0) ||
     (ExceptionList = &local_c, *(int *)(*(int *)(param_1 + 0x58) + -8) != 0)) {
    ExceptionList = &local_c;
    FUN_00499b75(param_1);
    local_4 = 0;
    uVar2 = FUN_00499471(param_1 + 0x90);
    pCVar1 = *(LPCSTR *)(param_1 + 0x5c);
    iVar4 = 0;
    iVar3 = 0;
    if (*(int *)(pCVar1 + -8) != 0) {
      GetTextExtentPoint32A(local_18,pCVar1,*(int *)(pCVar1 + -8),&local_38);
      iVar4 = local_38.cx;
      iVar3 = local_38.cy;
    }
    pCVar1 = *(LPCSTR *)(param_1 + 0x58);
    if (*(int *)(pCVar1 + -8) != 0) {
      GetTextExtentPoint32A(local_18,pCVar1,*(int *)(pCVar1 + -8),&local_38);
      if (iVar4 < local_38.cx) {
        iVar4 = local_38.cx;
      }
      if (iVar3 < local_38.cy) {
        iVar3 = local_38.cy;
      }
    }
    FUN_00499471(uVar2);
    local_4 = 0xffffffff;
    local_40 = iVar4 + *(int *)(param_1 + 0x4c) * 2;
    local_3c = iVar3 + *(int *)(param_1 + 0x4c) * 4 + 2;
    FID_conflict__CClientDC();
  }
  *(undefined4 *)(param_1 + 0x40) = 7;
  iVar4 = *(int *)(param_1 + 0x3c) / 7;
  *(int *)(param_1 + 0x44) = iVar4;
  if (*(int *)(param_1 + 0x3c) % 7 != 0) {
    *(int *)(param_1 + 0x44) = iVar4 + 1;
  }
  GetWindowRect(*(HWND *)(param_1 + 0x1c),&local_30);
  lprc = (LPRECT)(param_1 + 0x80);
  iVar4 = *(int *)(param_1 + 0x4c) * 2;
  SetRect(lprc,local_30.left,local_30.top,
          *(int *)(param_1 + 0x48) * *(int *)(param_1 + 0x40) + iVar4 + local_30.left,
          *(int *)(param_1 + 0x44) * *(int *)(param_1 + 0x48) + iVar4 + local_30.top);
  if (*(int *)(*(int *)(param_1 + 0x58) + -8) != 0) {
    if (*(int *)(param_1 + 0x88) - lprc->left < local_40) {
      *(LONG *)(param_1 + 0x88) = lprc->left + local_40;
    }
    iVar4 = *(int *)(param_1 + 0x4c);
    local_40 = (*(int *)(param_1 + 0x88) - lprc->left) + iVar4 * -2;
    SetRect((LPRECT)(param_1 + 0x70),iVar4,iVar4,iVar4 + local_40,iVar4 * 2 + local_3c);
    *(int *)(param_1 + 0x8c) =
         *(int *)(param_1 + 0x8c) +
         (*(int *)(param_1 + 0x4c) * 2 - *(int *)(param_1 + 0x74)) + *(int *)(param_1 + 0x7c);
  }
  if (*(int *)(*(int *)(param_1 + 0x5c) + -8) != 0) {
    if (*(int *)(param_1 + 0x88) - lprc->left < local_40) {
      *(LONG *)(param_1 + 0x88) = lprc->left + local_40;
    }
    iVar4 = *(int *)(param_1 + 0x4c);
    SetRect((LPRECT)(param_1 + 0x60),iVar4,*(int *)(param_1 + 0x8c) - *(int *)(param_1 + 0x84),
            ((*(int *)(param_1 + 0x88) + iVar4 * -2) - lprc->left) + iVar4,
            (*(int *)(param_1 + 0x8c) - *(int *)(param_1 + 0x84)) + iVar4 + local_3c);
    *(int *)(param_1 + 0x8c) =
         *(int *)(param_1 + 0x8c) +
         (*(int *)(param_1 + 0x4c) * 2 - *(int *)(param_1 + 100)) + *(int *)(param_1 + 0x6c);
  }
  iVar4 = GetSystemMetrics(1);
  iVar3 = GetSystemMetrics(0);
  if (iVar3 < *(int *)(param_1 + 0x88)) {
    OffsetRect(lprc,iVar3 - *(int *)(param_1 + 0x88),0);
  }
  if (lprc->left < 0) {
    OffsetRect(lprc,-lprc->left,0);
  }
  if (iVar4 < *(int *)(param_1 + 0x8c)) {
    OffsetRect(lprc,0,iVar4 - *(int *)(param_1 + 0x8c));
  }
  FUN_004974f0(lprc->left,*(int *)(param_1 + 0x84),*(int *)(param_1 + 0x88) - lprc->left,
               *(int *)(param_1 + 0x8c) - *(int *)(param_1 + 0x84),1);
  ExceptionList = local_c;
  return;
}

