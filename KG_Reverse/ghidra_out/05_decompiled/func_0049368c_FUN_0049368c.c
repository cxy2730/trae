// Function: FUN_0049368c
// Entry:    0049368c
// Size:     54 bytes
// Conv:     unknown
// Signature: undefined FUN_0049368c(void)
// Decompiled by Ghidra 12.1.2


int FUN_0049368c(LPSTR param_1,LPCWSTR param_2,int param_3)

{
  int iVar1;
  
  if ((param_3 == 0) && (param_1 != (LPSTR)0x0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = WideCharToMultiByte(0,0,param_2,-1,param_1,param_3,(LPCSTR)0x0,(LPBOOL)0x0);
    if (0 < iVar1) {
      param_1[iVar1 + -1] = '\0';
    }
  }
  return iVar1;
}

