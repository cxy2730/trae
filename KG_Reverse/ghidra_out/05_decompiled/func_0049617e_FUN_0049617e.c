// Function: FUN_0049617e
// Entry:    0049617e
// Size:     40 bytes
// Conv:     unknown
// Signature: undefined FUN_0049617e(void)
// Decompiled by Ghidra 12.1.2


undefined4 __fastcall FUN_0049617e(int param_1)

{
  HWND__ *pHVar1;
  undefined4 uVar2;
  HWND__ *pHVar3;
  
  if ((param_1 != 0) &&
     (pHVar1 = *(HWND__ **)(param_1 + 0x1c), *(HWND__ **)(param_1 + 0x1c) != (HWND__ *)0x0)) {
    do {
      pHVar3 = pHVar1;
      pHVar1 = AfxGetParentOwner(pHVar3);
    } while (pHVar1 != (HWND__ *)0x0);
    uVar2 = FUN_00494bb2(pHVar3);
    return uVar2;
  }
  return 0;
}

