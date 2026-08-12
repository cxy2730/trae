// Function: FUN_004968ad
// Entry:    004968ad
// Size:     74 bytes
// Conv:     unknown
// Signature: undefined FUN_004968ad(void)
// Decompiled by Ghidra 12.1.2


void FUN_004968ad(void)

{
  BOOL BVar1;
  tagMSG local_20;
  
  while( true ) {
    BVar1 = PeekMessageA(&local_20,(HWND)0x0,0x121,0x121,1);
    if (BVar1 == 0) break;
    DispatchMessageA(&local_20);
  }
  FUN_00494b19();
  return;
}

