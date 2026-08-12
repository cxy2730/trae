// Function: FUN_0048ea62
// Entry:    0048ea62
// Size:     137 bytes
// Conv:     unknown
// Signature: undefined FUN_0048ea62(void)
// Decompiled by Ghidra 12.1.2


int FUN_0048ea62(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_0301128c == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_0301128c = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_0301128c != (FARPROC)0x0) {
        DAT_03011290 = GetProcAddress(hModule,"GetActiveWindow");
        DAT_03011294 = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_0048eab1;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_0048eab1:
    if (DAT_03011290 != (FARPROC)0x0) {
      iVar1 = (*DAT_03011290)();
      if ((iVar1 != 0) && (DAT_03011294 != (FARPROC)0x0)) {
        iVar1 = (*DAT_03011294)(iVar1);
      }
    }
    iVar1 = (*DAT_0301128c)(iVar1,param_1,param_2,param_3);
  }
  return iVar1;
}

