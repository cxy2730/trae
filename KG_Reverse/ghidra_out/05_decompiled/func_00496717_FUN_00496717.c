// Function: FUN_00496717
// Entry:    00496717
// Size:     83 bytes
// Conv:     unknown
// Signature: undefined FUN_00496717(void)
// Decompiled by Ghidra 12.1.2


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00496717(CWnd *param_1)

{
  int iVar1;
  CWinThread *pCVar2;
  
  iVar1 = FUN_0049c724();
  if (*(char *)(iVar1 + 0x14) == '\0') {
    iVar1 = FUN_0049cd41(&LAB_0049c3a6);
    pCVar2 = AfxGetThread();
    if (pCVar2 != (CWinThread *)0x0) {
      pCVar2 = AfxGetThread();
      if ((*(CWnd **)(pCVar2 + 0x1c) == param_1) && (*(code **)(iVar1 + 0x24) != (code *)0x0)) {
        (**(code **)(iVar1 + 0x24))();
      }
    }
  }
  _DAT_0300f27c = 0;
  CWnd::OnDisplayChange(param_1,0,0);
  return;
}

