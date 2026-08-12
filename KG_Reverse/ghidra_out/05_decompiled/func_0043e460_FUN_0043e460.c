// Function: FUN_0043e460
// Entry:    0043e460
// Size:     85 bytes
// Conv:     unknown
// Signature: undefined FUN_0043e460(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_0043e460(int param_1,int param_2)

{
  int iVar1;
  int local_8;
  undefined4 local_4;
  
  local_4 = 0;
  local_8 = 0;
  iVar1 = FUN_0043e2d0(param_1,param_2,&local_4,&local_8);
  if ((iVar1 != 0) && ((local_8 == param_2 || (*(char *)(local_8 + param_1) == '\0')))) {
    return local_4;
  }
  return 0;
}

