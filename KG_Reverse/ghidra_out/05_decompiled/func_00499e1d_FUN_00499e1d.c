// Function: FUN_00499e1d
// Entry:    00499e1d
// Size:     45 bytes
// Conv:     unknown
// Signature: undefined FUN_00499e1d(void)
// Decompiled by Ghidra 12.1.2


bool __thiscall FUN_00499e1d(int param_1,int param_2)

{
  int *piVar1;
  
  if (param_2 != 0) {
    FUN_00499d96(1);
    *(int *)(param_1 + 4) = param_2;
    piVar1 = (int *)FUN_00492b98(param_2);
    *piVar1 = param_1;
  }
  return param_2 != 0;
}

