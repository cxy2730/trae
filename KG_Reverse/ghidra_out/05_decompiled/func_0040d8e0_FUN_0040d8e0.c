// Function: FUN_0040d8e0
// Entry:    0040d8e0
// Size:     552 bytes
// Conv:     unknown
// Signature: undefined FUN_0040d8e0(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_0040d8e0(int param_1,int param_2)

{
  HGDIOBJ pvVar1;
  COLORREF CVar2;
  int iVar3;
  COLORREF CVar4;
  undefined4 uVar5;
  int iVar6;
  HGDIOBJ pvVar7;
  
  if (*(HDC *)(param_1 + 0x24c) == (HDC)0x0) {
    return;
  }
  iVar3 = param_1 + 0x260;
  if ((iVar3 == 0) || (*(int *)(param_1 + 0x264) == 0)) {
    (**(code **)(*(int *)(param_1 + 0x248) + 0x24))(7);
  }
  else {
    if (iVar3 == 0) {
      pvVar7 = (HGDIOBJ)0x0;
    }
    else {
      pvVar7 = *(HGDIOBJ *)(param_1 + 0x264);
    }
    pvVar1 = GetCurrentObject(*(HDC *)(param_1 + 0x24c),1);
    if (pvVar1 != pvVar7) {
      FUN_00499471(iVar3);
    }
  }
  iVar3 = param_1 + 0x268;
  if ((iVar3 == 0) || (*(int *)(param_1 + 0x26c) == 0)) {
    (**(code **)(*(int *)(param_1 + 0x248) + 0x24))(0);
  }
  else {
    if (iVar3 == 0) {
      pvVar7 = (HGDIOBJ)0x0;
    }
    else {
      pvVar7 = *(HGDIOBJ *)(param_1 + 0x26c);
    }
    pvVar1 = GetCurrentObject(*(HDC *)(param_1 + 0x24c),2);
    if (pvVar1 != pvVar7) {
      FUN_00499471(iVar3);
    }
  }
  iVar3 = param_1 + 0x270;
  if ((iVar3 == 0) || (*(int *)(param_1 + 0x274) == 0)) {
    (**(code **)(*(int *)(param_1 + 0x248) + 0x24))(0x11);
  }
  else {
    if (iVar3 == 0) {
      pvVar7 = (HGDIOBJ)0x0;
    }
    else {
      pvVar7 = *(HGDIOBJ *)(param_1 + 0x274);
    }
    pvVar1 = GetCurrentObject(*(HDC *)(param_1 + 0x24c),6);
    if (pvVar1 != pvVar7) {
      (**(code **)(*(int *)(param_1 + 0x248) + 0x28))(iVar3);
    }
  }
  if (param_2 == 1) {
    CVar4 = *(COLORREF *)(param_1 + 0x5c);
  }
  else {
    CVar4 = *(COLORREF *)(param_1 + 0x58);
  }
  CVar2 = GetTextColor(*(HDC *)(param_1 + 0x250));
  if (CVar2 != CVar4) {
    (**(code **)(*(int *)(param_1 + 0x248) + 0x30))(CVar4);
  }
  if (*(int *)(param_1 + 0x60) == -0x1000000) {
    iVar3 = GetBkMode(*(HDC *)(param_1 + 0x250));
    if (iVar3 != 1) {
      FUN_0049954d(1);
    }
    CVar4 = GetBkColor(*(HDC *)(param_1 + 0x250));
    if (CVar4 == 0xffffff) goto LAB_0040da98;
    iVar3 = *(int *)(param_1 + 0x248);
    CVar4 = 0xffffff;
  }
  else {
    iVar3 = GetBkMode(*(HDC *)(param_1 + 0x250));
    if (iVar3 != 2) {
      FUN_0049954d(2);
    }
    CVar2 = GetBkColor(*(HDC *)(param_1 + 0x250));
    CVar4 = *(COLORREF *)(param_1 + 0x60);
    if (CVar2 == CVar4) goto LAB_0040da98;
    iVar3 = *(int *)(param_1 + 0x248);
  }
  (**(code **)(iVar3 + 0x2c))(CVar4);
LAB_0040da98:
  iVar3 = GetROP2(*(HDC *)(param_1 + 0x250));
  iVar6 = *(int *)(param_1 + 0x48) + 1;
  if (iVar3 != iVar6) {
    FUN_004995a9(iVar6);
  }
  iVar3 = GetStretchBltMode(*(HDC *)(param_1 + 0x250));
  iVar6 = FUN_0041d1e0();
  if (iVar3 != iVar6) {
    uVar5 = FUN_0041d1e0();
    FUN_004995d7(uVar5);
  }
  iVar3 = GetPolyFillMode(*(HDC *)(param_1 + 0x250));
  if (iVar3 != 2) {
    FUN_0049957b(2);
  }
  return;
}

