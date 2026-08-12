// Function: FUN_004233c0
// Entry:    004233c0
// Size:     85 bytes
// Conv:     unknown
// Signature: undefined FUN_004233c0(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_004233c0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_10 [16];
  
  FUN_004937c4();
  iVar1 = FUN_004938d6(param_1,0x8020,0);
  if (iVar1 == 0) {
    FUN_00493819();
    return 0;
  }
  uVar2 = FUN_00424c00(local_10);
  FUN_00493819();
  return uVar2;
}

