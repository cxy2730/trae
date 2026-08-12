// Function: FUN_004902dd
// Entry:    004902dd
// Size:     33 bytes
// Conv:     unknown
// Signature: undefined FUN_004902dd(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_004902dd(uint param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = param_1 + param_2;
  if ((uVar1 < param_1) || (uVar1 < param_2)) {
    uVar2 = 1;
  }
  *param_3 = uVar1;
  return uVar2;
}

