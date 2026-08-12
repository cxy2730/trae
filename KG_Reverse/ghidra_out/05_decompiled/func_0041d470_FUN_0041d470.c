// Function: FUN_0041d470
// Entry:    0041d470
// Size:     87 bytes
// Conv:     unknown
// Signature: undefined FUN_0041d470(void)
// Decompiled by Ghidra 12.1.2


int __thiscall FUN_0041d470(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 0x14) == '\0') {
    iVar1 = FUN_004939f3(param_2,param_3);
    return iVar1;
  }
  uVar2 = FUN_00493aa7();
  iVar1 = FUN_004939f3(param_2,param_3);
  if (iVar1 != 0) {
    FUN_0041d700(uVar2,param_2,iVar1,1);
  }
  return iVar1;
}

