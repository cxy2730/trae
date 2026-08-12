// Function: FUN_00471c30
// Entry:    00471c30
// Size:     186 bytes
// Conv:     unknown
// Signature: undefined FUN_00471c30(void)
// Decompiled by Ghidra 12.1.2


undefined8 FUN_00471c30(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_00471cf0(param_1);
  iVar1 = FUN_00471d10(0xc);
  if (iVar1 != 0xfff) {
    return 0;
  }
  FUN_00471d10(3);
  iVar1 = FUN_00471d10(1);
  FUN_00471d10(6);
  DAT_0300705c = FUN_00471d10(1);
  FUN_00471d10(1);
  iVar2 = FUN_00471d10(4);
  DAT_03008f48 = *(undefined4 *)(&DAT_02fd2bf0 + iVar2 * 4);
  if (iVar1 == 0) {
    uVar3 = 0x14;
  }
  else {
    uVar3 = 4;
  }
  FUN_00471d10(uVar3);
  FUN_00471d80();
  FUN_00471f90();
  FUN_00472050();
  FUN_00472280();
  (*(code *)PTR_FUN_02fd2c8c)(&DAT_03012a80,param_2,0x24);
  return CONCAT44(DAT_03007060,DAT_03006ef4 + DAT_0300705c);
}

