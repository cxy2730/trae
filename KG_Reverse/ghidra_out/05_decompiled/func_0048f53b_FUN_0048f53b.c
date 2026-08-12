// Function: FUN_0048f53b
// Entry:    0048f53b
// Size:     28 bytes
// Conv:     unknown
// Signature: undefined FUN_0048f53b(void)
// Decompiled by Ghidra 12.1.2


bool FUN_0048f53b(LPVOID param_1,UINT_PTR param_2)

{
  BOOL BVar1;
  
  BVar1 = IsBadWritePtr(param_1,param_2);
  return BVar1 == 0;
}

