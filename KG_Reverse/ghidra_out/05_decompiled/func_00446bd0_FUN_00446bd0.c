// Function: FUN_00446bd0
// Entry:    00446bd0
// Size:     43 bytes
// Conv:     unknown
// Signature: undefined FUN_00446bd0(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_00446bd0(undefined4 param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  
  if (param_2 <= (uint)(0xffffffff / (ulonglong)param_3)) {
    uVar1 = FUN_00446b50(param_1,param_2 * param_3);
    return uVar1;
  }
  return 0;
}

