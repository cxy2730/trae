// Function: FUN_00431290
// Entry:    00431290
// Size:     103 bytes
// Conv:     unknown
// Signature: undefined FUN_00431290(void)
// Decompiled by Ghidra 12.1.2


int FUN_00431290(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = FUN_00430fe0(param_1,param_2,1);
  if (iVar2 == 0) {
    if (*(int *)(param_3 + 0x10) == 0) {
      FUN_004065a0(param_2);
      return 0;
    }
    puVar1 = *(undefined4 **)(param_3 + 8);
    iVar2 = FUN_00430fe0(param_1,*puVar1,0);
    if (iVar2 == 0) {
      *puVar1 = param_2;
      return 0;
    }
    FUN_00430fe0(param_1,param_2,0);
  }
  return iVar2;
}

