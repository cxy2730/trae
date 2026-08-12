// Function: FUN_00427970
// Entry:    00427970
// Size:     39 bytes
// Conv:     unknown
// Signature: undefined FUN_00427970(void)
// Decompiled by Ghidra 12.1.2


undefined4 __thiscall FUN_00427970(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_004277b0(param_2);
  if (iVar1 != 0) {
    uVar2 = (**(code **)(**(int **)(param_1 + 0xc) + 0x14))(param_2);
    return uVar2;
  }
  return 0;
}

