// Function: FUN_004311a0
// Entry:    004311a0
// Size:     89 bytes
// Conv:     unknown
// Signature: undefined FUN_004311a0(void)
// Decompiled by Ghidra 12.1.2


int FUN_004311a0(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(uint *)(param_3 + 0x10) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_3 + 8);
  }
  iVar1 = FUN_00406c00(uVar3,*(uint *)(param_3 + 0x10) >> 2,param_2);
  if (iVar1 != -1) {
    iVar2 = FUN_00430fe0(param_1,param_2,0);
    if (iVar2 != 0) {
      return iVar2;
    }
    FUN_00406b50(iVar1 * 4,4);
  }
  return 0;
}

