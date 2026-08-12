// Function: FUN_00496219
// Entry:    00496219
// Size:     121 bytes
// Conv:     unknown
// Signature: undefined FUN_00496219(void)
// Decompiled by Ghidra 12.1.2


int FUN_00496219(HWND param_1,int param_2,int param_3)

{
  HWND pHVar1;
  HWND pHVar2;
  int iVar3;
  
  pHVar1 = GetDlgItem(param_1,param_2);
  if (pHVar1 != (HWND)0x0) {
    pHVar2 = GetTopWindow(pHVar1);
    if ((pHVar2 != (HWND)0x0) && (iVar3 = FUN_00496219(pHVar1,param_2,param_3), iVar3 != 0)) {
      return iVar3;
    }
    if (param_3 == 0) {
      iVar3 = FUN_00494bb2(pHVar1);
      return iVar3;
    }
    iVar3 = FUN_00494bd9(pHVar1);
    if (iVar3 != 0) {
      return iVar3;
    }
  }
  pHVar1 = GetTopWindow(param_1);
  while( true ) {
    if (pHVar1 == (HWND)0x0) {
      return 0;
    }
    iVar3 = FUN_00496219(pHVar1,param_2,param_3);
    if (iVar3 != 0) break;
    pHVar1 = GetWindow(pHVar1,2);
  }
  return iVar3;
}

