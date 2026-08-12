// Function: FUN_004914f6
// Entry:    004914f6
// Size:     219 bytes
// Conv:     unknown
// Signature: undefined FUN_004914f6(void)
// Decompiled by Ghidra 12.1.2


int __fastcall FUN_004914f6(CDialog *param_1)

{
  bool bVar1;
  int iVar2;
  HWND hWnd;
  HWND__ *pHVar3;
  BOOL BVar4;
  int iVar5;
  
  iVar2 = lstrlenA(*(LPCSTR *)(param_1 + 0x78));
  _memset((void *)(iVar2 + 1 + *(int *)(param_1 + 0x78)),0,*(int *)(param_1 + 0x7c) - (iVar2 + 1));
  hWnd = GetFocus();
  bVar1 = false;
  pHVar3 = CDialog::PreModal(param_1);
  *(HWND__ **)(param_1 + 0x60) = pHVar3;
  FUN_004950cc();
  if (*(HWND *)(param_1 + 0x60) != (HWND)0x0) {
    BVar4 = IsWindowEnabled(*(HWND *)(param_1 + 0x60));
    if (BVar4 != 0) {
      bVar1 = true;
      EnableWindow(*(HWND *)(param_1 + 0x60),0);
    }
  }
  iVar2 = FUN_0049c4f2();
  if (((byte)param_1[0x92] & 8) == 0) {
    FUN_00495080(param_1);
  }
  else {
    *(CDialog **)(iVar2 + 0x18) = param_1;
  }
  if (*(int *)(param_1 + 0xa8) == 0) {
    iVar5 = GetSaveFileNameA((LPOPENFILENAMEA)(param_1 + 0x5c));
  }
  else {
    iVar5 = GetOpenFileNameA((LPOPENFILENAMEA)(param_1 + 0x5c));
  }
  *(undefined4 *)(iVar2 + 0x18) = 0;
  if (bVar1) {
    EnableWindow(*(HWND *)(param_1 + 0x60),1);
  }
  BVar4 = IsWindow(hWnd);
  if (BVar4 != 0) {
    SetFocus(hWnd);
  }
  CDialog::PostModal(param_1);
  if (iVar5 == 0) {
    iVar5 = 2;
  }
  return iVar5;
}

