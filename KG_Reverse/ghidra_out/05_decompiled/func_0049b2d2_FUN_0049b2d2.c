// Function: FUN_0049b2d2
// Entry:    0049b2d2
// Size:     103 bytes
// Conv:     unknown
// Signature: undefined FUN_0049b2d2(void)
// Decompiled by Ghidra 12.1.2


undefined4 __thiscall
FUN_0049b2d2(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  
  if (param_2 == 0x2b) {
    (**(code **)(*param_1 + 0xb8))(param_4);
  }
  else if (param_2 == 0x2c) {
    (**(code **)(*param_1 + 0xbc))(param_4);
  }
  else if (param_2 == 0x2d) {
    (**(code **)(*param_1 + 0xc4))(param_4);
  }
  else {
    if (param_2 != 0x39) {
      uVar1 = FUN_00496508(param_2,param_3,param_4,param_5);
      return uVar1;
    }
    uVar1 = (**(code **)(*param_1 + 0xc0))(param_4);
    *param_5 = uVar1;
  }
  return 1;
}

