// Function: FUN_00414360
// Entry:    00414360
// Size:     110 bytes
// Conv:     unknown
// Signature: undefined FUN_00414360(void)
// Decompiled by Ghidra 12.1.2


undefined8 FUN_00414360(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  undefined4 unaff_EDI;
  undefined4 unaff_retaddr;
  undefined4 uStack_20;
  undefined4 local_c;
  undefined4 uStack_8;
  
  local_c = 0;
  uStack_20 = 0;
  iVar2 = FUN_00413290(param_1);
  iVar1 = *(int *)(iVar2 + 0x28);
  uStack_20 = 6;
  pcVar3 = (code *)(**(code **)(iVar2 + 0x2c))();
  local_c = 0;
  uStack_8 = 0;
  (*pcVar3)(param_1,param_3,&local_c);
  FUN_00414800(iVar1 + param_3 * 0x14,unaff_retaddr,&stack0xffffffe8,&uStack_20);
  return CONCAT44(unaff_EDI,uStack_20);
}

