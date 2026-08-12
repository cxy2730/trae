// Function: FUN_00427a00
// Entry:    00427a00
// Size:     58 bytes
// Conv:     unknown
// Signature: undefined FUN_00427a00(void)
// Decompiled by Ghidra 12.1.2


undefined4 __thiscall
FUN_00427a00(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_004277e0(param_3,param_4);
  if (iVar1 != 0) {
    uVar2 = (**(code **)(**(int **)(param_1 + 0xc) + 0x20))(param_2,param_3,param_4,param_5);
    return uVar2;
  }
  return 0;
}

