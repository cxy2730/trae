// Function: FUN_00490d94
// Entry:    00490d94
// Size:     30 bytes
// Conv:     unknown
// Signature: undefined FUN_00490d94(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_00490d94(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0049c724();
  *(char *)(iVar1 + 0x14) = (char)param_1;
  if (param_1 == 0) {
    FUN_0048659b(0xfffffffd);
  }
  return 1;
}

