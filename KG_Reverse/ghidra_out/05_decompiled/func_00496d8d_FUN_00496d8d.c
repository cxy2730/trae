// Function: FUN_00496d8d
// Entry:    00496d8d
// Size:     48 bytes
// Conv:     unknown
// Signature: undefined FUN_00496d8d(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_00496d8d(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = *(uint *)(param_1 + 4);
  if (((uVar1 < 0x100) || (0x108 < uVar1)) && ((uVar1 < 0x200 || (0x209 < uVar1)))) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004973e5(param_1);
  }
  return uVar2;
}

