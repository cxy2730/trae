// Function: FUN_004871ba
// Entry:    004871ba
// Size:     103 bytes
// Conv:     unknown
// Signature: undefined FUN_004871ba(void)
// Decompiled by Ghidra 12.1.2


DWORD * FUN_004871ba(void)

{
  DWORD dwErrCode;
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  dwErrCode = GetLastError();
  lpTlsValue = TlsGetValue(DAT_02fd941c);
  if (lpTlsValue == (DWORD *)0x0) {
    lpTlsValue = (DWORD *)FUN_004847a6(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_02fd941c,lpTlsValue);
      if (BVar1 != 0) {
        FUN_004871a7(lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        goto LAB_00487215;
      }
    }
    __amsg_exit(0x10);
  }
LAB_00487215:
  SetLastError(dwErrCode);
  return lpTlsValue;
}

