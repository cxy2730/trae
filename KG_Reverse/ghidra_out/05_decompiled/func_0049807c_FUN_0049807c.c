// Function: FUN_0049807c
// Entry:    0049807c
// Size:     267 bytes
// Conv:     unknown
// Signature: undefined FUN_0049807c(void)
// Decompiled by Ghidra 12.1.2


bool __thiscall FUN_0049807c(int param_1,int param_2)

{
  BOOL BVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 1) {
    iVar3 = *(int *)(param_1 + 0x1c);
    if ((iVar3 != 0) && (*(HWND *)(iVar3 + 0x1c) != (HWND)0x0)) {
      BVar1 = IsWindowVisible(*(HWND *)(iVar3 + 0x1c));
      if (BVar1 != 0) {
        FUN_004949e7(iVar3,*(undefined4 *)(iVar3 + 0x1c),0x363,1,0);
        FUN_00496292(*(undefined4 *)(iVar3 + 0x1c),0x363,1,0,1,1);
      }
    }
    FUN_0049c724();
    iVar2 = FUN_0049ccac(&LAB_0049c796);
    for (iVar2 = *(int *)(iVar2 + 8); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x54)) {
      if ((*(int *)(iVar2 + 0x1c) != 0) && (iVar2 != iVar3)) {
        if (*(int *)(iVar2 + 0x88) == 0) {
          FUN_00497580(0);
        }
        BVar1 = IsWindowVisible(*(HWND *)(iVar2 + 0x1c));
        if ((BVar1 != 0) || (-1 < *(int *)(iVar2 + 0x88))) {
          FUN_004949e7(iVar2,*(undefined4 *)(iVar2 + 0x1c),0x363,1,0);
          FUN_00496292(*(undefined4 *)(iVar2 + 0x1c),0x363,1,0,1,1);
        }
        if (0 < *(int *)(iVar2 + 0x88)) {
          FUN_00497580(*(int *)(iVar2 + 0x88));
        }
        *(undefined4 *)(iVar2 + 0x88) = 0xffffffff;
      }
    }
  }
  else {
    FUN_0049c724();
    iVar3 = FUN_0049ccac(&LAB_0049c796);
    if (*(int *)(iVar3 + 0x10) == 0) {
      FUN_00498abd();
      FUN_00498ac6(1);
    }
  }
  return param_2 < 0;
}

