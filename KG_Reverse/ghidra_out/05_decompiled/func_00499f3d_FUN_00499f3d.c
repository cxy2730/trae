// Function: FUN_00499f3d
// Entry:    00499f3d
// Size:     121 bytes
// Conv:     unknown
// Signature: undefined FUN_00499f3d(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_00499f3d(undefined4 param_1,int *param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*param_2 + -8);
  if ((int)uVar1 < 0xff) {
    FUN_004812f8(uVar1 & 0xff);
  }
  else if ((int)uVar1 < 0xfffe) {
    FUN_004812f8(0xff);
    FUN_0048131b(CONCAT22((short)((uint)*param_2 >> 0x10),*(undefined2 *)(*param_2 + -8)));
  }
  else {
    FUN_004812f8(0xff);
    FUN_0048131b(0xffff);
    FUN_00481342(*(undefined4 *)(*param_2 + -8));
  }
  FUN_0049a326(*param_2,*(undefined4 *)(*param_2 + -8));
  return param_1;
}

