// Function: FUN_0048cfa8
// Entry:    0048cfa8
// Size:     147 bytes
// Conv:     unknown
// Signature: undefined FUN_0048cfa8(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_0048cfa8(uint param_1)

{
  HANDLE hFile;
  BOOL BVar1;
  DWORD DVar2;
  DWORD *pDVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  
  if (DAT_03014fc0 <= param_1) {
LAB_0048d029:
    puVar4 = (undefined4 *)FUN_004843ad();
    *puVar4 = 9;
    return 0xffffffff;
  }
  iVar5 = (param_1 & 0x1f) * 0x24;
  if ((*(byte *)((&DAT_03014ec0)[(int)param_1 >> 5] + 4 + iVar5) & 1) == 0) goto LAB_0048d029;
  FUN_0048fdcf(param_1);
  if ((*(byte *)((&DAT_03014ec0)[(int)param_1 >> 5] + 4 + iVar5) & 1) != 0) {
    hFile = (HANDLE)FUN_0048fd8d(param_1);
    BVar1 = FlushFileBuffers(hFile);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
    }
    else {
      DVar2 = 0;
    }
    uVar6 = 0;
    if (DVar2 == 0) goto LAB_0048d01e;
    pDVar3 = (DWORD *)FUN_004843b6();
    *pDVar3 = DVar2;
  }
  puVar4 = (undefined4 *)FUN_004843ad();
  *puVar4 = 9;
  uVar6 = 0xffffffff;
LAB_0048d01e:
  FUN_0048fe2e(param_1);
  return uVar6;
}

