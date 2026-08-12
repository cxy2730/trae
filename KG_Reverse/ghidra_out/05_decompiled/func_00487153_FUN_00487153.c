// Function: FUN_00487153
// Entry:    00487153
// Size:     84 bytes
// Conv:     unknown
// Signature: undefined FUN_00487153(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_00487153(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_00489a2b();
  DAT_02fd941c = TlsAlloc();
  if (DAT_02fd941c != 0xffffffff) {
    lpTlsValue = (DWORD *)FUN_004847a6(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_02fd941c,lpTlsValue);
      if (BVar1 != 0) {
        FUN_004871a7(lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        return 1;
      }
    }
  }
  return 0;
}

