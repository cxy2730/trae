// Function: FUN_004843bf
// Entry:    004843bf
// Size:     49 bytes
// Conv:     unknown
// Signature: undefined FUN_004843bf(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_004843bf(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0048cd21();
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_0048cbb1(param_1,param_2,param_3,iVar1);
  FUN_00483b6b(iVar1);
  return uVar2;
}

