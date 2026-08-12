// Function: FUN_0046cc50
// Entry:    0046cc50
// Size:     79 bytes
// Conv:     unknown
// Signature: undefined FUN_0046cc50(void)
// Decompiled by Ghidra 12.1.2


int __thiscall FUN_0046cc50(int *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*(int *)param_1[6] + 0xc))(param_2,param_3);
  if (iVar2 == 0x18) {
    while( true ) {
      (**(code **)(*(int *)param_1[0xb] + 0xc))();
      cVar1 = (**(code **)(*param_1 + 0x1c))();
      if (cVar1 != '\0') break;
      iVar2 = (**(code **)(*(int *)param_1[6] + 0xc))(param_2,param_3);
      if (iVar2 != 0x18) {
        return iVar2;
      }
    }
    iVar2 = 0x1c;
  }
  return iVar2;
}

