// Function: FUN_0046de10
// Entry:    0046de10
// Size:     100 bytes
// Conv:     unknown
// Signature: undefined FUN_0046de10(void)
// Decompiled by Ghidra 12.1.2


int __thiscall FUN_0046de10(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 0x24) == '\0') {
    iVar1 = FUN_0048465b(param_2,1,param_3,param_4);
    return iVar1;
  }
  uVar2 = FUN_00484c9e(param_4);
  iVar1 = FUN_0048465b(param_2,1,param_3,param_4);
  if (iVar1 != 0) {
    FUN_0046e030(uVar2,param_2,iVar1);
  }
  return iVar1;
}

