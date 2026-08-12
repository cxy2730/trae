// Function: FUN_0043cd20
// Entry:    0043cd20
// Size:     126 bytes
// Conv:     unknown
// Signature: undefined FUN_0043cd20(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_0043cd20(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_24 [36];
  
  iVar1 = FUN_0043cda0(local_24,param_3);
  if (iVar1 == 0) {
    uVar2 = FUN_0043d430(param_1,param_2,param_3,local_24,param_4);
    return uVar2;
  }
  if (iVar1 != 1) {
    *(byte *)(param_2 + 0x4b) = *(byte *)(param_2 + 0x4b) | 0x80;
    FUN_004463d0(param_1,s_internal_error_checking_chromati_02fb13f8);
    return 0;
  }
  *(byte *)(param_2 + 0x4b) = *(byte *)(param_2 + 0x4b) | 0x80;
  FUN_004465b0(param_1,s_invalid_chromaticities_02fb13e0);
  return 0;
}

