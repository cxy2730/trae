// Function: FUN_0046dd10
// Entry:    0046dd10
// Size:     52 bytes
// Conv:     unknown
// Signature: undefined FUN_0046dd10(void)
// Decompiled by Ghidra 12.1.2


undefined4 __fastcall FUN_0046dd10(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x154) == 0) {
    piVar1 = (int *)FUN_0046ba50();
    *(int **)(param_1 + 0x154) = piVar1;
    if (piVar1 == (int *)0x0) {
      return 0x1a;
    }
    (**(code **)(*piVar1 + 4))(&LAB_0046dd50,param_1);
  }
  return 0;
}

