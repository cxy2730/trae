// Function: FUN_004875cf
// Entry:    004875cf
// Size:     41 bytes
// Conv:     unknown
// Signature: undefined FUN_004875cf(void)
// Decompiled by Ghidra 12.1.2


void FUN_004875cf(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleA("KERNEL32");
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,"IsProcessorFeaturePresent");
    if (pFVar1 != (FARPROC)0x0) {
      (*pFVar1)(0);
      return;
    }
  }
  FUN_00487591();
  return;
}

