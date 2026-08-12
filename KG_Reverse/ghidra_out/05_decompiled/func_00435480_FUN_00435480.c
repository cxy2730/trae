// Function: FUN_00435480
// Entry:    00435480
// Size:     210 bytes
// Conv:     unknown
// Signature: undefined FUN_00435480(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_00435480(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  HWND pHVar5;
  int local_14;
  tagRECT local_10;
  
  iVar1 = GetSystemMetrics(0x2e);
  iVar2 = GetSystemMetrics(0x2d);
  iVar3 = GetSystemMetrics(10);
  local_14 = iVar2 * 5;
  if (local_14 < iVar3) {
    local_14 = GetSystemMetrics(10);
  }
  iVar4 = GetSystemMetrics(9);
  iVar3 = iVar1 * 5;
  if (iVar3 < iVar4) {
    iVar3 = GetSystemMetrics(9);
  }
  if (local_14 <= iVar3) {
    local_14 = iVar3;
  }
  GetWindowRect(*(HWND *)(param_1 + 0x1c),&local_10);
  pHVar5 = GetParent(*(HWND *)(param_1 + 0x1c));
  iVar3 = FUN_00494bb2(pHVar5);
  if (iVar3 != 0) {
    FUN_004999e3(&local_10);
  }
  GetWindowRect(*(HWND *)(param_1 + 0x1c),&local_10);
  FUN_004999e3(&local_10);
  SetRect((LPRECT)(param_1 + 0x50),(local_10.right - local_14) - iVar2,iVar1 + local_10.top,
          local_10.right - iVar2,local_10.bottom - iVar1);
  return;
}

