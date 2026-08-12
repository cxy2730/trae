// Function: FUN_0043f250
// Entry:    0043f250
// Size:     53 bytes
// Conv:     unknown
// Signature: undefined FUN_0043f250(void)
// Decompiled by Ghidra 12.1.2


void FUN_0043f250(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    if ((*(byte *)(param_1 + 0x78) & 0x40) == 0) {
      FUN_0044b770(param_1);
      FUN_0044cca0(param_1,param_2);
      return;
    }
    FUN_00446650(param_1,s_png_read_update_info_png_start_r_02fb1a50);
  }
  return;
}

