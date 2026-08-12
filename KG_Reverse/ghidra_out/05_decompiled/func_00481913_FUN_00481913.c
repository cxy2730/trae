// Function: FUN_00481913
// Entry:    00481913
// Size:     20 bytes
// Conv:     unknown
// Signature: undefined FUN_00481913(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_00481913(void)

{
  CWinThread *pCVar1;
  undefined4 uVar2;
  
  pCVar1 = AfxGetThread();
  if (pCVar1 != (CWinThread *)0x0) {
    uVar2 = (**(code **)(*(int *)pCVar1 + 0x74))();
    return uVar2;
  }
  return 0;
}

