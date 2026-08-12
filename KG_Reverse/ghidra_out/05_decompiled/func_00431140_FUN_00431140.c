// Function: FUN_00431140
// Entry:    00431140
// Size:     85 bytes
// Conv:     unknown
// Signature: undefined FUN_00431140(void)
// Decompiled by Ghidra 12.1.2


int FUN_00431140(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(uint *)(param_3 + 0x10) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_3 + 8);
  }
  iVar1 = FUN_00406c00(uVar2,*(uint *)(param_3 + 0x10) >> 2,param_2);
  if (iVar1 != -1) {
    return 0;
  }
  iVar1 = FUN_00430fe0(param_1,param_2,1);
  if (iVar1 == 0) {
    FUN_004065a0(param_2);
  }
  return iVar1;
}

