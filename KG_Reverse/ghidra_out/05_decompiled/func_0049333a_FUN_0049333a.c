// Function: FUN_0049333a
// Entry:    0049333a
// Size:     65 bytes
// Conv:     unknown
// Signature: undefined FUN_0049333a(void)
// Decompiled by Ghidra 12.1.2


undefined4 * __thiscall FUN_0049333a(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_00483fb7(param_2);
  }
  FUN_004931ad(iVar1 * 2);
  FUN_0049368c(*param_1,param_2,iVar1 * 2 + 1);
  FUN_00493609(0xffffffff);
  return param_1;
}

