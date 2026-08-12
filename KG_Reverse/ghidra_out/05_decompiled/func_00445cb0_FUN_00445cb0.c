// Function: FUN_00445cb0
// Entry:    00445cb0
// Size:     86 bytes
// Conv:     unknown
// Signature: undefined FUN_00445cb0(void)
// Decompiled by Ghidra 12.1.2


int FUN_00445cb0(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  if ((param_1[4] != 200) && (param_1[4] != 0xc9)) {
    (**(code **)*param_1)(param_1);
  }
  iVar1 = FUN_00445d10(param_1);
  if (iVar1 == 1) {
    iVar1 = 1;
  }
  else if (iVar1 == 2) {
    if (param_2 != 0) {
      (**(code **)*param_1)(param_1);
    }
    FUN_00454040(param_1);
    return 2;
  }
  return iVar1;
}

