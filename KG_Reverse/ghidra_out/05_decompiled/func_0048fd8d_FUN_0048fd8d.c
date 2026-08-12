// Function: FUN_0048fd8d
// Entry:    0048fd8d
// Size:     66 bytes
// Conv:     unknown
// Signature: undefined FUN_0048fd8d(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_0048fd8d(uint param_1)

{
  undefined4 *puVar1;
  
  if ((param_1 < DAT_03014fc0) &&
     ((*(byte *)((&DAT_03014ec0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    return *(undefined4 *)((&DAT_03014ec0)[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x24);
  }
  puVar1 = (undefined4 *)FUN_004843ad();
  *puVar1 = 9;
  puVar1 = (undefined4 *)FUN_004843b6();
  *puVar1 = 0;
  return 0xffffffff;
}

