// Function: FUN_004299c0
// Entry:    004299c0
// Size:     38 bytes
// Conv:     unknown
// Signature: undefined FUN_004299c0(void)
// Decompiled by Ghidra 12.1.2


uint __thiscall FUN_004299c0(uint *param_1,uint *param_2)

{
  if ((*param_1 & 0x18000) == 0) {
    *param_2 = 0;
    return 0;
  }
  *param_2 = param_1[0xd];
  return param_1[0xc];
}

