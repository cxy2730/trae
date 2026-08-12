// Function: FUN_0048f51f
// Entry:    0048f51f
// Size:     28 bytes
// Conv:     unknown
// Signature: undefined FUN_0048f51f(void)
// Decompiled by Ghidra 12.1.2


bool FUN_0048f51f(void *param_1,UINT_PTR param_2)

{
  BOOL BVar1;
  
  BVar1 = IsBadReadPtr(param_1,param_2);
  return BVar1 == 0;
}

