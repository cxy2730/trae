// Function: FUN_00484046
// Entry:    00484046
// Size:     37 bytes
// Conv:     unknown
// Signature: undefined FUN_00484046(void)
// Decompiled by Ghidra 12.1.2


int FUN_00484046(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1 / param_2;
  if ((param_1 < 0) && (0 < param_1 % param_2)) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

