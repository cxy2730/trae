// Function: FUN_00492e57
// Entry:    00492e57
// Size:     34 bytes
// Conv:     unknown
// Signature: undefined FUN_00492e57(void)
// Decompiled by Ghidra 12.1.2


bool FUN_00492e57(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_00492e01(param_1,&param_1);
  if (iVar1 != 0) {
    *param_2 = *(undefined4 *)(iVar1 + 0xc);
  }
  return iVar1 != 0;
}

