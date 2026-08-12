// Function: FUN_0044ca80
// Entry:    0044ca80
// Size:     56 bytes
// Conv:     unknown
// Signature: undefined FUN_0044ca80(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_0044ca80(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0043e4c0(&param_2,param_1,param_2,100000);
  if (iVar1 != 0) {
    iVar1 = FUN_0043e590(param_2);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}

