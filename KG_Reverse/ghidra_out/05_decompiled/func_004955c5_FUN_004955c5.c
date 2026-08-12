// Function: FUN_004955c5
// Entry:    004955c5
// Size:     61 bytes
// Conv:     unknown
// Signature: undefined FUN_004955c5(void)
// Decompiled by Ghidra 12.1.2


void FUN_004955c5(undefined4 param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  if (*param_2 == 1) {
    piVar1 = (int *)FUN_00498553(param_2[5]);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xc))(param_2);
      return;
    }
  }
  else {
    iVar2 = FUN_00496464(param_2[5],0);
    if (iVar2 != 0) {
      return;
    }
  }
  FUN_00494b19();
  return;
}

