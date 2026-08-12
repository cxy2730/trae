// Function: FUN_0049d8f7
// Entry:    0049d8f7
// Size:     69 bytes
// Conv:     unknown
// Signature: undefined FUN_0049d8f7(void)
// Decompiled by Ghidra 12.1.2


int FUN_0049d8f7(void)

{
  DWORD DVar1;
  
  if (DAT_03010f0c == 0) {
    DAT_03010f0c = 1;
    DVar1 = GetVersion();
    if (((byte)DVar1 < 4) && ((DVar1 & 0x80000000) != 0)) {
      DAT_03010f08 = 1;
    }
    else {
      DAT_03010f08 = 0;
      InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_03010d58);
    }
  }
  return DAT_03010f0c;
}

