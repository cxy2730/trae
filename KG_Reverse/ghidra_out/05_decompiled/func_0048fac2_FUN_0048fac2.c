// Function: FUN_0048fac2
// Entry:    0048fac2
// Size:     105 bytes
// Conv:     unknown
// Signature: undefined FUN_0048fac2(void)
// Decompiled by Ghidra 12.1.2


int FUN_0048fac2(LPSTR param_1,WCHAR param_2)

{
  LPSTR lpMultiByteStr;
  int iVar1;
  undefined4 *puVar2;
  
  lpMultiByteStr = param_1;
  if (param_1 == (LPSTR)0x0) {
    return 0;
  }
  if (DAT_0301119c == 0) {
    if ((ushort)param_2 < 0x100) {
      *param_1 = (CHAR)param_2;
      return 1;
    }
  }
  else {
    param_1 = (LPSTR)0x0;
    iVar1 = WideCharToMultiByte(DAT_030111ac,0x220,&param_2,1,lpMultiByteStr,DAT_02fd9ac0,
                                (LPCSTR)0x0,(LPBOOL)&param_1);
    if ((iVar1 != 0) && (param_1 == (LPSTR)0x0)) {
      return iVar1;
    }
  }
  puVar2 = (undefined4 *)FUN_004843ad();
  *puVar2 = 0x2a;
  return -1;
}

