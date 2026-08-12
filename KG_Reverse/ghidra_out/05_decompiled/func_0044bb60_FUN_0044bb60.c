// Function: FUN_0044bb60
// Entry:    0044bb60
// Size:     75 bytes
// Conv:     unknown
// Signature: undefined FUN_0044bb60(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_0044bb60(int param_1,int param_2)

{
  if (param_1 != 0) {
    if ((*(uint *)(param_1 + 0x78) & 0x40) == 0) {
      if ((param_2 != 0) && ((*(byte *)(param_1 + 0x74) & 1) == 0)) {
        FUN_00446650(param_1,s_invalid_before_the_PNG_header_ha_02fb2b14);
        return 0;
      }
      *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) | 0x4000;
      return 1;
    }
    FUN_00446650(param_1,s_invalid_after_png_start_read_ima_02fb2b40);
  }
  return 0;
}

