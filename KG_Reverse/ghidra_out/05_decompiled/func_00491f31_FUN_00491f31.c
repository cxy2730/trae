// Function: FUN_00491f31
// Entry:    00491f31
// Size:     22 bytes
// Conv:     unknown
// Signature: undefined FUN_00491f31(void)
// Decompiled by Ghidra 12.1.2


BOOL __fastcall FUN_00491f31(int param_1)

{
  HIMAGELIST himl;
  BOOL BVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  himl = (HIMAGELIST)Detach();
  BVar1 = ImageList_Destroy(himl);
  return BVar1;
}

