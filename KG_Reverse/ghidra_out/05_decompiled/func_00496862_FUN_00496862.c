// Function: FUN_00496862
// Entry:    00496862
// Size:     42 bytes
// Conv:     unknown
// Signature: undefined FUN_00496862(void)
// Decompiled by Ghidra 12.1.2


int FUN_00496862(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_00496464(*(undefined4 *)(param_2 + 4),&param_2);
  if (iVar1 == 0) {
    param_2 = FUN_00494b19();
  }
  return param_2;
}

