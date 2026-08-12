// Function: FUN_0048cb03
// Entry:    0048cb03
// Size:     131 bytes
// Conv:     unknown
// Signature: undefined FUN_0048cb03(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_0048cb03(uint param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_0048fd8d(param_1);
  if (iVar1 != -1) {
    if ((param_1 == 1) || (param_1 == 2)) {
      iVar1 = FUN_0048fd8d(2);
      iVar2 = FUN_0048fd8d(1);
      if (iVar2 == iVar1) goto LAB_0048cb51;
    }
    hObject = (HANDLE)FUN_0048fd8d(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_0048cb53;
    }
  }
LAB_0048cb51:
  DVar4 = 0;
LAB_0048cb53:
  FUN_0048fd0e(param_1);
  *(undefined1 *)((&DAT_03014ec0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) = 0;
  if (DVar4 == 0) {
    uVar5 = 0;
  }
  else {
    FUN_0048433a(DVar4);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}

