// Function: FUN_0041cc40
// Entry:    0041cc40
// Size:     190 bytes
// Conv:     unknown
// Signature: undefined FUN_0041cc40(void)
// Decompiled by Ghidra 12.1.2


HCURSOR FUN_0041cc40(uint *param_1,uint param_2)

{
  LPCSTR lpCursorName;
  HCURSOR pHVar1;
  int iVar2;
  int *piVar3;
  
  if (0 < (int)param_2) {
    if (param_2 < 4) {
      lpCursorName = (LPCSTR)(uint)(byte)*param_1;
    }
    else {
      lpCursorName = (LPCSTR)*param_1;
    }
    if (((lpCursorName != (LPCSTR)0xffffffff) && (10 < param_2)) &&
       (pHVar1 = (HCURSOR)FUN_004248f0(param_1,param_2), pHVar1 != (HCURSOR)0x0)) {
      return pHVar1;
    }
    if ((-1 < (int)lpCursorName) && ((int)lpCursorName < DAT_02fab724)) {
      lpCursorName = (LPCSTR)(&DAT_02fab6e8)[(int)lpCursorName];
    }
    if (lpCursorName != (LPCSTR)0x0) {
      if (lpCursorName == (LPCSTR)0x7f89) {
        iVar2 = FUN_0049c724();
        pHVar1 = LoadCursorA(*(HINSTANCE *)(iVar2 + 8),(LPCSTR)0x408);
        return pHVar1;
      }
      if (lpCursorName == (LPCSTR)0xffffffff) {
        if (0 < (int)(param_2 - 4)) {
          pHVar1 = (HCURSOR)FUN_004248f0(param_1 + 1,param_2 - 4);
          return pHVar1;
        }
      }
      else {
        iVar2 = 0;
        if (0 < DAT_02fab724) {
          piVar3 = &DAT_02fab6e8;
          do {
            if (lpCursorName == (LPCSTR)*piVar3) {
              pHVar1 = LoadCursorA((HINSTANCE)0x0,lpCursorName);
              return pHVar1;
            }
            iVar2 = iVar2 + 1;
            piVar3 = piVar3 + 1;
          } while (iVar2 < DAT_02fab724);
        }
      }
    }
  }
  return (HCURSOR)0x0;
}

