// Function: FUN_00494e0e
// Entry:    00494e0e
// Size:     124 bytes
// Conv:     unknown
// Signature: undefined FUN_00494e0e(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_00494e0e(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_0049cd41(&LAB_0049c375);
  if (((*(int *)(iVar1 + 4) != 0) &&
      ((((param_2 == 0x135 || (param_2 == 0x136)) || (param_2 == 0x138)) ||
       ((param_2 == 0x137 || (param_2 == 0x134)))))) &&
     (iVar2 = FUN_00496981(param_3,param_4,param_2 + -0x132,*(int *)(iVar1 + 4),
                           *(undefined4 *)(iVar1 + 8)), iVar2 != 0)) {
    return *(undefined4 *)(iVar1 + 4);
  }
  uVar3 = FUN_00494caf(param_1,param_2,param_3,param_4);
  return uVar3;
}

