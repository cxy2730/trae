// Function: FUN_004297b0
// Entry:    004297b0
// Size:     33 bytes
// Conv:     unknown
// Signature: undefined FUN_004297b0(void)
// Decompiled by Ghidra 12.1.2


uint __fastcall FUN_004297b0(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if ((uVar1 & 0x10000) != 0) {
    return 3;
  }
  if ((uVar1 & 0x8000) != 0) {
    return 2;
  }
  return uVar1 >> 0x11 & 1;
}

