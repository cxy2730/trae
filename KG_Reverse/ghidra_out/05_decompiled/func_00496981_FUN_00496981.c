// Function: FUN_00496981
// Entry:    00496981
// Size:     117 bytes
// Conv:     unknown
// Signature: undefined FUN_00496981(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_00496981(HDC param_1,undefined4 param_2,int param_3,HANDLE param_4,COLORREF param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_10 [4];
  COLORREF local_c;
  
  if ((((param_1 == (HDC)0x0) || (param_4 == (HANDLE)0x0)) || (param_3 == 1)) ||
     ((param_3 == 0 || (param_3 == 5)))) {
LAB_004969f0:
    uVar2 = 0;
  }
  else {
    if (param_3 == 2) {
      iVar1 = FUN_0049a66a(param_2,2);
      if (iVar1 == 0) goto LAB_004969f0;
    }
    GetObjectA(param_4,0xc,local_10);
    SetBkColor(param_1,local_c);
    if (param_5 == 0xffffffff) {
      param_5 = GetSysColor(8);
    }
    SetTextColor(param_1,param_5);
    uVar2 = 1;
  }
  return uVar2;
}

