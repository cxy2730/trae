// Function: FUN_0046cca0
// Entry:    0046cca0
// Size:     61 bytes
// Conv:     unknown
// Signature: undefined FUN_0046cca0(void)
// Decompiled by Ghidra 12.1.2


undefined4 __thiscall FUN_0046cca0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xa4) != 0) {
    FUN_00492f40(*(undefined4 *)(param_1 + 0xa8));
    *(undefined4 *)(param_1 + 0xa8) = 0;
    return 0;
  }
  uVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0x10))(param_2);
  return uVar1;
}

