// Function: FUN_0049377e
// Entry:    0049377e
// Size:     40 bytes
// Conv:     unknown
// Signature: undefined FUN_0049377e(void)
// Decompiled by Ghidra 12.1.2


int FUN_0049377e(void)

{
  DWORD dwErrCode;
  int iVar1;
  
  dwErrCode = GetLastError();
  iVar1 = FUN_0049ccac(&LAB_0049c02d);
  SetLastError(dwErrCode);
  return iVar1 + 0x10;
}

