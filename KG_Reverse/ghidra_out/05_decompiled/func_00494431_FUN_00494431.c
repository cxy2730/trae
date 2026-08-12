// Function: FUN_00494431
// Entry:    00494431
// Size:     136 bytes
// Conv:     unknown
// Signature: undefined FUN_00494431(void)
// Decompiled by Ghidra 12.1.2


int __fastcall FUN_00494431(int *param_1)

{
  int *piVar1;
  int iVar2;
  HWND pHVar3;
  int iVar4;
  
  (**(code **)(*param_1 + 0xcc))();
  iVar2 = FUN_0049c724();
  piVar1 = *(int **)(iVar2 + 0x1038);
  if ((piVar1 != (int *)0x0) && (iVar2 = param_1[0x16], iVar2 != 0)) {
    if (param_1[0x13] == 0) {
      iVar2 = (**(code **)(*piVar1 + 0x20))(param_1,param_1[0x10],iVar2);
    }
    else {
      iVar2 = (**(code **)(*piVar1 + 0x1c))(param_1,param_1[0x13],iVar2);
    }
    if (iVar2 == 0) {
      FUN_004943ea(0xffffffff);
      return 0;
    }
  }
  iVar2 = FUN_00494b19();
  if ((iVar2 != 0) && ((*(byte *)((int)param_1 + 0x25) & 1) != 0)) {
    pHVar3 = GetNextDlgTabItem((HWND)param_1[7],(HWND)0x0,0);
    iVar4 = FUN_00494bb2(pHVar3);
    if (iVar4 != 0) {
      FUN_004975e9();
      iVar2 = 0;
    }
  }
  return iVar2;
}

