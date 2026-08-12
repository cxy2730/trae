// Function: FUN_00494971
// Entry:    00494971
// Size:     118 bytes
// Conv:     unknown
// Signature: undefined FUN_00494971(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_00494971(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  HWND pHVar2;
  int iVar3;
  
  if (((param_2 == -2) && (((param_3 == 0x201 || (param_3 == 0x207)) || (param_3 == 0x204)))) &&
     (iVar1 = FUN_0049617e(), iVar1 != 0)) {
    pHVar2 = GetLastActivePopup(*(HWND *)(iVar1 + 0x1c));
    iVar1 = FUN_00494bb2(pHVar2);
    if (iVar1 != 0) {
      pHVar2 = GetForegroundWindow();
      iVar3 = FUN_00494bb2(pHVar2);
      if ((iVar1 != iVar3) && (iVar3 = FUN_004975a7(), iVar3 != 0)) {
        SetForegroundWindow(*(HWND *)(iVar1 + 0x1c));
        return 1;
      }
    }
  }
  return 0;
}

