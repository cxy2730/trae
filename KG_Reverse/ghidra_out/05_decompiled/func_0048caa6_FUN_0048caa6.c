// Function: FUN_0048caa6
// Entry:    0048caa6
// Size:     93 bytes
// Conv:     unknown
// Signature: undefined FUN_0048caa6(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_0048caa6(uint param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if ((param_1 < DAT_03014fc0) &&
     ((*(byte *)((&DAT_03014ec0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_0048fdcf(param_1);
    uVar1 = FUN_0048cb03(param_1);
    FUN_0048fe2e(param_1);
    return uVar1;
  }
  puVar2 = (undefined4 *)FUN_004843ad();
  *puVar2 = 9;
  puVar2 = (undefined4 *)FUN_004843b6();
  *puVar2 = 0;
  return 0xffffffff;
}

