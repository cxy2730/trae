// Function: FUN_0041d220
// Entry:    0041d220
// Size:     43 bytes
// Conv:     unknown
// Signature: undefined FUN_0041d220(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_0041d220(LPCSTR param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == (LPCSTR)0x0) {
    return 0;
  }
  iVar1 = lstrlenA(param_1);
  iVar1 = iVar1 + 1;
  uVar2 = FUN_004062c0(iVar1 * 2);
  uVar2 = FUN_004936c2(uVar2,param_1,iVar1);
  return uVar2;
}

