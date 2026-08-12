// Function: FUN_00447f60
// Entry:    00447f60
// Size:     71 bytes
// Conv:     unknown
// Signature: undefined FUN_00447f60(void)
// Decompiled by Ghidra 12.1.2


uint FUN_00447f60(int param_1,byte *param_2)

{
  uint uVar1;
  
  uVar1 = (((uint)*param_2 * 0x100 + (uint)param_2[1]) * 0x100 + (uint)param_2[2]) * 0x100 +
          (uint)param_2[3];
  if (0x7fffffff < uVar1) {
    if (param_1 != 0) {
      FUN_00446560(param_1,s_PNG_fixed_point_integer_out_of_r_02fb2634);
    }
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

