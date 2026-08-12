// Function: FUN_00498abd
// Entry:    00498abd
// Size:     9 bytes
// Conv:     unknown
// Signature: undefined FUN_00498abd(void)
// Decompiled by Ghidra 12.1.2


void FUN_00498abd(void)

{
  AFX_MODULE_THREAD_STATE *pAVar1;
  
  pAVar1 = AfxGetModuleThreadState();
  *(int *)(pAVar1 + 0x10) = *(int *)(pAVar1 + 0x10) + 1;
  return;
}

