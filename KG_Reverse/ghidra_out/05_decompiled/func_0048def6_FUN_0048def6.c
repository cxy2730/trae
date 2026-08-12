// Function: FUN_0048def6
// Entry:    0048def6
// Size:     36 bytes
// Conv:     unknown
// Signature: undefined FUN_0048def6(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_0048def6(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  do {
    *param_1 = *param_1 + 1;
    uVar1 = FUN_0048dec5(param_2);
    iVar2 = FUN_00482d59(uVar1);
  } while (iVar2 != 0);
  return uVar1;
}

