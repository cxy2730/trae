// Function: FUN_00446cf0
// Entry:    00446cf0
// Size:     45 bytes
// Conv:     unknown
// Signature: undefined FUN_00446cf0(void)
// Decompiled by Ghidra 12.1.2


int FUN_00446cf0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = FUN_00446b50(param_1,param_2);
    if (iVar1 != 0) {
      return iVar1;
    }
    FUN_00446560(param_1,s_Out_of_memory_02fb244c);
  }
  return 0;
}

