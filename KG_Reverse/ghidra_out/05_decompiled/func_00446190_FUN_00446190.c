// Function: FUN_00446190
// Entry:    00446190
// Size:     134 bytes
// Conv:     unknown
// Signature: undefined FUN_00446190(void)
// Decompiled by Ghidra 12.1.2


int FUN_00446190(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  
  piVar1 = param_1;
  if (param_1[4] != 0xcd) {
    (**(code **)*param_1)(param_1);
  }
  if ((uint)piVar1[0x1d] <= (uint)piVar1[0x23]) {
    (**(code **)(*piVar1 + 4))(piVar1,0xffffffff);
    return 0;
  }
  if (piVar1[2] != 0) {
    *(int *)(piVar1[2] + 4) = piVar1[0x23];
    *(int *)(piVar1[2] + 8) = piVar1[0x1d];
    (**(code **)piVar1[2])(piVar1);
  }
  param_1 = (int *)0x0;
  (**(code **)(piVar1[0x69] + 4))(piVar1,param_2,&param_1,param_3);
  piVar1[0x23] = piVar1[0x23] + (int)param_1;
  return (int)param_1;
}

