// Function: FUN_00427930
// Entry:    00427930
// Size:     39 bytes
// Conv:     unknown
// Signature: undefined FUN_00427930(void)
// Decompiled by Ghidra 12.1.2


undefined4 __thiscall FUN_00427930(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00427780(param_2);
  if (iVar1 != 0) {
    uVar2 = (**(code **)(**(int **)(param_1 + 0xc) + 0xc))(param_2);
    return uVar2;
  }
  return 0;
}

