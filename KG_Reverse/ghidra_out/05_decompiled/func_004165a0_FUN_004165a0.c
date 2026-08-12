// Function: FUN_004165a0
// Entry:    004165a0
// Size:     909 bytes
// Conv:     unknown
// Signature: undefined FUN_004165a0(void)
// Decompiled by Ghidra 12.1.2


int * FUN_004165a0(undefined4 param_1,uint param_2,uint param_3,int param_4,HMENU param_5,
                  HMENU param_6,int param_7,int param_8,int param_9,int param_10,int param_11,
                  int param_12,int param_13,int param_14)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  HGDIOBJ pvVar6;
  WPARAM wParam;
  HMENU pHVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  tagRECT local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar5 = param_14;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049e97a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_00492f17(0x1e4);
  local_4 = 0;
  if (iVar2 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)FUN_00417a30();
  }
  local_4 = 0xffffffff;
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    iVar2 = FUN_00406ef0(param_1,param_2);
    if (iVar2 == 0) {
      (**(code **)(*piVar3 + 4))(1);
      piVar3 = (int *)0x0;
    }
    else {
      piVar3[0x34] = param_13;
      piVar3[0x37] = param_11;
      piVar3[0x38] = param_12;
      param_2 = 0;
      uVar1 = param_3 | 0x2000000;
      if (piVar3[0x11] != 0) {
        if (((*(int *)(piVar3[0x10] + -8) != 0) || (piVar3[0x1b] == 1)) &&
           (uVar1 = param_3 | 0x2c00000, piVar3[0x1b] == 1)) {
          uVar1 = param_3 | 0x2c80000;
        }
        param_3 = uVar1;
        if (param_14 == 0) {
          uVar1 = param_3 | 0x400000;
        }
        else {
          param_2 = 1;
          uVar1 = param_3;
        }
      }
      param_3 = uVar1;
      switch(piVar3[0x11]) {
      case 1:
        param_3 = param_3 | 0x40000;
        break;
      case 3:
        param_3 = param_3 | 0x40000;
      case 4:
        param_2 = param_2 | 0x80;
        break;
      case 5:
        param_3 = param_3 | 0x40000;
      case 6:
        param_2 = param_2 | 0x200;
      }
      if (piVar3[0x19] == 1) {
        param_3 = param_3 | 0x10000;
      }
      if (piVar3[0x1a] == 1) {
        param_3 = param_3 | 0x20000;
      }
      if (param_14 == 0) {
        iVar2 = piVar3[0x1c];
        if (iVar2 == 1) {
          iVar2 = GetSystemMetrics(0);
          param_7 = (iVar2 - param_9) / 2;
          iVar2 = GetSystemMetrics(1);
          param_8 = (iVar2 - param_10) / 2;
        }
        else if (iVar2 == 2) {
          param_3 = param_3 | 0x20000000;
        }
        else if ((iVar2 == 3) && ((param_3 & 0x40000) != 0)) {
          param_3 = param_3 | 0x1000000;
        }
      }
      piVar3[0x35] = param_14;
      if (param_14 == 0) {
        if (param_4 != 0) {
          param_3 = param_3 & 0x3fffffff | 0x80000000;
        }
      }
      else {
        param_3 = param_3 & 0xfffbffff | 0x40000000;
      }
      param_14 = param_4;
      if (((DAT_02fe8638 == 1) || (piVar3[0x2e] == 0)) && ((param_4 == 0 && (DAT_02fe82f4 != 0)))) {
        param_14 = DAT_02fe8614;
      }
      piVar3[0x78] = 0;
      if (iVar5 != 1) {
        param_5 = param_6;
      }
      uVar11 = 0;
      iVar5 = piVar3[0x10];
      iVar2 = param_7;
      iVar8 = param_8;
      iVar9 = param_9;
      iVar10 = param_10;
      uVar4 = FUN_00416950(piVar3[0x33],iVar5,param_3,param_7,param_8,param_9,param_10,param_14,
                           param_5,0);
      iVar5 = FUN_0049510e(param_2,uVar4,iVar5,param_3,iVar2,iVar8,iVar9,iVar10,param_14,param_5,
                           uVar11);
      if (iVar5 == 0) {
        if (param_6 != (HMENU)0x0) {
          DestroyMenu(param_6);
        }
        piVar3 = (int *)0x0;
      }
      else {
        FUN_004169f0();
        GetWindowRect((HWND)piVar3[7],&local_1c);
        if ((local_1c.right - local_1c.left != param_9) ||
           (local_1c.bottom - local_1c.top != param_10)) {
          FUN_004974f0(param_7,param_8,param_9,param_10,1);
        }
        FUN_00416480(piVar3);
        if (piVar3[0x30] != 0) {
          FUN_00418030();
        }
        pvVar6 = GetStockObject(0x11);
        iVar5 = FUN_00499e08(pvVar6);
        wParam = 0;
        if (iVar5 != 0) {
          wParam = *(WPARAM *)(iVar5 + 4);
        }
        SendMessageA((HWND)piVar3[7],0x30,wParam,1);
        if (piVar3[0x31] == 1) {
          SetWindowPos((HWND)piVar3[7],(HWND)0xffffffff,0,0,0,0,0x13);
        }
        if (piVar3[0x1d] == 0) {
          pHVar7 = GetSystemMenu((HWND)piVar3[7],0);
          iVar5 = FUN_0049853e(pHVar7);
          if (iVar5 != 0) {
            DeleteMenu(*(HMENU *)(iVar5 + 4),0xf010,0);
          }
        }
        FUN_004163c0(piVar3);
      }
    }
  }
  ExceptionList = local_c;
  return piVar3;
}

