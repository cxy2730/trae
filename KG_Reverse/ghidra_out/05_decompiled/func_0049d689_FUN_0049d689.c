// Function: FUN_0049d689
// Entry:    0049d689
// Size:     86 bytes
// Conv:     unknown
// Signature: undefined FUN_0049d689(void)
// Decompiled by Ghidra 12.1.2


int FUN_0049d689(char *param_1,LPSTR param_2,int param_3)

{
  char cVar1;
  char *lpString2;
  int iVar2;
  
  lpString2 = param_1;
  for (; *param_1 != '\0'; param_1 = (char *)FUN_004859c8(param_1)) {
    cVar1 = *param_1;
    if (((cVar1 == '\\') || (cVar1 == '/')) || (cVar1 == ':')) {
      lpString2 = (char *)FUN_004859c8(param_1);
    }
  }
  if (param_2 == (LPSTR)0x0) {
    iVar2 = lstrlenA(lpString2);
    iVar2 = iVar2 + 1;
  }
  else {
    lstrcpynA(param_2,lpString2,param_3);
    iVar2 = 0;
  }
  return iVar2;
}

