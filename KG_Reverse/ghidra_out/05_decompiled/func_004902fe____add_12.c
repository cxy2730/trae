// Function: ___add_12
// Entry:    004902fe
// Size:     94 bytes
// Conv:     unknown
// Signature: undefined ___add_12(void)
// Decompiled by Ghidra 12.1.2


/* Library Function - Single Match
    ___add_12
   
   Library: Visual Studio 2003 Release */

void ___add_12(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_004902dd(*param_1,*param_2,param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_004902dd(param_1[1],1,param_1 + 1);
    if (iVar1 != 0) {
      param_1[2] = param_1[2] + 1;
    }
  }
  iVar1 = FUN_004902dd(param_1[1],param_2[1],param_1 + 1);
  if (iVar1 != 0) {
    param_1[2] = param_1[2] + 1;
  }
  FUN_004902dd(param_1[2],param_2[2],param_1 + 2);
  return;
}

