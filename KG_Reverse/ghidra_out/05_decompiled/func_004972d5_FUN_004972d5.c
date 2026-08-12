// Function: FUN_004972d5
// Entry:    004972d5
// Size:     67 bytes
// Conv:     unknown
// Signature: undefined FUN_004972d5(void)
// Decompiled by Ghidra 12.1.2


undefined4 __thiscall FUN_004972d5(int *param_1,HWND param_2)

{
  int iVar1;
  int *piVar2;
  LONG LVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_00494bf7(param_2);
  uVar4 = 0;
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x50))();
    piVar2 = (int *)(**(code **)(*param_1 + 0x80))();
    LVar3 = FUN_00494ca9();
    LVar3 = SetWindowLongA(param_2,-4,LVar3);
    if (*piVar2 == 0) {
      *piVar2 = LVar3;
    }
    uVar4 = 1;
  }
  return uVar4;
}

