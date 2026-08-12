// Function: FUN_004751f0
// Entry:    004751f0
// Size:     53 bytes
// Conv:     unknown
// Signature: undefined FUN_004751f0(void)
// Decompiled by Ghidra 12.1.2


int FUN_004751f0(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  while( true ) {
    if (param_2 <= param_3) {
      return 0;
    }
    iVar1 = FUN_00475230(param_1,param_3 + param_1);
    if (iVar1 != 0) break;
    param_3 = param_3 + 1;
  }
  return param_3;
}

