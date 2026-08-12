// Function: FUN_00430c50
// Entry:    00430c50
// Size:     63 bytes
// Conv:     unknown
// Signature: undefined FUN_00430c50(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_00430c50(undefined4 param_1,int param_2)

{
  int iVar1;
  DWORD DVar2;
  
  iVar1 = FUN_0041ce50(param_1);
  if ((iVar1 != 1) || (DAT_02fe8ca8 == 0)) {
    return 0;
  }
  if ((DAT_02fe8ca8 != 0xffffffff) && (DVar2 = GetTickCount(), DAT_02fe8ca8 < DVar2 - param_2)) {
    return 0;
  }
  return 1;
}

