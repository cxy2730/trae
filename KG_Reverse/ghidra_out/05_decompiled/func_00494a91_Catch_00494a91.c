// Function: Catch@00494a91
// Entry:    00494a91
// Size:     49 bytes
// Conv:     unknown
// Signature: undefined Catch@00494a91(void)
// Decompiled by Ghidra 12.1.2


undefined * Catch_00494a91(void)

{
  CWinThread *pCVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  pCVar1 = AfxGetThread();
  if (pCVar1 == (CWinThread *)0x0) {
    *(undefined4 *)(unaff_EBP + 8) = 0;
  }
  else {
    uVar2 = (**(code **)(*(int *)pCVar1 + 0x6c))
                      (*(undefined4 *)(unaff_EBP + 0x10),*(int *)(unaff_EBP + -0x14) + 0x34);
    *(undefined4 *)(unaff_EBP + 8) = uVar2;
  }
  FUN_00493701();
  return &DAT_00494ac2;
}

