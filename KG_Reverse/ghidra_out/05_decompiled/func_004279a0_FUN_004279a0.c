// Function: FUN_004279a0
// Entry:    004279a0
// Size:     51 bytes
// Conv:     unknown
// Signature: undefined FUN_004279a0(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_004279a0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_004277b0(param_2);
  if (iVar1 != 0) {
    (**(code **)(**(int **)(param_1 + 0xc) + 100))(param_2,param_3);
    return;
  }
  FUN_00493161();
  return;
}

