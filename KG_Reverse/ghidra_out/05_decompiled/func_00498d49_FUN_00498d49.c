// Function: FUN_00498d49
// Entry:    00498d49
// Size:     47 bytes
// Conv:     unknown
// Signature: undefined FUN_00498d49(void)
// Decompiled by Ghidra 12.1.2


undefined4 * __thiscall FUN_00498d49(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    uVar1 = FUN_00498e42(param_2);
    FUN_00498d78(param_2,uVar1);
  }
  return param_1;
}

