// Function: FUN_0041ce70
// Entry:    0041ce70
// Size:     25 bytes
// Conv:     unknown
// Signature: undefined FUN_0041ce70(void)
// Decompiled by Ghidra 12.1.2


void FUN_0041ce70(void)

{
  DWORD DVar1;
  
  DVar1 = GetTickCount();
  Sleep(DVar1 % 0x14 + 0x14);
  return;
}

