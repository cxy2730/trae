// Function: FUN_00494bf7
// Entry:    00494bf7
// Size:     57 bytes
// Conv:     unknown
// Signature: undefined FUN_00494bf7(void)
// Decompiled by Ghidra 12.1.2


bool __thiscall FUN_00494bf7(int param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  
  if (param_2 != 0) {
    uVar1 = FUN_00494b40(1);
    *(int *)(param_1 + 0x1c) = param_2;
    piVar2 = (int *)FUN_00492b98(param_2);
    *piVar2 = param_1;
    FUN_0049760a(uVar1);
  }
  return param_2 != 0;
}

