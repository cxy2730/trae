// Function: FUN_00423d80
// Entry:    00423d80
// Size:     471 bytes
// Conv:     unknown
// Signature: undefined FUN_00423d80(void)
// Decompiled by Ghidra 12.1.2


undefined * __thiscall FUN_00423d80(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int w;
  int iVar5;
  int h;
  int iVar6;
  int local_34;
  int local_30;
  tagRECT local_10;
  
  GetClientRect(*(HWND *)(param_1 + 0x1c),&local_10);
  w = local_10.right - local_10.left;
  h = local_10.bottom - local_10.top;
  if ((param_1 + 0xf8 != 0) && (*(int *)(param_1 + 0xfc) != 0)) {
    uVar4 = FUN_00499471(param_1 + 0xf8);
    PatBlt(*(HDC *)(param_2 + 4),local_10.left,local_10.top,w,h,0xf00021);
    FUN_00499471(uVar4);
  }
  piVar1 = *(int **)(param_1 + 0xf4);
  if (piVar1 != (int *)0x0) {
    if ((*(int *)(param_1 + 0x100) == 1) && (*piVar1 == 5)) {
      FUN_00437570(param_2);
      return &DAT_01335437;
    }
    local_30 = 0;
    local_34 = 0;
    if (*(int *)(param_1 + 0xd0) == 2) {
      iVar2 = piVar1[1];
      iVar3 = piVar1[2];
      iVar5 = w;
      if (iVar2 <= w) {
        local_30 = (w - iVar2) / 2;
        iVar5 = iVar2;
      }
      iVar6 = h;
      if (iVar3 <= h) {
        local_34 = (h - iVar3) / 2;
        iVar6 = iVar3;
      }
      if ((iVar5 < iVar2) || (h = iVar3, w = iVar2, iVar6 < iVar3)) {
        w = __ftol();
        h = __ftol();
        local_30 = local_30 + (iVar5 - w) / 2;
        local_34 = local_34 + (iVar6 - h) / 2;
      }
    }
    else if (*(int *)(param_1 + 0xd0) == 0) {
      w = -1;
      h = -1;
    }
    FUN_00422ee0(piVar1,param_2,local_30,local_34,w,h,*(undefined4 *)(param_1 + 0xdc));
  }
  return &DAT_01335437;
}

