// Function: FUN_00493244
// Entry:    00493244
// Size:     82 bytes
// Conv:     unknown
// Signature: undefined FUN_00493244(void)
// Decompiled by Ghidra 12.1.2


undefined4 * __thiscall FUN_00493244(undefined4 *param_1,LPCSTR param_2)

{
  int iVar1;
  
  *param_1 = PTR_DAT_02fd8088;
  if (param_2 != (LPCSTR)0x0) {
    if ((short)((uint)param_2 >> 0x10) == 0) {
      FUN_00498a12((uint)param_2 & 0xffff);
    }
    else {
      iVar1 = lstrlenA(param_2);
      if (iVar1 != 0) {
        FUN_00493043(iVar1);
        FUN_00485580(*param_1,param_2,iVar1);
      }
    }
  }
  return param_1;
}

