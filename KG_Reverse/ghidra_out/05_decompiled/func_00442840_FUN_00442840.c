// Function: FUN_00442840
// Entry:    00442840
// Size:     44 bytes
// Conv:     unknown
// Signature: undefined FUN_00442840(void)
// Decompiled by Ghidra 12.1.2


int __thiscall FUN_00442840(undefined4 param_1,double param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = __ftol(param_1);
  iVar2 = iVar1 + 1;
  if (param_2 - (double)iVar1 < 0.1) {
    iVar2 = iVar1;
  }
  return iVar2;
}

