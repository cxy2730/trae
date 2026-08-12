// Function: FUN_0049b221
// Entry:    0049b221
// Size:     46 bytes
// Conv:     unknown
// Signature: undefined FUN_0049b221(void)
// Decompiled by Ghidra 12.1.2


undefined4 __thiscall
FUN_0049b221(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  
  if (param_2 == 0x2b) {
    (**(code **)(*param_1 + 0xb8))(param_4);
    uVar1 = 1;
  }
  else {
    uVar1 = FUN_00496508(param_2,param_3,param_4,param_5);
  }
  return uVar1;
}

