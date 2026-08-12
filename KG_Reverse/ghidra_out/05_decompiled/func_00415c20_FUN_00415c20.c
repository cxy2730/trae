// Function: FUN_00415c20
// Entry:    00415c20
// Size:     29 bytes
// Conv:     unknown
// Signature: undefined FUN_00415c20(void)
// Decompiled by Ghidra 12.1.2


uint __thiscall FUN_00415c20(int param_1,uint param_2)

{
  uint uVar1;
  
  if ((param_2 < *(uint *)(param_1 + 0x198)) ||
     (uVar1 = *(uint *)(param_1 + 0x19c), uVar1 <= param_2)) {
    uVar1 = 0;
  }
  return uVar1;
}

