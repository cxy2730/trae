// Function: FUN_0049afa0
// Entry:    0049afa0
// Size:     76 bytes
// Conv:     unknown
// Signature: undefined FUN_0049afa0(void)
// Decompiled by Ghidra 12.1.2


void FUN_0049afa0(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  HWND pHVar3;
  
  if (*(int *)(param_3 + 0x1c) == 0) {
    uVar1 = FUN_0049af71(param_2);
    iVar2 = FUN_004972d5(uVar1);
    if (iVar2 == 0) {
      FUN_00491343();
    }
    else {
      iVar2 = *(int *)(param_1 + 4);
      pHVar3 = GetParent(*(HWND *)(param_3 + 0x1c));
      if (*(HWND *)(iVar2 + 0x1c) != pHVar3) {
        FUN_00497647(iVar2);
      }
    }
  }
  return;
}

