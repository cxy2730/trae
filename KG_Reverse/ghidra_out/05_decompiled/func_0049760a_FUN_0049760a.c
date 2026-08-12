// Function: FUN_0049760a
// Entry:    0049760a
// Size:     61 bytes
// Conv:     unknown
// Signature: undefined FUN_0049760a(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_0049760a(int param_1)

{
  HWND pHVar1;
  int iVar2;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x38) == 0)) {
    pHVar1 = GetParent(*(HWND *)(param_1 + 0x1c));
    iVar2 = FUN_00492b65(pHVar1);
    if ((iVar2 != 0) && (*(int **)(iVar2 + 0x34) != (int *)0x0)) {
      (**(code **)(**(int **)(iVar2 + 0x34) + 0x8c))(param_1);
    }
  }
  return;
}

