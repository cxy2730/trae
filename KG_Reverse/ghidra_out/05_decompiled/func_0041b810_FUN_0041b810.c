// Function: FUN_0041b810
// Entry:    0041b810
// Size:     55 bytes
// Conv:     unknown
// Signature: undefined FUN_0041b810(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_0041b810(LPCSTR param_1)

{
  HANDLE hFindFile;
  _WIN32_FIND_DATAA local_140;
  
  hFindFile = FindFirstFileA(param_1,&local_140);
  if (hFindFile != (HANDLE)0xffffffff) {
    FindClose(hFindFile);
    return 1;
  }
  return 0;
}

