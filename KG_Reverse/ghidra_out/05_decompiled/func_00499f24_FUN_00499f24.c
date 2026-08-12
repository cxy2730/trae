// Function: FUN_00499f24
// Entry:    00499f24
// Size:     25 bytes
// Conv:     unknown
// Signature: undefined FUN_00499f24(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_00499f24(void)

{
  uint uVar1;
  undefined4 unaff_EBP;
  int *unaff_retaddr;
  undefined *local_8;
  
  local_8 = &DAT_0300f190;
  __CxxThrowException_8(&local_8,&DAT_02fa31e0);
  uVar1 = *(uint *)(*unaff_retaddr + -8);
  if ((int)uVar1 < 0xff) {
    FUN_004812f8(uVar1 & 0xff);
  }
  else if ((int)uVar1 < 0xfffe) {
    FUN_004812f8(0xff);
    FUN_0048131b(CONCAT22((short)((uint)*unaff_retaddr >> 0x10),*(undefined2 *)(*unaff_retaddr + -8)
                         ));
  }
  else {
    FUN_004812f8(0xff);
    FUN_0048131b(0xffff);
    FUN_00481342(*(undefined4 *)(*unaff_retaddr + -8));
  }
  FUN_0049a326(*unaff_retaddr,*(undefined4 *)(*unaff_retaddr + -8));
  return unaff_EBP;
}

