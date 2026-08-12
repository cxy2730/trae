// Function: FUN_00481952
// Entry:    00481952
// Size:     216 bytes
// Conv:     unknown
// Signature: undefined FUN_00481952(void)
// Decompiled by Ghidra 12.1.2


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00481952(void)

{
  HMODULE hModule;
  bool bVar1;
  
  if (DAT_03010bc0 == 0) {
    hModule = GetModuleHandleA("USER32");
    if ((((hModule != (HMODULE)0x0) &&
         (_DAT_03010ba8 = GetProcAddress(hModule,"GetSystemMetrics"), _DAT_03010ba8 != (FARPROC)0x0)
         ) && (DAT_03010bac = GetProcAddress(hModule,"MonitorFromWindow"),
              DAT_03010bac != (FARPROC)0x0)) &&
       (((DAT_03010bb0 = GetProcAddress(hModule,"MonitorFromRect"), DAT_03010bb0 != (FARPROC)0x0 &&
         (_DAT_03010bb4 = GetProcAddress(hModule,"MonitorFromPoint"), _DAT_03010bb4 != (FARPROC)0x0)
         ) && ((_DAT_03010bbc = GetProcAddress(hModule,"EnumDisplayMonitors"),
               _DAT_03010bbc != (FARPROC)0x0 &&
               (DAT_03010bb8 = GetProcAddress(hModule,"GetMonitorInfoA"),
               DAT_03010bb8 != (FARPROC)0x0)))))) {
      DAT_03010bc0 = 1;
      return true;
    }
    _DAT_03010ba8 = (FARPROC)0x0;
    DAT_03010bac = (FARPROC)0x0;
    DAT_03010bb0 = (FARPROC)0x0;
    _DAT_03010bb4 = (FARPROC)0x0;
    DAT_03010bb8 = (FARPROC)0x0;
    _DAT_03010bbc = (FARPROC)0x0;
    DAT_03010bc0 = 1;
    bVar1 = false;
  }
  else {
    bVar1 = DAT_03010bb8 != (FARPROC)0x0;
  }
  return bVar1;
}

