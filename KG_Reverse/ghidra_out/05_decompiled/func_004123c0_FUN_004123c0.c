// Function: FUN_004123c0
// Entry:    004123c0
// Size:     75 bytes
// Conv:     unknown
// Signature: undefined FUN_004123c0(void)
// Decompiled by Ghidra 12.1.2


void FUN_004123c0(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = param_1;
  iVar2 = FUN_0040ec30(param_1,&param_1,0);
  if ((iVar2 != 0) && (iVar2 = FUN_004115c0(param_1,0,1,0,0), iVar2 != 0)) {
    return;
  }
  FUN_00412f90(&DAT_02faad90,0,uVar1,0);
  return;
}

