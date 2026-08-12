// Function: FUN_00412670
// Entry:    00412670
// Size:     72 bytes
// Conv:     unknown
// Signature: undefined FUN_00412670(void)
// Decompiled by Ghidra 12.1.2


void FUN_00412670(void)

{
  int iVar1;
  CWinThread *pCVar2;
  tagMSG local_1c;
  
  iVar1 = PeekMessageA(&local_1c,(HWND)0x0,0,0,0);
  while ((iVar1 != 0 && (local_1c.message != 0x12))) {
    pCVar2 = AfxGetThread();
    (**(code **)(*(int *)pCVar2 + 0x5c))();
    iVar1 = PeekMessageA(&local_1c,(HWND)0x0,0,0,0);
  }
  return;
}

