// Function: FUN_00493c02
// Entry:    00493c02
// Size:     208 bytes
// Conv:     unknown
// Signature: undefined FUN_00493c02(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_00493c02(void)

{
  LPSTR lpBuffer;
  DWORD DVar1;
  undefined4 uVar2;
  BOOL BVar3;
  HANDLE hFindFile;
  int unaff_EBP;
  
  FUN_004858b8();
  lpBuffer = *(LPSTR *)(unaff_EBP + 8);
  DVar1 = GetFullPathNameA(*(LPCSTR *)(unaff_EBP + 0xc),0x104,lpBuffer,(LPSTR *)(unaff_EBP + -0x14))
  ;
  if (DVar1 == 0) {
    lstrcpynA(lpBuffer,*(LPCSTR *)(unaff_EBP + 0xc),0x104);
    uVar2 = 0;
  }
  else {
    *(undefined **)(unaff_EBP + 8) = PTR_DAT_02fd8088;
    uVar2 = 0;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_00493cd2(lpBuffer,unaff_EBP + 8);
    BVar3 = GetVolumeInformationA
                      (*(LPCSTR *)(unaff_EBP + 8),(LPSTR)0x0,0,(LPDWORD)0x0,
                       (LPDWORD)(unaff_EBP + -0x18),(LPDWORD)(unaff_EBP + -0x10),(LPSTR)0x0,0);
    if (BVar3 != 0) {
      if ((*(byte *)(unaff_EBP + -0x10) & 2) == 0) {
        CharUpperA(lpBuffer);
      }
      if ((*(byte *)(unaff_EBP + -0x10) & 4) == 0) {
        hFindFile = FindFirstFileA(*(LPCSTR *)(unaff_EBP + 0xc),
                                   (LPWIN32_FIND_DATAA)(unaff_EBP + -0x158));
        if (hFindFile != (HANDLE)0xffffffff) {
          FindClose(hFindFile);
          lstrcpyA(*(LPSTR *)(unaff_EBP + -0x14),(LPCSTR)(unaff_EBP + -300));
        }
      }
      uVar2 = 1;
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_004931d6();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}

