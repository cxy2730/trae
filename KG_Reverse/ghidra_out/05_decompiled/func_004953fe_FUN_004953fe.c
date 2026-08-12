// Function: FUN_004953fe
// Entry:    004953fe
// Size:     77 bytes
// Conv:     unknown
// Signature: undefined FUN_004953fe(void)
// Decompiled by Ghidra 12.1.2


BOOL __fastcall FUN_004953fe(CWnd *param_1)

{
  int iVar1;
  BOOL BVar2;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    return 0;
  }
  FUN_00494b40(0);
  iVar1 = FUN_00492b65(*(undefined4 *)(param_1 + 0x1c));
  if (*(int **)(param_1 + 0x38) == (int *)0x0) {
    BVar2 = DestroyWindow(*(HWND *)(param_1 + 0x1c));
  }
  else {
    BVar2 = (**(code **)(**(int **)(param_1 + 0x38) + 0x50))();
  }
  if (iVar1 == 0) {
    CWnd::Detach(param_1);
  }
  return BVar2;
}

