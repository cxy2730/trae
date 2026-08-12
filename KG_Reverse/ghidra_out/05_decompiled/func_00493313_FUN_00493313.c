// Function: FUN_00493313
// Entry:    00493313
// Size:     39 bytes
// Conv:     unknown
// Signature: undefined FUN_00493313(void)
// Decompiled by Ghidra 12.1.2


undefined4 __thiscall FUN_00493313(undefined4 param_1,LPCSTR param_2)

{
  int iVar1;
  
  if (param_2 == (LPCSTR)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = lstrlenA(param_2);
  }
  FUN_00493296(iVar1,param_2);
  return param_1;
}

