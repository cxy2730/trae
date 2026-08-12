// Function: FUN_00481a2a
// Entry:    00481a2a
// Size:     86 bytes
// Conv:     unknown
// Signature: undefined FUN_00481a2a(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_00481a2a(int *param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00481952();
  if (iVar1 == 0) {
    if (((param_2 & 3) == 0) &&
       ((((param_1[2] < 1 || (param_1[3] < 1)) || (iVar1 = GetSystemMetrics(0), iVar1 <= *param_1))
        || (iVar1 = GetSystemMetrics(1), iVar1 <= param_1[1])))) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0x12340042;
    }
    return uVar2;
  }
  uVar2 = (*DAT_03010bb0)(param_1,param_2);
  return uVar2;
}

