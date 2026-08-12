// Function: FUN_00427c30
// Entry:    00427c30
// Size:     69 bytes
// Conv:     unknown
// Signature: undefined FUN_00427c30(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_00427c30(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_00427810(param_2,&param_3);
  if ((iVar1 == 1) && (0 < param_3)) {
    (**(code **)(*(int *)param_1[3] + 0x24))(param_2,param_3,param_4);
    (**(code **)(*param_1 + 4))(1,8,0,0);
  }
  return;
}

