// Function: FUN_00447830
// Entry:    00447830
// Size:     71 bytes
// Conv:     unknown
// Signature: undefined FUN_00447830(void)
// Decompiled by Ghidra 12.1.2


uint FUN_00447830(undefined4 param_1,undefined1 *param_2)

{
  uint uVar1;
  
  uVar1 = ((uint)CONCAT11(*param_2,param_2[1]) * 0x100 + (uint)(byte)param_2[2]) * 0x100 +
          (uint)(byte)param_2[3];
  if (0x7fffffff < uVar1) {
    FUN_004463d0(param_1,s_PNG_unsigned_integer_out_of_rang_02fb2540);
  }
  return uVar1;
}

