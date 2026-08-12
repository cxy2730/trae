// Function: FUN_0049c8ac
// Entry:    0049c8ac
// Size:     66 bytes
// Conv:     unknown
// Signature: undefined FUN_0049c8ac(void)
// Decompiled by Ghidra 12.1.2


DWORD * __fastcall FUN_0049c8ac(DWORD *param_1)

{
  DWORD DVar1;
  
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[6] = 4;
  param_1[1] = 0;
  param_1[2] = 1;
  param_1[3] = 0;
  param_1[4] = 0;
  DVar1 = TlsAlloc();
  *param_1 = DVar1;
  if (DVar1 == 0xffffffff) {
    FUN_0049132a();
  }
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
  return param_1;
}

