// Function: FUN_004961a6
// Entry:    004961a6
// Size:     65 bytes
// Conv:     unknown
// Signature: undefined FUN_004961a6(void)
// Decompiled by Ghidra 12.1.2


int * __fastcall FUN_004961a6(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  if ((param_1 != (int *)0x0) && (param_1[7] != 0)) {
    iVar2 = (**(code **)(*param_1 + 0xb0))();
    piVar3 = param_1;
    if (iVar2 == 0) {
      param_1 = (int *)FUN_004960fb();
      piVar3 = param_1;
    }
    while (piVar1 = piVar3, piVar1 != (int *)0x0) {
      piVar3 = (int *)FUN_004960fb();
      param_1 = piVar1;
    }
    return param_1;
  }
  return (int *)0x0;
}

